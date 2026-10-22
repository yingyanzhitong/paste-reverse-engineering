/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a0c7ac | thunk_FUN_100a0c468 */

void thunk_FUN_100a0c468(void)

{
  FUN_100a0c468();
  return;
}



/* Address: 0x100a0c7b0 | thunk_FUN_100a0c598 */

void thunk_FUN_100a0c598(void)

{
  FUN_100a0c598();
  return;
}



/* Address: 0x100a0c7b4 | thunk_FUN_100a0c598 */

void thunk_FUN_100a0c598(void)

{
  FUN_100a0c598();
  return;
}



/* Address: 0x100a0c7b8 | thunk_FUN_100a0c6a0 */

void thunk_FUN_100a0c6a0(void)

{
  thunk_FUN_100a0c6a0();
  return;
}



/* Address: 0x100a0c7bc | thunk_FUN_100a0c6a0 */

void thunk_FUN_100a0c6a0(void)

{
  thunk_FUN_100a0c6a0();
  return;
}



/* Address: 0x100a0c7c0 | thunk_FUN_100a0c6a0 */

void thunk_FUN_100a0c6a0(void)

{
  thunk_FUN_100a0c6a0();
  return;
}



/* Address: 0x100a0c7c4 | FUN_100a0c7c4 */

void FUN_100a0c7c4(long param_1,undefined8 param_2)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar1 + 0x40),param_1,param_2,param_2);
  FUN_100a0dbcc(0,param_1);
  (**(code **)(lVar1 + 0x10))(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  FUN_100a0c864(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Address: 0x100a0c864 | FUN_100a0c864 */

long * FUN_100a0c864(undefined8 param_1)

{
  long *unaff_x20;
  
  _swift_allocObject();
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)) = 0;
  return unaff_x20;
}



/* Address: 0x100a0c8c4 | FUN_100a0c8c4 */

undefined8 FUN_100a0c8c4(undefined8 param_1)

{
  FUN_1005cbc74(0x697463656e6e6f43,0xeb00000000736e6f);
  return param_1;
}



/* Address: 0x100a0c90c | FUN_100a0c90c */

void FUN_100a0c90c(void)

{
  return;
}



/* Address: 0x100a0c914 | FUN_100a0c914 */

void FUN_100a0c914(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_220 [192];
  undefined1 auStack_160 [24];
  undefined8 local_148;
  long lStack_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [24];
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10) + 1;
  if (!SCARRY8(*(long *)(unaff_x20 + 0x10),1)) {
    *(long *)(unaff_x20 + 0x10) = lVar1;
    lVar5 = *(long *)(unaff_x20 + 8);
    _swift_beginAccess(lVar5 + 0x20,auStack_d8,0,0);
    FUN_100076688(lVar5 + 0x20,local_c0);
    FUN_100004640(local_c0,local_a8);
    (**(code **)((long)puStack_a0 + 0x70))(local_a8,puStack_a0);
    FUN_100004594(local_c0);
    if ((local_a8 & 0xff) == 0) {
      FUN_100076688(lVar5 + 0x20,auStack_160);
      FUN_100004640(auStack_160,local_148);
      puVar3 = &DAT_100ff46f0;
      FUN_1000f7830(&DAT_100ff46f0,&DAT_100c8dd80);
      _swift_initStackObject();
      *(undefined8 *)(puVar3 + 0x20) = 0x656e6e6f632e6268;
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      puVar4 = 
      PTR___protocol_witness_table_for_Swift_Int___Swift_CustomStringConvertible_in_Swift_100eac748;
      *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_Int_100eac6f8;
      *(undefined **)(puVar3 + 0x50) = puVar4;
      *(undefined8 *)(puVar3 + 0x28) = 0xee00736e6f697463;
      *(long *)(puVar3 + 0x30) = lVar1;
      puVar3[0x58] = 1;
      puVar4 = puVar3;
      FUN_100a0d8bc();
      _swift_setDeallocating(puVar3);
      FUN_100a0d9ec(puVar3 + 0x20);
      local_c0[0] = 0;
      local_b8 = 0xd000000000000012;
      uStack_b0 = 0x8000000100db7e20;
      local_a8 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0xd000000000000031;
      uStack_80 = 0x8000000100db7dc0;
      local_78 = 0xd000000000000012;
      uStack_70 = 0x8000000100db7e00;
      local_68 = 0x32;
      local_138[0] = 0;
      local_130 = 0xd000000000000012;
      uStack_128 = 0x8000000100db7e20;
      local_120 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0xd000000000000031;
      uStack_f8 = 0x8000000100db7dc0;
      local_f0 = 0xd000000000000012;
      uStack_e8 = 0x8000000100db7e00;
      local_e0 = 0x32;
      puStack_118 = puVar4;
      puStack_a0 = puVar4;
      FUN_1005bf638(local_c0,auStack_220);
      FUN_1004eaa3c(local_138);
      (**(code **)(lStack_140 + 0x28))(local_c0,local_148,lStack_140);
      FUN_1004eaa3c(local_c0);
      FUN_100004594(auStack_160);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a0cb1c);
  (*pcVar2)();
}



/* Address: 0x100a0cb1c | FUN_100a0cb1c */

void FUN_100a0cb1c(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_220 [192];
  undefined1 auStack_160 [24];
  undefined8 local_148;
  long lStack_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [24];
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10) + -1;
  if (!SBORROW8(*(long *)(unaff_x20 + 0x10),1)) {
    *(long *)(unaff_x20 + 0x10) = lVar1;
    lVar5 = *(long *)(unaff_x20 + 8);
    _swift_beginAccess(lVar5 + 0x20,auStack_d8,0,0);
    FUN_100076688(lVar5 + 0x20,local_c0);
    FUN_100004640(local_c0,local_a8);
    (**(code **)((long)puStack_a0 + 0x70))(local_a8,puStack_a0);
    FUN_100004594(local_c0);
    if ((local_a8 & 0xff) == 0) {
      FUN_100076688(lVar5 + 0x20,auStack_160);
      FUN_100004640(auStack_160,local_148);
      puVar3 = &DAT_100ff46f0;
      FUN_1000f7830(&DAT_100ff46f0,&DAT_100c8dd80);
      _swift_initStackObject();
      *(undefined8 *)(puVar3 + 0x20) = 0x656e6e6f632e6268;
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      puVar4 = 
      PTR___protocol_witness_table_for_Swift_Int___Swift_CustomStringConvertible_in_Swift_100eac748;
      *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_Int_100eac6f8;
      *(undefined **)(puVar3 + 0x50) = puVar4;
      *(undefined8 *)(puVar3 + 0x28) = 0xee00736e6f697463;
      *(long *)(puVar3 + 0x30) = lVar1;
      puVar3[0x58] = 1;
      puVar4 = puVar3;
      FUN_100a0d8bc();
      _swift_setDeallocating(puVar3);
      FUN_100a0d9ec(puVar3 + 0x20);
      local_c0[0] = 0;
      local_b8 = 0xd000000000000012;
      uStack_b0 = 0x8000000100db7e60;
      local_a8 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0xd000000000000031;
      uStack_80 = 0x8000000100db7dc0;
      local_78 = 0xd000000000000012;
      uStack_70 = 0x8000000100db7e40;
      local_68 = 0x37;
      local_138[0] = 0;
      local_130 = 0xd000000000000012;
      uStack_128 = 0x8000000100db7e60;
      local_120 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0xd000000000000031;
      uStack_f8 = 0x8000000100db7dc0;
      local_f0 = 0xd000000000000012;
      uStack_e8 = 0x8000000100db7e40;
      local_e0 = 0x37;
      puStack_118 = puVar4;
      puStack_a0 = puVar4;
      FUN_1005bf638(local_c0,auStack_220);
      FUN_1004eaa3c(local_138);
      (**(code **)(lStack_140 + 0x28))(local_c0,local_148,lStack_140);
      FUN_1004eaa3c(local_c0);
      FUN_100004594(auStack_160);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a0cd24);
  (*pcVar2)();
}



/* Address: 0x100a0cd24 | FUN_100a0cd24 */

bool FUN_100a0cd24(long param_1,undefined8 param_2,long param_3)

{
  return param_3 < param_1;
}



/* Address: 0x100a0cd30 | thunk_FUN_100a0c914 */

void thunk_FUN_100a0c914(void)

{
  FUN_100a0c914();
  return;
}



/* Address: 0x100a0cd34 | thunk_FUN_100a0cb1c */

void thunk_FUN_100a0cb1c(void)

{
  FUN_100a0cb1c();
  return;
}



/* Address: 0x100a0cd38 | FUN_100a0cd38 */

bool FUN_100a0cd38(void)

{
  long *unaff_x20;
  
  return unaff_x20[2] < *unaff_x20;
}



/* Address: 0x100a0cd4c | FUN_100a0cd4c */

undefined8 FUN_100a0cd4c(undefined8 param_1,undefined8 param_2)

{
  _swift_retain(param_2);
  return param_1;
}



/* Address: 0x100a0cd80 | FUN_100a0cd80 */

long FUN_100a0cd80(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_allocObject();
  uVar1 = 0x697463656e6e6f43;
  FUN_1005cbc74(0x697463656e6e6f43,0xeb00000000736e6f);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 0;
  return unaff_x20;
}



/* Address: 0x100a0cde0 | FUN_100a0cde0 */

void FUN_100a0cde0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0x697463656e6e6f43;
  FUN_1005cbc74(0x697463656e6e6f43,0xeb00000000736e6f);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Address: 0x100a0ce2c | FUN_100a0ce2c */

void FUN_100a0ce2c(undefined8 param_1)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)) = 0;
  return;
}



/* Address: 0x100a0ce6c | FUN_100a0ce6c */

void FUN_100a0ce6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_90;
  char local_88;
  undefined8 in_stack_ffffffffffffff88;
  long lStack_70;
  
  lVar11 = *unaff_x20;
  FUN_10066a0e4(&stack0xffffffffffffff88,param_2,lVar11,&PTR_PTR_100ff4700);
  uVar1 = 0xff;
  FUN_100631530(0xff);
  uVar2 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar11,uVar1,"handler context ",0);
  FUN_100660d18(0,uVar2);
  lVar9 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar9 + 0x30);
  uVar2 = *(undefined8 *)(lVar9 + 0x38);
  _swift_retain();
  _swift_retain(param_1);
  _swift_unknownObjectRetain(uVar1);
  puVar3 = &stack0xffffffffffffff88;
  FUN_10066022c(puVar3,uVar1,uVar2);
  _swift_beginAccess((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),&stack0xffffffffffffff88,0x21,0)
  ;
  lVar12 = *(long *)(lVar11 + 0x58);
  uVar13 = *(undefined8 *)(lVar11 + 0x58);
  uVar2 = *(undefined8 *)(lVar11 + 0x50);
  (**(code **)(lVar12 + 8))(uVar2,lVar12);
  _swift_endAccess(&stack0xffffffffffffff88);
  uVar1 = in_stack_ffffffffffffff88;
  _swift_getObjectType(in_stack_ffffffffffffff88);
  (**(code **)(lStack_70 + 0x20))();
  lVar9 = *(long *)(lVar9 + 0x30);
  lVar11 = lVar9;
  _swift_unknownObjectRetain();
  FUN_100a0d1e4();
  _swift_release(uVar1);
  _swift_unknownObjectRelease(lVar9);
  puVar4 = &DAT_100f27d10;
  _swift_allocObject(&DAT_100f27d10,0x28,7);
  *(undefined8 *)(puVar4 + 0x18) = uVar13;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined1 **)(puVar4 + 0x20) = puVar3;
  puVar5 = &DAT_100f27d38;
  _swift_allocObject(&DAT_100f27d38,0x28,7);
  *(code **)(puVar5 + 0x10) = FUN_100a0da58;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(long *)(puVar5 + 0x20) = lVar11;
  uVar6 = *(ulong *)(lVar11 + 0x20);
  lVar9 = *(long *)(lVar11 + 0x28);
  _swift_getObjectType();
  pcVar10 = *(code **)(lVar9 + 0x10);
  _swift_retain_n(puVar3,2);
  _swift_retain_n(puVar4,2);
  _swift_retain_n(lVar11,2);
  uVar7 = uVar6;
  (*pcVar10)(uVar6,lVar9);
  if ((uVar7 & 1) == 0) {
    _swift_release(puVar3);
    puVar8 = &DAT_100f27d60;
    _swift_allocObject(&DAT_100f27d60,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar11;
    *(code **)(puVar8 + 0x18) = FUN_1006225d4;
    *(undefined **)(puVar8 + 0x20) = puVar5;
    pcVar10 = *(code **)(lVar9 + 0x18);
    _swift_retain(lVar11);
    _swift_retain(puVar5);
    (*pcVar10)(FUN_1008c1400,puVar8,uVar6,lVar9);
    _swift_release(puVar8);
    _swift_release_n(lVar11,2);
    _swift_release_n(puVar4,2);
    _swift_release(puVar5);
  }
  else {
    _swift_beginAccess(lVar11 + 0x10,&stack0xffffffffffffff88,0,0);
    if (*(char *)(lVar11 + 0x18) == -1) {
      _swift_release(puVar3);
      _swift_beginAccess(lVar11 + 0x30,&local_90,0x21,0);
      FUN_10064967c(FUN_1006225d4,puVar5);
      _swift_endAccess(&local_90);
    }
    else {
      local_90 = *(undefined8 *)(lVar11 + 0x10);
      local_88 = *(char *)(lVar11 + 0x18);
      FUN_100308524();
      FUN_100a0d414(&local_90,puVar3,uVar2,lVar12);
      _swift_release(puVar3);
      FUN_1002ec258(local_90,local_88);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release_n(lVar11,2);
    _swift_release_n(puVar4,2);
    _swift_release(puVar5);
    _swift_bridgeObjectRelease(0);
  }
  FUN_100626ce0(param_2);
  _swift_unknownObjectRelease(in_stack_ffffffffffffff88);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100a0d1e4 | FUN_100a0d1e4 */

ulong FUN_100a0d1e4(ulong param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  uVar3 = uVar5;
  _swift_getObjectType();
  if (param_1 == uVar5) {
    _swift_retain();
  }
  else {
    _swift_getObjectType();
    FUN_100a2af2c();
    puVar4 = &DAT_100f28040;
    _swift_allocObject(&DAT_100f28040,0x28,7);
    *(code **)(puVar4 + 0x10) = FUN_100a0dd14;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(ulong *)(puVar4 + 0x20) = unaff_x20;
    pcVar8 = *(code **)(lVar1 + 0x10);
    _swift_retain_n();
    _swift_retain_n(param_1,4);
    uVar5 = uVar3;
    (*pcVar8)(uVar3,lVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_100f28068;
      _swift_allocObject(&DAT_100f28068,0x28,7);
      *(ulong *)(puVar6 + 0x10) = unaff_x20;
      *(code **)(puVar6 + 0x18) = thunk_FUN_1006225d4;
      *(undefined **)(puVar6 + 0x20) = puVar4;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain();
      _swift_retain(puVar4);
      (*pcVar8)(thunk_FUN_1008c1400,puVar6,uVar3,lVar1);
      _swift_release(puVar6);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      unaff_x20 = param_1;
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
      cVar2 = *(char *)(unaff_x20 + 0x18);
      if (cVar2 == -1) {
        _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
        FUN_10064967c(thunk_FUN_1006225d4,puVar4);
        _swift_endAccess(auStack_90);
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        FUN_1005dfeb4(uVar7,cVar2);
        FUN_100a0d6c4(uVar7,cVar2,param_1);
        FUN_100308538(uVar7,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      _swift_bridgeObjectRelease(0);
      unaff_x20 = param_1;
    }
  }
  return unaff_x20;
}



/* Address: 0x100a0d414 | FUN_100a0d414 */

void FUN_100a0d414(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  long *local_78;
  undefined8 uStack_70;
  
  lVar3 = *(long *)(param_3 - 8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  FUN_10065febc(&local_78);
  lVar4 = *(long *)(*local_78 + 0x60);
  _swift_beginAccess((long)local_78 + lVar4,&local_78,0x21,0);
  pcVar5 = *(code **)(param_4 + 0x10);
  _swift_retain(local_78);
  (*pcVar5)(param_3,param_4);
  _swift_endAccess(&local_78);
  lVar6 = *(long *)(*local_78 + 0x68);
  cVar1 = *(char *)((long)local_78 + lVar6);
  _swift_release(local_78);
  if (cVar1 == '\x01') {
    (**(code **)(lVar3 + 0x10))
              (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),(long)local_78 + lVar4,
               param_3);
    uVar2 = param_3;
    (**(code **)(param_4 + 0x18))(param_3,param_4);
    (**(code **)(lVar3 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)((long)local_78 + lVar6) = 0;
      FUN_100626d58();
    }
  }
  _swift_release(uStack_70);
  _swift_release(local_78);
  return;
}



/* Address: 0x100a0d550 | FUN_100a0d550 */

void FUN_100a0d550(void)

{
  ulong uVar1;
  long extraout_x8;
  long *unaff_x20;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = *unaff_x20;
  uVar2 = *(ulong *)(lVar3 + 0x50);
  lVar4 = *(long *)(uVar2 - 8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  lVar5 = *(long *)(lVar3 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar5,auStack_68,0,0);
  (**(code **)(lVar4 + 0x10))
            (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),(long)unaff_x20 + lVar5,uVar2);
  uVar1 = uVar2;
  (**(code **)(*(long *)(lVar3 + 0x58) + 0x18))();
  (**(code **)(lVar4 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)) = 1;
  }
  else {
    FUN_100626d58();
  }
  return;
}



/* Address: 0x100a0d634 | FUN_100a0d634 */

void FUN_100a0d634(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  return;
}



/* Address: 0x100a0d664 | FUN_100a0d664 */

void FUN_100a0d664(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a0d6a0 | FUN_100a0d6a0 */

void FUN_100a0d6a0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *unaff_x20;
  
  FUN_10066a214(param_1,*unaff_x20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0d6b4);
  (*pcVar1)();
}



/* Address: 0x100a0d6b4 | thunk_FUN_100a0ce6c */

void thunk_FUN_100a0ce6c(void)

{
  FUN_100a0ce6c();
  return;
}



/* Address: 0x100a0d6b8 | FUN_100a0d6b8 */

void FUN_100a0d6b8(void)

{
  thunk_FUN_10061ef88();
  return;
}



/* Address: 0x100a0d6c0 | thunk_FUN_100a0d550 */

void thunk_FUN_100a0d550(void)

{
  FUN_100a0d550();
  return;
}



/* Address: 0x100a0d6c4 | FUN_100a0d6c4 */

void FUN_100a0d6c4(undefined8 param_1,char param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 != '\x01') {
    FUN_100a0d7c4();
    return;
  }
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar6 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(lVar6);
    return;
  }
  puVar4 = &DAT_100f28090;
  _swift_allocObject(&DAT_100f28090,0x20,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,1);
  (*pcVar7)(FUN_1008777d0,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100a0d7c4 | FUN_100a0d7c4 */

void FUN_100a0d7c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar5 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1008d06a0(param_1,param_2);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(lVar5);
    return;
  }
  puVar4 = &DAT_100f280b8;
  _swift_allocObject(&DAT_100f280b8,0x21,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,param_2);
  (*pcVar6)(FUN_1008d418c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100a0d8bc | FUN_100a0d8bc */

undefined * FUN_100a0d8bc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  _DictionaryStorage *this;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined *capacity;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100ff4880;
    FUN_1000f7830(&DAT_100ff4880,&DAT_100c8df08);
    puVar12 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100a0dd88(param_1,&local_a0);
      uVar10 = uStack_6f;
      uVar9 = uStack_70;
      uVar8 = local_77;
      uVar7 = uStack_78;
      uVar6 = uStack_80;
      uVar5 = uStack_88;
      uVar4 = local_90;
      uVar3 = uStack_98;
      uVar2 = local_a0;
      uVar13 = local_a0;
      uVar14 = uStack_98;
      FUN_100071370();
      if ((uVar14 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100a0d9e8);
        (*pcVar11)();
      }
      uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar14 + 0x40) =
           *(ulong *)(puVar12 + uVar14 + 0x40) | 1L << (uVar13 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar13 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar15 = (undefined8 *)(*(long *)(puVar12 + 0x38) + uVar13 * 0x30);
      puVar15[1] = uVar5;
      *puVar15 = uVar4;
      puVar15[3] = CONCAT71(uVar8,uVar7);
      puVar15[2] = uVar6;
      *(undefined8 *)((long)puVar15 + 0x21) = uVar10;
      *(ulong *)((long)puVar15 + 0x19) = CONCAT17(uVar9,uVar8);
      if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100a0d9ec);
        (*pcVar11)();
      }
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      param_1 = param_1 + 0x40;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar12);
  }
  return puVar12;
}



/* Address: 0x100a0d9ec | FUN_100a0d9ec */

undefined8 FUN_100a0d9ec(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff46f8;
  FUN_1000f7830(&DAT_100ff46f8,&DAT_100c8dd88);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100a0da34 | FUN_100a0da34 */

void FUN_100a0da34(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a0da58 | FUN_100a0da58 */

void FUN_100a0da58(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100a0d414(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100a0da64 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x100a0da68 | thunk_FUN_100a0da6c */

undefined8 * thunk_FUN_100a0da6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Address: 0x100a0da6c | FUN_100a0da6c */

undefined8 * FUN_100a0da6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Address: 0x100a0daa0 | FUN_100a0daa0 */

undefined8 * FUN_100a0daa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x100a0daf4 | FUN_100a0daf4 */

void FUN_100a0daf4(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x100a0db08 | FUN_100a0db08 */

undefined8 * FUN_100a0db08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_release(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x100a0db44 | FUN_100a0db44 */

undefined1  [16] FUN_100a0db44(void)

{
  return ZEXT816(0x100f27ec0);
}



/* Address: 0x100a0db54 | FUN_100a0db54 */

void FUN_100a0db54(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c8de68;
    _swift_initClassMetadata2(param_1,0,2,&local_30,param_1 + 0x60);
  }
  return;
}



/* Address: 0x100a0dbcc | FUN_100a0dbcc */

void FUN_100a0dbcc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a0dbd8 | FUN_100a0dbd8 */

void FUN_100a0dbd8(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100a0dbe4 | FUN_100a0dbe4 */

void FUN_100a0dbe4(void)

{
  return;
}



/* Address: 0x100a0dbe8 | FUN_100a0dbe8 */

void FUN_100a0dbe8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a0dbf4 | FUN_100a0dbf4 */

void FUN_100a0dbf4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8ded8,param_1);
  return;
}



/* Address: 0x100a0dc04 | FUN_100a0dc04 */

undefined * FUN_100a0dc04(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100ff4878;
    FUN_1000f7830(&DAT_100ff4878,&DAT_100c8df00);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100a0dd10);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100a0dd14);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x100a0dd14 | FUN_100a0dd14 */

void FUN_100a0dd14(undefined8 *param_1)

{
  FUN_100a0d6c4(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x100a0dd28 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100a0dd2c | FUN_100a0dd2c */

void FUN_100a0dd2c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a0dd58 | FUN_100a0dd58 */

void FUN_100a0dd58(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1002ec258(*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a0dd88 | FUN_100a0dd88 */

undefined8 FUN_100a0dd88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff46f8;
  FUN_1000f7830(&DAT_100ff46f8,&DAT_100c8dd88);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100a0ddd8 | thunk_FUN_100a0da6c */

void thunk_FUN_100a0da6c(void)

{
  thunk_FUN_100a0da6c();
  return;
}



/* Address: 0x100a0dddc | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100a0dde0 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100a0dde4 | thunk_FUN_100a0ded4 */

void thunk_FUN_100a0ded4(void)

{
  FUN_100a0ded4();
  return;
}



/* Address: 0x100a0dde8 | FUN_100a0dde8 */

void FUN_100a0dde8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar1 = 0;
  FUN_100a0de2c(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,0);
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100a0de2c | FUN_100a0de2c */

void FUN_100a0de2c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff4988,&TargetEnumDescriptor_100cc9340);
  return;
}



/* Address: 0x100a0de40 | FUN_100a0de40 */

void FUN_100a0de40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = 0;
  FUN_100a0de2c(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,1);
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100a0de80 | FUN_100a0de80 */

void FUN_100a0de80(undefined8 param_1,undefined8 param_2)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x10))
            (param_1,param_2,CONCAT71(extraout_var,NVar1.value));
  uVar2 = 0;
  FUN_100a0de2c(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,2);
  return;
}



/* Address: 0x100a0ded4 | FUN_100a0ded4 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_100a0ded4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  NWEndpoint NVar3;
  bool bVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar7;
  _StringGuts _Var8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long local_70 [2];
  
  NVar3 = Network::NWEndpoint::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var,NVar3.value);
  local_70[1] = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_70[1] + 0x40));
  lVar11 = (long)local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70[0] = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12;
  lVar5 = 0;
  FUN_100a0de2c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar13 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar15 = (undefined8 *)(lVar13 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined8 *)((long)puVar15 - extraout_x12_01);
  puVar6 = &DAT_100ff49c0;
  FUN_1000f7830(&DAT_100ff49c0,&DAT_100c8dfa8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar9 - extraout_x8_01;
  puVar1 = (undefined8 *)(lVar7 + *(int *)(puVar6 + 0x30));
  FUN_100a0ebfc(param_1,lVar7);
  FUN_100a0ebfc(param_2,puVar1);
  lVar14 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,lVar5);
  if ((int)lVar14 == 0) {
    FUN_100a0ebfc(lVar7,puVar9);
    _Var2.unknown = (undefined *)*puVar9;
    _Var8.unknown = (undefined *)puVar9[1];
    lVar14 = puVar9[2];
    puVar9 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar5);
    if ((int)puVar9 == 0) {
      puVar6 = (undefined *)puVar1[1];
      lVar12 = puVar1[2];
      if (_Var2.unknown == (undefined *)*puVar1 && _Var8.unknown == puVar6) {
        _swift_bridgeObjectRelease(_Var8.unknown);
        _swift_bridgeObjectRelease(puVar6);
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (_Var2,_Var8,(_StringComparisonResult)(__int8)(undefined *)*puVar1);
        _swift_bridgeObjectRelease(_Var8.unknown);
        _swift_bridgeObjectRelease(puVar6);
        if (!bVar4) {
LAB_100a0e1b0:
          FUN_100a0e500(lVar7);
          return false;
        }
      }
      bVar4 = lVar14 == lVar12;
LAB_100a0e1f4:
      FUN_100a0e500(lVar7);
      return bVar4;
    }
  }
  else {
    if ((int)lVar14 != 1) {
      FUN_100a0ebfc(lVar7,lVar13);
      puVar9 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar5);
      lVar14 = local_70[1];
      if ((int)puVar9 == 2) {
        pcVar10 = *(code **)(local_70[1] + 0x20);
        (*pcVar10)(lVar11,lVar13,lVar12);
        lVar5 = local_70[0];
        lVar13 = lVar12;
        (*pcVar10)(local_70[0],puVar1);
        bVar4 = Network::NWEndpoint::___infix
                          ((NWEndpoint)(__int8)lVar11,(NWEndpoint)(__int8)lVar5,
                           (NWEndpoint)(__int8)lVar13);
        pcVar10 = *(code **)(lVar14 + 8);
        (*pcVar10)(lVar5,lVar12);
        (*pcVar10)(lVar11,lVar12);
        goto LAB_100a0e1f4;
      }
      (**(code **)(local_70[1] + 8))(lVar13,lVar12);
      goto LAB_100a0e160;
    }
    FUN_100a0ebfc(lVar7,puVar15);
    _Var2.unknown = (undefined *)*puVar15;
    _Var8.unknown = (undefined *)puVar15[1];
    puVar9 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar5);
    if ((int)puVar9 == 1) {
      puVar6 = (undefined *)puVar1[1];
      if (_Var2.unknown == (undefined *)*puVar1 && _Var8.unknown == puVar6) {
        _swift_bridgeObjectRelease(_Var8.unknown);
        _swift_bridgeObjectRelease(puVar6);
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (_Var2,_Var8,(_StringComparisonResult)(__int8)(undefined *)*puVar1);
        _swift_bridgeObjectRelease(_Var8.unknown);
        _swift_bridgeObjectRelease(puVar6);
        if (!bVar4) goto LAB_100a0e1b0;
      }
      FUN_100a0e500(lVar7);
      return true;
    }
  }
  _swift_bridgeObjectRelease(_Var8.unknown);
LAB_100a0e160:
  FUN_100a0ec40(lVar7);
  return false;
}


