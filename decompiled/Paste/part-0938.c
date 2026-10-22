/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a219b0 | FUN_100a219b0 */

void FUN_100a219b0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a219d4 | FUN_100a219d4 */

undefined8 FUN_100a219d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff4b70;
  FUN_1000f7830(&DAT_100ff4b70,&DAT_100c8e1e8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100a21a24 | FUN_100a21a24 */

void FUN_100a21a24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  if (uVar2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar1 + -8) + 0x40,param_4);
  }
  return;
}



/* Address: 0x100a21a90 | FUN_100a21a90 */

long * FUN_100a21a90(long *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  size_t sVar10;
  long lVar11;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar11 = *(long *)(lVar3 + -8);
  uVar2 = *(uint *)(lVar11 + 0x54);
  sVar10 = *(ulong *)(lVar11 + 0x40);
  uVar9 = (uint)sVar10;
  uVar6 = sVar10;
  if (uVar2 < 2) {
    if (uVar9 < 4) {
      uVar7 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      uVar6 = 2;
      if (0xfffe < uVar7) {
        uVar6 = 4;
      }
      if (uVar7 < 0xff) {
        uVar6 = (ulong)(uVar7 != 0);
      }
    }
    else {
      uVar6 = 1;
    }
    uVar6 = uVar6 + sVar10;
  }
  uVar8 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  if ((7 < (uint)uVar8 || 0x18 < uVar6) || (*(uint *)(lVar11 + 0x50) & 0x100000) != 0) {
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    _swift_retain();
    return (long *)(lVar3 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
  }
  if (uVar2 < 2) {
    if (uVar9 < 4) {
      uVar7 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      if (0xfe < uVar7) {
        if (uVar7 < 0xffff) {
          uVar7 = (uint)*(ushort *)((long)param_2 + sVar10);
        }
        else {
          uVar7 = *(uint *)((long)param_2 + sVar10);
        }
        goto LAB_100a21bc0;
      }
      if (uVar7 != 0) goto LAB_100a21bbc;
LAB_100a21c00:
      if (uVar2 == 0) {
LAB_100a21d1c:
        (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar3);
        goto joined_r0x000100a21c48;
      }
      goto LAB_100a21c04;
    }
LAB_100a21bbc:
    uVar7 = (uint)*(byte *)((long)param_2 + sVar10);
LAB_100a21bc0:
    if (uVar7 == 0) goto LAB_100a21c00;
    uVar1 = 0;
    if (uVar9 < 4) {
      uVar1 = uVar7 - 1 << (ulong)((uVar9 & 3) << 3);
    }
    if (uVar9 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 4;
      if (uVar9 < 4) {
        uVar7 = uVar9;
      }
      if ((int)uVar7 < 3) {
        if (uVar7 == 1) {
          uVar7 = (uint)(byte)*param_2;
        }
        else {
          uVar7 = (uint)(ushort)*param_2;
        }
      }
      else if (uVar7 == 3) {
        uVar7 = (uint)(uint3)*param_2;
      }
      else {
        uVar7 = *param_2;
      }
    }
    if ((uVar7 | uVar1) + uVar2 == -1) goto LAB_100a21d1c;
  }
  else {
LAB_100a21c04:
    puVar4 = param_2;
    (**(code **)(lVar11 + 0x30))(param_2,uVar2,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar3);
      if (1 < uVar2) {
        return param_1;
      }
joined_r0x000100a21c48:
      if (uVar9 < 4) {
        uVar2 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
        if (0xfe < uVar2) {
          if (0xfffe < uVar2) {
            *(undefined4 *)((long)param_1 + sVar10) = 0;
            return param_1;
          }
          *(undefined2 *)((long)param_1 + sVar10) = 0;
          return param_1;
        }
        if (uVar2 == 0) {
          return param_1;
        }
      }
      *(undefined1 *)((long)param_1 + sVar10) = 0;
      return param_1;
    }
    if (1 < uVar2) goto LAB_100a21cfc;
  }
  if (uVar9 < 4) {
    uVar2 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar2) {
      uVar6 = 4;
    }
    if (uVar2 < 0xff) {
      uVar6 = (ulong)(uVar2 != 0);
    }
  }
  else {
    uVar6 = 1;
  }
  sVar10 = uVar6 + sVar10;
LAB_100a21cfc:
  plVar5 = _memcpy(param_1,param_2,sVar10);
  return plVar5;
}



/* Address: 0x100a21d84 | FUN_100a21d84 */

void FUN_100a21d84(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar9 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar9 + 0x54);
  if (uVar2 < 2) {
    uVar7 = *(ulong *)(lVar9 + 0x40);
    uVar6 = (uint)uVar7;
    uVar3 = uVar6 << 3;
    if (uVar6 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar3 & 0x1f);
      if (0xfe < uVar8) {
        if (uVar8 < 0xffff) {
          uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
        }
        else {
          uVar8 = *(uint *)((long)param_1 + uVar7);
        }
        goto LAB_100a21e04;
      }
      if (uVar8 != 0) goto LAB_100a21e00;
    }
    else {
LAB_100a21e00:
      uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
LAB_100a21e04:
      if (uVar8 != 0) {
        uVar1 = 0;
        if (uVar6 < 4) {
          uVar1 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
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
        if (uVar2 + ((uint)uVar7 | uVar1) != -1) {
          return;
        }
        goto LAB_100a21eb8;
      }
    }
    if (uVar2 == 0) goto LAB_100a21eb8;
  }
  puVar5 = param_1;
  (**(code **)(lVar9 + 0x30))(param_1,uVar2,lVar4);
  if ((int)puVar5 != 0) {
    return;
  }
LAB_100a21eb8:
                    /* WARNING: Could not recover jumptable at 0x000100a21ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 8))(param_1,lVar4);
  return;
}



/* Address: 0x100a21ed4 | FUN_100a21ed4 */

void * FUN_100a21ed4(void *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  long lVar10;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar10 = *(long *)(lVar3 + -8);
  uVar2 = *(uint *)(lVar10 + 0x54);
  sVar9 = *(size_t *)(lVar10 + 0x40);
  uVar8 = (uint)sVar9;
  if (uVar2 < 2) {
    if (uVar8 < 4) {
      uVar7 = (~(-1 << (ulong)(uVar8 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar8 << 3 & 0x1f);
      if (0xfe < uVar7) {
        if (uVar7 < 0xffff) {
          uVar7 = (uint)*(ushort *)((long)param_2 + sVar9);
        }
        else {
          uVar7 = *(uint *)((long)param_2 + sVar9);
        }
        goto LAB_100a21f58;
      }
      if (uVar7 != 0) goto LAB_100a21f54;
LAB_100a21f98:
      if (uVar2 == 0) {
LAB_100a220b4:
        (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar3);
        goto joined_r0x000100a21fe0;
      }
      goto LAB_100a21f9c;
    }
LAB_100a21f54:
    uVar7 = (uint)*(byte *)((long)param_2 + sVar9);
LAB_100a21f58:
    if (uVar7 == 0) goto LAB_100a21f98;
    uVar1 = 0;
    if (uVar8 < 4) {
      uVar1 = uVar7 - 1 << (ulong)((uVar8 & 3) << 3);
    }
    if (uVar8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 4;
      if (uVar8 < 4) {
        uVar7 = uVar8;
      }
      if ((int)uVar7 < 3) {
        if (uVar7 == 1) {
          uVar7 = (uint)(byte)*param_2;
        }
        else {
          uVar7 = (uint)(ushort)*param_2;
        }
      }
      else if (uVar7 == 3) {
        uVar7 = (uint)(uint3)*param_2;
      }
      else {
        uVar7 = *param_2;
      }
    }
    if ((uVar7 | uVar1) + uVar2 == -1) goto LAB_100a220b4;
  }
  else {
LAB_100a21f9c:
    puVar4 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,uVar2,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar3);
      if (1 < uVar2) {
        return param_1;
      }
joined_r0x000100a21fe0:
      if (uVar8 < 4) {
        uVar2 = (~(-1 << (ulong)(uVar8 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar8 << 3 & 0x1f);
        if (0xfe < uVar2) {
          if (0xfffe < uVar2) {
            *(undefined4 *)((long)param_1 + sVar9) = 0;
            return param_1;
          }
          *(undefined2 *)((long)param_1 + sVar9) = 0;
          return param_1;
        }
        if (uVar2 == 0) {
          return param_1;
        }
      }
      *(undefined1 *)((long)param_1 + sVar9) = 0;
      return param_1;
    }
    if (1 < uVar2) goto LAB_100a22094;
  }
  if (uVar8 < 4) {
    uVar2 = (~(-1 << (ulong)(uVar8 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar8 << 3 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar2) {
      uVar6 = 4;
    }
    if (uVar2 < 0xff) {
      uVar6 = (ulong)(uVar2 != 0);
    }
  }
  else {
    uVar6 = 1;
  }
  sVar9 = uVar6 + sVar9;
LAB_100a22094:
  pvVar5 = _memcpy(param_1,param_2,sVar9);
  return pvVar5;
}



/* Address: 0x100a22130 | FUN_100a22130 */

uint * FUN_100a22130(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  long lVar11;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar11 = *(long *)(lVar4 + -8);
  uVar3 = *(uint *)(lVar11 + 0x54);
  sVar10 = *(size_t *)(lVar11 + 0x40);
  uVar9 = (uint)sVar10;
  if (uVar3 < 2) {
    if (uVar9 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      if (0xfe < uVar8) {
        if (uVar8 < 0xffff) {
          uVar8 = (uint)*(ushort *)((long)param_1 + sVar10);
        }
        else {
          uVar8 = *(uint *)((long)param_1 + sVar10);
        }
        goto LAB_100a221b8;
      }
      if (uVar8 != 0) goto LAB_100a221b4;
LAB_100a2222c:
      if ((uVar3 == 0) ||
         (puVar5 = param_1, (**(code **)(lVar11 + 0x30))(param_1,uVar3,lVar4), (int)puVar5 == 0)) {
LAB_100a22248:
        if (uVar9 < 4) {
          uVar8 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
          if (0xfe < uVar8) {
            if (uVar8 < 0xffff) {
              uVar8 = (uint)*(ushort *)((long)param_2 + sVar10);
            }
            else {
              uVar8 = *(uint *)((long)param_2 + sVar10);
            }
            goto LAB_100a2227c;
          }
          if (uVar8 != 0) goto LAB_100a22278;
LAB_100a222d8:
          if (uVar3 != 0) {
            pcVar7 = *(code **)(lVar11 + 0x30);
            goto LAB_100a222e0;
          }
        }
        else {
LAB_100a22278:
          uVar8 = (uint)*(byte *)((long)param_2 + sVar10);
LAB_100a2227c:
          if (uVar8 == 0) goto LAB_100a222d8;
          uVar2 = 0;
          if (uVar9 < 4) {
            uVar2 = uVar8 - 1 << (ulong)((uVar9 & 3) << 3);
          }
          if (uVar9 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 4;
            if (uVar9 < 4) {
              uVar8 = uVar9;
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
          if (uVar3 + (uVar8 | uVar2) != -1) goto LAB_100a222f4;
        }
        goto LAB_100a22568;
      }
    }
    else {
LAB_100a221b4:
      uVar8 = (uint)*(byte *)((long)param_1 + sVar10);
LAB_100a221b8:
      if (uVar8 == 0) goto LAB_100a2222c;
      uVar2 = 0;
      if (uVar9 < 4) {
        uVar2 = uVar8 - 1 << (ulong)((uVar9 & 3) << 3);
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar9 < 4) {
          uVar8 = uVar9;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_1;
          }
          else {
            uVar8 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_1;
        }
        else {
          uVar8 = *param_1;
        }
      }
      if ((uVar8 | uVar2) + uVar3 == -1) goto LAB_100a22248;
    }
    if (uVar9 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      if (0xfe < uVar8) {
        if (uVar8 < 0xffff) {
          uVar8 = (uint)*(ushort *)((long)param_2 + sVar10);
        }
        else {
          uVar8 = *(uint *)((long)param_2 + sVar10);
        }
        goto LAB_100a223e4;
      }
      if (uVar8 != 0) goto LAB_100a223e0;
LAB_100a22424:
      if ((uVar3 == 0) ||
         (puVar5 = param_2, (**(code **)(lVar11 + 0x30))(param_2,uVar3,lVar4), (int)puVar5 == 0)) {
LAB_100a22440:
        (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar4);
        if (uVar9 < 4) {
          uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
          if (0xfe < uVar3) {
            if (0xfffe < uVar3) {
              pbVar1 = (byte *)((long)param_1 + sVar10);
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              return param_1;
            }
            ((byte *)((long)param_1 + sVar10))[0] = 0;
            ((byte *)((long)param_1 + sVar10))[1] = 0;
            return param_1;
          }
          if (uVar3 == 0) {
            return param_1;
          }
        }
        *(byte *)((long)param_1 + sVar10) = 0;
        return param_1;
      }
    }
    else {
LAB_100a223e0:
      uVar8 = (uint)*(byte *)((long)param_2 + sVar10);
LAB_100a223e4:
      if (uVar8 == 0) goto LAB_100a22424;
      uVar2 = 0;
      if (uVar9 < 4) {
        uVar2 = uVar8 - 1 << (ulong)((uVar9 & 3) << 3);
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar9 < 4) {
          uVar8 = uVar9;
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
      if ((uVar8 | uVar2) + uVar3 == -1) goto LAB_100a22440;
    }
    if (uVar9 < 4) goto LAB_100a22314;
LAB_100a22520:
    uVar6 = 1;
  }
  else {
    pcVar7 = *(code **)(lVar11 + 0x30);
    puVar5 = param_1;
    (*pcVar7)(param_1,uVar3,lVar4);
    if ((int)puVar5 != 0) {
      puVar5 = param_2;
      (*pcVar7)(param_2,uVar3,lVar4);
      if ((int)puVar5 == 0) {
        pcVar7 = *(code **)(lVar11 + 0x10);
        goto LAB_100a2256c;
      }
      goto LAB_100a22528;
    }
LAB_100a222e0:
    puVar5 = param_2;
    (*pcVar7)(param_2,uVar3,lVar4);
    if ((int)puVar5 == 0) {
LAB_100a22568:
      pcVar7 = *(code **)(lVar11 + 0x18);
LAB_100a2256c:
      (*pcVar7)(param_1,param_2,lVar4);
      return param_1;
    }
LAB_100a222f4:
    (**(code **)(lVar11 + 8))(param_1,lVar4);
    if (1 < uVar3) goto LAB_100a22528;
    if (3 < uVar9) goto LAB_100a22520;
LAB_100a22314:
    uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar3) {
      uVar6 = 4;
    }
    if (uVar3 < 0xff) {
      uVar6 = (ulong)(uVar3 != 0);
    }
  }
  sVar10 = uVar6 + sVar10;
LAB_100a22528:
  puVar5 = _memcpy(param_1,param_2,sVar10);
  return puVar5;
}



/* Address: 0x100a225a0 | FUN_100a225a0 */

void * FUN_100a225a0(void *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  long lVar10;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar10 = *(long *)(lVar3 + -8);
  uVar2 = *(uint *)(lVar10 + 0x54);
  sVar9 = *(size_t *)(lVar10 + 0x40);
  uVar8 = (uint)sVar9;
  if (uVar2 < 2) {
    if (uVar8 < 4) {
      uVar7 = (~(-1 << (ulong)(uVar8 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar8 << 3 & 0x1f);
      if (0xfe < uVar7) {
        if (uVar7 < 0xffff) {
          uVar7 = (uint)*(ushort *)((long)param_2 + sVar9);
        }
        else {
          uVar7 = *(uint *)((long)param_2 + sVar9);
        }
        goto LAB_100a22624;
      }
      if (uVar7 != 0) goto LAB_100a22620;
LAB_100a22664:
      if (uVar2 == 0) {
LAB_100a22780:
        (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar3);
        goto joined_r0x000100a226ac;
      }
      goto LAB_100a22668;
    }
LAB_100a22620:
    uVar7 = (uint)*(byte *)((long)param_2 + sVar9);
LAB_100a22624:
    if (uVar7 == 0) goto LAB_100a22664;
    uVar1 = 0;
    if (uVar8 < 4) {
      uVar1 = uVar7 - 1 << (ulong)((uVar8 & 3) << 3);
    }
    if (uVar8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 4;
      if (uVar8 < 4) {
        uVar7 = uVar8;
      }
      if ((int)uVar7 < 3) {
        if (uVar7 == 1) {
          uVar7 = (uint)(byte)*param_2;
        }
        else {
          uVar7 = (uint)(ushort)*param_2;
        }
      }
      else if (uVar7 == 3) {
        uVar7 = (uint)(uint3)*param_2;
      }
      else {
        uVar7 = *param_2;
      }
    }
    if ((uVar7 | uVar1) + uVar2 == -1) goto LAB_100a22780;
  }
  else {
LAB_100a22668:
    puVar4 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,uVar2,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar3);
      if (1 < uVar2) {
        return param_1;
      }
joined_r0x000100a226ac:
      if (uVar8 < 4) {
        uVar2 = (~(-1 << (ulong)(uVar8 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar8 << 3 & 0x1f);
        if (0xfe < uVar2) {
          if (0xfffe < uVar2) {
            *(undefined4 *)((long)param_1 + sVar9) = 0;
            return param_1;
          }
          *(undefined2 *)((long)param_1 + sVar9) = 0;
          return param_1;
        }
        if (uVar2 == 0) {
          return param_1;
        }
      }
      *(undefined1 *)((long)param_1 + sVar9) = 0;
      return param_1;
    }
    if (1 < uVar2) goto LAB_100a22760;
  }
  if (uVar8 < 4) {
    uVar2 = (~(-1 << (ulong)(uVar8 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar8 << 3 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar2) {
      uVar6 = 4;
    }
    if (uVar2 < 0xff) {
      uVar6 = (ulong)(uVar2 != 0);
    }
  }
  else {
    uVar6 = 1;
  }
  sVar9 = uVar6 + sVar9;
LAB_100a22760:
  pvVar5 = _memcpy(param_1,param_2,sVar9);
  return pvVar5;
}



/* Address: 0x100a227fc | FUN_100a227fc */

uint * FUN_100a227fc(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  long lVar11;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar11 = *(long *)(lVar4 + -8);
  uVar3 = *(uint *)(lVar11 + 0x54);
  sVar10 = *(size_t *)(lVar11 + 0x40);
  uVar9 = (uint)sVar10;
  if (uVar3 < 2) {
    if (uVar9 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      if (0xfe < uVar8) {
        if (uVar8 < 0xffff) {
          uVar8 = (uint)*(ushort *)((long)param_1 + sVar10);
        }
        else {
          uVar8 = *(uint *)((long)param_1 + sVar10);
        }
        goto LAB_100a22884;
      }
      if (uVar8 != 0) goto LAB_100a22880;
LAB_100a228f8:
      if ((uVar3 == 0) ||
         (puVar5 = param_1, (**(code **)(lVar11 + 0x30))(param_1,uVar3,lVar4), (int)puVar5 == 0)) {
LAB_100a22914:
        if (uVar9 < 4) {
          uVar8 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
          if (0xfe < uVar8) {
            if (uVar8 < 0xffff) {
              uVar8 = (uint)*(ushort *)((long)param_2 + sVar10);
            }
            else {
              uVar8 = *(uint *)((long)param_2 + sVar10);
            }
            goto LAB_100a22948;
          }
          if (uVar8 != 0) goto LAB_100a22944;
LAB_100a229a4:
          if (uVar3 != 0) {
            pcVar7 = *(code **)(lVar11 + 0x30);
            goto LAB_100a229ac;
          }
        }
        else {
LAB_100a22944:
          uVar8 = (uint)*(byte *)((long)param_2 + sVar10);
LAB_100a22948:
          if (uVar8 == 0) goto LAB_100a229a4;
          uVar2 = 0;
          if (uVar9 < 4) {
            uVar2 = uVar8 - 1 << (ulong)((uVar9 & 3) << 3);
          }
          if (uVar9 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 4;
            if (uVar9 < 4) {
              uVar8 = uVar9;
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
          if (uVar3 + (uVar8 | uVar2) != -1) goto LAB_100a229c0;
        }
        goto LAB_100a22c34;
      }
    }
    else {
LAB_100a22880:
      uVar8 = (uint)*(byte *)((long)param_1 + sVar10);
LAB_100a22884:
      if (uVar8 == 0) goto LAB_100a228f8;
      uVar2 = 0;
      if (uVar9 < 4) {
        uVar2 = uVar8 - 1 << (ulong)((uVar9 & 3) << 3);
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar9 < 4) {
          uVar8 = uVar9;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_1;
          }
          else {
            uVar8 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_1;
        }
        else {
          uVar8 = *param_1;
        }
      }
      if ((uVar8 | uVar2) + uVar3 == -1) goto LAB_100a22914;
    }
    if (uVar9 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      if (0xfe < uVar8) {
        if (uVar8 < 0xffff) {
          uVar8 = (uint)*(ushort *)((long)param_2 + sVar10);
        }
        else {
          uVar8 = *(uint *)((long)param_2 + sVar10);
        }
        goto LAB_100a22ab0;
      }
      if (uVar8 != 0) goto LAB_100a22aac;
LAB_100a22af0:
      if ((uVar3 == 0) ||
         (puVar5 = param_2, (**(code **)(lVar11 + 0x30))(param_2,uVar3,lVar4), (int)puVar5 == 0)) {
LAB_100a22b0c:
        (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar4);
        if (uVar9 < 4) {
          uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
          if (0xfe < uVar3) {
            if (0xfffe < uVar3) {
              pbVar1 = (byte *)((long)param_1 + sVar10);
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              return param_1;
            }
            ((byte *)((long)param_1 + sVar10))[0] = 0;
            ((byte *)((long)param_1 + sVar10))[1] = 0;
            return param_1;
          }
          if (uVar3 == 0) {
            return param_1;
          }
        }
        *(byte *)((long)param_1 + sVar10) = 0;
        return param_1;
      }
    }
    else {
LAB_100a22aac:
      uVar8 = (uint)*(byte *)((long)param_2 + sVar10);
LAB_100a22ab0:
      if (uVar8 == 0) goto LAB_100a22af0;
      uVar2 = 0;
      if (uVar9 < 4) {
        uVar2 = uVar8 - 1 << (ulong)((uVar9 & 3) << 3);
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar9 < 4) {
          uVar8 = uVar9;
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
      if ((uVar8 | uVar2) + uVar3 == -1) goto LAB_100a22b0c;
    }
    if (uVar9 < 4) goto LAB_100a229e0;
LAB_100a22bec:
    uVar6 = 1;
  }
  else {
    pcVar7 = *(code **)(lVar11 + 0x30);
    puVar5 = param_1;
    (*pcVar7)(param_1,uVar3,lVar4);
    if ((int)puVar5 != 0) {
      puVar5 = param_2;
      (*pcVar7)(param_2,uVar3,lVar4);
      if ((int)puVar5 == 0) {
        pcVar7 = *(code **)(lVar11 + 0x20);
        goto LAB_100a22c38;
      }
      goto LAB_100a22bf4;
    }
LAB_100a229ac:
    puVar5 = param_2;
    (*pcVar7)(param_2,uVar3,lVar4);
    if ((int)puVar5 == 0) {
LAB_100a22c34:
      pcVar7 = *(code **)(lVar11 + 0x28);
LAB_100a22c38:
      (*pcVar7)(param_1,param_2,lVar4);
      return param_1;
    }
LAB_100a229c0:
    (**(code **)(lVar11 + 8))(param_1,lVar4);
    if (1 < uVar3) goto LAB_100a22bf4;
    if (3 < uVar9) goto LAB_100a22bec;
LAB_100a229e0:
    uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar3) {
      uVar6 = 4;
    }
    if (uVar3 < 0xff) {
      uVar6 = (ulong)(uVar3 != 0);
    }
  }
  sVar10 = uVar6 + sVar10;
LAB_100a22bf4:
  puVar5 = _memcpy(param_1,param_2,sVar10);
  return puVar5;
}



/* Address: 0x100a22c6c | FUN_100a22c6c */

int FUN_100a22c6c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (1 < uVar2) {
    uVar1 = uVar2 - 2;
  }
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (uVar2 < 2) {
    if ((uint)uVar7 < 4) {
      uVar3 = (uint)uVar7 << 3;
      uVar3 = (~(-1 << (ulong)(uVar3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar3 & 0x1f);
      uVar8 = 2;
      if (0xfffe < uVar3) {
        uVar8 = 4;
      }
      if (uVar3 < 0xff) {
        uVar8 = (ulong)(uVar3 != 0);
      }
    }
    else {
      uVar8 = 1;
    }
    uVar7 = uVar8 + uVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_100a22d90;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar9 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_100a22d90;
      goto LAB_100a22d28;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_100a22d28:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
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
LAB_100a22d90:
  if (uVar2 < 3) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  if (1 < (uint)param_1) {
    return (uint)param_1 - 2;
  }
  return 0;
}



/* Address: 0x100a22e0c | FUN_100a22e0c */

void FUN_100a22e0c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  size_t sVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  size_t sVar14;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar9 = *(long *)(lVar5 + -8);
  uVar2 = *(uint *)(lVar9 + 0x54);
  uVar8 = 0;
  if (1 < uVar2) {
    uVar8 = uVar2 - 2;
  }
  sVar7 = *(size_t *)(lVar9 + 0x40);
  uVar6 = (uint)sVar7;
  sVar14 = sVar7;
  if (uVar2 < 2) {
    if (uVar6 < 4) {
      uVar13 = (~(-1 << (ulong)(uVar6 << 3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar6 << 3 & 0x1f);
      uVar10 = 2;
      if (0xfffe < uVar13) {
        uVar10 = 4;
      }
      if (uVar13 < 0xff) {
        uVar10 = (ulong)(uVar13 != 0);
      }
    }
    else {
      uVar10 = 1;
    }
    sVar14 = uVar10 + sVar7;
  }
  uVar13 = (uint)sVar14;
  if (param_3 < uVar8 || param_3 - uVar8 == 0) {
    bVar4 = 0;
  }
  else {
    uVar1 = ((param_3 - uVar8) + ~(-1 << (ulong)(uVar13 << 3 & 0x1f)) >> (ulong)(uVar13 << 3 & 0x1f)
            ) + 1;
    bVar11 = 2;
    if (0xffff < uVar1) {
      bVar11 = 4;
    }
    if (uVar1 < 0x100) {
      bVar11 = 1 < uVar1;
    }
    bVar4 = 1;
    if (uVar13 < 4) {
      bVar4 = bVar11;
    }
  }
  if (uVar8 < param_2) {
    param_2 = param_2 + ~uVar8;
    if (uVar13 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar13 << 3 & 0x1f)) + 1;
      if (uVar13 != 0) {
        uVar8 = param_2 & (-1 << (ulong)(uVar13 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar14);
        uVar3 = (undefined2)uVar8;
        if (uVar13 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar8 >> 0x10);
        }
        else if (uVar13 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar14);
      *param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(char *)((long)param_1 + sVar14) = (char)iVar12;
      }
    }
    else if (bVar4 == 2) {
      *(short *)((long)param_1 + sVar14) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar14) = iVar12;
    }
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(undefined1 *)((long)param_1 + sVar14) = 0;
      }
    }
    else if (bVar4 == 2) {
      *(undefined2 *)((long)param_1 + sVar14) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar14) = 0;
    }
    if ((param_2 != 0) && (2 < uVar2)) {
      if (param_2 + 2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100a23050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar9 + 0x38))(param_1,param_2 + 2,uVar2,lVar5);
        return;
      }
      uVar8 = 0xffffffff;
      if (uVar6 < 4) {
        uVar8 = ~(-1 << (ulong)((uVar6 & 3) << 3));
      }
      if (uVar6 != 0) {
        uVar8 = uVar8 & (param_2 - uVar2) + 1;
        uVar2 = 4;
        if (uVar6 < 4) {
          uVar2 = uVar6;
        }
        _bzero(param_1,sVar7);
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
  }
  return;
}



/* Address: 0x100a230d0 | FUN_100a230d0 */

uint * FUN_100a230d0(uint *param_1,long param_2)

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
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  if (1 < uVar2) goto LAB_100a2318c;
  uVar7 = *(ulong *)(lVar5 + 0x40);
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = (~(-1 << (ulong)(uVar3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar3 & 0x1f);
    if (0xfe < uVar8) {
      if (uVar8 < 0xffff) {
        uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
      }
      else {
        uVar8 = *(uint *)((long)param_1 + uVar7);
      }
      goto LAB_100a2314c;
    }
    if (uVar8 != 0) goto LAB_100a23148;
  }
  else {
LAB_100a23148:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
LAB_100a2314c:
    if (uVar8 != 0) {
      uVar1 = 0;
      if (uVar6 < 4) {
        uVar1 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
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
      return (uint *)(ulong)(uVar2 + ((uint)uVar7 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_100a2318c:
                    /* WARNING: Could not recover jumptable at 0x000100a2319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  return param_1;
}



/* Address: 0x100a23200 | FUN_100a23200 */

void FUN_100a23200(uint *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar1 = *(uint *)(lVar5 + 0x54);
  sVar7 = *(size_t *)(lVar5 + 0x40);
  uVar6 = (uint)sVar7;
  if (uVar1 < 2) {
    if (uVar6 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar6 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar6 << 3 & 0x1f);
      bVar3 = 2;
      if (0xfffe < uVar8) {
        bVar3 = 4;
      }
      if (uVar8 < 0xff) {
        bVar3 = uVar8 != 0;
      }
    }
    else {
      bVar3 = 1;
    }
  }
  else {
    bVar3 = 0;
  }
  uVar8 = (uint)param_2;
  if (uVar1 < uVar8) {
    uVar8 = uVar8 + ~uVar1;
    if (uVar6 < 4) {
      iVar9 = (uVar8 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar1 = uVar8 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar7);
        uVar2 = (undefined2)uVar1;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)uVar8;
        }
      }
    }
    else {
      _bzero(param_1,sVar7);
      *param_1 = uVar8;
      iVar9 = 1;
    }
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        *(char *)((long)param_1 + sVar7) = (char)iVar9;
      }
    }
    else if (bVar3 == 2) {
      *(short *)((long)param_1 + sVar7) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar7) = iVar9;
    }
  }
  else {
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        *(undefined1 *)((long)param_1 + sVar7) = 0;
      }
    }
    else if (bVar3 == 2) {
      *(undefined2 *)((long)param_1 + sVar7) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar7) = 0;
    }
    if (uVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a2336c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x38))(param_1,param_2,uVar1,lVar4);
      return;
    }
  }
  return;
}



/* Address: 0x100a233d0 | FUN_100a233d0 */

void FUN_100a233d0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a233dc | thunk_FUN_100a22e0c */

void thunk_FUN_100a22e0c(void)

{
  thunk_FUN_100a22e0c();
  return;
}



/* Address: 0x100a233e0 | thunk_FUN_100a21d84 */

void thunk_FUN_100a21d84(void)

{
  thunk_FUN_100a21d84();
  return;
}



/* Address: 0x100a233e4 | thunk_FUN_100a230d0 */

void thunk_FUN_100a230d0(void)

{
  thunk_FUN_100a230d0();
  return;
}



/* Address: 0x100a233e8 | thunk_FUN_100a1f800 */

void thunk_FUN_100a1f800(void)

{
  FUN_100a1f800();
  return;
}



/* Address: 0x100a233ec | thunk_FUN_100a21a90 */

void thunk_FUN_100a21a90(void)

{
  thunk_FUN_100a21a90();
  return;
}



/* Address: 0x100a233f0 | thunk_FUN_100a21ed4 */

void thunk_FUN_100a21ed4(void)

{
  thunk_FUN_100a21ed4();
  return;
}



/* Address: 0x100a233f4 | thunk_FUN_100a22130 */

void thunk_FUN_100a22130(void)

{
  thunk_FUN_100a22130();
  return;
}



/* Address: 0x100a233f8 | thunk_FUN_100a225a0 */

void thunk_FUN_100a225a0(void)

{
  thunk_FUN_100a225a0();
  return;
}



/* Address: 0x100a233fc | thunk_FUN_100a227fc */

void thunk_FUN_100a227fc(void)

{
  thunk_FUN_100a227fc();
  return;
}



/* Address: 0x100a23400 | thunk_FUN_100a22c6c */

void thunk_FUN_100a22c6c(void)

{
  thunk_FUN_100a22c6c();
  return;
}



/* Address: 0x100a23404 | thunk_FUN_100a23200 */

void thunk_FUN_100a23200(void)

{
  thunk_FUN_100a23200();
  return;
}



/* Address: 0x100a23408 | FUN_100a23408 */

void FUN_100a23408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,code *param_10)

{
  long unaff_x21;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  
  (*param_10)(auStack_88,param_6,param_7);
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_88,local_70);
    FUN_100a2d2a8(param_1,param_2,param_8,param_9,param_3,param_4,param_5,local_70,uStack_68);
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x100a234cc | FUN_100a234cc */

undefined1  [16] FUN_100a234cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &DAT_100f28898;
  _swift_allocObject(&DAT_100f28898,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_retain(param_2);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100a23624;
  return auVar2;
}



/* Address: 0x100a23528 | FUN_100a23528 */

void FUN_100a23528(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100f28990;
  _swift_allocObject(&DAT_100f28990,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  param_1[3] = &DAT_100f28200;
  param_1[4] = &PTR_PTR_100ff49d0;
  puVar2 = &DAT_100f28968;
  _swift_allocObject(&DAT_100f28968,0x58,7);
  *param_1 = puVar2;
  *(code **)(puVar2 + 0x20) = FUN_100209b34;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined2 *)(puVar2 + 0x38) = 1;
  *(undefined8 *)(puVar2 + 0x48) = 0x14000;
  *(undefined8 *)(puVar2 + 0x40) = 0x14000;
  *(undefined8 *)(puVar2 + 0x50) = 1000;
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _swift_retain(param_5);
  _swift_retain(param_3);
  return;
}



/* Address: 0x100a23600 | FUN_100a23600 */

void FUN_100a23600(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a23624 | FUN_100a23624 */

void FUN_100a23624(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100a23528(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100a2363c | FUN_100a2363c */

undefined1  [16] FUN_100a2363c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar1 = &DAT_100f288c0;
  _swift_allocObject(&DAT_100f288c0,0x48,7);
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  uVar6 = param_1[5];
  uVar5 = param_1[4];
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  *(undefined8 *)(puVar1 + 0x38) = uVar6;
  *(undefined8 *)(puVar1 + 0x30) = uVar5;
  *(undefined8 *)(puVar1 + 0x40) = param_1[6];
  _swift_retain(param_1[1]);
  auVar7._8_8_ = puVar1;
  auVar7._0_8_ = FUN_100a23768;
  return auVar7;
}



/* Address: 0x100a236a0 | FUN_100a236a0 */

void FUN_100a236a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [56];
  
  param_1[3] = &DAT_100f28200;
  param_1[4] = &PTR_PTR_100ff49d0;
  puVar1 = &DAT_100f28968;
  _swift_allocObject(&DAT_100f28968,0x58,7);
  *param_1 = puVar1;
  uVar2 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  *(undefined8 *)(puVar1 + 0x28) = param_4[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  *(undefined8 *)(puVar1 + 0x38) = uVar4;
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  uVar2 = param_4[4];
  *(undefined8 *)(puVar1 + 0x48) = param_4[5];
  *(undefined8 *)(puVar1 + 0x40) = uVar2;
  *(undefined8 *)(puVar1 + 0x50) = param_4[6];
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  FUN_100a23834(param_4,auStack_78);
  _swift_retain(param_3);
  return;
}



/* Address: 0x100a23744 | FUN_100a23744 */

void FUN_100a23744(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a23768 | FUN_100a23768 */

void FUN_100a23768(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100a236a0(param_1,param_2,unaff_x20 + 0x10);
  return;
}



/* Address: 0x100a23780 | FUN_100a23780 */

undefined1  [16] FUN_100a23780(void)

{
  return ZEXT816(0x100f28940);
}



/* Address: 0x100a23790 | FUN_100a23790 */

void FUN_100a23790(void)

{
  FUN_100a23798(0);
  return;
}



/* Address: 0x100a23798 | FUN_100a23798 */

void FUN_100a23798(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (DAT_100ff4ef8 != 0) {
    return;
  }
  puVar1 = &DAT_100ff4f00;
  FUN_1000f8b08(&DAT_100ff4f00,&DAT_100c8e3f8);
  uVar2 = 0xff;
  FUN_100a0ff0c(0xff);
  uVar3 = 0x45000001;
  _swift_getFunctionTypeMetadata1(0x45000001,uVar2,puVar1);
  DAT_100ff4ef8 = uVar3;
  return;
}



/* Address: 0x100a23808 | FUN_100a23808 */

void FUN_100a23808(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a23834 | FUN_100a23834 */

undefined8 FUN_100a23834(undefined8 param_1,undefined8 param_2)

{
  FUN_100a0ff9c(param_2,param_1);
  return param_2;
}



/* Address: 0x100a23870 | thunk_FUN_100a23600 */

void thunk_FUN_100a23600(void)

{
  FUN_100a23600();
  return;
}



/* Address: 0x100a23874 | FUN_100a23874 */

void FUN_100a23874(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return;
}



/* Address: 0x100a238ac | FUN_100a238ac */

void FUN_100a238ac(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return;
}



/* Address: 0x100a238c0 | FUN_100a238c0 */

void FUN_100a238c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  
  puVar2 = &DAT_100f082a8;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_100a1ec74(&DAT_100f082a8);
  uVar5 = uVar4 >> 0x38;
  if (uVar5 == 2) {
    if (SBORROW8(*(long *)(unaff_x20 + 0x20),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a239b8);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + 0x20) = *(long *)(unaff_x20 + 0x20) + -1;
    FUN_10062dee8(param_2,param_3);
    if (*(char *)(unaff_x20 + 0x10) == '\x01') {
      FUN_100626d64(2,0);
      FUN_100875938(puVar2,uVar3,uVar4,2);
      *(undefined1 *)(unaff_x20 + 0x10) = 0;
      return;
    }
    uVar5 = 2;
  }
  else {
    FUN_100626ebc(param_2,param_3);
  }
  FUN_100875938(puVar2,uVar3,uVar4,uVar5);
  return;
}



/* Address: 0x100a239b8 | FUN_100a239b8 */

void FUN_100a239b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  puVar3 = &DAT_100f08218;
  uVar4 = param_2;
  FUN_100a1ec68(&DAT_100f08218);
  cVar1 = (char)(param_3 >> 0x38);
  if (cVar1 == '\0') {
    if (SCARRY8(*(long *)(unaff_x20 + 0x20),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a23a70);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x20) = *(long *)(unaff_x20 + 0x20) + 1;
    lVar5 = *(long *)(unaff_x20 + 0x18) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + 0x18),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a23a74);
      (*pcVar2)();
    }
  }
  else {
    if (cVar1 == '\x01') goto LAB_100a23a34;
    lVar5 = *(long *)(unaff_x20 + 0x18) + -1;
    if (SBORROW8(*(long *)(unaff_x20 + 0x18),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a23a14);
      (*pcVar2)();
    }
  }
  *(long *)(unaff_x20 + 0x18) = lVar5;
LAB_100a23a34:
  FUN_100626ce0(param_2);
  FUN_100875938(puVar3,uVar4,param_3,param_3 >> 0x38);
  return;
}



/* Address: 0x100a23a74 | FUN_100a23a74 */

void FUN_100a23a74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  char *pcVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_1e8 [96];
  undefined1 auStack_188 [24];
  undefined8 local_170;
  long lStack_168;
  undefined1 local_160 [8];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 auStack_100 [31];
  char local_e1;
  undefined1 auStack_e0 [32];
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uVar4;
  
  uVar4 = param_2;
  FUN_10000cbfc(param_2,auStack_e0);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  iVar3 = (int)uVar4;
  _swift_dynamicCast();
  if (iVar3 == 0) {
    pcVar5 = &local_e1;
    _swift_dynamicCast(pcVar5,auStack_e0,puVar1 + 8,&DAT_100eec138,0);
    if ((int)pcVar5 == 0 || local_e1 != '\x01') {
      FUN_100626b98(param_2);
      goto LAB_100a23c70;
    }
    if ((*(long *)(unaff_x20 + 0x18) < 1) && (*(long *)(unaff_x20 + 0x20) != 0)) goto LAB_100a23c70;
    lVar7 = *(long *)(unaff_x20 + 0x28);
    _swift_beginAccess(lVar7 + 0x20,auStack_100,0,0);
    FUN_100076688(lVar7 + 0x20,local_c0);
    lVar2 = lStack_a0;
    uVar6 = local_a8;
    FUN_100004640(local_c0,local_a8);
    (**(code **)(lVar2 + 0x70))(uVar6,lVar2);
    FUN_100004594(local_c0);
    if ((uVar6 & 0xff) == 0) {
      FUN_100076688(lVar7 + 0x20,auStack_188);
      FUN_100004640(auStack_188,local_170);
      local_c0[0] = 0;
      local_b8 = 0xd000000000000023;
      uStack_b0 = 0x8000000100db7ff0;
      lStack_a0 = 0;
      local_a8 = 0;
      uStack_90 = 0;
      local_98 = 0;
      local_88 = 0xd00000000000002a;
      uStack_80 = 0x8000000100db7f90;
      local_78 = 0xd000000000000029;
      uStack_70 = 0x8000000100db7fc0;
      local_68 = 0x49;
      local_160[0] = 0;
      local_158 = 0xd000000000000023;
      uStack_150 = 0x8000000100db7ff0;
      uStack_140 = 0;
      local_148 = 0;
      uStack_130 = 0;
      local_138 = 0;
      local_128 = 0xd00000000000002a;
      uStack_120 = 0x8000000100db7f90;
      local_118 = 0xd000000000000029;
      uStack_110 = 0x8000000100db7fc0;
      local_108 = 0x49;
      FUN_1005bf638(local_c0,auStack_1e8);
      FUN_1004eaa3c(local_160);
      (**(code **)(lStack_168 + 0x28))(local_c0,local_170,lStack_168);
      FUN_1004eaa3c(local_c0);
      FUN_100004594(auStack_188);
    }
  }
  else if (0 < *(long *)(unaff_x20 + 0x20)) {
    *(undefined1 *)(unaff_x20 + 0x10) = 1;
    goto LAB_100a23c70;
  }
  FUN_100626d64(2,0);
LAB_100a23c70:
  FUN_100004594(auStack_e0);
  return;
}



/* Address: 0x100a23ca4 | FUN_100a23ca4 */

void FUN_100a23ca4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100a23cc0 | FUN_100a23cc0 */

void FUN_100a23cc0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a23ce4 | FUN_100a23ce4 */

void FUN_100a23ce4(void)

{
  FUN_100a23cfc();
  return;
}



/* Address: 0x100a23cf0 | FUN_100a23cf0 */

void FUN_100a23cf0(void)

{
  FUN_100a23cfc();
  return;
}



/* Address: 0x100a23cfc | FUN_100a23cfc */

void FUN_100a23cfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_4 >> 0x20);
  uVar2 = (undefined4)param_4;
  uVar1 = param_5;
  FUN_100a23d8c();
  *param_1 = param_5;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(char *)((long)param_1 + 0x16) = (char)((uint)uVar3 >> 0x10);
  *(short *)((long)param_1 + 0x14) = (short)uVar3;
  *(char *)((long)param_1 + 0x17) = (char)((uint)uVar3 >> 0x18);
  return;
}



/* Address: 0x100a23d48 | thunk_FUN_100a239b8 */

void thunk_FUN_100a239b8(void)

{
  FUN_100a239b8();
  return;
}



/* Address: 0x100a23d4c | thunk_FUN_100a23a74 */

void thunk_FUN_100a23a74(void)

{
  FUN_100a23a74();
  return;
}



/* Address: 0x100a23d50 | thunk_FUN_100a238c0 */

void thunk_FUN_100a238c0(void)

{
  FUN_100a238c0();
  return;
}



/* Address: 0x100a23d54 | FUN_100a23d54 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a23d54(void)

{
  return ZEXT816(0x100ff4fc0);
}



/* Address: 0x100a23d74 | FUN_100a23d74 */

void FUN_100a23d74(undefined8 param_1)

{
  FUN_100a23d8c(param_1,&DAT_100f08218);
  return;
}



/* Address: 0x100a23d80 | FUN_100a23d80 */

void FUN_100a23d80(undefined8 param_1)

{
  FUN_100a23d8c(param_1,&DAT_100f082a8);
  return;
}



/* Address: 0x100a23d8c | FUN_100a23d8c */

undefined1  [16] FUN_100a23d8c(bool param_1,void *param_2,undefined8 param_3,void *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  StaticString file;
  __uint64 line;
  code *pcVar3;
  bool bVar4;
  Mirror MVar5;
  ulong uVar6;
  undefined *puVar7;
  Mirror MVar8;
  AnyCollection<tuple2> AVar9;
  char *pcVar10;
  ObjectIdentifier OVar11;
  ObjectIdentifier OVar12;
  undefined1 *puVar13;
  void *pvVar14;
  long extraout_x8;
  long extraout_x12;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [8];
  code *local_118;
  void *local_110;
  undefined1 auStack_108 [32];
  StaticString local_e8;
  __uint64 _Stack_e0;
  undefined *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined3 local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  char *local_98;
  void *pvStack_90;
  char local_87;
  undefined1 local_80 [16];
  char *local_70;
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar16 = *(long *)(MVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  FUN_100877858();
  if (local_87 == '\x02') {
    FUN_100011080(&local_c8,&local_e8);
    FUN_100011080(&local_e8,auStack_108);
    uVar6 = 0;
    puVar13 = auStack_108;
    pcVar3 = (code *)(PTR___type_metadata_for_Any_100eae0c0 + 8);
    _swift_dynamicCast();
    puStack_a0 = puVar13;
    param_4 = param_2;
    if (((uVar6 & 1) != 0) && (pcVar3 = (code *)local_70, (ulong)local_70 >> 0x38 < 0xff)) {
      return local_80;
    }
  }
  else if (local_87 == '\0') {
    pcVar3 = (code *)(ulong)CONCAT34(local_b4,local_b8);
    FUN_10000c650(local_c8);
    puStack_a0 = local_c0;
  }
  else {
    local_110 = (void *)local_a8;
    local_118 = (code *)local_98;
    _swift_release(local_c0);
    _swift_release((ulong)local_c8 & 0x3fffffffffffffff);
    pcVar3 = local_118;
    FUN_1005d8fac(local_110);
    param_4 = pvStack_90;
  }
  local_c8 = (undefined *)0x0;
  local_c0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,(_StringGuts)puStack_a0);
  local_e8.unknown = local_c8;
  _Stack_e0 = (__uint64)local_c0;
  SVar17.bridgeObject = (void *)0x8000000100daf900;
  SVar17.str = (char *)0xd000000000000018;
  SVar21.bridgeObject = param_4;
  SVar21.str = (char *)pcVar3;
  Swift::String::append(SVar17,SVar21);
  SVar17 = Swift::__typeName(param_1);
  SVar22.bridgeObject = param_4;
  SVar22.str = (char *)pcVar3;
  Swift::String::append(SVar17,SVar22);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  SVar18.bridgeObject = (void *)0xeb0000000020646e;
  SVar18.str = (char *)0x756f662074756220;
  SVar23.bridgeObject = param_4;
  SVar23.str = (char *)pcVar3;
  Swift::String::append(SVar18,SVar23);
  local_b0 = &DAT_100ef1ad8;
  puVar7 = &DAT_100f28a90;
  _swift_allocObject(&DAT_100f28a90,0x52,7);
  local_c8 = puVar7;
  FUN_100877858();
  MVar8 = Swift::Mirror::_init();
  AVar9 = Swift::Mirror::_get_children(MVar8);
  local_118 = *(code **)(lVar16 + 8);
  (*local_118)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),MVar5.unknown);
  pcVar1 = *(char **)(AVar9.unknown + 0x10);
  pvVar14 = *(void **)(AVar9.unknown + 0x18);
  uVar2 = *(undefined8 *)(AVar9.unknown + 0x20);
  pcVar10 = pcVar1;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar1);
  _swift_unknownObjectRetain(uVar2);
  local_110 = pvVar14;
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar2);
  OVar12 = Swift::_AnyIndexBox::get__typeID();
  if (OVar11.unknown != OVar12.unknown) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a2406c);
    (*pcVar3)();
  }
  pvVar14 = local_110;
  bVar4 = Swift::_AnyIndexBox::__isEqual();
  _swift_unknownObjectRelease(uVar2);
  if (bVar4) {
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(AVar9.unknown);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a24068);
    (*pcVar3)();
  }
  Swift::_AnyCollectionBox::_get_subscript();
  _swift_unknownObjectRelease(pcVar1);
  _swift_release(AVar9.unknown);
  _swift_bridgeObjectRelease(local_c0);
  MVar8 = Swift::Mirror::_init();
  Swift::Mirror::_get_subjectType(MVar8);
  (*local_118)(lVar15,MVar5.unknown);
  SVar17 = Swift::__typeName(SUB81(MVar8.unknown,0));
  SVar24.bridgeObject = pvVar14;
  SVar24.str = pcVar10;
  Swift::String::append(SVar17,SVar24);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  SVar19.bridgeObject = (void *)0xef2073746e65746e;
  SVar19.str = (char *)0x6f63206874697720;
  SVar25.bridgeObject = pvVar14;
  SVar25.str = pcVar10;
  Swift::String::append(SVar19,SVar25);
  Swift::__print_unlocked();
  line = _Stack_e0;
  file.unknown = local_e8.unknown;
  *(undefined4 *)(lVar15 + -8) = 0;
  *(undefined8 *)(lVar15 + -0x10) = 0xd0;
  SVar20.bridgeObject = (void *)0x2;
  SVar20.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar20,file,line,0xdaf940);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a24170);
  (*pcVar3)();
}



/* Address: 0x100a24170 | FUN_100a24170 */

void FUN_100a24170(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + 0x51);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x10);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
    if ((*(char *)(unaff_x20 + 0x30) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x38) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x38) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  (ulong)*(uint7 *)(unaff_x20 + 0x20));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100a24208 | FUN_100a24208 */

undefined1  [16] FUN_100a24208(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar8 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(puVar6);
  puVar5 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,param_1);
  iVar1 = (int)puVar5;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar7 = *(long *)(param_1 + 0x10);
      uVar3 = 0xff;
      FUN_100a2d4c0(0xff);
      puVar4 = &DAT_100ff5038;
      FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
      lVar8 = 0;
      _swift_getTupleTypeMetadata3
                (0,lVar7,uVar3,puVar4,"childChannelSetup configuration onServerRunning ",0);
      iVar1 = *(int *)(lVar8 + 0x30);
      FUN_100004550(*(undefined8 *)(puVar6 + *(int *)(lVar8 + 0x40)),
                    *(undefined8 *)((long)(puVar6 + *(int *)(lVar8 + 0x40)) + 8));
      FUN_100a2afe0(puVar6 + iVar1);
      (**(code **)(*(long *)(lVar7 + -8) + 8))(puVar6,lVar7);
      puVar5 = &DAT_e700000000000000;
      uVar2 = 0x6c616974696e69;
    }
    else {
      uVar3 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),0x100cc971c,
                 &TargetProtocolRequirement_100cc972c);
      lVar8 = 0xff;
      FUN_1005e3ae8(0xff,uVar3,PTR___type_metadata_for_Swift_Never_100eadc38);
      uVar3 = 0xff;
      FUN_100974b84(0xff);
      lVar7 = 0;
      _swift_getTupleTypeMetadata2(0,lVar8,uVar3,"asyncChannel quiescingHelper ",0);
      _swift_release(*(undefined8 *)(puVar6 + *(int *)(lVar7 + 0x30)));
      (**(code **)(*(long *)(lVar8 + -8) + 8))(puVar6,lVar8);
      puVar5 = &DAT_e700000000000000;
      uVar2 = 0x676e696e6e7572;
    }
  }
  else {
    if (iVar1 == 2) {
      (**(code **)(lVar8 + 8))(puVar6,param_1);
      puVar5 = (undefined1 *)0xec0000006e776f44;
      uVar2 = 0x74756873;
    }
    else {
      puVar5 = &DAT_e800000000000000;
      if (iVar1 != 3) {
        uVar2 = 0x6e776f6474756873;
        goto LAB_100a243f0;
      }
      uVar2 = 0x72617473;
    }
    uVar2 = uVar2 | 0x676e697400000000;
  }
LAB_100a243f0:
  auVar9._8_8_ = puVar5;
  auVar9._0_8_ = uVar2;
  return auVar9;
}



/* Address: 0x100a24404 | thunk_FUN_100a24208 */

void thunk_FUN_100a24208(void)

{
  FUN_100a24208();
  return;
}



/* Address: 0x100a24408 | FUN_100a24408 */

void FUN_100a24408(void)

{
  DefaultStringInterpolation stringInterpolation;
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  _StringGuts _Var3;
  char *pcVar4;
  void *pvVar5;
  long extraout_x8;
  long *unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined1 auStack_1e0 [96];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined *local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  DefaultStringInterpolation local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  
  lVar6 = *unaff_x20;
  lVar1 = 0;
  FUN_100a248b8(0,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58));
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_1e0 + -extraout_x8;
  lVar6 = *(long *)((long)unaff_x20 + *(long *)(lVar6 + 0x70));
  pcVar4 = (char *)0x0;
  pvVar5 = (void *)0x0;
  _swift_beginAccess(lVar6 + 0x20,auStack_e0);
  FUN_100076688(lVar6 + 0x20,&local_c8);
  FUN_100004640(&local_c8,local_b0);
  (**(code **)(lStack_a8 + 0x70))(local_b0,lStack_a8);
  FUN_100004594(&local_c8);
  if ((local_b0 & 0xff) == 0) {
    FUN_100076688(lVar6 + 0x20,auStack_168);
    _Var3.unknown = local_150;
    FUN_100004640(auStack_168);
    local_c8.unknown = (undefined *)0x0;
    local_c0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x10,_Var3);
    SVar9.bridgeObject = (void *)0xee00203a65746174;
    SVar9.str = (char *)0x5320726576726553;
    SVar10.bridgeObject = pvVar5;
    SVar10.str = pcVar4;
    Swift::String::append(SVar9,SVar10);
    lVar6 = *(long *)(*unaff_x20 + 0x68);
    _swift_beginAccess((long)unaff_x20 + lVar6,auStack_180,0,0);
    (**(code **)(lVar8 + 0x10))(puVar7,(long)unaff_x20 + lVar6,lVar1);
    pTVar2 = &TargetProtocolConformanceDescriptor_100c8e700;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e700,lVar1);
    Swift::DefaultStringInterpolation::_appendInterpolation(puVar7,lVar1,pTVar2);
    (**(code **)(lVar8 + 8))(puVar7,lVar1);
    stringInterpolation.unknown = local_c8.unknown;
    FUN_100a15770();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(stringInterpolation);
    uStack_b8 = local_c0;
    local_c0 = local_c8.unknown;
    local_c8.unknown = local_c8.unknown & 0xffffffffffffff00;
    lStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    local_90 = 0xd00000000000001c;
    uStack_88 = 0x8000000100db8080;
    local_80 = 0x6574617473;
    puStack_78 = &DAT_e500000000000000;
    local_70 = 0x38;
    local_140[0] = 0;
    local_138 = local_c0;
    uStack_130 = uStack_b8;
    uStack_120 = 0;
    local_128 = 0;
    uStack_110 = 0;
    local_118 = 0;
    local_108 = 0xd00000000000001c;
    uStack_100 = 0x8000000100db8080;
    local_f8 = 0x6574617473;
    puStack_f0 = &DAT_e500000000000000;
    local_e8 = 0x38;
    FUN_1005bf638(&local_c8,auStack_1e0);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(&local_c8,local_150,lStack_148);
    FUN_1004eaa3c(&local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x100a24680 | FUN_100a24680 */

void FUN_100a24680(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar3,auStack_48,0,0);
  lVar1 = 0;
  FUN_100a248b8(0,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,(long)unaff_x20 + lVar3,lVar1);
  return;
}



/* Address: 0x100a246ec | FUN_100a246ec */

void FUN_100a246ec(void)

{
  long *unaff_x20;
  
  _swift_retain(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  return;
}



/* Address: 0x100a246fc | FUN_100a246fc */

undefined8
FUN_100a246fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100a24780(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return unaff_x20;
}


