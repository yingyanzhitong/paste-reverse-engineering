/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10094b7b0 | FUN_10094b7b0 */

long FUN_10094b7b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x40);
  *(undefined1 *)(lVar1 + param_1) = *(undefined1 *)(lVar1 + param_2);
  return param_1;
}



/* Address: 0x10094b7f8 | FUN_10094b7f8 */

long FUN_10094b7f8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x18))();
  lVar1 = *(long *)(lVar1 + 0x40);
  *(undefined1 *)(lVar1 + param_1) = *(undefined1 *)(lVar1 + param_2);
  return param_1;
}



/* Address: 0x10094b840 | FUN_10094b840 */

long FUN_10094b840(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x20))();
  lVar1 = *(long *)(lVar1 + 0x40);
  *(undefined1 *)(lVar1 + param_1) = *(undefined1 *)(lVar1 + param_2);
  return param_1;
}



/* Address: 0x10094b888 | FUN_10094b888 */

long FUN_10094b888(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x28))();
  lVar1 = *(long *)(lVar1 + 0x40);
  *(undefined1 *)(lVar1 + param_1) = *(undefined1 *)(lVar1 + param_2);
  return param_1;
}



/* Address: 0x10094b8d0 | FUN_10094b8d0 */

uint * FUN_10094b8d0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_10094b96c;
  uVar5 = *(long *)(lVar6 + 0x40) + 1;
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar7) {
      if (uVar7 >> 0x10 == 0) {
        uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
      }
      else {
        uVar7 = *(uint *)((long)param_1 + uVar5);
      }
      goto LAB_10094b904;
    }
    if (1 < uVar7) goto LAB_10094b900;
  }
  else {
LAB_10094b900:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
LAB_10094b904:
    if (uVar7 != 0) {
      uVar1 = 0;
      if (uVar4 < 4) {
        uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
      }
      if (uVar4 != 0) {
        uVar3 = 4;
        if (uVar4 < 4) {
          uVar3 = uVar4;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar5 = (ulong)(byte)*param_1;
          }
          else {
            uVar5 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar5 = (ulong)(uint3)*param_1;
        }
        else {
          uVar5 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar5 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_10094b96c:
                    /* WARNING: Could not recover jumptable at 0x00010094b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))();
  return param_1;
}



/* Address: 0x10094b9c8 | FUN_10094b9c8 */

void FUN_10094b9c8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  sVar2 = *(long *)(lVar5 + 0x40) + 1;
  uVar6 = (uint)sVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar8 = 0;
  }
  else if (uVar6 < 4) {
    uVar1 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar6 << 3 & 0x1f)) >> (ulong)(uVar6 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar6 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar7;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010094bb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x38))();
      return;
    }
  }
  return;
}



/* Address: 0x10094bb78 | FUN_10094bb78 */

undefined1  [16] FUN_10094bb78(void)

{
  return ZEXT816(0x100f1ace8);
}



/* Address: 0x10094bb88 | FUN_10094bb88 */

undefined1  [16] FUN_10094bb88(void)

{
  return ZEXT816(0x100f1ad08);
}



/* Address: 0x10094bb98 | FUN_10094bb98 */

void FUN_10094bb98(ulong param_1,char param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  StaticString SVar4;
  code *pcVar5;
  Optional OVar6;
  long lVar7;
  undefined7 extraout_var;
  ulong *puVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  undefined8 *puVar14;
  char *pcVar15;
  void *pvVar16;
  char *pcVar17;
  long lVar18;
  ulong uVar19;
  code *pcVar20;
  uint uVar21;
  undefined *puVar22;
  long *unaff_x20;
  long unaff_x21;
  long lVar23;
  ulong uVar24;
  long lVar25;
  char *pcVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  undefined8 uStack_190;
  undefined4 auStack_188 [2];
  long local_180;
  long local_178;
  long local_170;
  char *local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  code *local_148;
  long local_140;
  long local_138;
  undefined8 local_130;
  StaticString local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong uStack_c0;
  long local_b8 [3];
  undefined1 local_a0;
  int7 iStack_9f;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar18 = *unaff_x20;
  pcVar26 = *(char **)(lVar18 + 0x50);
  lVar7 = 0;
  local_148 = param_5;
  local_130 = param_6;
  FUN_10094b3fc(0,pcVar26);
  local_140 = *(long *)(lVar7 + -8);
  lVar28 = (long)&local_180 - (*(long *)(local_140 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar7;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar29 = *(long *)((char *)CONCAT71(extraout_var,OVar6.value) + -8);
  lVar23 = lVar28 - (*(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = *(long *)(pcVar26 + -8);
  uVar19 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar27 = lVar23 - uVar19;
  lVar7 = lVar27 - uVar19;
  _Var12.unknown = auStack_88;
  pcVar15 = (char *)0x0;
  pvVar16 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 2);
  if ((char)unaff_x20[2] != '\0') {
    local_d8.unknown = (undefined *)0x0;
    local_d0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2d,_Var12);
    SVar32.bridgeObject = (void *)0x8000000100db52c0;
    SVar32.str = (char *)0xd00000000000002a;
    SVar34.bridgeObject = pvVar16;
    SVar34.str = pcVar15;
    Swift::String::append(SVar32,SVar34);
    local_a0 = (undefined1)unaff_x20[2];
    pcVar15 = "\x01\x02";
    puVar22 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_a0,&local_d8,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar31.bridgeObject = (void *)0xe100000000000000;
    SVar31.str = (char *)0x2e;
    puVar8 = (ulong *)0x2e;
    SVar35.bridgeObject = puVar22;
    SVar35.str = pcVar15;
    Swift::String::append(SVar31,SVar35);
    uVar19 = local_d0;
    SVar4.unknown = local_d8.unknown;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar8,0,0);
    *puVar8 = (ulong)SVar4.unknown;
    puVar8[1] = uVar19;
    *(undefined4 *)(puVar8 + 2) = 9;
LAB_10094bd50:
    _swift_willThrow();
    goto LAB_10094c16c;
  }
  local_158 = *(undefined **)(lVar18 + 0x58);
  local_180 = lVar27;
  local_178 = lVar28;
  local_170 = lVar29;
  local_168 = (char *)CONCAT71(extraout_var,OVar6.value);
  local_160 = lVar7;
  local_150 = lVar23;
  FUN_10094b3f0(0,pcVar26);
  if (param_2 == '\x01') {
    if (param_1 != 0) {
      local_d0 = 0;
      local_d8.unknown = (undefined *)0x0;
      goto LAB_10094be30;
    }
    FUN_10094c40c(&local_a0,0,unaff_x20);
    if (unaff_x21 != 0) goto LAB_10094c16c;
    lVar18 = CONCAT71(iStack_9f,local_a0);
    (*param_3)();
    if (iStack_9f < 0) goto LAB_10094c278;
  }
  else {
    if ((long)param_1 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10094c284);
      (*pcVar5)();
    }
    local_d0 = param_1 % 1000000000;
    local_d8.unknown = (undefined *)(param_1 / 1000000000);
    if ((undefined *)0x5f5e0ff < (undefined *)(param_1 / 1000000000)) {
      local_d8.unknown = (undefined *)0x5f5e100;
    }
LAB_10094be30:
    FUN_10094c40c(local_b8,&local_d8,unaff_x20);
    if (unaff_x21 != 0) goto LAB_10094c16c;
    (*param_3)();
    lVar18 = local_b8[0];
    if (local_b8[0] < 0) {
LAB_10094c278:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10094c27c);
      (*pcVar5)();
    }
  }
  if (lVar18 != 0) {
    _swift_beginAccess(unaff_x20 + 8,&local_a0,0,0);
    _Var12.unknown = (undefined *)local_b8;
    pcVar15 = (char *)0x0;
    pcVar17 = (char *)0x0;
    _swift_beginAccess(unaff_x20 + 3);
    pcVar5 = local_148;
    lVar23 = 0;
    lVar28 = lVar18;
    do {
      puVar8 = (ulong *)(unaff_x20[8] + lVar23);
      puVar22 = (undefined *)*puVar8;
      sVar2 = (short)puVar8[1];
      uVar3 = *(ushort *)((long)puVar8 + 10);
      iVar1 = *(int *)((long)puVar8 + 0xc);
      uVar19 = puVar8[1];
      uVar30 = puVar8[3];
      if ((uVar3 >> 0xe & 1) != 0) {
        uVar24 = puVar8[2];
        if ((long)uVar24 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10094c288);
          (*pcVar5)();
        }
        if (0x7fffffff < (long)uVar24) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10094c28c);
          (*pcVar5)();
        }
        local_d8.unknown = (undefined *)0x0;
        local_d0 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x25,_Var12);
        _swift_bridgeObjectRelease(local_d0);
        uVar11 = 0;
        local_d8.unknown = puVar22;
        local_d0 = uVar19;
        local_c8 = uVar24;
        uStack_c0 = uVar30;
        FUN_1008d4db0(0);
        SVar32 = Swift::String::_init(&local_d8,uVar11);
        puVar14 = SVar32.bridgeObject;
        SVar36.bridgeObject = pcVar17;
        SVar36.str = pcVar15;
        Swift::String::append(SVar32,SVar36);
        _swift_bridgeObjectRelease();
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar14,0,0);
        *puVar14 = 0xd000000000000023;
        puVar14[1] = 0x8000000100db52f0;
        *(int *)(puVar14 + 2) = (int)uVar24;
        goto LAB_10094bd50;
      }
      if (sVar2 != -10) {
        if ((long)puVar22 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10094c280);
          (*pcVar5)();
        }
        lVar27 = unaff_x20[3];
        local_d8.unknown = puVar22;
        _swift_bridgeObjectRetain(lVar27);
        lVar29 = local_150;
        pcVar17 = pcVar26;
        Swift::Dictionary::_get_subscript
                  (local_150,&local_d8,lVar27,PTR___type_metadata_for_Swift_Int_100eac6f8,pcVar26,
                   PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708);
        _swift_bridgeObjectRelease(lVar27);
        lVar9 = lVar29;
        pcVar15 = pcVar26;
        (**(code **)(lVar25 + 0x30))(lVar29,1);
        lVar27 = local_160;
        if ((int)lVar9 == 1) {
          pcVar20 = *(code **)(local_170 + 8);
          lVar27 = lVar29;
          _Var12.unknown = local_168;
        }
        else {
          pcVar15 = pcVar26;
          (**(code **)(lVar25 + 0x20))(local_160,lVar29);
          pcVar10 = pcVar26;
          _Var13.unknown = local_158;
          (**(code **)(local_158 + 0x20))();
          lVar29 = local_160;
          _Var12.unknown = pcVar26;
          if ((int)pcVar10 == (int)uVar30) {
            if (sVar2 == -0xf) {
              uVar21 = 0;
joined_r0x00010094c00c:
              if ((short)uVar3 < 0) {
                pcVar10 = pcVar26;
                (**(code **)(local_158 + 8))();
                uVar21 = (uint)pcVar10 & 2 | uVar21;
              }
            }
            else {
              if (sVar2 != -2) {
                if (sVar2 != -1) {
                  local_d8.unknown = (undefined *)0x0;
                  local_d0 = 0xe000000000000000;
                  Swift::_StringGuts::grow(0x14,_Var13);
                  _swift_bridgeObjectRelease(local_d0);
                  local_d8.unknown = (undefined *)0xd000000000000012;
                  local_d0 = 0x8000000100db5340;
                  SVar32 = Swift::CustomStringConvertible::get_description();
                  SVar37.bridgeObject = pcVar17;
                  SVar37.str = pcVar15;
                  Swift::String::append(SVar32,SVar37);
                  _swift_bridgeObjectRelease(SVar32.bridgeObject);
                  uVar19 = local_d0;
                  SVar4.unknown = local_d8.unknown;
                  *(undefined4 *)(lVar7 + -8) = 0;
                  *(undefined8 *)(lVar7 + -0x10) = 0x140;
                  SVar33.bridgeObject = (void *)0x2;
                  SVar33.str = (char *)0xb;
                  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar33,SVar4,uVar19,0xdb5340);
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10094c338);
                  (*pcVar5)();
                }
                uVar21 = 4;
                goto joined_r0x00010094c00c;
              }
              uVar21 = 8;
            }
            if (iVar1 != 0) {
              uVar21 = uVar21 | 1;
            }
            pcVar10 = pcVar26;
            (**(code **)(local_158 + 8))();
            lVar27 = local_180;
            uVar21 = (uint)pcVar10 & uVar21;
            if (uVar21 != 0) {
              (**(code **)(lVar25 + 0x10))(local_180,lVar29,pcVar26);
              lVar9 = local_178;
              pcVar15 = pcVar26;
              FUN_10094b2e0(local_178,uVar21,lVar27);
              (*pcVar5)(lVar9);
              (**(code **)(local_140 + 8))(lVar9,local_138);
              (**(code **)(lVar25 + 8))(lVar29);
              if (unaff_x21 == 0) goto LAB_10094beac;
              goto LAB_10094c16c;
            }
            pcVar20 = *(code **)(lVar25 + 8);
            lVar27 = lVar29;
          }
          else {
            pcVar20 = *(code **)(lVar25 + 8);
          }
        }
        (*pcVar20)(lVar27);
      }
LAB_10094beac:
      lVar23 = lVar23 + 0x20;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  FUN_10094a3c4(lVar18);
LAB_10094c16c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10094c338 | FUN_10094c338 */

void FUN_10094c338(void)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10094c38c);
    (*pcVar1)();
  }
  FUN_10094c4dc();
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
    if (iVar2 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10094c390);
    (*pcVar1)();
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094c39c);
  (*pcVar1)();
}



/* Address: 0x10094c39c | FUN_10094c39c */

ulong FUN_10094c39c(ulong param_1,char param_2)

{
  ulong uVar1;
  code *pcVar2;
  
  if (param_2 == '\x01') {
    return 0;
  }
  if (0 < (long)param_1) {
    uVar1 = param_1 / 1000000000;
    if (99999999 < param_1 / 1000000000) {
      uVar1 = 100000000;
    }
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10094c40c);
  (*pcVar2)();
}



/* Address: 0x10094c40c | FUN_10094c40c */

void FUN_10094c40c(long *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_3 + 0x38,auStack_58,0,0);
  iVar2 = *(int *)(param_3 + 0x38);
  _swift_beginAccess(param_3 + 0x40,auStack_70,0,0);
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  _swift_beginAccess(param_3 + 0x48,auStack_88,0,0);
  lVar3 = *(long *)(param_3 + 0x48);
  if (lVar3 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10094c4d8);
    (*pcVar1)();
  }
  if (lVar3 < 0x80000000) {
    FUN_10095ebc4(iVar2,0,0,uVar4,lVar3,param_2);
    if (unaff_x21 == 0) {
      *param_1 = (long)iVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094c4dc);
  (*pcVar1)();
}



/* Address: 0x10094c4dc | FUN_10094c4dc */

void FUN_10094c4dc(long param_1)

{
  code *pcVar1;
  long unaff_x21;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x38,auStack_38,1,0);
  FUN_10095d958(*(undefined4 *)(param_1 + 0x38));
  if (unaff_x21 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    return;
  }
  _swift_unexpectedError();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094c550);
  (*pcVar1)();
}



/* Address: 0x10094c550 | FUN_10094c550 */

/* WARNING: Removing unreachable block (ram,0x00010094c604) */
/* WARNING: Removing unreachable block (ram,0x00010094c6f0) */
/* WARNING: Removing unreachable block (ram,0x00010094c64c) */
/* WARNING: Removing unreachable block (ram,0x00010094c738) */
/* WARNING: Removing unreachable block (ram,0x00010094c690) */
/* WARNING: Removing unreachable block (ram,0x00010094c6dc) */
/* WARNING: Removing unreachable block (ram,0x00010094c6a8) */
/* WARNING: Removing unreachable block (ram,0x00010094c5f4) */
/* WARNING: Removing unreachable block (ram,0x00010094c614) */

void FUN_10094c550(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_10095e480(param_1,1,param_2);
  if (unaff_x21 == 0) {
    if ((param_3 & 1) != 0) {
      FUN_10095ea98();
    }
    if ((int)param_1 == 1) {
      uVar1 = 1;
    }
    else {
      if ((int)param_1 == 0x1e) {
        FUN_10095e2f8();
      }
      uVar1 = 0;
    }
    *(undefined1 *)(unaff_x20 + 0x14) = uVar1;
    FUN_1008d5604();
  }
  else {
    FUN_10094ccdc();
    _swift_deallocPartialClassInstance();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10094c7d8 | FUN_10094c7d8 */

/* WARNING: Removing unreachable block (ram,0x00010094c878) */

void FUN_10094c7d8(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  
  *(undefined1 *)(unaff_x20 + 0x14) = 0;
  if ((int)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10094c994);
    (*pcVar1)();
  }
  *(int *)(unaff_x20 + 0x10) = (int)param_1;
  FUN_10095e9d0(param_1,0x49,1);
  if (unaff_x21 == 0) {
    if ((param_2 & 1) == 0) {
      return;
    }
    puVar3 = (undefined8 *)(ulong)*(uint *)(unaff_x20 + 0x10);
    if (-1 < (int)*(uint *)(unaff_x20 + 0x10)) {
      FUN_10095ea98();
      return;
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd00000000000001f;
    puVar3[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar3 + 2) = 9;
  }
  else {
    _swift_errorRetain();
    puVar2 = &DAT_100febaf0;
    FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
    puVar3 = &local_58;
    _swift_dynamicCast(puVar3,&stack0xffffffffffffffc8,puVar2,&DAT_100ef11e8,0);
    if ((int)puVar3 != 0) {
      _swift_errorRelease();
      FUN_10095d958();
      if (local_48 == 0x16) {
        _swift_bridgeObjectRelease(uStack_50);
        FUN_1008d5f10();
        _swift_allocError(&DAT_100f1bbc8,uStack_50,0,0);
      }
      else {
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,param_1,0,0);
        *param_1 = local_58;
        param_1[1] = uStack_50;
        *(int *)(param_1 + 2) = local_48;
      }
      _swift_willThrow();
    }
    _swift_errorRelease(unaff_x21);
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
  }
  _swift_willThrow();
  _swift_release();
  return;
}



/* Address: 0x10094c994 | FUN_10094c994 */

/* WARNING: Removing unreachable block (ram,0x00010094caa8) */
/* WARNING: Removing unreachable block (ram,0x00010094ca8c) */

undefined8 * FUN_10094c994(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  puVar1 = (undefined8 *)(ulong)*(uint *)(unaff_x20 + 0x10);
  if ((int)*(uint *)(unaff_x20 + 0x10) < 0) {
    FUN_1008d5300();
    unaff_x19 = (undefined8 *)&DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
    *puVar1 = 0xd00000000000001f;
    puVar1[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    FUN_10095d7a0(puVar1,0,0);
    if (unaff_x21 == 0) {
      if (((ulong)puVar1 & 0xff00000000) == 0x100000000) {
        unaff_x19 = (undefined8 *)0x0;
      }
      else {
        FUN_10094cfe0(0);
        _swift_allocObject();
        FUN_1008d5604();
        unaff_x19 = puVar1;
        if ((param_1 & 1) != 0) {
          if (*(int *)(puVar1 + 2) < 0) {
            puVar2 = puVar1;
            FUN_1008d5300();
            _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
            *puVar2 = 0xd00000000000001f;
            puVar2[1] = 0x8000000100db4780;
            *(undefined4 *)(puVar2 + 2) = 9;
            _swift_willThrow();
            _swift_willThrow();
            _swift_release(puVar1);
          }
          else {
            FUN_10095ea98(*(int *)(puVar1 + 2));
          }
        }
      }
    }
  }
  return unaff_x19;
}



/* Address: 0x10094cb18 | FUN_10094cb18 */

/* WARNING: Removing unreachable block (ram,0x00010094cbc4) */

void FUN_10094cb18(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    local_154 = 0x80;
    uVar2 = (ulong)*(uint *)(unaff_x20 + 0x10);
    if ((int)*(uint *)(unaff_x20 + 0x10) < 0) goto LAB_10094cbd4;
    puVar4 = &local_150;
    FUN_10095dc2c(uVar2,puVar4,&local_154);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
      goto LAB_10094cbd4;
    }
    uStack_88 = uStack_108;
    local_90 = local_110;
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    local_70 = local_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_c8 = uStack_148;
    local_d0 = local_150;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    local_b0 = local_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    FUN_1008d5380();
    uVar5 = uVar2;
    FUN_100666fac();
    _swift_release(uVar2 & 0x3fffffffffffffff);
    uVar1 = *(uint *)(unaff_x20 + 0x10);
    if ((int)uVar1 < 0) goto LAB_10094cc40;
LAB_10094cbe4:
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
    FUN_10095d958();
    if (unaff_x21 == 0) {
      if (puVar4 == (undefined8 *)0x0) goto LAB_10094cc94;
      FUN_1008d5170(uVar5,puVar4);
    }
  }
  else {
LAB_10094cbd4:
    uVar5 = 0;
    puVar4 = (undefined8 *)0x0;
    uVar1 = *(uint *)(unaff_x20 + 0x10);
    if (-1 < (int)uVar1) goto LAB_10094cbe4;
LAB_10094cc40:
    puVar3 = (undefined8 *)(ulong)uVar1;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd00000000000001f;
    puVar3[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar3 + 2) = 9;
    _swift_willThrow();
  }
  _swift_bridgeObjectRelease(puVar4);
LAB_10094cc94:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10094cccc | FUN_10094cccc */

void FUN_10094cccc(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10094ccdc | FUN_10094ccdc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10094ccdc(void)

{
  return ZEXT816(0x100fedc68);
}



/* Address: 0x10094ccfc | FUN_10094ccfc */

void FUN_10094ccfc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10094cd20();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x10094cd20 | FUN_10094cd20 */

void FUN_10094cd20(void)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fedd50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  lVar1 = (long)DAT_100fedd50;
  FUN_10094ccdc();
  pTVar2 = &TargetProtocolConformanceDescriptor_100c83494;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83494,lVar1);
  DAT_100fedd50 = pTVar2;
  return;
}



/* Address: 0x10094cd60 | FUN_10094cd60 */

void FUN_10094cd60(byte *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x21;
  
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10094cdac);
    (*pcVar1)();
  }
  if (param_3 >> 0x20 == 0) {
    FUN_10095d9e8(param_4,param_2,param_3);
    if (unaff_x21 == 0) {
      *param_1 = (byte)param_4 & 1;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094cdb0);
  (*pcVar1)();
}



/* Address: 0x10094cdb0 | FUN_10094cdb0 */

void FUN_10094cdb0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  long unaff_x20;
  long unaff_x21;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  iVar1 = *(int *)(unaff_x20 + 0x10);
  if (iVar1 < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,param_1,0,0);
    *param_1 = 0xd00000000000001f;
    param_1[1] = 0x8000000100db4780;
    *(undefined4 *)(param_1 + 2) = 9;
  }
  else {
    local_3c = 4;
    piVar2 = (int *)0x4;
    _swift_slowAlloc(4,0xffffffffffffffff);
    *piVar2 = 0;
    FUN_10095dcec(iVar1,0xffff,0x1007,piVar2,&local_3c);
    if (unaff_x21 != 0) {
      _swift_slowDealloc(piVar2,0xffffffffffffffff,0xffffffffffffffff);
      goto LAB_10094cee0;
    }
    iVar1 = *piVar2;
    _swift_slowDealloc(piVar2,0xffffffffffffffff,0xffffffffffffffff);
    if (iVar1 == 0) goto LAB_10094cee0;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,piVar2,0,0);
    piVar2[0] = 0x27;
    piVar2[1] = -0x30000000;
    piVar2[2] = 0xdb5520;
    piVar2[3] = -0x7fffffff;
    piVar2[4] = iVar1;
  }
  _swift_willThrow();
LAB_10094cee0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10094cf14 | FUN_10094cf14 */

void FUN_10094cf14(undefined8 param_1,undefined8 param_2)

{
  FUN_10094cf4c(param_1,param_2,FUN_10095e118);
  return;
}



/* Address: 0x10094cf30 | FUN_10094cf30 */

void FUN_10094cf30(undefined8 param_1,undefined8 param_2)

{
  FUN_10094cf4c(param_1,param_2,FUN_10095de74);
  return;
}



/* Address: 0x10094cf4c | FUN_10094cf4c */

void FUN_10094cf4c(long param_1,long param_2,code *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = (undefined8 *)(ulong)*(uint *)(unaff_x20 + 0x10);
  if ((int)*(uint *)(unaff_x20 + 0x10) < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
    *puVar2 = 0xd00000000000001f;
    puVar2[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar2 + 2) = 9;
    _swift_willThrow();
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10094cfe0);
      (*pcVar1)();
    }
    (*param_3)(puVar2,param_1,param_2 - param_1);
  }
  return;
}



/* Address: 0x10094cfe0 | FUN_10094cfe0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10094cfe0(void)

{
  return ZEXT816(0x100fedd98);
}



/* Address: 0x10094d000 | FUN_10094d000 */

void FUN_10094d000(void)

{
  FUN_10094cf14();
  return;
}



/* Address: 0x10094d020 | FUN_10094d020 */

void FUN_10094d020(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *unaff_x20;
  
  puVar1 = (undefined8 *)(ulong)*(uint *)(*unaff_x20 + 0x10);
  if ((int)*(uint *)(*unaff_x20 + 0x10) < 0) {
    FUN_1008d5300(puVar1,param_1,param_2);
    _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
    *puVar1 = 0xd00000000000001f;
    puVar1[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    FUN_10095e1f4();
  }
  return;
}



/* Address: 0x10094d0a8 | FUN_10094d0a8 */

void FUN_10094d0a8(void)

{
  FUN_10094cf30();
  return;
}



/* Address: 0x10094d0c8 | FUN_10094d0c8 */

void FUN_10094d0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *unaff_x20;
  
  puVar1 = (undefined8 *)(ulong)*(uint *)(*unaff_x20 + 0x10);
  if ((int)*(uint *)(*unaff_x20 + 0x10) < 0) {
    FUN_1008d5300(puVar1,param_1,param_2,param_3);
    _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
    *puVar1 = 0xd00000000000001f;
    puVar1[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    FUN_10095e808();
  }
  return;
}



/* Address: 0x10094d154 | FUN_10094d154 */

void FUN_10094d154(undefined8 param_1)

{
  undefined8 *puVar1;
  long *unaff_x20;
  
  puVar1 = (undefined8 *)(ulong)*(uint *)(*unaff_x20 + 0x10);
  if ((int)*(uint *)(*unaff_x20 + 0x10) < 0) {
    FUN_1008d5300(puVar1,param_1);
    _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
    *puVar1 = 0xd00000000000001f;
    puVar1[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    FUN_10095e3d0();
  }
  return;
}



/* Address: 0x10094d1d4 | FUN_10094d1d4 */

void FUN_10094d1d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10094d1f8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x10094d1f8 | FUN_10094d1f8 */

void FUN_10094d1f8(void)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fedee8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  lVar1 = (long)DAT_100fedee8;
  FUN_10094cfe0();
  pTVar2 = &TargetProtocolConformanceDescriptor_100c83494;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83494,lVar1);
  DAT_100fedee8 = pTVar2;
  return;
}



/* Address: 0x10094d238 | FUN_10094d238 */

/* WARNING: Removing unreachable block (ram,0x00010094d2f0) */

undefined8 * FUN_10094d238(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long unaff_x21;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  
  iVar2 = (int)&local_60;
  puVar3 = param_1;
  FUN_10094cfe0();
  _swift_allocObject();
  if ((int)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10094d3a0);
    (*pcVar1)();
  }
  *(int *)(puVar3 + 2) = (int)param_1;
  FUN_10095e9d0(param_1,0x49,1);
  if (unaff_x21 != 0) {
    _swift_errorRetain();
    puVar4 = &DAT_100febaf0;
    FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
    _swift_dynamicCast(&local_60,&stack0xffffffffffffffb8,puVar4,&DAT_100ef11e8,0);
    if (iVar2 != 0) {
      _swift_errorRelease();
      FUN_10095d958();
      if (local_50 == 0x16) {
        _swift_bridgeObjectRelease(uStack_58);
        FUN_1008d5f10();
        _swift_allocError(&DAT_100f1bbc8,uStack_58,0,0);
      }
      else {
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,param_1,0,0);
        *param_1 = local_60;
        param_1[1] = uStack_58;
        *(int *)(param_1 + 2) = local_50;
      }
      _swift_willThrow();
    }
    _swift_errorRelease(unaff_x21);
    *(undefined4 *)(puVar3 + 2) = 0xffffffff;
    _swift_willThrow();
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x10094d3a0 | FUN_10094d3a0 */

undefined8 FUN_10094d3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x21;
  undefined4 local_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_4c = 8;
  puVar1 = (undefined8 *)0x8;
  _swift_slowAlloc(8,0xffffffffffffffff);
  *puVar1 = 0;
  FUN_10095dcec(param_1,param_2,param_3,puVar1,&local_4c);
  if (unaff_x21 == 0) {
    param_3 = *puVar1;
  }
  _swift_slowDealloc(puVar1,0xffffffffffffffff,0xffffffffffffffff);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10094d468 | FUN_10094d468 */

void FUN_10094d468(void)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_10094d4b0();
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10094d4b0 | FUN_10094d4b0 */

/* WARNING: Removing unreachable block (ram,0x00010094d6d0) */
/* WARNING: Removing unreachable block (ram,0x00010094d750) */

void FUN_10094d4b0(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,
                  undefined8 param_5,byte param_6)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  _StringGuts _Var8;
  undefined8 uVar9;
  pthread_mutexattr_t *ppVar10;
  void *pvVar11;
  long unaff_x20;
  long unaff_x21;
  String SVar12;
  String SVar13;
  String SVar14;
  pthread_mutexattr_t local_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  pthread_mutexattr_t local_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  pthread_mutexattr_t local_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &DAT_100feb9d0;
  pvVar11 = param_4;
  FUN_1000f7830(&DAT_100feb9d0,&DAT_100c84600);
  _swift_allocObject();
  local_100.__sig = 0;
  local_100.__opaque[0] = '\0';
  local_100.__opaque[1] = '\0';
  local_100.__opaque[2] = '\0';
  local_100.__opaque[3] = '\0';
  local_100.__opaque[4] = '\0';
  local_100.__opaque[5] = '\0';
  local_100.__opaque[6] = '\0';
  local_100.__opaque[7] = '\0';
  _swift_retain(param_1);
  _pthread_mutexattr_init(&local_100);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x10),&local_100);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10094d8e0);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  puVar3 = &DAT_100fecf58;
  FUN_1000f7830(&DAT_100fecf58,&DAT_100c84f70);
  uVar7 = 0x11;
  uVar9 = 7;
  _swift_allocObject();
  puVar3[0x10] = 0;
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 4;
  *(undefined2 *)(unaff_x20 + 0xd0) = 0x100;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0xf000000000000007;
  *(undefined1 *)(unaff_x20 + 0x110) = 0;
  FUN_100611728();
  *(undefined **)(unaff_x20 + 0x138) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x140) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x148) = uVar9;
  *(void **)(unaff_x20 + 0x150) = pvVar11;
  *(undefined **)(unaff_x20 + 0xf0) = puVar3;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar9;
  *(void **)(unaff_x20 + 0x108) = pvVar11;
  *(long *)(unaff_x20 + 0x20) = param_1;
  *(void **)(unaff_x20 + 0x30) = param_4;
  puVar3 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  ppVar10 = (pthread_mutexattr_t *)0x7;
  _swift_allocObject();
  *(void **)(puVar3 + 0x20) = param_4;
  *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  FUN_100076688(param_5,&local_180);
  _swift_unknownObjectRetain(param_2);
  _swift_retain_n(param_4,2);
  _Var8.unknown = (undefined *)&local_180;
  FUN_100660e04(&local_100,4);
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x88) = local_e0;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_d0;
  *(ulong *)(unaff_x20 + 0xb0) = CONCAT71(uStack_b7,uStack_b8);
  *(undefined8 *)(unaff_x20 + 0xa8) = local_c0;
  *(ulong *)(unaff_x20 + 0xb9) = CONCAT17(uStack_a8,uStack_af);
  *(ulong *)(unaff_x20 + 0xb1) = CONCAT17(uStack_b0,uStack_b7);
  *(char (*) [8])(unaff_x20 + 0x70) = local_100.__opaque;
  *(long *)(unaff_x20 + 0x68) = local_100.__sig;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_f0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  local_180.__opaque[0] = '\0';
  local_180.__opaque[1] = '\0';
  local_180.__opaque[2] = '\0';
  local_180.__opaque[3] = '\0';
  local_180.__opaque[4] = '\0';
  local_180.__opaque[5] = '\0';
  local_180.__opaque[6] = '\0';
  local_180.__opaque[7] = '\0';
  local_180.__sig = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  local_100.__sig = CONCAT44(local_100.__sig._4_4_,0x80);
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  if ((int)*(uint *)(param_1 + 0x10) < 0) {
LAB_10094d6dc:
    uVar4 = 0xf000000000000007;
  }
  else {
    _Var8.unknown = (undefined *)&local_180;
    ppVar10 = &local_100;
    FUN_10095dc2c();
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
      goto LAB_10094d6dc;
    }
    uStack_b8 = (undefined1)uStack_138;
    uStack_b7 = (undefined7)((ulong)uStack_138 >> 8);
    local_c0 = local_140;
    uStack_a8 = (undefined1)uStack_128;
    uStack_a7 = (undefined7)((ulong)uStack_128 >> 8);
    uStack_b0 = (undefined1)uStack_130;
    uStack_af = (undefined7)((ulong)uStack_130 >> 8);
    uStack_98 = uStack_118;
    local_a0 = local_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    local_100.__opaque[0] = local_180.__opaque[0];
    local_100.__opaque[1] = local_180.__opaque[1];
    local_100.__opaque[2] = local_180.__opaque[2];
    local_100.__opaque[3] = local_180.__opaque[3];
    local_100.__opaque[4] = local_180.__opaque[4];
    local_100.__opaque[5] = local_180.__opaque[5];
    local_100.__opaque[6] = local_180.__opaque[6];
    local_100.__opaque[7] = local_180.__opaque[7];
    local_100.__sig = local_180.__sig;
    uStack_e8 = uStack_168;
    uStack_f0 = uStack_170;
    uStack_d8 = uStack_158;
    local_e0 = local_160;
    uStack_c8 = uStack_148;
    uStack_d0 = uStack_150;
    FUN_1008d5380();
  }
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  local_200.__opaque[0] = '\0';
  local_200.__opaque[1] = '\0';
  local_200.__opaque[2] = '\0';
  local_200.__opaque[3] = '\0';
  local_200.__opaque[4] = '\0';
  local_200.__opaque[5] = '\0';
  local_200.__opaque[6] = '\0';
  local_200.__opaque[7] = '\0';
  local_200.__sig = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  local_180.__sig = CONCAT44(local_180.__sig._4_4_,0x80);
  uVar5 = (ulong)*(uint *)(param_1 + 0x10);
  if (-1 < (int)*(uint *)(param_1 + 0x10)) {
    _Var8.unknown = (undefined *)&local_200;
    ppVar10 = &local_180;
    FUN_10095db6c();
    if (unaff_x21 == 0) {
      uStack_138 = uStack_1b8;
      local_140 = local_1c0;
      uStack_128 = uStack_1a8;
      uStack_130 = uStack_1b0;
      uStack_118 = uStack_198;
      local_120 = local_1a0;
      uStack_108 = uStack_188;
      uStack_110 = uStack_190;
      local_180.__opaque[0] = local_200.__opaque[0];
      local_180.__opaque[1] = local_200.__opaque[1];
      local_180.__opaque[2] = local_200.__opaque[2];
      local_180.__opaque[3] = local_200.__opaque[3];
      local_180.__opaque[4] = local_200.__opaque[4];
      local_180.__opaque[5] = local_200.__opaque[5];
      local_180.__opaque[6] = local_200.__opaque[6];
      local_180.__opaque[7] = local_200.__opaque[7];
      local_180.__sig = local_200.__sig;
      uStack_168 = uStack_1e8;
      uStack_170 = uStack_1f0;
      uStack_158 = uStack_1d8;
      local_160 = local_1e0;
      uStack_148 = uStack_1c8;
      uStack_150 = uStack_1d0;
      FUN_1008d5380();
      goto LAB_10094d760;
    }
    _swift_errorRelease(unaff_x21);
  }
  uVar5 = 0xf000000000000007;
LAB_10094d760:
  uVar7 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xe8);
  *(ulong *)(unaff_x20 + 0xe0) = uVar4;
  *(ulong *)(unaff_x20 + 0xe8) = uVar5;
  FUN_1005d8534(uVar7);
  FUN_1005d8534(uVar9);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  *(void **)(unaff_x20 + 0x118) = param_4;
  *(undefined ***)(unaff_x20 + 0x120) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar7;
  *(undefined1 *)(unaff_x20 + 0x130) = 0;
  *(byte *)(unaff_x20 + 0x131) = param_6 & 1;
  *(undefined1 *)(unaff_x20 + 0x132) = 0;
  local_200.__sig = 0;
  local_200.__opaque[0] = '\0';
  local_200.__opaque[1] = '\0';
  local_200.__opaque[2] = '\0';
  local_200.__opaque[3] = '\0';
  local_200.__opaque[4] = '\0';
  local_200.__opaque[5] = '\0';
  local_200.__opaque[6] = '\0';
  local_200.__opaque[7] = -0x20;
  _swift_retain(param_4);
  _swift_retain(uVar7);
  Swift::_StringGuts::grow(0x14,_Var8);
  _swift_bridgeObjectRelease(local_200.__opaque);
  local_200.__sig = -0x2ffffffffffffff0;
  local_200.__opaque[0] = -0x60;
  local_200.__opaque[1] = 'G';
  local_200.__opaque[2] = -0x25;
  local_200.__opaque[3] = '\0';
  local_200.__opaque[4] = '\x01';
  local_200.__opaque[5] = '\0';
  local_200.__opaque[6] = '\0';
  local_200.__opaque[7] = -0x80;
  SVar12 = Swift::CustomStringConvertible::get_description();
  SVar13.bridgeObject = pvVar11;
  SVar13.str = (char *)ppVar10;
  Swift::String::append(SVar12,SVar13);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  SVar12.bridgeObject = &SUB_e200000000000000;
  SVar12.str = (char *)0x7d20;
  SVar14.bridgeObject = pvVar11;
  SVar14.str = (char *)ppVar10;
  Swift::String::append(SVar12,SVar14);
  *(long *)(unaff_x20 + 0x48) = local_200.__sig;
  *(char (*) [8])(unaff_x20 + 0x50) = local_200.__opaque;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  FUN_100631d88(0);
  _swift_allocObject();
  lVar6 = unaff_x20;
  _swift_retain();
  FUN_10062b720();
  _swift_release(param_4);
  _swift_unknownObjectRelease(param_2);
  FUN_100004594(param_5);
  _swift_release(param_1);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(long *)(unaff_x20 + 0xd8) = lVar6;
  _swift_release(uVar7);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10094d8e4 | thunk_FUN_10094d8e8 */

void thunk_FUN_10094d8e8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  FUN_1008db52c(unaff_x20 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xd8));
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe8);
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0xe0));
  FUN_1005d8534(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x118);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x128));
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10094d8e8 | FUN_10094d8e8 */

void FUN_10094d8e8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  FUN_1008db52c(unaff_x20 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xd8));
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe8);
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0xe0));
  FUN_1005d8534(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x118);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x128));
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10094d978 | thunk_FUN_10094d97c */

/* WARNING: Removing unreachable block (ram,0x00010094db78) */
/* WARNING: Removing unreachable block (ram,0x00010094db04) */
/* WARNING: Removing unreachable block (ram,0x00010094db18) */
/* WARNING: Removing unreachable block (ram,0x00010094db44) */
/* WARNING: Removing unreachable block (ram,0x00010094db58) */
/* WARNING: Removing unreachable block (ram,0x00010094db5c) */
/* WARNING: Removing unreachable block (ram,0x00010094db68) */
/* WARNING: Removing unreachable block (ram,0x00010094db74) */
/* WARNING: Removing unreachable block (ram,0x00010094db80) */
/* WARNING: Removing unreachable block (ram,0x00010094dba8) */
/* WARNING: Removing unreachable block (ram,0x00010094dc18) */
/* WARNING: Removing unreachable block (ram,0x00010094dbb0) */
/* WARNING: Removing unreachable block (ram,0x00010094db34) */
/* WARNING: Removing unreachable block (ram,0x00010094dbc4) */

undefined8 thunk_FUN_10094d97c(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  code *pcVar7;
  
  uVar4 = 1;
  if ((*(byte *)(unaff_x20 + 0x1a) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x1a) = 1;
LAB_10094d9c8:
    do {
      pcVar7 = *(code **)(*unaff_x20 + 0x290);
      (*pcVar7)();
      if (((ulong)param_1 & 1) == 0) {
LAB_10094dbe8:
        uVar4 = 1;
        goto LAB_10094dbec;
      }
      pcVar5 = *(code **)(*unaff_x20 + 0x248);
      (*pcVar5)();
      if (((ulong)param_1 & 1) == 0) goto LAB_10094dbe8;
      (**(code **)(*unaff_x20 + 0x268))();
      if (((uint)param_2 >> 8 & 1) == 0) {
        puVar3 = param_1;
        FUN_1008db674(param_1,param_2);
      }
      else {
        puVar3 = (undefined8 *)unaff_x20[0x1b];
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10094dc18);
          (*pcVar7)();
        }
        FUN_1008db674(param_1,param_2);
        _swift_retain(puVar3);
        FUN_10062cc8c();
        _swift_release();
      }
      uVar6 = (uint)param_2 & 0xff;
      if (uVar6 == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          FUN_1008db6c4();
          puVar2 = (undefined8 *)0x0;
          _swift_allocError(&DAT_100eeb710,puVar3,0,0);
          *puVar3 = 4;
          *(undefined1 *)(puVar3 + 1) = 3;
          (**(code **)(*unaff_x20 + 0x300))();
          FUN_1008db69c(param_1,0);
          _swift_errorRelease();
        }
        else {
          puVar2 = param_1;
          FUN_1008db69c(param_1,1);
        }
        uVar6 = 0;
        puVar3 = puVar2;
      }
      else {
        uVar6 = (uint)(uVar6 != 2);
      }
      (*pcVar5)();
      uVar1 = (uint)puVar3;
      if (((ulong)puVar3 & 1) == 0) {
        FUN_1008db69c();
        goto LAB_10094d9c8;
      }
      (*pcVar7)();
      FUN_1008db69c();
    } while ((uVar6 & uVar1) == 0);
    uVar4 = 0;
LAB_10094dbec:
    *(undefined1 *)(unaff_x20 + 0x1a) = 0;
  }
  return uVar4;
}



/* Address: 0x10094d97c | FUN_10094d97c */

/* WARNING: Removing unreachable block (ram,0x00010094db78) */
/* WARNING: Removing unreachable block (ram,0x00010094db04) */
/* WARNING: Removing unreachable block (ram,0x00010094db18) */
/* WARNING: Removing unreachable block (ram,0x00010094db44) */
/* WARNING: Removing unreachable block (ram,0x00010094db58) */
/* WARNING: Removing unreachable block (ram,0x00010094db5c) */
/* WARNING: Removing unreachable block (ram,0x00010094db68) */
/* WARNING: Removing unreachable block (ram,0x00010094db74) */
/* WARNING: Removing unreachable block (ram,0x00010094db80) */
/* WARNING: Removing unreachable block (ram,0x00010094dba8) */
/* WARNING: Removing unreachable block (ram,0x00010094dc18) */
/* WARNING: Removing unreachable block (ram,0x00010094dbb0) */
/* WARNING: Removing unreachable block (ram,0x00010094db34) */
/* WARNING: Removing unreachable block (ram,0x00010094dbc4) */

undefined8 FUN_10094d97c(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  code *pcVar7;
  
  uVar4 = 1;
  if ((*(byte *)(unaff_x20 + 0x1a) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x1a) = 1;
LAB_10094d9c8:
    do {
      pcVar7 = *(code **)(*unaff_x20 + 0x290);
      (*pcVar7)();
      if (((ulong)param_1 & 1) == 0) {
LAB_10094dbe8:
        uVar4 = 1;
        goto LAB_10094dbec;
      }
      pcVar5 = *(code **)(*unaff_x20 + 0x248);
      (*pcVar5)();
      if (((ulong)param_1 & 1) == 0) goto LAB_10094dbe8;
      (**(code **)(*unaff_x20 + 0x268))();
      if (((uint)param_2 >> 8 & 1) == 0) {
        puVar3 = param_1;
        FUN_1008db674(param_1,param_2);
      }
      else {
        puVar3 = (undefined8 *)unaff_x20[0x1b];
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10094dc18);
          (*pcVar7)();
        }
        FUN_1008db674(param_1,param_2);
        _swift_retain(puVar3);
        FUN_10062cc8c();
        _swift_release();
      }
      uVar6 = (uint)param_2 & 0xff;
      if (uVar6 == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          FUN_1008db6c4();
          puVar2 = (undefined8 *)0x0;
          _swift_allocError(&DAT_100eeb710,puVar3,0,0);
          *puVar3 = 4;
          *(undefined1 *)(puVar3 + 1) = 3;
          (**(code **)(*unaff_x20 + 0x300))();
          FUN_1008db69c(param_1,0);
          _swift_errorRelease();
        }
        else {
          puVar2 = param_1;
          FUN_1008db69c(param_1,1);
        }
        uVar6 = 0;
        puVar3 = puVar2;
      }
      else {
        uVar6 = (uint)(uVar6 != 2);
      }
      (*pcVar5)();
      uVar1 = (uint)puVar3;
      if (((ulong)puVar3 & 1) == 0) {
        FUN_1008db69c();
        goto LAB_10094d9c8;
      }
      (*pcVar7)();
      FUN_1008db69c();
    } while ((uVar6 & uVar1) == 0);
    uVar4 = 0;
LAB_10094dbec:
    *(undefined1 *)(unaff_x20 + 0x1a) = 0;
  }
  return uVar4;
}



/* Address: 0x10094dc1c | thunk_FUN_10094dc20 */

/* WARNING: Removing unreachable block (ram,0x00010094dc78) */
/* WARNING: Removing unreachable block (ram,0x00010094dc80) */
/* WARNING: Removing unreachable block (ram,0x00010094dce0) */

void thunk_FUN_10094dc20(ulong param_1)

{
  ulong uVar1;
  long *unaff_x20;
  
  uVar1 = param_1;
  (**(code **)(*unaff_x20 + 0x248))();
  if (((uVar1 & 1) != 0) && ((uint)*(byte *)(unaff_x20 + 0x22) != ((uint)param_1 & 0xff))) {
    *(char *)(unaff_x20 + 0x22) = (char)param_1;
    (**(code **)(*unaff_x20 + 0x370))(*(undefined8 *)(unaff_x20[6] + 0x10),param_1);
  }
  return;
}



/* Address: 0x10094dc20 | FUN_10094dc20 */

/* WARNING: Removing unreachable block (ram,0x00010094dc78) */
/* WARNING: Removing unreachable block (ram,0x00010094dc80) */
/* WARNING: Removing unreachable block (ram,0x00010094dce0) */

void FUN_10094dc20(ulong param_1)

{
  ulong uVar1;
  long *unaff_x20;
  
  uVar1 = param_1;
  (**(code **)(*unaff_x20 + 0x248))();
  if (((uVar1 & 1) != 0) && ((uint)*(byte *)(unaff_x20 + 0x22) != ((uint)param_1 & 0xff))) {
    *(char *)(unaff_x20 + 0x22) = (char)param_1;
    (**(code **)(*unaff_x20 + 0x370))(*(undefined8 *)(unaff_x20[6] + 0x10),param_1);
  }
  return;
}



/* Address: 0x10094dce4 | FUN_10094dce4 */

/* WARNING: Removing unreachable block (ram,0x00010094def0) */
/* WARNING: Removing unreachable block (ram,0x00010094e280) */
/* WARNING: Removing unreachable block (ram,0x00010094df28) */
/* WARNING: Removing unreachable block (ram,0x00010094e2a0) */
/* WARNING: Removing unreachable block (ram,0x00010094df38) */
/* WARNING: Removing unreachable block (ram,0x00010094de74) */
/* WARNING: Removing unreachable block (ram,0x00010094e2c0) */
/* WARNING: Removing unreachable block (ram,0x00010094dec4) */
/* WARNING: Removing unreachable block (ram,0x00010094e210) */

void FUN_10094dce4(ulong param_1,char param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x20;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  code *local_b0;
  
  uVar5 = param_1;
  lVar13 = param_3;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar5 & 1) == 0) {
    if (param_3 != 0) {
      if (DAT_100fec5e8 != -1) {
        _swift_once(&DAT_100fec5e8,FUN_100901f4c);
      }
      uVar12 = DAT_101058198;
      uVar5 = *(ulong *)(param_3 + 0x20);
      lVar11 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar6 = uVar5;
      lVar10 = lVar11;
      (**(code **)(lVar11 + 0x10))();
      if ((uVar6 & 1) == 0) {
        puVar7 = &DAT_100f1b8d0;
        _swift_allocObject(&DAT_100f1b8d0,0x20,7);
        *(long *)(puVar7 + 0x10) = param_3;
        *(undefined8 *)(puVar7 + 0x18) = uVar12;
        pcVar4 = *(code **)(lVar11 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(uVar12);
LAB_10094e008:
        (*pcVar4)(thunk_FUN_1008d678c,puVar7,uVar5,lVar11);
        _swift_release(puVar7);
        return;
      }
LAB_10094de08:
      thunk_FUN_1005de8f4(uVar12);
      FUN_1006486f8();
      FUN_100004550(uVar12,lVar10);
      _swift_bridgeObjectRelease(lVar13);
      return;
    }
  }
  else if (param_2 == '\x02') {
    *(undefined1 *)(unaff_x20 + 0x22) = 1;
    if (*(char *)(unaff_x20[6] + 0x70) == '\0') {
      (**(code **)(*unaff_x20 + 0x368))(*(undefined8 *)(unaff_x20[6] + 0x10),2);
    }
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100939570();
    plVar8 = unaff_x20 + 0x23;
    uVar12 = 0x21;
    _swift_beginAccess(plVar8,&local_b0,0x21,0);
    bVar3 = *(byte *)((long)unaff_x20 + 0x132);
    if (bVar3 < 3) {
      if (bVar3 == 0) {
        *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
        pcVar4 = thunk_FUN_1008d6974;
      }
      else {
        *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
        pcVar4 = thunk_FUN_1008d69d4;
      }
    }
    else if (bVar3 == 3) {
      *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
      (**(code **)(*(long *)unaff_x20[0x25] + 0x88))();
      *(undefined1 *)plVar8 = 0;
      pcVar4 = thunk_FUN_1008d69d4;
    }
    else {
      if (bVar3 != 4) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10094e2ec);
        (*pcVar4)();
      }
      *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
      (**(code **)(*(long *)unaff_x20[0x25] + 0x88))();
      *(undefined1 *)plVar8 = 0;
      pcVar4 = FUN_1008d6994;
    }
    _swift_endAccess(&local_b0);
    (**(code **)(*unaff_x20 + 0x2a8))(param_1);
    lVar13 = *(long *)(puVar7 + 0x10);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(puVar7 + 0x28);
      do {
        pcVar14 = (code *)unaff_x20[0x1b];
        if (pcVar14 == (code *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10094e2e4);
          (*pcVar4)();
        }
        pcVar1 = (code *)puVar15[-1];
        uVar2 = *puVar15;
        local_b0 = pcVar14;
        _swift_retain(uVar2);
        _swift_retain(pcVar14);
        (*pcVar1)(&local_b0);
        _swift_release(pcVar14);
        _swift_release(uVar2);
        puVar15 = puVar15 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    lVar13 = unaff_x20[0xc];
    if (lVar13 != 0) {
      unaff_x20[0xc] = 0;
      uVar5 = *(ulong *)(lVar13 + 0x20);
      lVar11 = *(long *)(lVar13 + 0x28);
      _swift_getObjectType();
      (**(code **)(lVar11 + 0x10))();
      if ((uVar5 & 1) == 0) {
        uVar12 = *(undefined8 *)(lVar13 + 0x20);
        lVar11 = *(long *)(lVar13 + 0x28);
        _swift_getObjectType();
        puVar9 = &DAT_100f1b948;
        _swift_allocObject(&DAT_100f1b948,0x20,7);
        *(long *)(puVar9 + 0x10) = lVar13;
        *(ulong *)(puVar9 + 0x18) = param_1;
        pcVar14 = *(code **)(lVar11 + 0x18);
        _swift_retain(lVar13);
        _swift_errorRetain(param_1);
        (*pcVar14)(thunk_FUN_1008d678c,puVar9,uVar12,lVar11);
        _swift_release(lVar13);
        _swift_release(puVar9);
      }
      else {
        thunk_FUN_1005de8f4(param_1);
        FUN_1006486f8();
        _swift_release(lVar13);
        FUN_100004550(param_1,lVar11);
        _swift_bridgeObjectRelease(uVar12);
      }
    }
    lVar13 = unaff_x20[0x1b];
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10094e2e8);
      (*pcVar4)();
    }
    _swift_retain(lVar13);
    (*pcVar4)(param_3,lVar13);
    _swift_release(lVar13);
    local_b0 = FUN_10095b5d4;
    _swift_retain_n();
    FUN_10093efc4(&local_b0);
    _swift_release();
    FUN_1008fa458(&local_b0);
    _swift_bridgeObjectRelease(puVar7);
  }
  else if (param_3 != 0) {
    if (DAT_100fec610 != -1) {
      _swift_once(&DAT_100fec610,FUN_100901fcc);
    }
    uVar12 = DAT_1010581f0;
    uVar5 = *(ulong *)(param_3 + 0x20);
    lVar11 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar6 = uVar5;
    lVar10 = lVar11;
    (**(code **)(lVar11 + 0x10))();
    if ((uVar6 & 1) == 0) {
      puVar7 = &DAT_100f1b8f8;
      _swift_allocObject(&DAT_100f1b8f8,0x20,7);
      *(long *)(puVar7 + 0x10) = param_3;
      *(undefined8 *)(puVar7 + 0x18) = uVar12;
      pcVar4 = *(code **)(lVar11 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar12);
      goto LAB_10094e008;
    }
    goto LAB_10094de08;
  }
  return;
}



/* Address: 0x10094e2ec | FUN_10094e2ec */

/* WARNING: Removing unreachable block (ram,0x00010094e484) */
/* WARNING: Removing unreachable block (ram,0x00010094e938) */
/* WARNING: Removing unreachable block (ram,0x00010094e4d4) */
/* WARNING: Removing unreachable block (ram,0x00010094e888) */

void FUN_10094e2ec(ulong param_1,char param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long *unaff_x20;
  long lVar18;
  code *pcVar19;
  code *local_b0;
  
  uVar6 = param_1;
  lVar18 = param_3;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar6 & 1) == 0) {
    if (param_3 != 0) {
      if (DAT_100fec5e8 != -1) {
        _swift_once(&DAT_100fec5e8,FUN_100901f4c);
      }
      uVar17 = DAT_101058198;
      uVar6 = *(ulong *)(param_3 + 0x20);
      lVar16 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar7 = uVar6;
      lVar15 = lVar16;
      (**(code **)(lVar16 + 0x10))();
      if ((uVar7 & 1) == 0) {
        puVar14 = &DAT_100f1b1f0;
        _swift_allocObject(&DAT_100f1b1f0,0x20,7);
        *(long *)(puVar14 + 0x10) = param_3;
        *(undefined8 *)(puVar14 + 0x18) = uVar17;
        pcVar5 = *(code **)(lVar16 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(uVar17);
LAB_10094e67c:
        (*pcVar5)(thunk_FUN_1008d678c,puVar14,uVar6,lVar16);
        _swift_release(puVar14);
        return;
      }
LAB_10094e414:
      thunk_FUN_1005de8f4(uVar17);
      FUN_1006486f8();
      FUN_100004550(uVar17,lVar15);
      _swift_bridgeObjectRelease(lVar18);
      return;
    }
  }
  else if (param_2 == '\x02') {
    *(undefined1 *)(unaff_x20 + 0x22) = 1;
    if (*(char *)(unaff_x20[6] + 0x70) == '\0') {
      (**(code **)(*unaff_x20 + 0x368))(*(undefined8 *)(unaff_x20[6] + 0x10),2);
    }
    puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar3 = *(uint *)(unaff_x20[4] + 0x10);
    puVar8 = (undefined8 *)(ulong)uVar3;
    if ((int)uVar3 < 0) {
      FUN_1008d5300();
      puVar9 = &DAT_100ef11e8;
      _swift_allocError(&DAT_100ef11e8,puVar8,0,0);
      *puVar8 = 0xd00000000000001f;
      puVar8[1] = 0x8000000100db4780;
      *(undefined4 *)(puVar8 + 2) = 9;
      _swift_willThrow();
      puVar10 = &DAT_100f1b240;
      _swift_allocObject(&DAT_100f1b240,0x20,7);
      *(long *)(puVar10 + 0x10) = param_3;
      *(undefined **)(puVar10 + 0x18) = puVar9;
      _swift_retain(param_3);
      _swift_errorRetain(puVar9);
      puVar11 = puVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar13 = puVar14;
      if (((ulong)puVar11 & 1) == 0) {
        puVar13 = (undefined *)0x0;
        FUN_100902c78(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
      }
      uVar6 = *(ulong *)(puVar13 + 0x10);
      puVar14 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar6) {
        puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
        FUN_100902c78(puVar14,uVar6 + 1,1,puVar13);
      }
      *(ulong *)(puVar14 + 0x10) = uVar6 + 1;
      *(code **)(puVar14 + uVar6 * 0x10 + 0x20) = FUN_1008db5bc;
      *(undefined **)(puVar14 + uVar6 * 0x10 + 0x28) = puVar10;
      _swift_errorRelease(puVar9);
      param_3 = 0;
    }
    else {
      *(undefined4 *)(unaff_x20[4] + 0x10) = 0xffffffff;
      FUN_10095d958();
    }
    plVar12 = unaff_x20 + 0x23;
    uVar17 = 0x21;
    _swift_beginAccess(plVar12,&local_b0,0x21,0);
    bVar4 = *(byte *)((long)unaff_x20 + 0x132);
    if (bVar4 < 3) {
      if (bVar4 == 0) {
        *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
        pcVar5 = thunk_FUN_1008d6974;
      }
      else {
        *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
        pcVar5 = thunk_FUN_1008d69d4;
      }
    }
    else if (bVar4 == 3) {
      *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
      (**(code **)(*(long *)unaff_x20[0x25] + 0x88))();
      *(undefined1 *)plVar12 = 0;
      pcVar5 = thunk_FUN_1008d69d4;
    }
    else {
      if (bVar4 != 4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10094e964);
        (*pcVar5)();
      }
      *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
      (**(code **)(*(long *)unaff_x20[0x25] + 0x88))();
      *(undefined1 *)plVar12 = 0;
      pcVar5 = FUN_1008d6994;
    }
    _swift_endAccess(&local_b0);
    (**(code **)(*unaff_x20 + 0x2a8))(param_1);
    lVar18 = *(long *)(puVar14 + 0x10);
    if (lVar18 != 0) {
      puVar8 = (undefined8 *)(puVar14 + 0x28);
      do {
        pcVar19 = (code *)unaff_x20[0x1b];
        if (pcVar19 == (code *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10094e95c);
          (*pcVar5)();
        }
        pcVar1 = (code *)puVar8[-1];
        uVar2 = *puVar8;
        local_b0 = pcVar19;
        _swift_retain(uVar2);
        _swift_retain(pcVar19);
        (*pcVar1)(&local_b0);
        _swift_release(pcVar19);
        _swift_release(uVar2);
        puVar8 = puVar8 + 2;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    lVar18 = unaff_x20[0xc];
    if (lVar18 != 0) {
      unaff_x20[0xc] = 0;
      uVar6 = *(ulong *)(lVar18 + 0x20);
      lVar16 = *(long *)(lVar18 + 0x28);
      _swift_getObjectType();
      (**(code **)(lVar16 + 0x10))();
      if ((uVar6 & 1) == 0) {
        uVar17 = *(undefined8 *)(lVar18 + 0x20);
        lVar16 = *(long *)(lVar18 + 0x28);
        _swift_getObjectType();
        puVar9 = &DAT_100f1b268;
        _swift_allocObject(&DAT_100f1b268,0x20,7);
        *(long *)(puVar9 + 0x10) = lVar18;
        *(ulong *)(puVar9 + 0x18) = param_1;
        pcVar19 = *(code **)(lVar16 + 0x18);
        _swift_retain(lVar18);
        _swift_errorRetain(param_1);
        (*pcVar19)(thunk_FUN_1008d678c,puVar9,uVar17,lVar16);
        _swift_release(lVar18);
        _swift_release(puVar9);
      }
      else {
        thunk_FUN_1005de8f4(param_1);
        FUN_1006486f8();
        _swift_release(lVar18);
        FUN_100004550(param_1,lVar16);
        _swift_bridgeObjectRelease(uVar17);
      }
    }
    lVar18 = unaff_x20[0x1b];
    if (lVar18 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10094e960);
      (*pcVar5)();
    }
    _swift_retain(lVar18);
    (*pcVar5)(param_3,lVar18);
    _swift_release(lVar18);
    local_b0 = FUN_10095b424;
    _swift_retain_n();
    FUN_10093efc4(&local_b0);
    _swift_release();
    FUN_1008fa458(&local_b0);
    _swift_bridgeObjectRelease(puVar14);
  }
  else if (param_3 != 0) {
    if (DAT_100fec610 != -1) {
      _swift_once(&DAT_100fec610,FUN_100901fcc);
    }
    uVar17 = DAT_1010581f0;
    uVar6 = *(ulong *)(param_3 + 0x20);
    lVar16 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar7 = uVar6;
    lVar15 = lVar16;
    (**(code **)(lVar16 + 0x10))();
    if ((uVar7 & 1) == 0) {
      puVar14 = &DAT_100f1b218;
      _swift_allocObject(&DAT_100f1b218,0x20,7);
      *(long *)(puVar14 + 0x10) = param_3;
      *(undefined8 *)(puVar14 + 0x18) = uVar17;
      pcVar5 = *(code **)(lVar16 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar17);
      goto LAB_10094e67c;
    }
    goto LAB_10094e414;
  }
  return;
}



/* Address: 0x10094e964 | FUN_10094e964 */

/* WARNING: Removing unreachable block (ram,0x00010094eb70) */
/* WARNING: Removing unreachable block (ram,0x00010094ef00) */
/* WARNING: Removing unreachable block (ram,0x00010094eba8) */
/* WARNING: Removing unreachable block (ram,0x00010094ef20) */
/* WARNING: Removing unreachable block (ram,0x00010094ebb8) */
/* WARNING: Removing unreachable block (ram,0x00010094eaf4) */
/* WARNING: Removing unreachable block (ram,0x00010094ef40) */
/* WARNING: Removing unreachable block (ram,0x00010094eb44) */
/* WARNING: Removing unreachable block (ram,0x00010094ee90) */

void FUN_10094e964(ulong param_1,char param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x20;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  code *local_b0;
  
  uVar5 = param_1;
  lVar13 = param_3;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar5 & 1) == 0) {
    if (param_3 != 0) {
      if (DAT_100fec5e8 != -1) {
        _swift_once(&DAT_100fec5e8,FUN_100901f4c);
      }
      uVar12 = DAT_101058198;
      uVar5 = *(ulong *)(param_3 + 0x20);
      lVar11 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar6 = uVar5;
      lVar10 = lVar11;
      (**(code **)(lVar11 + 0x10))();
      if ((uVar6 & 1) == 0) {
        puVar7 = &DAT_100f1b998;
        _swift_allocObject(&DAT_100f1b998,0x20,7);
        *(long *)(puVar7 + 0x10) = param_3;
        *(undefined8 *)(puVar7 + 0x18) = uVar12;
        pcVar4 = *(code **)(lVar11 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(uVar12);
LAB_10094ec88:
        (*pcVar4)(thunk_FUN_1008d678c,puVar7,uVar5,lVar11);
        _swift_release(puVar7);
        return;
      }
LAB_10094ea88:
      thunk_FUN_1005de8f4(uVar12);
      FUN_1006486f8();
      FUN_100004550(uVar12,lVar10);
      _swift_bridgeObjectRelease(lVar13);
      return;
    }
  }
  else if (param_2 == '\x02') {
    *(undefined1 *)(unaff_x20 + 0x22) = 1;
    if (*(char *)(unaff_x20[6] + 0x70) == '\0') {
      (**(code **)(*unaff_x20 + 0x368))(*(undefined8 *)(unaff_x20[6] + 0x10),2);
    }
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10094cb18();
    plVar8 = unaff_x20 + 0x23;
    uVar12 = 0x21;
    _swift_beginAccess(plVar8,&local_b0,0x21,0);
    bVar3 = *(byte *)((long)unaff_x20 + 0x132);
    if (bVar3 < 3) {
      if (bVar3 == 0) {
        *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
        pcVar4 = thunk_FUN_1008d6974;
      }
      else {
        *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
        pcVar4 = thunk_FUN_1008d69d4;
      }
    }
    else if (bVar3 == 3) {
      *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
      (**(code **)(*(long *)unaff_x20[0x25] + 0x88))();
      *(undefined1 *)plVar8 = 0;
      pcVar4 = thunk_FUN_1008d69d4;
    }
    else {
      if (bVar3 != 4) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10094ef6c);
        (*pcVar4)();
      }
      *(undefined1 *)((long)unaff_x20 + 0x132) = 5;
      (**(code **)(*(long *)unaff_x20[0x25] + 0x88))();
      *(undefined1 *)plVar8 = 0;
      pcVar4 = FUN_1008d6994;
    }
    _swift_endAccess(&local_b0);
    (**(code **)(*unaff_x20 + 0x2a8))(param_1);
    lVar13 = *(long *)(puVar7 + 0x10);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(puVar7 + 0x28);
      do {
        pcVar14 = (code *)unaff_x20[0x1b];
        if (pcVar14 == (code *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10094ef64);
          (*pcVar4)();
        }
        pcVar1 = (code *)puVar15[-1];
        uVar2 = *puVar15;
        local_b0 = pcVar14;
        _swift_retain(uVar2);
        _swift_retain(pcVar14);
        (*pcVar1)(&local_b0);
        _swift_release(pcVar14);
        _swift_release(uVar2);
        puVar15 = puVar15 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    lVar13 = unaff_x20[0xc];
    if (lVar13 != 0) {
      unaff_x20[0xc] = 0;
      uVar5 = *(ulong *)(lVar13 + 0x20);
      lVar11 = *(long *)(lVar13 + 0x28);
      _swift_getObjectType();
      (**(code **)(lVar11 + 0x10))();
      if ((uVar5 & 1) == 0) {
        uVar12 = *(undefined8 *)(lVar13 + 0x20);
        lVar11 = *(long *)(lVar13 + 0x28);
        _swift_getObjectType();
        puVar9 = &DAT_100f1ba10;
        _swift_allocObject(&DAT_100f1ba10,0x20,7);
        *(long *)(puVar9 + 0x10) = lVar13;
        *(ulong *)(puVar9 + 0x18) = param_1;
        pcVar14 = *(code **)(lVar11 + 0x18);
        _swift_retain(lVar13);
        _swift_errorRetain(param_1);
        (*pcVar14)(thunk_FUN_1008d678c,puVar9,uVar12,lVar11);
        _swift_release(lVar13);
        _swift_release(puVar9);
      }
      else {
        thunk_FUN_1005de8f4(param_1);
        FUN_1006486f8();
        _swift_release(lVar13);
        FUN_100004550(param_1,lVar11);
        _swift_bridgeObjectRelease(uVar12);
      }
    }
    lVar13 = unaff_x20[0x1b];
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10094ef68);
      (*pcVar4)();
    }
    _swift_retain(lVar13);
    (*pcVar4)(param_3,lVar13);
    _swift_release(lVar13);
    local_b0 = FUN_10095b620;
    _swift_retain_n();
    FUN_10093efc4(&local_b0);
    _swift_release();
    FUN_1008fa458(&local_b0);
    _swift_bridgeObjectRelease(puVar7);
  }
  else if (param_3 != 0) {
    if (DAT_100fec610 != -1) {
      _swift_once(&DAT_100fec610,FUN_100901fcc);
    }
    uVar12 = DAT_1010581f0;
    uVar5 = *(ulong *)(param_3 + 0x20);
    lVar11 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar6 = uVar5;
    lVar10 = lVar11;
    (**(code **)(lVar11 + 0x10))();
    if ((uVar6 & 1) == 0) {
      puVar7 = &DAT_100f1b9c0;
      _swift_allocObject(&DAT_100f1b9c0,0x20,7);
      *(long *)(puVar7 + 0x10) = param_3;
      *(undefined8 *)(puVar7 + 0x18) = uVar12;
      pcVar4 = *(code **)(lVar11 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar12);
      goto LAB_10094ec88;
    }
    goto LAB_10094ea88;
  }
  return;
}



/* Address: 0x10094ef6c | FUN_10094ef6c */

void FUN_10094ef6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xd8);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_1000f7830(param_2,param_3);
    FUN_10061d97c(lVar2,param_2,&PTR_PTR_100f0f660);
    _swift_release(lVar2);
    FUN_10090d0b8(0,0,*(undefined8 *)(param_1 + 0x28));
    FUN_10095a9d8(0xf000000000000007,0xf000000000000007);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094eff0);
  (*pcVar1)();
}



/* Address: 0x10094eff0 | thunk_FUN_10094f284 */

/* WARNING: Removing unreachable block (ram,0x00010094f2ec) */

void thunk_FUN_10094f284(undefined8 param_1)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  uint uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x23,auStack_58,1,0);
  uVar4 = (uint)*(byte *)((long)unaff_x20 + 0x132);
  if (*(byte *)((long)unaff_x20 + 0x132) < 6 && (1 << (ulong)(uVar4 & 0x1f) & 0x23U) != 0) {
    FUN_10094fa74(0x21);
    if (*(char *)((long)unaff_x20 + 0x132) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f508);
      (*pcVar2)();
    }
    *(undefined1 *)((long)unaff_x20 + 0x132) = 2;
    if (unaff_x20[0x1b] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f50c);
      (*pcVar2)();
    }
    plVar3 = unaff_x20 + 0x23;
    _swift_beginAccess(plVar3,auStack_78,0x21,0);
LAB_10094f380:
    *(undefined1 *)((long)unaff_x20 + 0x132) = 3;
    (**(code **)(*(long *)unaff_x20[0x25] + 0x88))();
    *(undefined1 *)plVar3 = 1;
  }
  else {
    plVar3 = unaff_x20 + 0x23;
    _swift_beginAccess(plVar3,auStack_78,0x21,0);
    if (uVar4 == 2) goto LAB_10094f380;
    if (uVar4 == 3) {
      if ((*(byte *)((long)unaff_x20 + 0x131) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f4f8);
        (*pcVar2)();
      }
    }
    else if (*(char *)((long)unaff_x20 + 0x131) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f4fc);
      (*pcVar2)();
    }
  }
  _swift_endAccess(auStack_78);
  lVar5 = unaff_x20[0x1b];
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f500);
    (*pcVar2)();
  }
  _swift_retain(lVar5);
  thunk_FUN_1008d6974(param_1,lVar5);
  _swift_release(lVar5);
  if (*(char *)((long)unaff_x20 + 0x132) == '\x04') {
    if (*(char *)((long)unaff_x20 + 0x131) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f4f4);
      (*pcVar2)();
    }
    pcVar2 = FUN_100004520;
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x132) != '\x03') {
      return;
    }
    *(undefined1 *)((long)unaff_x20 + 0x132) = 4;
    pcVar2 = FUN_1008d698c;
  }
  lVar5 = unaff_x20[0x1b];
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f504);
    (*pcVar2)();
  }
  _swift_retain(lVar5);
  (*pcVar2)(0,lVar5);
  _swift_release();
  uVar4 = (uint)lVar5;
  if (*(char *)((long)unaff_x20 + 0x132) == '\x05') {
    return;
  }
  if (((*(byte *)(unaff_x20 + 0x26) & 1) == 0) && ((*(byte *)(unaff_x20 + 0x22) >> 1 & 1) == 0)) {
    uVar4 = *(byte *)(unaff_x20 + 0x22) | 2;
    FUN_10094dc20();
  }
  FUN_10094d97c();
  if ((uVar4 & 0xff) == 1) {
    if ((*(char *)((long)unaff_x20 + 0x132) == '\x05') ||
       ((*(byte *)(unaff_x20 + 0x22) >> 3 & 1) == 0)) goto LAB_10094f4b0;
    bVar1 = *(byte *)(unaff_x20 + 0x22) & 0xf7;
  }
  else {
    if ((*(char *)((long)unaff_x20 + 0x132) == '\x05') ||
       ((*(byte *)(unaff_x20 + 0x22) >> 3 & 1) != 0)) goto LAB_10094f4b0;
    bVar1 = *(byte *)(unaff_x20 + 0x22) | 8;
  }
  FUN_10094dc20(bVar1);
LAB_10094f4b0:
  (**(code **)(*unaff_x20 + 0x2d8))();
  return;
}



/* Address: 0x10094eff4 | FUN_10094eff4 */

/* WARNING: Removing unreachable block (ram,0x00010094f05c) */

void FUN_10094eff4(undefined8 param_1)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  uint uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x23,auStack_58,1,0);
  uVar4 = (uint)*(byte *)((long)unaff_x20 + 0x132);
  if (*(byte *)((long)unaff_x20 + 0x132) < 6 && (1 << (ulong)(uVar4 & 0x1f) & 0x23U) != 0) {
    FUN_10094fa74(0x21);
    if (*(char *)((long)unaff_x20 + 0x132) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f280);
      (*pcVar2)();
    }
    *(undefined1 *)((long)unaff_x20 + 0x132) = 2;
    if (unaff_x20[0x1b] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f284);
      (*pcVar2)();
    }
    plVar3 = unaff_x20 + 0x23;
    _swift_beginAccess(plVar3,auStack_78,0x21,0);
LAB_10094f0f0:
    *(undefined1 *)((long)unaff_x20 + 0x132) = 3;
    (**(code **)(*(long *)unaff_x20[0x25] + 0x88))();
    *(undefined1 *)plVar3 = 1;
  }
  else {
    plVar3 = unaff_x20 + 0x23;
    _swift_beginAccess(plVar3,auStack_78,0x21,0);
    if (uVar4 == 2) goto LAB_10094f0f0;
    if (uVar4 == 3) {
      if ((*(byte *)((long)unaff_x20 + 0x131) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f270);
        (*pcVar2)();
      }
    }
    else if (*(char *)((long)unaff_x20 + 0x131) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f274);
      (*pcVar2)();
    }
  }
  _swift_endAccess(auStack_78);
  lVar5 = unaff_x20[0x1b];
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f278);
    (*pcVar2)();
  }
  _swift_retain(lVar5);
  thunk_FUN_1008d6974(param_1,lVar5);
  _swift_release(lVar5);
  if (*(char *)((long)unaff_x20 + 0x132) == '\x04') {
    if (*(char *)((long)unaff_x20 + 0x131) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f26c);
      (*pcVar2)();
    }
    pcVar2 = FUN_100004520;
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x132) != '\x03') {
      return;
    }
    *(undefined1 *)((long)unaff_x20 + 0x132) = 4;
    pcVar2 = FUN_1008d698c;
  }
  lVar5 = unaff_x20[0x1b];
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f27c);
    (*pcVar2)();
  }
  _swift_retain(lVar5);
  (*pcVar2)(0,lVar5);
  _swift_release();
  uVar4 = (uint)lVar5;
  if (*(char *)((long)unaff_x20 + 0x132) == '\x05') {
    return;
  }
  if (((*(byte *)(unaff_x20 + 0x26) & 1) == 0) && ((*(byte *)(unaff_x20 + 0x22) >> 1 & 1) == 0)) {
    uVar4 = *(byte *)(unaff_x20 + 0x22) | 2;
    FUN_10094dc20();
  }
  (**(code **)(*unaff_x20 + 0x2b8))();
  if ((uVar4 & 0xff) == 1) {
    if ((*(char *)((long)unaff_x20 + 0x132) == '\x05') ||
       ((*(byte *)(unaff_x20 + 0x22) >> 3 & 1) == 0)) goto LAB_10094f228;
    bVar1 = *(byte *)(unaff_x20 + 0x22) & 0xf7;
  }
  else {
    if ((*(char *)((long)unaff_x20 + 0x132) == '\x05') ||
       ((*(byte *)(unaff_x20 + 0x22) >> 3 & 1) != 0)) goto LAB_10094f228;
    bVar1 = *(byte *)(unaff_x20 + 0x22) | 8;
  }
  FUN_10094dc20(bVar1);
LAB_10094f228:
  (**(code **)(*unaff_x20 + 0x2d8))();
  return;
}



/* Address: 0x10094f284 | FUN_10094f284 */

/* WARNING: Removing unreachable block (ram,0x00010094f2ec) */

void FUN_10094f284(undefined8 param_1)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  uint uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x23,auStack_58,1,0);
  uVar4 = (uint)*(byte *)((long)unaff_x20 + 0x132);
  if (*(byte *)((long)unaff_x20 + 0x132) < 6 && (1 << (ulong)(uVar4 & 0x1f) & 0x23U) != 0) {
    FUN_10094fa74(0x21);
    if (*(char *)((long)unaff_x20 + 0x132) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f508);
      (*pcVar2)();
    }
    *(undefined1 *)((long)unaff_x20 + 0x132) = 2;
    if (unaff_x20[0x1b] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f50c);
      (*pcVar2)();
    }
    plVar3 = unaff_x20 + 0x23;
    _swift_beginAccess(plVar3,auStack_78,0x21,0);
LAB_10094f380:
    *(undefined1 *)((long)unaff_x20 + 0x132) = 3;
    (**(code **)(*(long *)unaff_x20[0x25] + 0x88))();
    *(undefined1 *)plVar3 = 1;
  }
  else {
    plVar3 = unaff_x20 + 0x23;
    _swift_beginAccess(plVar3,auStack_78,0x21,0);
    if (uVar4 == 2) goto LAB_10094f380;
    if (uVar4 == 3) {
      if ((*(byte *)((long)unaff_x20 + 0x131) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f4f8);
        (*pcVar2)();
      }
    }
    else if (*(char *)((long)unaff_x20 + 0x131) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f4fc);
      (*pcVar2)();
    }
  }
  _swift_endAccess(auStack_78);
  lVar5 = unaff_x20[0x1b];
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f500);
    (*pcVar2)();
  }
  _swift_retain(lVar5);
  thunk_FUN_1008d6974(param_1,lVar5);
  _swift_release(lVar5);
  if (*(char *)((long)unaff_x20 + 0x132) == '\x04') {
    if (*(char *)((long)unaff_x20 + 0x131) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f4f4);
      (*pcVar2)();
    }
    pcVar2 = FUN_100004520;
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x132) != '\x03') {
      return;
    }
    *(undefined1 *)((long)unaff_x20 + 0x132) = 4;
    pcVar2 = FUN_1008d698c;
  }
  lVar5 = unaff_x20[0x1b];
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10094f504);
    (*pcVar2)();
  }
  _swift_retain(lVar5);
  (*pcVar2)(0,lVar5);
  _swift_release();
  uVar4 = (uint)lVar5;
  if (*(char *)((long)unaff_x20 + 0x132) == '\x05') {
    return;
  }
  if (((*(byte *)(unaff_x20 + 0x26) & 1) == 0) && ((*(byte *)(unaff_x20 + 0x22) >> 1 & 1) == 0)) {
    uVar4 = *(byte *)(unaff_x20 + 0x22) | 2;
    FUN_10094dc20();
  }
  FUN_10094d97c();
  if ((uVar4 & 0xff) == 1) {
    if ((*(char *)((long)unaff_x20 + 0x132) == '\x05') ||
       ((*(byte *)(unaff_x20 + 0x22) >> 3 & 1) == 0)) goto LAB_10094f4b0;
    bVar1 = *(byte *)(unaff_x20 + 0x22) & 0xf7;
  }
  else {
    if ((*(char *)((long)unaff_x20 + 0x132) == '\x05') ||
       ((*(byte *)(unaff_x20 + 0x22) >> 3 & 1) != 0)) goto LAB_10094f4b0;
    bVar1 = *(byte *)(unaff_x20 + 0x22) | 8;
  }
  FUN_10094dc20(bVar1);
LAB_10094f4b0:
  (**(code **)(*unaff_x20 + 0x2d8))();
  return;
}



/* Address: 0x10094f50c | FUN_10094f50c */

/* WARNING: Removing unreachable block (ram,0x00010094f538) */
/* WARNING: Removing unreachable block (ram,0x00010094f57c) */
/* WARNING: Removing unreachable block (ram,0x00010094f6b0) */
/* WARNING: Removing unreachable block (ram,0x00010094f6bc) */
/* WARNING: Removing unreachable block (ram,0x00010094f76c) */
/* WARNING: Removing unreachable block (ram,0x00010094f6c4) */
/* WARNING: Removing unreachable block (ram,0x00010094f59c) */
/* WARNING: Removing unreachable block (ram,0x00010094f5c0) */
/* WARNING: Removing unreachable block (ram,0x00010094f5e8) */
/* WARNING: Removing unreachable block (ram,0x00010094f774) */
/* WARNING: Removing unreachable block (ram,0x00010094f5f0) */
/* WARNING: Removing unreachable block (ram,0x00010094f6e8) */
/* WARNING: Removing unreachable block (ram,0x00010094f6f8) */
/* WARNING: Removing unreachable block (ram,0x00010094f60c) */
/* WARNING: Removing unreachable block (ram,0x00010094f64c) */
/* WARNING: Removing unreachable block (ram,0x00010094f654) */
/* WARNING: Removing unreachable block (ram,0x00010094f75c) */
/* WARNING: Removing unreachable block (ram,0x00010094f768) */
/* WARNING: Removing unreachable block (ram,0x00010094f778) */

undefined8 FUN_10094f50c(undefined8 param_1)

{
  code *pcVar1;
  long *plVar2;
  long *unaff_x20;
  undefined1 local_68 [40];
  
  (**(code **)(*unaff_x20 + 0x270))();
  plVar2 = unaff_x20 + 0x23;
  _swift_beginAccess(plVar2,local_68,0,0);
  if (*(byte *)((long)unaff_x20 + 0x132) - 3 < 2) {
    plVar2 = (long *)unaff_x20[0x1b];
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10094f774);
      (*pcVar1)();
    }
    _swift_retain(plVar2);
    FUN_10062cc80();
    _swift_release();
  }
  (**(code **)(*unaff_x20 + 0x2d8))();
  (**(code **)(*unaff_x20 + 0x248))();
  if (((((ulong)plVar2 & 1) != 0) && ((*(byte *)(unaff_x20 + 0xb) & 1) == 0)) &&
     ((*(byte *)(unaff_x20 + 0x22) >> 2 & 1) != 0)) {
    FUN_10094dc20(*(byte *)(unaff_x20 + 0x22) & 0xfb);
  }
  return param_1;
}



/* Address: 0x10094f798 | thunk_FUN_10094f79c */

/* WARNING: Removing unreachable block (ram,0x00010094f7c8) */
/* WARNING: Removing unreachable block (ram,0x00010094f80c) */
/* WARNING: Removing unreachable block (ram,0x00010094f908) */
/* WARNING: Removing unreachable block (ram,0x00010094f914) */
/* WARNING: Removing unreachable block (ram,0x00010094fa34) */
/* WARNING: Removing unreachable block (ram,0x00010094f91c) */
/* WARNING: Removing unreachable block (ram,0x00010094f82c) */
/* WARNING: Removing unreachable block (ram,0x00010094f850) */
/* WARNING: Removing unreachable block (ram,0x00010094f878) */
/* WARNING: Removing unreachable block (ram,0x00010094fa3c) */
/* WARNING: Removing unreachable block (ram,0x00010094f880) */
/* WARNING: Removing unreachable block (ram,0x00010094f940) */
/* WARNING: Removing unreachable block (ram,0x00010094f950) */
/* WARNING: Removing unreachable block (ram,0x00010094f988) */
/* WARNING: Removing unreachable block (ram,0x00010094f964) */
/* WARNING: Removing unreachable block (ram,0x00010094f89c) */
/* WARNING: Removing unreachable block (ram,0x00010094f8b0) */
/* WARNING: Removing unreachable block (ram,0x00010094f8c8) */
/* WARNING: Removing unreachable block (ram,0x00010094f8f0) */
/* WARNING: Removing unreachable block (ram,0x00010094f8f8) */
/* WARNING: Removing unreachable block (ram,0x00010094fa24) */
/* WARNING: Removing unreachable block (ram,0x00010094fa30) */
/* WARNING: Removing unreachable block (ram,0x00010094fa40) */

undefined8 thunk_FUN_10094f79c(undefined8 param_1)

{
  code *pcVar1;
  long *plVar2;
  long *unaff_x20;
  undefined1 auStack_60 [32];
  
  (**(code **)(*unaff_x20 + 0x270))();
  plVar2 = unaff_x20 + 0x23;
  _swift_beginAccess(plVar2,auStack_60,0,0);
  if (*(byte *)((long)unaff_x20 + 0x132) - 3 < 2) {
    plVar2 = (long *)unaff_x20[0x1b];
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10094fa3c);
      (*pcVar1)();
    }
    _swift_retain(plVar2);
    FUN_10062cc80();
    _swift_release();
  }
  (**(code **)(*unaff_x20 + 0x2d8))();
  (**(code **)(*unaff_x20 + 0x248))();
  if (((((ulong)plVar2 & 1) != 0) && ((*(byte *)(unaff_x20 + 0xb) & 1) == 0)) &&
     ((*(byte *)(unaff_x20 + 0x22) >> 2 & 1) != 0)) {
    FUN_10094dc20(*(byte *)(unaff_x20 + 0x22) & 0xfb);
  }
  return param_1;
}



/* Address: 0x10094f79c | FUN_10094f79c */

/* WARNING: Removing unreachable block (ram,0x00010094f7c8) */
/* WARNING: Removing unreachable block (ram,0x00010094f80c) */
/* WARNING: Removing unreachable block (ram,0x00010094f908) */
/* WARNING: Removing unreachable block (ram,0x00010094f914) */
/* WARNING: Removing unreachable block (ram,0x00010094fa34) */
/* WARNING: Removing unreachable block (ram,0x00010094f91c) */
/* WARNING: Removing unreachable block (ram,0x00010094f82c) */
/* WARNING: Removing unreachable block (ram,0x00010094f850) */
/* WARNING: Removing unreachable block (ram,0x00010094f878) */
/* WARNING: Removing unreachable block (ram,0x00010094fa3c) */
/* WARNING: Removing unreachable block (ram,0x00010094f880) */
/* WARNING: Removing unreachable block (ram,0x00010094f940) */
/* WARNING: Removing unreachable block (ram,0x00010094f950) */
/* WARNING: Removing unreachable block (ram,0x00010094f988) */
/* WARNING: Removing unreachable block (ram,0x00010094f964) */
/* WARNING: Removing unreachable block (ram,0x00010094f89c) */
/* WARNING: Removing unreachable block (ram,0x00010094f8b0) */
/* WARNING: Removing unreachable block (ram,0x00010094f8c8) */
/* WARNING: Removing unreachable block (ram,0x00010094f8f0) */
/* WARNING: Removing unreachable block (ram,0x00010094f8f8) */
/* WARNING: Removing unreachable block (ram,0x00010094fa24) */
/* WARNING: Removing unreachable block (ram,0x00010094fa30) */
/* WARNING: Removing unreachable block (ram,0x00010094fa40) */

undefined8 FUN_10094f79c(undefined8 param_1)

{
  code *pcVar1;
  long *plVar2;
  long *unaff_x20;
  undefined1 local_60 [32];
  
  (**(code **)(*unaff_x20 + 0x270))();
  plVar2 = unaff_x20 + 0x23;
  _swift_beginAccess(plVar2,local_60,0,0);
  if (*(byte *)((long)unaff_x20 + 0x132) - 3 < 2) {
    plVar2 = (long *)unaff_x20[0x1b];
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10094fa3c);
      (*pcVar1)();
    }
    _swift_retain(plVar2);
    FUN_10062cc80();
    _swift_release();
  }
  (**(code **)(*unaff_x20 + 0x2d8))();
  (**(code **)(*unaff_x20 + 0x248))();
  if (((((ulong)plVar2 & 1) != 0) && ((*(byte *)(unaff_x20 + 0xb) & 1) == 0)) &&
     ((*(byte *)(unaff_x20 + 0x22) >> 2 & 1) != 0)) {
    FUN_10094dc20(*(byte *)(unaff_x20 + 0x22) & 0xfb);
  }
  return param_1;
}



/* Address: 0x10094fa60 | FUN_10094fa60 */

void FUN_10094fa60(void)

{
  FUN_10094fa74();
  return;
}



/* Address: 0x10094fa74 | FUN_10094fa74 */

void FUN_10094fa74(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  
  uVar2 = param_1;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar2 & 1) == 0) {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    _swift_errorRetain(DAT_101058180);
  }
  else {
    *(char *)(unaff_x20 + 0x22) = (char)param_1;
    if (*(char *)(unaff_x20[6] + 0x70) == '\0') {
      (**(code **)(*unaff_x20 + 0x360))(*(undefined8 *)(unaff_x20[6] + 0x10),param_1);
      if (unaff_x21 == 0) {
        return;
      }
    }
    else {
      if (DAT_100fec608 != -1) {
        _swift_once(&DAT_100fec608,FUN_100902068);
      }
      unaff_x21 = DAT_1010581e8;
      _swift_willThrow();
      _swift_errorRetain(unaff_x21);
    }
    lVar3 = unaff_x20[0x1b];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10094fba0);
      (*pcVar1)();
    }
    _swift_retain(lVar3);
    FUN_10062cce4(unaff_x21,lVar3);
    _swift_release(lVar3);
    (**(code **)(*unaff_x20 + 0x300))(unaff_x21,2,0);
  }
  _swift_willThrow();
  return;
}



/* Address: 0x10094fba0 | FUN_10094fba0 */

void FUN_10094fba0(char param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  
  if (param_1 == '\0') {
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x10);
      if ((int)uVar1 < 0) goto LAB_10094fc1c;
      *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
      FUN_10095d958();
      if (unaff_x21 != 0) {
        return;
      }
    }
    *(undefined1 *)(unaff_x20 + 0x172) = 1;
  }
  else {
    if (param_1 != '\x01') {
      return;
    }
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x10);
      if ((int)uVar1 < 0) {
LAB_10094fc1c:
        puVar2 = (undefined8 *)(ulong)uVar1;
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
        *puVar2 = 0xd00000000000002e;
        puVar2[1] = 0x8000000100db4d00;
        *(undefined4 *)(puVar2 + 2) = 9;
        _swift_willThrow();
        return;
      }
      *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
      FUN_10095d958();
      if (unaff_x21 != 0) {
        return;
      }
    }
    *(undefined1 *)(unaff_x20 + 0x171) = 1;
  }
  return;
}



/* Address: 0x10094fc78 | FUN_10094fc78 */

void FUN_10094fc78(char param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  
  if (param_1 == '\0') {
    uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
    puVar2 = (undefined8 *)(ulong)uVar1;
    if (-1 < (int)uVar1) {
      FUN_10095e3d0(puVar2,1);
      if (unaff_x21 != 0) {
        return;
      }
      *(undefined1 *)(unaff_x20 + 0x172) = 1;
      return;
    }
  }
  else {
    if (param_1 != '\x01') {
      return;
    }
    uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
    puVar2 = (undefined8 *)(ulong)uVar1;
    if (-1 < (int)uVar1) {
      FUN_10095e3d0(puVar2,0);
      if (unaff_x21 != 0) {
        return;
      }
      *(undefined1 *)(unaff_x20 + 0x171) = 1;
      return;
    }
  }
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
  *puVar2 = 0xd00000000000001f;
  puVar2[1] = 0x8000000100db4780;
  *(undefined4 *)(puVar2 + 2) = 9;
  _swift_willThrow();
  return;
}



/* Address: 0x10094fd38 | FUN_10094fd38 */

/* WARNING: Removing unreachable block (ram,0x00010095011c) */
/* WARNING: Removing unreachable block (ram,0x0001009501e4) */
/* WARNING: Removing unreachable block (ram,0x000100950120) */
/* WARNING: Removing unreachable block (ram,0x0001009501f0) */
/* WARNING: Removing unreachable block (ram,0x000100950140) */
/* WARNING: Removing unreachable block (ram,0x00010094ff34) */
/* WARNING: Removing unreachable block (ram,0x00010095024c) */
/* WARNING: Removing unreachable block (ram,0x00010094ff38) */
/* WARNING: Removing unreachable block (ram,0x000100950258) */
/* WARNING: Removing unreachable block (ram,0x00010094ff54) */

void FUN_10094fd38(undefined8 param_1,ulong param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 local_90;
  undefined7 uStack_8f;
  char local_88;
  undefined *local_78;
  undefined8 local_68;
  
  iVar2 = (int)&local_90;
  lVar9 = param_3;
  if ((param_2 & 0xff) == 0) {
    if ((*(byte *)((long)unaff_x20 + 0x172) & 1) != 0) {
      if (param_3 == 0) {
        return;
      }
      if (DAT_100fec5a8 != -1) {
        _swift_once(&DAT_100fec5a8,FUN_100901fdc);
      }
      uVar6 = DAT_1010581d0;
      uVar3 = *(ulong *)(param_3 + 0x20);
      lVar8 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar4 = uVar3;
      lVar5 = lVar8;
      (**(code **)(lVar8 + 0x10))();
      if ((uVar4 & 1) == 0) {
        puVar7 = &DAT_100f1b8a8;
        _swift_allocObject(&DAT_100f1b8a8,0x20,7);
        *(long *)(puVar7 + 0x10) = param_3;
        *(undefined8 *)(puVar7 + 0x18) = uVar6;
        pcVar10 = *(code **)(lVar8 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(uVar6);
LAB_100950048:
        (*pcVar10)(thunk_FUN_1008d678c,puVar7,uVar3,lVar8);
        _swift_release(puVar7);
        return;
      }
LAB_10094fe90:
      thunk_FUN_1005de8f4(uVar6);
      FUN_1006486f8();
      FUN_100004550(uVar6,lVar5);
      _swift_bridgeObjectRelease(lVar9);
      return;
    }
    if ((*(byte *)((long)unaff_x20 + 0x171) & 1) != 0) goto LAB_10094fd6c;
    FUN_100934a9c();
    uVar1 = (uint)lVar9 & 0xff;
    if (1 < uVar1) {
      if (uVar1 != 2) {
        return;
      }
      if (param_2 == 0) {
        _swift_errorRetain(param_3);
        uVar3 = 0;
      }
      else {
        uVar4 = *(ulong *)(param_2 + 0x20);
        lVar8 = *(long *)(param_2 + 0x28);
        _swift_getObjectType();
        pcVar10 = *(code **)(lVar8 + 0x10);
        _swift_retain_n(param_2,2);
        _swift_errorRetain(param_3);
        (*pcVar10)(uVar4,lVar8);
        uVar3 = param_2;
        if ((uVar4 & 1) == 0) {
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          lVar9 = *(long *)(param_2 + 0x28);
          _swift_getObjectType(uVar6);
          puVar7 = &DAT_100f1b858;
          _swift_allocObject(&DAT_100f1b858,0x20,7);
          *(ulong *)(puVar7 + 0x10) = param_2;
          *(long *)(puVar7 + 0x18) = param_3;
          pcVar10 = *(code **)(lVar9 + 0x18);
          _swift_retain(param_2);
          _swift_errorRetain(param_3);
          (*pcVar10)(thunk_FUN_1008d678c,puVar7,uVar6,lVar9);
          _swift_release(param_2);
          _swift_release(puVar7);
        }
        else {
          lVar5 = param_3;
          thunk_FUN_1005de8f4(param_3);
          FUN_1006486f8();
          _swift_release(param_2);
          FUN_100004550(lVar5,lVar8);
          _swift_bridgeObjectRelease(lVar9);
        }
      }
      FUN_10094fd38(param_3,2,0);
      FUN_1008dd938(param_3,param_2,2);
      _swift_release(uVar3);
      _swift_errorRelease(param_3);
      return;
    }
    pcVar10 = *(code **)(*unaff_x20 + 0x418);
    FUN_1008dd970(param_3,param_2);
    (*pcVar10)(0);
    if (param_3 != 0) {
      FUN_10090d0b8(0,0,param_3);
      FUN_1008dd938(param_3,param_2,lVar9);
    }
    if ((*(byte *)(unaff_x20 + 0x22) >> 3 & 1) != 0) {
      FUN_10094dc20(*(byte *)(unaff_x20 + 0x22) & 0xf7);
    }
    lVar8 = unaff_x20[0x1b];
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100950464);
      (*pcVar10)();
    }
    local_78 = &DAT_100eeb880;
    local_90 = 1;
    _swift_retain(lVar8);
    FUN_100629a5c(&local_90);
    FUN_1008dd938(param_3,param_2,lVar9);
    goto LAB_100950330;
  }
  if (((uint)param_2 & 0xff) == 2) {
LAB_10094fd6c:
    lVar9 = unaff_x20[0x2b];
    if (lVar9 != 0) {
      lVar8 = unaff_x20[0x2c];
      lVar5 = unaff_x20[0x2d];
      unaff_x20[0x2b] = 0;
      unaff_x20[0x2c] = 0;
      unaff_x20[0x2d] = 0;
      FUN_100950b80(lVar9,lVar8,lVar5);
      _swift_release(lVar5);
      _swift_release(lVar9);
    }
    FUN_10094dce4(param_1,2,param_3);
    return;
  }
  if ((*(byte *)((long)unaff_x20 + 0x171) & 1) != 0) {
    if (param_3 == 0) {
      return;
    }
    if (DAT_100fec5b0 != -1) {
      _swift_once(&DAT_100fec5b0,FUN_100901fac);
    }
    uVar6 = DAT_1010581d8;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar8 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar7 = &DAT_100f1b830;
      _swift_allocObject(&DAT_100f1b830,0x20,7);
      *(long *)(puVar7 + 0x10) = param_3;
      *(undefined8 *)(puVar7 + 0x18) = uVar6;
      pcVar10 = *(code **)(lVar8 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar6);
      goto LAB_100950048;
    }
    goto LAB_10094fe90;
  }
  if ((*(byte *)((long)unaff_x20 + 0x172) & 1) != 0) goto LAB_10094fd6c;
  local_68 = param_1;
  _swift_errorRetain();
  puVar7 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  _swift_dynamicCast(&local_90,&local_68,puVar7,&DAT_100eeb710,0);
  if (iVar2 == 0) {
LAB_1009500fc:
    _swift_errorRelease(local_68);
    (**(code **)(*unaff_x20 + 0x418))(1);
  }
  else {
    if ((local_88 != '\x03') || (CONCAT71(uStack_8f,local_90) != 6)) {
      FUN_10061e298();
      goto LAB_1009500fc;
    }
    *(undefined1 *)((long)unaff_x20 + 0x171) = 1;
    _swift_errorRelease(local_68);
  }
  if ((*(byte *)(unaff_x20 + 0x22) >> 2 & 1) != 0) {
    FUN_10094dc20(*(byte *)(unaff_x20 + 0x22) & 0xfb);
  }
  if (param_3 != 0) {
    FUN_10090d0b8(0,0,param_3);
  }
  lVar8 = unaff_x20[0x1b];
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100950460);
    (*pcVar10)();
  }
  local_78 = &DAT_100eeb880;
  local_90 = 0;
  _swift_retain(lVar8);
  FUN_100629a5c(&local_90);
LAB_100950330:
  _swift_release(lVar8);
  FUN_100004594(&local_90);
  return;
}



/* Address: 0x100950464 | FUN_100950464 */

/* WARNING: Removing unreachable block (ram,0x000100950838) */
/* WARNING: Removing unreachable block (ram,0x000100950900) */
/* WARNING: Removing unreachable block (ram,0x00010095083c) */
/* WARNING: Removing unreachable block (ram,0x00010095090c) */
/* WARNING: Removing unreachable block (ram,0x00010095085c) */
/* WARNING: Removing unreachable block (ram,0x000100950658) */
/* WARNING: Removing unreachable block (ram,0x000100950968) */
/* WARNING: Removing unreachable block (ram,0x00010095065c) */
/* WARNING: Removing unreachable block (ram,0x000100950974) */
/* WARNING: Removing unreachable block (ram,0x000100950678) */

void FUN_100950464(undefined8 param_1,ulong param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 local_90;
  undefined7 uStack_8f;
  char local_88;
  undefined *local_78;
  undefined8 local_68;
  
  iVar3 = (int)&local_90;
  lVar10 = param_3;
  if ((param_2 & 0xff) == 0) {
    if ((*(byte *)(unaff_x20 + 0x172) & 1) != 0) {
      if (param_3 == 0) {
        return;
      }
      if (DAT_100fec5a8 != -1) {
        _swift_once(&DAT_100fec5a8,FUN_100901fdc);
      }
      uVar7 = DAT_1010581d0;
      uVar4 = *(ulong *)(param_3 + 0x20);
      lVar9 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar5 = uVar4;
      lVar6 = lVar9;
      (**(code **)(lVar9 + 0x10))();
      if ((uVar5 & 1) == 0) {
        puVar8 = &DAT_100f1b7b8;
        _swift_allocObject(&DAT_100f1b7b8,0x20,7);
        *(long *)(puVar8 + 0x10) = param_3;
        *(undefined8 *)(puVar8 + 0x18) = uVar7;
        pcVar11 = *(code **)(lVar9 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(uVar7);
LAB_10095076c:
        (*pcVar11)(thunk_FUN_1008d678c,puVar8,uVar4,lVar9);
        _swift_release(puVar8);
        return;
      }
LAB_1009505bc:
      thunk_FUN_1005de8f4(uVar7);
      FUN_1006486f8();
      FUN_100004550(uVar7,lVar6);
      _swift_bridgeObjectRelease(lVar10);
      return;
    }
    if ((*(byte *)(unaff_x20 + 0x171) & 1) != 0) goto LAB_100950498;
    FUN_100934a9c();
    uVar1 = (uint)lVar10 & 0xff;
    if (1 < uVar1) {
      if (uVar1 != 2) {
        return;
      }
      if (param_2 == 0) {
        _swift_errorRetain(param_3);
        uVar4 = 0;
      }
      else {
        uVar5 = *(ulong *)(param_2 + 0x20);
        lVar9 = *(long *)(param_2 + 0x28);
        _swift_getObjectType();
        pcVar11 = *(code **)(lVar9 + 0x10);
        _swift_retain_n(param_2,2);
        _swift_errorRetain(param_3);
        (*pcVar11)(uVar5,lVar9);
        uVar4 = param_2;
        if ((uVar5 & 1) == 0) {
          uVar7 = *(undefined8 *)(param_2 + 0x20);
          lVar10 = *(long *)(param_2 + 0x28);
          _swift_getObjectType(uVar7);
          puVar8 = &DAT_100f1b768;
          _swift_allocObject(&DAT_100f1b768,0x20,7);
          *(ulong *)(puVar8 + 0x10) = param_2;
          *(long *)(puVar8 + 0x18) = param_3;
          pcVar11 = *(code **)(lVar10 + 0x18);
          _swift_retain(param_2);
          _swift_errorRetain(param_3);
          (*pcVar11)(thunk_FUN_1008d678c,puVar8,uVar7,lVar10);
          _swift_release(param_2);
          _swift_release(puVar8);
        }
        else {
          lVar6 = param_3;
          thunk_FUN_1005de8f4(param_3);
          FUN_1006486f8();
          _swift_release(param_2);
          FUN_100004550(lVar6,lVar9);
          _swift_bridgeObjectRelease(lVar10);
        }
      }
      FUN_100950464(param_3,2,0);
      FUN_1008dd938(param_3,param_2,2);
      _swift_release(uVar4);
      _swift_errorRelease(param_3);
      return;
    }
    FUN_1008dd970(param_3,param_2);
    FUN_10094fc78(0);
    if (param_3 != 0) {
      FUN_10090d0b8(0,0,param_3);
      FUN_1008dd938(param_3,param_2,lVar10);
    }
    if ((*(byte *)(unaff_x20 + 0x110) >> 3 & 1) != 0) {
      FUN_10094dc20(*(byte *)(unaff_x20 + 0x110) & 0xf7);
    }
    lVar9 = *(long *)(unaff_x20 + 0xd8);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100950b80);
      (*pcVar11)();
    }
    local_78 = &DAT_100eeb880;
    local_90 = 1;
    _swift_retain(lVar9);
    FUN_100629a5c(&local_90);
    FUN_1008dd938(param_3,param_2,lVar10);
    goto LAB_100950a4c;
  }
  if (((uint)param_2 & 0xff) == 2) {
LAB_100950498:
    lVar10 = *(long *)(unaff_x20 + 0x158);
    if (lVar10 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + 0x160);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x168);
      *(undefined8 *)(unaff_x20 + 0x158) = 0;
      *(undefined8 *)(unaff_x20 + 0x160) = 0;
      *(undefined8 *)(unaff_x20 + 0x168) = 0;
      FUN_100950b80(lVar10,uVar7,uVar2);
      _swift_release(uVar2);
      _swift_release(lVar10);
    }
    FUN_10094e2ec(param_1,2,param_3);
    return;
  }
  if ((*(byte *)(unaff_x20 + 0x171) & 1) != 0) {
    if (param_3 == 0) {
      return;
    }
    if (DAT_100fec5b0 != -1) {
      _swift_once(&DAT_100fec5b0,FUN_100901fac);
    }
    uVar7 = DAT_1010581d8;
    uVar4 = *(ulong *)(param_3 + 0x20);
    lVar9 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar5 = uVar4;
    lVar6 = lVar9;
    (**(code **)(lVar9 + 0x10))();
    if ((uVar5 & 1) == 0) {
      puVar8 = &DAT_100f1b740;
      _swift_allocObject(&DAT_100f1b740,0x20,7);
      *(long *)(puVar8 + 0x10) = param_3;
      *(undefined8 *)(puVar8 + 0x18) = uVar7;
      pcVar11 = *(code **)(lVar9 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar7);
      goto LAB_10095076c;
    }
    goto LAB_1009505bc;
  }
  if ((*(byte *)(unaff_x20 + 0x172) & 1) != 0) goto LAB_100950498;
  local_68 = param_1;
  _swift_errorRetain();
  puVar8 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  _swift_dynamicCast(&local_90,&local_68,puVar8,&DAT_100eeb710,0);
  if (iVar3 == 0) {
LAB_100950820:
    _swift_errorRelease(local_68);
    FUN_10094fc78(1);
  }
  else {
    if ((local_88 != '\x03') || (CONCAT71(uStack_8f,local_90) != 6)) {
      FUN_10061e298();
      goto LAB_100950820;
    }
    *(undefined1 *)(unaff_x20 + 0x171) = 1;
    _swift_errorRelease(local_68);
  }
  if ((*(byte *)(unaff_x20 + 0x110) >> 2 & 1) != 0) {
    FUN_10094dc20(*(byte *)(unaff_x20 + 0x110) & 0xfb);
  }
  if (param_3 != 0) {
    FUN_10090d0b8(0,0,param_3);
  }
  lVar9 = *(long *)(unaff_x20 + 0xd8);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100950b7c);
    (*pcVar11)();
  }
  local_78 = &DAT_100eeb880;
  local_90 = 0;
  _swift_retain(lVar9);
  FUN_100629a5c(&local_90);
LAB_100950a4c:
  _swift_release(lVar9);
  FUN_100004594(&local_90);
  return;
}



/* Address: 0x100950b80 | FUN_100950b80 */

void FUN_100950b80(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  puVar2 = param_1;
  FUN_10063de0c();
  uVar7 = *puVar2;
  uVar3 = param_1[4];
  lVar1 = param_1[5];
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f1b600;
    _swift_allocObject(&DAT_100f1b600,0x20,7);
    *(undefined8 **)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar7);
    (*pcVar8)(thunk_FUN_1008d678c,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    thunk_FUN_1005de8f4(uVar7);
    FUN_1006486f8();
    FUN_100004550(uVar7,lVar6);
    _swift_bridgeObjectRelease(param_3);
  }
  (*param_2)();
  return;
}



/* Address: 0x100950c78 | FUN_100950c78 */

void FUN_100950c78(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 local_78;
  undefined1 auStack_70 [32];
  
  FUN_10000cbfc(param_1,auStack_70);
  puVar2 = &local_78;
  puVar6 = PTR___type_metadata_for_Any_100eae0c0 + 8;
  _swift_dynamicCast(puVar2,auStack_70,puVar6,&DAT_100f1c228,0);
  if ((int)puVar2 == 0) {
    if (param_2 != 0) {
      if (DAT_100fec610 != -1) {
        _swift_once(&DAT_100fec610,FUN_100901fcc);
      }
      uVar5 = DAT_1010581f0;
      uVar3 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar4 = uVar3;
      lVar7 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar4 & 1) == 0) {
        puVar6 = &DAT_100f1b2b8;
        _swift_allocObject(&DAT_100f1b2b8,0x20,7);
        *(long *)(puVar6 + 0x10) = param_2;
        *(undefined8 *)(puVar6 + 0x18) = uVar5;
        pcVar8 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        _swift_errorRetain(uVar5);
        (*pcVar8)(thunk_FUN_1008d678c,puVar6,uVar3,lVar1);
        _swift_release(puVar6);
      }
      else {
        thunk_FUN_1005de8f4(uVar5);
        FUN_1006486f8();
        FUN_100004550(uVar5,lVar7);
        _swift_bridgeObjectRelease(puVar6);
      }
    }
  }
  else {
    FUN_100953074(local_78,1,param_2);
  }
  FUN_100004594(auStack_70);
  return;
}



/* Address: 0x100950dd8 | FUN_100950dd8 */

/* WARNING: Removing unreachable block (ram,0x000100950f00) */
/* WARNING: Removing unreachable block (ram,0x000100950f84) */
/* WARNING: Removing unreachable block (ram,0x000100950f24) */

undefined * FUN_100950dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *unaff_x20;
  code *pcVar6;
  undefined1 auStack_d8 [64];
  undefined1 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *puStack_78;
  undefined1 local_68;
  long local_60;
  undefined8 uStack_58;
  
  puVar2 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  *(long **)(puVar2 + 0x20) = unaff_x20;
  *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  pcVar6 = *(code **)(*(long *)unaff_x20[5] + 0x88);
  plVar3 = unaff_x20;
  _swift_retain();
  (*pcVar6)();
  lVar1 = *plVar3;
  *plVar3 = lVar1 + 1;
  puVar4 = &DAT_100f1b650;
  _swift_allocObject(&DAT_100f1b650,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  local_90 = FUN_10095b5c0;
  local_80 = FUN_10095b5cc;
  local_68 = 0;
  puVar5 = &DAT_100f1b678;
  puStack_88 = puVar4;
  puStack_78 = puVar2;
  local_60 = lVar1;
  uStack_58 = param_1;
  _swift_allocObject(&DAT_100f1b678,0x20,7);
  *(long **)(puVar5 + 0x10) = unaff_x20;
  *(long *)(puVar5 + 0x18) = lVar1;
  FUN_1009474f8(&local_90,auStack_d8);
  local_98 = 0;
  _swift_retain_n(puVar2,3);
  _swift_retain();
  _swift_retain(param_3);
  FUN_10093efc4(auStack_d8);
  _swift_release(puVar2);
  FUN_1008fa458(auStack_d8);
  FUN_100947534(&local_90);
  return puVar2;
}



/* Address: 0x100951028 | FUN_100951028 */

void FUN_100951028(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  DispatchTime DVar2;
  DispatchTime DVar3;
  __uint64 _Var4;
  long lVar5;
  long lVar6;
  
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  DVar3 = Dispatch::DispatchTime::now(DVar2);
  _Var4 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar3);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  if (0x7ffffffffffffffe < _Var4) {
    _Var4 = 0x7fffffffffffffff;
  }
  uVar1 = 0x7fffffffffffffff;
  if (!SCARRY8(_Var4,param_1)) {
    uVar1 = _Var4 + param_1 & ((long)(_Var4 + param_1) >> 0x3f ^ 0xffffffffffffffffU);
  }
  FUN_100950dd8(uVar1,param_2,param_3);
  return;
}


