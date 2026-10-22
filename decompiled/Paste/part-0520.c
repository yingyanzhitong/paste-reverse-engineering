/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005ed430 | FUN_1005ed430 */

void FUN_1005ed430(void)

{
  FUN_1005ed144();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1005ed450 | FUN_1005ed450 */

void FUN_1005ed450(void)

{
  FUN_1005f4d50();
  _swift_retain();
  return;
}



/* Address: 0x1005ed464 | FUN_1005ed464 */

void FUN_1005ed464(undefined1 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  Optional OVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_78;
  long local_70;
  char local_68;
  
  uVar4 = 0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  local_88 = param_1;
  FUN_1005f5070(0,param_3,param_4,param_5);
  FUN_1005f522c(0xff,param_3,param_4,param_5);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  FUN_10066ed6c(&local_78,FUN_1005f51d0,&local_b0,param_2,uVar4,OVar3.value);
  lVar2 = local_70;
  uVar4 = local_78;
  if (local_68 != -1) {
    uVar5 = 0xff;
    FUN_1005f50a4(0xff,param_3,param_4,param_5);
    FUN_100678b68(0,uVar5);
    FUN_1006754a0(&local_b0);
    uVar6 = 0;
    FUN_100677810(0,uVar5);
    FUN_1006755cc(&local_78);
    lVar8 = local_70;
    if (local_70 != 0) {
      uVar5 = 0;
      FUN_1005f50b0(0,param_3,param_4,param_5);
      puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      do {
        local_78 = CONCAT71(local_78._1_7_,1);
        puVar7 = &DAT_100fd4f20;
        FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
        FUN_1005ec10c(&local_78,lVar8,uVar5,puVar7,puVar1);
        FUN_1006755cc(&local_78,uVar6);
        lVar8 = local_70;
      } while (local_70 != 0);
    }
    FUN_1005f5238(uVar4,lVar2,local_68);
    FUN_10000cae0(local_b0,uStack_a8,local_a0 & 0xff);
  }
  return;
}



/* Address: 0x1005ed618 | FUN_1005ed618 */

void FUN_1005ed618(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100324b84(*param_1,*param_2);
  return;
}



/* Address: 0x1005ed624 | thunk_FUN_1005f4f10 */

void thunk_FUN_1005f4f10(void)

{
  FUN_1005f4f10();
  return;
}



/* Address: 0x1005ed628 | FUN_1005ed628 */

void FUN_1005ed628(undefined8 param_1)

{
  FUN_1005f444c(param_1,FUN_1005f524c);
  return;
}



/* Address: 0x1005ed634 | FUN_1005ed634 */

void FUN_1005ed634(undefined8 param_1,undefined8 param_2)

{
  FUN_1005f449c(param_1,param_2,FUN_1005f524c);
  return;
}



/* Address: 0x1005ed640 | FUN_1005ed640 */

void FUN_1005ed640(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_3 + 0x2c));
  FUN_100004550(*puVar1,puVar1[1]);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Address: 0x1005ed67c | FUN_1005ed67c */

void FUN_1005ed67c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_1005f5070();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x2c));
  lVar2 = 0;
  FUN_1005f524c(0,param_3,param_4,param_5);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Address: 0x1005ed6f8 | FUN_1005ed6f8 */

void FUN_1005ed6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar1 = 0;
  local_60 = param_4;
  uStack_58 = param_5;
  local_50 = param_6;
  uStack_48 = param_1;
  local_40 = param_2;
  FUN_1005f5070(0,param_4,param_5,param_6);
  FUN_10066ed6c(FUN_1005f5258,auStack_70,param_3,uVar1,PTR___type_metadata_for____100eae0c8 + 8);
  return;
}



/* Address: 0x1005ed76c | FUN_1005ed76c */

void FUN_1005ed76c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0;
  FUN_1005f5070(0,param_4,param_5,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x2c));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  FUN_100011128(param_2,param_3);
  FUN_100004550(uVar2,uVar3);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Address: 0x1005ed7e4 | FUN_1005ed7e4 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1005ed7e4(long param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  char acStack_100 [7];
  undefined4 uStack_f9;
  char acStack_f5 [8];
  char acStack_ed [8];
  undefined2 uStack_e5;
  char acStack_e3 [8];
  char acStack_db [6];
  char acStack_d5 [8];
  char acStack_cd [8];
  undefined2 uStack_c5;
  char acStack_c3 [8];
  char acStack_bb [8];
  char acStack_b3 [8];
  char acStack_ab [6];
  undefined2 uStack_a5;
  char acStack_a3 [8];
  undefined2 auStack_9b [5];
  undefined *apuStack_90 [3];
  undefined8 local_78;
  long local_70 [2];
  long lStack_60;
  undefined *local_58;
  
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x18);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = 0;
  FUN_1005f5278(0,uVar10,lVar11,uVar13);
  lVar14 = *(long *)(lVar3 + -8);
  lVar4 = -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)apuStack_90 + lVar4;
  (**(code **)(lVar14 + 0x10))(lVar9);
  lVar7 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar3);
  iVar2 = (int)lVar7;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      lVar4 = 0;
      _swift_getTupleTypeMetadata2
                (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar11,"isWritable delegate ",0);
      iVar2 = *(int *)(lVar4 + 0x30);
    }
    else {
      _swift_bridgeObjectRelease(*(undefined8 *)((long)apuStack_90 + lVar4 + 8U));
      FUN_10000cae0(*(undefined8 *)((long)apuStack_90 + lVar4 + 0x10U),
                    *(undefined8 *)((long)&local_78 + lVar4),*(undefined1 *)((long)local_70 + lVar4)
                   );
      builtin_strncpy(acStack_db + lVar4 + 2,"ble ",4);
      builtin_strncpy(acStack_e3 + lVar4 + 3,"isWritab",8);
      *(undefined2 *)((long)&uStack_c5 + lVar4) = 0x206c;
      builtin_strncpy(acStack_cd + lVar4,"teOutcal",8);
      builtin_strncpy(acStack_d5 + lVar4,"inDelega",8);
      builtin_strncpy(acStack_bb + lVar4,"dYields ",8);
      builtin_strncpy(acStack_c3 + lVar4,"cancelle",8);
      builtin_strncpy(acStack_ab + lVar4,"dYields ",8);
      builtin_strncpy(acStack_b3 + lVar4,"suspende",8);
      *(undefined2 *)((long)auStack_9b + lVar4) = 0x20;
      builtin_strncpy(acStack_a3 + lVar4,"delegate",8);
      apuStack_90[1] = PTR___type_metadata_for_Swift_Bool_100eac570;
      apuStack_90[2] = PTR___type_metadata_for_Swift_Bool_100eac570;
      FUN_1005f5284(0xff,uVar10,lVar11,uVar13);
      uVar5 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar6 = 0xff;
      local_78 = uVar5;
      FUN_1005f50a4(0xff,uVar10,lVar11,uVar13);
      lVar7 = 0xff;
      FUN_100678b68(0xff,uVar6);
      lVar3 = 0;
      local_70[0] = lVar7;
      local_70[1] = lVar11;
      _swift_getTupleTypeMetadata(0,0x10005,apuStack_90 + 1,acStack_e3 + lVar4 + 3,0);
      iVar2 = *(int *)(lVar3 + 0x60);
    }
    (**(code **)(*(long *)(lVar11 + -8) + 8))(lVar9 + iVar2,lVar11);
    uVar10 = 0;
  }
  else {
    if (iVar2 == 2) {
      FUN_10000cae0(*(undefined8 *)((long)apuStack_90 + lVar4 + 8U),
                    *(undefined8 *)((long)apuStack_90 + lVar4 + 0x10U),
                    *(undefined1 *)((long)&local_78 + lVar4));
      _swift_bridgeObjectRelease(*(undefined8 *)((long)local_70 + lVar4));
      FUN_1005e46ac(*(undefined8 *)((long)local_70 + lVar4 + 8),
                    *(undefined1 *)((long)&lStack_60 + lVar4));
      *(undefined4 *)((long)&uStack_f9 + lVar4) = 0x20656c62;
      builtin_strncpy(acStack_100 + lVar4,"isWritab",8);
      *(undefined2 *)((long)&uStack_e5 + lVar4) = 0x206c;
      builtin_strncpy(acStack_ed + lVar4,"teOutcal",8);
      builtin_strncpy(acStack_f5 + lVar4,"inDelega",8);
      builtin_strncpy(acStack_db + lVar4,"dYields ",8);
      builtin_strncpy(acStack_e3 + lVar4,"suspende",8);
      builtin_strncpy(acStack_cd + lVar4 + 2,"dYields ",8);
      builtin_strncpy(acStack_d5 + lVar4 + 2,"cancelle",8);
      acStack_b3[lVar4] = ' ';
      builtin_strncpy(acStack_bb + lVar4,"YieldIDs",8);
      builtin_strncpy(acStack_c3 + lVar4,"buffered",8);
      acStack_ab[lVar4 + 1] = ' ';
      pcVar1 = acStack_b3 + lVar4 + 1;
      pcVar1[0] = 'd';
      pcVar1[1] = 'e';
      pcVar1[2] = 'l';
      pcVar1[3] = 'e';
      pcVar1[4] = 'g';
      pcVar1[5] = 'a';
      pcVar1[6] = 't';
      pcVar1[7] = 'e';
      pcVar1 = acStack_ab + lVar4 + 2;
      pcVar1[0] = 'e';
      pcVar1[1] = 'r';
      pcVar1[2] = 'r';
      pcVar1[3] = 'o';
      *(undefined2 *)((long)&uStack_a5 + lVar4) = 0x2072;
      acStack_a3[lVar4] = '\0';
      apuStack_90[1] = PTR___type_metadata_for_Swift_Bool_100eac570;
      apuStack_90[2] = PTR___type_metadata_for_Swift_Bool_100eac570;
      uVar5 = 0xff;
      FUN_1005f50a4(0xff,uVar10,lVar11,uVar13);
      uVar6 = 0xff;
      FUN_100678b68(0xff,uVar5);
      uVar5 = 0xff;
      local_78 = uVar6;
      FUN_1005f5284(0xff,uVar10,lVar11,uVar13);
      lVar7 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      lVar3 = 0xff;
      local_70[0] = lVar7;
      FUN_100678b68(0xff,uVar5);
      puVar8 = &DAT_100fd5b10;
      local_70[1] = lVar3;
      lStack_60 = lVar11;
      FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
      lVar7 = 0;
      local_58 = puVar8;
      _swift_getTupleTypeMetadata(0,0x10007,apuStack_90 + 1,acStack_100 + lVar4,0);
      iVar2 = *(int *)(lVar7 + 0x70);
      _swift_errorRelease(*(undefined8 *)(lVar9 + *(int *)(lVar7 + 0x80)));
      pcVar12 = *(code **)(*(long *)(lVar11 + -8) + 8);
      lVar9 = lVar9 + iVar2;
    }
    else {
      if (iVar2 != 3) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1005edb44);
        (*pcVar12)();
      }
      pcVar12 = *(code **)(lVar14 + 8);
      lVar11 = lVar3;
    }
    (*pcVar12)(lVar9,lVar11);
    uVar10 = 1;
  }
  return uVar10;
}



/* Address: 0x1005edb44 | FUN_1005edb44 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1005edb44(long param_1)

{
  char *pcVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  char acStack_100 [7];
  undefined4 uStack_f9;
  char acStack_f5 [8];
  char acStack_ed [8];
  undefined2 uStack_e5;
  char acStack_e3 [8];
  char acStack_db [6];
  char acStack_d5 [8];
  char acStack_cd [8];
  undefined2 uStack_c5;
  char acStack_c3 [8];
  char acStack_bb [8];
  char acStack_b3 [8];
  char acStack_ab [6];
  undefined2 uStack_a5;
  char acStack_a3 [8];
  undefined2 auStack_9b [5];
  undefined *apuStack_90 [3];
  undefined8 local_78;
  long local_70 [2];
  long lStack_60;
  undefined *local_58;
  
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = 0;
  FUN_1005f5278(0,uVar10,lVar2,uVar13);
  lVar14 = *(long *)(lVar5 + -8);
  lVar6 = -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)apuStack_90 + lVar6;
  (**(code **)(lVar14 + 0x10))(lVar12);
  lVar9 = lVar12;
  _swift_getEnumCaseMultiPayload(lVar12,lVar5);
  iVar4 = (int)lVar9;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      lVar6 = 0;
      _swift_getTupleTypeMetadata2
                (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar2,"isWritable delegate ",0);
      iVar4 = *(int *)(lVar6 + 0x30);
    }
    else {
      _swift_bridgeObjectRelease(*(undefined8 *)((long)apuStack_90 + lVar6 + 8U));
      FUN_10000cae0(*(undefined8 *)((long)apuStack_90 + lVar6 + 0x10U),
                    *(undefined8 *)((long)&local_78 + lVar6),*(undefined1 *)((long)local_70 + lVar6)
                   );
      builtin_strncpy(acStack_db + lVar6 + 2,"ble ",4);
      builtin_strncpy(acStack_e3 + lVar6 + 3,"isWritab",8);
      *(undefined2 *)((long)&uStack_c5 + lVar6) = 0x206c;
      builtin_strncpy(acStack_cd + lVar6,"teOutcal",8);
      builtin_strncpy(acStack_d5 + lVar6,"inDelega",8);
      builtin_strncpy(acStack_bb + lVar6,"dYields ",8);
      builtin_strncpy(acStack_c3 + lVar6,"cancelle",8);
      builtin_strncpy(acStack_ab + lVar6,"dYields ",8);
      builtin_strncpy(acStack_b3 + lVar6,"suspende",8);
      *(undefined2 *)((long)auStack_9b + lVar6) = 0x20;
      builtin_strncpy(acStack_a3 + lVar6,"delegate",8);
      apuStack_90[1] = PTR___type_metadata_for_Swift_Bool_100eac570;
      apuStack_90[2] = PTR___type_metadata_for_Swift_Bool_100eac570;
      FUN_1005f5284(0xff,uVar10,lVar2,uVar13);
      uVar7 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar8 = 0xff;
      local_78 = uVar7;
      FUN_1005f50a4(0xff,uVar10,lVar2,uVar13);
      lVar9 = 0xff;
      FUN_100678b68(0xff,uVar8);
      lVar5 = 0;
      local_70[0] = lVar9;
      local_70[1] = lVar2;
      _swift_getTupleTypeMetadata(0,0x10005,apuStack_90 + 1,acStack_e3 + lVar6 + 3,0);
      iVar4 = *(int *)(lVar5 + 0x60);
    }
    (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar12 + iVar4,lVar2);
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        (**(code **)(lVar14 + 8))(lVar12,lVar5);
        return 1;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005edea8);
      (*pcVar3)();
    }
    FUN_10000cae0(*(undefined8 *)((long)apuStack_90 + lVar6 + 8U),
                  *(undefined8 *)((long)apuStack_90 + lVar6 + 0x10U),
                  *(undefined1 *)((long)&local_78 + lVar6));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)local_70 + lVar6));
    FUN_1005e46ac(*(undefined8 *)((long)local_70 + lVar6 + 8),
                  *(undefined1 *)((long)&lStack_60 + lVar6));
    *(undefined4 *)((long)&uStack_f9 + lVar6) = 0x20656c62;
    builtin_strncpy(acStack_100 + lVar6,"isWritab",8);
    *(undefined2 *)((long)&uStack_e5 + lVar6) = 0x206c;
    builtin_strncpy(acStack_ed + lVar6,"teOutcal",8);
    builtin_strncpy(acStack_f5 + lVar6,"inDelega",8);
    builtin_strncpy(acStack_db + lVar6,"dYields ",8);
    builtin_strncpy(acStack_e3 + lVar6,"suspende",8);
    builtin_strncpy(acStack_cd + lVar6 + 2,"dYields ",8);
    builtin_strncpy(acStack_d5 + lVar6 + 2,"cancelle",8);
    acStack_b3[lVar6] = ' ';
    builtin_strncpy(acStack_bb + lVar6,"YieldIDs",8);
    builtin_strncpy(acStack_c3 + lVar6,"buffered",8);
    acStack_ab[lVar6 + 1] = ' ';
    pcVar1 = acStack_b3 + lVar6 + 1;
    pcVar1[0] = 'd';
    pcVar1[1] = 'e';
    pcVar1[2] = 'l';
    pcVar1[3] = 'e';
    pcVar1[4] = 'g';
    pcVar1[5] = 'a';
    pcVar1[6] = 't';
    pcVar1[7] = 'e';
    pcVar1 = acStack_ab + lVar6 + 2;
    pcVar1[0] = 'e';
    pcVar1[1] = 'r';
    pcVar1[2] = 'r';
    pcVar1[3] = 'o';
    *(undefined2 *)((long)&uStack_a5 + lVar6) = 0x2072;
    acStack_a3[lVar6] = '\0';
    apuStack_90[1] = PTR___type_metadata_for_Swift_Bool_100eac570;
    apuStack_90[2] = PTR___type_metadata_for_Swift_Bool_100eac570;
    uVar7 = 0xff;
    FUN_1005f50a4(0xff,uVar10,lVar2,uVar13);
    uVar8 = 0xff;
    FUN_100678b68(0xff,uVar7);
    uVar7 = 0xff;
    local_78 = uVar8;
    FUN_1005f5284(0xff,uVar10,lVar2,uVar13);
    lVar9 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    uVar10 = 0xff;
    local_70[0] = lVar9;
    FUN_100678b68(0xff,uVar7);
    puVar11 = &DAT_100fd5b10;
    local_70[1] = uVar10;
    lStack_60 = lVar2;
    FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
    lVar9 = 0;
    local_58 = puVar11;
    _swift_getTupleTypeMetadata(0,0x10007,apuStack_90 + 1,acStack_100 + lVar6,0);
    iVar4 = *(int *)(lVar9 + 0x70);
    _swift_errorRelease(*(undefined8 *)(lVar12 + *(int *)(lVar9 + 0x80)));
    (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar12 + iVar4,lVar2);
  }
  return 0;
}



/* Address: 0x1005edea8 | FUN_1005edea8 */

void FUN_1005edea8(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  _swift_getTupleTypeMetadata2
            (0,PTR___type_metadata_for_Swift_Bool_100eac570,param_5,"isWritable delegate ",0);
  iVar1 = *(int *)(lVar2 + 0x30);
  *param_1 = param_2;
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1 + iVar1,param_3,param_5);
  uVar3 = 0;
  FUN_1005f5278(0,param_4,param_5,param_6);
  _swift_storeEnumTagMultiPayload(param_1,uVar3,0);
  return;
}



/* Address: 0x1005edf48 | FUN_1005edf48 */

undefined8 FUN_1005edf48(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined2 *puVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  byte *unaff_x20;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte abStack_170 [7];
  byte abStack_169 [4];
  byte abStack_165 [8];
  byte abStack_15d [8];
  byte abStack_155 [10];
  byte abStack_14b [6];
  byte abStack_145 [8];
  byte abStack_13d [8];
  byte abStack_135 [10];
  byte abStack_12b [8];
  byte abStack_123 [8];
  byte abStack_11b [6];
  byte abStack_115 [10];
  byte abStack_10b [11];
  undefined8 uStack_100;
  byte *local_f0;
  ulong local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  undefined2 *local_b8;
  long local_b0;
  ulong local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  
  local_a8 = CONCAT44(local_a8._4_4_,param_1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  local_b0 = *(long *)(lVar2 + -8);
  uVar12 = *(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)&uStack_100 - uVar12;
  lVar15 = lVar14 - uVar12;
  lVar16 = lVar15 - uVar12;
  uVar19 = *(undefined8 *)(param_2 + 0x20);
  lVar7 = 0;
  FUN_1005f5278(0,uVar1,lVar2,uVar19);
  lVar17 = *(long *)(lVar7 + -8);
  uVar12 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b8 = (undefined2 *)(lVar16 - uVar12);
  pbVar18 = (byte *)((long)local_b8 - uVar12);
  (**(code **)(lVar17 + 0x10))(pbVar18);
  pbVar8 = pbVar18;
  _swift_getEnumCaseMultiPayload(pbVar18,lVar7);
  iVar6 = (int)pbVar8;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      lVar7 = 0;
      _swift_getTupleTypeMetadata2
                (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar2,"isWritable delegate ",0);
      pcVar5 = *(code **)(local_b0 + 0x20);
      (*pcVar5)(lVar16,pbVar18 + *(int *)(lVar7 + 0x30),lVar2);
      (**(code **)(lVar17 + 8))();
      iVar6 = *(int *)(lVar7 + 0x30);
      *unaff_x20 = (byte)local_a8 & 1;
      (*pcVar5)(unaff_x20 + iVar6,lVar16,lVar2);
    }
    else {
      local_e0 = CONCAT44(local_e0._4_4_,(uint)*pbVar18);
      local_e8 = CONCAT44(local_e8._4_4_,(uint)pbVar18[1]);
      local_d8 = *(ulong *)(pbVar18 + 8);
      local_d0 = *(undefined8 *)(pbVar18 + 0x10);
      local_c0 = *(undefined8 *)(pbVar18 + 0x18);
      local_c4 = (uint)pbVar18[0x20];
      pbVar18[-0x49] = 0x62;
      pbVar18[-0x48] = 0x6c;
      pbVar18[-0x47] = 0x65;
      pbVar18[-0x46] = 0x20;
      pbVar18[-0x50] = 'i';
      pbVar18[-0x4f] = 's';
      pbVar18[-0x4e] = 'W';
      pbVar18[-0x4d] = 'r';
      pbVar18[-0x4c] = 'i';
      pbVar18[-0x4b] = 't';
      pbVar18[-0x4a] = 'a';
      pbVar18[-0x49] = 'b';
      pbVar18[-0x35] = 0x6c;
      pbVar18[-0x34] = 0x20;
      pbVar18[-0x3d] = 't';
      pbVar18[-0x3c] = 'e';
      pbVar18[-0x3b] = 'O';
      pbVar18[-0x3a] = 'u';
      pbVar18[-0x39] = 't';
      pbVar18[-0x38] = 'c';
      pbVar18[-0x37] = 'a';
      pbVar18[-0x36] = 'l';
      pbVar18[-0x45] = 'i';
      pbVar18[-0x44] = 'n';
      pbVar18[-0x43] = 'D';
      pbVar18[-0x42] = 'e';
      pbVar18[-0x41] = 'l';
      pbVar18[-0x40] = 'e';
      pbVar18[-0x3f] = 'g';
      pbVar18[-0x3e] = 'a';
      pbVar18[-0x2b] = 'd';
      pbVar18[-0x2a] = 'Y';
      pbVar18[-0x29] = 'i';
      pbVar18[-0x28] = 'e';
      pbVar18[-0x27] = 'l';
      pbVar18[-0x26] = 'd';
      pbVar18[-0x25] = 's';
      pbVar18[-0x24] = ' ';
      pbVar18[-0x33] = 'c';
      pbVar18[-0x32] = 'a';
      pbVar18[-0x31] = 'n';
      pbVar18[-0x30] = 'c';
      pbVar18[-0x2f] = 'e';
      pbVar18[-0x2e] = 'l';
      pbVar18[-0x2d] = 'l';
      pbVar18[-0x2c] = 'e';
      pbVar18[-0x1b] = 'd';
      pbVar18[-0x1a] = 'Y';
      pbVar18[-0x19] = 'i';
      pbVar18[-0x18] = 'e';
      pbVar18[-0x17] = 'l';
      pbVar18[-0x16] = 'd';
      pbVar18[-0x15] = 's';
      pbVar18[-0x14] = ' ';
      pbVar18[-0x23] = 's';
      pbVar18[-0x22] = 'u';
      pbVar18[-0x21] = 's';
      pbVar18[-0x20] = 'p';
      pbVar18[-0x1f] = 'e';
      pbVar18[-0x1e] = 'n';
      pbVar18[-0x1d] = 'd';
      pbVar18[-0x1c] = 'e';
      pbVar18[-0xb] = 0x20;
      pbVar18[-10] = 0;
      pbVar18[-0x13] = 'd';
      pbVar18[-0x12] = 'e';
      pbVar18[-0x11] = 'l';
      pbVar18[-0x10] = 'e';
      pbVar18[-0xf] = 'g';
      pbVar18[-0xe] = 'a';
      pbVar18[-0xd] = 't';
      pbVar18[-0xc] = 'e';
      local_a0 = PTR___type_metadata_for_Swift_Bool_100eac570;
      puStack_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
      FUN_1005f5284(0xff,uVar1,lVar2,uVar19);
      uVar9 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar10 = 0xff;
      local_90 = uVar9;
      FUN_1005f50a4(0xff,uVar1,lVar2,uVar19);
      uVar9 = 0xff;
      FUN_100678b68(0xff,uVar10);
      lVar16 = 0;
      local_88 = uVar9;
      local_80 = lVar2;
      _swift_getTupleTypeMetadata(0,0x10005,&local_a0,pbVar18 + -0x50,0);
      lVar14 = local_b0;
      pcVar5 = *(code **)(local_b0 + 0x20);
      (*pcVar5)(lVar15,pbVar18 + *(int *)(lVar16 + 0x60),lVar2);
      puVar4 = local_b8;
      uVar12 = local_d8;
      if (((uint)local_a8 & 1) == (uint)local_e0) {
        (**(code **)(lVar14 + 8))(lVar15,lVar2);
        FUN_10000cae0(local_d0,local_c0,local_c4);
        _swift_bridgeObjectRelease(local_d8);
        return 0;
      }
      if ((local_a8 & 1) == 0) {
        (**(code **)(lVar17 + 8))();
        iVar6 = *(int *)(lVar16 + 0x60);
        *unaff_x20 = 0;
        unaff_x20[1] = (byte)local_e8;
      }
      else {
        if ((local_e8 & 1) == 0) {
          local_a8 = (ulong)*(int *)(lVar16 + 0x60);
          *local_b8 = 1;
          *(ulong *)(puVar4 + 4) = uVar12;
          FUN_1005f50a4(0,uVar1,lVar2,uVar19);
          thunk_FUN_100676830(puVar4 + 8);
          (*pcVar5)((long)puVar4 + local_a8,lVar15,lVar2);
          _swift_storeEnumTagMultiPayload(puVar4,lVar7,1);
          pcVar5 = *(code **)(lVar17 + 0x28);
          goto LAB_1005ee5fc;
        }
        (**(code **)(lVar17 + 8))();
        iVar6 = *(int *)(lVar16 + 0x60);
        unaff_x20[0] = 1;
        unaff_x20[1] = 1;
      }
      *(ulong *)(unaff_x20 + 8) = uVar12;
      *(undefined8 *)(unaff_x20 + 0x10) = local_d0;
      *(undefined8 *)(unaff_x20 + 0x18) = local_c0;
      unaff_x20[0x20] = (byte)local_c4;
      (*pcVar5)(unaff_x20 + iVar6,lVar15,lVar2);
    }
  }
  else {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        (**(code **)(lVar17 + 8))(pbVar18,lVar7);
        return 0;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1005ee618);
      (*pcVar5)();
    }
    local_f0 = pbVar18;
    uStack_100._4_4_ = (uint)pbVar18[1];
    local_d0 = *(undefined8 *)(pbVar18 + 8);
    local_c0 = *(undefined8 *)(pbVar18 + 0x10);
    local_c4 = (uint)pbVar18[0x18];
    local_e8 = *(ulong *)(pbVar18 + 0x28);
    local_e0 = *(undefined8 *)(pbVar18 + 0x20);
    local_d8 = CONCAT44(local_d8._4_4_,(uint)pbVar18[0x30]);
    pbVar18[-0x69] = 0x62;
    pbVar18[-0x68] = 0x6c;
    pbVar18[-0x67] = 0x65;
    pbVar18[-0x66] = 0x20;
    pbVar18[-0x70] = 'i';
    pbVar18[-0x6f] = 's';
    pbVar18[-0x6e] = 'W';
    pbVar18[-0x6d] = 'r';
    pbVar18[-0x6c] = 'i';
    pbVar18[-0x6b] = 't';
    pbVar18[-0x6a] = 'a';
    pbVar18[-0x69] = 'b';
    pbVar18[-0x55] = 0x6c;
    pbVar18[-0x54] = 0x20;
    pbVar18[-0x5d] = 't';
    pbVar18[-0x5c] = 'e';
    pbVar18[-0x5b] = 'O';
    pbVar18[-0x5a] = 'u';
    pbVar18[-0x59] = 't';
    pbVar18[-0x58] = 'c';
    pbVar18[-0x57] = 'a';
    pbVar18[-0x56] = 'l';
    pbVar18[-0x65] = 'i';
    pbVar18[-100] = 'n';
    pbVar18[-99] = 'D';
    pbVar18[-0x62] = 'e';
    pbVar18[-0x61] = 'l';
    pbVar18[-0x60] = 'e';
    pbVar18[-0x5f] = 'g';
    pbVar18[-0x5e] = 'a';
    pbVar18[-0x4b] = 'd';
    pbVar18[-0x4a] = 'Y';
    pbVar18[-0x49] = 'i';
    pbVar18[-0x48] = 'e';
    pbVar18[-0x47] = 'l';
    pbVar18[-0x46] = 'd';
    pbVar18[-0x45] = 's';
    pbVar18[-0x44] = ' ';
    pbVar18[-0x53] = 's';
    pbVar18[-0x52] = 'u';
    pbVar18[-0x51] = 's';
    pbVar18[-0x50] = 'p';
    pbVar18[-0x4f] = 'e';
    pbVar18[-0x4e] = 'n';
    pbVar18[-0x4d] = 'd';
    pbVar18[-0x4c] = 'e';
    pbVar18[-0x3b] = 'd';
    pbVar18[-0x3a] = 'Y';
    pbVar18[-0x39] = 'i';
    pbVar18[-0x38] = 'e';
    pbVar18[-0x37] = 'l';
    pbVar18[-0x36] = 'd';
    pbVar18[-0x35] = 's';
    pbVar18[-0x34] = ' ';
    pbVar18[-0x43] = 'c';
    pbVar18[-0x42] = 'a';
    pbVar18[-0x41] = 'n';
    pbVar18[-0x40] = 'c';
    pbVar18[-0x3f] = 'e';
    pbVar18[-0x3e] = 'l';
    pbVar18[-0x3d] = 'l';
    pbVar18[-0x3c] = 'e';
    pbVar18[-0x23] = 0x20;
    pbVar18[-0x2b] = 'Y';
    pbVar18[-0x2a] = 'i';
    pbVar18[-0x29] = 'e';
    pbVar18[-0x28] = 'l';
    pbVar18[-0x27] = 'd';
    pbVar18[-0x26] = 'I';
    pbVar18[-0x25] = 'D';
    pbVar18[-0x24] = 's';
    pbVar18[-0x33] = 'b';
    pbVar18[-0x32] = 'u';
    pbVar18[-0x31] = 'f';
    pbVar18[-0x30] = 'f';
    pbVar18[-0x2f] = 'e';
    pbVar18[-0x2e] = 'r';
    pbVar18[-0x2d] = 'e';
    pbVar18[-0x2c] = 'd';
    pbVar18[-0x1a] = 0x20;
    pbVar18[-0x22] = 'd';
    pbVar18[-0x21] = 'e';
    pbVar18[-0x20] = 'l';
    pbVar18[-0x1f] = 'e';
    pbVar18[-0x1e] = 'g';
    pbVar18[-0x1d] = 'a';
    pbVar18[-0x1c] = 't';
    pbVar18[-0x1b] = 'e';
    pbVar18[-0x19] = 0x65;
    pbVar18[-0x18] = 0x72;
    pbVar18[-0x17] = 0x72;
    pbVar18[-0x16] = 0x6f;
    pbVar18[-0x15] = 0x72;
    pbVar18[-0x14] = 0x20;
    pbVar18[-0x13] = 0;
    local_a0 = PTR___type_metadata_for_Swift_Bool_100eac570;
    puStack_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
    uVar9 = 0xff;
    FUN_1005f50a4(0xff,uVar1,lVar2,uVar19);
    uVar10 = 0xff;
    FUN_100678b68(0xff,uVar9);
    uVar9 = 0xff;
    local_90 = uVar10;
    FUN_1005f5284(0xff,uVar1,lVar2,uVar19);
    uVar10 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    lVar15 = 0xff;
    local_88 = uVar10;
    FUN_100678b68(0xff,uVar9);
    puVar11 = &DAT_100fd5b10;
    local_80 = lVar15;
    lStack_78 = lVar2;
    FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
    lVar16 = 0;
    local_70 = puVar11;
    _swift_getTupleTypeMetadata(0,0x10007,&local_a0,pbVar18 + -0x70,0);
    lVar15 = local_b0;
    uVar13 = *(ulong *)(pbVar18 + *(int *)(lVar16 + 0x80));
    pcVar5 = *(code **)(local_b0 + 0x20);
    (*pcVar5)(lVar14,pbVar18 + *(int *)(lVar16 + 0x70),lVar2);
    puVar4 = local_b8;
    uVar9 = local_e0;
    uVar12 = local_e8;
    if ((local_a8 & 1) == 0) {
      (**(code **)(lVar15 + 8))(lVar14,lVar2);
      _swift_errorRelease(uVar13);
      FUN_1005e46ac(local_e8,local_d8 & 0xffffffff);
      _swift_bridgeObjectRelease(local_e0);
      FUN_10000cae0(local_d0,local_c0,local_c4);
      return 0;
    }
    local_a8 = uVar13;
    if ((uStack_100._4_4_ & 1) == 0) {
      local_f0 = (byte *)(long)*(int *)(lVar16 + 0x70);
      local_b0 = (long)*(int *)(lVar16 + 0x80);
      *local_b8 = 1;
      FUN_1005f50a4(0,uVar1,lVar2,uVar19);
      thunk_FUN_100676830(puVar4 + 4);
      *(undefined8 *)(puVar4 + 0x10) = uVar9;
      *(ulong *)(puVar4 + 0x14) = uVar12;
      *(char *)(puVar4 + 0x18) = (char)local_d8;
      (*pcVar5)((byte *)((long)puVar4 + (long)local_f0),lVar14,lVar2);
      *(ulong *)((long)puVar4 + local_b0) = local_a8;
      _swift_storeEnumTagMultiPayload(puVar4,lVar7,2);
      pcVar5 = *(code **)(lVar17 + 0x28);
LAB_1005ee5fc:
      (*pcVar5)();
      return local_d0;
    }
    (**(code **)(lVar17 + 8))(unaff_x20,lVar7);
    iVar6 = *(int *)(lVar16 + 0x70);
    iVar3 = *(int *)(lVar16 + 0x80);
    unaff_x20[0] = 1;
    unaff_x20[1] = 1;
    *(undefined8 *)(unaff_x20 + 8) = local_d0;
    *(undefined8 *)(unaff_x20 + 0x10) = local_c0;
    unaff_x20[0x18] = (byte)local_c4;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar9;
    *(ulong *)(unaff_x20 + 0x28) = uVar12;
    unaff_x20[0x30] = (byte)local_d8;
    (*pcVar5)(unaff_x20 + iVar6,lVar14,lVar2);
    *(ulong *)(unaff_x20 + iVar3) = local_a8;
  }
  _swift_storeEnumTagMultiPayload();
  return 0;
}



/* Address: 0x1005ee618 | FUN_1005ee618 */

void FUN_1005ee618(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_8;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_9;
  *(undefined8 *)(unaff_x22 + 200) = param_6;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined1 *)(unaff_x22 + 0xf9) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  _swift_task_switch(FUN_1005ee648,0,0);
  return;
}



/* Address: 0x1005ee648 | FUN_1005ee648 */

void FUN_1005ee648(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)(unaff_x22 + 0xf9) == '\x01') {
    puVar2 = &DAT_100fd65b0;
    FUN_1000f7830(&DAT_100fd65b0,&DAT_100c66fe0);
    _swift_initStaticObject();
    lVar1 = *(long *)(puVar2 + 0x10);
    *(long *)(puVar2 + 0x10) = lVar1 + 1;
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0xb0);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(long *)(unaff_x22 + 0x50) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xb8);
  plVar3 = (long *)0x20;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe8) = plVar3;
  uVar4 = 0;
  FUN_1005f50b0(0,uVar6,uVar5,uVar7);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005ee774;
  FUN_1005f17a8(unaff_x22 + 0xf8,&DAT_100c66930,unaff_x22 + 0x10,FUN_1005f5348,unaff_x22 + 0x60,0,0,
                uVar4);
  return;
}



/* Address: 0x1005ee774 | FUN_1005ee774 */

void FUN_1005ee774(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005ee7d8;
  }
  else {
    pcVar1 = FUN_100471424;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005ee7d8 | FUN_1005ee7d8 */

void FUN_1005ee7d8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001005ee7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0xf8));
  return;
}



/* Address: 0x1005ee7e8 | FUN_1005ee7e8 */

void FUN_1005ee7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_8;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_9;
  *(long *)(unaff_x22 + 200) = param_6;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  lVar3 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
  lVar3 = 0;
  FUN_1005f539c(0,param_5,param_6,param_8);
  *(long *)(unaff_x22 + 0xf8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar1;
  _swift_task_switch(FUN_1005ee8ac,0,0);
  return;
}



/* Address: 0x1005ee8ac | FUN_1005ee8ac */

void FUN_1005ee8ac(void)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar3 = *(long *)(unaff_x22 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = 0;
  FUN_1005f5070(0,*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 200),
                *(undefined8 *)(unaff_x22 + 0xd8));
  FUN_10066ed6c(uVar14,FUN_1005fb578,unaff_x22 + 0x60,uVar13,uVar9,uVar12);
  (**(code **)(lVar3 + 0x10))(uVar10,uVar14,uVar12);
  _swift_getEnumCaseMultiPayload(uVar10,uVar12);
  if ((int)uVar10 == 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar4 = *(long *)(unaff_x22 + 0x100);
    lVar3 = *(long *)(unaff_x22 + 0xe8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar1 = *(long *)(unaff_x22 + 0xd8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar12 = *(undefined8 *)(unaff_x22 + 200);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    puVar2 = *(undefined1 **)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    (**(code **)(lVar3 + 0x20))(uVar9,*(undefined8 *)(unaff_x22 + 0x108),uVar12);
    FUN_100603db0(uVar13,uVar7,uVar6,uVar5);
    (**(code **)(lVar1 + 0x10))();
    _swift_release(uVar13);
    FUN_1005ef94c(uVar8,uVar7,uVar12,lVar1);
    (**(code **)(lVar3 + 8))(uVar9,uVar12);
    (**(code **)(lVar4 + 8))(uVar14,uVar10);
    *puVar2 = 0;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar12);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    if ((int)uVar10 != 1) {
      uVar13 = *(undefined8 *)(unaff_x22 + 200);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
      *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 200);
      *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xd8);
      *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xd0);
      *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xe0);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa8);
      *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xb0);
      *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb8);
      plVar11 = (long *)0x20;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x118) = plVar11;
      uVar12 = 0;
      FUN_1005f50b0(0,uVar14,uVar13,uVar10);
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_1005eeb20;
      FUN_1005da2e0(*(undefined8 *)(unaff_x22 + 0xa0),0,0,FUN_1005fb5d0,unaff_x22 + 0x10,uVar12);
      return;
    }
    _swift_willThrow();
    uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
    (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))(uVar12,*(undefined8 *)(unaff_x22 + 0xf8));
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar13);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005eea7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005eeb20 | FUN_1005eeb20 */

void FUN_1005eeb20(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005eeb84;
  }
  else {
    pcVar1 = FUN_1005eebe4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005eeb84 | FUN_1005eeb84 */

void FUN_1005eeb84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))
            (*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0xf8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001005eebe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005eebe4 | FUN_1005eebe4 */

void FUN_1005eebe4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005eec4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005eec50 | FUN_1005eec50 */

void FUN_1005eec50(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  CancellationError CVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  CancellationError CVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  byte *pbVar22;
  long lVar23;
  long lVar24;
  byte *unaff_x20;
  byte *pbVar25;
  byte *pbVar26;
  long lVar27;
  long lVar28;
  tuple2_conflict3 tVar29;
  byte abStack_1b0 [7];
  byte abStack_1a9 [4];
  byte abStack_1a5 [8];
  byte abStack_19d [8];
  byte abStack_195 [10];
  byte abStack_18b [6];
  byte abStack_185 [8];
  byte abStack_17d [8];
  byte abStack_175 [10];
  byte abStack_16b [8];
  byte abStack_163 [8];
  byte abStack_15b [6];
  byte abStack_155 [10];
  byte abStack_14b [11];
  byte abStack_140 [8];
  code *local_138;
  long local_130;
  uint local_128;
  uint local_124;
  undefined8 local_120;
  code *local_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  uint local_100;
  uint local_fc;
  byte *local_f8;
  byte *local_f0;
  long *local_e8;
  byte *local_e0;
  byte *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  
  lVar1 = *(long *)(param_3 + 0x18);
  uVar19 = *(undefined8 *)(param_3 + 0x20);
  lVar28 = *(long *)(lVar1 + -8);
  uVar20 = *(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0;
  pbVar22 = abStack_140 + -uVar20;
  local_e0 = pbVar22 + -uVar20;
  lVar27 = (long)local_e0 - uVar20;
  lVar24 = lVar27 - uVar20;
  uVar21 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  FUN_1005f5278(0,uVar21,lVar1,uVar19);
  lVar23 = *(long *)(lVar8 + -8);
  uVar20 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
  pbVar26 = (byte *)(lVar24 - uVar20);
  pbVar25 = pbVar26 + -uVar20;
  (**(code **)(lVar23 + 0x10))(pbVar25);
  pbVar9 = pbVar25;
  _swift_getEnumCaseMultiPayload(pbVar25,lVar8);
  puVar14 = PTR___type_metadata_for_Swift_Bool_100eac570;
  iVar7 = (int)pbVar9;
  if (iVar7 < 2) {
    local_e8 = param_1;
    local_80 = lVar1;
    if (iVar7 == 0) {
      bVar2 = *pbVar25;
      lVar10 = 0;
      _swift_getTupleTypeMetadata2
                (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar1,"isWritable delegate ",0);
      (**(code **)(lVar28 + 0x20))(lVar24,pbVar25 + *(int *)(lVar10 + 0x30),lVar1);
      local_e0 = pbVar25;
      pbVar25[-0x49] = 0x62;
      pbVar25[-0x48] = 0x6c;
      pbVar25[-0x47] = 0x65;
      pbVar25[-0x46] = 0x20;
      pbVar25[-0x50] = 'i';
      pbVar25[-0x4f] = 's';
      pbVar25[-0x4e] = 'W';
      pbVar25[-0x4d] = 'r';
      pbVar25[-0x4c] = 'i';
      pbVar25[-0x4b] = 't';
      pbVar25[-0x4a] = 'a';
      pbVar25[-0x49] = 'b';
      pbVar25[-0x35] = 0x6c;
      pbVar25[-0x34] = 0x20;
      pbVar25[-0x3d] = 't';
      pbVar25[-0x3c] = 'e';
      pbVar25[-0x3b] = 'O';
      pbVar25[-0x3a] = 'u';
      pbVar25[-0x39] = 't';
      pbVar25[-0x38] = 'c';
      pbVar25[-0x37] = 'a';
      pbVar25[-0x36] = 'l';
      pbVar25[-0x45] = 'i';
      pbVar25[-0x44] = 'n';
      pbVar25[-0x43] = 'D';
      pbVar25[-0x42] = 'e';
      pbVar25[-0x41] = 'l';
      pbVar25[-0x40] = 'e';
      pbVar25[-0x3f] = 'g';
      pbVar25[-0x3e] = 'a';
      pbVar25[-0x2b] = 'd';
      pbVar25[-0x2a] = 'Y';
      pbVar25[-0x29] = 'i';
      pbVar25[-0x28] = 'e';
      pbVar25[-0x27] = 'l';
      pbVar25[-0x26] = 'd';
      pbVar25[-0x25] = 's';
      pbVar25[-0x24] = ' ';
      pbVar25[-0x33] = 'c';
      pbVar25[-0x32] = 'a';
      pbVar25[-0x31] = 'n';
      pbVar25[-0x30] = 'c';
      pbVar25[-0x2f] = 'e';
      pbVar25[-0x2e] = 'l';
      pbVar25[-0x2d] = 'l';
      pbVar25[-0x2c] = 'e';
      pbVar25[-0x1b] = 'd';
      pbVar25[-0x1a] = 'Y';
      pbVar25[-0x19] = 'i';
      pbVar25[-0x18] = 'e';
      pbVar25[-0x17] = 'l';
      pbVar25[-0x16] = 'd';
      pbVar25[-0x15] = 's';
      pbVar25[-0x14] = ' ';
      pbVar25[-0x23] = 's';
      pbVar25[-0x22] = 'u';
      pbVar25[-0x21] = 's';
      pbVar25[-0x20] = 'p';
      pbVar25[-0x1f] = 'e';
      pbVar25[-0x1e] = 'n';
      pbVar25[-0x1d] = 'd';
      pbVar25[-0x1c] = 'e';
      pbVar25[-0xb] = 0x20;
      pbVar25[-10] = 0;
      pbVar25[-0x13] = 'd';
      pbVar25[-0x12] = 'e';
      pbVar25[-0x11] = 'l';
      pbVar25[-0x10] = 'e';
      pbVar25[-0xf] = 'g';
      pbVar25[-0xe] = 'a';
      pbVar25[-0xd] = 't';
      pbVar25[-0xc] = 'e';
      local_a0 = puVar14;
      local_98 = puVar14;
      FUN_1005f5284(0xff,uVar21,lVar1,uVar19);
      uVar17 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar12 = 0xff;
      local_90 = uVar17;
      FUN_1005f50a4(0xff,uVar21,lVar1,uVar19);
      uVar17 = 0xff;
      FUN_100678b68(0xff,uVar12);
      lVar10 = 0;
      local_88 = uVar17;
      _swift_getTupleTypeMetadata(0,0x10005,&local_a0,pbVar25 + -0x50,0);
      iVar7 = *(int *)(lVar10 + 0x60);
      *pbVar26 = bVar2;
      pbVar26[1] = bVar2;
      uVar17 = 0;
      FUN_1005f5284(0,uVar21,lVar1,uVar19);
      tVar29 = Swift::Array<undefined>::_allocateUninitialized(0,uVar17);
      *(long *)(pbVar26 + 8) = tVar29._0_8_;
      FUN_1005f50a4(0,uVar21,lVar1,uVar19);
      thunk_FUN_100676830(pbVar26 + 0x10);
      pcVar5 = *(code **)(lVar28 + 0x10);
      (*pcVar5)(pbVar26 + iVar7,lVar24,lVar1);
      _swift_storeEnumTagMultiPayload(pbVar26,lVar8,1);
      (**(code **)(lVar23 + 0x28))(unaff_x20,pbVar26,lVar8);
      (*pcVar5)(lVar27,lVar24,lVar1);
      FUN_1005f44e4(local_e8,bVar2,lVar27,uVar21,lVar1,uVar19);
      (**(code **)(lVar28 + 8))(lVar24,lVar1);
      return;
    }
    local_f8 = pbVar25;
    bVar2 = *pbVar25;
    uVar17 = *(undefined8 *)(pbVar25 + 8);
    local_110 = *(undefined8 **)(pbVar25 + 0x18);
    uStack_108 = *(undefined8 *)(pbVar25 + 0x10);
    local_100 = (uint)pbVar25[0x20];
    local_fc = (uint)pbVar25[1];
    pbVar25[-0x49] = 0x62;
    pbVar25[-0x48] = 0x6c;
    pbVar25[-0x47] = 0x65;
    pbVar25[-0x46] = 0x20;
    pbVar25[-0x50] = 'i';
    pbVar25[-0x4f] = 's';
    pbVar25[-0x4e] = 'W';
    pbVar25[-0x4d] = 'r';
    pbVar25[-0x4c] = 'i';
    pbVar25[-0x4b] = 't';
    pbVar25[-0x4a] = 'a';
    pbVar25[-0x49] = 'b';
    pbVar25[-0x35] = 0x6c;
    pbVar25[-0x34] = 0x20;
    pbVar25[-0x3d] = 't';
    pbVar25[-0x3c] = 'e';
    pbVar25[-0x3b] = 'O';
    pbVar25[-0x3a] = 'u';
    pbVar25[-0x39] = 't';
    pbVar25[-0x38] = 'c';
    pbVar25[-0x37] = 'a';
    pbVar25[-0x36] = 'l';
    pbVar25[-0x45] = 'i';
    pbVar25[-0x44] = 'n';
    pbVar25[-0x43] = 'D';
    pbVar25[-0x42] = 'e';
    pbVar25[-0x41] = 'l';
    pbVar25[-0x40] = 'e';
    pbVar25[-0x3f] = 'g';
    pbVar25[-0x3e] = 'a';
    pbVar25[-0x2b] = 'd';
    pbVar25[-0x2a] = 'Y';
    pbVar25[-0x29] = 'i';
    pbVar25[-0x28] = 'e';
    pbVar25[-0x27] = 'l';
    pbVar25[-0x26] = 'd';
    pbVar25[-0x25] = 's';
    pbVar25[-0x24] = ' ';
    pbVar25[-0x33] = 'c';
    pbVar25[-0x32] = 'a';
    pbVar25[-0x31] = 'n';
    pbVar25[-0x30] = 'c';
    pbVar25[-0x2f] = 'e';
    pbVar25[-0x2e] = 'l';
    pbVar25[-0x2d] = 'l';
    pbVar25[-0x2c] = 'e';
    pbVar25[-0x1b] = 'd';
    pbVar25[-0x1a] = 'Y';
    pbVar25[-0x19] = 'i';
    pbVar25[-0x18] = 'e';
    pbVar25[-0x17] = 'l';
    pbVar25[-0x16] = 'd';
    pbVar25[-0x15] = 's';
    pbVar25[-0x14] = ' ';
    pbVar25[-0x23] = 's';
    pbVar25[-0x22] = 'u';
    pbVar25[-0x21] = 's';
    pbVar25[-0x20] = 'p';
    pbVar25[-0x1f] = 'e';
    pbVar25[-0x1e] = 'n';
    pbVar25[-0x1d] = 'd';
    pbVar25[-0x1c] = 'e';
    pbVar25[-0xb] = 0x20;
    pbVar25[-10] = 0;
    pbVar25[-0x13] = 'd';
    pbVar25[-0x12] = 'e';
    pbVar25[-0x11] = 'l';
    pbVar25[-0x10] = 'e';
    pbVar25[-0xf] = 'g';
    pbVar25[-0xe] = 'a';
    pbVar25[-0xd] = 't';
    pbVar25[-0xc] = 'e';
    local_a0 = PTR___type_metadata_for_Swift_Bool_100eac570;
    local_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
    uVar12 = 0xff;
    FUN_1005f5284(0xff,uVar21,lVar1,uVar19);
    uVar13 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    uVar11 = 0xff;
    local_f0 = (byte *)uVar19;
    local_90 = uVar13;
    FUN_1005f50a4(0xff,uVar21,lVar1,uVar19);
    uVar19 = 0xff;
    FUN_100678b68(0xff,uVar11);
    lVar8 = 0;
    local_88 = uVar19;
    _swift_getTupleTypeMetadata(0,0x10005,&local_a0,pbVar25 + -0x50,0);
    local_118 = *(code **)(lVar28 + 0x20);
    (*local_118)(local_e0,pbVar25 + *(int *)(lVar8 + 0x60),lVar1);
    pcVar5 = *(code **)(lVar23 + 8);
    local_f8 = (byte *)lVar28;
    _swift_bridgeObjectRetain(uVar17);
    (*pcVar5)();
    _swift_storeEnumTagMultiPayload();
    uVar13 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar13);
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66ac0,uVar12);
    (extension_Swift)::Swift::Collection::_firstIndex();
    _swift_bridgeObjectRelease(uVar17);
    pbVar9 = local_f8;
    uVar4 = local_100;
    uVar19 = uStack_108;
    puVar16 = local_110;
    if ((char)local_98 == '\x01') {
      (*pcVar5)();
      pbVar22 = local_e0;
      param_1 = local_e8;
      iVar7 = *(int *)(lVar8 + 0x60);
      *unaff_x20 = bVar2;
      if ((bVar2 == 0) || ((local_fc & 1) != 0)) {
        unaff_x20[1] = (byte)local_fc;
        *(undefined8 *)(unaff_x20 + 8) = uVar17;
        *(undefined8 *)(unaff_x20 + 0x10) = uVar19;
        *(undefined8 **)(unaff_x20 + 0x18) = puVar16;
        unaff_x20[0x20] = (byte)uVar4;
        (*local_118)(unaff_x20 + iVar7,local_e0,lVar1);
        _swift_storeEnumTagMultiPayload();
        uVar17 = 0;
        FUN_1005f539c(0,uVar21,lVar1,local_f0);
        uVar19 = 2;
      }
      else {
        unaff_x20[1] = 1;
        *(undefined8 *)(unaff_x20 + 8) = uVar17;
        *(undefined8 *)(unaff_x20 + 0x10) = uVar19;
        *(undefined8 **)(unaff_x20 + 0x18) = puVar16;
        unaff_x20[0x20] = (byte)uVar4;
        (**(code **)((long)pbVar9 + 0x10))(unaff_x20 + iVar7,local_e0,lVar1);
        _swift_storeEnumTagMultiPayload();
        (*local_118)(param_1,pbVar22,lVar1);
        uVar17 = 0;
        FUN_1005f539c(0,uVar21,lVar1,local_f0);
        uVar19 = 0;
      }
      goto LAB_1005ef744;
    }
    Swift::Array<undefined>::remove(&local_a0,local_a0,uVar13);
    (*pcVar5)();
    pbVar22 = local_e0;
    pbVar9 = local_f8;
    iVar7 = *(int *)(lVar8 + 0x60);
    *unaff_x20 = bVar2;
    unaff_x20[1] = (byte)local_fc;
    *(undefined8 *)(unaff_x20 + 8) = uVar17;
    *(undefined8 *)(unaff_x20 + 0x10) = uStack_108;
    *(undefined8 **)(unaff_x20 + 0x18) = local_110;
    unaff_x20[0x20] = (byte)local_100;
    (**(code **)((long)local_f8 + 0x10))(unaff_x20 + iVar7,local_e0,lVar1);
    _swift_storeEnumTagMultiPayload();
    CVar18 = Swift::CancellationError::typeMetadataAccessor();
    CVar15 = CVar18;
    FUN_1005f53a8();
    _swift_allocError(CVar18.unknown,CVar15.unknown,0,0);
    _swift_bridgeObjectRetain(uVar17);
    Swift::CancellationError::init();
    (**(code **)((long)pbVar9 + 8))(pbVar22,lVar1);
    _swift_bridgeObjectRelease(uVar17);
    param_1 = local_e8;
    *local_e8 = (long)CVar18.unknown;
    uVar17 = 0;
    FUN_1005f539c(0,uVar21,lVar1,local_f0);
  }
  else if (iVar7 == 2) {
    local_f0 = pbVar25;
    local_e8 = param_1;
    local_128 = (uint)*pbVar25;
    local_124 = (uint)pbVar25[1];
    local_110 = *(undefined8 **)(pbVar25 + 8);
    uStack_108 = *(undefined8 *)(pbVar25 + 0x10);
    local_fc = (uint)pbVar25[0x18];
    uVar17 = *(undefined8 *)(pbVar25 + 0x20);
    local_e0 = *(byte **)(pbVar25 + 0x28);
    bVar2 = pbVar25[0x30];
    pbVar25[-0x69] = 0x62;
    pbVar25[-0x68] = 0x6c;
    pbVar25[-0x67] = 0x65;
    pbVar25[-0x66] = 0x20;
    pbVar25[-0x70] = 'i';
    pbVar25[-0x6f] = 's';
    pbVar25[-0x6e] = 'W';
    pbVar25[-0x6d] = 'r';
    pbVar25[-0x6c] = 'i';
    pbVar25[-0x6b] = 't';
    pbVar25[-0x6a] = 'a';
    pbVar25[-0x69] = 'b';
    pbVar25[-0x55] = 0x6c;
    pbVar25[-0x54] = 0x20;
    pbVar25[-0x5d] = 't';
    pbVar25[-0x5c] = 'e';
    pbVar25[-0x5b] = 'O';
    pbVar25[-0x5a] = 'u';
    pbVar25[-0x59] = 't';
    pbVar25[-0x58] = 'c';
    pbVar25[-0x57] = 'a';
    pbVar25[-0x56] = 'l';
    pbVar25[-0x65] = 'i';
    pbVar25[-100] = 'n';
    pbVar25[-99] = 'D';
    pbVar25[-0x62] = 'e';
    pbVar25[-0x61] = 'l';
    pbVar25[-0x60] = 'e';
    pbVar25[-0x5f] = 'g';
    pbVar25[-0x5e] = 'a';
    pbVar25[-0x4b] = 'd';
    pbVar25[-0x4a] = 'Y';
    pbVar25[-0x49] = 'i';
    pbVar25[-0x48] = 'e';
    pbVar25[-0x47] = 'l';
    pbVar25[-0x46] = 'd';
    pbVar25[-0x45] = 's';
    pbVar25[-0x44] = ' ';
    pbVar25[-0x53] = 's';
    pbVar25[-0x52] = 'u';
    pbVar25[-0x51] = 's';
    pbVar25[-0x50] = 'p';
    pbVar25[-0x4f] = 'e';
    pbVar25[-0x4e] = 'n';
    pbVar25[-0x4d] = 'd';
    pbVar25[-0x4c] = 'e';
    pbVar25[-0x3b] = 'd';
    pbVar25[-0x3a] = 'Y';
    pbVar25[-0x39] = 'i';
    pbVar25[-0x38] = 'e';
    pbVar25[-0x37] = 'l';
    pbVar25[-0x36] = 'd';
    pbVar25[-0x35] = 's';
    pbVar25[-0x34] = ' ';
    pbVar25[-0x43] = 'c';
    pbVar25[-0x42] = 'a';
    pbVar25[-0x41] = 'n';
    pbVar25[-0x40] = 'c';
    pbVar25[-0x3f] = 'e';
    pbVar25[-0x3e] = 'l';
    pbVar25[-0x3d] = 'l';
    pbVar25[-0x3c] = 'e';
    pbVar25[-0x23] = 0x20;
    pbVar25[-0x2b] = 'Y';
    pbVar25[-0x2a] = 'i';
    pbVar25[-0x29] = 'e';
    pbVar25[-0x28] = 'l';
    pbVar25[-0x27] = 'd';
    pbVar25[-0x26] = 'I';
    pbVar25[-0x25] = 'D';
    pbVar25[-0x24] = 's';
    pbVar25[-0x33] = 'b';
    pbVar25[-0x32] = 'u';
    pbVar25[-0x31] = 'f';
    pbVar25[-0x30] = 'f';
    pbVar25[-0x2f] = 'e';
    pbVar25[-0x2e] = 'r';
    pbVar25[-0x2d] = 'e';
    pbVar25[-0x2c] = 'd';
    pbVar25[-0x1a] = 0x20;
    pbVar25[-0x22] = 'd';
    pbVar25[-0x21] = 'e';
    pbVar25[-0x20] = 'l';
    pbVar25[-0x1f] = 'e';
    pbVar25[-0x1e] = 'g';
    pbVar25[-0x1d] = 'a';
    pbVar25[-0x1c] = 't';
    pbVar25[-0x1b] = 'e';
    pbVar25[-0x19] = 0x65;
    pbVar25[-0x18] = 0x72;
    pbVar25[-0x17] = 0x72;
    pbVar25[-0x16] = 0x6f;
    pbVar25[-0x15] = 0x72;
    pbVar25[-0x14] = 0x20;
    pbVar25[-0x13] = 0;
    local_a0 = PTR___type_metadata_for_Swift_Bool_100eac570;
    local_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
    uVar12 = 0xff;
    FUN_1005f50a4(0xff,uVar21,lVar1,uVar19);
    uVar13 = 0xff;
    FUN_100678b68(0xff,uVar12);
    uVar12 = 0xff;
    local_90 = uVar13;
    FUN_1005f5284(0xff,uVar21,lVar1,uVar19);
    uVar13 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    lVar8 = 0xff;
    local_88 = uVar13;
    FUN_100678b68(0xff,uVar12);
    puVar14 = &DAT_100fd5b10;
    local_80 = lVar8;
    lStack_78 = lVar1;
    FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
    lVar8 = 0;
    local_70 = puVar14;
    _swift_getTupleTypeMetadata(0,0x10007,&local_a0,pbVar25 + -0x70,0);
    local_130 = lVar8;
    local_118 = *(code **)(pbVar25 + *(int *)(lVar8 + 0x80));
    local_138 = *(code **)(lVar28 + 0x20);
    local_120 = uVar17;
    (*local_138)(pbVar22,pbVar25 + *(int *)(lVar8 + 0x70),lVar1);
    pbVar25 = local_e0;
    local_a0 = local_e0;
    local_100 = (uint)bVar2;
    local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar2);
    uVar13 = 0;
    local_f8 = (byte *)lVar28;
    FUN_100678b68(0,uVar12);
    _swift_getWitnessTable(0x100c6d278,uVar13);
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66ac0,uVar12);
    local_f0 = (byte *)uVar19;
    bVar6 = (extension_Swift)::Swift::Sequence::_contains();
    pbVar9 = local_f8;
    if (bVar6) {
      pcVar5 = *(code **)(lVar23 + 8);
      (*pcVar5)();
      _swift_storeEnumTagMultiPayload();
      uVar19 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar19)
      ;
      (extension_Swift)::Swift::Collection::_firstIndex();
      param_1 = local_e8;
      if ((char)local_98 == '\x01') {
        (*pcVar5)();
        pbVar25 = local_f0;
        iVar7 = *(int *)(local_130 + 0x70);
        iVar3 = *(int *)(local_130 + 0x80);
        *unaff_x20 = (byte)local_128;
        if ((local_128 == 0) || ((local_124 & 1) != 0)) {
          unaff_x20[1] = (byte)local_124;
          *(undefined8 **)(unaff_x20 + 8) = local_110;
          *(undefined8 *)(unaff_x20 + 0x10) = uStack_108;
          unaff_x20[0x18] = (byte)local_fc;
          *(undefined8 *)(unaff_x20 + 0x20) = local_120;
          *(byte **)(unaff_x20 + 0x28) = local_e0;
          unaff_x20[0x30] = (byte)local_100;
          (*local_138)(unaff_x20 + iVar7,pbVar22,lVar1);
          *(code **)(unaff_x20 + iVar3) = local_118;
          _swift_storeEnumTagMultiPayload();
          uVar17 = 0;
          FUN_1005f539c(0,uVar21,lVar1,pbVar25);
          uVar19 = 2;
        }
        else {
          unaff_x20[1] = 1;
          *(undefined8 **)(unaff_x20 + 8) = local_110;
          *(undefined8 *)(unaff_x20 + 0x10) = uStack_108;
          unaff_x20[0x18] = (byte)local_fc;
          *(undefined8 *)(unaff_x20 + 0x20) = local_120;
          *(byte **)(unaff_x20 + 0x28) = local_e0;
          unaff_x20[0x30] = (byte)local_100;
          (**(code **)((long)pbVar9 + 0x10))(unaff_x20 + iVar7,pbVar22,lVar1);
          *(code **)(unaff_x20 + iVar3) = local_118;
          _swift_storeEnumTagMultiPayload();
          (*local_138)(param_1,pbVar22,lVar1);
          uVar17 = 0;
          FUN_1005f539c(0,uVar21,lVar1,pbVar25);
          uVar19 = 0;
        }
        goto LAB_1005ef744;
      }
      Swift::Array<undefined>::remove(&local_a0,local_a0,uVar19);
      (*pcVar5)();
      iVar7 = *(int *)(local_130 + 0x70);
      iVar3 = *(int *)(local_130 + 0x80);
      *unaff_x20 = (byte)local_128;
      unaff_x20[1] = (byte)local_124;
      *(undefined8 **)(unaff_x20 + 8) = local_110;
      *(undefined8 *)(unaff_x20 + 0x10) = uStack_108;
      unaff_x20[0x18] = (byte)local_fc;
      *(undefined8 *)(unaff_x20 + 0x20) = uVar17;
      *(byte **)(unaff_x20 + 0x28) = local_e0;
      unaff_x20[0x30] = (byte)local_100;
      (**(code **)((long)pbVar9 + 0x10))(unaff_x20 + iVar7,pbVar22,lVar1);
      *(code **)(unaff_x20 + iVar3) = local_118;
      _swift_storeEnumTagMultiPayload();
      CVar18 = Swift::CancellationError::typeMetadataAccessor();
      CVar15 = CVar18;
      FUN_1005f53a8();
      _swift_allocError(CVar18.unknown,CVar15.unknown,0,0);
      _swift_bridgeObjectRetain(uVar17);
      Swift::CancellationError::init();
      (**(code **)((long)pbVar9 + 8))(pbVar22,lVar1);
      _swift_bridgeObjectRelease(uVar17);
      *param_1 = (long)CVar18.unknown;
      uVar17 = 0;
      FUN_1005f539c(0,uVar21,lVar1,local_f0);
    }
    else {
      FUN_1005e46ac(pbVar25,local_100);
      puVar16 = local_110;
      FUN_10000cae0(local_110,uStack_108,local_fc);
      FUN_1005f535c();
      puVar14 = &DAT_100ee94c0;
      _swift_allocError(&DAT_100ee94c0,puVar16,0,0);
      *puVar16 = 0xd00000000000001c;
      puVar16[1] = 0x8000000100dae8b0;
      puVar16[2] = 0x4bb;
      _swift_errorRelease(local_118);
      (**(code **)((long)local_f8 + 8))(pbVar22,lVar1);
      _swift_bridgeObjectRelease(local_120);
      param_1 = local_e8;
      *local_e8 = (long)puVar14;
      uVar17 = 0;
      FUN_1005f539c(0,uVar21,lVar1,local_f0);
    }
  }
  else {
    if (iVar7 != 3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1005ef94c);
      (*pcVar5)();
    }
    if (*(long *)pbVar25 == 0) {
      FUN_1005f535c();
      puVar14 = &DAT_100ee94c0;
      _swift_allocError(&DAT_100ee94c0,pbVar9,0,0);
      *param_1 = (long)puVar14;
      pbVar9[0] = 0x1c;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0xd0;
      pbVar9[8] = 0xb0;
      pbVar9[9] = 0xe8;
      pbVar9[10] = 0xda;
      pbVar9[0xb] = 0;
      pbVar9[0xc] = 1;
      pbVar9[0xd] = 0;
      pbVar9[0xe] = 0;
      pbVar9[0xf] = 0x80;
      pbVar9[0x10] = 0xc0;
      pbVar9[0x11] = 4;
      pbVar9[0x12] = 0;
      pbVar9[0x13] = 0;
      pbVar9[0x14] = 0;
      pbVar9[0x15] = 0;
      pbVar9[0x16] = 0;
      pbVar9[0x17] = 0;
    }
    else {
      *param_1 = *(long *)pbVar25;
    }
    uVar17 = 0;
    FUN_1005f539c(0,uVar21,lVar1,uVar19);
  }
  uVar19 = 1;
LAB_1005ef744:
  _swift_storeEnumTagMultiPayload(param_1,uVar17,uVar19);
  return;
}



/* Address: 0x1005ef94c | FUN_1005ef94c */

void FUN_1005ef94c(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  Optional OVar4;
  ulong uVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_f0 [4];
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  long lStack_78;
  long local_70;
  
  local_f0[3] = *(long *)(param_3 + -8);
  lVar14 = (long)local_f0 - (*(long *)(local_f0[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0xff;
  local_f0[1] = lVar14;
  local_c0 = param_1;
  FUN_1005f53ec();
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_b8 = CONCAT71(extraout_var,OVar4.value);
  local_f0[0] = *(long *)(local_b8 - 8);
  lVar14 = lVar14 - (*(long *)(local_f0[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(uVar5 - 8);
  uVar12 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d0 = (undefined8 *)(lVar14 - uVar12);
  lVar15 = (long)local_d0 - uVar12;
  uVar6 = 0;
  FUN_1005f5070(0,param_2,param_3,param_4);
  local_f0[2] = lVar15;
  local_c8 = uVar6;
  do {
    local_80 = param_2;
    lStack_78 = param_3;
    local_70 = param_4;
    FUN_10066ed6c(lVar14,FUN_1005f53f8,&local_90,local_c0,local_c8,local_b8);
    lVar7 = lVar14;
    (**(code **)(lVar16 + 0x30))(lVar14,1,uVar5);
    if ((int)lVar7 == 1) {
      pcVar13 = *(code **)(local_f0[0] + 8);
      uVar5 = local_b8;
LAB_1005efc6c:
      (*pcVar13)(lVar14,uVar5);
      return;
    }
    (**(code **)(lVar16 + 0x20))(lVar15,lVar14,uVar5);
    puVar3 = local_d0;
    (**(code **)(lVar16 + 0x10))(local_d0,lVar15,uVar5);
    puVar8 = puVar3;
    _swift_getEnumCaseMultiPayload(puVar3,uVar5);
    if ((int)puVar8 != 1) {
      uVar6 = *puVar3;
      lVar14 = puVar3[1];
      uVar1 = *(undefined1 *)(puVar3 + 2);
      uVar10 = 0xff;
      local_b0 = uVar6;
      local_a8 = lVar14;
      local_a0 = uVar1;
      FUN_1005f50a4(0xff,param_2,param_3,param_4);
      local_b8 = param_2;
      FUN_100678b68(0,uVar10);
      FUN_1006754a0(&local_90);
      FUN_10000cae0(uVar6,lVar14,uVar1);
      uVar6 = 0;
      FUN_100677810(0,uVar10);
      FUN_1006755cc(&local_b0);
      lVar14 = local_a8;
      if (local_a8 != 0) {
        uVar10 = 0;
        FUN_1005f50b0(0,local_b8,param_3,param_4);
        puVar9 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        do {
          local_b0 = CONCAT71(local_b0._1_7_,1);
          puVar11 = &DAT_100fd4f20;
          FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
          FUN_1005ec10c(&local_b0,lVar14,uVar10,puVar11,puVar9);
          FUN_1006755cc(&local_b0,uVar6);
          lVar14 = local_a8;
        } while (local_a8 != 0);
      }
      FUN_10000cae0(local_90,uStack_88,local_80 & 0xff);
      pcVar13 = *(code **)(lVar16 + 8);
      lVar14 = lVar15;
      goto LAB_1005efc6c;
    }
    puVar9 = &DAT_100fd5b10;
    FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
    lVar15 = 0;
    _swift_getTupleTypeMetadata2(0,param_3,puVar9,0,0);
    lVar2 = local_f0[3];
    lVar7 = local_f0[1];
    uVar6 = *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar15 + 0x30));
    (**(code **)(local_f0[3] + 0x20))(local_f0[1],puVar3,param_3);
    (**(code **)(param_4 + 0x20))(uVar6,param_3,param_4);
    lVar15 = local_f0[2];
    _swift_errorRelease(uVar6);
    (**(code **)(lVar2 + 8))(lVar7,param_3);
    (**(code **)(lVar16 + 8))(lVar15,uVar5);
  } while( true );
}



/* Address: 0x1005efc90 | FUN_1005efc90 */

void FUN_1005efc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  )

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  code *pcVar21;
  ulong *puVar22;
  ulong local_110 [5];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  ulong local_b0 [2];
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_e0 = param_9;
  local_110[4] = *(long *)(param_6 + -8);
  lVar18 = (long)local_110 - (*(long *)(local_110[4] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  local_110[0] = param_4;
  local_110[3] = lVar18;
  local_d8 = param_7;
  local_d0 = param_2;
  local_c0 = param_3;
  FUN_1005f539c(0xff,param_5,param_6,param_8);
  puVar17 = &DAT_100fd6588;
  FUN_1000f8b08(&DAT_100fd6588,&DAT_100c66fd0);
  lVar6 = 0;
  _swift_getTupleTypeMetadata2(0,lVar5,puVar17,0,0);
  uVar15 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = lVar18 - uVar15;
  lVar16 = lVar18 - uVar15;
  lVar20 = *(long *)(lVar5 + -8);
  uVar15 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar22 = (ulong *)(lVar16 - uVar15);
  local_c8 = (long)puVar22 - uVar15;
  local_90 = local_d8;
  local_80 = local_e0;
  uStack_78 = local_c0;
  uVar7 = 0;
  local_110[1] = param_5;
  local_110[2] = param_8;
  local_e8 = param_1;
  local_a0 = param_5;
  lStack_98 = param_6;
  lStack_88 = param_8;
  local_70 = param_1;
  FUN_1005f5070(0,param_5,param_6,param_8);
  uVar8 = 0xff;
  FUN_1005f7110(0xff);
  uVar9 = 0;
  _swift_getTupleTypeMetadata2(0,lVar5,uVar8,0,0);
  FUN_10066ed6c(lVar16,FUN_1005fb600,local_b0,local_d0,uVar7,uVar9);
  plVar1 = (long *)(lVar16 + *(int *)(lVar6 + 0x30));
  pcVar21 = *(code **)(lVar20 + 0x20);
  local_c0 = lVar20;
  (*pcVar21)(lVar18,lVar16,lVar5);
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    pcVar19 = (code *)0x0;
    puVar17 = (undefined *)0x0;
  }
  else {
    lVar16 = plVar1[1];
    puVar17 = &DAT_100ee9d38;
    _swift_allocObject(&DAT_100ee9d38,0x20,7);
    *(long *)(puVar17 + 0x10) = lVar6;
    *(long *)(puVar17 + 0x18) = lVar16;
    pcVar19 = thunk_FUN_100209b34;
  }
  lVar16 = local_c8;
  (*pcVar21)(local_c8,lVar18,lVar5);
  (**(code **)(local_c0 + 0x10))(puVar22,lVar16,lVar5);
  puVar10 = puVar22;
  _swift_getEnumCaseMultiPayload(puVar22,lVar5);
  uVar4 = local_110[4];
  uVar15 = local_110[3];
  if ((int)puVar10 == 0) {
    (**(code **)(local_110[4] + 0x20))(local_110[3],puVar22,param_6);
    uVar2 = local_110[1];
    uVar12 = local_110[0];
    FUN_100603db0(local_110[0],local_110[1],local_d8,local_e0);
    uVar3 = local_110[2];
    (**(code **)(local_110[2] + 0x10))();
    _swift_release(uVar12);
    FUN_1005ef94c(local_d0,uVar2,param_6,uVar3);
    local_b0[0] = local_b0[0] & 0xffffffffffffff00;
    uVar7 = 0;
    FUN_1005f50b0(0,uVar2,param_6,uVar3);
    puVar13 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    FUN_1005ec10c(local_b0,local_e8,uVar7,puVar13,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    FUN_100004550(pcVar19,puVar17);
    (**(code **)(uVar4 + 8))(uVar15,param_6);
  }
  else {
    if ((int)puVar10 == 1) {
      local_b0[0] = *puVar22;
      puVar13 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      puVar11 = puVar13;
      puVar14 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      (**(code **)(*(long *)(puVar13 + -8) + 0x20))(puVar14,local_b0,puVar13);
      _swift_continuation_throwingResumeWithError(local_e8,puVar11);
    }
    else {
      if (lVar6 == 0) goto LAB_1005f000c;
      _swift_retain(puVar17);
      (*pcVar19)();
      FUN_100004550(pcVar19,puVar17);
    }
    FUN_100004550(pcVar19,puVar17);
  }
LAB_1005f000c:
  (**(code **)(local_c0 + 8))(local_c8,lVar5);
  return;
}



/* Address: 0x1005f003c | FUN_1005f003c */

void FUN_1005f003c(long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  CancellationError CVar6;
  CancellationError CVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *apuStack_b0 [2];
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar3 = 0xff;
  local_80 = param_4;
  local_78 = param_3;
  local_68 = param_1;
  FUN_1005f539c(0xff,param_5,param_6,param_8);
  puVar8 = &DAT_100fd6588;
  FUN_1000f8b08(&DAT_100fd6588,&DAT_100c66fd0);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,lVar3,puVar8,0,0);
  uVar2 = local_78;
  uVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a0 = (long)apuStack_b0 - uVar9;
  lVar15 = local_a0 - uVar9;
  lVar14 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  apuStack_b0[1] = (undefined8 *)(lVar15 - uVar9);
  lVar13 = (long)apuStack_b0[1] - uVar9;
  lVar11 = lVar13 - uVar9;
  uVar5 = 0;
  local_98 = param_5;
  local_90 = param_6;
  local_88 = param_8;
  local_70 = lVar4;
  FUN_1005f524c(0,param_5,param_6,param_8);
  FUN_1005eec50(lVar11,uVar2,uVar5);
  (**(code **)(lVar14 + 0x10))(lVar13,lVar11,lVar3);
  lVar4 = lVar13;
  _swift_getEnumCaseMultiPayload(lVar13,lVar3);
  if ((uint)lVar4 < 2) {
    (**(code **)(lVar14 + 8))(lVar13,lVar3);
    pcVar12 = *(code **)(lVar14 + 0x20);
    (*pcVar12)(lVar15,lVar11,lVar3);
    lVar4 = local_68;
    (*pcVar12)(local_68,lVar15,lVar3);
    puVar10 = (undefined8 *)(lVar4 + *(int *)(local_70 + 0x30));
  }
  else {
    uVar9 = local_80;
    FUN_1005f0330(local_80,uVar2,uVar5);
    if ((uVar9 & 1) != 0) {
      lVar4 = 0;
      FUN_1005f5070(0,local_98,local_90,local_88);
      lVar15 = local_a0;
      plVar1 = (long *)(param_2 + *(int *)(lVar4 + 0x2c));
      lVar4 = *plVar1;
      lVar13 = plVar1[1];
      pcVar12 = *(code **)(lVar14 + 0x20);
      (*pcVar12)(local_a0,lVar11,lVar3);
      lVar11 = local_68;
      (*pcVar12)(local_68,lVar15,lVar3);
      if (lVar4 == 0) {
        pcVar12 = (code *)0x0;
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = &DAT_100ee9d60;
        _swift_allocObject(&DAT_100ee9d60,0x20,7);
        *(long *)(puVar8 + 0x10) = lVar4;
        *(long *)(puVar8 + 0x18) = lVar13;
        pcVar12 = thunk_FUN_100209b34;
      }
      puVar10 = (undefined8 *)(lVar11 + *(int *)(local_70 + 0x30));
      *puVar10 = pcVar12;
      puVar10[1] = puVar8;
      FUN_100011128(lVar4,lVar13);
      return;
    }
    CVar6 = Swift::CancellationError::typeMetadataAccessor();
    CVar7 = CVar6;
    FUN_1005f53a8();
    _swift_allocError(CVar6.unknown,CVar7.unknown,0,0);
    Swift::CancellationError::init();
    (**(code **)(lVar14 + 8))(lVar11,lVar3);
    puVar10 = apuStack_b0[1];
    *apuStack_b0[1] = CVar6.unknown;
    _swift_storeEnumTagMultiPayload(puVar10,lVar3,1);
    pcVar12 = *(code **)(lVar14 + 0x20);
    (*pcVar12)(lVar15,puVar10,lVar3);
    lVar4 = local_68;
    (*pcVar12)(local_68,lVar15,lVar3);
    puVar10 = (undefined8 *)(lVar4 + *(int *)(local_70 + 0x30));
  }
  *puVar10 = 0;
  puVar10[1] = 0;
  return;
}



/* Address: 0x1005f0330 | FUN_1005f0330 */

undefined8 FUN_1005f0330(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 *unaff_x20;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  code *pcVar15;
  undefined8 uVar16;
  byte abStack_1b0 [7];
  byte abStack_1a9 [4];
  byte abStack_1a5 [8];
  byte abStack_19d [8];
  byte abStack_195 [10];
  byte abStack_18b [6];
  byte abStack_185 [8];
  byte abStack_17d [8];
  byte abStack_175 [10];
  byte abStack_16b [8];
  byte abStack_163 [8];
  byte abStack_15b [6];
  byte abStack_155 [10];
  byte abStack_14b [11];
  byte abStack_140 [8];
  undefined8 local_138;
  undefined *local_130;
  code *local_128;
  byte *local_120;
  byte *local_118;
  byte abStack_110 [4];
  uint local_10c;
  undefined8 local_108;
  long local_100;
  long local_f8;
  code *local_f0;
  byte *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  code *pcStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  lVar13 = *(long *)(param_3 + 0x18);
  local_d0 = *(code **)(lVar13 + -8);
  uVar11 = *(long *)((long)local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  pbVar14 = abStack_140 + -uVar11;
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  lVar4 = 0;
  local_e0 = param_1;
  FUN_1005f5278(0,uVar8,lVar13,uVar16);
  pcVar15 = *(code **)(lVar4 + -8);
  pbVar12 = pbVar14 + -uVar11 + -(*(long *)((long)pcVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)((long)pcVar15 + 0x10))(pbVar12);
  pbVar5 = pbVar12;
  _swift_getEnumCaseMultiPayload(pbVar12,lVar4);
  iVar3 = (int)pbVar5;
  local_d8 = param_2;
  if (iVar3 < 2) {
    local_100 = lVar4;
    local_f8 = (long)pcVar15;
    local_e8 = pbVar14 + -uVar11;
    if (iVar3 != 1) {
      lVar4 = 0;
      _swift_getTupleTypeMetadata2
                (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar13,"isWritable delegate ",0);
      pbVar12 = pbVar12 + *(int *)(lVar4 + 0x30);
      pcVar15 = local_d0;
      goto LAB_1005f0b00;
    }
    local_118 = pbVar12;
    local_10c = (uint)*pbVar12;
    local_108 = CONCAT44(local_108._4_4_,(uint)pbVar12[1]);
    uVar1 = *(undefined8 *)(pbVar12 + 8);
    puVar9 = *(undefined **)(pbVar12 + 0x10);
    pcVar15 = *(code **)(pbVar12 + 0x18);
    local_f0 = (code *)CONCAT44(local_f0._4_4_,(uint)pbVar12[0x20]);
    pbVar12[-0x49] = 0x62;
    pbVar12[-0x48] = 0x6c;
    pbVar12[-0x47] = 0x65;
    pbVar12[-0x46] = 0x20;
    pbVar12[-0x50] = 'i';
    pbVar12[-0x4f] = 's';
    pbVar12[-0x4e] = 'W';
    pbVar12[-0x4d] = 'r';
    pbVar12[-0x4c] = 'i';
    pbVar12[-0x4b] = 't';
    pbVar12[-0x4a] = 'a';
    pbVar12[-0x49] = 'b';
    pbVar12[-0x35] = 0x6c;
    pbVar12[-0x34] = 0x20;
    pbVar12[-0x3d] = 't';
    pbVar12[-0x3c] = 'e';
    pbVar12[-0x3b] = 'O';
    pbVar12[-0x3a] = 'u';
    pbVar12[-0x39] = 't';
    pbVar12[-0x38] = 'c';
    pbVar12[-0x37] = 'a';
    pbVar12[-0x36] = 'l';
    pbVar12[-0x45] = 'i';
    pbVar12[-0x44] = 'n';
    pbVar12[-0x43] = 'D';
    pbVar12[-0x42] = 'e';
    pbVar12[-0x41] = 'l';
    pbVar12[-0x40] = 'e';
    pbVar12[-0x3f] = 'g';
    pbVar12[-0x3e] = 'a';
    pbVar12[-0x2b] = 'd';
    pbVar12[-0x2a] = 'Y';
    pbVar12[-0x29] = 'i';
    pbVar12[-0x28] = 'e';
    pbVar12[-0x27] = 'l';
    pbVar12[-0x26] = 'd';
    pbVar12[-0x25] = 's';
    pbVar12[-0x24] = ' ';
    pbVar12[-0x33] = 'c';
    pbVar12[-0x32] = 'a';
    pbVar12[-0x31] = 'n';
    pbVar12[-0x30] = 'c';
    pbVar12[-0x2f] = 'e';
    pbVar12[-0x2e] = 'l';
    pbVar12[-0x2d] = 'l';
    pbVar12[-0x2c] = 'e';
    pbVar12[-0x1b] = 'd';
    pbVar12[-0x1a] = 'Y';
    pbVar12[-0x19] = 'i';
    pbVar12[-0x18] = 'e';
    pbVar12[-0x17] = 'l';
    pbVar12[-0x16] = 'd';
    pbVar12[-0x15] = 's';
    pbVar12[-0x14] = ' ';
    pbVar12[-0x23] = 's';
    pbVar12[-0x22] = 'u';
    pbVar12[-0x21] = 's';
    pbVar12[-0x20] = 'p';
    pbVar12[-0x1f] = 'e';
    pbVar12[-0x1e] = 'n';
    pbVar12[-0x1d] = 'd';
    pbVar12[-0x1c] = 'e';
    pbVar12[-0xb] = 0x20;
    pbVar12[-10] = 0;
    pbVar12[-0x13] = 'd';
    pbVar12[-0x12] = 'e';
    pbVar12[-0x11] = 'l';
    pbVar12[-0x10] = 'e';
    pbVar12[-0xf] = 'g';
    pbVar12[-0xe] = 'a';
    pbVar12[-0xd] = 't';
    pbVar12[-0xc] = 'e';
    local_a0 = PTR___type_metadata_for_Swift_Bool_100eac570;
    pcStack_98 = (code *)PTR___type_metadata_for_Swift_Bool_100eac570;
    uVar6 = 0xff;
    FUN_1005f5284(0xff,uVar8,lVar13,uVar16);
    uVar7 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    puVar10 = (undefined *)0xff;
    local_90 = uVar7;
    FUN_1005f50a4(0xff,uVar8,lVar13,uVar16);
    uVar8 = 0xff;
    local_130 = puVar10;
    FUN_100678b68();
    lVar4 = 0;
    local_88 = uVar8;
    local_80 = lVar13;
    _swift_getTupleTypeMetadata(0,0x10005,&local_a0,pbVar12 + -0x50,0);
    local_90 = CONCAT71(local_90._1_7_,(char)local_f0);
    local_d0 = *(code **)((long)local_d0 + 0x20);
    local_128 = pcVar15;
    local_120 = puVar9;
    local_118 = (byte *)lVar4;
    local_a8 = uVar1;
    local_a0 = puVar9;
    pcStack_98 = pcVar15;
    (*local_d0)(local_e8,pbVar12 + *(int *)(lVar4 + 0x60),lVar13);
    pcVar15 = *(code **)(local_f8 + 8);
    _swift_bridgeObjectRetain(uVar1);
    (*pcVar15)();
    _swift_storeEnumTagMultiPayload();
    uVar8 = local_d8;
    local_b8 = local_d8;
    uVar16 = 0;
    uStack_b0 = uVar1;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar16);
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66ac0,uVar6);
    (extension_Swift)::Swift::Collection::_firstIndex();
    _swift_bridgeObjectRelease(uVar1);
    if ((char)local_c0 != '\x01') {
      Swift::Array<undefined>::remove(&local_c8,local_c8,uVar16);
      (*pcVar15)();
      iVar3 = *(int *)((long)local_118 + 0x60);
      *unaff_x20 = (char)local_10c;
      unaff_x20[1] = (char)local_108;
      *(undefined8 *)(unaff_x20 + 8) = local_a8;
      *(byte **)(unaff_x20 + 0x10) = local_120;
      *(code **)(unaff_x20 + 0x18) = local_128;
      unaff_x20[0x20] = (char)local_f0;
      (*local_d0)(unaff_x20 + iVar3,local_e8,lVar13);
      goto LAB_1005f0a9c;
    }
    local_c8 = uVar8;
    local_c0 = local_e0;
    uVar8 = 0;
    FUN_100678b68(0,local_130);
    FUN_100676878(&local_c8,uVar8);
    (*pcVar15)();
    iVar3 = *(int *)((long)local_118 + 0x60);
    *unaff_x20 = (char)local_10c;
    unaff_x20[1] = (char)local_108;
    *(undefined8 *)(unaff_x20 + 8) = uVar1;
    *(code **)(unaff_x20 + 0x18) = pcStack_98;
    *(undefined **)(unaff_x20 + 0x10) = local_a0;
    unaff_x20[0x20] = (undefined1)local_90;
    (*local_d0)(unaff_x20 + iVar3,local_e8,lVar13);
  }
  else {
    local_e8 = pbVar14;
    if (iVar3 != 2) {
      lVar13 = lVar4;
      if (iVar3 != 3) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1005f0ad0);
        (*pcVar15)();
      }
LAB_1005f0b00:
      (**(code **)((long)pcVar15 + 8))(pbVar12,lVar13);
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1005f0b14);
      (*pcVar15)();
    }
    local_120 = pbVar12;
    local_118 = (byte *)CONCAT44(local_118._4_4_,(uint)*pbVar12);
    local_10c = (uint)pbVar12[1];
    puVar10 = *(undefined **)(pbVar12 + 8);
    local_f0 = *(code **)(pbVar12 + 0x10);
    local_f8 = CONCAT44(local_f8._4_4_,(uint)pbVar12[0x18]);
    uVar1 = *(undefined8 *)(pbVar12 + 0x20);
    local_108 = *(undefined8 *)(pbVar12 + 0x28);
    local_100 = CONCAT44(local_100._4_4_,(uint)pbVar12[0x30]);
    pbVar12[-0x69] = 0x62;
    pbVar12[-0x68] = 0x6c;
    pbVar12[-0x67] = 0x65;
    pbVar12[-0x66] = 0x20;
    pbVar12[-0x70] = 'i';
    pbVar12[-0x6f] = 's';
    pbVar12[-0x6e] = 'W';
    pbVar12[-0x6d] = 'r';
    pbVar12[-0x6c] = 'i';
    pbVar12[-0x6b] = 't';
    pbVar12[-0x6a] = 'a';
    pbVar12[-0x69] = 'b';
    pbVar12[-0x55] = 0x6c;
    pbVar12[-0x54] = 0x20;
    pbVar12[-0x5d] = 't';
    pbVar12[-0x5c] = 'e';
    pbVar12[-0x5b] = 'O';
    pbVar12[-0x5a] = 'u';
    pbVar12[-0x59] = 't';
    pbVar12[-0x58] = 'c';
    pbVar12[-0x57] = 'a';
    pbVar12[-0x56] = 'l';
    pbVar12[-0x65] = 'i';
    pbVar12[-100] = 'n';
    pbVar12[-99] = 'D';
    pbVar12[-0x62] = 'e';
    pbVar12[-0x61] = 'l';
    pbVar12[-0x60] = 'e';
    pbVar12[-0x5f] = 'g';
    pbVar12[-0x5e] = 'a';
    pbVar12[-0x4b] = 'd';
    pbVar12[-0x4a] = 'Y';
    pbVar12[-0x49] = 'i';
    pbVar12[-0x48] = 'e';
    pbVar12[-0x47] = 'l';
    pbVar12[-0x46] = 'd';
    pbVar12[-0x45] = 's';
    pbVar12[-0x44] = ' ';
    pbVar12[-0x53] = 's';
    pbVar12[-0x52] = 'u';
    pbVar12[-0x51] = 's';
    pbVar12[-0x50] = 'p';
    pbVar12[-0x4f] = 'e';
    pbVar12[-0x4e] = 'n';
    pbVar12[-0x4d] = 'd';
    pbVar12[-0x4c] = 'e';
    pbVar12[-0x3b] = 'd';
    pbVar12[-0x3a] = 'Y';
    pbVar12[-0x39] = 'i';
    pbVar12[-0x38] = 'e';
    pbVar12[-0x37] = 'l';
    pbVar12[-0x36] = 'd';
    pbVar12[-0x35] = 's';
    pbVar12[-0x34] = ' ';
    pbVar12[-0x43] = 'c';
    pbVar12[-0x42] = 'a';
    pbVar12[-0x41] = 'n';
    pbVar12[-0x40] = 'c';
    pbVar12[-0x3f] = 'e';
    pbVar12[-0x3e] = 'l';
    pbVar12[-0x3d] = 'l';
    pbVar12[-0x3c] = 'e';
    pbVar12[-0x23] = 0x20;
    pbVar12[-0x2b] = 'Y';
    pbVar12[-0x2a] = 'i';
    pbVar12[-0x29] = 'e';
    pbVar12[-0x28] = 'l';
    pbVar12[-0x27] = 'd';
    pbVar12[-0x26] = 'I';
    pbVar12[-0x25] = 'D';
    pbVar12[-0x24] = 's';
    pbVar12[-0x33] = 'b';
    pbVar12[-0x32] = 'u';
    pbVar12[-0x31] = 'f';
    pbVar12[-0x30] = 'f';
    pbVar12[-0x2f] = 'e';
    pbVar12[-0x2e] = 'r';
    pbVar12[-0x2d] = 'e';
    pbVar12[-0x2c] = 'd';
    pbVar12[-0x1a] = 0x20;
    pbVar12[-0x22] = 'd';
    pbVar12[-0x21] = 'e';
    pbVar12[-0x20] = 'l';
    pbVar12[-0x1f] = 'e';
    pbVar12[-0x1e] = 'g';
    pbVar12[-0x1d] = 'a';
    pbVar12[-0x1c] = 't';
    pbVar12[-0x1b] = 'e';
    pbVar12[-0x19] = 0x65;
    pbVar12[-0x18] = 0x72;
    pbVar12[-0x17] = 0x72;
    pbVar12[-0x16] = 0x6f;
    pbVar12[-0x15] = 0x72;
    pbVar12[-0x14] = 0x20;
    pbVar12[-0x13] = 0;
    local_a0 = PTR___type_metadata_for_Swift_Bool_100eac570;
    pcStack_98 = (code *)PTR___type_metadata_for_Swift_Bool_100eac570;
    uVar6 = 0xff;
    FUN_1005f50a4(0xff,uVar8,lVar13,uVar16);
    uVar7 = 0xff;
    local_138 = uVar6;
    FUN_100678b68();
    uVar6 = 0xff;
    local_90 = uVar7;
    FUN_1005f5284(0xff,uVar8,lVar13,uVar16);
    uVar8 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    lVar4 = 0xff;
    local_88 = uVar8;
    FUN_100678b68(0xff,uVar6);
    puVar9 = &DAT_100fd5b10;
    local_80 = lVar4;
    lStack_78 = lVar13;
    FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
    lVar4 = 0;
    local_70 = puVar9;
    _swift_getTupleTypeMetadata(0,0x10007,&local_a0,pbVar12 + -0x70,0);
    local_120 = *(byte **)(pbVar12 + *(int *)(lVar4 + 0x80));
    pcStack_98 = local_f0;
    local_90 = CONCAT71(local_90._1_7_,(char)local_f8);
    local_d0 = *(code **)((long)local_d0 + 0x20);
    local_130 = puVar10;
    local_a8 = uVar1;
    local_a0 = puVar10;
    (*local_d0)(local_e8,pbVar12 + *(int *)(lVar4 + 0x70),lVar13);
    pcVar15 = *(code **)((long)pcVar15 + 8);
    _swift_bridgeObjectRetain(uVar1);
    local_128 = pcVar15;
    (*pcVar15)();
    _swift_storeEnumTagMultiPayload();
    uVar8 = local_d8;
    local_b8 = local_d8;
    uVar16 = 0;
    uStack_b0 = uVar1;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar16);
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66ac0,uVar6);
    (extension_Swift)::Swift::Collection::_firstIndex();
    _swift_bridgeObjectRelease(uVar1);
    if ((char)local_c0 != '\x01') {
      Swift::Array<undefined>::remove(&local_c8,local_c8,uVar16);
      (*local_128)();
      iVar3 = *(int *)(lVar4 + 0x70);
      iVar2 = *(int *)(lVar4 + 0x80);
      *unaff_x20 = (char)local_118;
      unaff_x20[1] = (char)local_10c;
      *(undefined **)(unaff_x20 + 8) = local_130;
      *(code **)(unaff_x20 + 0x10) = local_f0;
      unaff_x20[0x18] = (char)local_f8;
      *(undefined8 *)(unaff_x20 + 0x20) = local_a8;
      *(undefined8 *)(unaff_x20 + 0x28) = local_108;
      unaff_x20[0x30] = (char)local_100;
      (*local_d0)(unaff_x20 + iVar3,local_e8,lVar13);
      *(byte **)(unaff_x20 + iVar2) = local_120;
LAB_1005f0a9c:
      _swift_storeEnumTagMultiPayload();
      return 0;
    }
    local_c8 = uVar8;
    local_c0 = local_e0;
    uVar8 = 0;
    FUN_100678b68(0,local_138);
    FUN_100676878(&local_c8,uVar8);
    (*local_128)();
    iVar3 = *(int *)(lVar4 + 0x70);
    iVar2 = *(int *)(lVar4 + 0x80);
    *unaff_x20 = (char)local_118;
    unaff_x20[1] = (char)local_10c;
    *(code **)(unaff_x20 + 0x10) = pcStack_98;
    *(undefined **)(unaff_x20 + 8) = local_a0;
    unaff_x20[0x18] = (undefined1)local_90;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x28) = local_108;
    unaff_x20[0x30] = (char)local_100;
    (*local_d0)(unaff_x20 + iVar3,local_e8,lVar13);
    *(byte **)(unaff_x20 + iVar2) = local_120;
  }
  _swift_storeEnumTagMultiPayload();
  return 1;
}



/* Address: 0x1005f0b14 | FUN_1005f0b14 */

void FUN_1005f0b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  CancellationError CVar3;
  CancellationError CVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  uVar1 = 0;
  local_80 = param_3;
  uStack_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_2;
  FUN_1005f5070(0,param_3,param_4,param_6);
  uVar2 = 0;
  FUN_1005f98c8(0,param_3,param_4,param_6);
  FUN_10066ed6c(&local_48,FUN_1005fb520,local_90,param_1,uVar1,uVar2);
  if (local_48 != 0) {
    CVar3 = Swift::CancellationError::typeMetadataAccessor();
    CVar4 = CVar3;
    FUN_1005f53a8();
    _swift_allocError(CVar3.unknown,CVar4.unknown,0,0);
    Swift::CancellationError::init();
    puVar5 = &DAT_100fd4f20;
    local_90[0] = CVar3.unknown;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    puVar6 = puVar5;
    puVar7 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    (**(code **)(*(long *)(puVar5 + -8) + 0x20))(puVar7,local_90,puVar5);
    _swift_continuation_throwingResumeWithError(local_48,puVar6);
  }
  return;
}



/* Address: 0x1005f0c40 | FUN_1005f0c40 */

undefined * FUN_1005f0c40(undefined *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  _ContiguousArrayStorage *p_Var11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *unaff_x20;
  byte *pbVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  long lVar23;
  tuple2_conflict3 tVar24;
  byte abStack_1e0 [7];
  byte abStack_1d9 [4];
  byte abStack_1d5 [8];
  byte abStack_1cd [8];
  byte abStack_1c5 [10];
  byte abStack_1bb [6];
  byte abStack_1b5 [8];
  byte abStack_1ad [8];
  byte abStack_1a5 [10];
  byte abStack_19b [8];
  byte abStack_193 [8];
  byte abStack_18b [6];
  byte abStack_185 [10];
  byte abStack_17b [11];
  undefined8 local_170;
  long local_168;
  long local_160;
  code *local_158;
  uint local_150;
  uint local_14c;
  undefined8 local_148;
  byte *local_140;
  ulong local_138;
  undefined8 local_130;
  undefined *local_128;
  byte *local_120;
  ulong local_118;
  code *local_110;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  byte local_e8;
  undefined8 local_e0;
  char local_d8;
  undefined *local_d0;
  undefined *local_c0;
  undefined8 uStack_b8;
  byte local_b0;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *puStack_78;
  undefined *local_70;
  
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  local_110 = *(code **)(lVar1 + -8);
  uVar18 = *(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)&local_170 - uVar18;
  lVar23 = (lVar10 - uVar18) - uVar18;
  uVar21 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = 0;
  local_100 = param_1;
  FUN_1005f5278(0,uVar17,lVar1,uVar21);
  local_108 = *(long *)(uVar8 - 8);
  uVar19 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar22 = (undefined1 *)(lVar23 - uVar19);
  pbVar20 = puVar22 + -uVar19;
  (**(code **)(local_108 + 0x10))(pbVar20);
  pbVar9 = pbVar20;
  _swift_getEnumCaseMultiPayload(pbVar20,uVar8);
  puVar15 = PTR___type_metadata_for_Swift_Bool_100eac570;
  iVar7 = (int)pbVar9;
  if (iVar7 < 2) {
    local_80 = lVar1;
    if (iVar7 == 0) {
      local_118 = CONCAT44(local_118._4_4_,(uint)*pbVar20);
      lVar10 = 0;
      _swift_getTupleTypeMetadata2
                (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar1,"isWritable delegate ",0);
      local_110 = *(code **)(local_110 + 0x20);
      (*local_110)(lVar23,pbVar20 + *(int *)(lVar10 + 0x30),lVar1);
      local_120 = pbVar20;
      pbVar20[-0x49] = 0x62;
      pbVar20[-0x48] = 0x6c;
      pbVar20[-0x47] = 0x65;
      pbVar20[-0x46] = 0x20;
      pbVar20[-0x50] = 'i';
      pbVar20[-0x4f] = 's';
      pbVar20[-0x4e] = 'W';
      pbVar20[-0x4d] = 'r';
      pbVar20[-0x4c] = 'i';
      pbVar20[-0x4b] = 't';
      pbVar20[-0x4a] = 'a';
      pbVar20[-0x49] = 'b';
      pbVar20[-0x35] = 0x6c;
      pbVar20[-0x34] = 0x20;
      pbVar20[-0x3d] = 't';
      pbVar20[-0x3c] = 'e';
      pbVar20[-0x3b] = 'O';
      pbVar20[-0x3a] = 'u';
      pbVar20[-0x39] = 't';
      pbVar20[-0x38] = 'c';
      pbVar20[-0x37] = 'a';
      pbVar20[-0x36] = 'l';
      pbVar20[-0x45] = 'i';
      pbVar20[-0x44] = 'n';
      pbVar20[-0x43] = 'D';
      pbVar20[-0x42] = 'e';
      pbVar20[-0x41] = 'l';
      pbVar20[-0x40] = 'e';
      pbVar20[-0x3f] = 'g';
      pbVar20[-0x3e] = 'a';
      pbVar20[-0x2b] = 'd';
      pbVar20[-0x2a] = 'Y';
      pbVar20[-0x29] = 'i';
      pbVar20[-0x28] = 'e';
      pbVar20[-0x27] = 'l';
      pbVar20[-0x26] = 'd';
      pbVar20[-0x25] = 's';
      pbVar20[-0x24] = ' ';
      pbVar20[-0x33] = 'c';
      pbVar20[-0x32] = 'a';
      pbVar20[-0x31] = 'n';
      pbVar20[-0x30] = 'c';
      pbVar20[-0x2f] = 'e';
      pbVar20[-0x2e] = 'l';
      pbVar20[-0x2d] = 'l';
      pbVar20[-0x2c] = 'e';
      pbVar20[-0x1b] = 'd';
      pbVar20[-0x1a] = 'Y';
      pbVar20[-0x19] = 'i';
      pbVar20[-0x18] = 'e';
      pbVar20[-0x17] = 'l';
      pbVar20[-0x16] = 'd';
      pbVar20[-0x15] = 's';
      pbVar20[-0x14] = ' ';
      pbVar20[-0x23] = 's';
      pbVar20[-0x22] = 'u';
      pbVar20[-0x21] = 's';
      pbVar20[-0x20] = 'p';
      pbVar20[-0x1f] = 'e';
      pbVar20[-0x1e] = 'n';
      pbVar20[-0x1d] = 'd';
      pbVar20[-0x1c] = 'e';
      pbVar20[-0xb] = 0x20;
      pbVar20[-10] = 0;
      pbVar20[-0x13] = 'd';
      pbVar20[-0x12] = 'e';
      pbVar20[-0x11] = 'l';
      pbVar20[-0x10] = 'e';
      pbVar20[-0xf] = 'g';
      pbVar20[-0xe] = 'a';
      pbVar20[-0xd] = 't';
      pbVar20[-0xc] = 'e';
      local_a0 = puVar15;
      local_98 = puVar15;
      FUN_1005f5284(0xff,uVar17,lVar1,uVar21);
      uVar16 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar12 = 0xff;
      local_90 = uVar16;
      FUN_1005f50a4(0xff,uVar17,lVar1,uVar21);
      uVar16 = 0xff;
      FUN_100678b68(0xff,uVar12);
      lVar10 = 0;
      local_88 = uVar16;
      _swift_getTupleTypeMetadata(0,0x10005,&local_a0,pbVar20 + -0x50,0);
      iVar7 = *(int *)(lVar10 + 0x60);
      *puVar22 = (char)local_118;
      puVar22[1] = 0;
      p_Var11 = Swift::_ContiguousArrayStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var11,0x28,7);
      tVar24 = Swift::Array<undefined>::__adoptStorage();
      local_a0 = tVar24._0_8_;
      *(undefined **)(local_a0 + 0x20) = local_100;
      Swift::Array<undefined>::typeMetadataAccessor();
      FUN_100004520();
      *(undefined **)(puVar22 + 8) = local_a0;
      FUN_1005f50a4(0,uVar17,lVar1,uVar21);
      thunk_FUN_100676830(puVar22 + 0x10);
      (*local_110)(puVar22 + iVar7,lVar23,lVar1);
      _swift_storeEnumTagMultiPayload(puVar22,uVar8,1);
      (**(code **)(local_108 + 0x28))();
    }
    else {
      local_138 = uVar8;
      local_140 = pbVar20;
      local_130 = CONCAT44(local_130._4_4_,(uint)*pbVar20);
      local_128 = (undefined *)CONCAT44(local_128._4_4_,(uint)pbVar20[1]);
      puVar15 = *(undefined **)(pbVar20 + 0x10);
      local_120 = *(undefined **)(pbVar20 + 8);
      uVar13 = *(undefined8 *)(pbVar20 + 0x18);
      local_118 = lVar10 - uVar18;
      bVar2 = pbVar20[0x20];
      pbVar20[-0x49] = 0x62;
      pbVar20[-0x48] = 0x6c;
      pbVar20[-0x47] = 0x65;
      pbVar20[-0x46] = 0x20;
      pbVar20[-0x50] = 'i';
      pbVar20[-0x4f] = 's';
      pbVar20[-0x4e] = 'W';
      pbVar20[-0x4d] = 'r';
      pbVar20[-0x4c] = 'i';
      pbVar20[-0x4b] = 't';
      pbVar20[-0x4a] = 'a';
      pbVar20[-0x49] = 'b';
      pbVar20[-0x35] = 0x6c;
      pbVar20[-0x34] = 0x20;
      pbVar20[-0x3d] = 't';
      pbVar20[-0x3c] = 'e';
      pbVar20[-0x3b] = 'O';
      pbVar20[-0x3a] = 'u';
      pbVar20[-0x39] = 't';
      pbVar20[-0x38] = 'c';
      pbVar20[-0x37] = 'a';
      pbVar20[-0x36] = 'l';
      pbVar20[-0x45] = 'i';
      pbVar20[-0x44] = 'n';
      pbVar20[-0x43] = 'D';
      pbVar20[-0x42] = 'e';
      pbVar20[-0x41] = 'l';
      pbVar20[-0x40] = 'e';
      pbVar20[-0x3f] = 'g';
      pbVar20[-0x3e] = 'a';
      pbVar20[-0x2b] = 'd';
      pbVar20[-0x2a] = 'Y';
      pbVar20[-0x29] = 'i';
      pbVar20[-0x28] = 'e';
      pbVar20[-0x27] = 'l';
      pbVar20[-0x26] = 'd';
      pbVar20[-0x25] = 's';
      pbVar20[-0x24] = ' ';
      pbVar20[-0x33] = 'c';
      pbVar20[-0x32] = 'a';
      pbVar20[-0x31] = 'n';
      pbVar20[-0x30] = 'c';
      pbVar20[-0x2f] = 'e';
      pbVar20[-0x2e] = 'l';
      pbVar20[-0x2d] = 'l';
      pbVar20[-0x2c] = 'e';
      pbVar20[-0x1b] = 'd';
      pbVar20[-0x1a] = 'Y';
      pbVar20[-0x19] = 'i';
      pbVar20[-0x18] = 'e';
      pbVar20[-0x17] = 'l';
      pbVar20[-0x16] = 'd';
      pbVar20[-0x15] = 's';
      pbVar20[-0x14] = ' ';
      pbVar20[-0x23] = 's';
      pbVar20[-0x22] = 'u';
      pbVar20[-0x21] = 's';
      pbVar20[-0x20] = 'p';
      pbVar20[-0x1f] = 'e';
      pbVar20[-0x1e] = 'n';
      pbVar20[-0x1d] = 'd';
      pbVar20[-0x1c] = 'e';
      pbVar20[-0xb] = 0x20;
      pbVar20[-10] = 0;
      pbVar20[-0x13] = 'd';
      pbVar20[-0x12] = 'e';
      pbVar20[-0x11] = 'l';
      pbVar20[-0x10] = 'e';
      pbVar20[-0xf] = 'g';
      pbVar20[-0xe] = 'a';
      pbVar20[-0xd] = 't';
      pbVar20[-0xc] = 'e';
      local_a0 = PTR___type_metadata_for_Swift_Bool_100eac570;
      local_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
      uVar16 = 0xff;
      FUN_1005f5284(0xff,uVar17,lVar1,uVar21);
      uVar12 = 0xff;
      local_148 = uVar16;
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar16 = 0xff;
      local_90 = uVar12;
      FUN_1005f50a4(0xff,uVar17,lVar1,uVar21);
      uVar12 = 0xff;
      FUN_100678b68(0xff,uVar16);
      lVar10 = 0;
      local_88 = uVar12;
      _swift_getTupleTypeMetadata(0,0x10005,&local_a0,pbVar20 + -0x50,0);
      local_d0 = local_120;
      local_110 = *(code **)(local_110 + 0x20);
      local_140 = (byte *)lVar10;
      local_c0 = puVar15;
      uStack_b8 = uVar13;
      local_b0 = bVar2;
      (*local_110)(local_118,pbVar20 + *(int *)(lVar10 + 0x60),lVar1);
      puVar4 = local_100;
      puStack_78 = local_100;
      local_f8 = puVar15;
      local_f0 = uVar13;
      local_e8 = bVar2;
      local_90 = uVar17;
      local_88 = lVar1;
      local_80 = uVar21;
      FUN_1005e4618(puVar15,uVar13,bVar2);
      uVar21 = 0;
      FUN_100678b68(0,uVar16);
      _swift_getWitnessTable(0x100c6d198,uVar21);
      (extension_Swift)::Swift::Collection::_firstIndex();
      FUN_10000cae0(puVar15,uVar13,bVar2);
      uVar17 = local_e0;
      if (local_d8 != '\x01') {
        pcVar5 = *(code **)(local_108 + 8);
        (*pcVar5)();
        _swift_storeEnumTagMultiPayload();
        FUN_1006770ac(&local_a0,uVar17,uVar21);
        puVar15 = local_98;
        (*pcVar5)();
        iVar7 = *(int *)((long)local_140 + 0x60);
        *unaff_x20 = (char)local_130;
        unaff_x20[1] = (char)local_128;
        *(byte **)(unaff_x20 + 8) = local_120;
        *(undefined8 *)(unaff_x20 + 0x18) = uStack_b8;
        *(undefined **)(unaff_x20 + 0x10) = local_c0;
        unaff_x20[0x20] = local_b0;
        (*local_110)(unaff_x20 + iVar7,local_118,lVar1);
LAB_1005f1798:
        _swift_storeEnumTagMultiPayload();
        return puVar15;
      }
      pcVar5 = *(code **)(local_108 + 8);
      (*pcVar5)();
      _swift_storeEnumTagMultiPayload();
      local_a0 = puVar4;
      uVar17 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      Swift::Array<undefined>::append(&local_a0,uVar17);
      (*pcVar5)();
      iVar7 = *(int *)((long)local_140 + 0x60);
      *unaff_x20 = (char)local_130;
      unaff_x20[1] = (char)local_128;
      *(undefined **)(unaff_x20 + 8) = local_d0;
      *(undefined **)(unaff_x20 + 0x10) = puVar15;
      *(undefined8 *)(unaff_x20 + 0x18) = uVar13;
      unaff_x20[0x20] = bVar2;
      (*local_110)(unaff_x20 + iVar7,local_118,lVar1);
      _swift_storeEnumTagMultiPayload();
    }
  }
  else if (iVar7 == 2) {
    local_140 = pbVar20;
    local_150 = (uint)*pbVar20;
    local_14c = (uint)pbVar20[1];
    local_128 = *(undefined **)(pbVar20 + 8);
    local_130 = *(undefined8 *)(pbVar20 + 0x10);
    local_138 = CONCAT44(local_138._4_4_,(uint)pbVar20[0x18]);
    uVar16 = *(undefined8 *)(pbVar20 + 0x20);
    local_120 = *(undefined **)(pbVar20 + 0x28);
    local_118 = CONCAT44(local_118._4_4_,(uint)pbVar20[0x30]);
    pbVar20[-0x69] = 0x62;
    pbVar20[-0x68] = 0x6c;
    pbVar20[-0x67] = 0x65;
    pbVar20[-0x66] = 0x20;
    pbVar20[-0x70] = 'i';
    pbVar20[-0x6f] = 's';
    pbVar20[-0x6e] = 'W';
    pbVar20[-0x6d] = 'r';
    pbVar20[-0x6c] = 'i';
    pbVar20[-0x6b] = 't';
    pbVar20[-0x6a] = 'a';
    pbVar20[-0x69] = 'b';
    pbVar20[-0x55] = 0x6c;
    pbVar20[-0x54] = 0x20;
    pbVar20[-0x5d] = 't';
    pbVar20[-0x5c] = 'e';
    pbVar20[-0x5b] = 'O';
    pbVar20[-0x5a] = 'u';
    pbVar20[-0x59] = 't';
    pbVar20[-0x58] = 'c';
    pbVar20[-0x57] = 'a';
    pbVar20[-0x56] = 'l';
    pbVar20[-0x65] = 'i';
    pbVar20[-100] = 'n';
    pbVar20[-99] = 'D';
    pbVar20[-0x62] = 'e';
    pbVar20[-0x61] = 'l';
    pbVar20[-0x60] = 'e';
    pbVar20[-0x5f] = 'g';
    pbVar20[-0x5e] = 'a';
    pbVar20[-0x4b] = 'd';
    pbVar20[-0x4a] = 'Y';
    pbVar20[-0x49] = 'i';
    pbVar20[-0x48] = 'e';
    pbVar20[-0x47] = 'l';
    pbVar20[-0x46] = 'd';
    pbVar20[-0x45] = 's';
    pbVar20[-0x44] = ' ';
    pbVar20[-0x53] = 's';
    pbVar20[-0x52] = 'u';
    pbVar20[-0x51] = 's';
    pbVar20[-0x50] = 'p';
    pbVar20[-0x4f] = 'e';
    pbVar20[-0x4e] = 'n';
    pbVar20[-0x4d] = 'd';
    pbVar20[-0x4c] = 'e';
    pbVar20[-0x3b] = 'd';
    pbVar20[-0x3a] = 'Y';
    pbVar20[-0x39] = 'i';
    pbVar20[-0x38] = 'e';
    pbVar20[-0x37] = 'l';
    pbVar20[-0x36] = 'd';
    pbVar20[-0x35] = 's';
    pbVar20[-0x34] = ' ';
    pbVar20[-0x43] = 'c';
    pbVar20[-0x42] = 'a';
    pbVar20[-0x41] = 'n';
    pbVar20[-0x40] = 'c';
    pbVar20[-0x3f] = 'e';
    pbVar20[-0x3e] = 'l';
    pbVar20[-0x3d] = 'l';
    pbVar20[-0x3c] = 'e';
    pbVar20[-0x23] = 0x20;
    pbVar20[-0x2b] = 'Y';
    pbVar20[-0x2a] = 'i';
    pbVar20[-0x29] = 'e';
    pbVar20[-0x28] = 'l';
    pbVar20[-0x27] = 'd';
    pbVar20[-0x26] = 'I';
    pbVar20[-0x25] = 'D';
    pbVar20[-0x24] = 's';
    pbVar20[-0x33] = 'b';
    pbVar20[-0x32] = 'u';
    pbVar20[-0x31] = 'f';
    pbVar20[-0x30] = 'f';
    pbVar20[-0x2f] = 'e';
    pbVar20[-0x2e] = 'r';
    pbVar20[-0x2d] = 'e';
    pbVar20[-0x2c] = 'd';
    pbVar20[-0x1a] = 0x20;
    pbVar20[-0x22] = 'd';
    pbVar20[-0x21] = 'e';
    pbVar20[-0x20] = 'l';
    pbVar20[-0x1f] = 'e';
    pbVar20[-0x1e] = 'g';
    pbVar20[-0x1d] = 'a';
    pbVar20[-0x1c] = 't';
    pbVar20[-0x1b] = 'e';
    pbVar20[-0x19] = 0x65;
    pbVar20[-0x18] = 0x72;
    pbVar20[-0x17] = 0x72;
    pbVar20[-0x16] = 0x6f;
    pbVar20[-0x15] = 0x72;
    pbVar20[-0x14] = 0x20;
    pbVar20[-0x13] = 0;
    local_a0 = PTR___type_metadata_for_Swift_Bool_100eac570;
    local_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
    uVar12 = 0xff;
    FUN_1005f50a4(0xff,uVar17,lVar1,uVar21);
    uVar13 = 0xff;
    local_168 = uVar12;
    FUN_100678b68();
    uVar12 = 0xff;
    local_90 = uVar13;
    FUN_1005f5284(0xff,uVar17,lVar1,uVar21);
    uVar13 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    uVar14 = 0xff;
    local_88 = uVar13;
    FUN_100678b68(0xff,uVar12);
    puVar15 = &DAT_100fd5b10;
    local_80 = uVar14;
    puStack_78 = (undefined *)lVar1;
    FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
    lVar23 = 0;
    local_70 = puVar15;
    _swift_getTupleTypeMetadata(0,0x10007,&local_a0,pbVar20 + -0x70,0);
    local_140 = *(byte **)(pbVar20 + *(int *)(lVar23 + 0x80));
    local_c0 = local_128;
    uStack_b8 = local_130;
    local_b0 = (byte)local_138;
    local_158 = *(code **)(local_110 + 0x20);
    local_160 = lVar23;
    local_148 = uVar16;
    local_e0 = uVar16;
    (*local_158)(lVar10,pbVar20 + *(int *)(lVar23 + 0x70),lVar1);
    local_a0 = local_120;
    local_98 = (undefined *)CONCAT71(local_98._1_7_,(char)local_118);
    local_f8 = local_100;
    uVar16 = 0;
    FUN_100678b68(0,uVar12);
    _swift_getWitnessTable(0x100c6d278,uVar16);
    local_170 = uVar12;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66ac0,uVar12);
    bVar6 = (extension_Swift)::Swift::Sequence::_contains();
    puVar15 = local_128;
    uVar12 = local_130;
    uVar16 = local_148;
    if (bVar6) {
      puStack_78 = local_100;
      uVar13 = 0;
      local_90 = uVar17;
      local_88 = lVar1;
      local_80 = uVar21;
      FUN_100678b68(0,local_168);
      _swift_getWitnessTable(0x100c6d198,uVar13);
      (extension_Swift)::Swift::Collection::_firstIndex();
      puVar4 = local_f8;
      if ((char)local_f0 != '\x01') {
        pcVar5 = *(code **)(local_108 + 8);
        (*pcVar5)();
        _swift_storeEnumTagMultiPayload();
        FUN_1006770ac(&local_a0,puVar4,uVar13);
        puVar15 = local_98;
        (*pcVar5)();
        iVar7 = *(int *)(local_160 + 0x70);
        iVar3 = *(int *)(local_160 + 0x80);
        *unaff_x20 = (char)local_150;
        unaff_x20[1] = (char)local_14c;
        *(undefined8 *)(unaff_x20 + 0x10) = uStack_b8;
        *(undefined **)(unaff_x20 + 8) = local_c0;
        unaff_x20[0x18] = local_b0;
        *(undefined8 *)(unaff_x20 + 0x20) = uVar16;
        *(byte **)(unaff_x20 + 0x28) = local_120;
        unaff_x20[0x30] = (char)local_118;
        (*local_158)(unaff_x20 + iVar7,lVar10,lVar1);
        *(byte **)(unaff_x20 + iVar3) = local_140;
        goto LAB_1005f1798;
      }
      pcVar5 = *(code **)(local_108 + 8);
      (*pcVar5)();
      _swift_storeEnumTagMultiPayload();
      local_a0 = local_100;
      uVar17 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      Swift::Array<undefined>::append(&local_a0,uVar17);
      (*pcVar5)();
      iVar7 = *(int *)(local_160 + 0x70);
      iVar3 = *(int *)(local_160 + 0x80);
      *unaff_x20 = (char)local_150;
      unaff_x20[1] = (char)local_14c;
      *(undefined **)(unaff_x20 + 8) = puVar15;
      *(undefined8 *)(unaff_x20 + 0x10) = uVar12;
      unaff_x20[0x18] = (char)local_138;
      *(undefined8 *)(unaff_x20 + 0x20) = local_e0;
      *(byte **)(unaff_x20 + 0x28) = local_120;
      unaff_x20[0x30] = (char)local_118;
      (*local_158)(unaff_x20 + iVar7,lVar10,lVar1);
      *(byte **)(unaff_x20 + iVar3) = local_140;
      _swift_storeEnumTagMultiPayload();
    }
    else {
      _swift_errorRelease(local_140);
      FUN_1005e46ac(local_120,local_118 & 0xffffffff);
      (**(code **)(local_110 + 8))(lVar10,lVar1);
      _swift_bridgeObjectRelease(local_148);
      FUN_10000cae0(local_128,local_130,local_138 & 0xffffffff);
    }
  }
  else {
    if (iVar7 != 3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1005f17a8);
      (*pcVar5)();
    }
    (**(code **)(local_108 + 8))(pbVar20,uVar8);
  }
  return (undefined *)0x0;
}



/* Address: 0x1005f17a8 | FUN_1005f17a8 */

void FUN_1005f17a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005cd444;
    Swift::_withTaskCancellationHandler();
    return;
  }
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_1005f4884(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1005f18f0 | FUN_1005f18f0 */

void FUN_1005f18f0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined1 *)(unaff_x22 + 0xc9) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  _swift_task_switch(FUN_1005f1914,0,0);
  return;
}



/* Address: 0x1005f1914 | FUN_1005f1914 */

void FUN_1005f1914(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)(unaff_x22 + 0xc9) == '\x01') {
    puVar2 = &DAT_100fd65b0;
    FUN_1000f7830(&DAT_100fd65b0,&DAT_100c66fe0);
    _swift_initStaticObject();
    lVar1 = *(long *)(puVar2 + 0x10);
    *(long *)(puVar2 + 0x10) = lVar1 + 1;
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x90);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(long *)(unaff_x22 + 0x40) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  plVar3 = (long *)0x20;
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar7;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar3;
  uVar4 = 0;
  FUN_1005f50b0(0,uVar6,uVar7,uVar5);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005f1a34;
  FUN_1005f17a8(unaff_x22 + 200,&DAT_100c66948,unaff_x22 + 0x10,FUN_1005f54f8,unaff_x22 + 0x50,0,0,
                uVar4);
  return;
}



/* Address: 0x1005f1a34 | FUN_1005f1a34 */

void FUN_1005f1a34(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005f1a98;
  }
  else {
    pcVar1 = FUN_100543db0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005f1a98 | FUN_1005f1a98 */

void FUN_1005f1a98(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001005f1aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 200));
  return;
}



/* Address: 0x1005f1aa8 | FUN_1005f1aa8 */

void FUN_1005f1aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0xa8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  lVar3 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar1;
  lVar3 = 0;
  FUN_1005f539c(0,param_5,param_6,param_7);
  *(long *)(unaff_x22 + 200) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar1;
  _swift_task_switch(FUN_1005f1b64,0,0);
  return;
}



/* Address: 0x1005f1b64 | FUN_1005f1b64 */

void FUN_1005f1b64(void)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar10 = *(undefined8 *)(unaff_x22 + 200);
  lVar2 = *(long *)(unaff_x22 + 0xd0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x90);
  uVar7 = 0;
  FUN_1005f5070(0,*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
  FUN_10066ed6c(uVar12,FUN_1005fb450,unaff_x22 + 0x50,uVar11,uVar7,uVar10);
  (**(code **)(lVar2 + 0x10))(uVar8,uVar12,uVar10);
  _swift_getEnumCaseMultiPayload(uVar8,uVar10);
  if ((int)uVar8 == 0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    lVar3 = *(long *)(unaff_x22 + 0xd0);
    lVar2 = *(long *)(unaff_x22 + 0xb8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar4 = *(long *)(unaff_x22 + 0xb0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
    puVar1 = *(undefined1 **)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    (**(code **)(lVar2 + 0x20))(uVar7,*(undefined8 *)(unaff_x22 + 0xd8),uVar10);
    (**(code **)(lVar4 + 0x18))(uVar11,uVar10,lVar4);
    FUN_1005ef94c(uVar6,uVar5,uVar10,lVar4);
    (**(code **)(lVar2 + 8))(uVar7,uVar10);
    (**(code **)(lVar3 + 8))(uVar12,uVar8);
    *puVar1 = 0;
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe0));
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    if ((int)uVar8 != 1) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
      *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xa8);
      *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x90);
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x88);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x98);
      plVar9 = (long *)0x20;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe8) = plVar9;
      uVar11 = 0;
      FUN_1005f50b0(0,uVar12,uVar8,uVar10);
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_1005f1da8;
      FUN_1005da2e0(*(undefined8 *)(unaff_x22 + 0x80),0,0,FUN_1005fb4cc,unaff_x22 + 0x10,uVar11);
      return;
    }
    _swift_willThrow();
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
    (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))(uVar10,*(undefined8 *)(unaff_x22 + 200));
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005f1d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005f1da8 | FUN_1005f1da8 */

void FUN_1005f1da8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005f1e0c;
  }
  else {
    pcVar1 = FUN_1005f1e6c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005f1e0c | FUN_1005f1e0c */

void FUN_1005f1e0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 200));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe0));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001005f1e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005f1e6c | FUN_1005f1e6c */

void FUN_1005f1e6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 200));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005f1ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005f1ed8 | FUN_1005f1ed8 */

void FUN_1005f1ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  ulong *puVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  code *pcVar21;
  ulong local_f0 [5];
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  ulong local_a0 [2];
  undefined8 local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_f0[4] = *(long *)(param_6 + -8);
  lVar20 = (long)local_f0 - (*(long *)(local_f0[4] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  local_f0[0] = param_4;
  local_f0[3] = lVar20;
  local_c0 = param_2;
  local_b0 = param_3;
  FUN_1005f539c(0xff,param_5,param_6,param_7);
  puVar16 = &DAT_100fd6588;
  FUN_1000f8b08(&DAT_100fd6588,&DAT_100c66fd0);
  lVar6 = 0;
  _swift_getTupleTypeMetadata2(0,lVar5,puVar16,0,0);
  uVar14 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar20 = lVar20 - uVar14;
  lVar15 = lVar20 - uVar14;
  lVar18 = *(long *)(lVar5 + -8);
  uVar14 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar17 = (ulong *)(lVar15 - uVar14);
  local_b8 = (long)puVar17 - uVar14;
  uStack_78 = local_b0;
  uVar7 = 0;
  local_f0[1] = param_5;
  local_f0[2] = param_7;
  local_c8 = param_1;
  local_90 = param_5;
  lStack_88 = param_6;
  local_80 = param_7;
  local_70 = param_1;
  FUN_1005f5070(0,param_5,param_6,param_7);
  uVar8 = 0xff;
  FUN_1005f7110(0xff);
  uVar9 = 0;
  _swift_getTupleTypeMetadata2(0,lVar5,uVar8,0,0);
  FUN_10066ed6c(lVar15,FUN_1005fb4dc,local_a0,local_c0,uVar7,uVar9);
  plVar1 = (long *)(lVar15 + *(int *)(lVar6 + 0x30));
  pcVar21 = *(code **)(lVar18 + 0x20);
  local_b0 = lVar18;
  (*pcVar21)(lVar20,lVar15,lVar5);
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    pcVar19 = (code *)0x0;
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar15 = plVar1[1];
    puVar16 = &DAT_100ee9ce8;
    _swift_allocObject(&DAT_100ee9ce8,0x20,7);
    *(long *)(puVar16 + 0x10) = lVar6;
    *(long *)(puVar16 + 0x18) = lVar15;
    pcVar19 = FUN_100209b34;
  }
  lVar15 = local_b8;
  (*pcVar21)(local_b8,lVar20,lVar5);
  (**(code **)(local_b0 + 0x10))(puVar17,lVar15,lVar5);
  puVar10 = puVar17;
  _swift_getEnumCaseMultiPayload(puVar17,lVar5);
  uVar4 = local_f0[4];
  uVar14 = local_f0[3];
  if ((int)puVar10 == 0) {
    (**(code **)(local_f0[4] + 0x20))(local_f0[3],puVar17,param_6);
    uVar3 = local_f0[2];
    (**(code **)(local_f0[2] + 0x18))(local_f0[0],param_6,local_f0[2]);
    uVar2 = local_f0[1];
    FUN_1005ef94c(local_c0,local_f0[1],param_6,uVar3);
    local_a0[0] = local_a0[0] & 0xffffffffffffff00;
    uVar7 = 0;
    FUN_1005f50b0(0,uVar2,param_6,uVar3);
    puVar12 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    FUN_1005ec10c(local_a0,local_c8,uVar7,puVar12,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    FUN_100004550(pcVar19,puVar16);
    (**(code **)(uVar4 + 8))(uVar14,param_6);
  }
  else {
    if ((int)puVar10 == 1) {
      local_a0[0] = *puVar17;
      puVar12 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      puVar11 = puVar12;
      puVar13 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      (**(code **)(*(long *)(puVar12 + -8) + 0x20))(puVar13,local_a0,puVar12);
      _swift_continuation_throwingResumeWithError(local_c8,puVar11);
    }
    else {
      if (lVar6 == 0) goto LAB_1005f2230;
      _swift_retain(puVar16);
      (*pcVar19)();
      FUN_100004550(pcVar19,puVar16);
    }
    FUN_100004550(pcVar19,puVar16);
  }
LAB_1005f2230:
  (**(code **)(local_b0 + 8))(local_b8,lVar5);
  return;
}



/* Address: 0x1005f2260 | FUN_1005f2260 */

void FUN_1005f2260(long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  CancellationError CVar6;
  CancellationError CVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *apuStack_b0 [2];
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar3 = 0xff;
  local_80 = param_4;
  local_78 = param_3;
  local_68 = param_1;
  FUN_1005f539c(0xff,param_5,param_6,param_7);
  puVar8 = &DAT_100fd6588;
  FUN_1000f8b08(&DAT_100fd6588,&DAT_100c66fd0);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,lVar3,puVar8,0,0);
  uVar2 = local_78;
  uVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a0 = (long)apuStack_b0 - uVar9;
  lVar15 = local_a0 - uVar9;
  lVar14 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  apuStack_b0[1] = (undefined8 *)(lVar15 - uVar9);
  lVar13 = (long)apuStack_b0[1] - uVar9;
  lVar11 = lVar13 - uVar9;
  uVar5 = 0;
  local_98 = param_5;
  local_90 = param_6;
  local_88 = param_7;
  local_70 = lVar4;
  FUN_1005f524c(0,param_5,param_6,param_7);
  FUN_1005eec50(lVar11,uVar2,uVar5);
  (**(code **)(lVar14 + 0x10))(lVar13,lVar11,lVar3);
  lVar4 = lVar13;
  _swift_getEnumCaseMultiPayload(lVar13,lVar3);
  if ((uint)lVar4 < 2) {
    (**(code **)(lVar14 + 8))(lVar13,lVar3);
    pcVar12 = *(code **)(lVar14 + 0x20);
    (*pcVar12)(lVar15,lVar11,lVar3);
    lVar4 = local_68;
    (*pcVar12)(local_68,lVar15,lVar3);
    puVar10 = (undefined8 *)(lVar4 + *(int *)(local_70 + 0x30));
  }
  else {
    uVar9 = local_80;
    FUN_1005f0330(local_80,uVar2,uVar5);
    if ((uVar9 & 1) != 0) {
      lVar4 = 0;
      FUN_1005f5070(0,local_98,local_90,local_88);
      lVar15 = local_a0;
      plVar1 = (long *)(param_2 + *(int *)(lVar4 + 0x2c));
      lVar4 = *plVar1;
      lVar13 = plVar1[1];
      pcVar12 = *(code **)(lVar14 + 0x20);
      (*pcVar12)(local_a0,lVar11,lVar3);
      lVar11 = local_68;
      (*pcVar12)(local_68,lVar15,lVar3);
      if (lVar4 == 0) {
        pcVar12 = (code *)0x0;
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = &DAT_100ee9d10;
        _swift_allocObject(&DAT_100ee9d10,0x20,7);
        *(long *)(puVar8 + 0x10) = lVar4;
        *(long *)(puVar8 + 0x18) = lVar13;
        pcVar12 = FUN_100209b34;
      }
      puVar10 = (undefined8 *)(lVar11 + *(int *)(local_70 + 0x30));
      *puVar10 = pcVar12;
      puVar10[1] = puVar8;
      FUN_100011128(lVar4,lVar13);
      return;
    }
    CVar6 = Swift::CancellationError::typeMetadataAccessor();
    CVar7 = CVar6;
    FUN_1005f53a8();
    _swift_allocError(CVar6.unknown,CVar7.unknown,0,0);
    Swift::CancellationError::init();
    (**(code **)(lVar14 + 8))(lVar11,lVar3);
    puVar10 = apuStack_b0[1];
    *apuStack_b0[1] = CVar6.unknown;
    _swift_storeEnumTagMultiPayload(puVar10,lVar3,1);
    pcVar12 = *(code **)(lVar14 + 0x20);
    (*pcVar12)(lVar15,puVar10,lVar3);
    lVar4 = local_68;
    (*pcVar12)(local_68,lVar15,lVar3);
    puVar10 = (undefined8 *)(lVar4 + *(int *)(local_70 + 0x30));
  }
  *puVar10 = 0;
  puVar10[1] = 0;
  return;
}



/* Address: 0x1005f2554 | FUN_1005f2554 */

void FUN_1005f2554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  CancellationError CVar3;
  CancellationError CVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  uVar1 = 0;
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = param_5;
  uStack_58 = param_2;
  FUN_1005f5070(0,param_3,param_4,param_5);
  uVar2 = 0;
  FUN_1005f98c8(0,param_3,param_4,param_5);
  FUN_10066ed6c(&local_48,FUN_1005fb3fc,local_80,param_1,uVar1,uVar2);
  if (local_48 != 0) {
    CVar3 = Swift::CancellationError::typeMetadataAccessor();
    CVar4 = CVar3;
    FUN_1005f53a8();
    _swift_allocError(CVar3.unknown,CVar4.unknown,0,0);
    Swift::CancellationError::init();
    puVar5 = &DAT_100fd4f20;
    local_80[0] = CVar3.unknown;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    puVar6 = puVar5;
    puVar7 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    (**(code **)(*(long *)(puVar5 + -8) + 0x20))(puVar7,local_80,puVar5);
    _swift_continuation_throwingResumeWithError(local_48,puVar6);
  }
  return;
}



/* Address: 0x1005f267c | FUN_1005f267c */

void FUN_1005f267c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 *unaff_x20;
  byte *pbVar22;
  long lVar23;
  undefined1 *puVar24;
  long lVar25;
  byte abStack_1b0 [7];
  byte abStack_1a9 [4];
  byte abStack_1a5 [8];
  byte abStack_19d [8];
  byte abStack_195 [10];
  byte abStack_18b [6];
  byte abStack_185 [8];
  byte abStack_17d [8];
  byte abStack_175 [10];
  byte abStack_16b [8];
  byte abStack_163 [8];
  byte abStack_15b [6];
  byte abStack_155 [10];
  byte abStack_14b [11];
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  byte abStack_128 [4];
  uint local_124;
  code *local_120;
  byte abStack_118 [4];
  uint local_114;
  long local_110;
  uint local_104;
  code *local_100;
  undefined8 local_f8;
  code *local_a0;
  undefined *puStack_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  
  lVar1 = *(long *)(param_3 + 0x18);
  lVar2 = *(long *)(param_3 + 0x20);
  lVar23 = *(long *)(lVar1 + -8);
  lVar13 = (long)&local_140 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar17 = *(undefined8 *)(param_3 + 0x10);
  lVar8 = 0;
  FUN_1005f5278(0,uVar17,lVar1,lVar2);
  lVar25 = *(long *)(lVar8 + -8);
  uVar18 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar24 = (undefined1 *)(lVar13 - uVar18);
  pbVar22 = puVar24 + -uVar18;
  (**(code **)(lVar25 + 0x10))(pbVar22);
  pbVar9 = pbVar22;
  _swift_getEnumCaseMultiPayload(pbVar22,lVar8);
  iVar7 = (int)pbVar9;
  if (iVar7 < 2) {
    if (iVar7 == 0) {
      lVar8 = 0;
      _swift_getTupleTypeMetadata2
                (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar1,"isWritable delegate ",0);
      (**(code **)(lVar23 + 0x20))(param_1,pbVar22 + *(int *)(lVar8 + 0x30),lVar1);
      (**(code **)(lVar25 + 8))();
      *unaff_x20 = 0;
      _swift_storeEnumTagMultiPayload();
      uVar21 = 0;
    }
    else {
      local_100 = (code *)pbVar22;
      local_124 = (uint)*pbVar22;
      local_104 = (uint)pbVar22[1];
      local_f8 = *(undefined8 *)(pbVar22 + 8);
      local_120 = *(code **)(pbVar22 + 0x10);
      puVar20 = *(undefined **)(pbVar22 + 0x18);
      local_114 = (uint)pbVar22[0x20];
      pbVar22[-0x49] = 0x62;
      pbVar22[-0x48] = 0x6c;
      pbVar22[-0x47] = 0x65;
      pbVar22[-0x46] = 0x20;
      pbVar22[-0x50] = 'i';
      pbVar22[-0x4f] = 's';
      pbVar22[-0x4e] = 'W';
      pbVar22[-0x4d] = 'r';
      pbVar22[-0x4c] = 'i';
      pbVar22[-0x4b] = 't';
      pbVar22[-0x4a] = 'a';
      pbVar22[-0x49] = 'b';
      pbVar22[-0x35] = 0x6c;
      pbVar22[-0x34] = 0x20;
      pbVar22[-0x3d] = 't';
      pbVar22[-0x3c] = 'e';
      pbVar22[-0x3b] = 'O';
      pbVar22[-0x3a] = 'u';
      pbVar22[-0x39] = 't';
      pbVar22[-0x38] = 'c';
      pbVar22[-0x37] = 'a';
      pbVar22[-0x36] = 'l';
      pbVar22[-0x45] = 'i';
      pbVar22[-0x44] = 'n';
      pbVar22[-0x43] = 'D';
      pbVar22[-0x42] = 'e';
      pbVar22[-0x41] = 'l';
      pbVar22[-0x40] = 'e';
      pbVar22[-0x3f] = 'g';
      pbVar22[-0x3e] = 'a';
      pbVar22[-0x2b] = 'd';
      pbVar22[-0x2a] = 'Y';
      pbVar22[-0x29] = 'i';
      pbVar22[-0x28] = 'e';
      pbVar22[-0x27] = 'l';
      pbVar22[-0x26] = 'd';
      pbVar22[-0x25] = 's';
      pbVar22[-0x24] = ' ';
      pbVar22[-0x33] = 'c';
      pbVar22[-0x32] = 'a';
      pbVar22[-0x31] = 'n';
      pbVar22[-0x30] = 'c';
      pbVar22[-0x2f] = 'e';
      pbVar22[-0x2e] = 'l';
      pbVar22[-0x2d] = 'l';
      pbVar22[-0x2c] = 'e';
      pbVar22[-0x1b] = 'd';
      pbVar22[-0x1a] = 'Y';
      pbVar22[-0x19] = 'i';
      pbVar22[-0x18] = 'e';
      pbVar22[-0x17] = 'l';
      pbVar22[-0x16] = 'd';
      pbVar22[-0x15] = 's';
      pbVar22[-0x14] = ' ';
      pbVar22[-0x23] = 's';
      pbVar22[-0x22] = 'u';
      pbVar22[-0x21] = 's';
      pbVar22[-0x20] = 'p';
      pbVar22[-0x1f] = 'e';
      pbVar22[-0x1e] = 'n';
      pbVar22[-0x1d] = 'd';
      pbVar22[-0x1c] = 'e';
      pbVar22[-0xb] = 0x20;
      pbVar22[-10] = 0;
      pbVar22[-0x13] = 'd';
      pbVar22[-0x12] = 'e';
      pbVar22[-0x11] = 'l';
      pbVar22[-0x10] = 'e';
      pbVar22[-0xf] = 'g';
      pbVar22[-0xe] = 'a';
      pbVar22[-0xd] = 't';
      pbVar22[-0xc] = 'e';
      local_a0 = (code *)PTR___type_metadata_for_Swift_Bool_100eac570;
      puStack_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
      lVar10 = 0xff;
      FUN_1005f5284(0xff,uVar17,lVar1,lVar2);
      lVar11 = 0xff;
      local_130 = lVar10;
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar16 = 0xff;
      local_110 = lVar11;
      local_90 = lVar11;
      FUN_1005f50a4(0xff,uVar17,lVar1,lVar2);
      lVar10 = 0xff;
      FUN_100678b68(0xff,uVar16);
      lVar11 = 0;
      local_88 = lVar10;
      local_80 = lVar1;
      _swift_getTupleTypeMetadata(0,0x10005,&local_a0,pbVar22 + -0x50,0);
      pcVar15 = local_100;
      pcVar19 = local_120;
      local_100 = *(code **)(lVar23 + 0x20);
      (*local_100)(lVar13,pbVar22 + *(int *)(lVar11 + 0x60),lVar1);
      uVar5 = local_114;
      local_a0 = pcVar19;
      uVar4 = (undefined1)local_114;
      local_90 = CONCAT71(local_90._1_7_,uVar4);
      uVar12 = 0;
      puStack_98 = puVar20;
      FUN_100678b68(0,uVar16);
      uVar21 = 0x100c6d198;
      _swift_getWitnessTable(0x100c6d198,uVar12);
      local_138 = uVar21;
      bVar6 = (extension_Swift)::Swift::Collection::get_isEmpty();
      lVar23 = local_110;
      if (bVar6) {
        FUN_10000cae0(pcVar19,puVar20,uVar5);
        if (local_104 == 0) {
          _swift_bridgeObjectRelease(local_f8);
          (**(code **)(lVar25 + 8))(unaff_x20,lVar8);
          *unaff_x20 = 0;
          _swift_storeEnumTagMultiPayload(unaff_x20,lVar8,3);
          (*local_100)(param_1,lVar13,lVar1);
          uVar21 = 0;
        }
        else {
          pbVar22 = (byte *)(pcVar15 + -0x69);
          local_140 = lVar13;
          pbVar22[0] = 0x62;
          pbVar22[1] = 0x6c;
          pbVar22[2] = 0x65;
          pbVar22[3] = 0x20;
          pbVar22 = (byte *)(pcVar15 + -0x70);
          pbVar22[0] = 'i';
          pbVar22[1] = 's';
          pbVar22[2] = 'W';
          pbVar22[3] = 'r';
          pbVar22[4] = 'i';
          pbVar22[5] = 't';
          pbVar22[6] = 'a';
          pbVar22[7] = 'b';
          (pcVar15 + -0x55)[0] = (code)0x6c;
          (pcVar15 + -0x55)[1] = (code)0x20;
          pbVar22 = (byte *)(pcVar15 + -0x65);
          pbVar9 = (byte *)(pcVar15 + -0x5d);
          pbVar9[0] = 't';
          pbVar9[1] = 'e';
          pbVar9[2] = 'O';
          pbVar9[3] = 'u';
          pbVar9[4] = 't';
          pbVar9[5] = 'c';
          pbVar9[6] = 'a';
          pbVar9[7] = 'l';
          pbVar22[0] = 'i';
          pbVar22[1] = 'n';
          pbVar22[2] = 'D';
          pbVar22[3] = 'e';
          pbVar22[4] = 'l';
          pbVar22[5] = 'e';
          pbVar22[6] = 'g';
          pbVar22[7] = 'a';
          pbVar22 = (byte *)(pcVar15 + -0x53);
          pbVar9 = (byte *)(pcVar15 + -0x4b);
          pbVar9[0] = 'd';
          pbVar9[1] = 'Y';
          pbVar9[2] = 'i';
          pbVar9[3] = 'e';
          pbVar9[4] = 'l';
          pbVar9[5] = 'd';
          pbVar9[6] = 's';
          pbVar9[7] = ' ';
          pbVar22[0] = 's';
          pbVar22[1] = 'u';
          pbVar22[2] = 's';
          pbVar22[3] = 'p';
          pbVar22[4] = 'e';
          pbVar22[5] = 'n';
          pbVar22[6] = 'd';
          pbVar22[7] = 'e';
          pbVar22 = (byte *)(pcVar15 + -0x43);
          pbVar9 = (byte *)(pcVar15 + -0x3b);
          pbVar9[0] = 'd';
          pbVar9[1] = 'Y';
          pbVar9[2] = 'i';
          pbVar9[3] = 'e';
          pbVar9[4] = 'l';
          pbVar9[5] = 'd';
          pbVar9[6] = 's';
          pbVar9[7] = ' ';
          pbVar22[0] = 'c';
          pbVar22[1] = 'a';
          pbVar22[2] = 'n';
          pbVar22[3] = 'c';
          pbVar22[4] = 'e';
          pbVar22[5] = 'l';
          pbVar22[6] = 'l';
          pbVar22[7] = 'e';
          pcVar15[-0x23] = (code)0x20;
          pbVar22 = (byte *)(pcVar15 + -0x33);
          pbVar9 = (byte *)(pcVar15 + -0x2b);
          pbVar9[0] = 'Y';
          pbVar9[1] = 'i';
          pbVar9[2] = 'e';
          pbVar9[3] = 'l';
          pbVar9[4] = 'd';
          pbVar9[5] = 'I';
          pbVar9[6] = 'D';
          pbVar9[7] = 's';
          pbVar22[0] = 'b';
          pbVar22[1] = 'u';
          pbVar22[2] = 'f';
          pbVar22[3] = 'f';
          pbVar22[4] = 'e';
          pbVar22[5] = 'r';
          pbVar22[6] = 'e';
          pbVar22[7] = 'd';
          pcVar15[-0x1a] = (code)0x20;
          pbVar22 = (byte *)(pcVar15 + -0x22);
          pbVar22[0] = 'd';
          pbVar22[1] = 'e';
          pbVar22[2] = 'l';
          pbVar22[3] = 'e';
          pbVar22[4] = 'g';
          pbVar22[5] = 'a';
          pbVar22[6] = 't';
          pbVar22[7] = 'e';
          pbVar22 = (byte *)(pcVar15 + -0x19);
          pbVar22[0] = 0x65;
          pbVar22[1] = 0x72;
          pbVar22[2] = 0x72;
          pbVar22[3] = 0x6f;
          (pcVar15 + -0x15)[0] = (code)0x72;
          (pcVar15 + -0x15)[1] = (code)0x20;
          pcVar15[-0x13] = (code)0x0;
          local_a0 = (code *)PTR___type_metadata_for_Swift_Bool_100eac570;
          puStack_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
          local_88 = lVar23;
          lVar13 = 0xff;
          local_90 = uVar12;
          FUN_100678b68(0xff,local_130);
          puVar20 = &DAT_100fd5b10;
          local_80 = lVar13;
          lStack_78 = lVar1;
          FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
          lVar13 = 0;
          local_70 = puVar20;
          _swift_getTupleTypeMetadata(0,0x10007,&local_a0,pcVar15 + -0x70,0);
          iVar7 = *(int *)(lVar13 + 0x70);
          iVar3 = *(int *)(lVar13 + 0x80);
          *puVar24 = (char)local_124;
          puVar24[1] = 1;
          thunk_FUN_100676830(puVar24 + 8,uVar16);
          *(undefined8 *)(puVar24 + 0x20) = local_f8;
          FUN_1005f5284(0,uVar17,lVar1,lVar2);
          thunk_FUN_100676830(puVar24 + 0x28);
          (*local_100)(puVar24 + iVar7,local_140,lVar1);
          *(undefined8 *)(puVar24 + iVar3) = param_2;
          uVar21 = 2;
          _swift_storeEnumTagMultiPayload(puVar24,lVar8,2);
          _swift_errorRetain(param_2);
          (**(code **)(lVar25 + 0x28))(unaff_x20,puVar24,lVar8);
        }
      }
      else {
        pbVar22 = (byte *)(pcVar15 + -0x69);
        pbVar22[0] = 0x62;
        pbVar22[1] = 0x6c;
        pbVar22[2] = 0x65;
        pbVar22[3] = 0x20;
        pbVar22 = (byte *)(pcVar15 + -0x70);
        pbVar22[0] = 'i';
        pbVar22[1] = 's';
        pbVar22[2] = 'W';
        pbVar22[3] = 'r';
        pbVar22[4] = 'i';
        pbVar22[5] = 't';
        pbVar22[6] = 'a';
        pbVar22[7] = 'b';
        (pcVar15 + -0x55)[0] = (code)0x6c;
        (pcVar15 + -0x55)[1] = (code)0x20;
        pbVar22 = (byte *)(pcVar15 + -0x65);
        pbVar9 = (byte *)(pcVar15 + -0x5d);
        pbVar9[0] = 't';
        pbVar9[1] = 'e';
        pbVar9[2] = 'O';
        pbVar9[3] = 'u';
        pbVar9[4] = 't';
        pbVar9[5] = 'c';
        pbVar9[6] = 'a';
        pbVar9[7] = 'l';
        pbVar22[0] = 'i';
        pbVar22[1] = 'n';
        pbVar22[2] = 'D';
        pbVar22[3] = 'e';
        pbVar22[4] = 'l';
        pbVar22[5] = 'e';
        pbVar22[6] = 'g';
        pbVar22[7] = 'a';
        pbVar22 = (byte *)(pcVar15 + -0x53);
        pbVar9 = (byte *)(pcVar15 + -0x4b);
        pbVar9[0] = 'd';
        pbVar9[1] = 'Y';
        pbVar9[2] = 'i';
        pbVar9[3] = 'e';
        pbVar9[4] = 'l';
        pbVar9[5] = 'd';
        pbVar9[6] = 's';
        pbVar9[7] = ' ';
        pbVar22[0] = 's';
        pbVar22[1] = 'u';
        pbVar22[2] = 's';
        pbVar22[3] = 'p';
        pbVar22[4] = 'e';
        pbVar22[5] = 'n';
        pbVar22[6] = 'd';
        pbVar22[7] = 'e';
        pbVar22 = (byte *)(pcVar15 + -0x43);
        pbVar9 = (byte *)(pcVar15 + -0x3b);
        pbVar9[0] = 'd';
        pbVar9[1] = 'Y';
        pbVar9[2] = 'i';
        pbVar9[3] = 'e';
        pbVar9[4] = 'l';
        pbVar9[5] = 'd';
        pbVar9[6] = 's';
        pbVar9[7] = ' ';
        pbVar22[0] = 'c';
        pbVar22[1] = 'a';
        pbVar22[2] = 'n';
        pbVar22[3] = 'c';
        pbVar22[4] = 'e';
        pbVar22[5] = 'l';
        pbVar22[6] = 'l';
        pbVar22[7] = 'e';
        pcVar15[-0x23] = (code)0x20;
        pbVar22 = (byte *)(pcVar15 + -0x33);
        pbVar9 = (byte *)(pcVar15 + -0x2b);
        pbVar9[0] = 'Y';
        pbVar9[1] = 'i';
        pbVar9[2] = 'e';
        pbVar9[3] = 'l';
        pbVar9[4] = 'd';
        pbVar9[5] = 'I';
        pbVar9[6] = 'D';
        pbVar9[7] = 's';
        pbVar22[0] = 'b';
        pbVar22[1] = 'u';
        pbVar22[2] = 'f';
        pbVar22[3] = 'f';
        pbVar22[4] = 'e';
        pbVar22[5] = 'r';
        pbVar22[6] = 'e';
        pbVar22[7] = 'd';
        pcVar15[-0x1a] = (code)0x20;
        pbVar22 = (byte *)(pcVar15 + -0x22);
        pbVar22[0] = 'd';
        pbVar22[1] = 'e';
        pbVar22[2] = 'l';
        pbVar22[3] = 'e';
        pbVar22[4] = 'g';
        pbVar22[5] = 'a';
        pbVar22[6] = 't';
        pbVar22[7] = 'e';
        pbVar22 = (byte *)(pcVar15 + -0x19);
        pbVar22[0] = 0x65;
        pbVar22[1] = 0x72;
        pbVar22[2] = 0x72;
        pbVar22[3] = 0x6f;
        (pcVar15 + -0x15)[0] = (code)0x72;
        (pcVar15 + -0x15)[1] = (code)0x20;
        pcVar15[-0x13] = (code)0x0;
        local_a0 = (code *)PTR___type_metadata_for_Swift_Bool_100eac570;
        puStack_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
        local_88 = local_110;
        uVar21 = 0xff;
        local_90 = uVar12;
        FUN_100678b68(0xff,local_130);
        puVar14 = &DAT_100fd5b10;
        local_80 = uVar21;
        lStack_78 = lVar1;
        FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
        lVar23 = 0;
        local_70 = puVar14;
        _swift_getTupleTypeMetadata(0,0x10007,&local_a0,pcVar15 + -0x70,0);
        local_130 = (long)*(int *)(lVar23 + 0x70);
        local_110 = (long)*(int *)(lVar23 + 0x80);
        local_140 = lVar13;
        *puVar24 = (char)local_124;
        puVar24[1] = (char)local_104;
        *(code **)(puVar24 + 8) = pcVar19;
        *(undefined **)(puVar24 + 0x10) = puVar20;
        puVar24[0x18] = uVar4;
        *(undefined8 *)(puVar24 + 0x20) = local_f8;
        local_90 = uVar17;
        local_88 = lVar1;
        local_80 = lVar2;
        FUN_1005e4618(pcVar19,puVar20,uVar5);
        uVar21 = 0;
        FUN_1005f5284(0,uVar17,lVar1,lVar2);
        pcVar15 = FUN_100003284;
        FUN_1005f45bc(FUN_100003284,&local_a0,uVar12,uVar21,
                      PTR___type_metadata_for_Swift_Never_100eadc38,local_138,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        FUN_10000cae0(pcVar19,puVar20,uVar5);
        uVar16 = 0;
        local_a0 = pcVar15;
        Swift::Array<undefined>::typeMetadataAccessor();
        puVar20 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
        _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar16)
        ;
        FUN_100675d50(puVar24 + 0x28,&local_a0,uVar21,uVar16,puVar20);
        (*local_100)(puVar24 + local_130,local_140,lVar1);
        *(undefined8 *)(puVar24 + local_110) = param_2;
        uVar21 = 2;
        _swift_storeEnumTagMultiPayload(puVar24,lVar8,2);
        _swift_errorRetain(param_2);
        (**(code **)(lVar25 + 0x28))(unaff_x20,puVar24,lVar8);
      }
    }
  }
  else {
    if (iVar7 == 2) {
      FUN_10000cae0(*(undefined8 *)(pbVar22 + 8),*(undefined8 *)(pbVar22 + 0x10),pbVar22[0x18]);
      _swift_bridgeObjectRelease(*(undefined8 *)(pbVar22 + 0x20));
      FUN_1005e46ac(*(undefined8 *)(pbVar22 + 0x28),pbVar22[0x30]);
      pbVar22[-0x69] = 0x62;
      pbVar22[-0x68] = 0x6c;
      pbVar22[-0x67] = 0x65;
      pbVar22[-0x66] = 0x20;
      pbVar22[-0x70] = 'i';
      pbVar22[-0x6f] = 's';
      pbVar22[-0x6e] = 'W';
      pbVar22[-0x6d] = 'r';
      pbVar22[-0x6c] = 'i';
      pbVar22[-0x6b] = 't';
      pbVar22[-0x6a] = 'a';
      pbVar22[-0x69] = 'b';
      pbVar22[-0x55] = 0x6c;
      pbVar22[-0x54] = 0x20;
      pbVar22[-0x5d] = 't';
      pbVar22[-0x5c] = 'e';
      pbVar22[-0x5b] = 'O';
      pbVar22[-0x5a] = 'u';
      pbVar22[-0x59] = 't';
      pbVar22[-0x58] = 'c';
      pbVar22[-0x57] = 'a';
      pbVar22[-0x56] = 'l';
      pbVar22[-0x65] = 'i';
      pbVar22[-100] = 'n';
      pbVar22[-99] = 'D';
      pbVar22[-0x62] = 'e';
      pbVar22[-0x61] = 'l';
      pbVar22[-0x60] = 'e';
      pbVar22[-0x5f] = 'g';
      pbVar22[-0x5e] = 'a';
      pbVar22[-0x4b] = 'd';
      pbVar22[-0x4a] = 'Y';
      pbVar22[-0x49] = 'i';
      pbVar22[-0x48] = 'e';
      pbVar22[-0x47] = 'l';
      pbVar22[-0x46] = 'd';
      pbVar22[-0x45] = 's';
      pbVar22[-0x44] = ' ';
      pbVar22[-0x53] = 's';
      pbVar22[-0x52] = 'u';
      pbVar22[-0x51] = 's';
      pbVar22[-0x50] = 'p';
      pbVar22[-0x4f] = 'e';
      pbVar22[-0x4e] = 'n';
      pbVar22[-0x4d] = 'd';
      pbVar22[-0x4c] = 'e';
      pbVar22[-0x3b] = 'd';
      pbVar22[-0x3a] = 'Y';
      pbVar22[-0x39] = 'i';
      pbVar22[-0x38] = 'e';
      pbVar22[-0x37] = 'l';
      pbVar22[-0x36] = 'd';
      pbVar22[-0x35] = 's';
      pbVar22[-0x34] = ' ';
      pbVar22[-0x43] = 'c';
      pbVar22[-0x42] = 'a';
      pbVar22[-0x41] = 'n';
      pbVar22[-0x40] = 'c';
      pbVar22[-0x3f] = 'e';
      pbVar22[-0x3e] = 'l';
      pbVar22[-0x3d] = 'l';
      pbVar22[-0x3c] = 'e';
      pbVar22[-0x23] = 0x20;
      pbVar22[-0x2b] = 'Y';
      pbVar22[-0x2a] = 'i';
      pbVar22[-0x29] = 'e';
      pbVar22[-0x28] = 'l';
      pbVar22[-0x27] = 'd';
      pbVar22[-0x26] = 'I';
      pbVar22[-0x25] = 'D';
      pbVar22[-0x24] = 's';
      pbVar22[-0x33] = 'b';
      pbVar22[-0x32] = 'u';
      pbVar22[-0x31] = 'f';
      pbVar22[-0x30] = 'f';
      pbVar22[-0x2f] = 'e';
      pbVar22[-0x2e] = 'r';
      pbVar22[-0x2d] = 'e';
      pbVar22[-0x2c] = 'd';
      pbVar22[-0x1a] = 0x20;
      pbVar22[-0x22] = 'd';
      pbVar22[-0x21] = 'e';
      pbVar22[-0x20] = 'l';
      pbVar22[-0x1f] = 'e';
      pbVar22[-0x1e] = 'g';
      pbVar22[-0x1d] = 'a';
      pbVar22[-0x1c] = 't';
      pbVar22[-0x1b] = 'e';
      pbVar22[-0x19] = 0x65;
      pbVar22[-0x18] = 0x72;
      pbVar22[-0x17] = 0x72;
      pbVar22[-0x16] = 0x6f;
      pbVar22[-0x15] = 0x72;
      pbVar22[-0x14] = 0x20;
      pbVar22[-0x13] = 0;
      local_a0 = (code *)PTR___type_metadata_for_Swift_Bool_100eac570;
      puStack_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
      uVar21 = 0xff;
      FUN_1005f50a4(0xff,uVar17,lVar1,lVar2);
      uVar16 = 0xff;
      FUN_100678b68(0xff,uVar21);
      uVar21 = 0xff;
      local_90 = uVar16;
      FUN_1005f5284(0xff,uVar17,lVar1,lVar2);
      lVar8 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      lVar13 = 0xff;
      local_88 = lVar8;
      FUN_100678b68(0xff,uVar21);
      puVar20 = &DAT_100fd5b10;
      local_80 = lVar13;
      lStack_78 = lVar1;
      FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
      lVar8 = 0;
      local_70 = puVar20;
      _swift_getTupleTypeMetadata(0,0x10007,&local_a0,pbVar22 + -0x70,0);
      iVar7 = *(int *)(lVar8 + 0x70);
      _swift_errorRelease(*(undefined8 *)(pbVar22 + *(int *)(lVar8 + 0x80)));
      pcVar19 = *(code **)(lVar23 + 8);
      pbVar22 = pbVar22 + iVar7;
      lVar8 = lVar1;
    }
    else {
      if (iVar7 != 3) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1005f2f80);
        (*pcVar19)();
      }
      pcVar19 = *(code **)(lVar25 + 8);
    }
    (*pcVar19)(pbVar22,lVar8);
    uVar21 = 2;
  }
  uVar16 = 0;
  FUN_1005f507c(0,uVar17,lVar1,lVar2);
  _swift_storeEnumTagMultiPayload(param_1,uVar16,uVar21);
  return;
}



/* Address: 0x1005f2f80 | FUN_1005f2f80 */

undefined8 FUN_1005f2f80(long param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long *unaff_x20;
  long lVar13;
  undefined8 uVar14;
  char acStack_120 [7];
  undefined4 uStack_119;
  char acStack_115 [8];
  char acStack_10d [8];
  undefined2 uStack_105;
  char acStack_103 [8];
  char acStack_fb [6];
  char acStack_f5 [8];
  char acStack_ed [8];
  undefined2 uStack_e5;
  char acStack_e3 [8];
  char acStack_db [8];
  char acStack_d3 [8];
  char acStack_cb [6];
  undefined2 uStack_c5;
  char acStack_c3 [8];
  undefined2 auStack_bb [5];
  long local_b0 [3];
  undefined *local_98;
  undefined *apuStack_90 [2];
  undefined8 local_80;
  long local_78;
  long lStack_70;
  undefined *local_68;
  
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  lVar11 = *(long *)(param_2 + 0x18);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = 0;
  FUN_1005f5278(0,uVar8,lVar11,uVar14);
  lVar13 = *(long *)(lVar3 + -8);
  lVar4 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)local_b0 + lVar4;
  (**(code **)(lVar13 + 0x10))(lVar5);
  lVar10 = lVar5;
  _swift_getEnumCaseMultiPayload(lVar5,lVar3);
  iVar2 = (int)lVar10;
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)((long)local_b0 + lVar4 + 8));
      local_b0[2] = *(undefined8 *)((long)local_b0 + lVar4 + 0x10);
      (**(code **)(lVar13 + 8))();
      *unaff_x20 = param_1;
      _swift_storeEnumTagMultiPayload();
      if (param_1 == 0) {
        FUN_1005f535c();
        _swift_allocError(&DAT_100ee94c0,unaff_x20,0,0);
        *unaff_x20 = -0x2fffffffffffffe4;
        unaff_x20[1] = -0x7ffffffeff251750;
        unaff_x20[2] = 0x61e;
      }
      builtin_strncpy(acStack_fb + lVar4 + 2,"ble ",4);
      builtin_strncpy(acStack_103 + lVar4 + 3,"isWritab",8);
      *(undefined2 *)((long)&uStack_e5 + lVar4) = 0x206c;
      builtin_strncpy(acStack_ed + lVar4,"teOutcal",8);
      builtin_strncpy(acStack_f5 + lVar4,"inDelega",8);
      builtin_strncpy(acStack_db + lVar4,"dYields ",8);
      builtin_strncpy(acStack_e3 + lVar4,"cancelle",8);
      builtin_strncpy(acStack_cb + lVar4,"dYields ",8);
      builtin_strncpy(acStack_d3 + lVar4,"suspende",8);
      *(undefined2 *)((long)auStack_bb + lVar4) = 0x20;
      builtin_strncpy(acStack_c3 + lVar4,"delegate",8);
      local_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
      apuStack_90[0] = PTR___type_metadata_for_Swift_Bool_100eac570;
      FUN_1005f5284(0xff,uVar8,lVar11,uVar14);
      uVar6 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar7 = 0xff;
      apuStack_90[1] = (undefined *)uVar6;
      FUN_1005f50a4(0xff,uVar8,lVar11,uVar14);
      uVar8 = 0xff;
      FUN_100678b68(0xff,uVar7);
      lVar10 = 0;
      local_80 = uVar8;
      local_78 = lVar11;
      _swift_getTupleTypeMetadata(0,0x10005,&local_98,acStack_103 + lVar4 + 3,0);
      iVar2 = *(int *)(lVar10 + 0x60);
      _swift_errorRetain(param_1);
      _swift_errorRetain(param_1);
      (**(code **)(*(long *)(lVar11 + -8) + 8))(lVar5 + iVar2,lVar11);
      return local_b0[2];
    }
    lVar4 = 0;
    _swift_getTupleTypeMetadata2
              (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar11,"isWritable delegate ",0);
    iVar2 = *(int *)(lVar4 + 0x30);
    (**(code **)(lVar13 + 8))();
    *unaff_x20 = param_1;
    _swift_storeEnumTagMultiPayload();
    _swift_errorRetain(param_1);
    pcVar12 = *(code **)(*(long *)(lVar11 + -8) + 8);
    lVar5 = lVar5 + iVar2;
  }
  else {
    if (iVar2 == 2) {
      local_b0[1] = *(undefined8 *)((long)local_b0 + lVar4 + 0x10);
      local_b0[2] = *(undefined8 *)((long)local_b0 + lVar4 + 8);
      _swift_bridgeObjectRelease(*(undefined8 *)((long)apuStack_90 + lVar4));
      FUN_1005e46ac(*(undefined8 *)((long)apuStack_90 + lVar4 + 8),
                    *(undefined1 *)((long)&local_80 + lVar4));
      local_b0[0] = lVar5;
      *(undefined4 *)((long)&uStack_119 + lVar4) = 0x20656c62;
      builtin_strncpy(acStack_120 + lVar4,"isWritab",8);
      *(undefined2 *)((long)&uStack_105 + lVar4) = 0x206c;
      builtin_strncpy(acStack_10d + lVar4,"teOutcal",8);
      builtin_strncpy(acStack_115 + lVar4,"inDelega",8);
      builtin_strncpy(acStack_fb + lVar4,"dYields ",8);
      builtin_strncpy(acStack_103 + lVar4,"suspende",8);
      builtin_strncpy(acStack_ed + lVar4 + 2,"dYields ",8);
      builtin_strncpy(acStack_f5 + lVar4 + 2,"cancelle",8);
      acStack_d3[lVar4] = ' ';
      builtin_strncpy(acStack_db + lVar4,"YieldIDs",8);
      builtin_strncpy(acStack_e3 + lVar4,"buffered",8);
      acStack_cb[lVar4 + 1] = ' ';
      pcVar1 = acStack_d3 + lVar4 + 1;
      pcVar1[0] = 'd';
      pcVar1[1] = 'e';
      pcVar1[2] = 'l';
      pcVar1[3] = 'e';
      pcVar1[4] = 'g';
      pcVar1[5] = 'a';
      pcVar1[6] = 't';
      pcVar1[7] = 'e';
      pcVar1 = acStack_cb + lVar4 + 2;
      pcVar1[0] = 'e';
      pcVar1[1] = 'r';
      pcVar1[2] = 'r';
      pcVar1[3] = 'o';
      *(undefined2 *)((long)&uStack_c5 + lVar4) = 0x2072;
      acStack_c3[lVar4] = '\0';
      local_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
      apuStack_90[0] = PTR___type_metadata_for_Swift_Bool_100eac570;
      uVar6 = 0xff;
      FUN_1005f50a4(0xff,uVar8,lVar11,uVar14);
      uVar7 = 0xff;
      FUN_100678b68(0xff,uVar6);
      uVar6 = 0xff;
      apuStack_90[1] = (undefined *)uVar7;
      FUN_1005f5284(0xff,uVar8,lVar11,uVar14);
      uVar8 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar14 = 0xff;
      local_80 = uVar8;
      FUN_100678b68(0xff,uVar6);
      puVar9 = &DAT_100fd5b10;
      local_78 = uVar14;
      lStack_70 = lVar11;
      FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
      lVar10 = 0;
      local_68 = puVar9;
      _swift_getTupleTypeMetadata(0,0x10007,&local_98,acStack_120 + lVar4,0);
      _swift_errorRelease(*(undefined8 *)(lVar5 + *(int *)(lVar10 + 0x80)));
      (**(code **)(lVar13 + 8))();
      *unaff_x20 = param_1;
      _swift_storeEnumTagMultiPayload();
      if (param_1 == 0) {
        FUN_1005f535c();
        _swift_allocError(&DAT_100ee94c0,unaff_x20,0,0);
        *unaff_x20 = -0x2fffffffffffffe4;
        unaff_x20[1] = -0x7ffffffeff251750;
        unaff_x20[2] = 0x627;
      }
      iVar2 = *(int *)(lVar10 + 0x70);
      _swift_errorRetain(param_1);
      _swift_errorRetain(param_1);
      (**(code **)(*(long *)(lVar11 + -8) + 8))(lVar5 + iVar2,lVar11);
      return local_b0[2];
    }
    if (iVar2 != 3) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1005f3454);
      (*pcVar12)();
    }
    pcVar12 = *(code **)(lVar13 + 8);
    lVar11 = lVar3;
  }
  (*pcVar12)(lVar5,lVar11);
  return 0;
}



/* Address: 0x1005f3454 | FUN_1005f3454 */

void FUN_1005f3454(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 *unaff_x20;
  byte *pbVar18;
  long lVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  long lVar22;
  byte abStack_180 [7];
  byte abStack_179 [4];
  byte abStack_175 [8];
  byte abStack_16d [8];
  byte abStack_165 [10];
  byte abStack_15b [6];
  byte abStack_155 [8];
  byte abStack_14d [8];
  byte abStack_145 [10];
  byte abStack_13b [8];
  byte abStack_133 [8];
  byte abStack_12b [6];
  byte abStack_125 [10];
  byte abStack_11b [11];
  byte abStack_110 [4];
  uint local_10c;
  ulong local_108;
  byte abStack_100 [4];
  uint local_fc;
  undefined8 local_f8;
  ulong local_f0;
  byte *local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 local_c8;
  code *local_a0;
  code *pcStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar14 = *(long *)(lVar1 + -8);
  uVar15 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  pbVar21 = abStack_110 + -uVar15;
  lVar22 = (long)pbVar21 - uVar15;
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = 0;
  FUN_1005f5278(0,uVar13,lVar1,uVar17);
  lVar19 = *(long *)(lVar6 + -8);
  uVar15 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar20 = (undefined1 *)(lVar22 - uVar15);
  pbVar18 = puVar20 + -uVar15;
  (**(code **)(lVar19 + 0x10))(pbVar18);
  pbVar7 = pbVar18;
  _swift_getEnumCaseMultiPayload(pbVar18,lVar6);
  iVar5 = (int)pbVar7;
  if (iVar5 < 2) {
    if (iVar5 != 1) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1005f3b8c);
      (*pcVar16)();
    }
    local_f8 = CONCAT44(local_f8._4_4_,(uint)*pbVar18);
    local_e8 = (byte *)CONCAT44(local_e8._4_4_,(uint)pbVar18[1]);
    local_f0 = *(ulong *)(pbVar18 + 8);
    local_e0 = *(code **)(pbVar18 + 0x10);
    local_d8 = *(code **)(pbVar18 + 0x18);
    local_d0 = (code *)CONCAT44(local_d0._4_4_,(uint)pbVar18[0x20]);
    pbVar18[-0x49] = 0x62;
    pbVar18[-0x48] = 0x6c;
    pbVar18[-0x47] = 0x65;
    pbVar18[-0x46] = 0x20;
    pbVar18[-0x50] = 'i';
    pbVar18[-0x4f] = 's';
    pbVar18[-0x4e] = 'W';
    pbVar18[-0x4d] = 'r';
    pbVar18[-0x4c] = 'i';
    pbVar18[-0x4b] = 't';
    pbVar18[-0x4a] = 'a';
    pbVar18[-0x49] = 'b';
    pbVar18[-0x35] = 0x6c;
    pbVar18[-0x34] = 0x20;
    pbVar18[-0x3d] = 't';
    pbVar18[-0x3c] = 'e';
    pbVar18[-0x3b] = 'O';
    pbVar18[-0x3a] = 'u';
    pbVar18[-0x39] = 't';
    pbVar18[-0x38] = 'c';
    pbVar18[-0x37] = 'a';
    pbVar18[-0x36] = 'l';
    pbVar18[-0x45] = 'i';
    pbVar18[-0x44] = 'n';
    pbVar18[-0x43] = 'D';
    pbVar18[-0x42] = 'e';
    pbVar18[-0x41] = 'l';
    pbVar18[-0x40] = 'e';
    pbVar18[-0x3f] = 'g';
    pbVar18[-0x3e] = 'a';
    pbVar18[-0x2b] = 'd';
    pbVar18[-0x2a] = 'Y';
    pbVar18[-0x29] = 'i';
    pbVar18[-0x28] = 'e';
    pbVar18[-0x27] = 'l';
    pbVar18[-0x26] = 'd';
    pbVar18[-0x25] = 's';
    pbVar18[-0x24] = ' ';
    pbVar18[-0x33] = 'c';
    pbVar18[-0x32] = 'a';
    pbVar18[-0x31] = 'n';
    pbVar18[-0x30] = 'c';
    pbVar18[-0x2f] = 'e';
    pbVar18[-0x2e] = 'l';
    pbVar18[-0x2d] = 'l';
    pbVar18[-0x2c] = 'e';
    pbVar18[-0x1b] = 'd';
    pbVar18[-0x1a] = 'Y';
    pbVar18[-0x19] = 'i';
    pbVar18[-0x18] = 'e';
    pbVar18[-0x17] = 'l';
    pbVar18[-0x16] = 'd';
    pbVar18[-0x15] = 's';
    pbVar18[-0x14] = ' ';
    pbVar18[-0x23] = 's';
    pbVar18[-0x22] = 'u';
    pbVar18[-0x21] = 's';
    pbVar18[-0x20] = 'p';
    pbVar18[-0x1f] = 'e';
    pbVar18[-0x1e] = 'n';
    pbVar18[-0x1d] = 'd';
    pbVar18[-0x1c] = 'e';
    pbVar18[-0xb] = 0x20;
    pbVar18[-10] = 0;
    pbVar18[-0x13] = 'd';
    pbVar18[-0x12] = 'e';
    pbVar18[-0x11] = 'l';
    pbVar18[-0x10] = 'e';
    pbVar18[-0xf] = 'g';
    pbVar18[-0xe] = 'a';
    pbVar18[-0xd] = 't';
    pbVar18[-0xc] = 'e';
    local_a0 = (code *)PTR___type_metadata_for_Swift_Bool_100eac570;
    pcStack_98 = (code *)PTR___type_metadata_for_Swift_Bool_100eac570;
    FUN_1005f5284(0xff,uVar13,lVar1,uVar17);
    uVar9 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    uVar10 = 0xff;
    local_c8 = uVar17;
    local_90 = uVar9;
    FUN_1005f50a4(0xff,uVar13,lVar1,uVar17);
    uVar17 = 0xff;
    FUN_100678b68(0xff,uVar10);
    lVar8 = 0;
    local_88 = uVar17;
    local_80 = lVar1;
    _swift_getTupleTypeMetadata(0,0x10005,&local_a0,pbVar18 + -0x50,0);
    pcVar16 = *(code **)(lVar14 + 0x20);
    (*pcVar16)(lVar22,pbVar18 + *(int *)(lVar8 + 0x60),lVar1);
    if ((int)local_e8 != 1) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1005f3b84);
      (*pcVar16)();
    }
    local_a0 = local_e0;
    pcStack_98 = local_d8;
    local_90 = CONCAT71(local_90._1_7_,(char)local_d0);
    uVar17 = 0;
    FUN_100678b68(0,uVar10);
    _swift_getWitnessTable(0x100c6d198,uVar17);
    bVar4 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (!bVar4) {
      iVar5 = *(int *)(lVar8 + 0x60);
      *puVar20 = (char)local_f8;
      puVar20[1] = 0;
      *(ulong *)(puVar20 + 8) = local_f0;
      thunk_FUN_100676830(puVar20 + 0x10,uVar10);
      (*pcVar16)(puVar20 + iVar5,lVar22,lVar1);
      _swift_storeEnumTagMultiPayload(puVar20,lVar6,1);
      (**(code **)(lVar19 + 0x28))(unaff_x20,puVar20,lVar6);
      *param_1 = local_e0;
      param_1[1] = local_d8;
      *(char *)(param_1 + 2) = (char)local_d0;
LAB_1005f3b18:
      lVar6 = 0;
      FUN_1005f53ec(0,uVar13,lVar1,local_c8);
      uVar13 = 0;
      goto LAB_1005f3b3c;
    }
    (**(code **)(lVar19 + 8))(unaff_x20,lVar6);
    iVar5 = *(int *)(lVar8 + 0x60);
    *(char *)unaff_x20 = (char)local_f8;
    *(undefined1 *)((long)unaff_x20 + 1) = 0;
    unaff_x20[1] = local_f0;
    unaff_x20[2] = local_e0;
    unaff_x20[3] = local_d8;
    *(char *)(unaff_x20 + 4) = (char)local_d0;
    (*pcVar16)((long)unaff_x20 + (long)iVar5,lVar22,lVar1);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar6,1);
    uVar17 = local_c8;
  }
  else {
    if (iVar5 == 2) {
      local_e8 = pbVar18;
      local_10c = (uint)*pbVar18;
      local_e0 = (code *)CONCAT44(local_e0._4_4_,(uint)pbVar18[1]);
      local_d8 = *(code **)(pbVar18 + 8);
      local_d0 = *(code **)(pbVar18 + 0x10);
      local_f0 = CONCAT44(local_f0._4_4_,(uint)pbVar18[0x18]);
      local_f8 = *(undefined8 *)(pbVar18 + 0x20);
      local_108 = *(undefined8 *)(pbVar18 + 0x28);
      local_fc = (uint)pbVar18[0x30];
      pbVar18[-0x69] = 0x62;
      pbVar18[-0x68] = 0x6c;
      pbVar18[-0x67] = 0x65;
      pbVar18[-0x66] = 0x20;
      pbVar18[-0x70] = 'i';
      pbVar18[-0x6f] = 's';
      pbVar18[-0x6e] = 'W';
      pbVar18[-0x6d] = 'r';
      pbVar18[-0x6c] = 'i';
      pbVar18[-0x6b] = 't';
      pbVar18[-0x6a] = 'a';
      pbVar18[-0x69] = 'b';
      pbVar18[-0x55] = 0x6c;
      pbVar18[-0x54] = 0x20;
      pbVar18[-0x5d] = 't';
      pbVar18[-0x5c] = 'e';
      pbVar18[-0x5b] = 'O';
      pbVar18[-0x5a] = 'u';
      pbVar18[-0x59] = 't';
      pbVar18[-0x58] = 'c';
      pbVar18[-0x57] = 'a';
      pbVar18[-0x56] = 'l';
      pbVar18[-0x65] = 'i';
      pbVar18[-100] = 'n';
      pbVar18[-99] = 'D';
      pbVar18[-0x62] = 'e';
      pbVar18[-0x61] = 'l';
      pbVar18[-0x60] = 'e';
      pbVar18[-0x5f] = 'g';
      pbVar18[-0x5e] = 'a';
      pbVar18[-0x4b] = 'd';
      pbVar18[-0x4a] = 'Y';
      pbVar18[-0x49] = 'i';
      pbVar18[-0x48] = 'e';
      pbVar18[-0x47] = 'l';
      pbVar18[-0x46] = 'd';
      pbVar18[-0x45] = 's';
      pbVar18[-0x44] = ' ';
      pbVar18[-0x53] = 's';
      pbVar18[-0x52] = 'u';
      pbVar18[-0x51] = 's';
      pbVar18[-0x50] = 'p';
      pbVar18[-0x4f] = 'e';
      pbVar18[-0x4e] = 'n';
      pbVar18[-0x4d] = 'd';
      pbVar18[-0x4c] = 'e';
      pbVar18[-0x3b] = 'd';
      pbVar18[-0x3a] = 'Y';
      pbVar18[-0x39] = 'i';
      pbVar18[-0x38] = 'e';
      pbVar18[-0x37] = 'l';
      pbVar18[-0x36] = 'd';
      pbVar18[-0x35] = 's';
      pbVar18[-0x34] = ' ';
      pbVar18[-0x43] = 'c';
      pbVar18[-0x42] = 'a';
      pbVar18[-0x41] = 'n';
      pbVar18[-0x40] = 'c';
      pbVar18[-0x3f] = 'e';
      pbVar18[-0x3e] = 'l';
      pbVar18[-0x3d] = 'l';
      pbVar18[-0x3c] = 'e';
      pbVar18[-0x23] = 0x20;
      pbVar18[-0x2b] = 'Y';
      pbVar18[-0x2a] = 'i';
      pbVar18[-0x29] = 'e';
      pbVar18[-0x28] = 'l';
      pbVar18[-0x27] = 'd';
      pbVar18[-0x26] = 'I';
      pbVar18[-0x25] = 'D';
      pbVar18[-0x24] = 's';
      pbVar18[-0x33] = 'b';
      pbVar18[-0x32] = 'u';
      pbVar18[-0x31] = 'f';
      pbVar18[-0x30] = 'f';
      pbVar18[-0x2f] = 'e';
      pbVar18[-0x2e] = 'r';
      pbVar18[-0x2d] = 'e';
      pbVar18[-0x2c] = 'd';
      pbVar18[-0x1a] = 0x20;
      pbVar18[-0x22] = 'd';
      pbVar18[-0x21] = 'e';
      pbVar18[-0x20] = 'l';
      pbVar18[-0x1f] = 'e';
      pbVar18[-0x1e] = 'g';
      pbVar18[-0x1d] = 'a';
      pbVar18[-0x1c] = 't';
      pbVar18[-0x1b] = 'e';
      pbVar18[-0x19] = 0x65;
      pbVar18[-0x18] = 0x72;
      pbVar18[-0x17] = 0x72;
      pbVar18[-0x16] = 0x6f;
      pbVar18[-0x15] = 0x72;
      pbVar18[-0x14] = 0x20;
      pbVar18[-0x13] = 0;
      local_a0 = (code *)PTR___type_metadata_for_Swift_Bool_100eac570;
      pcStack_98 = (code *)PTR___type_metadata_for_Swift_Bool_100eac570;
      uVar9 = 0xff;
      FUN_1005f50a4(0xff,uVar13,lVar1,uVar17);
      uVar10 = 0xff;
      FUN_100678b68(0xff,uVar9);
      uVar11 = 0xff;
      local_c8 = uVar17;
      local_90 = uVar10;
      FUN_1005f5284(0xff,uVar13,lVar1,uVar17);
      uVar17 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      lVar22 = 0xff;
      local_88 = uVar17;
      FUN_100678b68(0xff,uVar11);
      puVar12 = &DAT_100fd5b10;
      local_80 = lVar22;
      lStack_78 = lVar1;
      FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
      lVar22 = 0;
      local_70 = puVar12;
      _swift_getTupleTypeMetadata(0,0x10007,&local_a0,pbVar18 + -0x70,0);
      uVar17 = *(undefined8 *)(pbVar18 + *(int *)(lVar22 + 0x80));
      pcVar16 = *(code **)(lVar14 + 0x20);
      (*pcVar16)(pbVar21,pbVar18 + *(int *)(lVar22 + 0x70),lVar1);
      if ((int)local_e0 != 1) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1005f3b80);
        (*pcVar16)();
      }
      local_a0 = local_d8;
      pcStack_98 = local_d0;
      uVar15 = local_f0 & 0xffffffff;
      uVar3 = (undefined1)local_f0;
      local_90 = CONCAT71(local_90._1_7_,uVar3);
      uVar10 = 0;
      local_e0 = pcVar16;
      FUN_100678b68(0,uVar9);
      _swift_getWitnessTable(0x100c6d198,uVar10);
      bVar4 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (!bVar4) {
        (**(code **)(lVar19 + 8))(unaff_x20,lVar6);
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar6,4);
        iVar5 = *(int *)(lVar22 + 0x70);
        iVar2 = *(int *)(lVar22 + 0x80);
        *puVar20 = (char)local_10c;
        puVar20[1] = 0;
        thunk_FUN_100676830(puVar20 + 8,uVar9);
        *(undefined8 *)(puVar20 + 0x20) = local_f8;
        *(ulong *)(puVar20 + 0x28) = local_108;
        puVar20[0x30] = (char)local_fc;
        (*local_e0)(puVar20 + iVar5,pbVar21,lVar1);
        *(undefined8 *)(puVar20 + iVar2) = uVar17;
        _swift_storeEnumTagMultiPayload(puVar20,lVar6,2);
        (**(code **)(lVar19 + 0x28))(unaff_x20,puVar20,lVar6);
        *param_1 = local_d8;
        param_1[1] = local_d0;
        *(undefined1 *)(param_1 + 2) = uVar3;
        goto LAB_1005f3b18;
      }
      FUN_1005e46ac(local_108,local_fc);
      _swift_bridgeObjectRelease(local_f8);
      FUN_10000cae0(local_d8,local_d0,uVar15);
      (**(code **)(lVar19 + 8))(unaff_x20,lVar6);
      *unaff_x20 = 0;
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar6,3);
      puVar12 = &DAT_100fd5b10;
      FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
      lVar6 = 0;
      _swift_getTupleTypeMetadata2(0,lVar1,puVar12,0,0);
      iVar5 = *(int *)(lVar6 + 0x30);
      (*local_e0)(param_1,pbVar21,lVar1);
      *(undefined8 *)((long)param_1 + (long)iVar5) = uVar17;
      lVar6 = 0;
      FUN_1005f53ec(0,uVar13,lVar1,local_c8);
      uVar13 = 1;
LAB_1005f3b3c:
      _swift_storeEnumTagMultiPayload(param_1,lVar6,uVar13);
      pcVar16 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
      uVar13 = 0;
      goto LAB_1005f3b58;
    }
    if (iVar5 != 3) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1005f3b88);
      (*pcVar16)();
    }
    (**(code **)(lVar19 + 8))(pbVar18,lVar6);
  }
  lVar6 = 0;
  FUN_1005f53ec(0,uVar13,lVar1,uVar17);
  pcVar16 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  uVar13 = 1;
LAB_1005f3b58:
  (*pcVar16)(param_1,uVar13,1,lVar6);
  return;
}



/* Address: 0x1005f3b8c | FUN_1005f3b8c */

void FUN_1005f3b8c(void)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_1001a7dac(*unaff_x20);
  return;
}



/* Address: 0x1005f3b94 | FUN_1005f3b94 */

void FUN_1005f3b94(void)

{
  FUN_1005f457c();
  return;
}



/* Address: 0x1005f3ba0 | FUN_1005f3ba0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005f4310 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1005f3ba0(char *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  __int64 _Var9;
  _StringGuts _Var10;
  char *pcVar11;
  char *pcVar12;
  undefined **ppuVar13;
  code *pcVar14;
  char *pcVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  void *pvVar19;
  char *pcVar20;
  char *pcVar21;
  ulong uVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  undefined1 auVar39 [16];
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  char acStack_170 [7];
  undefined4 uStack_169;
  char acStack_165 [8];
  char acStack_15d [8];
  undefined2 uStack_155;
  char acStack_153 [8];
  char acStack_14b [6];
  char acStack_145 [8];
  char acStack_13d [8];
  undefined2 uStack_135;
  char acStack_133 [8];
  char acStack_12b [8];
  char acStack_123 [8];
  char acStack_11b [6];
  undefined2 uStack_115;
  char acStack_113 [8];
  undefined2 auStack_10b [5];
  undefined8 local_100;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined *puStack_e8;
  char *local_e0 [2];
  ulong local_d0;
  undefined1 *local_c8;
  undefined *local_c0;
  __int64 local_b8;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  char *pcStack_78;
  undefined *local_70;
  
  lVar16 = *(long *)(param_1 + -8);
  lVar8 = -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar15 = (char *)((long)&local_100 + lVar8);
  pcVar11 = param_1;
  (**(code **)(lVar16 + 0x10))(pcVar15);
  pcVar21 = pcVar15;
  _Var10.unknown = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar4 = (int)pcVar21;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      cVar1 = *pcVar15;
      local_a0 = (undefined *)0x0;
      local_98 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x17,_Var10);
      _swift_bridgeObjectRelease(local_98);
      local_a0 = (undefined *)0xd000000000000014;
      local_98 = (undefined1 *)0x8000000100dae990;
      pcVar21 = (char *)0x65757274;
      if (cVar1 == '\0') {
        pcVar21 = (char *)0x65736c6166;
      }
      puVar18 = &DAT_e400000000000000;
      if (cVar1 == '\0') {
        puVar18 = &DAT_e500000000000000;
      }
      pcVar20 = *(char **)(param_1 + 0x18);
      pcVar11 = "isWritable delegate ";
      lVar8 = 0;
      pcVar12 = pcVar20;
      _swift_getTupleTypeMetadata2
                (0,PTR___type_metadata_for_Swift_Bool_100eac570,pcVar20,"isWritable delegate ",0);
      iVar4 = *(int *)(lVar8 + 0x30);
      SVar29.bridgeObject = puVar18;
      SVar29.str = pcVar21;
      SVar40.bridgeObject = pcVar11;
      SVar40.str = pcVar12;
      Swift::String::append(SVar29,SVar40);
      _swift_bridgeObjectRelease(puVar18);
      SVar23.bridgeObject = (void *)0xe100000000000000;
      SVar23.str = (char *)0x29;
      SVar41.bridgeObject = pcVar11;
      SVar41.str = pcVar12;
      Swift::String::append(SVar23,SVar41);
      pcVar14 = *(code **)(*(long *)(pcVar20 + -8) + 8);
      puVar17 = local_a0;
      puVar18 = local_98;
    }
    else {
      cVar1 = *pcVar15;
      cVar2 = *(char *)((long)&local_100 + lVar8 + 1);
      local_e0[1] = (char *)*(undefined8 *)((long)&local_f8 + lVar8);
      local_c8 = *(undefined1 **)((long)&puStack_e8 + lVar8);
      local_c0 = *(undefined **)((long)&local_f0 + lVar8);
      local_d0 = CONCAT44(local_d0._4_4_,(uint)*(byte *)((long)local_e0 + lVar8));
      local_a0 = (undefined *)0x0;
      local_98 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x5a,_Var10);
      local_b0 = local_a0;
      puStack_a8 = local_98;
      SVar32.bridgeObject = (void *)0x8000000100dae970;
      SVar32.str = (char *)0xd000000000000016;
      SVar52.bridgeObject = param_4;
      SVar52.str = pcVar11;
      Swift::String::append(SVar32,SVar52);
      pcVar21 = (char *)0x65757274;
      if (cVar1 == '\0') {
        pcVar21 = (char *)0x65736c6166;
      }
      puVar18 = &DAT_e400000000000000;
      if (cVar1 == '\0') {
        puVar18 = &DAT_e500000000000000;
      }
      SVar33.bridgeObject = puVar18;
      SVar33.str = pcVar21;
      SVar53.bridgeObject = param_4;
      SVar53.str = pcVar11;
      Swift::String::append(SVar33,SVar53);
      _swift_bridgeObjectRelease(puVar18);
      SVar34.bridgeObject = (void *)0x8000000100dae8f0;
      SVar34.str = (char *)0xd000000000000015;
      SVar54.bridgeObject = param_4;
      SVar54.str = pcVar11;
      Swift::String::append(SVar34,SVar54);
      bVar3 = cVar2 == '\0';
      local_e0[0] = (char *)0x65757274;
      if (bVar3) {
        local_e0[0] = (char *)0x65736c6166;
      }
      puVar18 = &DAT_e400000000000000;
      if (bVar3) {
        puVar18 = &DAT_e500000000000000;
      }
      pcVar21 = acStack_153 + lVar8 + 3;
      builtin_strncpy(acStack_14b + lVar8 + 2,"ble ",4);
      builtin_strncpy(acStack_153 + lVar8 + 3,"isWritab",8);
      *(undefined2 *)((long)&uStack_135 + lVar8) = 0x206c;
      builtin_strncpy(acStack_13d + lVar8,"teOutcal",8);
      builtin_strncpy(acStack_145 + lVar8,"inDelega",8);
      builtin_strncpy(acStack_12b + lVar8,"dYields ",8);
      builtin_strncpy(acStack_133 + lVar8,"cancelle",8);
      builtin_strncpy(acStack_11b + lVar8,"dYields ",8);
      builtin_strncpy(acStack_123 + lVar8,"suspende",8);
      *(undefined2 *)((long)auStack_10b + lVar8) = 0x20;
      builtin_strncpy(acStack_113 + lVar8,"delegate",8);
      local_a0 = PTR___type_metadata_for_Swift_Bool_100eac570;
      local_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      pcVar20 = *(char **)(param_1 + 0x18);
      pvVar19 = *(void **)(param_1 + 0x20);
      FUN_1005f5284(0xff,uVar7,pcVar20,pvVar19);
      uVar5 = 0xff;
      Swift::Array<undefined>::typeMetadataAccessor();
      uVar6 = 0xff;
      local_90 = uVar5;
      FUN_1005f50a4(0xff,uVar7,pcVar20,pvVar19);
      uVar5 = 0xff;
      FUN_100678b68(0xff,uVar6);
      ppuVar13 = &local_a0;
      lVar8 = 0;
      local_88 = uVar5;
      local_80 = pcVar20;
      _swift_getTupleTypeMetadata(0,0x10005,ppuVar13,pcVar21,0);
      iVar4 = *(int *)(lVar8 + 0x60);
      SVar35.bridgeObject = puVar18;
      SVar35.str = local_e0[0];
      SVar55.bridgeObject = pcVar21;
      SVar55.str = (char *)ppuVar13;
      Swift::String::append(SVar35,SVar55);
      _swift_bridgeObjectRelease(puVar18);
      SVar36.bridgeObject = (void *)0x8000000100dae930;
      SVar36.str = (char *)0xd000000000000013;
      SVar56.bridgeObject = pcVar21;
      SVar56.str = (char *)ppuVar13;
      Swift::String::append(SVar36,SVar56);
      uVar5 = 0;
      pcVar11 = pcVar20;
      FUN_1005f5284(0,uVar7);
      pcVar21 = local_e0[1];
      puVar17 = (undefined *)Swift::Array<undefined>::get_count(uVar5,uVar5);
      _swift_bridgeObjectRelease(pcVar21);
      local_a0 = puVar17;
      SVar29 = Swift::CustomStringConvertible::get_description();
      SVar57.bridgeObject = pvVar19;
      SVar57.str = pcVar11;
      Swift::String::append(SVar29,SVar57);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
      SVar37.bridgeObject = (void *)0x8000000100dae910;
      SVar37.str = (char *)0xd000000000000013;
      SVar58.bridgeObject = pvVar19;
      SVar58.str = pcVar11;
      Swift::String::append(SVar37,SVar58);
      puVar17 = local_c0;
      puVar18 = local_c8;
      local_a0 = local_c0;
      local_98 = local_c8;
      pcVar21 = (char *)(local_d0 & 0xffffffff);
      local_90 = CONCAT71(local_90._1_7_,(char)local_d0);
      uVar7 = 0;
      FUN_100678b68(0,uVar6);
      _swift_getWitnessTable(0x100c6d198,uVar7);
      _Var9 = (extension_Swift)::Swift::Collection::get_count();
      FUN_10000cae0(puVar17,puVar18);
      local_b8 = _Var9;
      SVar29 = Swift::CustomStringConvertible::get_description();
      SVar59.bridgeObject = pvVar19;
      SVar59.str = pcVar21;
      Swift::String::append(SVar29,SVar59);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
      SVar38.bridgeObject = (void *)0xe100000000000000;
      SVar38.str = (char *)0x29;
      SVar60.bridgeObject = pvVar19;
      SVar60.str = pcVar21;
      Swift::String::append(SVar38,SVar60);
      pcVar14 = *(code **)(*(long *)(pcVar20 + -8) + 8);
      puVar17 = local_b0;
      puVar18 = puStack_a8;
    }
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        (**(code **)(lVar16 + 8))(pcVar15,param_1);
        puVar18 = &DAT_e800000000000000;
        puVar17 = (undefined *)0x64656873696e6966;
      }
      else {
        puVar18 = (undefined1 *)0xe900000000000067;
        puVar17 = (undefined *)0x6e69796669646f6d;
      }
      goto LAB_1005f4414;
    }
    cVar1 = *pcVar15;
    local_f0 = *(undefined8 *)((long)&local_f0 + lVar8);
    puStack_e8 = *(undefined **)((long)&local_f8 + lVar8);
    local_d0 = *(ulong *)((long)local_e0 + lVar8);
    local_c0 = *(undefined **)((long)local_e0 + lVar8 + 8);
    local_f8 = (uint)*(byte *)((long)&local_100 + lVar8 + 1);
    local_f4 = (uint)*(byte *)((long)&puStack_e8 + lVar8);
    local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,(uint)*(byte *)((long)&local_d0 + lVar8));
    pcVar11 = acStack_170 + lVar8;
    *(undefined4 *)((long)&uStack_169 + lVar8) = 0x20656c62;
    builtin_strncpy(acStack_170 + lVar8,"isWritab",8);
    *(undefined2 *)((long)&uStack_155 + lVar8) = 0x206c;
    builtin_strncpy(acStack_15d + lVar8,"teOutcal",8);
    builtin_strncpy(acStack_165 + lVar8,"inDelega",8);
    builtin_strncpy(acStack_14b + lVar8,"dYields ",8);
    builtin_strncpy(acStack_153 + lVar8,"suspende",8);
    builtin_strncpy(acStack_13d + lVar8 + 2,"dYields ",8);
    builtin_strncpy(acStack_145 + lVar8 + 2,"cancelle",8);
    acStack_123[lVar8] = ' ';
    builtin_strncpy(acStack_12b + lVar8,"YieldIDs",8);
    builtin_strncpy(acStack_133 + lVar8,"buffered",8);
    acStack_11b[lVar8 + 1] = ' ';
    pcVar21 = acStack_123 + lVar8 + 1;
    pcVar21[0] = 'd';
    pcVar21[1] = 'e';
    pcVar21[2] = 'l';
    pcVar21[3] = 'e';
    pcVar21[4] = 'g';
    pcVar21[5] = 'a';
    pcVar21[6] = 't';
    pcVar21[7] = 'e';
    pcVar21 = acStack_11b + lVar8 + 2;
    pcVar21[0] = 'e';
    pcVar21[1] = 'r';
    pcVar21[2] = 'r';
    pcVar21[3] = 'o';
    *(undefined2 *)((long)&uStack_115 + lVar8) = 0x2072;
    acStack_113[lVar8] = '\0';
    local_a0 = PTR___type_metadata_for_Swift_Bool_100eac570;
    local_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    pcVar20 = *(char **)(param_1 + 0x18);
    pcVar21 = *(char **)(param_1 + 0x20);
    uVar5 = 0xff;
    local_e0[0] = pcVar21;
    local_e0[1] = (char *)uVar7;
    FUN_1005f50a4(0xff,uVar7,pcVar20,pcVar21);
    uVar6 = 0xff;
    local_100 = uVar5;
    FUN_100678b68(0xff,uVar5);
    uVar5 = 0xff;
    local_90 = uVar6;
    FUN_1005f5284(0xff,uVar7,pcVar20,pcVar21);
    uVar7 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    pcVar21 = (char *)0xff;
    local_88 = uVar7;
    FUN_100678b68(0xff,uVar5);
    puVar17 = &DAT_100fd5b10;
    local_80 = pcVar21;
    pcStack_78 = pcVar20;
    FUN_1000f8b08(&DAT_100fd5b10,&DAT_100c66920);
    _Var10.unknown = (undefined *)0x10007;
    ppuVar13 = &local_a0;
    lVar8 = 0;
    local_70 = puVar17;
    _swift_getTupleTypeMetadata();
    _swift_errorRelease(*(undefined8 *)(pcVar15 + *(int *)(lVar8 + 0x80)));
    local_a0 = (undefined *)0x0;
    local_98 = (undefined1 *)0xe000000000000000;
    Swift::_StringGuts::grow(0x74,_Var10);
    local_b0 = local_a0;
    puStack_a8 = local_98;
    SVar24.bridgeObject = (void *)0x8000000100dae8d0;
    SVar24.str = (char *)0xd00000000000001b;
    SVar42.bridgeObject = pcVar11;
    SVar42.str = (char *)ppuVar13;
    Swift::String::append(SVar24,SVar42);
    pcVar21 = (char *)0x65757274;
    if (cVar1 == '\0') {
      pcVar21 = (char *)0x65736c6166;
    }
    puVar18 = &DAT_e400000000000000;
    if (cVar1 == '\0') {
      puVar18 = &DAT_e500000000000000;
    }
    SVar25.bridgeObject = puVar18;
    SVar25.str = pcVar21;
    SVar43.bridgeObject = pcVar11;
    SVar43.str = (char *)ppuVar13;
    Swift::String::append(SVar25,SVar43);
    _swift_bridgeObjectRelease(puVar18);
    SVar26.bridgeObject = (void *)0x8000000100dae8f0;
    SVar26.str = (char *)0xd000000000000015;
    SVar44.bridgeObject = pcVar11;
    SVar44.str = (char *)ppuVar13;
    Swift::String::append(SVar26,SVar44);
    pcVar21 = (char *)0x65757274;
    if (local_f8 == 0) {
      pcVar21 = (char *)0x65736c6166;
    }
    puVar18 = &DAT_e400000000000000;
    if (local_f8 == 0) {
      puVar18 = &DAT_e500000000000000;
    }
    iVar4 = *(int *)(lVar8 + 0x70);
    SVar27.bridgeObject = puVar18;
    SVar27.str = pcVar21;
    SVar45.bridgeObject = pcVar11;
    SVar45.str = (char *)ppuVar13;
    Swift::String::append(SVar27,SVar45);
    _swift_bridgeObjectRelease(puVar18);
    SVar28.bridgeObject = (void *)0x8000000100dae910;
    SVar28.str = (char *)0xd000000000000013;
    SVar46.bridgeObject = pcVar11;
    SVar46.str = (char *)ppuVar13;
    Swift::String::append(SVar28,SVar46);
    puVar17 = puStack_e8;
    uVar7 = local_f0;
    local_a0 = puStack_e8;
    local_98 = (undefined1 *)local_f0;
    pcVar21 = (char *)(ulong)local_f4;
    local_90 = CONCAT71(local_90._1_7_,(char)local_f4);
    uVar5 = 0;
    FUN_100678b68(0,local_100);
    _swift_getWitnessTable(0x100c6d198,uVar5);
    _Var9 = (extension_Swift)::Swift::Collection::get_count();
    FUN_10000cae0(puVar17,uVar7);
    local_b8 = _Var9;
    SVar29 = Swift::CustomStringConvertible::get_description();
    SVar47.bridgeObject = pcVar11;
    SVar47.str = pcVar21;
    Swift::String::append(SVar29,SVar47);
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    SVar30.bridgeObject = (void *)0x8000000100dae930;
    SVar30.str = (char *)0xd000000000000013;
    SVar48.bridgeObject = pcVar11;
    SVar48.str = pcVar21;
    Swift::String::append(SVar30,SVar48);
    uVar7 = 0;
    pcVar21 = pcVar20;
    pcVar11 = local_e0[0];
    FUN_1005f5284(0,local_e0[1]);
    uVar22 = local_d0;
    puVar17 = (undefined *)Swift::Array<undefined>::get_count(uVar7,uVar7);
    _swift_bridgeObjectRelease(uVar22);
    local_a0 = puVar17;
    SVar29 = Swift::CustomStringConvertible::get_description();
    SVar49.bridgeObject = pcVar11;
    SVar49.str = pcVar21;
    Swift::String::append(SVar29,SVar49);
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    SVar31.bridgeObject = (void *)0x8000000100dae950;
    SVar31.str = (char *)0xd000000000000014;
    SVar50.bridgeObject = pcVar11;
    SVar50.str = pcVar21;
    Swift::String::append(SVar31,SVar50);
    puVar17 = local_c0;
    local_a0 = local_c0;
    uVar22 = (ulong)local_c8 & 0xffffffff;
    local_98 = (undefined1 *)CONCAT71(local_98._1_7_,(char)local_c8);
    uVar5 = 0;
    FUN_100678b68(0,uVar7);
    _swift_getWitnessTable(0x100c6d198,uVar5);
    _Var9 = (extension_Swift)::Swift::Collection::get_count();
    FUN_1005e46ac(puVar17,uVar22);
    local_b8 = _Var9;
    SVar29 = Swift::CustomStringConvertible::get_description();
    SVar51.bridgeObject = pcVar11;
    SVar51.str = pcVar21;
    Swift::String::append(SVar29,SVar51);
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    pcVar14 = *(code **)(*(long *)(pcVar20 + -8) + 8);
    puVar17 = local_b0;
    puVar18 = puStack_a8;
  }
  (*pcVar14)(pcVar15 + iVar4,pcVar20);
LAB_1005f4414:
  auVar39._8_8_ = puVar18;
  auVar39._0_8_ = puVar17;
  return auVar39;
}



/* Address: 0x1005f443c | thunk_FUN_1005f3ba0 */

void thunk_FUN_1005f3ba0(void)

{
  FUN_1005f3ba0();
  return;
}



/* Address: 0x1005f4440 | FUN_1005f4440 */

void FUN_1005f4440(undefined8 param_1)

{
  FUN_1005f444c(param_1,FUN_1005f5278);
  return;
}



/* Address: 0x1005f444c | FUN_1005f444c */

void FUN_1005f444c(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
             *(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001005f448c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1005f4490 | FUN_1005f4490 */

void FUN_1005f4490(undefined8 param_1,undefined8 param_2)

{
  FUN_1005f449c(param_1,param_2,FUN_1005f5278);
  return;
}



/* Address: 0x1005f449c | FUN_1005f449c */

void FUN_1005f449c(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
             *(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001005f44e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x1005f44e4 | FUN_1005f44e4 */

void FUN_1005f44e4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_2 & 1) == 0) {
    (**(code **)(*(long *)(param_5 + -8) + 8))(param_3,param_5);
    uVar2 = 2;
  }
  else {
    (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_3,param_5);
    uVar2 = 0;
  }
  uVar1 = 0;
  FUN_1005f539c(0,param_4,param_5,param_6);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1005f4570 | FUN_1005f4570 */

void FUN_1005f4570(void)

{
  FUN_1005f457c();
  return;
}



/* Address: 0x1005f457c | FUN_1005f457c */

void FUN_1005f457c(__int64 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  Hasher HVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  (*param_4)(HVar1.unknown,*unaff_x20);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005f45bc | FUN_1005f45bc */

void FUN_1005f45bc(code *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ContiguousArray CVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_100 [8];
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined1 auStack_80 [32];
  undefined *local_58;
  
  local_e8 = *(long *)(param_5 + -8);
  puVar8 = auStack_100 + -(*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_e0 = param_5;
  local_d8 = param_8;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  lVar10 = *(long *)(lVar3 + -8);
  local_c8 = (long)puVar8 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = local_c8 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_d0 = lVar9;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  local_c0 = *(long *)(lVar4 + -8);
  lVar9 = lVar9 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = Swift::Collection::get_count();
  if (lVar5 == 0) {
    Swift::Array<undefined>::_allocateUninitialized(0,param_4);
  }
  else {
    local_f0 = lVar4;
    local_58 = (undefined *)Swift::ContiguousArray::init();
    local_f8 = param_4;
    CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::reserveCapacity(lVar5,CVar6);
    Swift::Collection::_get_startIndex();
    lVar1 = local_c8;
    lVar4 = local_d0;
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005f4884);
      (*pcVar2)();
    }
    do {
      pcVar2 = (code *)auStack_80;
      __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                (pcVar2,lVar9,param_3,param_6);
      (**(code **)(lVar10 + 0x10))(lVar1);
      (*pcVar2)(auStack_80,0);
      (*param_1)(lVar4,lVar1,puVar8);
      if (unaff_x21 != 0) {
        (**(code **)(lVar10 + 8))(lVar1,lVar3);
        (**(code **)(local_c0 + 8))(lVar9,local_f0);
        _swift_release(local_58);
        (**(code **)(local_e8 + 0x20))(local_d8,puVar8,local_e0);
        return;
      }
      (**(code **)(lVar10 + 8))(lVar1,lVar3);
      Swift::ContiguousArray::append(lVar4,CVar6.unknown);
      Swift::Collection::_formIndex();
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(local_c0 + 8))(lVar9,local_f0);
    puVar7 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130;
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130,CVar6.unknown
              );
    Swift::Array<undefined>::_init(&local_58,local_f8,CVar6.unknown,puVar7);
  }
  return;
}



/* Address: 0x1005f4884 | FUN_1005f4884 */

void FUN_1005f4884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  if (param_6 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_7 = 0;
  }
  else {
    _swift_getObjectType(param_6);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x38) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  _swift_task_switch(FUN_1005f48fc,UVar1.unknown);
  return;
}



/* Address: 0x1005f48fc | FUN_1005f48fc */

void FUN_1005f48fc(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  piVar4 = *(int **)(unaff_x22 + 0x18);
  _swift_task_addCancellationHandler(uVar2,*(undefined8 *)(unaff_x22 + 0x30));
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005f4970;
                    /* WARNING: Could not recover jumptable at 0x0001005f496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar3,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1005f4970 | FUN_1005f4970 */

void FUN_1005f4970(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005f4a0c;
  }
  else {
    pcVar1 = FUN_1005f49d0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Address: 0x1005f49d0 | FUN_1005f49d0 */

void FUN_1005f49d0(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001005f4a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005f4a0c | FUN_1005f4a0c */

void FUN_1005f4a0c(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001005f4a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


