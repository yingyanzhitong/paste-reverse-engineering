/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10099e06c | FUN_10099e06c */

void FUN_10099e06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined1 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_10099e094,0,0);
  return;
}



/* Address: 0x10099e094 | FUN_10099e094 */

void FUN_10099e094(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x22;
  ulong uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar10 = *(ulong *)(unaff_x22 + 0x18);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x60);
  puVar7 = &DAT_100f22ae8;
  _swift_allocObject(&DAT_100f22ae8,0x18,7);
  *(ulong *)(puVar7 + 0x10) = uVar10;
  _swift_retain(uVar10 & 0x3fffffffffffffff);
  uVar8 = 0;
  FUN_10099d528(0,uVar3,uVar5,uVar6,uVar2,uVar4,FUN_1009a13ec,puVar7,uVar1);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar8;
  _swift_release(puVar7);
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_1008e3580;
  FUN_1005da4a4(plVar9,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x10099e180 | FUN_10099e180 */

void FUN_10099e180(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined1 auStack_90 [24];
  undefined8 local_78 [3];
  
  uVar3 = 0;
  local_78[0] = param_1;
  FUN_1009a2af4();
  pcVar4 = "NIOTransportServices/NIOTSListenerBootstrap.swift";
  FUN_100622844("NIOTransportServices/NIOTSListenerBootstrap.swift",0x31,2,0x1fa,uVar3,
                &PTR_PTR_100f23fa0);
  puVar5 = &DAT_100f22bd8;
  _swift_allocObject(&DAT_100f22bd8,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(ulong *)(puVar5 + 0x18) = param_3;
  *(long *)(puVar5 + 0x20) = param_2;
  puVar6 = &DAT_100f22c00;
  _swift_allocObject(&DAT_100f22c00,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_1009a166c;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(char **)(puVar6 + 0x20) = pcVar4;
  uVar7 = *(ulong *)(pcVar4 + 0x20);
  lVar1 = *(long *)(pcVar4 + 0x28);
  _swift_getObjectType();
  pcVar12 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_3 & 0x3fffffffffffffff,2);
  _swift_retain_n(param_2,2);
  _swift_retain_n(puVar5,2);
  _swift_retain_n(pcVar4,2);
  _swift_retain_n(param_1,2);
  uVar8 = uVar7;
  (*pcVar12)(uVar7,lVar1);
  if ((uVar8 & 1) == 0) {
    puVar9 = &DAT_100f22c28;
    _swift_allocObject(&DAT_100f22c28,0x28,7);
    *(char **)(puVar9 + 0x10) = pcVar4;
    *(code **)(puVar9 + 0x18) = thunk_FUN_1006225d4;
    *(undefined **)(puVar9 + 0x20) = puVar6;
    pcVar12 = *(code **)(lVar1 + 0x18);
    _swift_retain(pcVar4);
    _swift_retain(puVar6);
    (*pcVar12)(thunk_FUN_1008db360,puVar9,uVar7,lVar1);
    _swift_release(param_1);
    _swift_release(puVar9);
    _swift_release(pcVar4);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
  }
  else {
    uVar11 = 0;
    _swift_beginAccess(pcVar4 + 0x10,local_78,0,0);
    uVar13 = *(undefined8 *)(pcVar4 + 0x10);
    cVar2 = pcVar4[0x18];
    if (cVar2 == '\x01') {
      uVar7 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      pcVar12 = *(code **)(lVar1 + 0x10);
      FUN_100308524(uVar13,1);
      uVar8 = uVar7;
      lVar10 = lVar1;
      (*pcVar12)(uVar7,lVar1);
      if ((uVar8 & 1) == 0) {
        puVar9 = &DAT_100f22c50;
        _swift_allocObject(&DAT_100f22c50,0x20,7);
        *(long *)(puVar9 + 0x10) = param_2;
        *(undefined8 *)(puVar9 + 0x18) = uVar13;
        pcVar12 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        FUN_1005dfeb4(uVar13,1);
        (*pcVar12)(thunk_FUN_1008d678c,puVar9,uVar7,lVar1);
        _swift_release(puVar9);
      }
      else {
        uVar3 = uVar13;
        thunk_FUN_1005de8f4(uVar13);
        FUN_1006486f8();
        FUN_100004550(uVar3,lVar10);
        _swift_bridgeObjectRelease(uVar11);
      }
      FUN_100308538(uVar13,1);
    }
    else if (cVar2 == -1) {
      _swift_beginAccess(pcVar4 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1006225d4,puVar6);
      _swift_endAccess(auStack_90);
    }
    else {
      FUN_10061d040(param_3,param_2,uVar3,&PTR_PTR_100f24068);
      FUN_100308538(uVar13,cVar2);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_1);
    _swift_release(pcVar4);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(pcVar4);
  _swift_release(param_2);
  _swift_release(param_3 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x10099e4f8 | FUN_10099e4f8 */

void FUN_10099e4f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar6 = 0;
    FUN_1009a2af4(0);
    FUN_10061d040(param_3,param_4,uVar6,&PTR_PTR_100f24068);
    return;
  }
  uVar6 = *param_1;
  uVar2 = *(ulong *)(param_4 + 0x20);
  lVar1 = *(long *)(param_4 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar6);
    FUN_1006486f8();
    FUN_100004550(uVar6,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f22c78;
  _swift_allocObject(&DAT_100f22c78,0x20,7);
  *(long *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_4);
  FUN_100308524(uVar6,1);
  (*pcVar7)(thunk_FUN_1008d678c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10099e630 | FUN_10099e630 */

void FUN_10099e630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined1 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_10099e658,0,0);
  return;
}



/* Address: 0x10099e658 | FUN_10099e658 */

void FUN_10099e658(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  NWEndpoint NVar7;
  undefined7 extraout_var;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  ulong uVar15;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x60);
  NVar7 = Network::NWEndpoint::typeMetadataAccessor();
  lVar13 = *(long *)(CONCAT71(extraout_var,NVar7.value) + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  uVar8 = lVar14 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar13 + 0x10))();
  uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar15 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar9 = &DAT_100f22b10;
  _swift_allocObject(&DAT_100f22b10,uVar15 + lVar14,uVar12 | 7);
  (**(code **)(lVar13 + 0x20))(puVar9 + uVar15,uVar8,CONCAT71(extraout_var,NVar7.value));
  uVar10 = 0;
  FUN_10099d528(0,uVar3,uVar5,uVar6,uVar2,uVar4,FUN_1009a13f8,puVar9,uVar1);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
  _swift_release(puVar9);
  _swift_task_dealloc(uVar8);
  plVar11 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)thunk_FUN_1008e3580;
  FUN_1005da4a4(plVar11,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x10099e798 | FUN_10099e798 */

void FUN_10099e798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  NWEndpoint NVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_b0 [8];
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  char local_88;
  undefined8 local_78 [3];
  long lVar4;
  
  uVar2 = 0;
  local_78[0] = param_1;
  FUN_1009a2af4(0);
  pcVar3 = "NIOTransportServices/NIOTSListenerBootstrap.swift";
  FUN_100622844("NIOTransportServices/NIOTSListenerBootstrap.swift",0x31,2,0x218,uVar2,
                &PTR_PTR_100f23fa0);
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,NVar1.value);
  lVar15 = *(long *)(lVar4 + -8);
  lVar8 = *(long *)(lVar15 + 0x40);
  uVar12 = lVar8 + 0xfU & 0xfffffffffffffff0;
  puVar10 = auStack_b0 + -uVar12;
  pcVar13 = *(code **)(lVar15 + 0x10);
  (*pcVar13)(puVar10,param_3,lVar4);
  lVar11 = (long)puVar10 - uVar12;
  (*pcVar13)(lVar11,puVar10,lVar4);
  uVar12 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar14 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_100f22b38;
  _swift_allocObject(&DAT_100f22b38,uVar9 + 8,uVar12 | 7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  local_a8 = lVar15;
  lStack_a0 = lVar4;
  (**(code **)(lVar15 + 0x20))(puVar5 + uVar14,puVar10,lVar4);
  *(undefined8 *)(puVar5 + uVar9) = param_2;
  puVar6 = &DAT_100f22b60;
  _swift_allocObject(&DAT_100f22b60,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_1009a15e0;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(char **)(puVar6 + 0x20) = pcVar3;
  uVar12 = *(ulong *)(pcVar3 + 0x20);
  lVar4 = *(long *)(pcVar3 + 0x28);
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar4 + 0x10);
  _swift_retain_n(param_1,2);
  local_98 = param_2;
  _swift_retain_n(param_2,2);
  _swift_retain_n(puVar5,2);
  _swift_retain_n(pcVar3,2);
  uVar9 = uVar12;
  (*pcVar13)(uVar12,lVar4);
  if ((uVar9 & 1) == 0) {
    puVar7 = &DAT_100f22b88;
    _swift_allocObject(&DAT_100f22b88,0x28,7);
    *(char **)(puVar7 + 0x10) = pcVar3;
    *(code **)(puVar7 + 0x18) = FUN_1006225d4;
    *(undefined **)(puVar7 + 0x20) = puVar6;
    pcVar13 = *(code **)(lVar4 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar6);
    (*pcVar13)(FUN_1008db360,puVar7,uVar12,lVar4);
    _swift_release(param_1);
    _swift_release(puVar7);
    _swift_release(pcVar3);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
    uVar2 = local_98;
  }
  else {
    _swift_beginAccess(pcVar3 + 0x10,local_78,0,0);
    if (pcVar3[0x18] == -1) {
      _swift_beginAccess(pcVar3 + 0x30,&local_90,0x21,0);
      FUN_10064967c(FUN_1006225d4,puVar6);
      _swift_endAccess(&local_90);
      uVar2 = local_98;
    }
    else {
      local_90 = *(undefined8 *)(pcVar3 + 0x10);
      local_88 = pcVar3[0x18];
      FUN_100308524();
      uVar2 = local_98;
      FUN_10099eac8(&local_90,param_1,lVar11,local_98);
      FUN_1002ec258(local_90,local_88);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_1);
    _swift_release(pcVar3);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  (**(code **)(local_a8 + 8))(lVar11,lStack_a0);
  _swift_release(pcVar3);
  _swift_release(uVar2);
  return;
}



/* Address: 0x10099eac8 | FUN_10099eac8 */

void FUN_10099eac8(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  NWEndpoint NVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined7 extraout_var;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_70 [24];
  undefined8 local_58;
  
  puVar4 = auStack_70;
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar8 = 0;
    FUN_1009a2f9c();
    local_58 = uVar8;
    FUN_10000cbb0(auStack_70);
    NVar1 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x10))
              (puVar4,param_3,CONCAT71(extraout_var,NVar1.value));
    lVar7 = *(long *)(param_2 + 0x48);
    if (lVar7 != 0) {
      _swift_retain(lVar7);
      FUN_1006276a0(auStack_70,param_4);
      _swift_release(lVar7);
      FUN_100004594(auStack_70);
      return;
    }
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10099ec58);
    (*pcVar9)();
  }
  uVar8 = *param_1;
  uVar2 = *(ulong *)(param_4 + 0x20);
  lVar7 = *(long *)(param_4 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar7;
  (**(code **)(lVar7 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar8);
    FUN_1006486f8();
    FUN_100004550(uVar8,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100f22bb0;
  _swift_allocObject(&DAT_100f22bb0,0x20,7);
  *(long *)(puVar5 + 0x10) = param_4;
  *(undefined8 *)(puVar5 + 0x18) = uVar8;
  pcVar9 = *(code **)(lVar7 + 0x18);
  _swift_retain(param_4);
  FUN_100308524(uVar8,1);
  (*pcVar9)(FUN_1008d678c,puVar5,uVar2,lVar7);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10099ec58 | FUN_10099ec58 */

void FUN_10099ec58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined1 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_10099ec80,0,0);
  return;
}



/* Address: 0x10099ec80 | FUN_10099ec80 */

void FUN_10099ec80(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_10099d528(uVar1,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined1 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x30),
                *(undefined8 *)(unaff_x22 + 0x38),thunk_FUN_10099ed08,0,
                *(undefined8 *)(unaff_x22 + 0x40));
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  plVar2 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1008e3580;
  FUN_1005da4a4(plVar2,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x10099ed08 | FUN_10099ed08 */

void FUN_10099ed08(undefined8 param_1,undefined8 param_2)

{
  FUN_1009a5c70(param_2);
  return;
}



/* Address: 0x10099ed2c | FUN_10099ed2c */

void FUN_10099ed2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  
  uVar3 = param_3;
  FUN_100623594(param_3,&PTR_PTR_100f24068,param_2);
  puVar1 = &DAT_100f22d40;
  _swift_allocObject(&DAT_100f22d40,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  _swift_retain();
  _swift_retain(param_5);
  _swift_retain(param_3);
  uVar2 = uVar3;
  FUN_10098029c(uVar3,thunk_FUN_100987108,puVar1);
  _swift_release(uVar3);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f22d68;
  _swift_allocObject(&DAT_100f22d68,0x81,7);
  *(undefined8 *)(puVar1 + 0x10) = param_21;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_8;
  *(undefined8 *)(puVar1 + 0x38) = param_9;
  *(undefined8 *)(puVar1 + 0x40) = param_10;
  puVar1[0x48] = param_11;
  *(undefined8 *)(puVar1 + 0x50) = param_13;
  *(undefined8 *)(puVar1 + 0x58) = param_14;
  *(undefined8 *)(puVar1 + 0x60) = param_15;
  *(undefined8 *)(puVar1 + 0x68) = param_16;
  *(undefined8 *)(puVar1 + 0x70) = param_17;
  *(undefined8 *)(puVar1 + 0x78) = param_18;
  puVar1[0x80] = param_19;
  _swift_retain_n(param_3,2);
  FUN_100011128(param_6,param_7);
  uVar3 = 0;
  FUN_1005e3ae8(0,param_21,PTR___type_metadata_for_Swift_Never_100eadc38);
  _swift_bridgeObjectRetain(param_8);
  _swift_retain(param_14);
  _swift_retain(param_15);
  _swift_retain(param_17);
  pcVar4 = FUN_1009a1ca4;
  thunk_FUN_10064a5bc(FUN_1009a1ca4,puVar1,uVar3);
  _swift_release(uVar2);
  _swift_release(puVar1);
  puVar1 = &DAT_100f22d90;
  _swift_allocObject(&DAT_100f22d90,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_21;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_15;
  _swift_retain(param_15);
  pcVar5 = FUN_1009a1cf0;
  FUN_100649240(FUN_1009a1cf0,puVar1);
  _swift_release(pcVar4);
  _swift_release(puVar1);
  *param_1 = pcVar5;
  return;
}



/* Address: 0x10099ef70 | FUN_10099ef70 */

/* WARNING: Removing unreachable block (ram,0x00010099f110) */
/* WARNING: Removing unreachable block (ram,0x00010099f118) */

code * FUN_10099ef70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,code *param_11,code *param_12,
                    undefined4 param_13,undefined4 param_14,undefined *param_15,char param_16,
                    undefined4 param_17,undefined8 param_18)

{
  char cVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined8 auStack_110 [2];
  undefined1 auStack_100 [8];
  undefined8 *local_f8;
  code *local_f0;
  ulong local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  lVar15 = *(long *)(param_2 + 0x48);
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10099f53c);
    (*pcVar11)();
  }
  local_a8 = param_11;
  puVar3 = &DAT_100ff1f30;
  FUN_1000f7830(&DAT_100ff1f30,&DAT_100c8afa0);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  _swift_retain(lVar15);
  FUN_100011128(param_3,param_4);
  _swift_bridgeObjectRetain(param_5);
  FUN_100626a9c(puVar3,&PTR_PTR_100f1f0a8,0x6148747065636341,0xed000072656c646e,1,0x8000000000000000
                ,lVar15);
  _swift_release(lVar15);
  _swift_release(puVar3);
  lVar4 = 0;
  local_c0 = (undefined1 *)param_6;
  FUN_1005e3ae8(0,param_18,PTR___type_metadata_for_Swift_Never_100eadc38);
  local_d0 = *(long *)(lVar4 + -8);
  lVar18 = *(long *)(local_d0 + 0x40);
  lVar15 = -(lVar18 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_100 + lVar15;
  puVar3 = &DAT_100f22db8;
  local_c8 = lVar4;
  local_b8 = auStack_100;
  _swift_allocObject(&DAT_100f22db8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_18;
  *(undefined8 *)(puVar3 + 0x18) = param_9;
  *(undefined8 *)(puVar3 + 0x20) = param_10;
  _swift_retain(param_10);
  local_b0 = param_18;
  *(undefined8 *)((long)auStack_110 + lVar15) = param_18;
  FUN_1005e106c(puVar10,param_2,&PTR_PTR_100f24068,local_c0,param_7,param_8,0,FUN_1009a1d20,puVar3);
  _swift_release(puVar3);
  puVar3 = &DAT_100ff07b8;
  local_d8 = lVar18;
  local_c0 = puVar10;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  pcVar11 = local_a8;
  *(code **)(puVar3 + 0x20) = local_a8;
  *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f21d18;
  puVar20 = (undefined8 *)(puVar3 + 0x10);
  *puVar20 = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  _swift_retain();
  (*param_12)(param_2,puVar3);
  lVar15 = local_c8;
  if (param_16 != '\x01') {
    puVar5 = &DAT_100f22e08;
    local_f8 = (undefined8 *)(puVar3 + 0x30);
    _swift_allocObject(&DAT_100f22e08,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    *(undefined **)(puVar5 + 0x18) = param_15;
    *(long *)(puVar5 + 0x20) = param_2;
    lVar15 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
    _swift_retain(puVar3);
    _swift_retain(param_2);
    pcVar8 = FUN_1009a1e74;
    pcVar11 = pcVar11 + lVar15;
    FUN_10099ab88();
    _swift_release(puVar5);
    puVar5 = &DAT_100f22e30;
    _swift_allocObject(&DAT_100f22e30,0x28,7);
    *(undefined **)(puVar5 + 0x10) = param_15;
    *(code **)(puVar5 + 0x18) = pcVar11;
    *(code **)(puVar5 + 0x20) = pcVar8;
    puVar6 = &DAT_100f22e58;
    local_f0 = pcVar11;
    _swift_allocObject(&DAT_100f22e58,0x28,7);
    *(code **)(puVar6 + 0x10) = thunk_FUN_1009830e0;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    uVar9 = *(ulong *)(puVar3 + 0x20);
    lVar15 = *(long *)(puVar3 + 0x28);
    _swift_getObjectType();
    pcVar11 = *(code **)(lVar15 + 0x10);
    _swift_retain_n(puVar3,3);
    local_e0 = param_15;
    _swift_retain_n(param_15,2);
    local_a8 = pcVar8;
    _swift_retain_n(pcVar8,2);
    _swift_retain_n(puVar5,2);
    local_e8 = uVar9;
    (*pcVar11)(uVar9,lVar15);
    puVar14 = local_e0;
    if ((uVar9 & 1) == 0) {
      puVar7 = &DAT_100f22e80;
      _swift_allocObject(&DAT_100f22e80,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar3;
      *(code **)(puVar7 + 0x18) = thunk_FUN_1006225d4;
      *(undefined **)(puVar7 + 0x20) = puVar6;
      pcVar11 = *(code **)(lVar15 + 0x18);
      _swift_retain(puVar3);
      _swift_retain(puVar6);
      (*pcVar11)(thunk_FUN_1008db360,puVar7,local_e8,lVar15);
      puVar16 = local_e0;
      _swift_release(local_e0);
      puVar14 = puVar5;
      puVar19 = puVar3;
    }
    else {
      _swift_beginAccess(puVar20,auStack_88,0,0);
      cVar1 = puVar3[0x18];
      puVar16 = puVar14;
      puVar7 = puVar5;
      puVar19 = puVar6;
      if (cVar1 == -1) {
        _swift_beginAccess(local_f8,auStack_a0,0x21,0);
        FUN_10064967c(thunk_FUN_1006225d4,puVar6);
        _swift_endAccess(auStack_a0);
        puVar6 = puVar3;
      }
      else {
        uVar12 = *puVar20;
        FUN_100308524(uVar12,cVar1);
        FUN_10099a394(puVar14,local_f0,local_a8);
        FUN_100308538(uVar12,cVar1);
        puVar6 = puVar3;
      }
    }
    lVar15 = local_c8;
    _swift_release(puVar7);
    _swift_release(puVar19);
    _swift_release(puVar14);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(puVar16);
    _swift_release(puVar3);
    _swift_release_n(local_a8,2);
  }
  puVar2 = local_c0;
  lVar18 = local_d0;
  lVar4 = local_d8;
  lVar13 = (long)puVar10 - (local_d8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(local_d0 + 0x10))(lVar13,local_c0,lVar15);
  uVar9 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar17 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100f22de0;
  _swift_allocObject(&DAT_100f22de0,uVar17 + lVar4,uVar9 | 7);
  *(undefined8 *)(puVar5 + 0x10) = local_b0;
  (**(code **)(lVar18 + 0x20))(puVar5 + uVar17,lVar13,lVar15);
  _swift_retain(puVar3);
  pcVar11 = FUN_1008fea9c;
  thunk_FUN_10064b138(FUN_1008fea9c,puVar5,lVar15);
  _swift_release_n(puVar3,2);
  _swift_release(puVar5);
  (**(code **)(lVar18 + 8))(puVar2,lVar15);
  return pcVar11;
}



/* Address: 0x10099f53c | FUN_10099f53c */

code * FUN_10099f53c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar5 = *(long *)(param_2 + 8);
  (**(code **)(lVar5 + 0x50))();
  uVar2 = uVar1;
  _swift_getObjectType();
  puVar3 = &DAT_100f23010;
  _swift_allocObject(&DAT_100f23010,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(long *)(puVar3 + 0x30) = param_2;
  _swift_retain(param_4);
  _swift_unknownObjectRetain(param_1);
  pcVar4 = FUN_1008feb40;
  FUN_100641014(FUN_1008feb40,puVar3,uVar2,param_5,lVar5);
  _swift_unknownObjectRelease(uVar1);
  _swift_release(puVar3);
  return pcVar4;
}



/* Address: 0x10099f620 | FUN_10099f620 */

void FUN_10099f620(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  uVar9 = *param_3;
  puVar2 = param_1;
  FUN_10098778c();
  puVar3 = &DAT_100f21ba0;
  uVar8 = 0;
  _swift_allocError(&DAT_100f21ba0,puVar2,0,0);
  *puVar2 = param_2;
  uVar4 = param_1[4];
  lVar1 = param_1[5];
  _swift_getObjectType();
  uVar5 = uVar4;
  lVar7 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar5 & 1) == 0) {
    _swift_allocObject(param_4,0x20,7);
    *(undefined8 **)(param_4 + 0x10) = param_1;
    *(undefined **)(param_4 + 0x18) = puVar3;
    pcVar10 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(puVar3);
    (*pcVar10)(param_5,param_4,uVar4,lVar1);
    _swift_release(param_4);
  }
  else {
    puVar6 = puVar3;
    thunk_FUN_1005de8f4(puVar3);
    FUN_1006486f8();
    FUN_100004550(puVar6,lVar7);
    _swift_bridgeObjectRelease(uVar8);
  }
  _swift_errorRelease(puVar3);
  FUN_10061cf14(2,0,uVar9,&PTR_PTR_100f24068);
  return;
}



/* Address: 0x10099f774 | FUN_10099f774 */

void FUN_10099f774(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  FUN_1009af6bc(param_1,2,0);
  uVar1 = 0;
  FUN_1005e3ae8(0,param_4,PTR___type_metadata_for_Swift_Never_100eadc38);
  FUN_10063dd74(param_1,uVar2,uVar1,&PTR_PTR_100f21d18);
  return;
}



/* Address: 0x10099f7ec | FUN_10099f7ec */

undefined * FUN_10099f7ec(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  *(undefined ***)(puVar1 + 0x28) = &PTR_PTR_100f21d18;
  if (param_2 == '\x01') {
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    puVar1[0x18] = 1;
    *(undefined8 *)(puVar1 + 0x38) = 0;
    *(undefined8 *)(puVar1 + 0x40) = 0;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    _swift_errorRetain(param_1);
  }
  else {
    *(undefined8 *)(puVar1 + 0x10) = 0;
    puVar1[0x18] = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0;
    *(undefined8 *)(puVar1 + 0x40) = 0;
    *(undefined8 *)(puVar1 + 0x30) = 0;
  }
  _swift_retain();
  return puVar1;
}



/* Address: 0x10099f888 | FUN_10099f888 */

undefined * FUN_10099f888(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar1 + 0x28) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x20] = 0xff;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  puVar2 = &DAT_100f23218;
  _swift_allocObject(&DAT_100f23218,0x30,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(code **)(puVar2 + 0x18) = FUN_1008f67d4;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  uVar3 = uVar8;
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar5 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_unknownObjectRetain(uVar8);
  uVar8 = uVar3;
  (*pcVar7)(uVar3,lVar5);
  if ((uVar8 & 1) == 0) {
    puVar6 = &DAT_100f23240;
    _swift_allocObject(&DAT_100f23240,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = FUN_100982fac;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar2);
    (*pcVar7)(FUN_1008db360,puVar6,uVar3,lVar5);
    _swift_release(puVar6);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  else {
    uVar4 = 0;
    _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_100982fac,puVar2);
      _swift_endAccess(auStack_80);
      lVar5 = 0;
      puVar6 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      lVar5 = param_1;
      puVar6 = puVar1;
      FUN_10099faac(param_1,puVar1);
    }
    FUN_1006486f8(lVar5,puVar6,uVar4);
    FUN_100004550(lVar5,puVar6);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(uVar4);
  }
  return puVar1;
}



/* Address: 0x10099faac | FUN_10099faac */

undefined8 FUN_10099faac(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar13 = *(long *)(param_1 + 0x10);
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 == '\x01') {
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (param_2[0x20] != -1) {
      return 0;
    }
    *(long *)(param_2 + 0x10) = lVar13;
    *(undefined8 *)(param_2 + 0x18) = 0;
    param_2[0x20] = 1;
    _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    _swift_errorRetain(lVar13);
    return uVar5;
  }
  if (cVar3 == -1) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10099ffc0);
    (*pcVar14)();
  }
  uVar7 = *(ulong *)(lVar13 + 0x28);
  lVar1 = *(long *)(lVar13 + 0x30);
  uVar4 = uVar7;
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar1 + 0x10);
  FUN_100974ed4(lVar13,cVar3);
  FUN_100974ed4(lVar13,cVar3);
  _swift_unknownObjectRetain(uVar7);
  (*pcVar14)(uVar4,lVar1);
  _swift_unknownObjectRelease(uVar7);
  if ((uVar4 & 1) != 0) {
    puVar6 = &DAT_100f232e0;
    _swift_allocObject(&DAT_100f232e0,0x20,7);
    *(undefined **)(puVar6 + 0x10) = param_2;
    *(long *)(puVar6 + 0x18) = lVar13;
    _swift_beginAccess(lVar13 + 0x10,auStack_90,0,0);
    if (*(char *)(lVar13 + 0x20) != -1) {
      uVar5 = *(undefined8 *)(lVar13 + 0x10);
      FUN_100999868(uVar5,*(undefined8 *)(lVar13 + 0x18));
      _swift_retain(param_2);
      _swift_release(puVar6);
      FUN_100642b94(lVar13,cVar3);
      return uVar5;
    }
    _swift_beginAccess(lVar13 + 0x38,auStack_a8,0x21,0);
    FUN_100974ed4(lVar13,cVar3);
    _swift_retain(param_2);
    FUN_10064967c(FUN_1008fcb8c,puVar6);
    _swift_endAccess(auStack_a8);
    FUN_100642b94(lVar13,cVar3);
    param_2 = puVar6;
    goto LAB_10099ff80;
  }
  puVar6 = &DAT_100f23268;
  _swift_allocObject(&DAT_100f23268,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_1009a2140;
  *(undefined **)(puVar6 + 0x18) = param_2;
  *(long *)(puVar6 + 0x20) = lVar13;
  uVar7 = *(ulong *)(lVar13 + 0x28);
  lVar1 = *(long *)(lVar13 + 0x30);
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar1 + 0x10);
  _swift_retain(param_2);
  FUN_100974ed4(lVar13,cVar3);
  _swift_retain_n(param_2,2);
  FUN_100974ed4(lVar13,cVar3);
  _swift_retain_n(param_2,2);
  uVar4 = uVar7;
  (*pcVar14)(uVar7,lVar1);
  if ((uVar4 & 1) == 0) {
    _swift_release(param_2);
    puVar8 = &DAT_100f23290;
    _swift_allocObject(&DAT_100f23290,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar13;
    *(code **)(puVar8 + 0x18) = FUN_1009806b8;
    *(undefined **)(puVar8 + 0x20) = puVar6;
    pcVar14 = *(code **)(lVar1 + 0x18);
    FUN_100974ed4(lVar13,cVar3);
    _swift_retain(puVar6);
    (*pcVar14)(FUN_1009806c8,puVar8,uVar7,lVar1);
    _swift_release(param_2);
    _swift_release(puVar6);
    _swift_release(puVar8);
  }
  else {
    _swift_beginAccess(lVar13 + 0x10,auStack_90,0,0);
    uVar5 = *(undefined8 *)(lVar13 + 0x10);
    uVar2 = *(undefined8 *)(lVar13 + 0x18);
    cVar11 = *(char *)(lVar13 + 0x20);
    if (cVar11 == '\x01') {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar1 = *(long *)(param_2 + 0x30);
      _swift_getObjectType();
      pcVar14 = *(code **)(lVar1 + 0x10);
      uVar12 = 1;
      FUN_1009806d4(uVar5,uVar2,1);
      uVar4 = uVar7;
      lVar10 = lVar1;
      (*pcVar14)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f232b8;
        _swift_allocObject(&DAT_100f232b8,0x20,7);
        *(undefined **)(puVar8 + 0x10) = param_2;
        *(undefined8 *)(puVar8 + 0x18) = uVar5;
        pcVar14 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        FUN_1009806d4(uVar5,uVar2,1);
        (*pcVar14)(FUN_1009806f4,puVar8,uVar7,lVar1);
        _swift_release(param_2);
        _swift_release(puVar8);
      }
      else {
        uVar9 = uVar5;
        FUN_10092b398(uVar5);
        FUN_1006486f8();
        FUN_100004550(uVar9,lVar10);
        _swift_release(param_2);
        _swift_bridgeObjectRelease(uVar12);
      }
      cVar11 = '\x01';
LAB_10099ff24:
      FUN_1009082bc(uVar5,uVar2,cVar11);
    }
    else {
      if (cVar11 != -1) {
        FUN_1009806d4(uVar5,uVar2,cVar11);
        FUN_100988c80(uVar5,uVar2,cVar11,param_2);
        _swift_release(param_2);
        goto LAB_10099ff24;
      }
      _swift_release(param_2);
      _swift_beginAccess(lVar13 + 0x38,auStack_a8,0x21,0);
      FUN_10064967c(FUN_1009806b8,puVar6);
      _swift_endAccess(auStack_a8);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  FUN_100642b94(lVar13,cVar3);
  _swift_release(param_2);
  FUN_100642b94(lVar13,cVar3);
LAB_10099ff80:
  _swift_release(param_2);
  FUN_100642b94(lVar13,cVar3);
  return 0;
}



/* Address: 0x10099ffc0 | FUN_10099ffc0 */

undefined * FUN_10099ffc0(code *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  code *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100ff07c0;
  FUN_1000f7830(&DAT_100ff07c0,&DAT_100c89400);
  if (puVar2 == PTR___type_metadata_for____100eae0c8 + 8) {
    uVar9 = 0;
    local_a0 = param_1;
    uStack_98 = param_2;
    FUN_1009a21e4(0);
    uVar10 = 0;
    FUN_1009a2248(0);
    _swift_retain(param_2);
    _swift_dynamicCast(&local_b0,&local_a0,uVar9,uVar10,7);
    puVar2 = &DAT_100f23600;
    _swift_allocObject(&DAT_100f23600,0x20,7);
    *(undefined8 *)(puVar2 + 0x18) = uStack_a8;
    *(code **)(puVar2 + 0x10) = local_b0;
    puVar3 = &DAT_100f23628;
    _swift_allocObject(&DAT_100f23628,0x28,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(code **)(puVar3 + 0x18) = FUN_1000386a0;
    *(undefined **)(puVar3 + 0x20) = puVar2;
    uVar4 = *(ulong *)(unaff_x20 + 0x20);
    lVar8 = *(long *)(unaff_x20 + 0x28);
    _swift_getObjectType();
    pcVar11 = *(code **)(lVar8 + 0x10);
    _swift_retain_n();
    _swift_retain_n(puVar2,2);
    _swift_retain(uStack_a8);
    uVar14 = uVar4;
    (*pcVar11)(uVar4,lVar8);
    if ((uVar14 & 1) == 0) {
      _swift_release(uStack_a8);
      puVar5 = &DAT_100f23650;
      _swift_allocObject(&DAT_100f23650,0x28,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(code **)(puVar5 + 0x18) = FUN_1008a8990;
      *(undefined **)(puVar5 + 0x20) = puVar3;
      pcVar11 = *(code **)(lVar8 + 0x18);
      _swift_retain();
      _swift_retain(puVar3);
      (*pcVar11)(thunk_FUN_1008db360,puVar5,uVar4,lVar8);
      _swift_release(puVar5);
      _swift_release_n(puVar2,2);
      _swift_release();
      _swift_release(puVar3);
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1009a0444);
      (*pcVar11)();
    }
    _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
    if (*(char *)(unaff_x20 + 0x18) != '\x01') {
      if (*(char *)(unaff_x20 + 0x18) == -1) {
        _swift_release(uStack_a8);
        _swift_beginAccess(unaff_x20 + 0x30,&local_90,0x21,0);
        FUN_10064967c(FUN_1008a8990,puVar3);
        _swift_endAccess(&local_90);
        goto LAB_1009a045c;
      }
      (*local_b0)();
    }
    _swift_release(uStack_a8);
LAB_1009a045c:
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release_n(puVar2,2);
    _swift_release();
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(0);
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1009a04a0);
    (*pcVar11)();
  }
  puVar2 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar14 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(puVar2 + 0x28) = uVar14;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar2[0x20] = 0xff;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  puVar3 = &DAT_100f235b0;
  _swift_allocObject(&DAT_100f235b0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(code **)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = uVar14;
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(param_2,2);
  _swift_retain_n();
  _swift_retain_n(puVar2,2);
  _swift_unknownObjectRetain(uVar14);
  uVar14 = uVar4;
  (*pcVar11)(uVar4,lVar8);
  if ((uVar14 & 1) == 0) {
    puVar5 = &DAT_100f235d8;
    _swift_allocObject(&DAT_100f235d8,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = FUN_1008fa498;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar8 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar11)(thunk_FUN_1008db360,puVar5,uVar4,lVar8);
    _swift_release(puVar5);
    _swift_release(param_2);
    _swift_release();
    _swift_release(puVar2);
    _swift_release(puVar3);
    return puVar2;
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar1 = *(char *)(unaff_x20 + 0x18);
  if (cVar1 == '\x01') {
    uVar7 = 1;
    FUN_100308524(uVar9,1);
    uVar10 = 0;
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,&local_90,0x21,0);
      FUN_10064967c(FUN_1008fa498,puVar3);
      _swift_endAccess(&local_90);
      uVar12 = 0;
      uVar13 = 0;
      uVar6 = 0;
      goto LAB_1009a0224;
    }
    (*param_1)(&local_90);
    FUN_100308538(uVar9,cVar1);
    uVar7 = 0;
    uVar9 = local_90;
    uVar10 = uStack_88;
  }
  uVar12 = uVar9;
  uVar13 = uVar10;
  uVar6 = uVar7;
  FUN_100999868(uVar9,uVar10,uVar7);
  FUN_1008fdeac(uVar9,uVar10,uVar7);
LAB_1009a0224:
  FUN_1006486f8(uVar12,uVar13,uVar6);
  FUN_100004550(uVar12,uVar13);
  _swift_release(param_2);
  _swift_release();
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar6);
  return puVar2;
}



/* Address: 0x1009a04a0 | FUN_1009a04a0 */

/* WARNING: Removing unreachable block (ram,0x0001009a04d8) */
/* WARNING: Removing unreachable block (ram,0x0001009a0584) */
/* WARNING: Removing unreachable block (ram,0x0001009a04f8) */

void FUN_1009a04a0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  
  (*param_2)(&local_58);
  uVar2 = 0;
  uVar1 = local_58;
  FUN_1006303e8(local_58,0);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_release(local_58);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1009a05f8 | FUN_1009a05f8 */

undefined8 FUN_1009a05f8(long param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  char cVar14;
  undefined8 uVar15;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar14 = *(char *)(param_1 + 0x20);
  if (cVar14 != '\x01') {
    if (cVar14 == -1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009a0af0);
      (*pcVar5)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (*(char *)(param_2 + 0x20) == -1) {
      *(long *)(param_2 + 0x10) = lVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(char *)(param_2 + 0x20) = cVar14;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_unknownObjectRetain(lVar1);
      return uVar2;
    }
    return 0;
  }
  FUN_1008fde58(lVar1,uVar2,1);
  lVar6 = lVar1;
  (*param_3)();
  uVar10 = *(ulong *)(lVar6 + 0x28);
  lVar3 = *(long *)(lVar6 + 0x30);
  uVar7 = uVar10;
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar3 + 0x10);
  _swift_unknownObjectRetain(uVar10);
  (*pcVar5)(uVar7,lVar3);
  _swift_unknownObjectRelease(uVar10);
  if ((uVar7 & 1) != 0) {
    puVar9 = &DAT_100f23588;
    _swift_allocObject(&DAT_100f23588,0x20,7);
    *(long *)(puVar9 + 0x10) = param_2;
    *(long *)(puVar9 + 0x18) = lVar6;
    _swift_beginAccess(lVar6 + 0x10,auStack_90,0,0);
    if (*(char *)(lVar6 + 0x20) == -1) {
      _swift_beginAccess(lVar6 + 0x38,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar6);
      FUN_10064967c(thunk_FUN_1008fcb8c,puVar9);
      _swift_endAccess(auStack_a8);
      FUN_1009082bc(lVar1,uVar2,1);
      _swift_release(puVar9);
      _swift_release(lVar6);
      return 0;
    }
    uVar8 = *(undefined8 *)(lVar6 + 0x10);
    FUN_100999868(uVar8,*(undefined8 *)(lVar6 + 0x18));
    _swift_retain(param_2);
    FUN_1009082bc(lVar1,uVar2,1);
    _swift_release(puVar9);
    return uVar8;
  }
  puVar9 = &DAT_100f23510;
  _swift_allocObject(&DAT_100f23510,0x28,7);
  *(code **)(puVar9 + 0x10) = thunk_FUN_1009a2140;
  *(long *)(puVar9 + 0x18) = param_2;
  *(long *)(puVar9 + 0x20) = lVar6;
  uVar10 = *(ulong *)(lVar6 + 0x28);
  lVar3 = *(long *)(lVar6 + 0x30);
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar3 + 0x10);
  _swift_retain_n(param_2,5);
  _swift_retain_n(lVar6,2);
  uVar7 = uVar10;
  (*pcVar5)(uVar10,lVar3);
  if ((uVar7 & 1) == 0) {
    _swift_release(param_2);
    puVar11 = &DAT_100f23538;
    _swift_allocObject(&DAT_100f23538,0x28,7);
    *(long *)(puVar11 + 0x10) = lVar6;
    *(code **)(puVar11 + 0x18) = thunk_FUN_1009806b8;
    *(undefined **)(puVar11 + 0x20) = puVar9;
    pcVar5 = *(code **)(lVar3 + 0x18);
    _swift_retain(lVar6);
    _swift_retain(puVar9);
    (*pcVar5)(thunk_FUN_1009806c8,puVar11,uVar10,lVar3);
    _swift_release(puVar11);
    goto LAB_1009a0a90;
  }
  _swift_beginAccess(lVar6 + 0x10,auStack_90,0,0);
  uVar8 = *(undefined8 *)(lVar6 + 0x10);
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  cVar14 = *(char *)(lVar6 + 0x20);
  if (cVar14 == '\x01') {
    uVar10 = *(ulong *)(param_2 + 0x28);
    lVar3 = *(long *)(param_2 + 0x30);
    _swift_getObjectType();
    pcVar5 = *(code **)(lVar3 + 0x10);
    uVar15 = 1;
    FUN_1009806d4(uVar8,uVar4,1);
    uVar7 = uVar10;
    lVar13 = lVar3;
    (*pcVar5)(uVar10,lVar3);
    if ((uVar7 & 1) == 0) {
      puVar11 = &DAT_100f23560;
      _swift_allocObject(&DAT_100f23560,0x20,7);
      *(long *)(puVar11 + 0x10) = param_2;
      *(undefined8 *)(puVar11 + 0x18) = uVar8;
      pcVar5 = *(code **)(lVar3 + 0x18);
      _swift_retain(param_2);
      FUN_1009806d4(uVar8,uVar4,1);
      (*pcVar5)(thunk_FUN_1009806f4,puVar11,uVar10,lVar3);
      _swift_release(param_2);
      _swift_release(puVar11);
    }
    else {
      uVar12 = uVar8;
      FUN_10092b398(uVar8);
      FUN_1006486f8();
      FUN_100004550(uVar12,lVar13);
      _swift_release(param_2);
      _swift_bridgeObjectRelease(uVar15);
    }
    cVar14 = '\x01';
LAB_1009a0a68:
    FUN_1009082bc(uVar8,uVar4,cVar14);
  }
  else {
    if (cVar14 != -1) {
      FUN_1009806d4(uVar8,uVar4,cVar14);
      FUN_100988c80(uVar8,uVar4,cVar14,param_2);
      _swift_release(param_2);
      goto LAB_1009a0a68;
    }
    _swift_release(param_2);
    _swift_beginAccess(lVar6 + 0x38,auStack_a8,0x21,0);
    FUN_10064967c(thunk_FUN_1009806b8,puVar9);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_bridgeObjectRelease(0);
LAB_1009a0a90:
  FUN_1009082bc(lVar1,uVar2,1);
  _swift_release(puVar9);
  _swift_release_n(lVar6,2);
  _swift_release_n(param_2,3);
  return 0;
}



/* Address: 0x1009a0af0 | FUN_1009a0af0 */

void FUN_1009a0af0(undefined8 *param_1,undefined8 param_2)

{
  FUN_100988a48(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),param_2);
  return;
}



/* Address: 0x1009a0b04 | FUN_1009a0b04 */

long * FUN_1009a0b04(class_t *param_1,class_t *param_2,undefined **param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  class_t *pcVar3;
  DispatchQoS DVar4;
  Options *this;
  Options *pOVar5;
  class_t *pcVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_78 [24];
  
  lVar8 = *param_4;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  pcVar3 = param_1;
  FUN_100622d2c();
  param_4[10] = (long)pcVar3;
  FUN_100622d2c();
  param_4[0xb] = (long)pcVar3;
  lVar2 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::serverQoS;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x38);
  (*pcVar9)((long)param_4 + lVar2,1,1,DVar4.unknown);
  (*pcVar9)((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS,1,1,
            DVar4.unknown);
  lVar2 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::tcpOptions;
  this = Network::NWProtocolTCP::Options::typeMetadataAccessor();
  pOVar5 = this;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  pOVar5 = Network::NWProtocolTCP::Options::init(pOVar5);
  *(Options **)((long)param_4 + lVar2) = pOVar5;
  lVar2 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTCPOptions;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  pOVar5 = Network::NWProtocolTCP::Options::init(this);
  *(Options **)((long)param_4 + lVar2) = pOVar5;
  *(undefined8 *)((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tlsOptions) =
       0;
  *(undefined8 *)
   ((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTLSOptions) = 0;
  puVar1 = (undefined8 *)
           ((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::bindTimeout);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)
           ((long)param_4 +
           _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           ((long)param_4 +
           _TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator);
  *puVar1 = 0;
  puVar1[1] = 0;
  pcVar3 = param_2;
  if (param_2 == (class_t *)0x0) {
    _swift_unknownObjectRetain(param_1);
    param_3 = &PTR_PTR_100f22918;
    pcVar3 = param_1;
  }
  pcVar6 = pcVar3;
  _object_getClass();
  if ((pcVar6 == &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup ||
       pcVar6 == &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) &&
     (pcVar3 != (class_t *)0x0)) {
    param_4[2] = (long)param_1;
    param_4[3] = (long)&PTR_PTR_100f22918;
    param_4[4] = (long)pcVar3;
    param_4[5] = (long)param_3;
    _swift_unknownObjectRetain(param_2);
    _swift_unknownObjectRetain(pcVar3);
    _swift_retain(param_1);
    uVar7 = 6;
    FUN_10060a56c(6,1);
    _swift_beginAccess(param_4 + 10,auStack_78,0x21,0);
    FUN_10098978c(uVar7,1);
    _swift_endAccess(auStack_78);
    uVar7 = 6;
    FUN_10060a56c(6,1);
    _swift_beginAccess(param_4 + 0xb,auStack_78,0x21,0);
    FUN_10098978c(uVar7,1);
    _swift_endAccess(auStack_78);
    _swift_release(param_1);
    _swift_unknownObjectRelease(param_2);
    _swift_unknownObjectRelease(pcVar3);
  }
  else {
    _swift_unknownObjectRelease(pcVar3);
    _swift_release(param_1);
    FUN_100004550(param_4[6],param_4[7]);
    FUN_100004550(param_4[8],param_4[9]);
    _swift_bridgeObjectRelease(param_4[10]);
    _swift_bridgeObjectRelease(param_4[0xb]);
    FUN_100986e74((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::serverQoS);
    FUN_100986e74((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS);
    _swift_release(*(undefined8 *)
                    ((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tcpOptions)
                  );
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTCPOptions));
    _swift_release(*(undefined8 *)
                    ((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tlsOptions)
                  );
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTLSOptions));
    FUN_100004550(*(undefined8 *)
                   ((long)param_4 +
                   _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator),
                  ((undefined8 *)
                  ((long)param_4 +
                  _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator))[1])
    ;
    FUN_100004550(*(undefined8 *)
                   ((long)param_4 +
                   _TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator
                   ),((undefined8 *)
                     ((long)param_4 +
                     _TtC20NIOTransportServices22NIOTSListenerBootstrap::
                     childNWParametersConfigurator))[1]);
    _swift_deallocPartialClassInstance
              (param_4,lVar8,*(undefined4 *)(*param_4 + 0x30),*(undefined2 *)(*param_4 + 0x34));
    param_4 = (long *)0x0;
  }
  return param_4;
}



/* Address: 0x1009a0e4c | FUN_1009a0e4c */

long * FUN_1009a0e4c(class_t *param_1,class_t *param_2,long param_3,long *param_4,undefined8 param_5
                    ,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  class_t *pcVar3;
  DispatchQoS DVar4;
  Options *this;
  Options *pOVar5;
  class_t *pcVar6;
  undefined8 uVar7;
  class_t *pcVar8;
  long lVar9;
  code *pcVar10;
  class_t *pcVar11;
  long local_88;
  undefined1 auStack_78 [24];
  
  lVar9 = *param_4;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  pcVar3 = param_1;
  FUN_100622d2c();
  param_4[10] = (long)pcVar3;
  FUN_100622d2c();
  param_4[0xb] = (long)pcVar3;
  lVar2 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::serverQoS;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  pcVar10 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x38);
  (*pcVar10)((long)param_4 + lVar2,1,1,DVar4.unknown);
  (*pcVar10)((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS,1,1,
             DVar4.unknown);
  lVar2 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::tcpOptions;
  this = Network::NWProtocolTCP::Options::typeMetadataAccessor();
  pOVar5 = this;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  pOVar5 = Network::NWProtocolTCP::Options::init(pOVar5);
  *(Options **)((long)param_4 + lVar2) = pOVar5;
  lVar2 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTCPOptions;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  pOVar5 = Network::NWProtocolTCP::Options::init(this);
  *(Options **)((long)param_4 + lVar2) = pOVar5;
  *(undefined8 *)((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tlsOptions) =
       0;
  *(undefined8 *)
   ((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTLSOptions) = 0;
  puVar1 = (undefined8 *)
           ((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::bindTimeout);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)
           ((long)param_4 +
           _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           ((long)param_4 +
           _TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator);
  *puVar1 = 0;
  puVar1[1] = 0;
  pcVar3 = param_2;
  local_88 = param_3;
  if (param_2 == (class_t *)0x0) {
    _swift_unknownObjectRetain(param_1);
    pcVar3 = param_1;
    local_88 = param_6;
  }
  pcVar6 = param_1;
  _object_getClass();
  pcVar8 = param_1;
  pcVar11 = pcVar3;
  if ((((pcVar6 == &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup ||
         pcVar6 == &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) &&
       (param_1 != (class_t *)0x0)) &&
      (pcVar6 = pcVar3, _object_getClass(), pcVar8 = pcVar3, pcVar11 = param_1,
      pcVar6 == &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup ||
      pcVar6 == &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop)) &&
     (pcVar3 != (class_t *)0x0)) {
    param_4[2] = (long)param_1;
    param_4[3] = param_6;
    param_4[4] = (long)pcVar3;
    param_4[5] = local_88;
    _swift_unknownObjectRetain(param_2);
    _swift_unknownObjectRetain(pcVar3);
    _swift_unknownObjectRetain(param_1);
    uVar7 = 6;
    FUN_10060a56c(6,1);
    _swift_beginAccess(param_4 + 10,auStack_78,0x21,0);
    FUN_10098978c(uVar7,1);
    _swift_endAccess(auStack_78);
    uVar7 = 6;
    FUN_10060a56c(6,1);
    _swift_beginAccess(param_4 + 0xb,auStack_78,0x21,0);
    FUN_10098978c(uVar7,1);
    _swift_endAccess(auStack_78);
    _swift_unknownObjectRelease(param_1);
    _swift_unknownObjectRelease(param_2);
    _swift_unknownObjectRelease(pcVar3);
  }
  else {
    _swift_unknownObjectRelease(pcVar8);
    _swift_unknownObjectRelease(pcVar11);
    FUN_100004550(param_4[6],param_4[7]);
    FUN_100004550(param_4[8],param_4[9]);
    _swift_bridgeObjectRelease(param_4[10]);
    _swift_bridgeObjectRelease(param_4[0xb]);
    FUN_100986e74((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::serverQoS);
    FUN_100986e74((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS);
    _swift_release(*(undefined8 *)
                    ((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tcpOptions)
                  );
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTCPOptions));
    _swift_release(*(undefined8 *)
                    ((long)param_4 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tlsOptions)
                  );
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTLSOptions));
    FUN_100004550(*(undefined8 *)
                   ((long)param_4 +
                   _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator),
                  ((undefined8 *)
                  ((long)param_4 +
                  _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator))[1])
    ;
    FUN_100004550(*(undefined8 *)
                   ((long)param_4 +
                   _TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator
                   ),((undefined8 *)
                     ((long)param_4 +
                     _TtC20NIOTransportServices22NIOTSListenerBootstrap::
                     childNWParametersConfigurator))[1]);
    _swift_deallocPartialClassInstance
              (param_4,lVar9,*(undefined4 *)(*param_4 + 0x30),*(undefined2 *)(*param_4 + 0x34));
    param_4 = (long *)0x0;
  }
  return param_4;
}



/* Address: 0x1009a11b8 | FUN_1009a11b8 */

void FUN_1009a11b8(class_t *param_1,long param_2)

{
  code *pcVar1;
  class_t *pcVar2;
  
  pcVar2 = param_1;
  _object_getClass();
  if (pcVar2 != &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup &&
      pcVar2 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop ||
      param_1 == (class_t *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a124c);
    (*pcVar1)();
  }
  _swift_allocObject(param_2,*(undefined4 *)(param_2 + 0x30),*(undefined2 *)(param_2 + 0x34));
  _swift_unknownObjectRetain_n(param_1,2);
  FUN_1009a0e4c();
  if (param_1 != (class_t *)0x0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a1250);
  (*pcVar1)();
}



/* Address: 0x1009a1250 | FUN_1009a1250 */

void FUN_1009a1250(class_t *param_1,class_t *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  class_t *pcVar2;
  
  pcVar2 = param_1;
  _object_getClass();
  if (pcVar2 != &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup &&
      pcVar2 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop ||
      param_1 == (class_t *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a131c);
    (*pcVar1)();
  }
  pcVar2 = param_2;
  _object_getClass();
  if ((pcVar2 == &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup ||
      pcVar2 == &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) &&
      param_2 != (class_t *)0x0) {
    _swift_allocObject(param_3,*(undefined4 *)(param_3 + 0x30),*(undefined2 *)(param_3 + 0x34));
    _swift_unknownObjectRetain(param_1);
    _swift_unknownObjectRetain(param_2);
    FUN_1009a0e4c(param_1,param_2,param_7,param_3,param_4,param_6);
    if (param_1 != (class_t *)0x0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a1324);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a1320);
  (*pcVar1)();
}



/* Address: 0x1009a1324 | FUN_1009a1324 */

void FUN_1009a1324(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a1348 | FUN_1009a1348 */

void FUN_1009a1348(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10099b0c4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009a1354 | FUN_1009a1354 */

void FUN_1009a1354(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_1009a2af4(0);
  FUN_10061d040(uVar2,param_2,uVar1,&PTR_PTR_100f24068);
  return;
}



/* Address: 0x1009a13a4 | FUN_1009a13a4 */

void FUN_1009a13a4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a13c8 | FUN_1009a13c8 */

void FUN_1009a13c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10099bf14(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x1009a13d0 | FUN_1009a13d0 */

void FUN_1009a13d0(undefined8 param_1,undefined8 param_2)

{
  FUN_10098fc14(param_1,param_2,FUN_100985148);
  return;
}



/* Address: 0x1009a13dc | FUN_1009a13dc */

void FUN_1009a13dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10099ce9c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009a13e8 | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  FUN_10093cdc8();
  return;
}



/* Address: 0x1009a13ec | FUN_1009a13ec */

void FUN_1009a13ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10099e180(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009a13f4 | thunk_FUN_100982b98 */

void thunk_FUN_100982b98(void)

{
  FUN_100982b98();
  return;
}



/* Address: 0x1009a13f8 | FUN_1009a13f8 */

void FUN_1009a13f8(undefined8 param_1,undefined8 param_2)

{
  FUN_10098fc14(param_1,param_2,FUN_10099e798);
  return;
}



/* Address: 0x1009a1404 | FUN_1009a1404 */

void FUN_1009a1404(void)

{
  FUN_1009a140c(0);
  return;
}



/* Address: 0x1009a140c | FUN_1009a140c */

void FUN_1009a140c(undefined8 param_1)

{
  if (DAT_100ff1e38 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc7b1c);
  return;
}



/* Address: 0x1009a1444 | FUN_1009a1444 */

void FUN_1009a1444(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  long local_68;
  long lStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_98 = &DAT_100c8af28;
  puStack_90 = &DAT_100c8af28;
  local_88 = &DAT_100c8af40;
  puStack_80 = &DAT_100c8af40;
  local_78 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puVar2 = &DAT_100ff0898;
  lVar1 = 0x13f;
  puStack_70 = local_78;
  FUN_1001a1320(0x13f,&DAT_100ff0898,PTR_typeMetadataAccessor_100eae6c8);
  if (puVar2 < (undefined *)0x40) {
    local_68 = *(long *)(lVar1 + -8) + 0x40;
    local_58 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_48 = &DAT_100c8af58;
    puStack_40 = &DAT_100c8af58;
    local_38 = &DAT_100c8af70;
    puStack_30 = &DAT_100c8af40;
    local_28 = &DAT_100c8af40;
    lStack_60 = local_68;
    puStack_50 = local_58;
    _swift_updateClassMetadata2(param_1,0x100,0xf,&local_98,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1009a1510 | FUN_1009a1510 */

void FUN_1009a1510(void)

{
  FUN_1001a1320(0,&DAT_100ff07a8,FUN_10097ee38);
  return;
}



/* Address: 0x1009a1538 | FUN_1009a1538 */

void FUN_1009a1538(void)

{
  FUN_1001a1320(0,&DAT_100ff0950,FUN_100982e04);
  return;
}



/* Address: 0x1009a1560 | FUN_1009a1560 */

void FUN_1009a1560(void)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,NVar1.value) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,CONCAT71(extraout_var,NVar1.value));
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a15e0 | FUN_1009a15e0 */

void FUN_1009a15e0(undefined8 param_1)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar2 = *(long *)(CONCAT71(extraout_var,NVar1.value) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar3 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  FUN_10099eac8(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar3,
                *(undefined8 *)
                 (unaff_x20 + (*(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8)));
  return;
}



/* Address: 0x1009a1634 | FUN_1009a1634 */

void FUN_1009a1634(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a166c | FUN_1009a166c */

void FUN_1009a166c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10099e4f8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009a1678 | FUN_1009a1678 */

void FUN_1009a1678(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a16dc | FUN_1009a16dc */

void FUN_1009a16dc(void)

{
  long unaff_x20;
  
  FUN_10099ed2c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x1009a1738 | FUN_1009a1738 */

void FUN_1009a1738(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a1748 | FUN_1009a1748 */

undefined8 FUN_1009a1748(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  char cVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar14 = *(char *)(param_1 + 0x20);
  if (cVar14 != '\x01') {
    if (cVar14 == -1) {
      _swift_release(param_4);
      _swift_release(param_3);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009a1c50);
      (*pcVar5)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (*(char *)(param_2 + 0x20) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(char *)(param_2 + 0x20) = cVar14;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_unknownObjectRetain(uVar1);
      return uVar2;
    }
    return 0;
  }
  FUN_1008fde58(uVar1,uVar2,1);
  FUN_1009af6bc(uVar1,2,0);
  puVar6 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  *(ulong *)(puVar6 + 0x28) = param_4;
  *(undefined ***)(puVar6 + 0x30) = &PTR_PTR_100f21d18;
  puVar17 = (undefined8 *)(puVar6 + 0x10);
  *puVar17 = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  puVar6[0x20] = 1;
  puVar16 = (undefined8 *)(puVar6 + 0x38);
  *puVar16 = 0;
  *(undefined8 *)(puVar6 + 0x40) = 0;
  *(undefined8 *)(puVar6 + 0x48) = 0;
  FUN_1009806d4(uVar1,uVar2,1);
  uVar7 = param_4;
  _swift_retain();
  FUN_100992670();
  if ((uVar7 & 1) != 0) {
    puVar9 = &DAT_100f234e8;
    _swift_allocObject(&DAT_100f234e8,0x20,7);
    *(long *)(puVar9 + 0x10) = param_2;
    *(undefined **)(puVar9 + 0x18) = puVar6;
    _swift_beginAccess(puVar17,auStack_90,0,0);
    if (puVar6[0x20] == -1) {
      _swift_beginAccess(puVar16,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(puVar6);
      FUN_10064967c(FUN_1008fcb8c,puVar9);
      _swift_endAccess(auStack_a8);
      FUN_1009082bc(uVar1,uVar2,1);
      _swift_release(puVar9);
      _swift_release(puVar6);
      return 0;
    }
    uVar8 = *(undefined8 *)(puVar6 + 0x10);
    FUN_100999868(uVar8,*(undefined8 *)(puVar6 + 0x18));
    _swift_retain(param_2);
    FUN_1009082bc(uVar1,uVar2,1);
    _swift_release(puVar9);
    return uVar8;
  }
  puVar9 = &DAT_100f23470;
  _swift_allocObject(&DAT_100f23470,0x28,7);
  *(code **)(puVar9 + 0x10) = thunk_FUN_1009a2140;
  *(long *)(puVar9 + 0x18) = param_2;
  *(undefined **)(puVar9 + 0x20) = puVar6;
  _swift_getObjectType();
  _swift_retain_n(param_2,5);
  _swift_retain_n(puVar6,2);
  uVar7 = param_4;
  thunk_FUN_100992670(param_4,&PTR_PTR_100f21d18);
  if ((uVar7 & 1) == 0) {
    _swift_release(param_2);
    puVar10 = &DAT_100f23498;
    _swift_allocObject(&DAT_100f23498,0x28,7);
    *(undefined **)(puVar10 + 0x10) = puVar6;
    *(code **)(puVar10 + 0x18) = thunk_FUN_1009806b8;
    *(undefined **)(puVar10 + 0x20) = puVar9;
    _swift_retain(puVar6);
    _swift_retain(puVar9);
    FUN_100994558(thunk_FUN_1009806c8,puVar10,param_4,&PTR_PTR_100f21d18);
    _swift_release(puVar10);
  }
  else {
    _swift_beginAccess(puVar17,auStack_90,0,0);
    uVar8 = *(undefined8 *)(puVar6 + 0x10);
    uVar3 = *(undefined8 *)(puVar6 + 0x18);
    cVar14 = puVar6[0x20];
    if (cVar14 == '\x01') {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 0x30);
      _swift_getObjectType();
      pcVar5 = *(code **)(lVar4 + 0x10);
      uVar15 = 1;
      FUN_1008fde58(uVar8,uVar3,1);
      uVar11 = uVar7;
      lVar13 = lVar4;
      (*pcVar5)(uVar7,lVar4);
      if ((uVar11 & 1) == 0) {
        puVar10 = &DAT_100f234c0;
        _swift_allocObject(&DAT_100f234c0,0x20,7);
        *(long *)(puVar10 + 0x10) = param_2;
        *(undefined8 *)(puVar10 + 0x18) = uVar8;
        pcVar5 = *(code **)(lVar4 + 0x18);
        _swift_retain(param_2);
        FUN_1009806d4(uVar8,uVar3,1);
        (*pcVar5)(thunk_FUN_1009806f4,puVar10,uVar7,lVar4);
        _swift_release(param_2);
        _swift_release(puVar10);
      }
      else {
        uVar12 = uVar8;
        FUN_10092b398(uVar8);
        FUN_1006486f8();
        FUN_100004550(uVar12,lVar13);
        _swift_release(param_2);
        _swift_bridgeObjectRelease(uVar15);
      }
      cVar14 = '\x01';
    }
    else {
      if (cVar14 == -1) {
        _swift_release(param_2);
        _swift_beginAccess(puVar16,auStack_a8,0x21,0);
        FUN_10064967c(thunk_FUN_1009806b8,puVar9);
        _swift_endAccess(auStack_a8);
        goto LAB_1009a1be4;
      }
      FUN_1008fde58(uVar8,uVar3,cVar14);
      FUN_100988c80(uVar8,uVar3,cVar14,param_2);
      _swift_release(param_2);
    }
    FUN_1009082bc(uVar8,uVar3,cVar14);
  }
LAB_1009a1be4:
  FUN_1009082bc(uVar1,uVar2,1);
  _swift_release(puVar9);
  _swift_release_n(puVar6,2);
  _swift_release_n(param_2,3);
  return 0;
}



/* Address: 0x1009a1c50 | FUN_1009a1c50 */

void FUN_1009a1c50(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a1ca4 | FUN_1009a1ca4 */

void FUN_1009a1ca4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10099ef70(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined1 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined1 *)(unaff_x20 + 0x80));
  return;
}



/* Address: 0x1009a1cf0 | FUN_1009a1cf0 */

void FUN_1009a1cf0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10099f774(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009a1cfc | FUN_1009a1cfc */

void FUN_1009a1cfc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a1d20 | FUN_1009a1d20 */

void FUN_1009a1d20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10099f53c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009a1d2c | FUN_1009a1d2c */

void FUN_1009a1d2c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  AsyncThrowingStream AVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_1005e3ae8(0,uVar7,PTR___type_metadata_for_Swift_Never_100eadc38);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff)));
  _swift_unknownObjectRelease(*puVar1);
  lVar9 = (long)*(int *)(lVar2 + 0x24);
  uVar3 = 0;
  FUN_1005e8278(0,uVar7);
  lVar4 = (long)puVar1 + lVar9;
  _swift_getEnumCaseMultiPayload(lVar4,uVar3);
  if ((int)lVar4 == 1) {
    _swift_release(*(undefined8 *)((long)puVar1 + lVar9));
  }
  else {
    FUN_1000f8b08(&DAT_100ff1318,&DAT_100c8b710);
    AVar5 = Swift::AsyncThrowingStream::typeMetadataAccessor();
    (**(code **)(*(long *)(AVar5.unknown + -8) + 8))((long)puVar1 + lVar9,AVar5.unknown);
  }
  lVar2 = (long)*(int *)(lVar2 + 0x28);
  puVar6 = &DAT_100ff1f38;
  FUN_1000f7830(&DAT_100ff1f38,&DAT_100c8afb0);
  lVar4 = (long)puVar1 + lVar2;
  _swift_getEnumCaseMultiPayload(lVar4,puVar6);
  if ((int)lVar4 == 1) {
    _swift_release(*(undefined8 *)((long)puVar1 + lVar2));
  }
  else {
    puVar6 = &DAT_100ff1f40;
    FUN_1000f7830(&DAT_100ff1f40,&DAT_100c8afb8);
    (**(code **)(*(long *)(puVar6 + -8) + 8))((long)puVar1 + lVar2,puVar6);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a1e74 | FUN_1009a1e74 */

void FUN_1009a1e74(void)

{
  long unaff_x20;
  
  FUN_10099f620(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100f22fe8,thunk_FUN_1008d678c);
  return;
}



/* Address: 0x1009a1ea0 | FUN_1009a1ea0 */

void FUN_1009a1ea0(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x1009a1eac | FUN_1009a1eac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1009a1eac(void)

{
  undefined *puVar1;
  
  if (DAT_100ff1c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_source;
  _swift_getObjCClassMetadata();
  DAT_100ff1c68 = puVar1;
  return;
}



/* Address: 0x1009a1ef0 | FUN_1009a1ef0 */

void FUN_1009a1ef0(void)

{
  TimerFlags TVar1;
  undefined *puVar2;
  
  if (DAT_100ff1c70 != (undefined *)0x0) {
    return;
  }
  TVar1 = TimerFlags::_typeMetadataAccessor();
  puVar2 = PTR__Dispatch__TimerFlags_>Swift__SetAlgebra_100eae820;
  _swift_getWitnessTable(PTR__Dispatch__TimerFlags_>Swift__SetAlgebra_100eae820,TVar1.unknown);
  DAT_100ff1c70 = puVar2;
  return;
}



/* Address: 0x1009a1f34 | FUN_1009a1f34 */

void FUN_1009a1f34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100ff1c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff1c78;
  FUN_1000f8b08(&DAT_100ff1c78,&DAT_100c8adc0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100ff1c80 = puVar2;
  return;
}



/* Address: 0x1009a1f84 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  FUN_100645ecc();
  return;
}



/* Address: 0x1009a1f88 | FUN_1009a1f88 */

void FUN_1009a1f88(void)

{
  long unaff_x20;
  
  FUN_10099a9d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}


