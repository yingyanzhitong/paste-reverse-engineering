/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005cef70 | FUN_1005cef70 */

void FUN_1005cef70(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  _swift_release(unaff_x20[2]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1005cefc0 | FUN_1005cefc0 */

void FUN_1005cefc0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005cefcc | FUN_1005cefcc */

void FUN_1005cefcc(undefined8 param_1)

{
  FUN_1000c9144(param_1,&DAT_100fd4650,FUN_1005cefe8,FUN_1005cf06c);
  return;
}



/* Address: 0x1005cefe8 | FUN_1005cefe8 */

void FUN_1005cefe8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (DAT_100fd4658 != 0) {
    return;
  }
  puVar1 = &DAT_100fd41a8;
  FUN_1000f8b08(&DAT_100fd41a8,&DAT_100c647f0);
  puVar2 = &DAT_100fd4660;
  FUN_1000f8b08(&DAT_100fd4660,&DAT_100c651d8);
  uVar3 = 0x44000002;
  _swift_getFunctionTypeMetadata2
            (0x44000002,PTR___type_metadata_for_Swift_String_100eac208,puVar2,puVar1);
  DAT_100fd4658 = uVar3;
  return;
}



/* Address: 0x1005cf06c | FUN_1005cf06c */

void FUN_1005cf06c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005cf078 | FUN_1005cf078 */

void FUN_1005cf078(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005cf0c4 | FUN_1005cf0c4 */

void FUN_1005cf0c4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005cf0f0 | FUN_1005cf0f0 */

void FUN_1005cf0f0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005cf0fc | FUN_1005cf0fc */

void FUN_1005cf0fc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = &DAT_100c65228;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c65240;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x18);
  }
  return;
}



/* Address: 0x1005cf17c | FUN_1005cf17c */

long * FUN_1005cf17c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(uint *)(lVar2 + 0x50) & 0xff;
  lVar1 = *(long *)(lVar2 + 0x40) + 7;
  if (((uint)uVar4 < 8 && (*(uint *)(lVar2 + 0x50) & 0x100000) == 0) &&
      (lVar1 + (uVar4 + 1 & (uVar4 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10 < 0x19) {
    *(char *)param_1 = (char)*param_2;
    uVar6 = (ulong)((long)param_1 + uVar4 + 1) & ~uVar4;
    uVar4 = (ulong)((long)param_2 + uVar4 + 1) & ~uVar4;
    (**(code **)(lVar2 + 0x10))(uVar6,uVar4);
    puVar3 = (undefined8 *)(lVar1 + uVar6 & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)(lVar1 + uVar4 & 0xfffffffffffffff8);
    *puVar3 = *puVar5;
    puVar3[1] = puVar5[1];
    _swift_bridgeObjectRetain();
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)((uint)uVar4 & 0xf8 ^ 0x1f8) & uVar4 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1005cf260 | FUN_1005cf260 */

void FUN_1005cf260(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar1 = param_1 + (ulong)*(byte *)(lVar2 + 0x50) + 1 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 8))(uVar1);
  _swift_bridgeObjectRelease
            (*(undefined8 *)((*(long *)(lVar2 + 0x40) + uVar1 + 7 & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x1005cf2b0 | FUN_1005cf2b0 */

undefined1 * FUN_1005cf2b0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar1 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar4 = (ulong)(param_1 + uVar1 + 1) & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = (ulong)(param_2 + uVar1 + 1) & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x10))(uVar4,uVar1);
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar5 + uVar4 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar5 + uVar1 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  puVar3[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1005cf33c | FUN_1005cf33c */

undefined1 * FUN_1005cf33c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  *param_1 = *param_2;
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar4 = (ulong)(param_1 + uVar1 + 1) & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = (ulong)(param_2 + uVar1 + 1) & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x18))(uVar4,uVar1);
  lVar6 = *(long *)(lVar6 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar6 + uVar4 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar6 + uVar1 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  uVar5 = puVar3[1];
  puVar3[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}



/* Address: 0x1005cf3d4 | FUN_1005cf3d4 */

undefined1 * FUN_1005cf3d4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar1 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar4 = (ulong)(param_1 + uVar1 + 1) & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = (ulong)(param_2 + uVar1 + 1) & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x20))(uVar4,uVar1);
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar5 + uVar4 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar5 + uVar1 & 0xfffffffffffffff8);
  uVar6 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  return param_1;
}



/* Address: 0x1005cf454 | FUN_1005cf454 */

undefined1 * FUN_1005cf454(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = *param_2;
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar5 = (ulong)(param_1 + uVar2 + 1) & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = (ulong)(param_2 + uVar2 + 1) & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x28))(uVar5,uVar2);
  lVar6 = *(long *)(lVar6 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar5 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar6 + uVar2 & 0xfffffffffffffff8);
  *puVar4 = *puVar3;
  uVar1 = puVar4[1];
  puVar4[1] = puVar3[1];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1005cf4e4 | FUN_1005cf4e4 */

ulong FUN_1005cf4e4(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(uint *)(lVar9 + 0x54);
  uVar4 = uVar7;
  if (uVar7 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  lVar1 = *(long *)(lVar9 + 0x40) + 7;
  if (uVar4 <= param_2 && param_2 - uVar4 != 0) {
    uVar2 = (lVar1 + (uVar10 + 1 & (uVar10 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
    uVar3 = uVar2 & 0xfffffff8;
    uVar8 = (uint)uVar3;
    uVar11 = 2;
    uVar6 = uVar11;
    if (uVar3 == 0) {
      uVar6 = (param_2 - uVar4) + 1;
    }
    if (0xffff < uVar6) {
      uVar11 = 4;
    }
    if (uVar6 < 0x100) {
      uVar11 = 1;
    }
    uVar5 = 0;
    if (1 < uVar6) {
      uVar5 = uVar11;
    }
    if (uVar5 < 2) {
      if ((uVar5 != 0) &&
         (uVar11 = (uint)*(byte *)((long)param_1 + uVar2), *(byte *)((long)param_1 + uVar2) != 0))
      goto LAB_1005cf584;
    }
    else if (uVar5 == 2) {
      uVar11 = (uint)*(ushort *)((long)param_1 + uVar2);
      if (*(ushort *)((long)param_1 + uVar2) != 0) {
LAB_1005cf584:
        uVar11 = uVar11 - 1;
        if (uVar3 != 0) {
          uVar11 = 0;
          uVar8 = *param_1;
        }
        return (ulong)(uVar4 + (uVar8 | uVar11) + 1);
      }
    }
    else {
      uVar11 = *(uint *)((long)param_1 + uVar2);
      if (uVar11 != 0) goto LAB_1005cf584;
    }
  }
  uVar10 = (long)param_1 + uVar10 + 1 & ~uVar10;
  if (0x7ffffffe < uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0001005cf5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return uVar10;
  }
  uVar10 = *(ulong *)((lVar1 + uVar10 & 0xfffffffffffffff8) + 8);
  if (0xfffffffe < uVar10) {
    uVar10 = 0xffffffff;
  }
  return (ulong)((int)uVar10 + 1);
}



/* Address: 0x1005cf5f4 | FUN_1005cf5f4 */

void FUN_1005cf5f4(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar3 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar1 = *(long *)(lVar8 + 0x40) + 7;
  sVar2 = (lVar1 + (uVar9 + 1 & (uVar9 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar11 = 0;
    iVar6 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar6 != 0) goto LAB_1005cf6a0;
  }
  else {
    uVar10 = 2;
    uVar4 = uVar10;
    if ((int)sVar2 == 0) {
      uVar4 = (param_3 - uVar3) + 1;
    }
    if (0xffff < uVar4) {
      uVar10 = 4;
    }
    if (uVar4 < 0x100) {
      uVar10 = 1;
    }
    uVar11 = 0;
    if (1 < uVar4) {
      uVar11 = uVar10;
    }
    iVar6 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar6 != 0) {
LAB_1005cf6a0:
      if ((int)sVar2 != 0) {
        iVar6 = 1;
        _bzero(param_1,sVar2);
        *param_1 = param_2 + ~uVar3;
      }
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar2) = (char)iVar6;
        return;
      }
      if (uVar11 == 2) {
        *(short *)((long)param_1 + sVar2) = (short)iVar6;
        return;
      }
      *(int *)((long)param_1 + sVar2) = iVar6;
      return;
    }
  }
  if (uVar11 < 2) {
    if (uVar11 != 0) {
      *(undefined1 *)((long)param_1 + sVar2) = 0;
    }
  }
  else if (uVar11 == 2) {
    *(undefined2 *)((long)param_1 + sVar2) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar2) = 0;
  }
  if (param_2 != 0) {
    if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001005cf71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar8 + 0x38))();
      return;
    }
    puVar7 = (ulong *)(lVar1 + ((long)param_1 + uVar9 + 1 & ~uVar9) & 0xfffffffffffffff8);
    if ((int)param_2 < 0) {
      *puVar7 = (ulong)(param_2 & 0x7fffffff);
      puVar7[1] = 0;
    }
    else {
      puVar7[1] = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x1005cf778 | thunk_FUN_1005cecdc */

void thunk_FUN_1005cecdc(void)

{
  FUN_1005cecdc();
  return;
}



/* Address: 0x1005cf77c | FUN_1005cf77c */

undefined1  [16] FUN_1005cf77c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &DAT_100ee7288;
  _swift_allocObject(&DAT_100ee7288,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  _swift_bridgeObjectRetain(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_1005be170;
  return auVar2;
}



/* Address: 0x1005cf7d4 | FUN_1005cf7d4 */

undefined1 * FUN_1005cf7d4(long param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined1 *local_138;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_120 [48];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 local_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined1 *local_70;
  
  uVar20 = *(ulong *)(param_1 + 0x10);
  if (uVar20 == 0) {
    local_138 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  }
  else {
    uVar14 = 0;
    local_138 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    do {
      lVar16 = uVar20 - uVar14;
      lVar17 = 0;
      if (uVar14 <= uVar20) {
        lVar17 = lVar16;
      }
      plVar18 = (long *)(param_1 + 0x28 + uVar14 * 0x10);
      while( true ) {
        uVar14 = uVar14 + 1;
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005cfbb8);
          (*pcVar5)();
        }
        pcVar5 = (code *)plVar18[-1];
        lVar2 = *plVar18;
        lVar6 = lVar2;
        _swift_retain();
        (*pcVar5)();
        if (*(long *)(lVar6 + 0x10) != 0) break;
        _swift_bridgeObjectRelease();
        _swift_release(lVar2);
        lVar17 = lVar17 + -1;
        plVar18 = plVar18 + 2;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) {
          return local_138;
        }
      }
      puVar15 = local_138;
      _swift_isUniquelyReferenced_nonNull_native();
      local_70 = local_138;
      uVar10 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
      uVar19 = 0xffffffffffffffff;
      if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
        uVar19 = ~(-1L << (uVar10 & 0x3f));
      }
      uVar19 = uVar19 & *(ulong *)(lVar6 + 0x40);
      uVar10 = uVar10 + 0x3f >> 6;
      _swift_bridgeObjectRetain(lVar6);
      lVar17 = 0;
LAB_1005cf91c:
      if (uVar19 == 0) {
        uVar19 = uVar10;
        if ((long)uVar10 <= lVar17 + 1) {
          uVar19 = lVar17 + 1;
        }
        lVar13 = uVar19 - 1;
        lVar21 = lVar17;
        do {
          lVar17 = lVar21 + 1;
          if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1005cfbb4);
            (*pcVar5)();
          }
          if ((long)uVar10 <= lVar17) {
            uVar19 = 0;
            uStack_bf = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            local_d7 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            local_c7 = 0;
            uStack_d0 = 0;
            uStack_cf = 0;
            uStack_e8 = 0;
            local_f0 = 0;
            goto LAB_1005cf9a4;
          }
          uVar19 = ((ulong *)(lVar6 + 0x40))[lVar17];
          lVar21 = lVar21 + 1;
        } while (uVar19 == 0);
      }
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar19 - 1 & uVar19;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar17 << 6;
      puVar9 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar11 * 0x10);
      local_f0 = *puVar9;
      uVar3 = puVar9[1];
      uStack_e8 = uVar3;
      FUN_1005bee50(*(long *)(lVar6 + 0x38) + uVar11 * 0x30,&uStack_e0);
      _swift_bridgeObjectRetain(uVar3);
      lVar13 = lVar17;
LAB_1005cf9a4:
      FUN_1005cfc60(&local_f0,&local_130);
      uVar4 = local_128;
      uVar11 = local_130;
      if (local_128 != 0) {
        FUN_1005bee50(auStack_120,&local_a0);
        local_b0 = uVar11;
        uStack_a8 = uVar4;
        _swift_bridgeObjectRetain(uVar4);
        FUN_1000fb4c4(&local_130,&DAT_100fd4158,&DAT_100c64718);
        FUN_1000fb4c4(&local_f0,&DAT_100fd4150,&DAT_100c64710);
        uVar4 = uStack_a8;
        uVar11 = local_b0;
        if (uStack_a8 == 0) goto LAB_1005cfb50;
        uStack_e8 = uStack_98;
        local_f0 = local_a0;
        uStack_d8 = uStack_88;
        uStack_e0 = uStack_90;
        uStack_cf = (undefined7)uStack_7f;
        uStack_c8 = (undefined1)((ulong)uStack_7f >> 0x38);
        local_d7 = local_87;
        uStack_d0 = uStack_80;
        uVar7 = local_b0;
        uVar8 = uStack_a8;
        thunk_FUN_1005be370();
        uVar12 = (ulong)~(uint)uVar8 & 1;
        lVar17 = *(long *)(local_138 + 0x10) + uVar12;
        if (SCARRY8(*(long *)(local_138 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005cfbbc);
          (*pcVar5)();
        }
        if (*(long *)(local_138 + 0x18) < lVar17) {
          FUN_1005be624(lVar17,(uint)puVar15 & 1);
          uVar7 = uVar11;
          uVar12 = uVar4;
          thunk_FUN_1005be370();
          if (((uint)uVar8 & 1) != ((uint)uVar12 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1005cfbd0);
            (*pcVar5)();
          }
joined_r0x0001005cfb20:
          if ((uVar8 & 1) == 0) goto LAB_1005cfa9c;
LAB_1005cf8d8:
          local_138 = local_70;
          FUN_1005bee50(&local_f0,&local_130);
          _swift_bridgeObjectRelease(uVar4);
          FUN_1005bee8c(&local_f0);
          FUN_10054d4c4(&local_130,*(long *)(local_138 + 0x38) + uVar7 * 0x30);
        }
        else {
          if (((ulong)puVar15 & 1) == 0) {
            FUN_1005be474();
            goto joined_r0x0001005cfb20;
          }
          if ((uVar8 & 1) != 0) goto LAB_1005cf8d8;
LAB_1005cfa9c:
          local_138 = local_70;
          *(ulong *)(local_70 + (uVar7 >> 6) * 8 + 0x40) =
               *(ulong *)(local_70 + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
          puVar1 = (ulong *)(*(long *)(local_70 + 0x30) + uVar7 * 0x10);
          *puVar1 = uVar11;
          puVar1[1] = uVar4;
          puVar9 = (undefined8 *)(*(long *)(local_70 + 0x38) + uVar7 * 0x30);
          puVar9[1] = uStack_e8;
          *puVar9 = local_f0;
          puVar9[3] = CONCAT71(local_d7,uStack_d8);
          puVar9[2] = uStack_e0;
          *(ulong *)((long)puVar9 + 0x21) = CONCAT17(uStack_c8,uStack_cf);
          *(ulong *)((long)puVar9 + 0x19) = CONCAT17(uStack_d0,local_d7);
          if (SCARRY8(*(long *)(local_70 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1005cfbc0);
            (*pcVar5)();
          }
          *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + 1;
        }
        puVar15 = &DAT_00000001;
        lVar17 = lVar13;
        goto LAB_1005cf91c;
      }
      FUN_1000fb4c4(&local_f0,&DAT_100fd4150,&DAT_100c64710);
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_7f = 0;
      local_87 = 0;
      uStack_80 = 0;
LAB_1005cfb50:
      _swift_release(lVar2);
      _swift_release(lVar6);
      _swift_bridgeObjectRelease(lVar6);
    } while (lVar16 != 1);
  }
  return local_138;
}



/* Address: 0x1005cfbd0 | FUN_1005cfbd0 */

void FUN_1005cfbd0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005cfbf4 | FUN_1005cfbf4 */

undefined1  [16] FUN_1005cfbf4(void)

{
  return ZEXT816(0x100ee7310);
}



/* Address: 0x1005cfc04 | FUN_1005cfc04 */

void FUN_1005cfc04(void)

{
  FUN_1005cfc0c(0);
  return;
}



/* Address: 0x1005cfc0c | FUN_1005cfc0c */

void FUN_1005cfc0c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100fd4770 != 0) {
    return;
  }
  puVar1 = &DAT_100fd4148;
  FUN_1000f8b08(&DAT_100fd4148,&DAT_100c64708);
  uVar2 = 0x44000000;
  _swift_getFunctionTypeMetadata0(0x44000000,puVar1);
  DAT_100fd4770 = uVar2;
  return;
}



/* Address: 0x1005cfc60 | FUN_1005cfc60 */

undefined8 FUN_1005cfc60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd4150;
  FUN_1000f7830(&DAT_100fd4150,&DAT_100c64710);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1005cfcb0 | FUN_1005cfcb0 */

void FUN_1005cfcb0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001005cfcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_1,param_2);
  return;
}



/* Address: 0x1005cfcc8 | FUN_1005cfcc8 */

void FUN_1005cfcc8(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  Swift::AsyncSequence::_makeAsyncIterator();
  FUN_1005cfdb8(param_1,(long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)
                              ) - extraout_x8_00,lVar2,uVar3);
  return;
}



/* Address: 0x1005cfdb8 | FUN_1005cfdb8 */

void FUN_1005cfdb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  FUN_1005d14e0();
  iVar1 = *(int *)(lVar2 + 0x24);
  uVar3 = 0;
  FUN_1005d7bdc();
  _swift_allocObject();
  FUN_1005d1cac();
  *(undefined8 *)(param_1 + iVar1) = uVar3;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
                    /* WARNING: Could not recover jumptable at 0x0001005cfe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
  return;
}



/* Address: 0x1005cfe50 | FUN_1005cfe50 */

void FUN_1005cfe50(void)

{
  FUN_1005d7bdc(0);
  _swift_allocObject();
  FUN_1005d1cac();
  return;
}



/* Address: 0x1005cfe84 | FUN_1005cfe84 */

void FUN_1005cfe84(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x218) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x210) = param_2;
  *(undefined8 *)(unaff_x22 + 0x208) = param_1;
  _swift_task_switch(FUN_1005cfea4,0,0);
  return;
}



/* Address: 0x1005cfea4 | FUN_1005cfea4 */

void FUN_1005cfea4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)
           (*(long *)(unaff_x22 + 0x218) + (long)*(int *)(*(long *)(unaff_x22 + 0x210) + 0x24));
  *(undefined8 *)(unaff_x22 + 0x220) = uVar1;
  _swift_task_switch(FUN_1005cfec8,uVar1,0);
  return;
}



/* Address: 0x1005cfec8 | FUN_1005cfec8 */

void FUN_1005cfec8(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)(unaff_x22 + 0x220);
  _swift_beginAccess(lVar8 + 0xd8,unaff_x22 + 400,0,0);
  lVar6 = *(long *)(lVar8 + 0xd8);
  if (*(long *)(lVar6 + 0x10) != 0) {
    _swift_beginAccess(lVar8 + 0xd8,unaff_x22 + 0x1a8,0x21,0);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    uVar10 = *(undefined8 *)(lVar6 + 0x38);
    uVar9 = *(undefined8 *)(lVar6 + 0x30);
    uVar12 = *(undefined8 *)(lVar6 + 0x48);
    uVar11 = *(undefined8 *)(lVar6 + 0x40);
    uVar13 = *(undefined8 *)(lVar6 + 0x49);
    *(undefined8 *)(unaff_x22 + 0x41) = *(undefined8 *)(lVar6 + 0x51);
    *(undefined8 *)(unaff_x22 + 0x39) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    FUN_1005d099c(unaff_x22 + 0x10,unaff_x22 + 0x50);
    FUN_10012ae44(0,1,FUN_1005d06d4,FUN_1005d08cc);
    _swift_endAccess(unaff_x22 + 0x1a8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
    puVar5 = *(undefined8 **)(unaff_x22 + 0x208);
    puVar5[1] = *(undefined8 *)(unaff_x22 + 0x18);
    *puVar5 = uVar7;
    puVar5[3] = uVar10;
    puVar5[2] = uVar9;
    puVar5[5] = uVar12;
    puVar5[4] = uVar11;
    puVar5[6] = uVar4;
    *(undefined1 *)(puVar5 + 7) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001005cffa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x210) + 0x18);
  *(undefined8 *)(unaff_x22 + 0x228) = uVar9;
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x210) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x230) = uVar7;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar9,uVar7,uVar4,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x238) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005d004c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1005d004c | FUN_1005d004c */

void FUN_1005d004c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x240) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x238));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005d00a8;
  }
  else {
    pcVar1 = FUN_1005d04fc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005d00a8 | FUN_1005d00a8 */

void FUN_1005d00a8(void)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x4b) = *(undefined1 *)(unaff_x22 + 0x49);
  if (*(char *)(unaff_x22 + 0x4a) == '\x01') {
    _swift_task_switch(FUN_1005d03f0,*(undefined8 *)(unaff_x22 + 0x220),0);
    return;
  }
  _swift_task_switch(FUN_1005d00e0,*(undefined8 *)(unaff_x22 + 0x220),0);
  return;
}



/* Address: 0x1005d00e0 | FUN_1005d00e0 */

void FUN_1005d00e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x220);
  if (*(char *)(unaff_x22 + 0x4b) == '\r') {
    FUN_1005d1e58();
    FUN_1005d1fcc();
    _swift_bridgeObjectRelease(param_2);
    *(undefined1 *)(lVar5 + 0xd0) = 1;
  }
  else if (*(char *)(unaff_x22 + 0x4b) == '\n') {
    if (*(char *)(lVar5 + 0xd0) == '\x01') {
      *(undefined1 *)(lVar5 + 0xd0) = 0;
    }
    else {
      FUN_1005d1e58();
      FUN_1005d1fcc();
      _swift_bridgeObjectRelease(param_2);
    }
  }
  else {
    if (*(char *)(lVar5 + 0xd0) == '\x01') {
      *(undefined1 *)(lVar5 + 0xd0) = 0;
      lVar5 = *(long *)(unaff_x22 + 0x220);
    }
    _swift_beginAccess(lVar5 + 200,unaff_x22 + 0x1d8,0x21,0);
    uVar4 = *(ulong *)(lVar5 + 200);
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar5 + 200) = uVar4;
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(unaff_x22 + 0x220);
      uVar3 = 0;
      FUN_1005d07dc(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      *(ulong *)(lVar5 + 200) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1005d07dc(uVar4,uVar2 + 1,1,uVar3);
    }
    uVar1 = *(undefined1 *)(unaff_x22 + 0x4b);
    lVar5 = *(long *)(unaff_x22 + 0x220);
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = uVar1;
    *(ulong *)(lVar5 + 200) = uVar4;
    _swift_endAccess(unaff_x22 + 0x1d8);
  }
  _swift_task_switch(FUN_1005d0234,*(undefined8 *)(unaff_x22 + 0x220),0);
  return;
}



/* Address: 0x1005d0234 | FUN_1005d0234 */

void FUN_1005d0234(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  plVar9 = (long *)(*(long *)(unaff_x22 + 0x220) + 0xd8);
  lVar5 = *plVar9;
  lVar8 = *(long *)(lVar5 + 0x10);
  if (lVar8 != 0) {
    puVar4 = (undefined8 *)(unaff_x22 + 0x110);
    _swift_beginAccess(plVar9,unaff_x22 + 0x1f0,0x21,0);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    uVar10 = *(undefined8 *)(lVar5 + 0x20);
    uVar11 = *(undefined8 *)(lVar5 + 0x38);
    uVar7 = *(undefined8 *)(lVar5 + 0x30);
    uVar13 = *(undefined8 *)(lVar5 + 0x48);
    uVar12 = *(undefined8 *)(lVar5 + 0x40);
    uVar14 = *(undefined8 *)(lVar5 + 0x49);
    *(undefined8 *)(unaff_x22 + 0x141) = *(undefined8 *)(lVar5 + 0x51);
    *(undefined8 *)(unaff_x22 + 0x139) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x128) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x120) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x138) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x130) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar6;
    *puVar4 = uVar10;
    FUN_1005d099c(puVar4,unaff_x22 + 0x150);
    lVar3 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *plVar9 = lVar5;
    if (((int)lVar3 == 0) || (*(ulong *)(lVar5 + 0x18) >> 1 < lVar8 - 1U)) {
      lVar5 = *(long *)(unaff_x22 + 0x220);
      FUN_1005d06d4();
      *(long *)(lVar5 + 0xd8) = lVar3;
      lVar5 = lVar3;
    }
    lVar8 = *(long *)(unaff_x22 + 0x220);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x148);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar13 = *puVar4;
    uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
    FUN_1005d08cc(0,1,0);
    *(long *)(lVar8 + 0xd8) = lVar5;
    _swift_endAccess(unaff_x22 + 0x1f0);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x208);
    puVar4[3] = uVar11;
    puVar4[2] = uVar6;
    puVar4[5] = uVar12;
    puVar4[4] = uVar7;
    puVar4[1] = uVar14;
    *puVar4 = uVar13;
    puVar4[6] = uVar10;
    *(undefined1 *)(puVar4 + 7) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001005d034c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar6,uVar7,uVar10,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar9 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x238) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1005d004c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1005d03f0 | FUN_1005d03f0 */

void FUN_1005d03f0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x220);
  FUN_1005d2a7c();
  _swift_task_switch(FUN_1005d042c,uVar1,0);
  return;
}



/* Address: 0x1005d042c | FUN_1005d042c */

void FUN_1005d042c(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  plVar5 = (long *)(*(long *)(unaff_x22 + 0x220) + 0xd8);
  lVar4 = *plVar5;
  if (*(long *)(lVar4 + 0x10) == 0) {
    uVar2 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar1 = 0;
  }
  else {
    _swift_beginAccess(plVar5,unaff_x22 + 0x1c0,0x21,0);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    uVar1 = *(undefined8 *)(lVar4 + 0x20);
    uVar8 = *(undefined8 *)(lVar4 + 0x38);
    uVar7 = *(undefined8 *)(lVar4 + 0x30);
    uVar10 = *(undefined8 *)(lVar4 + 0x48);
    uVar9 = *(undefined8 *)(lVar4 + 0x40);
    uVar11 = *(undefined8 *)(lVar4 + 0x49);
    *(undefined8 *)(unaff_x22 + 0xc1) = *(undefined8 *)(lVar4 + 0x51);
    *(undefined8 *)(unaff_x22 + 0xb9) = uVar11;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar10;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
    FUN_1005d099c(unaff_x22 + 0x90,unaff_x22 + 0xd0);
    FUN_10012ae44(0,1,FUN_1005d06d4,FUN_1005d08cc);
    _swift_endAccess(unaff_x22 + 0x1c0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar2 = *(undefined1 *)(unaff_x22 + 200);
  }
  puVar3 = *(undefined8 **)(unaff_x22 + 0x208);
  puVar3[1] = uVar7;
  *puVar3 = uVar6;
  puVar3[3] = uVar9;
  puVar3[2] = uVar8;
  puVar3[5] = uVar11;
  puVar3[4] = uVar10;
  puVar3[6] = uVar1;
  *(undefined1 *)(puVar3 + 7) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001005d04f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d04fc | FUN_1005d04fc */

void FUN_1005d04fc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001005d0504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d0508 | FUN_1005d0508 */

void FUN_1005d0508(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  plVar1 = (long *)0x250;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005d0560;
  FUN_1005cfe84(plVar1,unaff_x22 + 0x10,param_2);
  return;
}



/* Address: 0x1005d0560 | FUN_1005d0560 */

void FUN_1005d0560(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x50);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    uVar9 = *(undefined8 *)(lVar2 + 0x38);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    uVar10 = *(undefined8 *)(lVar2 + 0x39);
    *(undefined8 *)((long)puVar1 + 0x31) = *(undefined8 *)(lVar2 + 0x41);
    *(undefined8 *)((long)puVar1 + 0x29) = uVar10;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001005d05b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1005d05bc | FUN_1005d05bc */

void FUN_1005d05bc(void)

{
  long *plVar1;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaebe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005d0648;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1005d0648 | FUN_1005d0648 */

void FUN_1005d0648(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005d0698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005d069c | FUN_1005d069c */

void FUN_1005d069c(long param_1)

{
  FUN_1005cfcc8();
                    /* WARNING: Could not recover jumptable at 0x0001005d06c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x1005d06cc | FUN_1005d06cc */

undefined8 FUN_1005d06cc(void)

{
  return 100;
}



/* Address: 0x1005d06d4 | FUN_1005d06d4 */

undefined * FUN_1005d06d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d07dc);
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
    puVar3 = &DAT_100fd4878;
    FUN_1000f7830(&DAT_100fd4878,&DAT_100c653e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ee7690);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 * 0x40);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1005d07dc | FUN_1005d07dc */

undefined * FUN_1005d07dc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d08cc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd4880;
    FUN_1000f7830(&DAT_100fd4880,&DAT_100c653e8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1005d08cc | FUN_1005d08cc */

void FUN_1005d08cc(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  size_t sVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005d0978);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x20 + param_1 * 0x40;
  _swift_arrayDestroy(lVar1,lVar4,&DAT_100ee7690);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005d097c);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005d0980);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar1 + param_3 * 0x40);
    pvVar3 = (void *)(lVar8 + 0x20 + param_2 * 0x40);
    sVar7 = (*(long *)(lVar8 + 0x10) - param_2) * 0x40;
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + sVar7) <= pvVar2) {
      _memmove(pvVar2,pvVar3,sVar7);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005d0984);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1005d0988);
  (*pcVar6)();
}



/* Address: 0x1005d0988 | FUN_1005d0988 */

void FUN_1005d0988(undefined8 param_1,undefined8 param_2)

{
  FUN_10012ae44(param_1,param_2,FUN_1005d06d4,FUN_1005d08cc);
  return;
}



/* Address: 0x1005d099c | FUN_1005d099c */

undefined8 FUN_1005d099c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004cec10(param_2,param_1);
  return param_2;
}



/* Address: 0x1005d09d8 | FUN_1005d09d8 */

undefined * FUN_1005d09d8(void)

{
  return PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
}



/* Address: 0x1005d09e4 | FUN_1005d09e4 */

void FUN_1005d09e4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c652e8,param_1);
  return;
}



/* Address: 0x1005d09f4 | FUN_1005d09f4 */

void FUN_1005d09f4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1005d0a60 | FUN_1005d0a60 */

long * FUN_1005d0a60(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(uint *)(lVar1 + 0x50) & 0xff;
  if (((uint)uVar2 < 8 && *(ulong *)(lVar1 + 0x40) < 0x19) &&
      (*(uint *)(lVar1 + 0x50) & 0x100000) == 0) {
    (**(code **)(lVar1 + 0x10))(param_1);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1005d0ad0 | FUN_1005d0ad0 */

void FUN_1005d0ad0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001005d0adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))();
  return;
}



/* Address: 0x1005d0ae0 | FUN_1005d0ae0 */

undefined8 FUN_1005d0ae0(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x10))();
  return param_1;
}



/* Address: 0x1005d0b10 | FUN_1005d0b10 */

undefined8 FUN_1005d0b10(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x18))();
  return param_1;
}



/* Address: 0x1005d0b40 | FUN_1005d0b40 */

undefined8 FUN_1005d0b40(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x20))();
  return param_1;
}



/* Address: 0x1005d0b70 | FUN_1005d0b70 */

undefined8 FUN_1005d0b70(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x28))();
  return param_1;
}



/* Address: 0x1005d0ba0 | FUN_1005d0ba0 */

uint * FUN_1005d0ba0(uint *param_1,uint param_2,long param_3)

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
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1005d0c38;
  uVar5 = *(ulong *)(lVar6 + 0x40);
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
      goto LAB_1005d0bd0;
    }
    if (1 < uVar7) goto LAB_1005d0bcc;
  }
  else {
LAB_1005d0bcc:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
LAB_1005d0bd0:
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
LAB_1005d0c38:
                    /* WARNING: Could not recover jumptable at 0x0001005d0c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))();
  return param_1;
}



/* Address: 0x1005d0c94 | FUN_1005d0c94 */

void FUN_1005d0c94(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar2 = *(uint *)(lVar4 + 0x54);
  sVar6 = *(size_t *)(lVar4 + 0x40);
  uVar5 = (uint)sVar6;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
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
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar6);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
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
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + sVar6) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + sVar6) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar6) = iVar7;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + sVar6) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + sVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar6) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001005d0ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))();
      return;
    }
  }
  return;
}



/* Address: 0x1005d0e40 | FUN_1005d0e40 */

void FUN_1005d0e40(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005d0e4c | FUN_1005d0e4c */

void FUN_1005d0e4c(long param_1)

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
    puStack_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1005d0ed4 | FUN_1005d0ed4 */

long * FUN_1005d0ed4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(lVar2 + -8);
  lVar4 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && (lVar4 + 7U & 0xfffffffffffffff8) + 8 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar2);
    *(undefined8 *)((long)param_1 + lVar4 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)param_2 + lVar4 + 7 & 0xfffffffffffffff8);
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain();
  return param_1;
}


