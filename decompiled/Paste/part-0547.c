/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10062f908 | FUN_10062f908 */

void FUN_10062f908(void)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88 [3];
  long local_70;
  long lStack_68;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar3 = uVar8;
  (**(code **)(lVar7 + 0x10))();
  if ((uVar3 & 1) == 0) {
    pcVar1 = *(code **)(lVar7 + 0x20);
    _swift_retain();
    (*pcVar1)(FUN_100631d2c);
    _swift_release();
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
      lVar13 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
      _swift_retain(lVar11);
      lVar13 = 0;
      if (lVar11 != 0) {
        do {
          if (lVar11 == *(long *)(unaff_x20 + 0x18)) {
            _swift_release(lVar11);
            break;
          }
          lVar9 = *(long *)(lVar11 + 0x38);
          if (lVar9 == 0) {
            lVar9 = *(long *)(lVar11 + 0x48);
            if (lVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10062fb64);
              (*pcVar1)();
            }
            uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x50) + 8);
            _swift_unknownObjectRetain();
            lVar10 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x40) + 8);
            lVar10 = lVar9;
          }
          local_98 = lVar9;
          uStack_90 = uVar12;
          _swift_retain(lVar11);
          _swift_unknownObjectRetain(lVar10);
          puVar4 = &DAT_100fd78c8;
          FUN_1000f7830(&DAT_100fd78c8,&DAT_100c694a8);
          puVar5 = &DAT_100fd78e0;
          FUN_1000f7830(&DAT_100fd78e0,&DAT_100c694c0);
          puVar6 = &local_c0;
          _swift_dynamicCast(puVar6,&local_98,puVar4,puVar5,6);
          if ((int)puVar6 == 0) {
            _swift_release(lVar11);
            local_a0 = 0;
            uStack_b8 = 0;
            local_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            FUN_1000fb4c4(&local_c0,&DAT_100fd78e8,&DAT_100c694c8);
          }
          else {
            FUN_100076508(&local_c0,local_88);
            lVar10 = lStack_68;
            lVar9 = local_70;
            FUN_100004640(local_88,local_70);
            (**(code **)(lVar10 + 8))(lVar9,lVar10);
            _swift_release(lVar11);
            bVar2 = SCARRY8(lVar13,lVar9);
            lVar13 = lVar13 + lVar9;
            if (bVar2) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10062fb60);
              (*pcVar1)();
            }
            FUN_100004594(local_88);
          }
          lVar9 = *(long *)(lVar11 + 0x10);
          _swift_retain(lVar9);
          _swift_release(lVar11);
          lVar11 = lVar9;
        } while (lVar9 != 0);
      }
    }
    local_88[0] = lVar13;
    FUN_10063dc68(local_88,uVar8,PTR___type_metadata_for_Swift_Int_100eac6f8,lVar7);
  }
  return;
}



/* Address: 0x10062fb64 | FUN_10062fb64 */

void FUN_10062fb64(long *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  long local_70;
  long lStack_68;
  long local_58;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar9 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    _swift_retain(lVar9);
    if (lVar9 != 0) {
      local_58 = 0;
      do {
        if (lVar9 == *(long *)(param_2 + 0x18)) {
          _swift_release(lVar9);
          break;
        }
        lVar7 = *(long *)(lVar9 + 0x38);
        if (lVar7 == 0) {
          lVar7 = *(long *)(lVar9 + 0x48);
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10062fd58);
            (*pcVar1)();
          }
          uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0x50) + 8);
          _swift_unknownObjectRetain();
          lVar8 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0x40) + 8);
          lVar8 = lVar7;
        }
        local_98 = lVar7;
        uStack_90 = uVar6;
        _swift_retain(lVar9);
        _swift_unknownObjectRetain(lVar8);
        puVar3 = &DAT_100fd78c8;
        FUN_1000f7830(&DAT_100fd78c8,&DAT_100c694a8);
        puVar4 = &DAT_100fd78e0;
        FUN_1000f7830(&DAT_100fd78e0,&DAT_100c694c0);
        puVar5 = &local_c0;
        _swift_dynamicCast(puVar5,&local_98,puVar3,puVar4,6);
        if ((int)puVar5 == 0) {
          _swift_release(lVar9);
          local_a0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          FUN_1000fb4c4(&local_c0,&DAT_100fd78e8,&DAT_100c694c8);
        }
        else {
          FUN_100076508(&local_c0,auStack_88);
          lVar8 = lStack_68;
          lVar7 = local_70;
          FUN_100004640(auStack_88,local_70);
          (**(code **)(lVar8 + 8))(lVar7,lVar8);
          _swift_release(lVar9);
          bVar2 = SCARRY8(local_58,lVar7);
          local_58 = local_58 + lVar7;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10062fd54);
            (*pcVar1)();
          }
          FUN_100004594(auStack_88);
        }
        lVar7 = *(long *)(lVar9 + 0x10);
        _swift_retain(lVar7);
        _swift_release(lVar9);
        lVar9 = lVar7;
      } while (lVar7 != 0);
      goto LAB_10062fd24;
    }
  }
  local_58 = 0;
LAB_10062fd24:
  *param_1 = local_58;
  return;
}



/* Address: 0x10062fd58 | FUN_10062fd58 */

long FUN_10062fd58(long param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  long local_70;
  long lStack_68;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar6 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    _swift_retain(lVar9);
    lVar6 = 0;
    if (lVar9 != 0) {
      do {
        if (lVar9 == *(long *)(param_1 + 0x18)) {
          _swift_release(lVar9);
          return lVar6;
        }
        lVar7 = *(long *)(lVar9 + 0x38);
        if (lVar7 == 0) {
          lVar7 = *(long *)(lVar9 + 0x48);
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10062ff18);
            (*pcVar1)();
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x50) + 8);
          _swift_unknownObjectRetain();
          lVar8 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x40) + 8);
          lVar8 = lVar7;
        }
        local_98 = lVar7;
        uStack_90 = uVar10;
        _swift_retain(lVar9);
        _swift_unknownObjectRetain(lVar8);
        puVar4 = &DAT_100fd78c8;
        FUN_1000f7830(&DAT_100fd78c8,&DAT_100c694a8);
        puVar5 = &DAT_100fd78d0;
        FUN_1000f7830(&DAT_100fd78d0,&DAT_100c694b0);
        iVar3 = (int)&local_c0;
        _swift_dynamicCast(&local_c0,&local_98,puVar4,puVar5,6);
        if (iVar3 == 0) {
          _swift_release(lVar9);
          local_a0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          FUN_1000fb4c4(&local_c0,&DAT_100fd78d8,&DAT_100c694b8);
        }
        else {
          FUN_100076508(&local_c0,auStack_88);
          lVar8 = lStack_68;
          lVar7 = local_70;
          FUN_100004640(auStack_88,local_70);
          (**(code **)(lVar8 + 8))(lVar7,lVar8);
          _swift_release(lVar9);
          bVar2 = SCARRY8(lVar6,lVar7);
          lVar6 = lVar6 + lVar7;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10062ff14);
            (*pcVar1)();
          }
          FUN_100004594(auStack_88);
        }
        lVar7 = *(long *)(lVar9 + 0x10);
        _swift_retain(lVar7);
        _swift_release(lVar9);
        lVar9 = lVar7;
      } while (lVar7 != 0);
    }
  }
  return lVar6;
}



/* Address: 0x10062ff18 | FUN_10062ff18 */

undefined1  [16] FUN_10062ff18(long param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  uVar5 = 0;
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100630040);
      (*pcVar2)();
    }
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 8);
    _swift_unknownObjectRetain();
    lVar7 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 8);
    lVar7 = lVar6;
  }
  local_68 = lVar6;
  uStack_60 = uVar8;
  _swift_unknownObjectRetain(lVar7);
  puVar3 = &DAT_100fd78c8;
  FUN_1000f7830(&DAT_100fd78c8,&DAT_100c694a8);
  puVar4 = &DAT_100fd78d0;
  FUN_1000f7830(&DAT_100fd78d0,&DAT_100c694b0);
  _swift_dynamicCast(&local_90,&local_68,puVar3,puVar4,6);
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_1000fb4c4(&local_90,&DAT_100fd78d8,&DAT_100c694b8);
    local_40 = 0;
  }
  else {
    FUN_100076508(&local_90,auStack_58);
    FUN_100004640(auStack_58,local_40);
    (**(code **)(lStack_38 + 8))(local_40,lStack_38);
    FUN_100004594(auStack_58);
  }
  auVar9[8] = bVar1;
  auVar9._0_8_ = local_40;
  auVar9._9_7_ = 0;
  return auVar9;
}



/* Address: 0x100630040 | FUN_100630040 */

long FUN_100630040(long param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  long local_70;
  long lStack_68;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar8 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    _swift_retain(lVar9);
    lVar8 = 0;
    if (lVar9 != 0) {
      do {
        if (lVar9 == *(long *)(param_1 + 0x18)) {
          _swift_release(lVar9);
          return lVar8;
        }
        lVar6 = *(long *)(lVar9 + 0x38);
        if (lVar6 == 0) {
          lVar6 = *(long *)(lVar9 + 0x48);
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100630200);
            (*pcVar1)();
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x50) + 8);
          _swift_unknownObjectRetain();
          lVar7 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x40) + 8);
          lVar7 = lVar6;
        }
        local_98 = lVar6;
        uStack_90 = uVar10;
        _swift_retain(lVar9);
        _swift_unknownObjectRetain(lVar7);
        puVar4 = &DAT_100fd78c8;
        FUN_1000f7830(&DAT_100fd78c8,&DAT_100c694a8);
        puVar5 = &DAT_100fd78e0;
        FUN_1000f7830(&DAT_100fd78e0,&DAT_100c694c0);
        iVar3 = (int)&local_c0;
        _swift_dynamicCast(&local_c0,&local_98,puVar4,puVar5,6);
        if (iVar3 == 0) {
          _swift_release(lVar9);
          local_a0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          FUN_1000fb4c4(&local_c0,&DAT_100fd78e8,&DAT_100c694c8);
        }
        else {
          FUN_100076508(&local_c0,auStack_88);
          lVar7 = lStack_68;
          lVar6 = local_70;
          FUN_100004640(auStack_88,local_70);
          (**(code **)(lVar7 + 8))(lVar6,lVar7);
          _swift_release(lVar9);
          bVar2 = SCARRY8(lVar8,lVar6);
          lVar8 = lVar8 + lVar6;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006301fc);
            (*pcVar1)();
          }
          FUN_100004594(auStack_88);
        }
        lVar6 = *(long *)(lVar9 + 0x10);
        _swift_retain(lVar6);
        _swift_release(lVar9);
        lVar9 = lVar6;
      } while (lVar6 != 0);
    }
  }
  return lVar8;
}



/* Address: 0x100630200 | FUN_100630200 */

undefined1  [16] FUN_100630200(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  iVar2 = (int)&local_90;
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100630328);
      (*pcVar1)();
    }
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 8);
    _swift_unknownObjectRetain();
    lVar6 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 8);
    lVar6 = lVar5;
  }
  local_68 = lVar5;
  uStack_60 = uVar7;
  _swift_unknownObjectRetain(lVar6);
  puVar3 = &DAT_100fd78c8;
  FUN_1000f7830(&DAT_100fd78c8,&DAT_100c694a8);
  puVar4 = &DAT_100fd78e0;
  FUN_1000f7830(&DAT_100fd78e0,&DAT_100c694c0);
  _swift_dynamicCast(&local_90,&local_68,puVar3,puVar4,6);
  if (iVar2 == 0) {
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_1000fb4c4(&local_90,&DAT_100fd78e8,&DAT_100c694c8);
    local_40 = 0;
  }
  else {
    FUN_100076508(&local_90,auStack_58);
    FUN_100004640(auStack_58,local_40);
    (**(code **)(lStack_38 + 8))(local_40,lStack_38);
    FUN_100004594(auStack_58);
  }
  auVar8[8] = iVar2 == 0;
  auVar8._0_8_ = local_40;
  auVar8._9_7_ = 0;
  return auVar8;
}



/* Address: 0x100630328 | FUN_100630328 */

void FUN_100630328(undefined8 param_1,undefined8 param_2)

{
  FUN_100630334(param_1,param_2,FUN_100308524);
  return;
}



/* Address: 0x100630334 | FUN_100630334 */

undefined8 FUN_100630334(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x18) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(char *)(unaff_x20 + 0x18) = (char)param_2;
    _swift_beginAccess(unaff_x20 + 0x30,auStack_80,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    (*param_3)(param_1,param_2);
  }
  return uVar1;
}



/* Address: 0x1006303e8 | FUN_1006303e8 */

void FUN_1006303e8(undefined8 param_1,undefined8 param_2)

{
  FUN_100630334(param_1,param_2,FUN_1005dff00);
  return;
}



/* Address: 0x1006303f4 | FUN_1006303f4 */

void FUN_1006303f4(undefined8 param_1,undefined8 param_2)

{
  FUN_100630334(param_1,param_2,thunk_FUN_100308524);
  return;
}



/* Address: 0x100630400 | FUN_100630400 */

undefined1  [16]
FUN_100630400(undefined8 param_1,long param_2,char *param_3,void *param_4,ulong param_5,long param_6
             ,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  void *pvVar3;
  char *pcVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  String SVar10;
  undefined1 auVar11 [16];
  String SVar12;
  String SVar13;
  
  if (*(char *)(param_6 + 0x28) == '\x01') {
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    param_2 = DAT_101057be8;
    _swift_errorRetain(DAT_101057be8);
    param_3 = &DAT_00000001;
    goto LAB_100630784;
  }
  uVar5 = (uint)(param_5 >> 0x3e);
  if (uVar5 == 0) {
    _swift_retain(param_6);
    pcVar1 = thunk_FUN_1006311a0;
  }
  else {
    if (uVar5 != 1) {
      if (param_4 == (void *)0x0 && param_5 == 0x8000000000000000) {
        pvVar9 = *(void **)(param_6 + 0x10);
        if (pvVar9 == (void *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006307cc);
          (*pcVar1)();
        }
        if (param_3 == (char *)0x0) {
          pcVar4 = param_3;
          _swift_retain(param_6);
          _swift_retain(pvVar9);
          SVar10 = Swift::CustomStringConvertible::get_description();
          pvVar3 = SVar10.bridgeObject;
          SVar12.bridgeObject = param_4;
          SVar12.str = pcVar4;
          Swift::String::append(SVar10,SVar12);
          _swift_bridgeObjectRelease(pvVar3);
          if (SCARRY8(*(long *)(param_6 + 0x20),1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006307c4);
            (*pcVar1)();
          }
          param_2 = 0x72656c646e6168;
          pcVar4 = &DAT_e700000000000000;
          *(long *)(param_6 + 0x20) = *(long *)(param_6 + 0x20) + 1;
        }
        else {
          _swift_retain(param_6);
          pvVar3 = pvVar9;
          _swift_retain(pvVar9);
          pcVar4 = param_3;
        }
        FUN_100631530();
        _swift_allocObject();
        _swift_retain(param_6);
        _swift_unknownObjectRetain(param_1);
        _swift_bridgeObjectRetain(param_3);
        FUN_100630e3c(param_2,pcVar4,param_1,param_6,pvVar3,param_7,param_8);
        FUN_1006310f8();
        lVar7 = *(long *)(param_2 + 0x38);
        if (lVar7 == 0) {
          lVar7 = *(long *)(param_2 + 0x48);
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100630638);
            (*pcVar1)();
          }
          goto LAB_100630720;
        }
LAB_100630708:
        lVar6 = *(long *)(*(long *)(param_2 + 0x40) + 8);
        lVar8 = lVar7;
      }
      else {
        pvVar9 = *(void **)(param_6 + 0x18);
        if (pvVar9 == (void *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006307d0);
          (*pcVar1)();
        }
        if (param_3 == (char *)0x0) {
          pcVar4 = param_3;
          _swift_retain(param_6);
          _swift_retain(pvVar9);
          SVar10 = Swift::CustomStringConvertible::get_description();
          pvVar3 = SVar10.bridgeObject;
          SVar13.bridgeObject = param_4;
          SVar13.str = pcVar4;
          Swift::String::append(SVar10,SVar13);
          _swift_bridgeObjectRelease(pvVar3);
          if (SCARRY8(*(long *)(param_6 + 0x20),1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006307c8);
            (*pcVar1)();
          }
          param_2 = 0x72656c646e6168;
          pcVar4 = &DAT_e700000000000000;
          *(long *)(param_6 + 0x20) = *(long *)(param_6 + 0x20) + 1;
        }
        else {
          _swift_retain(param_6);
          pvVar3 = pvVar9;
          _swift_retain(pvVar9);
          pcVar4 = param_3;
        }
        FUN_100631530();
        _swift_allocObject();
        _swift_retain(param_6);
        _swift_unknownObjectRetain(param_1);
        _swift_bridgeObjectRetain(param_3);
        FUN_100630e3c(param_2,pcVar4,param_1,param_6,pvVar3,param_7,param_8);
        FUN_1006311a0();
        lVar7 = *(long *)(param_2 + 0x38);
        if (lVar7 != 0) goto LAB_100630708;
        lVar7 = *(long *)(param_2 + 0x48);
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006307d4);
          (*pcVar1)();
        }
LAB_100630720:
        lVar6 = *(long *)(*(long *)(param_2 + 0x50) + 8);
        _swift_unknownObjectRetain(lVar7);
        lVar8 = 0;
      }
      lVar2 = lVar7;
      _swift_getObjectType(lVar7);
      pcVar1 = *(code **)(lVar6 + 8);
      _swift_unknownObjectRetain(lVar8);
      (*pcVar1)(param_2,lVar2,lVar6);
      _swift_release(param_6);
      _swift_release(param_2);
      _swift_unknownObjectRelease(lVar7);
      _swift_release(pvVar9);
      param_2 = 0;
      param_3 = (char *)0x0;
      goto LAB_100630784;
    }
    _swift_retain(param_6);
    pcVar1 = thunk_FUN_1006310f8;
    param_5 = param_5 & 0x3fffffffffffffff;
  }
  FUN_1006307d4(param_2,param_3,param_1,param_4,param_5,pcVar1,param_6,param_6,param_7,param_8);
  _swift_release(param_6);
LAB_100630784:
  auVar11._8_8_ = param_3;
  auVar11._0_8_ = param_2;
  return auVar11;
}



/* Address: 0x1006307d4 | FUN_1006307d4 */

void FUN_1006307d4(undefined1 *param_1,undefined1 *param_2,char *param_3,void *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  long lVar4;
  char *pcVar5;
  void *pvVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  void *pvVar12;
  String SVar13;
  String SVar14;
  
  if (*(char *)(param_8 + 0x28) == '\x01') {
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    _swift_errorRetain(DAT_101057be8);
  }
  else {
    puVar1 = param_1;
    if (*(long *)(param_8 + 0x10) != 0) {
      puVar7 = *(undefined1 **)(*(long *)(param_8 + 0x10) + 0x10);
      puVar1 = puVar7;
      pcVar5 = param_3;
      pvVar6 = param_4;
      _swift_retain();
      while (puVar3 = puVar7, puVar3 != (undefined1 *)0x0) {
        if (puVar3 == *(undefined1 **)(param_8 + 0x18)) {
          _swift_release();
          puVar1 = puVar3;
          break;
        }
        pvVar2 = *(void **)(puVar3 + 0x38);
        pvVar12 = pvVar2;
        if (pvVar2 == (void *)0x0) {
          pvVar12 = *(void **)(puVar3 + 0x48);
          if (pvVar12 == (void *)0x0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x100630ae4);
            (*pcVar11)();
          }
          _swift_unknownObjectRetain(pvVar12);
          pvVar2 = (void *)0x0;
        }
        _swift_unknownObjectRetain(pvVar2);
        pvVar2 = pvVar12;
        _swift_unknownObjectRelease(pvVar12);
        if (pvVar12 == param_4) {
          if (*(char *)(param_8 + 0x28) == '\x01') {
            if (DAT_100fd7138 != -1) {
              _swift_once(&DAT_100fd7138,FUN_10061d9bc);
            }
            _swift_errorRetain(DAT_101057be8);
            _swift_release(puVar3);
            return;
          }
          puVar1 = param_2;
          if (param_2 == (undefined1 *)0x0) {
            SVar13 = Swift::CustomStringConvertible::get_description();
            pvVar2 = SVar13.bridgeObject;
            SVar14.bridgeObject = pvVar6;
            SVar14.str = pcVar5;
            Swift::String::append(SVar13,SVar14);
            _swift_bridgeObjectRelease(pvVar2);
            if (SCARRY8(*(long *)(param_8 + 0x20),1)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x100630ae0);
              (*pcVar11)();
            }
            param_1 = (undefined1 *)0x72656c646e6168;
            *(long *)(param_8 + 0x20) = *(long *)(param_8 + 0x20) + 1;
            puVar1 = &DAT_e700000000000000;
          }
          FUN_100631530();
          _swift_allocObject();
          _swift_unknownObjectRetain(param_3);
          _swift_retain(param_8);
          _swift_bridgeObjectRetain(param_2);
          FUN_100630e3c(param_1,puVar1,param_3,param_8,pvVar2,param_9,param_10);
          (*param_6)();
          lVar9 = *(long *)(param_1 + 0x38);
          if (lVar9 == 0) {
            lVar9 = *(long *)(param_1 + 0x48);
            if (lVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x100630ae8);
              (*pcVar11)();
            }
            lVar8 = *(long *)(*(long *)(param_1 + 0x50) + 8);
            _swift_unknownObjectRetain(lVar9);
            lVar10 = 0;
          }
          else {
            lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
            lVar10 = lVar9;
          }
          lVar4 = lVar9;
          _swift_getObjectType(lVar9);
          pcVar11 = *(code **)(lVar8 + 8);
          _swift_unknownObjectRetain(lVar10);
          (*pcVar11)(param_1,lVar4,lVar8);
          _swift_release(param_1);
          _swift_unknownObjectRelease(lVar9);
          _swift_release(puVar3);
          return;
        }
        puVar7 = *(undefined1 **)(puVar3 + 0x10);
        _swift_retain(puVar7);
        _swift_release();
        puVar1 = puVar3;
      }
    }
    FUN_1005dfcfc();
    _swift_allocError(&DAT_100eed960,puVar1,0,0);
    *puVar1 = 1;
  }
  return;
}



/* Address: 0x100630ae8 | FUN_100630ae8 */

undefined1  [16] FUN_100630ae8(undefined *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  
  puVar5 = param_1;
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar4 = *(undefined **)(*(long *)(param_2 + 0x10) + 0x10);
    puVar5 = puVar4;
    _swift_retain();
    while (puVar2 = puVar4, puVar2 != (undefined *)0x0) {
      if (puVar2 == *(undefined **)(param_2 + 0x18)) {
        _swift_release();
        puVar5 = puVar2;
        break;
      }
      puVar4 = *(undefined **)(puVar2 + 0x38);
      puVar5 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        puVar5 = *(undefined **)(puVar2 + 0x48);
        if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100630bd0);
          (*pcVar1)();
        }
        _swift_unknownObjectRetain(puVar5);
        puVar4 = (undefined *)0x0;
      }
      _swift_unknownObjectRetain(puVar4);
      _swift_unknownObjectRelease(puVar5);
      if (puVar5 == param_1) {
        uVar3 = 0;
        goto LAB_100630bb0;
      }
      puVar4 = *(undefined **)(puVar2 + 0x10);
      _swift_retain(puVar4);
      _swift_release();
      puVar5 = puVar2;
    }
  }
  FUN_1005dfcfc();
  puVar2 = &DAT_100eed960;
  _swift_allocError(&DAT_100eed960,puVar5,0,0);
  uVar3 = 1;
  *puVar5 = 1;
LAB_100630bb0:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Address: 0x100630bd0 | FUN_100630bd0 */

void FUN_100630bd0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  FUN_100630ae8(param_1,param_3,param_4,*(undefined8 *)(param_5 + 8));
  if (((uint)param_3 & 0xff) == 1) {
    if (param_2 != 0) {
      uVar2 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar3 = uVar2;
      lVar6 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar3 & 1) == 0) {
        puVar5 = &DAT_100eeddd0;
        _swift_allocObject(&DAT_100eeddd0,0x20,7);
        *(long *)(puVar5 + 0x10) = param_2;
        *(undefined8 *)(puVar5 + 0x18) = param_1;
        pcVar7 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        FUN_1005dff00(param_1,1);
        (*pcVar7)(thunk_FUN_10061dfe0,puVar5,uVar2,lVar1);
        FUN_1005dff14(param_1,1);
        _swift_release(puVar5);
        return;
      }
      uVar4 = param_1;
      thunk_FUN_1005de8f4(param_1);
      FUN_1006486f8();
      FUN_1005dff14(param_1,1);
      FUN_100004550(uVar4,lVar6);
      _swift_bridgeObjectRelease(param_4);
      return;
    }
  }
  else {
    FUN_1006313ac();
  }
  FUN_1005dff14();
  return;
}



/* Address: 0x100630d30 | FUN_100630d30 */

long FUN_100630d30(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  long lVar2;
  
  *(undefined2 *)(param_5 + 0x58) = 0;
  *(undefined8 *)(param_5 + 0x28) = param_1;
  *(undefined8 *)(param_5 + 0x30) = param_2;
  *(undefined8 *)(param_5 + 0x20) = param_4;
  lVar2 = *param_3;
  _swift_conformsToProtocol(lVar2,&TargetProtocolDescriptor_100cb7e90);
  if (lVar2 != 0) {
    *(long **)(param_5 + 0x38) = param_3;
    *(long *)(param_5 + 0x40) = lVar2;
    lVar2 = *param_3;
    _swift_conformsToProtocol(lVar2,&TargetProtocolDescriptor_100cb7e24);
    if (lVar2 == 0) {
      param_3 = (long *)0x0;
    }
    else {
      _swift_retain(param_3);
    }
    *(long **)(param_5 + 0x48) = param_3;
    *(long *)(param_5 + 0x50) = lVar2;
    *(undefined8 *)(param_5 + 0x10) = 0;
    *(undefined8 *)(param_5 + 0x18) = 0;
    return param_5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100630db4);
  (*pcVar1)();
}



/* Address: 0x100630db4 | FUN_100630db4 */

long FUN_100630db4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined2 *)(param_5 + 0x58) = 0;
  *(undefined8 *)(param_5 + 0x28) = param_1;
  *(undefined8 *)(param_5 + 0x30) = param_2;
  *(undefined8 *)(param_5 + 0x20) = param_4;
  lVar2 = *param_3;
  _swift_conformsToProtocol(lVar2,&TargetProtocolDescriptor_100cb7e90);
  if (lVar2 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    _swift_retain(param_3);
    plVar3 = param_3;
  }
  *(long **)(param_5 + 0x38) = plVar3;
  *(long *)(param_5 + 0x40) = lVar2;
  lVar2 = *param_3;
  _swift_conformsToProtocol(lVar2,&TargetProtocolDescriptor_100cb7e24);
  if (lVar2 != 0) {
    *(long **)(param_5 + 0x48) = param_3;
    *(long *)(param_5 + 0x50) = lVar2;
    *(undefined8 *)(param_5 + 0x10) = 0;
    *(undefined8 *)(param_5 + 0x18) = 0;
    return param_5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100630e3c);
  (*pcVar1)();
}



/* Address: 0x100630e3c | FUN_100630e3c */

long FUN_100630e3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  *(undefined2 *)(param_5 + 0x58) = 0;
  *(undefined8 *)(param_5 + 0x28) = param_1;
  *(undefined8 *)(param_5 + 0x30) = param_2;
  *(undefined8 *)(param_5 + 0x20) = param_4;
  lVar2 = param_3;
  _swift_getObjectType();
  _swift_conformsToProtocol();
  if (lVar2 == 0 || param_3 == 0) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    lVar3 = param_3;
  }
  *(long *)(param_5 + 0x38) = lVar3;
  *(long *)(param_5 + 0x40) = lVar2;
  lVar2 = param_3;
  _swift_getObjectType();
  _swift_conformsToProtocol();
  if (lVar2 == 0 || param_3 == 0) {
    _swift_unknownObjectRelease(param_3);
    param_3 = 0;
    lVar2 = 0;
    lVar3 = *(long *)(param_5 + 0x38);
  }
  *(long *)(param_5 + 0x48) = param_3;
  *(long *)(param_5 + 0x50) = lVar2;
  *(undefined8 *)(param_5 + 0x10) = 0;
  *(undefined8 *)(param_5 + 0x18) = 0;
  if (lVar3 != 0 || param_3 != 0) {
    return param_5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100630efc);
  (*pcVar1)();
}



/* Address: 0x100630efc | FUN_100630efc */

void FUN_100630efc(void)

{
  FUN_1006319ec(PTR__swift_unknownObjectRelease_100eae458,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100630f10 | thunk_FUN_100631948 */

void thunk_FUN_100631948(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = uVar3;
  _swift_getObjectType(uVar3);
  FUN_100630bd0(uVar3,uVar4,uVar1,uVar5,uVar2);
  return;
}



/* Address: 0x100630f14 | thunk_FUN_10063198c */

void thunk_FUN_10063198c(void)

{
  FUN_10063198c();
  return;
}



/* Address: 0x100630f18 | FUN_100630f18 */

void FUN_100630f18(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar5 + 0x40);
  ppuVar3 = *(undefined ***)(lVar5 + 0x48);
  lVar1 = lVar2;
  if (lVar2 == 0) {
    lVar1 = 0;
    FUN_10063c734();
    _swift_allocObject();
    uVar6 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    uVar9 = *(undefined8 *)(lVar5 + 0x38);
    uVar8 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined ***)(lVar1 + 0x30) = ppuVar3;
    *(undefined2 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = uVar6;
    *(undefined ***)(lVar1 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(lVar1 + 0x20) = lVar5;
    *(undefined8 *)(lVar1 + 0x18) = uVar9;
    *(undefined8 *)(lVar1 + 0x10) = uVar8;
    _swift_retain(lVar5);
    _swift_unknownObjectRetain(uVar8);
    ppuVar3 = &PTR_PTR_100eeeed8;
  }
  lVar5 = lVar1;
  _swift_getObjectType(lVar1);
  pcVar7 = (code *)ppuVar3[0xd];
  _swift_unknownObjectRetain(lVar2);
  (*pcVar7)(lVar5);
  _swift_unknownObjectRelease(lVar1);
  if ((param_2 & 0xff) == 0) {
    if (DAT_100fd7158 != -1) {
      _swift_once(&DAT_100fd7158,FUN_10061da30);
    }
    puVar4 = &DAT_101057bf8;
  }
  else if (((uint)param_2 & 0xff) == 1) {
    if (DAT_100fd7160 != -1) {
      _swift_once(&DAT_100fd7160,FUN_10061d9ac);
    }
    puVar4 = &DAT_101057c00;
  }
  else {
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    puVar4 = &DAT_101057be8;
  }
  uVar6 = *puVar4;
  lVar2 = lVar5;
  _swift_getObjectType(lVar5);
  pcVar7 = (code *)ppuVar3[10];
  _swift_errorRetain(uVar6);
  (*pcVar7)(uVar6,param_2,param_3,lVar2,ppuVar3);
  _swift_errorRelease(uVar6);
  _swift_unknownObjectRelease(lVar5);
  return;
}



/* Address: 0x1006310f8 | FUN_1006310f8 */

void FUN_1006310f8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_2;
  _swift_retain(lVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  _swift_retain(lVar1);
  _swift_retain(param_2);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = param_1;
  _swift_release(uVar2);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(long *)(lVar1 + 0x18) = param_1;
    _swift_retain_n(param_1,2);
    _swift_release(uVar2);
    _swift_release(lVar1);
    return;
  }
  _swift_retain(param_1);
  return;
}



/* Address: 0x1006311a0 | FUN_1006311a0 */

void FUN_1006311a0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  _swift_retain_n(lVar1,2);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = param_2;
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(long *)(param_2 + 0x18) = param_1;
  _swift_retain(param_2);
  _swift_release(uVar2);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(long *)(lVar1 + 0x10) = param_1;
    _swift_retain_n(param_1,2);
    _swift_release(uVar2);
    _swift_release(lVar1);
    return;
  }
  _swift_retain(param_1);
  return;
}



/* Address: 0x100631244 | FUN_100631244 */

void FUN_100631244(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    _swift_retain(lVar4);
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    *(long *)(lVar1 + 0x10) = lVar4;
    _swift_retain_n(lVar4,2);
    _swift_retain(lVar1);
    _swift_release(uVar3);
  }
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(long *)(lVar4 + 0x18) = lVar1;
    _swift_retain(lVar4);
    _swift_retain(lVar1);
    _swift_release(lVar4);
    _swift_release(uVar3);
  }
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x58) = 1;
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 0x48);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006313ac);
        (*pcVar8)();
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 8);
      _swift_unknownObjectRetain(lVar6);
      lVar7 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      lVar7 = lVar6;
    }
    lVar2 = lVar6;
    _swift_getObjectType(lVar6);
    pcVar8 = *(code **)(lVar5 + 0x10);
    _swift_unknownObjectRetain(lVar7);
    (*pcVar8)(param_1,lVar2,lVar5);
    _swift_unknownObjectRelease(lVar6);
  }
  if (param_2 == 0) {
    _swift_release(lVar1);
  }
  else {
    FUN_100649994(0,0,param_2);
    _swift_release(lVar4);
    lVar4 = lVar1;
  }
  _swift_release(lVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _swift_release(uVar3);
  return;
}



/* Address: 0x1006313ac | FUN_1006313ac */

void FUN_1006313ac(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  puVar10 = puVar9;
  if (puVar9 == (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x48);
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100631530);
      (*pcVar11)();
    }
    _swift_unknownObjectRetain(puVar10);
  }
  puVar2 = puVar10;
  _swift_getObjectType();
  _swift_conformsToProtocol();
  _swift_unknownObjectRetain(puVar9);
  _swift_unknownObjectRelease();
  if (puVar2 == (undefined8 *)0x0) {
    if (param_2 != 0) {
      FUN_10061e4f8();
      puVar3 = &DAT_100eeb710;
      uVar8 = 0;
      _swift_allocError(&DAT_100eeb710,puVar10,0,0);
      *puVar10 = 0xd;
      *(undefined1 *)(puVar10 + 1) = 3;
      uVar4 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar5 = uVar4;
      lVar7 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar5 & 1) == 0) {
        puVar6 = &DAT_100eedd80;
        _swift_allocObject(&DAT_100eedd80,0x20,7);
        *(long *)(puVar6 + 0x10) = param_2;
        *(undefined **)(puVar6 + 0x18) = puVar3;
        pcVar11 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        _swift_errorRetain(puVar3);
        (*pcVar11)(thunk_FUN_10061dfe0,puVar6,uVar4,lVar1);
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
  }
  else {
    FUN_100628b98(param_2);
  }
  return;
}



/* Address: 0x100631530 | FUN_100631530 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100631530(void)

{
  return ZEXT816(0x100fd7b30);
}



/* Address: 0x100631550 | FUN_100631550 */

void FUN_100631550(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100631584 | FUN_100631584 */

void FUN_100631584(void)

{
  long unaff_x20;
  
  FUN_100628db4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100631590 | FUN_100631590 */

void FUN_100631590(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006315bc | FUN_1006315bc */

void FUN_1006315bc(void)

{
  long unaff_x20;
  
  FUN_1006290f0(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006315cc | FUN_1006315cc */

void FUN_1006315cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1005dfc80(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100631600 | FUN_100631600 */

void FUN_100631600(void)

{
  long unaff_x20;
  
  FUN_10062beac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10063161c | FUN_10063161c */

void FUN_10063161c(void)

{
  long unaff_x20;
  
  FUN_10062a208(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_10062add8,&DAT_100eedd08,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x100631650 | FUN_100631650 */

void FUN_100631650(void)

{
  long unaff_x20;
  
  FUN_10062a208(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_10062aea4,&DAT_100eedcb8,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x100631684 | FUN_100631684 */

undefined8 FUN_100631684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd7870;
  FUN_1000f7830(&DAT_100fd7870,&DAT_100c69448);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1006316d4 | thunk_FUN_100631740 */

void thunk_FUN_100631740(void)

{
  FUN_100631740();
  return;
}



/* Address: 0x1006316d8 | FUN_1006316d8 */

void FUN_1006316d8(void)

{
  long unaff_x20;
  
  FUN_10062a208(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x60)
                ,FUN_10062ac2c,&DAT_100eedc68,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x100631710 | thunk_FUN_100631820 */

void thunk_FUN_100631820(void)

{
  FUN_100631820();
  return;
}



/* Address: 0x100631714 | FUN_100631714 */

void FUN_100631714(void)

{
  FUN_1006318a0(FUN_10062a068);
  return;
}



/* Address: 0x100631720 | FUN_100631720 */

void FUN_100631720(void)

{
  FUN_10062a020();
  return;
}



/* Address: 0x100631740 | FUN_100631740 */

void FUN_100631740(void)

{
  char cVar1;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  cVar1 = *(char *)(unaff_x20 + 0x59);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x18);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
    if ((*(char *)(unaff_x20 + 0x38) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x40) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x40) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                  (ulong)*(uint7 *)(unaff_x20 + 0x28));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006317e8 | FUN_1006317e8 */

void FUN_1006317e8(void)

{
  long unaff_x20;
  
  FUN_10062a208(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x60)
                ,FUN_10062acf8,&DAT_100eedc40,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x100631820 | FUN_100631820 */

void FUN_100631820(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100631894 | FUN_100631894 */

void FUN_100631894(void)

{
  FUN_1006318a0(FUN_10062a084);
  return;
}



/* Address: 0x1006318a0 | FUN_1006318a0 */

void FUN_1006318a0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar2 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  FUN_10062a374(*(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + uVar2,
                *(undefined8 *)
                 (unaff_x20 + (*(long *)(lVar1 + 0x40) + uVar2 + 7 & 0xfffffffffffffff8)),
                *(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Address: 0x1006318e4 | FUN_1006318e4 */

void FUN_1006318e4(void)

{
  FUN_10062a020();
  return;
}



/* Address: 0x100631904 | FUN_100631904 */

void FUN_100631904(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004594(unaff_x20 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100631938 | FUN_100631938 */

void FUN_100631938(void)

{
  long unaff_x20;
  
  FUN_10062a894(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x38)
               );
  return;
}



/* Address: 0x100631948 | FUN_100631948 */

void FUN_100631948(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = uVar3;
  _swift_getObjectType(uVar3);
  FUN_100630bd0(uVar3,uVar4,uVar1,uVar5,uVar2);
  return;
}



/* Address: 0x10063198c | FUN_10063198c */

void FUN_10063198c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006319c0 | FUN_1006319c0 */

void FUN_1006319c0(void)

{
  long unaff_x20;
  
  FUN_100628d48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006319c8 | FUN_1006319c8 */

void FUN_1006319c8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1006319d8 | FUN_1006319d8 */

void FUN_1006319d8(void)

{
  FUN_1006319ec(PTR__swift_release_100eae3e8,PTR__swift_bridgeObjectRelease_100eae160);
  return;
}



/* Address: 0x1006319ec | FUN_1006319ec */

void FUN_1006319ec(code *param_1,code *param_2)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100631a38 | FUN_100631a38 */

void FUN_100631a38(void)

{
  FUN_100629a14();
  return;
}



/* Address: 0x100631a58 | FUN_100631a58 */

void FUN_100631a58(void)

{
  FUN_100629a14();
  return;
}



/* Address: 0x100631a78 | FUN_100631a78 */

void FUN_100631a78(void)

{
  FUN_100629a14();
  return;
}



/* Address: 0x100631a98 | FUN_100631a98 */

void FUN_100631a98(void)

{
  FUN_100629a14();
  return;
}



/* Address: 0x100631ab8 | FUN_100631ab8 */

void FUN_100631ab8(void)

{
  char cVar1;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  cVar1 = *(char *)(unaff_x20 + 0x59);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x18);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
    if ((*(char *)(unaff_x20 + 0x38) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x40) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x40) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                  (ulong)*(uint7 *)(unaff_x20 + 0x28));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100631b58 | FUN_100631b58 */

void FUN_100631b58(void)

{
  long unaff_x20;
  
  FUN_1006296f4(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x100631b64 | FUN_100631b64 */

void FUN_100631b64(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x100631bc4 | FUN_100631bc4 */

void FUN_100631bc4(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  FUN_1006298a0(*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100631be0 | FUN_100631be0 */

void FUN_100631be0(void)

{
  FUN_100629a14();
  return;
}



/* Address: 0x100631c00 | FUN_100631c00 */

void FUN_100631c00(void)

{
  FUN_100629a14();
  return;
}


