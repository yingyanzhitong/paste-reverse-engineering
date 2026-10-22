/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001b28a0 | FUN_1001b28a0 */

bool FUN_1001b28a0(char param_1)

{
  return param_1 == '\0';
}



/* Address: 0x1001b28ac | FUN_1001b28ac */

bool FUN_1001b28ac(char param_1)

{
  return param_1 == '\x04';
}



/* Address: 0x1001b28bc | FUN_1001b28bc */

undefined1  [16] FUN_1001b28bc(undefined1 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  pcVar2 = param_3;
  Swift::_StringGuts::grow(0x24,param_2);
  SVar3.bridgeObject = (void *)0xee00207865646e69;
  SVar3.str = (char *)0x206c616974696e69;
  SVar6.bridgeObject = param_4;
  SVar6.str = pcVar2;
  Swift::String::append(SVar3,SVar6);
  local_68 = param_2.unknown;
  SVar3 = Swift::CustomStringConvertible::get_description();
  SVar7.bridgeObject = param_4;
  SVar7.str = pcVar2;
  Swift::String::append(SVar3,SVar7);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  SVar4.bridgeObject = (void *)0xee00207865646e69;
  SVar4.str = (char *)0x206c616e6966202c;
  SVar8.bridgeObject = param_4;
  SVar8.str = pcVar2;
  Swift::String::append(SVar4,SVar8);
  local_68 = param_3;
  SVar3 = Swift::CustomStringConvertible::get_description();
  SVar9.bridgeObject = param_4;
  SVar9.str = pcVar2;
  Swift::String::append(SVar3,SVar9);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  SVar5.bridgeObject = &SUB_e200000000000000;
  SVar5.str = (char *)0x202c;
  SVar10.bridgeObject = param_4;
  SVar10.str = pcVar2;
  Swift::String::append(SVar5,SVar10);
  local_68 = (char *)CONCAT71(local_68._1_7_,param_1);
  Swift::__print_unlocked
            (&local_68,&local_60,&DAT_100ebe5d0,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = local_60;
  return auVar1;
}



/* Address: 0x1001b2a00 | FUN_1001b2a00 */

void FUN_1001b2a00(void)

{
  undefined1 *unaff_x20;
  
  FUN_1001b28bc(*unaff_x20,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1001b2a0c | FUN_1001b2a0c */

undefined8
FUN_1001b2a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1001b2a90(param_1,param_5);
  FUN_1001b2cc0(param_2,param_1);
  _swift_bridgeObjectRelease(param_1);
  FUN_1001b2fe4(param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
  FUN_1001b3404(param_4,param_3);
  _swift_bridgeObjectRelease(param_3);
  return param_4;
}



/* Address: 0x1001b2a90 | FUN_1001b2a90 */

/* WARNING: Removing unreachable block (ram,0x0001001b2cb8) */
/* WARNING: Type propagation algorithm not settling */

undefined * FUN_1001b2a90(long param_1,long param_2,Hasher param_3)

{
  __uint64 _Var1;
  undefined8 ******ppppppuVar2;
  code *pcVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 uVar13;
  undefined8 *******pppppppuVar14;
  long lVar15;
  undefined8 ******ppppppuVar16;
  long lVar17;
  undefined8 *******local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  pppppppuVar14 = *(undefined8 ********)(param_1 + 0x10);
  pppppppuVar4 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (pppppppuVar14 != (undefined8 *******)0x0) {
    _swift_bridgeObjectRetain(param_1);
    pppppppuVar4 = pppppppuVar14;
    FUN_1001b1624(pppppppuVar14,0);
    pppppppuVar5 = &local_88;
    FUN_10009a96c(pppppppuVar5,pppppppuVar4 + 4,pppppppuVar14,param_1);
    FUN_10000c650(local_88,uStack_80,local_78,uStack_70,local_68);
    param_3.unknown = local_78;
    if (pppppppuVar5 != pppppppuVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b2b0c);
      (*pcVar3)();
    }
  }
  local_88 = pppppppuVar4;
  FUN_1001b3674(&local_88);
  pppppppuVar4 = local_88;
  lVar10 = *(long *)(param_2 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar10 != 0) {
    lVar15 = 0;
    ppppppuVar16 = local_88[2];
    pppppppuVar14 = local_88 + 4;
    do {
      puVar11 = (undefined1 *)(param_2 + 0x20 + lVar15 * 0x18);
      uVar13 = *puVar11;
      _Var1 = *(__uint64 *)(puVar11 + 8);
      lVar17 = *(long *)(puVar11 + 0x10);
      ppppppuVar2 = ppppppuVar16;
      pppppppuVar5 = pppppppuVar14;
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar6 = Swift::Hasher::_hash(*(__int64 *)(param_1 + 0x28),_Var1,param_3);
        uVar12 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        uVar6 = uVar6 & (uVar12 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_1 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
          do {
            if (*(__uint64 *)(*(long *)(param_1 + 0x30) + uVar6 * 8) == _Var1) {
              uVar13 = 1;
              break;
            }
            uVar6 = uVar6 + 1 & ~uVar12;
          } while ((*(ulong *)(param_1 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
        }
      }
      for (; ppppppuVar2 != (undefined8 ******)0x0;
          ppppppuVar2 = (undefined8 ******)((long)ppppppuVar2 + -1)) {
        lVar17 = lVar17 - (ulong)((long)*pppppppuVar5 < lVar17);
        pppppppuVar5 = pppppppuVar5 + 1;
      }
      puVar7 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        param_3.unknown = &DAT_00000001;
        FUN_1001b12dc(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar6 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar6) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        param_3.unknown = &DAT_00000001;
        FUN_1001b12dc(puVar9,uVar6 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar6 + 1;
      puVar9[uVar6 * 0x18 + 0x20] = uVar13;
      lVar15 = lVar15 + 1;
      *(__uint64 *)(puVar9 + uVar6 * 0x18 + 0x28) = _Var1;
      *(long *)(puVar9 + uVar6 * 0x18 + 0x30) = lVar17;
    } while (lVar15 != lVar10);
  }
  _swift_release(pppppppuVar4);
  return puVar9;
}



/* Address: 0x1001b2cc0 | FUN_1001b2cc0 */

/* WARNING: Removing unreachable block (ram,0x0001001b2fcc) */
/* WARNING: Removing unreachable block (ram,0x0001001b2fd8) */

undefined * FUN_1001b2cc0(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 ***pppuVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 ***pppuVar15;
  undefined8 ****ppppuVar16;
  long lVar17;
  undefined8 ***pppuVar18;
  long lVar19;
  undefined8 ***pppuVar20;
  undefined8 ***pppuVar21;
  undefined8 ***local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  ppppuVar16 = *(undefined8 *****)(param_1 + 0x10);
  ppppuVar8 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (ppppuVar16 != (undefined8 ****)0x0) {
    _swift_bridgeObjectRetain(param_1);
    ppppuVar8 = ppppuVar16;
    FUN_1001b1624(ppppuVar16,0);
    ppppuVar9 = &local_90;
    FUN_10009a96c(ppppuVar9,ppppuVar8 + 4,ppppuVar16,param_1);
    FUN_10000c650(local_90,uStack_88,local_80,uStack_78,local_70);
    if (ppppuVar9 != ppppuVar16) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b2fcc);
      (*pcVar6)();
    }
  }
  local_90 = ppppuVar8;
  FUN_1001b37a8(&local_90);
  pppuVar5 = local_90;
  lVar17 = *(long *)(param_2 + 0x10);
  if (lVar17 != 0) {
    lVar19 = 0;
    pppuVar20 = (undefined8 ***)local_90[2];
    ppppuVar8 = (undefined8 ****)(local_90 + 4);
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      puVar13 = (undefined1 *)(param_2 + 0x20 + lVar19 * 0x18);
      uVar4 = *puVar13;
      uVar2 = *(undefined8 *)(puVar13 + 8);
      lVar14 = *(long *)(puVar13 + 0x10);
      ppppuVar16 = ppppuVar8;
      for (pppuVar18 = pppuVar20; pppuVar18 != (undefined8 ***)0x0;
          pppuVar18 = (undefined8 ***)((long)pppuVar18 + -1)) {
        if (((long)*ppppuVar16 <= lVar14) && (bVar7 = SCARRY8(lVar14,1), lVar14 = lVar14 + 1, bVar7)
           ) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b2fc8);
          (*pcVar6)();
        }
        ppppuVar16 = ppppuVar16 + 1;
      }
      puVar10 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_1001b12dc(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar3 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar3) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_1001b12dc(puVar12,uVar3 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar3 + 1;
      puVar12[uVar3 * 0x18 + 0x20] = uVar4;
      lVar19 = lVar19 + 1;
      *(undefined8 *)(puVar12 + uVar3 * 0x18 + 0x28) = uVar2;
      *(long *)(puVar12 + uVar3 * 0x18 + 0x30) = lVar14;
      local_68 = puVar12;
    } while (lVar19 != lVar17);
  }
  _swift_release(pppuVar5);
  puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
  ppppuVar16 = *(undefined8 *****)(param_1 + 0x10);
  ppppuVar8 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (ppppuVar16 != (undefined8 ****)0x0) {
    _swift_bridgeObjectRetain(param_1);
    ppppuVar8 = ppppuVar16;
    FUN_1001b1624(ppppuVar16,0);
    ppppuVar9 = &local_90;
    FUN_10009a96c(ppppuVar9,ppppuVar8 + 4,ppppuVar16,param_1);
    FUN_10000c650(local_90,uStack_88,local_80,uStack_78,local_70);
    if (ppppuVar9 != ppppuVar16) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b2ebc);
      (*pcVar6)();
    }
  }
  local_90 = ppppuVar8;
  FUN_1001b37a8(&local_90);
  pppuVar5 = local_90;
  pppuVar20 = (undefined8 ***)local_90[2];
  if (pppuVar20 == (undefined8 ***)0x0) {
    _swift_release(local_90);
    ppppuVar8 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_90 = (undefined8 ***)puVar12;
    FUN_1001b6300(0,pppuVar20,0);
    pppuVar18 = (undefined8 ***)0x0;
    pppuVar21 = (undefined8 ***)local_90[2];
    lVar17 = (long)pppuVar21 * 0x18;
    do {
      uVar3 = (long)pppuVar21 + (long)pppuVar18;
      pppuVar15 = (undefined8 ***)pppuVar5[(long)pppuVar18 + 4];
      pppuVar1 = (undefined8 ***)(uVar3 + 1);
      if ((ulong)local_90[3] >> 1 <= uVar3) {
        FUN_1001b6300((undefined8 ***)0x1 < local_90[3],pppuVar1,1);
      }
      ppppuVar8 = (undefined8 ****)local_90;
      pppuVar18 = (undefined8 ***)((long)pppuVar18 + 1);
      local_90[2] = pppuVar1;
      *(undefined1 *)((long)local_90 + lVar17 + 0x20) = 2;
      *(undefined8 ****)((long)local_90 + lVar17 + 0x28) = pppuVar15;
      *(undefined8 ****)((long)local_90 + lVar17 + 0x30) = pppuVar15;
      lVar17 = lVar17 + 0x18;
    } while (pppuVar20 != pppuVar18);
    _swift_release(pppuVar5);
  }
  FUN_1001b5538(ppppuVar8);
  return local_68;
}



/* Address: 0x1001b2fe4 | FUN_1001b2fe4 */

/* WARNING: Removing unreachable block (ram,0x0001001b33ec) */
/* WARNING: Removing unreachable block (ram,0x0001001b33f8) */

undefined * FUN_1001b2fe4(long param_1,undefined *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  long *plVar12;
  char cVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 ***pppuVar18;
  undefined8 ***pppuVar19;
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  ppppuVar14 = *(undefined8 *****)(param_1 + 0x10);
  ppppuVar6 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (ppppuVar14 != (undefined8 ****)0x0) {
    _swift_bridgeObjectRetain(param_1);
    ppppuVar6 = ppppuVar14;
    FUN_1001b16a4(ppppuVar14,0);
    ppppuVar7 = &local_88;
    FUN_1001b5658(ppppuVar7,ppppuVar6 + 4,ppppuVar14,param_1);
    FUN_10000c650(local_88,uStack_80,local_78,uStack_70,local_68);
    if (ppppuVar7 != ppppuVar14) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b3060);
      (*pcVar4)();
    }
  }
  local_88 = ppppuVar6;
  FUN_1001b38dc(&local_88,FUN_1001b488c,FUN_1001b4470);
  pppuVar3 = local_88;
  pppuVar10 = (undefined8 ***)local_88[2];
  if (pppuVar10 == (undefined8 ***)0x0) {
    _swift_release(local_88);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    _swift_bridgeObjectRetain();
    pppuVar11 = (undefined8 ***)0x0;
    do {
      if (pppuVar3[2] <= pppuVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b33ec);
        (*pcVar4)();
      }
      lVar15 = *(long *)(param_2 + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (lVar15 != 0) {
        pppuVar19 = (undefined8 ***)pppuVar3[(long)pppuVar11 * 2 + 4];
        pppuVar2 = (undefined8 ***)(pppuVar3 + (long)pppuVar11 * 2 + 4)[1];
        puVar8 = (undefined *)0x0;
        FUN_1001b12dc(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
        lVar16 = (long)pppuVar19 + (long)pppuVar2;
        plVar12 = (long *)(param_2 + 0x30);
        do {
          pppuVar18 = (undefined8 ***)plVar12[-1];
          if (pppuVar18 == pppuVar19) {
            if (SCARRY8((long)pppuVar19,(long)pppuVar2)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b33d8);
              (*pcVar4)();
            }
            if (SBORROW8(lVar16,(long)pppuVar19)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b33dc);
              (*pcVar4)();
            }
            cVar13 = '\x04';
            lVar17 = lVar16 - (long)pppuVar19;
          }
          else {
            cVar13 = (char)plVar12[-2];
            lVar17 = *plVar12;
          }
          if ((((long)pppuVar19 < (long)pppuVar18 && cVar13 != '\x01') && cVar13 != '\x04') &&
             (bVar5 = SBORROW8(lVar17,1), lVar17 = lVar17 + -1, bVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b33e4);
            (*pcVar4)();
          }
          uVar1 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_1001b12dc(puVar9,uVar1 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
          puVar9[uVar1 * 0x18 + 0x20] = cVar13;
          plVar12 = plVar12 + 3;
          *(undefined8 ****)(puVar9 + uVar1 * 0x18 + 0x28) = pppuVar18;
          *(long *)(puVar9 + uVar1 * 0x18 + 0x30) = lVar17;
          lVar15 = lVar15 + -1;
          puVar8 = puVar9;
        } while (lVar15 != 0);
      }
      param_2 = puVar9;
      pppuVar11 = (undefined8 ***)((long)pppuVar11 + 1);
      _swift_bridgeObjectRelease();
    } while (pppuVar11 != pppuVar10);
    _swift_release(pppuVar3);
  }
  ppppuVar14 = *(undefined8 *****)(param_1 + 0x10);
  ppppuVar6 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (ppppuVar14 != (undefined8 ****)0x0) {
    _swift_bridgeObjectRetain(param_1);
    ppppuVar6 = ppppuVar14;
    FUN_1001b16a4(ppppuVar14,0);
    ppppuVar7 = &local_88;
    FUN_1001b5658(ppppuVar7,ppppuVar6 + 4,ppppuVar14,param_1);
    FUN_10000c650(local_88,uStack_80,local_78,uStack_70,local_68);
    if (ppppuVar7 != ppppuVar14) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b326c);
      (*pcVar4)();
    }
  }
  local_88 = ppppuVar6;
  FUN_1001b38dc(&local_88,FUN_1001b4814,FUN_1001b40c8);
  pppuVar3 = local_88;
  pppuVar10 = (undefined8 ***)local_88[2];
  if (pppuVar10 != (undefined8 ***)0x0) {
    pppuVar11 = (undefined8 ***)0x0;
    puVar9 = param_2;
    do {
      if (pppuVar3[2] <= pppuVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b33e8);
        (*pcVar4)();
      }
      lVar15 = *(long *)(puVar9 + 0x10);
      param_2 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (lVar15 != 0) {
        pppuVar19 = (undefined8 ***)pppuVar3[(long)pppuVar11 * 2 + 5];
        puVar8 = (undefined *)0x0;
        FUN_1001b12dc(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
        plVar12 = (long *)(puVar9 + 0x30);
        do {
          cVar13 = (char)plVar12[-2];
          lVar17 = plVar12[-1];
          lVar16 = *plVar12;
          if ((((long)pppuVar19 <= lVar16 && cVar13 != '\x01') && cVar13 != '\x04') &&
             (bVar5 = SCARRY8(lVar16,1), lVar16 = lVar16 + 1, bVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b33e0);
            (*pcVar4)();
          }
          uVar1 = *(ulong *)(puVar8 + 0x10);
          param_2 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
            param_2 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_1001b12dc(param_2,uVar1 + 1,1,puVar8);
          }
          *(ulong *)(param_2 + 0x10) = uVar1 + 1;
          param_2[uVar1 * 0x18 + 0x20] = cVar13;
          plVar12 = plVar12 + 3;
          *(long *)(param_2 + uVar1 * 0x18 + 0x28) = lVar17;
          *(long *)(param_2 + uVar1 * 0x18 + 0x30) = lVar16;
          lVar15 = lVar15 + -1;
          puVar8 = param_2;
        } while (lVar15 != 0);
      }
      pppuVar11 = (undefined8 ***)((long)pppuVar11 + 1);
      _swift_bridgeObjectRelease(puVar9);
      puVar9 = param_2;
    } while (pppuVar11 != pppuVar10);
  }
  _swift_release(pppuVar3);
  return param_2;
}



/* Address: 0x1001b3404 | FUN_1001b3404 */

undefined * FUN_1001b3404(long param_1,long param_2)

{
  __uint64 _Var1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  Hasher HVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  char cVar12;
  
  lVar8 = *(long *)(param_2 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar8 != 0) {
    puVar4 = (undefined *)0x0;
    HVar7.unknown = &DAT_00000001;
    FUN_1001b12dc(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    lVar11 = 0;
    do {
      pcVar9 = (char *)(param_2 + 0x20 + lVar11 * 0x18);
      cVar3 = *pcVar9;
      _Var1 = *(__uint64 *)(pcVar9 + 8);
      uVar2 = *(undefined8 *)(pcVar9 + 0x10);
      cVar12 = cVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar5 = Swift::Hasher::_hash(*(__int64 *)(param_1 + 0x28),_Var1,HVar7);
        uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_1 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
          do {
            if (*(__uint64 *)(*(long *)(param_1 + 0x30) + uVar5 * 8) == _Var1) {
              cVar12 = '\x03';
              if (cVar3 != '\0') {
                cVar12 = cVar3;
              }
              break;
            }
            uVar5 = uVar5 + 1 & ~uVar10;
          } while ((*(ulong *)(param_1 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
        }
      }
      uVar5 = *(ulong *)(puVar4 + 0x10);
      puVar6 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar5) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        HVar7.unknown = &DAT_00000001;
        FUN_1001b12dc(puVar6,uVar5 + 1,1,puVar4);
      }
      *(ulong *)(puVar6 + 0x10) = uVar5 + 1;
      puVar6[uVar5 * 0x18 + 0x20] = cVar12;
      lVar11 = lVar11 + 1;
      *(__uint64 *)(puVar6 + uVar5 * 0x18 + 0x28) = _Var1;
      *(undefined8 *)(puVar6 + uVar5 * 0x18 + 0x30) = uVar2;
      puVar4 = puVar6;
    } while (lVar11 != lVar8);
  }
  return puVar6;
}



/* Address: 0x1001b3568 | thunk_FUN_1001b356c */

void thunk_FUN_1001b356c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4ca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c32ce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32ce8,&DAT_100ebe5d0);
  DAT_100fb4ca8 = pTVar1;
  return;
}



/* Address: 0x1001b356c | FUN_1001b356c */

void FUN_1001b356c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4ca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c32ce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32ce8,&DAT_100ebe5d0);
  DAT_100fb4ca8 = pTVar1;
  return;
}



/* Address: 0x1001b35ac | FUN_1001b35ac */

void FUN_1001b35ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001b35c0 | FUN_1001b35c0 */

int FUN_1001b35c0(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (param_1[0x18] != 0)) {
    return *(int *)param_1 + 0xfc;
  }
  iVar1 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Address: 0x1001b3604 | FUN_1001b3604 */

void FUN_1001b3604(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfc) {
    if (0xfb < param_3) {
      *(char *)(param_1 + 3) = '\0';
    }
    if (param_2 != 0) {
      *(char *)param_1 = (char)param_2 + '\x04';
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0xfc);
    if (0xfb < param_3) {
      *(char *)(param_1 + 3) = '\x01';
    }
  }
  return;
}



/* Address: 0x1001b3648 | FUN_1001b3648 */

undefined1  [16] FUN_1001b3648(void)

{
  return ZEXT816(0x100ebe530);
}



/* Address: 0x1001b3658 | FUN_1001b3658 */

void FUN_1001b3658(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1001b3664 | FUN_1001b3664 */

undefined1  [16] FUN_1001b3664(void)

{
  return ZEXT816(0x100ebe5d0);
}



/* Address: 0x1001b3674 | FUN_1001b3674 */

void FUN_1001b3674(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  __int64 _Var3;
  _ContiguousArrayBuffer<undefined> _Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long *local_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar12 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar12 & 1) == 0) {
    FUN_1001b5630();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  local_50 = plVar1;
  uStack_48 = uVar12;
  _Var3 = Swift::_minimumMergeRunLength(uVar12);
  if (_Var3 < (long)uVar12) {
    uVar13 = uVar12 >> 1;
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar12) {
      _Var4 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (uVar13,PTR___type_metadata_for_Swift_Int_100eac6f8);
      *(ulong *)(_Var4.unknown + 0x10) = uVar13;
    }
    local_68 = _Var4.unknown + 0x20;
    uStack_60 = uVar13;
    FUN_1001b39e8(&local_68,auStack_58,&local_50,_Var3);
    *(undefined8 *)(_Var4.unknown + 0x10) = 0;
    _swift_release(_Var4.unknown);
  }
  else if ((uVar12 != 0) && (uVar12 != 1)) {
    lVar5 = -1;
    uVar13 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar13];
      lVar8 = lVar5;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (lVar7 <= lVar10) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar13 = uVar13 + 1;
      plVar6 = plVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (uVar13 != uVar12);
  }
  *param_1 = uVar11;
  return;
}



/* Address: 0x1001b37a8 | FUN_1001b37a8 */

void FUN_1001b37a8(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  __int64 _Var3;
  _ContiguousArrayBuffer<undefined> _Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long *local_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar12 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar12 & 1) == 0) {
    FUN_1001b5630();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  local_50 = plVar1;
  uStack_48 = uVar12;
  _Var3 = Swift::_minimumMergeRunLength(uVar12);
  if (_Var3 < (long)uVar12) {
    uVar13 = uVar12 >> 1;
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar12) {
      _Var4 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (uVar13,PTR___type_metadata_for_Swift_Int_100eac6f8);
      *(ulong *)(_Var4.unknown + 0x10) = uVar13;
    }
    local_68 = _Var4.unknown + 0x20;
    uStack_60 = uVar13;
    FUN_1001b3d58(&local_68,auStack_58,&local_50,_Var3);
    *(undefined8 *)(_Var4.unknown + 0x10) = 0;
    _swift_release(_Var4.unknown);
  }
  else if ((uVar12 != 0) && (uVar12 != 1)) {
    lVar5 = -1;
    uVar13 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar13];
      lVar8 = lVar5;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (lVar10 <= lVar7) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar13 = uVar13 + 1;
      plVar6 = plVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (uVar13 != uVar12);
  }
  *param_1 = uVar11;
  return;
}



/* Address: 0x1001b38dc | FUN_1001b38dc */

void FUN_1001b38dc(ulong *param_1,code *param_2,code *param_3)

{
  __int64 _Var1;
  _ContiguousArrayBuffer<undefined> _Var2;
  ulong uVar3;
  ulong minimumCapacity;
  ulong uVar4;
  undefined *local_70;
  ulong uStack_68;
  long local_60;
  ulong uStack_58;
  undefined1 auStack_48 [8];
  
  uVar3 = *param_1;
  uVar4 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_1001b5644();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  local_60 = uVar3 + 0x20;
  uStack_58 = uVar4;
  _Var1 = Swift::_minimumMergeRunLength(uVar4);
  if (_Var1 < (long)uVar4) {
    minimumCapacity = uVar4 >> 1;
    _Var2.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar4) {
      _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (minimumCapacity,(ContiguousArray)0x100ebe460);
      *(ulong *)(_Var2.unknown + 0x10) = minimumCapacity;
    }
    local_70 = _Var2.unknown + 0x20;
    uStack_68 = minimumCapacity;
    (*param_3)(&local_70,auStack_48,&local_60,_Var1);
    *(undefined8 *)(_Var2.unknown + 0x10) = 0;
    _swift_release(_Var2.unknown);
  }
  else if (uVar4 != 0) {
    (*param_2)(0,uVar4,1,&local_60);
  }
  *param_1 = uVar3;
  return;
}



/* Address: 0x1001b39e8 | FUN_1001b39e8 */

void FUN_1001b39e8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = local_58;
      lVar18 = lVar9 + 1;
      if (lVar18 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(lVar10 + lVar18 * 8);
        lVar15 = *(long *)(lVar10 + lVar9 * 8);
        lVar13 = lVar9 + 2;
        lVar8 = lVar12;
        do {
          lVar17 = lVar13;
          lVar18 = lVar7;
          if (lVar7 == lVar17) break;
          lVar18 = *(long *)(lVar10 + lVar17 * 8);
          bVar3 = lVar18 <= lVar8;
          lVar13 = lVar17 + 1;
          lVar8 = lVar18;
          lVar18 = lVar17;
        } while (lVar15 < lVar12 != bVar3);
        if (lVar15 < lVar12) {
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d2c);
            (*pcVar2)();
          }
          lVar13 = lVar9;
          lVar8 = lVar18;
          if (lVar9 < lVar18) {
            do {
              lVar8 = lVar8 + -1;
              if (lVar13 != lVar8) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d4c);
                  (*pcVar2)();
                }
                uVar16 = *(undefined8 *)(lVar10 + lVar13 * 8);
                *(undefined8 *)(lVar10 + lVar13 * 8) = *(undefined8 *)(lVar10 + lVar8 * 8);
                *(undefined8 *)(lVar10 + lVar8 * 8) = uVar16;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar8);
            lVar7 = param_3[1];
          }
        }
      }
      lVar13 = lVar18;
      if (lVar18 < lVar7) {
        if (SBORROW8(lVar18,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d28);
          (*pcVar2)();
        }
        if (lVar18 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d30);
            (*pcVar2)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar8 = lVar7;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d34);
            (*pcVar2)();
          }
          if (lVar18 != lVar8) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar18 * 8 + -8);
            lVar10 = lVar9 - lVar18;
            do {
              lVar12 = *(long *)(lVar7 + lVar18 * 8);
              lVar13 = lVar10;
              plVar19 = plVar14;
              do {
                lVar15 = *plVar19;
                if (lVar12 <= lVar15) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d38);
                  (*pcVar2)();
                }
                *plVar19 = lVar12;
                plVar19[1] = lVar15;
                bVar3 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                plVar19 = plVar19 + -1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar13 = lVar8;
            } while (lVar18 != lVar8);
          }
        }
      }
      if (lVar13 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d18);
        (*pcVar2)();
      }
      puVar4 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1001b4dec(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar21 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar21) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1001b4dec(puVar6,uVar21 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar21 + 1;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x28) = lVar13;
      local_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d50);
        (*pcVar2)();
      }
      FUN_1001b4904(&local_58,*param_1,param_3,FUN_1001b4eec);
      puVar6 = local_58;
      if (unaff_x21 != 0) goto LAB_1001b3ce8;
      lVar7 = param_3[1];
      lVar9 = lVar13;
    } while (lVar13 < lVar7);
  }
  puVar6 = local_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d58);
    (*pcVar2)();
  }
  puVar4 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_1001b5524();
  }
  puVar20 = (ulong *)(puVar6 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d54);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar21 * 0x10);
    lVar18 = *plVar14;
    puVar1 = puVar20 + uVar21 * 2;
    uVar11 = puVar1[1];
    FUN_1001b4eec(lVar9 + lVar18 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d1c);
      (*pcVar2)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d20);
      (*pcVar2)();
    }
    *plVar14 = lVar18;
    plVar14[1] = uVar11;
    uVar11 = *puVar20;
    lVar9 = uVar11 - uVar21;
    if (uVar11 < uVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b3d24);
      (*pcVar2)();
    }
    uVar21 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar20 = uVar21;
  }
LAB_1001b3ce8:
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x1001b3d58 | FUN_1001b3d58 */

void FUN_1001b3d58(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = local_58;
      lVar18 = lVar9 + 1;
      if (lVar18 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(lVar10 + lVar18 * 8);
        lVar15 = *(long *)(lVar10 + lVar9 * 8);
        lVar13 = lVar9 + 2;
        lVar8 = lVar12;
        do {
          lVar17 = lVar13;
          lVar18 = lVar7;
          if (lVar7 == lVar17) break;
          lVar18 = *(long *)(lVar10 + lVar17 * 8);
          bVar3 = lVar8 <= lVar18;
          lVar13 = lVar17 + 1;
          lVar8 = lVar18;
          lVar18 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b409c);
            (*pcVar2)();
          }
          lVar13 = lVar9;
          lVar8 = lVar18;
          if (lVar9 < lVar18) {
            do {
              lVar8 = lVar8 + -1;
              if (lVar13 != lVar8) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b40bc);
                  (*pcVar2)();
                }
                uVar16 = *(undefined8 *)(lVar10 + lVar13 * 8);
                *(undefined8 *)(lVar10 + lVar13 * 8) = *(undefined8 *)(lVar10 + lVar8 * 8);
                *(undefined8 *)(lVar10 + lVar8 * 8) = uVar16;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar8);
            lVar7 = param_3[1];
          }
        }
      }
      lVar13 = lVar18;
      if (lVar18 < lVar7) {
        if (SBORROW8(lVar18,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4098);
          (*pcVar2)();
        }
        if (lVar18 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b40a0);
            (*pcVar2)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar8 = lVar7;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b40a4);
            (*pcVar2)();
          }
          if (lVar18 != lVar8) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar18 * 8 + -8);
            lVar10 = lVar9 - lVar18;
            do {
              lVar12 = *(long *)(lVar7 + lVar18 * 8);
              lVar13 = lVar10;
              plVar19 = plVar14;
              do {
                lVar15 = *plVar19;
                if (lVar15 <= lVar12) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b40a8);
                  (*pcVar2)();
                }
                *plVar19 = lVar12;
                plVar19[1] = lVar15;
                bVar3 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                plVar19 = plVar19 + -1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar13 = lVar8;
            } while (lVar18 != lVar8);
          }
        }
      }
      if (lVar13 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4088);
        (*pcVar2)();
      }
      puVar4 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1001b4dec(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar21 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar21) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1001b4dec(puVar6,uVar21 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar21 + 1;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x28) = lVar13;
      local_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b40c0);
        (*pcVar2)();
      }
      FUN_1001b4904(&local_58,*param_1,param_3,FUN_10009a6c8);
      puVar6 = local_58;
      if (unaff_x21 != 0) goto LAB_1001b4058;
      lVar7 = param_3[1];
      lVar9 = lVar13;
    } while (lVar13 < lVar7);
  }
  puVar6 = local_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b40c8);
    (*pcVar2)();
  }
  puVar4 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_1001b5524();
  }
  puVar20 = (ulong *)(puVar6 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b40c4);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar21 * 0x10);
    lVar18 = *plVar14;
    puVar1 = puVar20 + uVar21 * 2;
    uVar11 = puVar1[1];
    FUN_10009a6c8(lVar9 + lVar18 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b408c);
      (*pcVar2)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4090);
      (*pcVar2)();
    }
    *plVar14 = lVar18;
    plVar14[1] = uVar11;
    uVar11 = *puVar20;
    lVar9 = uVar11 - uVar21;
    if (uVar11 < uVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4094);
      (*pcVar2)();
    }
    uVar21 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar20 = uVar21;
  }
LAB_1001b4058:
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x1001b40c8 | FUN_1001b40c8 */

void FUN_1001b40c8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long unaff_x21;
  ulong *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = local_58;
      lVar20 = lVar9 + 1;
      if (lVar20 < lVar7) {
        lVar10 = *param_3;
        lVar13 = *(long *)(lVar10 + lVar20 * 0x10 + 8);
        lVar20 = lVar10 + lVar9 * 0x10;
        lVar15 = *(long *)(lVar20 + 8);
        lVar14 = lVar9 + 2;
        plVar17 = (long *)(lVar20 + 0x28);
        lVar19 = lVar13;
        do {
          lVar16 = lVar14;
          lVar20 = lVar7;
          if (lVar7 == lVar16) break;
          lVar20 = *plVar17;
          bVar3 = lVar19 <= lVar20;
          lVar14 = lVar16 + 1;
          plVar17 = plVar17 + 2;
          lVar19 = lVar20;
          lVar20 = lVar16;
        } while (lVar13 < lVar15 != bVar3);
        if (lVar13 < lVar15) {
          if (lVar20 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4444);
            (*pcVar2)();
          }
          if (lVar9 < lVar20) {
            puVar12 = (undefined8 *)(lVar10 + lVar9 * 0x10);
            lVar14 = lVar20;
            lVar7 = lVar9;
            puVar18 = (undefined8 *)(lVar10 + lVar20 * 0x10);
            do {
              puVar8 = puVar18 + -2;
              lVar14 = lVar14 + -1;
              if (lVar7 != lVar14) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4464);
                  (*pcVar2)();
                }
                uVar24 = puVar12[1];
                uVar21 = *puVar12;
                uVar25 = *puVar8;
                puVar12[1] = puVar18[-1];
                *puVar12 = uVar25;
                puVar18[-1] = uVar24;
                *puVar8 = uVar21;
              }
              lVar7 = lVar7 + 1;
              puVar12 = puVar12 + 2;
              puVar18 = puVar8;
            } while (lVar7 < lVar14);
            lVar7 = param_3[1];
          }
        }
      }
      lVar14 = lVar20;
      if (lVar20 < lVar7) {
        if (SBORROW8(lVar20,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4440);
          (*pcVar2)();
        }
        if (lVar20 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4448);
            (*pcVar2)();
          }
          lVar19 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar19 = lVar7;
          }
          if (lVar19 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b444c);
            (*pcVar2)();
          }
          if (lVar20 != lVar19) {
            lVar7 = *param_3;
            puVar12 = (undefined8 *)(lVar7 + lVar20 * 0x10);
            lVar10 = lVar9 - lVar20;
            do {
              lVar13 = *(long *)(lVar7 + lVar20 * 0x10 + 8);
              lVar14 = lVar10;
              puVar18 = puVar12;
              do {
                if ((long)puVar18[-1] <= lVar13) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4450);
                  (*pcVar2)();
                }
                uVar21 = *puVar18;
                puVar18[1] = puVar18[-1];
                *puVar18 = puVar18[-2];
                puVar18[-1] = lVar13;
                puVar18 = puVar18 + -2;
                *puVar18 = uVar21;
                bVar3 = lVar14 != -1;
                lVar14 = lVar14 + 1;
              } while (bVar3);
              lVar20 = lVar20 + 1;
              puVar12 = puVar12 + 2;
              lVar10 = lVar10 + -1;
              lVar14 = lVar19;
            } while (lVar20 != lVar19);
          }
        }
      }
      if (lVar14 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4430);
        (*pcVar2)();
      }
      puVar4 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1001b4dec(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar23 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar23) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1001b4dec(puVar6,uVar23 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar23 + 1;
      *(long *)(puVar6 + uVar23 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar23 * 0x10 + 0x28) = lVar14;
      local_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4468);
        (*pcVar2)();
      }
      FUN_1001b4b78(&local_58,*param_1,param_3,FUN_1001b50f4);
      puVar6 = local_58;
      if (unaff_x21 != 0) goto LAB_1001b4400;
      lVar7 = param_3[1];
      lVar9 = lVar14;
    } while (lVar14 < lVar7);
  }
  puVar6 = local_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4470);
    (*pcVar2)();
  }
  puVar4 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_1001b5524();
  }
  puVar22 = (ulong *)(puVar6 + 0x10);
  uVar23 = *puVar22;
  while (1 < uVar23) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b446c);
      (*pcVar2)();
    }
    plVar17 = (long *)(puVar6 + uVar23 * 0x10);
    lVar20 = *plVar17;
    puVar1 = puVar22 + uVar23 * 2;
    uVar11 = puVar1[1];
    FUN_1001b50f4(lVar9 + lVar20 * 0x10,lVar9 + *puVar1 * 0x10,lVar9 + uVar11 * 0x10,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar20) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4434);
      (*pcVar2)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4438);
      (*pcVar2)();
    }
    *plVar17 = lVar20;
    plVar17[1] = uVar11;
    uVar11 = *puVar22;
    lVar9 = uVar11 - uVar23;
    if (uVar11 < uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b443c);
      (*pcVar2)();
    }
    uVar23 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar22 = uVar23;
  }
LAB_1001b4400:
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x1001b4470 | FUN_1001b4470 */

void FUN_1001b4470(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long unaff_x21;
  ulong *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar10 = 0;
    do {
      puVar7 = local_58;
      lVar21 = lVar10 + 1;
      if (lVar21 < lVar8) {
        lVar11 = *param_3;
        lVar15 = *(long *)(lVar11 + lVar21 * 0x10);
        plVar14 = (long *)(lVar11 + lVar10 * 0x10);
        lVar17 = *plVar14;
        plVar14 = plVar14 + 4;
        lVar16 = lVar10 + 2;
        lVar20 = lVar15;
        do {
          lVar18 = lVar16;
          lVar21 = lVar8;
          if (lVar8 == lVar18) break;
          lVar21 = *plVar14;
          bVar4 = lVar21 <= lVar20;
          plVar14 = plVar14 + 2;
          lVar16 = lVar18 + 1;
          lVar20 = lVar21;
          lVar21 = lVar18;
        } while (lVar17 < lVar15 != bVar4);
        if (lVar17 < lVar15) {
          if (lVar21 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b47e8);
            (*pcVar3)();
          }
          if (lVar10 < lVar21) {
            puVar13 = (undefined8 *)(lVar11 + lVar10 * 0x10);
            lVar16 = lVar21;
            lVar8 = lVar10;
            puVar2 = (undefined8 *)(lVar11 + lVar21 * 0x10);
            do {
              puVar9 = puVar2 + -2;
              lVar16 = lVar16 + -1;
              if (lVar8 != lVar16) {
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b4808);
                  (*pcVar3)();
                }
                uVar25 = puVar13[1];
                uVar24 = *puVar13;
                uVar26 = *puVar9;
                puVar13[1] = puVar2[-1];
                *puVar13 = uVar26;
                puVar2[-1] = uVar25;
                *puVar9 = uVar24;
              }
              lVar8 = lVar8 + 1;
              puVar13 = puVar13 + 2;
              puVar2 = puVar9;
            } while (lVar8 < lVar16);
            lVar8 = param_3[1];
          }
        }
      }
      lVar16 = lVar21;
      if (lVar21 < lVar8) {
        if (SBORROW8(lVar21,lVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b47e4);
          (*pcVar3)();
        }
        if (lVar21 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b47ec);
            (*pcVar3)();
          }
          lVar20 = lVar10 + param_4;
          if (lVar8 <= lVar10 + param_4) {
            lVar20 = lVar8;
          }
          if (lVar20 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b47f0);
            (*pcVar3)();
          }
          if (lVar21 != lVar20) {
            lVar8 = *param_3;
            plVar14 = (long *)(lVar8 + lVar21 * 0x10 + -0x10);
            lVar11 = lVar10 - lVar21;
            do {
              lVar15 = *(long *)(lVar8 + lVar21 * 0x10);
              lVar16 = lVar11;
              plVar19 = plVar14;
              do {
                if (lVar15 <= *plVar19) break;
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b47f4);
                  (*pcVar3)();
                }
                lVar17 = plVar19[3];
                plVar19[3] = plVar19[1];
                plVar19[2] = *plVar19;
                *plVar19 = lVar15;
                plVar19[1] = lVar17;
                bVar4 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                plVar19 = plVar19 + -2;
              } while (bVar4);
              lVar21 = lVar21 + 1;
              plVar14 = plVar14 + 2;
              lVar11 = lVar11 + -1;
              lVar16 = lVar20;
            } while (lVar21 != lVar20);
          }
        }
      }
      if (lVar16 < lVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b47d4);
        (*pcVar3)();
      }
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_1001b4dec(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar23 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar23) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_1001b4dec(puVar7,uVar23 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar23 + 1;
      *(long *)(puVar7 + uVar23 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar7 + uVar23 * 0x10 + 0x28) = lVar16;
      local_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b480c);
        (*pcVar3)();
      }
      FUN_1001b4b78(&local_58,*param_1,param_3,FUN_1001b530c);
      puVar7 = local_58;
      if (unaff_x21 != 0) goto LAB_1001b47a4;
      lVar8 = param_3[1];
      lVar10 = lVar16;
    } while (lVar16 < lVar8);
  }
  puVar7 = local_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b4814);
    (*pcVar3)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_1001b5524();
  }
  puVar22 = (ulong *)(puVar7 + 0x10);
  uVar23 = *puVar22;
  while (1 < uVar23) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b4810);
      (*pcVar3)();
    }
    plVar14 = (long *)(puVar7 + uVar23 * 0x10);
    lVar21 = *plVar14;
    puVar1 = puVar22 + uVar23 * 2;
    uVar12 = puVar1[1];
    FUN_1001b530c(lVar10 + lVar21 * 0x10,lVar10 + *puVar1 * 0x10,lVar10 + uVar12 * 0x10,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar12 < lVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b47d8);
      (*pcVar3)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b47dc);
      (*pcVar3)();
    }
    *plVar14 = lVar21;
    plVar14[1] = uVar12;
    uVar12 = *puVar22;
    lVar10 = uVar12 - uVar23;
    if (uVar12 < uVar23) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b47e0);
      (*pcVar3)();
    }
    uVar23 = uVar12 - 1;
    _memmove(puVar1,puVar1 + 2,lVar10 * 0x10);
    *puVar22 = uVar23;
  }
LAB_1001b47a4:
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Address: 0x1001b4814 | FUN_1001b4814 */

void FUN_1001b4814(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    puVar4 = (undefined8 *)(lVar3 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      lVar5 = *(long *)(lVar3 + param_3 * 0x10 + 8);
      lVar6 = param_1;
      puVar7 = puVar4;
      do {
        if ((long)puVar7[-1] <= lVar5) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b488c);
          (*pcVar1)();
        }
        uVar8 = *puVar7;
        puVar7[1] = puVar7[-1];
        *puVar7 = puVar7[-2];
        puVar7[-1] = lVar5;
        puVar7 = puVar7 + -2;
        *puVar7 = uVar8;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x1001b488c | FUN_1001b488c */

void FUN_1001b488c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    plVar4 = (long *)(lVar3 + param_3 * 0x10 + -0x10);
    param_1 = param_1 - param_3;
    do {
      lVar5 = *(long *)(lVar3 + param_3 * 0x10);
      lVar6 = param_1;
      plVar7 = plVar4;
      do {
        if (lVar5 <= *plVar7) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b4904);
          (*pcVar1)();
        }
        lVar8 = plVar7[3];
        plVar7[3] = plVar7[1];
        plVar7[2] = *plVar7;
        *plVar7 = lVar5;
        plVar7[1] = lVar8;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        plVar7 = plVar7 + -2;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar4 = plVar4 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x1001b4904 | FUN_1001b4904 */

undefined8 FUN_1001b4904(ulong *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    uVar10 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar10 & 1) == 0) {
      FUN_1001b5524();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar10 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar13 = uVar10 - 1;
      if (uVar10 < 4) {
        if (uVar10 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar8 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_1001b49e0;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b58);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1001b4a40:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b48);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b50);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b30);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b34);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b3c);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b44);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1001b49e0:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b38);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b40);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b4c);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b54);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1001b4a40;
          uVar14 = uVar10 - 2;
          if (lVar5 <= lVar8) {
            uVar14 = uVar13;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar9 = *plVar2;
          lVar12 = plVar2[1];
          if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b5c);
            (*pcVar6)();
          }
          uVar14 = uVar10 - 2;
          if (lVar12 - lVar9 <= lVar8) {
            uVar14 = uVar13;
          }
        }
      }
      uVar13 = uVar14 - 1;
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b20);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b78);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      (*param_4)(lVar8 + lVar12 * 8,lVar8 + *plVar3 * 8,lVar8 + lVar9 * 8,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b24);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b28);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4b2c);
        (*pcVar6)();
      }
      uVar10 = uVar13 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar10 - uVar14) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar10;
    } while (2 < uVar13);
    *param_1 = uVar11;
  }
  return 1;
}



/* Address: 0x1001b4b78 | FUN_1001b4b78 */

undefined8 FUN_1001b4b78(ulong *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    uVar10 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar10 & 1) == 0) {
      FUN_1001b5524();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar10 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar13 = uVar10 - 1;
      if (uVar10 < 4) {
        if (uVar10 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar8 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_1001b4c54;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4dcc);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1001b4cb4:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4dbc);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4dc4);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4da4);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4da8);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4db0);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4db8);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1001b4c54:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4dac);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4db4);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4dc0);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4dc8);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1001b4cb4;
          uVar14 = uVar10 - 2;
          if (lVar5 <= lVar8) {
            uVar14 = uVar13;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar9 = *plVar2;
          lVar12 = plVar2[1];
          if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4dd0);
            (*pcVar6)();
          }
          uVar14 = uVar10 - 2;
          if (lVar12 - lVar9 <= lVar8) {
            uVar14 = uVar13;
          }
        }
      }
      uVar13 = uVar14 - 1;
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4d94);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4dec);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      (*param_4)(lVar8 + lVar12 * 0x10,lVar8 + *plVar3 * 0x10,lVar8 + lVar9 * 0x10,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4d98);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4d9c);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b4da0);
        (*pcVar6)();
      }
      uVar10 = uVar13 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar10 - uVar14) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar10;
    } while (2 < uVar13);
    *param_1 = uVar11;
  }
  return 1;
}



/* Address: 0x1001b4dec | FUN_1001b4dec */

undefined * FUN_1001b4dec(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4eec);
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
    puVar3 = &DAT_100fb4cb0;
    FUN_1000037f0(&DAT_100fb4cb0,&DAT_100c32da0);
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
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1001b4eec | FUN_1001b4eec */

undefined8 FUN_1001b4eec(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (*param_4 < lVar2) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*plVar7 < *plVar5) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_1001b5098;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_1001b5098:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    _memmove(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Address: 0x1001b50f4 | FUN_1001b50f4 */

undefined8
FUN_1001b50f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar4;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar2 = lVar9 + 0xf;
  if (-1 < lVar9) {
    lVar2 = lVar9;
  }
  lVar2 = lVar2 >> 4;
  lVar10 = (long)param_3 - (long)param_2;
  lVar5 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar5 = lVar10;
  }
  lVar5 = lVar5 >> 4;
  if (lVar2 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar2 * 2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar2 << 4);
    }
    puVar4 = param_4 + lVar2 * 2;
    puVar7 = param_1;
    if (0xf < lVar9) {
      do {
        if (param_3 <= param_2) break;
        if ((long)param_2[1] < (long)param_4[1]) {
          puVar6 = param_4;
          puVar8 = param_2;
          param_2 = param_2 + 2;
        }
        else {
          puVar6 = param_4 + 2;
          puVar8 = param_4;
        }
        param_4 = puVar6;
        if (puVar7 != puVar8) {
          uVar11 = *puVar8;
          puVar7[1] = puVar8[1];
          *puVar7 = uVar11;
        }
        puVar7 = puVar7 + 2;
      } while (param_4 < puVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 * 2 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar5 << 4);
    }
    puVar4 = param_4 + lVar5 * 2;
    puVar7 = param_2;
    if ((param_1 < param_2) && (0xf < lVar10)) {
      do {
        while (puVar8 = param_3 + -2, (long)puVar4[-1] < (long)param_2[-1]) {
          puVar7 = param_2 + -2;
          if (param_3 != param_2) {
            uVar11 = *puVar7;
            param_3[-1] = param_2[-1];
            *puVar8 = uVar11;
          }
          if ((puVar7 <= param_1) || (param_3 = puVar8, param_2 = puVar7, puVar4 <= param_4))
          goto LAB_1001b52b0;
        }
        puVar6 = puVar4 + -2;
        if (param_3 != puVar4) {
          uVar11 = *puVar6;
          param_3[-1] = puVar4[-1];
          *puVar8 = uVar11;
        }
        puVar4 = puVar6;
        puVar7 = param_2;
        param_3 = puVar8;
      } while (param_4 < puVar6);
    }
  }
LAB_1001b52b0:
  uVar3 = (long)puVar4 - (long)param_4;
  uVar1 = uVar3 + 0xf;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  if ((puVar7 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= puVar7)) {
    _memmove(puVar7,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Address: 0x1001b530c | FUN_1001b530c */

undefined8 FUN_1001b530c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 4;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 0xf;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 4;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 * 2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar2 << 4);
    }
    plVar5 = param_4 + lVar2 * 2;
    plVar8 = param_1;
    if (0xf < lVar10) {
      do {
        if (param_3 <= param_2) break;
        if (*param_4 < *param_2) {
          plVar9 = param_4;
          plVar3 = param_2;
          param_2 = param_2 + 2;
        }
        else {
          plVar9 = param_4 + 2;
          plVar3 = param_4;
        }
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          lVar2 = *plVar3;
          plVar8[1] = plVar3[1];
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 2;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 * 2 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar6 << 4);
    }
    plVar3 = param_4 + lVar6 * 2;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (0xf < lVar11)) {
      do {
        plVar7 = param_2 + -2;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -2;
          plVar5 = plVar3 + -2;
          if (*plVar7 < *plVar5) break;
          if (plVar9 != plVar3) {
            lVar2 = *plVar5;
            plVar9[-1] = plVar3[-1];
            *param_3 = lVar2;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_1001b54c8;
        }
        if (plVar9 != param_2) {
          lVar2 = *plVar7;
          plVar9[-1] = param_2[-1];
          *param_3 = lVar2;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_1001b54c8:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 0xf;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= plVar8)) {
    _memmove(plVar8,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Address: 0x1001b5524 | FUN_1001b5524 */

void FUN_1001b5524(long param_1)

{
  FUN_1001b4dec(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1001b5538 | FUN_1001b5538 */

void FUN_1001b5538(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b5624);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1001b12dc();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b5628);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b562c);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) * 0x18 + 0x20),(void *)(param_1 + 0x20),
            uVar5 * 0x18);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b5630);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x1001b5630 | FUN_1001b5630 */

void FUN_1001b5630(long param_1)

{
  FUN_1001b6440(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1001b5644 | FUN_1001b5644 */

void FUN_1001b5644(long param_1)

{
  FUN_1001b6658(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1001b5658 | FUN_1001b5658 */

long FUN_1001b5658(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  puVar5 = (ulong *)(param_4 + 0x38);
  uVar6 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar7 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *puVar5;
  if (param_2 == (undefined8 *)0x0) {
    lVar8 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar8 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b574c);
      (*pcVar3)();
    }
    lVar8 = 0;
    lVar10 = 0;
    uVar11 = 0x3f - uVar6 >> 6;
    lVar9 = lVar8;
    do {
      while (uVar7 == 0) {
        bVar4 = SCARRY8(lVar8,1);
        lVar8 = lVar8 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b5748);
          (*pcVar3)();
        }
        if ((long)uVar11 <= lVar8) {
          uVar7 = 0;
          if ((long)uVar11 <= lVar9 + 1) {
            uVar11 = lVar9 + 1;
          }
          lVar8 = uVar11 - 1;
          param_3 = lVar10;
          goto LAB_1001b572c;
        }
        uVar7 = puVar5[lVar8];
      }
      lVar10 = lVar10 + 1;
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      puVar2 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x10 +
               lVar8 * 0x400);
      uVar12 = *puVar2;
      param_2[1] = puVar2[1];
      *param_2 = uVar12;
      lVar9 = lVar8;
      param_2 = param_2 + 2;
    } while (lVar10 != param_3);
  }
LAB_1001b572c:
  *param_1 = param_4;
  param_1[1] = (long)puVar5;
  param_1[2] = ~uVar6;
  param_1[3] = lVar8;
  param_1[4] = uVar7;
  return param_3;
}



/* Address: 0x1001b574c | FUN_1001b574c */

undefined * FUN_1001b574c(long param_1)

{
  _HashTable _Var1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  Bucket BVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    FUN_1001b631c(0,lVar6,0);
    _Var1.unknown = (undefined *)(param_1 + 0x38);
    BVar5 = Swift::_HashTable::get_startBucket(_Var1);
    lVar12 = 0;
    do {
      if ((ulong)BVar5.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b5950);
        (*pcVar4)();
      }
      uVar13 = (ulong)BVar5.offset >> 6;
      uVar10 = 1L << (BVar5.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar13 * 8) & uVar10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b5954);
        (*pcVar4)();
      }
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + BVar5.offset * 0x10);
      iVar2 = *(int *)(param_1 + 0x24);
      uVar9 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar9) {
        FUN_1001b631c(1 < *(ulong *)(puVar3 + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar9 + 1;
      *(undefined8 *)(puVar3 + uVar9 * 8 + 0x20) = uVar8;
      uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar9 <= (ulong)BVar5.offset) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b5958);
        (*pcVar4)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar13 * 8) & uVar10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b595c);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b5960);
        (*pcVar4)();
      }
      uVar10 = *(ulong *)(_Var1.unknown + uVar13 * 8) & -2L << (BVar5.offset & 0x3fU);
      if (uVar10 == 0) {
        lVar11 = uVar13 << 6;
        puVar7 = (ulong *)(param_1 + 0x40 + uVar13 * 8);
        do {
          uVar13 = uVar13 + 1;
          if (uVar9 + 0x3f >> 6 <= uVar13) {
            FUN_10000cae0(BVar5.offset,iVar2,0);
            BVar5.offset = uVar9;
            goto LAB_1001b57e8;
          }
          uVar10 = *puVar7;
          lVar11 = lVar11 + 0x40;
          puVar7 = puVar7 + 1;
        } while (uVar10 == 0);
        FUN_10000cae0(BVar5.offset,iVar2,0);
        uVar13 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        BVar5.offset = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar11;
      }
      else {
        uVar13 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        BVar5.offset = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | BVar5.offset & 0x7fffffffffffffc0U
        ;
      }
LAB_1001b57e8:
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar6);
  }
  return puVar3;
}



/* Address: 0x1001b5960 | FUN_1001b5960 */

bool FUN_1001b5960(undefined8 param_1,Set<undefined> param_2,undefined8 param_3,
                  Set<undefined> param_4,Set param_5,long param_6)

{
  bool bVar1;
  
  bVar1 = (extension_Swift)::Swift::Array<undefined>::____infix
                    (param_1,param_3,param_5.unknown,*(undefined8 *)(param_6 + 8));
  if (bVar1) {
    bVar1 = Swift::Set::___infix(param_2,param_4,param_5);
    return bVar1;
  }
  return false;
}



/* Address: 0x1001b59c8 | FUN_1001b59c8 */

void FUN_1001b59c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  FUN_1001b5960(*param_1,param_1[1],*param_2,param_2[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x1001b59e4 | FUN_1001b59e4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001b5a68 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1001b59e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  Set SVar1;
  undefined *puVar2;
  Set<undefined> SVar3;
  undefined1 auVar4 [16];
  
  SVar1 = Swift::Set::typeMetadataAccessor();
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_2);
  puVar2 = PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0;
  _swift_getWitnessTable(PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0,SVar1.unknown);
  SVar3 = Swift::Set::_union(puVar2,param_4,param_5,SVar1.unknown,param_6,puVar2);
  auVar4._8_8_ = SVar3.unknown;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Address: 0x1001b5a8c | FUN_1001b5a8c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001b5d00 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined *
FUN_1001b5a8c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             long param_5)

{
  long lVar1;
  char cVar2;
  Set SVar3;
  Optional OVar4;
  Change CVar5;
  bool bVar6;
  long lVar7;
  undefined7 extraout_var;
  CollectionDifference CVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  __int64 _Var14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  EnumeratedSequence EVar17;
  Iterator IVar18;
  __uint64 *p_Var19;
  ulong uVar20;
  Hasher HVar21;
  long extraout_x8;
  long extraout_x8_00;
  __uint64 *p_Var22;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar27;
  long lVar28;
  __uint64 _Var29;
  undefined8 uVar30;
  __uint64 _Stack_150;
  undefined *local_148;
  undefined8 local_140;
  code *local_138;
  Set local_130;
  long local_128;
  CollectionDifference local_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  undefined8 *local_100;
  __uint64 *local_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0 [4];
  undefined8 local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  
  lVar27 = *(long *)(param_4 + -8);
  local_130.unknown = param_3;
  local_118 = param_1;
  local_d0 = param_5;
  local_c8 = param_2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar27 + 0x40));
  lVar24 = (long)&_Stack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0xff;
  local_108 = lVar24;
  _swift_getTupleTypeMetadata2
            (0xff,PTR___type_metadata_for_Swift_Int_100eac6f8,param_4,"offset element ",0);
  local_d8 = lVar7;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  extraout_var = (undefined7)((ulong)lVar7 >> 8);
  lStack_e0 = CONCAT71(extraout_var,OVar4.value);
  local_e8 = *(long *)(lStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  lVar24 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  p_Var22 = (__uint64 *)(lVar24 - extraout_x12);
  local_f8 = p_Var22;
  local_c0 = param_4;
  CVar5 = Swift::CollectionDifference::Change::typeMetadataAccessor();
  lVar24 = CONCAT71(extraout_var,CVar5.value);
  local_110 = *(long *)(lVar24 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_110 + 0x40));
  puVar25 = (undefined8 *)((long)p_Var22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_100 = puVar25;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar25 - extraout_x12_00;
  local_b8 = (undefined *)lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar25 = (undefined8 *)(lVar7 - extraout_x12_01);
  CVar8 = Swift::CollectionDifference::typeMetadataAccessor();
                    /* WARNING: Load size is inaccurate */
  local_120.unknown = CVar8.unknown[-8];
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_120.unknown + 0x40));
  lVar28 = (long)puVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001b6758();
  puVar10 = puVar12;
  FUN_1001b6758();
  puVar11 = puVar12;
  FUN_1001b67c8();
  FUN_1001b6758();
  lVar7 = local_c8;
  local_b0[0] = local_c8;
  local_90 = local_118;
  uVar13 = 0;
  local_148 = puVar12;
  local_88 = puVar12;
  local_80 = puVar11;
  local_78 = puVar10;
  local_70 = puVar9;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar12 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,uVar13);
  local_140 = uVar13;
  (extension_Swift)::Swift::BidirectionalCollection::_difference
            (lVar28,puVar12,uVar13,uVar13,puVar12,puVar12,*(undefined8 *)(local_d0 + 8));
  _swift_bridgeObjectRelease(lVar7);
  (extension_Swift)::Swift::CollectionDifference::_inferringMoves();
  local_138 = *(code **)((long)local_120.unknown + 8);
  (*local_138)(lVar28,CVar8.unknown);
  lVar7 = local_110;
  local_128 = lVar28 - extraout_x12_02;
  local_120 = CVar8;
  Swift::CollectionDifference::_get_removals(CVar8);
  _Var14 = Swift::Array<undefined>::get_endIndex(CVar8.unknown,lVar24);
  local_c8 = lVar27;
  if (_Var14 != 0) {
    lVar28 = 0;
    do {
      puVar12 = local_b8;
      Swift::Array<undefined>::get_subscript(local_b8,lVar28,CVar8.unknown,lVar24);
      (**(code **)(lVar7 + 0x20))(puVar25,puVar12,lVar24);
      lVar1 = lVar28 + 1;
      if (SCARRY8(lVar28,1)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1001b62e0);
        (*pcVar23)();
      }
      puVar15 = puVar25;
      _swift_getEnumCaseMultiPayload(puVar25,lVar24);
      if ((int)puVar15 == 1) {
        uVar13 = *puVar25;
        puVar12 = &DAT_100fb4cb8;
        FUN_100005c24(&DAT_100fb4cb8,&DAT_100c32db0);
        puVar9 = local_c0;
        lVar7 = 0;
        _swift_getTupleTypeMetadata3
                  (0,PTR___type_metadata_for_Swift_Int_100eac6f8,local_c0,puVar12,
                   "offset element associatedWith ",0);
        puVar15 = (undefined8 *)((long)puVar25 + (long)*(int *)(lVar7 + 0x40));
        uVar30 = *puVar15;
        cVar2 = *(char *)(puVar15 + 1);
        (**(code **)(lVar27 + 8))((long)puVar25 + (long)*(int *)(lVar7 + 0x30),puVar9);
        puVar15 = local_b0;
        if (cVar2 == '\x01') {
          FUN_1001b0218(puVar15,uVar13);
          lVar27 = local_c8;
          lVar7 = local_110;
        }
        else {
          FUN_1001b02ec(puVar15,uVar13,uVar30);
          lVar27 = local_c8;
          lVar7 = local_110;
        }
      }
      else {
        (**(code **)(lVar7 + 8))(puVar25,lVar24);
      }
      _Var14 = Swift::Array<undefined>::get_endIndex(puVar15,lVar24);
      lVar28 = lVar28 + 1;
    } while (lVar1 != _Var14);
  }
  _swift_bridgeObjectRelease(CVar8.unknown);
  CVar8.unknown = local_120.unknown;
  Swift::CollectionDifference::_get_insertions(local_120);
  _Var14 = Swift::Array<undefined>::get_endIndex(CVar8.unknown,lVar24);
  puVar25 = local_100;
  if (_Var14 != 0) {
    lVar28 = 0;
    puVar12 = local_c0;
    puVar15 = local_100;
    do {
      puVar9 = local_b8;
      Swift::Array<undefined>::get_subscript(local_b8,lVar28,CVar8.unknown,lVar24);
      (**(code **)(lVar7 + 0x20))(puVar15,puVar9,lVar24);
      lVar1 = lVar28 + 1;
      if (SCARRY8(lVar28,1)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1001b62e4);
        (*pcVar23)();
      }
      puVar16 = puVar15;
      _swift_getEnumCaseMultiPayload(puVar15,lVar24);
      if ((int)puVar16 == 1) {
        (**(code **)(lVar7 + 8))(puVar15,lVar24);
      }
      else {
        puVar9 = &DAT_100fb4cb8;
        FUN_100005c24(&DAT_100fb4cb8,&DAT_100c32db0);
        puVar16 = (undefined8 *)0x0;
        _swift_getTupleTypeMetadata3
                  (0,PTR___type_metadata_for_Swift_Int_100eac6f8,puVar12,puVar9,
                   "offset element associatedWith ",0);
        if (*(char *)((long)puVar25 + (long)*(int *)(puVar16 + 8) + 8) == '\x01') {
          uVar13 = *local_100;
          (**(code **)(lVar27 + 8))((long)local_100 + (long)*(int *)(puVar16 + 6),puVar12);
          puVar15 = local_100;
          puVar16 = local_b0;
          FUN_1001b0218(puVar16,uVar13);
          puVar12 = local_c0;
        }
        else {
          (**(code **)(lVar27 + 8))((long)puVar15 + (long)*(int *)(puVar16 + 6),puVar12);
        }
      }
      _Var14 = Swift::Array<undefined>::get_endIndex(puVar16,lVar24);
      lVar28 = lVar28 + 1;
    } while (lVar1 != _Var14);
  }
  _swift_bridgeObjectRelease(CVar8.unknown);
  SVar3.unknown = local_130.unknown;
  bVar6 = Swift::Set::get_isEmpty(local_130);
  if (bVar6) {
    (*local_138)(local_128,local_120.unknown);
    _swift_bridgeObjectRelease(local_118);
    _swift_bridgeObjectRelease(SVar3.unknown);
    puVar12 = local_70;
  }
  else {
    local_b8 = local_80;
    puVar12 = local_80;
    FUN_1001b574c();
    puVar9 = puVar12;
    FUN_1001b6758();
    _swift_bridgeObjectRelease(puVar12);
    uVar13 = local_118;
    local_b0[0] = local_118;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,local_140);
    (extension_Swift)::Swift::Sequence::enumerated();
    _swift_bridgeObjectRelease(uVar13);
    EVar17 = Swift::EnumeratedSequence::typeMetadataAccessor();
    Swift::EnumeratedSequence::_makeIterator(EVar17);
    IVar18 = Swift::EnumeratedSequence::Iterator::typeMetadataAccessor();
    puVar12 = local_70;
    while( true ) {
      lVar7 = local_f0;
      Swift::EnumeratedSequence::Iterator::_next(IVar18);
      p_Var22 = local_f8;
      (**(code **)(local_e8 + 0x20))(local_f8,lVar7,lStack_e0);
      lVar27 = local_d8;
      p_Var19 = p_Var22;
      (**(code **)(*(long *)(local_d8 + -8) + 0x30))(p_Var22,1,local_d8);
      puVar10 = local_c0;
      lVar24 = local_c8;
      lVar7 = local_108;
      if ((int)p_Var19 == 1) break;
      _Var29 = *p_Var22;
      (**(code **)(local_c8 + 0x20))
                (local_108,(long)p_Var22 + (long)*(int *)(lVar27 + 0x30),local_c0);
      HVar21.unknown = puVar10;
      bVar6 = Swift::Set::contains(lVar7,SVar3.unknown,puVar10,local_d0);
      if (bVar6) {
        if (*(long *)(puVar12 + 0x10) != 0) {
          uVar20 = Swift::Hasher::_hash(*(__int64 *)(puVar12 + 0x28),_Var29,HVar21);
          uVar26 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
          uVar20 = uVar20 & (uVar26 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar12 + (uVar20 >> 6) * 8 + 0x38) >> (uVar20 & 0x3f) & 1) != 0) {
            do {
              if (*(__uint64 *)(*(long *)(puVar12 + 0x30) + uVar20 * 8) == _Var29) {
                pcVar23 = *(code **)(local_c8 + 8);
                goto LAB_1001b60ec;
              }
              uVar20 = uVar20 + 1 & ~uVar26;
            } while ((*(ulong *)(puVar12 + (uVar20 >> 6) * 8 + 0x38) >> (uVar20 & 0x3f) & 1) != 0);
          }
        }
        if (*(long *)(puVar9 + 0x10) != 0) {
          uVar20 = Swift::Hasher::_hash(*(__int64 *)(puVar9 + 0x28),_Var29,HVar21);
          uVar26 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
          uVar20 = uVar20 & (uVar26 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar9 + (uVar20 >> 6) * 8 + 0x38) >> (uVar20 & 0x3f) & 1) != 0) {
            do {
              if (*(__uint64 *)(*(long *)(puVar9 + 0x30) + uVar20 * 8) == _Var29)
              goto LAB_1001b6258;
              uVar20 = uVar20 + 1 & ~uVar26;
            } while ((*(ulong *)(puVar9 + (uVar20 >> 6) * 8 + 0x38) >> (uVar20 & 0x3f) & 1) != 0);
          }
        }
        FUN_1001b0218(&local_90,_Var29);
LAB_1001b6258:
        (**(code **)(local_c8 + 8))(lVar7,local_c0);
      }
      else {
        pcVar23 = *(code **)(lVar24 + 8);
LAB_1001b60ec:
        (*pcVar23)(lVar7,puVar10);
      }
    }
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(SVar3.unknown);
    _swift_bridgeObjectRelease(local_b0[0]);
    (*local_138)(local_128,local_120.unknown);
  }
  return puVar12;
}



/* Address: 0x1001b62e4 | FUN_1001b62e4 */

void FUN_1001b62e4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1001b6338();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1001b6300 | FUN_1001b6300 */

void FUN_1001b6300(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1001b6540();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1001b631c | FUN_1001b631c */

void FUN_1001b631c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1001b6440();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1001b6338 | FUN_1001b6338 */

undefined * FUN_1001b6338(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b6440);
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
    puVar3 = &DAT_100fb4ca0;
    FUN_1000037f0(&DAT_100fb4ca0,&DAT_100c32ca8);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1001b6440 | FUN_1001b6440 */

undefined * FUN_1001b6440(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b6540);
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
    puVar3 = &DAT_100fb4c58;
    FUN_1000037f0(&DAT_100fb4c58,&DAT_100c32c30);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1001b6540 | FUN_1001b6540 */

undefined * FUN_1001b6540(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b6658);
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
    puVar3 = &DAT_100fb4c70;
    FUN_1000037f0(&DAT_100fb4c70,&DAT_100c32e20);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6 * 0x18);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1001b6658 | FUN_1001b6658 */

undefined * FUN_1001b6658(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b6758);
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
    puVar3 = &DAT_100fb4c78;
    FUN_1000037f0(&DAT_100fb4c78,&DAT_100c32c50);
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
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1001b6758 | FUN_1001b6758 */

Set<undefined> FUN_1001b6758(long param_1)

{
  long minimumCapacity;
  undefined8 *puVar1;
  undefined1 auStack_40 [8];
  undefined *local_38;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  local_38 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      FUN_1001b0218(auStack_40,*puVar1);
      minimumCapacity = minimumCapacity + -1;
      puVar1 = puVar1 + 1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_38;
}



/* Address: 0x1001b67c8 | FUN_1001b67c8 */

Set<undefined> FUN_1001b67c8(long param_1)

{
  long minimumCapacity;
  undefined8 *puVar1;
  undefined1 auStack_48 [16];
  undefined *local_38;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  FUN_1001af27c();
  local_38 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x28);
    do {
      FUN_1001b02ec(auStack_48,puVar1[-1],*puVar1);
      puVar1 = puVar1 + 2;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_38;
}



/* Address: 0x1001b683c | thunk_FUN_1001b6868 */

undefined8 * thunk_FUN_1001b6868(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1001b6840 | FUN_1001b6840 */

void FUN_1001b6840(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  return;
}



/* Address: 0x1001b6868 | FUN_1001b6868 */

undefined8 * FUN_1001b6868(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1001b68a4 | FUN_1001b68a4 */

undefined8 * FUN_1001b68a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1001b6900 | FUN_1001b6900 */

undefined8 * FUN_1001b6900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1001b693c | FUN_1001b693c */

void FUN_1001b693c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1001b6948 | thunk_FUN_1001b6868 */

void thunk_FUN_1001b6868(void)

{
  thunk_FUN_1001b6868();
  return;
}



/* Address: 0x1001b694c | FUN_1001b694c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001b6b14 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001b694c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  undefined *puVar2;
  Optional OVar3;
  bool bVar4;
  long lVar5;
  NSDiffableDataSourceSnapshot NVar6;
  undefined8 uVar7;
  undefined *puVar8;
  Set<undefined> SVar9;
  Set SVar10;
  undefined **ppuVar11;
  long extraout_x8;
  undefined1 *puVar12;
  long lVar13;
  code *pcVar14;
  tuple2_conflict3 tVar15;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long lStack_b0;
  undefined *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_c8 = param_1;
  local_a8 = param_3;
  local_98 = param_4;
  local_90 = param_2;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_b0 = CONCAT71((int7)((ulong)param_2 >> 8),OVar3.value);
  local_b8 = *(long *)(lStack_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_d0 + -extraout_x8;
  local_c0 = param_7;
  AppKit::NSDiffableDataSourceSnapshot::init();
  FUN_1001b72ec(param_5,param_5);
  lVar13 = *(long *)(param_5 + -8);
  bVar1 = *(byte *)(lVar13 + 0x50);
  _swift_allocObject();
  tVar15 = Swift::Array<undefined>::__adoptStorage();
  uVar7 = local_90;
  lVar5 = tVar15._0_8_;
  pcVar14 = *(code **)(lVar13 + 0x10);
  (*pcVar14)(lVar5 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),local_90,param_5);
  Swift::Array<undefined>::typeMetadataAccessor();
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  NVar6 = AppKit::NSDiffableDataSourceSnapshot::typeMetadataAccessor();
  AppKit::NSDiffableDataSourceSnapshot::appendSections(lVar5,NVar6.unknown);
  _swift_bridgeObjectRelease(lVar5);
  (*pcVar14)(puVar12,uVar7,param_5);
  local_a0 = lVar13;
  (**(code **)(lVar13 + 0x38))(puVar12,0,1,param_5);
  puVar2 = local_a8;
  AppKit::NSDiffableDataSourceSnapshot::_appendItems(local_a8,puVar12,NVar6.unknown);
  (**(code **)(local_b8 + 8))(puVar12,lStack_b0);
  local_80 = puVar2;
  uVar7 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_bridgeObjectRetain(puVar2);
  puVar8 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar7);
  SVar9 = Swift::Set::_init(puVar8,param_6,uVar7,param_8,puVar8);
  puVar8 = &DAT_100ebe800;
  _swift_allocObject(&DAT_100ebe800,0x38,7);
  uVar7 = local_98;
  *(undefined **)(puVar8 + 0x10) = param_5;
  *(undefined8 *)(puVar8 + 0x18) = param_6;
  *(undefined8 *)(puVar8 + 0x20) = local_c0;
  *(undefined8 *)(puVar8 + 0x28) = param_8;
  *(undefined **)(puVar8 + 0x30) = SVar9.unknown;
  _swift_bridgeObjectRetain(local_98);
  SVar9 = Swift::Set::_filter((Set)0x1001b7684);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(puVar2);
  _swift_release(puVar8);
  bVar4 = Swift::Set::get_isEmpty((Set)SVar9.unknown);
  if (bVar4) {
    (**(code **)(local_a0 + 8))(local_90,param_5);
    _swift_bridgeObjectRelease(SVar9.unknown);
  }
  else {
    local_80 = SVar9.unknown;
    SVar10 = Swift::Set::typeMetadataAccessor();
    puVar8 = PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0,SVar10.unknown);
    ppuVar11 = &local_80;
    Swift::Array<undefined>::_init(ppuVar11,param_6,SVar10.unknown,puVar8);
    AppKit::NSDiffableDataSourceSnapshot::reloadItems();
    _swift_bridgeObjectRelease(ppuVar11);
    (**(code **)(local_a0 + 8))(local_90,param_5);
  }
  return;
}



/* Address: 0x1001b6c44 | FUN_1001b6c44 */

undefined8 FUN_1001b6c44(undefined8 param_1)

{
  Swift::Array<undefined>::typeMetadataAccessor();
  return param_1;
}



/* Address: 0x1001b6c6c | FUN_1001b6c6c */

undefined1  [16] FUN_1001b6c6c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Address: 0x1001b6cb8 | FUN_1001b6cb8 */

void FUN_1001b6cb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  FUN_100004550(uVar1,uVar2);
  return;
}



/* Address: 0x1001b6d08 | FUN_1001b6d08 */

undefined1  [16] FUN_1001b6d08(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x18,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1001b6d38 | FUN_1001b6d38 */

undefined8
FUN_1001b6d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  _swift_allocObject();
  uVar2 = param_1;
  FUN_1001b735c(param_1,param_2,param_3,param_4,lVar1);
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x50) + -8) + 8))(param_1);
  return uVar2;
}


