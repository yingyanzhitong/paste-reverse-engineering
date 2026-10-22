/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10076c59c | FUN_10076c59c */

undefined8 * FUN_10076c59c(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  undefined1 uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  size_t sVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  size_t sVar34;
  uint uVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 *puVar39;
  ulong uVar40;
  uint *puVar41;
  long lVar42;
  ulong uVar43;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar20 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar22 = *(long *)(lVar20 + -8);
  lVar24 = *(long *)(lVar9 + -8);
  uVar27 = (ulong)*(byte *)(lVar24 + 0x50);
  uVar43 = *(long *)(lVar22 + 0x40) + uVar27;
  lVar25 = *(long *)(lVar24 + 0x40);
  lVar28 = *(long *)(lVar10 + -8);
  uVar30 = (ulong)*(byte *)(lVar28 + 0x50);
  sVar26 = *(size_t *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar26 = sVar26 + 1;
  }
  uVar1 = sVar26 + (lVar25 + uVar30 + (uVar43 & (uVar27 ^ 0xffffffffffffffff)) &
                   (uVar30 ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar20,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar42 = *(long *)(lVar16 + -8);
  uVar33 = *(uint *)(lVar42 + 0x50);
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar14,puVar13);
  lVar36 = *(long *)(lVar17 + -8);
  uVar23 = *(uint *)(lVar36 + 0x50);
  uVar40 = (ulong)uVar23 & 0xff;
  lVar18 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar14,puVar13);
  lVar38 = *(long *)(lVar18 + -8);
  iVar15 = *(int *)(lVar38 + 0x54);
  uVar29 = (ulong)*(uint *)(lVar38 + 0x50) & 0xff;
  uVar31 = (ulong)((uVar23 | uVar33 | *(uint *)(lVar38 + 0x50)) & 0xf8 | 7);
  uVar23 = *(uint *)(lVar42 + 0x54);
  uVar11 = *(uint *)(lVar36 + 0x54);
  uVar33 = uVar11;
  if (uVar11 <= uVar23) {
    uVar33 = uVar23;
  }
  uVar7 = 0;
  if (iVar15 != 0) {
    uVar7 = iVar15 - 1;
  }
  if (uVar7 <= uVar33) {
    uVar7 = uVar33;
  }
  uVar2 = *(long *)(lVar42 + 0x40) + uVar40;
  lVar3 = *(long *)(lVar36 + 0x40) + uVar29;
  sVar34 = *(size_t *)(lVar38 + 0x40);
  if (iVar15 == 0) {
    sVar34 = sVar34 + 1;
  }
  uVar4 = (lVar3 + (uVar2 & (uVar40 ^ 0xffffffffffffffff)) & (uVar29 ^ 0xffffffffffffffff)) + sVar34
  ;
  uVar6 = uVar4;
  if (uVar7 == 0) {
    uVar6 = uVar4 + 1;
  }
  uVar8 = uVar6;
  if (uVar6 < 9) {
    uVar8 = 8;
  }
  lVar5 = uVar8 + (uVar31 + 8 & (uVar31 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar5 + 1U) {
    uVar1 = lVar5 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar12 = *(byte *)((long)param_2 + uVar1);
  uVar33 = (uint)bVar12;
  if (bVar12 < 4) {
    if (bVar12 < 2) goto LAB_10076c7d4;
  }
  else {
    uVar35 = (uint)uVar1;
    uVar32 = 4;
    if (uVar35 < 4) {
      uVar32 = uVar35;
    }
    if ((int)uVar32 < 2) {
      if (uVar32 != 0) {
        uVar33 = (uint)(byte)*param_2;
        goto joined_r0x00010076c7b8;
      }
    }
    else {
      if (uVar32 == 2) {
        uVar33 = (uint)(ushort)*param_2;
      }
      else if (uVar32 == 3) {
        uVar33 = (uint)(uint3)*param_2;
      }
      else {
        uVar33 = *param_2;
      }
joined_r0x00010076c7b8:
      if (uVar35 < 4) {
        uVar33 = (uVar33 | bVar12 - 4 << (ulong)((uVar35 & 3) << 3)) + 4;
      }
      else {
        uVar33 = uVar33 + 4;
      }
    }
    if ((int)uVar33 < 2) {
LAB_10076c7d4:
      if (uVar33 != 0) {
        *param_1 = *(undefined8 *)param_2;
        *(undefined1 *)((long)param_1 + uVar1) = 1;
        _swift_bridgeObjectRetain();
        return param_1;
      }
      uVar29 = ~uVar30;
      (**(code **)(lVar22 + 0x10))(param_1,param_2,lVar20);
      uVar40 = uVar43 + (long)param_1 & ~uVar27;
      uVar43 = (ulong)(uVar43 + (long)param_2) & ~uVar27;
      (**(code **)(lVar24 + 0x10))(uVar40,uVar43,lVar9);
      lVar25 = lVar25 + uVar30;
      uVar40 = uVar40 + lVar25;
      uVar43 = uVar43 + lVar25;
      uVar27 = uVar43 & uVar29;
      (**(code **)(lVar28 + 0x30))(uVar27,1,lVar10);
      if ((int)uVar27 != 0) {
        _memcpy((void *)(uVar40 & uVar29),(void *)(uVar43 & uVar29),sVar26);
        *(undefined1 *)((long)param_1 + uVar1) = 0;
        return param_1;
      }
      (**(code **)(lVar28 + 0x10))(uVar40 & uVar29,uVar43 & uVar29,lVar10);
      (**(code **)(lVar28 + 0x38))(uVar40 & uVar29,0,1,lVar10);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
  }
  if (uVar33 != 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar21 = 3;
    goto LAB_10076cbb4;
  }
  *param_1 = *(undefined8 *)param_2;
  puVar39 = (undefined8 *)((long)param_1 + uVar31 + 8 & ~uVar31);
  puVar41 = (uint *)((ulong)((long)param_2 + uVar31 + 8) & ~uVar31);
  bVar12 = *(byte *)((long)puVar41 + uVar8);
  uVar33 = (uint)bVar12;
  if (1 < bVar12) {
    uVar35 = (uint)uVar8;
    uVar32 = 4;
    if (uVar35 < 4) {
      uVar32 = uVar35;
    }
    if ((int)uVar32 < 2) {
      if (uVar32 == 0) goto LAB_10076c98c;
      uVar32 = (uint)(byte)*puVar41;
    }
    else if (uVar32 == 2) {
      uVar32 = (uint)(ushort)*puVar41;
    }
    else if (uVar32 == 3) {
      uVar32 = (uint)(uint3)*puVar41;
    }
    else {
      uVar32 = *puVar41;
    }
    uVar33 = uVar32 | bVar12 - 2 << (ulong)((uVar35 & 3) << 3);
    if (3 < uVar35) {
      uVar33 = uVar32;
    }
    uVar33 = uVar33 + 2;
  }
LAB_10076c98c:
  if (uVar33 == 1) {
    uVar37 = *(undefined8 *)puVar41;
    _swift_errorRetain(uVar37);
    *puVar39 = uVar37;
    uVar21 = 1;
  }
  else {
    uVar40 = ~uVar40;
    uVar29 = ~uVar29;
    if (uVar7 == 0) {
      if (*(byte *)((long)puVar41 + uVar4) != 0) {
        uVar23 = (uint)uVar4;
        uVar33 = 0;
        if (uVar23 < 4) {
          uVar33 = *(byte *)((long)puVar41 + uVar4) - 1 << (ulong)((uVar23 & 3) << 3);
        }
        if (uVar23 == 0) {
          uVar23 = 0;
        }
        else {
          uVar11 = 4;
          if (uVar23 < 4) {
            uVar11 = uVar23;
          }
          if ((int)uVar11 < 3) {
            if (uVar11 == 1) {
              uVar23 = (uint)(byte)*puVar41;
            }
            else {
              uVar23 = (uint)(ushort)*puVar41;
            }
          }
          else if (uVar11 == 3) {
            uVar23 = (uint)(uint3)*puVar41;
          }
          else {
            uVar23 = *puVar41;
          }
        }
        if ((uVar23 | uVar33) != 0xffffffff) goto LAB_10076ca9c;
      }
    }
    else {
      if (uVar23 == uVar7) {
        puVar19 = puVar41;
        (**(code **)(lVar42 + 0x30))(puVar41,uVar23,lVar16);
        iVar15 = (int)puVar19;
      }
      else {
        uVar43 = (ulong)(uVar2 + (long)puVar41) & uVar40;
        if (uVar11 == uVar7) {
          (**(code **)(lVar36 + 0x30))(uVar43,uVar11,lVar17);
          iVar15 = (int)uVar43;
        }
        else {
          uVar43 = lVar3 + uVar43 & uVar29;
          (**(code **)(lVar38 + 0x30))(uVar43,iVar15,lVar18);
          iVar15 = 0;
          if ((int)uVar43 != 0) {
            iVar15 = (int)uVar43 + -1;
          }
        }
      }
      if (iVar15 != 0) {
LAB_10076ca9c:
        _memcpy(puVar39,puVar41,uVar6);
        uVar21 = 0;
        goto LAB_10076cbac;
      }
    }
    (**(code **)(lVar42 + 0x10))(puVar39,puVar41,lVar16);
    uVar43 = uVar2 + (long)puVar39 & uVar40;
    uVar40 = (ulong)(uVar2 + (long)puVar41) & uVar40;
    (**(code **)(lVar36 + 0x10))(uVar43,uVar40,lVar17);
    uVar43 = lVar3 + uVar43;
    uVar40 = lVar3 + uVar40;
    uVar27 = uVar40 & uVar29;
    (**(code **)(lVar38 + 0x30))(uVar27,1,lVar18);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar38 + 0x10))(uVar43 & uVar29,uVar40 & uVar29,lVar18);
      (**(code **)(lVar38 + 0x38))(uVar43 & uVar29,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar43 & uVar29),(void *)(uVar40 & uVar29),sVar34);
    }
    uVar21 = 0;
    if (uVar7 == 0) {
      *(undefined1 *)((long)puVar39 + uVar4) = 0;
    }
  }
LAB_10076cbac:
  *(undefined1 *)((long)puVar39 + uVar8) = uVar21;
  uVar21 = 2;
LAB_10076cbb4:
  *(undefined1 *)((long)param_1 + uVar1) = uVar21;
  return param_1;
}



/* Address: 0x10076cbdc | FUN_10076cbdc */

uint * FUN_10076cbdc(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  undefined1 uVar22;
  byte bVar23;
  long lVar24;
  ulong uVar25;
  code *pcVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  size_t sVar33;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  size_t sVar37;
  ulong uVar38;
  long lVar39;
  undefined8 uVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 *puVar43;
  ulong uVar44;
  uint *puVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  uint uVar49;
  long lVar50;
  ulong uVar51;
  
  puVar13 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar12 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(param_3 + 0x18);
  lVar24 = *(long *)(lVar8 + -8);
  lVar31 = *(long *)(lVar10 + -8);
  uVar35 = (ulong)*(byte *)(lVar31 + 0x50);
  uVar47 = *(long *)(lVar24 + 0x40) + uVar35;
  lVar32 = *(long *)(lVar31 + 0x40);
  lVar9 = *(long *)(param_3 + 0x20);
  lVar36 = *(long *)(lVar9 + -8);
  uVar38 = (ulong)*(byte *)(lVar36 + 0x50);
  sVar33 = *(size_t *)(lVar36 + 0x40);
  if (*(int *)(lVar36 + 0x54) == 0) {
    sVar33 = sVar33 + 1;
  }
  uVar1 = sVar33 + (lVar32 + uVar38 + (uVar47 & (uVar35 ^ 0xffffffffffffffff)) &
                   (uVar38 ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar50 = *(long *)(lVar16 + -8);
  uVar27 = *(uint *)(lVar50 + 0x50);
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar10,puVar13,puVar12);
  lVar48 = *(long *)(lVar17 + -8);
  uVar30 = *(uint *)(lVar48 + 0x50);
  uVar44 = (ulong)uVar30 & 0xff;
  lVar18 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar9,puVar13,puVar12);
  lVar39 = *(long *)(lVar18 + -8);
  iVar15 = *(int *)(lVar39 + 0x54);
  uVar25 = (ulong)*(uint *)(lVar39 + 0x50) & 0xff;
  uVar41 = (ulong)((uVar30 | uVar27 | *(uint *)(lVar39 + 0x50)) & 0xf8 | 7);
  uVar30 = *(uint *)(lVar50 + 0x54);
  uVar11 = *(uint *)(lVar48 + 0x54);
  uVar27 = uVar11;
  if (uVar11 <= uVar30) {
    uVar27 = uVar30;
  }
  uVar6 = 0;
  if (iVar15 != 0) {
    uVar6 = iVar15 - 1;
  }
  if (uVar6 <= uVar27) {
    uVar6 = uVar27;
  }
  uVar2 = *(long *)(lVar50 + 0x40) + uVar44;
  lVar3 = *(long *)(lVar48 + 0x40) + uVar25;
  sVar37 = *(size_t *)(lVar39 + 0x40);
  if (iVar15 == 0) {
    sVar37 = sVar37 + 1;
  }
  uVar4 = (lVar3 + (uVar2 & (uVar44 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff)) + sVar37
  ;
  uVar5 = uVar4;
  if (uVar6 == 0) {
    uVar5 = uVar4 + 1;
  }
  uVar7 = uVar5;
  if (uVar5 < 9) {
    uVar7 = 8;
  }
  lVar21 = uVar7 + (uVar41 + 8 & (uVar41 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar21 + 1U) {
    uVar1 = lVar21 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar23 = *(byte *)((long)param_1 + uVar1);
  uVar27 = (uint)bVar23;
  uVar29 = (uint)uVar1;
  if (3 < bVar23) {
    uVar34 = 4;
    if (uVar29 < 4) {
      uVar34 = uVar29;
    }
    if ((int)uVar34 < 2) {
      if (uVar34 == 0) goto LAB_10076ce50;
      uVar27 = (uint)(byte)*param_1;
    }
    else if (uVar34 == 2) {
      uVar27 = (uint)(ushort)*param_1;
    }
    else if (uVar34 == 3) {
      uVar27 = (uint)(uint3)*param_1;
    }
    else {
      uVar27 = *param_1;
    }
    if (uVar29 < 4) {
      uVar27 = uVar27 | bVar23 - 4 << (ulong)((uVar29 & 3) << 3);
    }
    uVar27 = uVar27 + 4;
  }
LAB_10076ce50:
  uVar35 = ~uVar35;
  uVar46 = ~uVar38;
  uVar51 = ~uVar41;
  uVar44 = ~uVar44;
  uVar25 = ~uVar25;
  uVar49 = (uint)uVar7;
  uVar34 = (uint)uVar4;
  if ((int)uVar27 < 2) {
    if (uVar27 == 0) {
      (**(code **)(lVar24 + 8))(param_1,lVar8);
      uVar42 = (ulong)(uVar47 + (long)param_1) & uVar35;
      (**(code **)(lVar31 + 8))(uVar42,lVar10);
      uVar42 = uVar42 + lVar32 + uVar38;
      uVar19 = uVar42 & uVar46;
      (**(code **)(lVar36 + 0x30))(uVar19,1,lVar9);
      if ((int)uVar19 == 0) {
        pcVar26 = *(code **)(lVar36 + 8);
        uVar42 = uVar42 & uVar46;
        lVar21 = lVar9;
LAB_10076cee4:
        (*pcVar26)(uVar42,lVar21);
      }
    }
    else {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
  }
  else if (uVar27 == 2) {
    puVar45 = (uint *)((ulong)((long)param_1 + uVar41 + 8) & uVar51);
    bVar23 = *(byte *)((long)puVar45 + uVar7);
    uVar27 = (uint)bVar23;
    if (1 < bVar23) {
      uVar28 = 4;
      if (uVar49 < 4) {
        uVar28 = uVar49;
      }
      if ((int)uVar28 < 2) {
        if (uVar28 == 0) goto LAB_10076cf80;
        uVar28 = (uint)(byte)*puVar45;
      }
      else if (uVar28 == 2) {
        uVar28 = (uint)(ushort)*puVar45;
      }
      else if (uVar28 == 3) {
        uVar28 = (uint)(uint3)*puVar45;
      }
      else {
        uVar28 = *puVar45;
      }
      uVar27 = uVar28 | bVar23 - 2 << (ulong)((uVar49 & 3) << 3);
      if (3 < uVar49) {
        uVar27 = uVar28;
      }
      uVar27 = uVar27 + 2;
    }
LAB_10076cf80:
    if (uVar27 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar45);
    }
    else {
      if (uVar6 == 0) {
        if (*(byte *)((long)puVar45 + uVar4) != 0) {
          uVar27 = 0;
          if (uVar34 < 4) {
            uVar27 = *(byte *)((long)puVar45 + uVar4) - 1 << (ulong)((uVar34 & 3) << 3);
          }
          if (uVar34 == 0) {
            uVar28 = 0;
          }
          else {
            uVar28 = 4;
            if (uVar34 < 4) {
              uVar28 = uVar34;
            }
            if ((int)uVar28 < 3) {
              if (uVar28 == 1) {
                uVar28 = (uint)(byte)*puVar45;
              }
              else {
                uVar28 = (uint)(ushort)*puVar45;
              }
            }
            else if (uVar28 == 3) {
              uVar28 = (uint)(uint3)*puVar45;
            }
            else {
              uVar28 = *puVar45;
            }
          }
          iVar14 = (uVar28 | uVar27) + 1;
          goto LAB_10076d08c;
        }
      }
      else {
        if (uVar30 == uVar6) {
          puVar20 = puVar45;
          (**(code **)(lVar50 + 0x30))(puVar45,uVar30,lVar16);
          iVar14 = (int)puVar20;
        }
        else {
          uVar42 = (ulong)(uVar2 + (long)puVar45) & uVar44;
          if (uVar11 == uVar6) {
            (**(code **)(lVar48 + 0x30))(uVar42,uVar11,lVar17);
            iVar14 = (int)uVar42;
          }
          else {
            uVar42 = lVar3 + uVar42 & uVar25;
            (**(code **)(lVar39 + 0x30))(uVar42,iVar15,lVar18);
            iVar14 = 0;
            if ((int)uVar42 != 0) {
              iVar14 = (int)uVar42 + -1;
            }
          }
        }
LAB_10076d08c:
        if (iVar14 != 0) goto LAB_10076d0e0;
      }
      (**(code **)(lVar50 + 8))(puVar45,lVar16);
      uVar42 = (ulong)(uVar2 + (long)puVar45) & uVar44;
      (**(code **)(lVar48 + 8))(uVar42,lVar17);
      uVar42 = lVar3 + uVar42;
      uVar19 = uVar42 & uVar25;
      (**(code **)(lVar39 + 0x30))(uVar19,1,lVar18);
      if ((int)uVar19 == 0) {
        pcVar26 = *(code **)(lVar39 + 8);
        uVar42 = uVar42 & uVar25;
        lVar21 = lVar18;
        goto LAB_10076cee4;
      }
    }
  }
LAB_10076d0e0:
  bVar23 = *(byte *)((long)param_2 + uVar1);
  uVar27 = (uint)bVar23;
  if (3 < bVar23) {
    uVar28 = 4;
    if (uVar29 < 4) {
      uVar28 = uVar29;
    }
    if ((int)uVar28 < 2) {
      if (uVar28 == 0) goto joined_r0x00010076d154;
      uVar27 = (uint)(byte)*param_2;
    }
    else if (uVar28 == 2) {
      uVar27 = (uint)(ushort)*param_2;
    }
    else if (uVar28 == 3) {
      uVar27 = (uint)(uint3)*param_2;
    }
    else {
      uVar27 = *param_2;
    }
    if (uVar29 < 4) {
      uVar27 = (uVar27 | bVar23 - 4 << (ulong)((uVar29 & 3) << 3)) + 4;
    }
    else {
      uVar27 = uVar27 + 4;
    }
  }
joined_r0x00010076d154:
  if ((int)uVar27 < 2) {
    if (uVar27 != 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + uVar1) = 1;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    (**(code **)(lVar24 + 0x10))(param_1,param_2,lVar8);
    uVar44 = (ulong)(uVar47 + (long)param_1) & uVar35;
    uVar35 = (ulong)(uVar47 + (long)param_2) & uVar35;
    (**(code **)(lVar31 + 0x10))(uVar44,uVar35,lVar10);
    uVar44 = uVar44 + lVar32 + uVar38;
    uVar35 = uVar35 + lVar32 + uVar38;
    uVar47 = uVar35 & uVar46;
    (**(code **)(lVar36 + 0x30))(uVar47,1,lVar9);
    if ((int)uVar47 != 0) {
      _memcpy((void *)(uVar44 & uVar46),(void *)(uVar35 & uVar46),sVar33);
      *(byte *)((long)param_1 + uVar1) = 0;
      return param_1;
    }
    (**(code **)(lVar36 + 0x10))(uVar44 & uVar46,uVar35 & uVar46,lVar9);
    (**(code **)(lVar36 + 0x38))(uVar44 & uVar46,0,1,lVar9);
    *(byte *)((long)param_1 + uVar1) = 0;
    return param_1;
  }
  if (uVar27 != 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar23 = 3;
    goto LAB_10076d520;
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar43 = (undefined8 *)((ulong)((long)param_1 + uVar41 + 8) & uVar51);
  puVar45 = (uint *)((ulong)((long)param_2 + uVar41 + 8) & uVar51);
  bVar23 = *(byte *)((long)puVar45 + uVar7);
  uVar27 = (uint)bVar23;
  if (1 < bVar23) {
    uVar29 = 4;
    if (uVar49 < 4) {
      uVar29 = uVar49;
    }
    if ((int)uVar29 < 2) {
      if (uVar29 == 0) goto LAB_10076d30c;
      uVar29 = (uint)(byte)*puVar45;
    }
    else if (uVar29 == 2) {
      uVar29 = (uint)(ushort)*puVar45;
    }
    else if (uVar29 == 3) {
      uVar29 = (uint)(uint3)*puVar45;
    }
    else {
      uVar29 = *puVar45;
    }
    uVar27 = uVar29 | bVar23 - 2 << (ulong)((uVar49 & 3) << 3);
    if (3 < uVar49) {
      uVar27 = uVar29;
    }
    uVar27 = uVar27 + 2;
  }
LAB_10076d30c:
  if (uVar27 == 1) {
    uVar40 = *(undefined8 *)puVar45;
    _swift_errorRetain(uVar40);
    *puVar43 = uVar40;
    uVar22 = 1;
  }
  else {
    if (uVar6 == 0) {
      if (*(byte *)((long)puVar45 + uVar4) != 0) {
        uVar27 = 0;
        if (uVar34 < 4) {
          uVar27 = *(byte *)((long)puVar45 + uVar4) - 1 << (ulong)((uVar34 & 3) << 3);
        }
        if (uVar34 == 0) {
          uVar30 = 0;
        }
        else {
          uVar30 = 4;
          if (uVar34 < 4) {
            uVar30 = uVar34;
          }
          if ((int)uVar30 < 3) {
            if (uVar30 == 1) {
              uVar30 = (uint)(byte)*puVar45;
            }
            else {
              uVar30 = (uint)(ushort)*puVar45;
            }
          }
          else if (uVar30 == 3) {
            uVar30 = (uint)(uint3)*puVar45;
          }
          else {
            uVar30 = *puVar45;
          }
        }
        iVar15 = (uVar30 | uVar27) + 1;
        goto LAB_10076d434;
      }
    }
    else {
      if (uVar30 == uVar6) {
        puVar20 = puVar45;
        (**(code **)(lVar50 + 0x30))(puVar45,uVar30,lVar16);
        iVar15 = (int)puVar20;
      }
      else {
        uVar47 = (ulong)(uVar2 + (long)puVar45) & uVar44;
        if (uVar11 == uVar6) {
          (**(code **)(lVar48 + 0x30))(uVar47,uVar11,lVar17);
          iVar15 = (int)uVar47;
        }
        else {
          uVar47 = lVar3 + uVar47 & uVar25;
          (**(code **)(lVar39 + 0x30))(uVar47,iVar15,lVar18);
          iVar15 = 0;
          if ((int)uVar47 != 0) {
            iVar15 = (int)uVar47 + -1;
          }
        }
      }
LAB_10076d434:
      if (iVar15 != 0) {
        _memcpy(puVar43,puVar45,uVar5);
        uVar22 = 0;
        goto LAB_10076d518;
      }
    }
    (**(code **)(lVar50 + 0x10))(puVar43,puVar45,lVar16);
    uVar47 = uVar2 + (long)puVar43 & uVar44;
    uVar44 = (ulong)(uVar2 + (long)puVar45) & uVar44;
    (**(code **)(lVar48 + 0x10))(uVar47,uVar44,lVar17);
    uVar47 = lVar3 + uVar47;
    uVar44 = lVar3 + uVar44;
    uVar35 = uVar44 & uVar25;
    (**(code **)(lVar39 + 0x30))(uVar35,1,lVar18);
    if ((int)uVar35 == 0) {
      (**(code **)(lVar39 + 0x10))(uVar47 & uVar25,uVar44 & uVar25,lVar18);
      (**(code **)(lVar39 + 0x38))(uVar47 & uVar25,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar47 & uVar25),(void *)(uVar44 & uVar25),sVar37);
    }
    if (uVar6 == 0) {
      *(undefined1 *)((long)puVar43 + uVar4) = 0;
      uVar22 = 0;
    }
    else {
      uVar22 = 0;
    }
  }
LAB_10076d518:
  *(undefined1 *)((long)puVar43 + uVar7) = uVar22;
  bVar23 = 2;
LAB_10076d520:
  *(byte *)((long)param_1 + uVar1) = bVar23;
  return param_1;
}



/* Address: 0x10076d548 | FUN_10076d548 */

undefined8 * FUN_10076d548(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  undefined1 uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  size_t sVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  size_t sVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  undefined8 *puVar38;
  ulong uVar39;
  uint *puVar40;
  long lVar41;
  ulong uVar42;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar20 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  lVar22 = *(long *)(lVar20 + -8);
  lVar24 = *(long *)(lVar9 + -8);
  uVar27 = (ulong)*(byte *)(lVar24 + 0x50);
  uVar42 = *(long *)(lVar22 + 0x40) + uVar27;
  lVar25 = *(long *)(lVar24 + 0x40);
  lVar28 = *(long *)(lVar10 + -8);
  uVar30 = (ulong)*(byte *)(lVar28 + 0x50);
  sVar26 = *(size_t *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar26 = sVar26 + 1;
  }
  uVar1 = sVar26 + (lVar25 + uVar30 + (uVar42 & (uVar27 ^ 0xffffffffffffffff)) &
                   (uVar30 ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar20,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar41 = *(long *)(lVar16 + -8);
  uVar33 = *(uint *)(lVar41 + 0x50);
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar9,puVar14,puVar13);
  lVar36 = *(long *)(lVar17 + -8);
  uVar23 = *(uint *)(lVar36 + 0x50);
  uVar39 = (ulong)uVar23 & 0xff;
  lVar18 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar10,puVar14,puVar13);
  lVar37 = *(long *)(lVar18 + -8);
  iVar15 = *(int *)(lVar37 + 0x54);
  uVar29 = (ulong)*(uint *)(lVar37 + 0x50) & 0xff;
  uVar31 = (ulong)((uVar23 | uVar33 | *(uint *)(lVar37 + 0x50)) & 0xf8 | 7);
  uVar23 = *(uint *)(lVar41 + 0x54);
  uVar11 = *(uint *)(lVar36 + 0x54);
  uVar33 = uVar11;
  if (uVar11 <= uVar23) {
    uVar33 = uVar23;
  }
  uVar7 = 0;
  if (iVar15 != 0) {
    uVar7 = iVar15 - 1;
  }
  if (uVar7 <= uVar33) {
    uVar7 = uVar33;
  }
  uVar2 = *(long *)(lVar41 + 0x40) + uVar39;
  lVar3 = *(long *)(lVar36 + 0x40) + uVar29;
  sVar34 = *(size_t *)(lVar37 + 0x40);
  if (iVar15 == 0) {
    sVar34 = sVar34 + 1;
  }
  uVar4 = (lVar3 + (uVar2 & (uVar39 ^ 0xffffffffffffffff)) & (uVar29 ^ 0xffffffffffffffff)) + sVar34
  ;
  uVar6 = uVar4;
  if (uVar7 == 0) {
    uVar6 = uVar4 + 1;
  }
  uVar8 = uVar6;
  if (uVar6 < 9) {
    uVar8 = 8;
  }
  lVar5 = uVar8 + (uVar31 + 8 & (uVar31 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar5 + 1U) {
    uVar1 = lVar5 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar12 = *(byte *)((long)param_2 + uVar1);
  uVar33 = (uint)bVar12;
  if (bVar12 < 4) {
    if (bVar12 < 2) goto LAB_10076d784;
  }
  else {
    uVar35 = (uint)uVar1;
    uVar32 = 4;
    if (uVar35 < 4) {
      uVar32 = uVar35;
    }
    if ((int)uVar32 < 2) {
      if (uVar32 != 0) {
        uVar33 = (uint)(byte)*param_2;
        goto joined_r0x00010076d768;
      }
    }
    else {
      if (uVar32 == 2) {
        uVar33 = (uint)(ushort)*param_2;
      }
      else if (uVar32 == 3) {
        uVar33 = (uint)(uint3)*param_2;
      }
      else {
        uVar33 = *param_2;
      }
joined_r0x00010076d768:
      if (uVar35 < 4) {
        uVar33 = (uVar33 | bVar12 - 4 << (ulong)((uVar35 & 3) << 3)) + 4;
      }
      else {
        uVar33 = uVar33 + 4;
      }
    }
    if ((int)uVar33 < 2) {
LAB_10076d784:
      if (uVar33 == 0) {
        uVar29 = ~uVar30;
        (**(code **)(lVar22 + 0x20))(param_1,param_2,lVar20);
        uVar39 = uVar42 + (long)param_1 & ~uVar27;
        uVar42 = (ulong)(uVar42 + (long)param_2) & ~uVar27;
        (**(code **)(lVar24 + 0x20))(uVar39,uVar42,lVar9);
        lVar25 = lVar25 + uVar30;
        uVar39 = uVar39 + lVar25;
        uVar42 = uVar42 + lVar25;
        uVar27 = uVar42 & uVar29;
        (**(code **)(lVar28 + 0x30))(uVar27,1,lVar10);
        if ((int)uVar27 == 0) {
          (**(code **)(lVar28 + 0x20))(uVar39 & uVar29,uVar42 & uVar29,lVar10);
          (**(code **)(lVar28 + 0x38))(uVar39 & uVar29,0,1,lVar10);
          uVar21 = 0;
        }
        else {
          _memcpy((void *)(uVar39 & uVar29),(void *)(uVar42 & uVar29),sVar26);
          uVar21 = 0;
        }
      }
      else {
        *param_1 = *(undefined8 *)param_2;
        uVar21 = 1;
      }
      goto LAB_10076db50;
    }
  }
  if (uVar33 != 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar21 = 3;
    goto LAB_10076db50;
  }
  *param_1 = *(undefined8 *)param_2;
  puVar38 = (undefined8 *)((long)param_1 + uVar31 + 8 & ~uVar31);
  puVar40 = (uint *)((ulong)((long)param_2 + uVar31 + 8) & ~uVar31);
  bVar12 = *(byte *)((long)puVar40 + uVar8);
  uVar33 = (uint)bVar12;
  if (1 < bVar12) {
    uVar35 = (uint)uVar8;
    uVar32 = 4;
    if (uVar35 < 4) {
      uVar32 = uVar35;
    }
    if ((int)uVar32 < 2) {
      if (uVar32 == 0) goto LAB_10076d934;
      uVar32 = (uint)(byte)*puVar40;
    }
    else if (uVar32 == 2) {
      uVar32 = (uint)(ushort)*puVar40;
    }
    else if (uVar32 == 3) {
      uVar32 = (uint)(uint3)*puVar40;
    }
    else {
      uVar32 = *puVar40;
    }
    uVar33 = uVar32 | bVar12 - 2 << (ulong)((uVar35 & 3) << 3);
    if (3 < uVar35) {
      uVar33 = uVar32;
    }
    uVar33 = uVar33 + 2;
  }
LAB_10076d934:
  if (uVar33 == 1) {
    *puVar38 = *(undefined8 *)puVar40;
    uVar21 = 1;
  }
  else {
    uVar39 = ~uVar39;
    uVar29 = ~uVar29;
    if (uVar7 == 0) {
      if (*(byte *)((long)puVar40 + uVar4) != 0) {
        uVar23 = (uint)uVar4;
        uVar33 = 0;
        if (uVar23 < 4) {
          uVar33 = *(byte *)((long)puVar40 + uVar4) - 1 << (ulong)((uVar23 & 3) << 3);
        }
        if (uVar23 == 0) {
          uVar23 = 0;
        }
        else {
          uVar11 = 4;
          if (uVar23 < 4) {
            uVar11 = uVar23;
          }
          if ((int)uVar11 < 3) {
            if (uVar11 == 1) {
              uVar23 = (uint)(byte)*puVar40;
            }
            else {
              uVar23 = (uint)(ushort)*puVar40;
            }
          }
          else if (uVar11 == 3) {
            uVar23 = (uint)(uint3)*puVar40;
          }
          else {
            uVar23 = *puVar40;
          }
        }
        if ((uVar23 | uVar33) != 0xffffffff) goto LAB_10076da30;
      }
    }
    else {
      if (uVar23 == uVar7) {
        puVar19 = puVar40;
        (**(code **)(lVar41 + 0x30))(puVar40,uVar23,lVar16);
        iVar15 = (int)puVar19;
      }
      else {
        uVar42 = (ulong)(uVar2 + (long)puVar40) & uVar39;
        if (uVar11 == uVar7) {
          (**(code **)(lVar36 + 0x30))(uVar42,uVar11,lVar17);
          iVar15 = (int)uVar42;
        }
        else {
          uVar42 = lVar3 + uVar42 & uVar29;
          (**(code **)(lVar37 + 0x30))(uVar42,iVar15,lVar18);
          iVar15 = 0;
          if ((int)uVar42 != 0) {
            iVar15 = (int)uVar42 + -1;
          }
        }
      }
      if (iVar15 != 0) {
LAB_10076da30:
        _memcpy(puVar38,puVar40,uVar6);
        uVar21 = 0;
        goto LAB_10076db48;
      }
    }
    (**(code **)(lVar41 + 0x20))(puVar38,puVar40,lVar16);
    uVar42 = uVar2 + (long)puVar38 & uVar39;
    uVar39 = (ulong)(uVar2 + (long)puVar40) & uVar39;
    (**(code **)(lVar36 + 0x20))(uVar42,uVar39,lVar17);
    uVar42 = lVar3 + uVar42;
    uVar39 = lVar3 + uVar39;
    uVar27 = uVar39 & uVar29;
    (**(code **)(lVar37 + 0x30))(uVar27,1,lVar18);
    if ((int)uVar27 == 0) {
      (**(code **)(lVar37 + 0x20))(uVar42 & uVar29,uVar39 & uVar29,lVar18);
      (**(code **)(lVar37 + 0x38))(uVar42 & uVar29,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar42 & uVar29),(void *)(uVar39 & uVar29),sVar34);
    }
    if (uVar7 == 0) {
      *(undefined1 *)((long)puVar38 + uVar4) = 0;
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
    }
  }
LAB_10076db48:
  *(undefined1 *)((long)puVar38 + uVar8) = uVar21;
  uVar21 = 2;
LAB_10076db50:
  *(undefined1 *)((long)param_1 + uVar1) = uVar21;
  return param_1;
}



/* Address: 0x10076db78 | FUN_10076db78 */

uint * FUN_10076db78(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  undefined1 uVar22;
  byte bVar23;
  long lVar24;
  ulong uVar25;
  code *pcVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  size_t sVar33;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  size_t sVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  ulong uVar43;
  uint *puVar44;
  ulong uVar45;
  ulong uVar46;
  long lVar47;
  uint uVar48;
  long lVar49;
  ulong uVar50;
  
  puVar13 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar12 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(param_3 + 0x18);
  lVar24 = *(long *)(lVar8 + -8);
  lVar31 = *(long *)(lVar10 + -8);
  uVar35 = (ulong)*(byte *)(lVar31 + 0x50);
  uVar46 = *(long *)(lVar24 + 0x40) + uVar35;
  lVar32 = *(long *)(lVar31 + 0x40);
  lVar9 = *(long *)(param_3 + 0x20);
  lVar36 = *(long *)(lVar9 + -8);
  uVar38 = (ulong)*(byte *)(lVar36 + 0x50);
  sVar33 = *(size_t *)(lVar36 + 0x40);
  if (*(int *)(lVar36 + 0x54) == 0) {
    sVar33 = sVar33 + 1;
  }
  uVar1 = sVar33 + (lVar32 + uVar38 + (uVar46 & (uVar35 ^ 0xffffffffffffffff)) &
                   (uVar38 ^ 0xffffffffffffffff));
  lVar16 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar49 = *(long *)(lVar16 + -8);
  uVar27 = *(uint *)(lVar49 + 0x50);
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar10,puVar13,puVar12);
  lVar47 = *(long *)(lVar17 + -8);
  uVar30 = *(uint *)(lVar47 + 0x50);
  uVar43 = (ulong)uVar30 & 0xff;
  lVar18 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar9,puVar13,puVar12);
  lVar39 = *(long *)(lVar18 + -8);
  iVar15 = *(int *)(lVar39 + 0x54);
  uVar25 = (ulong)*(uint *)(lVar39 + 0x50) & 0xff;
  uVar40 = (ulong)((uVar30 | uVar27 | *(uint *)(lVar39 + 0x50)) & 0xf8 | 7);
  uVar30 = *(uint *)(lVar49 + 0x54);
  uVar11 = *(uint *)(lVar47 + 0x54);
  uVar27 = uVar11;
  if (uVar11 <= uVar30) {
    uVar27 = uVar30;
  }
  uVar6 = 0;
  if (iVar15 != 0) {
    uVar6 = iVar15 - 1;
  }
  if (uVar6 <= uVar27) {
    uVar6 = uVar27;
  }
  uVar2 = *(long *)(lVar49 + 0x40) + uVar43;
  lVar3 = *(long *)(lVar47 + 0x40) + uVar25;
  sVar37 = *(size_t *)(lVar39 + 0x40);
  if (iVar15 == 0) {
    sVar37 = sVar37 + 1;
  }
  uVar4 = (lVar3 + (uVar2 & (uVar43 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff)) + sVar37
  ;
  uVar5 = uVar4;
  if (uVar6 == 0) {
    uVar5 = uVar4 + 1;
  }
  uVar7 = uVar5;
  if (uVar5 < 9) {
    uVar7 = 8;
  }
  lVar21 = uVar7 + (uVar40 + 8 & (uVar40 ^ 0xffffffffffffffff));
  if (uVar1 <= lVar21 + 1U) {
    uVar1 = lVar21 + 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar23 = *(byte *)((long)param_1 + uVar1);
  uVar27 = (uint)bVar23;
  uVar29 = (uint)uVar1;
  if (3 < bVar23) {
    uVar34 = 4;
    if (uVar29 < 4) {
      uVar34 = uVar29;
    }
    if ((int)uVar34 < 2) {
      if (uVar34 == 0) goto LAB_10076ddec;
      uVar27 = (uint)(byte)*param_1;
    }
    else if (uVar34 == 2) {
      uVar27 = (uint)(ushort)*param_1;
    }
    else if (uVar34 == 3) {
      uVar27 = (uint)(uint3)*param_1;
    }
    else {
      uVar27 = *param_1;
    }
    if (uVar29 < 4) {
      uVar27 = uVar27 | bVar23 - 4 << (ulong)((uVar29 & 3) << 3);
    }
    uVar27 = uVar27 + 4;
  }
LAB_10076ddec:
  uVar35 = ~uVar35;
  uVar45 = ~uVar38;
  uVar50 = ~uVar40;
  uVar43 = ~uVar43;
  uVar25 = ~uVar25;
  uVar48 = (uint)uVar7;
  uVar34 = (uint)uVar4;
  if ((int)uVar27 < 2) {
    if (uVar27 == 0) {
      (**(code **)(lVar24 + 8))(param_1,lVar8);
      uVar41 = (ulong)(uVar46 + (long)param_1) & uVar35;
      (**(code **)(lVar31 + 8))(uVar41,lVar10);
      uVar41 = uVar41 + lVar32 + uVar38;
      uVar19 = uVar41 & uVar45;
      (**(code **)(lVar36 + 0x30))(uVar19,1,lVar9);
      if ((int)uVar19 == 0) {
        pcVar26 = *(code **)(lVar36 + 8);
        uVar41 = uVar41 & uVar45;
        lVar21 = lVar9;
LAB_10076de80:
        (*pcVar26)(uVar41,lVar21);
      }
    }
    else {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
  }
  else if (uVar27 == 2) {
    puVar44 = (uint *)((ulong)((long)param_1 + uVar40 + 8) & uVar50);
    bVar23 = *(byte *)((long)puVar44 + uVar7);
    uVar27 = (uint)bVar23;
    if (1 < bVar23) {
      uVar28 = 4;
      if (uVar48 < 4) {
        uVar28 = uVar48;
      }
      if ((int)uVar28 < 2) {
        if (uVar28 == 0) goto LAB_10076df1c;
        uVar28 = (uint)(byte)*puVar44;
      }
      else if (uVar28 == 2) {
        uVar28 = (uint)(ushort)*puVar44;
      }
      else if (uVar28 == 3) {
        uVar28 = (uint)(uint3)*puVar44;
      }
      else {
        uVar28 = *puVar44;
      }
      uVar27 = uVar28 | bVar23 - 2 << (ulong)((uVar48 & 3) << 3);
      if (3 < uVar48) {
        uVar27 = uVar28;
      }
      uVar27 = uVar27 + 2;
    }
LAB_10076df1c:
    if (uVar27 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar44);
    }
    else {
      if (uVar6 == 0) {
        if (*(byte *)((long)puVar44 + uVar4) != 0) {
          uVar27 = 0;
          if (uVar34 < 4) {
            uVar27 = *(byte *)((long)puVar44 + uVar4) - 1 << (ulong)((uVar34 & 3) << 3);
          }
          if (uVar34 == 0) {
            uVar28 = 0;
          }
          else {
            uVar28 = 4;
            if (uVar34 < 4) {
              uVar28 = uVar34;
            }
            if ((int)uVar28 < 3) {
              if (uVar28 == 1) {
                uVar28 = (uint)(byte)*puVar44;
              }
              else {
                uVar28 = (uint)(ushort)*puVar44;
              }
            }
            else if (uVar28 == 3) {
              uVar28 = (uint)(uint3)*puVar44;
            }
            else {
              uVar28 = *puVar44;
            }
          }
          iVar14 = (uVar28 | uVar27) + 1;
          goto LAB_10076e028;
        }
      }
      else {
        if (uVar30 == uVar6) {
          puVar20 = puVar44;
          (**(code **)(lVar49 + 0x30))(puVar44,uVar30,lVar16);
          iVar14 = (int)puVar20;
        }
        else {
          uVar41 = (ulong)(uVar2 + (long)puVar44) & uVar43;
          if (uVar11 == uVar6) {
            (**(code **)(lVar47 + 0x30))(uVar41,uVar11,lVar17);
            iVar14 = (int)uVar41;
          }
          else {
            uVar41 = lVar3 + uVar41 & uVar25;
            (**(code **)(lVar39 + 0x30))(uVar41,iVar15,lVar18);
            iVar14 = 0;
            if ((int)uVar41 != 0) {
              iVar14 = (int)uVar41 + -1;
            }
          }
        }
LAB_10076e028:
        if (iVar14 != 0) goto LAB_10076e07c;
      }
      (**(code **)(lVar49 + 8))(puVar44,lVar16);
      uVar41 = (ulong)(uVar2 + (long)puVar44) & uVar43;
      (**(code **)(lVar47 + 8))(uVar41,lVar17);
      uVar41 = lVar3 + uVar41;
      uVar19 = uVar41 & uVar25;
      (**(code **)(lVar39 + 0x30))(uVar19,1,lVar18);
      if ((int)uVar19 == 0) {
        pcVar26 = *(code **)(lVar39 + 8);
        uVar41 = uVar41 & uVar25;
        lVar21 = lVar18;
        goto LAB_10076de80;
      }
    }
  }
LAB_10076e07c:
  bVar23 = *(byte *)((long)param_2 + uVar1);
  uVar27 = (uint)bVar23;
  if (3 < bVar23) {
    uVar28 = 4;
    if (uVar29 < 4) {
      uVar28 = uVar29;
    }
    if ((int)uVar28 < 2) {
      if (uVar28 == 0) goto joined_r0x00010076e0f0;
      uVar27 = (uint)(byte)*param_2;
    }
    else if (uVar28 == 2) {
      uVar27 = (uint)(ushort)*param_2;
    }
    else if (uVar28 == 3) {
      uVar27 = (uint)(uint3)*param_2;
    }
    else {
      uVar27 = *param_2;
    }
    if (uVar29 < 4) {
      uVar27 = (uVar27 | bVar23 - 4 << (ulong)((uVar29 & 3) << 3)) + 4;
    }
    else {
      uVar27 = uVar27 + 4;
    }
  }
joined_r0x00010076e0f0:
  if ((int)uVar27 < 2) {
    if (uVar27 == 0) {
      (**(code **)(lVar24 + 0x20))(param_1,param_2,lVar8);
      uVar43 = (ulong)(uVar46 + (long)param_1) & uVar35;
      uVar35 = (ulong)(uVar46 + (long)param_2) & uVar35;
      (**(code **)(lVar31 + 0x20))(uVar43,uVar35,lVar10);
      uVar43 = uVar43 + lVar32 + uVar38;
      uVar35 = uVar35 + lVar32 + uVar38;
      uVar46 = uVar35 & uVar45;
      (**(code **)(lVar36 + 0x30))(uVar46,1,lVar9);
      if ((int)uVar46 == 0) {
        (**(code **)(lVar36 + 0x20))(uVar43 & uVar45,uVar35 & uVar45,lVar9);
        (**(code **)(lVar36 + 0x38))(uVar43 & uVar45,0,1,lVar9);
        bVar23 = 0;
      }
      else {
        _memcpy((void *)(uVar43 & uVar45),(void *)(uVar35 & uVar45),sVar33);
        bVar23 = 0;
      }
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      bVar23 = 1;
    }
    goto LAB_10076e4ac;
  }
  if (uVar27 != 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar23 = 3;
    goto LAB_10076e4ac;
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  puVar42 = (undefined8 *)((ulong)((long)param_1 + uVar40 + 8) & uVar50);
  puVar44 = (uint *)((ulong)((long)param_2 + uVar40 + 8) & uVar50);
  bVar23 = *(byte *)((long)puVar44 + uVar7);
  uVar27 = (uint)bVar23;
  if (1 < bVar23) {
    uVar29 = 4;
    if (uVar48 < 4) {
      uVar29 = uVar48;
    }
    if ((int)uVar29 < 2) {
      if (uVar29 == 0) goto LAB_10076e2a0;
      uVar29 = (uint)(byte)*puVar44;
    }
    else if (uVar29 == 2) {
      uVar29 = (uint)(ushort)*puVar44;
    }
    else if (uVar29 == 3) {
      uVar29 = (uint)(uint3)*puVar44;
    }
    else {
      uVar29 = *puVar44;
    }
    uVar27 = uVar29 | bVar23 - 2 << (ulong)((uVar48 & 3) << 3);
    if (3 < uVar48) {
      uVar27 = uVar29;
    }
    uVar27 = uVar27 + 2;
  }
LAB_10076e2a0:
  if (uVar27 == 1) {
    *puVar42 = *(undefined8 *)puVar44;
    uVar22 = 1;
  }
  else {
    if (uVar6 == 0) {
      if (*(byte *)((long)puVar44 + uVar4) != 0) {
        uVar27 = 0;
        if (uVar34 < 4) {
          uVar27 = *(byte *)((long)puVar44 + uVar4) - 1 << (ulong)((uVar34 & 3) << 3);
        }
        if (uVar34 == 0) {
          uVar30 = 0;
        }
        else {
          uVar30 = 4;
          if (uVar34 < 4) {
            uVar30 = uVar34;
          }
          if ((int)uVar30 < 3) {
            if (uVar30 == 1) {
              uVar30 = (uint)(byte)*puVar44;
            }
            else {
              uVar30 = (uint)(ushort)*puVar44;
            }
          }
          else if (uVar30 == 3) {
            uVar30 = (uint)(uint3)*puVar44;
          }
          else {
            uVar30 = *puVar44;
          }
        }
        iVar15 = (uVar30 | uVar27) + 1;
        goto LAB_10076e3c0;
      }
    }
    else {
      if (uVar30 == uVar6) {
        puVar20 = puVar44;
        (**(code **)(lVar49 + 0x30))(puVar44,uVar30,lVar16);
        iVar15 = (int)puVar20;
      }
      else {
        uVar46 = (ulong)(uVar2 + (long)puVar44) & uVar43;
        if (uVar11 == uVar6) {
          (**(code **)(lVar47 + 0x30))(uVar46,uVar11,lVar17);
          iVar15 = (int)uVar46;
        }
        else {
          uVar46 = lVar3 + uVar46 & uVar25;
          (**(code **)(lVar39 + 0x30))(uVar46,iVar15,lVar18);
          iVar15 = 0;
          if ((int)uVar46 != 0) {
            iVar15 = (int)uVar46 + -1;
          }
        }
      }
LAB_10076e3c0:
      if (iVar15 != 0) {
        _memcpy(puVar42,puVar44,uVar5);
        uVar22 = 0;
        goto LAB_10076e4a4;
      }
    }
    (**(code **)(lVar49 + 0x20))(puVar42,puVar44,lVar16);
    uVar46 = uVar2 + (long)puVar42 & uVar43;
    uVar43 = (ulong)(uVar2 + (long)puVar44) & uVar43;
    (**(code **)(lVar47 + 0x20))(uVar46,uVar43,lVar17);
    uVar46 = lVar3 + uVar46;
    uVar43 = lVar3 + uVar43;
    uVar35 = uVar43 & uVar25;
    (**(code **)(lVar39 + 0x30))(uVar35,1,lVar18);
    if ((int)uVar35 == 0) {
      (**(code **)(lVar39 + 0x20))(uVar46 & uVar25,uVar43 & uVar25,lVar18);
      (**(code **)(lVar39 + 0x38))(uVar46 & uVar25,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar46 & uVar25),(void *)(uVar43 & uVar25),sVar37);
    }
    if (uVar6 == 0) {
      *(undefined1 *)((long)puVar42 + uVar4) = 0;
      uVar22 = 0;
    }
    else {
      uVar22 = 0;
    }
  }
LAB_10076e4a4:
  *(undefined1 *)((long)puVar42 + uVar7) = uVar22;
  bVar23 = 2;
LAB_10076e4ac:
  *(byte *)((long)param_1 + uVar1) = bVar23;
  return param_1;
}



/* Address: 0x10076e4d4 | FUN_10076e4d4 */

int FUN_10076e4d4(uint *param_1,uint param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar10 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(param_3 + 0x20);
  lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  lVar14 = *(long *)(lVar10 + -8);
  uVar16 = (ulong)*(byte *)(lVar14 + 0x50);
  lVar15 = *(long *)(lVar14 + 0x40);
  lVar14 = *(long *)(lVar13 + -8);
  bVar4 = *(byte *)(lVar14 + 0x50);
  iVar8 = *(int *)(lVar14 + 0x54);
  lVar14 = *(long *)(lVar14 + 0x40);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar21 = *(long *)(lVar9 + -8);
  uVar11 = *(uint *)(lVar21 + 0x50);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar10,puVar7,puVar6);
  lVar9 = *(long *)(lVar9 + -8);
  uVar18 = *(uint *)(lVar9 + 0x50);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar13,puVar7,puVar6);
  lVar10 = *(long *)(lVar10 + -8);
  uVar5 = *(uint *)(lVar9 + 0x54);
  if (*(uint *)(lVar9 + 0x54) <= *(uint *)(lVar21 + 0x54)) {
    uVar5 = *(uint *)(lVar21 + 0x54);
  }
  iVar3 = *(int *)(lVar10 + 0x54);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar3 + -1;
  }
  lVar13 = *(long *)(lVar10 + 0x40);
  if (iVar3 == 0) {
    lVar13 = lVar13 + 1;
  }
  uVar17 = (ulong)uVar18 & 0xff;
  uVar20 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  uVar19 = (ulong)((uVar18 | uVar11 | *(uint *)(lVar10 + 0x50)) & 0xf8 | 7);
  if (iVar8 == 0) {
    lVar14 = lVar14 + 1;
  }
  if (iVar1 == 0 && uVar5 == 0) {
    lVar13 = lVar13 + 1;
  }
  uVar17 = lVar13 + (*(long *)(lVar9 + 0x40) + uVar20 +
                     (*(long *)(lVar21 + 0x40) + uVar17 & (uVar17 ^ 0xffffffffffffffff)) &
                    (uVar20 ^ 0xffffffffffffffff));
  if (uVar17 < 9) {
    uVar17 = 8;
  }
  lVar10 = uVar17 + (uVar19 + 8 & (uVar19 ^ 0xffffffffffffffff));
  uVar16 = lVar14 + ((lVar12 + uVar16 & (uVar16 ^ 0xffffffffffffffff)) + lVar15 + (ulong)bVar4 &
                    ((ulong)bVar4 ^ 0xffffffffffffffff));
  if (uVar16 <= lVar10 + 1U) {
    uVar16 = lVar10 + 1;
  }
  if (uVar16 < 9) {
    uVar16 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_10076e6ec;
  uVar17 = uVar16 + 1;
  uVar11 = (uint)uVar17;
  uVar5 = uVar11 << 3;
  if (uVar11 < 4) {
    uVar18 = ((param_2 + ~(-1 << (ulong)(uVar5 & 0x1f))) - 0xfc >> (ulong)(uVar5 & 0x1f)) + 1;
    if (uVar18 < 0x100) {
      if (uVar18 < 2) goto LAB_10076e6ec;
      goto LAB_10076e678;
    }
    if (uVar18 >> 0x10 == 0) {
      uVar18 = (uint)*(ushort *)((long)param_1 + uVar17);
    }
    else {
      uVar18 = *(uint *)((long)param_1 + uVar17);
    }
  }
  else {
LAB_10076e678:
    uVar18 = (uint)*(byte *)((long)param_1 + uVar17);
  }
  if (uVar18 != 0) {
    uVar2 = 0;
    if (uVar11 < 4) {
      uVar2 = uVar18 - 1 << (ulong)(uVar5 & 0x1f);
    }
    if (uVar11 != 0) {
      uVar5 = 4;
      if (uVar11 < 4) {
        uVar5 = uVar11;
      }
      if ((int)uVar5 < 3) {
        if (uVar5 == 1) {
          uVar17 = (ulong)(byte)*param_1;
        }
        else {
          uVar17 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar5 == 3) {
        uVar17 = (ulong)(uint3)*param_1;
      }
      else {
        uVar17 = (ulong)*param_1;
      }
    }
    return ((uint)uVar17 | uVar2) + 0xfd;
  }
LAB_10076e6ec:
  iVar8 = 0;
  if (3 < *(byte *)((long)param_1 + uVar16)) {
    iVar8 = (*(byte *)((long)param_1 + uVar16) ^ 0xff) + 1;
  }
  return iVar8;
}



/* Address: 0x10076e764 | FUN_10076e764 */

void FUN_10076e764(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  byte bVar23;
  
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar8 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar11 = *(long *)(param_4 + 0x18);
  lVar12 = *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  lVar14 = *(long *)(lVar11 + -8);
  uVar16 = (ulong)*(byte *)(lVar14 + 0x50);
  lVar15 = *(long *)(lVar14 + 0x40);
  lVar13 = *(long *)(param_4 + 0x20);
  lVar14 = *(long *)(lVar13 + -8);
  bVar6 = *(byte *)(lVar14 + 0x50);
  iVar20 = *(int *)(lVar14 + 0x54);
  lVar14 = *(long *)(lVar14 + 0x40);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(long *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar21 = *(long *)(lVar10 + -8);
  uVar4 = *(uint *)(lVar21 + 0x50);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x30),lVar11,puVar9,puVar8);
  lVar10 = *(long *)(lVar10 + -8);
  uVar5 = *(uint *)(lVar10 + 0x50);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_4 + 0x38),lVar13,puVar9,puVar8);
  bVar23 = 0;
  lVar13 = *(long *)(lVar11 + -8);
  uVar22 = *(uint *)(lVar10 + 0x54);
  if (*(uint *)(lVar10 + 0x54) <= *(uint *)(lVar21 + 0x54)) {
    uVar22 = *(uint *)(lVar21 + 0x54);
  }
  iVar3 = *(int *)(lVar13 + 0x54);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar3 + -1;
  }
  lVar11 = *(long *)(lVar13 + 0x40);
  if (iVar3 == 0) {
    lVar11 = lVar11 + 1;
  }
  uVar17 = (ulong)((uVar5 | uVar4 | *(uint *)(lVar13 + 0x50)) & 0xf8 | 7);
  uVar19 = (ulong)uVar5 & 0xff;
  uVar18 = (ulong)*(uint *)(lVar13 + 0x50) & 0xff;
  if (iVar20 == 0) {
    lVar14 = lVar14 + 1;
  }
  if (iVar2 == 0 && uVar22 == 0) {
    lVar11 = lVar11 + 1;
  }
  uVar18 = lVar11 + (*(long *)(lVar10 + 0x40) + uVar18 +
                     (*(long *)(lVar21 + 0x40) + uVar19 & (uVar19 ^ 0xffffffffffffffff)) &
                    (uVar18 ^ 0xffffffffffffffff));
  if (uVar18 < 9) {
    uVar18 = 8;
  }
  lVar13 = uVar18 + (uVar17 + 8 & (uVar17 ^ 0xffffffffffffffff));
  uVar16 = lVar14 + ((lVar12 + uVar16 & (uVar16 ^ 0xffffffffffffffff)) + lVar15 + (ulong)bVar6 &
                    ((ulong)bVar6 ^ 0xffffffffffffffff));
  if (uVar16 <= lVar13 + 1U) {
    uVar16 = lVar13 + 1;
  }
  if (uVar16 < 9) {
    uVar16 = 8;
  }
  sVar1 = uVar16 + 1;
  uVar22 = (uint)sVar1;
  if (0xfc < param_3) {
    if (uVar22 < 4) {
      uVar4 = ((param_3 + ~(-1 << (ulong)(uVar22 << 3 & 0x1f))) - 0xfc >>
              (ulong)(uVar22 << 3 & 0x1f)) + 1;
      bVar23 = 2;
      if (0xffff < uVar4) {
        bVar23 = 4;
      }
      if (uVar4 < 0x100) {
        bVar23 = 1 < uVar4;
      }
    }
    else {
      bVar23 = 1;
    }
  }
  if (param_2 < 0xfd) {
    if (bVar23 < 2) {
      if (bVar23 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar23 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar16) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
    if (uVar22 < 4) {
      iVar20 = (param_2 >> (ulong)(uVar22 << 3 & 0x1f)) + 1;
      if (uVar22 != 0) {
        uVar4 = param_2 & (-1 << (ulong)(uVar22 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar7 = (undefined2)uVar4;
        if (uVar22 == 3) {
          *(undefined2 *)param_1 = uVar7;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar22 == 2) {
          *(undefined2 *)param_1 = uVar7;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar20 = 1;
    }
    if (bVar23 < 2) {
      if (bVar23 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar20;
      }
    }
    else if (bVar23 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar20;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar20;
    }
  }
  return;
}



/* Address: 0x10076ea78 | FUN_10076ea78 */

uint FUN_10076ea78(uint *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar6 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar16 = *(long *)(param_2 + 0x18);
  lVar10 = *(long *)(lVar16 + -8);
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar3 = *(long *)(param_2 + 0x20);
  lVar13 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    lVar14 = lVar14 + 1;
  }
  uVar12 = lVar14 + ((*(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40) + uVar12 &
                     (uVar12 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar10 + 0x40) + (ulong)*(byte *)(lVar13 + 0x50) &
                    ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(long *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar10 = *(long *)(lVar14 + -8);
  uVar8 = *(uint *)(lVar10 + 0x50);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x30),lVar16,puVar7,puVar6);
  lVar16 = *(long *)(lVar14 + -8);
  uVar4 = *(uint *)(lVar16 + 0x50);
  uVar17 = (ulong)uVar4 & 0xff;
  lVar14 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x38),lVar3,puVar7,puVar6);
  lVar14 = *(long *)(lVar14 + -8);
  iVar2 = *(int *)(lVar14 + 0x54);
  uVar15 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  uVar11 = (ulong)((uVar4 | uVar8 | *(uint *)(lVar14 + 0x50)) & 0xf8 | 7);
  uVar8 = *(uint *)(lVar16 + 0x54);
  if (*(uint *)(lVar16 + 0x54) <= *(uint *)(lVar10 + 0x54)) {
    uVar8 = *(uint *)(lVar10 + 0x54);
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + -1;
  }
  lVar14 = *(long *)(lVar14 + 0x40);
  if (iVar2 == 0) {
    lVar14 = lVar14 + 1;
  }
  if (iVar1 == 0 && uVar8 == 0) {
    lVar14 = lVar14 + 1;
  }
  uVar15 = lVar14 + (*(long *)(lVar16 + 0x40) + uVar15 +
                     (*(long *)(lVar10 + 0x40) + uVar17 & (uVar17 ^ 0xffffffffffffffff)) &
                    (uVar15 ^ 0xffffffffffffffff));
  if (uVar15 < 9) {
    uVar15 = 8;
  }
  lVar14 = uVar15 + (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff));
  if (uVar12 <= lVar14 + 1U) {
    uVar12 = lVar14 + 1;
  }
  if (uVar12 < 9) {
    uVar12 = 8;
  }
  bVar5 = *(byte *)((long)param_1 + uVar12);
  uVar8 = (uint)bVar5;
  if (3 < bVar5) {
    uVar9 = (uint)uVar12;
    uVar4 = 4;
    if (uVar9 < 4) {
      uVar4 = uVar9;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) {
        return uVar8;
      }
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    if (uVar9 < 4) {
      uVar8 = (uVar8 | bVar5 - 4 << (ulong)((uVar9 & 3) << 3)) + 4;
    }
    else {
      uVar8 = uVar8 + 4;
    }
  }
  return uVar8;
}



/* Address: 0x10076ec8c | FUN_10076ec8c */

void FUN_10076ec8c(uint *param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar15 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(lVar15 + -8);
  uVar10 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar11 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar10 = lVar12 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar10 &
                     (uVar10 ^ 0xffffffffffffffff)) +
                     *(long *)(lVar8 + 0x40) + (ulong)*(byte *)(lVar11 + 0x50) &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(long *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar12 + -8);
  uVar7 = *(uint *)(lVar8 + 0x50);
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x30),lVar15,puVar6,puVar5);
  lVar15 = *(long *)(lVar12 + -8);
  uVar4 = *(uint *)(lVar15 + 0x50);
  uVar14 = (ulong)uVar4 & 0xff;
  lVar12 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_3 + 0x38),lVar3,puVar6,puVar5);
  lVar12 = *(long *)(lVar12 + -8);
  iVar2 = *(int *)(lVar12 + 0x54);
  uVar13 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  uVar9 = (ulong)((uVar4 | uVar7 | *(uint *)(lVar12 + 0x50)) & 0xf8 | 7);
  uVar7 = *(uint *)(lVar15 + 0x54);
  if (*(uint *)(lVar15 + 0x54) <= *(uint *)(lVar8 + 0x54)) {
    uVar7 = *(uint *)(lVar8 + 0x54);
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + -1;
  }
  lVar12 = *(long *)(lVar12 + 0x40);
  if (iVar2 == 0) {
    lVar12 = lVar12 + 1;
  }
  if (iVar1 == 0 && uVar7 == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar13 = lVar12 + (*(long *)(lVar15 + 0x40) + uVar13 +
                     (*(long *)(lVar8 + 0x40) + uVar14 & (uVar14 ^ 0xffffffffffffffff)) &
                    (uVar13 ^ 0xffffffffffffffff));
  if (uVar13 < 9) {
    uVar13 = 8;
  }
  lVar12 = uVar13 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff));
  if (uVar10 <= lVar12 + 1U) {
    uVar10 = lVar12 + 1;
  }
  if (uVar10 < 9) {
    uVar10 = 8;
  }
  if (param_2 < 4) {
    *(char *)((long)param_1 + uVar10) = (char)param_2;
  }
  else {
    param_2 = param_2 - 4;
    uVar7 = (uint)uVar10;
    if (uVar7 < 4) {
      *(char *)((long)param_1 + uVar10) = (char)(param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + '\x04';
      if (uVar7 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar10) = 4;
    }
    if (3 < uVar7) {
      uVar7 = 4;
    }
    _bzero(param_1,uVar10);
    if ((int)uVar7 < 3) {
      if (uVar7 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar7 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x10076eec4 | FUN_10076eec4 */

void FUN_10076eec4(void)

{
  FUN_10076ef40();
  return;
}



/* Address: 0x10076eed0 | FUN_10076eed0 */

void FUN_10076eed0(ulong param_1,ulong param_2,ulong param_3)

{
  if (0x7fffffffffffffff < param_1) {
    param_3 = param_2;
    param_2 = param_1 & 0x7fffffffffffffff;
  }
  _swift_retain(param_2);
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x10076ef00 | FUN_10076ef00 */

void FUN_10076ef00(undefined8 *param_1)

{
  FUN_10076ef10(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x10076ef10 | FUN_10076ef10 */

void FUN_10076ef10(ulong param_1,ulong param_2,ulong param_3)

{
  if (0x7fffffffffffffff < param_1) {
    param_3 = param_2;
    param_2 = param_1 & 0x7fffffffffffffff;
  }
  _swift_release(param_2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x10076ef40 | FUN_10076ef40 */

undefined8 * FUN_10076ef40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  (*param_4)(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Address: 0x10076ef88 | FUN_10076ef88 */

void FUN_10076ef88(void)

{
  FUN_10076ef9c();
  return;
}



/* Address: 0x10076ef9c | FUN_10076ef9c */

undefined8 *
FUN_10076ef9c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  (*param_4)(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  (*param_5)(uVar2,uVar4,uVar5);
  return param_1;
}



/* Address: 0x10076effc | FUN_10076effc */

void FUN_10076effc(void)

{
  FUN_10076f008();
  return;
}



/* Address: 0x10076f008 | FUN_10076f008 */

undefined8 * FUN_10076f008(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  (*param_4)(uVar3,uVar1,uVar2);
  return param_1;
}



/* Address: 0x10076f048 | thunk_FUN_10076f04c */

int thunk_FUN_10076f04c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)param_1 & 7) << 1) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10076f04c | FUN_10076f04c */

int FUN_10076f04c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)param_1 & 7) << 1) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10076f0a8 | thunk_FUN_10076f0ac */

void thunk_FUN_10076f0ac(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7f) {
    if (0x7e < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 1 & 0x3f | (-param_2 & 0x7f) << 6);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0x7f);
    if (0x7e < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x10076f0ac | FUN_10076f0ac */

void FUN_10076f0ac(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7f) {
    if (0x7e < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 1 & 0x3f | (-param_2 & 0x7f) << 6);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0x7f);
    if (0x7e < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x10076f104 | FUN_10076f104 */

void FUN_10076f104(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf0c8);
  return;
}



/* Address: 0x10076f110 | thunk_FUN_10076f13c */

void thunk_FUN_10076f13c(void)

{
  FUN_10076f13c();
  return;
}



/* Address: 0x10076f114 | FUN_10076f114 */

void FUN_10076f114(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  return;
}



/* Address: 0x10076f13c | FUN_10076f13c */

undefined8 * FUN_10076f13c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x10076f178 | FUN_10076f178 */

undefined8 * FUN_10076f178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10076f1d4 | FUN_10076f1d4 */

undefined8 * FUN_10076f1d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10076f210 | FUN_10076f210 */

void FUN_10076f210(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbf11c);
  return;
}



/* Address: 0x10076f21c | thunk_FUN_10063ac88 */

void thunk_FUN_10063ac88(ulong *param_1,long param_2)

{
  *param_1 = *param_1 & 0xffffffffffffff8 | param_2 << 0x3f;
  return;
}



/* Address: 0x10076f220 | thunk_FUN_10063ac78 */

void thunk_FUN_10063ac78(ulong *param_1)

{
  *param_1 = *param_1 & 0x7fffffffffffffff;
  return;
}



/* Address: 0x10076f224 | thunk_FUN_10076f0ac */

void thunk_FUN_10076f0ac(void)

{
  thunk_FUN_10076f0ac();
  return;
}



/* Address: 0x10076f228 | thunk_FUN_10075ddb0 */

void thunk_FUN_10075ddb0(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar13 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar8 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(param_2 + 0x18);
  lVar20 = *(long *)(lVar8 + -8);
  lVar22 = *(long *)(lVar10 + -8);
  uVar27 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar18 = *(long *)(lVar20 + 0x40) + uVar27;
  lVar23 = *(long *)(lVar22 + 0x40);
  lVar9 = *(long *)(param_2 + 0x20);
  lVar28 = *(long *)(lVar9 + -8);
  uVar32 = (ulong)*(byte *)(lVar28 + 0x50);
  lVar24 = *(long *)(lVar28 + 0x40);
  if (*(int *)(lVar28 + 0x54) == 0) {
    lVar24 = lVar24 + 1;
  }
  uVar5 = lVar24 + (lVar23 + uVar32 + (uVar18 & (uVar27 ^ 0xffffffffffffffff)) &
                   (uVar32 ^ 0xffffffffffffffff));
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),lVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar35 = *(long *)(lVar15 + -8);
  bVar11 = *(byte *)(lVar35 + 0x50);
  uVar34 = (ulong)bVar11;
  lVar16 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x30),lVar10,puVar14,puVar13);
  lVar39 = *(long *)(lVar16 + -8);
  bVar12 = *(byte *)(lVar39 + 0x50);
  uVar36 = (ulong)bVar12;
  uVar33 = uVar36 | 7;
  lVar17 = 0;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(param_2 + 0x38),lVar9,puVar14,puVar13);
  lVar37 = *(long *)(lVar17 + -8);
  uVar21 = (ulong)*(byte *)(lVar37 + 0x50);
  uVar25 = uVar21 | 7;
  uVar29 = (ulong)(byte)(bVar12 | bVar11 | *(byte *)(lVar37 + 0x50));
  uVar38 = uVar29 | 7;
  uVar1 = uVar34 + 8;
  lVar24 = (uVar1 & (uVar34 ^ 0xffffffffffffffff)) + *(long *)(lVar35 + 0x40);
  if (*(int *)(lVar35 + 0x54) == 0) {
    lVar24 = lVar24 + 1;
  }
  uVar2 = lVar24 + uVar33 + 1;
  uVar3 = uVar36 + 8;
  lVar24 = (uVar3 & (uVar36 ^ 0xffffffffffffffff)) + *(long *)(lVar39 + 0x40);
  if (*(int *)(lVar39 + 0x54) == 0) {
    lVar24 = lVar24 + 1;
  }
  lVar24 = lVar24 + uVar25 + 1;
  uVar4 = uVar21 + 8;
  lVar6 = (uVar4 & (uVar21 ^ 0xffffffffffffffff)) + *(long *)(lVar37 + 0x40);
  if (*(int *)(lVar37 + 0x54) == 0) {
    lVar6 = lVar6 + 1;
  }
  lVar6 = lVar6 + (lVar24 + (uVar2 & (uVar33 ^ 0xffffffffffffffff)) & (uVar25 ^ 0xffffffffffffffff))
          + 1;
  uVar30 = lVar6 + (uVar29 + 8 & (uVar38 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8;
  uVar29 = uVar30 + 8;
  if (uVar29 <= uVar5) {
    uVar29 = uVar5;
  }
  uVar30 = uVar30 + 0x10;
  if (uVar30 <= uVar29) {
    uVar30 = uVar29;
  }
  if (uVar30 < 9) {
    uVar30 = 8;
  }
  bVar11 = *(byte *)((long)param_1 + uVar30);
  uVar26 = (uint)bVar11;
  if (4 < bVar11) {
    uVar31 = (uint)uVar30;
    uVar7 = 4;
    if (uVar31 < 4) {
      uVar7 = uVar31;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_10075e010;
      uVar26 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar26 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar26 = (uint)(uint3)*param_1;
    }
    else {
      uVar26 = *param_1;
    }
    if (uVar31 < 4) {
      uVar26 = uVar26 | bVar11 - 5 << (ulong)((uVar31 & 3) << 3);
    }
    uVar26 = uVar26 + 5;
  }
LAB_10075e010:
  uVar34 = ~uVar34;
  uVar36 = ~uVar36;
  uVar21 = ~uVar21;
  if ((int)uVar26 < 2) {
    if (uVar26 == 0) {
      (**(code **)(lVar20 + 8))(param_1,lVar8);
      uVar18 = (ulong)(uVar18 + (long)param_1) & ~uVar27;
      (**(code **)(lVar22 + 8))(uVar18,lVar10);
      uVar18 = uVar18 + lVar23 + uVar32;
      uVar27 = uVar18 & ~uVar32;
      (**(code **)(lVar28 + 0x30))(uVar27,1,lVar9);
      if ((int)uVar27 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010075e34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar28 + 8))(uVar18 & ~uVar32,lVar9);
      return;
    }
    if (uVar26 != 1) {
      return;
    }
    _swift_release(*(undefined8 *)param_1);
    uVar27 = (ulong)((long)param_1 + uVar38 + 8) & ~uVar38;
    uVar18 = uVar1 + uVar27 & uVar34;
    (**(code **)(lVar35 + 0x30))(uVar18,1,lVar15);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar35 + 8))(uVar1 + uVar27 & uVar34,lVar15);
    }
    uVar32 = uVar2 + uVar27 & ~uVar33;
    uVar3 = uVar3 + uVar32;
    uVar18 = uVar3 & uVar36;
    (**(code **)(lVar39 + 0x30))(uVar18,1,lVar16);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar39 + 8))(uVar3 & uVar36,lVar16);
    }
    uVar4 = uVar4 + (lVar24 + uVar32 & ~uVar25);
    uVar18 = uVar4 & uVar21;
    (**(code **)(lVar37 + 0x30))(uVar18,1,lVar17);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar37 + 8))(uVar4 & uVar21,lVar17);
    }
    uVar18 = lVar6 + uVar27 + 7;
  }
  else {
    if (uVar26 != 2) {
      if (uVar26 != 3) {
        if (uVar26 != 4) {
          return;
        }
        _swift_errorRelease(*(undefined8 *)param_1);
        return;
      }
      uVar19 = *(undefined8 *)param_1;
      goto LAB_10075e264;
    }
    _swift_release(*(undefined8 *)param_1);
    uVar27 = (ulong)((long)param_1 + uVar38 + 8) & ~uVar38;
    uVar18 = uVar1 + uVar27 & uVar34;
    (**(code **)(lVar35 + 0x30))(uVar18,1,lVar15);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar35 + 8))(uVar1 + uVar27 & uVar34,lVar15);
    }
    uVar32 = uVar2 + uVar27 & ~uVar33;
    uVar3 = uVar3 + uVar32;
    uVar18 = uVar3 & uVar36;
    (**(code **)(lVar39 + 0x30))(uVar18,1,lVar16);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar39 + 8))(uVar3 & uVar36,lVar16);
    }
    uVar4 = uVar4 + (lVar24 + uVar32 & ~uVar25);
    uVar18 = uVar4 & uVar21;
    (**(code **)(lVar37 + 0x30))(uVar18,1,lVar17);
    if ((int)uVar18 == 0) {
      (**(code **)(lVar37 + 8))(uVar4 & uVar21,lVar17);
    }
    uVar18 = (lVar6 + uVar27 + 7 & 0xfffffffffffffff8) + 0xf;
  }
  uVar19 = *(undefined8 *)(uVar18 & 0xfffffffffffffff8);
LAB_10075e264:
  _swift_release(uVar19);
  return;
}



/* Address: 0x10076f22c | thunk_FUN_1007693b4 */

void thunk_FUN_1007693b4(void)

{
  FUN_10076ef40();
  return;
}



/* Address: 0x10076f230 | thunk_FUN_10076eec4 */

void thunk_FUN_10076eec4(void)

{
  FUN_10076ef40();
  return;
}



/* Address: 0x10076f234 | thunk_FUN_10076f04c */

void thunk_FUN_10076f04c(void)

{
  thunk_FUN_10076f04c();
  return;
}



/* Address: 0x10076f238 | thunk_FUN_10076f13c */

void thunk_FUN_10076f13c(void)

{
  FUN_10076f13c();
  return;
}



/* Address: 0x10076f23c | thunk_FUN_1007691ac */

void thunk_FUN_1007691ac(void)

{
  FUN_1007691ac();
  return;
}



/* Address: 0x10076f240 | thunk_FUN_10063ac6c */

ulong thunk_FUN_10063ac6c(ulong *param_1)

{
  return *param_1 >> 0x3f;
}



/* Address: 0x10076f244 | FUN_10076f244 */

void FUN_10076f244(void)

{
  Task TVar1;
  Optional OVar2;
  undefined8 uVar3;
  CancellationError CVar4;
  CancellationError CVar5;
  CancellationError CVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  Task local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [16];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar9 = *unaff_x20;
  lVar10 = unaff_x20[2];
  lVar12 = *(long *)(lVar9 + 0x58);
  uStack_98 = *(undefined8 *)(lVar9 + 0x58);
  puVar15 = *(undefined **)(lVar9 + 0x50);
  uStack_88 = *(undefined8 *)(lVar9 + 0x68);
  uVar16 = *(undefined8 *)(lVar9 + 0x60);
  uVar13 = *(undefined8 *)(lVar9 + 0x68);
  uVar14 = *(undefined8 *)(lVar9 + 0x78);
  uStack_78 = *(undefined8 *)(lVar9 + 0x78);
  uVar17 = *(undefined8 *)(lVar9 + 0x70);
  uVar3 = 0;
  local_e8.unknown = puVar15;
  local_e0 = lVar12;
  local_d8 = uVar16;
  local_d0 = uVar13;
  local_c8 = uVar17;
  local_c0 = uVar14;
  local_a0 = puVar15;
  uStack_90 = uVar16;
  local_80 = uVar17;
  FUN_10075d17c(0,&local_e8);
  local_e8.unknown = puVar15;
  local_e0 = lVar12;
  local_d8 = uVar16;
  local_d0 = uVar13;
  local_c8 = uVar17;
  local_c0 = uVar14;
  FUN_10076f210(0xff,&local_e8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(&local_e8,FUN_100774034,auStack_b0,lVar10,uVar3,OVar2.value);
  lVar9 = local_e0;
  TVar1.unknown = local_e8.unknown;
  if (local_e8.unknown != (undefined *)0x0) {
    lVar10 = *(long *)(local_e0 + 0x10);
    if (lVar10 == 0) {
      _swift_retain(local_e8.unknown);
    }
    else {
      puVar11 = (undefined8 *)(local_e0 + 0x20);
      CVar4 = Swift::CancellationError::typeMetadataAccessor();
      CVar5 = CVar4;
      FUN_10076915c();
      _swift_retain(TVar1.unknown);
      puVar15 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      do {
        uVar3 = *puVar11;
        CVar6 = CVar4;
        _swift_allocError(CVar4.unknown,CVar5.unknown,0,0);
        Swift::CancellationError::init();
        puVar7 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        puVar8 = (undefined8 *)puVar15;
        _swift_allocError();
        *puVar8 = CVar6.unknown;
        _swift_continuation_throwingResumeWithError(uVar3,puVar7);
        lVar10 = lVar10 + -1;
        puVar11 = puVar11 + 1;
      } while (lVar10 != 0);
    }
    Swift::Task::cancel(TVar1);
    FUN_100774094(TVar1.unknown,lVar9);
    _swift_release(TVar1.unknown);
  }
  return;
}



/* Address: 0x10076f424 | FUN_10076f424 */

void FUN_10076f424(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_10076f444,0,0);
  return;
}



/* Address: 0x10076f444 | FUN_10076f444 */

void FUN_10076f444(void)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x20);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)(lVar7 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar7 + 0x70),*(undefined8 *)(lVar7 + 0x58),puVar2,puVar1);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar7 + 0x78),*(undefined8 *)(lVar7 + 0x60),puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  _swift_getTupleTypeMetadata3(0xff,uVar5,uVar6,OVar3.value,0,0);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1005fc418;
  FUN_1007aae80(*(undefined8 *)(unaff_x22 + 0x10),&UNK_100c76c58,*(undefined8 *)(unaff_x22 + 0x18),
                FUN_10077411c,*(undefined8 *)(unaff_x22 + 0x18),0,0,OVar3.value);
  return;
}



/* Address: 0x10076f578 | FUN_10076f578 */

void FUN_10076f578(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  Result RVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  ulong uVar7;
  long unaff_x22;
  long lVar8;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = param_2;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar8 = *param_2;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x68),*(undefined8 *)(lVar8 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x58),puVar2,puVar1);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar8 + 0x78),*(undefined8 *)(lVar8 + 0x60),puVar2,puVar1);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  _swift_getTupleTypeMetadata3(0xff,uVar5,uVar6,OVar3.value,0,0);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar4 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x20) = CONCAT71(extraout_var,RVar4.value);
  lVar8 = *(long *)(CONCAT71(extraout_var,RVar4.value) + -8);
  *(long *)(unaff_x22 + 0x28) = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar7;
  _swift_task_switch(FUN_10076f6b0,0,0);
  return;
}



/* Address: 0x10076f6b0 | FUN_10076f6b0 */

void FUN_10076f6b0(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10076f72c;
  FUN_10072f29c(plVar1,*(undefined8 *)(unaff_x22 + 0x30),0,0,FUN_10077419c,
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x10076f72c | FUN_10076f72c */

void FUN_10076f72c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x38));
  _swift_task_switch(FUN_10076f77c,0,0);
  return;
}



/* Address: 0x10076f77c | FUN_10076f77c */

/* WARNING: Removing unreachable block (ram,0x00010076f7f0) */

void FUN_10076f77c(void)

{
  long lVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  pTVar3 = &TargetProtocolConformanceDescriptor_100c78b28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c78b28,uVar4);
  FUN_1007c346c(uVar5,uVar4,pTVar3);
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010076f810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10076f814 | FUN_10076f814 */

void FUN_10076f814(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  Optional OVar5;
  Result RVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined7 extraout_var;
  long lVar10;
  long *plVar11;
  UnsafeContinuation UVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  String SVar25;
  undefined8 uStack_140;
  undefined4 auStack_138 [2];
  long local_130 [4];
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined7 extraout_var_00;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar19 = *param_2;
  uVar15 = *(undefined8 *)(lVar19 + 0x68);
  uStack_e8 = *(undefined8 *)(lVar19 + 0x68);
  local_f0 = *(undefined8 *)(lVar19 + 0x60);
  uVar23 = *(undefined8 *)(lVar19 + 0x78);
  uStack_d8 = *(undefined8 *)(lVar19 + 0x78);
  local_e0 = *(undefined8 *)(lVar19 + 0x70);
  local_108 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,uVar23,local_f0,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  uVar24 = *(undefined8 *)(lVar19 + 0x58);
  uStack_f8 = *(undefined8 *)(lVar19 + 0x58);
  local_100 = *(undefined8 *)(lVar19 + 0x50);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar15,local_100,puVar2,puVar1);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,local_e0,uVar24,puVar2,puVar1);
  lVar19 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar8,uVar9,OVar5.value,0,0);
  local_130[0] = lVar19;
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar6 = Swift::Result::typeMetadataAccessor();
  local_110 = CONCAT71(extraout_var,RVar6.value);
  local_130[2] = *(long *)(local_110 + -8);
  uVar13 = *(long *)(local_130[2] + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_130[1] = (long)local_130 - uVar13;
  lVar14 = local_130[1] - uVar13;
  uStack_98 = uStack_f8;
  local_a0 = local_100;
  local_88 = uStack_e8;
  local_90 = local_f0;
  uStack_78 = uStack_d8;
  local_80 = local_e0;
  lVar19 = 0xff;
  local_130[3] = lVar14;
  FUN_1007691a0(0xff,&local_a0);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar10 = CONCAT71(extraout_var_00,OVar5.value);
  lVar18 = *(long *)(lVar10 + -8);
  uVar13 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar21 = (long *)(lVar14 - uVar13);
  lVar14 = (long)plVar21 - uVar13;
  lVar20 = param_2[2];
  local_b0 = local_108;
  local_a0 = local_100;
  local_90 = local_f0;
  local_80 = local_e0;
  uVar8 = 0;
  plStack_a8 = param_2;
  uStack_98 = uVar24;
  local_88 = uVar15;
  uStack_78 = uVar23;
  FUN_10075d17c(0,&local_a0);
  FUN_10079f534(lVar14,FUN_1007741a4,auStack_c0,lVar20,uVar8,lVar10);
  (**(code **)(lVar18 + 0x10))(plVar21,lVar14,lVar10);
  plVar11 = plVar21;
  (**(code **)(*(long *)(lVar19 + -8) + 0x30))(plVar21,1,lVar19);
  if ((int)plVar11 != 1) {
    plVar11 = plVar21;
    _swift_getEnumCaseMultiPayload(plVar21,lVar19);
    lVar20 = local_110;
    lVar19 = local_130[3];
    iVar7 = (int)plVar11;
    if (iVar7 < 3) {
      if (iVar7 == 1) {
        lVar20 = *plVar21;
        lVar19 = *(long *)(lVar20 + 0x10);
        if (lVar19 != 0) {
          puVar22 = (undefined8 *)(lVar20 + 0x20);
          do {
            _swift_continuation_throwingResume(*puVar22);
            lVar19 = lVar19 + -1;
            puVar22 = puVar22 + 1;
          } while (lVar19 != 0);
        }
        _swift_bridgeObjectRelease(lVar20);
      }
      else {
        if (iVar7 != 2) {
          *(undefined4 *)(lVar14 + -8) = 0;
          *(undefined8 *)(lVar14 + -0x10) = 0x53;
          SVar25.bridgeObject = (void *)0x2;
          SVar25.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar25,(StaticString)0xd000000000000016,
                     0x8000000100db1320,0xdb1450);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10076fc2c);
          (*pcVar4)();
        }
        lVar17 = *plVar21;
        UVar12 = Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar19 = 0;
        _swift_getTupleTypeMetadata2(0,UVar12.unknown,lVar20,"downstreamContinuation result ",0);
        lVar3 = local_130[3];
        lVar16 = local_130[2];
        (**(code **)(local_130[2] + 0x20))
                  (local_130[3],(long)plVar21 + (long)*(int *)(lVar19 + 0x30),lVar20);
        lVar19 = local_130[1];
        (**(code **)(lVar16 + 0x10))(local_130[1],lVar3,lVar20);
        FUN_10072e9c0(lVar19,lVar17,lVar20);
        (**(code **)(lVar16 + 8))(lVar3,lVar20);
      }
    }
    else {
      lVar16 = *plVar21;
      (**(code **)(*(long *)(local_130[0] + -8) + 0x38))(local_130[3],1,1);
      lVar20 = local_110;
      _swift_storeEnumTagMultiPayload(lVar19,local_110,0);
      FUN_10072e9c0(lVar19,lVar16,lVar20);
    }
  }
  (**(code **)(lVar18 + 8))(lVar14,lVar10);
  return;
}



/* Address: 0x10076fc2c | FUN_10076fc2c */

void FUN_10076fc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  Optional OVar6;
  Result RVar7;
  int iVar8;
  undefined7 extraout_var;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined7 extraout_var_00;
  UnsafeContinuation UVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined1 *local_110;
  undefined8 local_108;
  long *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  long local_b0;
  undefined8 uStack_a8;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  long lVar12;
  
  lVar18 = *param_4;
  uVar21 = *(undefined8 *)(lVar18 + 0x60);
  local_100 = param_4;
  local_b8 = param_1;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  local_d8 = CONCAT71(extraout_var,OVar6.value);
  local_e0 = *(long *)(local_d8 + -8);
  local_110 = auStack_130 + -(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar18 + 0x50);
  lVar14 = *(long *)(lVar18 + 0x58);
  local_e8 = *(long *)(lVar14 + -8);
  local_118 = (long)local_110 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f0 = *(long *)(lVar12 + -8);
  lVar15 = local_118 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_c8 = *(undefined8 *)(lVar18 + 0x70);
  local_128 = *(undefined8 *)(lVar18 + 0x68);
  local_120 = *(undefined8 *)(lVar18 + 0x78);
  uStack_a8 = *(undefined8 *)(lVar18 + 0x78);
  local_b0 = *(long *)(lVar18 + 0x70);
  lVar9 = 0;
  local_f8 = lVar15;
  local_d0 = local_128;
  local_98 = lVar12;
  lStack_90 = lVar14;
  local_88 = uVar21;
  local_80 = local_128;
  lStack_78 = uStack_c8;
  local_70 = local_120;
  FUN_1007691a0(0,&local_98);
  lVar19 = *(long *)(lVar9 + -8);
  uVar16 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar15 - uVar16;
  lVar20 = lVar15 - uVar16;
  local_80 = local_d0;
  local_70 = uStack_a8;
  lStack_78 = local_b0;
  uVar10 = 0;
  local_98 = lVar12;
  lStack_90 = lVar14;
  local_88 = uVar21;
  FUN_10075d17c(0,&local_98);
  local_108 = param_2;
  local_d0 = param_3;
  FUN_100768408(lVar20,param_3,uVar10);
  (**(code **)(lVar19 + 0x10))(lVar15,lVar20,lVar9);
  lVar18 = lVar15;
  _swift_getEnumCaseMultiPayload(lVar15,lVar9);
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  iVar8 = (int)lVar18;
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      lVar18 = 0;
      _swift_getTupleTypeMetadata3(0,lVar12,lVar14,local_d8,0,0);
      lVar4 = local_f8;
      iVar8 = *(int *)(lVar18 + 0x30);
      local_b0 = (long)*(int *)(lVar18 + 0x40);
      (**(code **)(local_f0 + 0x20))(local_f8,lVar15,lVar12);
      lVar18 = local_118;
      (**(code **)(local_e8 + 0x20))(local_118,lVar15 + iVar8,lVar14);
      lVar5 = local_d8;
      puVar3 = local_110;
      (**(code **)(local_e0 + 0x20))(local_110,lVar15 + local_b0,local_d8);
      FUN_100770078(local_108,lVar4,lVar18,puVar3,local_d0);
      (**(code **)(local_e0 + 8))(puVar3,lVar5);
      (**(code **)(local_e8 + 8))(lVar18,lVar14);
      (**(code **)(local_f0 + 8))(local_f8,lVar12);
      (**(code **)(lVar19 + 8))(lVar20,lVar9);
      pcVar17 = *(code **)(lVar19 + 0x38);
      uVar21 = 1;
      uVar10 = local_b8;
      goto LAB_100770048;
    }
    (**(code **)(lVar19 + 8))(lVar15,lVar9);
  }
  else if (iVar8 == 2) {
    uVar10 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,local_128,lVar12,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    uVar11 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,local_b0,lVar14,puVar2,puVar1);
    _swift_getAssociatedTypeWitness(0xff,local_120,uVar21,puVar2,puVar1);
    OVar6 = Swift::Optional::typeMetadataAccessor();
    _swift_getTupleTypeMetadata3(0xff,uVar10,uVar11,OVar6.value,0,0);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar7 = Swift::Result::typeMetadataAccessor();
    lVar12 = CONCAT71(extraout_var_00,RVar7.value);
    UVar13 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar14 = 0;
    _swift_getTupleTypeMetadata2(0,UVar13.unknown,lVar12,"downstreamContinuation result ",0);
    uVar10 = local_b8;
    iVar8 = *(int *)(lVar14 + 0x30);
    (**(code **)(lVar19 + 0x20))(local_b8,lVar20,lVar9);
    (**(code **)(lVar19 + 0x38))(uVar10,0,1,lVar9);
    (**(code **)(*(long *)(lVar12 + -8) + 8))(lVar15 + iVar8,lVar12);
    return;
  }
  uVar10 = local_b8;
  (**(code **)(lVar19 + 0x20))(local_b8,lVar20,lVar9);
  pcVar17 = *(code **)(lVar19 + 0x38);
  uVar21 = 0;
LAB_100770048:
  (*pcVar17)(uVar10,uVar21,1,lVar9);
  return;
}



/* Address: 0x100770078 | FUN_100770078 */

void FUN_100770078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  Optional OVar6;
  undefined7 extraout_var;
  undefined *puVar8;
  TaskPriority TVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *unaff_x20;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long lVar7;
  
  lVar18 = *unaff_x20;
  uVar12 = *(undefined8 *)(lVar18 + 0x60);
  local_f8 = param_2;
  local_e8 = param_3;
  local_e0 = param_4;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,OVar6.value);
  lVar13 = *(long *)(lVar7 + -8);
  local_d0 = *(long *)(lVar13 + 0x40);
  lVar25 = (long)&local_120 - (local_d0 + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(lVar18 + 0x50);
  lVar2 = *(long *)(lVar18 + 0x58);
  lVar14 = *(long *)(lVar2 + -8);
  local_f0 = *(long *)(lVar14 + 0x40);
  lVar22 = lVar25 - (local_f0 + 0xfU & 0xfffffffffffffff0);
  lVar24 = *(long *)(lVar1 + -8);
  lVar16 = *(long *)(lVar24 + 0x40);
  lVar27 = lVar22 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fe0dc8;
  local_120 = lVar1;
  local_118 = lVar27;
  local_110 = lVar7;
  local_108 = lVar22;
  local_100 = lVar25;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  lVar21 = lVar27 - (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar21;
  TVar9 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar21,1,1,TVar9.unknown);
  (**(code **)(lVar24 + 0x10))(lVar27,local_f8,lVar1);
  (**(code **)(lVar14 + 0x10))(lVar22,local_e8,lVar2);
  (**(code **)(lVar13 + 0x10))(lVar25,local_e0,lVar7);
  bVar3 = *(byte *)(lVar24 + 0x50);
  uVar26 = (ulong)bVar3 + 0x50 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  uVar23 = lVar16 + uVar26 + 7 & 0xfffffffffffffff8;
  bVar4 = *(byte *)(lVar14 + 0x50);
  uVar17 = bVar4 + uVar23 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff);
  bVar5 = *(byte *)(lVar13 + 0x50);
  uVar15 = local_f0 + (ulong)bVar5 + uVar17 & ((ulong)bVar5 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100eff568;
  _swift_allocObject(&DAT_100eff568,uVar15 + local_d0,bVar3 | bVar4 | bVar5 | 7);
  lVar1 = local_120;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(long *)(puVar8 + 0x20) = local_120;
  *(long *)(puVar8 + 0x28) = lVar2;
  *(undefined8 *)(puVar8 + 0x30) = uVar12;
  uVar28 = *(undefined8 *)(lVar18 + 0x68);
  *(undefined8 *)(puVar8 + 0x38) = uVar28;
  uVar20 = *(undefined8 *)(lVar18 + 0x70);
  *(undefined8 *)(puVar8 + 0x40) = uVar20;
  uVar19 = *(undefined8 *)(lVar18 + 0x78);
  *(undefined8 *)(puVar8 + 0x48) = uVar19;
  (**(code **)(lVar24 + 0x20))(puVar8 + uVar26,local_118);
  *(long **)(puVar8 + uVar23) = unaff_x20;
  (**(code **)(lVar14 + 0x20))(puVar8 + uVar17,local_108,lVar2);
  (**(code **)(lVar13 + 0x20))(puVar8 + uVar15,local_100,local_110);
  _swift_retain(unaff_x20);
  uVar10 = 0;
  FUN_100731e58(0,0,local_d8,&DAT_100c76c70,puVar8);
  local_98 = lVar1;
  uVar11 = 0;
  lStack_90 = lVar2;
  local_88 = uVar12;
  uStack_80 = uVar28;
  local_78 = uVar20;
  uStack_70 = uVar19;
  FUN_10075d17c(0,&local_98);
  FUN_100762e0c(uVar10,param_5,uVar11);
  _swift_release(uVar10);
  return;
}



/* Address: 0x100770340 | FUN_100770340 */

void FUN_100770340(long *param_1)

{
  undefined *puVar1;
  Task TVar2;
  ulong uVar3;
  Optional OVar4;
  Result RVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  CancellationError CVar10;
  CancellationError CVar11;
  CancellationError CVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined1 auStack_130 [8];
  long local_128;
  ulong local_120;
  undefined8 uStack_118;
  Task local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  ulong local_e8;
  undefined *local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [16];
  ulong local_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long lVar9;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar8 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar19 = *param_1;
  uVar15 = *(undefined8 *)(lVar19 + 0x68);
  uStack_108 = *(undefined8 *)(lVar19 + 0x68);
  local_110.unknown = *(undefined **)(lVar19 + 0x60);
  uVar16 = *(undefined8 *)(lVar19 + 0x78);
  uStack_f8 = *(undefined8 *)(lVar19 + 0x78);
  local_100 = *(undefined8 *)(lVar19 + 0x70);
  _swift_getAssociatedTypeWitness
            (0xff,uVar16,local_110.unknown,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  puVar21 = *(undefined **)(lVar19 + 0x58);
  uStack_118 = *(undefined8 *)(lVar19 + 0x58);
  local_120 = *(ulong *)(lVar19 + 0x50);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar15,local_120,puVar1,puVar8);
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,local_100,puVar21,puVar1,puVar8);
  lVar19 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar6,uVar7,OVar4.value,0,0);
  Swift::Optional::typeMetadataAccessor();
  puVar8 = &DAT_100fdfb40;
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar5 = Swift::Result::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,RVar5.value);
  puVar20 = auStack_130 + -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = param_1[2];
  uStack_98 = uStack_118;
  local_a0 = local_120;
  uStack_88 = uStack_108;
  lStack_90 = (long)local_110.unknown;
  uStack_78 = uStack_f8;
  local_80 = local_100;
  local_e8 = local_120;
  local_d8 = (long)local_110.unknown;
  local_c8 = local_100;
  uVar6 = 0;
  local_e0 = puVar21;
  local_d0 = uVar15;
  local_c0 = uVar16;
  FUN_10075d17c(0,&local_e8);
  local_e8 = local_120;
  local_d8 = (long)local_110.unknown;
  local_c8 = local_100;
  local_e0 = puVar21;
  local_d0 = uVar15;
  local_c0 = uVar16;
  FUN_10076f104(0xff,&local_e8);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(&local_e8,FUN_100774124,auStack_b0,lVar17,uVar6,OVar4.value);
  puVar1 = local_e0;
  uVar3 = local_e8;
  if (((local_e8 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    local_100 = local_d8;
    if ((long)local_e8 < 0) {
      lVar19 = *(long *)(local_e0 + 0x10);
      if (lVar19 == 0) {
        _swift_retain(local_e8 & 0x7fffffffffffffff);
      }
      else {
        puVar18 = (undefined8 *)(local_e0 + 0x20);
        CVar10 = Swift::CancellationError::typeMetadataAccessor();
        CVar11 = CVar10;
        FUN_10076915c();
        _swift_retain(uVar3 & 0x7fffffffffffffff);
        puVar21 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        do {
          uVar6 = *puVar18;
          CVar12 = CVar10;
          _swift_allocError(CVar10.unknown,CVar11.unknown,0,0);
          Swift::CancellationError::init();
          puVar13 = puVar8;
          puVar14 = (undefined8 *)puVar21;
          _swift_allocError(puVar8,puVar21,0,0);
          *puVar14 = CVar12.unknown;
          _swift_continuation_throwingResumeWithError(uVar6,puVar13);
          lVar19 = lVar19 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar19 != 0);
      }
      Swift::Task::cancel((undefined *)(uVar3 & 0x7fffffffffffffff));
      FUN_100774188(uVar3,puVar1,local_100);
      _swift_release(uVar3 & 0x7fffffffffffffff);
    }
    else {
      lVar17 = *(long *)(local_d8 + 0x10);
      local_110.unknown = local_e0;
      local_128 = lVar9;
      local_120 = lVar19;
      if (lVar17 == 0) {
        _swift_retain(local_e0);
      }
      else {
        puVar18 = (undefined8 *)(local_d8 + 0x20);
        CVar10 = Swift::CancellationError::typeMetadataAccessor();
        CVar11 = CVar10;
        FUN_10076915c();
        _swift_retain(puVar1);
        puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        do {
          uVar6 = *puVar18;
          CVar12 = CVar10;
          _swift_allocError(CVar10.unknown,CVar11.unknown,0,0);
          Swift::CancellationError::init();
          puVar21 = puVar8;
          puVar14 = (undefined8 *)puVar1;
          _swift_allocError(puVar8,puVar1,0,0);
          *puVar14 = CVar12.unknown;
          _swift_continuation_throwingResumeWithError(uVar6,puVar21);
          lVar17 = lVar17 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar17 != 0);
      }
      TVar2.unknown = local_110.unknown;
      Swift::Task::cancel(local_110);
      (**(code **)(*(long *)(local_120 + -8) + 0x38))(puVar20,1,1);
      lVar19 = local_128;
      _swift_storeEnumTagMultiPayload(puVar20,local_128,0);
      FUN_10072e9c0(puVar20,uVar3,lVar19);
      _swift_release(TVar2.unknown);
      FUN_100774188(uVar3,TVar2.unknown,local_100);
    }
  }
  return;
}



/* Address: 0x100770758 | FUN_100770758 */

void FUN_100770758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_6;
  *(undefined8 *)(unaff_x22 + 0x168) = param_7;
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  _swift_task_switch(FUN_100770778,0,0);
  return;
}



/* Address: 0x100770778 | FUN_100770778 */

void FUN_100770778(void)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x160);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10077087c;
    Swift::_withThrowingTaskGroup();
    return;
  }
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___type_metadata_for____100eae0c8 + 8);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar2 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x178) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1007708d8;
  FUN_100770b54();
  return;
}



/* Address: 0x10077087c | FUN_10077087c */

void FUN_10077087c(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x170));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007708d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1007708d8 | FUN_1007708d8 */

void FUN_1007708d8(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x180) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x178));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100770a14,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x188) = plVar1;
  TVar2.unknown = &DAT_100fe3110;
  FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_10077098c;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x10077098c | FUN_10077098c */

void FUN_10077098c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x188));
  _swift_task_switch(FUN_1007709dc,0,0);
  return;
}



/* Address: 0x1007709dc | FUN_1007709dc */

void FUN_1007709dc(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100770a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100770a14 | FUN_100770a14 */

void FUN_100770a14(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x22;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x140);
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  Swift::ThrowingTaskGroup::cancelAll(TVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 400) = plVar1;
  TVar2.unknown = &DAT_100fe3110;
  FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100770ab8;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x100770ab8 | FUN_100770ab8 */

void FUN_100770ab8(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 400));
  _swift_task_switch(FUN_100770b08,0,0);
  return;
}



/* Address: 0x100770b08 | FUN_100770b08 */

void FUN_100770b08(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
  _swift_errorRelease(uVar1);
  return;
}



/* Address: 0x100770b54 | FUN_100770b54 */

void FUN_100770b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_5;
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  *(undefined8 *)(unaff_x22 + 0x108) = param_3;
  *(undefined8 **)(unaff_x22 + 0x110) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x128) = *param_4;
  _swift_task_switch(FUN_100770b7c,0,0);
  return;
}



/* Address: 0x100770b7c | FUN_100770b7c */

void FUN_100770b7c(void)

{
  Optional OVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  TaskPriority TVar6;
  ulong uVar7;
  undefined7 extraout_var;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 *puVar19;
  ThrowingTaskGroup TVar20;
  long lVar21;
  long unaff_x22;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  lVar17 = *(long *)(unaff_x22 + 0x128);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
  puVar4 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  uVar15 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xf;
  uVar5 = uVar15 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(TVar6.unknown + -8) + 0x38);
  (*pcVar9)(uVar5,1,1,TVar6.unknown);
  lVar21 = *(long *)(lVar17 + 0x50);
  *(long *)(unaff_x22 + 0x130) = lVar21;
  lVar24 = *(long *)(lVar21 + -8);
  lVar22 = *(long *)(lVar24 + 0x40);
  uVar7 = lVar22 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (**(code **)(lVar24 + 0x10))();
  uVar10 = (ulong)*(byte *)(lVar24 + 0x50);
  uVar16 = uVar10 + 0x50 & (uVar10 ^ 0xffffffffffffffff);
  uVar23 = lVar22 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100eff590;
  _swift_allocObject(&DAT_100eff590,uVar23 + 8,uVar10 | 7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(long *)(puVar4 + 0x20) = lVar21;
  lVar25 = *(long *)(lVar17 + 0x58);
  *(long *)(unaff_x22 + 0x138) = lVar25;
  *(long *)(puVar4 + 0x28) = lVar25;
  lVar22 = *(long *)(lVar17 + 0x60);
  *(long *)(unaff_x22 + 0x140) = lVar22;
  *(long *)(puVar4 + 0x30) = lVar22;
  uVar11 = *(undefined8 *)(lVar17 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar11;
  *(undefined8 *)(puVar4 + 0x38) = uVar11;
  uVar12 = *(undefined8 *)(lVar17 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x150) = uVar12;
  *(undefined8 *)(puVar4 + 0x40) = uVar12;
  uVar13 = *(undefined8 *)(lVar17 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x158) = uVar13;
  *(undefined8 *)(puVar4 + 0x48) = uVar13;
  (**(code **)(lVar24 + 0x20))(puVar4 + uVar16,uVar7,lVar21);
  *(undefined8 *)(puVar4 + uVar23) = uVar14;
  _swift_task_dealloc(uVar7);
  _swift_retain(uVar14);
  FUN_1007d299c(uVar5,&DAT_100c76c98,puVar4);
  FUN_100733b9c(uVar5);
  _swift_task_dealloc(uVar5);
  uVar5 = uVar15 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (*pcVar9)();
  lVar17 = *(long *)(lVar25 + -8);
  lVar24 = *(long *)(lVar17 + 0x40);
  uVar7 = lVar24 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (**(code **)(lVar17 + 0x10))();
  uVar10 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar23 = uVar10 + 0x50 & (uVar10 ^ 0xffffffffffffffff);
  uVar16 = lVar24 + uVar23 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100eff5b8;
  _swift_allocObject(&DAT_100eff5b8,uVar16 + 8,uVar10 | 7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(long *)(puVar4 + 0x20) = lVar21;
  *(long *)(puVar4 + 0x28) = lVar25;
  *(long *)(puVar4 + 0x30) = lVar22;
  *(undefined8 *)(puVar4 + 0x38) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar12;
  *(undefined8 *)(puVar4 + 0x48) = uVar13;
  (**(code **)(lVar17 + 0x20))(puVar4 + uVar23,uVar7,lVar25);
  *(undefined8 *)(puVar4 + uVar16) = uVar14;
  _swift_task_dealloc(uVar7);
  _swift_retain(uVar14);
  FUN_1007d299c(uVar5,&DAT_100c76ca8,puVar4);
  FUN_100733b9c(uVar5);
  _swift_task_dealloc(uVar5);
  lVar17 = *(long *)(lVar22 + -8);
  lVar26 = *(long *)(lVar17 + 0x40);
  uVar5 = lVar26 + 0xf;
  uVar10 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar24 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  uVar16 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar24 + 0x10))();
  uVar7 = uVar16;
  (**(code **)(lVar17 + 0x30))(uVar16,1,lVar22);
  if ((int)uVar7 == 1) {
    (**(code **)(lVar24 + 8))(uVar16,CONCAT71(extraout_var,OVar1.value));
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
    pcVar18 = *(code **)(lVar17 + 0x20);
    (*pcVar18)(uVar10,uVar16,lVar22);
    _swift_task_dealloc(uVar16);
    uVar16 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar16);
    (*pcVar9)();
    uVar5 = uVar5 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar5);
    (**(code **)(lVar17 + 0x10))();
    uVar15 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar7 = uVar15 + 0x50 & (uVar15 ^ 0xffffffffffffffff);
    uVar23 = lVar26 + uVar7 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_100eff5e0;
    _swift_allocObject(&DAT_100eff5e0,uVar23 + 8,uVar15 | 7);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(long *)(puVar4 + 0x20) = lVar21;
    *(long *)(puVar4 + 0x28) = lVar25;
    *(long *)(puVar4 + 0x30) = lVar22;
    *(undefined8 *)(puVar4 + 0x38) = uVar11;
    *(undefined8 *)(puVar4 + 0x40) = uVar12;
    *(undefined8 *)(puVar4 + 0x48) = uVar13;
    (*pcVar18)(puVar4 + uVar7,uVar5,lVar22);
    *(undefined8 *)(puVar4 + uVar23) = uVar14;
    _swift_task_dealloc(uVar5);
    _swift_retain(uVar14);
    FUN_1007d299c(uVar16,&DAT_100c76cb8,puVar4);
    FUN_100733b9c(uVar16);
    (**(code **)(lVar17 + 8))(uVar10,lVar22);
  }
  puVar19 = *(undefined8 **)(unaff_x22 + 0xd8);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar10);
  TVar20.unknown = (undefined *)*puVar19;
  puVar4 = &DAT_100fdfb40;
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0x160) = puVar4;
  bVar2 = Swift::ThrowingTaskGroup::get_isEmpty(TVar20);
  if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010077102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar17 = *(long *)(unaff_x22 + 0x110);
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x182) = bVar3 & 1;
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(lVar17 + 0x10);
  if ((bVar3 & 1) != 0) {
    plVar8 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar8;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_100771108;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x180));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x181,TVar20.unknown,FUN_10077116c,unaff_x22 + 0xe0);
  return;
}



/* Address: 0x100771108 | FUN_100771108 */

void FUN_100771108(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100771194;
  }
  else {
    *(long *)(lVar2 + 0x178) = unaff_x20;
    pcVar1 = FUN_100771284;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10077116c | FUN_10077116c */

void FUN_10077116c(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100771194;
  }
  else {
    *(long *)(unaff_x22 + 0x178) = unaff_x20;
    pcVar1 = FUN_100771284;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100771194 | FUN_100771194 */

void FUN_100771194(void)

{
  bool bVar1;
  long *plVar2;
  ThrowingTaskGroup TVar3;
  long unaff_x22;
  
  TVar3.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0xd8);
  bVar1 = Swift::ThrowingTaskGroup::get_isEmpty(TVar3);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001007711f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(char *)(unaff_x22 + 0x182) == '\x01') {
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar2;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100771108;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x180));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x181,TVar3.unknown,FUN_10077116c,unaff_x22 + 0xe0);
  return;
}



/* Address: 0x100771284 | FUN_100771284 */

void FUN_100771284(void)

{
  Task TVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  Optional OVar7;
  Result RVar8;
  bool bVar9;
  undefined8 uVar10;
  CancellationError CVar11;
  CancellationError CVar12;
  CancellationError CVar13;
  undefined8 uVar14;
  undefined7 extraout_var;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ThrowingTaskGroup TVar19;
  undefined8 uVar20;
  long unaff_x22;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar25;
  uVar23 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar23;
  uVar10 = 0;
  FUN_10075d17c(0);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar25;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar22;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar24;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar23;
  FUN_10076b868(0xff,(undefined8 *)(unaff_x22 + 0x88));
  OVar7 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(unaff_x22 + 0xb8,FUN_100774694,unaff_x22 + 0x10,uVar17,uVar10,OVar7.value);
  TVar1.unknown = *(undefined **)(unaff_x22 + 0xb8);
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  uVar2 = *(ulong *)(unaff_x22 + 200);
  lVar4 = *(long *)(unaff_x22 + 0xd0);
  if ((((ulong)TVar1.unknown & uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if ((long)uVar2 < 0) {
      lVar21 = *(long *)(lVar4 + 0x10);
      if (lVar21 == 0) {
        _swift_errorRetain(lVar3);
        _swift_retain(uVar2 & 0x7fffffffffffffff);
      }
      else {
        _swift_errorRetain(lVar3);
        CVar11 = Swift::CancellationError::typeMetadataAccessor();
        CVar12 = CVar11;
        FUN_10076915c();
        _swift_retain(uVar2 & 0x7fffffffffffffff);
        puVar5 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        puVar18 = (undefined8 *)(lVar4 + 0x20);
        do {
          uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
          uVar17 = *puVar18;
          CVar13 = CVar11;
          _swift_allocError(CVar11.unknown,CVar12.unknown,0,0);
          Swift::CancellationError::init();
          puVar16 = (undefined8 *)puVar5;
          _swift_allocError(uVar10,puVar5,0,0);
          *puVar16 = CVar13.unknown;
          _swift_continuation_throwingResumeWithError(uVar17,uVar10);
          lVar21 = lVar21 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar21 != 0);
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x130);
      Swift::Task::cancel((undefined *)(uVar2 & 0x7fffffffffffffff));
      puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
      puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
      uVar14 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar17,uVar24,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
      uVar17 = 0xff;
      _swift_getAssociatedTypeWitness(0xff,uVar22,uVar20,puVar6,puVar5);
      _swift_getAssociatedTypeWitness(0xff,uVar10,uVar23,puVar6,puVar5);
      OVar7 = Swift::Optional::typeMetadataAccessor();
      _swift_getTupleTypeMetadata3(0xff,uVar14,uVar17,OVar7.value,0,0);
      Swift::Optional::typeMetadataAccessor();
      RVar8 = Swift::Result::typeMetadataAccessor();
      plVar15 = (long *)(*(long *)(*(long *)(CONCAT71(extraout_var,RVar8.value) + -8) + 0x40) + 0xfU
                        & 0xfffffffffffffff0);
      _swift_task_alloc();
      *plVar15 = lVar3;
      _swift_storeEnumTagMultiPayload();
      FUN_10072e9c0(plVar15,TVar1.unknown,CONCAT71(extraout_var,RVar8.value));
      _swift_release(uVar2 & 0x7fffffffffffffff);
      _swift_task_dealloc(plVar15);
    }
    else {
      lVar21 = *(long *)(lVar3 + 0x10);
      if (lVar21 == 0) {
        _swift_retain(TVar1.unknown);
      }
      else {
        CVar11 = Swift::CancellationError::typeMetadataAccessor();
        CVar12 = CVar11;
        FUN_10076915c();
        _swift_retain(TVar1.unknown);
        puVar5 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        puVar18 = (undefined8 *)(lVar3 + 0x20);
        do {
          uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
          uVar17 = *puVar18;
          CVar13 = CVar11;
          _swift_allocError(CVar11.unknown,CVar12.unknown,0,0);
          Swift::CancellationError::init();
          puVar16 = (undefined8 *)puVar5;
          _swift_allocError(uVar10,puVar5,0,0);
          *puVar16 = CVar13.unknown;
          _swift_continuation_throwingResumeWithError(uVar17,uVar10);
          lVar21 = lVar21 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar21 != 0);
      }
      Swift::Task::cancel(TVar1);
      _swift_release(TVar1.unknown);
    }
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
  Swift::ThrowingTaskGroup::cancelAll((undefined *)**(undefined8 **)(unaff_x22 + 0xd8));
  FUN_10077470c(TVar1.unknown,lVar3,uVar2,lVar4);
  _swift_errorRelease(uVar10);
  TVar19.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0xd8);
  bVar9 = Swift::ThrowingTaskGroup::get_isEmpty(TVar19);
  if (!bVar9) {
    if (*(char *)(unaff_x22 + 0x182) != '\x01') {
      _swift_taskGroup_wait_next_throwing
                (unaff_x22 + 0x181,TVar19.unknown,FUN_10077116c,unaff_x22 + 0xe0);
      return;
    }
    plVar15 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar15;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar15 = unaff_x22;
    plVar15[1] = (long)FUN_100771108;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x180));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007716cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


