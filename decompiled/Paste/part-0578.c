/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100665450 | FUN_100665450 */

void FUN_100665450(void)

{
  undefined8 *puVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_beginAccess(puVar1,auStack_38,0,0);
  _swift_retain(*puVar1);
  return;
}



/* Address: 0x1006654b4 | FUN_1006654b4 */

void FUN_1006654b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(char *)((long)puVar1 + 0x16) = (char)((ulong)param_3 >> 0x30);
  *(short *)((long)puVar1 + 0x14) = (short)((ulong)param_3 >> 0x20);
  *(int *)(puVar1 + 2) = (int)param_3;
  _swift_release(uVar2);
  return;
}



/* Address: 0x100665528 | FUN_100665528 */

undefined1  [16] FUN_100665528(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x70);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100665568 | FUN_100665568 */

void FUN_100665568(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar2 + 0x70));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)puVar1 + 0xf) = 0;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = param_3;
  return;
}



/* Address: 0x1006655dc | FUN_1006655dc */

void FUN_1006655dc(undefined8 param_1,code *param_2)

{
  long *plVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [24];
  long local_78;
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  lVar6 = *unaff_x20;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(*(long *)(lVar6 + 0x58) + 8),*(undefined8 *)(lVar6 + 0x50),
             0x100cb8688,&TargetProtocolRequirement_100cb8690);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  plVar1 = (long *)((long)unaff_x20 + *(long *)(lVar6 + 0x70));
  _swift_beginAccess(plVar1,auStack_90,1,0);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    local_64 = *(undefined2 *)((long)plVar1 + 0x14);
    iStack_6c = *(int *)((long)plVar1 + 0xc);
    local_68 = (undefined4)plVar1[2];
    local_70 = (int)plVar1[1];
    local_62 = *(undefined1 *)((long)plVar1 + 0x16);
    local_78 = lVar6;
    if (iStack_6c != local_70) {
      *plVar1 = 0;
      plVar1[1] = 0;
      *(undefined8 *)((long)plVar1 + 0xf) = 0;
      (*param_2)(auStack_90 + -(lVar4 + 0xfU & 0xfffffffffffffff0),&local_78);
      if (unaff_x21 == 0) {
        (**(code **)(lVar5 + 0x20))
                  (param_1,auStack_90 + -(lVar4 + 0xfU & 0xfffffffffffffff0),
                   CONCAT71(extraout_var,OVar2.value));
      }
      FUN_100665744();
      _swift_release(local_78);
      return;
    }
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,1,1,lVar3);
  return;
}



/* Address: 0x100665744 | FUN_100665744 */

void FUN_100665744(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined2 *)((long)param_2 + 0x14);
  uVar5 = *(undefined1 *)((long)param_2 + 0x16);
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + 0x70));
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar7 = *puVar1;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)((long)puVar1 + 0x16) = uVar5;
  *(undefined2 *)((long)puVar1 + 0x14) = uVar6;
  *(undefined4 *)(puVar1 + 2) = uVar4;
  _swift_retain(uVar2);
  _swift_release(uVar7);
  return;
}



/* Address: 0x1006657d0 | FUN_1006657d0 */

/* WARNING: Removing unreachable block (ram,0x0001006659b0) */

void FUN_1006657d0(char param_1,uint param_2,code *param_3)

{
  long *plVar1;
  uint uVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_100;
  long local_f8;
  long lStack_f0;
  undefined8 local_e8;
  uint local_dc;
  long local_c0;
  long local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [16];
  char local_80;
  
  lVar11 = *unaff_x20;
  local_e8 = *(undefined8 *)(lVar11 + 0x50);
  lVar5 = *(long *)(lVar11 + 0x58);
  lVar4 = 0xff;
  local_dc = param_2;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar5 + 8),local_e8,0x100cb8688,
             &TargetProtocolRequirement_100cb8690);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_f0 = CONCAT71(extraout_var,OVar3.value);
  local_f8 = *(long *)(lStack_f0 + -8);
  uVar7 = *(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)&local_100 - uVar7;
  lVar8 = lVar6 - uVar7;
  lVar10 = *(long *)(lVar4 + -8);
  uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar8 - uVar7;
  if (param_1 == '\x01') {
    plVar1 = (long *)((long)unaff_x20 + *(long *)(lVar11 + 0x70));
    local_100 = lVar12 - uVar7;
    _swift_beginAccess(plVar1,auStack_a8,0,0);
    lVar11 = *plVar1;
    if (lVar11 == 0) {
      if (DAT_100fd6f38 != -1) {
        _swift_once(&DAT_100fd6f38,FUN_100611c84);
      }
      local_c0 = DAT_101057bd0;
      local_b8 = DAT_101057bd8;
      local_b0 = DAT_101057be0;
      local_ac = DAT_101057be4;
      local_aa = DAT_101057be6;
      _swift_retain();
      lVar11 = 0;
    }
    else {
      local_b8 = plVar1[1];
      if ((int)((ulong)local_b8 >> 0x20) != (int)local_b8) goto LAB_1006658d8;
      local_aa = *(undefined1 *)((long)plVar1 + 0x16);
      local_ac = *(undefined2 *)((long)plVar1 + 0x14);
      local_b0 = (undefined4)plVar1[2];
      local_c0 = lVar11;
    }
    uVar2 = local_dc;
    _swift_beginAccess((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),auStack_90,0x21,0);
    pcVar9 = *(code **)(lVar5 + 0x18);
    _swift_retain(lVar11);
    (*pcVar9)(lVar8,&local_c0,uVar2 & 1,local_e8,lVar5);
    _swift_endAccess(auStack_90);
    if (unaff_x21 == 0) {
      lVar6 = lVar8;
      (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
      lVar5 = local_100;
      if ((int)lVar6 == 1) {
        _swift_release(local_c0);
        (**(code **)(local_f8 + 8))(lVar8,lStack_f0);
        return;
      }
      (**(code **)(lVar10 + 0x20))(local_100,lVar8,lVar4);
      (*param_3)(lVar5);
      (**(code **)(lVar10 + 8))(lVar5,lVar4);
    }
    _swift_release(local_c0);
  }
  else {
LAB_1006658d8:
    local_80 = param_1;
    FUN_1006655dc(lVar6,FUN_1006662a0,auStack_90);
    if (unaff_x21 == 0) {
      pcVar9 = *(code **)(lVar10 + 0x30);
      while (lVar5 = lVar6, (*pcVar9)(lVar6,1,lVar4), (int)lVar5 != 1) {
        (**(code **)(lVar10 + 0x20))(lVar12,lVar6,lVar4);
        (*param_3)(lVar12);
        (**(code **)(lVar10 + 8))(lVar12,lVar4);
        local_80 = param_1;
        FUN_1006655dc(lVar6,FUN_1006662a0,auStack_90);
      }
      (**(code **)(local_f8 + 8))(lVar6,lStack_f0);
      FUN_100665b64();
    }
  }
  return;
}



/* Address: 0x100665b64 | FUN_100665b64 */

void FUN_100665b64(void)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar7 = *unaff_x20;
  plVar1 = (long *)((long)unaff_x20 + *(long *)(lVar7 + 0x68));
  lVar5 = lVar7;
  if ((char)plVar1[1] != '\x01') {
    lVar5 = *plVar1;
    plVar1 = (long *)((long)unaff_x20 + *(long *)(lVar7 + 0x70));
    plVar3 = plVar1;
    _swift_beginAccess(plVar1,auStack_a8,0,0);
    if (*plVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100665d00);
      (*pcVar8)();
    }
    if (lVar5 < (long)(ulong)(uint)(*(int *)((long)plVar1 + 0xc) - (int)plVar1[1])) {
      FUN_10063b2bc();
      _swift_allocError(&DAT_100eee740,plVar3,0,0);
      _swift_willThrow();
      return;
    }
    lVar5 = *unaff_x20;
  }
  puVar2 = (ulong *)((long)unaff_x20 + *(long *)(lVar5 + 0x70));
  _swift_beginAccess(puVar2,auStack_78,0,0);
  uVar6 = *puVar2;
  if ((uVar6 != 0) && ((int)puVar2[1] != 0)) {
    _swift_beginAccess((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),auStack_90,0x21,0);
    pcVar8 = *(code **)(*(long *)(*(long *)(lVar7 + 0x58) + 8) + 0x30);
    uVar4 = uVar6;
    _swift_retain();
    (*pcVar8)();
    _swift_endAccess(auStack_90);
    _swift_release(uVar6);
    if ((uVar4 & 1) != 0) {
      _swift_beginAccess(puVar2,auStack_90,0x21,0);
      if (*puVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100665d04);
        (*pcVar8)();
      }
      FUN_100613674();
      _swift_endAccess(auStack_90);
    }
  }
  return;
}



/* Address: 0x100665d04 | FUN_100665d04 */

void FUN_100665d04(undefined8 param_1,undefined8 param_2,char param_3,long *param_4,uint param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  
  lVar3 = *param_4;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  lVar2 = *(long *)(lVar3 + 0x58);
  if (param_3 == '\0') {
    _swift_beginAccess((long)param_4 + *(long *)(lVar3 + 0x60),auStack_68,0x21,0);
    (**(code **)(lVar2 + 0x10))(param_1,param_2,uVar1,lVar2);
  }
  else {
    _swift_beginAccess((long)param_4 + *(long *)(lVar3 + 0x60),auStack_68,0x21,0);
    (**(code **)(lVar2 + 0x18))(param_1,param_2,param_5 & 1,uVar1,lVar2);
  }
  _swift_endAccess(auStack_68);
  return;
}



/* Address: 0x100665de4 | FUN_100665de4 */

void FUN_100665de4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100665d04(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100665e04 | FUN_100665e04 */

void FUN_100665e04(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  return;
}



/* Address: 0x100665e44 | FUN_100665e44 */

void FUN_100665e44(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100665e90 | FUN_100665e90 */

int FUN_100665e90(void)

{
  long *plVar1;
  int iVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  plVar1 = (long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_beginAccess(plVar1,auStack_38,0,0);
  iVar2 = 0;
  if (*plVar1 != 0) {
    iVar2 = *(int *)((long)plVar1 + 0xc) - (int)plVar1[1];
  }
  return iVar2;
}



/* Address: 0x100665ee4 | FUN_100665ee4 */

void FUN_100665ee4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100664f8c(param_1,param_2,param_3 & 0xffffffffffffff);
  FUN_1006657d0(0,0,param_4,param_5);
  return;
}



/* Address: 0x100665f30 | FUN_100665f30 */

void FUN_100665f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1006657d0(1,param_1,param_2,param_3);
  return;
}



/* Address: 0x100665f54 | FUN_100665f54 */

void FUN_100665f54(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6bff0,param_1);
  return;
}



/* Address: 0x100665f64 | FUN_100665f64 */

void FUN_100665f64(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38 [3];
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38[0] = *(long *)(lVar1 + -8) + 0x40;
    local_38[1] = 0x100c6c0b8;
    local_38[2] = 0x100c6c0d0;
    _swift_initClassMetadata2(param_1,0,3,local_38,param_1 + 0x60);
  }
  return;
}



/* Address: 0x100665fe8 | FUN_100665fe8 */

void FUN_100665fe8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100665ff4 | FUN_100665ff4 */

void FUN_100665ff4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100666000 | FUN_100666000 */

undefined8 FUN_100666000(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined8 uVar4;
  long unaff_x21;
  String SVar5;
  tuple2_conflict1 tVar6;
  char *local_b0;
  void *pvStack_a8;
  undefined *local_98;
  undefined1 local_6f;
  undefined1 auStack_68 [24];
  
  uVar1 = param_3;
  FUN_100663f40();
  uVar4 = extraout_x8;
  if (unaff_x21 == 0) {
    if (param_2 == 0) {
      uVar4 = 1;
    }
    else {
      pvVar2 = (void *)0x0;
      _swift_beginAccess(param_2 + 0x18,auStack_68,0,0);
      lVar3 = *(long *)(param_2 + 0x18);
      _swift_retain(param_2);
      SVar5.bridgeObject = pvVar2;
      SVar5.str = (char *)(ulong)(uint)((int)(param_3 >> 0x20) - (int)param_3);
      tVar6 = Swift::String::_fromUTF8Repairing
                        ((undefined *)
                         (lVar3 + (uVar1 >> 0x18 & 0xffff00) + (uVar1 >> 0x30 & 0xff) +
                         (param_3 & 0xffffffff)),SVar5);
      pvVar2 = tVar6.result.bridgeObject;
      _swift_release_n(param_2,2,tVar6._16_8_);
      local_98 = PTR___type_metadata_for_Swift_String_100eac208;
      local_6f = 2;
      lVar3 = *(long *)(param_1 + 0x10);
      local_b0 = tVar6.result.str;
      pvStack_a8 = pvVar2;
      if (lVar3 == 0) {
        FUN_1005e70f4(&local_b0);
      }
      else {
        _swift_bridgeObjectRetain(pvVar2);
        _swift_retain(lVar3);
        FUN_10062b37c(&local_b0);
        _swift_release(lVar3);
        FUN_1005e70f4(&local_b0);
        _swift_bridgeObjectRelease(pvVar2);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Address: 0x100666130 | FUN_100666130 */

undefined8 FUN_100666130(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  long local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_37;
  
  uVar2 = (undefined4)((ulong)param_3 >> 0x20);
  uVar1 = (undefined4)param_3;
  FUN_100663f40();
  uVar3 = extraout_x8;
  if (unaff_x21 == 0) {
    if (param_2 == 0) {
      uVar3 = 1;
    }
    else {
      local_62 = (undefined1)((uint)uVar2 >> 0x10);
      local_64 = (undefined2)uVar2;
      local_37 = 0;
      lVar4 = *(long *)(param_1 + 0x10);
      local_78 = param_2;
      uStack_70 = param_3;
      local_68 = uVar1;
      if (lVar4 == 0) {
        FUN_1005e70f4(&local_78);
      }
      else {
        _swift_retain();
        _swift_retain(lVar4);
        FUN_10062b37c(&local_78);
        _swift_release(lVar4);
        FUN_1005e70f4(&local_78);
        _swift_release(param_2);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Address: 0x1006661e8 | FUN_1006661e8 */

undefined8 FUN_1006661e8(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  long local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_37;
  
  uVar2 = (undefined4)((ulong)param_3 >> 0x20);
  uVar1 = (undefined4)param_3;
  FUN_100663a74();
  uVar3 = extraout_x8;
  if (unaff_x21 == 0) {
    if (param_2 == 0) {
      uVar3 = 1;
    }
    else {
      local_62 = (undefined1)((uint)uVar2 >> 0x10);
      local_64 = (undefined2)uVar2;
      local_37 = 0;
      lVar4 = *(long *)(param_1 + 0x10);
      local_78 = param_2;
      uStack_70 = param_3;
      local_68 = uVar1;
      if (lVar4 == 0) {
        FUN_1005e70f4(&local_78);
      }
      else {
        _swift_retain();
        _swift_retain(lVar4);
        FUN_10062b37c(&local_78);
        _swift_release(lVar4);
        FUN_1005e70f4(&local_78);
        _swift_release(param_2);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Address: 0x1006662a0 | FUN_1006662a0 */

void FUN_1006662a0(void)

{
  FUN_100665de4();
  return;
}



/* Address: 0x1006662b4 | thunk_FUN_1006689fc */

void thunk_FUN_1006689fc(ulong param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = (uint)(param_1 >> 0x3e);
  if (uVar3 == 0) {
    if (((param_2 >> 0x3e == 0) && (*(char *)(param_1 + 0x11) == *(char *)(param_2 + 0x11))) &&
       (*(short *)(param_1 + 0x12) == *(short *)(param_2 + 0x12))) {
      bVar1 = *(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14);
      goto LAB_100668b6c;
    }
  }
  else if (uVar3 == 1) {
    if (param_2 >> 0x3e == 1) {
      param_1 = param_1 & 0x3fffffffffffffff;
      param_2 = param_2 & 0x3fffffffffffffff;
      if (((*(char *)(param_1 + 0x11) == *(char *)(param_2 + 0x11)) &&
          (*(short *)(param_1 + 0x12) == *(short *)(param_2 + 0x12))) &&
         ((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
          (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))))) {
        lStack_90 = *(long *)(param_1 + 0x18);
        lStack_88 = *(long *)(param_1 + 0x20);
        bVar1 = lStack_90 == *(long *)(param_2 + 0x18) && lStack_88 == *(long *)(param_2 + 0x20);
        goto LAB_100668b6c;
      }
    }
  }
  else if ((long)param_2 < -0x4000000000000000) {
    param_1 = param_1 & 0x3fffffffffffffff;
    param_2 = param_2 & 0x3fffffffffffffff;
    if (*(char *)(param_1 + 0x11) == *(char *)(param_2 + 0x11)) {
      uStack_58 = *(undefined8 *)(param_1 + 0x4a);
      uStack_60 = *(undefined8 *)(param_1 + 0x42);
      uStack_48 = *(undefined8 *)(param_1 + 0x5a);
      uStack_50 = *(undefined8 *)(param_1 + 0x52);
      uStack_38 = *(undefined8 *)(param_1 + 0x6a);
      uStack_40 = *(undefined8 *)(param_1 + 0x62);
      uStack_30 = *(undefined8 *)(param_1 + 0x72);
      lStack_88 = *(long *)(param_1 + 0x1a);
      lStack_90 = *(long *)(param_1 + 0x12);
      uStack_78 = *(undefined8 *)(param_1 + 0x2a);
      uStack_80 = *(undefined8 *)(param_1 + 0x22);
      uStack_68 = *(undefined8 *)(param_1 + 0x3a);
      uStack_70 = *(undefined8 *)(param_1 + 0x32);
      uStack_d8 = *(undefined8 *)(param_2 + 0x4a);
      uStack_e0 = *(undefined8 *)(param_2 + 0x42);
      uStack_c8 = *(undefined8 *)(param_2 + 0x5a);
      uStack_d0 = *(undefined8 *)(param_2 + 0x52);
      uStack_b8 = *(undefined8 *)(param_2 + 0x6a);
      uStack_c0 = *(undefined8 *)(param_2 + 0x62);
      uStack_b0 = *(undefined8 *)(param_2 + 0x72);
      uStack_108 = *(undefined8 *)(param_2 + 0x1a);
      uStack_110 = *(undefined8 *)(param_2 + 0x12);
      uStack_f8 = *(undefined8 *)(param_2 + 0x2a);
      uStack_100 = *(undefined8 *)(param_2 + 0x22);
      uStack_e8 = *(undefined8 *)(param_2 + 0x3a);
      uStack_f0 = *(undefined8 *)(param_2 + 0x32);
      iVar2 = _strncmp((char *)&lStack_90,(char *)&uStack_110,0x68);
      bVar1 = iVar2 == 0;
      goto LAB_100668b6c;
    }
  }
  bVar1 = false;
LAB_100668b6c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar1);
}



/* Address: 0x1006662b8 | thunk_FUN_100668d24 */

/* WARNING: Removing unreachable block (ram,0x000100668e18) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100668d6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_FUN_100668d24(undefined8 param_1,undefined8 param_2)

{
  _ArrayBuffer<undefined> _Var1;
  undefined *puVar2;
  UnsafePointer<__int8> cString;
  undefined4 uVar3;
  String SVar4;
  undefined4 uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uStack_4c = uVar3;
  _Var1 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
  *(undefined8 *)(_Var1.unknown + 0x10) = 0x10;
  cString.unknown = _Var1.unknown + 0x20;
  *(undefined8 *)cString.unknown = 0;
  *(undefined8 *)(_Var1.unknown + 0x28) = 0;
  FUN_10060a728(2,&uStack_4c,cString.unknown,0x10);
  SVar4 = Swift::String::init(cString);
  _swift_bridgeObjectRelease(_Var1.unknown);
  puVar2 = &DAT_100fd9188;
  FUN_1000f7830(&DAT_100fd9188,0x100c6c130);
  _swift_allocObject();
  *(int *)(puVar2 + 0x10) = (int)param_1;
  *(undefined4 *)(puVar2 + 0x14) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(String *)(puVar2 + 0x20) = SVar4;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lStack_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1006662bc | thunk_FUN_100668e40 */

/* WARNING: Removing unreachable block (ram,0x000100668f70) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100668e94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100668e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                         undefined4 param_4)

{
  _ArrayBuffer<undefined> _Var1;
  undefined *puVar2;
  UnsafePointer<__int8> cString;
  String SVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_80 = param_2;
  uStack_78 = param_3;
  _Var1 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
  *(undefined8 *)(_Var1.unknown + 0x10) = 0x2e;
  cString.unknown = _Var1.unknown + 0x20;
  *(undefined8 *)(_Var1.unknown + 0x28) = 0;
  *(undefined8 *)cString.unknown = 0;
  *(undefined8 *)(_Var1.unknown + 0x38) = 0;
  *(undefined8 *)(_Var1.unknown + 0x30) = 0;
  *(undefined8 *)(_Var1.unknown + 0x46) = 0;
  *(undefined8 *)(_Var1.unknown + 0x3e) = 0;
  FUN_10060a728(0x1e,&uStack_80,cString.unknown,0x2e);
  SVar3 = Swift::String::init(cString);
  _swift_bridgeObjectRelease(_Var1.unknown);
  puVar2 = &DAT_100fd9178;
  FUN_1000f7830(&DAT_100fd9178,0x100c6c120);
  _swift_allocObject();
  puVar2[0x10] = (char)param_1;
  puVar2[0x11] = (char)((ulong)param_1 >> 8);
  *(short *)(puVar2 + 0x12) = (short)((ulong)param_1 >> 0x10);
  *(int *)(puVar2 + 0x14) = (int)((ulong)param_1 >> 0x20);
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined4 *)(puVar2 + 0x28) = param_4;
  *(String *)(puVar2 + 0x30) = SVar3;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lStack_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (ulong)puVar2 | 0x4000000000000000;
}



/* Address: 0x1006662c0 | FUN_1006662c0 */

ulong FUN_1006662c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_100fd8a40;
  FUN_1000f7830(&DAT_100fd8a40,0x100c6c110);
  _swift_allocObject();
  uVar2 = param_1[8];
  uVar4 = param_1[0xb];
  uVar3 = param_1[10];
  *(undefined8 *)(puVar1 + 0x58) = param_1[9];
  *(undefined8 *)(puVar1 + 0x50) = uVar2;
  *(undefined8 *)(puVar1 + 0x68) = uVar4;
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  uVar2 = *(undefined8 *)((long)param_1 + 0x5a);
  *(undefined8 *)(puVar1 + 0x72) = *(undefined8 *)((long)param_1 + 0x62);
  *(undefined8 *)(puVar1 + 0x6a) = uVar2;
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  uVar4 = param_1[4];
  uVar3 = param_1[7];
  uVar2 = param_1[6];
  *(undefined8 *)(puVar1 + 0x38) = param_1[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined8 *)(puVar1 + 0x48) = uVar3;
  *(undefined8 *)(puVar1 + 0x40) = uVar2;
  return (ulong)puVar1 | 0x8000000000000000;
}



/* Address: 0x100666324 | thunk_FUN_100668c30 */

void thunk_FUN_100668c30(void)

{
  FUN_100668c30();
  return;
}



/* Address: 0x100666328 | FUN_100666328 */

void FUN_100666328(Hasher param_1,Hasher param_2,void *param_3,__uint64 param_4,char param_5)

{
  String SVar1;
  String SVar2;
  
  if (param_5 == '\0') {
    Swift::Hasher::_combine(0,param_2);
    SVar2.bridgeObject = param_3;
    SVar2.str = param_2.unknown;
    Swift::String::hash(param_1,SVar2);
  }
  else {
    if (param_5 == '\x01') {
      Swift::Hasher::_combine(3,param_2);
      SVar1.bridgeObject = param_3;
      SVar1.str = param_2.unknown;
      Swift::String::hash(param_1,SVar1);
      return;
    }
    if ((param_4 == 0 && param_3 == (void *)0x0) && param_2.unknown == (undefined *)0x0) {
      param_4 = 1;
    }
    else {
      param_4 = 2;
    }
  }
  Swift::Hasher::_combine(param_4,param_2);
  return;
}



/* Address: 0x1006663c8 | FUN_1006663c8 */

void FUN_1006663c8(Hasher param_1,undefined *param_2,Hasher param_3,char param_4)

{
  Hasher HVar1;
  String SVar2;
  String SVar3;
  undefined1 auStack_78 [72];
  
  HVar1.unknown = param_2;
  Swift::Hasher::init(0);
  if (param_4 == '\0') {
    Swift::Hasher::_combine(0,HVar1);
    SVar3.bridgeObject = param_2;
    SVar3.str = param_1.unknown;
    Swift::String::hash((Hasher)auStack_78,SVar3);
  }
  else {
    if (param_4 == '\x01') {
      Swift::Hasher::_combine(3,HVar1);
      param_3.unknown = auStack_78;
      SVar2.bridgeObject = param_2;
      SVar2.str = param_1.unknown;
      Swift::String::hash(param_3,SVar2);
      goto LAB_100666470;
    }
    if ((param_3.unknown == (undefined1 *)0x0 && param_2 == (undefined *)0x0) &&
        param_1.unknown == (char *)0x0) {
      param_3.unknown = &DAT_00000001;
      param_1.unknown = HVar1.unknown;
    }
    else {
      param_3.unknown = (undefined1 *)0x2;
      param_1.unknown = HVar1.unknown;
    }
  }
  Swift::Hasher::_combine((__uint64)param_3.unknown,param_1);
LAB_100666470:
  Swift::Hasher::_finalize(param_3);
  return;
}



/* Address: 0x10066648c | FUN_10066648c */

void FUN_10066648c(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100668c30(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3),*param_2,param_2[1],
                param_2[2],*(undefined1 *)(param_2 + 3));
  return;
}



/* Address: 0x1006664b0 | FUN_1006664b0 */

void FUN_1006664b0(undefined8 param_1,Hasher param_2)

{
  void *pvVar1;
  char cVar2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  String *unaff_x20;
  Hasher into;
  undefined1 auStack_78 [72];
  
  HVar5.unknown = unaff_x20->str;
  pvVar1 = unaff_x20->bridgeObject;
  SVar4 = *unaff_x20;
  SVar3 = *unaff_x20;
  into.unknown = unaff_x20[1].str;
  cVar2 = *(char *)&unaff_x20[1].bridgeObject;
  Swift::Hasher::init(0);
  if (cVar2 == '\0') {
    Swift::Hasher::_combine(0,param_2);
    Swift::String::hash((Hasher)auStack_78,SVar4);
  }
  else {
    if (cVar2 == '\x01') {
      Swift::Hasher::_combine(3,param_2);
      into.unknown = auStack_78;
      Swift::String::hash(into,SVar3);
      goto LAB_100666550;
    }
    if ((into.unknown == (char *)0x0 && pvVar1 == (void *)0x0) && HVar5.unknown == (char *)0x0) {
      into.unknown = &DAT_00000001;
      HVar5.unknown = param_2.unknown;
    }
    else {
      into.unknown = (char *)0x2;
      HVar5.unknown = param_2.unknown;
    }
  }
  Swift::Hasher::_combine((__uint64)into.unknown,HVar5);
LAB_100666550:
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10066656c | FUN_10066656c */

void FUN_10066656c(Hasher param_1,Hasher param_2)

{
  String SVar1;
  String SVar2;
  char *pcVar3;
  String *unaff_x20;
  char *pcVar4;
  
  pcVar3 = unaff_x20->str;
  SVar2 = *unaff_x20;
  SVar1 = *unaff_x20;
  pcVar4 = unaff_x20[1].str;
  if (*(char *)&unaff_x20[1].bridgeObject == '\0') {
    Swift::Hasher::_combine(0,param_2);
    Swift::String::hash(param_1,SVar2);
    param_2.unknown = pcVar3;
  }
  else {
    if (*(char *)&unaff_x20[1].bridgeObject == '\x01') {
      Swift::Hasher::_combine(3,param_2);
      Swift::String::hash(param_1,SVar1);
      return;
    }
    if ((pcVar4 == (char *)0x0 && unaff_x20->bridgeObject == (void *)0x0) && pcVar3 == (char *)0x0)
    {
      pcVar4 = (char *)0x1;
    }
    else {
      pcVar4 = (char *)0x2;
    }
  }
  Swift::Hasher::_combine((__uint64)pcVar4,param_2);
  return;
}



/* Address: 0x100666620 | FUN_100666620 */

void FUN_100666620(__int64 param_1,Hasher param_2)

{
  void *pvVar1;
  char cVar2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  String *unaff_x20;
  Hasher into;
  undefined1 auStack_78 [72];
  
  HVar5.unknown = unaff_x20->str;
  pvVar1 = unaff_x20->bridgeObject;
  SVar4 = *unaff_x20;
  SVar3 = *unaff_x20;
  into.unknown = unaff_x20[1].str;
  cVar2 = *(char *)&unaff_x20[1].bridgeObject;
  Swift::Hasher::init(param_1);
  if (cVar2 == '\0') {
    Swift::Hasher::_combine(0,param_2);
    Swift::String::hash((Hasher)auStack_78,SVar4);
  }
  else {
    if (cVar2 == '\x01') {
      Swift::Hasher::_combine(3,param_2);
      into.unknown = auStack_78;
      Swift::String::hash(into,SVar3);
      goto LAB_1006666bc;
    }
    if ((into.unknown == (char *)0x0 && pvVar1 == (void *)0x0) && HVar5.unknown == (char *)0x0) {
      into.unknown = &DAT_00000001;
      HVar5.unknown = param_2.unknown;
    }
    else {
      into.unknown = (char *)0x2;
      HVar5.unknown = param_2.unknown;
    }
  }
  Swift::Hasher::_combine((__uint64)into.unknown,HVar5);
LAB_1006666bc:
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1006666d8 | FUN_1006666d8 */

void FUN_1006666d8(void)

{
  _swift_retain();
  return;
}



/* Address: 0x100666704 | FUN_100666704 */

void FUN_100666704(void)

{
  return;
}



/* Address: 0x10066670c | FUN_10066670c */

void FUN_10066670c(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint7 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(uint7 *)(unaff_x20 + 2);
  Swift::Hasher::init(param_1);
  HVar4.unknown = auStack_88;
  FUN_100613bec(HVar4.unknown,uVar1,uVar2,(ulong)uVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100666774 | FUN_100666774 */

undefined1  [16] FUN_100666774(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String *unaff_x20;
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  Swift::_StringGuts::grow(0x42,param_2);
  SVar2.bridgeObject = (void *)0x8000000100daf960;
  SVar2.str = (char *)0xd000000000000020;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(unaff_x20[2],SVar6);
  SVar1.bridgeObject = &DAT_e800000000000000;
  SVar1.str = (char *)0x20726f7272652820;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar1,SVar7);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar2,SVar8);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar3.bridgeObject = (void *)0xeb00000000207473;
  SVar3.str = (char *)0x6f6820726f662029;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar3,SVar9);
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(*unaff_x20,SVar10);
  SVar4.bridgeObject = &DAT_e700000000000000;
  SVar4.str = (char *)0x2074726f70202c;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar4,SVar11);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar2,SVar12);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x1006668c4 | thunk_FUN_100668b98 */

void thunk_FUN_100668b98(void)

{
  FUN_100668b98();
  return;
}



/* Address: 0x1006668c8 | FUN_1006668c8 */

void FUN_1006668c8(Hasher param_1)

{
  Hasher HVar1;
  String *unaff_x20;
  
  HVar1.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  Swift::Hasher::_combine((__uint64)unaff_x20[1].str,HVar1);
  Swift::Hasher::_combine((__uint64)unaff_x20[1].bridgeObject,HVar1);
  Swift::String::hash(param_1,unaff_x20[2]);
  return;
}



/* Address: 0x100666908 | FUN_100666908 */

void FUN_100666908(void)

{
  Hasher HVar1;
  String *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = unaff_x20->str;
  Swift::String::hash((Hasher)auStack_68,*unaff_x20);
  Swift::Hasher::_combine((__uint64)unaff_x20[1].str,HVar1);
  Swift::Hasher::_combine((__uint64)unaff_x20[1].bridgeObject,HVar1);
  HVar1.unknown = auStack_68;
  Swift::String::hash(HVar1,unaff_x20[2]);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100666970 | FUN_100666970 */

void FUN_100666970(void)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  String *unaff_x20;
  undefined1 auStack_98 [72];
  
  HVar5.unknown = unaff_x20->str;
  SVar3 = *unaff_x20;
  pcVar1 = unaff_x20[1].str;
  pvVar2 = unaff_x20[1].bridgeObject;
  SVar4 = unaff_x20[2];
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_98,SVar3);
  Swift::Hasher::_combine((__uint64)pcVar1,HVar5);
  Swift::Hasher::_combine((__uint64)pvVar2,HVar5);
  HVar5.unknown = auStack_98;
  Swift::String::hash(HVar5,SVar4);
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100666a00 | FUN_100666a00 */

void FUN_100666a00(Hasher param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  Hasher HVar4;
  String *unaff_x20;
  
  HVar4.unknown = unaff_x20->str;
  pcVar1 = unaff_x20[1].str;
  pvVar2 = unaff_x20[1].bridgeObject;
  SVar3 = unaff_x20[2];
  Swift::String::hash(param_1,*unaff_x20);
  Swift::Hasher::_combine((__uint64)pcVar1,HVar4);
  Swift::Hasher::_combine((__uint64)pvVar2,HVar4);
  Swift::String::hash(param_1,SVar3);
  return;
}



/* Address: 0x100666a5c | FUN_100666a5c */

void FUN_100666a5c(__int64 param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  String *unaff_x20;
  undefined1 auStack_98 [72];
  
  HVar5.unknown = unaff_x20->str;
  SVar3 = *unaff_x20;
  pcVar1 = unaff_x20[1].str;
  pvVar2 = unaff_x20[1].bridgeObject;
  SVar4 = unaff_x20[2];
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_98,SVar3);
  Swift::Hasher::_combine((__uint64)pcVar1,HVar5);
  Swift::Hasher::_combine((__uint64)pvVar2,HVar5);
  HVar5.unknown = auStack_98;
  Swift::String::hash(HVar5,SVar4);
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100666ae8 | thunk_FUN_100666774 */

void thunk_FUN_100666774(void)

{
  FUN_100666774();
  return;
}



/* Address: 0x100666aec | FUN_100666aec */

uint FUN_100666aec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  local_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  local_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_100668b98(&local_70,&uStack_40);
  return uVar1 & 1;
}



/* Address: 0x100666b30 | FUN_100666b30 */

undefined1  [16] FUN_100666b30(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Address: 0x100666b3c | FUN_100666b3c */

undefined1  [16] FUN_100666b3c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x20);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 0x28));
  return auVar1;
}



/* Address: 0x100666b68 | FUN_100666b68 */

undefined8 FUN_100666b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Address: 0x100666b7c | FUN_100666b7c */

undefined1  [16] FUN_100666b7c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x30);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 0x38));
  return auVar1;
}



/* Address: 0x100666ba8 | FUN_100666ba8 */

void FUN_100666ba8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  param_1[9] = *(undefined8 *)(param_2 + 0x58);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x6a);
  *(undefined8 *)((long)param_1 + 0x62) = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)((long)param_1 + 0x5a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[5] = *(undefined8 *)(param_2 + 0x38);
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x100666bcc | FUN_100666bcc */

/* WARNING: Removing unreachable block (ram,0x000100666f28) */
/* WARNING: Removing unreachable block (ram,0x000100666f50) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100666d94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100666bcc(ulong param_1,undefined8 param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  uint uVar2;
  _ArrayBuffer<undefined> _Var3;
  void *pvVar4;
  UnsafePointer<__int8> UVar5;
  void *pvVar6;
  void *pvVar7;
  UnsafePointer<__int8> UVar8;
  char *pcVar9;
  ulong uVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String local_d0;
  char *local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = (uint)(param_1 >> 0x20);
  if (uVar2 >> 0x1e == 0) {
    pcVar9 = *(char **)(param_1 + 0x20);
    pvVar7 = *(void **)(param_1 + 0x28);
    uVar1 = (ulong)pcVar9 & 0xffffffffffff;
    if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar7 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      pcVar9 = (char *)0x0;
      pvVar7 = (void *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(pvVar7);
    }
    local_d0.str._0_4_ = *(undefined4 *)(param_1 + 0x14);
    _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0x10;
    UVar8.unknown = _Var3.unknown + 0x20;
    *(undefined8 *)UVar8.unknown = 0;
    *(undefined8 *)(_Var3.unknown + 0x28) = 0;
    pvVar6 = (void *)0x10;
    UVar5.unknown = UVar8.unknown;
    FUN_10060a728(2,&local_d0);
    SVar11 = Swift::String::init(UVar8);
    _swift_bridgeObjectRelease(_Var3.unknown);
    local_c0 = (char *)(ulong)((uint)(*(ushort *)(param_1 + 0x12) >> 8) |
                              (*(ushort *)(param_1 + 0x12) & 0xff00ff) << 8);
    SVar12 = Swift::CustomStringConvertible::get_description();
    uVar2 = 0x34765049;
  }
  else {
    if (uVar2 >> 0x1e != 1) {
      local_d0.bridgeObject = &DAT_e500000000000000;
      local_d0.str = (char *)0x5d5344555b;
      param_1 = param_1 & 0x3fffffffffffffff;
      uStack_88 = *(undefined8 *)(param_1 + 0x4a);
      local_90 = *(undefined8 *)(param_1 + 0x42);
      uStack_78 = *(undefined8 *)(param_1 + 0x5a);
      uStack_80 = *(undefined8 *)(param_1 + 0x52);
      uStack_68 = *(undefined8 *)(param_1 + 0x6a);
      local_70 = *(undefined8 *)(param_1 + 0x62);
      local_60 = *(undefined8 *)(param_1 + 0x72);
      pvStack_b8 = *(void **)(param_1 + 0x1a);
      local_c0 = *(char **)(param_1 + 0x12);
      uStack_a8 = *(undefined8 *)(param_1 + 0x2a);
      uStack_b0 = *(undefined8 *)(param_1 + 0x22);
      uStack_98 = *(undefined8 *)(param_1 + 0x3a);
      local_a0 = *(undefined8 *)(param_1 + 0x32);
      SVar11 = Swift::String::init((UnsafePointer<__int8>)&local_c0);
      SVar12.bridgeObject = param_4;
      SVar12.str = param_3;
      Swift::String::append(SVar11,SVar12);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
      pcVar9 = local_d0.str;
      pvVar7 = local_d0.bridgeObject;
      goto LAB_100666ef0;
    }
    uVar10 = param_1 & 0x3fffffffffffffff;
    pcVar9 = *(char **)(uVar10 + 0x30);
    pvVar7 = *(void **)(uVar10 + 0x38);
    uVar1 = (ulong)pcVar9 & 0xffffffffffff;
    if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar7 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      pcVar9 = (char *)0x0;
      pvVar7 = (void *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(pvVar7);
    }
    local_c0 = *(char **)(uVar10 + 0x18);
    pvStack_b8 = *(void **)(uVar10 + 0x20);
    _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0x2e;
    UVar8.unknown = _Var3.unknown + 0x20;
    *(undefined8 *)(_Var3.unknown + 0x28) = 0;
    *(undefined8 *)UVar8.unknown = 0;
    *(undefined8 *)(_Var3.unknown + 0x38) = 0;
    *(undefined8 *)(_Var3.unknown + 0x30) = 0;
    *(undefined8 *)(_Var3.unknown + 0x46) = 0;
    *(undefined8 *)(_Var3.unknown + 0x3e) = 0;
    pvVar6 = (void *)0x2e;
    UVar5.unknown = UVar8.unknown;
    FUN_10060a728(0x1e,&local_c0);
    SVar11 = Swift::String::init(UVar8);
    _swift_bridgeObjectRelease(_Var3.unknown);
    local_d0.str = (char *)(ulong)((uint)(*(ushort *)(uVar10 + 0x12) >> 8) |
                                  (*(ushort *)(uVar10 + 0x12) & 0xff00ff) << 8);
    SVar12 = Swift::CustomStringConvertible::get_description();
    uVar2 = 0x36765049;
  }
  pvVar4 = SVar11.bridgeObject;
  SVar13.str = (char *)(ulong)uVar2;
  local_c0 = (char *)0x5b;
  pvStack_b8 = (void *)0xe100000000000000;
  SVar13.bridgeObject = &DAT_e400000000000000;
  SVar17.bridgeObject = pvVar6;
  SVar17.str = UVar5.unknown;
  Swift::String::append(SVar13,SVar17);
  _swift_bridgeObjectRelease(&DAT_e400000000000000);
  SVar14.bridgeObject = (void *)0xe100000000000000;
  SVar14.str = (char *)0x5d;
  SVar18.bridgeObject = pvVar6;
  SVar18.str = UVar5.unknown;
  Swift::String::append(SVar14,SVar18);
  if (pvVar7 == (void *)0x0) {
    local_d0 = SVar11;
    _swift_bridgeObjectRetain(pvVar4);
    SVar11.bridgeObject = (void *)0xe100000000000000;
    SVar11.str = &DAT_0000003a;
    SVar22.bridgeObject = pvVar6;
    SVar22.str = UVar5.unknown;
    Swift::String::append(SVar11,SVar22);
  }
  else {
    local_d0.bridgeObject = pvVar7;
    local_d0.str = pcVar9;
    _swift_bridgeObjectRetain(pvVar7);
    SVar15.bridgeObject = (void *)0xe100000000000000;
    SVar15.str = (char *)0x2f;
    SVar19.bridgeObject = pvVar6;
    SVar19.str = UVar5.unknown;
    Swift::String::append(SVar15,SVar19);
    SVar20.bridgeObject = pvVar6;
    SVar20.str = UVar5.unknown;
    Swift::String::append(SVar11,SVar20);
    SVar16.bridgeObject = (void *)0xe100000000000000;
    SVar16.str = &DAT_0000003a;
    SVar21.bridgeObject = pvVar6;
    SVar21.str = UVar5.unknown;
    Swift::String::append(SVar16,SVar21);
    _swift_bridgeObjectRelease(pvVar4);
    pvVar4 = pvVar7;
  }
  _swift_bridgeObjectRelease(pvVar4);
  pvVar7 = local_d0.bridgeObject;
  SVar23.bridgeObject = pvVar6;
  SVar23.str = UVar5.unknown;
  Swift::String::append(local_d0,SVar23);
  _swift_bridgeObjectRelease(pvVar7);
  SVar24.bridgeObject = pvVar6;
  SVar24.str = UVar5.unknown;
  Swift::String::append(SVar12,SVar24);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  pcVar9 = local_c0;
  pvVar7 = pvStack_b8;
LAB_100666ef0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(pcVar9,pvVar7);
  }
  return;
}



/* Address: 0x100666f78 | FUN_100666f78 */

ushort FUN_100666f78(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 >> 0x3e);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      return 0;
    }
    param_1 = param_1 & 0x3fffffffffffffff;
  }
  return *(ushort *)(param_1 + 0x12) >> 8 | *(ushort *)(param_1 + 0x12) << 8;
}



/* Address: 0x100666fac | FUN_100666fac */

void FUN_100666fac(ulong param_1)

{
  String SVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((long)param_1 < 0) {
    param_1 = param_1 & 0x3fffffffffffffff;
    uStack_48 = *(undefined8 *)(param_1 + 0x4a);
    local_50 = *(undefined8 *)(param_1 + 0x42);
    uStack_38 = *(undefined8 *)(param_1 + 0x5a);
    uStack_40 = *(undefined8 *)(param_1 + 0x52);
    uStack_28 = *(undefined8 *)(param_1 + 0x6a);
    local_30 = *(undefined8 *)(param_1 + 0x62);
    local_20 = *(undefined8 *)(param_1 + 0x72);
    uStack_78 = *(undefined8 *)(param_1 + 0x1a);
    local_80 = *(undefined8 *)(param_1 + 0x12);
    uStack_68 = *(undefined8 *)(param_1 + 0x2a);
    uStack_70 = *(undefined8 *)(param_1 + 0x22);
    uStack_58 = *(undefined8 *)(param_1 + 0x3a);
    local_60 = *(undefined8 *)(param_1 + 0x32);
    SVar1 = Swift::String::init((UnsafePointer<__int8>)&local_80);
  }
  else {
    SVar1 = (String)ZEXT816(0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(SVar1.str,SVar1.bridgeObject);
}



/* Address: 0x10066703c | FUN_10066703c */

undefined4 FUN_10066703c(ulong param_1)

{
  return *(undefined4 *)(&DAT_100c6c4f4 + (param_1 >> 0x3e) * 4);
}



/* Address: 0x100667050 | FUN_100667050 */

/* WARNING: Removing unreachable block (ram,0x0001006670e4) */
/* WARNING: Removing unreachable block (ram,0x0001006671a8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100667124 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

String FUN_100667050(ulong param_1)

{
  uint uVar1;
  _ArrayBuffer<undefined> _Var2;
  UnsafePointer<__int8> cString;
  String SVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = (uint)(param_1 >> 0x20);
  if (uVar1 >> 0x1e == 0) {
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_1 + 0x14));
    _Var2 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
    *(undefined8 *)(_Var2.unknown + 0x10) = 0x10;
    cString.unknown = _Var2.unknown + 0x20;
    *(undefined8 *)cString.unknown = 0;
    *(undefined8 *)(_Var2.unknown + 0x28) = 0;
    FUN_10060a728(2,&local_50,cString.unknown,0x10);
  }
  else {
    SVar3 = (String)ZEXT816(0);
    if (uVar1 >> 0x1e != 1) goto LAB_100667170;
    local_50 = *(undefined8 *)((param_1 & 0x3fffffffffffffff) + 0x18);
    uStack_48 = *(undefined8 *)((param_1 & 0x3fffffffffffffff) + 0x20);
    _Var2 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
    *(undefined8 *)(_Var2.unknown + 0x10) = 0x2e;
    cString.unknown = _Var2.unknown + 0x20;
    *(undefined8 *)(_Var2.unknown + 0x28) = 0;
    *(undefined8 *)cString.unknown = 0;
    *(undefined8 *)(_Var2.unknown + 0x38) = 0;
    *(undefined8 *)(_Var2.unknown + 0x30) = 0;
    *(undefined8 *)(_Var2.unknown + 0x46) = 0;
    *(undefined8 *)(_Var2.unknown + 0x3e) = 0;
    FUN_10060a728(0x1e,&local_50,cString.unknown,0x2e);
  }
  SVar3 = Swift::String::init(cString);
  _swift_bridgeObjectRelease(_Var2.unknown);
LAB_100667170:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return SVar3;
}



/* Address: 0x1006671d0 | FUN_1006671d0 */

void FUN_1006671d0(ulong param_1,char param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined *puVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  undefined1 auStack_c0 [48];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar14 = *unaff_x20;
  uVar12 = (uint)(uVar14 >> 0x3e);
  if (uVar12 == 0) {
    uVar1 = 0;
    if (param_2 != '\x01') {
      uVar1 = param_1;
    }
    if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1006673a0);
      (*pcVar10)();
    }
    if (uVar1 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1006673a8);
      (*pcVar10)();
    }
    uVar8 = *(undefined2 *)(uVar14 + 0x10);
    uVar13 = *(undefined8 *)(uVar14 + 0x14);
    uVar4 = *(undefined4 *)(uVar14 + 0x1c);
    uStack_88 = *(undefined8 *)(uVar14 + 0x18);
    local_90 = *(undefined8 *)(uVar14 + 0x10);
    uStack_78 = *(undefined8 *)(uVar14 + 0x28);
    local_80 = *(undefined8 *)(uVar14 + 0x20);
    FUN_1000f8cac(&local_90,auStack_c0,&DAT_100fd9180,0x100c6c128);
    _swift_release(uVar14 & 0x3fffffffffffffff);
    uVar3 = uStack_78;
    uVar2 = local_80;
    puVar11 = &DAT_100fd9188;
    FUN_1000f7830(&DAT_100fd9188,0x100c6c130);
    _swift_allocObject();
    *(undefined2 *)(puVar11 + 0x10) = uVar8;
    *(ushort *)(puVar11 + 0x12) =
         (ushort)(uVar1 >> 8) & 0xff | (ushort)(((uint)uVar1 & 0xff00ff) << 8);
    *(undefined8 *)(puVar11 + 0x14) = uVar13;
    *(undefined4 *)(puVar11 + 0x1c) = uVar4;
    *(undefined8 *)(puVar11 + 0x20) = uVar2;
    *(undefined8 *)(puVar11 + 0x28) = uVar3;
    *unaff_x20 = (ulong)puVar11;
  }
  else if (uVar12 == 1) {
    uVar1 = 0;
    if (param_2 != '\x01') {
      uVar1 = param_1;
    }
    if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10066739c);
      (*pcVar10)();
    }
    if (uVar1 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1006673a4);
      (*pcVar10)();
    }
    uVar14 = uVar14 & 0x3fffffffffffffff;
    uVar6 = *(undefined1 *)(uVar14 + 0x10);
    uVar7 = *(undefined1 *)(uVar14 + 0x11);
    uVar4 = *(undefined4 *)(uVar14 + 0x14);
    uVar2 = *(undefined8 *)(uVar14 + 0x18);
    uVar3 = *(undefined8 *)(uVar14 + 0x20);
    uVar5 = *(undefined4 *)(uVar14 + 0x28);
    uStack_88 = *(undefined8 *)(uVar14 + 0x18);
    local_90 = *(undefined8 *)(uVar14 + 0x10);
    uStack_78 = *(undefined8 *)(uVar14 + 0x28);
    local_80 = *(undefined8 *)(uVar14 + 0x20);
    uStack_68 = *(undefined8 *)(uVar14 + 0x38);
    local_70 = *(undefined8 *)(uVar14 + 0x30);
    FUN_1000f8cac(&local_90,auStack_c0,&DAT_100fd9170,0x100c6c118);
    _swift_release(uVar14);
    uVar9 = uStack_68;
    uVar13 = local_70;
    puVar11 = &DAT_100fd9178;
    FUN_1000f7830(&DAT_100fd9178,0x100c6c120);
    _swift_allocObject();
    puVar11[0x10] = uVar6;
    puVar11[0x11] = uVar7;
    *(ushort *)(puVar11 + 0x12) =
         (ushort)(uVar1 >> 8) & 0xff | (ushort)(((uint)uVar1 & 0xff00ff) << 8);
    *(undefined4 *)(puVar11 + 0x14) = uVar4;
    *(undefined8 *)(puVar11 + 0x18) = uVar2;
    *(undefined8 *)(puVar11 + 0x20) = uVar3;
    *(undefined4 *)(puVar11 + 0x28) = uVar5;
    *(undefined8 *)(puVar11 + 0x30) = uVar13;
    *(undefined8 *)(puVar11 + 0x38) = uVar9;
    *unaff_x20 = (ulong)puVar11 | 0x4000000000000000;
  }
  else if (param_2 != '\x01') {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1006673ac);
    (*pcVar10)();
  }
  return;
}



/* Address: 0x1006673ac | FUN_1006673ac */

code * FUN_1006673ac(ulong *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  param_1[2] = (ulong)unaff_x20;
  uVar3 = *unaff_x20;
  uVar2 = (uint)(uVar3 >> 0x3e);
  if (uVar2 != 0) {
    if (uVar2 != 1) {
      uVar3 = 0;
      uVar1 = 1;
      goto LAB_1006673e8;
    }
    uVar3 = uVar3 & 0x3fffffffffffffff;
  }
  uVar1 = 0;
  uVar3 = (ulong)((uint)(*(ushort *)(uVar3 + 0x12) >> 8) |
                 (*(ushort *)(uVar3 + 0x12) & 0xff00ff) << 8);
LAB_1006673e8:
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return FUN_1006673fc;
}



/* Address: 0x1006673fc | FUN_1006673fc */

void FUN_1006673fc(undefined8 *param_1)

{
  FUN_1006671d0(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x100667428 | FUN_100667428 */

void FUN_100667428(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined6 local_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  uVar1 = (uint)(param_3 >> 0x3e);
  local_b0 = param_4;
  uStack_a8 = param_1;
  local_a0 = param_2;
  if (uVar1 == 0) {
    FUN_1006674f4(FUN_100669854,auStack_c0,*(undefined8 *)(param_3 + 0x10),
                  *(undefined8 *)(param_3 + 0x18),param_4);
  }
  else if (uVar1 == 1) {
    param_3 = param_3 & 0x3fffffffffffffff;
    FUN_1006675bc(FUN_100668f98,auStack_c0,*(undefined8 *)(param_3 + 0x10),
                  *(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20),
                  *(undefined4 *)(param_3 + 0x28));
  }
  else {
    param_3 = param_3 & 0x3fffffffffffffff;
    uStack_48 = *(undefined8 *)(param_3 + 0x58);
    local_50 = *(undefined8 *)(param_3 + 0x50);
    uStack_40 = *(undefined8 *)(param_3 + 0x60);
    uStack_38 = (undefined2)*(undefined8 *)(param_3 + 0x68);
    uStack_2e = *(undefined8 *)(param_3 + 0x72);
    local_36 = (undefined6)*(undefined8 *)(param_3 + 0x6a);
    uStack_30 = (undefined2)((ulong)*(undefined8 *)(param_3 + 0x6a) >> 0x30);
    uStack_88 = *(undefined8 *)(param_3 + 0x18);
    local_90 = *(undefined8 *)(param_3 + 0x10);
    uStack_78 = *(undefined8 *)(param_3 + 0x28);
    uStack_80 = *(undefined8 *)(param_3 + 0x20);
    uStack_68 = *(undefined8 *)(param_3 + 0x38);
    local_70 = *(undefined8 *)(param_3 + 0x30);
    uStack_58 = *(undefined8 *)(param_3 + 0x48);
    uStack_60 = *(undefined8 *)(param_3 + 0x40);
    FUN_10066768c(FUN_100669854,auStack_c0,param_4);
  }
  return;
}



/* Address: 0x1006674f4 | FUN_1006674f4 */

void FUN_1006674f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = 0;
  local_70 = param_4;
  uStack_68 = param_5;
  local_50 = param_6;
  uStack_48 = param_2;
  local_40 = param_3;
  FUN_1005d9f34(0);
  puVar2 = &DAT_100fd4f20;
  FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
  FUN_1006167fc(param_1,&local_70,FUN_100669804,auStack_60,uVar1,puVar2,param_6,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_78);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1006675bc | FUN_1006675bc */

void FUN_1006675bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 local_88 [8];
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = 0;
  local_70 = param_8;
  uStack_68 = param_2;
  local_60 = param_3;
  local_58 = param_4;
  uStack_50 = param_5;
  local_48 = param_6;
  local_40 = param_7;
  FUN_1005d9fac(0);
  puVar2 = &DAT_100fd4f20;
  FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
  FUN_1006167fc(param_1,&local_58,FUN_100669868,auStack_80,uVar1,puVar2,param_8,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_88);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10066768c | FUN_10066768c */

void FUN_10066768c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 local_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_88 = unaff_x20[9];
  local_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_78 = (undefined2)unaff_x20[0xb];
  uStack_6e = *(undefined8 *)((long)unaff_x20 + 0x62);
  local_76 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x5a);
  uStack_70 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x5a) >> 0x30);
  uStack_c8 = unaff_x20[1];
  local_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  uStack_a8 = unaff_x20[5];
  local_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uVar1 = 0;
  local_50 = param_4;
  uStack_48 = param_2;
  local_40 = param_3;
  FUN_1005da054(0);
  puVar2 = &DAT_100fd4f20;
  FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
  FUN_1006167fc(param_1,&local_d0,FUN_100669868,auStack_60,uVar1,puVar2,param_4,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_d8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100667770 | FUN_100667770 */

void FUN_100667770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd9188;
  FUN_1000f7830(&DAT_100fd9188,0x100c6c130);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  return;
}


