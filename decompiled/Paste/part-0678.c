/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100735858 | FUN_100735858 */

long * FUN_100735858(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
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



/* Address: 0x100735958 | FUN_100735958 */

void FUN_100735958(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007359d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Address: 0x1007359d8 | FUN_1007359d8 */

void * FUN_1007359d8(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
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



/* Address: 0x100735a94 | FUN_100735a94 */

void * FUN_100735a94(void *param_1,void *param_2,long param_3)

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
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar3 = param_1;
  (*pcVar6)(param_1,1,lVar1);
  pvVar2 = param_2;
  (*pcVar6)(param_2,1,lVar1);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 != 0) {
      (**(code **)(lVar5 + 8))(param_1,lVar1);
      goto LAB_100735b48;
    }
    (**(code **)(lVar5 + 0x18))(param_1,param_2,lVar1);
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_100735b48:
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



/* Address: 0x100735ba0 | FUN_100735ba0 */

void * FUN_100735ba0(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
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



/* Address: 0x100735c5c | FUN_100735c5c */

void * FUN_100735c5c(void *param_1,void *param_2,long param_3)

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
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar3 = param_1;
  (*pcVar6)(param_1,1,lVar1);
  pvVar2 = param_2;
  (*pcVar6)(param_2,1,lVar1);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 != 0) {
      (**(code **)(lVar5 + 8))(param_1,lVar1);
      goto LAB_100735d10;
    }
    (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar1);
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_100735d10:
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



/* Address: 0x100735d68 | FUN_100735d68 */

int FUN_100735d68(uint *param_1,uint param_2,long param_3)

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
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
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
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_100735e38;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_100735e38;
      goto LAB_100735dd0;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_100735dd0:
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
LAB_100735e38:
  if (uVar2 < 2) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  if ((int)param_1 != 0) {
    return (int)param_1 + -1;
  }
  return 0;
}



/* Address: 0x100735eb4 | FUN_100735eb4 */

void FUN_100735eb4(uint *param_1,uint param_2,uint param_3,long param_4)

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
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
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
                    /* WARNING: Could not recover jumptable at 0x000100736034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))(param_1,param_2 + 1,uVar3,lVar5);
      return;
    }
  }
  return;
}



/* Address: 0x100736098 | FUN_100736098 */

void FUN_100736098(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007360a4 | FUN_1007360a4 */

void FUN_1007360a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  long lVar1;
  undefined8 unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  
  lVar2 = *(long *)(param_7 + -8);
  puVar6 = auStack_a0 + -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0,param_10,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar3 = *(long *)(lVar1 + -8);
  lVar4 = (long)puVar6 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar4 - (*(long *)(*(long *)(param_6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_6 + -8) + 0x10))(lVar5,unaff_x20,param_6);
  (**(code **)(lVar3 + 0x10))(lVar4,local_98,lVar1);
  (**(code **)(lVar2 + 0x10))(puVar6,param_3,param_7);
  *(undefined8 *)(lVar5 + -8) = param_10;
  *(undefined8 *)(lVar5 + -0x10) = param_9;
  FUN_1007361fc(param_1,lVar5,lVar4,puVar6,param_4,param_5,param_6,param_7,param_8);
  _swift_retain(param_5);
  return;
}



/* Address: 0x1007361fc | FUN_1007361fc */

void FUN_1007361fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_1,param_2,param_7);
  uStack_70 = param_10;
  local_68 = param_11;
  lVar3 = 0;
  local_88 = param_7;
  lStack_80 = param_8;
  local_78 = param_9;
  FUN_100738be0(0,&local_88);
  iVar2 = *(int *)(lVar3 + 0x3c);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_11,param_8,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar2,param_3,lVar4);
  (**(code **)(*(long *)(param_8 + -8) + 0x20))(param_1 + *(int *)(lVar3 + 0x40),param_4,param_8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x44));
  *puVar1 = param_5;
  puVar1[1] = param_6;
  return;
}



/* Address: 0x1007362f8 | FUN_1007362f8 */

void FUN_1007362f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ContinuousClock CVar2;
  ContinuousClock CVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = param_2;
  uStack_68 = param_3;
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  lVar5 = *(long *)(CVar2.unknown + -8);
  lVar1 = -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&local_70 + lVar1;
  CVar3 = (extension_Swift)::Swift::Clock::_get_continuous();
  FUN_1007363c8();
  *(undefined **)((long)auStack_80 + lVar1) = CVar3.unknown;
  FUN_1007360a4(param_1,&local_70,lVar4,param_4,param_5,param_6,CVar2.unknown,param_7,param_8);
  (**(code **)(lVar5 + 8))(lVar4,CVar2.unknown);
  return;
}



/* Address: 0x1007363c8 | FUN_1007363c8 */

void FUN_1007363c8(void)

{
  ContinuousClock CVar1;
  undefined *puVar2;
  
  if (DAT_100fe1168 != (undefined *)0x0) {
    return;
  }
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28;
  _swift_getWitnessTable(PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28,CVar1.unknown);
  DAT_100fe1168 = puVar2;
  return;
}



/* Address: 0x10073640c | FUN_10073640c */

void FUN_10073640c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100efd4a0;
  _swift_allocObject(&DAT_100efd4a0,0x31,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  puVar1[0x30] = param_4;
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  FUN_1007360a4(param_1,param_2,param_3,&DAT_100c757b8,puVar1,param_5,param_6,uVar2,param_7,param_8)
  ;
  _swift_release(puVar1);
  return;
}



/* Address: 0x1007364e4 | FUN_1007364e4 */

void FUN_1007364e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  Optional OVar1;
  undefined8 uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x30) = CONCAT71(extraout_var,OVar1.value);
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x38) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  _swift_task_switch(FUN_100736580,0,0);
  return;
}



/* Address: 0x100736580 | FUN_100736580 */

void FUN_100736580(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar2 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 0x10))
              (uVar1,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x30));
    lVar5 = *(long *)(lVar3 + -8);
    pcVar2 = *(code **)(lVar5 + 0x30);
    (*pcVar2)(uVar1,1,lVar3);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    if ((int)uVar1 == 1) {
      (**(code **)(lVar5 + 0x10))
                (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x20),lVar3);
      (*pcVar2)(uVar4,1,lVar3);
      if ((int)uVar4 != 1) {
        (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x30));
      }
      goto LAB_100736654;
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar2 = *(code **)(lVar5 + 0x20);
  }
  (*pcVar2)(uVar1,uVar4,lVar3);
LAB_100736654:
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100736670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100736674 | FUN_100736674 */

void FUN_100736674(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100736684 | FUN_100736684 */

void FUN_100736684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005c804c;
  FUN_1007364e4(plVar6,param_1,param_2,param_3,uVar5,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x100736724 | FUN_100736724 */

void FUN_100736724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ContinuousClock CVar1;
  ContinuousClock CVar2;
  long lVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = param_2;
  uStack_58 = param_3;
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  lVar4 = *(long *)(CVar1.unknown + -8);
  lVar3 = (long)&local_60 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar2 = (extension_Swift)::Swift::Clock::_get_continuous();
  FUN_1007363c8();
  FUN_10073640c(param_1,&local_60,lVar3,param_4,param_5,CVar1.unknown,param_6,CVar2.unknown);
  (**(code **)(lVar4 + 8))(lVar3,CVar1.unknown);
  return;
}



/* Address: 0x1007367d8 | FUN_1007367d8 */

void FUN_1007367d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uStack_70 = param_10;
  local_68 = param_11;
  lVar4 = 0;
  local_88 = param_7;
  lStack_80 = param_8;
  local_78 = param_9;
  FUN_100739f80(0,&local_88);
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  iVar2 = *(int *)(lVar4 + 0x3c);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_11,param_8,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar2,1,1,lVar5);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_10,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
  iVar2 = *(int *)(lVar4 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_11,param_8,puVar3,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1 + iVar2,param_3,lVar5);
  (**(code **)(*(long *)(param_8 + -8) + 0x20))(param_1 + *(int *)(lVar4 + 0x44),param_4,param_8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x48));
  *puVar1 = param_5;
  puVar1[1] = param_6;
  return;
}



/* Address: 0x100736934 | FUN_100736934 */

void FUN_100736934(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  long unaff_x22;
  undefined7 extraout_var_00;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,uVar9,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var,OVar2.value);
  lVar8 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  lVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,uVar9,puVar1,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  *(long *)(unaff_x22 + 0x58) = lVar8;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var_00,OVar2.value);
  *(long *)(unaff_x22 + 0x60) = lVar5;
  lVar6 = 0;
  _swift_getTupleTypeMetadata2(0,lVar5,lVar5,0,0);
  *(long *)(unaff_x22 + 0x68) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar7;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  lVar3 = *(long *)(param_2 + 0x20);
  *(long *)(unaff_x22 + 0x98) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(param_2 + 0x10);
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0xc0) = lVar3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 200) = CONCAT71(extraout_var_01,OVar2.value);
  lVar6 = *(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar4;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar4;
  lVar3 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar7;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar4;
  lVar3 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar7;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x148) = CONCAT71(extraout_var_02,OVar2.value);
  lVar3 = *(long *)(CONCAT71(extraout_var_02,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x150) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar7;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar4;
  _swift_task_switch(FUN_100736bec,0,0);
  return;
}



/* Address: 0x100736bec | FUN_100736bec */

void FUN_100736bec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar2 = *(long *)(unaff_x22 + 0x118);
  lVar11 = *(long *)(unaff_x22 + 0xf0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  pcVar8 = *(code **)(*(long *)(unaff_x22 + 0xa0) + 0x38);
  *(code **)(unaff_x22 + 0x168) = pcVar8;
  (*pcVar8)(*(undefined8 *)(unaff_x22 + 0x160),1,1,*(undefined8 *)(unaff_x22 + 0x98));
  iVar4 = *(int *)(lVar1 + 0x3c);
  *(int *)(unaff_x22 + 0x1b0) = iVar4;
  pcVar8 = *(code **)(lVar11 + 0x10);
  *(code **)(unaff_x22 + 0x170) = pcVar8;
  (*pcVar8)(uVar9,lVar3 + iVar4,uVar6);
  pcVar8 = *(code **)(lVar2 + 0x30);
  *(code **)(unaff_x22 + 0x178) = pcVar8;
  (*pcVar8)(uVar9,1,uVar10);
  if ((int)uVar9 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    Swift::Clock::_get_now();
    (*pcVar8)(uVar9,1,uVar10);
    if ((int)uVar9 != 1) {
      (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))
                (*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x60));
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x110),
               *(undefined8 *)(unaff_x22 + 0x58));
  }
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,uVar10,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar9,uVar10,uVar6,puVar5,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x180) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100736d8c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100736d8c | FUN_100736d8c */

void FUN_100736d8c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x188) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x180));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100736df0;
  }
  else {
    pcVar1 = FUN_100737d08;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100736df0 | FUN_100736df0 */

void FUN_100736df0(void)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  long unaff_x22;
  undefined8 *puVar27;
  undefined8 uVar28;
  code *pcVar29;
  code *pcVar30;
  
  uVar21 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar22 = *(long *)(unaff_x22 + 0xe0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar24 = uVar21;
  (**(code **)(lVar22 + 0x30))(uVar21,1,uVar19);
  if ((int)uVar24 != 1) {
    lVar10 = *(long *)(unaff_x22 + 0x18);
    lVar12 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(lVar22 + 0x20))(*(undefined8 *)(unaff_x22 + 0xe8),uVar21,uVar19);
    piVar1 = *(int **)(lVar12 + *(int *)(lVar10 + 0x48));
    iVar8 = *piVar1;
    plVar11 = (long *)(ulong)(uint)piVar1[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 400) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_1007372fc;
                    /* WARNING: Could not recover jumptable at 0x000100736f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar8 + (long)piVar1))
              (plVar11,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x160),
               *(undefined8 *)(unaff_x22 + 0xe8));
    return;
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar22 = *(long *)(unaff_x22 + 0x150);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar10 = *(long *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))(uVar21,*(undefined8 *)(unaff_x22 + 200));
  (**(code **)(lVar22 + 0x10))(uVar24,uVar2,uVar19);
  uVar21 = uVar24;
  (**(code **)(lVar10 + 0x30))(uVar24,1,uVar20);
  (**(code **)(lVar22 + 8))(uVar24,uVar19);
  if ((int)uVar21 == 1) {
    pcVar30 = *(code **)(*(long *)(unaff_x22 + 0x118) + 8);
    puVar26 = (undefined8 *)(unaff_x22 + 0x140);
    puVar27 = (undefined8 *)(unaff_x22 + 0x58);
  }
  else {
    puVar26 = (undefined8 *)(unaff_x22 + 0xf8);
    uVar21 = *puVar26;
    pcVar29 = *(code **)(unaff_x22 + 0x178);
    puVar27 = (undefined8 *)(unaff_x22 + 0x58);
    uVar24 = *puVar27;
    (**(code **)(unaff_x22 + 0x170))
              (uVar21,*(long *)(unaff_x22 + 0x20) + (long)*(int *)(unaff_x22 + 0x1b0),
               *(undefined8 *)(unaff_x22 + 0x60));
    (*pcVar29)(uVar21,1,uVar24);
    if ((int)uVar21 == 1) {
      lVar22 = *(long *)(unaff_x22 + 0xf0);
      (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))
                (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x58));
      pcVar30 = *(code **)(lVar22 + 8);
      puVar27 = (undefined8 *)(unaff_x22 + 0x60);
    }
    else {
      uVar19 = *(undefined8 *)(unaff_x22 + 0x130);
      lVar16 = *(long *)(unaff_x22 + 0x118);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar12 = *(long *)(unaff_x22 + 0x80);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar22 = *(long *)(unaff_x22 + 0x20);
      lVar10 = *(long *)(unaff_x22 + 0x28);
      lVar23 = *(long *)(unaff_x22 + 0x18);
      (**(code **)(lVar16 + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0xf8),uVar28);
      iVar8 = *(int *)(lVar23 + 0x40);
      Swift::Clock::_get_now();
      _swift_getAssociatedConformanceWitness
                (lVar10,uVar24,uVar28,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
                );
      Swift::InstantProtocol::_duration(uVar20,uVar19,uVar28,lVar10);
      pcVar30 = *(code **)(lVar16 + 8);
      *(code **)(unaff_x22 + 0x198) = pcVar30;
      (*pcVar30)(uVar19,uVar28);
      _swift_getAssociatedConformanceWitness
                (lVar10,uVar28,uVar2,
                 PTR___protocol_requirements_base_descriptor_for_Swift_InstantProtocol_100ead188,
                 PTR___associated_conformance_descriptor_for_Swift_InstantProtocol_Swift_InstantProtocol_Duration__Swift_DurationProtocol_100ead170
                );
      Swift::AdditiveArithmetic::__infix
                (uVar21,lVar22 + iVar8,uVar20,uVar2,*(undefined8 *)(lVar10 + 8));
      pcVar29 = *(code **)(lVar12 + 8);
      *(code **)(unaff_x22 + 0x1a0) = pcVar29;
      (*pcVar29)(uVar20,uVar2);
      Swift::AdditiveArithmetic::get_zero();
      bVar9 = Swift::Comparable::>_infix(uVar21,uVar20,uVar2,*(undefined8 *)(lVar10 + 0x10));
      (*pcVar29)(uVar20,uVar2);
      if (bVar9) {
        uVar20 = *(undefined8 *)(unaff_x22 + 0x130);
        lVar22 = *(long *)(unaff_x22 + 0x80);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x38);
        Swift::Clock::_get_now();
        Swift::InstantProtocol::_advanced();
        (*pcVar30)(uVar20,uVar24);
        (**(code **)(lVar22 + 0x38))(uVar21,1,1,uVar19);
        plVar11 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x1a8) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_10073796c;
        Swift::Clock::_sleep();
        return;
      }
      uVar24 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x58);
      (*pcVar29)(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x38));
      (*pcVar30)(uVar24,uVar21);
      puVar26 = (undefined8 *)(unaff_x22 + 0x140);
    }
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar22 = *(long *)(unaff_x22 + 0x150);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x10);
  (*pcVar30)(*puVar26,*puVar27);
  (**(code **)(lVar22 + 0x20))(uVar19,uVar24,uVar21);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001007372f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007372fc | FUN_1007372fc */

void FUN_1007372fc(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 400));
  _swift_task_switch(FUN_10073734c,0,0);
  return;
}



/* Address: 0x10073734c | FUN_10073734c */

void FUN_10073734c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  code *pcVar28;
  undefined8 uVar29;
  long *plVar30;
  long lVar31;
  
  uVar22 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar19 = *(long *)(unaff_x22 + 0x20);
  lVar17 = *(long *)(unaff_x22 + 0x28);
  lVar24 = *(long *)(unaff_x22 + 0x18);
  Swift::Clock::_get_now();
  _swift_getAssociatedConformanceWitness
            (lVar17,uVar23,uVar29,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
            );
  Swift::InstantProtocol::_duration(uVar21,uVar22,uVar29,lVar17);
  iVar3 = *(int *)(lVar24 + 0x40);
  lVar24 = lVar17;
  _swift_getAssociatedConformanceWitness
            (lVar17,uVar29,uVar25,
             PTR___protocol_requirements_base_descriptor_for_Swift_InstantProtocol_100ead188,
             PTR___associated_conformance_descriptor_for_Swift_InstantProtocol_Swift_InstantProtocol_Duration__Swift_DurationProtocol_100ead170
            );
  bVar5 = Swift::Comparable::>__infix(uVar21,lVar19 + iVar3,uVar25,*(undefined8 *)(lVar24 + 0x10));
  (**(code **)(lVar6 + 8))(uVar21,uVar25);
  if (!bVar5) {
    plVar30 = (long *)(unaff_x22 + 0x78);
    lVar19 = *plVar30;
    pcVar16 = *(code **)(unaff_x22 + 0x170);
    pcVar28 = *(code **)(unaff_x22 + 0x178);
    iVar3 = *(int *)(unaff_x22 + 0x1b0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar6 = *(long *)(unaff_x22 + 0x68);
    puVar15 = (undefined8 *)(unaff_x22 + 0x60);
    uVar23 = *puVar15;
    uVar25 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar24 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 0x38))(uVar22,1,1,uVar25);
    lVar6 = (long)*(int *)(lVar6 + 0x30);
    (*pcVar16)(lVar19,lVar24 + iVar3,uVar23);
    (*pcVar16)(lVar19 + lVar6,uVar22,uVar23);
    lVar24 = lVar19;
    (*pcVar28)(lVar19,1,uVar25);
    pcVar28 = *(code **)(unaff_x22 + 0x178);
    if ((int)lVar24 == 1) {
      uVar21 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar17 = *(long *)(unaff_x22 + 0x150);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar24 = *(long *)(unaff_x22 + 0xe0);
      uVar29 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x58);
      pcVar16 = *(code **)(*(long *)(unaff_x22 + 0xf0) + 8);
      (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x60));
      (**(code **)(lVar24 + 8))(uVar23,uVar29);
      (**(code **)(lVar17 + 8))(uVar21,uVar22);
      lVar19 = lVar19 + lVar6;
      (*pcVar28)(lVar19,1,uVar25);
      if ((int)lVar19 == 1) goto LAB_100737464;
    }
    else {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x58);
      (**(code **)(unaff_x22 + 0x170))
                (*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x78),
                 *(undefined8 *)(unaff_x22 + 0x60));
      lVar24 = lVar19 + lVar6;
      (*pcVar28)(lVar24,1,uVar22);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar31 = *(long *)(unaff_x22 + 0x150);
      if ((int)lVar24 != 1) {
        uVar26 = *(undefined8 *)(unaff_x22 + 0x130);
        lVar18 = *(long *)(unaff_x22 + 0x118);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x100);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar21 = *(undefined8 *)(unaff_x22 + 0xe8);
        lVar24 = *(long *)(unaff_x22 + 0xf0);
        lVar10 = *(long *)(unaff_x22 + 0xe0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
        (**(code **)(lVar18 + 0x20))(uVar26,lVar19 + lVar6,uVar29);
        bVar5 = Swift::Equatable::___infix
                          (uVar25,uVar26,uVar29,*(undefined8 *)(*(long *)(lVar17 + 8) + 8));
        pcVar28 = *(code **)(lVar18 + 8);
        (*pcVar28)(uVar26,uVar29);
        pcVar16 = *(code **)(lVar24 + 8);
        (*pcVar16)(uVar27,uVar1);
        (**(code **)(lVar10 + 8))(uVar21,uVar11);
        (**(code **)(lVar31 + 8))(uVar23,uVar22);
        (*pcVar28)(uVar25,uVar29);
        (*pcVar16)(uVar12,uVar1);
        if (bVar5) goto LAB_100737470;
        goto LAB_1007377b8;
      }
      lVar19 = *(long *)(unaff_x22 + 0x118);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar17 = *(long *)(unaff_x22 + 0xe0);
      uVar27 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x58);
      (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))
                (*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x60));
      (**(code **)(lVar17 + 8))(uVar21,uVar27);
      (**(code **)(lVar31 + 8))(uVar23,uVar22);
      (**(code **)(lVar19 + 8))(uVar25,uVar29);
    }
    lVar19 = *(long *)(unaff_x22 + 0x118);
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
              (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x68));
    pcVar28 = *(code **)(lVar19 + 8);
LAB_1007377b8:
    uVar22 = *(undefined8 *)(unaff_x22 + 0x160);
    pcVar16 = *(code **)(unaff_x22 + 0x168);
    lVar19 = *(long *)(unaff_x22 + 0xa0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x98);
    (*pcVar28)(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x58));
    (**(code **)(lVar19 + 0x20))(uVar22,uVar23,uVar25);
    (*pcVar16)(uVar22,0,1,uVar25);
    puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
    uVar22 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar25 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar22,uVar23,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    _swift_getAssociatedConformanceWitness
              (uVar22,uVar23,uVar25,puVar4,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar30 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x180) = plVar30;
    *plVar30 = unaff_x22;
    plVar30[1] = (long)FUN_100736d8c;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  lVar19 = *(long *)(unaff_x22 + 0x150);
  (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xc0));
  pcVar16 = *(code **)(lVar19 + 8);
  plVar30 = (long *)(unaff_x22 + 0x160);
  puVar15 = (undefined8 *)(unaff_x22 + 0x148);
LAB_100737464:
  (*pcVar16)(*plVar30,*puVar15);
LAB_100737470:
  lVar24 = (long)*(int *)(unaff_x22 + 0x1b0);
  pcVar16 = *(code **)(unaff_x22 + 0x168);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar31 = *(long *)(unaff_x22 + 0x118);
  lVar6 = *(long *)(unaff_x22 + 0xf0);
  lVar19 = *(long *)(unaff_x22 + 0xa0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar17 = *(long *)(unaff_x22 + 0x20);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(lVar31 + 8))(*(undefined8 *)(unaff_x22 + 0x140),uVar23);
  (**(code **)(lVar6 + 8))(lVar17 + lVar24,uVar21);
  (**(code **)(lVar31 + 0x20))(lVar17 + lVar24,uVar22,uVar23);
  (**(code **)(lVar31 + 0x38))(lVar17 + lVar24,0,1,uVar23);
  (**(code **)(lVar19 + 0x20))(uVar27,uVar25,uVar29);
  (*pcVar16)(uVar27,0,1,uVar29);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar29 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100737604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073796c | FUN_10073796c */

void FUN_10073796c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  code *pcVar4;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1a8));
  if (unaff_x20 == 0) {
    pcVar4 = *(code **)(lVar3 + 0x198);
    uVar2 = *(undefined8 *)(lVar3 + 0x120);
    uVar1 = *(undefined8 *)(lVar3 + 0x58);
    (**(code **)(*(long *)(lVar3 + 0x48) + 8))
              (*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x40));
    (*pcVar4)(uVar2,uVar1);
    pcVar4 = FUN_100737a00;
  }
  else {
    _swift_errorRelease();
    pcVar4 = FUN_100737b74;
  }
  _swift_task_switch(pcVar4,0,0);
  return;
}



/* Address: 0x100737a00 | FUN_100737a00 */

void FUN_100737a00(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x198);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(unaff_x22 + 0x1a0))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x38));
  (*pcVar1)(uVar17,uVar16);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar5 = *(long *)(unaff_x22 + 0x150);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(unaff_x22 + 0x198))
            (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x58));
  (**(code **)(lVar5 + 0x20))(uVar19,uVar17,uVar16);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100737b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100737b74 | FUN_100737b74 */

void FUN_100737b74(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  
  pcVar1 = *(code **)(unaff_x22 + 0x198);
  pcVar4 = *(code **)(unaff_x22 + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
  (*pcVar1)(uVar2,uVar19);
  (*pcVar4)(uVar18,uVar20);
  (*pcVar1)(uVar16,uVar19);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar5 = *(long *)(unaff_x22 + 0x150);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(unaff_x22 + 0x198))
            (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x58));
  (**(code **)(lVar5 + 0x20))(uVar19,uVar16,uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100737d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100737d08 | FUN_100737d08 */

void FUN_100737d08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar10 = *(long *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x58));
  (**(code **)(lVar10 + 8))(uVar9,uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100737e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100737e54 | FUN_100737e54 */

void FUN_100737e54(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100736934(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100737ebc | FUN_100737ebc */

void FUN_100737ebc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  long local_88;
  undefined1 *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar9 = *(long *)(param_2 + 0x18);
  local_78 = *(long *)(lVar9 + -8);
  lVar8 = *(long *)(local_78 + 0x40);
  local_70 = *(undefined8 *)(param_2 + 0x30);
  lVar6 = 0;
  local_80 = auStack_90 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0,local_70,lVar9,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar12 = *(long *)(lVar6 + -8);
  lVar14 = (long)(auStack_90 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_2 + 0x10);
  lVar15 = *(long *)(lVar13 + -8);
  lVar10 = lVar14 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  lVar8 = 0;
  local_88 = lVar6;
  _swift_getAssociatedTypeWitness
            (0,uVar11,lVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar6 = lVar10 - (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar15 + 0x10))(lVar10);
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar12 + 0x10))(lVar14,unaff_x20 + *(int *)(param_2 + 0x3c),local_88);
  puVar4 = local_80;
  (**(code **)(local_78 + 0x10))(local_80,unaff_x20 + *(int *)(param_2 + 0x40),lVar9);
  uVar5 = local_70;
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x44));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar6 + -0x10) = uVar11;
  *(undefined8 *)(lVar6 + -8) = uVar5;
  FUN_1007367d8(local_68,lVar6,lVar14,puVar4,uVar2,uVar3,lVar13,lVar9,uVar7);
  _swift_retain(uVar3);
  return;
}



/* Address: 0x100738070 | FUN_100738070 */

void FUN_100738070(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c757d8,param_1);
  return;
}



/* Address: 0x100738080 | FUN_100738080 */

void FUN_100738080(long param_1)

{
  FUN_100737ebc();
                    /* WARNING: Could not recover jumptable at 0x0001007380ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x1007380b0 | FUN_1007380b0 */

void FUN_1007380b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long local_40;
  long local_38;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x30);
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    _swift_getAssociatedTypeWitness
              (0x13f,uVar2,uVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
               PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
    if (uVar2 < 0x40) {
      local_38 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      _swift_checkMetadataState();
      if (uVar3 < 0x40) {
        local_30 = *(long *)(lVar1 + -8) + 0x40;
        puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
        _swift_initStructMetadata(param_1,0,4,&local_40,param_1 + 0x38);
      }
    }
  }
  return;
}



/* Address: 0x100738180 | FUN_100738180 */

long * FUN_100738180(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),lVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar15 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(uint *)(lVar15 + 0x50) & 0xff;
  uVar7 = lVar11 + uVar6;
  lVar14 = *(long *)(lVar3 + -8);
  uVar9 = (ulong)*(uint *)(lVar14 + 0x50) & 0xff;
  lVar1 = *(long *)(lVar15 + 0x40) + uVar9;
  lVar11 = *(long *)(lVar14 + 0x40) + 7;
  uVar4 = (uint)uVar9 | *(uint *)(lVar13 + 0x50) & 0xf8 | (uint)uVar6;
  if ((uVar4 < 8 &&
      ((*(uint *)(lVar14 + 0x50) | *(uint *)(lVar13 + 0x50) | *(uint *)(lVar15 + 0x50)) & 0x100000)
      == 0) && (lVar11 + (lVar1 + (uVar7 & (uVar6 ^ 0xffffffffffffffff)) &
                         (uVar9 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar2);
    uVar12 = uVar7 + (long)param_1 & ~uVar6;
    uVar7 = uVar7 + (long)param_2 & ~uVar6;
    (**(code **)(lVar15 + 0x10))(uVar12,uVar7,lVar5);
    uVar6 = uVar12 + lVar1 & ~uVar9;
    uVar7 = uVar7 + lVar1 & ~uVar9;
    (**(code **)(lVar14 + 0x10))(uVar6,uVar7,lVar3);
    puVar8 = (undefined8 *)(lVar11 + uVar6 & 0xfffffffffffffff8);
    puVar10 = (undefined8 *)(lVar11 + uVar7 & 0xfffffffffffffff8);
    lVar11 = puVar10[1];
    uVar16 = *puVar10;
    puVar8[1] = puVar10[1];
    *puVar8 = uVar16;
  }
  else {
    uVar7 = (ulong)(uVar4 | 7);
    lVar11 = *param_2;
    *param_1 = lVar11;
    param_1 = (long *)(lVar11 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar11);
  return param_1;
}



/* Address: 0x100738314 | FUN_100738314 */

void FUN_100738314(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar4 + 8))();
  lVar1 = *(long *)(lVar4 + 0x40);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x30),lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar5 = *(long *)(lVar4 + -8);
  uVar3 = lVar1 + param_1 + (ulong)*(byte *)(lVar5 + 0x50) &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 8))(uVar3,lVar4);
  lVar4 = *(long *)(lVar2 + -8);
  uVar3 = uVar3 + *(long *)(lVar5 + 0x40) + (ulong)*(byte *)(lVar4 + 0x50) &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 8))(uVar3,lVar2);
  _swift_release(*(undefined8 *)((*(long *)(lVar4 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x1007383d4 | FUN_1007383d4 */

long FUN_1007383d4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar8 + 0x10))();
  lVar8 = *(long *)(lVar8 + 0x40);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),lVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar10 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar8 = lVar8 + uVar3;
  uVar9 = lVar8 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar7 = lVar8 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar10 + 0x10))(uVar9,uVar7,lVar1);
  lVar1 = *(long *)(lVar6 + -8);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  lVar8 = *(long *)(lVar10 + 0x40) + uVar3;
  uVar9 = lVar8 + uVar9 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar8 + uVar7 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar1 + 0x10))(uVar9,uVar3,lVar6);
  lVar8 = *(long *)(lVar1 + 0x40) + 7;
  puVar5 = (undefined8 *)(lVar8 + uVar9 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar8 + uVar3 & 0xfffffffffffffff8);
  uVar2 = puVar4[1];
  uVar11 = *puVar4;
  puVar5[1] = puVar4[1];
  *puVar5 = uVar11;
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1007384d0 | FUN_1007384d0 */

long FUN_1007384d0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar9 + 0x18))();
  lVar9 = *(long *)(lVar9 + 0x40);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),lVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar11 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar9 = lVar9 + uVar3;
  uVar10 = lVar9 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar8 = lVar9 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar11 + 0x18))(uVar10,uVar8,lVar1);
  lVar1 = *(long *)(lVar6 + -8);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  lVar9 = *(long *)(lVar11 + 0x40) + uVar3;
  uVar10 = lVar9 + uVar10 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar9 + uVar8 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar1 + 0x18))(uVar10,uVar3,lVar6);
  lVar9 = *(long *)(lVar1 + 0x40) + 7;
  puVar5 = (undefined8 *)(lVar9 + uVar10 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar9 + uVar3 & 0xfffffffffffffff8);
  uVar7 = puVar5[1];
  uVar2 = puVar4[1];
  uVar12 = *puVar4;
  puVar5[1] = puVar4[1];
  *puVar5 = uVar12;
  _swift_retain(uVar2);
  _swift_release(uVar7);
  return param_1;
}



/* Address: 0x1007385d8 | FUN_1007385d8 */

long FUN_1007385d8(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar7 + 0x20))();
  lVar7 = *(long *)(lVar7 + 0x40);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar9 = *(long *)(lVar1 + -8);
  uVar2 = (ulong)*(byte *)(lVar9 + 0x50);
  lVar7 = lVar7 + uVar2;
  uVar8 = lVar7 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar6 = lVar7 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar9 + 0x20))(uVar8,uVar6,lVar1);
  lVar1 = *(long *)(lVar5 + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  lVar7 = *(long *)(lVar9 + 0x40) + uVar2;
  uVar8 = lVar7 + uVar8 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + uVar6 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar1 + 0x20))(uVar8,uVar2,lVar5);
  lVar7 = *(long *)(lVar1 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar7 + uVar8 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar7 + uVar2 & 0xfffffffffffffff8);
  uVar10 = *puVar3;
  puVar4[1] = puVar3[1];
  *puVar4 = uVar10;
  return param_1;
}



/* Address: 0x1007386cc | FUN_1007386cc */

long FUN_1007386cc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar8 + 0x28))();
  lVar8 = *(long *)(lVar8 + 0x40);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),lVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar10 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar8 = lVar8 + uVar3;
  uVar9 = lVar8 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar7 = lVar8 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar10 + 0x28))(uVar9,uVar7,lVar1);
  lVar1 = *(long *)(lVar6 + -8);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  lVar8 = *(long *)(lVar10 + 0x40) + uVar3;
  uVar9 = lVar8 + uVar9 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar8 + uVar7 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar1 + 0x28))(uVar9,uVar3,lVar6);
  lVar8 = *(long *)(lVar1 + 0x40) + 7;
  puVar5 = (undefined8 *)(lVar8 + uVar9 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar8 + uVar3 & 0xfffffffffffffff8);
  uVar2 = puVar5[1];
  uVar11 = *puVar4;
  puVar5[1] = puVar4[1];
  *puVar5 = uVar11;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1007387c8 | FUN_1007387c8 */

int * FUN_1007387c8(int *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(lVar6 + -8);
  uVar7 = *(uint *)(lVar19 + 0x54);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x30),lVar12,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar16 = *(long *)(lVar10 + -8);
  uVar8 = *(uint *)(lVar16 + 0x54);
  uVar13 = uVar8;
  if (uVar8 <= uVar7) {
    uVar13 = uVar7;
  }
  lVar15 = *(long *)(lVar12 + -8);
  uVar11 = *(uint *)(lVar15 + 0x54);
  uVar3 = uVar11;
  if (uVar11 <= uVar13) {
    uVar3 = uVar13;
  }
  if (uVar3 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  uVar18 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar14 = *(long *)(lVar19 + 0x40) + uVar18;
  uVar17 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar1 = *(long *)(lVar15 + 0x40) + 7;
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar2 = (lVar1 + (*(long *)(lVar16 + 0x40) + uVar17 + (uVar14 & (uVar18 ^ 0xffffffffffffffff)) &
                     (uVar17 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
    uVar13 = 2;
    uVar5 = uVar13;
    if ((uVar2 & 0xfffffff8) == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar13 = 4;
    }
    if (uVar5 < 0x100) {
      uVar13 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar13;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar13 = (uint)*(byte *)((long)param_1 + uVar2), *(byte *)((long)param_1 + uVar2) != 0))
      goto LAB_1007388dc;
    }
    else if (uVar4 == 2) {
      uVar13 = (uint)*(ushort *)((long)param_1 + uVar2);
      if (*(ushort *)((long)param_1 + uVar2) != 0) {
LAB_1007388dc:
        iVar9 = uVar13 - 1;
        if ((uVar2 & 0xfffffff8) != 0) {
          iVar9 = *param_1;
        }
        return (int *)(ulong)(uVar3 + iVar9 + 1);
      }
    }
    else {
      uVar13 = *(uint *)((long)param_1 + uVar2);
      if (uVar13 != 0) goto LAB_1007388dc;
    }
  }
  if (uVar7 == uVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 0x30);
    lVar12 = lVar6;
    uVar11 = uVar7;
  }
  else {
    param_1 = (int *)(uVar14 + (long)param_1 & ~uVar18);
    if (uVar8 == uVar3) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x30);
      lVar12 = lVar10;
      uVar11 = uVar8;
    }
    else {
      param_1 = (int *)((long)param_1 + uVar17 + *(long *)(lVar16 + 0x40) & ~uVar17);
      if (uVar11 != uVar3) {
        uVar14 = *(ulong *)(lVar1 + (long)param_1 & 0xfffffffffffffff8);
        if (0xfffffffe < uVar14) {
          uVar14 = 0xffffffff;
        }
        return (int *)(ulong)((int)uVar14 + 1);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x30);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100738968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar11,lVar12);
  return param_1;
}



/* Address: 0x1007389b0 | FUN_1007389b0 */

void FUN_1007389b0(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  
  lVar6 = *(long *)(param_4 + 0x10);
  lVar13 = *(long *)(param_4 + 0x18);
  lVar21 = *(long *)(lVar6 + -8);
  uVar7 = *(uint *)(lVar21 + 0x54);
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x30),lVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar16 = *(long *)(lVar11 + -8);
  uVar8 = *(uint *)(lVar16 + 0x54);
  uVar10 = uVar8;
  if (uVar8 <= uVar7) {
    uVar10 = uVar7;
  }
  lVar15 = *(long *)(lVar13 + -8);
  uVar12 = *(uint *)(lVar15 + 0x54);
  uVar4 = uVar12;
  if (uVar12 <= uVar10) {
    uVar4 = uVar10;
  }
  if (uVar4 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar19 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar3 = *(long *)(lVar21 + 0x40) + uVar19;
  lVar18 = *(long *)(lVar16 + 0x40);
  uVar17 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar1 = *(long *)(lVar15 + 0x40) + 7;
  sVar2 = (lVar1 + (lVar18 + uVar17 + (uVar3 & (uVar19 ^ 0xffffffffffffffff)) &
                   (uVar17 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar20 = uVar10;
  if ((int)sVar2 == 0) {
    uVar20 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar20) {
    uVar10 = 4;
  }
  if (uVar20 < 0x100) {
    uVar10 = 1;
  }
  uVar5 = 0;
  if (1 < uVar20) {
    uVar5 = uVar10;
  }
  uVar10 = 0;
  if (uVar4 < param_3) {
    uVar10 = uVar5;
  }
  uVar20 = (uint)param_2;
  iVar9 = uVar20 - uVar4;
  if (uVar20 < uVar4 || iVar9 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (uVar20 != 0) {
      if (uVar7 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
        lVar13 = lVar6;
        uVar12 = uVar7;
      }
      else {
        param_1 = (int *)(uVar3 + (long)param_1 & ~uVar19);
        if (uVar8 == uVar4) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x38);
          lVar13 = lVar11;
          uVar12 = uVar8;
        }
        else {
          param_1 = (int *)((long)param_1 + uVar17 + lVar18 & ~uVar17);
          if (uVar12 != uVar4) {
            puVar14 = (ulong *)(lVar1 + (long)param_1 & 0xfffffffffffffff8);
            if (-1 < (int)uVar20) {
              *puVar14 = (ulong)(uVar20 - 1);
              return;
            }
            *puVar14 = (ulong)(uVar20 & 0x7fffffff);
            puVar14[1] = 0;
            return;
          }
          UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x38);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000100738ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar12,lVar13);
      return;
    }
  }
  else {
    if ((int)sVar2 != 0) {
      iVar9 = 1;
      _bzero(param_1,sVar2);
      *param_1 = uVar20 + ~uVar4;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar9;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar9;
    }
  }
  return;
}



/* Address: 0x100738be0 | FUN_100738be0 */

void FUN_100738be0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbdf9c);
  return;
}



/* Address: 0x100738bec | FUN_100738bec */

void FUN_100738bec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  _swift_getFunctionTypeMetadata2(0x64000002,OVar3.value,uVar4,uVar1);
  return;
}



/* Address: 0x100738c58 | FUN_100738c58 */

void FUN_100738c58(long param_1)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined *puStack_38;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  lVar2 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar3,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar3 < 0x40) {
    local_58 = *(long *)(lVar2 + -8) + 0x40;
    uVar5 = *(ulong *)(param_1 + 0x30);
    uVar4 = *(ulong *)(param_1 + 0x18);
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar5,uVar4,
               PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
               PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (uVar3 < 0x40) {
      local_50 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
      lVar2 = 0x13f;
      _swift_getAssociatedTypeWitness
                (0x13f,uVar5,uVar4,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
      if (uVar5 < 0x40) {
        local_48 = *(long *)(lVar2 + -8) + 0x40;
        lVar2 = 0x13f;
        _swift_checkMetadataState();
        if (uVar4 < 0x40) {
          local_40 = *(long *)(lVar2 + -8) + 0x40;
          puStack_38 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
          _swift_initStructMetadata(param_1,0,5,&local_58,param_1 + 0x38);
        }
      }
    }
  }
  return;
}



/* Address: 0x100738d88 | FUN_100738d88 */

long * FUN_100738d88(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  void *pvVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  void *pvVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar16 = *(long *)(lVar4 + -8);
  lVar14 = *(long *)(lVar16 + 0x40);
  uVar18 = *(undefined8 *)(param_3 + 0x30);
  lVar22 = *(long *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,lVar22,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar24 = *(long *)(lVar5 + -8);
  uVar2 = *(uint *)(lVar24 + 0x50);
  uVar20 = (ulong)uVar2 & 0xff;
  uVar9 = lVar14 + uVar20;
  sVar11 = *(size_t *)(lVar24 + 0x40);
  if (*(int *)(lVar24 + 0x54) == 0) {
    sVar11 = sVar11 + 1;
  }
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,lVar22,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar15 = *(long *)(lVar6 + -8);
  uVar8 = (ulong)*(uint *)(lVar15 + 0x50) & 0xff;
  lVar1 = sVar11 + uVar8;
  lVar13 = *(long *)(lVar15 + 0x40);
  lVar23 = *(long *)(lVar22 + -8);
  uVar19 = (ulong)*(uint *)(lVar23 + 0x50) & 0xff;
  lVar14 = *(long *)(lVar23 + 0x40) + 7;
  uVar3 = (uint)uVar20 | *(uint *)(lVar16 + 0x50) & 0xf8 | (uint)uVar8 | (uint)uVar19;
  if ((uVar3 < 8 &&
      ((*(uint *)(lVar15 + 0x50) | uVar2 | *(uint *)(lVar23 + 0x50) | *(uint *)(lVar16 + 0x50)) &
      0x100000) == 0) &&
      (lVar14 + (lVar13 + uVar19 +
                 (lVar1 + (uVar9 & (uVar20 ^ 0xffffffffffffffff)) & (uVar8 ^ 0xffffffffffffffff)) &
                (uVar19 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10 < 0x19) {
    (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar4);
    pvVar21 = (void *)(uVar9 + (long)param_1 & ~uVar20);
    pvVar17 = (void *)(uVar9 + (long)param_2 & ~uVar20);
    pvVar7 = pvVar17;
    (**(code **)(lVar24 + 0x30))(pvVar17,1,lVar5);
    if ((int)pvVar7 == 0) {
      (**(code **)(lVar24 + 0x10))(pvVar21,pvVar17,lVar5);
      (**(code **)(lVar24 + 0x38))(pvVar21,0,1,lVar5);
    }
    else {
      _memcpy(pvVar21,pvVar17,sVar11);
    }
    uVar20 = lVar1 + (long)pvVar21 & ~uVar8;
    uVar9 = lVar1 + (long)pvVar17 & ~uVar8;
    (**(code **)(lVar15 + 0x10))(uVar20,uVar9,lVar6);
    lVar13 = lVar13 + uVar19;
    uVar20 = uVar20 + lVar13 & ~uVar19;
    uVar9 = uVar9 + lVar13 & ~uVar19;
    (**(code **)(lVar23 + 0x10))(uVar20,uVar9,lVar22);
    puVar10 = (undefined8 *)(lVar14 + uVar20 & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)(lVar14 + uVar9 & 0xfffffffffffffff8);
    lVar4 = puVar12[1];
    uVar18 = *puVar12;
    puVar10[1] = puVar12[1];
    *puVar10 = uVar18;
  }
  else {
    uVar9 = (ulong)(uVar3 | 7);
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar4);
  return param_1;
}



/* Address: 0x100739030 | FUN_100739030 */

void FUN_100739030(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 8))(param_1,lVar2);
  lVar6 = *(long *)(lVar6 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar3,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar8 = *(long *)(lVar2 + -8);
  uVar7 = lVar6 + param_1 + (ulong)*(byte *)(lVar8 + 0x50) &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = uVar7;
  (**(code **)(lVar8 + 0x30))(uVar7,1,lVar2);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar8 + 8))(uVar7,lVar2);
  }
  iVar1 = *(int *)(lVar8 + 0x54);
  lVar2 = *(long *)(lVar8 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar3,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar8 = *(long *)(lVar6 + -8);
  lVar2 = lVar2 + uVar7;
  if (iVar1 == 0) {
    lVar2 = lVar2 + 1;
  }
  uVar5 = lVar2 + (ulong)*(byte *)(lVar8 + 0x50) &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 8))(uVar5,lVar6);
  lVar2 = *(long *)(lVar3 + -8);
  uVar5 = uVar5 + *(long *)(lVar8 + 0x40) + (ulong)*(byte *)(lVar2 + 0x50) &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 8))(uVar5,lVar3);
  _swift_release(*(undefined8 *)((*(long *)(lVar2 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x100739190 | FUN_100739190 */

long FUN_100739190(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  void *pvVar13;
  int iVar14;
  long lVar15;
  size_t sVar16;
  undefined8 uVar17;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar2 + -8);
  (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar2);
  lVar2 = *(long *)(lVar8 + 0x40);
  uVar9 = *(undefined8 *)(param_3 + 0x30);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar15 = *(long *)(lVar8 + -8);
  uVar4 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar2 = lVar2 + uVar4;
  pvVar11 = (void *)(lVar2 + param_1 & (uVar4 ^ 0xffffffffffffffff));
  pvVar13 = (void *)(lVar2 + param_2 & (uVar4 ^ 0xffffffffffffffff));
  pvVar3 = pvVar13;
  (**(code **)(lVar15 + 0x30))(pvVar13,1,lVar8);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar15 + 0x10))(pvVar11,pvVar13,lVar8);
    (**(code **)(lVar15 + 0x38))(pvVar11,0,1,lVar8);
    iVar14 = *(int *)(lVar15 + 0x54);
    sVar16 = *(size_t *)(lVar15 + 0x40);
  }
  else {
    iVar14 = *(int *)(lVar15 + 0x54);
    sVar16 = *(size_t *)(lVar15 + 0x40);
    sVar1 = sVar16;
    if (iVar14 == 0) {
      sVar1 = sVar16 + 1;
    }
    _memcpy(pvVar11,pvVar13,sVar1);
  }
  if (iVar14 == 0) {
    sVar16 = sVar16 + 1;
  }
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar15 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar10 = sVar16 + uVar4 + (long)pvVar11 & (uVar4 ^ 0xffffffffffffffff);
  uVar12 = sVar16 + uVar4 + (long)pvVar13 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar15 + 0x10))(uVar10,uVar12,lVar2);
  lVar8 = *(long *)(lVar7 + -8);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar2 = *(long *)(lVar15 + 0x40) + uVar4;
  uVar10 = lVar2 + uVar10 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + uVar12 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 0x10))(uVar10,uVar4,lVar7);
  lVar2 = *(long *)(lVar8 + 0x40) + 7;
  puVar6 = (undefined8 *)(lVar2 + uVar10 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar2 + uVar4 & 0xfffffffffffffff8);
  uVar9 = puVar5[1];
  uVar17 = *puVar5;
  puVar6[1] = puVar5[1];
  *puVar6 = uVar17;
  _swift_retain(uVar9);
  return param_1;
}



/* Address: 0x100739374 | FUN_100739374 */

long FUN_100739374(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  void *pvVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = *(long *)(lVar1 + -8);
  (**(code **)(lVar10 + 0x18))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar10 + 0x40);
  uVar11 = *(undefined8 *)(param_3 + 0x30);
  lVar8 = *(long *)(param_3 + 0x18);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,lVar8,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar16 = *(long *)(lVar10 + -8);
  uVar4 = (ulong)*(byte *)(lVar16 + 0x50);
  lVar1 = lVar1 + uVar4;
  pvVar13 = (void *)(lVar1 + param_1 & (uVar4 ^ 0xffffffffffffffff));
  pvVar15 = (void *)(lVar1 + param_2 & (uVar4 ^ 0xffffffffffffffff));
  pcVar17 = *(code **)(lVar16 + 0x30);
  pvVar2 = pvVar13;
  (*pcVar17)(pvVar13,1,lVar10);
  pvVar3 = pvVar15;
  (*pcVar17)(pvVar15,1,lVar10);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar16 + 0x18))(pvVar13,pvVar15,lVar10);
      goto LAB_1007394b0;
    }
    (**(code **)(lVar16 + 8))(pvVar13,lVar10);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar16 + 0x10))(pvVar13,pvVar15,lVar10);
    (**(code **)(lVar16 + 0x38))(pvVar13,0,1,lVar10);
    goto LAB_1007394b0;
  }
  sVar6 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  _memcpy(pvVar13,pvVar15,sVar6);
LAB_1007394b0:
  lVar1 = *(long *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,lVar8,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar16 = *(long *)(lVar10 + -8);
  uVar4 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar12 = lVar1 + uVar4 + (long)pvVar13 & (uVar4 ^ 0xffffffffffffffff);
  uVar14 = lVar1 + uVar4 + (long)pvVar15 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar16 + 0x18))(uVar12,uVar14,lVar10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar4 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar1 = *(long *)(lVar16 + 0x40) + uVar4;
  uVar12 = lVar1 + uVar12 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = lVar1 + uVar14 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar10 + 0x18))(uVar12,uVar4,lVar8);
  lVar1 = *(long *)(lVar10 + 0x40) + 7;
  puVar7 = (undefined8 *)(lVar1 + uVar12 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar1 + uVar4 & 0xfffffffffffffff8);
  uVar9 = puVar7[1];
  uVar11 = puVar5[1];
  uVar18 = *puVar5;
  puVar7[1] = puVar5[1];
  *puVar7 = uVar18;
  _swift_retain(uVar11);
  _swift_release(uVar9);
  return param_1;
}



/* Address: 0x1007395b0 | FUN_1007395b0 */

long FUN_1007395b0(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  void *pvVar13;
  int iVar14;
  long lVar15;
  size_t sVar16;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar2 + -8);
  (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar2);
  lVar2 = *(long *)(lVar8 + 0x40);
  uVar9 = *(undefined8 *)(param_3 + 0x30);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar15 = *(long *)(lVar8 + -8);
  uVar4 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar2 = lVar2 + uVar4;
  pvVar11 = (void *)(lVar2 + param_1 & (uVar4 ^ 0xffffffffffffffff));
  pvVar13 = (void *)(lVar2 + param_2 & (uVar4 ^ 0xffffffffffffffff));
  pvVar3 = pvVar13;
  (**(code **)(lVar15 + 0x30))(pvVar13,1,lVar8);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar15 + 0x20))(pvVar11,pvVar13,lVar8);
    (**(code **)(lVar15 + 0x38))(pvVar11,0,1,lVar8);
    iVar14 = *(int *)(lVar15 + 0x54);
    sVar16 = *(size_t *)(lVar15 + 0x40);
  }
  else {
    iVar14 = *(int *)(lVar15 + 0x54);
    sVar16 = *(size_t *)(lVar15 + 0x40);
    sVar1 = sVar16;
    if (iVar14 == 0) {
      sVar1 = sVar16 + 1;
    }
    _memcpy(pvVar11,pvVar13,sVar1);
  }
  if (iVar14 == 0) {
    sVar16 = sVar16 + 1;
  }
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar15 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar10 = sVar16 + uVar4 + (long)pvVar11 & (uVar4 ^ 0xffffffffffffffff);
  uVar12 = sVar16 + uVar4 + (long)pvVar13 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar15 + 0x20))(uVar10,uVar12,lVar2);
  lVar8 = *(long *)(lVar7 + -8);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar2 = *(long *)(lVar15 + 0x40) + uVar4;
  uVar10 = lVar2 + uVar10 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + uVar12 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 0x20))(uVar10,uVar4,lVar7);
  lVar2 = *(long *)(lVar8 + 0x40) + 7;
  puVar6 = (undefined8 *)(lVar2 + uVar10 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar2 + uVar4 & 0xfffffffffffffff8);
  uVar9 = *puVar5;
  puVar6[1] = puVar5[1];
  *puVar6 = uVar9;
  return param_1;
}



/* Address: 0x10073978c | FUN_10073978c */

long FUN_10073978c(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  void *pvVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar9 = *(long *)(lVar1 + -8);
  (**(code **)(lVar9 + 0x28))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar9 + 0x40);
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  lVar8 = *(long *)(param_3 + 0x18);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar8,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar15 = *(long *)(lVar9 + -8);
  uVar4 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar1 = lVar1 + uVar4;
  pvVar12 = (void *)(lVar1 + param_1 & (uVar4 ^ 0xffffffffffffffff));
  pvVar14 = (void *)(lVar1 + param_2 & (uVar4 ^ 0xffffffffffffffff));
  pcVar16 = *(code **)(lVar15 + 0x30);
  pvVar2 = pvVar12;
  (*pcVar16)(pvVar12,1,lVar9);
  pvVar3 = pvVar14;
  (*pcVar16)(pvVar14,1,lVar9);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar15 + 0x28))(pvVar12,pvVar14,lVar9);
      goto LAB_1007398c8;
    }
    (**(code **)(lVar15 + 8))(pvVar12,lVar9);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar15 + 0x20))(pvVar12,pvVar14,lVar9);
    (**(code **)(lVar15 + 0x38))(pvVar12,0,1,lVar9);
    goto LAB_1007398c8;
  }
  sVar6 = *(size_t *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  _memcpy(pvVar12,pvVar14,sVar6);
LAB_1007398c8:
  lVar1 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,lVar8,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar15 = *(long *)(lVar9 + -8);
  uVar4 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar11 = lVar1 + uVar4 + (long)pvVar12 & (uVar4 ^ 0xffffffffffffffff);
  uVar13 = lVar1 + uVar4 + (long)pvVar14 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar15 + 0x28))(uVar11,uVar13,lVar9);
  lVar9 = *(long *)(lVar8 + -8);
  uVar4 = (ulong)*(byte *)(lVar9 + 0x50);
  lVar1 = *(long *)(lVar15 + 0x40) + uVar4;
  uVar11 = lVar1 + uVar11 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = lVar1 + uVar13 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar9 + 0x28))(uVar11,uVar4,lVar8);
  lVar1 = *(long *)(lVar9 + 0x40) + 7;
  puVar7 = (undefined8 *)(lVar1 + uVar11 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar1 + uVar4 & 0xfffffffffffffff8);
  uVar10 = puVar7[1];
  uVar17 = *puVar5;
  puVar7[1] = puVar5[1];
  *puVar7 = uVar17;
  _swift_release(uVar10);
  return param_1;
}



/* Address: 0x1007399bc | FUN_1007399bc */

int * FUN_1007399bc(int *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  
  lVar12 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar27 = *(long *)(lVar12 + -8);
  uVar7 = *(uint *)(lVar27 + 0x54);
  uVar26 = *(undefined8 *)(param_3 + 0x30);
  lVar25 = *(long *)(param_3 + 0x18);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar26,lVar25,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar24 = *(long *)(lVar13 + -8);
  uVar8 = *(uint *)(lVar24 + 0x54);
  uVar5 = 0;
  if (uVar8 != 0) {
    uVar5 = uVar8 - 1;
  }
  uVar3 = uVar5;
  if (uVar5 <= uVar7) {
    uVar3 = uVar7;
  }
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar26,lVar25,puVar11,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar19 = *(long *)(lVar14 + -8);
  uVar9 = *(uint *)(lVar19 + 0x54);
  uVar17 = uVar9;
  if (uVar9 <= uVar3) {
    uVar17 = uVar3;
  }
  lVar18 = *(long *)(lVar25 + -8);
  uVar16 = *(uint *)(lVar18 + 0x54);
  uVar3 = uVar16;
  if (uVar16 <= uVar17) {
    uVar3 = uVar17;
  }
  if (uVar3 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  lVar20 = *(long *)(lVar24 + 0x40);
  if (uVar8 == 0) {
    lVar20 = lVar20 + 1;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  uVar23 = (ulong)*(byte *)(lVar24 + 0x50);
  uVar15 = *(long *)(lVar27 + 0x40) + uVar23;
  uVar22 = (ulong)*(byte *)(lVar19 + 0x50);
  uVar21 = (ulong)*(byte *)(lVar18 + 0x50);
  lVar1 = *(long *)(lVar18 + 0x40) + 7;
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar2 = (lVar1 + (*(long *)(lVar19 + 0x40) + uVar21 +
                      (lVar20 + uVar22 + (uVar15 & (uVar23 ^ 0xffffffffffffffff)) &
                      (uVar22 ^ 0xffffffffffffffff)) & (uVar21 ^ 0xffffffffffffffff)) &
            0xfffffffffffffff8) + 0x10;
    uVar17 = 2;
    uVar6 = uVar17;
    if ((uVar2 & 0xfffffff8) == 0) {
      uVar6 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar6) {
      uVar17 = 4;
    }
    if (uVar6 < 0x100) {
      uVar17 = 1;
    }
    uVar4 = 0;
    if (1 < uVar6) {
      uVar4 = uVar17;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar17 = (uint)*(byte *)((long)param_1 + uVar2), *(byte *)((long)param_1 + uVar2) != 0)) {
LAB_100739b48:
        iVar10 = uVar17 - 1;
        if ((uVar2 & 0xfffffff8) != 0) {
          iVar10 = *param_1;
        }
        return (int *)(ulong)(uVar3 + iVar10 + 1);
      }
    }
    else {
      if (uVar4 == 2) {
        uVar17 = (uint)*(ushort *)((long)param_1 + uVar2);
      }
      else {
        uVar17 = *(uint *)((long)param_1 + uVar2);
      }
      if (uVar17 != 0) goto LAB_100739b48;
    }
  }
  if (uVar7 == uVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar27 + 0x30);
    lVar25 = lVar12;
    uVar16 = uVar7;
  }
  else {
    uVar15 = uVar15 + (long)param_1 & ~uVar23;
    if (uVar5 == uVar3) {
      if (uVar8 < 2) {
        return (int *)0x0;
      }
      (**(code **)(lVar24 + 0x30))(uVar15,uVar8,lVar13);
      uVar5 = 0;
      if ((int)uVar15 != 0) {
        uVar5 = (int)uVar15 - 1;
      }
      return (int *)(ulong)uVar5;
    }
    param_1 = (int *)(uVar15 + lVar20 + uVar22 & ~uVar22);
    if (uVar9 == uVar3) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 0x30);
      lVar25 = lVar14;
      uVar16 = uVar9;
    }
    else {
      param_1 = (int *)((long)param_1 + uVar21 + *(long *)(lVar19 + 0x40) & ~uVar21);
      if (uVar16 != uVar3) {
        uVar15 = *(ulong *)(lVar1 + (long)param_1 & 0xfffffffffffffff8);
        if (0xfffffffe < uVar15) {
          uVar15 = 0xffffffff;
        }
        return (int *)(ulong)((int)uVar15 + 1);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar18 + 0x30);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100739bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar16,lVar25);
  return param_1;
}



/* Address: 0x100739c88 | FUN_100739c88 */

void FUN_100739c88(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar27 = *(long *)(lVar13 + -8);
  uVar8 = *(uint *)(lVar27 + 0x54);
  uVar29 = *(undefined8 *)(param_4 + 0x30);
  lVar28 = *(long *)(param_4 + 0x18);
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar29,lVar28,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar26 = *(long *)(lVar14 + -8);
  uVar9 = *(uint *)(lVar26 + 0x54);
  uVar4 = 0;
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
  }
  uVar5 = uVar4;
  if (uVar4 <= uVar8) {
    uVar5 = uVar8;
  }
  lVar15 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar29,lVar28,puVar12,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar20 = *(long *)(lVar15 + -8);
  uVar10 = *(uint *)(lVar20 + 0x54);
  uVar17 = uVar10;
  if (uVar10 <= uVar5) {
    uVar17 = uVar5;
  }
  lVar19 = *(long *)(lVar28 + -8);
  uVar16 = *(uint *)(lVar19 + 0x54);
  uVar5 = uVar16;
  if (uVar16 <= uVar17) {
    uVar5 = uVar17;
  }
  if (uVar5 < 0x80000000) {
    uVar5 = 0x7fffffff;
  }
  uVar25 = (ulong)*(byte *)(lVar26 + 0x50);
  uVar3 = *(long *)(lVar27 + 0x40) + uVar25;
  lVar22 = *(long *)(lVar26 + 0x40);
  if (uVar9 == 0) {
    lVar22 = lVar22 + 1;
  }
  uVar24 = (ulong)*(byte *)(lVar20 + 0x50);
  lVar23 = *(long *)(lVar20 + 0x40);
  uVar21 = (ulong)*(byte *)(lVar19 + 0x50);
  lVar1 = *(long *)(lVar19 + 0x40) + 7;
  sVar2 = (lVar1 + (lVar23 + uVar21 +
                    (lVar22 + uVar24 + (uVar3 & (uVar25 ^ 0xffffffffffffffff)) &
                    (uVar24 ^ 0xffffffffffffffff)) & (uVar21 ^ 0xffffffffffffffff)) &
          0xfffffffffffffff8) + 0x10;
  uVar17 = 2;
  uVar7 = uVar17;
  if ((int)sVar2 == 0) {
    uVar7 = (param_3 - uVar5) + 1;
  }
  if (0xffff < uVar7) {
    uVar17 = 4;
  }
  if (uVar7 < 0x100) {
    uVar17 = 1;
  }
  uVar6 = 0;
  if (1 < uVar7) {
    uVar6 = uVar17;
  }
  uVar17 = 0;
  if (uVar5 < param_3) {
    uVar17 = uVar6;
  }
  iVar11 = param_2 - uVar5;
  if (param_2 < uVar5 || iVar11 == 0) {
    if (uVar17 < 2) {
      if (uVar17 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (uVar17 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      if (uVar8 == uVar5) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar27 + 0x38);
        lVar28 = lVar13;
        uVar16 = uVar8;
      }
      else {
        param_1 = (int *)(uVar3 + (long)param_1 & ~uVar25);
        if (uVar4 == uVar5) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar26 + 0x38);
          param_2 = param_2 + 1;
          lVar28 = lVar14;
          uVar16 = uVar9;
        }
        else {
          param_1 = (int *)((long)param_1 + uVar24 + lVar22 & ~uVar24);
          if (uVar10 == uVar5) {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 0x38);
            lVar28 = lVar15;
            uVar16 = uVar10;
          }
          else {
            param_1 = (int *)((long)param_1 + uVar21 + lVar23 & ~uVar21);
            if (uVar16 != uVar5) {
              puVar18 = (ulong *)(lVar1 + (long)param_1 & 0xfffffffffffffff8);
              if (-1 < (int)param_2) {
                *puVar18 = (ulong)(param_2 - 1);
                return;
              }
              *puVar18 = (ulong)(param_2 & 0x7fffffff);
              puVar18[1] = 0;
              return;
            }
            UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 0x38);
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000100739f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar16,lVar28);
      return;
    }
  }
  else {
    if ((int)sVar2 != 0) {
      iVar11 = 1;
      _bzero(param_1,sVar2);
      *param_1 = param_2 + ~uVar5;
    }
    if (uVar17 < 2) {
      if (uVar17 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar11;
      }
    }
    else if (uVar17 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar11;
    }
  }
  return;
}



/* Address: 0x100739f80 | FUN_100739f80 */

void FUN_100739f80(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbdfe4);
  return;
}



/* Address: 0x100739f8c | FUN_100739f8c */

void FUN_100739f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100efd5e0;
  _swift_allocObject(&DAT_100efd5e0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  FUN_10073a2a4(param_1,param_2,&DAT_100c758c8,puVar1,param_5,param_6,param_7);
  _swift_retain(param_4);
  _swift_release(puVar1);
  return;
}



/* Address: 0x10073a034 | FUN_10073a034 */

void FUN_10073a034(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_6;
  lVar4 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  iVar1 = *param_3;
  plVar3 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10073a0e0;
                    /* WARNING: Could not recover jumptable at 0x00010073a0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar3,uVar2,param_1,param_2);
  return;
}



/* Address: 0x10073a0e0 | FUN_10073a0e0 */

void FUN_10073a0e0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar2 + 0x20) + 8))
              (*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    pcVar1 = FUN_10073a154;
  }
  else {
    pcVar1 = FUN_10073a1a4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10073a154 | FUN_10073a154 */

void FUN_10073a154(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar1,*(undefined8 *)(unaff_x22 + 0x18));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010073a1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073a1a4 | FUN_10073a1a4 */

void FUN_10073a1a4(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010073a1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073a1e0 | FUN_10073a1e0 */

void FUN_10073a1e0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10073a204 | FUN_10073a204 */

void FUN_10073a204(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_10073a034(param_1,param_2,uVar4,uVar6,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x10073a2a4 | FUN_10073a2a4 */

void FUN_10073a2a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar5 = *(long *)(param_6 + -8);
  puVar3 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(param_5 + -8);
  lVar4 = (long)puVar3 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = param_3;
  (**(code **)(lVar2 + 0x10))(lVar4);
  (**(code **)(lVar5 + 0x10))(puVar3,param_2,param_6);
  (**(code **)(lVar2 + 0x20))(param_1,lVar4,param_5);
  lVar2 = 0;
  FUN_10073a464(0,param_5,param_6,param_7);
  (**(code **)(lVar5 + 0x20))(param_1 + *(int *)(lVar2 + 0x2c),puVar3,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x30));
  *puVar1 = local_68;
  puVar1[1] = param_4;
  _swift_retain(param_4);
  return;
}



/* Address: 0x10073a3c0 | FUN_10073a3c0 */

void FUN_10073a3c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1,param_2,param_6);
  lVar2 = 0;
  FUN_10073a464(0,param_6,param_7,param_8);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_1 + *(int *)(lVar2 + 0x2c),param_3,param_7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x30));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  return;
}


