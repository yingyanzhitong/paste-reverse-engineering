/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a69ffc | FUN_100a69ffc */

ulong FUN_100a69ffc(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  code *pcVar6;
  ulong uVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  CancellationError CVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  long lVar15;
  ulong uVar16;
  ulong *unaff_x20;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined1 *local_70;
  ulong local_68;
  
  uVar7 = *unaff_x20;
  uVar11 = unaff_x20[1];
  uVar12 = unaff_x20[2];
  uVar17 = unaff_x20[3];
  uVar16 = unaff_x20[4];
  uVar4 = (ushort)unaff_x20[5];
  bVar2 = *(byte *)((long)unaff_x20 + 0x2a);
  if (bVar2 < 3) {
    bVar3 = *(byte *)((long)unaff_x20 + 0x11);
    if (bVar2 == 0) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,(uint)uVar4);
      CVar8 = Swift::CancellationError::typeMetadataAccessor();
      lVar19 = *(long *)(CVar8.unknown + -8);
      lVar15 = *(long *)(lVar19 + 0x40);
      local_70 = auStack_80;
      local_68 = (ulong)bVar3;
      FUN_1009e8ec8(uVar7,uVar11,uVar12,uVar17,uVar16,(ulong)local_78 & 0xffffffff,0);
      CVar9 = Swift::CancellationError::init();
      FUN_100a5784c();
      CVar10 = CVar8;
      _swift_allocError(CVar8.unknown,CVar9.unknown,0,0);
      local_78 = CVar10.unknown;
      (**(code **)(lVar19 + 0x20))
                (CVar9.unknown,auStack_80 + -(lVar15 + 0xfU & 0xfffffffffffffff0),CVar8.unknown);
      FUN_1006883ac();
      uVar18 = *(ulong *)CVar9.unknown;
      local_68 = local_68 & 1;
      uVar7 = *unaff_x20;
      uVar12 = unaff_x20[1];
      uVar11 = unaff_x20[2];
      uVar16 = unaff_x20[3];
      uVar20 = unaff_x20[4];
      uVar14 = *(undefined1 *)((long)unaff_x20 + 0x2a);
      uVar17 = unaff_x20[5];
      _swift_retain(uVar18);
      FUN_1009e8f30(uVar7,uVar12,uVar11,uVar16,uVar20,(short)uVar17,uVar14);
      *unaff_x20 = uVar18;
      unaff_x20[1] = local_68;
      unaff_x20[2] = (ulong)local_78;
      unaff_x20[3] = 0;
      unaff_x20[4] = 0;
      *(undefined2 *)(unaff_x20 + 5) = 0;
      uVar14 = 2;
      uVar16 = 1;
    }
    else {
      if (bVar2 != 1) {
        uVar5 = *(ushort *)((long)unaff_x20 + 0x16);
        uVar1 = *(uint *)((long)unaff_x20 + 0x12);
        uVar18 = unaff_x20[2];
        FUN_1009e8ec8(uVar7,uVar11,uVar12,uVar17,uVar16,uVar4,2);
        _swift_release(uVar7);
        _swift_errorRelease((ulong)CONCAT11(bVar3,(char)uVar18) |
                            (ulong)uVar1 << 0x10 | (ulong)uVar5 << 0x30);
        return 1;
      }
      bVar2 = *(byte *)((long)unaff_x20 + 0x29);
      FUN_1009e8ec8(uVar7,uVar11,uVar12,uVar17,uVar16,uVar4,1);
      _swift_release(uVar17);
      FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                    (short)unaff_x20[5],*(undefined1 *)((long)unaff_x20 + 0x2a));
      *unaff_x20 = (ulong)bVar2 & 1;
      unaff_x20[2] = 0;
      unaff_x20[1] = 0;
      unaff_x20[4] = 0;
      unaff_x20[3] = 0;
      *(undefined2 *)(unaff_x20 + 5) = 0;
      if (uVar16 == 0) {
        uVar14 = 3;
      }
      else {
        uVar14 = 4;
      }
    }
    *(undefined1 *)((long)unaff_x20 + 0x2a) = uVar14;
  }
  else {
    if (bVar2 == 3) {
      uVar13 = 3;
    }
    else {
      if (bVar2 != 4) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a6a26c);
        (*pcVar6)();
      }
      uVar13 = 4;
    }
    FUN_1009e8ec8(uVar7,uVar11,uVar12,uVar17,uVar16,uVar4,uVar13);
    uVar16 = 1;
  }
  return uVar16;
}



/* Address: 0x100a6a26c | FUN_100a6a26c */

ulong FUN_100a6a26c(void)

{
  byte bVar1;
  byte bVar2;
  undefined7 uVar3;
  code *pcVar4;
  CancellationError CVar5;
  ulong *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong *unaff_x20;
  undefined1 auStack_50 [16];
  
  uVar7 = (uint)*(byte *)((long)unaff_x20 + 0x12);
  if (*(byte *)((long)unaff_x20 + 0x12) < 3) {
    bVar1 = (byte)*unaff_x20;
    if (uVar7 == 0) {
      CVar5 = Swift::CancellationError::typeMetadataAccessor();
      lVar8 = *(long *)(*(long *)(CVar5.unknown + -8) + 0x40);
      Swift::CancellationError::init();
      puVar6 = (ulong *)(auStack_50 + 0xf);
      _swift_dynamicCast(puVar6,auStack_50 + -(lVar8 + 0xfU & 0xfffffffffffffff0),CVar5.unknown,
                         PTR___type_metadata_for_Swift_Never_100eadc38,6);
      if (((ulong)puVar6 & 1) == 0) {
        *unaff_x20 = (ulong)bVar1 & 1;
        unaff_x20[1] = 0;
        *(undefined2 *)(unaff_x20 + 2) = 0;
        *(byte *)((long)unaff_x20 + 0x12) = 4;
      }
      else {
        FUN_1006883ac();
        *unaff_x20 = *puVar6;
        unaff_x20[1] = (ulong)bVar1 & 1;
        *(undefined2 *)(unaff_x20 + 2) = 0;
        *(byte *)((long)unaff_x20 + 0x12) = 2;
        _swift_retain();
      }
    }
    else {
      uVar3 = *(undefined7 *)((long)unaff_x20 + 1);
      if (uVar7 == 1) {
        uVar9 = unaff_x20[1];
        bVar2 = *(byte *)((long)unaff_x20 + 0x11);
        _swift_release(CONCAT71(uVar3,bVar1));
        *unaff_x20 = (ulong)bVar2 & 1;
        unaff_x20[1] = 0;
        *(undefined2 *)(unaff_x20 + 2) = 0;
        if (uVar9 != 0) {
          *(byte *)((long)unaff_x20 + 0x12) = 4;
          return uVar9;
        }
        *(byte *)((long)unaff_x20 + 0x12) = 3;
        return 0;
      }
      _swift_retain(*unaff_x20);
      _swift_release(CONCAT71(uVar3,bVar1));
    }
  }
  else if (1 < uVar7 - 3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100a6a2f4);
    (*pcVar4)();
  }
  return 1;
}



/* Address: 0x100a6a3c4 | FUN_100a6a3c4 */

void FUN_100a6a3c4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009ea194;
  FUN_100a691b0(param_2);
  return;
}



/* Address: 0x100a6a430 | FUN_100a6a430 */

void FUN_100a6a430(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a6a3c4(plVar1,param_1);
  return;
}



/* Address: 0x100a6a4a0 | FUN_100a6a4a0 */

void FUN_100a6a4a0(void)

{
  FUN_100a69d24();
  return;
}



/* Address: 0x100a6a4a8 | FUN_100a6a4a8 */

void FUN_100a6a4a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5378(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a6a53c | FUN_100a6a53c */

void FUN_100a6a53c(void)

{
  FUN_100a6a7f8(&TargetProtocolRequirement_100ccad3c);
  return;
}



/* Address: 0x100a6a548 | FUN_100a6a548 */

void FUN_100a6a548(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar1,0x100ccad0c,&TargetProtocolRequirement_100ccad3c);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_100a675fc(param_1,param_2,unaff_x20 + (uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff)),uVar1,
                uVar2,uVar6);
  return;
}



/* Address: 0x100a6a600 | FUN_100a6a600 */

void FUN_100a6a600(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5378(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a6a694 | FUN_100a6a694 */

void FUN_100a6a694(void)

{
  FUN_100a6a7f8(&TargetProtocolRequirement_100ccad44);
  return;
}



/* Address: 0x100a6a6a0 | FUN_100a6a6a0 */

void FUN_100a6a6a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar1,0x100ccad0c,&TargetProtocolRequirement_100ccad44);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_100a679b0(param_1,param_2,unaff_x20 + (uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff)),uVar1,
                uVar2,uVar6);
  return;
}



/* Address: 0x100a6a758 | FUN_100a6a758 */

void FUN_100a6a758(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5378(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a6a7ec | FUN_100a6a7ec */

void FUN_100a6a7ec(void)

{
  FUN_100a6a7f8(&TargetProtocolRequirement_100ccad4c);
  return;
}



/* Address: 0x100a6a7f8 | FUN_100a6a7f8 */

void FUN_100a6a7f8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),0x100ccad0c,
             param_1);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x100a6a864 | FUN_100a6a864 */

void FUN_100a6a864(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar1,0x100ccad0c,&TargetProtocolRequirement_100ccad4c);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_100a67d24(param_1,param_2,unaff_x20 + (uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff)),uVar1,
                uVar2,uVar6);
  return;
}



/* Address: 0x100a6a91c | FUN_100a6a91c */

void FUN_100a6a91c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1009e5378(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a6a9b0 | FUN_100a6a9b0 */

void FUN_100a6a9b0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a6aa00 | FUN_100a6aa00 */

void FUN_100a6aa00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a681d8(param_1,param_2,unaff_x20 + (uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff)),lVar1,
                uVar2,uVar5);
  return;
}



/* Address: 0x100a6aa9c | FUN_100a6aa9c */

void FUN_100a6aa9c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x02') {
    _swift_errorRelease();
    return;
  }
  if ((param_2 != '\x01') && (param_2 != '\0')) {
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100a6aac0 | FUN_100a6aac0 */

void FUN_100a6aac0(undefined8 param_1,char param_2)

{
  if (param_2 == '\x02') {
    _swift_errorRetain();
    return;
  }
  if ((param_2 != '\x01') && (param_2 != '\0')) {
    return;
  }
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100a6aae4 | FUN_100a6aae4 */

void FUN_100a6aae4(void)

{
  thunk_FUN_100a55b24();
  return;
}



/* Address: 0x100a6aaec | FUN_100a6aaec */

void FUN_100a6aaec(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a793f8(plVar1,param_1);
  return;
}



/* Address: 0x100a6ab5c | FUN_100a6ab5c */

void FUN_100a6ab5c(void)

{
  FUN_100a69ae0();
  return;
}



/* Address: 0x100a6ab64 | thunk_FUN_100a6750c */

void thunk_FUN_100a6750c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a67560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6ab68 | thunk_FUN_100a67564 */

void thunk_FUN_100a67564(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a675a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6ab6c | thunk_FUN_100a6aae4 */

void thunk_FUN_100a6aae4(void)

{
  thunk_FUN_100a55b24();
  return;
}



/* Address: 0x100a6ab70 | thunk_FUN_100a675a8 */

void thunk_FUN_100a675a8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a675f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a6ab74 | thunk_FUN_100a6a4a0 */

void thunk_FUN_100a6a4a0(void)

{
  FUN_100a69d24();
  return;
}



/* Address: 0x100a6ab78 | FUN_100a6ab78 */

void FUN_100a6ab78(undefined8 *param_1)

{
  int iVar1;
  undefined8 *unaff_x20;
  undefined8 local_200;
  undefined8 uStack_1f8;
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
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
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
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  uStack_f8 = unaff_x20[0xd];
  local_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  local_e0 = unaff_x20[0x10];
  local_d0 = *(undefined1 *)(unaff_x20 + 0x12);
  uStack_138 = unaff_x20[5];
  local_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  local_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  local_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  iVar1 = (int)&local_160;
  FUN_100a6ac78();
  if (iVar1 == 1) {
    FUN_100a4af18(&local_c0);
  }
  else {
    uStack_198 = uStack_f8;
    local_1a0 = local_100;
    uStack_188 = uStack_e8;
    uStack_190 = uStack_f0;
    uStack_178 = uStack_d8;
    local_180 = local_e0;
    uStack_1d8 = uStack_138;
    local_1e0 = local_140;
    uStack_1c8 = uStack_128;
    uStack_1d0 = uStack_130;
    uStack_1b8 = uStack_118;
    local_1c0 = local_120;
    uStack_1a8 = uStack_108;
    uStack_1b0 = uStack_110;
    uStack_1f8 = uStack_158;
    local_200 = local_160;
    uStack_1e8 = uStack_148;
    uStack_1f0 = uStack_150;
    FUN_1005b8d54(&local_200);
    uStack_58 = uStack_198;
    local_60 = local_1a0;
    uStack_48 = uStack_188;
    uStack_50 = uStack_190;
    uStack_38 = uStack_178;
    local_40 = local_180;
    local_30 = local_170;
    uStack_98 = uStack_1d8;
    local_a0 = local_1e0;
    uStack_88 = uStack_1c8;
    uStack_90 = uStack_1d0;
    uStack_78 = uStack_1b8;
    local_80 = local_1c0;
    uStack_68 = uStack_1a8;
    uStack_70 = uStack_1b0;
    uStack_b8 = uStack_1f8;
    local_c0 = local_200;
    uStack_a8 = uStack_1e8;
    uStack_b0 = uStack_1f0;
  }
  param_1[0xd] = uStack_58;
  param_1[0xc] = local_60;
  param_1[0xf] = uStack_48;
  param_1[0xe] = uStack_50;
  param_1[0x11] = uStack_38;
  param_1[0x10] = local_40;
  *(undefined1 *)(param_1 + 0x12) = local_30;
  param_1[5] = uStack_98;
  param_1[4] = local_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[9] = uStack_78;
  param_1[8] = local_80;
  param_1[0xb] = uStack_68;
  param_1[10] = uStack_70;
  param_1[1] = uStack_b8;
  *param_1 = local_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return;
}



/* Address: 0x100a6ac78 | FUN_100a6ac78 */

int FUN_100a6ac78(int *param_1)

{
  if ((char)param_1[0x24] != '\0') {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x100a6ac94 | FUN_100a6ac94 */

void FUN_100a6ac94(undefined8 *param_1)

{
  int iVar1;
  undefined8 *unaff_x20;
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
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  uStack_58 = param_1[0xd];
  local_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  local_40 = param_1[0x10];
  local_30 = *(undefined1 *)(param_1 + 0x12);
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  local_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  iVar1 = (int)&local_c0;
  FUN_100a6ac78();
  if (iVar1 == 1) {
    FUN_100a4af18(&local_160);
  }
  else {
    uStack_f8 = param_1[0xd];
    local_100 = param_1[0xc];
    uStack_e8 = param_1[0xf];
    uStack_f0 = param_1[0xe];
    uStack_d8 = param_1[0x11];
    local_e0 = param_1[0x10];
    uStack_138 = param_1[5];
    local_140 = param_1[4];
    uStack_128 = param_1[7];
    uStack_130 = param_1[6];
    uStack_118 = param_1[9];
    local_120 = param_1[8];
    uStack_108 = param_1[0xb];
    uStack_110 = param_1[10];
    uStack_158 = param_1[1];
    local_160 = *param_1;
    uStack_148 = param_1[3];
    uStack_150 = param_1[2];
    FUN_1005b8d54(&local_160);
  }
  unaff_x20[0xd] = uStack_f8;
  unaff_x20[0xc] = local_100;
  unaff_x20[0xf] = uStack_e8;
  unaff_x20[0xe] = uStack_f0;
  unaff_x20[0x11] = uStack_d8;
  unaff_x20[0x10] = local_e0;
  *(undefined1 *)(unaff_x20 + 0x12) = local_d0;
  unaff_x20[5] = uStack_138;
  unaff_x20[4] = local_140;
  unaff_x20[7] = uStack_128;
  unaff_x20[6] = uStack_130;
  unaff_x20[9] = uStack_118;
  unaff_x20[8] = local_120;
  unaff_x20[0xb] = uStack_108;
  unaff_x20[10] = uStack_110;
  unaff_x20[1] = uStack_158;
  *unaff_x20 = local_160;
  unaff_x20[3] = uStack_148;
  unaff_x20[2] = uStack_150;
  return;
}



/* Address: 0x100a6ad64 | FUN_100a6ad64 */

undefined1  [16] FUN_100a6ad64(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar3 = (undefined8 *)0x300;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar3 = _malloc(0x300);
  }
  else {
    _swift_coroFrameAlloc(0x300,0x6111);
  }
  *param_1 = puVar3;
  puVar1 = puVar3 + 0x13;
  puVar3[0x5f] = unaff_x20;
  uVar6 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  puVar3[1] = unaff_x20[1];
  *puVar3 = uVar6;
  puVar3[3] = uVar5;
  puVar3[2] = uVar4;
  uVar4 = unaff_x20[8];
  uVar6 = unaff_x20[0xb];
  uVar5 = unaff_x20[10];
  uVar10 = unaff_x20[5];
  uVar9 = unaff_x20[4];
  uVar8 = unaff_x20[7];
  uVar7 = unaff_x20[6];
  puVar3[9] = unaff_x20[9];
  puVar3[8] = uVar4;
  puVar3[0xb] = uVar6;
  puVar3[10] = uVar5;
  puVar3[5] = uVar10;
  puVar3[4] = uVar9;
  puVar3[7] = uVar8;
  puVar3[6] = uVar7;
  uVar7 = unaff_x20[0xf];
  uVar6 = unaff_x20[0xe];
  uVar5 = unaff_x20[0x11];
  uVar4 = unaff_x20[0x10];
  uVar9 = unaff_x20[0xd];
  uVar8 = unaff_x20[0xc];
  *(undefined1 *)(puVar3 + 0x12) = *(undefined1 *)(unaff_x20 + 0x12);
  puVar3[0xf] = uVar7;
  puVar3[0xe] = uVar6;
  puVar3[0x11] = uVar5;
  puVar3[0x10] = uVar4;
  puVar3[0xd] = uVar9;
  puVar3[0xc] = uVar8;
  FUN_100a6ac78();
  if ((int)unaff_x20 == 1) {
    FUN_100a4af18(puVar1);
  }
  else {
    puVar2 = puVar3 + 0x39;
    puVar3[0x46] = puVar3[0xd];
    puVar3[0x45] = puVar3[0xc];
    puVar3[0x48] = puVar3[0xf];
    puVar3[0x47] = puVar3[0xe];
    puVar3[0x4a] = puVar3[0x11];
    puVar3[0x49] = puVar3[0x10];
    puVar3[0x3e] = puVar3[5];
    puVar3[0x3d] = puVar3[4];
    puVar3[0x40] = puVar3[7];
    puVar3[0x3f] = puVar3[6];
    puVar3[0x42] = puVar3[9];
    puVar3[0x41] = puVar3[8];
    puVar3[0x44] = puVar3[0xb];
    puVar3[0x43] = puVar3[10];
    puVar3[0x3a] = puVar3[1];
    *puVar2 = *puVar3;
    puVar3[0x3c] = puVar3[3];
    puVar3[0x3b] = puVar3[2];
    FUN_1005b8d54(puVar2);
    puVar3[0x20] = puVar3[0x46];
    puVar3[0x1f] = puVar3[0x45];
    puVar3[0x22] = puVar3[0x48];
    puVar3[0x21] = puVar3[0x47];
    puVar3[0x24] = puVar3[0x4a];
    puVar3[0x23] = puVar3[0x49];
    *(undefined1 *)(puVar3 + 0x25) = *(undefined1 *)(puVar3 + 0x4b);
    puVar3[0x18] = puVar3[0x3e];
    puVar3[0x17] = puVar3[0x3d];
    puVar3[0x1a] = puVar3[0x40];
    puVar3[0x19] = puVar3[0x3f];
    puVar3[0x1c] = puVar3[0x42];
    puVar3[0x1b] = puVar3[0x41];
    puVar3[0x1e] = puVar3[0x44];
    puVar3[0x1d] = puVar3[0x43];
    puVar3[0x14] = puVar3[0x3a];
    *puVar1 = *puVar2;
    puVar3[0x16] = puVar3[0x3c];
    puVar3[0x15] = puVar3[0x3b];
  }
  puVar3[0x33] = puVar3[0x20];
  puVar3[0x32] = puVar3[0x1f];
  puVar3[0x35] = puVar3[0x22];
  puVar3[0x34] = puVar3[0x21];
  puVar3[0x37] = puVar3[0x24];
  puVar3[0x36] = puVar3[0x23];
  *(undefined1 *)(puVar3 + 0x38) = *(undefined1 *)(puVar3 + 0x25);
  puVar3[0x2b] = puVar3[0x18];
  puVar3[0x2a] = puVar3[0x17];
  puVar3[0x2d] = puVar3[0x1a];
  puVar3[0x2c] = puVar3[0x19];
  puVar3[0x2f] = puVar3[0x1c];
  puVar3[0x2e] = puVar3[0x1b];
  puVar3[0x31] = puVar3[0x1e];
  puVar3[0x30] = puVar3[0x1d];
  puVar3[0x27] = puVar3[0x14];
  puVar3[0x26] = *puVar1;
  puVar3[0x29] = puVar3[0x16];
  puVar3[0x28] = puVar3[0x15];
  auVar11._8_8_ = puVar3 + 0x26;
  auVar11._0_8_ = FUN_100a6aea8;
  return auVar11;
}



/* Address: 0x100a6aea8 | FUN_100a6aea8 */

void FUN_100a6aea8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pvVar3 = (void *)*param_1;
  puVar1 = (undefined8 *)((long)pvVar3 + 0x1c8);
  *(undefined8 *)((long)pvVar3 + 0x230) = *(undefined8 *)((long)pvVar3 + 0x198);
  *(undefined8 *)((long)pvVar3 + 0x228) = *(undefined8 *)((long)pvVar3 + 400);
  *(undefined8 *)((long)pvVar3 + 0x240) = *(undefined8 *)((long)pvVar3 + 0x1a8);
  *(undefined8 *)((long)pvVar3 + 0x238) = *(undefined8 *)((long)pvVar3 + 0x1a0);
  *(undefined8 *)((long)pvVar3 + 0x250) = *(undefined8 *)((long)pvVar3 + 0x1b8);
  *(undefined8 *)((long)pvVar3 + 0x248) = *(undefined8 *)((long)pvVar3 + 0x1b0);
  *(undefined1 *)((long)pvVar3 + 600) = *(undefined1 *)((long)pvVar3 + 0x1c0);
  *(undefined8 *)((long)pvVar3 + 0x1f0) = *(undefined8 *)((long)pvVar3 + 0x158);
  *(undefined8 *)((long)pvVar3 + 0x1e8) = *(undefined8 *)((long)pvVar3 + 0x150);
  *(undefined8 *)((long)pvVar3 + 0x200) = *(undefined8 *)((long)pvVar3 + 0x168);
  *(undefined8 *)((long)pvVar3 + 0x1f8) = *(undefined8 *)((long)pvVar3 + 0x160);
  *(undefined8 *)((long)pvVar3 + 0x210) = *(undefined8 *)((long)pvVar3 + 0x178);
  *(undefined8 *)((long)pvVar3 + 0x208) = *(undefined8 *)((long)pvVar3 + 0x170);
  *(undefined8 *)((long)pvVar3 + 0x220) = *(undefined8 *)((long)pvVar3 + 0x188);
  *(undefined8 *)((long)pvVar3 + 0x218) = *(undefined8 *)((long)pvVar3 + 0x180);
  *(undefined8 *)((long)pvVar3 + 0x1d0) = *(undefined8 *)((long)pvVar3 + 0x138);
  *puVar1 = *(undefined8 *)((long)pvVar3 + 0x130);
  *(undefined8 *)((long)pvVar3 + 0x1e0) = *(undefined8 *)((long)pvVar3 + 0x148);
  *(undefined8 *)((long)pvVar3 + 0x1d8) = *(undefined8 *)((long)pvVar3 + 0x140);
  puVar2 = puVar1;
  FUN_100a6ac78();
  puVar4 = *(undefined8 **)((long)pvVar3 + 0x2f8);
  if ((int)puVar2 == 1) {
    FUN_100a4af18((long)pvVar3 + 0x260);
  }
  else {
    *(undefined8 *)((long)pvVar3 + 0x2c8) = *(undefined8 *)((long)pvVar3 + 0x230);
    *(undefined8 *)((long)pvVar3 + 0x2c0) = *(undefined8 *)((long)pvVar3 + 0x228);
    *(undefined8 *)((long)pvVar3 + 0x2d8) = *(undefined8 *)((long)pvVar3 + 0x240);
    *(undefined8 *)((long)pvVar3 + 0x2d0) = *(undefined8 *)((long)pvVar3 + 0x238);
    *(undefined8 *)((long)pvVar3 + 0x2e8) = *(undefined8 *)((long)pvVar3 + 0x250);
    *(undefined8 *)((long)pvVar3 + 0x2e0) = *(undefined8 *)((long)pvVar3 + 0x248);
    *(undefined8 *)((long)pvVar3 + 0x288) = *(undefined8 *)((long)pvVar3 + 0x1f0);
    *(undefined8 *)((long)pvVar3 + 0x280) = *(undefined8 *)((long)pvVar3 + 0x1e8);
    *(undefined8 *)((long)pvVar3 + 0x298) = *(undefined8 *)((long)pvVar3 + 0x200);
    *(undefined8 *)((long)pvVar3 + 0x290) = *(undefined8 *)((long)pvVar3 + 0x1f8);
    *(undefined8 *)((long)pvVar3 + 0x2a8) = *(undefined8 *)((long)pvVar3 + 0x210);
    *(undefined8 *)((long)pvVar3 + 0x2a0) = *(undefined8 *)((long)pvVar3 + 0x208);
    *(undefined8 *)((long)pvVar3 + 0x2b8) = *(undefined8 *)((long)pvVar3 + 0x220);
    *(undefined8 *)((long)pvVar3 + 0x2b0) = *(undefined8 *)((long)pvVar3 + 0x218);
    *(undefined8 *)((long)pvVar3 + 0x268) = *(undefined8 *)((long)pvVar3 + 0x1d0);
    *(undefined8 *)((long)pvVar3 + 0x260) = *puVar1;
    *(undefined8 *)((long)pvVar3 + 0x278) = *(undefined8 *)((long)pvVar3 + 0x1e0);
    *(undefined8 *)((long)pvVar3 + 0x270) = *(undefined8 *)((long)pvVar3 + 0x1d8);
    FUN_1005b8d54((long)pvVar3 + 0x260);
  }
  uVar5 = *(undefined8 *)((long)pvVar3 + 0x260);
  uVar7 = *(undefined8 *)((long)pvVar3 + 0x278);
  uVar6 = *(undefined8 *)((long)pvVar3 + 0x270);
  puVar4[1] = *(undefined8 *)((long)pvVar3 + 0x268);
  *puVar4 = uVar5;
  puVar4[3] = uVar7;
  puVar4[2] = uVar6;
  uVar6 = *(undefined8 *)((long)pvVar3 + 0x288);
  uVar5 = *(undefined8 *)((long)pvVar3 + 0x280);
  uVar8 = *(undefined8 *)((long)pvVar3 + 0x298);
  uVar7 = *(undefined8 *)((long)pvVar3 + 0x290);
  uVar9 = *(undefined8 *)((long)pvVar3 + 0x2a0);
  uVar11 = *(undefined8 *)((long)pvVar3 + 0x2b8);
  uVar10 = *(undefined8 *)((long)pvVar3 + 0x2b0);
  puVar4[9] = *(undefined8 *)((long)pvVar3 + 0x2a8);
  puVar4[8] = uVar9;
  puVar4[0xb] = uVar11;
  puVar4[10] = uVar10;
  puVar4[5] = uVar6;
  puVar4[4] = uVar5;
  puVar4[7] = uVar8;
  puVar4[6] = uVar7;
  uVar6 = *(undefined8 *)((long)pvVar3 + 0x2c8);
  uVar5 = *(undefined8 *)((long)pvVar3 + 0x2c0);
  uVar8 = *(undefined8 *)((long)pvVar3 + 0x2d8);
  uVar7 = *(undefined8 *)((long)pvVar3 + 0x2d0);
  uVar10 = *(undefined8 *)((long)pvVar3 + 0x2e8);
  uVar9 = *(undefined8 *)((long)pvVar3 + 0x2e0);
  *(undefined1 *)(puVar4 + 0x12) = *(undefined1 *)((long)pvVar3 + 0x2f0);
  puVar4[0xf] = uVar8;
  puVar4[0xe] = uVar7;
  puVar4[0x11] = uVar10;
  puVar4[0x10] = uVar9;
  puVar4[0xd] = uVar6;
  puVar4[0xc] = uVar5;
  _free(pvVar3);
  return;
}



/* Address: 0x100a6af88 | FUN_100a6af88 */

undefined1 FUN_100a6af88(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x91);
}



/* Address: 0x100a6af90 | FUN_100a6af90 */

void FUN_100a6af90(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x91) = param_1;
  return;
}



/* Address: 0x100a6af98 | FUN_100a6af98 */

undefined1  [16] FUN_100a6af98(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x91;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100a6afa8 | FUN_100a6afa8 */

undefined2 FUN_100a6afa8(void)

{
  long unaff_x20;
  
  return *(undefined2 *)(unaff_x20 + 0x92);
}



/* Address: 0x100a6afb0 | FUN_100a6afb0 */

void FUN_100a6afb0(undefined2 param_1)

{
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + 0x92) = param_1;
  return;
}



/* Address: 0x100a6afb8 | FUN_100a6afb8 */

undefined1  [16] FUN_100a6afb8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x92;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100a6afc8 | FUN_100a6afc8 */

undefined8 FUN_100a6afc8(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x98);
}



/* Address: 0x100a6afd0 | FUN_100a6afd0 */

void FUN_100a6afd0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x98) = param_1;
  return;
}



/* Address: 0x100a6afd8 | FUN_100a6afd8 */

undefined1  [16] FUN_100a6afd8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x98;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100a6afe8 | FUN_100a6afe8 */

undefined4 FUN_100a6afe8(void)

{
  long unaff_x20;
  
  return *(undefined4 *)(unaff_x20 + 0xa0);
}



/* Address: 0x100a6aff0 | FUN_100a6aff0 */

void FUN_100a6aff0(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0xa0) = param_1;
  return;
}



/* Address: 0x100a6aff8 | FUN_100a6aff8 */

undefined1  [16] FUN_100a6aff8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xa0;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100a6b008 | FUN_100a6b008 */

undefined4 FUN_100a6b008(void)

{
  long unaff_x20;
  
  return *(undefined4 *)(unaff_x20 + 0xa4);
}



/* Address: 0x100a6b010 | FUN_100a6b010 */

void FUN_100a6b010(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0xa4) = param_1;
  return;
}



/* Address: 0x100a6b018 | FUN_100a6b018 */

undefined1  [16] FUN_100a6b018(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xa4;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100a6b028 | FUN_100a6b028 */

undefined1  [16] FUN_100a6b028(void)

{
  long unaff_x20;
  
  return *(undefined1 (*) [16])(unaff_x20 + 0xa8);
}



/* Address: 0x100a6b030 | FUN_100a6b030 */

void FUN_100a6b030(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_2;
  return;
}



/* Address: 0x100a6b038 | FUN_100a6b038 */

undefined1  [16] FUN_100a6b038(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xa8;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100a6b048 | FUN_100a6b048 */

undefined1  [16] FUN_100a6b048(void)

{
  long unaff_x20;
  
  return *(undefined1 (*) [16])(unaff_x20 + 0xb8);
}



/* Address: 0x100a6b050 | FUN_100a6b050 */

void FUN_100a6b050(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_2;
  return;
}



/* Address: 0x100a6b058 | FUN_100a6b058 */

undefined1  [16] FUN_100a6b058(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xb8;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100a6b068 | FUN_100a6b068 */

undefined1  [16] FUN_100a6b068(void)

{
  long unaff_x20;
  
  return *(undefined1 (*) [16])(unaff_x20 + 200);
}



/* Address: 0x100a6b070 | FUN_100a6b070 */

void FUN_100a6b070(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 200) = param_1;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_2;
  return;
}



/* Address: 0x100a6b078 | FUN_100a6b078 */

undefined1  [16] FUN_100a6b078(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 200;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100a6b088 | FUN_100a6b088 */

void FUN_100a6b088(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  __uint16 _Var17;
  undefined8 uVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_178 [152];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  uStack_78 = param_2[0xd];
  local_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_58 = param_2[0x11];
  local_60 = param_2[0x10];
  uStack_b8 = param_2[5];
  local_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  uStack_98 = param_2[9];
  local_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_d8 = param_2[1];
  local_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  FUN_100a4af18(auStack_178);
  FUN_1005b8d54(&local_e0);
  uVar16 = uStack_58;
  uVar15 = local_60;
  uVar14 = uStack_68;
  uVar13 = uStack_70;
  uVar12 = uStack_78;
  uVar11 = local_80;
  uVar10 = uStack_88;
  uVar9 = uStack_90;
  uVar8 = uStack_98;
  uVar7 = local_a0;
  uVar6 = uStack_a8;
  uVar5 = uStack_b0;
  uVar4 = uStack_b8;
  uVar3 = local_c0;
  uVar2 = uStack_c8;
  uVar21 = uStack_d0;
  uVar20 = uStack_d8;
  uVar18 = local_e0;
  uVar1 = *(ushort *)((long)param_2 + 4);
  uVar19 = (undefined1)uVar1;
  FUN_100a87258();
  _Var17 = Darwin::get_S_IFMT();
  param_1[0xd] = uVar12;
  param_1[0xc] = uVar11;
  param_1[0xf] = uVar14;
  param_1[0xe] = uVar13;
  param_1[0x11] = uVar16;
  param_1[0x10] = uVar15;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[9] = uVar8;
  param_1[8] = uVar7;
  param_1[0xb] = uVar10;
  param_1[10] = uVar9;
  param_1[1] = uVar20;
  *param_1 = uVar18;
  param_1[3] = uVar2;
  param_1[2] = uVar21;
  param_1[0x14] = param_2[2];
  uVar18 = param_2[4];
  uVar21 = param_2[7];
  uVar20 = param_2[6];
  param_1[0x16] = param_2[5];
  param_1[0x15] = uVar18;
  uVar18 = param_2[0xc];
  *(undefined1 *)(param_1 + 0x12) = local_50;
  *(undefined1 *)((long)param_1 + 0x91) = uVar19;
  *(ushort *)((long)param_1 + 0x92) = uVar1 & (_Var17 ^ 0xffff);
  param_1[0x13] = uVar18;
  param_1[0x18] = uVar21;
  param_1[0x17] = uVar20;
  uVar18 = param_2[8];
  param_1[0x1a] = param_2[9];
  param_1[0x19] = uVar18;
  return;
}



/* Address: 0x100a6b19c | FUN_100a6b19c */

void FUN_100a6b19c(undefined8 *param_1,undefined1 param_2,undefined2 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  FUN_100a4af18(&local_100);
  param_1[0xd] = uStack_98;
  param_1[0xc] = local_a0;
  param_1[0xf] = uStack_88;
  param_1[0xe] = uStack_90;
  param_1[0x11] = uStack_78;
  param_1[0x10] = local_80;
  *(undefined1 *)(param_1 + 0x12) = local_70;
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = uStack_b8;
  param_1[8] = local_c0;
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  *(undefined1 *)((long)param_1 + 0x91) = param_2;
  *(undefined2 *)((long)param_1 + 0x92) = param_3;
  param_1[0x13] = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)((long)param_1 + 0xa4) = param_6;
  param_1[0x15] = param_7;
  param_1[0x16] = param_8;
  param_1[0x17] = param_9;
  param_1[0x19] = param_11;
  param_1[0x18] = param_10;
  param_1[0x1a] = param_12;
  return;
}



/* Address: 0x100a6b268 | thunk_FUN_100a6bedc */

void thunk_FUN_100a6bedc(void)

{
  FUN_100a6bedc();
  return;
}



/* Address: 0x100a6b26c | FUN_100a6b26c */

void FUN_100a6b26c(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint32 _Var2;
  __uint16 _Var3;
  __uint16 _Var4;
  __uint32 _Var5;
  __uint32 _Var6;
  __uint32 _Var7;
  __uint64 _Var8;
  __uint64 _Var9;
  __uint64 _Var10;
  __uint64 _Var11;
  __uint64 _Var12;
  __uint64 _Var13;
  __uint64 _Var14;
  __uint64 _Var15;
  __uint64 _Var16;
  __uint64 _Var17;
  __uint32 _Var18;
  __uint32 _Var19;
  __uint32 _Var20;
  int iVar21;
  undefined8 *unaff_x20;
  undefined8 local_100;
  __uint64 _Stack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  __uint64 local_e0;
  __uint64 _Stack_d8;
  __uint64 local_d0;
  __uint64 _Stack_c8;
  __uint64 local_c0;
  __uint64 _Stack_b8;
  __uint64 local_b0;
  __uint64 _Stack_a8;
  __uint64 local_a0;
  __uint64 _Stack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  _Stack_98 = unaff_x20[0xd];
  local_a0 = unaff_x20[0xc];
  local_88 = unaff_x20[0xf];
  local_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  local_80 = unaff_x20[0x10];
  local_70 = *(undefined1 *)(unaff_x20 + 0x12);
  _Stack_d8 = unaff_x20[5];
  local_e0 = unaff_x20[4];
  _Stack_c8 = unaff_x20[7];
  local_d0 = unaff_x20[6];
  _Stack_b8 = unaff_x20[9];
  local_c0 = unaff_x20[8];
  _Stack_a8 = unaff_x20[0xb];
  local_b0 = unaff_x20[10];
  _Stack_f8 = unaff_x20[1];
  local_100 = *unaff_x20;
  local_e8 = unaff_x20[3];
  local_f0 = unaff_x20[2];
  iVar21 = (int)&local_100;
  FUN_100a6ac78();
  _Var17 = _Stack_98;
  _Var16 = local_a0;
  _Var15 = _Stack_a8;
  _Var14 = local_b0;
  _Var13 = _Stack_b8;
  _Var12 = local_c0;
  _Var11 = _Stack_c8;
  _Var10 = local_d0;
  _Var9 = _Stack_d8;
  _Var8 = local_e0;
  _Var1 = _Stack_f8;
  if (iVar21 == 1) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    _Var2 = (__uint32)local_100;
    _Var5 = (__uint32)local_f0;
    _Var6 = local_f0._4_4_;
    _Var7 = (__uint32)local_e8;
    _Var18 = (__uint32)local_90;
    _Var19 = local_90._4_4_;
    _Var20 = (__uint32)local_88;
    _Var3 = local_100._4_2_;
    _Var4 = local_100._6_2_;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine(_Var2,param_2);
    Swift::Hasher::_combine(_Var3,param_2);
    Swift::Hasher::_combine(_Var4,param_2);
    Swift::Hasher::_combine(_Var1,param_2);
    Swift::Hasher::_combine(_Var5,param_2);
    Swift::Hasher::_combine(_Var6,param_2);
    Swift::Hasher::_combine(_Var7,param_2);
    Swift::Hasher::_combine(_Var16,param_2);
    Swift::Hasher::_combine(_Var17,param_2);
    Swift::Hasher::_combine(_Var18,param_2);
    Swift::Hasher::_combine(_Var8,param_2);
    Swift::Hasher::_combine(_Var9,param_2);
    Swift::Hasher::_combine(_Var10,param_2);
    Swift::Hasher::_combine(_Var11,param_2);
    Swift::Hasher::_combine(_Var12,param_2);
    Swift::Hasher::_combine(_Var13,param_2);
    Swift::Hasher::_combine(_Var14,param_2);
    Swift::Hasher::_combine(_Var15,param_2);
    Swift::Hasher::_combine(_Var19,param_2);
    Swift::Hasher::_combine(_Var20,param_2);
  }
  Swift::Hasher::_combine((ulong)*(byte *)((long)unaff_x20 + 0x91),param_2);
  Swift::Hasher::_combine(*(__uint16 *)((long)unaff_x20 + 0x92),param_2);
  Swift::Hasher::_combine(unaff_x20[0x13],param_2);
  Swift::Hasher::_combine(*(__uint32 *)(unaff_x20 + 0x14),param_2);
  Swift::Hasher::_combine(*(__uint32 *)((long)unaff_x20 + 0xa4),param_2);
  _Var1 = unaff_x20[0x16];
  Swift::Hasher::_combine(unaff_x20[0x15],param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  _Var1 = unaff_x20[0x18];
  Swift::Hasher::_combine(unaff_x20[0x17],param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  _Var1 = unaff_x20[0x1a];
  Swift::Hasher::_combine(unaff_x20[0x19],param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  return;
}



/* Address: 0x100a6b450 | FUN_100a6b450 */

void FUN_100a6b450(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint32 _Var2;
  __uint16 _Var3;
  __uint16 _Var4;
  __uint32 _Var5;
  __uint32 _Var6;
  __uint32 _Var7;
  __uint64 _Var8;
  __uint64 _Var9;
  __uint64 _Var10;
  __uint64 _Var11;
  __uint64 _Var12;
  __uint64 _Var13;
  __uint64 _Var14;
  __uint64 _Var15;
  __uint64 _Var16;
  __uint64 _Var17;
  __uint32 _Var18;
  __uint32 _Var19;
  __uint32 _Var20;
  int iVar21;
  Hasher HVar22;
  undefined8 *unaff_x20;
  undefined8 local_110;
  __uint64 _Stack_108;
  undefined8 local_100;
  undefined8 local_f8;
  __uint64 local_f0;
  __uint64 _Stack_e8;
  __uint64 local_e0;
  __uint64 _Stack_d8;
  __uint64 local_d0;
  __uint64 _Stack_c8;
  __uint64 local_c0;
  __uint64 _Stack_b8;
  __uint64 local_b0;
  __uint64 _Stack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  Swift::Hasher::init(0);
  _Stack_a8 = unaff_x20[0xd];
  local_b0 = unaff_x20[0xc];
  local_98 = unaff_x20[0xf];
  local_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  local_90 = unaff_x20[0x10];
  local_80 = *(undefined1 *)(unaff_x20 + 0x12);
  _Stack_e8 = unaff_x20[5];
  local_f0 = unaff_x20[4];
  _Stack_d8 = unaff_x20[7];
  local_e0 = unaff_x20[6];
  _Stack_c8 = unaff_x20[9];
  local_d0 = unaff_x20[8];
  _Stack_b8 = unaff_x20[0xb];
  local_c0 = unaff_x20[10];
  _Stack_108 = unaff_x20[1];
  local_110 = *unaff_x20;
  local_f8 = unaff_x20[3];
  local_100 = unaff_x20[2];
  iVar21 = (int)&local_110;
  FUN_100a6ac78();
  _Var17 = _Stack_a8;
  _Var16 = local_b0;
  _Var15 = _Stack_b8;
  _Var14 = local_c0;
  _Var13 = _Stack_c8;
  _Var12 = local_d0;
  _Var11 = _Stack_d8;
  _Var10 = local_e0;
  _Var9 = _Stack_e8;
  _Var8 = local_f0;
  _Var1 = _Stack_108;
  if (iVar21 == 1) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    _Var2 = (__uint32)local_110;
    _Var5 = (__uint32)local_100;
    _Var6 = local_100._4_4_;
    _Var7 = (__uint32)local_f8;
    _Var18 = (__uint32)local_a0;
    _Var19 = local_a0._4_4_;
    _Var20 = (__uint32)local_98;
    _Var3 = local_110._4_2_;
    _Var4 = local_110._6_2_;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine(_Var2,param_2);
    Swift::Hasher::_combine(_Var3,param_2);
    Swift::Hasher::_combine(_Var4,param_2);
    Swift::Hasher::_combine(_Var1,param_2);
    Swift::Hasher::_combine(_Var5,param_2);
    Swift::Hasher::_combine(_Var6,param_2);
    Swift::Hasher::_combine(_Var7,param_2);
    Swift::Hasher::_combine(_Var16,param_2);
    Swift::Hasher::_combine(_Var17,param_2);
    Swift::Hasher::_combine(_Var18,param_2);
    Swift::Hasher::_combine(_Var8,param_2);
    Swift::Hasher::_combine(_Var9,param_2);
    Swift::Hasher::_combine(_Var10,param_2);
    Swift::Hasher::_combine(_Var11,param_2);
    Swift::Hasher::_combine(_Var12,param_2);
    Swift::Hasher::_combine(_Var13,param_2);
    Swift::Hasher::_combine(_Var14,param_2);
    Swift::Hasher::_combine(_Var15,param_2);
    Swift::Hasher::_combine(_Var19,param_2);
    Swift::Hasher::_combine(_Var20,param_2);
  }
  Swift::Hasher::_combine((ulong)*(byte *)((long)unaff_x20 + 0x91),param_2);
  Swift::Hasher::_combine(*(__uint16 *)((long)unaff_x20 + 0x92),param_2);
  Swift::Hasher::_combine(unaff_x20[0x13],param_2);
  Swift::Hasher::_combine(*(__uint32 *)(unaff_x20 + 0x14),param_2);
  Swift::Hasher::_combine(*(__uint32 *)((long)unaff_x20 + 0xa4),param_2);
  _Var1 = unaff_x20[0x16];
  Swift::Hasher::_combine(unaff_x20[0x15],param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  _Var1 = unaff_x20[0x18];
  Swift::Hasher::_combine(unaff_x20[0x17],param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  HVar22.unknown = (undefined *)unaff_x20[0x1a];
  Swift::Hasher::_combine(unaff_x20[0x19],param_2);
  Swift::Hasher::_combine((__uint64)HVar22.unknown,param_2);
  Swift::Hasher::_finalize(HVar22);
  return;
}



/* Address: 0x100a6b6d0 | thunk_FUN_100a6b450 */

void thunk_FUN_100a6b450(void)

{
  FUN_100a6b450();
  return;
}



/* Address: 0x100a6b6d4 | thunk_FUN_100a6b26c */

void thunk_FUN_100a6b26c(void)

{
  FUN_100a6b26c();
  return;
}


