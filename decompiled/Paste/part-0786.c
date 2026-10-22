/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008a8b0c | thunk_FUN_1008a8968 */

void thunk_FUN_1008a8968(void)

{
  FUN_1008a8968();
  return;
}



/* Address: 0x1008a8b10 | thunk_FUN_1008a8968 */

void thunk_FUN_1008a8968(void)

{
  FUN_1008a8968();
  return;
}



/* Address: 0x1008a8b14 | thunk_FUN_100325028 */

void thunk_FUN_100325028(void)

{
  thunk_FUN_100325028();
  return;
}



/* Address: 0x1008a8b18 | thunk_FUN_100324f98 */

void thunk_FUN_100324f98(void)

{
  thunk_FUN_100324f98();
  return;
}



/* Address: 0x1008a8b1c | thunk_FUN_1008a86dc */

void thunk_FUN_1008a86dc(void)

{
  FUN_1008a86dc();
  return;
}



/* Address: 0x1008a8b20 | thunk_FUN_1008a86dc */

void thunk_FUN_1008a86dc(void)

{
  FUN_1008a86dc();
  return;
}



/* Address: 0x1008a8b24 | thunk_FUN_1008a8928 */

void thunk_FUN_1008a8928(void)

{
  FUN_1008a8928();
  return;
}



/* Address: 0x1008a8b28 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008a8b2c | thunk_FUN_1008a8990 */

void thunk_FUN_1008a8990(void)

{
  long unaff_x20;
  
  FUN_10064c01c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008a8b30 | thunk_FUN_1008a8bb0 */

void thunk_FUN_1008a8bb0(void)

{
  FUN_1008a8bb0();
  return;
}



/* Address: 0x1008a8b34 | thunk_FUN_1008a8bf4 */

void thunk_FUN_1008a8bf4(void)

{
  FUN_1008a8bf4();
  return;
}



/* Address: 0x1008a8b38 | thunk_FUN_1008a8c38 */

void thunk_FUN_1008a8c38(void)

{
  FUN_1008a8c38();
  return;
}



/* Address: 0x1008a8b3c | thunk_FUN_1008a8c74 */

void thunk_FUN_1008a8c74(void)

{
  FUN_1008a8c74();
  return;
}



/* Address: 0x1008a8b40 | FUN_1008a8b40 */

void FUN_1008a8b40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *(int *)(param_1 + 5) = (int)param_7;
  *(char *)((long)param_1 + 0x2e) = (char)((ulong)param_7 >> 0x30);
  *(short *)((long)param_1 + 0x2c) = (short)((ulong)param_7 >> 0x20);
  return;
}



/* Address: 0x1008a8b64 | thunk_FUN_1008aa18c */

void thunk_FUN_1008aa18c(void)

{
  FUN_1008aa18c();
  return;
}



/* Address: 0x1008a8b68 | FUN_1008a8b68 */

uint FUN_1008a8b68(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  undefined8 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined1 local_21;
  undefined7 uStack_20;
  undefined8 uStack_19;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined7)param_1[3];
  uStack_49 = *(undefined8 *)((long)param_1 + 0x27);
  local_51 = (undefined1)*(undefined8 *)((long)param_1 + 0x1f);
  uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x1f) >> 8);
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined7)param_2[3];
  uStack_19 = *(undefined8 *)((long)param_2 + 0x27);
  local_21 = (undefined1)*(undefined8 *)((long)param_2 + 0x1f);
  uStack_20 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0x1f) >> 8);
  FUN_1008aa18c(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x1008a8bb0 | FUN_1008a8bb0 */

undefined8 FUN_1008a8bb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return uVar1;
}



/* Address: 0x1008a8bf4 | FUN_1008a8bf4 */

void FUN_1008a8bf4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *unaff_x20;
  
  _swift_release(*unaff_x20);
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  *(undefined1 *)(unaff_x20 + 2) = param_3;
  return;
}



/* Address: 0x1008a8c38 | FUN_1008a8c38 */

void FUN_1008a8c38(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008a8c74 | FUN_1008a8c74 */

void FUN_1008a8c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(char *)(unaff_x20 + 0x2e) = (char)((ulong)param_3 >> 0x30);
  *(short *)(unaff_x20 + 0x2c) = (short)((ulong)param_3 >> 0x20);
  *(int *)(unaff_x20 + 0x28) = (int)param_3;
  return;
}



/* Address: 0x1008a8cc0 | thunk_FUN_1008aa268 */

void thunk_FUN_1008aa268(void)

{
  FUN_1008aa268();
  return;
}



/* Address: 0x1008a8cc4 | FUN_1008a8cc4 */

uint FUN_1008a8cc4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  undefined8 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined1 local_21;
  undefined7 uStack_20;
  undefined8 uStack_19;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined7)param_1[3];
  uStack_49 = *(undefined8 *)((long)param_1 + 0x27);
  local_51 = (undefined1)*(undefined8 *)((long)param_1 + 0x1f);
  uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x1f) >> 8);
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined7)param_2[3];
  uStack_19 = *(undefined8 *)((long)param_2 + 0x27);
  local_21 = (undefined1)*(undefined8 *)((long)param_2 + 0x1f);
  uStack_20 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0x1f) >> 8);
  FUN_1008aa268(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x1008a8d0c | FUN_1008a8d0c */

undefined * FUN_1008a8d0c(void)

{
  return &DAT_100c81b20;
}



/* Address: 0x1008a8d18 | FUN_1008a8d18 */

undefined * FUN_1008a8d18(void)

{
  return &DAT_100c81b21;
}



/* Address: 0x1008a8d24 | FUN_1008a8d24 */

undefined * FUN_1008a8d24(void)

{
  return &DAT_100c81b22;
}



/* Address: 0x1008a8d30 | FUN_1008a8d30 */

undefined * FUN_1008a8d30(void)

{
  return &DAT_100c81b23;
}



/* Address: 0x1008a8d3c | FUN_1008a8d3c */

undefined * FUN_1008a8d3c(void)

{
  return &DAT_100c81b24;
}



/* Address: 0x1008a8d48 | FUN_1008a8d48 */

undefined * FUN_1008a8d48(void)

{
  return &DAT_100c81b25;
}



/* Address: 0x1008a8d54 | FUN_1008a8d54 */

undefined * FUN_1008a8d54(void)

{
  return &DAT_100c81b26;
}



/* Address: 0x1008a8d60 | FUN_1008a8d60 */

undefined * FUN_1008a8d60(void)

{
  return &DAT_100c81b27;
}



/* Address: 0x1008a8d6c | FUN_1008a8d6c */

void FUN_1008a8d6c(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar2 = 5;
    }
    else {
      *unaff_x20 = 0;
      uVar2 = 2;
    }
  }
  else {
    if (bVar1 == 2) {
      *unaff_x20 = 0;
      return;
    }
    uVar2 = 1;
  }
  FUN_1008aa38c();
  _swift_allocError(&DAT_100f0b890,param_1,0,0);
  *param_1 = uVar2;
  _swift_willThrow();
  return;
}



/* Address: 0x1008a8df0 | FUN_1008a8df0 */

void FUN_1008a8df0(long param_1,byte param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x37) = 0;
  if (-1 < param_1) {
    *(long *)(unaff_x20 + 0x40) = param_1;
    *(byte *)(unaff_x20 + 0x48) = param_2 & 1;
    *(undefined1 *)(unaff_x20 + 0x49) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a8e4c);
  (*pcVar1)();
}



/* Address: 0x1008a8e4c | FUN_1008a8e4c */

void FUN_1008a8e4c(long param_1,byte param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x37) = 0;
  if (-1 < param_1) {
    *(long *)(unaff_x20 + 0x40) = param_1;
    *(byte *)(unaff_x20 + 0x48) = param_2 & 1;
    *(undefined1 *)(unaff_x20 + 0x49) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a8e7c);
  (*pcVar1)();
}



/* Address: 0x1008a8e7c | FUN_1008a8e7c */

void FUN_1008a8e7c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined *puVar8;
  undefined8 ******ppppppuVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined1 uVar15;
  uint uVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  undefined8 *****local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined2 uStack_e4;
  undefined1 uStack_e2;
  undefined1 local_e1;
  undefined *local_e0;
  undefined1 local_b7;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [31];
  undefined1 local_79;
  undefined *local_78 [3];
  
  ppppppuVar6 = (undefined8 ******)&DAT_100fe90f8;
  ppppppuVar13 = (undefined8 ******)&DAT_100c7f5d0;
  FUN_1000f7830();
  thunk_FUN_100885488();
  uVar18 = param_3 >> 0x38;
  cVar4 = (char)(param_3 >> 0x38);
  if (cVar4 == '\0') {
    if (*(byte *)(unaff_x20 + 0x49) - 1 < 2) {
      uVar15 = 3;
    }
    else {
      if (*(byte *)(unaff_x20 + 0x49) == 0) {
        *(undefined1 *)(unaff_x20 + 0x49) = 2;
        _swift_retain(ppppppuVar6);
        _swift_bridgeObjectRetain(ppppppuVar13);
        ppppppuVar7 = ppppppuVar6;
        ppppppuVar14 = ppppppuVar13;
        uVar12 = param_3;
        FUN_1008aa498();
        uVar16 = (uint)uVar12;
        _swift_bridgeObjectRelease(ppppppuVar13);
        _swift_release(ppppppuVar6);
        goto joined_r0x0001008a9030;
      }
LAB_1008a90e0:
      uVar15 = 1;
    }
LAB_1008a90ec:
    ppppppuVar7 = ppppppuVar6;
    FUN_1008aa38c();
    puVar8 = &DAT_100f0b890;
    _swift_allocError(&DAT_100f0b890,ppppppuVar7,0,0);
    *(undefined1 *)ppppppuVar7 = uVar15;
    _swift_willThrow();
    local_78[0] = puVar8;
    _swift_errorRetain(puVar8);
    puVar10 = &DAT_100fe9a00;
    FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
    puVar11 = &local_79;
    _swift_dynamicCast(puVar11,local_78,puVar10,&DAT_100f0b890,0);
    if ((int)puVar11 == 0) {
      _swift_errorRelease(local_78[0]);
      FUN_100626c9c(puVar8);
      FUN_100877974(ppppppuVar6,ppppppuVar13,param_3,uVar18);
      _swift_errorRelease(puVar8);
    }
    else {
      _swift_errorRelease();
      FUN_1008aa38c();
      puVar10 = &DAT_100f0b890;
      _swift_allocError(&DAT_100f0b890,puVar8,0,0);
      *puVar8 = local_79;
      FUN_100626c9c();
      _swift_errorRelease(puVar10);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
      uVar15 = *(undefined1 *)(unaff_x20 + 0x20);
      *(undefined1 *)(unaff_x20 + 0x20) = 0;
      FUN_100774094(uVar1,uVar2,uVar15);
      _swift_beginAccess(unaff_x20 + 0x28,&local_f8,0x21,0);
      uVar12 = *(ulong *)(unaff_x20 + 0x28);
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008a9388);
        (*pcVar5)();
      }
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar12 & 1) == 0) {
        lVar17 = *(long *)(unaff_x20 + 0x28);
        _swift_beginAccess(lVar17 + 0x10,auStack_98,0,0);
        uVar12 = (ulong)*(uint *)(lVar17 + 0x10);
        FUN_10061204c();
        *(ulong *)(unaff_x20 + 0x28) = uVar12;
        _swift_release(lVar17);
      }
      lVar17 = *(long *)(unaff_x20 + 0x28);
      _swift_beginAccess(lVar17 + 0x10,auStack_b0,0,0);
      *(undefined4 *)(unaff_x20 + 0x38) = *(undefined4 *)(lVar17 + 0x10);
      *(undefined2 *)(unaff_x20 + 0x3c) = 0;
      *(undefined1 *)(unaff_x20 + 0x3e) = 0;
      *(undefined8 *)(unaff_x20 + 0x30) = 0;
      _swift_endAccess(&local_f8);
      FUN_100877974(ppppppuVar6,ppppppuVar13,param_3,uVar18);
      _swift_errorRelease(local_78[0]);
    }
  }
  else {
    if (cVar4 == '\x01') {
      local_f0 = SUB84(ppppppuVar13,0);
      uStack_ec = (undefined4)((ulong)ppppppuVar13 >> 0x20);
      uStack_e8 = (uint)param_3;
      uStack_e4 = (undefined2)(param_3 >> 0x20);
      uStack_e2 = (undefined1)(param_3 >> 0x30);
      bVar3 = *(byte *)(unaff_x20 + 0x49);
      local_f8 = ppppppuVar6;
      if (bVar3 < 2) {
        if (bVar3 == 0) {
          uVar15 = 4;
        }
        else {
          uVar15 = 0;
        }
        goto LAB_1008a90ec;
      }
      if (bVar3 != 2) goto LAB_1008a90e0;
      FUN_100878fa0(ppppppuVar6,ppppppuVar13,param_3,1);
      ppppppuVar7 = &local_f8;
      ppppppuVar14 = ppppppuVar6;
      ppppppuVar9 = ppppppuVar13;
      FUN_1008aa544();
      uVar16 = (uint)ppppppuVar9;
      FUN_100877974(ppppppuVar6,ppppppuVar13,param_3,1);
joined_r0x0001008a9030:
      if (ppppppuVar7 != (undefined8 ******)0x0) {
        puVar8 = &DAT_100fe95b0;
        FUN_1000f7830(&DAT_100fe95b0,&DAT_100c80420);
        local_f0 = SUB84(ppppppuVar14,0);
        uStack_ec = (undefined4)((ulong)ppppppuVar14 >> 0x20);
        uStack_e4 = 0;
        uStack_e2 = 0;
        local_e1 = 0;
        local_b7 = 2;
        local_f8 = ppppppuVar7;
        uStack_e8 = uVar16 & 0xff;
        local_e0 = puVar8;
        _swift_retain(ppppppuVar7);
        _swift_bridgeObjectRetain(ppppppuVar14);
        FUN_100626ebc(&local_f8,0);
        FUN_1005e70f4(&local_f8);
        local_f8 = (undefined8 ******)0x0;
        local_f0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_e2 = 0;
        local_e1 = 2;
        local_b7 = 2;
        local_e0 = puVar8;
        FUN_10062dee8(&local_f8,0);
        ppppppuVar9 = &local_f8;
        FUN_1005e70f4();
        if (ppppppuVar7[4] == (undefined8 *****)0x22) {
          bVar3 = *(byte *)(unaff_x20 + 0x49);
          if (bVar3 < 2) {
            if (bVar3 != 0) {
LAB_1008a90dc:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1008a90e0);
              (*pcVar5)();
            }
          }
          else if (bVar3 != 2) goto LAB_1008a90dc;
          *(undefined1 *)(unaff_x20 + 0x49) = 1;
          FUN_1008aa38c();
          puVar8 = &DAT_100f0b890;
          _swift_allocError(&DAT_100f0b890,ppppppuVar9,0,0);
          *(undefined1 *)ppppppuVar9 = 0;
          FUN_100626c9c();
          _swift_errorRelease(puVar8);
          local_e0 = &DAT_100f0b910;
          local_f8 = (undefined8 *****)CONCAT71(local_f8._1_7_,1);
          FUN_100626b98(&local_f8);
          FUN_100004594(&local_f8);
        }
        uVar12 = (ulong)*(uint *)(ppppppuVar7 + 5);
        FUN_10089ee6c(uVar12,ppppppuVar14,uVar16);
        if ((uVar12 & 1) == 0) {
          FUN_100626d64(2,0);
          _swift_bridgeObjectRelease(ppppppuVar14);
          _swift_release(ppppppuVar7);
          FUN_100877974(ppppppuVar6,ppppppuVar13,param_3,uVar18);
          *(undefined1 *)(unaff_x20 + 0x49) = 3;
          return;
        }
        _swift_bridgeObjectRelease(ppppppuVar14);
        _swift_release(ppppppuVar7);
      }
    }
    else {
      FUN_1008a8d6c();
      FUN_1008a9b04(param_1,ppppppuVar6,ppppppuVar13,&DAT_100f0b790,&DAT_100f0bb10);
      uVar18 = 2;
    }
    FUN_100877974(ppppppuVar6,ppppppuVar13,param_3,uVar18);
  }
  return;
}



/* Address: 0x1008a9388 | FUN_1008a9388 */

long FUN_1008a9388(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined2 uVar3;
  undefined2 uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    uVar3 = 1;
    uVar4 = 1;
  }
  else {
    uVar3 = *(undefined2 *)(lVar2 + 0x30);
    uVar4 = *(undefined2 *)(lVar2 + 0x32);
  }
  FUN_1000f7830(&DAT_100fe9538,&DAT_100c82440);
  _swift_initStaticObject();
  lVar2 = 0;
  FUN_1008a3ae8();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x22;
  *(undefined2 *)(lVar2 + 0x28) = uVar3;
  *(undefined2 *)(lVar2 + 0x2a) = uVar4;
  if (param_3 >> 0x38 == 0) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x30);
    FUN_10089ee6c(uVar1,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      return lVar2;
    }
  }
  FUN_10089f74c(0x697463656e6e6f63,0xea00000000006e6f,0x65736f6c63,&DAT_e500000000000000);
  return lVar2;
}



/* Address: 0x1008a949c | thunk_FUN_1008a9f9c */

void thunk_FUN_1008a9f9c(void)

{
  FUN_1008a9f9c();
  return;
}



/* Address: 0x1008a94a0 | thunk_FUN_1008aa04c */

void thunk_FUN_1008aa04c(void)

{
  FUN_1008aa04c();
  return;
}



/* Address: 0x1008a94a4 | FUN_1008a94a4 */

void FUN_1008a94a4(void)

{
  FUN_1008aa07c(0x4a);
  return;
}



/* Address: 0x1008a94ac | FUN_1008a94ac */

void FUN_1008a94ac(void)

{
  FUN_1008aa0cc();
  return;
}



/* Address: 0x1008a94c0 | thunk_FUN_1008a8e7c */

void thunk_FUN_1008a8e7c(void)

{
  FUN_1008a8e7c();
  return;
}



/* Address: 0x1008a94c4 | FUN_1008a94c4 */

void FUN_1008a94c4(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x37) = 0;
  if (-1 < param_1) {
    *(long *)(unaff_x20 + 0x40) = param_1;
    *(undefined1 *)(unaff_x20 + 0x48) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a9510);
  (*pcVar1)();
}



/* Address: 0x1008a9510 | FUN_1008a9510 */

void FUN_1008a9510(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x37) = 0;
  if (-1 < param_1) {
    *(long *)(unaff_x20 + 0x40) = param_1;
    *(undefined1 *)(unaff_x20 + 0x48) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a9538);
  (*pcVar1)();
}



/* Address: 0x1008a9538 | FUN_1008a9538 */

/* WARNING: Removing unreachable block (ram,0x0001008a9654) */
/* WARNING: Removing unreachable block (ram,0x0001008a9698) */

void FUN_1008a9538(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_71;
  undefined *local_70 [2];
  
  puVar5 = &DAT_100fe9100;
  puVar10 = &DAT_100c803a0;
  FUN_1000f7830();
  thunk_FUN_10088549c();
  cVar3 = (char)(param_3 >> 0x38);
  if (cVar3 == '\0') {
    if (*(byte *)(unaff_x20 + 0x48) - 1 < 2) {
      uVar12 = 3;
    }
    else {
      if (*(byte *)(unaff_x20 + 0x48) == 0) {
        *(undefined1 *)(unaff_x20 + 0x48) = 2;
        _swift_retain(puVar5);
        _swift_bridgeObjectRetain(puVar10);
        FUN_1008a98cc(param_1,puVar5,puVar10,param_3);
        FUN_100877974(puVar5,puVar10,param_3,0);
        _swift_bridgeObjectRelease(puVar10);
        _swift_release(puVar5);
        return;
      }
LAB_1008a96b0:
      uVar12 = 1;
    }
LAB_1008a96bc:
    puVar6 = puVar5;
    FUN_1008aa38c();
    puVar7 = &DAT_100f0b890;
    _swift_allocError(&DAT_100f0b890,puVar6,0,0);
    *puVar6 = uVar12;
    _swift_willThrow();
    local_70[0] = puVar7;
    _swift_errorRetain(puVar7);
    puVar6 = &DAT_100fe9a00;
    FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
    puVar8 = &local_71;
    _swift_dynamicCast(puVar8,local_70,puVar6,&DAT_100f0b890,0);
    if ((int)puVar8 == 0) {
      _swift_errorRelease(local_70[0]);
      FUN_100626c9c(puVar7);
      FUN_100877974(puVar5,puVar10,param_3,param_3 >> 0x38);
      _swift_errorRelease(puVar7);
    }
    else {
      _swift_errorRelease();
      FUN_1008aa38c();
      puVar6 = &DAT_100f0b890;
      _swift_allocError(&DAT_100f0b890,puVar7,0,0);
      *puVar7 = local_71;
      FUN_100626c9c();
      _swift_errorRelease(puVar6);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
      uVar12 = *(undefined1 *)(unaff_x20 + 0x20);
      *(undefined1 *)(unaff_x20 + 0x20) = 0;
      FUN_100774094(uVar11,uVar1,uVar12);
      _swift_beginAccess(unaff_x20 + 0x28,&local_90,0x21,0);
      uVar9 = *(ulong *)(unaff_x20 + 0x28);
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a98cc);
        (*pcVar4)();
      }
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar9 & 1) == 0) {
        lVar13 = *(long *)(unaff_x20 + 0x28);
        _swift_beginAccess(lVar13 + 0x10,auStack_a8,0,0);
        uVar9 = (ulong)*(uint *)(lVar13 + 0x10);
        FUN_10061204c();
        *(ulong *)(unaff_x20 + 0x28) = uVar9;
        _swift_release(lVar13);
      }
      lVar13 = *(long *)(unaff_x20 + 0x28);
      _swift_beginAccess(lVar13 + 0x10,auStack_c0,0,0);
      *(undefined4 *)(unaff_x20 + 0x38) = *(undefined4 *)(lVar13 + 0x10);
      *(undefined2 *)(unaff_x20 + 0x3c) = 0;
      *(undefined1 *)(unaff_x20 + 0x3e) = 0;
      *(undefined8 *)(unaff_x20 + 0x30) = 0;
      _swift_endAccess(&local_90);
      FUN_100877974(puVar5,puVar10,param_3,param_3 >> 0x38);
      _swift_errorRelease(local_70[0]);
    }
  }
  else {
    if (cVar3 == '\x01') {
      local_88 = SUB84(puVar10,0);
      uStack_84 = (undefined4)((ulong)puVar10 >> 0x20);
      local_80 = (undefined4)param_3;
      local_7c = (undefined2)(param_3 >> 0x20);
      local_7a = (undefined1)(param_3 >> 0x30);
      bVar2 = *(byte *)(unaff_x20 + 0x48);
      local_90 = puVar5;
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          uVar12 = 4;
        }
        else {
          uVar12 = 0;
        }
        goto LAB_1008a96bc;
      }
      if (bVar2 != 2) goto LAB_1008a96b0;
      FUN_1008a99d0(param_1,&local_90);
      uVar11 = 1;
    }
    else {
      FUN_1008a8d6c();
      FUN_1008a9b04(param_1,puVar5,puVar10,&DAT_100f0b810,&DAT_100f0bae8);
      uVar11 = 2;
    }
    FUN_100877974(puVar5,puVar10,param_3,uVar11);
  }
  return;
}



/* Address: 0x1008a98cc | FUN_1008a98cc */

void FUN_1008a98cc(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  byte bVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 local_60 [24];
  undefined *local_48;
  
  puVar6 = local_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(long *)(unaff_x20 + 0x18) = param_3;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  *(char *)(unaff_x20 + 0x20) = (char)param_4;
  FUN_100774094(uVar1,uVar2,uVar3);
  _swift_retain(param_2);
  _swift_bridgeObjectRetain();
  FUN_1008a1370();
  if (((param_4 & 0xff) != 1) && (*(long *)(unaff_x20 + 0x40) < param_3)) {
    bVar4 = *(byte *)(unaff_x20 + 0x48);
    if (bVar4 < 2) {
      if (bVar4 != 0) {
LAB_1008a994c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008a9950);
        (*pcVar5)();
      }
    }
    else if (bVar4 != 2) goto LAB_1008a994c;
    *(undefined1 *)(unaff_x20 + 0x48) = 1;
    local_48 = &DAT_100f0b910;
    local_60[0] = 1;
    FUN_100626b98(local_60);
    FUN_100004594();
    FUN_1008aa38c();
    puVar7 = &DAT_100f0b890;
    _swift_allocError(&DAT_100f0b890,puVar6,0,0);
    *puVar6 = 0;
    FUN_100626c9c();
    _swift_errorRelease(puVar7);
  }
  return;
}



/* Address: 0x1008a99d0 | FUN_1008a99d0 */

void FUN_1008a99d0(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 local_88 [24];
  undefined *local_70;
  undefined1 auStack_68 [24];
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_68,0,0);
  if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a9b04);
    (*pcVar4)();
  }
  uVar7 = (ulong)(uint)(*(int *)(unaff_x20 + 0x34) - *(int *)(unaff_x20 + 0x30));
  if (SBORROW8(lVar8,uVar7)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a9b00);
    (*pcVar4)();
  }
  if ((long)(lVar8 - uVar7) < (long)(ulong)(uint)(iVar2 - iVar1)) {
    bVar3 = *(byte *)(unaff_x20 + 0x48);
    if (bVar3 < 2) {
      if (bVar3 != 0) {
LAB_1008a9a48:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a9a4c);
        (*pcVar4)();
      }
    }
    else if (bVar3 != 2) goto LAB_1008a9a48;
    *(undefined1 *)(unaff_x20 + 0x48) = 1;
    local_70 = &DAT_100f0b910;
    local_88[0] = 1;
    FUN_100626b98(local_88);
    puVar5 = local_88;
    FUN_100004594();
    FUN_1008aa38c();
    puVar6 = &DAT_100f0b890;
    _swift_allocError(&DAT_100f0b890,puVar5,0,0);
    *puVar5 = 0;
    FUN_100626c9c();
    _swift_errorRelease(puVar6);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x28,local_88,0x21,0);
    FUN_10060c3b0(param_2);
    _swift_endAccess(local_88);
  }
  return;
}



/* Address: 0x1008a9b04 | FUN_1008a9b04 */

void FUN_1008a9b04(undefined8 param_1,long param_2,char param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long local_100 [3];
  undefined8 local_e8;
  undefined1 local_bf;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  ulong local_70;
  
  lVar22 = *(long *)(unaff_x20 + 0x10);
  if (lVar22 != 0) {
    uVar19 = *(ulong *)(unaff_x20 + 0x18);
    cVar7 = *(char *)(unaff_x20 + 0x20);
    local_70 = uVar19;
    if (param_2 == 0) {
      _swift_retain(lVar22);
      _swift_bridgeObjectRetain(uVar19);
      param_3 = cVar7;
    }
    else {
      puVar13 = (ulong *)(uVar19 + 0x10);
      uVar20 = *puVar13;
      if (uVar20 == 0) {
        uVar18 = 0;
      }
      else {
        lVar16 = 0;
        uVar18 = 0;
        do {
          uVar12 = *(ulong *)(uVar19 + lVar16 + 0x20);
          FUN_1008a3e68(uVar12,*(undefined8 *)(uVar19 + lVar16 + 0x28),0x72656c69617274,
                        &DAT_e700000000000000);
          if ((uVar12 & 1) != 0) {
            FUN_1008820d0(lVar22,uVar19,cVar7);
            uVar20 = uVar18 + 1;
            uVar12 = *(ulong *)(uVar19 + 0x10);
            if (uVar12 - 1 != uVar18) {
              do {
                if (uVar12 <= uVar20) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x1008a9f78);
                  (*pcVar9)();
                }
                lVar17 = uVar19 + lVar16;
                uVar12 = *(ulong *)(lVar17 + 0x40);
                FUN_1008a3e68(uVar12,*(undefined8 *)(lVar17 + 0x48),0x72656c69617274,
                              &DAT_e700000000000000);
                if ((uVar12 & 1) == 0) {
                  if (uVar20 != uVar18) {
                    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
                      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008a9f7c);
                      (*pcVar9)();
                    }
                    if (*puVar13 <= uVar18) {
                    /* WARNING: Does not return */
                      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008a9f80);
                      (*pcVar9)();
                    }
                    if (*puVar13 <= uVar20) {
                    /* WARNING: Does not return */
                      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008a9f84);
                      (*pcVar9)();
                    }
                    puVar1 = (undefined8 *)(uVar19 + 0x20 + uVar18 * 0x20);
                    uVar21 = *puVar1;
                    uVar3 = puVar1[1];
                    uVar2 = puVar1[2];
                    uVar4 = puVar1[3];
                    uVar10 = *(undefined8 *)(lVar17 + 0x40);
                    uVar5 = *(undefined8 *)(lVar17 + 0x48);
                    uVar14 = *(undefined8 *)(uVar19 + lVar16 + 0x50);
                    uVar6 = *(undefined8 *)(uVar19 + lVar16 + 0x58);
                    _swift_bridgeObjectRetain(uVar3);
                    _swift_bridgeObjectRetain(uVar4);
                    _swift_bridgeObjectRetain(uVar5);
                    _swift_bridgeObjectRetain(uVar6);
                    uVar12 = uVar19;
                    _swift_isUniquelyReferenced_nonNull_native();
                    if ((uVar12 & 1) == 0) {
                      FUN_1008a2334();
                    }
                    lVar17 = uVar19 + uVar18 * 0x20;
                    uVar15 = *(undefined8 *)(lVar17 + 0x28);
                    uVar11 = *(undefined8 *)(lVar17 + 0x38);
                    *(undefined8 *)(lVar17 + 0x20) = uVar10;
                    *(undefined8 *)(lVar17 + 0x28) = uVar5;
                    *(undefined8 *)(lVar17 + 0x30) = uVar14;
                    *(undefined8 *)(lVar17 + 0x38) = uVar6;
                    _swift_bridgeObjectRelease(uVar11);
                    _swift_bridgeObjectRelease(uVar15);
                    if (*(ulong *)(uVar19 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008a9f88);
                      (*pcVar9)();
                    }
                    lVar17 = uVar19 + lVar16;
                    uVar14 = *(undefined8 *)(lVar17 + 0x48);
                    uVar10 = *(undefined8 *)(lVar17 + 0x58);
                    *(undefined8 *)(lVar17 + 0x40) = uVar21;
                    *(undefined8 *)(lVar17 + 0x48) = uVar3;
                    *(undefined8 *)(lVar17 + 0x50) = uVar2;
                    *(undefined8 *)(lVar17 + 0x58) = uVar4;
                    _swift_bridgeObjectRelease(uVar10);
                    _swift_bridgeObjectRelease(uVar14);
                  }
                  uVar18 = uVar18 + 1;
                }
                uVar20 = uVar20 + 1;
                puVar13 = (ulong *)(uVar19 + 0x10);
                uVar12 = *puVar13;
                lVar16 = lVar16 + 0x20;
              } while (uVar20 != uVar12);
            }
            goto LAB_1008a9bd4;
          }
          uVar18 = uVar18 + 1;
          lVar16 = lVar16 + 0x20;
        } while (uVar20 != uVar18);
        uVar18 = *puVar13;
      }
      FUN_1008820d0(lVar22,uVar19,cVar7);
      uVar20 = *(ulong *)(uVar19 + 0x10);
LAB_1008a9bd4:
      lVar16 = uVar18 - uVar20;
      if (lVar16 != 0 && (long)uVar20 <= (long)uVar18) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1008a9f8c);
        (*pcVar9)();
      }
      if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1008a9f90);
        (*pcVar9)();
      }
      if (SCARRY8(uVar20,lVar16)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1008a9f94);
        (*pcVar9)();
      }
      uVar12 = uVar19;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)uVar12 == 0) || ((long)(*(ulong *)(uVar19 + 0x18) >> 1) < (long)(uVar20 + lVar16)))
      {
        local_70 = uVar19;
        thunk_FUN_100880a88();
        uVar19 = uVar12;
      }
      local_70 = uVar19;
      FUN_1008aa3cc(uVar18,uVar20,0);
      local_70 = uVar19;
      _swift_bridgeObjectRetain(param_2);
      FUN_10089fcfc();
      uVar19 = local_70;
      if (param_3 != '\x02') {
        param_3 = cVar7;
      }
    }
    _swift_beginAccess(unaff_x20 + 0x28,auStack_88,0,0);
    lVar16 = *(long *)(unaff_x20 + 0x28);
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008a9f98);
      (*pcVar9)();
    }
    uVar21 = *(undefined8 *)(unaff_x20 + 0x30);
    if ((int)((ulong)uVar21 >> 0x20) == (int)uVar21) {
      lVar16 = 0;
      uVar21 = 0;
      uVar20 = 0;
    }
    else {
      uVar20 = (ulong)*(uint7 *)(unaff_x20 + 0x38);
      _swift_retain(lVar16);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
    *(long *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    uVar8 = *(undefined1 *)(unaff_x20 + 0x20);
    *(undefined1 *)(unaff_x20 + 0x20) = 0;
    _swift_retain(lVar22);
    _swift_bridgeObjectRetain(uVar19);
    FUN_100774094(uVar2,uVar10,uVar8);
    _swift_beginAccess(unaff_x20 + 0x28,local_100,0x21,0);
    uVar18 = *(ulong *)(unaff_x20 + 0x28);
    if (uVar18 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008a9f9c);
      (*pcVar9)();
    }
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar18 & 1) == 0) {
      lVar17 = *(long *)(unaff_x20 + 0x28);
      _swift_beginAccess(lVar17 + 0x10,auStack_a0,0,0);
      uVar18 = (ulong)*(uint *)(lVar17 + 0x10);
      FUN_10061204c();
      *(ulong *)(unaff_x20 + 0x28) = uVar18;
      _swift_release(lVar17);
    }
    lVar17 = *(long *)(unaff_x20 + 0x28);
    _swift_beginAccess(lVar17 + 0x10,auStack_b8,0,0);
    *(undefined4 *)(unaff_x20 + 0x38) = *(undefined4 *)(lVar17 + 0x10);
    *(undefined2 *)(unaff_x20 + 0x3c) = 0;
    *(undefined1 *)(unaff_x20 + 0x3e) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    _swift_endAccess(local_100);
    local_e8 = param_4;
    _swift_allocObject(param_5,0x3f,7);
    *(long *)(param_5 + 0x10) = lVar22;
    *(ulong *)(param_5 + 0x18) = uVar19;
    *(char *)(param_5 + 0x20) = param_3;
    *(long *)(param_5 + 0x28) = lVar16;
    *(undefined8 *)(param_5 + 0x30) = uVar21;
    *(char *)(param_5 + 0x3e) = (char)(uVar20 >> 0x30);
    *(short *)(param_5 + 0x3c) = (short)(uVar20 >> 0x20);
    *(int *)(param_5 + 0x38) = (int)uVar20;
    local_bf = 2;
    local_100[0] = param_5;
    _swift_retain(lVar22);
    _swift_bridgeObjectRetain(uVar19);
    _swift_retain(lVar16);
    FUN_100626ce0(local_100);
    _swift_release(lVar16);
    _swift_bridgeObjectRelease(uVar19);
    _swift_release_n(lVar22,2);
    FUN_1005e70f4(local_100);
    _swift_bridgeObjectRelease(uVar19);
  }
  return;
}



/* Address: 0x1008a9f9c | FUN_1008a9f9c */

void FUN_1008a9f9c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  FUN_100627f08();
  _swift_getObjectType();
  (**(code **)(param_2 + 0x18))();
  _swift_unknownObjectRelease();
  FUN_1006116e8();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined2 *)((long)param_1 + 0x14);
  uVar4 = *(undefined1 *)((long)param_1 + 0x16);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_68,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x3e) = uVar4;
  *(undefined2 *)(unaff_x20 + 0x3c) = uVar5;
  *(undefined4 *)(unaff_x20 + 0x38) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar6);
  return;
}



/* Address: 0x1008aa04c | FUN_1008aa04c */

void FUN_1008aa04c(void)

{
  long unaff_x20;
  
  FUN_100774094(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008aa074 | FUN_1008aa074 */

void FUN_1008aa074(void)

{
  FUN_1008aa07c(0x49);
  return;
}



/* Address: 0x1008aa07c | FUN_1008aa07c */

void FUN_1008aa07c(void)

{
  long unaff_x20;
  
  FUN_100774094(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008aa0b8 | FUN_1008aa0b8 */

void FUN_1008aa0b8(void)

{
  FUN_1008aa0cc();
  return;
}



/* Address: 0x1008aa0cc | FUN_1008aa0cc */

void FUN_1008aa0cc(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar6 = *(undefined2 *)((long)param_2 + 0x2c);
  param_1[3] = param_5;
  uVar5 = *(undefined1 *)((long)param_2 + 0x2e);
  _swift_allocObject(param_6,0x3f,7);
  *param_1 = param_6;
  uVar7 = param_2[1];
  uVar8 = *param_2;
  *(undefined8 *)(param_6 + 0x18) = param_2[1];
  *(undefined8 *)(param_6 + 0x10) = uVar8;
  *(undefined1 *)(param_6 + 0x20) = uVar4;
  *(undefined8 *)(param_6 + 0x28) = uVar1;
  *(undefined8 *)(param_6 + 0x30) = uVar2;
  *(undefined1 *)(param_6 + 0x3e) = uVar5;
  *(undefined2 *)(param_6 + 0x3c) = uVar6;
  *(undefined4 *)(param_6 + 0x38) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  _swift_retain(uVar1);
  _swift_retain(uVar8);
  _swift_bridgeObjectRetain(uVar7);
  return;
}



/* Address: 0x1008aa188 | thunk_FUN_1008a9538 */

void thunk_FUN_1008a9538(void)

{
  FUN_1008a9538();
  return;
}



/* Address: 0x1008aa18c | FUN_1008aa18c */

undefined8 FUN_1008aa18c(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  FUN_1008a26cc(uVar1,param_1[1],(char)param_1[2],*param_2,param_2[1],*(undefined1 *)(param_2 + 2));
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1[3];
    lVar3 = param_2[3];
    if (uVar1 == 0) {
      if (lVar3 == 0) {
        return 1;
      }
    }
    else if (lVar3 != 0) {
      _swift_retain(lVar3);
      uVar2 = uVar1;
      _swift_retain();
      FUN_100613e94();
      _swift_release(uVar1);
      _swift_release(lVar3);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x1008aa268 | FUN_1008aa268 */

undefined8 FUN_1008aa268(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *param_1;
  uVar5 = param_1[1];
  lVar3 = param_1[2];
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar4 = param_2[2];
  uVar7 = *(ulong *)(lVar6 + 0x10);
  FUN_1008a2878(uVar7,*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)(lVar6 + 0x20),
                *(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                *(undefined8 *)(lVar1 + 0x20));
  if ((((uVar7 & 1) != 0) &&
      (*(short *)(lVar6 + 0x28) == *(short *)(lVar1 + 0x28) &&
       *(short *)(lVar6 + 0x2a) == *(short *)(lVar1 + 0x2a))) &&
     (FUN_1008a2348(uVar5,(char)lVar3,lVar2,(char)lVar4), (uVar5 & 1) != 0)) {
    uVar7 = param_1[3];
    lVar6 = param_2[3];
    if (uVar7 == 0) {
      if (lVar6 == 0) {
        return 1;
      }
    }
    else if (lVar6 != 0) {
      _swift_retain(lVar6);
      uVar5 = uVar7;
      _swift_retain();
      FUN_100613e94();
      _swift_release(uVar7);
      _swift_release(lVar6);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x1008aa38c | FUN_1008aa38c */

void FUN_1008aa38c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea3f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81b78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81b78,&DAT_100f0b890);
  DAT_100fea3f0 = pTVar1;
  return;
}



/* Address: 0x1008aa3cc | FUN_1008aa3cc */

void FUN_1008aa3cc(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008aa488);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x20 + param_1 * 0x20;
  puVar7 = &DAT_100fe9540;
  FUN_1000f7830(&DAT_100fe9540,&DAT_100c7fcb0);
  _swift_arrayDestroy(lVar1,lVar4,puVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008aa48c);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008aa490);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar1 + param_3 * 0x20);
    pvVar3 = (void *)(lVar8 + 0x20 + param_2 * 0x20);
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + lVar4 * 0x20) <= pvVar2) {
      _memmove(pvVar2,pvVar3,lVar4 * 0x20);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008aa494);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008aa498);
  (*pcVar6)();
}



/* Address: 0x1008aa498 | FUN_1008aa498 */

void FUN_1008aa498(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(long *)(unaff_x20 + 0x18) = param_2;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  *(char *)(unaff_x20 + 0x20) = (char)param_3;
  FUN_100774094(uVar1,uVar2,uVar3);
  _swift_retain(param_1);
  _swift_bridgeObjectRetain();
  FUN_1008a1370();
  if (((param_3 & 0xff) != 1) && (*(long *)(unaff_x20 + 0x40) < param_2)) {
    FUN_1008a9388(param_4,param_5,param_6);
  }
  return;
}



/* Address: 0x1008aa544 | FUN_1008aa544 */

void FUN_1008aa544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  lVar5 = *(long *)(unaff_x20 + 0x40);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_68,0,0);
  if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008aa61c);
    (*pcVar3)();
  }
  uVar4 = (ulong)(uint)(*(int *)(unaff_x20 + 0x34) - *(int *)(unaff_x20 + 0x30));
  if (!SBORROW8(lVar5,uVar4)) {
    if ((long)(lVar5 - uVar4) < (long)(ulong)(uint)(iVar2 - iVar1)) {
      FUN_1008a9388(param_2,param_3,param_4);
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x28,auStack_80,0x21,0);
      FUN_10060c3b0(param_1);
      _swift_endAccess(auStack_80);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008aa618);
  (*pcVar3)();
}



/* Address: 0x1008aa61c | thunk_FUN_1008aa620 */

void thunk_FUN_1008aa620(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea3f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81c20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81c20,&DAT_100f0b910);
  DAT_100fea3f8 = pTVar1;
  return;
}



/* Address: 0x1008aa620 | FUN_1008aa620 */

void FUN_1008aa620(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea3f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81c20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81c20,&DAT_100f0b910);
  DAT_100fea3f8 = pTVar1;
  return;
}



/* Address: 0x1008aa660 | thunk_FUN_1008aa69c */

void thunk_FUN_1008aa69c(void)

{
  FUN_1008aa69c();
  return;
}



/* Address: 0x1008aa664 | thunk_FUN_1008aa6cc */

void thunk_FUN_1008aa6cc(void)

{
  FUN_1008aa6cc();
  return;
}



/* Address: 0x1008aa668 | thunk_FUN_1008aa740 */

void thunk_FUN_1008aa740(void)

{
  FUN_1008aa740();
  return;
}


