/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009c20c8 | FUN_1009c20c8 */

uint * FUN_1009c20c8(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  long lVar12;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar12 = *(long *)(lVar3 + -8);
  uVar2 = *(uint *)(lVar12 + 0x54);
  sVar7 = *(size_t *)(lVar12 + 0x40);
  if (uVar2 == 0) {
    sVar7 = sVar7 + 1;
  }
  if (uVar2 < 2) {
    uVar10 = (uint)sVar7;
    uVar8 = uVar10 << 3;
    if (*(byte *)((long)param_1 + sVar7) != 0) {
      uVar1 = 0;
      if (uVar10 < 4) {
        uVar1 = *(byte *)((long)param_1 + sVar7) - 1 << (ulong)(uVar8 & 0x1f);
      }
      if (uVar10 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 4;
        if (uVar10 < 4) {
          uVar9 = uVar10;
        }
        if ((int)uVar9 < 3) {
          if (uVar9 == 1) {
            uVar9 = (uint)(byte)*param_1;
          }
          else {
            uVar9 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar9 == 3) {
          uVar9 = (uint)(uint3)*param_1;
        }
        else {
          uVar9 = *param_1;
        }
      }
      if ((uVar9 | uVar1) != 0xffffffff) {
        if (*(byte *)((long)param_2 + sVar7) == 0) goto LAB_1009c23c0;
        uVar1 = 0;
        if (uVar10 < 4) {
          uVar1 = *(byte *)((long)param_2 + sVar7) - 1 << (ulong)(uVar8 & 0x1f);
        }
        if (uVar10 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = 4;
          if (uVar10 < 4) {
            uVar8 = uVar10;
          }
          if ((int)uVar8 < 3) {
            if (uVar8 == 1) {
              uVar8 = (uint)(byte)*param_2;
            }
            else {
              uVar8 = (uint)(ushort)*param_2;
            }
          }
          else if (uVar8 == 3) {
            uVar8 = (uint)(uint3)*param_2;
          }
          else {
            uVar8 = *param_2;
          }
        }
        iVar6 = (uVar8 | uVar1) + 1;
        goto LAB_1009c2394;
      }
    }
    if (*(byte *)((long)param_2 + sVar7) != 0) {
      uVar1 = 0;
      if (uVar10 < 4) {
        uVar1 = *(byte *)((long)param_2 + sVar7) - 1 << (ulong)(uVar8 & 0x1f);
      }
      if (uVar10 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar10 < 4) {
          uVar8 = uVar10;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_2;
          }
          else {
            uVar8 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_2;
        }
        else {
          uVar8 = *param_2;
        }
      }
      if ((uVar8 | uVar1) != 0xffffffff) {
LAB_1009c22b8:
        puVar5 = param_1;
        (**(code **)(lVar12 + 0x30))(param_1,1,lVar3);
        if ((int)puVar5 == 0) {
          (**(code **)(lVar12 + 8))(param_1,lVar3);
        }
        goto LAB_1009c2398;
      }
    }
  }
  else {
    pcVar11 = *(code **)(lVar12 + 0x30);
    puVar5 = param_1;
    (*pcVar11)(param_1,uVar2,lVar3);
    puVar4 = param_2;
    (*pcVar11)(param_2,uVar2,lVar3);
    iVar6 = 0;
    if ((int)puVar4 != 0) {
      iVar6 = (int)puVar4 + -1;
    }
    if (1 < (uint)puVar5) {
LAB_1009c2394:
      if (iVar6 == 0) {
LAB_1009c23c0:
        puVar5 = param_2;
        (**(code **)(lVar12 + 0x30))(param_2,1,lVar3);
        if ((int)puVar5 == 0) {
          (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar3);
          (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar3);
        }
        else {
          _memcpy(param_1,param_2,sVar7);
        }
        if (1 < uVar2) {
          return param_1;
        }
        *(byte *)((long)param_1 + sVar7) = 0;
        return param_1;
      }
LAB_1009c2398:
      if (uVar2 < 2) {
        sVar7 = sVar7 + 1;
      }
      goto LAB_1009c23a8;
    }
    if (iVar6 != 0) goto LAB_1009c22b8;
  }
  pcVar11 = *(code **)(lVar12 + 0x30);
  puVar5 = param_1;
  (*pcVar11)(param_1,1,lVar3);
  puVar4 = param_2;
  (*pcVar11)(param_2,1,lVar3);
  if ((int)puVar5 == 0) {
    if ((int)puVar4 == 0) {
      (**(code **)(lVar12 + 0x28))(param_1,param_2,lVar3);
      return param_1;
    }
    (**(code **)(lVar12 + 8))(param_1,lVar3);
  }
  else if ((int)puVar4 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar3);
    return param_1;
  }
LAB_1009c23a8:
  puVar5 = _memcpy(param_1,param_2,sVar7);
  return puVar5;
}



/* Address: 0x1009c2448 | FUN_1009c2448 */

int FUN_1009c2448(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = *(uint *)(lVar6 + 0x54);
  iVar5 = 0;
  if (uVar1 != 0) {
    iVar5 = uVar1 - 1;
  }
  uVar3 = iVar5 - 1;
  uVar8 = *(ulong *)(lVar6 + 0x40);
  if (uVar1 == 0) {
    uVar8 = uVar8 + 1;
  }
  if (uVar1 < 2) {
    uVar8 = uVar8 + 1;
    uVar3 = 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1009c2528;
  uVar7 = (uint)uVar8;
  uVar2 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar9 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar2 & 0x1f)) >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_1009c2528;
      goto LAB_1009c24c0;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_1009c24c0:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar9 != 0) {
    uVar1 = 0;
    if (uVar7 < 4) {
      uVar1 = uVar9 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar2 = 4;
      if (uVar7 < 4) {
        uVar2 = uVar7;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)*param_1;
      }
    }
    return uVar3 + ((uint)uVar8 | uVar1) + 1;
  }
LAB_1009c2528:
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar1 < 2) {
    iVar5 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x30))(param_1,uVar1,lVar4);
    iVar5 = 0;
    if ((int)param_1 != 0) {
      iVar5 = (int)param_1 + -1;
    }
  }
  if (iVar5 != 0) {
    return iVar5 + -1;
  }
  return 0;
}



/* Address: 0x1009c25b8 | FUN_1009c25b8 */

void FUN_1009c25b8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  undefined2 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  size_t sVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar5 + -8);
  uVar8 = *(uint *)(lVar7 + 0x54);
  uVar2 = 0;
  if (uVar8 != 0) {
    uVar2 = uVar8 - 1;
  }
  uVar6 = uVar2 - 1;
  sVar9 = *(size_t *)(lVar7 + 0x40);
  if (uVar8 == 0) {
    sVar9 = sVar9 + 1;
  }
  sVar3 = sVar9;
  if (uVar8 < 2) {
    sVar3 = sVar9 + 1;
    uVar6 = 0;
  }
  uVar11 = (uint)sVar3;
  bVar10 = 0;
  if (uVar6 <= param_3 && param_3 - uVar6 != 0) {
    if (uVar11 < 4) {
      uVar1 = ((param_3 - uVar6) + ~(-1 << (ulong)(uVar11 << 3 & 0x1f)) >>
              (ulong)(uVar11 << 3 & 0x1f)) + 1;
      bVar10 = 2;
      if (0xffff < uVar1) {
        bVar10 = 4;
      }
      if (uVar1 < 0x100) {
        bVar10 = 1 < uVar1;
      }
    }
    else {
      bVar10 = 1;
    }
  }
  if (uVar6 < param_2) {
    param_2 = param_2 + ~uVar6;
    if (uVar11 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
      if (uVar11 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar11 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar4 = (undefined2)uVar2;
        if (uVar11 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar11 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar3);
      *param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(char *)((long)param_1 + sVar3) = (char)iVar12;
      }
    }
    else if (bVar10 == 2) {
      *(short *)((long)param_1 + sVar3) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar3) = iVar12;
    }
  }
  else {
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar3) = 0;
      }
    }
    else if (bVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar3) = 0;
    }
    if (param_2 != 0) {
      if (uVar2 < param_2 + 1) {
        uVar6 = (uint)sVar9;
        uVar8 = 0xffffffff;
        if (uVar6 < 4) {
          uVar8 = ~(-1 << (ulong)((uVar6 & 3) << 3));
        }
        if (uVar6 != 0) {
          uVar8 = uVar8 & param_2 - uVar2;
          uVar2 = 4;
          if (uVar6 < 4) {
            uVar2 = uVar6;
          }
          _bzero(param_1,sVar9);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)param_1 = (char)uVar8;
            }
            else {
              *(short *)param_1 = (short)uVar8;
            }
          }
          else if (uVar2 == 3) {
            *(short *)param_1 = (short)uVar8;
            *(char *)((long)param_1 + 2) = (char)(uVar8 >> 0x10);
          }
          else {
            *param_1 = uVar8;
          }
        }
      }
      else if ((param_2 != 0xffffffff) && (1 < uVar8)) {
                    /* WARNING: Could not recover jumptable at 0x0001009c27a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(param_1,param_2 + 2,uVar8,lVar5);
        return;
      }
    }
  }
  return;
}



/* Address: 0x1009c2834 | FUN_1009c2834 */

int FUN_1009c2834(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (uVar2 == 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar2 < 2) {
    if (*(byte *)((long)param_1 + uVar7) == 0) {
      iVar3 = 0;
    }
    else {
      uVar6 = (uint)uVar7;
      uVar2 = 0;
      if (uVar6 < 4) {
        uVar2 = *(byte *)((long)param_1 + uVar7) - 1 << (ulong)((uVar6 & 3) << 3);
      }
      if (uVar6 != 0) {
        uVar1 = 4;
        if (uVar6 < 4) {
          uVar1 = uVar6;
        }
        if ((int)uVar1 < 3) {
          if (uVar1 == 1) {
            uVar7 = (ulong)(byte)*param_1;
          }
          else {
            uVar7 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar1 == 3) {
          uVar7 = (ulong)(uint3)*param_1;
        }
        else {
          uVar7 = (ulong)*param_1;
        }
      }
      iVar3 = ((uint)uVar7 | uVar2) + 1;
    }
  }
  else {
    (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
    iVar3 = 0;
    if ((int)param_1 != 0) {
      iVar3 = (int)param_1 + -1;
    }
  }
  return iVar3;
}



/* Address: 0x1009c2920 | FUN_1009c2920 */

void FUN_1009c2920(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  char cVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar7 = 0;
  if (uVar2 != 0) {
    uVar7 = uVar2 - 1;
  }
  sVar6 = *(size_t *)(lVar5 + 0x40);
  if (uVar2 == 0) {
    sVar6 = sVar6 + 1;
  }
  if (uVar7 < param_2) {
    param_2 = param_2 + ~uVar7;
    uVar7 = (uint)sVar6;
    if (uVar7 < 4) {
      cVar8 = (char)(param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + '\x01';
      if (uVar7 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar6);
        uVar3 = (undefined2)uVar1;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar6);
      *param_1 = param_2;
      cVar8 = '\x01';
    }
    if (uVar2 < 2) {
      *(char *)((long)param_1 + sVar6) = cVar8;
    }
  }
  else if (uVar2 < 2) {
    *(undefined1 *)((long)param_1 + sVar6) = 0;
  }
  else if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009c2a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x38))(param_1,param_2 + 1,uVar2,lVar4);
    return;
  }
  return;
}



/* Address: 0x1009c2a6c | FUN_1009c2a6c */

void FUN_1009c2a6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1009c2a80 | FUN_1009c2a80 */

void FUN_1009c2a80(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009c2a8c | FUN_1009c2a8c */

void FUN_1009c2a8c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  if (uVar2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Address: 0x1009c2af4 | FUN_1009c2af4 */

long * FUN_1009c2af4(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar1 + -8);
  uVar3 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  if (((uint)uVar4 < 8 && (*(uint *)(lVar5 + 0x50) & 0x100000) == 0) && uVar3 < 0x19) {
    plVar2 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,lVar1);
    if ((int)plVar2 != 0) {
      plVar2 = _memcpy(param_1,param_2,uVar3);
      return plVar2;
    }
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009c2bf4 | FUN_1009c2bf4 */

void FUN_1009c2bf4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009c2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Address: 0x1009c2c74 | FUN_1009c2c74 */

void * FUN_1009c2c74(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar4 = *(long *)(lVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar1);
  if ((int)pvVar2 != 0) {
    sVar3 = *(size_t *)(lVar4 + 0x40);
    if (*(int *)(lVar4 + 0x54) == 0) {
      sVar3 = sVar3 + 1;
    }
    pvVar2 = _memcpy(param_1,param_2,sVar3);
    return pvVar2;
  }
  (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Address: 0x1009c2d30 | FUN_1009c2d30 */

void * FUN_1009c2d30(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar3 = param_1;
  (*pcVar6)(param_1,1,lVar1);
  pvVar2 = param_2;
  (*pcVar6)(param_2,1,lVar1);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 != 0) {
      (**(code **)(lVar5 + 8))(param_1,lVar1);
      goto LAB_1009c2de4;
    }
    (**(code **)(lVar5 + 0x18))(param_1,param_2,lVar1);
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_1009c2de4:
      sVar4 = *(size_t *)(lVar5 + 0x40);
      if (*(int *)(lVar5 + 0x54) == 0) {
        sVar4 = sVar4 + 1;
      }
      pvVar3 = _memcpy(param_1,param_2,sVar4);
      return pvVar3;
    }
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
  }
  return param_1;
}



/* Address: 0x1009c2e3c | FUN_1009c2e3c */

void * FUN_1009c2e3c(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar4 = *(long *)(lVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar1);
  if ((int)pvVar2 != 0) {
    sVar3 = *(size_t *)(lVar4 + 0x40);
    if (*(int *)(lVar4 + 0x54) == 0) {
      sVar3 = sVar3 + 1;
    }
    pvVar2 = _memcpy(param_1,param_2,sVar3);
    return pvVar2;
  }
  (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Address: 0x1009c2ef8 | FUN_1009c2ef8 */

void * FUN_1009c2ef8(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar3 = param_1;
  (*pcVar6)(param_1,1,lVar1);
  pvVar2 = param_2;
  (*pcVar6)(param_2,1,lVar1);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 != 0) {
      (**(code **)(lVar5 + 8))(param_1,lVar1);
      goto LAB_1009c2fac;
    }
    (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar1);
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_1009c2fac:
      sVar4 = *(size_t *)(lVar5 + 0x40);
      if (*(int *)(lVar5 + 0x54) == 0) {
        sVar4 = sVar4 + 1;
      }
      pvVar3 = _memcpy(param_1,param_2,sVar4);
      return pvVar3;
    }
    (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar1);
  }
  return param_1;
}



/* Address: 0x1009c3004 | FUN_1009c3004 */

int FUN_1009c3004(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar2 - 1;
  }
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (uVar2 == 0) {
    uVar7 = uVar7 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1009c30d4;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1009c30d4;
      goto LAB_1009c306c;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1009c306c:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar2) + 1;
  }
LAB_1009c30d4:
  if (uVar2 < 2) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  if ((int)param_1 != 0) {
    return (int)param_1 + -1;
  }
  return 0;
}



/* Address: 0x1009c3150 | FUN_1009c3150 */

void FUN_1009c3150(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  bVar10 = 0;
  lVar6 = *(long *)(lVar5 + -8);
  uVar3 = *(uint *)(lVar6 + 0x54);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar3 - 1;
  }
  sVar7 = *(size_t *)(lVar6 + 0x40);
  if (uVar3 == 0) {
    sVar7 = sVar7 + 1;
  }
  uVar8 = (uint)sVar7;
  if (uVar2 <= param_3 && param_3 - uVar2 != 0) {
    if (uVar8 < 4) {
      uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar8 << 3 & 0x1f)) >> (ulong)(uVar8 << 3 & 0x1f)
              ) + 1;
      bVar10 = 2;
      if (0xffff < uVar1) {
        bVar10 = 4;
      }
      if (uVar1 < 0x100) {
        bVar10 = 1 < uVar1;
      }
    }
    else {
      bVar10 = 1;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar8 < 4) {
      iVar9 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar7);
        uVar4 = (undefined2)uVar2;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar7);
      *param_1 = param_2;
      iVar9 = 1;
    }
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(char *)((long)param_1 + sVar7) = (char)iVar9;
      }
    }
    else if (bVar10 == 2) {
      *(short *)((long)param_1 + sVar7) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar7) = iVar9;
    }
  }
  else {
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar7) = 0;
      }
    }
    else if (bVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar7) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar7) = 0;
    }
    if ((param_2 != 0) && (1 < uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x0001009c32d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))(param_1,param_2 + 1,uVar3,lVar5);
      return;
    }
  }
  return;
}



/* Address: 0x1009c3334 | FUN_1009c3334 */

void FUN_1009c3334(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
                    /* WARNING: Could not recover jumptable at 0x0001009c3380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  return;
}



/* Address: 0x1009c3384 | FUN_1009c3384 */

void FUN_1009c3384(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
                    /* WARNING: Could not recover jumptable at 0x0001009c33d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,1,lVar1);
  return;
}



/* Address: 0x1009c33d8 | FUN_1009c33d8 */

void FUN_1009c33d8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c8c238;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1009c345c | FUN_1009c345c */

long * FUN_1009c345c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar2 + 0x40);
  uVar3 = (ulong)*(uint *)(lVar2 + 0x50) & 0xff;
  if (((uint)uVar3 < 8 && lVar4 + 1U < 0x19) && (*(uint *)(lVar2 + 0x50) & 0x100000) == 0) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2,lVar1);
    *(undefined1 *)(lVar4 + (long)param_1) = *(undefined1 *)(lVar4 + (long)param_2);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009c3504 | FUN_1009c3504 */

void FUN_1009c3504(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x0001009c354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Address: 0x1009c3550 | FUN_1009c3550 */

long FUN_1009c3550(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40);
  *(undefined1 *)(lVar1 + param_1) = *(undefined1 *)(lVar1 + param_2);
  return param_1;
}



/* Address: 0x1009c35bc | FUN_1009c35bc */

long FUN_1009c35bc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x18))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40);
  *(undefined1 *)(lVar1 + param_1) = *(undefined1 *)(lVar1 + param_2);
  return param_1;
}



/* Address: 0x1009c3628 | FUN_1009c3628 */

long FUN_1009c3628(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x20))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40);
  *(undefined1 *)(lVar1 + param_1) = *(undefined1 *)(lVar1 + param_2);
  return param_1;
}



/* Address: 0x1009c3694 | FUN_1009c3694 */

long FUN_1009c3694(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x28))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40);
  *(undefined1 *)(lVar1 + param_1) = *(undefined1 *)(lVar1 + param_2);
  return param_1;
}



/* Address: 0x1009c3700 | FUN_1009c3700 */

uint * FUN_1009c3700(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar6 = *(long *)(lVar3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x54);
  uVar5 = uVar1;
  if (uVar1 < 0xff) {
    uVar5 = 0xfe;
  }
  if (param_2 == 0) {
LAB_1009c37f8:
    puVar4 = (uint *)0x0;
  }
  else {
    if (param_2 < uVar5 || param_2 - uVar5 == 0) {
LAB_1009c37d0:
      if (0xfd < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001009c37e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x30))(param_1,uVar1,lVar3);
        return param_1;
      }
      uVar5 = (uint)*(byte *)(*(long *)(lVar6 + 0x40) + (long)param_1);
      if (uVar5 < 2) goto LAB_1009c37f8;
      uVar5 = uVar5 + 0x7ffffffe & 0x7fffffff;
    }
    else {
      uVar8 = *(long *)(lVar6 + 0x40) + 1;
      uVar7 = (uint)uVar8;
      uVar2 = uVar7 << 3;
      if (uVar7 < 4) {
        uVar9 = ((param_2 - uVar5) + ~(-1 << (ulong)(uVar2 & 0x1f)) >> (ulong)(uVar2 & 0x1f)) + 1;
        if (uVar9 < 0x100) {
          if (uVar9 < 2) goto LAB_1009c37d0;
          goto LAB_1009c3768;
        }
        if (uVar9 >> 0x10 == 0) {
          uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
        }
        else {
          uVar9 = *(uint *)((long)param_1 + uVar8);
        }
      }
      else {
LAB_1009c3768:
        uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
      }
      if (uVar9 == 0) goto LAB_1009c37d0;
      uVar1 = 0;
      if (uVar7 < 4) {
        uVar1 = uVar9 - 1 << (ulong)(uVar2 & 0x1f);
      }
      if (uVar7 != 0) {
        uVar2 = 4;
        if (uVar7 < 4) {
          uVar2 = uVar7;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar8 = (ulong)(byte)*param_1;
          }
          else {
            uVar8 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar2 == 3) {
          uVar8 = (ulong)(uint3)*param_1;
        }
        else {
          uVar8 = (ulong)*param_1;
        }
      }
      uVar5 = uVar5 + ((uint)uVar8 | uVar1);
    }
    puVar4 = (uint *)(ulong)(uVar5 + 1);
  }
  return puVar4;
}



/* Address: 0x1009c3864 | FUN_1009c3864 */

void FUN_1009c3864(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar3 = uVar4;
  if (uVar4 < 0xff) {
    uVar3 = 0xfe;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  sVar2 = lVar8 + 1;
  uVar10 = (uint)sVar2;
  uVar11 = (uint)param_2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar9 = 0;
  }
  else if (uVar10 < 4) {
    uVar1 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar10 << 3 & 0x1f)) >> (ulong)(uVar10 << 3 & 0x1f)
            ) + 1;
    bVar9 = 2;
    if (0xffff < uVar1) {
      bVar9 = 4;
    }
    if (uVar1 < 0x100) {
      bVar9 = 1 < uVar1;
    }
  }
  else {
    bVar9 = 1;
  }
  if (uVar3 < uVar11) {
    uVar11 = uVar11 + ~uVar3;
    if (uVar10 < 4) {
      iVar12 = (uVar11 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar3 = uVar11 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)uVar11;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = uVar11;
      iVar12 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar12;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar12;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (uVar11 != 0) {
      if (0xfd < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001009c39f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(param_1,param_2,uVar4,lVar6);
        return;
      }
      *(char *)((long)param_1 + lVar8) = (char)param_2 + '\x01';
    }
  }
  return;
}



/* Address: 0x1009c3a68 | thunk_FUN_1007090f4 */

void thunk_FUN_1007090f4(void)

{
  FUN_1007090f4();
  return;
}



/* Address: 0x1009c3a6c | thunk_FUN_1009bfac4 */

void thunk_FUN_1009bfac4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1009c3a70 | FUN_1009c3a70 */

void FUN_1009c3a70(void)

{
  _swift_task_switch(FUN_1009c3a84,0,0);
  return;
}



/* Address: 0x1009c3a84 | FUN_1009c3a84 */

void FUN_1009c3a84(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = 0;
  FUN_1009c4f0c();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x10) = lVar2;
  _swift_defaultActor_initialize();
  lVar1 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  puVar3 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  (**(code **)(*(long *)(puVar3 + -8) + 0x38))(lVar2 + lVar1,1,1,puVar3);
  plVar4 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009c3b2c;
  FUN_1009c3f40();
  return;
}



/* Address: 0x1009c3b2c | FUN_1009c3b2c */

void FUN_1009c3b2c(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009c3b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1);
  return;
}



/* Address: 0x1009c3b80 | FUN_1009c3b80 */

void FUN_1009c3b80(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1009c3b98,0,0);
  return;
}



/* Address: 0x1009c3b98 | FUN_1009c3b98 */

void FUN_1009c3b98(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = 0;
  FUN_1009c4f0c();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x18) = lVar2;
  _swift_defaultActor_initialize();
  lVar1 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  puVar3 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  (**(code **)(*(long *)(puVar3 + -8) + 0x38))(lVar2 + lVar1,1,1,puVar3);
  plVar4 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009c3c40;
  FUN_1009c3f40();
  return;
}



/* Address: 0x1009c3c40 | FUN_1009c3c40 */

void FUN_1009c3c40(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  puVar3 = *(undefined1 **)(lVar2 + 0x10);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  _swift_release(uVar1);
  *puVar3 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001009c3ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x1009c3ca4 | FUN_1009c3ca4 */

void FUN_1009c3ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1009c3cc0,0,0);
  return;
}



/* Address: 0x1009c3cc0 | FUN_1009c3cc0 */

void FUN_1009c3cc0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = 0;
  FUN_1009c4f0c();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x28) = lVar2;
  _swift_defaultActor_initialize();
  lVar1 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  puVar3 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  (**(code **)(*(long *)(puVar3 + -8) + 0x38))(lVar2 + lVar1,1,1,puVar3);
  plVar4 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009c3d68;
  FUN_1009c3f40();
  return;
}



/* Address: 0x1009c3d68 | FUN_1009c3d68 */

void FUN_1009c3d68(undefined1 param_1)

{
  UnownedSerialExecutor UVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  lVar3 = *(long *)(lVar4 + 0x18);
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x30));
  _swift_release(uVar2);
  if (lVar3 == 0) {
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    _swift_getObjectType(*(undefined8 *)(lVar4 + 0x18));
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined1 *)(lVar4 + 0x38) = param_1;
  _swift_task_switch(FUN_1009c3dfc,UVar1.unknown,uVar2);
  return;
}



/* Address: 0x1009c3dfc | FUN_1009c3dfc */

void FUN_1009c3dfc(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = *(undefined1 *)(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0001009c3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c3e14 | thunk_FUN_1009c3e18 */

void thunk_FUN_1009c3e18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff2f70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8c290;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c290,&DAT_100f25c38);
  DAT_100ff2f70 = pTVar1;
  return;
}



/* Address: 0x1009c3e18 | FUN_1009c3e18 */

void FUN_1009c3e18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff2f70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8c290;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c290,&DAT_100f25c38);
  DAT_100ff2f70 = pTVar1;
  return;
}



/* Address: 0x1009c3e58 | FUN_1009c3e58 */

undefined1  [16] FUN_1009c3e58(void)

{
  return ZEXT816(0x100f25c18);
}



/* Address: 0x1009c3e68 | FUN_1009c3e68 */

undefined1  [16] FUN_1009c3e68(void)

{
  return ZEXT816(0x100f25c38);
}



/* Address: 0x1009c3e78 | FUN_1009c3e78 */

long FUN_1009c3e78(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_allocObject();
  _swift_defaultActor_initialize();
  lVar1 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  puVar2 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,puVar2);
  return unaff_x20;
}



/* Address: 0x1009c3ee4 | FUN_1009c3ee4 */

void FUN_1009c3ee4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_defaultActor_initialize();
  lVar1 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  puVar2 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,puVar2);
  return;
}



/* Address: 0x1009c3f40 | FUN_1009c3f40 */

void FUN_1009c3f40(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_1009c3f58);
  return;
}



/* Address: 0x1009c3f58 | FUN_1009c3f58 */

void FUN_1009c3f58(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  long unaff_x22;
  
  FUN_1009c4ec8();
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x20) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1009c4054;
    Swift::_withTaskCancellationHandler();
    return;
  }
  if (*(long *)(unaff_x22 + 0x10) == 0) {
    UVar3.unknown = (undefined *)0x0;
    param_1 = 0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x10));
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x28) = UVar3.unknown;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  _swift_task_switch(FUN_1009c40b4,UVar3.unknown);
  return;
}



/* Address: 0x1009c4054 | FUN_1009c4054 */

void FUN_1009c4054(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009c40b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined1 *)(lVar1 + 0x48));
  return;
}



/* Address: 0x1009c40b4 | FUN_1009c40b4 */

void FUN_1009c40b4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar1 = FUN_1009c4ea0;
  _swift_task_addCancellationHandler(FUN_1009c4ea0,uVar2);
  *(code **)(unaff_x22 + 0x38) = pcVar1;
  _swift_task_switch(FUN_1009c4108,uVar2,0);
  return;
}



/* Address: 0x1009c4108 | FUN_1009c4108 */

void FUN_1009c4108(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  plVar3 = (long *)0x80;
  _swift_retain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1009c41a0;
  FUN_1009c4944(uVar1,uVar2,&DAT_100c8c378,*(undefined8 *)(unaff_x22 + 0x10),FUN_1009c4fa0,
                *(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1009c41a0 | FUN_1009c41a0 */

void FUN_1009c41a0(undefined1 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    _swift_release(uVar1);
    return;
  }
  _swift_release(uVar1);
  *(undefined1 *)(lVar2 + 0x49) = param_1;
  _swift_task_switch(FUN_1009c422c,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30));
  return;
}



/* Address: 0x1009c422c | FUN_1009c422c */

void FUN_1009c422c(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001009c4264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x49));
  return;
}



/* Address: 0x1009c4268 | FUN_1009c4268 */

void FUN_1009c4268(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1009c427c,param_2,0);
  return;
}



/* Address: 0x1009c427c | FUN_1009c427c */

void FUN_1009c427c(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_1009c4ec8();
  plVar1 = (long *)0x80;
  _swift_retain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009c431c;
  FUN_1009c4944(uVar2,param_1,&UNK_100c8c490,*(undefined8 *)(unaff_x22 + 0x18),thunk_FUN_1009c4fa0,
                *(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1009c431c | FUN_1009c431c */

void FUN_1009c431c(undefined1 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    _swift_errorRelease();
    _swift_release(uVar4);
    return;
  }
  puVar1 = *(undefined1 **)(lVar2 + 0x10);
  _swift_release(*(undefined8 *)(lVar2 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001009c43a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1009c43a4 | FUN_1009c43a4 */

void FUN_1009c43a4(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1009c4268(plVar1,param_1);
  return;
}



/* Address: 0x1009c4400 | FUN_1009c4400 */

void FUN_1009c4400(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  _swift_task_switch(FUN_1009c4414,param_2,0);
  return;
}



/* Address: 0x1009c4414 | FUN_1009c4414 */

void FUN_1009c4414(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  void *pvVar4;
  long unaff_x22;
  String isolation;
  
  FUN_1009c4ec8();
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  pvVar4 = *(void **)(unaff_x22 + 0x70);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1009c4504;
    isolation.bridgeObject = pvVar4;
    isolation.str = *(char **)(unaff_x22 + 0x68);
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  if (pvVar4 == (void *)0x0) {
    UVar3.unknown = (undefined *)0x0;
    param_1 = 0;
  }
  else {
    _swift_getObjectType(pvVar4);
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1009c454c,UVar3.unknown,param_1);
  return;
}



/* Address: 0x1009c4504 | FUN_1009c4504 */

void FUN_1009c4504(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001009c4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1009c454c | FUN_1009c454c */

void FUN_1009c454c(void)

{
  long lVar1;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x22;
  long lVar6;
  String function;
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x68);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1007573b8;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar2 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  lVar6 = *(long *)(puVar2 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  function.bridgeObject = &DAT_e600000000000000;
  function.str = (char *)0x292874696177;
  Swift::CheckedContinuation::init(continuation,function);
  puVar4 = &DAT_100ff2f88;
  FUN_1000f7830(&DAT_100ff2f88,&DAT_100c8c660);
  uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (**(code **)(lVar6 + 0x20))();
  (**(code **)(lVar6 + 0x38))(uVar5,0,1,puVar2);
  lVar6 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  _swift_beginAccess(lVar1 + _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation,
                     unaff_x22 + 0x50,0x21,0);
  FUN_1009c53a4(uVar5,lVar1 + lVar6);
  _swift_endAccess(unaff_x22 + 0x50);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1009c46a8 | FUN_1009c46a8 */

void FUN_1009c46a8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100ff2f88;
  FUN_1000f7830(&DAT_100ff2f88,&DAT_100c8c660);
  puVar2 = auStack_60 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  lVar3 = *(long *)(puVar1 + -8);
  (**(code **)(lVar3 + 0x10))(puVar2,param_1,puVar1);
  (**(code **)(lVar3 + 0x38))(puVar2,0,1,puVar1);
  lVar3 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  _swift_beginAccess(param_2 + _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation,
                     auStack_58,0x21,0);
  FUN_1009c53a4(puVar2,param_2 + lVar3);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x1009c4788 | FUN_1009c4788 */

void FUN_1009c4788(undefined8 param_1)

{
  FUN_1009c4ddc(param_1,&DAT_100f25d48,&DAT_100c8c478);
  return;
}



/* Address: 0x1009c479c | FUN_1009c479c */

void FUN_1009c479c(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = in_x3;
  _swift_task_switch(FUN_1009c47b4,in_x3,0);
  return;
}



/* Address: 0x1009c47b4 | FUN_1009c47b4 */

void FUN_1009c47b4(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x40);
  puVar2 = &DAT_100ff2f88;
  FUN_1000f7830(&DAT_100ff2f88,&DAT_100c8c660);
  uVar5 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  lVar1 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  _swift_beginAccess(lVar6 + _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation,
                     unaff_x22 + 0x10,0,0);
  FUN_1009c5354(lVar6 + lVar1,uVar3);
  puVar2 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  lVar7 = *(long *)(puVar2 + -8);
  uVar4 = uVar3;
  (**(code **)(lVar7 + 0x30))(uVar3,1,puVar2);
  if ((int)uVar4 == 0) {
    uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar4);
    (**(code **)(lVar7 + 0x10))();
    FUN_1009c5198(uVar3);
    *(undefined1 *)(unaff_x22 + 0x48) = 1;
    Swift::CheckedContinuation::resume((undefined1 *)(unaff_x22 + 0x48),puVar2);
    (**(code **)(lVar7 + 8))(uVar4,puVar2);
    _swift_task_dealloc(uVar4);
  }
  else {
    FUN_1009c5198(uVar3);
  }
  _swift_task_dealloc(uVar3);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (**(code **)(lVar7 + 0x38))();
  _swift_beginAccess(lVar6 + lVar1,unaff_x22 + 0x28,0x21,0);
  FUN_1009c53a4(uVar5,lVar6 + lVar1);
  _swift_endAccess(unaff_x22 + 0x28);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001009c4940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


