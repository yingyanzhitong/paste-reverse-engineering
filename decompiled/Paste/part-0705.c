/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007ad9bc | FUN_1007ad9bc */

void FUN_1007ad9bc(void)

{
  FUN_1007ad9c8(FUN_1007ada54);
  return;
}



/* Address: 0x1007ad9c8 | FUN_1007ad9c8 */

void FUN_1007ad9c8(code *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *unaff_x20;
  lVar1 = (long)unaff_x20 + *(long *)(lVar4 + 0x68);
  _os_unfair_lock_lock(lVar1);
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  uVar3 = *(undefined8 *)(lVar4 + 0x58);
  uVar5 = *(undefined8 *)(lVar4 + 0x60);
  FUN_1007b8cc4(0xff,uVar2,uVar3,uVar5);
  Synchronization::Mutex::typeMetadataAccessor();
  FUN_1007b8cc4(0,uVar2,uVar3,uVar5);
  (*param_1)();
  _os_unfair_lock_unlock(lVar1);
  return;
}



/* Address: 0x1007ada54 | FUN_1007ada54 */

void FUN_1007ada54(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  String SVar15;
  char acStack_70 [8];
  char acStack_68 [8];
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = 0;
  FUN_1007b8aac(0,uVar6,uVar14,uVar8);
  lVar12 = *(long *)(lVar2 + -8);
  pcVar9 = &stack0xffffffffffffffa0 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1007b8aa0(0,uVar6,uVar14,uVar8);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  pcVar7 = pcVar9 + -uVar5;
  pcVar10 = pcVar7 + -uVar5;
  pcVar11 = *(code **)(*(long *)(lVar3 + -8) + 0x20);
  (*pcVar11)(pcVar10);
  pcVar4 = pcVar10;
  _swift_getEnumCaseMultiPayload(pcVar10,lVar3);
  if ((int)pcVar4 == 0) {
    if ((pcVar10[0x28] & 1U) != 0) {
      pcVar10[-8] = '\0';
      pcVar10[-7] = '\0';
      pcVar10[-6] = '\0';
      pcVar10[-5] = '\0';
      uVar6 = 0x343;
      goto LAB_1007adc60;
    }
    uVar6 = *(undefined8 *)pcVar10;
    uVar8 = *(undefined8 *)(pcVar10 + 0x18);
    uVar14 = *(undefined8 *)(pcVar10 + 0x10);
    *(undefined8 *)(pcVar7 + 8) = *(undefined8 *)(pcVar10 + 8);
    *(undefined8 *)pcVar7 = uVar6;
    *(undefined8 *)(pcVar7 + 0x18) = uVar8;
    *(undefined8 *)(pcVar7 + 0x10) = uVar14;
    *(undefined8 *)(pcVar7 + 0x20) = *(undefined8 *)(pcVar10 + 0x20);
    pcVar7[0x28] = '\x01';
    uVar6 = *(undefined8 *)(pcVar10 + 0x59);
    *(undefined8 *)(pcVar7 + 0x61) = *(undefined8 *)(pcVar10 + 0x61);
    *(undefined8 *)(pcVar7 + 0x59) = uVar6;
    uVar6 = *(undefined8 *)(pcVar10 + 0x69);
    *(undefined8 *)(pcVar7 + 0x71) = *(undefined8 *)(pcVar10 + 0x71);
    *(undefined8 *)(pcVar7 + 0x69) = uVar6;
    uVar6 = *(undefined8 *)(pcVar10 + 0x79);
    *(undefined8 *)(pcVar7 + 0x81) = *(undefined8 *)(pcVar10 + 0x81);
    *(undefined8 *)(pcVar7 + 0x79) = uVar6;
    *(undefined8 *)(pcVar7 + 0x88) = *(undefined8 *)(pcVar10 + 0x88);
    uVar6 = *(undefined8 *)(pcVar10 + 0x29);
    *(undefined8 *)(pcVar7 + 0x31) = *(undefined8 *)(pcVar10 + 0x31);
    *(undefined8 *)(pcVar7 + 0x29) = uVar6;
    uVar6 = *(undefined8 *)(pcVar10 + 0x39);
    *(undefined8 *)(pcVar7 + 0x41) = *(undefined8 *)(pcVar10 + 0x41);
    *(undefined8 *)(pcVar7 + 0x39) = uVar6;
    uVar6 = *(undefined8 *)(pcVar10 + 0x49);
    *(undefined8 *)(pcVar7 + 0x51) = *(undefined8 *)(pcVar10 + 0x51);
    *(undefined8 *)(pcVar7 + 0x49) = uVar6;
  }
  else if ((int)pcVar4 == 1) {
    pcVar13 = *(code **)(lVar12 + 0x20);
    (*pcVar13)(pcVar9,pcVar10,lVar2);
    if (*pcVar9 == '\x01') {
      pcVar10[-8] = '\0';
      pcVar10[-7] = '\0';
      pcVar10[-6] = '\0';
      pcVar10[-5] = '\0';
      uVar6 = 0x34d;
LAB_1007adc60:
      *(undefined8 *)(pcVar10 + -0x10) = uVar6;
      SVar15.bridgeObject = (void *)0x2;
      SVar15.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar15,(StaticString)0xd00000000000002a,
                 0x8000000100db1730,0xdb1700);
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1007adc9c);
      (*pcVar11)();
    }
    *pcVar9 = '\x01';
    (*pcVar13)(pcVar7,pcVar9,lVar2);
  }
  else {
    if (*pcVar10 == '\x01') {
      pcVar10[-8] = '\0';
      pcVar10[-7] = '\0';
      pcVar10[-6] = '\0';
      pcVar10[-5] = '\0';
      uVar6 = 0x357;
      goto LAB_1007adc60;
    }
    cVar1 = pcVar10[2];
    pcVar7[0] = '\x01';
    pcVar7[1] = '\x01';
    pcVar7[2] = cVar1;
  }
  _swift_storeEnumTagMultiPayload(pcVar7,lVar3,pcVar4);
  (*pcVar11)();
  return;
}



/* Address: 0x1007adc9c | FUN_1007adc9c */

void FUN_1007adc9c(void)

{
  FUN_1007ad074(FUN_1007adcc0,FUN_1007ba400,FUN_1007c0708,thunk_FUN_1007c0590);
  return;
}



/* Address: 0x1007adcc0 | FUN_1007adcc0 */

void FUN_1007adcc0(undefined8 *param_1,long param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  Optional OVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined7 extraout_var;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  undefined8 unaff_x20;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  String SVar22;
  char acStack_130 [8];
  char acStack_128 [8];
  char acStack_120 [8];
  long local_118;
  ulong local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  lVar20 = *(long *)(param_2 + 0x20);
  lVar5 = 0;
  FUN_1007b8aac(0,uVar15,uVar19,lVar20);
  lVar12 = *(long *)(lVar5 + -8);
  lVar8 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar18 = acStack_120 + lVar8;
  lVar6 = 0;
  local_118 = lVar5;
  local_110 = uVar19;
  FUN_1007b8aa0(0,uVar15,uVar19,lVar20);
  uVar9 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  pcVar17 = pcVar18 + -uVar9;
  pcVar16 = pcVar17 + -uVar9;
  pcVar11 = *(code **)(*(long *)(lVar6 + -8) + 0x20);
  (*pcVar11)(pcVar16);
  pcVar7 = pcVar16;
  _swift_getEnumCaseMultiPayload(pcVar16,lVar6);
  lVar5 = local_118;
  if ((int)pcVar7 == 0) {
    local_118 = lVar20;
    uStack_98 = *(undefined8 *)(pcVar16 + 0x68);
    local_a0 = *(undefined8 *)(pcVar16 + 0x60);
    uStack_88 = *(undefined8 *)(pcVar16 + 0x78);
    uStack_90 = *(undefined8 *)(pcVar16 + 0x70);
    uStack_78 = *(undefined8 *)(pcVar16 + 0x88);
    local_80 = *(undefined8 *)(pcVar16 + 0x80);
    uVar19 = *(undefined8 *)(pcVar16 + 0x38);
    uVar14 = *(ulong *)(pcVar16 + 0x30);
    uStack_d8 = *(undefined8 *)(pcVar16 + 0x28);
    uVar9 = uStack_d8;
    local_e0 = *(undefined8 *)(pcVar16 + 0x20);
    uStack_c8 = uVar19;
    local_d0 = uVar14;
    uVar21 = *(undefined8 *)(pcVar16 + 0x40);
    uStack_b8 = *(ulong *)(pcVar16 + 0x48);
    local_c0 = uVar21;
    uStack_a8 = *(undefined8 *)(pcVar16 + 0x58);
    uStack_b0 = *(undefined8 *)(pcVar16 + 0x50);
    uStack_f8 = *(undefined8 *)(pcVar16 + 8);
    local_100 = *(undefined8 *)pcVar16;
    uStack_e8 = *(undefined8 *)(pcVar16 + 0x18);
    uStack_f0 = *(ulong *)(pcVar16 + 0x10);
    uStack_d8._0_1_ = (char)*(undefined8 *)(pcVar16 + 0x28);
    uStack_d8 = uVar9;
    if ((char)uStack_d8 != '\x01') {
      pcVar16[-8] = '\0';
      pcVar16[-7] = '\0';
      pcVar16[-6] = '\0';
      pcVar16[-5] = '\0';
      uVar15 = 0x389;
LAB_1007ae01c:
      *(undefined8 *)(pcVar16 + -0x10) = uVar15;
      SVar22.bridgeObject = (void *)0x2;
      SVar22.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar22,(StaticString)0xd00000000000003e,
                 0x8000000100db1760,0xdb1700);
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1007ae058);
      (*pcVar11)();
    }
    pcVar17[0] = '\x01';
    pcVar17[1] = '\x01';
    pcVar17[2] = '\0';
    bVar10 = (byte)uStack_b8;
    uVar9 = uStack_b8 & 0xff;
    _swift_storeEnumTagMultiPayload(pcVar17,lVar6,2);
    (*pcVar11)(unaff_x20,pcVar17,lVar6);
    uVar13 = local_a0;
    FUN_1007b8bdc(uVar14,uVar19,uVar21,uVar9);
    _swift_retain();
    pcVar11 = thunk_FUN_1007b5f00;
    uVar9 = 0;
    FUN_1007ab154();
    uVar9 = uVar9 & 0xffff;
    bVar10 = bVar10 & 1 | 0x80;
    lVar8 = 0;
    FUN_1007b8bf4(0,uVar15,local_110,local_118);
    (**(code **)(*(long *)(lVar8 + -8) + 8))(&local_100,lVar8);
  }
  else if ((int)pcVar7 == 1) {
    (**(code **)(lVar12 + 0x20))(pcVar18,pcVar16,local_118);
    if (*pcVar18 != '\x01') {
      pcVar16[-8] = '\0';
      pcVar16[-7] = '\0';
      pcVar16[-6] = '\0';
      pcVar16[-5] = '\0';
      uVar15 = 0x39d;
      goto LAB_1007ae01c;
    }
    pcVar17[0] = '\x01';
    pcVar17[1] = '\x01';
    pcVar17[2] = '\x01';
    _swift_storeEnumTagMultiPayload(pcVar17,lVar6,2);
    (*pcVar11)(unaff_x20,pcVar17,lVar6);
    pcVar7 = pcVar18 + *(int *)(lVar5 + 0x38);
    uVar13 = *(undefined8 *)pcVar7;
    pcVar11 = *(code **)(pcVar7 + 8);
    uVar9 = *(ulong *)(pcVar7 + 0x10);
    uVar14 = (ulong)(byte)pcVar7[0x18];
    uVar15 = *(undefined8 *)((long)&local_118 + lVar8);
    FUN_1007b8bdc(uVar13,pcVar11,uVar9,uVar14);
    _swift_release(uVar15);
    iVar3 = *(int *)(lVar5 + 0x34);
    OVar4 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 8))
              (pcVar18 + iVar3,CONCAT71(extraout_var,OVar4.value));
    FUN_1007b8ba0(uVar13,pcVar11,uVar9,uVar14);
    uVar19 = 0;
    uVar21 = 0;
    bVar10 = 0;
  }
  else {
    cVar1 = pcVar16[1];
    cVar2 = pcVar16[2];
    *pcVar17 = *pcVar16;
    pcVar17[1] = cVar1;
    pcVar17[2] = cVar2;
    _swift_storeEnumTagMultiPayload(pcVar17,lVar6,2);
    (*pcVar11)(unaff_x20,pcVar17,lVar6);
    uVar13 = 0;
    pcVar11 = (code *)0x0;
    uVar9 = 0;
    uVar14 = 0;
    uVar19 = 0;
    uVar21 = 0;
    bVar10 = 0xfe;
  }
  *param_1 = uVar13;
  param_1[1] = pcVar11;
  param_1[2] = uVar9;
  param_1[3] = uVar14;
  param_1[4] = uVar19;
  param_1[5] = uVar21;
  *(byte *)(param_1 + 6) = bVar10;
  return;
}



/* Address: 0x1007ae058 | FUN_1007ae058 */

undefined8 FUN_1007ae058(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x20;
  lVar1 = (long)unaff_x20 + *(long *)(lVar5 + 0x68);
  _os_unfair_lock_lock(lVar1);
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  FUN_1007b8cc4(0xff,uVar2,uVar3,uVar6);
  Synchronization::Mutex::typeMetadataAccessor();
  uVar4 = 0;
  FUN_1007b8cc4(0,uVar2,uVar3,uVar6);
  FUN_1007ae0ec();
  _os_unfair_lock_unlock(lVar1);
  return uVar4;
}



/* Address: 0x1007ae0ec | FUN_1007ae0ec */

ulong FUN_1007ae0ec(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  code *pcVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = 0;
  FUN_1007b8aac(0,uVar7,uVar8,uVar10);
  lVar12 = *(long *)(lVar3 + -8);
  puVar11 = &stack0xffffffffffffffa0 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1007b8aa0(0,uVar7,uVar8,uVar10);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar9 = (undefined8 *)(puVar11 + -uVar6);
  puVar14 = (undefined8 *)((long)puVar9 - uVar6);
  pcVar15 = *(code **)(*(long *)(lVar4 + -8) + 0x20);
  (*pcVar15)(puVar14);
  puVar5 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar4);
  if ((int)puVar5 == 0) {
    uVar6 = puVar14[0xf];
    if (0xfffffffffffffffe < uVar6) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1007ae2a4);
      (*pcVar15)();
    }
    uVar13 = puVar14[0x11];
    if (0xfffffffffffffffe < uVar13) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1007ae2a8);
      (*pcVar15)();
    }
    uVar7 = puVar14[0x10];
    uVar8 = puVar14[8];
    uVar17 = puVar14[0xb];
    uVar10 = puVar14[10];
    puVar9[9] = puVar14[9];
    puVar9[8] = uVar8;
    puVar9[0xb] = uVar17;
    puVar9[10] = uVar10;
    uVar8 = puVar14[0xc];
    puVar9[0xd] = puVar14[0xd];
    puVar9[0xc] = uVar8;
    uVar8 = puVar14[0xe];
    uVar10 = *puVar14;
    uVar18 = puVar14[3];
    uVar17 = puVar14[2];
    puVar9[1] = puVar14[1];
    *puVar9 = uVar10;
    puVar9[3] = uVar18;
    puVar9[2] = uVar17;
    uVar10 = puVar14[4];
    uVar18 = puVar14[7];
    uVar17 = puVar14[6];
    puVar9[5] = puVar14[5];
    puVar9[4] = uVar10;
    puVar9[7] = uVar18;
    puVar9[6] = uVar17;
    puVar9[0xe] = uVar8;
    puVar9[0xf] = uVar6 + 1;
    puVar9[0x10] = uVar7;
    puVar9[0x11] = uVar13 + 1;
  }
  else if ((int)puVar5 == 1) {
    pcVar16 = *(code **)(lVar12 + 0x20);
    (*pcVar16)(puVar11,puVar14,lVar3);
    uVar13 = *(ulong *)(puVar11 + *(int *)(lVar3 + 0x3c));
    if (0xfffffffffffffffe < uVar13) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1007ae2a0);
      (*pcVar15)();
    }
    *(ulong *)(puVar11 + *(int *)(lVar3 + 0x3c)) = uVar13 + 1;
    (*pcVar16)(puVar9,puVar11,lVar3);
  }
  else {
    uVar1 = *(undefined1 *)((long)puVar14 + 1);
    uVar2 = *(undefined1 *)((long)puVar14 + 2);
    *(undefined1 *)puVar9 = *(undefined1 *)puVar14;
    *(undefined1 *)((long)puVar9 + 1) = uVar1;
    *(undefined1 *)((long)puVar9 + 2) = uVar2;
    uVar13 = 0xffffffffffffffff;
  }
  _swift_storeEnumTagMultiPayload(puVar9,lVar4,puVar5);
  (*pcVar15)();
  return uVar13;
}



/* Address: 0x1007ae2a8 | FUN_1007ae2a8 */

void FUN_1007ae2a8(void)

{
  char cVar1;
  StaticString file;
  undefined1 *line;
  code *pcVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  UnsafeContinuation UVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined *puVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  long *unaff_x20;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long *plVar20;
  _StringGuts _Var21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  long alStack_f0 [4];
  char *local_d0;
  undefined *local_c8;
  code *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  char *local_90;
  long local_88;
  long local_80;
  ulong local_78;
  StaticString local_70;
  undefined1 *local_68;
  undefined7 extraout_var_01;
  
  lVar17 = *unaff_x20;
  lVar24 = *(long *)(lVar17 + 0x50);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_90 = (char *)CONCAT71(extraout_var,OVar3.value);
  local_b8 = (long)alStack_f0 -
             (*(long *)(*(long *)(local_90 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var21.unknown = *(undefined **)(lVar17 + 0x58);
  local_a0 = *(long *)(_Var21.unknown + -8);
  lVar15 = local_b8 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar15;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_80 = CONCAT71(extraout_var_00,OVar3.value);
  local_88 = *(long *)(local_80 + -8);
  uVar16 = *(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_98 = lVar15 - uVar16;
  lVar15 = local_98 - uVar16;
  uVar18 = *(undefined8 *)(lVar17 + 0x60);
  lVar4 = 0xff;
  local_a8 = lVar15;
  FUN_1007b8c00(0xff,lVar24,_Var21.unknown,uVar18);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var_01,OVar3.value);
  lVar26 = *(long *)(lVar5 + -8);
  uVar16 = *(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar19 = (undefined8 *)(lVar15 - uVar16);
  lVar23 = (long)puVar19 - uVar16;
  lVar15 = (long)unaff_x20 + *(long *)(lVar17 + 0x68);
  _os_unfair_lock_lock(lVar15);
  FUN_1007b8cc4(0xff,lVar24,_Var21.unknown,uVar18);
  Synchronization::Mutex::typeMetadataAccessor();
  FUN_1007b8cc4(0,lVar24,_Var21.unknown,uVar18);
  FUN_1007ae7c0(lVar23);
  _os_unfair_lock_unlock(lVar15);
  (**(code **)(lVar26 + 0x10))(puVar19,lVar23,lVar5);
  puVar6 = puVar19;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar19,1,lVar4);
  if ((int)puVar6 == 1) {
    (**(code **)(lVar26 + 8))(lVar23,lVar5);
  }
  else {
    alStack_f0[1] = lVar23;
    alStack_f0[2] = lVar26;
    alStack_f0[3] = lVar5;
    local_c8 = (undefined *)*puVar19;
    pcVar7 = &DAT_100fdfb40;
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    local_d0 = pcVar7;
    UVar8 = Swift::UnsafeContinuation::typeMetadataAccessor();
    uVar9 = 0xff;
    FUN_1007c0680(0xff,&DAT_100fe4b60,FUN_1007961c8);
    lVar5 = local_80;
    lVar26 = 0;
    _swift_getTupleTypeMetadata3
              (0,UVar8.unknown,local_80,uVar9,"consumerContinuation failure onTerminations ",0);
    lVar4 = local_88;
    lVar17 = local_a8;
    plVar20 = (long *)((long)puVar19 + (long)*(int *)(lVar26 + 0x40));
    lVar15 = *plVar20;
    local_c0 = (code *)plVar20[1];
    lVar27 = plVar20[2];
    cVar1 = (char)plVar20[3];
    (**(code **)(local_88 + 0x20))(local_a8,(long)puVar19 + (long)*(int *)(lVar26 + 0x30),lVar5);
    lVar10 = local_98;
    (**(code **)(lVar4 + 0x10))(local_98,lVar17,lVar5);
    lVar26 = local_a0;
    (**(code **)(local_a0 + 0x30))(lVar10,1,_Var21.unknown);
    lVar5 = local_b0;
    lVar4 = local_b8;
    if ((int)lVar10 == 1) {
      (**(code **)(*(long *)(lVar24 + -8) + 0x38))(local_b8,1,1,lVar24);
      _Var21.unknown = local_c8;
      pcVar7 = local_90;
      pcVar14 = local_d0;
      FUN_1005ec10c(lVar4);
    }
    else {
      (**(code **)(lVar26 + 0x20))(local_b0,local_98,_Var21.unknown);
      puVar11 = _Var21.unknown;
      _swift_allocError(_Var21.unknown,uVar18,0,0);
      (**(code **)(lVar26 + 0x10))(uVar18,lVar5,_Var21.unknown);
      pcVar7 = local_d0;
      pcVar14 = (char *)0x0;
      pcVar12 = local_d0;
      puVar13 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      local_70.unknown = puVar11;
      _swift_allocError(local_d0,
                        PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,0);
      (**(code **)(*(long *)(pcVar7 + -8) + 0x20))(puVar13,&local_70);
      _swift_continuation_throwingResumeWithError(local_c8,pcVar12);
      (**(code **)(lVar26 + 8))(lVar5);
    }
    pcVar2 = local_c0;
    uVar16 = 0;
    plVar20 = (long *)(lVar15 + 0x30);
    if (cVar1 != '\x01') goto LAB_1007ae658;
    while( true ) {
      uVar22 = *(ulong *)(lVar15 + 0x10);
      if (uVar16 == uVar22) break;
      if (uVar22 <= uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ae6fc);
        (*pcVar2)();
      }
      lVar4 = *plVar20;
      pcVar25 = (code *)plVar20[-1];
      while( true ) {
        _swift_retain(lVar4);
        if (uVar22 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ae6f8);
          (*pcVar2)();
        }
        uVar16 = uVar16 + 1;
        (*pcVar25)();
        _swift_release(lVar4);
        plVar20 = plVar20 + 3;
        if (cVar1 == '\x01') break;
LAB_1007ae658:
        if (uVar16 != 0) {
          if (uVar16 != 1) {
            local_70.unknown = (undefined *)0x0;
            local_68 = (undefined1 *)0xe000000000000000;
            Swift::_StringGuts::grow(0x16,_Var21);
            _swift_bridgeObjectRelease(local_68);
            local_70.unknown = (undefined *)0x207865646e69;
            local_68 = &DAT_e600000000000000;
            local_78 = uVar16;
            SVar28 = Swift::CustomStringConvertible::get_description();
            SVar30.bridgeObject = pcVar14;
            SVar30.str = pcVar7;
            Swift::String::append(SVar28,SVar30);
            _swift_bridgeObjectRelease(SVar28.bridgeObject);
            SVar28.bridgeObject = (void *)0xee0073646e756f62;
            SVar28.str = (char *)0x20666f2074756f20;
            SVar31.bridgeObject = pcVar14;
            SVar31.str = pcVar7;
            Swift::String::append(SVar28,SVar31);
            line = local_68;
            file.unknown = local_70.unknown;
            *(undefined4 *)(lVar23 + -8) = 0;
            *(undefined8 *)(lVar23 + -0x10) = 0x9a;
            SVar29.bridgeObject = (void *)0x2;
            SVar29.str = (char *)0xb;
            Swift::_assertionFailure((StaticString)0x100d8deb0,SVar29,file,(__uint64)line,0xdb16d0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ae7c0);
            (*pcVar2)();
          }
          goto LAB_1007ae6a0;
        }
        uVar22 = 1;
        uVar16 = 0;
        lVar4 = lVar27;
        pcVar25 = pcVar2;
      }
    }
LAB_1007ae6a0:
    (**(code **)(local_88 + 8))(lVar17,local_80);
    (**(code **)(alStack_f0[2] + 8))(alStack_f0[1],alStack_f0[3]);
    FUN_1007b8ba0(lVar15,pcVar2,lVar27,cVar1);
  }
  return;
}



/* Address: 0x1007ae7c0 | FUN_1007ae7c0 */

void FUN_1007ae7c0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  long *plVar7;
  Optional OVar8;
  bool bVar9;
  long lVar10;
  undefined7 extraout_var;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 uVar14;
  UnsafeContinuation UVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 unaff_x20;
  code *pcVar18;
  long lVar19;
  undefined8 uVar20;
  byte *pbVar21;
  code *pcVar22;
  byte *pbVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  byte abStack_200 [8];
  byte abStack_1f8 [8];
  byte abStack_1f0 [8];
  byte abStack_1e8 [8];
  undefined4 local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  long *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  byte bStack_d8;
  byte bStack_d7;
  undefined4 uStack_d6;
  undefined2 uStack_d2;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18);
  uVar20 = *(undefined8 *)(param_2 + 0x20);
  lVar10 = 0;
  local_1a8 = param_1;
  FUN_1007b8aac(0,uVar16,lVar13,uVar20);
  local_1c0 = *(long *)(lVar10 + -8);
  lVar19 = (long)&local_1e0 - (*(long *)(local_1c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar8 = Swift::Optional::typeMetadataAccessor();
  lVar24 = lVar19 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar8.value) + -8) + 0x40) + 0xfU &
                    0xfffffffffffffff0);
  lVar11 = 0;
  local_1b8 = lVar13;
  local_1a0 = uVar16;
  local_198 = uVar20;
  FUN_1007b8aa0(0,uVar16,lVar13,uVar20);
  uVar17 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  pbVar23 = (byte *)(lVar24 - uVar17);
  pbVar21 = pbVar23 + -uVar17;
  pcVar22 = *(code **)(*(long *)(lVar11 + -8) + 0x20);
  (*pcVar22)(pbVar21);
  pbVar12 = pbVar21;
  _swift_getEnumCaseMultiPayload(pbVar21,lVar11);
  uVar16 = local_1a0;
  lVar13 = local_1b8;
  if ((int)pbVar12 == 0) {
    local_1c0 = CONCAT71(extraout_var,OVar8.value);
    uStack_f8 = *(undefined8 *)(pbVar21 + 8);
    local_100 = *(undefined8 *)pbVar21;
    uStack_e8 = *(undefined8 *)(pbVar21 + 0x18);
    uStack_f0 = *(undefined8 *)(pbVar21 + 0x10);
    local_e0 = *(undefined8 *)(pbVar21 + 0x20);
    bVar3 = pbVar21[0x28];
    uStack_d6 = *(undefined4 *)(pbVar21 + 0x2a);
    uStack_d2 = *(undefined2 *)(pbVar21 + 0x2e);
    local_1d8 = *(undefined8 *)(pbVar21 + 0x30);
    uStack_1d0 = *(undefined8 *)(pbVar21 + 0x38);
    local_1c8 = *(undefined8 *)(pbVar21 + 0x40);
    uStack_b8._1_3_ = (undefined3)*(undefined4 *)(pbVar21 + 0x49);
    uStack_b4._1_3_ = (undefined3)((uint)*(undefined4 *)(pbVar21 + 0x4c) >> 8);
    uStack_b4._0_1_ = (undefined1)((uint)*(undefined4 *)(pbVar21 + 0x49) >> 0x18);
    uVar20 = *(undefined8 *)(pbVar21 + 0x50);
    lVar10 = *(long *)(pbVar21 + 0x58);
    uVar26 = *(undefined8 *)(pbVar21 + 0x60);
    uStack_98 = *(undefined8 *)(pbVar21 + 0x68);
    local_a0 = uVar26;
    uVar14 = *(undefined8 *)(pbVar21 + 0x70);
    local_90 = uVar14;
    bStack_d8 = bVar3;
    local_1e0 = (uint)pbVar21[0x29];
    bStack_d7 = pbVar21[0x29];
    local_d0 = local_1d8;
    uStack_c8 = uStack_1d0;
    local_c0 = local_1c8;
    local_1dc = (uint)pbVar21[0x48];
    uStack_b8 = *(undefined4 *)(pbVar21 + 0x48);
    local_b0 = uVar20;
    lStack_a8 = lVar10;
    uVar25 = *(undefined8 *)(pbVar21 + 0x88);
    uStack_78 = *(undefined8 *)(pbVar21 + 0x88);
    local_80 = *(undefined8 *)(pbVar21 + 0x80);
    lVar19 = *(long *)(pbVar21 + 0x78) + -1;
    if (*(long *)(pbVar21 + 0x78) == 0) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x1007aed50);
      (*pcVar22)();
    }
    local_88 = lVar19;
    if (lVar19 == 0) {
      if (lVar10 == 0) {
        (**(code **)(*(long *)(local_1b8 + -8) + 0x38))(lVar24,1,1,local_1b8);
        uVar6 = local_1dc;
        FUN_1007b8bdc(local_1d8,uStack_1d0,local_1c8,local_1dc);
        _swift_retain(uVar20);
        uVar16 = local_198;
        *(long *)(pbVar21 + -0x10) = lVar13;
        *(undefined8 *)(pbVar21 + -8) = uVar16;
        uVar16 = local_1a0;
        uVar2 = local_1e0 & 1;
        *(undefined8 *)(pbVar21 + -0x20) = uVar25;
        *(undefined8 *)(pbVar21 + -0x18) = uVar16;
        FUN_1007b5564(pbVar23,bVar3 & 1,uVar2,uVar20,lVar24,local_1d8,uStack_1d0,local_1c8,uVar6);
        _swift_storeEnumTagMultiPayload(pbVar23,lVar11,1);
        (*pcVar22)(unaff_x20,pbVar23,lVar11);
        uVar20 = local_198;
        lVar10 = 0;
        FUN_1007b8c00(0,uVar16,lVar13,local_198);
        (**(code **)(*(long *)(lVar10 + -8) + 0x38))(local_1a8,1,1,lVar10);
        lVar10 = 0;
        FUN_1007b8bf4(0,uVar16,lVar13,uVar20);
        (**(code **)(*(long *)(lVar10 + -8) + 8))(&local_100,lVar10);
        return;
      }
      uVar14 = 0xff;
      local_190 = uVar20;
      FUN_1007abb04(0xff,local_1a0);
      uVar20 = 0;
      FUN_1006883a0(0,uVar14);
      _swift_getWitnessTable(0x100c6d780,uVar20);
      bVar9 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (bVar9) {
        bVar5 = (byte)local_1e0;
        *pbVar23 = bVar3 & 1;
        pbVar23[1] = bVar5 & 1;
        pbVar23[2] = 1;
        _swift_storeEnumTagMultiPayload(pbVar23,lVar11,2);
        (*pcVar22)(unaff_x20,pbVar23,lVar11);
        Swift::Optional::typeMetadataAccessor();
        FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
        UVar15 = Swift::UnsafeContinuation::typeMetadataAccessor();
        uVar20 = 0xff;
        FUN_1007c0680(0xff,&DAT_100fe4b60,FUN_1007961c8);
        lVar11 = 0;
        _swift_getTupleTypeMetadata3
                  (0,UVar15.unknown,local_1c0,uVar20,"consumerContinuation failure onTerminations ",
                   0);
        plVar7 = local_1a8;
        lVar13 = local_1b8;
        iVar4 = *(int *)(lVar11 + 0x30);
        puVar1 = (undefined8 *)((long)local_1a8 + (long)*(int *)(lVar11 + 0x40));
        *local_1a8 = lVar10;
        (**(code **)(*(long *)(local_1b8 + -8) + 0x38))((long)local_1a8 + (long)iVar4,1,1,local_1b8)
        ;
        uVar26 = local_198;
        uVar25 = local_1c8;
        uVar14 = uStack_1d0;
        uVar20 = local_1d8;
        uVar2 = local_1dc;
        *puVar1 = local_1d8;
        puVar1[1] = uStack_1d0;
        puVar1[2] = local_1c8;
        *(char *)(puVar1 + 3) = (char)local_1dc;
        lVar10 = 0;
        FUN_1007b8c00(0,uVar16,lVar13,local_198);
        (**(code **)(*(long *)(lVar10 + -8) + 0x38))(plVar7,0,1,lVar10);
        uStack_128 = uStack_98;
        local_130 = local_a0;
        lStack_118 = local_88;
        uStack_120 = local_90;
        uStack_108 = uStack_78;
        local_110 = local_80;
        uStack_168 = CONCAT26(uStack_d2,CONCAT42(uStack_d6,CONCAT11(bStack_d7,bStack_d8)));
        local_170 = local_e0;
        uStack_158 = uStack_c8;
        uStack_160 = local_d0;
        uStack_148 = CONCAT44(uStack_b4,uStack_b8);
        local_150 = local_c0;
        lStack_138 = lStack_a8;
        uStack_140 = local_b0;
        uStack_188 = uStack_f8;
        local_190 = local_100;
        uStack_178 = uStack_e8;
        uStack_180 = uStack_f0;
        FUN_1007b8bdc(uVar20,uVar14,uVar25,uVar2);
        lVar10 = 0;
        FUN_1007b8bf4(0,uVar16,lVar13,uVar26);
        (**(code **)(*(long *)(lVar10 + -8) + 8))(&local_190,lVar10);
        return;
      }
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x1007aed54);
      (*pcVar22)();
    }
    *(undefined8 *)(pbVar23 + 0x68) = *(undefined8 *)(pbVar21 + 0x68);
    *(undefined8 *)(pbVar23 + 0x60) = uVar26;
    *(long *)(pbVar23 + 0x78) = lVar19;
    *(undefined8 *)(pbVar23 + 0x70) = uVar14;
    uVar16 = local_80;
    *(undefined8 *)(pbVar23 + 0x88) = uStack_78;
    *(undefined8 *)(pbVar23 + 0x80) = uVar16;
    uVar14 = uStack_c8;
    uVar20 = local_d0;
    uVar16 = local_e0;
    *(ulong *)(pbVar23 + 0x28) =
         CONCAT26(uStack_d2,CONCAT42(uStack_d6,CONCAT11(bStack_d7,bStack_d8)));
    *(undefined8 *)(pbVar23 + 0x20) = uVar16;
    *(undefined8 *)(pbVar23 + 0x38) = uVar14;
    *(undefined8 *)(pbVar23 + 0x30) = uVar20;
    lVar13 = lStack_a8;
    uVar20 = local_b0;
    uVar16 = local_c0;
    *(ulong *)(pbVar23 + 0x48) = CONCAT44(uStack_b4,uStack_b8);
    *(undefined8 *)(pbVar23 + 0x40) = uVar16;
    *(long *)(pbVar23 + 0x58) = lVar13;
    *(undefined8 *)(pbVar23 + 0x50) = uVar20;
    uVar14 = uStack_e8;
    uVar20 = uStack_f0;
    uVar16 = local_100;
    *(undefined8 *)(pbVar23 + 8) = uStack_f8;
    *(undefined8 *)pbVar23 = uVar16;
    *(undefined8 *)(pbVar23 + 0x18) = uVar14;
    *(undefined8 *)(pbVar23 + 0x10) = uVar20;
    uVar16 = 0;
  }
  else if ((int)pbVar12 == 1) {
    pcVar18 = *(code **)(local_1c0 + 0x20);
    (*pcVar18)(lVar19,pbVar21,lVar10);
    (*pcVar18)(pbVar23,lVar19,lVar10);
    uVar16 = 1;
  }
  else {
    bVar3 = pbVar21[1];
    *pbVar23 = *pbVar21;
    pbVar23[1] = bVar3;
    pbVar23[2] = 1;
    uVar16 = 2;
  }
  _swift_storeEnumTagMultiPayload(pbVar23,lVar11,uVar16);
  (*pcVar22)(unaff_x20,pbVar23,lVar11);
  lVar13 = 0;
  FUN_1007b8c00(0,local_1a0,local_1b8,local_198);
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(local_1a8,1,1,lVar13);
  return;
}



/* Address: 0x1007aed54 | FUN_1007aed54 */

void FUN_1007aed54(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  Optional OVar2;
  int iVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  Mutex MVar5;
  undefined8 *puVar6;
  undefined7 extraout_var_01;
  UnsafeContinuation UVar7;
  undefined *puVar8;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long unaff_x21;
  code *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  long local_d0 [4];
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  
  lVar11 = *unaff_x20;
  lVar13 = *(long *)(lVar11 + 0x50);
  lVar4 = 0;
  local_88 = param_3;
  FUN_1007abb04(0,lVar13);
  local_d0[0] = *(long *)(lVar4 + -8);
  lVar9 = (long)local_d0 - (*(long *)(local_d0[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0[1] = lVar9;
  local_d0[2] = lVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  local_b0 = CONCAT71(extraout_var,OVar2.value);
  lVar9 = lVar9 - (*(long *)(*(long *)(local_b0 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(lVar11 + 0x58);
  local_90 = *(undefined8 *)(lVar11 + 0x60);
  lVar11 = 0;
  local_d0[3] = lVar9;
  FUN_1007b8cb8(0,lVar13,uVar10);
  local_a8 = *(long *)(lVar11 + -8);
  puVar16 = (undefined8 *)(lVar9 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,OVar2.value);
  lVar12 = (long)puVar16 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  FUN_100793c60(0,lVar4);
  lVar15 = lVar12 - (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_2 + -8);
  (**(code **)(lVar9 + 0x10))(lVar12,param_1,param_2);
  (**(code **)(lVar9 + 0x38))(lVar12,0,1,param_2);
  local_a0 = lVar4;
  FUN_100793878(lVar15,lVar12,lVar4);
  lVar4 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x68);
  _os_unfair_lock_lock(lVar4);
  uVar1 = local_90;
  FUN_1007b8cc4(0xff,lVar13,uVar10,local_90);
  MVar5 = Synchronization::Mutex::typeMetadataAccessor();
  local_98 = lVar15;
  FUN_1007af368(puVar16,lVar4 + *(int *)(MVar5.unknown + 0x1c),lVar15,lVar13,uVar10,param_2,uVar1,
                local_88);
  if (unaff_x21 != 0) {
    _os_unfair_lock_unlock(lVar4);
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1007af368);
    (*pcVar14)();
  }
  _os_unfair_lock_unlock(lVar4);
  puVar6 = puVar16;
  _swift_getEnumCaseMultiPayload(puVar16,lVar11);
  iVar3 = (int)puVar6;
  if (iVar3 < 2) {
    if (iVar3 != 0) {
      uVar10 = *puVar16;
      puVar8 = &DAT_100fdfb40;
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      lVar15 = local_b0;
      UVar7 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar4 = local_d0[2];
      lVar12 = 0;
      _swift_getTupleTypeMetadata2(0,UVar7.unknown,local_d0[2],"continuation element ",0);
      (**(code **)(local_d0[0] + 0x10))
                (local_d0[1],(long)puVar16 + (long)*(int *)(lVar12 + 0x30),lVar4);
      lVar12 = local_d0[3];
      FUN_1007afeec(local_d0[3],lVar4);
      (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar12,0,1,lVar13);
      FUN_1005ec10c(lVar12,uVar10,lVar15,puVar8,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      goto LAB_1007af224;
    }
    (**(code **)(lVar9 + 8))(param_1,param_2);
    FUN_100004520(*puVar16);
    puVar6 = puVar16;
    _swift_getEnumCaseMultiPayload(puVar16,lVar11);
    iVar3 = (int)puVar6;
    if (iVar3 < 2) {
      if (iVar3 != 0) goto LAB_1007af2f4;
    }
    else if (iVar3 == 2) {
LAB_1007af2f4:
      pcVar14 = *(code **)(local_a8 + 8);
      _swift_retain();
      (*pcVar14)(puVar16,lVar11);
      goto LAB_1007af310;
    }
    _swift_retain();
LAB_1007af310:
    lVar4 = local_98;
    OVar2 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_04,OVar2.value) + -8) + 8))
              (lVar4,CONCAT71(extraout_var_04,OVar2.value));
    return;
  }
  if (iVar3 != 2) {
    if (iVar3 != 3) {
      FUN_1007b8cd0();
      _swift_allocError(&DAT_100f01e38,puVar6,0,0);
      _swift_willThrow();
      (**(code **)(lVar9 + 8))(param_1,param_2);
      puVar6 = puVar16;
      _swift_getEnumCaseMultiPayload(puVar16,lVar11);
      if ((int)puVar6 - 1U < 2) {
        (**(code **)(local_a8 + 8))(puVar16,lVar11);
      }
      OVar2 = Swift::Optional::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8) + 8))
                (local_98,CONCAT71(extraout_var_01,OVar2.value));
      return;
    }
LAB_1007af224:
    (**(code **)(lVar9 + 8))(param_1,param_2);
    puVar6 = puVar16;
    _swift_getEnumCaseMultiPayload(puVar16,lVar11);
    if ((int)puVar6 - 1U < 2) {
      (**(code **)(local_a8 + 8))(puVar16,lVar11);
    }
    OVar2 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_02,OVar2.value) + -8) + 8))
              (local_98,CONCAT71(extraout_var_02,OVar2.value));
    return;
  }
  uVar10 = *puVar16;
  puVar8 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  lVar15 = local_b0;
  UVar7 = Swift::UnsafeContinuation::typeMetadataAccessor();
  lVar4 = local_d0[2];
  lVar12 = 0;
  _swift_getTupleTypeMetadata3
            (0,UVar7.unknown,local_d0[2],PTR___type_metadata_for_Swift_UInt64_100eade90,
             "continuation element callbackToken ",0);
  local_88 = *(undefined8 *)((long)puVar16 + (long)*(int *)(lVar12 + 0x40));
  (**(code **)(local_d0[0] + 0x10))(local_d0[1],(long)puVar16 + (long)*(int *)(lVar12 + 0x30),lVar4)
  ;
  lVar12 = local_d0[3];
  FUN_1007afeec(local_d0[3],lVar4);
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar12,0,1,lVar13);
  FUN_1005ec10c(lVar12,uVar10,lVar15,puVar8,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  (**(code **)(lVar9 + 8))(param_1,param_2);
  FUN_100004520(local_88);
  puVar6 = puVar16;
  _swift_getEnumCaseMultiPayload(puVar16,lVar11);
  iVar3 = (int)puVar6;
  if (iVar3 < 2) {
    if (iVar3 != 0) goto LAB_1007af29c;
  }
  else if (iVar3 == 2) {
LAB_1007af29c:
    pcVar14 = *(code **)(local_a8 + 8);
    _swift_retain();
    (*pcVar14)(puVar16,lVar11);
    goto LAB_1007af2b8;
  }
  _swift_retain();
LAB_1007af2b8:
  lVar4 = local_98;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_03,OVar2.value) + -8) + 8))
            (lVar4,CONCAT71(extraout_var_03,OVar2.value));
  return;
}



/* Address: 0x1007af368 | FUN_1007af368 */

void FUN_1007af368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_88 = param_5;
  local_80 = param_1;
  local_78 = param_7;
  local_70 = param_2;
  uStack_68 = param_8;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar5 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  puVar9 = auStack_90 + -uVar5;
  lVar8 = (long)puVar9 - uVar5;
  lVar10 = *(long *)(param_6 + -8);
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar8 - uVar5;
  lVar6 = lVar7 - uVar5;
  (**(code **)(lVar10 + 0x38))(puVar9,1,1,param_6);
  uVar3 = 0;
  FUN_100793c60(0,CONCAT71(extraout_var,OVar2.value));
  FUN_100793a74(lVar8,puVar9,uVar3);
  lVar4 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,param_6);
  if ((int)lVar4 != 1) {
    (**(code **)(lVar10 + 0x20))(lVar6,lVar8,param_6);
    (**(code **)(lVar10 + 0x10))(lVar7,lVar6,param_6);
    uVar3 = 0;
    FUN_1007b8cc4(0,param_4,local_88,local_78);
    FUN_1007af4e0(local_80,lVar7,uVar3,param_6,uStack_68);
    (**(code **)(lVar10 + 8))(lVar6,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007af4e0);
  (*pcVar1)();
}



/* Address: 0x1007af4e0 | FUN_1007af4e0 */

void FUN_1007af4e0(ulong *param_1,code *param_2,long param_3,long param_4,ulong param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  Optional OVar7;
  long lVar8;
  long lVar9;
  undefined7 extraout_var;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  UnsafeContinuation UVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  code *pcVar20;
  undefined8 unaff_x20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uStack_1f0;
  long local_1e8 [11];
  ulong *local_190 [2];
  code *local_180;
  long local_178 [2];
  code *local_148;
  code *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 local_118;
  ulong local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  
  local_1e8[8] = *(undefined8 *)(param_3 + 0x18);
  uVar29 = *(undefined8 *)(param_3 + 0x10);
  uVar17 = *(undefined8 *)(param_3 + 0x18);
  uVar14 = *(undefined8 *)(param_3 + 0x20);
  lVar8 = 0;
  local_1e8[7] = uVar29;
  local_1e8[9] = param_5;
  local_190[1] = param_1;
  local_180 = param_2;
  FUN_1007b8aac(0,uVar29,uVar17,uVar14);
  local_1e8[4] = *(long *)(lVar8 + -8);
  lVar22 = (long)&uStack_1f0 - (*(long *)(local_1e8[4] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0xff;
  local_1e8[5] = lVar22;
  local_1e8[6] = lVar8;
  FUN_1007abb04(0xff,uVar29);
  OVar7 = Swift::Optional::typeMetadataAccessor();
  local_1e8[3] = CONCAT71(extraout_var,OVar7.value);
  lVar23 = *(long *)(local_1e8[3] + -8);
  lVar22 = lVar22 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = *(long *)(lVar9 + -8);
  uVar18 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar28 = lVar22 - uVar18;
  uVar18 = lVar28 - uVar18;
  lVar8 = 0;
  local_1e8[10] = lVar9;
  local_178[1] = uVar14;
  FUN_1007b8aa0(0,uVar29,uVar17,uVar14);
  lVar25 = *(long *)(lVar8 + -8);
  uVar19 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_190[0] = (ulong *)(uVar18 - uVar19);
  puVar21 = (undefined8 *)((long)local_190[0] - uVar19);
  local_178[0] = *(long *)(param_4 + -8);
  lVar9 = (long)puVar21 - (*(long *)(local_178[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(local_178[0] + 0x20))(lVar9,local_180,param_4);
  pcVar26 = *(code **)(lVar25 + 0x20);
  (*pcVar26)(puVar21,unaff_x20,lVar8);
  puVar10 = puVar21;
  _swift_getEnumCaseMultiPayload(puVar21,lVar8);
  if ((int)puVar10 != 0) {
    if ((int)puVar10 == 1) {
      (**(code **)(local_178[0] + 8))(lVar9,param_4);
      lVar22 = local_1e8[6];
      lVar9 = local_1e8[5];
      pcVar20 = *(code **)(local_1e8[4] + 0x20);
      (*pcVar20)(local_1e8[5],puVar21,local_1e8[6]);
      puVar15 = local_190[0];
      (*pcVar20)(local_190[0],lVar9,lVar22);
      _swift_storeEnumTagMultiPayload(puVar15,lVar8,1);
    }
    else {
      (**(code **)(local_178[0] + 8))(lVar9,param_4);
      puVar15 = local_190[0];
      uVar1 = *(undefined1 *)((long)puVar21 + 1);
      uVar2 = *(undefined1 *)((long)puVar21 + 2);
      *(undefined1 *)local_190[0] = *(undefined1 *)puVar21;
      *(undefined1 *)((long)puVar15 + 1) = uVar1;
      *(undefined1 *)((long)puVar15 + 2) = uVar2;
      _swift_storeEnumTagMultiPayload(puVar15,lVar8,2);
    }
    (*pcVar26)(unaff_x20,puVar15,lVar8);
    uVar14 = 0;
    FUN_1007b8cb8(0,uVar29,uVar17,local_178[1]);
    uVar17 = 4;
    puVar15 = local_190[1];
    goto LAB_1007afab8;
  }
  local_1e8[0] = lVar23;
  local_1e8[1] = uVar18;
  local_1e8[4] = lVar22;
  local_1e8[5] = lVar27;
  local_1e8[2] = lVar28;
  local_180 = pcVar26;
  local_1e8[6] = lVar8;
  uStack_d8 = puVar21[5];
  local_e0 = puVar21[4];
  uStack_c8 = puVar21[7];
  uStack_d0 = puVar21[6];
  uStack_b8 = puVar21[9];
  local_c0 = puVar21[8];
  uStack_f8 = puVar21[1];
  local_100 = *puVar21;
  uStack_e8 = puVar21[3];
  uStack_f0 = puVar21[2];
  uVar14 = puVar21[10];
  uVar18 = puVar21[0xb];
  uStack_98 = puVar21[0xd];
  local_a0 = puVar21[0xc];
  uStack_88 = puVar21[0xf];
  local_90 = puVar21[0xe];
  uStack_78 = puVar21[0x11];
  local_80 = puVar21[0x10];
  local_b0 = uVar14;
  local_a8 = uVar18;
  _swift_retain(uVar14);
  lVar22 = local_1e8[10];
  puVar5 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
  puVar12 = PTR___type_metadata_for_Swift_Never_100eadc38;
  FUN_1006035b0(&local_140,FUN_1006035a4,0,uVar14,&DAT_100ef5140,local_1e8[10],
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  _swift_release(uVar14);
  pcVar20 = local_140;
  lVar23 = local_178[1];
  uStack_128 = local_1e8[8];
  local_130 = local_1e8[7];
  local_118 = local_178[1];
  local_110 = local_1e8[9];
  pcVar26 = FUN_1007b8d10;
  local_120 = param_4;
  FUN_1007b5778(FUN_1007b8d10,&local_140,param_4,lVar22,puVar12,local_1e8[9],puVar5);
  uVar11 = 0;
  local_140 = pcVar26;
  FUN_1006883a0(0,lVar22);
  uVar14 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar12 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar14);
  FUN_10067d248(&local_140,uVar11,uVar14,puVar12);
  _swift_bridgeObjectRelease(pcVar26);
  local_148 = pcVar20;
  puVar12 = &DAT_100fe4b80;
  FUN_1000f7830(&DAT_100fe4b80,&DAT_100c78168);
  uVar14 = 0x100c6d860;
  _swift_getWitnessTable(0x100c6d860,uVar11);
  uVar13 = uVar14;
  FUN_1007b8d34();
  ___extension_in_Swift__Swift_MutableCollection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
            (&local_140,&local_148,uVar11,puVar12,uVar14,uVar13);
  uVar14 = local_130;
  pcVar26 = local_140;
  uVar13 = 0;
  FUN_1007b8a94(0,uVar29,uVar17,lVar23);
  FUN_1007abc78(pcVar26,local_138,uVar14);
  _swift_release(uVar14);
  lVar8 = local_1e8[4];
  local_90 = CONCAT71(local_90._1_7_,(char)pcVar26) & 0xffffffffffffff01;
  local_1e8[9] = uVar18;
  if (uVar18 == 0) {
    (**(code **)(local_178[0] + 8))(lVar9,param_4);
    uVar13 = uStack_88;
    uVar18 = local_90;
    uVar14 = local_a0;
    puVar15 = local_190[0];
    if (((ulong)pcVar26 & 1) == 0) {
      uVar19 = local_80;
      uVar24 = local_80 + 1;
      if (0xfffffffffffffffe < local_80) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x1007afee4);
        (*pcVar26)();
      }
    }
    else {
      uVar19 = 0;
      uVar24 = local_80;
    }
    local_80 = uVar24;
    local_190[0][0xd] = uStack_98;
    local_190[0][0xc] = uVar14;
    puVar15[0xf] = uVar13;
    puVar15[0xe] = uVar18;
    uVar18 = local_80;
    puVar15[0x11] = uStack_78;
    puVar15[0x10] = uVar18;
    uVar11 = uStack_c8;
    uVar13 = uStack_d0;
    uVar14 = local_e0;
    puVar15[5] = uStack_d8;
    puVar15[4] = uVar14;
    puVar15[7] = uVar11;
    puVar15[6] = uVar13;
    uVar18 = local_a8;
    uVar13 = local_b0;
    uVar14 = local_c0;
    puVar15[9] = uStack_b8;
    puVar15[8] = uVar14;
    puVar15[0xb] = uVar18;
    puVar15[10] = uVar13;
    uVar11 = uStack_e8;
    uVar13 = uStack_f0;
    uVar14 = local_100;
    puVar15[1] = uStack_f8;
    *puVar15 = uVar14;
    puVar15[3] = uVar11;
    puVar15[2] = uVar13;
    lVar8 = local_1e8[6];
    _swift_storeEnumTagMultiPayload(puVar15,local_1e8[6],0);
    (*local_180)(unaff_x20,puVar15,lVar8);
    if (((ulong)pcVar26 & 1) == 0) {
      *local_190[1] = uVar19;
LAB_1007afecc:
      puVar15 = local_190[1];
      uVar14 = 0;
      FUN_1007b8cb8(0,uVar29,uVar17,lVar23);
      uVar17 = 0;
      goto LAB_1007afab8;
    }
  }
  else {
    FUN_100681318(local_1e8[4],uVar11);
    lVar27 = local_1e8[5];
    lVar28 = lVar8;
    (**(code **)(local_1e8[5] + 0x30))(lVar8,1,lVar22);
    lVar25 = local_1e8[1];
    if ((int)lVar28 != 1) {
      pcVar26 = *(code **)(lVar27 + 0x20);
      (*pcVar26)(local_1e8[1],lVar8,lVar22);
      lVar8 = local_1e8[2];
      (**(code **)(lVar27 + 0x10))(local_1e8[2],lVar25,lVar22);
      uVar19 = lVar25;
      FUN_1007abd04(lVar25,uVar13);
      (**(code **)(lVar27 + 8))(lVar25,lVar22);
      (**(code **)(local_178[0] + 8))(lVar9,param_4);
      uVar13 = uStack_88;
      uVar14 = local_a0;
      puVar15 = local_190[0];
      local_90 = CONCAT71(local_90._1_7_,(char)uVar19) & 0xffffffffffffff01;
      uVar18 = local_90;
      local_a8 = 0;
      uVar24 = 0;
      uVar6 = local_80;
      if (((uVar19 & 1) == 0) &&
         (uVar24 = local_80, uVar6 = local_80 + 1, 0xfffffffffffffffe < local_80)) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x1007afee8);
        (*pcVar26)();
      }
      local_80 = uVar6;
      local_190[0][0xd] = uStack_98;
      local_190[0][0xc] = uVar14;
      puVar15[0xf] = uVar13;
      puVar15[0xe] = uVar18;
      uVar18 = local_80;
      puVar15[0x11] = uStack_78;
      puVar15[0x10] = uVar18;
      uVar11 = uStack_c8;
      uVar13 = uStack_d0;
      uVar14 = local_e0;
      puVar15[5] = uStack_d8;
      puVar15[4] = uVar14;
      puVar15[7] = uVar11;
      puVar15[6] = uVar13;
      uVar18 = local_a8;
      uVar13 = local_b0;
      uVar14 = local_c0;
      puVar15[9] = uStack_b8;
      puVar15[8] = uVar14;
      puVar15[0xb] = uVar18;
      puVar15[10] = uVar13;
      uVar11 = uStack_e8;
      uVar13 = uStack_f0;
      uVar14 = local_100;
      puVar15[1] = uStack_f8;
      *puVar15 = uVar14;
      puVar15[3] = uVar11;
      puVar15[2] = uVar13;
      lVar9 = local_1e8[6];
      _swift_storeEnumTagMultiPayload(puVar15,local_1e8[6],0);
      (*local_180)(unaff_x20,puVar15,lVar9);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      UVar16 = Swift::UnsafeContinuation::typeMetadataAccessor();
      if ((uVar19 & 1) == 0) {
        lVar9 = 0;
        _swift_getTupleTypeMetadata3
                  (0,UVar16.unknown,lVar22,PTR___type_metadata_for_Swift_UInt64_100eade90,
                   "continuation element callbackToken ",0);
        puVar15 = local_190[1];
        iVar3 = *(int *)(lVar9 + 0x30);
        iVar4 = *(int *)(lVar9 + 0x40);
        *local_190[1] = local_1e8[9];
        (*pcVar26)((long)local_190[1] + (long)iVar3,lVar8,lVar22);
        *(ulong *)((long)puVar15 + (long)iVar4) = uVar24;
        uVar14 = 0;
        FUN_1007b8cb8(0,uVar29,uVar17,lVar23);
        uVar17 = 2;
      }
      else {
        lVar9 = 0;
        _swift_getTupleTypeMetadata2(0,UVar16.unknown,lVar22,"continuation element ",0);
        puVar15 = local_190[1];
        iVar3 = *(int *)(lVar9 + 0x30);
        *local_190[1] = local_1e8[9];
        (*pcVar26)((long)local_190[1] + (long)iVar3,lVar8,lVar22);
        uVar14 = 0;
        FUN_1007b8cb8(0,uVar29,uVar17,lVar23);
        uVar17 = 1;
      }
      goto LAB_1007afab8;
    }
    (**(code **)(local_178[0] + 8))(lVar9,param_4);
    (**(code **)(local_1e8[0] + 8))(lVar8,local_1e8[3]);
    uVar13 = uStack_88;
    uVar18 = local_90;
    uVar14 = local_a0;
    puVar15 = local_190[0];
    if (((ulong)pcVar26 & 1) == 0) {
      uVar19 = local_80;
      uVar24 = local_80 + 1;
      if (0xfffffffffffffffe < local_80) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x1007afeec);
        (*pcVar26)();
      }
    }
    else {
      uVar19 = 0;
      uVar24 = local_80;
    }
    local_80 = uVar24;
    local_190[0][0xd] = uStack_98;
    local_190[0][0xc] = uVar14;
    puVar15[0xf] = uVar13;
    puVar15[0xe] = uVar18;
    uVar18 = local_80;
    puVar15[0x11] = uStack_78;
    puVar15[0x10] = uVar18;
    uVar11 = uStack_c8;
    uVar13 = uStack_d0;
    uVar14 = local_e0;
    puVar15[5] = uStack_d8;
    puVar15[4] = uVar14;
    puVar15[7] = uVar11;
    puVar15[6] = uVar13;
    uVar18 = local_a8;
    uVar13 = local_b0;
    uVar14 = local_c0;
    puVar15[9] = uStack_b8;
    puVar15[8] = uVar14;
    puVar15[0xb] = uVar18;
    puVar15[10] = uVar13;
    uVar11 = uStack_e8;
    uVar13 = uStack_f0;
    uVar14 = local_100;
    puVar15[1] = uStack_f8;
    *puVar15 = uVar14;
    puVar15[3] = uVar11;
    puVar15[2] = uVar13;
    lVar8 = local_1e8[6];
    _swift_storeEnumTagMultiPayload(puVar15,local_1e8[6],0);
    (*local_180)(unaff_x20,puVar15,lVar8);
    if (((ulong)pcVar26 & 1) == 0) {
      *local_190[1] = uVar19;
      goto LAB_1007afecc;
    }
  }
  uVar14 = 0;
  FUN_1007b8cb8(0,uVar29,uVar17,lVar23);
  uVar17 = 3;
  puVar15 = local_190[1];
LAB_1007afab8:
  _swift_storeEnumTagMultiPayload(puVar15,uVar14,uVar17);
  return;
}



/* Address: 0x1007afeec | FUN_1007afeec */

void FUN_1007afeec(undefined8 param_1,long param_2)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)(param_2 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar6 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0);
  lVar8 = *(long *)(param_2 + -8);
  lVar5 = (long)puVar6 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x20))(lVar5);
  FUN_100793a28(puVar6,CONCAT71(extraout_var,OVar2.value));
  lVar7 = *(long *)(lVar4 + -8);
  puVar3 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar4);
  if ((int)puVar3 != 1) {
    (**(code **)(lVar8 + 8))(lVar5,param_2);
    (**(code **)(lVar7 + 0x20))(param_1,puVar6,lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007affe0);
  (*pcVar1)();
}



/* Address: 0x1007affe0 | FUN_1007affe0 */

void FUN_1007affe0(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong *puVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *unaff_x20;
  lVar1 = (long)unaff_x20 + *(long *)(lVar7 + 0x68);
  _os_unfair_lock_lock(lVar1);
  uVar2 = *(undefined8 *)(lVar7 + 0x50);
  uVar3 = *(undefined8 *)(lVar7 + 0x58);
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FUN_1007b8cc4(0xff,uVar2,uVar3,uVar8);
  Synchronization::Mutex::typeMetadataAccessor();
  uVar4 = 0;
  FUN_1007b8cc4(0,uVar2,uVar3,uVar8);
  FUN_1007b0138(param_1,param_2,uVar4);
  FUN_1007b8d84(0xff,uVar2,uVar3,uVar8);
  Swift::Optional::typeMetadataAccessor();
  _os_unfair_lock_unlock(lVar1);
  if (((param_1 ^ 0xffffffffffffffff) & 0xf00000000000000f) != 0 ||
      (param_2 & 0xf000000000000007) != 0xf000000000000007) {
    if (-1 < (long)param_2) {
      _swift_continuation_throwingResume(param_1);
      FUN_1007748a0(param_1,param_2);
      return;
    }
    puVar5 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    puVar6 = (ulong *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar6 = param_2 & 0x7fffffffffffffff;
    _swift_continuation_throwingResumeWithError(param_1,puVar5);
  }
  return;
}



/* Address: 0x1007b0138 | FUN_1007b0138 */

undefined1  [16] FUN_1007b0138(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  CancellationError CVar12;
  CancellationError CVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 unaff_x20;
  undefined1 auVar16 [8];
  code *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  code *pcVar23;
  long lVar24;
  undefined8 uVar25;
  undefined1 auVar26 [8];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined8 uStack_140;
  ulong auStack_138 [13];
  undefined1 local_d0 [8];
  undefined1 auStack_c8 [8];
  byte local_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined1 auStack_98 [56];
  
  uVar14 = *(undefined8 *)(param_3 + 0x10);
  uVar25 = *(undefined8 *)(param_3 + 0x18);
  uVar21 = *(undefined8 *)(param_3 + 0x20);
  lVar8 = 0;
  FUN_1007b8aac(0,uVar14,uVar25,uVar21);
  lVar24 = *(long *)(lVar8 + -8);
  lVar19 = (long)&uStack_140 - (*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  FUN_1007b8aa0(0,uVar14,uVar25,uVar21);
  uVar15 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar18 = (undefined8 *)(lVar19 - uVar15);
  puVar22 = (undefined8 *)((long)puVar18 - uVar15);
  pcVar23 = *(code **)(*(long *)(lVar9 + -8) + 0x20);
  (*pcVar23)(puVar22);
  puVar10 = puVar22;
  _swift_getEnumCaseMultiPayload(puVar22,lVar9);
  if ((int)puVar10 == 0) {
    auStack_138[6] = puVar22[5];
    uVar25 = puVar22[4];
    uVar28 = puVar22[7];
    uVar27 = puVar22[6];
    auStack_138[5] = uVar25;
    auStack_138[8] = uVar28;
    auStack_138[7] = uVar27;
    auStack_138[10] = puVar22[9];
    auStack_138[9] = puVar22[8];
    auStack_138[0xc] = puVar22[0xb];
    auStack_138[0xb] = puVar22[10];
    auStack_138[2] = puVar22[1];
    uVar21 = *puVar22;
    auStack_138[1] = uVar21;
    auStack_138[4] = puVar22[3];
    auStack_138[3] = puVar22[2];
    local_c0 = *(byte *)(puVar22 + 0xe);
    auVar16 = (undefined1  [8])puVar22[0xd];
    auVar26 = (undefined1  [8])puVar22[0xc];
    auStack_c8 = (undefined1  [8])puVar22[0xd];
    local_d0 = auVar26;
    uStack_a8 = puVar22[0x11];
    local_b0 = (undefined1)puVar22[0x10];
    uStack_af = (undefined7)((ulong)puVar22[0x10] >> 8);
    uVar14 = puVar22[0xe];
    uStack_b7 = (undefined7)*(undefined8 *)((long)puVar22 + 0x79);
    local_b0 = (undefined1)((ulong)*(undefined8 *)((long)puVar22 + 0x79) >> 0x38);
    uStack_bf = (undefined7)*(undefined8 *)((long)puVar22 + 0x71);
    uStack_b8 = (undefined1)((ulong)*(undefined8 *)((long)puVar22 + 0x71) >> 0x38);
    uVar15 = *(ulong *)((long)auVar16 + 0x18);
    if (uVar15 != 0) {
      uVar20 = 0;
      do {
        if ((uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU)) == uVar20) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1007b0564);
          (*pcVar23)();
        }
        lVar8 = 0;
        if (*(long *)((long)auVar16 + 0x10) <= (long)(uVar20 + *(long *)((long)auVar16 + 0x20))) {
          lVar8 = *(long *)((long)auVar16 + 0x10);
        }
        if (*(long *)((long)auVar16 + 0x28U +
                     (uVar20 + (*(long *)((long)auVar16 + 0x20) - lVar8)) * 8) == param_1) {
          uVar15 = (ulong)auVar16;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar15 & 1) == 0) {
            FUN_1007b6b60();
            auVar16 = auStack_c8;
          }
          if (*(long *)((long)auVar16 + 0x18) <= (long)uVar20) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1007b056c);
            (*pcVar23)();
          }
          FUN_1007b6bfc(auStack_98,uVar20,uVar20 + 1,(long)auVar16 + 0x10,(long)auVar16 + 0x28);
          _swift_retain(auVar16);
          FUN_1007b7b8c(uVar20,uVar20 + 1,(long)auVar16 + 0x10,(long)auVar16 + 0x28);
          _swift_release(auVar16);
          auVar16 = local_d0;
          uVar6 = auStack_138[8];
          uVar5 = auStack_138[7];
          uVar20 = auStack_138[5];
          uVar15 = auStack_138[1];
          uVar25 = CONCAT71(uStack_b7,uStack_b8);
          uVar14 = CONCAT71(uStack_bf,local_c0);
          puVar18[0xd] = auStack_c8;
          puVar18[0xc] = auVar16;
          puVar18[0xf] = uVar25;
          puVar18[0xe] = uVar14;
          uVar14 = CONCAT71(uStack_af,local_b0);
          puVar18[0x11] = uStack_a8;
          puVar18[0x10] = uVar14;
          puVar18[5] = auStack_138[6];
          puVar18[4] = uVar20;
          uVar4 = auStack_138[4];
          uVar20 = auStack_138[3];
          puVar18[7] = uVar6;
          puVar18[6] = uVar5;
          uVar7 = auStack_138[0xc];
          uVar6 = auStack_138[0xb];
          uVar5 = auStack_138[9];
          puVar18[9] = auStack_138[10];
          puVar18[8] = uVar5;
          puVar18[0xb] = uVar7;
          puVar18[10] = uVar6;
          puVar18[1] = auStack_138[2];
          *puVar18 = uVar15;
          puVar18[3] = uVar4;
          puVar18[2] = uVar20;
          _swift_storeEnumTagMultiPayload(puVar18,lVar9,0);
          (*pcVar23)();
          CVar12 = Swift::CancellationError::typeMetadataAccessor();
          CVar13 = CVar12;
          FUN_10076915c();
          _swift_allocError(CVar12.unknown,CVar13.unknown,0,0);
          Swift::CancellationError::init();
          uVar15 = (ulong)CVar12.unknown | 0x8000000000000000;
          goto LAB_1007b0394;
        }
        uVar20 = uVar20 + 1;
      } while (uVar15 != uVar20);
    }
    if ((local_c0 & 1) == 0) {
      lVar8 = *(long *)((long)auVar26 + 0x18);
      if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1007b0568);
        (*pcVar23)();
      }
      uVar15 = (ulong)auVar26;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((*(long *)((long)auVar26 + 0x10) < lVar8 + 1) || ((uVar15 & 1) == 0)) {
        FUN_1007b6edc();
        auVar26 = local_d0;
      }
      FUN_1007b7248((long)auVar26 + 0x10,(long)auVar26 + 0x28,param_1,param_2,0,1);
      auVar16 = local_d0;
      uVar6 = auStack_138[8];
      uVar5 = auStack_138[7];
      uVar20 = auStack_138[5];
      uVar15 = auStack_138[1];
      uVar25 = CONCAT71(uStack_b7,uStack_b8);
      uVar14 = CONCAT71(uStack_bf,local_c0);
      puVar18[0xd] = auStack_c8;
      puVar18[0xc] = auVar16;
      puVar18[0xf] = uVar25;
      puVar18[0xe] = uVar14;
      uVar14 = CONCAT71(uStack_af,local_b0);
      puVar18[0x11] = uStack_a8;
      puVar18[0x10] = uVar14;
      puVar18[5] = auStack_138[6];
      puVar18[4] = uVar20;
      uVar4 = auStack_138[4];
      uVar20 = auStack_138[3];
      puVar18[7] = uVar6;
      puVar18[6] = uVar5;
      uVar7 = auStack_138[0xc];
      uVar6 = auStack_138[0xb];
      uVar5 = auStack_138[9];
      puVar18[9] = auStack_138[10];
      puVar18[8] = uVar5;
      puVar18[0xb] = uVar7;
      puVar18[10] = uVar6;
      puVar18[1] = auStack_138[2];
      *puVar18 = uVar15;
      puVar18[3] = uVar4;
      puVar18[2] = uVar20;
      _swift_storeEnumTagMultiPayload(puVar18,lVar9,0);
      (*pcVar23)();
      uVar15 = 0xf000000000000007;
      param_2 = 0xf00000000000000f;
    }
    else {
      uVar3 = CONCAT71(uStack_b7,uStack_b8);
      puVar18[0xd] = puVar22[0xd];
      puVar18[0xc] = auVar26;
      puVar18[0xf] = uVar3;
      puVar18[0xe] = uVar14;
      uVar14 = CONCAT71(uStack_af,local_b0);
      puVar18[0x11] = uStack_a8;
      puVar18[0x10] = uVar14;
      puVar18[5] = auStack_138[6];
      puVar18[4] = uVar25;
      uVar20 = auStack_138[4];
      uVar15 = auStack_138[3];
      puVar18[7] = uVar28;
      puVar18[6] = uVar27;
      uVar6 = auStack_138[0xc];
      uVar5 = auStack_138[0xb];
      uVar4 = auStack_138[9];
      puVar18[9] = auStack_138[10];
      puVar18[8] = uVar4;
      puVar18[0xb] = uVar6;
      puVar18[10] = uVar5;
      puVar18[1] = auStack_138[2];
      *puVar18 = uVar21;
      puVar18[3] = uVar20;
      puVar18[2] = uVar15;
      _swift_storeEnumTagMultiPayload(puVar18,lVar9,0);
      (*pcVar23)();
      uVar15 = 0;
    }
  }
  else {
    if ((int)puVar10 == 1) {
      pcVar17 = *(code **)(lVar24 + 0x20);
      (*pcVar17)(lVar19,puVar22,lVar8);
      (*pcVar17)(puVar18,lVar19,lVar8);
      uVar14 = 1;
    }
    else {
      uVar1 = *(undefined1 *)((long)puVar22 + 1);
      uVar2 = *(undefined1 *)((long)puVar22 + 2);
      *(undefined1 *)puVar18 = *(undefined1 *)puVar22;
      *(undefined1 *)((long)puVar18 + 1) = uVar1;
      *(undefined1 *)((long)puVar18 + 2) = uVar2;
      uVar14 = 2;
    }
    _swift_storeEnumTagMultiPayload(puVar18,lVar9,uVar14);
    (*pcVar23)();
    FUN_1007b8cd0();
    puVar11 = &DAT_100f01e38;
    _swift_allocError(&DAT_100f01e38,unaff_x20,0,0);
    uVar15 = (ulong)puVar11 | 0x8000000000000000;
  }
LAB_1007b0394:
  auVar29._8_8_ = uVar15;
  auVar29._0_8_ = param_2;
  return auVar29;
}



/* Address: 0x1007b056c | FUN_1007b056c */

void FUN_1007b056c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  Mutex MVar6;
  long *unaff_x20;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong local_90;
  undefined1 local_88;
  code *local_78;
  undefined8 uStack_70;
  ulong local_68;
  code *local_60;
  undefined *puStack_58;
  
  lVar8 = *unaff_x20;
  puVar5 = &DAT_100f01280;
  _swift_allocObject(&DAT_100f01280,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  local_60 = FUN_1007b8d90;
  lVar1 = (long)unaff_x20 + *(long *)(lVar8 + 0x68);
  puStack_58 = puVar5;
  _swift_retain(param_3);
  _os_unfair_lock_lock(lVar1);
  uVar2 = *(undefined8 *)(lVar8 + 0x50);
  uVar3 = *(undefined8 *)(lVar8 + 0x58);
  uVar9 = *(undefined8 *)(lVar8 + 0x60);
  FUN_1007b8cc4(0xff,uVar2,uVar3,uVar9);
  MVar6 = Synchronization::Mutex::typeMetadataAccessor();
  FUN_1007b070c(&local_78,lVar1 + *(int *)(MVar6.unknown + 0x1c),&local_60,param_1,uVar2,uVar3,uVar9
               );
  FUN_1007b8dbc(0xff,uVar2,uVar3,uVar9);
  Swift::Optional::typeMetadataAccessor();
  _os_unfair_lock_unlock(lVar1);
  if (((local_68 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    _swift_release(param_3);
  }
  else if ((long)local_68 < 0) {
    if (local_78 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b070c);
      (*pcVar4)();
    }
    uVar7 = local_68 & 0x7fffffffffffffff;
    local_88 = 1;
    local_90 = uVar7;
    _swift_errorRetain(uVar7);
    (*local_78)(&local_90);
    _swift_release(param_3);
    _swift_errorRelease(uVar7);
    FUN_100004550(local_78,uStack_70);
    _swift_errorRelease(uVar7);
  }
  else {
    if (local_78 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b0708);
      (*pcVar4)();
    }
    local_90 = 0;
    local_88 = 0;
    (*local_78)(&local_90);
    _swift_release(param_3);
    FUN_100004550(local_78,uStack_70);
  }
  FUN_1007b8dc8(local_60,puStack_58);
  return;
}



/* Address: 0x1007b070c | FUN_1007b070c */

void FUN_1007b070c(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_3;
  if (lVar3 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b07d8);
    (*pcVar1)();
  }
  lVar5 = param_3[1];
  lVar4 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  if (lVar3 != 0) {
    puVar2 = &DAT_100f01df0;
    _swift_allocObject(&DAT_100f01df0,0x20,7);
    *(long *)(puVar2 + 0x18) = lVar5;
    *(long *)(puVar2 + 0x10) = lVar4;
    FUN_1007b8cc4(0,param_5,param_6,param_7);
    pcVar1 = FUN_1007c064c;
    FUN_1007b07dc();
    *param_1 = param_4;
    param_1[1] = pcVar1;
    param_1[2] = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b07dc);
  (*pcVar1)();
}



/* Address: 0x1007b07dc | FUN_1007b07dc */

code * FUN_1007b07dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  CancellationError CVar13;
  CancellationError CVar14;
  ulong uVar15;
  undefined1 auVar16 [8];
  long lVar17;
  code *pcVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined1 auVar26 [8];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 local_140;
  ulong auStack_138 [13];
  undefined1 local_d0 [8];
  undefined1 auStack_c8 [8];
  byte local_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined1 auStack_98 [56];
  
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uVar25 = *(undefined8 *)(param_4 + 0x18);
  uVar22 = *(undefined8 *)(param_4 + 0x20);
  lVar9 = 0;
  local_140 = param_2;
  FUN_1007b8aac(0,uVar1,uVar25,uVar22);
  lVar17 = *(long *)(lVar9 + -8);
  lVar20 = (long)auStack_138 + (-8 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar10 = 0;
  FUN_1007b8aa0(0,uVar1,uVar25,uVar22);
  uVar15 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar19 = (undefined8 *)(lVar20 - uVar15);
  puVar23 = (undefined8 *)((long)puVar19 - uVar15);
  pcVar24 = *(code **)(*(long *)(lVar10 + -8) + 0x20);
  (*pcVar24)(puVar23);
  puVar11 = puVar23;
  _swift_getEnumCaseMultiPayload(puVar23,lVar10);
  if ((int)puVar11 == 0) {
    auStack_138[6] = puVar23[5];
    uVar25 = puVar23[4];
    uVar28 = puVar23[7];
    uVar27 = puVar23[6];
    auStack_138[5] = uVar25;
    auStack_138[8] = uVar28;
    auStack_138[7] = uVar27;
    auStack_138[10] = puVar23[9];
    auStack_138[9] = puVar23[8];
    auStack_138[0xc] = puVar23[0xb];
    auStack_138[0xb] = puVar23[10];
    auStack_138[2] = puVar23[1];
    uVar22 = *puVar23;
    auStack_138[1] = uVar22;
    auStack_138[4] = puVar23[3];
    auStack_138[3] = puVar23[2];
    local_c0 = *(byte *)(puVar23 + 0xe);
    auVar16 = (undefined1  [8])puVar23[0xd];
    auVar26 = (undefined1  [8])puVar23[0xc];
    auStack_c8 = (undefined1  [8])puVar23[0xd];
    local_d0 = auVar26;
    uStack_a8 = puVar23[0x11];
    local_b0 = (undefined1)puVar23[0x10];
    uStack_af = (undefined7)((ulong)puVar23[0x10] >> 8);
    uVar1 = puVar23[0xe];
    uStack_b7 = (undefined7)*(undefined8 *)((long)puVar23 + 0x79);
    local_b0 = (undefined1)((ulong)*(undefined8 *)((long)puVar23 + 0x79) >> 0x38);
    uStack_bf = (undefined7)*(undefined8 *)((long)puVar23 + 0x71);
    uStack_b8 = (undefined1)((ulong)*(undefined8 *)((long)puVar23 + 0x71) >> 0x38);
    uVar15 = *(ulong *)((long)auVar16 + 0x18);
    if (uVar15 != 0) {
      uVar21 = 0;
      do {
        if ((uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU)) == uVar21) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1007b0d14);
          (*pcVar24)();
        }
        lVar9 = 0;
        if (*(long *)((long)auVar16 + 0x10) <= (long)(uVar21 + *(long *)((long)auVar16 + 0x20))) {
          lVar9 = *(long *)((long)auVar16 + 0x10);
        }
        if (*(long *)((long)auVar16 + 0x28U +
                     (uVar21 + (*(long *)((long)auVar16 + 0x20) - lVar9)) * 8) == param_1) {
          uVar15 = (ulong)auVar16;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar15 & 1) == 0) {
            FUN_1007b6b60();
            auVar16 = auStack_c8;
          }
          if ((long)uVar21 < *(long *)((long)auVar16 + 0x18)) {
            FUN_1007b6bfc(auStack_98,uVar21,uVar21 + 1,(long)auVar16 + 0x10,(long)auVar16 + 0x28);
            _swift_retain(auVar16);
            FUN_1007b7b8c(uVar21,uVar21 + 1,(long)auVar16 + 0x10,(long)auVar16 + 0x28);
            _swift_release(auVar16);
            auVar16 = local_d0;
            uVar7 = auStack_138[8];
            uVar6 = auStack_138[7];
            uVar21 = auStack_138[5];
            uVar15 = auStack_138[1];
            uVar25 = CONCAT71(uStack_b7,uStack_b8);
            uVar1 = CONCAT71(uStack_bf,local_c0);
            puVar19[0xd] = auStack_c8;
            puVar19[0xc] = auVar16;
            puVar19[0xf] = uVar25;
            puVar19[0xe] = uVar1;
            uVar1 = CONCAT71(uStack_af,local_b0);
            puVar19[0x11] = uStack_a8;
            puVar19[0x10] = uVar1;
            puVar19[5] = auStack_138[6];
            puVar19[4] = uVar21;
            uVar5 = auStack_138[4];
            uVar21 = auStack_138[3];
            puVar19[7] = uVar7;
            puVar19[6] = uVar6;
            uVar8 = auStack_138[0xc];
            uVar7 = auStack_138[0xb];
            uVar6 = auStack_138[9];
            puVar19[9] = auStack_138[10];
            puVar19[8] = uVar6;
            puVar19[0xb] = uVar8;
            puVar19[10] = uVar7;
            puVar19[1] = auStack_138[2];
            *puVar19 = uVar15;
            puVar19[3] = uVar5;
            puVar19[2] = uVar21;
            _swift_storeEnumTagMultiPayload(puVar19,lVar10,0);
            (*pcVar24)();
            puVar12 = &DAT_100f012f8;
            _swift_allocObject(&DAT_100f012f8,0x20,7);
            *(undefined8 *)(puVar12 + 0x10) = local_140;
            *(undefined8 *)(puVar12 + 0x18) = param_3;
            CVar13 = Swift::CancellationError::typeMetadataAccessor();
            CVar14 = CVar13;
            FUN_10076915c();
            _swift_allocError(CVar13.unknown,CVar14.unknown,0,0);
            Swift::CancellationError::init();
            return thunk_FUN_1007b8d90;
          }
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1007b0d1c);
          (*pcVar24)();
        }
        uVar21 = uVar21 + 1;
      } while (uVar15 != uVar21);
    }
    if ((local_c0 & 1) == 0) {
      lVar9 = *(long *)((long)auVar26 + 0x18);
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1007b0d18);
        (*pcVar24)();
      }
      _swift_retain(param_3);
      uVar15 = (ulong)auVar26;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((*(long *)((long)auVar26 + 0x10) < lVar9 + 1) || ((uVar15 & 1) == 0)) {
        FUN_1007b6edc();
        auVar26 = local_d0;
      }
      FUN_1007b7248((long)auVar26 + 0x10,(long)auVar26 + 0x28,param_1,local_140,param_3,0);
      _swift_release_n(param_3,2);
      auVar16 = local_d0;
      uVar7 = auStack_138[8];
      uVar6 = auStack_138[7];
      uVar21 = auStack_138[5];
      uVar15 = auStack_138[1];
      uVar25 = CONCAT71(uStack_b7,uStack_b8);
      uVar1 = CONCAT71(uStack_bf,local_c0);
      puVar19[0xd] = auStack_c8;
      puVar19[0xc] = auVar16;
      puVar19[0xf] = uVar25;
      puVar19[0xe] = uVar1;
      uVar1 = CONCAT71(uStack_af,local_b0);
      puVar19[0x11] = uStack_a8;
      puVar19[0x10] = uVar1;
      puVar19[5] = auStack_138[6];
      puVar19[4] = uVar21;
      uVar5 = auStack_138[4];
      uVar21 = auStack_138[3];
      puVar19[7] = uVar7;
      puVar19[6] = uVar6;
      uVar8 = auStack_138[0xc];
      uVar7 = auStack_138[0xb];
      uVar6 = auStack_138[9];
      puVar19[9] = auStack_138[10];
      puVar19[8] = uVar6;
      puVar19[0xb] = uVar8;
      puVar19[10] = uVar7;
      puVar19[1] = auStack_138[2];
      *puVar19 = uVar15;
      puVar19[3] = uVar5;
      puVar19[2] = uVar21;
      _swift_storeEnumTagMultiPayload(puVar19,lVar10,0);
      (*pcVar24)();
      pcVar24 = (code *)0x0;
    }
    else {
      uVar4 = CONCAT71(uStack_b7,uStack_b8);
      puVar19[0xd] = puVar23[0xd];
      puVar19[0xc] = auVar26;
      puVar19[0xf] = uVar4;
      puVar19[0xe] = uVar1;
      uVar1 = CONCAT71(uStack_af,local_b0);
      puVar19[0x11] = uStack_a8;
      puVar19[0x10] = uVar1;
      puVar19[5] = auStack_138[6];
      puVar19[4] = uVar25;
      uVar21 = auStack_138[4];
      uVar15 = auStack_138[3];
      puVar19[7] = uVar28;
      puVar19[6] = uVar27;
      uVar7 = auStack_138[0xc];
      uVar6 = auStack_138[0xb];
      uVar5 = auStack_138[9];
      puVar19[9] = auStack_138[10];
      puVar19[8] = uVar5;
      puVar19[0xb] = uVar7;
      puVar19[10] = uVar6;
      puVar19[1] = auStack_138[2];
      *puVar19 = uVar22;
      puVar19[3] = uVar21;
      puVar19[2] = uVar15;
      _swift_storeEnumTagMultiPayload(puVar19,lVar10,0);
      (*pcVar24)();
      puVar12 = &DAT_100f01320;
      _swift_allocObject(&DAT_100f01320,0x20,7);
      *(undefined8 *)(puVar12 + 0x10) = local_140;
      *(undefined8 *)(puVar12 + 0x18) = param_3;
      pcVar24 = thunk_FUN_1007b8d90;
    }
  }
  else if ((int)puVar11 == 1) {
    pcVar18 = *(code **)(lVar17 + 0x20);
    (*pcVar18)(lVar20,puVar23,lVar9);
    (*pcVar18)(puVar19,lVar20,lVar9);
    _swift_storeEnumTagMultiPayload(puVar19,lVar10,1);
    (*pcVar24)();
    puVar12 = &DAT_100f012d0;
    _swift_allocObject(&DAT_100f012d0,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = local_140;
    *(undefined8 *)(puVar12 + 0x18) = param_3;
    FUN_1007b8cd0();
    _swift_allocError(&DAT_100f01e38,puVar12,0,0);
    pcVar24 = thunk_FUN_1007b8d90;
  }
  else {
    uVar2 = *(undefined1 *)((long)puVar23 + 1);
    uVar3 = *(undefined1 *)((long)puVar23 + 2);
    *(undefined1 *)puVar19 = *(undefined1 *)puVar23;
    *(undefined1 *)((long)puVar19 + 1) = uVar2;
    *(undefined1 *)((long)puVar19 + 2) = uVar3;
    _swift_storeEnumTagMultiPayload(puVar19,lVar10,2);
    (*pcVar24)();
    puVar12 = &DAT_100f012a8;
    _swift_allocObject(&DAT_100f012a8,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = local_140;
    *(undefined8 *)(puVar12 + 0x18) = param_3;
    FUN_1007b8cd0();
    _swift_allocError(&DAT_100f01e38,puVar12,0,0);
    pcVar24 = thunk_FUN_1007b8d90;
  }
  return pcVar24;
}



/* Address: 0x1007b0d1c | FUN_1007b0d1c */

void FUN_1007b0d1c(code *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  CancellationError CVar6;
  undefined *puVar7;
  CancellationError CVar8;
  undefined8 *puVar9;
  long *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar10 = *unaff_x20;
  lVar1 = (long)unaff_x20 + *(long *)(lVar10 + 0x68);
  _os_unfair_lock_lock(lVar1);
  uVar3 = *(undefined8 *)(lVar10 + 0x50);
  uVar4 = *(undefined8 *)(lVar10 + 0x58);
  uVar12 = *(undefined8 *)(lVar10 + 0x60);
  FUN_1007b8cc4(0xff,uVar3,uVar4,uVar12);
  Synchronization::Mutex::typeMetadataAccessor();
  uVar5 = 0;
  uVar11 = uVar4;
  FUN_1007b8cc4(0,uVar3,uVar4,uVar12);
  FUN_1007b0efc(param_1,uVar5);
  FUN_1007b8dd8(0xff,uVar3,uVar4,uVar12);
  Swift::Optional::typeMetadataAccessor();
  _os_unfair_lock_unlock(lVar1);
  uVar2 = (uint)uVar11 & 0xff;
  if (uVar2 == 1) {
    CVar8 = Swift::CancellationError::typeMetadataAccessor();
    CVar6 = CVar8;
    FUN_10076915c();
    _swift_allocError(CVar8.unknown,CVar6.unknown,0,0);
    Swift::CancellationError::init();
    puVar7 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    puVar9 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar9 = CVar8.unknown;
    _swift_continuation_throwingResumeWithError(param_1,puVar7);
    uVar11 = 1;
  }
  else {
    if (uVar2 == 0xff) {
      return;
    }
    CVar8 = Swift::CancellationError::typeMetadataAccessor();
    CVar6 = CVar8;
    FUN_10076915c();
    _swift_allocError(CVar8.unknown,CVar6.unknown,0,0);
    FUN_1007b8e0c(param_1,uVar5,uVar11);
    Swift::CancellationError::init();
    (*param_1)(CVar8.unknown,1);
    FUN_1007b8de4(param_1,uVar5,uVar11);
    _swift_errorRelease(CVar8.unknown);
  }
  FUN_1007b8de4(param_1,uVar5,uVar11);
  return;
}



/* Address: 0x1007b0efc | FUN_1007b0efc */

undefined8 FUN_1007b0efc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  code *pcVar20;
  ulong uVar21;
  undefined8 uStack_120;
  long local_118;
  long *local_110 [10];
  ulong local_c0 [9];
  undefined8 uStack_78;
  
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  lVar7 = 0;
  FUN_1007b8aac(0,uVar12,uVar1,uVar15);
  lVar18 = *(long *)(lVar7 + -8);
  lVar16 = (long)&uStack_120 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  FUN_1007b8aa0(0,uVar12,uVar1,uVar15);
  uVar11 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar14 = (undefined8 *)(lVar16 - uVar11);
  puVar17 = (undefined8 *)((long)puVar14 - uVar11);
  pcVar20 = *(code **)(*(long *)(lVar8 + -8) + 0x20);
  (*pcVar20)(puVar17);
  puVar9 = puVar17;
  _swift_getEnumCaseMultiPayload(puVar17,lVar8);
  if ((int)puVar9 == 0) {
    local_110[7] = (long *)puVar17[5];
    local_110[6] = (long *)puVar17[4];
    local_110[9] = (long *)puVar17[7];
    local_110[8] = (long *)puVar17[6];
    local_c0[1] = puVar17[9];
    local_c0[0] = puVar17[8];
    local_c0[3] = puVar17[0xb];
    local_c0[2] = puVar17[10];
    local_110[3] = (long *)puVar17[1];
    local_110[2] = (long *)*puVar17;
    local_110[5] = (long *)puVar17[3];
    local_110[4] = (long *)puVar17[2];
    local_c0[7] = puVar17[0xf];
    local_c0[6] = puVar17[0xe];
    uStack_78 = puVar17[0x11];
    local_c0[8] = puVar17[0x10];
    uVar11 = puVar17[0xd];
    local_c0[5] = puVar17[0xd];
    uVar21 = puVar17[0xc];
    uVar10 = *(ulong *)(uVar21 + 0x18);
    local_c0[4] = uVar21;
    if (uVar10 != 0) {
      uVar19 = 0;
      do {
        if ((uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU)) == uVar19) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1007b124c);
          (*pcVar20)();
        }
        lVar7 = 0;
        if (*(long *)(uVar21 + 0x10) <= (long)(uVar19 + *(long *)(uVar21 + 0x20))) {
          lVar7 = *(long *)(uVar21 + 0x10);
        }
        if (*(long *)(uVar21 + 0x28 + (uVar19 + (*(long *)(uVar21 + 0x20) - lVar7)) * 0x20) ==
            param_1) {
          uVar11 = uVar21;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar11 & 1) == 0) {
            FUN_1007b6ac4(local_110 + 2);
            uVar21 = local_c0[4];
          }
          if (*(long *)(uVar21 + 0x18) <= (long)uVar19) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1007b1254);
            (*pcVar20)();
          }
          local_110[0] = (long *)(uVar21 + 0x10);
          lVar7 = 0;
          if (*local_110[0] <= (long)(*(long *)(uVar21 + 0x20) + uVar19)) {
            lVar7 = *local_110[0];
          }
          local_118 = uVar21 + 0x28;
          lVar7 = local_118 + ((*(long *)(uVar21 + 0x20) - lVar7) + uVar19) * 0x20;
          uVar12 = *(undefined8 *)(lVar7 + 8);
          uVar1 = *(undefined8 *)(lVar7 + 0x10);
          uVar2 = *(undefined1 *)(lVar7 + 0x18);
          _swift_retain(uVar21);
          FUN_1007b8e0c(uVar12,uVar1,uVar2);
          FUN_1007b7aa8(uVar19,uVar19 + 1,local_110[0],local_118);
          _swift_release(uVar21);
          uVar10 = local_c0[7];
          uVar21 = local_c0[6];
          uVar11 = local_c0[4];
          plVar6 = local_110[9];
          plVar5 = local_110[8];
          plVar4 = local_110[6];
          puVar14[0xd] = local_c0[5];
          puVar14[0xc] = uVar11;
          puVar14[0xf] = uVar10;
          puVar14[0xe] = uVar21;
          uVar11 = local_c0[8];
          puVar14[0x11] = uStack_78;
          puVar14[0x10] = uVar11;
          puVar14[5] = local_110[7];
          puVar14[4] = plVar4;
          puVar14[7] = plVar6;
          puVar14[6] = plVar5;
          uVar10 = local_c0[3];
          uVar21 = local_c0[2];
          uVar11 = local_c0[0];
          puVar14[9] = local_c0[1];
          puVar14[8] = uVar11;
          puVar14[0xb] = uVar10;
          puVar14[10] = uVar21;
          goto LAB_1007b11f8;
        }
        uVar19 = uVar19 + 1;
      } while (uVar10 != uVar19);
    }
    lVar7 = *(long *)(uVar11 + 0x18);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1007b1250);
      (*pcVar20)();
    }
    uVar21 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((*(long *)(uVar11 + 0x10) < lVar7 + 1) || ((uVar21 & 1) == 0)) {
      FUN_1007b70a0();
      uVar11 = local_c0[5];
    }
    FUN_1007b72dc(uVar11 + 0x10,uVar11 + 0x28,param_1);
    uVar10 = local_c0[7];
    uVar21 = local_c0[6];
    uVar11 = local_c0[4];
    plVar6 = local_110[9];
    plVar5 = local_110[8];
    plVar4 = local_110[6];
    uVar12 = 0;
    puVar14[0xd] = local_c0[5];
    puVar14[0xc] = uVar11;
    puVar14[0xf] = uVar10;
    puVar14[0xe] = uVar21;
    uVar11 = local_c0[8];
    puVar14[0x11] = uStack_78;
    puVar14[0x10] = uVar11;
    puVar14[5] = local_110[7];
    puVar14[4] = plVar4;
    puVar14[7] = plVar6;
    puVar14[6] = plVar5;
    uVar10 = local_c0[3];
    uVar21 = local_c0[2];
    uVar11 = local_c0[0];
    puVar14[9] = local_c0[1];
    puVar14[8] = uVar11;
    puVar14[0xb] = uVar10;
    puVar14[10] = uVar21;
LAB_1007b11f8:
    plVar6 = local_110[5];
    plVar5 = local_110[4];
    plVar4 = local_110[2];
    puVar14[1] = local_110[3];
    *puVar14 = plVar4;
    puVar14[3] = plVar6;
    puVar14[2] = plVar5;
  }
  else {
    if ((int)puVar9 == 1) {
      pcVar13 = *(code **)(lVar18 + 0x20);
      (*pcVar13)(lVar16,puVar17,lVar7);
      (*pcVar13)(puVar14,lVar16,lVar7);
    }
    else {
      uVar2 = *(undefined1 *)((long)puVar17 + 1);
      uVar3 = *(undefined1 *)((long)puVar17 + 2);
      *(undefined1 *)puVar14 = *(undefined1 *)puVar17;
      *(undefined1 *)((long)puVar14 + 1) = uVar2;
      *(undefined1 *)((long)puVar14 + 2) = uVar3;
    }
    uVar12 = 0;
  }
  _swift_storeEnumTagMultiPayload(puVar14,lVar8,puVar9);
  (*pcVar20)();
  return uVar12;
}



/* Address: 0x1007b1254 | FUN_1007b1254 */

void FUN_1007b1254(code *param_1)

{
  code *pcVar1;
  code cVar2;
  undefined1 *puVar3;
  StaticString file;
  Optional OVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  _StringGuts _Var5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  UnsafeContinuation UVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  long *unaff_x20;
  long lVar19;
  code cVar20;
  code *pcVar21;
  long *plVar22;
  _StringGuts _Var23;
  ulong uVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  long lVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  undefined1 auStack_f0 [8];
  code *local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  undefined1 *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  code *local_a0;
  long local_98;
  long local_90;
  long local_88;
  code *local_80;
  ulong local_78;
  StaticString local_70;
  undefined1 *local_68;
  undefined7 extraout_var_01;
  
  lVar25 = *unaff_x20;
  lVar27 = *(long *)(lVar25 + 0x50);
  local_80 = param_1;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_a0 = (code *)CONCAT71(extraout_var,OVar4.value);
  local_c0 = auStack_f0 + -(*(long *)(*(long *)(local_a0 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var23.unknown = *(undefined **)(lVar25 + 0x58);
  local_a8 = *(long *)(_Var23.unknown + -8);
  lVar15 = (long)local_c0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar15;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_88 = CONCAT71(extraout_var_00,OVar4.value);
  local_90 = *(long *)(local_88 + -8);
  uVar16 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b0 = lVar15 - uVar16;
  lVar15 = local_b0 - uVar16;
  pcVar21 = *(code **)(lVar25 + 0x60);
  _Var5.unknown = (code *)0xff;
  local_98 = lVar15;
  FUN_1007b8e20(0xff,lVar27,_Var23.unknown,pcVar21);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var_01,OVar4.value);
  lVar19 = *(long *)(lVar6 + -8);
  uVar16 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  pcVar26 = (code *)(lVar15 - uVar16);
  lVar18 = (long)pcVar26 - uVar16;
  lVar15 = (long)unaff_x20 + *(long *)(lVar25 + 0x68);
  _os_unfair_lock_lock(lVar15);
  FUN_1007b8cc4(0xff,lVar27,_Var23.unknown,pcVar21);
  Synchronization::Mutex::typeMetadataAccessor();
  uVar7 = 0;
  pcVar14 = pcVar21;
  FUN_1007b8cc4(0,lVar27,_Var23.unknown);
  FUN_1007b19f8(lVar18,local_80,uVar7);
  _os_unfair_lock_unlock(lVar15);
  (**(code **)(lVar19 + 0x10))(pcVar26,lVar18,lVar6);
  pcVar8 = pcVar26;
  pcVar17 = (code *)_Var5.unknown;
  (**(code **)(*(long *)(_Var5.unknown + -8) + 0x30))(pcVar26,1);
  if ((int)pcVar8 == 1) {
    pcVar17 = *(code **)(lVar19 + 8);
LAB_1007b1888:
    (*pcVar17)(lVar18,lVar6);
  }
  else {
    pcVar8 = pcVar26;
    _swift_getEnumCaseMultiPayload();
    local_d0 = lVar18;
    lStack_c8 = lVar19;
    if ((int)pcVar8 == 0) {
      uVar16 = 0;
      lVar15 = *(long *)pcVar26;
      pcVar8 = *(code **)(pcVar26 + 8);
      lVar19 = *(long *)(pcVar26 + 0x10);
      cVar2 = pcVar26[0x18];
      plVar22 = (long *)(lVar15 + 0x30);
      if (cVar2 != (code)0x1) goto LAB_1007b1588;
      while( true ) {
        uVar24 = *(ulong *)(lVar15 + 0x10);
        if (uVar16 == uVar24) break;
        if (uVar24 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1007b18c0);
          (*pcVar17)();
        }
        lVar25 = *plVar22;
        pcVar21 = (code *)plVar22[-1];
        while( true ) {
          _swift_retain(lVar25);
          if (uVar24 <= uVar16) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1007b18b4);
            (*pcVar17)();
          }
          uVar16 = uVar16 + 1;
          (*pcVar21)();
          _swift_release(lVar25);
          plVar22 = plVar22 + 3;
          if (cVar2 == (code)0x1) break;
LAB_1007b1588:
          if (uVar16 != 0) {
            if (uVar16 == 1) goto LAB_1007b1830;
            local_70.unknown = (undefined *)0x0;
            local_68 = (undefined1 *)0xe000000000000000;
            Swift::_StringGuts::grow(0x16,_Var5);
            _swift_bridgeObjectRelease(local_68);
            local_78 = uVar16;
            goto LAB_1007b1968;
          }
          uVar24 = 1;
          uVar16 = 0;
          lVar25 = lVar19;
          pcVar21 = pcVar8;
        }
      }
LAB_1007b1830:
      (**(code **)(lStack_c8 + 8))(local_d0,lVar6);
      FUN_1007b8ba0(lVar15,pcVar8,lVar19,cVar2);
    }
    else {
      local_d8 = lVar6;
      if ((int)pcVar8 != 1) {
        uVar16 = 0;
        pcVar1 = *(code **)pcVar26;
        local_80 = *(code **)(pcVar26 + 8);
        cVar2 = pcVar26[0x10];
        cVar20 = pcVar26[0x11];
        pcVar21 = pcVar1 + 0x30;
        do {
          if (cVar20 == (code)0x1) {
            uVar24 = *(ulong *)(pcVar1 + 0x10);
            if (uVar16 == uVar24) {
              cVar20 = (code)0x1;
LAB_1007b1868:
              FUN_1007b8e2c(pcVar1,local_80,(code *)(ulong)(byte)cVar2,cVar20);
              pcVar17 = *(code **)(lStack_c8 + 8);
              lVar18 = local_d0;
              lVar6 = local_d8;
              goto LAB_1007b1888;
            }
            if (uVar24 <= uVar16) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x1007b18c4);
              (*pcVar17)();
            }
            _Var5.unknown = *(code **)(pcVar21 + -8);
            pcVar17 = (code *)(ulong)(byte)*pcVar21;
            pcVar26 = *(code **)(pcVar21 + -0x10);
          }
          else {
            if (uVar16 != 0) {
              if (uVar16 != 1) {
                local_70.unknown = (undefined *)0x0;
                local_68 = (undefined1 *)0xe000000000000000;
                Swift::_StringGuts::grow(0x16,_Var5);
                _swift_bridgeObjectRelease(local_68);
                local_78 = uVar16;
LAB_1007b1968:
                local_68 = &DAT_e600000000000000;
                local_70.unknown = (undefined *)0x207865646e69;
                SVar29 = Swift::CustomStringConvertible::get_description();
                SVar31.bridgeObject = pcVar14;
                SVar31.str = (char *)pcVar17;
                Swift::String::append(SVar29,SVar31);
                _swift_bridgeObjectRelease(SVar29.bridgeObject);
                SVar29.bridgeObject = (void *)0xee0073646e756f62;
                SVar29.str = (char *)0x20666f2074756f20;
                SVar32.bridgeObject = pcVar14;
                SVar32.str = (char *)pcVar17;
                Swift::String::append(SVar29,SVar32);
                puVar3 = local_68;
                file.unknown = local_70.unknown;
                *(undefined4 *)(lVar18 + -8) = 0;
                *(undefined8 *)(lVar18 + -0x10) = 0x9a;
                SVar30.bridgeObject = (void *)0x2;
                SVar30.str = (char *)0xb;
                Swift::_assertionFailure
                          ((StaticString)0x100d8deb0,SVar30,file,(__uint64)puVar3,0xdb16d0);
                    /* WARNING: Does not return */
                pcVar17 = (code *)SoftwareBreakpoint(1,0x1007b19f8);
                (*pcVar17)();
              }
              goto LAB_1007b1868;
            }
            uVar24 = 1;
            _Var5.unknown = local_80;
            pcVar17 = (code *)(ulong)(byte)cVar2;
            pcVar26 = pcVar1;
          }
          if (uVar24 <= uVar16) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1007b18b8);
            (*pcVar17)();
          }
          if ((int)pcVar17 == 1) {
            FUN_1007b8cd0();
            puVar11 = &DAT_100f01e38;
            _swift_allocError(&DAT_100f01e38,pcVar8,0,0);
            _Var5.unknown = &DAT_100fdfb40;
            FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
            pcVar14 = (code *)0x0;
            puVar12 = (undefined8 *)
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
            _swift_allocError();
            *puVar12 = puVar11;
            pcVar17 = (code *)_Var5.unknown;
            _swift_continuation_throwingResumeWithError();
          }
          else {
            FUN_1007b8cd0();
            pcVar14 = (code *)0x0;
            puVar11 = &DAT_100f01e38;
            _swift_allocError(&DAT_100f01e38,pcVar8,0);
            _swift_retain(_Var5.unknown);
            (*pcVar26)(puVar11,1);
            _swift_errorRelease(puVar11);
            FUN_1007b8df8();
          }
          pcVar21 = pcVar21 + 0x18;
          uVar16 = uVar16 + 1;
          pcVar8 = pcVar26;
        } while( true );
      }
      local_e0 = *(undefined **)pcVar26;
      pcVar17 = (code *)&DAT_100fdfb40;
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      local_e8 = pcVar17;
      UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
      uVar7 = 0xff;
      FUN_1007c0680(0xff,&DAT_100fe4b60,FUN_1007961c8);
      lVar10 = local_88;
      lVar19 = 0;
      _swift_getTupleTypeMetadata3
                (0,UVar9.unknown,local_88,uVar7,"consumerContinuation failure onTerminations ",0);
      lVar25 = local_90;
      lVar6 = local_98;
      pcVar17 = pcVar26 + *(int *)(lVar19 + 0x40);
      lVar15 = *(long *)pcVar17;
      local_80 = *(code **)(pcVar17 + 8);
      lVar28 = *(long *)(pcVar17 + 0x10);
      cVar2 = pcVar17[0x18];
      (**(code **)(local_90 + 0x20))(local_98,pcVar26 + *(int *)(lVar19 + 0x30),lVar10);
      lVar19 = local_b0;
      (**(code **)(lVar25 + 0x10))(local_b0,lVar6,lVar10);
      lVar25 = local_a8;
      lVar10 = lVar19;
      (**(code **)(local_a8 + 0x30))(lVar19,1,_Var23.unknown);
      lVar6 = local_b8;
      puVar3 = local_c0;
      if ((int)lVar10 == 1) {
        (**(code **)(*(long *)(lVar27 + -8) + 0x38))(local_c0,1,1,lVar27);
        _Var23.unknown = local_e0;
        pcVar17 = local_a0;
        pcVar14 = local_e8;
        FUN_1005ec10c(puVar3);
      }
      else {
        (**(code **)(lVar25 + 0x20))(local_b8,lVar19,_Var23.unknown);
        puVar11 = _Var23.unknown;
        _swift_allocError(_Var23.unknown,pcVar21,0,0);
        (**(code **)(lVar25 + 0x10))(pcVar21,lVar6,_Var23.unknown);
        pcVar17 = local_e8;
        pcVar14 = (code *)0x0;
        pcVar8 = local_e8;
        puVar13 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        local_70.unknown = puVar11;
        _swift_allocError(local_e8,
                          PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,0)
        ;
        (**(code **)(*(long *)(pcVar17 + -8) + 0x20))(puVar13,&local_70);
        _swift_continuation_throwingResumeWithError(local_e0,pcVar8);
        (**(code **)(lVar25 + 8))(lVar6);
      }
      pcVar8 = local_80;
      uVar16 = 0;
      plVar22 = (long *)(lVar15 + 0x30);
      if (cVar2 != (code)0x1) goto LAB_1007b17a8;
      while( true ) {
        uVar24 = *(ulong *)(lVar15 + 0x10);
        if (uVar16 == uVar24) break;
        if (uVar24 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1007b18bc);
          (*pcVar17)();
        }
        lVar6 = *plVar22;
        pcVar21 = (code *)plVar22[-1];
        while( true ) {
          _swift_retain(lVar6);
          if (uVar24 <= uVar16) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1007b18b0);
            (*pcVar17)();
          }
          uVar16 = uVar16 + 1;
          (*pcVar21)();
          _swift_release(lVar6);
          plVar22 = plVar22 + 3;
          if (cVar2 == (code)0x1) break;
LAB_1007b17a8:
          if (uVar16 != 0) {
            if (uVar16 == 1) goto LAB_1007b17f0;
            local_70.unknown = (undefined *)0x0;
            local_68 = (undefined1 *)0xe000000000000000;
            Swift::_StringGuts::grow(0x16,_Var23);
            _swift_bridgeObjectRelease(local_68);
            local_78 = uVar16;
            goto LAB_1007b1968;
          }
          uVar24 = 1;
          uVar16 = 0;
          lVar6 = lVar28;
          pcVar21 = pcVar8;
        }
      }
LAB_1007b17f0:
      (**(code **)(local_90 + 8))(local_98,local_88);
      (**(code **)(lStack_c8 + 8))(local_d0,local_d8);
      FUN_1007b8ba0(lVar15,pcVar8,lVar28,cVar2);
    }
  }
  return;
}



/* Address: 0x1007b19f8 | FUN_1007b19f8 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1007b19f8(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  Optional OVar6;
  bool bVar7;
  long lVar8;
  undefined7 extraout_var;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  UnsafeContinuation UVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 unaff_x20;
  code *pcVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined1 *puVar23;
  ulong uVar24;
  ulong uVar25;
  long alStack_170 [4];
  undefined8 uStack_150;
  long local_148;
  undefined8 local_140;
  long *local_138;
  long *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  ulong local_108 [6];
  undefined8 uStack_d8;
  long local_d0 [3];
  ulong uStack_b8;
  ulong local_b0;
  long local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  long lVar9;
  
  uVar15 = *(undefined8 *)(param_3 + 0x10);
  uVar12 = *(undefined8 *)(param_3 + 0x18);
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  lVar8 = 0;
  local_138 = (long *)param_2;
  local_128 = param_1;
  FUN_1007b8aac(0,uVar15,uVar12,uVar17);
  local_140 = *(long *)(lVar8 + -8);
  lVar21 = (long)&uStack_150 - (*(long *)(local_140 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,OVar6.value);
  uVar24 = *(ulong *)(lVar9 + -8);
  lVar20 = lVar21 - (*(long *)(uVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  local_120 = uVar12;
  local_118 = uVar17;
  local_110 = uVar15;
  FUN_1007b8aa0(0,uVar15,uVar12,uVar17);
  uVar16 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar23 = (undefined1 *)(lVar20 - uVar16);
  puVar18 = (undefined8 *)(puVar23 + -uVar16);
  pcVar22 = *(code **)(*(long *)(lVar10 + -8) + 0x20);
  (*pcVar22)(puVar18);
  puVar11 = puVar18;
  _swift_getEnumCaseMultiPayload(puVar18,lVar10);
  uVar15 = local_110;
  plVar3 = local_138;
  if ((int)puVar11 == 0) {
    local_140 = uVar24;
    uStack_98 = puVar18[0xd];
    local_a0 = puVar18[0xc];
    uStack_88 = puVar18[0xf];
    uStack_90 = puVar18[0xe];
    local_148 = puVar18[0x11];
    lStack_78 = local_148;
    local_80 = puVar18[0x10];
    uVar16 = puVar18[5];
    uStack_d8 = uVar16;
    uVar16 = uStack_d8;
    local_108[5] = puVar18[4];
    local_d0[1] = puVar18[7];
    local_d0[0] = puVar18[6];
    local_a8 = puVar18[0xb];
    uVar25 = puVar18[10];
    uStack_b8 = puVar18[9];
    local_d0[2] = puVar18[8];
    local_b0 = uVar25;
    local_108[2] = puVar18[1];
    local_108[1] = *puVar18;
    local_108[4] = puVar18[3];
    local_108[3] = puVar18[2];
    uStack_d8._1_1_ = (byte)(uVar16 >> 8);
    bVar5 = uStack_d8._1_1_;
    uStack_d8._0_1_ = (undefined1)uVar16;
    uVar1 = (undefined1)uStack_d8;
    uStack_d8 = uVar16;
    if (local_a8 == 0) {
      local_140 = CONCAT44((int)(uVar24 >> 0x20),(uint)uStack_d8._1_1_);
      (**(code **)(uVar24 + 0x10))(lVar20,local_138,lVar9);
      lVar21 = local_d0[2];
      lVar9 = local_d0[1];
      lVar8 = local_d0[0];
      uVar24 = uStack_b8 & 0xff;
      _swift_retain(uVar25);
      FUN_1007b8bdc(lVar8,lVar9,lVar21,uVar24);
      puVar18[-1] = local_118;
      puVar18[-2] = local_120;
      puVar18[-3] = local_110;
      puVar18[-4] = local_148;
      FUN_1007b5564(puVar23,uVar16 & 0xff,local_140 & 0xffffffff,uVar25,lVar20,lVar8,lVar9,lVar21,
                    uVar24);
      _swift_storeEnumTagMultiPayload(puVar23,lVar10,1);
      (*pcVar22)(unaff_x20,puVar23,lVar10);
      lVar8 = local_a0;
      _swift_retain();
      pcVar22 = thunk_FUN_1007b5f00;
      uVar14 = 0;
      FUN_1007ab154();
      uVar15 = local_110;
      uVar17 = local_118;
      uVar12 = local_120;
      plVar3 = local_128;
      *local_128 = lVar8;
      local_128[1] = (long)pcVar22;
      *(char *)(local_128 + 2) = (char)uVar14;
      *(char *)((long)local_128 + 0x11) = (char)((ushort)uVar14 >> 8);
      lVar8 = 0;
      FUN_1007b8e20(0,local_110,local_120,local_118);
      _swift_storeEnumTagMultiPayload(plVar3,lVar8,2);
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(plVar3,0,1,lVar8);
    }
    else {
      uVar12 = 0xff;
      local_148 = local_a8;
      local_108[0] = uVar25;
      FUN_1007abb04(0xff,local_110);
      uVar17 = 0;
      FUN_1006883a0(0,uVar12);
      _swift_getWitnessTable(0x100c6d780,uVar17);
      bVar7 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (!bVar7) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1007b1fac);
        (*pcVar22)();
      }
      *puVar23 = uVar1;
      puVar23[1] = bVar5;
      puVar23[2] = 1;
      _swift_storeEnumTagMultiPayload(puVar23,lVar10,2);
      (*pcVar22)(unaff_x20,puVar23,lVar10);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      UVar13 = Swift::UnsafeContinuation::typeMetadataAccessor();
      uVar12 = 0xff;
      FUN_1007c0680(0xff,&DAT_100fe4b60,FUN_1007961c8);
      lVar8 = 0;
      _swift_getTupleTypeMetadata3
                (0,UVar13.unknown,lVar9,uVar12,"consumerContinuation failure onTerminations ",0);
      plVar4 = local_128;
      iVar2 = *(int *)(lVar8 + 0x30);
      puVar11 = (undefined8 *)((long)local_128 + (long)*(int *)(lVar8 + 0x40));
      *local_128 = local_148;
      (**(code **)(local_140 + 0x10))((long)local_128 + (long)iVar2,plVar3,lVar9);
      lVar10 = local_d0[2];
      lVar9 = local_d0[1];
      lVar8 = local_d0[0];
      uVar17 = local_118;
      uVar12 = local_120;
      *puVar11 = local_d0[0];
      puVar11[1] = local_d0[1];
      puVar11[2] = local_d0[2];
      uVar16 = uStack_b8 & 0xff;
      *(undefined1 *)(puVar11 + 3) = (undefined1)uStack_b8;
      lVar20 = 0;
      FUN_1007b8e20(0,uVar15,local_120,local_118);
      _swift_storeEnumTagMultiPayload(plVar4,lVar20,1);
      (**(code **)(*(long *)(lVar20 + -8) + 0x38))(plVar4,0,1,lVar20);
      FUN_1007b8bdc(lVar8,lVar9,lVar10,uVar16);
    }
    lVar8 = 0;
    FUN_1007b8bf4(0,uVar15,uVar12,uVar17);
    (**(code **)(*(long *)(lVar8 + -8) + 8))(local_108 + 1,lVar8);
  }
  else {
    if ((int)puVar11 == 1) {
      pcVar19 = *(code **)(local_140 + 0x20);
      (*pcVar19)(lVar21,puVar18,lVar8);
      (*pcVar19)(puVar23,lVar21,lVar8);
      uVar15 = 1;
    }
    else {
      uVar1 = *(undefined1 *)((long)puVar18 + 1);
      *puVar23 = *(undefined1 *)puVar18;
      puVar23[1] = uVar1;
      puVar23[2] = 1;
      uVar15 = 2;
    }
    _swift_storeEnumTagMultiPayload(puVar23,lVar10,uVar15);
    (*pcVar22)(unaff_x20,puVar23,lVar10);
    lVar8 = 0;
    FUN_1007b8e20(0,local_110,local_120,local_118);
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(local_128,1,1,lVar8);
  }
  return;
}



/* Address: 0x1007b1fac | FUN_1007b1fac */

void FUN_1007b1fac(undefined8 param_1,long param_2,undefined8 param_3)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  UnownedSerialExecutor UVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(long **)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(long *)(unaff_x22 + 0x28) = param_2;
  lVar8 = *unaff_x20;
  lVar7 = *(long *)(lVar8 + 0x58);
  *(long *)(unaff_x22 + 0x40) = lVar7;
  lVar5 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x58) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x60) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar6 = *(undefined8 *)(lVar8 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar6;
  lVar5 = 0;
  FUN_100793c60(0,uVar6);
  *(long *)(unaff_x22 + 0x80) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(lVar8 + 0x60);
  lVar5 = 0;
  FUN_1007b8e40(0,uVar6,lVar7);
  *(long *)(unaff_x22 + 0xa8) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  if (param_2 == 0) {
    UVar4.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar4 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 200) = UVar4.unknown;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  _swift_task_switch(FUN_1007b2118,UVar4.unknown);
  return;
}



/* Address: 0x1007b2118 | FUN_1007b2118 */

void FUN_1007b2118(void)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  Optional OVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined7 extraout_var;
  _StringGuts _Var10;
  undefined *puVar11;
  char *pcVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long unaff_x22;
  char *pcVar20;
  undefined8 uVar21;
  long lVar22;
  void *pvVar23;
  code *pcVar24;
  ulong uVar25;
  code *pcVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar18 = *(long *)(unaff_x22 + 0xb0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar7 = (long)*(long **)(unaff_x22 + 0x38) + *(long *)(**(long **)(unaff_x22 + 0x38) + 0x68);
  _os_unfair_lock_lock(lVar7);
  FUN_1007b8cc4(0xff,uVar21,uVar1,uVar16);
  Synchronization::Mutex::typeMetadataAccessor();
  FUN_1007b8cc4(0,uVar21,uVar1,uVar16);
  FUN_1007b2a90(uVar15);
  _os_unfair_lock_unlock(lVar7);
  (**(code **)(lVar18 + 0x20))(uVar17,uVar15,uVar14);
  _swift_getEnumCaseMultiPayload(uVar17,uVar14);
  iVar5 = (int)uVar17;
  if (iVar5 < 2) {
    if (iVar5 != 0) {
      lVar18 = *(long *)(unaff_x22 + 0xb8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
      (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x90),lVar18,uVar17);
      puVar9 = &DAT_100fe4b90;
      FUN_1000f8b08(&DAT_100fe4b90,&DAT_100c78180);
      lVar7 = 0;
      _swift_getTupleTypeMetadata2(0,uVar17,puVar9,0,0);
      plVar8 = (long *)(lVar18 + *(int *)(lVar7 + 0x30));
      pcVar26 = (code *)*plVar8;
      puVar9 = (undefined *)plVar8[1];
      pcVar20 = (char *)(ulong)*(byte *)(plVar8 + 2);
      bVar3 = *(byte *)((long)plVar8 + 0x11);
      pvVar23 = (void *)(ulong)bVar3;
      _Var10.unknown = puVar9;
      pcVar6 = pcVar20;
      pvVar13 = pvVar23;
      FUN_1007b8e4c(pcVar26);
      uVar19 = 0;
      UNRECOVERED_JUMPTABLE = pcVar26 + 0x30;
      do {
        if (bVar3 == 1) {
          uVar25 = *(ulong *)(pcVar26 + 0x10);
          if (uVar19 == uVar25) {
LAB_1007b255c:
            lVar7 = *(long *)(unaff_x22 + 0x78);
            uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
            uVar14 = *(undefined8 *)(unaff_x22 + 0x20);
            FUN_1007b8e2c(pcVar26,puVar9,pcVar20,pvVar23);
            FUN_1007938f8(uVar14,uVar17);
            FUN_1007b8e2c(pcVar26,puVar9,pcVar20,pvVar23);
            UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + -8) + 0x38);
            uVar17 = 0;
            goto LAB_1007b25b4;
          }
          if (uVar25 <= uVar19) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1007b2858);
            (*UNRECOVERED_JUMPTABLE)();
          }
          puVar11 = *(undefined **)(UNRECOVERED_JUMPTABLE + -8);
          pcVar24 = *(code **)(UNRECOVERED_JUMPTABLE + -0x10);
          pcVar12 = (char *)(ulong)(byte)*UNRECOVERED_JUMPTABLE;
          if (uVar25 <= uVar19) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1007b2850);
            (*UNRECOVERED_JUMPTABLE)();
          }
        }
        else {
          puVar11 = puVar9;
          pcVar24 = pcVar26;
          pcVar12 = pcVar20;
          if (uVar19 != 0) {
            if (uVar19 != 1) {
              Swift::_StringGuts::grow(0x16,_Var10);
              _swift_bridgeObjectRelease(0xe000000000000000);
              *(ulong *)(unaff_x22 + 0x18) = uVar19;
LAB_1007b278c:
              SVar27 = Swift::CustomStringConvertible::get_description();
              SVar29.bridgeObject = pvVar13;
              SVar29.str = pcVar6;
              Swift::String::append(SVar27,SVar29);
              _swift_bridgeObjectRelease(SVar27.bridgeObject);
              SVar27.bridgeObject = (void *)0xee0073646e756f62;
              SVar27.str = (char *)0x20666f2074756f20;
              SVar30.bridgeObject = pvVar13;
              SVar30.str = pcVar6;
              Swift::String::append(SVar27,SVar30);
              SVar28.bridgeObject = (void *)0x2;
              SVar28.str = (char *)0xb;
              Swift::_assertionFailure
                        ((StaticString)0x100d8deb0,SVar28,(StaticString)0x207865646e69,
                         0xe600000000000000,0xdb16d0);
              return;
            }
            goto LAB_1007b255c;
          }
        }
        if ((int)pcVar12 == 1) {
          _swift_continuation_throwingResume(pcVar24);
          puVar11 = _Var10.unknown;
          pcVar12 = pcVar6;
        }
        else {
          _swift_retain(puVar11);
          (*pcVar24)(0,0);
          FUN_1007b8df8(pcVar24);
        }
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 0x18;
        uVar19 = uVar19 + 1;
        _Var10.unknown = puVar11;
        pcVar6 = pcVar12;
      } while( true );
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar7 = *(long *)(unaff_x22 + 0x78);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xb8),uVar17);
    FUN_1007938f8(uVar14,uVar17);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    uVar17 = 0;
LAB_1007b25b4:
    (*UNRECOVERED_JUMPTABLE)(uVar14,uVar17,1,lVar7);
  }
  else {
    if (iVar5 == 2) {
      lVar18 = *(long *)(unaff_x22 + 0xb8);
      _Var10.unknown = *(undefined **)(unaff_x22 + 0x58);
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x70),lVar18,_Var10.unknown);
      pcVar6 = (char *)0xff;
      FUN_1007c0680(0xff,&DAT_100fe4b60,FUN_1007961c8);
      lVar7 = 0;
      pvVar13 = (void *)0x0;
      _swift_getTupleTypeMetadata2();
      uVar19 = 0;
      plVar8 = (long *)(lVar18 + *(int *)(lVar7 + 0x30));
      lVar18 = *plVar8;
      UNRECOVERED_JUMPTABLE = (code *)plVar8[1];
      lVar22 = plVar8[2];
      cVar2 = (char)plVar8[3];
      plVar8 = (long *)(lVar18 + 0x30);
      if (cVar2 != '\x01') goto LAB_1007b2380;
      while( true ) {
        uVar25 = *(ulong *)(lVar18 + 0x10);
        if (uVar19 == uVar25) break;
        if (uVar25 <= uVar19) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1007b2854);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar7 = *plVar8;
        pcVar26 = (code *)plVar8[-1];
        while( true ) {
          _swift_retain(lVar7);
          if (uVar25 <= uVar19) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1007b284c);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar19 = uVar19 + 1;
          (*pcVar26)();
          _swift_release(lVar7);
          plVar8 = plVar8 + 3;
          if (cVar2 == '\x01') break;
LAB_1007b2380:
          if (uVar19 != 0) {
            if (uVar19 == 1) goto LAB_1007b238c;
            Swift::_StringGuts::grow(0x16,_Var10);
            _swift_bridgeObjectRelease(0xe000000000000000);
            *(ulong *)(unaff_x22 + 0x10) = uVar19;
            goto LAB_1007b278c;
          }
          uVar25 = 1;
          uVar19 = 0;
          lVar7 = lVar22;
          pcVar26 = UNRECOVERED_JUMPTABLE;
        }
      }
LAB_1007b238c:
      uVar17 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
      lVar7 = *(long *)(unaff_x22 + 0x48);
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x10))
                (uVar17,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x58));
      (**(code **)(lVar7 + 0x30))(uVar17,1,uVar14);
      if ((int)uVar17 != 1) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
        lVar7 = *(long *)(unaff_x22 + 0x48);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x40);
        (**(code **)(lVar7 + 0x20))(uVar17,*(undefined8 *)(unaff_x22 + 0x68),uVar15);
        _swift_allocError(uVar15,uVar14,0,0);
        (**(code **)(lVar7 + 0x10))(uVar14,uVar17,uVar15);
        _swift_willThrow();
        FUN_1007b8ba0(lVar18,UNRECOVERED_JUMPTABLE,lVar22,cVar2);
        (**(code **)(lVar7 + 8))(uVar17,uVar15);
        (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x58));
        uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x50);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
        _swift_task_dealloc(uVar17);
        _swift_task_dealloc(uVar1);
        _swift_task_dealloc(uVar14);
        _swift_task_dealloc(uVar16);
        _swift_task_dealloc(uVar15);
        _swift_task_dealloc(uVar21);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_1007b2604;
      }
      lVar7 = *(long *)(unaff_x22 + 0x78);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x20);
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
                (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x58));
      FUN_1007b8ba0(lVar18,UNRECOVERED_JUMPTABLE,lVar22,cVar2);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      uVar17 = 1;
      goto LAB_1007b25b4;
    }
    if (iVar5 != 3) {
      plVar8 = (long *)0x40;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xd8) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_1007b2858;
      FUN_1007b33ec(plVar8,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                    *(undefined8 *)(unaff_x22 + 0x30));
      return;
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
    (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x78) + -8) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x20),1,1);
    _swift_getEnumCaseMultiPayload(uVar17,uVar14);
    if ((int)uVar17 < 3) {
      if ((int)uVar17 == 0) {
        uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
LAB_1007b2824:
        OVar4 = Swift::Optional::typeMetadataAccessor();
        (**(code **)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 8))
                  (uVar17,CONCAT71(extraout_var,OVar4.value));
      }
      else {
        uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar14 = uVar17;
        _swift_getEnumCaseMultiPayload(uVar17,uVar15);
        if ((int)uVar14 < 3) {
          if ((int)uVar14 == 0) goto LAB_1007b2824;
          (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))(uVar17,uVar15);
        }
      }
    }
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar21);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1007b2604:
                    /* WARNING: Could not recover jumptable at 0x0001007b2620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1007b2858 | FUN_1007b2858 */

void FUN_1007b2858(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007b28b8;
  }
  else {
    pcVar1 = FUN_1007b2998;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 200),*(undefined8 *)(lVar2 + 0xd0));
  return;
}



/* Address: 0x1007b28b8 | FUN_1007b28b8 */

void FUN_1007b28b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Optional OVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar7 = *(long *)(unaff_x22 + 0xa8);
  uVar5 = uVar8;
  _swift_getEnumCaseMultiPayload(uVar8,lVar7);
  if ((int)uVar5 < 3) {
    if ((int)uVar5 == 0) {
      OVar4 = Swift::Optional::typeMetadataAccessor();
      lVar7 = CONCAT71(extraout_var,OVar4.value);
      plVar6 = (long *)(lVar7 + -8);
    }
    else {
      plVar6 = (long *)(unaff_x22 + 0xb0);
    }
    (**(code **)(*plVar6 + 8))(uVar8,lVar7);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001007b2994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007b2998 | FUN_1007b2998 */

void FUN_1007b2998(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Optional OVar4;
  int iVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar9 = *(long *)(unaff_x22 + 0xa8);
  uVar6 = uVar8;
  _swift_getEnumCaseMultiPayload(uVar8,lVar9);
  iVar5 = (int)uVar6;
  if (iVar5 < 2) {
    if (iVar5 != 0) goto LAB_1007b2a0c;
    OVar4 = Swift::Optional::typeMetadataAccessor();
    lVar9 = CONCAT71(extraout_var,OVar4.value);
    plVar7 = (long *)(lVar9 + -8);
  }
  else {
    if (iVar5 != 2) goto LAB_1007b2a2c;
LAB_1007b2a0c:
    plVar7 = (long *)(unaff_x22 + 0xb0);
  }
  (**(code **)(*plVar7 + 8))(uVar8,lVar9);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
LAB_1007b2a2c:
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001007b2a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007b2a90 | FUN_1007b2a90 */

void FUN_1007b2a90(long param_1,long param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  Optional OVar8;
  ulong uVar9;
  long lVar10;
  undefined7 extraout_var;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined7 extraout_var_00;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  undefined2 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 unaff_x20;
  undefined8 *puVar24;
  undefined1 *puVar25;
  long lVar26;
  code *pcVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  String SVar32;
  undefined8 auStack_180 [2];
  undefined8 local_170;
  ulong local_168 [6];
  code *local_138;
  long local_128 [12];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  lVar13 = *(long *)(param_2 + 0x10);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  uVar23 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = 0;
  local_128[0] = param_1;
  FUN_1007b8aac(0,lVar13,uVar14,uVar23);
  lVar29 = *(long *)(uVar9 - 8);
  lVar19 = -(*(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = (undefined1 *)((long)&local_170 + lVar19);
  lVar21 = (long)puVar25 - (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0xff;
  local_168[1] = uVar9;
  local_168[3] = lVar21;
  FUN_1007abb04(0xff,lVar13);
  OVar8 = Swift::Optional::typeMetadataAccessor();
  local_168[0] = CONCAT71(extraout_var,OVar8.value);
  local_170 = *(code **)(local_168[0] - 8);
  uVar9 = *(long *)(local_170 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar21 = lVar21 - uVar9;
  lVar26 = lVar21 - uVar9;
  local_168[5] = *(long *)(lVar10 + -8);
  uVar22 = *(long *)(local_168[5] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar31 = lVar26 - uVar22;
  local_168[2] = lVar31 - uVar22;
  uVar22 = local_168[2] - uVar22;
  lVar11 = 0;
  local_168[4] = lVar10;
  local_128[1] = lVar13;
  local_128[2] = uVar14;
  local_128[3] = uVar23;
  FUN_1007b8aa0(0,lVar13,uVar14,uVar23);
  uVar9 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar30 = (undefined8 *)(uVar22 - uVar9);
  puVar24 = (undefined8 *)((long)puVar30 - uVar9);
  local_138 = *(code **)(*(long *)(lVar11 + -8) + 0x20);
  (*local_138)(puVar24);
  puVar12 = puVar24;
  _swift_getEnumCaseMultiPayload(puVar24,lVar11);
  uVar5 = local_168[4];
  uVar9 = local_168[1];
  if ((int)puVar12 == 0) {
    local_168[1] = uVar22;
    local_128[10] = puVar24[5];
    local_128[9] = puVar24[4];
    uStack_c8 = puVar24[7];
    local_128[0xb] = puVar24[6];
    uStack_b8 = puVar24[9];
    local_c0 = puVar24[8];
    local_128[6] = puVar24[1];
    local_128[5] = *puVar24;
    local_128[8] = puVar24[3];
    local_128[7] = puVar24[2];
    local_78 = puVar24[0x11];
    local_b0 = puVar24[10];
    lStack_a8 = puVar24[0xb];
    uStack_90 = puVar24[0xe];
    uStack_98 = puVar24[0xd];
    uStack_80 = puVar24[0x10];
    local_88 = puVar24[0xf];
    uVar9 = puVar24[0xc];
    local_a0 = uVar9;
    if (lStack_a8 != 0) {
      *(undefined4 *)(puVar24 + -1) = 0;
      puVar24[-2] = 0x50e;
      SVar32.bridgeObject = (void *)0x2;
      SVar32.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar32,(StaticString)0xd00000000000003e,
                 0x8000000100db1760,0xdb1700);
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x1007b33ec);
      (*pcVar27)();
    }
    FUN_1006883a0(0,local_168[4]);
    FUN_100681318(lVar26);
    uVar17 = local_168[5];
    lVar19 = lVar26;
    (**(code **)(local_168[5] + 0x30))(lVar26,1,uVar5);
    lVar13 = local_128[1];
    uVar22 = local_168[1];
    if ((int)lVar19 == 1) {
      (**(code **)(local_170 + 8))(lVar26,local_168[0]);
      uVar14 = local_88;
      uVar5 = uStack_90;
      uVar9 = local_a0;
      puVar30[0xd] = uStack_98;
      puVar30[0xc] = uVar9;
      puVar30[0xf] = uVar14;
      puVar30[0xe] = uVar5;
      uVar14 = uStack_80;
      puVar30[0x11] = local_78;
      puVar30[0x10] = uVar14;
      uVar14 = uStack_c8;
      lVar10 = local_128[0xb];
      lVar19 = local_128[9];
      puVar30[5] = local_128[10];
      puVar30[4] = lVar19;
      puVar30[7] = uVar14;
      puVar30[6] = lVar10;
      lVar19 = lStack_a8;
      uVar23 = local_b0;
      uVar14 = local_c0;
      puVar30[9] = uStack_b8;
      puVar30[8] = uVar14;
      puVar30[0xb] = lVar19;
      puVar30[10] = uVar23;
      lVar21 = local_128[8];
      lVar10 = local_128[7];
      lVar19 = local_128[5];
      puVar30[1] = local_128[6];
      *puVar30 = lVar19;
      puVar30[3] = lVar21;
      puVar30[2] = lVar10;
      _swift_storeEnumTagMultiPayload(puVar30,lVar11,0);
      (*local_138)(unaff_x20,puVar30,lVar11);
      uVar14 = 0;
      FUN_1007b8e40(0,lVar13,local_128[2],local_128[3]);
      uVar23 = 4;
      lVar11 = local_128[0];
      goto LAB_1007b3374;
    }
    (**(code **)(uVar17 + 0x20))(local_168[1],lVar26,uVar5);
    lVar10 = local_128[3];
    lVar19 = local_128[2];
    uVar14 = 0;
    FUN_1007b8a94(0,lVar13,local_128[2],local_128[3]);
    uVar16 = uVar22;
    FUN_1007abd04(uVar22,uVar14);
    uVar14 = local_88;
    uVar6 = local_a0;
    uStack_90 = CONCAT71(uStack_90._1_7_,(char)uVar16) & 0xffffffffffffff01;
    uVar7 = uStack_90;
    if ((uVar16 & 1) != 0) {
      _swift_retain();
      pcVar27 = thunk_FUN_1007b5f00;
      uVar20 = 0;
      FUN_1007ab154();
      uVar22 = local_a0;
      uVar17 = local_a0;
      local_170 = pcVar27;
      local_168[0] = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar17 & 1) == 0) {
        FUN_1007b6ac4();
        uVar22 = local_a0;
      }
      FUN_1007b8768(uVar22 + 0x10,uVar22 + 0x28);
      uVar14 = local_88;
      uVar22 = uStack_90;
      uVar9 = local_a0;
      puVar30[0xd] = uStack_98;
      puVar30[0xc] = uVar9;
      puVar30[0xf] = uVar14;
      puVar30[0xe] = uVar22;
      uVar14 = uStack_80;
      puVar30[0x11] = local_78;
      puVar30[0x10] = uVar14;
      uVar14 = uStack_c8;
      lVar19 = local_128[0xb];
      lVar13 = local_128[9];
      puVar30[5] = local_128[10];
      puVar30[4] = lVar13;
      puVar30[7] = uVar14;
      puVar30[6] = lVar19;
      lVar13 = lStack_a8;
      uVar23 = local_b0;
      uVar14 = local_c0;
      puVar30[9] = uStack_b8;
      puVar30[8] = uVar14;
      puVar30[0xb] = lVar13;
      puVar30[10] = uVar23;
      lVar10 = local_128[8];
      lVar19 = local_128[7];
      lVar13 = local_128[5];
      puVar30[1] = local_128[6];
      *puVar30 = lVar13;
      puVar30[3] = lVar10;
      puVar30[2] = lVar19;
      _swift_storeEnumTagMultiPayload(puVar30,lVar11,0);
      (*local_138)(unaff_x20,puVar30,lVar11);
      lVar13 = local_128[1];
      uVar14 = 0xff;
      FUN_100793c60(0xff,local_128[1]);
      puVar18 = &DAT_100fe4b90;
      FUN_1000f8b08(&DAT_100fe4b90,&DAT_100c78180);
      lVar19 = 0;
      _swift_getTupleTypeMetadata2(0,uVar14,puVar18,0,0);
      lVar11 = local_128[0];
      uVar17 = local_168[5];
      uVar9 = local_168[1];
      puVar1 = (ulong *)(local_128[0] + *(int *)(lVar19 + 0x30));
      (**(code **)(local_168[5] + 0x10))(local_168[2],local_168[1],uVar5);
      uVar22 = local_168[3];
      FUN_1007afeec(local_168[3],uVar5);
      (**(code **)(uVar17 + 8))(uVar9,uVar5);
      FUN_100793878(lVar11,uVar22,lVar13);
      *puVar1 = local_168[0];
      puVar1[1] = (ulong)local_170;
      *(char *)(puVar1 + 2) = (char)uVar20;
      *(char *)((long)puVar1 + 0x11) = (char)((ushort)uVar20 >> 8);
      uVar14 = 0;
      FUN_1007b8e40(0,lVar13,local_128[2],local_128[3]);
      uVar23 = 1;
      goto LAB_1007b3374;
    }
    puVar30[0xd] = uStack_98;
    puVar30[0xc] = uVar6;
    puVar30[0xf] = uVar14;
    puVar30[0xe] = uVar7;
    uVar14 = uStack_80;
    puVar30[0x11] = local_78;
    puVar30[0x10] = uVar14;
    uVar14 = uStack_c8;
    lVar26 = local_128[0xb];
    lVar21 = local_128[9];
    puVar30[5] = local_128[10];
    puVar30[4] = lVar21;
    puVar30[7] = uVar14;
    puVar30[6] = lVar26;
    lVar21 = lStack_a8;
    uVar23 = local_b0;
    uVar14 = local_c0;
    puVar30[9] = uStack_b8;
    puVar30[8] = uVar14;
    puVar30[0xb] = lVar21;
    puVar30[10] = uVar23;
    lVar29 = local_128[8];
    lVar26 = local_128[7];
    lVar21 = local_128[5];
    puVar30[1] = local_128[6];
    *puVar30 = lVar21;
    puVar30[3] = lVar29;
    puVar30[2] = lVar26;
    _swift_storeEnumTagMultiPayload(puVar30,lVar11,0);
    (*local_138)(unaff_x20,puVar30,lVar11);
    (**(code **)(uVar17 + 0x10))(local_168[2],uVar22,uVar5);
    uVar9 = local_168[3];
    FUN_1007afeec(local_168[3],uVar5);
    (**(code **)(uVar17 + 8))(uVar22,uVar5);
    lVar11 = local_128[0];
    FUN_100793878(local_128[0],uVar9,lVar13);
  }
  else {
    if ((int)puVar12 != 1) {
      uVar2 = *(undefined1 *)((long)puVar24 + 1);
      uVar3 = *(undefined1 *)((long)puVar24 + 2);
      *(undefined1 *)puVar30 = *(undefined1 *)puVar24;
      *(undefined1 *)((long)puVar30 + 1) = uVar2;
      *(undefined1 *)((long)puVar30 + 2) = uVar3;
      _swift_storeEnumTagMultiPayload(puVar30,lVar11,2);
      (*local_138)(unaff_x20,puVar30,lVar11);
      uVar14 = 0;
      FUN_1007b8e40(0,local_128[1],local_128[2],local_128[3]);
      uVar23 = 3;
      lVar11 = local_128[0];
      goto LAB_1007b3374;
    }
    pcVar27 = *(code **)(lVar29 + 0x20);
    (*pcVar27)(puVar25,puVar24,local_168[1]);
    uVar5 = local_168[4];
    FUN_1006883a0(0,local_168[4]);
    FUN_100681318(lVar21);
    uVar22 = local_168[5];
    lVar13 = lVar21;
    (**(code **)(local_168[5] + 0x30))(lVar21,1,uVar5);
    if ((int)lVar13 == 1) {
      (**(code **)(local_170 + 8))(lVar21,local_168[0]);
      uVar2 = *(undefined1 *)((long)&local_170 + lVar19 + 1);
      *(undefined1 *)puVar30 = *puVar25;
      *(undefined1 *)((long)puVar30 + 1) = uVar2;
      *(undefined1 *)((long)puVar30 + 2) = 1;
      _swift_storeEnumTagMultiPayload(puVar30,lVar11,2);
      (*local_138)(unaff_x20,puVar30,lVar11);
      lVar10 = local_128[2];
      OVar8 = Swift::Optional::typeMetadataAccessor();
      lVar11 = CONCAT71(extraout_var_00,OVar8.value);
      uVar14 = 0xff;
      FUN_1007c0680(0xff,&DAT_100fe4b60,FUN_1007961c8);
      lVar21 = 0;
      _swift_getTupleTypeMetadata2(0,lVar11,uVar14,0,0);
      lVar13 = local_128[0];
      puVar12 = (undefined8 *)(local_128[0] + *(int *)(lVar21 + 0x30));
      iVar4 = *(int *)(uVar9 + 0x34);
      lVar21 = *(long *)(lVar11 + -8);
      (**(code **)(lVar21 + 0x10))(local_128[0],puVar25 + iVar4,lVar11);
      puVar24 = (undefined8 *)(puVar25 + *(int *)(uVar9 + 0x38));
      uVar14 = *puVar24;
      uVar23 = puVar24[1];
      uVar28 = puVar24[2];
      *puVar12 = uVar14;
      puVar12[1] = uVar23;
      puVar12[2] = uVar28;
      uVar2 = *(undefined1 *)(puVar24 + 3);
      *(undefined1 *)(puVar12 + 3) = uVar2;
      uVar15 = 0;
      FUN_1007b8e40(0,local_128[1],lVar10,local_128[3]);
      _swift_storeEnumTagMultiPayload(lVar13,uVar15,2);
      uVar15 = *(undefined8 *)((long)local_168 + lVar19);
      FUN_1007b8bdc(uVar14,uVar23,uVar28,uVar2);
      _swift_release(uVar15);
      (**(code **)(lVar21 + 8))(puVar25 + iVar4,lVar11);
      FUN_1007b8ba0(uVar14,uVar23,uVar28,uVar2);
      return;
    }
    (**(code **)(uVar22 + 0x20))(lVar31,lVar21,uVar5);
    (*pcVar27)(puVar30,puVar25,uVar9);
    _swift_storeEnumTagMultiPayload(puVar30,lVar11,1);
    (*local_138)(unaff_x20,puVar30,lVar11);
    (**(code **)(uVar22 + 0x10))(local_168[2],lVar31,uVar5);
    uVar9 = local_168[3];
    FUN_1007afeec(local_168[3],uVar5);
    (**(code **)(uVar22 + 8))(lVar31,uVar5);
    lVar13 = local_128[1];
    lVar11 = local_128[0];
    FUN_100793878(local_128[0],uVar9,local_128[1]);
    lVar19 = local_128[2];
    lVar10 = local_128[3];
  }
  uVar14 = 0;
  FUN_1007b8e40(0,lVar13,lVar19,lVar10);
  uVar23 = 0;
LAB_1007b3374:
  _swift_storeEnumTagMultiPayload(lVar11,uVar14,uVar23);
  return;
}



/* Address: 0x1007b33ec | FUN_1007b33ec */

void FUN_1007b33ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  UnownedSerialExecutor UVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 **)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = *unaff_x20;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1007b3464,UVar1.unknown,param_3);
  return;
}



/* Address: 0x1007b3464 | FUN_1007b3464 */

void FUN_1007b3464(void)

{
  Optional OVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1007b34fc;
  FUN_1007aae80(*(undefined8 *)(unaff_x22 + 0x10),&DAT_100c78190,*(undefined8 *)(unaff_x22 + 0x28),
                FUN_1007b8ed0,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20),OVar1.value);
  return;
}



/* Address: 0x1007b34fc | FUN_1007b34fc */

void FUN_1007b34fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001007b353c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1007b3540 | FUN_1007b3540 */

void FUN_1007b3540(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = *param_2;
  _swift_task_switch(FUN_1007b3560,0,0);
  return;
}



/* Address: 0x1007b3560 | FUN_1007b3560 */

void FUN_1007b3560(void)

{
  Optional OVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005fc418;
  FUN_100790978(*(undefined8 *)(unaff_x22 + 0x10),0,0,FUN_1007c0644,
                *(undefined8 *)(unaff_x22 + 0x18),OVar1.value);
  return;
}



/* Address: 0x1007b35f0 | FUN_1007b35f0 */

void FUN_1007b35f0(undefined8 param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  StaticString file;
  undefined1 *line;
  code *pcVar7;
  Optional OVar8;
  int iVar9;
  undefined7 extraout_var;
  long lVar10;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  code *pcVar29;
  _StringGuts _Var30;
  long *plVar31;
  long lVar32;
  code *pcVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  long local_120 [3];
  undefined8 *local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 *local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  long local_90;
  undefined8 local_88;
  ulong local_80;
  StaticString local_78;
  undefined1 *local_70;
  
  lVar27 = *param_2;
  _Var30.unknown = *(undefined **)(lVar27 + 0x58);
  local_88 = param_1;
  OVar8 = Swift::Optional::typeMetadataAccessor();
  local_a8 = CONCAT71(extraout_var,OVar8.value);
  local_b0 = *(long *)(local_a8 + -8);
  local_d8 = (long)local_120 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = *(long *)(_Var30.unknown + -8);
  lVar19 = local_d8 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = *(long *)(lVar27 + 0x50);
  uVar26 = *(undefined8 *)(lVar27 + 0x60);
  lVar10 = 0;
  local_120[0] = lVar19;
  FUN_1007b8efc(0,lVar24,_Var30.unknown,uVar26);
  local_f8 = *(long *)(lVar10 + -8);
  puVar20 = (undefined8 *)(lVar19 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar19 = 0;
  local_c8 = lVar10;
  local_b8 = puVar20;
  FUN_1007b8ef0(0,lVar24,_Var30.unknown,uVar26);
  local_100 = *(long *)(lVar19 + -8);
  puVar20 = (undefined8 *)
            ((long)puVar20 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_e8 = puVar20;
  lStack_e0 = lVar19;
  OVar8 = Swift::Optional::typeMetadataAccessor();
  local_98 = (char *)CONCAT71(extraout_var_00,OVar8.value);
  local_a0 = (long)puVar20 -
             (*(long *)(*(long *)(local_98 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = *(long *)(lVar24 + -8);
  uVar21 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c0 = local_a0 - uVar21;
  lVar19 = local_c0 - uVar21;
  lVar10 = 0;
  local_f0 = lVar19;
  FUN_1007b8ee4(0,lVar24,_Var30.unknown,uVar26);
  local_120[1] = *(long *)(lVar10 + -8);
  puVar22 = (undefined8 *)(lVar19 - (*(long *)(local_120[1] + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar19 = 0xff;
  local_120[2] = lVar10;
  local_108 = puVar22;
  FUN_1007b8ed8(0xff,lVar24,_Var30.unknown,uVar26);
  OVar8 = Swift::Optional::typeMetadataAccessor();
  lVar25 = *(long *)(CONCAT71(extraout_var_01,OVar8.value) + -8);
  uVar21 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar22 = (undefined8 *)((long)puVar22 - uVar21);
  lVar32 = (long)puVar22 - uVar21;
  lVar10 = (long)param_2 + *(long *)(lVar27 + 0x68);
  _os_unfair_lock_lock(lVar10);
  FUN_1007b8cc4(0xff,lVar24,_Var30.unknown,uVar26);
  Synchronization::Mutex::typeMetadataAccessor();
  uVar11 = 0;
  FUN_1007b8cc4(0,lVar24,_Var30.unknown,uVar26);
  FUN_1007b3e80(lVar32,local_88,uVar11);
  _os_unfair_lock_unlock(lVar10);
  (**(code **)(lVar25 + 0x20))(puVar22,lVar32,CONCAT71(extraout_var_01,OVar8.value));
  puVar20 = puVar22;
  (**(code **)(*(long *)(lVar19 + -8) + 0x30))(puVar22,1,lVar19);
  if ((int)puVar20 != 1) {
    puVar12 = puVar22;
    _swift_getEnumCaseMultiPayload(puVar22,lVar19);
    lVar25 = local_a0;
    puVar4 = local_b8;
    lVar19 = local_c8;
    lVar10 = lStack_e0;
    puVar3 = local_e8;
    puVar20 = local_108;
    iVar9 = (int)puVar12;
    if (iVar9 < 2) {
      if (iVar9 != 0) {
        (**(code **)(local_100 + 0x20))(local_e8,puVar22,lStack_e0);
        FUN_100793c60(0,lVar24);
        lVar19 = local_c0;
        FUN_1007938f8(local_c0);
        lVar27 = local_90;
        lVar25 = local_a0;
        _Var30.unknown = (undefined *)*puVar3;
        (**(code **)(local_90 + 0x10))(local_a0,lVar19,lVar24);
        (**(code **)(lVar27 + 0x38))(lVar25,0,1,lVar24);
        puVar18 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        pcVar14 = local_98;
        FUN_1005ec10c(lVar25);
        uVar21 = 0;
        plVar31 = (long *)((long)puVar3 + (long)*(int *)(lVar10 + 0x30));
        pcVar33 = (code *)*plVar31;
        puVar17 = (undefined *)plVar31[1];
        bVar1 = *(byte *)(plVar31 + 2);
        cVar2 = *(char *)((long)plVar31 + 0x11);
        pcVar7 = pcVar33 + 0x30;
        do {
          if (cVar2 == '\x01') {
            uVar23 = *(ulong *)(pcVar33 + 0x10);
            if (uVar21 == uVar23) {
LAB_1007b3d14:
              (**(code **)(local_90 + 8))(local_c0,lVar24);
              FUN_1007b8e2c(pcVar33,puVar17,(char *)(ulong)bVar1,cVar2);
              return;
            }
            if (uVar23 <= uVar21) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b3d80);
              (*pcVar7)();
            }
            puVar16 = *(undefined **)(pcVar7 + -8);
            pcVar29 = *(code **)(pcVar7 + -0x10);
            pcVar15 = (char *)(ulong)(byte)*pcVar7;
          }
          else {
            if (uVar21 != 0) {
              if (uVar21 != 1) {
                local_78.unknown = (undefined *)0x0;
                local_70 = (undefined1 *)0xe000000000000000;
                Swift::_StringGuts::grow(0x16,_Var30);
                _swift_bridgeObjectRelease(local_70);
                local_80 = uVar21;
LAB_1007b3df0:
                local_70 = &DAT_e600000000000000;
                local_78.unknown = (undefined *)0x207865646e69;
                SVar34 = Swift::CustomStringConvertible::get_description();
                SVar36.bridgeObject = puVar18;
                SVar36.str = pcVar14;
                Swift::String::append(SVar34,SVar36);
                _swift_bridgeObjectRelease(SVar34.bridgeObject);
                SVar34.bridgeObject = (void *)0xee0073646e756f62;
                SVar34.str = (char *)0x20666f2074756f20;
                SVar37.bridgeObject = puVar18;
                SVar37.str = pcVar14;
                Swift::String::append(SVar34,SVar37);
                line = local_70;
                file.unknown = local_78.unknown;
                *(undefined4 *)(lVar32 + -8) = 0;
                *(undefined8 *)(lVar32 + -0x10) = 0x9a;
                SVar35.bridgeObject = (void *)0x2;
                SVar35.str = (char *)0xb;
                Swift::_assertionFailure
                          ((StaticString)0x100d8deb0,SVar35,file,(__uint64)line,0xdb16d0);
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b3e80);
                (*pcVar7)();
              }
              goto LAB_1007b3d14;
            }
            uVar23 = 1;
            puVar16 = puVar17;
            pcVar29 = pcVar33;
            pcVar15 = (char *)(ulong)bVar1;
          }
          if (uVar23 <= uVar21) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b3d78);
            (*pcVar7)();
          }
          if ((int)pcVar15 == 1) {
            _swift_continuation_throwingResume(pcVar29);
          }
          else {
            _swift_retain(puVar16);
            (*pcVar29)(0,0);
            FUN_1007b8df8(pcVar29);
            _Var30.unknown = puVar16;
            pcVar14 = pcVar15;
          }
          pcVar7 = pcVar7 + 0x18;
          uVar21 = uVar21 + 1;
        } while( true );
      }
      (**(code **)(local_120[1] + 0x20))(local_108,puVar22,local_120[2]);
      FUN_100793c60(0,lVar24);
      lVar10 = local_f0;
      FUN_1007938f8(local_f0);
      lVar25 = local_90;
      lVar19 = local_a0;
      uVar11 = *puVar20;
      (**(code **)(local_90 + 0x10))(local_a0,lVar10,lVar24);
      (**(code **)(lVar25 + 0x38))(lVar19,0,1,lVar24);
      puVar18 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      FUN_1005ec10c(lVar19,uVar11,local_98,puVar18,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      (**(code **)(lVar25 + 8))(lVar10,lVar24);
    }
    else if (iVar9 == 2) {
      (**(code **)(local_f8 + 0x20))(local_b8,puVar22,local_c8);
      lVar6 = local_a8;
      lVar5 = local_b0;
      lVar25 = local_d8;
      lVar28 = (long)*(int *)(lVar19 + 0x2c);
      (**(code **)(local_b0 + 0x10))(local_d8,(long)puVar4 + lVar28,local_a8);
      lVar27 = local_d0;
      lVar13 = lVar25;
      (**(code **)(local_d0 + 0x30))(lVar25,1,_Var30.unknown);
      lVar10 = local_120[0];
      if ((int)lVar13 == 1) {
        (**(code **)(lVar5 + 8))(lVar25,lVar6);
        lVar10 = local_a0;
        _Var30.unknown = (undefined *)*puVar4;
        (**(code **)(local_90 + 0x38))(local_a0,1,1,lVar24);
        puVar18 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        pcVar14 = local_98;
        FUN_1005ec10c(lVar10);
      }
      else {
        (**(code **)(lVar27 + 0x20))(local_120[0],lVar25,_Var30.unknown);
        uVar11 = *puVar4;
        puVar18 = _Var30.unknown;
        _swift_allocError(_Var30.unknown,uVar26,0,0);
        (**(code **)(lVar27 + 0x10))(uVar26,lVar10,_Var30.unknown);
        pcVar14 = &DAT_100fdfb40;
        local_78.unknown = puVar18;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        puVar18 = (undefined *)0x0;
        pcVar15 = pcVar14;
        puVar17 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        (**(code **)(*(long *)(pcVar14 + -8) + 0x20))(puVar17,&local_78);
        _swift_continuation_throwingResumeWithError(uVar11,pcVar15);
        (**(code **)(lVar27 + 8))(lVar10);
      }
      uVar21 = 0;
      plVar31 = (long *)((long)puVar4 + (long)*(int *)(lVar19 + 0x30));
      lVar10 = *plVar31;
      pcVar7 = (code *)plVar31[1];
      lVar19 = plVar31[2];
      cVar2 = (char)plVar31[3];
      plVar31 = (long *)(lVar10 + 0x30);
      if (cVar2 != '\x01') goto LAB_1007b3ccc;
      while( true ) {
        uVar23 = *(ulong *)(lVar10 + 0x10);
        if (uVar21 == uVar23) break;
        if (uVar23 <= uVar21) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b3d84);
          (*pcVar7)();
        }
        lVar24 = *plVar31;
        pcVar33 = (code *)plVar31[-1];
        while( true ) {
          _swift_retain(lVar24);
          if (uVar23 <= uVar21) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b3d7c);
            (*pcVar7)();
          }
          uVar21 = uVar21 + 1;
          (*pcVar33)();
          _swift_release(lVar24);
          plVar31 = plVar31 + 3;
          if (cVar2 == '\x01') break;
LAB_1007b3ccc:
          if (uVar21 != 0) {
            if (uVar21 == 1) goto LAB_1007b3d48;
            local_78.unknown = (undefined *)0x0;
            local_70 = (undefined1 *)0xe000000000000000;
            Swift::_StringGuts::grow(0x16,_Var30);
            _swift_bridgeObjectRelease(local_70);
            local_80 = uVar21;
            goto LAB_1007b3df0;
          }
          uVar23 = 1;
          uVar21 = 0;
          lVar24 = lVar19;
          pcVar33 = pcVar7;
        }
      }
LAB_1007b3d48:
      (**(code **)(local_b0 + 8))((long)local_b8 + lVar28,local_a8);
      FUN_1007b8ba0(lVar10,pcVar7,lVar19,cVar2);
    }
    else {
      uVar11 = *puVar22;
      (**(code **)(local_90 + 0x38))(local_a0,1,1,lVar24);
      puVar18 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      FUN_1005ec10c(lVar25,uVar11,local_98,puVar18,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  return;
}



/* Address: 0x1007b3e80 | FUN_1007b3e80 */

void FUN_1007b3e80(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  Optional OVar4;
  undefined7 extraout_var;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined7 extraout_var_00;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 unaff_x20;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  long lVar20;
  code *pcVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  String SVar27;
  undefined8 auStack_1c0 [2];
  undefined8 uStack_1b0;
  long local_1a8 [13];
  code *local_140;
  long local_130 [2];
  long *local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar16 = *(undefined8 *)(param_3 + 0x18);
  local_130[0] = param_2;
  local_120 = param_1;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_1a8[1] = CONCAT71(extraout_var,OVar4.value);
  local_1a8[6] = *(long *)(local_1a8[1] + -8);
  lVar6 = (long)&uStack_1b0 - (*(long *)(local_1a8[6] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = *(long *)(param_3 + 0x10);
  uVar15 = *(undefined8 *)(param_3 + 0x20);
  uVar5 = 0;
  local_1a8[0] = lVar6;
  FUN_1007b8aac(0,lVar24,uVar16,uVar15);
  lVar20 = *(long *)(uVar5 - 8);
  puVar19 = (undefined1 *)(lVar6 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar13 = (long)puVar19 - (*(long *)(*(long *)(lVar24 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_1a8[7] = uVar5;
  local_1a8[9] = lVar13;
  FUN_100793c60(0,lVar24);
  local_1a8[2] = *(long *)(lVar6 + -8);
  lVar13 = lVar13 - (*(long *)(local_1a8[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0xff;
  local_1a8[3] = lVar6;
  local_1a8[10] = lVar13;
  FUN_1007abb04(0xff,lVar24);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_1a8[5] = CONCAT71(extraout_var_00,OVar4.value);
  local_1a8[4] = *(long *)(local_1a8[5] + -8);
  uVar5 = *(long *)(local_1a8[4] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar13 - uVar5;
  lVar26 = lVar13 - uVar5;
  local_1a8[0xc] = *(long *)(lVar7 + -8);
  uVar5 = *(long *)(local_1a8[0xc] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar23 = lVar26 - uVar5;
  local_1a8[8] = lVar23 - uVar5;
  uVar5 = local_1a8[8] - uVar5;
  lVar8 = 0;
  local_1a8[0xb] = lVar7;
  local_130[1] = uVar16;
  local_118 = lVar24;
  local_110 = uVar15;
  FUN_1007b8aa0(0,lVar24,uVar16,uVar15);
  uVar14 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar25 = (undefined8 *)(uVar5 - uVar14);
  puVar17 = (undefined8 *)((long)puVar25 - uVar14);
  local_140 = *(code **)(*(long *)(lVar8 + -8) + 0x20);
  (*local_140)(puVar17);
  puVar9 = puVar17;
  _swift_getEnumCaseMultiPayload(puVar17,lVar8);
  lVar7 = local_1a8[0xb];
  lVar6 = local_1a8[7];
  if ((int)puVar9 == 0) {
    local_1a8[7] = uVar5;
    uStack_d8 = puVar17[5];
    local_e0 = puVar17[4];
    uStack_c8 = puVar17[7];
    uStack_d0 = puVar17[6];
    uStack_b8 = puVar17[9];
    local_c0 = puVar17[8];
    uStack_f8 = puVar17[1];
    local_100 = *puVar17;
    uStack_e8 = puVar17[3];
    uStack_f0 = puVar17[2];
    local_78 = puVar17[0x11];
    local_b0 = puVar17[10];
    local_a8 = puVar17[0xb];
    uStack_90 = puVar17[0xe];
    uStack_98 = puVar17[0xd];
    uStack_80 = puVar17[0x10];
    local_88 = puVar17[0xf];
    uVar5 = puVar17[0xc];
    local_a0 = uVar5;
    if (local_a8 != 0) {
      *(undefined4 *)(puVar17 + -1) = 0;
      puVar17[-2] = 0x596;
      SVar27.bridgeObject = (void *)0x2;
      SVar27.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar27,(StaticString)0xd00000000000003e,
                 0x8000000100db1760,0xdb1700);
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1007b4944);
      (*pcVar21)();
    }
    FUN_1006883a0(0,local_1a8[0xb]);
    FUN_100681318(lVar26);
    lVar13 = local_1a8[0xc];
    lVar24 = lVar26;
    (**(code **)(local_1a8[0xc] + 0x30))(lVar26,1,lVar7);
    uVar15 = local_110;
    lVar23 = local_118;
    lVar20 = local_130[1];
    lVar6 = local_1a8[7];
    if ((int)lVar24 == 1) {
      (**(code **)(local_1a8[4] + 8))(lVar26,local_1a8[5]);
      uVar16 = local_88;
      uVar14 = uStack_90;
      uVar5 = local_a0;
      local_a8 = local_130[0];
      puVar25[0xd] = uStack_98;
      puVar25[0xc] = uVar5;
      puVar25[0xf] = uVar16;
      puVar25[0xe] = uVar14;
      uVar16 = uStack_80;
      puVar25[0x11] = local_78;
      puVar25[0x10] = uVar16;
      uVar18 = uStack_c8;
      uVar22 = uStack_d0;
      uVar16 = local_e0;
      puVar25[5] = uStack_d8;
      puVar25[4] = uVar16;
      puVar25[7] = uVar18;
      puVar25[6] = uVar22;
      uVar18 = uStack_e8;
      uVar22 = uStack_f0;
      uVar16 = local_100;
      puVar25[1] = uStack_f8;
      *puVar25 = uVar16;
      puVar25[3] = uVar18;
      puVar25[2] = uVar22;
      lVar6 = local_a8;
      uVar22 = local_b0;
      uVar16 = local_c0;
      puVar25[9] = uStack_b8;
      puVar25[8] = uVar16;
      puVar25[0xb] = lVar6;
      puVar25[10] = uVar22;
      _swift_storeEnumTagMultiPayload(puVar25,lVar8,0);
      (*local_140)(unaff_x20,puVar25,lVar8);
      lVar6 = 0;
      FUN_1007b8ed8(0,lVar23,lVar20,uVar15);
      pcVar21 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
      uVar15 = 1;
      plVar12 = local_120;
      goto LAB_1007b48cc;
    }
    (**(code **)(lVar13 + 0x20))(local_1a8[7],lVar26,lVar7);
    uVar16 = 0;
    FUN_1007b8a94(0,lVar23,lVar20,uVar15);
    uVar10 = lVar6;
    FUN_1007abd04(lVar6,uVar16);
    uVar16 = local_88;
    uVar14 = local_a0;
    uStack_90 = CONCAT71(uStack_90._1_7_,(char)uVar10) & 0xffffffffffffff01;
    uVar11 = uStack_90;
    if ((uVar10 & 1) == 0) {
      puVar25[0xd] = uStack_98;
      puVar25[0xc] = uVar14;
      puVar25[0xf] = uVar16;
      puVar25[0xe] = uVar11;
      uVar16 = uStack_80;
      puVar25[0x11] = local_78;
      puVar25[0x10] = uVar16;
      uVar18 = uStack_c8;
      uVar22 = uStack_d0;
      uVar16 = local_e0;
      puVar25[5] = uStack_d8;
      puVar25[4] = uVar16;
      puVar25[7] = uVar18;
      puVar25[6] = uVar22;
      lVar24 = local_a8;
      uVar22 = local_b0;
      uVar16 = local_c0;
      puVar25[9] = uStack_b8;
      puVar25[8] = uVar16;
      puVar25[0xb] = lVar24;
      puVar25[10] = uVar22;
      uVar18 = uStack_e8;
      uVar22 = uStack_f0;
      uVar16 = local_100;
      puVar25[1] = uStack_f8;
      *puVar25 = uVar16;
      puVar25[3] = uVar18;
      puVar25[2] = uVar22;
      _swift_storeEnumTagMultiPayload(puVar25,lVar8,0);
      (*local_140)(unaff_x20,puVar25,lVar8);
      (**(code **)(lVar13 + 0x10))(local_1a8[8],lVar6,lVar7);
      lVar8 = local_1a8[9];
      FUN_1007afeec(local_1a8[9],lVar7);
      (**(code **)(lVar13 + 8))(lVar6,lVar7);
      lVar6 = local_1a8[10];
      FUN_100793878(local_1a8[10],lVar8,lVar23);
      plVar12 = local_120;
      *local_120 = local_130[0];
      lVar7 = 0;
      FUN_1007b8ee4(0,lVar23,lVar20,uVar15);
      (**(code **)(local_1a8[2] + 0x20))
                ((long)plVar12 + (long)*(int *)(lVar7 + 0x2c),lVar6,local_1a8[3]);
      goto LAB_1007b489c;
    }
    _swift_retain(uVar5);
    pcVar21 = thunk_FUN_1007b5f00;
    uVar15 = 0;
    FUN_1007ab154();
    uVar14 = local_a0;
    uVar11 = local_a0;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar11 & 1) == 0) {
      FUN_1007b6ac4();
      uVar14 = local_a0;
    }
    FUN_1007b8768(uVar14 + 0x10,uVar14 + 0x28);
    uVar16 = local_88;
    uVar11 = uStack_90;
    uVar14 = local_a0;
    puVar25[0xd] = uStack_98;
    puVar25[0xc] = uVar14;
    puVar25[0xf] = uVar16;
    puVar25[0xe] = uVar11;
    uVar16 = uStack_80;
    puVar25[0x11] = local_78;
    puVar25[0x10] = uVar16;
    uVar18 = uStack_c8;
    uVar22 = uStack_d0;
    uVar16 = local_e0;
    puVar25[5] = uStack_d8;
    puVar25[4] = uVar16;
    puVar25[7] = uVar18;
    puVar25[6] = uVar22;
    lVar6 = local_a8;
    uVar22 = local_b0;
    uVar16 = local_c0;
    puVar25[9] = uStack_b8;
    puVar25[8] = uVar16;
    puVar25[0xb] = lVar6;
    puVar25[10] = uVar22;
    uVar18 = uStack_e8;
    uVar22 = uStack_f0;
    uVar16 = local_100;
    puVar25[1] = uStack_f8;
    *puVar25 = uVar16;
    puVar25[3] = uVar18;
    puVar25[2] = uVar22;
    _swift_storeEnumTagMultiPayload(puVar25,lVar8,0);
    (*local_140)(unaff_x20,puVar25,lVar8);
    lVar13 = local_1a8[0xc];
    lVar6 = local_1a8[7];
    (**(code **)(local_1a8[0xc] + 0x10))(local_1a8[8],local_1a8[7],lVar7);
    lVar8 = local_1a8[9];
    FUN_1007afeec(local_1a8[9],lVar7);
    (**(code **)(lVar13 + 8))(lVar6,lVar7);
    lVar7 = local_118;
    lVar6 = local_1a8[10];
    FUN_100793878(local_1a8[10],lVar8,local_118);
    uVar16 = local_110;
    plVar12 = local_120;
    FUN_1007b5d50(local_120,local_130[0],lVar6,uVar5,pcVar21,uVar15,lVar7,lVar20,local_110);
    lVar6 = 0;
    FUN_1007b8ed8(0,lVar7,lVar20,uVar16);
    uVar15 = 1;
  }
  else if ((int)puVar9 == 1) {
    pcVar21 = *(code **)(lVar20 + 0x20);
    (*pcVar21)(puVar19,puVar17,local_1a8[7]);
    lVar7 = local_1a8[0xb];
    FUN_1006883a0(0,local_1a8[0xb]);
    FUN_100681318(lVar13);
    lVar20 = local_1a8[0xc];
    lVar24 = lVar13;
    (**(code **)(local_1a8[0xc] + 0x30))(lVar13,1,lVar7);
    if ((int)lVar24 == 1) {
      (**(code **)(local_1a8[4] + 8))(lVar13,local_1a8[5]);
      uVar1 = puVar19[1];
      *(undefined1 *)puVar25 = *puVar19;
      *(undefined1 *)((long)puVar25 + 1) = uVar1;
      *(undefined1 *)((long)puVar25 + 2) = 1;
      _swift_storeEnumTagMultiPayload(puVar25,lVar8,2);
      (*local_140)(unaff_x20,puVar25,lVar8);
      lVar8 = local_1a8[1];
      lVar7 = local_1a8[0];
      iVar3 = *(int *)(lVar6 + 0x34);
      (**(code **)(local_1a8[6] + 0x10))(local_1a8[0],puVar19 + iVar3,local_1a8[1]);
      uVar22 = local_110;
      puVar9 = (undefined8 *)(puVar19 + *(int *)(lVar6 + 0x38));
      uVar15 = *puVar9;
      uVar16 = puVar9[1];
      uVar18 = puVar9[2];
      uVar1 = *(undefined1 *)(puVar9 + 3);
      puVar17[-2] = local_110;
      lVar13 = local_118;
      plVar12 = local_120;
      lVar6 = local_130[1];
      FUN_1007b5e54(local_120,local_130[0],lVar7,uVar15,uVar16,uVar18,uVar1,local_118,local_130[1]);
      lVar7 = 0;
      FUN_1007b8ed8(0,lVar13,lVar6,uVar22);
      _swift_storeEnumTagMultiPayload(plVar12,lVar7,2);
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(plVar12,0,1,lVar7);
      uVar22 = *(undefined8 *)(puVar19 + 8);
      FUN_1007b8bdc(uVar15,uVar16,uVar18,uVar1);
      _swift_release(uVar22);
      (**(code **)(local_1a8[6] + 8))(puVar19 + iVar3,lVar8);
      FUN_1007b8ba0(uVar15,uVar16,uVar18,uVar1);
      return;
    }
    (**(code **)(lVar20 + 0x20))(lVar23,lVar13,lVar7);
    (*pcVar21)(puVar25,puVar19,lVar6);
    _swift_storeEnumTagMultiPayload(puVar25,lVar8,1);
    (*local_140)(unaff_x20,puVar25,lVar8);
    (**(code **)(lVar20 + 0x10))(local_1a8[8],lVar23,lVar7);
    lVar6 = local_1a8[9];
    FUN_1007afeec(local_1a8[9],lVar7);
    (**(code **)(lVar20 + 8))(lVar23,lVar7);
    lVar23 = local_118;
    lVar7 = local_1a8[10];
    FUN_100793878(local_1a8[10],lVar6,local_118);
    uVar15 = local_110;
    plVar12 = local_120;
    lVar20 = local_130[1];
    *local_120 = local_130[0];
    lVar6 = 0;
    FUN_1007b8ee4(0,lVar23,local_130[1],local_110);
    (**(code **)(local_1a8[2] + 0x20))
              ((long)plVar12 + (long)*(int *)(lVar6 + 0x2c),lVar7,local_1a8[3]);
LAB_1007b489c:
    lVar6 = 0;
    FUN_1007b8ed8(0,lVar23,lVar20,uVar15);
    uVar15 = 0;
  }
  else {
    uVar1 = *(undefined1 *)((long)puVar17 + 1);
    uVar2 = *(undefined1 *)((long)puVar17 + 2);
    *(undefined1 *)puVar25 = *(undefined1 *)puVar17;
    *(undefined1 *)((long)puVar25 + 1) = uVar1;
    *(undefined1 *)((long)puVar25 + 2) = uVar2;
    _swift_storeEnumTagMultiPayload(puVar25,lVar8,2);
    (*local_140)(unaff_x20,puVar25,lVar8);
    plVar12 = local_120;
    *local_120 = local_130[0];
    lVar6 = 0;
    FUN_1007b8ed8(0,local_118,local_130[1],local_110);
    uVar15 = 3;
  }
  _swift_storeEnumTagMultiPayload(plVar12,lVar6,uVar15);
  pcVar21 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  uVar15 = 0;
LAB_1007b48cc:
  (*pcVar21)(plVar12,uVar15,1,lVar6);
  return;
}



/* Address: 0x1007b4944 | FUN_1007b4944 */

void FUN_1007b4944(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  StaticString file;
  code *pcVar6;
  Optional OVar7;
  undefined7 extraout_var;
  undefined *puVar9;
  _StringGuts _Var10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  code *pcVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined8 uStack_e0;
  undefined4 auStack_d8 [2];
  undefined1 auStack_d0 [8];
  uint local_c8;
  uint local_c4;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  ulong local_a0;
  StaticString local_98;
  code *local_90;
  code *local_88;
  code *pcStack_80;
  code *local_78;
  code *pcStack_70;
  byte local_68;
  code *pcVar8;
  
  lVar13 = *param_1;
  lVar18 = *(long *)(lVar13 + 0x50);
  OVar7 = Swift::Optional::typeMetadataAccessor();
  pcVar8 = (code *)CONCAT71(extraout_var,OVar7.value);
  lVar5 = -(*(long *)(*(long *)(pcVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c0 = (code *)(auStack_d0 + lVar5);
  lVar1 = (long)param_1 + *(long *)(lVar13 + 0x68);
  _os_unfair_lock_lock(lVar1);
  uVar3 = *(undefined8 *)(lVar13 + 0x58);
  uVar4 = *(undefined8 *)(lVar13 + 0x60);
  FUN_1007b8cc4(0xff,lVar18,uVar3,uVar4);
  Synchronization::Mutex::typeMetadataAccessor();
  FUN_1007b8cc4(0,lVar18,uVar3,uVar4);
  FUN_1007b4f5c(&local_98);
  local_b8 = local_78;
  local_b0 = pcStack_70;
  local_a8 = (code *)local_98.unknown;
  FUN_1007bf864(0xff,lVar18,uVar3,uVar4);
  Swift::Optional::typeMetadataAccessor();
  _os_unfair_lock_unlock(lVar1);
  pcVar6 = local_a8;
  pcVar15 = local_c0;
  if (local_68 < 0xfe) {
    if ((char)local_68 < '\0') {
      uVar2 = local_68 & 0x7f;
      pcVar15 = (code *)((ulong)local_88 >> 8);
      local_c8 = (uint)local_68;
      FUN_1007b8e4c(local_a8,local_90,local_88,pcVar15);
      local_c0 = pcVar15;
      FUN_1007b8e4c(pcVar6,local_90,local_88,pcVar15);
      pcVar15 = pcStack_80;
      _Var10.unknown = local_b8;
      pcVar8 = local_b0;
      local_c4 = uVar2;
      FUN_1007b8bdc(pcStack_80,local_b8,local_b0,uVar2);
      uVar12 = 0;
      pcVar6 = pcVar6 + 0x30;
      do {
        if (((uint)local_88 >> 8 & 0xff) == 1) {
          uVar16 = *(ulong *)(local_a8 + 0x10);
          if (uVar12 == uVar16) {
            pcVar6 = (code *)&DAT_00000001;
LAB_1007b4d48:
            _Var10.unknown = local_90;
            pcVar8 = local_88;
            FUN_1007b8e2c(local_a8);
            uVar2 = local_c4;
            uVar12 = 0;
            pcVar15 = pcStack_80 + 0x30;
            pcVar19 = (code *)(ulong)local_c4;
            if (local_c4 != 1) goto LAB_1007b4d8c;
            do {
              uVar16 = *(ulong *)(pcStack_80 + 0x10);
              if (uVar12 == uVar16) {
LAB_1007b4ddc:
                pcVar8 = local_a8;
                pcVar15 = local_b0;
                pcVar6 = local_b8;
                FUN_1007c05cc(local_a8,local_90,local_88,pcStack_80,local_b8,local_b0,local_c8);
                FUN_1007b8e2c(pcVar8,local_90,local_88,local_c0);
                FUN_1007b8ba0(pcStack_80,pcVar6,pcVar15,pcVar19);
                return;
              }
              if (uVar16 <= uVar12) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1007b4e60);
                (*pcVar6)();
              }
              pcVar17 = *(code **)(pcVar15 + -8);
              pcVar14 = *(code **)pcVar15;
              _swift_retain(pcVar14);
              while( true ) {
                if (uVar16 <= uVar12) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1007b4e54);
                  (*pcVar6)();
                }
                uVar12 = uVar12 + 1;
                (*pcVar17)();
                _swift_release(pcVar14);
                pcVar15 = pcVar15 + 0x18;
                if (uVar2 == 1) break;
LAB_1007b4d8c:
                pcVar14 = local_b0;
                pcVar17 = local_b8;
                if (uVar12 != 0) {
                  if (uVar12 != 1) goto LAB_1007b4e60;
                  goto LAB_1007b4ddc;
                }
                _Var10.unknown = local_b8;
                pcVar8 = local_b0;
                pcVar6 = pcVar19;
                FUN_1007b8bdc(pcStack_80);
                uVar16 = 1;
                uVar12 = 0;
              }
            } while( true );
          }
          if (uVar16 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1007b4e5c);
            (*pcVar6)();
          }
          _Var10.unknown = *(code **)(pcVar6 + -8);
          pcVar19 = *(code **)(pcVar6 + -0x10);
          pcVar8 = (code *)(ulong)(byte)*pcVar6;
        }
        else {
          if (uVar12 != 0) {
            pcVar6 = local_c0;
            if (uVar12 == 1) goto LAB_1007b4d48;
            local_98.unknown = (undefined *)0x0;
            local_90 = (code *)0xe000000000000000;
            Swift::_StringGuts::grow(0x16,_Var10);
            _swift_bridgeObjectRelease(local_90);
            local_a0 = uVar12;
            goto LAB_1007b4ecc;
          }
          uVar16 = 1;
          _Var10.unknown = local_90;
          pcVar19 = local_a8;
          pcVar8 = local_88;
        }
        if (uVar16 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1007b4e50);
          (*pcVar6)();
        }
        if (((uint)pcVar8 & 0xff) == 1) {
          FUN_1007b8cd0();
          puVar9 = &DAT_100f01e38;
          _swift_allocError(&DAT_100f01e38,pcVar15,0,0);
          _Var10.unknown = &DAT_100fdfb40;
          FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
          puVar11 = (undefined8 *)
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          _swift_allocError();
          *puVar11 = puVar9;
          pcVar8 = (code *)_Var10.unknown;
          _swift_continuation_throwingResumeWithError();
        }
        else {
          FUN_1007b8cd0();
          puVar9 = &DAT_100f01e38;
          _swift_allocError(&DAT_100f01e38,pcVar15,0,0);
          _swift_retain(_Var10.unknown);
          (*pcVar19)(puVar9,1);
          _swift_errorRelease(puVar9);
          FUN_1007b8df8();
        }
        pcVar6 = pcVar6 + 0x18;
        uVar12 = uVar12 + 1;
        pcVar15 = pcVar19;
      } while( true );
    }
    (**(code **)(*(long *)(lVar18 + -8) + 0x38))(local_c0,1,1,lVar18);
    *(code **)((long)&uStack_e0 + lVar5) = FUN_1007b8e4c;
    _Var10.unknown = local_a8;
    pcVar19 = local_b8;
    FUN_1007bf700(local_a8,local_90,local_88,pcStack_80,local_b8,local_b0,local_68,FUN_1007b8bdc);
    pcVar6 = (code *)&DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    FUN_1005ec10c(pcVar15);
    uVar12 = 0;
    pcVar15 = local_90 + 0x30;
    if (((ulong)pcVar19 & 0xff) != 1) goto LAB_1007b4b08;
    while( true ) {
      uVar16 = *(ulong *)(local_90 + 0x10);
      if (uVar12 == uVar16) break;
      if (uVar16 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1007b4e58);
        (*pcVar6)();
      }
      pcVar17 = *(code **)(pcVar15 + -8);
      pcVar14 = *(code **)pcVar15;
      _swift_retain(pcVar14);
      while( true ) {
        if (uVar16 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1007b4e4c);
          (*pcVar6)();
        }
        uVar12 = uVar12 + 1;
        (*pcVar17)();
        _swift_release(pcVar14);
        pcVar15 = pcVar15 + 0x18;
        if (((ulong)pcVar19 & 0xff) == 1) break;
LAB_1007b4b08:
        if (uVar12 != 0) {
          if (uVar12 != 1) goto LAB_1007b4e60;
          goto LAB_1007b4cc8;
        }
        _Var10.unknown = local_90;
        pcVar8 = local_88;
        pcVar6 = pcStack_80;
        FUN_1007c0608(local_a8);
        uVar16 = 1;
        uVar12 = 0;
        pcVar14 = pcStack_80;
        pcVar17 = local_88;
      }
    }
LAB_1007b4cc8:
    pcVar8 = local_a8;
    pcVar15 = local_b0;
    pcVar6 = local_b8;
    FUN_1007c05cc(local_a8,local_90,local_88,pcStack_80,local_b8,local_b0,local_68);
    FUN_1007c05cc(pcVar8,local_90,local_88,pcStack_80,pcVar6,pcVar15,local_68);
  }
  return;
LAB_1007b4e60:
  local_98.unknown = (undefined *)0x0;
  local_90 = (code *)0xe000000000000000;
  Swift::_StringGuts::grow(0x16,_Var10);
  _swift_bridgeObjectRelease(local_90);
  local_a0 = uVar12;
LAB_1007b4ecc:
  local_90 = (code *)&DAT_e600000000000000;
  local_98.unknown = (undefined *)0x207865646e69;
  SVar20 = Swift::CustomStringConvertible::get_description();
  SVar22.bridgeObject = pcVar6;
  SVar22.str = (char *)pcVar8;
  Swift::String::append(SVar20,SVar22);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  SVar20.bridgeObject = (void *)0xee0073646e756f62;
  SVar20.str = (char *)0x20666f2074756f20;
  SVar23.bridgeObject = pcVar6;
  SVar23.str = (char *)pcVar8;
  Swift::String::append(SVar20,SVar23);
  pcVar6 = local_90;
  file.unknown = local_98.unknown;
  *(undefined4 *)((long)auStack_d8 + lVar5) = 0;
  *(undefined8 *)((long)&uStack_e0 + lVar5) = 0x9a;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,(__uint64)pcVar6,0xdb16d0);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1007b4f5c);
  (*pcVar6)();
}



/* Address: 0x1007b4f5c | FUN_1007b4f5c */

void FUN_1007b4f5c(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  byte bVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  code *pcVar19;
  undefined8 uStack_120;
  ulong local_118;
  ulong *local_110;
  ulong local_100 [5];
  undefined8 uStack_d8;
  code *local_d0;
  ulong uStack_c8;
  code *local_c0;
  ulong auStack_b8 [8];
  ulong uStack_78;
  
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = 0;
  local_110 = param_1;
  FUN_1007b8aac(0,uVar7,uVar1,uVar11);
  lVar14 = *(long *)(lVar4 + -8);
  lVar16 = (long)&uStack_120 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_1007b8aa0(0,uVar7,uVar1,uVar11);
  uVar9 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar15 = (undefined1 *)(lVar16 - uVar9);
  puVar18 = (ulong *)(puVar15 + -uVar9);
  pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x20);
  (*pcVar8)(puVar18);
  puVar6 = puVar18;
  _swift_getEnumCaseMultiPayload(puVar18,lVar5);
  if ((int)puVar6 == 0) {
    local_118 = uVar7;
    auStack_b8[4] = puVar18[0xd];
    auStack_b8[3] = puVar18[0xc];
    auStack_b8[6] = puVar18[0xf];
    auStack_b8[5] = puVar18[0xe];
    uStack_78 = puVar18[0x11];
    auStack_b8[7] = puVar18[0x10];
    uVar9 = puVar18[5];
    uStack_d8 = uVar9;
    uVar9 = uStack_d8;
    local_100[4] = puVar18[4];
    uStack_c8 = puVar18[7];
    local_d0 = (code *)puVar18[6];
    uVar13 = puVar18[0xb];
    auStack_b8[0] = puVar18[9];
    local_c0 = (code *)puVar18[8];
    auStack_b8[2] = uVar13;
    auStack_b8[1] = puVar18[10];
    local_100[1] = puVar18[1];
    local_100[0] = *puVar18;
    local_100[3] = puVar18[3];
    local_100[2] = puVar18[2];
    uStack_d8._1_1_ = (undefined1)(uVar9 >> 8);
    uVar2 = uStack_d8._1_1_;
    uStack_d8._0_1_ = (undefined1)uVar9;
    *puVar15 = (undefined1)uStack_d8;
    uStack_d8 = uVar9;
    puVar15[1] = uVar2;
    puVar15[2] = 0;
    _swift_storeEnumTagMultiPayload(puVar15,lVar5,2);
    (*pcVar8)(unaff_x20,puVar15,lVar5);
    pcVar12 = local_c0;
    uVar9 = uStack_c8;
    pcVar8 = local_d0;
    if (uVar13 == 0) {
      uVar13 = auStack_b8[3];
      _swift_retain();
      pcVar8 = thunk_FUN_1007b5f00;
      uVar9 = 0;
      FUN_1007ab154();
      pcVar19 = local_c0;
      uVar17 = uStack_c8;
      pcVar12 = local_d0;
      uVar9 = uVar9 & 0xffff;
      bVar10 = (byte)auStack_b8[0] & 1 | 0x80;
      FUN_1007b8bdc(local_d0,uStack_c8,local_c0);
      lVar4 = 0;
      FUN_1007b8bf4(0,local_118,uVar1,uVar11);
      (**(code **)(*(long *)(lVar4 + -8) + 8))(local_100,lVar4);
    }
    else {
      if (*(long *)(auStack_b8[3] + 0x18) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1007b5234);
        (*pcVar8)();
      }
      uVar17 = auStack_b8[0] & 0xff;
      FUN_1007b8bdc(local_d0,uStack_c8,local_c0);
      lVar4 = 0;
      FUN_1007b8bf4(0,local_118,uVar1,uVar11);
      (**(code **)(*(long *)(lVar4 + -8) + 8))(local_100,lVar4);
      pcVar19 = (code *)0x0;
      bVar10 = 0;
    }
  }
  else {
    if ((int)puVar6 == 1) {
      pcVar12 = *(code **)(lVar14 + 0x20);
      (*pcVar12)(lVar16,puVar18,lVar4);
      (*pcVar12)(puVar15,lVar16,lVar4);
      uVar7 = 1;
    }
    else {
      uVar2 = *(undefined1 *)((long)puVar18 + 1);
      uVar3 = *(undefined1 *)((long)puVar18 + 2);
      *puVar15 = (char)*puVar18;
      puVar15[1] = uVar2;
      puVar15[2] = uVar3;
      uVar7 = 2;
    }
    _swift_storeEnumTagMultiPayload(puVar15,lVar5,uVar7);
    (*pcVar8)(unaff_x20,puVar15,lVar5);
    uVar13 = 0;
    pcVar8 = (code *)0x0;
    uVar9 = 0;
    pcVar12 = (code *)0x0;
    uVar17 = 0;
    pcVar19 = (code *)0x0;
    bVar10 = 0xfe;
  }
  *local_110 = uVar13;
  local_110[1] = (ulong)pcVar8;
  local_110[2] = uVar9;
  local_110[3] = (ulong)pcVar12;
  local_110[4] = uVar17;
  local_110[5] = (ulong)pcVar19;
  *(byte *)(local_110 + 6) = bVar10;
  return;
}



/* Address: 0x1007b5234 | FUN_1007b5234 */

void FUN_1007b5234(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  FUN_1007b8cc4(0xff,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58),
                *(undefined8 *)(lVar1 + 0x60));
  Synchronization::Mutex::typeMetadataAccessor();
  Synchronization::_Cell::typeMetadataAccessor();
  FUN_1007b88d0();
  return;
}



/* Address: 0x1007b529c | FUN_1007b529c */

void FUN_1007b529c(void)

{
  FUN_1007b5234();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1007b52c0 | FUN_1007b52c0 */

void FUN_1007b52c0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  Optional OVar5;
  long lVar6;
  long lVar7;
  undefined7 extraout_var;
  long unaff_x20;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = 0;
  FUN_1007b8aa0(0,uVar2,uVar3,uVar8);
  lVar7 = unaff_x20;
  _swift_getEnumCaseMultiPayload();
  if ((int)lVar7 == 0) {
    FUN_100004550(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
    FUN_1007b8ba0(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                  *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
    _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
    _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
    _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  }
  else if ((int)lVar7 == 1) {
    _swift_release(*(undefined8 *)(unaff_x20 + 8));
    lVar7 = 0;
    FUN_1007b8aac(0,uVar2,uVar3,uVar8);
    iVar4 = *(int *)(lVar7 + 0x34);
    OVar5 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,OVar5.value) + -8) + 8))
              (unaff_x20 + iVar4,CONCAT71(extraout_var,OVar5.value));
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar7 + 0x38));
    FUN_1007b8ba0(*puVar1,puVar1[1],puVar1[2],*(undefined1 *)(puVar1 + 3));
  }
                    /* WARNING: Could not recover jumptable at 0x0001007b53c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + -8) + 0x20))();
  return;
}



/* Address: 0x1007b53c8 | FUN_1007b53c8 */

void FUN_1007b53c8(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long lVar1;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined6 uStack_166;
  undefined7 uStack_147;
  undefined7 uStack_11f;
  
  lVar1 = 0;
  FUN_1007b8a94(0,param_18,param_19,param_20);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(&local_190,param_2,lVar1);
  param_1[0xd] = param_12;
  param_1[0xc] = param_11;
  param_1[0xf] = param_15;
  param_1[0xe] = CONCAT71(uStack_11f,param_13);
  param_1[0x11] = param_17;
  param_1[0x10] = param_16;
  param_1[5] = CONCAT62(uStack_166,CONCAT11(param_4,param_3));
  param_1[4] = local_170;
  param_1[7] = param_6;
  param_1[6] = param_5;
  param_1[9] = CONCAT71(uStack_147,param_8);
  param_1[8] = param_7;
  param_1[0xb] = param_10;
  param_1[10] = param_9;
  param_1[1] = uStack_188;
  *param_1 = local_190;
  param_1[3] = uStack_178;
  param_1[2] = uStack_180;
  return;
}



/* Address: 0x1007b54f4 | FUN_1007b54f4 */

void FUN_1007b54f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1007b8aa0();
                    /* WARNING: Could not recover jumptable at 0x0001007b552c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x1007b5530 | FUN_1007b5530 */

void FUN_1007b5530(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x88) != -1) {
    *(long *)(unaff_x20 + 0x88) = *(long *)(unaff_x20 + 0x88) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b5548);
  (*pcVar1)();
}



/* Address: 0x1007b5548 | FUN_1007b5548 */

void FUN_1007b5548(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + *(int *)(param_1 + 0x3c));
  if (lVar2 != -1) {
    *(long *)(unaff_x20 + *(int *)(param_1 + 0x3c)) = lVar2 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b5564);
  (*pcVar1)();
}



/* Address: 0x1007b5564 | FUN_1007b5564 */

void FUN_1007b5564(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  int iVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar6;
  long lVar5;
  
  lVar4 = 0;
  FUN_1007b8aac(0,param_11,param_12,param_13);
  iVar2 = *(int *)(lVar4 + 0x34);
  (**(code **)(*(long *)(param_12 + -8) + 0x38))(param_1 + iVar2,1,1,param_12);
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 8) = param_4;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,OVar3.value);
  lVar6 = *(long *)(lVar5 + -8);
  (**(code **)(lVar6 + 8))(param_1 + iVar2,lVar5);
  (**(code **)(lVar6 + 0x20))(param_1 + iVar2,param_5,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x38));
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1[2] = param_8;
  *(undefined1 *)(puVar1 + 3) = param_9;
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x3c)) = param_10;
  return;
}



/* Address: 0x1007b5664 | FUN_1007b5664 */

uint FUN_1007b5664(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x10000;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  return uVar2 | param_1 & 1 | uVar1;
}



/* Address: 0x1007b5688 | thunk_FUN_1007b5f00 */

void thunk_FUN_1007b5f00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x18);
  FUN_1007b8e0c(uVar1);
  return;
}



/* Address: 0x1007b568c | FUN_1007b568c */

void FUN_1007b568c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  (**(code **)(lVar2 + 0x20))
            (param_1,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 0x38))(param_1,0,1,param_3);
  return;
}



/* Address: 0x1007b5724 | FUN_1007b5724 */

void FUN_1007b5724(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + -8);
  (**(code **)(lVar1 + 0x20))(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001007b5774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(param_1,0,1,param_3);
  return;
}



/* Address: 0x1007b5778 | FUN_1007b5778 */

void FUN_1007b5778(code *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long lVar3;
  ContiguousArray CVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_58;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  lVar2 = 0;
  local_f8 = param_8;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  lVar6 = *(long *)(lVar2 + -8);
  puVar7 = auStack_110 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_100 = *(long *)(param_5 + -8);
  uVar8 = *(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)puVar7 - uVar8;
  lVar9 = lVar13 - uVar8;
  local_f0 = param_5;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lStack_e0 = CONCAT71(extraout_var,OVar1.value);
  local_e8 = *(long *)(lStack_e0 + -8);
  uVar8 = *(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d8 = lVar9 - uVar8;
  lVar17 = local_d8 - uVar8;
  uVar8 = *(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_108 = lVar17 - uVar8;
  lVar15 = local_108 - uVar8;
  lVar10 = *(long *)(param_3 + -8);
  lVar14 = lVar15 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,puVar5,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_d0 = *(long *)(lVar3 + -8);
  lVar16 = lVar14 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar3;
  lVar3 = Swift::Sequence::get_underestimatedCount();
  local_58 = (undefined *)Swift::ContiguousArray::init();
  CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::reserveCapacity(lVar3,CVar4);
  (**(code **)(lVar10 + 0x10))(lVar14,unaff_x20,param_3);
  Swift::Sequence::_makeIterator();
  lVar10 = local_c8;
  if (lVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1007b5c08);
    (*pcVar11)();
  }
  _swift_getAssociatedConformanceWitness
            (param_6,param_3,local_c8,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  lVar14 = local_d8;
  while( true ) {
    local_d8 = lVar14;
    if (lVar3 == 0) {
      Swift::IteratorProtocol::_next();
      pcVar11 = *(code **)(lVar6 + 0x30);
      lVar9 = lVar14;
      (*pcVar11)(lVar14,1,lVar2);
      lVar3 = local_108;
      if ((int)lVar9 != 1) {
        pcVar12 = *(code **)(lVar6 + 0x20);
        do {
          (*pcVar12)(puVar7,lVar14,lVar2);
          (*param_1)(lVar3,puVar7,lVar13);
          (**(code **)(lVar6 + 8))(puVar7,lVar2);
          if (unaff_x21 != 0) {
            (**(code **)(local_d0 + 8))(lVar16,lVar10);
            _swift_release(local_58);
            (**(code **)(local_100 + 0x20))(local_f8,lVar13,local_f0);
            return;
          }
          Swift::ContiguousArray::append(lVar3,CVar4.unknown);
          Swift::IteratorProtocol::_next();
          lVar9 = lVar14;
          (*pcVar11)(lVar14,1,lVar2);
        } while ((int)lVar9 != 1);
      }
      (**(code **)(local_d0 + 8))(lVar16,lVar10);
      (**(code **)(local_e8 + 8))(lVar14,lStack_e0);
      puVar5 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130;
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130,
                 CVar4.unknown);
      Swift::Array<undefined>::_init(&local_58,param_4,CVar4.unknown,puVar5);
      return;
    }
    Swift::IteratorProtocol::_next();
    lVar14 = lVar17;
    (**(code **)(lVar6 + 0x30))(lVar17,1,lVar2);
    if ((int)lVar14 == 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1007b5c0c);
      (*pcVar11)();
    }
    (*param_1)(lVar15,lVar17,lVar9);
    if (unaff_x21 != 0) break;
    (**(code **)(lVar6 + 8))(lVar17,lVar2);
    Swift::ContiguousArray::append(lVar15,CVar4.unknown);
    lVar3 = lVar3 + -1;
    lVar14 = local_d8;
  }
  (**(code **)(local_d0 + 8))(lVar16,lVar10);
  _swift_release(local_58);
  (**(code **)(local_100 + 0x20))(local_f8,lVar9,local_f0);
  (**(code **)(lVar6 + 8))(lVar17,lVar2);
  return;
}



/* Address: 0x1007b5c0c | FUN_1007b5c0c */

void FUN_1007b5c0c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x80) != -1) {
    *(long *)(unaff_x20 + 0x80) = *(long *)(unaff_x20 + 0x80) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b5c24);
  (*pcVar1)();
}



/* Address: 0x1007b5c24 | thunk_FUN_1007b5c90 */

void thunk_FUN_1007b5c90(void)

{
  FUN_1007b5c90();
  return;
}



/* Address: 0x1007b5c28 | FUN_1007b5c28 */

void FUN_1007b5c28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  
  *param_1 = param_2;
  lVar2 = 0;
  FUN_1007b8ee4(0,param_4,param_5,param_6);
  iVar1 = *(int *)(lVar2 + 0x2c);
  lVar2 = 0;
  FUN_100793c60(0,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001007b5c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))((long)param_1 + (long)iVar1,param_3,lVar2);
  return;
}



/* Address: 0x1007b5c90 | FUN_1007b5c90 */

void FUN_1007b5c90(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 8))
            (unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  lVar3 = 0;
  FUN_100793c60(0,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001007b5cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(unaff_x20 + iVar1,param_1,lVar3);
  return;
}



/* Address: 0x1007b5cfc | FUN_1007b5cfc */

undefined8 FUN_1007b5cfc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x30));
  uVar2 = *puVar1;
  FUN_1007b8e4c(uVar2,puVar1[1],*(undefined1 *)(puVar1 + 2),*(undefined1 *)((long)puVar1 + 0x11));
  return uVar2;
}



/* Address: 0x1007b5d50 | FUN_1007b5d50 */

void FUN_1007b5d50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = param_2;
  lVar2 = 0;
  FUN_1007b8ef0(0,param_7,param_8,param_9);
  iVar1 = *(int *)(lVar2 + 0x2c);
  lVar3 = 0;
  FUN_100793c60(0,param_7);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))((long)param_1 + (long)iVar1,param_3,lVar3);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x30));
  *param_1 = param_4;
  param_1[1] = param_5;
  *(char *)(param_1 + 2) = (char)param_6;
  *(char *)((long)param_1 + 0x11) = (char)((uint)param_6 >> 8);
  return;
}



/* Address: 0x1007b5dfc | FUN_1007b5dfc */

undefined8 FUN_1007b5dfc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x30));
  uVar2 = *puVar1;
  FUN_1007b8bdc(uVar2,puVar1[1],puVar1[2],*(undefined1 *)(puVar1 + 3));
  return uVar2;
}



/* Address: 0x1007b5e54 | FUN_1007b5e54 */

void FUN_1007b5e54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  
  *param_1 = param_2;
  lVar3 = 0;
  FUN_1007b8efc(0,param_8,param_9,param_10);
  iVar1 = *(int *)(lVar3 + 0x2c);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x20))
            ((long)param_1 + (long)iVar1,param_3,CONCAT71(extraout_var,OVar2.value));
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30));
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  *(undefined1 *)(param_1 + 3) = param_7;
  return;
}



/* Address: 0x1007b5f00 | FUN_1007b5f00 */

void FUN_1007b5f00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x18);
  FUN_1007b8e0c(uVar1);
  return;
}



/* Address: 0x1007b5f18 | FUN_1007b5f18 */

void FUN_1007b5f18(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1007b8a94(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001007b5f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1007b5f58 | FUN_1007b5f58 */

void FUN_1007b5f58(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = 0;
  FUN_1007b8a94(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001007b5fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))();
  return;
}



/* Address: 0x1007b5fac | FUN_1007b5fac */

void FUN_1007b5fac(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x29) = param_1;
  return;
}



/* Address: 0x1007b5fb4 | FUN_1007b5fb4 */

undefined1  [16] FUN_1007b5fb4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x29;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1007b5fc4 | FUN_1007b5fc4 */

undefined8 FUN_1007b5fc4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_1007b8bdc(uVar1,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined1 *)(unaff_x20 + 0x48));
  return uVar1;
}


