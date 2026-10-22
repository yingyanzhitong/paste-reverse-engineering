/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003329fc | FUN_1003329fc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003329fc(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ID unaff_x20;
  long unaff_x21;
  undefined1 auStack_d0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_1002fff2c(&local_a0,FUN_10033ade8,auStack_d0);
  if (unaff_x21 == 0) {
    uStack_68 = uStack_98;
    local_70 = local_a0;
    uStack_58 = local_88;
    uStack_60 = uStack_90;
    FUN_100011090(&local_70,auStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
    if (param_2 == 0) {
      FUN_100005808(auStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
      _swift_bridgeObjectRetain(param_3);
      puVar5 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar6 = puVar5;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar6,0,0);
      *puVar6 = 0;
      puVar6[1] = param_3;
      puVar6[2] = puVar5;
      *(undefined1 *)(puVar6 + 3) = 1;
      _swift_willThrow();
      FUN_10033ae1c(local_80,uStack_78);
    }
    else {
      FUN_100011080(auStack_d0,&local_a0);
      if (uStack_78 >> 0x3c != 0xb) {
        FUN_100004594(&local_a0);
        FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
        *param_1 = local_80;
        param_1[1] = uStack_78;
        return;
      }
      puVar3 = &DAT_100fbf838;
      FUN_1000037f0(&DAT_100fbf838,&DAT_100c43280);
      puVar6 = &local_a0;
      FUN_100004640(puVar6,local_88);
      _swift_getDynamicType();
      puVar4 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar5 = puVar4;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar5,0,0);
      *puVar5 = puVar3;
      puVar5[1] = puVar6;
      puVar5[2] = puVar4;
      *(undefined1 *)(puVar5 + 3) = 0;
      _swift_willThrow();
      FUN_100004594(&local_a0);
    }
    FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    plVar1 = (long *)objc_stub::objectID(unaff_x20);
    plVar2 = plVar1;
    FUN_1003320b0();
    _swift_allocError(&DAT_100ecba68,plVar2,0,0);
    *plVar2 = param_2;
    plVar2[1] = param_3;
    plVar2[2] = (long)plVar1;
    *(undefined1 *)(plVar2 + 3) = 2;
    _swift_willThrow();
    _swift_errorRelease();
  }
  return;
}



/* Address: 0x100332c6c | FUN_100332c6c */

void FUN_100332c6c(undefined8 param_1,undefined8 param_2)

{
  FUN_100333538(param_1,param_2,FUN_10033adc4,FUN_100301500,
                PTR___type_metadata_for_Swift_Int_100eac6f8);
  return;
}



/* Address: 0x100332c98 | FUN_100332c98 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_100332c98(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ID unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined *unaff_x25;
  undefined1 auVar6 [16];
  undefined1 auStack_d0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100300c1c(&local_a0,FUN_10033afbc,auStack_d0);
  if (unaff_x21 == 0) {
    uStack_68 = uStack_98;
    local_70 = local_a0;
    uStack_58 = local_88;
    uStack_60 = uStack_90;
    FUN_100011090(&local_70,auStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
    unaff_x23 = lStack_78;
    if (param_1 == 0) {
      unaff_x25 = &DAT_100fbe6f0;
      FUN_100005808(auStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
      _swift_bridgeObjectRetain(param_2);
      puVar3 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar4 = puVar3;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar4,0,0);
      *puVar4 = 0;
      puVar4[1] = param_2;
      puVar4[2] = puVar3;
      *(undefined1 *)(puVar4 + 3) = 1;
      _swift_willThrow();
      _swift_bridgeObjectRelease(lStack_78);
    }
    else {
      FUN_100011080(auStack_d0,&local_a0);
      unaff_x25 = local_80;
      if (lStack_78 != 0) {
        FUN_100004594(&local_a0);
        FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
        goto LAB_100332ec4;
      }
      puVar4 = &local_a0;
      FUN_100004640(puVar4,local_88);
      _swift_getDynamicType();
      puVar5 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar3 = puVar5;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar3,0,0);
      *puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
      puVar3[1] = puVar4;
      puVar3[2] = puVar5;
      *(undefined1 *)(puVar3 + 3) = 0;
      _swift_willThrow();
      FUN_100004594(&local_a0);
    }
    FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    plVar1 = (long *)objc_stub::objectID(unaff_x20);
    plVar2 = plVar1;
    FUN_1003320b0();
    _swift_allocError(&DAT_100ecba68,plVar2,0,0);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    plVar2[2] = (long)plVar1;
    *(undefined1 *)(plVar2 + 3) = 2;
    _swift_willThrow();
    _swift_errorRelease();
  }
LAB_100332ec4:
  auVar6._8_8_ = unaff_x23;
  auVar6._0_8_ = unaff_x25;
  return auVar6;
}



/* Address: 0x100332eec | FUN_100332eec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100332eec(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ID unaff_x20;
  long unaff_x21;
  undefined1 auStack_d0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100300924(&local_a0,FUN_10033ae88,auStack_d0);
  if (unaff_x21 == 0) {
    uStack_68 = uStack_98;
    local_70 = local_a0;
    uStack_58 = local_88;
    uStack_60 = uStack_90;
    FUN_100011090(&local_70,auStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
    if (param_2 == 0) {
      FUN_100005808(auStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
      _swift_bridgeObjectRetain(param_3);
      puVar4 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar5 = puVar4;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar5,0,0);
      *puVar5 = 0;
      puVar5[1] = param_3;
      puVar5[2] = puVar4;
      *(undefined1 *)(puVar5 + 3) = 1;
      _swift_willThrow();
      FUN_10003bf18(local_80,uStack_78);
    }
    else {
      FUN_100011080(auStack_d0,&local_a0);
      if (uStack_78 >> 0x3c < 0xf) {
        FUN_100004594(&local_a0);
        FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
        *param_1 = local_80;
        param_1[1] = uStack_78;
        return;
      }
      puVar5 = &local_a0;
      FUN_100004640(puVar5,local_88);
      _swift_getDynamicType();
      puVar3 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar4 = puVar3;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar4,0,0);
      *puVar4 = PTR___type_metadata_for_Foundation_Data_100ea7300;
      puVar4[1] = puVar5;
      puVar4[2] = puVar3;
      *(undefined1 *)(puVar4 + 3) = 0;
      _swift_willThrow();
      FUN_100004594(&local_a0);
    }
    FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    plVar1 = (long *)objc_stub::objectID(unaff_x20);
    plVar2 = plVar1;
    FUN_1003320b0();
    _swift_allocError(&DAT_100ecba68,plVar2,0,0);
    *plVar2 = param_2;
    plVar2[1] = param_3;
    plVar2[2] = (long)plVar1;
    *(undefined1 *)(plVar2 + 3) = 2;
    _swift_willThrow();
    _swift_errorRelease();
  }
  return;
}



/* Address: 0x10033314c | FUN_10033314c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10033314c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  URL UVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  ID unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  long alStack_d0 [4];
  undefined1 auStack_b0 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = &DAT_100fbe650;
  FUN_1000037f0(&DAT_100fbe650,&DAT_100c40760);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = -extraout_x8;
  puVar7 = (undefined8 *)((long)alStack_d0 + lVar5);
  puVar2 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar10 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar10 - extraout_x12;
  FUN_100300528(puVar7,FUN_10033ae30,auStack_b0);
  if (unaff_x21 == 0) {
    uStack_78 = *(undefined8 *)((long)alStack_d0 + lVar5 + 8);
    local_80 = *puVar7;
    uStack_68 = *(undefined8 *)(auStack_b0 + lVar5 + -8);
    uStack_70 = *(undefined8 *)((long)alStack_d0 + lVar5 + 0x10);
    FUN_10019ffdc((long)puVar7 + (long)*(int *)(puVar1 + 0x30),lVar8,&DAT_100fc1a40,&DAT_100c40660);
    FUN_100011090(&local_80,alStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
    if (alStack_d0[3] == 0) {
      FUN_100005808(alStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
      _swift_bridgeObjectRetain(param_3);
      puVar3 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar7 = puVar3;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar7,0,0);
      *puVar7 = param_2;
      puVar7[1] = param_3;
      puVar7[2] = puVar3;
      *(undefined1 *)(puVar7 + 3) = 1;
      _swift_willThrow();
      FUN_100005808(lVar8,&DAT_100fc1a40,&DAT_100c40660);
    }
    else {
      FUN_100011080(alStack_d0,auStack_b0);
      FUN_100011090(lVar8,lVar10,&DAT_100fc1a40,&DAT_100c40660);
      UVar4 = Foundation::URL::typeMetadataAccessor();
      lVar9 = *(long *)(UVar4.unknown + -8);
      lVar5 = lVar10;
      (**(code **)(lVar9 + 0x30))(lVar10,1,UVar4.unknown);
      if ((int)lVar5 != 1) {
        FUN_100004594(auStack_b0);
        FUN_100005808(lVar8,&DAT_100fc1a40,&DAT_100c40660);
        FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
        (**(code **)(lVar9 + 0x20))(param_1,lVar10,UVar4.unknown);
        return;
      }
      FUN_100005808(lVar10,&DAT_100fc1a40,&DAT_100c40660);
      puVar6 = auStack_b0;
      FUN_100004640(puVar6,param_2);
      _swift_getDynamicType();
      puVar3 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar7 = puVar3;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar7,0,0);
      *puVar7 = UVar4.unknown;
      puVar7[1] = puVar6;
      puVar7[2] = puVar3;
      *(undefined1 *)(puVar7 + 3) = 0;
      _swift_willThrow();
      FUN_100004594(auStack_b0);
      FUN_100005808(lVar8,&DAT_100fc1a40,&DAT_100c40660);
    }
    FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    puVar3 = (undefined8 *)objc_stub::objectID(unaff_x20);
    puVar7 = puVar3;
    FUN_1003320b0();
    _swift_allocError(&DAT_100ecba68,puVar7,0,0);
    *puVar7 = param_2;
    puVar7[1] = param_3;
    puVar7[2] = puVar3;
    *(undefined1 *)(puVar7 + 3) = 2;
    _swift_willThrow();
    _swift_errorRelease();
  }
  return;
}



/* Address: 0x10033350c | FUN_10033350c */

void FUN_10033350c(undefined8 param_1,undefined8 param_2)

{
  FUN_100333538(param_1,param_2,FUN_10033ae64,FUN_100300224,
                PTR___type_metadata_for_Swift_UInt64_100eade90);
  return;
}



/* Address: 0x100333538 | FUN_100333538 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined *
FUN_100333538(long param_1,long param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ID unaff_x20;
  long unaff_x21;
  undefined *unaff_x25;
  undefined1 auStack_d0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_80;
  char local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  (*param_4)(&local_a0,param_3,auStack_d0);
  if (unaff_x21 == 0) {
    uStack_68 = uStack_98;
    local_70 = local_a0;
    uStack_58 = local_88;
    uStack_60 = uStack_90;
    FUN_100011090(&local_70,auStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
    if (param_1 == 0) {
      unaff_x25 = &DAT_100c42750;
      FUN_100005808(auStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
      _swift_bridgeObjectRetain(param_2);
      puVar4 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar5 = puVar4;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar5,0,0);
      *puVar5 = 0;
      puVar5[1] = param_2;
      puVar5[2] = puVar4;
      *(undefined1 *)(puVar5 + 3) = 1;
      _swift_willThrow();
    }
    else {
      FUN_100011080(auStack_d0,&local_a0);
      if (local_78 != '\x01') {
        FUN_100004594(&local_a0);
        FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
        return local_80;
      }
      puVar5 = &local_a0;
      FUN_100004640(puVar5,local_88);
      _swift_getDynamicType();
      puVar3 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar4 = puVar3;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar4,0,0);
      *puVar4 = param_5;
      puVar4[1] = puVar5;
      puVar4[2] = puVar3;
      *(undefined1 *)(puVar4 + 3) = 0;
      _swift_willThrow();
      FUN_100004594(&local_a0);
      unaff_x25 = local_80;
    }
    FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    plVar1 = (long *)objc_stub::objectID(unaff_x20);
    plVar2 = plVar1;
    FUN_1003320b0();
    _swift_allocError(&DAT_100ecba68,plVar2,0,0);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    plVar2[2] = (long)plVar1;
    *(undefined1 *)(plVar2 + 3) = 2;
    _swift_willThrow();
    _swift_errorRelease();
  }
  return unaff_x25;
}



/* Address: 0x100333780 | FUN_100333780 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_100333780(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ID unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined1 auVar6 [16];
  undefined1 auStack_d0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100300f14(&local_a0,FUN_10033af88,auStack_d0);
  if (unaff_x21 == 0) {
    uStack_68 = uStack_98;
    local_70 = local_a0;
    uStack_58 = local_88;
    uStack_60 = uStack_90;
    FUN_100011090(&local_70,auStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
    unaff_x23 = local_80;
    unaff_x24 = lStack_78;
    if (param_1 == 0) {
      FUN_100005808(auStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
      _swift_bridgeObjectRetain(param_2);
      puVar4 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar5 = puVar4;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar5,0,0);
      *puVar5 = 0;
      puVar5[1] = param_2;
      puVar5[2] = puVar4;
      *(undefined1 *)(puVar5 + 3) = 1;
      _swift_willThrow();
      FUN_100161a8c(local_80,lStack_78);
    }
    else {
      FUN_100011080(auStack_d0,&local_a0);
      if (lStack_78 != 1) {
        FUN_100004594(&local_a0);
        FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
        goto LAB_1003339c4;
      }
      puVar3 = &DAT_100fbf830;
      FUN_1000037f0(&DAT_100fbf830,&DAT_100c40fb8);
      unaff_x23 = &local_a0;
      FUN_100004640(unaff_x23,local_88);
      _swift_getDynamicType();
      puVar4 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar5 = puVar4;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar5,0,0);
      *puVar5 = puVar3;
      puVar5[1] = unaff_x23;
      puVar5[2] = puVar4;
      *(undefined1 *)(puVar5 + 3) = 0;
      _swift_willThrow();
      FUN_100004594(&local_a0);
    }
    FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    plVar1 = (long *)objc_stub::objectID(unaff_x20);
    plVar2 = plVar1;
    FUN_1003320b0();
    _swift_allocError(&DAT_100ecba68,plVar2,0,0);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    plVar2[2] = (long)plVar1;
    *(undefined1 *)(plVar2 + 3) = 2;
    _swift_willThrow();
    _swift_errorRelease();
  }
LAB_1003339c4:
  auVar6._8_8_ = unaff_x24;
  auVar6._0_8_ = unaff_x23;
  return auVar6;
}



/* Address: 0x1003339ec | FUN_1003339ec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003339ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  ID unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  long alStack_d0 [4];
  undefined1 auStack_b0 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = &DAT_100fbe698;
  FUN_1000037f0(&DAT_100fbe698,&DAT_100c407a8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = -extraout_x8;
  puVar7 = (undefined8 *)((long)alStack_d0 + lVar5);
  puVar2 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar10 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar10 - extraout_x12;
  FUN_1003023e4(puVar7,FUN_10033af54,auStack_b0);
  if (unaff_x21 == 0) {
    uStack_78 = *(undefined8 *)((long)alStack_d0 + lVar5 + 8);
    local_80 = *puVar7;
    uStack_68 = *(undefined8 *)(auStack_b0 + lVar5 + -8);
    uStack_70 = *(undefined8 *)((long)alStack_d0 + lVar5 + 0x10);
    FUN_10019ffdc((long)puVar7 + (long)*(int *)(puVar1 + 0x30),lVar8,&DAT_100fbe6e8,&DAT_100c43250);
    FUN_100011090(&local_80,alStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
    if (alStack_d0[3] == 0) {
      FUN_100005808(alStack_d0,&DAT_100fbe6f0,&DAT_100c42750);
      _swift_bridgeObjectRetain(param_3);
      puVar3 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar7 = puVar3;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar7,0,0);
      *puVar7 = param_2;
      puVar7[1] = param_3;
      puVar7[2] = puVar3;
      *(undefined1 *)(puVar7 + 3) = 1;
      _swift_willThrow();
      FUN_100005808(lVar8,&DAT_100fbe6e8,&DAT_100c43250);
    }
    else {
      FUN_100011080(alStack_d0,auStack_b0);
      FUN_100011090(lVar8,lVar10,&DAT_100fbe6e8,&DAT_100c43250);
      DVar4 = Foundation::Date::typeMetadataAccessor();
      lVar9 = *(long *)(DVar4.unknown + -8);
      lVar5 = lVar10;
      (**(code **)(lVar9 + 0x30))(lVar10,1,DVar4.unknown);
      if ((int)lVar5 != 1) {
        FUN_100004594(auStack_b0);
        FUN_100005808(lVar8,&DAT_100fbe6e8,&DAT_100c43250);
        FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
        (**(code **)(lVar9 + 0x20))(param_1,lVar10,DVar4.unknown);
        return;
      }
      FUN_100005808(lVar10,&DAT_100fbe6e8,&DAT_100c43250);
      puVar6 = auStack_b0;
      FUN_100004640(puVar6,param_2);
      _swift_getDynamicType();
      puVar3 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar7 = puVar3;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar7,0,0);
      *puVar7 = DVar4.unknown;
      puVar7[1] = puVar6;
      puVar7[2] = puVar3;
      *(undefined1 *)(puVar7 + 3) = 0;
      _swift_willThrow();
      FUN_100004594(auStack_b0);
      FUN_100005808(lVar8,&DAT_100fbe6e8,&DAT_100c43250);
    }
    FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    puVar3 = (undefined8 *)objc_stub::objectID(unaff_x20);
    puVar7 = puVar3;
    FUN_1003320b0();
    _swift_allocError(&DAT_100ecba68,puVar7,0,0);
    *puVar7 = param_2;
    puVar7[1] = param_3;
    puVar7[2] = puVar3;
    *(undefined1 *)(puVar7 + 3) = 2;
    _swift_willThrow();
    _swift_errorRelease();
  }
  return;
}



/* Address: 0x100333dac | FUN_100333dac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 * FUN_100333dac(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ID unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined1 auStack_c0 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100301dec(&local_98,FUN_10033af00,auStack_c0);
  if (unaff_x21 == 0) {
    uStack_68 = uStack_90;
    local_70 = local_98;
    uStack_58 = uStack_80;
    uStack_60 = local_88;
    FUN_100011090(&local_70,auStack_c0,&DAT_100fbe6f0,&DAT_100c42750);
    if (param_1 == 0) {
      FUN_100005808(auStack_c0,&DAT_100fbe6f0,&DAT_100c42750);
      _swift_bridgeObjectRetain(param_2);
      puVar5 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar3 = puVar5;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar3,0,0);
      *puVar3 = 0;
      puVar3[1] = param_2;
      puVar3[2] = puVar5;
      *(undefined1 *)(puVar3 + 3) = 1;
      _swift_willThrow();
      _swift_bridgeObjectRelease(local_78);
      unaff_x23 = local_78;
    }
    else {
      FUN_100011080(auStack_c0,&local_98);
      if (local_78 != (undefined8 *)0x0) {
        FUN_100004594(&local_98);
        FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
        return local_78;
      }
      puVar4 = &DAT_100fc0670;
      FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
      unaff_x23 = &local_98;
      FUN_100004640(unaff_x23,uStack_80);
      _swift_getDynamicType();
      puVar5 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar3 = puVar5;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar3,0,0);
      *puVar3 = puVar4;
      puVar3[1] = unaff_x23;
      puVar3[2] = puVar5;
      *(undefined1 *)(puVar3 + 3) = 0;
      _swift_willThrow();
      FUN_100004594(&local_98);
    }
    FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    plVar1 = (long *)objc_stub::objectID(unaff_x20);
    plVar2 = plVar1;
    FUN_1003320b0();
    _swift_allocError(&DAT_100ecba68,plVar2,0,0);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    plVar2[2] = (long)plVar1;
    *(undefined1 *)(plVar2 + 3) = 2;
    _swift_willThrow();
    _swift_errorRelease();
  }
  return unaff_x23;
}



/* Address: 0x100334010 | FUN_100334010 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 *
FUN_100334010(long param_1,long param_2,undefined8 param_3,code *param_4,undefined8 param_5,
             undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ID unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined1 auStack_c0 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  (*param_4)(&local_98,param_3,auStack_c0);
  if (unaff_x21 == 0) {
    uStack_68 = uStack_90;
    local_70 = local_98;
    uStack_58 = uStack_80;
    uStack_60 = local_88;
    FUN_100011090(&local_70,auStack_c0,&DAT_100fbe6f0,&DAT_100c42750);
    if (param_1 == 0) {
      FUN_100005808(auStack_c0,&DAT_100fbe6f0,&DAT_100c42750);
      _swift_bridgeObjectRetain(param_2);
      puVar5 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar3 = puVar5;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar3,0,0);
      *puVar3 = 0;
      puVar3[1] = param_2;
      puVar3[2] = puVar5;
      *(undefined1 *)(puVar3 + 3) = 1;
      _swift_willThrow();
      unaff_x23 = local_78;
    }
    else {
      FUN_100011080(auStack_c0,&local_98);
      if (local_78 != (undefined8 *)0x0) {
        FUN_100004594(&local_98);
        FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
        return local_78;
      }
      uVar4 = 0;
      FUN_10000ec2c(0,param_5,param_6);
      unaff_x23 = &local_98;
      FUN_100004640(unaff_x23,uStack_80);
      _swift_getDynamicType();
      puVar5 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar3 = puVar5;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar3,0,0);
      *puVar3 = uVar4;
      puVar3[1] = unaff_x23;
      puVar3[2] = puVar5;
      *(undefined1 *)(puVar3 + 3) = 0;
      _swift_willThrow();
      FUN_100004594(&local_98);
    }
    FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    plVar1 = (long *)objc_stub::objectID(unaff_x20);
    plVar2 = plVar1;
    FUN_1003320b0();
    _swift_allocError(&DAT_100ecba68,plVar2,0,0);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    plVar2[2] = (long)plVar1;
    *(undefined1 *)(plVar2 + 3) = 2;
    _swift_willThrow();
    _swift_errorRelease();
  }
  return unaff_x23;
}



/* Address: 0x100334274 | FUN_100334274 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 * FUN_100334274(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ID unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined1 auStack_c0 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100301af8(&local_98,FUN_10033aed0,auStack_c0);
  if (unaff_x21 == 0) {
    uStack_68 = uStack_90;
    local_70 = local_98;
    uStack_58 = uStack_80;
    uStack_60 = local_88;
    FUN_100011090(&local_70,auStack_c0,&DAT_100fbe6f0,&DAT_100c42750);
    if (param_1 == 0) {
      FUN_100005808(auStack_c0,&DAT_100fbe6f0,&DAT_100c42750);
      _swift_bridgeObjectRetain(param_2);
      puVar4 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar5 = puVar4;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar5,0,0);
      *puVar5 = 0;
      puVar5[1] = param_2;
      puVar5[2] = puVar4;
      *(undefined1 *)(puVar5 + 3) = 1;
      _swift_willThrow();
      FUN_10001486c(local_78);
      unaff_x23 = local_78;
    }
    else {
      FUN_100011080(auStack_c0,&local_98);
      if (local_78 != (undefined8 *)&DAT_00000001) {
        FUN_100004594(&local_98);
        FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
        return local_78;
      }
      puVar3 = &DAT_100fc0298;
      FUN_1000037f0(&DAT_100fc0298,&DAT_100c42150);
      unaff_x23 = &local_98;
      FUN_100004640(unaff_x23,uStack_80);
      _swift_getDynamicType();
      puVar4 = (undefined8 *)objc_stub::objectID(unaff_x20);
      puVar5 = puVar4;
      FUN_1003320b0();
      _swift_allocError(&DAT_100ecba68,puVar5,0,0);
      *puVar5 = puVar3;
      puVar5[1] = unaff_x23;
      puVar5[2] = puVar4;
      *(undefined1 *)(puVar5 + 3) = 0;
      _swift_willThrow();
      FUN_100004594(&local_98);
    }
    FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    plVar1 = (long *)objc_stub::objectID(unaff_x20);
    plVar2 = plVar1;
    FUN_1003320b0();
    _swift_allocError(&DAT_100ecba68,plVar2,0,0);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    plVar2[2] = (long)plVar1;
    *(undefined1 *)(plVar2 + 3) = 2;
    _swift_willThrow();
    _swift_errorRelease();
  }
  return unaff_x23;
}



/* Address: 0x1003344dc | FUN_1003344dc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003344dc(long param_1,ID param_2)

{
  NSString *pNVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(param_2,pNVar1);
  if (IVar2 == 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  puVar3 = &DAT_100fbe6f0;
  FUN_100011090(&local_50,param_1,&DAT_100fbe6f0,&DAT_100c42750);
  uStack_68 = uStack_48;
  local_70 = local_50;
  uStack_58 = uStack_38;
  uStack_60 = uStack_40;
  FUN_1000037f0(&DAT_100fbe6f0,&DAT_100c42750);
  uVar4 = param_1 + 0x20;
  _swift_dynamicCast(uVar4,&local_70,puVar3,PTR___type_metadata_for_Foundation_Data_100ea7300,6);
  if ((uVar4 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0xf000000000000000;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Address: 0x1003345cc | FUN_1003345cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003345cc(long param_1,ID param_2)

{
  NSString *pNVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(param_2,pNVar1);
  if (IVar2 == 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  puVar3 = &DAT_100fbe6f0;
  FUN_100011090(&local_50,param_1,&DAT_100fbe6f0,&DAT_100c42750);
  uStack_68 = uStack_48;
  local_70 = local_50;
  uStack_58 = uStack_38;
  uStack_60 = uStack_40;
  FUN_1000037f0(&DAT_100fbe6f0,&DAT_100c42750);
  uVar4 = param_1 + 0x20;
  _swift_dynamicCast(uVar4,&local_70,puVar3,PTR___type_metadata_for_Swift_String_100eac208,6);
  if ((uVar4 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Address: 0x1003346b4 | FUN_1003346b4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003346b4(long param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  NSString *pNVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 in_register_00005008;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(param_3,pNVar1);
  if (IVar2 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  puVar3 = &DAT_100fbe6f0;
  FUN_100011090(&local_60,param_1,&DAT_100fbe6f0,&DAT_100c42750);
  uStack_78 = uStack_58;
  local_80 = local_60;
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  FUN_1000037f0(&DAT_100fbe6f0,&DAT_100c42750);
  FUN_1000037f0(param_6,param_7);
  uVar4 = param_1 + 0x20;
  _swift_dynamicCast(uVar4,&local_80,puVar3,param_6,6);
  if ((uVar4 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x28) = in_register_00005008;
    *(undefined8 *)(param_1 + 0x20) = param_2;
  }
  return;
}



/* Address: 0x1003347c0 | FUN_1003347c0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003347c0(long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  NSString *pNVar2;
  ID IVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::FUN_100c112a0(param_2,pNVar2);
  if (IVar3 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar3);
  }
  puVar4 = &DAT_100fbe6f0;
  FUN_100011090(&local_60,param_1,&DAT_100fbe6f0,&DAT_100c42750);
  uStack_78 = uStack_58;
  local_80 = local_60;
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  FUN_1000037f0(&DAT_100fbe6f0,&DAT_100c42750);
  uVar5 = param_1 + 0x20;
  _swift_dynamicCast(uVar5,&local_80,puVar4,param_5,6);
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(bool *)(param_1 + 0x28) = bVar1;
  return;
}



/* Address: 0x1003348c0 | FUN_1003348c0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003348c0(long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  NSString *pNVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(param_2,pNVar1);
  if (IVar2 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  puVar3 = &DAT_100fbe6f0;
  FUN_100011090(&local_60,param_1,&DAT_100fbe6f0,&DAT_100c42750);
  uStack_78 = uStack_58;
  local_80 = local_60;
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  FUN_1000037f0(&DAT_100fbe6f0,&DAT_100c42750);
  uVar4 = 0;
  FUN_10000ec2c(0,param_5,param_6);
  uVar5 = param_1 + 0x20;
  _swift_dynamicCast(uVar5,&local_80,puVar3,uVar4,6);
  if ((uVar5 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Address: 0x1003349c8 | FUN_1003349c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003349c8(long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  NSString *pNVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(param_2,pNVar1);
  if (IVar2 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  puVar3 = &DAT_100fbe6f0;
  FUN_100011090(&local_70,param_1,&DAT_100fbe6f0,&DAT_100c42750);
  uStack_88 = uStack_68;
  local_90 = local_70;
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  FUN_1000037f0(&DAT_100fbe6f0,&DAT_100c42750);
  FUN_1000037f0(param_5,param_6);
  uVar4 = param_1 + 0x20;
  _swift_dynamicCast(uVar4,&local_90,puVar3,param_5,6);
  if ((uVar4 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x20) = param_7;
  }
  return;
}



/* Address: 0x100334ad8 | FUN_100334ad8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100334ad8(long param_1,ID param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,code *param_7)

{
  int iVar1;
  NSString *pNVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::FUN_100c112a0(param_2,pNVar2);
  if (IVar3 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar3);
  }
  FUN_1000037f0(param_5,param_6);
  iVar1 = *(int *)(param_5 + 0x30);
  puVar4 = &DAT_100fbe6f0;
  FUN_100011090(&local_70,param_1,&DAT_100fbe6f0,&DAT_100c42750);
  uStack_88 = uStack_68;
  local_90 = local_70;
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  FUN_1000037f0(&DAT_100fbe6f0,&DAT_100c42750);
  lVar5 = 0;
  (*param_7)();
  lVar6 = param_1 + iVar1;
  _swift_dynamicCast(lVar6,&local_90,puVar4,lVar5,6);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1 + iVar1,(uint)lVar6 ^ 1,1,lVar5);
  return;
}



/* Address: 0x100334c10 | FUN_100334c10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100334c10(__int64 *param_1)

{
  undefined *self;
  NSString *pNVar1;
  ID self_00;
  __int64 _Var2;
  long unaff_x21;
  
  self = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self_00 = objc_stub::initWithEntityName_((ID)self,pNVar1);
  objc_stub::FUN_100c0bb60(self_00,0x19);
  objc_stub::FUN_100c0c2e0(self_00,0);
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  _Var2 = (extension_CoreData)::__C::NSManagedObjectContext::_count();
  if (unaff_x21 == 0) {
    *param_1 = _Var2;
  }
  return 0;
}



/* Address: 0x100334ce4 | FUN_100334ce4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100334ce4(ID *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  NSString *pNVar2;
  ID self;
  undefined *self_00;
  ID IVar3;
  NSArray *pNVar4;
  long unaff_x21;
  undefined1 auStack_68 [24];
  
  puVar1 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = objc_stub::initWithEntityName_((ID)puVar1,pNVar2);
  objc_stub::setFetchLimit_(self,param_2);
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  objc_stub::FUN_100c0bba0(self,*(undefined8 *)(param_3 + 0x10));
  puVar1 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  self_00 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::FUN_100c04440((ID)self_00,pNVar2,1);
  *(ID *)(puVar1 + 0x20) = IVar3;
  FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar1);
  objc_stub::FUN_100c0dbc0(self,pNVar4);
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 == 0) {
    *param_1 = self;
  }
  return 0;
}



/* Address: 0x100334ea8 | FUN_100334ea8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100334ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ScheduledTaskType SVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined7 extraout_var;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  long *plVar8;
  long lVar9;
  long lVar4;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_1;
  puVar2 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  uVar3 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar3;
  SVar1 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  lVar4 = CONCAT71(extraout_var,SVar1.value);
  *(long *)(unaff_x22 + 0x1d8) = lVar4;
  lVar9 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x1e0) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar3;
  lVar5 = 0;
  FUN_10033ad1c();
  *(long *)(unaff_x22 + 0x1f0) = lVar5;
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar6;
  puVar2 = &DAT_100ecbbd0;
  _swift_allocObject(&DAT_100ecbbd0,0x20,7);
  *(undefined **)(unaff_x22 + 0x200) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  (**(code **)(lVar9 + 0x68))
            (uVar3,*(undefined4 *)
                    PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
             ,lVar4);
  plVar8 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x208) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100335044;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar7) {
    (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100335044 | FUN_100335044 */

void FUN_100335044(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long *unaff_x22;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar6 = *unaff_x22;
  *(long *)(lVar6 + 0x210) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x208));
  uVar5 = *(undefined8 *)(lVar6 + 0x200);
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar6 + 0x1b8);
    uVar3 = *(undefined8 *)(lVar6 + 0x1c0);
    (**(code **)(*(long *)(lVar6 + 0x1e0) + 8))
              (*(undefined8 *)(lVar6 + 0x1e8),*(undefined8 *)(lVar6 + 0x1d8));
    _swift_release(uVar5);
    FUN_1000da368(uVar1,uVar3);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar4) goto LAB_10033513c;
    pcVar2 = FUN_100335140;
  }
  else {
    uVar1 = *(undefined8 *)(lVar6 + 0x1b8);
    uVar3 = *(undefined8 *)(lVar6 + 0x1c0);
    _swift_release(uVar5);
    FUN_1000da368(uVar1,uVar3);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar4) {
LAB_10033513c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar2 = FUN_100335ae0;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x100335140 | FUN_100335140 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100335140(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  _CocoaArrayWrapper _Var3;
  ulong uVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  _DictionaryStorage *this;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ID IVar12;
  undefined *puVar13;
  long lVar14;
  Date self;
  NSString *pNVar15;
  NSDate *pNVar16;
  char *pcVar17;
  ulong uVar18;
  _StringGuts _Var19;
  char *pcVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long unaff_x22;
  ulong uVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String separator;
  
  lVar21 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar22 = *(long *)(unaff_x22 + 0x1f0);
  lVar9 = *(long *)(unaff_x22 + 0x1f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1c8);
  puVar7 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  *(undefined8 *)(puVar7 + 0x20) = 0x6d75736b63656863;
  *(undefined1 **)(puVar7 + 0x28) = &DAT_e800000000000000;
  puVar24 = (undefined8 *)(lVar9 + *(int *)(lVar22 + 0x3c));
  uVar27 = puVar24[1];
  *(undefined8 *)(puVar7 + 0x30) = *puVar24;
  *(undefined8 *)(puVar7 + 0x38) = uVar27;
  _swift_bridgeObjectRetain(uVar27);
  puVar8 = puVar7;
  FUN_1003c92b8();
  _swift_setDeallocating(puVar7);
  FUN_100005808(puVar7 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
  puVar7 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  *(undefined **)(unaff_x22 + 0x128) = puVar7;
  *(undefined **)(unaff_x22 + 0x110) = puVar8;
  lVar22 = unaff_x22 + 0x110;
  FUN_100328950(lVar22,0,uVar25);
  FUN_100004594(unaff_x22 + 0x110);
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar22 == 0) {
    uVar28 = 0;
    lVar22 = *(long *)(*(long *)(unaff_x22 + 0x1f8) +
                      (long)*(int *)(*(long *)(unaff_x22 + 0x1f0) + 0x24));
    uVar23 = *(ulong *)(lVar22 + 0x10);
    do {
      puVar24 = (undefined8 *)(lVar22 + 0x28 + uVar28 * 0x10);
      do {
        if (uVar23 == uVar28) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            lVar9 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var3.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              _Var3.unknown = puVar8;
            }
            lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
          }
          if (lVar9 == 0) goto LAB_1003354e0;
          uVar28 = 0;
          goto LAB_100335454;
        }
        if (*(ulong *)(lVar22 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1003354b8);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar27 = puVar24[-1];
        uVar25 = *puVar24;
        *(undefined8 *)(unaff_x22 + 0x70) = 0x696669746e656469;
        *(undefined8 *)(unaff_x22 + 0x78) = 0xea00000000007265;
        *(undefined8 *)(unaff_x22 + 0x80) = uVar27;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar25;
        this = (_DictionaryStorage *)&DAT_100fbfa48;
        FUN_1000037f0(&DAT_100fbfa48,&DAT_100c410c0);
        lVar9 = 1;
        Swift::_DictionaryStorage::_allocate(this,1);
        _swift_bridgeObjectRetain_n(uVar25,2);
        _swift_retain(lVar9);
        uVar11 = *(ulong *)(unaff_x22 + 0x70);
        uVar4 = *(ulong *)(unaff_x22 + 0x78);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x88);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar26);
        uVar10 = uVar11;
        uVar18 = uVar4;
        FUN_100071370();
        if ((uVar18 & 1) != 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1003354bc);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar14 = lVar9 + (uVar10 >> 6) * 8;
        *(ulong *)(lVar14 + 0x40) = *(ulong *)(lVar14 + 0x40) | 1L << (uVar10 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 0x10);
        *puVar1 = uVar11;
        puVar1[1] = uVar4;
        puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar10 * 0x10);
        *puVar2 = uVar27;
        puVar2[1] = uVar26;
        if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1003354c0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        puVar24 = puVar24 + 2;
        uVar28 = uVar28 + 1;
        uVar27 = *(undefined8 *)(unaff_x22 + 0x1c8);
        *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
        _swift_release(lVar9);
        FUN_100005808(unaff_x22 + 0x70,&DAT_100fbef70,&DAT_100c40b10);
        *(undefined **)(unaff_x22 + 0x148) = puVar7;
        *(long *)(unaff_x22 + 0x130) = lVar9;
        lVar9 = unaff_x22 + 0x130;
        FUN_100328bb4(lVar9,0,uVar27);
        _swift_bridgeObjectRelease(uVar25);
        FUN_100004594(unaff_x22 + 0x130);
      } while (lVar9 == 0);
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar11 = *(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      uVar4 = *(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x18);
      if (uVar4 >> 1 <= uVar11) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar4,uVar11 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar11,lVar9);
    } while( true );
  }
  goto LAB_1003358e8;
  while (uVar28 = uVar28 + 1, lVar14 != lVar9) {
LAB_100335454:
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1003354c8);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar11 = *(ulong *)(puVar8 + uVar28 * 8 + 0x20);
    }
    else {
      uVar11 = uVar28;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar28,(_ArrayBuffer)puVar8);
    }
    lVar14 = uVar28 + 1;
    if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1003354c4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    IVar12 = objc_stub::rawType(uVar11);
    if (IVar12 == 2) goto LAB_1003354e4;
  }
LAB_1003354e0:
  uVar11 = 0;
LAB_1003354e4:
  _swift_bridgeObjectRelease(puVar8);
  puVar24 = (undefined8 *)(lVar22 + 0x28);
  uVar28 = 0xffffffffffffffff;
  do {
    lVar9 = uVar28 - uVar23;
    if (lVar9 == -1) break;
    uVar28 = uVar28 + 1;
    if (*(ulong *)(lVar22 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100335adc);
      (*UNRECOVERED_JUMPTABLE)();
    }
    puVar2 = puVar24 + -1;
    _Var19.unknown = (undefined *)*puVar24;
    if ((undefined *)*puVar2 == (undefined *)0xd000000000000017 &&
        _Var19.unknown == (undefined *)0x8000000100da2350) break;
    puVar24 = puVar24 + 2;
    bVar6 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*puVar2,_Var19,(_StringComparisonResult)0x17);
  } while (!bVar6);
  lVar14 = *(long *)(unaff_x22 + 0x1f0);
  lVar5 = *(long *)(unaff_x22 + 0x1f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1c8);
  puVar7 = &DAT_100fc0278;
  FUN_1000037f0(&DAT_100fc0278,&DAT_100c42138);
  puVar8 = puVar7;
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 2;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  *(undefined8 *)(puVar8 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(puVar8 + 0x28) = 0x8000000100da1d40;
  puVar24 = (undefined8 *)(lVar5 + *(int *)(lVar14 + 0x28));
  uVar27 = puVar24[1];
  uVar26 = *puVar24;
  *(undefined8 *)(puVar8 + 0x38) = puVar24[1];
  *(undefined8 *)(puVar8 + 0x30) = uVar26;
  _swift_bridgeObjectRetain(uVar27);
  puVar13 = puVar8;
  FUN_1003c966c();
  _swift_setDeallocating(puVar8);
  FUN_100005808(puVar8 + 0x20,&DAT_100fc0280,&DAT_100c42140);
  puVar8 = &DAT_100fc0288;
  FUN_1000037f0(&DAT_100fc0288,&DAT_100c42148);
  *(undefined **)(unaff_x22 + 0x168) = puVar8;
  *(undefined **)(unaff_x22 + 0x150) = puVar13;
  lVar22 = unaff_x22 + 0x150;
  FUN_100328e18(lVar22,0,uVar25);
  FUN_100004594(unaff_x22 + 0x150);
  _swift_initStackObject(puVar7,unaff_x22 + 0xd0);
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  *(undefined8 *)(puVar7 + 0x20) = 0x696669746e656469;
  *(undefined8 *)(puVar7 + 0x28) = 0xea00000000007265;
  puVar24 = (undefined8 *)(lVar5 + *(int *)(lVar14 + 0x2c));
  uVar27 = puVar24[1];
  uVar26 = *puVar24;
  *(undefined8 *)(puVar7 + 0x38) = puVar24[1];
  *(undefined8 *)(puVar7 + 0x30) = uVar26;
  _swift_bridgeObjectRetain(uVar27);
  puVar13 = puVar7;
  FUN_1003c966c();
  _swift_setDeallocating(puVar7);
  FUN_100005808(puVar7 + 0x20,&DAT_100fc0280,&DAT_100c42140);
  *(undefined **)(unaff_x22 + 0x188) = puVar8;
  *(undefined **)(unaff_x22 + 0x170) = puVar13;
  lVar14 = unaff_x22 + 0x170;
  FUN_100328e30(lVar14,0,uVar25);
  FUN_100004594(unaff_x22 + 0x170);
  IVar12 = 0;
  FUN_1003214a8();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  self.unknown = (undefined *)objc_stub::initWithContext_(IVar12,uVar25);
  pNVar15 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setIdentifier_((ID)self.unknown,pNVar15);
  if (*(long *)(lVar5 + 0x18) == 0) {
    pNVar15 = (NSString *)0x0;
  }
  else {
    pNVar15 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  }
  objc_stub::setTitle_((ID)self.unknown,pNVar15);
  if (lVar9 == -1) {
    pNVar16 = (NSDate *)0x0;
  }
  else {
    pNVar16 = Foundation::Date::_bridgeToObjectiveC((Date)0x0);
  }
  lVar9 = *(long *)(unaff_x22 + 0x1f0);
  lVar5 = *(long *)(unaff_x22 + 0x1f8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1d0);
  objc_stub::setTimestamp_((ID)self.unknown,pNVar16);
  pNVar16 = Foundation::Date::_bridgeToObjectiveC(self);
  objc_stub::setCreatedAt_((ID)self.unknown,pNVar16);
  objc_stub::setDisplayOrderInPinboard_
            ((ID)self.unknown,*(undefined8 *)(lVar5 + *(int *)(lVar9 + 0x20)));
  objc_stub::setSourceApplication_((ID)self.unknown,lVar22);
  objc_stub::setDevice_((ID)self.unknown,lVar14);
  objc_stub::setList_((ID)self.unknown,uVar11);
  pNVar15 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setChecksum_((ID)self.unknown,pNVar15);
  uVar26 = *(undefined8 *)(lVar5 + *(int *)(lVar9 + 0x30));
  IVar12 = 0;
  FUN_10031b5e4();
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(uVar26);
  IVar12 = objc_stub::initWithContext_(IVar12,uVar27);
  FUN_10031a8e8(uVar26);
  objc_stub::setData_((ID)self.unknown,IVar12);
  objc_stub::setRawType_((ID)self.unknown,(ulong)*(byte *)(lVar5 + *(int *)(lVar9 + 0x34)));
  puVar7 = &DAT_100c40980;
  FUN_100011090(lVar5 + *(int *)(lVar9 + 0x38),uVar25,&DAT_100fbe6e0);
  FUN_10031ed94(uVar25);
  *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
  IVar12 = objc_stub::validateForInsert_((ID)self.unknown,unaff_x22 + 0x1a8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1a8);
  if ((int)IVar12 == 0) {
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1f8);
    IVar12 = *(ID *)(unaff_x22 + 0x1c8);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    pcVar17 = &DAT_100fbec98;
    FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
    _Var19.unknown = (undefined *)0x40;
    pcVar20 = (char *)0x7;
    _swift_allocObject();
    pcVar17[0x18] = '\x02';
    pcVar17[0x19] = '\0';
    pcVar17[0x1a] = '\0';
    pcVar17[0x1b] = '\0';
    pcVar17[0x1c] = '\0';
    pcVar17[0x1d] = '\0';
    pcVar17[0x1e] = '\0';
    pcVar17[0x1f] = '\0';
    pcVar17[0x10] = '\x01';
    pcVar17[0x11] = '\0';
    pcVar17[0x12] = '\0';
    pcVar17[0x13] = '\0';
    pcVar17[0x14] = '\0';
    pcVar17[0x15] = '\0';
    pcVar17[0x16] = '\0';
    pcVar17[0x17] = '\0';
    Swift::_StringGuts::grow(0x25,_Var19);
    SVar29.bridgeObject = (void *)0x8000000100da25c0;
    SVar29.str = (char *)0xd000000000000023;
    SVar31.bridgeObject = puVar7;
    SVar31.str = pcVar20;
    Swift::String::append(SVar29,SVar31);
    _swift_getErrorValue(uVar27,unaff_x22 + 0x1b0,unaff_x22 + 400);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(unaff_x22 + 400),*(undefined8 *)(unaff_x22 + 0x198));
    *(undefined **)(pcVar17 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar17[0x20] = '\0';
    pcVar17[0x21] = '\0';
    pcVar17[0x22] = '\0';
    pcVar17[0x23] = '\0';
    pcVar17[0x24] = '\0';
    pcVar17[0x25] = '\0';
    pcVar17[0x26] = '\0';
    pcVar17[0x27] = '\0';
    pcVar17[0x28] = '\0';
    pcVar17[0x29] = '\0';
    pcVar17[0x2a] = '\0';
    pcVar17[0x2b] = '\0';
    pcVar17[0x2c] = '\0';
    pcVar17[0x2d] = '\0';
    pcVar17[0x2e] = '\0';
    pcVar17[0x2f] = -0x20;
    SVar30.bridgeObject = (void *)0x20;
    SVar30.str = pcVar17;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar30,separator);
    _swift_release(pcVar17);
    objc_stub::deleteObject_(IVar12,self.unknown);
    _swift_willThrow();
    FUN_10005241c(uVar25,FUN_10033ad1c);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1d0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar25);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar22 = *(long *)PTR____stack_chk_guard_100ea82f0;
    goto joined_r0x000100335acc;
  }
LAB_1003358e8:
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1d0);
  FUN_10005241c(uVar25,FUN_10033ad1c);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar26);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  lVar22 = *(long *)PTR____stack_chk_guard_100ea82f0;
joined_r0x000100335acc:
  if (lVar22 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x000100335960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100335ae0 | FUN_100335ae0 */

void FUN_100335ae0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  (**(code **)(*(long *)(unaff_x22 + 0x1e0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d8));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100335b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100335b70 | FUN_100335b70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100335d98) */

undefined8 FUN_100335b70(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  _ArrayBuffer self;
  NSPredicate *pNVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID self_00;
  ID self_01;
  long lVar7;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_80 [16];
  undefined *local_70;
  
  self.unknown = param_1;
  FUN_100329754();
  pNVar4 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar5 = &DAT_100fbeb40;
  FUN_1000037f0("%K == nil && %K == nil",&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar6 = puVar5;
  FUN_10030d9e0();
  *(undefined1 **)(puVar5 + 0x20) = &DAT_6d617473656d6974;
  *(undefined1 **)(puVar5 + 0x28) = &SUB_e900000000000070;
  *(undefined **)(puVar5 + 0x60) = puVar2;
  *(undefined **)(puVar5 + 0x68) = puVar6;
  *(undefined **)(puVar5 + 0x40) = puVar6;
  *(undefined8 *)(puVar5 + 0x48) = 0x7473696c;
  *(undefined1 **)(puVar5 + 0x50) = &DAT_e400000000000000;
  pNVar4 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar4);
  objc_stub::setPredicate_((ID)self.unknown,pNVar4);
  FUN_1003214a8(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 == 0) {
    if ((ulong)self.unknown >> 0x3e == 0) {
      lVar8 = *(long *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = self.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < self.unknown) {
        _Var1.unknown = self.unknown;
      }
      lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar8 == 0) {
      _swift_bridgeObjectRelease(self.unknown);
    }
    else {
      uVar9 = 0;
      do {
        if (((ulong)self.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100335d58);
            (*pcVar3)();
          }
          self_00 = *(ID *)(self.unknown + uVar9 * 8 + 0x20);
        }
        else {
          self_00 = uVar9;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar9,self);
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100335d40);
          (*pcVar3)();
        }
        lVar7 = uVar9 + 1;
        self_01 = objc_stub::managedObjectContext(self_00);
        objc_stub::deleteObject_(self_01,self_00);
        uVar9 = uVar9 + 1;
      } while (lVar7 != lVar8);
      _swift_bridgeObjectRelease(self.unknown);
    }
  }
  else {
    _swift_errorRelease();
  }
  local_70 = param_1;
  FUN_1002ff9c8(FUN_100308968,auStack_80);
  return 0;
}



/* Address: 0x100335dd0 | FUN_100335dd0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010033606c) */
/* WARNING: Removing unreachable block (ram,0x000100336270) */
/* WARNING: Removing unreachable block (ram,0x000100336510) */
/* WARNING: Removing unreachable block (ram,0x00010033610c) */
/* WARNING: Removing unreachable block (ram,0x000100335ee8) */
/* WARNING: Removing unreachable block (ram,0x0001003360b8) */
/* WARNING: Removing unreachable block (ram,0x000100336218) */
/* WARNING: Removing unreachable block (ram,0x000100336324) */
/* WARNING: Removing unreachable block (ram,0x000100336028) */
/* WARNING: Removing unreachable block (ram,0x00010033602c) */
/* WARNING: Removing unreachable block (ram,0x000100335f70) */
/* WARNING: Removing unreachable block (ram,0x000100336030) */
/* WARNING: Removing unreachable block (ram,0x00010033617c) */
/* WARNING: Removing unreachable block (ram,0x000100335f80) */

void FUN_100335dd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  Date DVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Data ofClass;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x21;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  long local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long local_a0;
  long local_98;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar3 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = ((long)&local_130 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar5 = 0x6d75736b63656863;
  puVar8 = &DAT_e800000000000000;
  FUN_100332c98();
  if (unaff_x21 == 0) {
    uVar6 = 0x656c746974;
    puVar9 = &DAT_e500000000000000;
    local_d8 = param_3;
    local_d0 = uVar5;
    local_c8 = DVar4.unknown;
    local_c0 = lVar10;
    local_b8 = puVar8;
    local_a8 = (undefined1 *)((long)&local_130 - extraout_x8);
    local_a0 = lVar10 - extraout_x12;
    local_98 = lVar11;
    FUN_100333780();
    puVar8 = local_a8;
    local_b0 = puVar9;
    FUN_1003339ec(local_a0,&DAT_6d617473656d6974,&SUB_e900000000000070);
    FUN_1003339ec(local_c0,0x4164657461657263,0xe900000000000074);
    uVar5 = 0xd000000000000016;
    FUN_100333538(0xd000000000000016,0x8000000100da22c0,FUN_10033af30,FUN_1003020e0,
                  PTR___type_metadata_for_Swift_Int64_100eadc00);
    uVar7 = 0x737473696c;
    local_e0 = uVar5;
    FUN_100333dac(0x737473696c,&DAT_e500000000000000);
    uVar5 = uVar7;
    FUN_100332678();
    local_110 = uVar6;
    local_f0 = uVar5;
    _swift_bridgeObjectRelease(uVar7);
    lVar10 = -0x2fffffffffffffef;
    FUN_100334274(0xd000000000000011,0x8000000100da22a0);
    if (lVar10 == 0) {
      local_118 = 0;
      local_100 = 0;
      local_f8 = 0;
    }
    else {
      uVar6 = 0x8000000100da1d40;
      uVar5 = 0xd000000000000010;
      local_100 = lVar10;
      FUN_100333780();
      local_118 = uVar5;
      local_f8 = uVar6;
    }
    lVar10 = 0x656369766564;
    FUN_100334274(0x656369766564,&DAT_e600000000000000);
    if (lVar10 == 0) {
      local_120 = 0;
      local_108 = 0;
      local_e8 = 0;
    }
    else {
      uVar5 = 0x696669746e656469;
      uVar6 = 0xea00000000007265;
      local_e8 = lVar10;
      FUN_100333780();
      local_120 = uVar5;
      local_108 = uVar6;
    }
    FUN_100334010(0x61746164,&DAT_e400000000000000,FUN_10033aea4,FUN_100301804,&DAT_100fc0660,
                  &PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    FUN_100332eec(&local_78,0x616f626574736170,0xef736d6574496472);
    local_128 = uStack_70;
    FUN_1000f3588(0);
    FUN_10000ec2c(0,&DAT_100fc0290,&PTR__OBJC_CLASS___NSKeyedUnarchiver_100f8dba8);
    ofClass.unknown = (undefined *)0x0;
    FUN_100381740();
    local_130 = local_78;
    (extension_Foundation)::__C::NSKeyedUnarchiver::_unarchivedArrayOfObjects(ofClass);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ofClass.unknown != (undefined *)0x0) {
      puVar3 = ofClass.unknown;
    }
    FUN_1003366a0(puVar8,param_2);
    local_d8 = CONCAT44(local_d8._4_4_,(int)puVar8);
    puVar13 = puVar3;
    FUN_1003216bc();
    if (puVar8 == (undefined1 *)0x0) {
      FUN_10003bf2c(local_130,local_128);
      puVar8 = &DAT_e800000000000000;
      puVar13 = (undefined *)0x3030303030303030;
    }
    else {
      FUN_10003bf2c(local_130,local_128);
    }
    lVar10 = 0;
    FUN_10033ad1c();
    puVar2 = local_c8;
    pcVar12 = *(code **)(local_98 + 0x20);
    (*pcVar12)((long)param_1 + (long)*(int *)(lVar10 + 0x18),local_a0,local_c8);
    (*pcVar12)((long)param_1 + (long)*(int *)(lVar10 + 0x1c),local_c0,puVar2);
    FUN_10019ffdc(local_a8,(long)param_1 + (long)*(int *)(lVar10 + 0x38),&DAT_100fbe6e0,
                  &DAT_100c40980);
    *param_1 = local_d0;
    param_1[1] = local_b8;
    param_1[2] = local_110;
    param_1[3] = local_b0;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20)) = local_e0;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24)) = local_f0;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28));
    *puVar1 = local_118;
    puVar1[1] = local_f8;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c));
    *puVar1 = local_120;
    puVar1[1] = local_108;
    *(undefined **)((long)param_1 + (long)*(int *)(lVar10 + 0x30)) = puVar3;
    *(char *)((long)param_1 + (long)*(int *)(lVar10 + 0x34)) = (char)local_d8;
    param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x3c));
    *param_1 = puVar13;
    param_1[1] = puVar8;
  }
  return;
}



/* Address: 0x1003366a0 | FUN_1003366a0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100336cdc) */
/* WARNING: Removing unreachable block (ram,0x000100336ad0) */
/* WARNING: Removing unreachable block (ram,0x000100336a98) */
/* WARNING: Removing unreachable block (ram,0x000100336e40) */

void FUN_1003366a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ID param_4)

{
  ID *pIVar1;
  ulong uVar2;
  String SVar3;
  undefined8 *puVar4;
  bool bVar5;
  URL UVar6;
  long lVar7;
  ID IVar8;
  char *pcVar9;
  undefined8 uVar10;
  NSAttributedString *pNVar11;
  undefined *puVar12;
  ID IVar13;
  undefined *puVar14;
  undefined *puVar15;
  void *pvVar16;
  undefined1 *puVar17;
  _StringComparisonResult expecting;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  long extraout_x8_02;
  ID IVar19;
  long unaff_x21;
  undefined8 *puVar20;
  long lVar21;
  undefined8 extraout_d0;
  String SVar22;
  undefined8 *local_f0 [2];
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  ID local_b8;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  UVar6 = Foundation::URL::typeMetadataAccessor();
  local_d0 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  lVar18 = (long)local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_c8 = lVar18;
  FUN_1003187b8();
  local_d8 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar18 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar18;
  local_c0 = (undefined *)Foundation::AttributedString::typeMetadataAccessor();
  lVar21 = *(long *)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  lVar18 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_10031a030();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar20 = (undefined8 *)(lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  IVar8 = objc_stub::entity(param_4);
  IVar8 = objc_stub::name(IVar8);
  if (IVar8 == 0) {
LAB_100336dcc:
    lVar7 = 0;
    FUN_100317b10();
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_3,1,1,lVar7);
  }
  else {
    IVar8 = 0xeb00000000746570;
    SVar3.bridgeObject = (void *)0xeb00000000746570;
    SVar3.str = (char *)0x70696e5374786554;
    uVar10 = extraout_d0;
    local_f0[0] = (undefined8 *)UVar6;
    local_f0[1] = param_3;
    local_b8 = param_4;
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar16 = SVar22.bridgeObject;
    pcVar9 = SVar22.str;
    if (SVar22 != SVar3) {
      expecting.value = SVar22.str._0_1_;
      bVar5 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x70696e5374786554,(_StringGuts)0xeb00000000746570,expecting);
      if (!bVar5) {
        if (((pcVar9 == (char *)0x70696e53656c6946) && (pvVar16 == (void *)0xeb00000000746570)) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x70696e53656c6946,(_StringGuts)0xeb00000000746570,
                               expecting), IVar13 = local_b8, bVar5)) {
          _swift_bridgeObjectRelease(pvVar16);
          uVar10 = 0x68746170;
          puVar17 = &DAT_e400000000000000;
          FUN_100333780();
          if (unaff_x21 == 0) {
            puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
            local_90 = uVar10;
            puStack_88 = puVar17;
            if (puVar17 != (undefined1 *)0x0) {
              _swift_bridgeObjectRetain(puVar17);
              puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
              puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar14 = puVar15;
              if (((ulong)puVar12 & 1) == 0) {
                puVar14 = (undefined *)0x0;
                FUN_10037f834(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
              }
              uVar2 = *(ulong *)(puVar14 + 0x10);
              puVar15 = puVar14;
              if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar2) {
                puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
                FUN_10037f834(puVar15,uVar2 + 1,1,puVar14);
              }
              *(ulong *)(puVar15 + 0x10) = uVar2 + 1;
              *(undefined8 *)(puVar15 + uVar2 * 0x10 + 0x20) = uVar10;
              *(undefined1 **)(puVar15 + uVar2 * 0x10 + 0x28) = puVar17;
            }
          }
          else {
            _swift_errorRelease(unaff_x21);
            local_90 = 0;
            puStack_88 = (undefined1 *)0x0;
            puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          FUN_100005808(&local_90,&DAT_100fbf830,&DAT_100c40fb8);
          uVar10 = 0x7a69536c61746f74;
          FUN_100333538(0x7a69536c61746f74,0xe900000000000065,FUN_10033adc4,FUN_100301500,
                        PTR___type_metadata_for_Swift_Int_100eac6f8);
          puVar20 = local_f0[1];
          FUN_1003329fc(&local_80,0x77656976657270,&DAT_e700000000000000);
          *puVar20 = puVar15;
          puVar20[1] = uVar10;
          puVar20[3] = uStack_78;
          puVar20[2] = local_80;
          lVar7 = 0;
          FUN_100317b10();
          _swift_storeEnumTagMultiPayload(puVar20,lVar7,4);
          (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar20,0,1,lVar7);
          return;
        }
        IVar19 = 0xec00000074657070;
        if (((pcVar9 == (char *)0x696e536567616d49) && (pvVar16 == (void *)0xec00000074657070)) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x696e536567616d49,(_StringGuts)0xec00000074657070,
                               expecting), bVar5)) {
          _swift_bridgeObjectRelease(pvVar16);
          FUN_100332c98(0x7a69536567616d69,0xe900000000000065);
          if (unaff_x21 != 0) {
            return;
          }
          FUN_1000f3df4();
          FUN_100332eec(&local_80,0x77656976657270,&DAT_e700000000000000);
          puVar20 = local_f0[1];
          *local_f0[1] = uVar10;
          local_f0[1][1] = param_2;
          local_f0[1][3] = uStack_78;
          local_f0[1][2] = local_80;
          lVar7 = 0;
          FUN_100317b10();
          _swift_storeEnumTagMultiPayload(puVar20,lVar7,2);
          (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar20,0,1,lVar7);
          return;
        }
        if (((pcVar9 == (char *)0x70696e536b6e694c) && (pvVar16 == (void *)0xeb00000000746570)) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x70696e536b6e694c,(_StringGuts)0xeb00000000746570,
                               expecting), IVar19 = IVar8, bVar5)) {
          _swift_bridgeObjectRelease(pvVar16);
          FUN_100336f3c();
          FUN_10033314c(local_c8,0x6c7275,0xe300000000000000);
          if (unaff_x21 != 0) {
            FUN_10003bf18(IVar13,IVar19);
            return;
          }
          uVar10 = 0x656d614e6c7275;
          puVar17 = &DAT_e700000000000000;
          FUN_100333780();
          puVar20 = local_f0[0];
          FUN_1003329fc(&local_80,0x6e6f6369,&DAT_e400000000000000);
          lVar7 = local_e0;
          (**(code **)(local_d0 + 0x20))(local_e0,local_c8,puVar20);
          puVar4 = local_f0[1];
          puVar20 = (undefined8 *)(lVar7 + *(int *)(local_d8 + 0x14));
          *puVar20 = uVar10;
          puVar20[1] = puVar17;
          puVar20 = (undefined8 *)(lVar7 + *(int *)(local_d8 + 0x18));
          *puVar20 = local_80;
          puVar20[1] = uStack_78;
          pIVar1 = (ID *)(lVar7 + *(int *)(local_d8 + 0x1c));
          *pIVar1 = IVar13;
          pIVar1[1] = IVar19;
          FUN_1000523d8(lVar7,local_f0[1],FUN_1003187b8);
          lVar7 = 0;
          FUN_100317b10();
          _swift_storeEnumTagMultiPayload(puVar4,lVar7,1);
          (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar4,0,1,lVar7);
          return;
        }
        if ((pcVar9 == (char *)0x696e53726f6c6f43) && (pvVar16 == (void *)0xec00000074657070)) {
          _swift_bridgeObjectRelease(0xec00000074657070);
LAB_100336d4c:
          puVar20 = local_f0[1];
          uVar10 = 0x726f6c6f63;
          FUN_100333538(0x726f6c6f63,&DAT_e500000000000000,FUN_10033ae64,FUN_100300224,
                        PTR___type_metadata_for_Swift_UInt64_100eade90);
          if (unaff_x21 != 0) {
            return;
          }
          *puVar20 = uVar10;
          lVar7 = 0;
          FUN_100317b10();
          _swift_storeEnumTagMultiPayload(puVar20,lVar7,3);
          (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar20,0,1,lVar7);
          return;
        }
        bVar5 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x696e53726f6c6f43,(_StringGuts)0xec00000074657070,expecting
                          );
        _swift_bridgeObjectRelease(pvVar16);
        param_3 = local_f0[1];
        if (bVar5) goto LAB_100336d4c;
        goto LAB_100336dcc;
      }
    }
    _swift_bridgeObjectRelease(pvVar16);
    uVar10 = 0x676e654c74786574;
    FUN_100333538(0x676e654c74786574,0xea00000000006874,FUN_10033adc4,FUN_100301500,
                  PTR___type_metadata_for_Swift_Int_100eac6f8);
    if (unaff_x21 == 0) {
      pNVar11 = (NSAttributedString *)0x77656976657270;
      FUN_100334010(0x77656976657270,&DAT_e700000000000000,FUN_10033ad98,FUN_10030120c,
                    &DAT_100fc1aa0,&PTR__OBJC_CLASS___NSAttributedString_100f8d688);
      Foundation::AttributedString::init(pNVar11);
      *puVar20 = uVar10;
      (**(code **)(lVar21 + 0x20))((long)puVar20 + (long)*(int *)(lVar7 + 0x14),lVar18,local_c0);
      puVar4 = local_f0[1];
      FUN_1000523d8(puVar20,local_f0[1],FUN_10031a030);
      lVar7 = 0;
      FUN_100317b10();
      _swift_storeEnumTagMultiPayload(puVar4,lVar7,0);
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar4,0,1,lVar7);
    }
  }
  return;
}



/* Address: 0x100336f3c | FUN_100336f3c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100336f78) */

undefined1  [16] FUN_100336f3c(void)

{
  NSData *pNVar1;
  ID IVar2;
  Data DVar3;
  ulong uVar4;
  undefined *self;
  undefined1 auVar5 [16];
  Data local_50;
  ulong uStack_48;
  
  FUN_1003329fc(&local_50,0x6567616d69,&DAT_e500000000000000);
  if (uStack_48 >> 0x3c < 0xf) {
    self = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    FUN_1001037b4(local_50.unknown,uStack_48);
    FUN_1001037b4(local_50.unknown,uStack_48);
    pNVar1 = Foundation::Data::_bridgeToObjectiveC(local_50);
    IVar2 = objc_stub::initWithData_((ID)self,pNVar1);
    FUN_10003bf18(local_50.unknown,uStack_48);
    DVar3.unknown = local_50.unknown;
    uVar4 = uStack_48;
    FUN_10003bf18(local_50.unknown,uStack_48);
    if (IVar2 != 0) {
      FUN_1003c9f3c(0x4080000000000000,0x4080000000000000);
      if (DVar3.unknown == (undefined *)0x0) {
        FUN_10003bf18(local_50.unknown,uStack_48);
        local_50.unknown = (undefined *)0x0;
        uStack_48 = 0xf000000000000000;
      }
      else {
        FUN_1003c89c8();
        FUN_10003bf18(local_50.unknown,uStack_48);
        local_50.unknown = DVar3.unknown;
        uStack_48 = uVar4;
      }
    }
  }
  auVar5._8_8_ = uStack_48;
  auVar5._0_8_ = local_50.unknown;
  return auVar5;
}



/* Address: 0x1003370a4 | FUN_1003370a4 */

undefined * FUN_1003370a4(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100337194);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = &DAT_100fbe4e8;
      FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
      _swift_allocObject();
      puVar5 = puVar4;
      _malloc_size();
      puVar1 = puVar5 + -0x19;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(ulong *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100337190);
      (*pcVar3)();
    }
    uVar6 = 0;
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    _swift_arrayInitWithCopy(puVar4 + 0x20,param_2 + param_3 * 8,lVar2,uVar6);
  }
  return puVar4;
}



/* Address: 0x100337194 | FUN_100337194 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100337194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  ScheduledTaskType SVar2;
  undefined7 extraout_var;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 unaff_x20;
  long *plVar8;
  long unaff_x22;
  long lVar9;
  long lVar3;
  
  *(undefined8 *)(unaff_x22 + 0x228) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x220) = param_5;
  *(undefined8 *)(unaff_x22 + 0x218) = param_4;
  *(undefined8 *)(unaff_x22 + 0x210) = param_3;
  *(undefined8 *)(unaff_x22 + 0x208) = param_2;
  *(undefined8 *)(unaff_x22 + 0x200) = param_1;
  SVar2 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  lVar3 = CONCAT71(extraout_var,SVar2.value);
  *(long *)(unaff_x22 + 0x230) = lVar3;
  lVar9 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x238) = lVar9;
  uVar5 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 600) = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar5;
  puVar6 = &DAT_100ecbae0;
  _swift_allocObject(&DAT_100ecbae0,0x18,7);
  *(undefined **)(unaff_x22 + 0x268) = puVar6;
  *(undefined8 *)(puVar6 + 0x10) = param_3;
  uVar1 = *(undefined4 *)
           PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
  ;
  *(undefined4 *)(unaff_x22 + 0xa4) = uVar1;
  pcVar7 = *(code **)(lVar9 + 0x68);
  *(code **)(unaff_x22 + 0x270) = pcVar7;
  (*pcVar7)(uVar5,uVar1,lVar3);
  plVar8 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x278) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1003372e0;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform
            ((ScheduledTaskType)((char)unaff_x22 + -0x48));
  return;
}



/* Address: 0x1003372e0 | FUN_1003372e0 */

void FUN_1003372e0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0x280) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x278));
  uVar2 = *(undefined8 *)(lVar5 + 0x268);
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar5 + 0x208);
    uVar4 = *(undefined8 *)(lVar5 + 0x200);
    pcVar1 = *(code **)(*(long *)(lVar5 + 0x238) + 8);
    *(code **)(lVar5 + 0x288) = pcVar1;
    (*pcVar1)(*(undefined8 *)(lVar5 + 0x260),*(undefined8 *)(lVar5 + 0x230));
    _swift_release(uVar2);
    FUN_1000da368();
    *(undefined8 *)(lVar5 + 0x290) = uVar4;
    *(undefined8 *)(lVar5 + 0x298) = uVar3;
    pcVar1 = FUN_1003373b4;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x208);
    uVar4 = *(undefined8 *)(lVar5 + 0x200);
    _swift_release(uVar2);
    FUN_1000da368(uVar4,uVar3);
    pcVar1 = FUN_100339f34;
  }
  _swift_task_switch(pcVar1,uVar4,uVar3);
  return;
}



/* Address: 0x1003373b4 | FUN_1003373b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003373b4(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  
  lVar6 = *(long *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x1b8);
  FUN_1000f3588();
  puVar4 = &DAT_100ecbb08;
  _swift_allocObject(&DAT_100ecbb08,0x18,7);
  *(undefined **)(unaff_x22 + 0x2a8) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  lVar3 = _TtC9PasteCore18V5MigrationManager::persistentStack;
  lVar2 = _TtC9PasteCore18V5MigrationManager::telemetry;
  lVar7 = _TtC9PasteCore18V5MigrationManager::errors;
  *(long *)(unaff_x22 + 0x2b0) = _TtC9PasteCore18V5MigrationManager::errors;
  *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(lVar6 + lVar3);
  *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(lVar6 + lVar2);
  _swift_beginAccess(puVar4 + 0x10,unaff_x22 + 200,1,0);
  _swift_beginAccess(lVar6 + lVar7,unaff_x22 + 0xe0,0,0);
  *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
  lVar7 = *(long *)(unaff_x22 + 0x2a8);
  if (*(long *)(lVar7 + 0x10) < *(long *)(unaff_x22 + 0x2a0)) {
    pcVar11 = *(code **)(unaff_x22 + 0x270);
    uVar1 = *(undefined4 *)(unaff_x22 + 0xa4);
    uVar8 = *(undefined8 *)(unaff_x22 + 600);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
    puVar4 = &DAT_100ecbb58;
    _swift_allocObject(&DAT_100ecbb58,0x28,7);
    *(undefined **)(unaff_x22 + 0x2d0) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = 0x19;
    *(long *)(puVar4 + 0x18) = lVar7;
    *(undefined8 *)(puVar4 + 0x20) = uVar10;
    (*pcVar11)(uVar8,uVar1,uVar9);
    plVar5 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
    _swift_retain(lVar7);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x2d8) = plVar5;
    FUN_1000037f0(&DAT_100fc0228,&DAT_100c42128);
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1003375e0;
    plVar5 = (long *)(unaff_x22 + 0x1e0);
  }
  else {
    pcVar11 = *(code **)(unaff_x22 + 0x270);
    uVar1 = *(undefined4 *)(unaff_x22 + 0xa4);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x218);
    puVar4 = &DAT_100ecbb30;
    _swift_allocObject(&DAT_100ecbb30,0x18,7);
    *(undefined **)(unaff_x22 + 0x398) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar10;
    (*pcVar11)(uVar8,uVar1,uVar9);
    plVar5 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3a0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100339e24;
  }
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar5);
  return;
}



/* Address: 0x1003375e0 | FUN_1003375e0 */

void FUN_1003375e0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x2e0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x2d8));
  uVar3 = *(undefined8 *)(lVar4 + 0x2d0);
  if (unaff_x20 == 0) {
    (**(code **)(lVar4 + 0x288))(*(undefined8 *)(lVar4 + 600),*(undefined8 *)(lVar4 + 0x230));
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x298);
    uVar3 = *(undefined8 *)(lVar4 + 0x290);
    pcVar1 = FUN_100337670;
  }
  else {
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x298);
    uVar3 = *(undefined8 *)(lVar4 + 0x290);
    pcVar1 = FUN_100339fbc;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100337670 | FUN_100337670 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100337670(void)

{
  undefined *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined *puVar6;
  __int64 _Var7;
  long lVar8;
  __ContiguousArrayStorageBase *p_Var9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  char *pcVar13;
  ID IVar14;
  CancellationError CVar15;
  _ArrayBuffer _Var16;
  _StringGuts _Var17;
  char *pcVar18;
  void *in_x3;
  _CocoaArrayWrapper _Var19;
  long lVar20;
  ulong uVar21;
  _SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
  _Var22;
  ulong uVar23;
  long lVar24;
  long unaff_x22;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String separator;
  
  puVar6 = *(undefined **)(unaff_x22 + 0x1e0);
  *(undefined **)(unaff_x22 + 0x2e8) = puVar6;
  if ((ulong)puVar6 >> 0x3e == 0) {
    _Var19.unknown = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
    if (_Var19.unknown != (undefined *)0x0) {
LAB_1003376b0:
      *(undefined **)(unaff_x22 + 0x2f0) = _Var19.unknown;
      uVar28 = *(undefined8 *)(unaff_x22 + 0x2c8);
      *(undefined8 *)(unaff_x22 + 0x2f8) = 5;
      *(undefined1 *)(unaff_x22 + 0xa1) = 0;
      if ((undefined *)0x4 < _Var19.unknown) {
        _Var19.unknown = (undefined *)0x5;
      }
      if ((ulong)puVar6 >> 0x3e != 0) {
        _Var2.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          _Var2.unknown = puVar6;
        }
        _Var7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        if (_Var7 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100337e24);
          (*pcVar5)();
        }
        puVar6 = *(undefined **)(unaff_x22 + 0x2e8);
      }
      if ((ulong)puVar6 >> 0x3e == 0) {
        lVar8 = *(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          _Var2.unknown = puVar6;
        }
        lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      if (lVar8 < (long)_Var19.unknown) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100337db4);
        (*pcVar5)();
      }
      uVar23 = *(ulong *)(unaff_x22 + 0x2e8);
      if ((uVar23 & 0xc000000000000001) == 0) {
        _swift_bridgeObjectRetain(uVar23);
        if (uVar23 >> 0x3e != 0) goto LAB_100337810;
LAB_100337774:
        uVar21 = 0;
        in_x3 = (void *)((long)_Var19.unknown << 1);
        _Var22.unknown = (undefined *)(uVar23 & 0xffffffffffffff8);
        _Var19.unknown = _Var22.unknown + 0x20;
LAB_10033778c:
        p_Var9 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
        puVar6 = _Var22.unknown;
        _swift_unknownObjectRetain_n(_Var22.unknown,2);
        _swift_dynamicCastClass();
        if (puVar6 == (undefined *)0x0) {
          _swift_unknownObjectRelease(_Var22.unknown);
          puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        lVar29 = *(long *)(puVar6 + 0x10);
        _swift_release();
        uVar23 = (ulong)in_x3 >> 1;
        lVar8 = uVar23 - uVar21;
        if (SBORROW8(uVar23,uVar21)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100337e28);
          (*pcVar5)();
        }
        if (lVar29 != lVar8) {
          _swift_unknownObjectRelease();
          goto LAB_100337854;
        }
        _Var19.unknown = _Var22.unknown;
        _swift_dynamicCastClass(_Var22.unknown,p_Var9);
        _swift_unknownObjectRelease(_Var22.unknown);
        puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (_Var19.unknown != (undefined *)0x0) goto LAB_1003378f4;
      }
      else {
        FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
        _swift_bridgeObjectRetain(uVar23);
        puVar6 = (undefined *)0x0;
        do {
          puVar1 = puVar6 + 1;
          Swift::_ArrayBuffer::_typeCheckSlowPath
                    ((__int64)puVar6,(_ArrayBuffer)*(undefined **)(unaff_x22 + 0x2e8));
          puVar6 = puVar1;
        } while (_Var19.unknown != puVar1);
        uVar23 = *(ulong *)(unaff_x22 + 0x2e8);
        if (uVar23 >> 0x3e == 0) goto LAB_100337774;
LAB_100337810:
        _swift_bridgeObjectRelease(uVar23);
        uVar21 = uVar23 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar23) {
          uVar21 = uVar23;
        }
        _Var22 = Swift::_CocoaArrayWrapper::_get_subscript((Range<__int64>)0x0,_Var19);
        if (((ulong)in_x3 & 1) != 0) goto LAB_10033778c;
        uVar23 = (ulong)in_x3 >> 1;
        lVar8 = uVar23 - uVar21;
        if (SBORROW8(uVar23,uVar21)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100337e34);
          (*pcVar5)();
        }
LAB_100337854:
        puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (lVar8 != 0) {
          if (0 < lVar8) {
            puVar6 = &DAT_100fbe4e8;
            FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
            _swift_allocObject();
            puVar10 = puVar6;
            _malloc_size();
            puVar1 = puVar10 + -0x19;
            if (0x1f < (long)puVar10) {
              puVar1 = puVar10 + -0x20;
            }
            *(long *)(puVar6 + 0x10) = lVar8;
            *(ulong *)(puVar6 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
          }
          if (uVar21 == uVar23) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100337a2c);
            (*pcVar5)();
          }
          uVar11 = 0;
          FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
          _swift_arrayInitWithCopy(puVar6 + 0x20,_Var19.unknown + uVar21 * 8,lVar8,uVar11);
        }
      }
      _Var19.unknown = puVar6;
      _swift_unknownObjectRelease(_Var22.unknown);
LAB_1003378f4:
      *(undefined **)(unaff_x22 + 0x300) = _Var19.unknown;
      FUN_1000da768(unaff_x22 + 0x38);
      IVar14 = *(ID *)(unaff_x22 + 0x50);
      lVar8 = *(long *)(unaff_x22 + 0x58);
      FUN_100004640(unaff_x22 + 0x38,IVar14);
      (**(code **)(lVar8 + 0x18))(IVar14,lVar8);
      *(ID *)(unaff_x22 + 0x308) = IVar14;
      FUN_100004594(unaff_x22 + 0x38);
      objc_stub::setUndoManager_(IVar14,0);
      objc_stub::setStalenessInterval_(IVar14,0);
      objc_stub::setMergePolicy_
                (IVar14,*(undefined8 *)PTR__NSMergeByPropertyObjectTrumpMergePolicy_100ea9a00);
      if (((long)_Var19.unknown < 0) || (((ulong)_Var19.unknown >> 0x3e & 1) != 0)) {
        lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var19);
        *(long *)(unaff_x22 + 0x310) = lVar8;
      }
      else {
        lVar8 = *(long *)(_Var19.unknown + 0x10);
        *(long *)(unaff_x22 + 0x310) = lVar8;
      }
      if (lVar8 != 0) {
        *(undefined1 *)(unaff_x22 + 0xa2) = 0;
        *(undefined8 *)(unaff_x22 + 0x318) = uVar28;
        _Var16.unknown = *(undefined **)(unaff_x22 + 0x300);
        if (((ulong)_Var16.unknown & 0xc000000000000001) == 0) {
          if (*(long *)(_Var16.unknown + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100337e38);
            (*pcVar5)();
          }
          uVar28 = *(undefined8 *)(_Var16.unknown + 0x20);
        }
        else {
          uVar28 = 0;
          Swift::_ArrayBuffer::__getElementSlowPath(0,_Var16);
        }
        *(undefined8 *)(unaff_x22 + 800) = uVar28;
        *(undefined8 *)(unaff_x22 + 0x328) = 1;
        uVar23 = *(ulong *)(unaff_x22 + 0x208);
        plVar12 = (long *)0x220;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x330) = plVar12;
        *plVar12 = unaff_x22;
        plVar12[1] = (long)FUN_100337fd8;
        FUN_100334ea8(*(undefined8 *)(unaff_x22 + 0x200),uVar23 & 0xcfffffffffffffff,uVar28,
                      *(undefined8 *)(unaff_x22 + 0x210),*(undefined8 *)(unaff_x22 + 0x308));
        return;
      }
      *(undefined8 *)(unaff_x22 + 0x358) = uVar28;
      _Var19.unknown = *(undefined **)(unaff_x22 + 0x300);
      if (((long)_Var19.unknown < 0) || (((ulong)_Var19.unknown >> 0x3e & 1) != 0)) {
        _Var7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var19);
        _Var19.unknown = *(undefined **)(unaff_x22 + 0x300);
      }
      else {
        _Var7 = *(__int64 *)(_Var19.unknown + 0x10);
      }
      *(__int64 *)(unaff_x22 + 0x360) = _Var7;
      _swift_release(_Var19.unknown);
      _swift_task_switch(FUN_100339060,0,0);
      return;
    }
LAB_100337cf8:
    _swift_bridgeObjectRelease(puVar6);
  }
  else {
    _Var19.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      _Var19.unknown = puVar6;
    }
    _Var7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var19);
    if (_Var7 == 0) goto LAB_100337cf8;
    _Var19.unknown = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var19);
    puVar6 = *(undefined **)(unaff_x22 + 0x2e8);
    if (0 < (long)_Var19.unknown) goto LAB_1003376b0;
    *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x2c8);
    lVar8 = *(long *)(unaff_x22 + 0x2a8);
    _swift_bridgeObjectRelease();
    lVar29 = *(long *)(lVar8 + 0x10);
    lVar8 = lVar29 + 0x19;
    if (SCARRY8(lVar29,0x19)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100337fd8);
      (*pcVar5)();
    }
    lVar29 = *(long *)(unaff_x22 + 0x2a0);
    *(long *)(*(long *)(unaff_x22 + 0x2a8) + 0x10) = lVar8;
    if ((lVar8 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8U >> 2 | lVar8 * -0x70a3d70a3d70a3d7 << 0x3e
        ) < 0x28f5c28f5c28f5d || lVar29 <= lVar8) {
      lVar20 = *(long *)(unaff_x22 + 0x2b0);
      lVar24 = *(long *)(unaff_x22 + 0x2a0);
      pcVar5 = *(code **)(unaff_x22 + 0x270);
      uVar4 = *(undefined4 *)(unaff_x22 + 0xa4);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x248);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
      lVar25 = *(long *)(unaff_x22 + 0x228);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar29 = lVar24;
      if (lVar8 <= lVar24) {
        lVar29 = lVar8;
      }
      pcVar13 = &DAT_100fbec98;
      FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
      _Var17.unknown = (undefined *)0x40;
      pcVar18 = (char *)0x7;
      _swift_allocObject();
      pcVar13[0x18] = '\x02';
      pcVar13[0x19] = '\0';
      pcVar13[0x1a] = '\0';
      pcVar13[0x1b] = '\0';
      pcVar13[0x1c] = '\0';
      pcVar13[0x1d] = '\0';
      pcVar13[0x1e] = '\0';
      pcVar13[0x1f] = '\0';
      pcVar13[0x10] = '\x01';
      pcVar13[0x11] = '\0';
      pcVar13[0x12] = '\0';
      pcVar13[0x13] = '\0';
      pcVar13[0x14] = '\0';
      pcVar13[0x15] = '\0';
      pcVar13[0x16] = '\0';
      pcVar13[0x17] = '\0';
      *(undefined8 *)(unaff_x22 + 0x158) = 0;
      *(undefined8 *)(unaff_x22 + 0x160) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x35,_Var17);
      *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x158);
      *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x160);
      SVar30.bridgeObject = (void *)0x8000000100da2580;
      SVar30.str = (char *)0xd000000000000014;
      SVar34.bridgeObject = in_x3;
      SVar34.str = pcVar18;
      Swift::String::append(SVar30,SVar34);
      *(long *)(unaff_x22 + 0x1e8) = lVar29;
      SVar30 = Swift::CustomStringConvertible::get_description();
      SVar35.bridgeObject = in_x3;
      SVar35.str = pcVar18;
      Swift::String::append(SVar30,SVar35);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      SVar31.bridgeObject = (void *)0xe100000000000000;
      SVar31.str = (char *)0x2f;
      SVar36.bridgeObject = in_x3;
      SVar36.str = pcVar18;
      Swift::String::append(SVar31,SVar36);
      *(long *)(unaff_x22 + 0x1f0) = lVar24;
      SVar30 = Swift::CustomStringConvertible::get_description();
      SVar37.bridgeObject = in_x3;
      SVar37.str = pcVar18;
      Swift::String::append(SVar30,SVar37);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      SVar32.bridgeObject = (void *)0x8000000100da25a0;
      SVar32.str = (char *)0xd00000000000001a;
      SVar38.bridgeObject = in_x3;
      SVar38.str = pcVar18;
      Swift::String::append(SVar32,SVar38);
      *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(*(long *)(lVar25 + lVar20) + 0x10);
      SVar30 = Swift::CustomStringConvertible::get_description();
      SVar39.bridgeObject = in_x3;
      SVar39.str = pcVar18;
      Swift::String::append(SVar30,SVar39);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar3 = *(undefined8 *)(unaff_x22 + 400);
      *(undefined **)(pcVar13 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined8 *)(pcVar13 + 0x20) = uVar27;
      *(undefined8 *)(pcVar13 + 0x28) = uVar3;
      SVar33.bridgeObject = (void *)0x20;
      SVar33.str = pcVar13;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar33,separator);
      _swift_release(pcVar13);
      puVar6 = &DAT_100ecbba8;
      _swift_allocObject(&DAT_100ecbba8,0x18,7);
      *(undefined **)(unaff_x22 + 0x388) = puVar6;
      *(undefined8 *)(puVar6 + 0x10) = uVar26;
      (*pcVar5)(uVar28,uVar4,uVar11);
      plVar12 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x390) = plVar12;
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_100339b28;
      goto LAB_100337d90;
    }
    IVar14 = objc_stub::isCancelled(*(ID *)(unaff_x22 + 0x220));
    if ((IVar14 & 1) != 0) {
      uVar28 = *(undefined8 *)(unaff_x22 + 0x2a8);
      CVar15 = Swift::CancellationError::typeMetadataAccessor();
      puVar6 = &DAT_100fc01e0;
      FUN_100003a00(&DAT_100fc01e0,PTR_typeMetadataAccessor_100eaeb38,
                    PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
      _swift_allocError(CVar15.unknown,puVar6,0,0);
      Swift::CancellationError::init();
      _swift_willThrow();
      _swift_release(uVar28);
      uVar28 = *(undefined8 *)(unaff_x22 + 600);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x250);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x248);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x240);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x260));
      _swift_task_dealloc(uVar28);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar26);
      _swift_task_dealloc(uVar27);
                    /* WARNING: Could not recover jumptable at 0x000100337efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x380);
    lVar8 = *(long *)(unaff_x22 + 0x2a8);
    if (*(long *)(lVar8 + 0x10) < *(long *)(unaff_x22 + 0x2a0)) {
      pcVar5 = *(code **)(unaff_x22 + 0x270);
      uVar4 = *(undefined4 *)(unaff_x22 + 0xa4);
      uVar28 = *(undefined8 *)(unaff_x22 + 600);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x210);
      puVar6 = &DAT_100ecbb58;
      _swift_allocObject(&DAT_100ecbb58,0x28,7);
      *(undefined **)(unaff_x22 + 0x2d0) = puVar6;
      *(undefined8 *)(puVar6 + 0x10) = 0x19;
      *(long *)(puVar6 + 0x18) = lVar8;
      *(undefined8 *)(puVar6 + 0x20) = uVar26;
      (*pcVar5)(uVar28,uVar4,uVar11);
      plVar12 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
      _swift_retain(lVar8);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x2d8) = plVar12;
      FUN_1000037f0(&DAT_100fc0228,&DAT_100c42128);
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_1003375e0;
      plVar12 = (long *)(unaff_x22 + 0x1e0);
      goto LAB_100337d90;
    }
  }
  pcVar5 = *(code **)(unaff_x22 + 0x270);
  uVar4 = *(undefined4 *)(unaff_x22 + 0xa4);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x218);
  puVar6 = &DAT_100ecbb30;
  _swift_allocObject(&DAT_100ecbb30,0x18,7);
  *(undefined **)(unaff_x22 + 0x398) = puVar6;
  *(undefined8 *)(puVar6 + 0x10) = uVar26;
  (*pcVar5)(uVar28,uVar4,uVar11);
  plVar12 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x3a0) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_100339e24;
LAB_100337d90:
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar12);
  return;
}



/* Address: 0x100337fd8 | FUN_100337fd8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100337fd8(void)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  ScheduledTaskType schedule;
  char *pcVar7;
  ID IVar8;
  CancellationError CVar9;
  Range<__int64> RVar10;
  _SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
  _Var11;
  __ContiguousArrayStorageBase *p_Var12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  void *pvVar16;
  _CocoaArrayWrapper _Var17;
  _StringGuts _Var18;
  _ArrayBuffer _Var19;
  char *pcVar20;
  undefined *puVar21;
  void *in_x3;
  void *pvVar22;
  void *pvVar23;
  undefined *puVar24;
  __int64 _Var25;
  long lVar26;
  long *plVar27;
  long unaff_x20;
  void *pvVar28;
  long lVar29;
  undefined8 uVar30;
  ulong uVar31;
  Range<__int64> RVar32;
  undefined8 uVar33;
  long *unaff_x22;
  long lVar34;
  code *pcVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String separator;
  String SVar51;
  String separator_00;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String separator_01;
  
  lVar41 = *unaff_x22;
  lVar39 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar41 + 0x330));
  if (unaff_x20 == 0) {
    if (*(long *)(lVar41 + 0x328) != *(long *)(lVar41 + 0x310)) {
      lVar40 = 0;
      uVar31 = *(ulong *)(lVar41 + 0x328);
LAB_100338d64:
      *(bool *)(lVar41 + 0xa2) = unaff_x20 == 0;
      goto LAB_100338d70;
    }
    lVar40 = 0;
LAB_100338440:
    *(long *)(lVar41 + 0x338) = lVar40;
    uVar30 = *(undefined8 *)(lVar41 + 0x308);
    pcVar35 = *(code **)(lVar41 + 0x270);
    uVar4 = *(undefined4 *)(lVar41 + 0xa4);
    uVar33 = *(undefined8 *)(lVar41 + 0x250);
    uVar36 = *(undefined8 *)(lVar41 + 0x230);
    puVar24 = &DAT_100ecbb80;
    _swift_allocObject(&DAT_100ecbb80,0x18,7);
    *(undefined **)(lVar41 + 0x340) = puVar24;
    *(undefined8 *)(puVar24 + 0x10) = uVar30;
    (*pcVar35)(uVar33,uVar4,uVar36);
    plVar27 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
    _swift_task_alloc();
    *(long **)(lVar41 + 0x348) = plVar27;
    *plVar27 = lVar39;
    plVar27[1] = (long)FUN_100338f60;
  }
  else {
    pcVar7 = &DAT_100fbec98;
    FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
    _Var18.unknown = (undefined *)0x40;
    pcVar20 = (char *)0x7;
    _swift_allocObject();
    pcVar7[0x18] = '\x02';
    pcVar7[0x19] = '\0';
    pcVar7[0x1a] = '\0';
    pcVar7[0x1b] = '\0';
    pcVar7[0x1c] = '\0';
    pcVar7[0x1d] = '\0';
    pcVar7[0x1e] = '\0';
    pcVar7[0x1f] = '\0';
    pcVar7[0x10] = '\x01';
    pcVar7[0x11] = '\0';
    pcVar7[0x12] = '\0';
    pcVar7[0x13] = '\0';
    pcVar7[0x14] = '\0';
    pcVar7[0x15] = '\0';
    pcVar7[0x16] = '\0';
    pcVar7[0x17] = '\0';
    *(undefined8 *)(lVar41 + 0x178) = 0;
    *(undefined8 *)(lVar41 + 0x180) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1a,_Var18);
    *(undefined8 *)(lVar41 + 0x168) = *(undefined8 *)(lVar41 + 0x178);
    *(undefined8 *)(lVar41 + 0x170) = *(undefined8 *)(lVar41 + 0x180);
    SVar46.bridgeObject = (void *)0x8000000100da2510;
    SVar46.str = (char *)0xd000000000000018;
    SVar50.bridgeObject = in_x3;
    SVar50.str = pcVar20;
    Swift::String::append(SVar46,SVar50);
    _swift_getErrorValue();
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(lVar41 + 0xf8),*(undefined8 *)(lVar41 + 0x100));
    uVar30 = *(undefined8 *)(lVar41 + 0x168);
    uVar33 = *(undefined8 *)(lVar41 + 0x170);
    *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined8 *)(pcVar7 + 0x20) = uVar30;
    *(undefined8 *)(pcVar7 + 0x28) = uVar33;
    SVar42.bridgeObject = (void *)0x20;
    SVar42.str = pcVar7;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar42,separator);
    _swift_release(pcVar7);
    FUN_1000da768(lVar41 + 0x60);
    FUN_100bad754(0);
    FUN_100bac57c();
    FUN_100004594(lVar41 + 0x60);
    *(long *)(lVar41 + 0x1d0) = unaff_x20;
    _swift_errorRetain();
    puVar24 = &DAT_100fc1bb0;
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    uVar31 = lVar41 + 0x88;
    _swift_dynamicCast(uVar31,lVar41 + 0x1d0,puVar24,&DAT_100ecba68,6);
    if ((uVar31 & 1) != 0) {
      uVar31 = *(ulong *)(lVar41 + 0x88);
      uVar30 = *(undefined8 *)(lVar41 + 0x90);
      uVar33 = *(undefined8 *)(lVar41 + 0x98);
      cVar5 = *(char *)(lVar41 + 0xa0);
      if (cVar5 == '\0') {
        FUN_100331e98(uVar31,uVar30,uVar33,0);
        goto LAB_100338224;
      }
      _swift_bridgeObjectRetain(uVar30);
      puVar24 = &DAT_100fc1bf0;
      FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
      _swift_initStaticObject();
      uVar15 = uVar31;
      FUN_10012eef0(uVar31,uVar30,puVar24);
      _swift_bridgeObjectRelease(uVar30);
      _swift_arrayDestroy(puVar24 + 0x20,2,PTR___type_metadata_for_Swift_String_100eac208);
      FUN_100331e98(uVar31,uVar30,uVar33,cVar5);
      if ((uVar15 & 1) == 0) goto LAB_100338224;
      lVar40 = *(long *)(lVar41 + 0x318);
LAB_100338414:
      lVar29 = *(long *)(lVar41 + 0x328);
      lVar34 = *(long *)(lVar41 + 0x310);
      _swift_errorRelease();
      if (lVar29 != lVar34) {
        uVar31 = *(ulong *)(lVar41 + 0x328);
LAB_100338d70:
        *(long *)(lVar41 + 0x318) = lVar40;
        _Var19.unknown = *(undefined **)(lVar41 + 0x300);
        if (((ulong)_Var19.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(_Var19.unknown + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
            pcVar35 = (code *)SoftwareBreakpoint(1,0x100338e70);
            (*pcVar35)();
          }
          uVar15 = *(ulong *)(_Var19.unknown + uVar31 * 8 + 0x20);
        }
        else {
          uVar15 = uVar31;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar31,_Var19);
        }
        *(ulong *)(lVar41 + 800) = uVar15;
        *(ulong *)(lVar41 + 0x328) = uVar31 + 1;
        if (!SCARRY8(uVar31,1)) {
          uVar31 = *(ulong *)(lVar41 + 0x208);
          plVar27 = (long *)0x220;
          _swift_task_alloc();
          *(long **)(lVar41 + 0x330) = plVar27;
          *plVar27 = lVar39;
          plVar27[1] = (long)FUN_100337fd8;
          FUN_100334ea8(*(undefined8 *)(lVar41 + 0x200),uVar31 & 0xcfffffffffffffff,uVar15,
                        *(undefined8 *)(lVar41 + 0x210),*(undefined8 *)(lVar41 + 0x308));
          return;
        }
                    /* WARNING: Does not return */
        pcVar35 = (code *)SoftwareBreakpoint(1,0x100338e6c);
        (*pcVar35)();
      }
      if (*(char *)(lVar41 + 0xa2) != '\x01') {
LAB_100338ee4:
        *(long *)(lVar41 + 0x358) = lVar40;
        _Var17.unknown = *(undefined **)(lVar41 + 0x300);
        if (((long)_Var17.unknown < 0) || (((ulong)_Var17.unknown >> 0x3e & 1) != 0)) {
          _Var25 = Swift::_CocoaArrayWrapper::get_endIndex(_Var17);
          _Var17.unknown = *(undefined **)(lVar41 + 0x300);
        }
        else {
          _Var25 = *(__int64 *)(_Var17.unknown + 0x10);
        }
        *(__int64 *)(lVar41 + 0x360) = _Var25;
        _swift_release(_Var17.unknown);
        _swift_task_switch(FUN_100339060,0,0);
        return;
      }
      goto LAB_100338440;
    }
LAB_100338224:
    lVar29 = *(long *)(lVar41 + 0x2b0);
    lVar40 = *(long *)(lVar41 + 0x228);
    pvVar22 = (void *)0x0;
    _swift_beginAccess(lVar40 + lVar29,lVar41 + 0x128,0x21);
    pvVar28 = *(void **)(lVar40 + lVar29);
    _swift_errorRetain();
    pvVar23 = pvVar28;
    _swift_isUniquelyReferenced_nonNull_native();
    *(void **)(lVar40 + lVar29) = pvVar28;
    pvVar16 = pvVar28;
    if (((ulong)pvVar23 & 1) == 0) {
      lVar29 = *(long *)(lVar41 + 0x2b0);
      lVar40 = *(long *)(lVar41 + 0x228);
      pvVar16 = (void *)0x0;
      FUN_100380020(0,*(long *)((long)pvVar28 + 0x10) + 1,1);
      *(void **)(lVar40 + lVar29) = pvVar16;
      pvVar22 = pvVar28;
    }
    uVar31 = *(ulong *)((long)pvVar16 + 0x10);
    pvVar23 = pvVar16;
    if (*(ulong *)((long)pvVar16 + 0x18) >> 1 <= uVar31) {
      pvVar23 = (void *)(ulong)(1 < *(ulong *)((long)pvVar16 + 0x18));
      FUN_100380020(pvVar23,uVar31 + 1,1);
      pvVar22 = pvVar16;
    }
    lVar34 = *(long *)(lVar41 + 0x318);
    lVar40 = *(long *)(lVar41 + 0x2b0);
    lVar29 = *(long *)(lVar41 + 0x228);
    *(ulong *)((long)pvVar23 + 0x10) = uVar31 + 1;
    *(long *)((long)pvVar23 + uVar31 * 8 + 0x20) = unaff_x20;
    *(void **)(lVar29 + lVar40) = pvVar23;
    _swift_endAccess(lVar41 + 0x128);
    lVar40 = lVar34 + 1;
    if (SCARRY8(lVar34,1)) {
                    /* WARNING: Does not return */
      pcVar35 = (code *)SoftwareBreakpoint(1,0x100338e68);
      (*pcVar35)();
    }
    if (lVar40 < 10) goto LAB_100338414;
    uVar30 = *(undefined8 *)(lVar41 + 0x300);
    _swift_willThrow();
    _swift_release(uVar30);
    pcVar7 = &DAT_100fbec98;
    FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
    _Var18.unknown = (undefined *)0x40;
    pcVar20 = (char *)0x7;
    _swift_allocObject();
    pcVar7[0x18] = '\x02';
    pcVar7[0x19] = '\0';
    pcVar7[0x1a] = '\0';
    pcVar7[0x1b] = '\0';
    pcVar7[0x1c] = '\0';
    pcVar7[0x1d] = '\0';
    pcVar7[0x1e] = '\0';
    pcVar7[0x1f] = '\0';
    pcVar7[0x10] = '\x01';
    pcVar7[0x11] = '\0';
    pcVar7[0x12] = '\0';
    pcVar7[0x13] = '\0';
    pcVar7[0x14] = '\0';
    pcVar7[0x15] = '\0';
    pcVar7[0x16] = '\0';
    pcVar7[0x17] = '\0';
    *(undefined8 *)(lVar41 + 0x1a8) = 0;
    *(undefined8 *)(lVar41 + 0x1b0) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1e,_Var18);
    *(undefined8 *)(lVar41 + 0x198) = *(undefined8 *)(lVar41 + 0x1a8);
    *(undefined8 *)(lVar41 + 0x1a0) = *(undefined8 *)(lVar41 + 0x1b0);
    SVar43.bridgeObject = (void *)0x8000000100da2560;
    SVar43.str = (char *)0xd00000000000001c;
    SVar51.bridgeObject = pvVar22;
    SVar51.str = pcVar20;
    Swift::String::append(SVar43,SVar51);
    _swift_getErrorValue();
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(lVar41 + 0x140),*(undefined8 *)(lVar41 + 0x148));
    uVar30 = *(undefined8 *)(lVar41 + 0x198);
    uVar33 = *(undefined8 *)(lVar41 + 0x1a0);
    *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined8 *)(pcVar7 + 0x20) = uVar30;
    *(undefined8 *)(pcVar7 + 0x28) = uVar33;
    SVar44.bridgeObject = (void *)0x20;
    SVar44.str = pcVar7;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar44,separator_00);
    _swift_release(pcVar7);
    FUN_1000da768(lVar41 + 0x10);
    FUN_100bac57c();
    FUN_100004594(lVar41 + 0x10);
    *(long *)(lVar41 + 0x1c0) = unaff_x20;
    _swift_errorRetain();
    puVar24 = &DAT_100fc1bb0;
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    uVar31 = lVar41 + 0xa8;
    _swift_dynamicCast(uVar31,lVar41 + 0x1c0,puVar24,&DAT_100ecba68,6);
    if ((uVar31 & 1) == 0) {
      lVar34 = *(long *)(lVar41 + 0x2b0);
      lVar29 = *(long *)(lVar41 + 0x228);
      pvVar23 = (void *)0x0;
      _swift_beginAccess(lVar29 + lVar34,lVar41 + 0x110,0x21);
      pvVar28 = *(void **)(lVar29 + lVar34);
      _swift_errorRetain();
      pvVar22 = pvVar28;
      _swift_isUniquelyReferenced_nonNull_native();
      *(void **)(lVar29 + lVar34) = pvVar28;
      pvVar16 = pvVar28;
      if (((ulong)pvVar22 & 1) == 0) {
        lVar34 = *(long *)(lVar41 + 0x2b0);
        lVar29 = *(long *)(lVar41 + 0x228);
        pvVar16 = (void *)0x0;
        FUN_100380020(0,*(long *)((long)pvVar28 + 0x10) + 1,1);
        *(void **)(lVar29 + lVar34) = pvVar16;
        pvVar23 = pvVar28;
      }
      uVar31 = *(ulong *)((long)pvVar16 + 0x10);
      pvVar22 = pvVar16;
      if (*(ulong *)((long)pvVar16 + 0x18) >> 1 <= uVar31) {
        pvVar22 = (void *)(ulong)(1 < *(ulong *)((long)pvVar16 + 0x18));
        FUN_100380020(pvVar22,uVar31 + 1,1);
        pvVar23 = pvVar16;
      }
      lVar29 = *(long *)(lVar41 + 0x2b0);
      lVar34 = *(long *)(lVar41 + 0x228);
      *(ulong *)((long)pvVar22 + 0x10) = uVar31 + 1;
      *(long *)((long)pvVar22 + uVar31 * 8 + 0x20) = unaff_x20;
      *(void **)(lVar34 + lVar29) = pvVar22;
      _swift_endAccess(lVar41 + 0x110);
      _swift_errorRelease();
      bVar6 = *(byte *)(lVar41 + 0xa1);
    }
    else {
      _swift_errorRelease();
      pvVar23 = (void *)(ulong)*(byte *)(lVar41 + 0xc0);
      FUN_100331e98(*(undefined8 *)(lVar41 + 0xa8),*(undefined8 *)(lVar41 + 0xb0),
                    *(undefined8 *)(lVar41 + 0xb8));
      bVar6 = *(byte *)(lVar41 + 0xa1);
    }
    if ((bVar6 & 1) == 0) {
      RVar32.unknown = *(undefined **)(lVar41 + 0x2f8);
      _Var17.unknown = *(undefined **)(lVar41 + 0x2f0);
      if ((long)RVar32.unknown < (long)_Var17.unknown) {
        puVar24 = RVar32.unknown + 5;
        *(undefined **)(lVar41 + 0x2f8) = puVar24;
        *(bool *)(lVar41 + 0xa1) = SCARRY8((long)RVar32.unknown,5);
        if (0x7ffffffffffffffa < (long)RVar32.unknown) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x100338ec4);
          (*pcVar35)();
        }
        if ((long)puVar24 <= (long)_Var17.unknown) {
          _Var17.unknown = puVar24;
        }
        if ((long)_Var17.unknown < (long)RVar32.unknown) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x100338ec8);
          (*pcVar35)();
        }
        puVar24 = *(undefined **)(lVar41 + 0x2e8);
        if ((ulong)puVar24 >> 0x3e == 0) {
          lVar29 = *(long *)(((ulong)puVar24 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar24) {
            _Var1.unknown = puVar24;
          }
          lVar29 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        if (lVar29 < (long)RVar32.unknown) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x100338ecc);
          (*pcVar35)();
        }
        if ((long)RVar32.unknown < 0) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x100338ed0);
          (*pcVar35)();
        }
        puVar24 = *(undefined **)(lVar41 + 0x2e8);
        if ((ulong)puVar24 >> 0x3e == 0) {
          lVar29 = *(long *)(((ulong)puVar24 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar24) {
            _Var1.unknown = puVar24;
          }
          lVar29 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        if (lVar29 < (long)_Var17.unknown) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x100338ed4);
          (*pcVar35)();
        }
        puVar24 = *(undefined **)(lVar41 + 0x2e8);
        if ((RVar32.unknown == _Var17.unknown) || (((ulong)puVar24 & 0xc000000000000001) == 0)) {
          _swift_bridgeObjectRetain(puVar24);
          if ((ulong)puVar24 >> 0x3e == 0) goto LAB_100338aac;
LAB_1003389ec:
          _swift_bridgeObjectRelease(puVar24);
          puVar21 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar24) {
            puVar21 = puVar24;
          }
          _Var11 = Swift::_CocoaArrayWrapper::_get_subscript(RVar32,_Var17);
          RVar32.unknown = puVar21;
          if (((ulong)pvVar23 & 1) != 0) goto LAB_100338a20;
          puVar24 = (undefined *)((ulong)pvVar23 >> 1);
          lVar29 = (long)puVar24 - (long)puVar21;
          if (SBORROW8((long)puVar24,(long)puVar21)) {
                    /* WARNING: Does not return */
            pcVar35 = (code *)SoftwareBreakpoint(1,0x100338f5c);
            (*pcVar35)();
          }
LAB_100338ad0:
          puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
          if (lVar29 != 0) {
            if (0 < lVar29) {
              puVar13 = &DAT_100fbe4e8;
              FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
              _swift_allocObject();
              puVar14 = puVar13;
              _malloc_size();
              puVar2 = puVar14 + -0x19;
              if (0x1f < (long)puVar14) {
                puVar2 = puVar14 + -0x20;
              }
              *(long *)(puVar13 + 0x10) = lVar29;
              *(ulong *)(puVar13 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
            }
            if (puVar21 == puVar24) {
                    /* WARNING: Does not return */
              pcVar35 = (code *)SoftwareBreakpoint(1,0x100338f60);
              (*pcVar35)();
            }
            uVar30 = 0;
            FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
            _swift_arrayInitWithCopy
                      (puVar13 + 0x20,_Var17.unknown + (long)puVar21 * 8,lVar29,uVar30);
          }
LAB_100338cd4:
          _Var17.unknown = puVar13;
          _swift_unknownObjectRelease(_Var11.unknown);
        }
        else {
          if (_Var17.unknown <= RVar32.unknown) {
                    /* WARNING: Does not return */
            pcVar35 = (code *)SoftwareBreakpoint(1,0x100338f48);
            (*pcVar35)();
          }
          FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
          _swift_bridgeObjectRetain(puVar24);
          RVar10.unknown = RVar32.unknown;
          do {
            puVar24 = RVar10.unknown + 1;
            Swift::_ArrayBuffer::_typeCheckSlowPath
                      ((__int64)RVar10.unknown,(_ArrayBuffer)*(undefined **)(lVar41 + 0x2e8));
            RVar10.unknown = puVar24;
          } while (_Var17.unknown != puVar24);
          puVar24 = *(undefined **)(lVar41 + 0x2e8);
          if ((ulong)puVar24 >> 0x3e != 0) goto LAB_1003389ec;
LAB_100338aac:
          pvVar23 = (void *)((long)_Var17.unknown << 1);
          _Var11.unknown = puVar24 & 0xffffffffffffff8;
          _Var17.unknown = _Var11.unknown + 0x20;
LAB_100338a20:
          p_Var12 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
          puVar24 = _Var11.unknown;
          _swift_unknownObjectRetain_n(_Var11.unknown,2);
          _swift_dynamicCastClass();
          if (puVar24 == (undefined *)0x0) {
            _swift_unknownObjectRelease(_Var11.unknown);
            puVar24 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          lVar34 = *(long *)(puVar24 + 0x10);
          _swift_release();
          puVar24 = (undefined *)((ulong)pvVar23 >> 1);
          lVar29 = (long)puVar24 - (long)RVar32.unknown;
          if (SBORROW8((long)puVar24,(long)RVar32.unknown)) {
                    /* WARNING: Does not return */
            pcVar35 = (code *)SoftwareBreakpoint(1,0x100338f4c);
            (*pcVar35)();
          }
          if (lVar34 != lVar29) {
            _swift_unknownObjectRelease();
            puVar21 = RVar32.unknown;
            goto LAB_100338ad0;
          }
          _Var17.unknown = _Var11.unknown;
          _swift_dynamicCastClass(_Var11.unknown,p_Var12);
          _swift_unknownObjectRelease(_Var11.unknown);
          puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
          if (_Var17.unknown == (undefined *)0x0) goto LAB_100338cd4;
        }
        *(undefined **)(lVar41 + 0x300) = _Var17.unknown;
        FUN_1000da768(lVar41 + 0x38);
        IVar8 = *(ID *)(lVar41 + 0x50);
        lVar29 = *(long *)(lVar41 + 0x58);
        FUN_100004640(lVar41 + 0x38,IVar8);
        (**(code **)(lVar29 + 0x18))(IVar8,lVar29);
        *(ID *)(lVar41 + 0x308) = IVar8;
        FUN_100004594(lVar41 + 0x38);
        objc_stub::setUndoManager_(IVar8,0);
        objc_stub::setStalenessInterval_(IVar8,0);
        objc_stub::setMergePolicy_
                  (IVar8,*(undefined8 *)PTR__NSMergeByPropertyObjectTrumpMergePolicy_100ea9a00);
        if (((long)_Var17.unknown < 0) || (((ulong)_Var17.unknown >> 0x3e & 1) != 0)) {
          lVar29 = Swift::_CocoaArrayWrapper::get_endIndex(_Var17);
          *(long *)(lVar41 + 0x310) = lVar29;
        }
        else {
          lVar29 = *(long *)(_Var17.unknown + 0x10);
          *(long *)(lVar41 + 0x310) = lVar29;
        }
        if (lVar29 == 0) goto LAB_100338ee4;
        uVar31 = 0;
        goto LAB_100338d64;
      }
    }
    *(long *)(lVar41 + 0x380) = lVar40;
    lVar40 = *(long *)(lVar41 + 0x2a8);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar41 + 0x2e8));
    lVar29 = *(long *)(lVar40 + 0x10);
    lVar40 = lVar29 + 0x19;
    if (SCARRY8(lVar29,0x19)) {
                    /* WARNING: Does not return */
      pcVar35 = (code *)SoftwareBreakpoint(1,0x100338e74);
      (*pcVar35)();
    }
    lVar29 = *(long *)(lVar41 + 0x2a0);
    *(long *)(*(long *)(lVar41 + 0x2a8) + 0x10) = lVar40;
    if (((lVar40 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8U >> 2 |
         lVar40 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) || (lVar29 <= lVar40)) {
      lVar26 = *(long *)(lVar41 + 0x2b0);
      lVar38 = *(long *)(lVar41 + 0x2a0);
      pcVar35 = *(code **)(lVar41 + 0x270);
      uVar4 = *(undefined4 *)(lVar41 + 0xa4);
      uVar30 = *(undefined8 *)(lVar41 + 0x248);
      uVar33 = *(undefined8 *)(lVar41 + 0x230);
      lVar34 = *(long *)(lVar41 + 0x228);
      uVar36 = *(undefined8 *)(lVar41 + 0x210);
      lVar29 = lVar38;
      if (lVar40 <= lVar38) {
        lVar29 = lVar40;
      }
      pcVar7 = &DAT_100fbec98;
      FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
      _Var18.unknown = (undefined *)0x40;
      pcVar20 = (char *)0x7;
      _swift_allocObject();
      pcVar7[0x18] = '\x02';
      pcVar7[0x19] = '\0';
      pcVar7[0x1a] = '\0';
      pcVar7[0x1b] = '\0';
      pcVar7[0x1c] = '\0';
      pcVar7[0x1d] = '\0';
      pcVar7[0x1e] = '\0';
      pcVar7[0x1f] = '\0';
      pcVar7[0x10] = '\x01';
      pcVar7[0x11] = '\0';
      pcVar7[0x12] = '\0';
      pcVar7[0x13] = '\0';
      pcVar7[0x14] = '\0';
      pcVar7[0x15] = '\0';
      pcVar7[0x16] = '\0';
      pcVar7[0x17] = '\0';
      *(undefined8 *)(lVar41 + 0x158) = 0;
      *(undefined8 *)(lVar41 + 0x160) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x35,_Var18);
      *(undefined8 *)(lVar41 + 0x188) = *(undefined8 *)(lVar41 + 0x158);
      *(undefined8 *)(lVar41 + 400) = *(undefined8 *)(lVar41 + 0x160);
      SVar45.bridgeObject = (void *)0x8000000100da2580;
      SVar45.str = (char *)0xd000000000000014;
      SVar52.bridgeObject = pvVar23;
      SVar52.str = pcVar20;
      Swift::String::append(SVar45,SVar52);
      *(long *)(lVar41 + 0x1e8) = lVar29;
      SVar46 = Swift::CustomStringConvertible::get_description();
      SVar53.bridgeObject = pvVar23;
      SVar53.str = pcVar20;
      Swift::String::append(SVar46,SVar53);
      _swift_bridgeObjectRelease(SVar46.bridgeObject);
      SVar47.bridgeObject = (void *)0xe100000000000000;
      SVar47.str = (char *)0x2f;
      SVar54.bridgeObject = pvVar23;
      SVar54.str = pcVar20;
      Swift::String::append(SVar47,SVar54);
      *(long *)(lVar41 + 0x1f0) = lVar38;
      SVar46 = Swift::CustomStringConvertible::get_description();
      SVar55.bridgeObject = pvVar23;
      SVar55.str = pcVar20;
      Swift::String::append(SVar46,SVar55);
      _swift_bridgeObjectRelease(SVar46.bridgeObject);
      SVar48.bridgeObject = (void *)0x8000000100da25a0;
      SVar48.str = (char *)0xd00000000000001a;
      SVar56.bridgeObject = pvVar23;
      SVar56.str = pcVar20;
      Swift::String::append(SVar48,SVar56);
      *(undefined8 *)(lVar41 + 0x1f8) = *(undefined8 *)(*(long *)(lVar34 + lVar26) + 0x10);
      SVar46 = Swift::CustomStringConvertible::get_description();
      SVar57.bridgeObject = pvVar23;
      SVar57.str = pcVar20;
      Swift::String::append(SVar46,SVar57);
      _swift_bridgeObjectRelease(SVar46.bridgeObject);
      uVar37 = *(undefined8 *)(lVar41 + 0x188);
      uVar3 = *(undefined8 *)(lVar41 + 400);
      *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined8 *)(pcVar7 + 0x20) = uVar37;
      *(undefined8 *)(pcVar7 + 0x28) = uVar3;
      SVar49.bridgeObject = (void *)0x20;
      SVar49.str = pcVar7;
      separator_01.bridgeObject = (void *)0xa;
      separator_01.str = (char *)0xe100000000000000;
      Swift::_print(SVar49,separator_01);
      _swift_release(pcVar7);
      puVar24 = &DAT_100ecbba8;
      _swift_allocObject(&DAT_100ecbba8,0x18,7);
      *(undefined **)(lVar41 + 0x388) = puVar24;
      *(undefined8 *)(puVar24 + 0x10) = uVar36;
      (*pcVar35)(uVar30,uVar4,uVar33);
      plVar27 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
      _swift_task_alloc();
      *(long **)(lVar41 + 0x390) = plVar27;
      *plVar27 = lVar39;
      plVar27[1] = (long)FUN_100339b28;
LAB_100338910:
      schedule.value = (__int8)plVar27;
      goto LAB_100338914;
    }
    IVar8 = objc_stub::isCancelled(*(ID *)(lVar41 + 0x220));
    if ((IVar8 & 1) != 0) {
      uVar30 = *(undefined8 *)(lVar41 + 0x2a8);
      CVar9 = Swift::CancellationError::typeMetadataAccessor();
      puVar24 = &DAT_100fc01e0;
      FUN_100003a00(&DAT_100fc01e0,PTR_typeMetadataAccessor_100eaeb38,
                    PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
      _swift_allocError(CVar9.unknown,puVar24,0,0);
      Swift::CancellationError::init();
      _swift_willThrow();
      _swift_release(uVar30);
      uVar30 = *(undefined8 *)(lVar41 + 600);
      uVar33 = *(undefined8 *)(lVar41 + 0x250);
      uVar36 = *(undefined8 *)(lVar41 + 0x248);
      uVar37 = *(undefined8 *)(lVar41 + 0x240);
      _swift_task_dealloc(*(undefined8 *)(lVar41 + 0x260));
      _swift_task_dealloc(uVar30);
      _swift_task_dealloc(uVar33);
      _swift_task_dealloc(uVar36);
      _swift_task_dealloc(uVar37);
                    /* WARNING: Could not recover jumptable at 0x0001003386ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar39 + 8))();
      return;
    }
    *(undefined8 *)(lVar41 + 0x2c8) = *(undefined8 *)(lVar41 + 0x380);
    lVar40 = *(long *)(lVar41 + 0x2a8);
    if (*(long *)(lVar40 + 0x10) < *(long *)(lVar41 + 0x2a0)) {
      pcVar35 = *(code **)(lVar41 + 0x270);
      uVar4 = *(undefined4 *)(lVar41 + 0xa4);
      uVar30 = *(undefined8 *)(lVar41 + 600);
      uVar33 = *(undefined8 *)(lVar41 + 0x230);
      uVar36 = *(undefined8 *)(lVar41 + 0x210);
      puVar24 = &DAT_100ecbb58;
      _swift_allocObject(&DAT_100ecbb58,0x28,7);
      *(undefined **)(lVar41 + 0x2d0) = puVar24;
      *(undefined8 *)(puVar24 + 0x10) = 0x19;
      *(long *)(puVar24 + 0x18) = lVar40;
      *(undefined8 *)(puVar24 + 0x20) = uVar36;
      (*pcVar35)(uVar30,uVar4,uVar33);
      plVar27 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
      _swift_retain(lVar40);
      _swift_task_alloc();
      *(long **)(lVar41 + 0x2d8) = plVar27;
      FUN_1000037f0(&DAT_100fc0228,&DAT_100c42128);
      *plVar27 = lVar39;
      plVar27[1] = (long)FUN_1003375e0;
      plVar27 = (long *)(lVar41 + 0x1e0);
      goto LAB_100338910;
    }
    pcVar35 = *(code **)(lVar41 + 0x270);
    uVar4 = *(undefined4 *)(lVar41 + 0xa4);
    uVar30 = *(undefined8 *)(lVar41 + 0x240);
    uVar33 = *(undefined8 *)(lVar41 + 0x230);
    uVar36 = *(undefined8 *)(lVar41 + 0x218);
    puVar24 = &DAT_100ecbb30;
    _swift_allocObject(&DAT_100ecbb30,0x18,7);
    *(undefined **)(lVar41 + 0x398) = puVar24;
    *(undefined8 *)(puVar24 + 0x10) = uVar36;
    (*pcVar35)(uVar30,uVar4,uVar33);
    plVar27 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
    _swift_task_alloc();
    *(long **)(lVar41 + 0x3a0) = plVar27;
    *plVar27 = lVar39;
    plVar27[1] = (long)FUN_100339e24;
  }
  schedule.value = (__int8)plVar27;
LAB_100338914:
  (extension_CoreData)::__C::NSManagedObjectContext::_perform(schedule);
  return;
}



/* Address: 0x100338f60 | FUN_100338f60 */

void FUN_100338f60(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x350) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x348));
  uVar2 = *(undefined8 *)(lVar4 + 0x340);
  if (unaff_x20 == 0) {
    (**(code **)(lVar4 + 0x288))(*(undefined8 *)(lVar4 + 0x250),*(undefined8 *)(lVar4 + 0x230));
    _swift_release(uVar2);
    uVar3 = *(undefined8 *)(lVar4 + 0x298);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    pcVar1 = FUN_100338ffc;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x300);
    _swift_release(uVar2);
    _swift_release(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x298);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    pcVar1 = FUN_10033a04c;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x100338ffc | FUN_100338ffc */

void FUN_100338ffc(void)

{
  _CocoaArrayWrapper _Var1;
  __int64 _Var2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x358) = *(undefined8 *)(unaff_x22 + 0x338);
  _Var1.unknown = *(undefined **)(unaff_x22 + 0x300);
  if (((long)_Var1.unknown < 0) || (((ulong)_Var1.unknown >> 0x3e & 1) != 0)) {
    _Var2 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    _Var1.unknown = *(undefined **)(unaff_x22 + 0x300);
  }
  else {
    _Var2 = *(__int64 *)(_Var1.unknown + 0x10);
  }
  *(__int64 *)(unaff_x22 + 0x360) = _Var2;
  _swift_release(_Var1.unknown);
  _swift_task_switch(FUN_100339060,0,0);
  return;
}



/* Address: 0x100339060 | FUN_100339060 */

void FUN_100339060(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x368) = pMVar2;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x370) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x378) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003390f4,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003390f4 | FUN_1003390f4 */

void FUN_1003390f4(void)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  undefined8 uVar6;
  long lVar7;
  MainActor *this;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x378);
  pMVar2 = *(MainActor **)(unaff_x22 + 0x370);
  this = *(MainActor **)(unaff_x22 + 0x368);
  _swift_release();
  pMVar2 = Swift::MainActor::get_shared(this,pMVar2);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/V5MigrationManager+Items.swift",0x28,1,0x69,UVar3.unknown,uVar6);
  }
  lVar7 = *(long *)(unaff_x22 + 0x360);
  IVar5 = objc_stub::completedUnitCount(*(ID *)(unaff_x22 + 0x220));
  if (!SCARRY8(IVar5,lVar7)) {
    objc_stub::setCompletedUnitCount_(*(ID *)(unaff_x22 + 0x220),IVar5 + lVar7);
    _swift_release(pMVar2);
    _swift_task_switch(FUN_1003391b0,*(undefined8 *)(unaff_x22 + 0x290),
                       *(undefined8 *)(unaff_x22 + 0x298));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003391b0);
  (*pcVar1)();
}



/* Address: 0x1003391b0 | FUN_1003391b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003391b0(void)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  char *pcVar7;
  ID IVar8;
  CancellationError CVar9;
  Range<__int64> RVar10;
  _SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
  _Var11;
  __ContiguousArrayStorageBase *p_Var12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long *plVar16;
  _StringGuts _Var17;
  _ArrayBuffer _Var18;
  char *pcVar19;
  undefined *puVar20;
  void *in_x3;
  _CocoaArrayWrapper _Var21;
  undefined *puVar22;
  __int64 _Var23;
  long lVar24;
  undefined8 uVar25;
  Range<__int64> RVar26;
  long lVar27;
  ulong uVar28;
  long unaff_x22;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String separator;
  
  uVar31 = *(undefined8 *)(unaff_x22 + 0x358);
  if ((*(byte *)(unaff_x22 + 0xa1) & 1) != 0) {
LAB_100339240:
    *(undefined8 *)(unaff_x22 + 0x380) = uVar31;
    lVar6 = *(long *)(unaff_x22 + 0x2a8);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x2e8));
    lVar32 = *(long *)(lVar6 + 0x10);
    lVar6 = lVar32 + 0x19;
    if (SCARRY8(lVar32,0x19)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100339a90);
      (*pcVar5)();
    }
    lVar32 = *(long *)(unaff_x22 + 0x2a0);
    *(long *)(*(long *)(unaff_x22 + 0x2a8) + 0x10) = lVar6;
    if ((lVar6 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8U >> 2 | lVar6 * -0x70a3d70a3d70a3d7 << 0x3e
        ) < 0x28f5c28f5c28f5d || lVar32 <= lVar6) {
      lVar24 = *(long *)(unaff_x22 + 0x2b0);
      lVar27 = *(long *)(unaff_x22 + 0x2a0);
      pcVar5 = *(code **)(unaff_x22 + 0x270);
      uVar4 = *(undefined4 *)(unaff_x22 + 0xa4);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x248);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x230);
      lVar29 = *(long *)(unaff_x22 + 0x228);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar32 = lVar27;
      if (lVar6 <= lVar27) {
        lVar32 = lVar6;
      }
      pcVar7 = &DAT_100fbec98;
      FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
      _Var17.unknown = (undefined *)0x40;
      pcVar19 = (char *)0x7;
      _swift_allocObject();
      pcVar7[0x18] = '\x02';
      pcVar7[0x19] = '\0';
      pcVar7[0x1a] = '\0';
      pcVar7[0x1b] = '\0';
      pcVar7[0x1c] = '\0';
      pcVar7[0x1d] = '\0';
      pcVar7[0x1e] = '\0';
      pcVar7[0x1f] = '\0';
      pcVar7[0x10] = '\x01';
      pcVar7[0x11] = '\0';
      pcVar7[0x12] = '\0';
      pcVar7[0x13] = '\0';
      pcVar7[0x14] = '\0';
      pcVar7[0x15] = '\0';
      pcVar7[0x16] = '\0';
      pcVar7[0x17] = '\0';
      *(undefined8 *)(unaff_x22 + 0x158) = 0;
      *(undefined8 *)(unaff_x22 + 0x160) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x35,_Var17);
      *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x158);
      *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x160);
      SVar33.bridgeObject = (void *)0x8000000100da2580;
      SVar33.str = (char *)0xd000000000000014;
      SVar37.bridgeObject = in_x3;
      SVar37.str = pcVar19;
      Swift::String::append(SVar33,SVar37);
      *(long *)(unaff_x22 + 0x1e8) = lVar32;
      SVar33 = Swift::CustomStringConvertible::get_description();
      SVar38.bridgeObject = in_x3;
      SVar38.str = pcVar19;
      Swift::String::append(SVar33,SVar38);
      _swift_bridgeObjectRelease(SVar33.bridgeObject);
      SVar34.bridgeObject = (void *)0xe100000000000000;
      SVar34.str = (char *)0x2f;
      SVar39.bridgeObject = in_x3;
      SVar39.str = pcVar19;
      Swift::String::append(SVar34,SVar39);
      *(long *)(unaff_x22 + 0x1f0) = lVar27;
      SVar33 = Swift::CustomStringConvertible::get_description();
      SVar40.bridgeObject = in_x3;
      SVar40.str = pcVar19;
      Swift::String::append(SVar33,SVar40);
      _swift_bridgeObjectRelease(SVar33.bridgeObject);
      SVar35.bridgeObject = (void *)0x8000000100da25a0;
      SVar35.str = (char *)0xd00000000000001a;
      SVar41.bridgeObject = in_x3;
      SVar41.str = pcVar19;
      Swift::String::append(SVar35,SVar41);
      *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(*(long *)(lVar29 + lVar24) + 0x10);
      SVar33 = Swift::CustomStringConvertible::get_description();
      SVar42.bridgeObject = in_x3;
      SVar42.str = pcVar19;
      Swift::String::append(SVar33,SVar42);
      _swift_bridgeObjectRelease(SVar33.bridgeObject);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar3 = *(undefined8 *)(unaff_x22 + 400);
      *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined8 *)(pcVar7 + 0x20) = uVar30;
      *(undefined8 *)(pcVar7 + 0x28) = uVar3;
      SVar36.bridgeObject = (void *)0x20;
      SVar36.str = pcVar7;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar36,separator);
      _swift_release(pcVar7);
      puVar22 = &DAT_100ecbba8;
      _swift_allocObject(&DAT_100ecbba8,0x18,7);
      *(undefined **)(unaff_x22 + 0x388) = puVar22;
      *(undefined8 *)(puVar22 + 0x10) = uVar25;
      (*pcVar5)(uVar31,uVar4,uVar15);
      plVar16 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x390) = plVar16;
      *plVar16 = unaff_x22;
      plVar16[1] = (long)FUN_100339b28;
    }
    else {
      IVar8 = objc_stub::isCancelled(*(ID *)(unaff_x22 + 0x220));
      if ((IVar8 & 1) != 0) {
        uVar31 = *(undefined8 *)(unaff_x22 + 0x2a8);
        CVar9 = Swift::CancellationError::typeMetadataAccessor();
        puVar22 = &DAT_100fc01e0;
        FUN_100003a00(&DAT_100fc01e0,PTR_typeMetadataAccessor_100eaeb38,
                      PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
        _swift_allocError(CVar9.unknown,puVar22,0,0);
        Swift::CancellationError::init();
        _swift_willThrow();
        _swift_release(uVar31);
        uVar31 = *(undefined8 *)(unaff_x22 + 600);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x250);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x248);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x240);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x260));
        _swift_task_dealloc(uVar31);
        _swift_task_dealloc(uVar15);
        _swift_task_dealloc(uVar25);
        _swift_task_dealloc(uVar30);
                    /* WARNING: Could not recover jumptable at 0x0001003395b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x380);
      lVar6 = *(long *)(unaff_x22 + 0x2a8);
      if (*(long *)(lVar6 + 0x10) < *(long *)(unaff_x22 + 0x2a0)) {
        pcVar5 = *(code **)(unaff_x22 + 0x270);
        uVar4 = *(undefined4 *)(unaff_x22 + 0xa4);
        uVar31 = *(undefined8 *)(unaff_x22 + 600);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x230);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x210);
        puVar22 = &DAT_100ecbb58;
        _swift_allocObject(&DAT_100ecbb58,0x28,7);
        *(undefined **)(unaff_x22 + 0x2d0) = puVar22;
        *(undefined8 *)(puVar22 + 0x10) = 0x19;
        *(long *)(puVar22 + 0x18) = lVar6;
        *(undefined8 *)(puVar22 + 0x20) = uVar25;
        (*pcVar5)(uVar31,uVar4,uVar15);
        plVar16 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
        _swift_retain(lVar6);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x2d8) = plVar16;
        FUN_1000037f0(&DAT_100fc0228,&DAT_100c42128);
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_1003375e0;
        plVar16 = (long *)(unaff_x22 + 0x1e0);
      }
      else {
        pcVar5 = *(code **)(unaff_x22 + 0x270);
        uVar4 = *(undefined4 *)(unaff_x22 + 0xa4);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x240);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x230);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x218);
        puVar22 = &DAT_100ecbb30;
        _swift_allocObject(&DAT_100ecbb30,0x18,7);
        *(undefined **)(unaff_x22 + 0x398) = puVar22;
        *(undefined8 *)(puVar22 + 0x10) = uVar25;
        (*pcVar5)(uVar31,uVar4,uVar15);
        plVar16 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x3a0) = plVar16;
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_100339e24;
      }
    }
    (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar16);
    return;
  }
  RVar26.unknown = *(undefined **)(unaff_x22 + 0x2f8);
  _Var21.unknown = *(undefined **)(unaff_x22 + 0x2f0);
  if ((long)_Var21.unknown <= (long)RVar26.unknown) goto LAB_100339240;
  puVar22 = RVar26.unknown + 5;
  *(undefined **)(unaff_x22 + 0x2f8) = puVar22;
  *(bool *)(unaff_x22 + 0xa1) = SCARRY8((long)RVar26.unknown,5);
  if (0x7ffffffffffffffa < (long)RVar26.unknown) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100339a94);
    (*pcVar5)();
  }
  if ((long)puVar22 <= (long)_Var21.unknown) {
    _Var21.unknown = puVar22;
  }
  if ((long)_Var21.unknown < (long)RVar26.unknown) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100339a98);
    (*pcVar5)();
  }
  puVar22 = *(undefined **)(unaff_x22 + 0x2e8);
  if ((ulong)puVar22 >> 0x3e == 0) {
    lVar6 = *(long *)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar22) {
      _Var1.unknown = puVar22;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 < (long)RVar26.unknown) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100339a9c);
    (*pcVar5)();
  }
  if ((long)RVar26.unknown < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100339aa0);
    (*pcVar5)();
  }
  puVar22 = *(undefined **)(unaff_x22 + 0x2e8);
  if ((ulong)puVar22 >> 0x3e == 0) {
    lVar6 = *(long *)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar22) {
      _Var1.unknown = puVar22;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 < (long)_Var21.unknown) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100339aa4);
    (*pcVar5)();
  }
  puVar22 = *(undefined **)(unaff_x22 + 0x2e8);
  if ((RVar26.unknown == _Var21.unknown) || (((ulong)puVar22 & 0xc000000000000001) == 0)) {
    _swift_bridgeObjectRetain(puVar22);
    if ((ulong)puVar22 >> 0x3e == 0) goto LAB_100339724;
LAB_10033966c:
    _swift_bridgeObjectRelease(puVar22);
    puVar20 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar22) {
      puVar20 = puVar22;
    }
    _Var11 = Swift::_CocoaArrayWrapper::_get_subscript(RVar26,_Var21);
    RVar26.unknown = puVar20;
    if (((ulong)in_x3 & 1) != 0) goto LAB_1003396a0;
    puVar22 = (undefined *)((ulong)in_x3 >> 1);
    lVar6 = (long)puVar22 - (long)puVar20;
    if (SBORROW8((long)puVar22,(long)puVar20)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100339b24);
      (*pcVar5)();
    }
LAB_100339748:
    puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar6 != 0) {
      if (0 < lVar6) {
        puVar13 = &DAT_100fbe4e8;
        FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
        _swift_allocObject();
        puVar14 = puVar13;
        _malloc_size();
        puVar2 = puVar14 + -0x19;
        if (0x1f < (long)puVar14) {
          puVar2 = puVar14 + -0x20;
        }
        *(long *)(puVar13 + 0x10) = lVar6;
        *(ulong *)(puVar13 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
      }
      if (puVar20 == puVar22) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100339a8c);
        (*pcVar5)();
      }
      uVar15 = 0;
      FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
      _swift_arrayInitWithCopy(puVar13 + 0x20,_Var21.unknown + (long)puVar20 * 8,lVar6,uVar15);
    }
  }
  else {
    if (_Var21.unknown <= RVar26.unknown) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100339b14);
      (*pcVar5)();
    }
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    _swift_bridgeObjectRetain(puVar22);
    RVar10.unknown = RVar26.unknown;
    do {
      puVar22 = RVar10.unknown + 1;
      Swift::_ArrayBuffer::_typeCheckSlowPath
                ((__int64)RVar10.unknown,(_ArrayBuffer)*(undefined **)(unaff_x22 + 0x2e8));
      RVar10.unknown = puVar22;
    } while (_Var21.unknown != puVar22);
    puVar22 = *(undefined **)(unaff_x22 + 0x2e8);
    if ((ulong)puVar22 >> 0x3e != 0) goto LAB_10033966c;
LAB_100339724:
    in_x3 = (void *)((long)_Var21.unknown << 1);
    _Var11.unknown = puVar22 & 0xffffffffffffff8;
    _Var21.unknown = _Var11.unknown + 0x20;
LAB_1003396a0:
    p_Var12 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
    puVar22 = _Var11.unknown;
    _swift_unknownObjectRetain_n(_Var11.unknown,2);
    _swift_dynamicCastClass();
    if (puVar22 == (undefined *)0x0) {
      _swift_unknownObjectRelease(_Var11.unknown);
      puVar22 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    lVar32 = *(long *)(puVar22 + 0x10);
    _swift_release();
    puVar22 = (undefined *)((ulong)in_x3 >> 1);
    lVar6 = (long)puVar22 - (long)RVar26.unknown;
    if (SBORROW8((long)puVar22,(long)RVar26.unknown)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100339b18);
      (*pcVar5)();
    }
    if (lVar32 != lVar6) {
      _swift_unknownObjectRelease();
      puVar20 = RVar26.unknown;
      goto LAB_100339748;
    }
    _Var21.unknown = _Var11.unknown;
    _swift_dynamicCastClass(_Var11.unknown,p_Var12);
    _swift_unknownObjectRelease(_Var11.unknown);
    puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (_Var21.unknown != (undefined *)0x0) goto LAB_1003397e8;
  }
  _Var21.unknown = puVar13;
  _swift_unknownObjectRelease(_Var11.unknown);
LAB_1003397e8:
  *(undefined **)(unaff_x22 + 0x300) = _Var21.unknown;
  FUN_1000da768(unaff_x22 + 0x38);
  IVar8 = *(ID *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,IVar8);
  (**(code **)(lVar6 + 0x18))(IVar8,lVar6);
  *(ID *)(unaff_x22 + 0x308) = IVar8;
  FUN_100004594(unaff_x22 + 0x38);
  objc_stub::setUndoManager_(IVar8,0);
  objc_stub::setStalenessInterval_(IVar8,0);
  objc_stub::setMergePolicy_
            (IVar8,*(undefined8 *)PTR__NSMergeByPropertyObjectTrumpMergePolicy_100ea9a00);
  if (((long)_Var21.unknown < 0) || (((ulong)_Var21.unknown >> 0x3e & 1) != 0)) {
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
    *(long *)(unaff_x22 + 0x310) = lVar6;
  }
  else {
    lVar6 = *(long *)(_Var21.unknown + 0x10);
    *(long *)(unaff_x22 + 0x310) = lVar6;
  }
  if (lVar6 != 0) {
    *(undefined1 *)(unaff_x22 + 0xa2) = 0;
    *(undefined8 *)(unaff_x22 + 0x318) = uVar31;
    _Var18.unknown = *(undefined **)(unaff_x22 + 0x300);
    if (((ulong)_Var18.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(_Var18.unknown + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100339b28);
        (*pcVar5)();
      }
      uVar31 = *(undefined8 *)(_Var18.unknown + 0x20);
    }
    else {
      uVar31 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var18);
    }
    *(undefined8 *)(unaff_x22 + 800) = uVar31;
    *(undefined8 *)(unaff_x22 + 0x328) = 1;
    uVar28 = *(ulong *)(unaff_x22 + 0x208);
    plVar16 = (long *)0x220;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x330) = plVar16;
    *plVar16 = unaff_x22;
    plVar16[1] = (long)FUN_100337fd8;
    FUN_100334ea8(*(undefined8 *)(unaff_x22 + 0x200),uVar28 & 0xcfffffffffffffff,uVar31,
                  *(undefined8 *)(unaff_x22 + 0x210),*(undefined8 *)(unaff_x22 + 0x308));
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x358) = uVar31;
  _Var21.unknown = *(undefined **)(unaff_x22 + 0x300);
  if (((long)_Var21.unknown < 0) || (((ulong)_Var21.unknown >> 0x3e & 1) != 0)) {
    _Var23 = Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
    _Var21.unknown = *(undefined **)(unaff_x22 + 0x300);
  }
  else {
    _Var23 = *(__int64 *)(_Var21.unknown + 0x10);
  }
  *(__int64 *)(unaff_x22 + 0x360) = _Var23;
  _swift_release(_Var21.unknown);
  _swift_task_switch(FUN_100339060,0,0);
  return;
}



/* Address: 0x100339b28 | FUN_100339b28 */

void FUN_100339b28(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x390));
  uVar1 = *(undefined8 *)(lVar2 + 0x388);
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    _swift_release(uVar1);
    return;
  }
  (**(code **)(lVar2 + 0x288))(*(undefined8 *)(lVar2 + 0x248),*(undefined8 *)(lVar2 + 0x230));
  _swift_release(uVar1);
  _swift_task_switch(FUN_100339bb8,*(undefined8 *)(lVar2 + 0x290),*(undefined8 *)(lVar2 + 0x298));
  return;
}



/* Address: 0x100339bb8 | FUN_100339bb8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100339bb8(void)

{
  undefined4 uVar1;
  ID IVar2;
  CancellationError CVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  
  IVar2 = objc_stub::isCancelled(*(ID *)(unaff_x22 + 0x220));
  if ((IVar2 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2a8);
    CVar3 = Swift::CancellationError::typeMetadataAccessor();
    puVar4 = &DAT_100fc01e0;
    FUN_100003a00(&DAT_100fc01e0,PTR_typeMetadataAccessor_100eaeb38,
                  PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
    _swift_allocError(CVar3.unknown,puVar4,0,0);
    Swift::CancellationError::init();
    _swift_willThrow();
    _swift_release(uVar6);
    uVar6 = *(undefined8 *)(unaff_x22 + 600);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x240);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x260));
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100339c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x380);
  lVar7 = *(long *)(unaff_x22 + 0x2a8);
  if (*(long *)(lVar7 + 0x10) < *(long *)(unaff_x22 + 0x2a0)) {
    pcVar11 = *(code **)(unaff_x22 + 0x270);
    uVar1 = *(undefined4 *)(unaff_x22 + 0xa4);
    uVar6 = *(undefined8 *)(unaff_x22 + 600);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
    puVar4 = &DAT_100ecbb58;
    _swift_allocObject(&DAT_100ecbb58,0x28,7);
    *(undefined **)(unaff_x22 + 0x2d0) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = 0x19;
    *(long *)(puVar4 + 0x18) = lVar7;
    *(undefined8 *)(puVar4 + 0x20) = uVar9;
    (*pcVar11)(uVar6,uVar1,uVar8);
    plVar5 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
    _swift_retain(lVar7);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x2d8) = plVar5;
    FUN_1000037f0(&DAT_100fc0228,&DAT_100c42128);
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1003375e0;
    plVar5 = (long *)(unaff_x22 + 0x1e0);
  }
  else {
    pcVar11 = *(code **)(unaff_x22 + 0x270);
    uVar1 = *(undefined4 *)(unaff_x22 + 0xa4);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x218);
    puVar4 = &DAT_100ecbb30;
    _swift_allocObject(&DAT_100ecbb30,0x18,7);
    *(undefined **)(unaff_x22 + 0x398) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar9;
    (*pcVar11)(uVar6,uVar1,uVar8);
    plVar5 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3a0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100339e24;
  }
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar5);
  return;
}



/* Address: 0x100339e24 | FUN_100339e24 */

void FUN_100339e24(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x3a0));
  uVar1 = *(undefined8 *)(lVar2 + 0x398);
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    _swift_release(uVar1);
    return;
  }
  (**(code **)(lVar2 + 0x288))(*(undefined8 *)(lVar2 + 0x240),*(undefined8 *)(lVar2 + 0x230));
  _swift_release(uVar1);
  _swift_task_switch(FUN_100339eb4,*(undefined8 *)(lVar2 + 0x290),*(undefined8 *)(lVar2 + 0x298));
  return;
}



/* Address: 0x100339eb4 | FUN_100339eb4 */

void FUN_100339eb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar1 = *(undefined8 *)(unaff_x22 + 600);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100339f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100339f34 | FUN_100339f34 */

void FUN_100339f34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  (**(code **)(*(long *)(unaff_x22 + 0x238) + 8))
            (*(undefined8 *)(unaff_x22 + 0x260),*(undefined8 *)(unaff_x22 + 0x230));
  uVar1 = *(undefined8 *)(unaff_x22 + 600);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x240);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x260));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100339fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100339fbc | FUN_100339fbc */

void FUN_100339fbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2a8);
  (**(code **)(unaff_x22 + 0x288))
            (*(undefined8 *)(unaff_x22 + 600),*(undefined8 *)(unaff_x22 + 0x230));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 600);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x240);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x260));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010033a048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10033a04c | FUN_10033a04c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033a04c(void)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char *pcVar6;
  ID IVar7;
  CancellationError CVar8;
  Range<__int64> RVar9;
  _SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
  _Var10;
  __ContiguousArrayStorageBase *p_Var11;
  undefined *puVar12;
  undefined *puVar13;
  void *pvVar14;
  void *pvVar15;
  _StringGuts _Var16;
  _ArrayBuffer _Var17;
  char *pcVar18;
  undefined *puVar19;
  void *in_x3;
  void *pvVar20;
  _CocoaArrayWrapper _Var21;
  undefined *puVar22;
  long lVar23;
  __int64 _Var24;
  long lVar25;
  undefined8 uVar26;
  long *plVar27;
  void *pvVar28;
  Range<__int64> RVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  long unaff_x22;
  long lVar35;
  undefined8 uVar36;
  code *pcVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String separator;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String separator_00;
  
  (**(code **)(unaff_x22 + 0x288))
            (*(undefined8 *)(unaff_x22 + 0x250),*(undefined8 *)(unaff_x22 + 0x230));
  uVar26 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x338);
  pcVar6 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _Var16.unknown = (undefined *)0x40;
  pcVar18 = (char *)0x7;
  _swift_allocObject();
  pcVar6[0x18] = '\x02';
  pcVar6[0x19] = '\0';
  pcVar6[0x1a] = '\0';
  pcVar6[0x1b] = '\0';
  pcVar6[0x1c] = '\0';
  pcVar6[0x1d] = '\0';
  pcVar6[0x1e] = '\0';
  pcVar6[0x1f] = '\0';
  pcVar6[0x10] = '\x01';
  pcVar6[0x11] = '\0';
  pcVar6[0x12] = '\0';
  pcVar6[0x13] = '\0';
  pcVar6[0x14] = '\0';
  pcVar6[0x15] = '\0';
  pcVar6[0x16] = '\0';
  pcVar6[0x17] = '\0';
  *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x22 + 0x1b0) = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1e,_Var16);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x1b0);
  SVar40.bridgeObject = (void *)0x8000000100da2560;
  SVar40.str = (char *)0xd00000000000001c;
  SVar44.bridgeObject = in_x3;
  SVar44.str = pcVar18;
  Swift::String::append(SVar40,SVar44);
  _swift_getErrorValue(uVar26,unaff_x22 + 0x1c8,unaff_x22 + 0x140);
  Swift::DefaultStringInterpolation::_appendInterpolation
            (*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x148));
  uVar31 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(pcVar6 + 0x20) = uVar31;
  *(undefined8 *)(pcVar6 + 0x28) = uVar32;
  SVar38.bridgeObject = (void *)0x20;
  SVar38.str = pcVar6;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar38,separator);
  _swift_release(pcVar6);
  FUN_1000da768(unaff_x22 + 0x10);
  FUN_100bad754(0);
  FUN_100bac57c(uVar26);
  FUN_100004594(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar26;
  _swift_errorRetain(uVar26);
  puVar22 = &DAT_100fc1bb0;
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  uVar34 = unaff_x22 + 0xa8;
  _swift_dynamicCast(uVar34,unaff_x22 + 0x1c0,puVar22,&DAT_100ecba68,6);
  if ((uVar34 & 1) == 0) {
    lVar30 = *(long *)(unaff_x22 + 0x2b0);
    lVar23 = *(long *)(unaff_x22 + 0x228);
    pvVar20 = (void *)0x0;
    _swift_beginAccess(lVar23 + lVar30,unaff_x22 + 0x110,0x21);
    pvVar28 = *(void **)(lVar23 + lVar30);
    _swift_errorRetain(uVar26);
    pvVar15 = pvVar28;
    _swift_isUniquelyReferenced_nonNull_native();
    *(void **)(lVar23 + lVar30) = pvVar28;
    pvVar14 = pvVar28;
    if (((ulong)pvVar15 & 1) == 0) {
      lVar30 = *(long *)(unaff_x22 + 0x2b0);
      lVar23 = *(long *)(unaff_x22 + 0x228);
      pvVar14 = (void *)0x0;
      FUN_100380020(0,*(long *)((long)pvVar28 + 0x10) + 1,1);
      *(void **)(lVar23 + lVar30) = pvVar14;
      pvVar20 = pvVar28;
    }
    uVar34 = *(ulong *)((long)pvVar14 + 0x10);
    pvVar15 = pvVar14;
    if (*(ulong *)((long)pvVar14 + 0x18) >> 1 <= uVar34) {
      pvVar15 = (void *)(ulong)(1 < *(ulong *)((long)pvVar14 + 0x18));
      FUN_100380020(pvVar15,uVar34 + 1,1);
      pvVar20 = pvVar14;
    }
    lVar30 = *(long *)(unaff_x22 + 0x2b0);
    lVar23 = *(long *)(unaff_x22 + 0x228);
    *(ulong *)((long)pvVar15 + 0x10) = uVar34 + 1;
    *(undefined8 *)((long)pvVar15 + uVar34 * 8 + 0x20) = uVar26;
    *(void **)(lVar23 + lVar30) = pvVar15;
    _swift_endAccess(unaff_x22 + 0x110);
    _swift_errorRelease(uVar26);
    bVar5 = *(byte *)(unaff_x22 + 0xa1);
  }
  else {
    _swift_errorRelease(uVar26);
    pvVar20 = (void *)(ulong)*(byte *)(unaff_x22 + 0xc0);
    FUN_100331e98(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                  *(undefined8 *)(unaff_x22 + 0xb8));
    bVar5 = *(byte *)(unaff_x22 + 0xa1);
  }
  if ((bVar5 & 1) != 0) {
LAB_10033a2c0:
    *(undefined8 *)(unaff_x22 + 0x380) = uVar36;
    lVar30 = *(long *)(unaff_x22 + 0x2a8);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x2e8));
    lVar23 = *(long *)(lVar30 + 0x10);
    lVar30 = lVar23 + 0x19;
    if (SCARRY8(lVar23,0x19)) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x10033ab10);
      (*pcVar37)();
    }
    lVar23 = *(long *)(unaff_x22 + 0x2a0);
    *(long *)(*(long *)(unaff_x22 + 0x2a8) + 0x10) = lVar30;
    if (((lVar30 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8U >> 2 |
         lVar30 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) || (lVar23 <= lVar30)) {
      lVar25 = *(long *)(unaff_x22 + 0x2b0);
      lVar35 = *(long *)(unaff_x22 + 0x2a0);
      pcVar37 = *(code **)(unaff_x22 + 0x270);
      uVar4 = *(undefined4 *)(unaff_x22 + 0xa4);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x248);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x230);
      lVar33 = *(long *)(unaff_x22 + 0x228);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar23 = lVar35;
      if (lVar30 <= lVar35) {
        lVar23 = lVar30;
      }
      pcVar6 = &DAT_100fbec98;
      FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
      _Var16.unknown = (undefined *)0x40;
      pcVar18 = (char *)0x7;
      _swift_allocObject();
      pcVar6[0x18] = '\x02';
      pcVar6[0x19] = '\0';
      pcVar6[0x1a] = '\0';
      pcVar6[0x1b] = '\0';
      pcVar6[0x1c] = '\0';
      pcVar6[0x1d] = '\0';
      pcVar6[0x1e] = '\0';
      pcVar6[0x1f] = '\0';
      pcVar6[0x10] = '\x01';
      pcVar6[0x11] = '\0';
      pcVar6[0x12] = '\0';
      pcVar6[0x13] = '\0';
      pcVar6[0x14] = '\0';
      pcVar6[0x15] = '\0';
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = '\0';
      *(undefined8 *)(unaff_x22 + 0x158) = 0;
      *(undefined8 *)(unaff_x22 + 0x160) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x35,_Var16);
      *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x158);
      *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x160);
      SVar39.bridgeObject = (void *)0x8000000100da2580;
      SVar39.str = (char *)0xd000000000000014;
      SVar45.bridgeObject = pvVar20;
      SVar45.str = pcVar18;
      Swift::String::append(SVar39,SVar45);
      *(long *)(unaff_x22 + 0x1e8) = lVar23;
      SVar40 = Swift::CustomStringConvertible::get_description();
      SVar46.bridgeObject = pvVar20;
      SVar46.str = pcVar18;
      Swift::String::append(SVar40,SVar46);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      SVar41.bridgeObject = (void *)0xe100000000000000;
      SVar41.str = (char *)0x2f;
      SVar47.bridgeObject = pvVar20;
      SVar47.str = pcVar18;
      Swift::String::append(SVar41,SVar47);
      *(long *)(unaff_x22 + 0x1f0) = lVar35;
      SVar40 = Swift::CustomStringConvertible::get_description();
      SVar48.bridgeObject = pvVar20;
      SVar48.str = pcVar18;
      Swift::String::append(SVar40,SVar48);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      SVar42.bridgeObject = (void *)0x8000000100da25a0;
      SVar42.str = (char *)0xd00000000000001a;
      SVar49.bridgeObject = pvVar20;
      SVar49.str = pcVar18;
      Swift::String::append(SVar42,SVar49);
      *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(*(long *)(lVar33 + lVar25) + 0x10);
      SVar40 = Swift::CustomStringConvertible::get_description();
      SVar50.bridgeObject = pvVar20;
      SVar50.str = pcVar18;
      Swift::String::append(SVar40,SVar50);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar3 = *(undefined8 *)(unaff_x22 + 400);
      *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined8 *)(pcVar6 + 0x20) = uVar36;
      *(undefined8 *)(pcVar6 + 0x28) = uVar3;
      SVar43.bridgeObject = (void *)0x20;
      SVar43.str = pcVar6;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar43,separator_00);
      _swift_release(pcVar6);
      puVar22 = &DAT_100ecbba8;
      _swift_allocObject(&DAT_100ecbba8,0x18,7);
      *(undefined **)(unaff_x22 + 0x388) = puVar22;
      *(undefined8 *)(puVar22 + 0x10) = uVar26;
      (*pcVar37)(uVar31,uVar4,uVar32);
      plVar27 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x390) = plVar27;
      *plVar27 = unaff_x22;
      plVar27[1] = (long)FUN_100339b28;
    }
    else {
      IVar7 = objc_stub::isCancelled(*(ID *)(unaff_x22 + 0x220));
      if ((IVar7 & 1) != 0) {
        uVar31 = *(undefined8 *)(unaff_x22 + 0x2a8);
        CVar8 = Swift::CancellationError::typeMetadataAccessor();
        puVar22 = &DAT_100fc01e0;
        FUN_100003a00(&DAT_100fc01e0,PTR_typeMetadataAccessor_100eaeb38,
                      PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
        _swift_allocError(CVar8.unknown,puVar22,0,0);
        Swift::CancellationError::init();
        _swift_willThrow();
        _swift_release(uVar31);
        uVar31 = *(undefined8 *)(unaff_x22 + 600);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x250);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x248);
        uVar36 = *(undefined8 *)(unaff_x22 + 0x240);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x260));
        _swift_task_dealloc(uVar31);
        _swift_task_dealloc(uVar32);
        _swift_task_dealloc(uVar26);
        _swift_task_dealloc(uVar36);
                    /* WARNING: Could not recover jumptable at 0x00010033a3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x380);
      lVar30 = *(long *)(unaff_x22 + 0x2a8);
      if (*(long *)(lVar30 + 0x10) < *(long *)(unaff_x22 + 0x2a0)) {
        pcVar37 = *(code **)(unaff_x22 + 0x270);
        uVar4 = *(undefined4 *)(unaff_x22 + 0xa4);
        uVar31 = *(undefined8 *)(unaff_x22 + 600);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x230);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x210);
        puVar22 = &DAT_100ecbb58;
        _swift_allocObject(&DAT_100ecbb58,0x28,7);
        *(undefined **)(unaff_x22 + 0x2d0) = puVar22;
        *(undefined8 *)(puVar22 + 0x10) = 0x19;
        *(long *)(puVar22 + 0x18) = lVar30;
        *(undefined8 *)(puVar22 + 0x20) = uVar26;
        (*pcVar37)(uVar31,uVar4,uVar32);
        plVar27 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
        _swift_retain(lVar30);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x2d8) = plVar27;
        FUN_1000037f0(&DAT_100fc0228,&DAT_100c42128);
        *plVar27 = unaff_x22;
        plVar27[1] = (long)FUN_1003375e0;
        plVar27 = (long *)(unaff_x22 + 0x1e0);
      }
      else {
        pcVar37 = *(code **)(unaff_x22 + 0x270);
        uVar4 = *(undefined4 *)(unaff_x22 + 0xa4);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x240);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x230);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x218);
        puVar22 = &DAT_100ecbb30;
        _swift_allocObject(&DAT_100ecbb30,0x18,7);
        *(undefined **)(unaff_x22 + 0x398) = puVar22;
        *(undefined8 *)(puVar22 + 0x10) = uVar26;
        (*pcVar37)(uVar31,uVar4,uVar32);
        plVar27 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x3a0) = plVar27;
        *plVar27 = unaff_x22;
        plVar27[1] = (long)FUN_100339e24;
      }
    }
    (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar27);
    return;
  }
  RVar29.unknown = *(undefined **)(unaff_x22 + 0x2f8);
  _Var21.unknown = *(undefined **)(unaff_x22 + 0x2f0);
  if ((long)_Var21.unknown <= (long)RVar29.unknown) goto LAB_10033a2c0;
  puVar22 = RVar29.unknown + 5;
  *(undefined **)(unaff_x22 + 0x2f8) = puVar22;
  *(bool *)(unaff_x22 + 0xa1) = SCARRY8((long)RVar29.unknown,5);
  if (0x7ffffffffffffffa < (long)RVar29.unknown) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x10033ab60);
    (*pcVar37)();
  }
  if ((long)puVar22 <= (long)_Var21.unknown) {
    _Var21.unknown = puVar22;
  }
  if ((long)_Var21.unknown < (long)RVar29.unknown) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x10033ab64);
    (*pcVar37)();
  }
  puVar22 = *(undefined **)(unaff_x22 + 0x2e8);
  if ((ulong)puVar22 >> 0x3e == 0) {
    lVar30 = *(long *)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar22) {
      _Var1.unknown = puVar22;
    }
    lVar30 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar30 < (long)RVar29.unknown) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x10033ab68);
    (*pcVar37)();
  }
  if ((long)RVar29.unknown < 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x10033ab6c);
    (*pcVar37)();
  }
  puVar22 = *(undefined **)(unaff_x22 + 0x2e8);
  if ((ulong)puVar22 >> 0x3e == 0) {
    lVar30 = *(long *)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar22) {
      _Var1.unknown = puVar22;
    }
    lVar30 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar30 < (long)_Var21.unknown) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x10033ab70);
    (*pcVar37)();
  }
  puVar22 = *(undefined **)(unaff_x22 + 0x2e8);
  if ((RVar29.unknown == _Var21.unknown) || (((ulong)puVar22 & 0xc000000000000001) == 0)) {
    _swift_bridgeObjectRetain(puVar22);
    if ((ulong)puVar22 >> 0x3e == 0) goto LAB_10033a7a4;
LAB_10033a6ec:
    _swift_bridgeObjectRelease(puVar22);
    puVar19 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar22) {
      puVar19 = puVar22;
    }
    _Var10 = Swift::_CocoaArrayWrapper::_get_subscript(RVar29,_Var21);
    RVar29.unknown = puVar19;
    if (((ulong)pvVar20 & 1) != 0) goto LAB_10033a720;
    puVar22 = (undefined *)((ulong)pvVar20 >> 1);
    lVar30 = (long)puVar22 - (long)puVar19;
    if (SBORROW8((long)puVar22,(long)puVar19)) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x10033abf0);
      (*pcVar37)();
    }
LAB_10033a7c8:
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar30 != 0) {
      if (0 < lVar30) {
        puVar12 = &DAT_100fbe4e8;
        FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
        _swift_allocObject();
        puVar13 = puVar12;
        _malloc_size();
        puVar2 = puVar13 + -0x19;
        if (0x1f < (long)puVar13) {
          puVar2 = puVar13 + -0x20;
        }
        *(long *)(puVar12 + 0x10) = lVar30;
        *(ulong *)(puVar12 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
      }
      if (puVar19 == puVar22) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x10033ab0c);
        (*pcVar37)();
      }
      uVar31 = 0;
      FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
      _swift_arrayInitWithCopy(puVar12 + 0x20,_Var21.unknown + (long)puVar19 * 8,lVar30,uVar31);
    }
  }
  else {
    if (_Var21.unknown <= RVar29.unknown) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x10033abe0);
      (*pcVar37)();
    }
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    _swift_bridgeObjectRetain(puVar22);
    RVar9.unknown = RVar29.unknown;
    do {
      puVar22 = RVar9.unknown + 1;
      Swift::_ArrayBuffer::_typeCheckSlowPath
                ((__int64)RVar9.unknown,(_ArrayBuffer)*(undefined **)(unaff_x22 + 0x2e8));
      RVar9.unknown = puVar22;
    } while (_Var21.unknown != puVar22);
    puVar22 = *(undefined **)(unaff_x22 + 0x2e8);
    if ((ulong)puVar22 >> 0x3e != 0) goto LAB_10033a6ec;
LAB_10033a7a4:
    pvVar20 = (void *)((long)_Var21.unknown << 1);
    _Var10.unknown = puVar22 & 0xffffffffffffff8;
    _Var21.unknown = _Var10.unknown + 0x20;
LAB_10033a720:
    p_Var11 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
    puVar22 = _Var10.unknown;
    _swift_unknownObjectRetain_n(_Var10.unknown,2);
    _swift_dynamicCastClass();
    if (puVar22 == (undefined *)0x0) {
      _swift_unknownObjectRelease(_Var10.unknown);
      puVar22 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    lVar23 = *(long *)(puVar22 + 0x10);
    _swift_release();
    puVar22 = (undefined *)((ulong)pvVar20 >> 1);
    lVar30 = (long)puVar22 - (long)RVar29.unknown;
    if (SBORROW8((long)puVar22,(long)RVar29.unknown)) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x10033abe4);
      (*pcVar37)();
    }
    if (lVar23 != lVar30) {
      _swift_unknownObjectRelease();
      puVar19 = RVar29.unknown;
      goto LAB_10033a7c8;
    }
    _Var21.unknown = _Var10.unknown;
    _swift_dynamicCastClass(_Var10.unknown,p_Var11);
    _swift_unknownObjectRelease(_Var10.unknown);
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (_Var21.unknown != (undefined *)0x0) goto LAB_10033a868;
  }
  _Var21.unknown = puVar12;
  _swift_unknownObjectRelease(_Var10.unknown);
LAB_10033a868:
  *(undefined **)(unaff_x22 + 0x300) = _Var21.unknown;
  FUN_1000da768(unaff_x22 + 0x38);
  IVar7 = *(ID *)(unaff_x22 + 0x50);
  lVar30 = *(long *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,IVar7);
  (**(code **)(lVar30 + 0x18))(IVar7,lVar30);
  *(ID *)(unaff_x22 + 0x308) = IVar7;
  FUN_100004594(unaff_x22 + 0x38);
  objc_stub::setUndoManager_(IVar7,0);
  objc_stub::setStalenessInterval_(IVar7,0);
  objc_stub::setMergePolicy_
            (IVar7,*(undefined8 *)PTR__NSMergeByPropertyObjectTrumpMergePolicy_100ea9a00);
  if (((long)_Var21.unknown < 0) || (((ulong)_Var21.unknown >> 0x3e & 1) != 0)) {
    lVar30 = Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
    *(long *)(unaff_x22 + 0x310) = lVar30;
  }
  else {
    lVar30 = *(long *)(_Var21.unknown + 0x10);
    *(long *)(unaff_x22 + 0x310) = lVar30;
  }
  if (lVar30 != 0) {
    *(undefined1 *)(unaff_x22 + 0xa2) = 0;
    *(undefined8 *)(unaff_x22 + 0x318) = uVar36;
    _Var17.unknown = *(undefined **)(unaff_x22 + 0x300);
    if (((ulong)_Var17.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(_Var17.unknown + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x10033abf4);
        (*pcVar37)();
      }
      uVar31 = *(undefined8 *)(_Var17.unknown + 0x20);
    }
    else {
      uVar31 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var17);
    }
    *(undefined8 *)(unaff_x22 + 800) = uVar31;
    *(undefined8 *)(unaff_x22 + 0x328) = 1;
    uVar34 = *(ulong *)(unaff_x22 + 0x208);
    plVar27 = (long *)0x220;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x330) = plVar27;
    *plVar27 = unaff_x22;
    plVar27[1] = (long)FUN_100337fd8;
    FUN_100334ea8(*(undefined8 *)(unaff_x22 + 0x200),uVar34 & 0xcfffffffffffffff,uVar31,
                  *(undefined8 *)(unaff_x22 + 0x210),*(undefined8 *)(unaff_x22 + 0x308));
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x358) = uVar36;
  _Var21.unknown = *(undefined **)(unaff_x22 + 0x300);
  if (((long)_Var21.unknown < 0) || (((ulong)_Var21.unknown >> 0x3e & 1) != 0)) {
    _Var24 = Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
    _Var21.unknown = *(undefined **)(unaff_x22 + 0x300);
  }
  else {
    _Var24 = *(__int64 *)(_Var21.unknown + 0x10);
  }
  *(__int64 *)(unaff_x22 + 0x360) = _Var24;
  _swift_release(_Var21.unknown);
  _swift_task_switch(FUN_100339060,0,0);
  return;
}



/* Address: 0x10033abf4 | FUN_10033abf4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033abf4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10033ac18 | FUN_10033ac18 */

void FUN_10033ac18(void)

{
  long unaff_x20;
  
  FUN_100334c10(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10033ac30 | FUN_10033ac30 */

void FUN_10033ac30(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10033ac40 | FUN_10033ac40 */

void FUN_10033ac40(void)

{
  long unaff_x20;
  
  FUN_100335b70(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10033ac58 | FUN_10033ac58 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033ac58(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10033ac84 | FUN_10033ac84 */

void FUN_10033ac84(void)

{
  long unaff_x20;
  
  FUN_100334ce4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10033aca0 | FUN_10033aca0 */

void FUN_10033aca0(void)

{
  ID IVar1;
  long unaff_x20;
  ID self;
  undefined1 auStack_40 [16];
  ID local_30;
  
  self = *(ID *)(unaff_x20 + 0x10);
  IVar1 = objc_stub::hasChanges(self);
  if ((int)IVar1 != 0) {
    local_30 = self;
    FUN_1002ff9c8(FUN_10030844c,auStack_40);
  }
  return;
}



/* Address: 0x10033acf4 | FUN_10033acf4 */

void FUN_10033acf4(void)

{
  long unaff_x20;
  
  objc_stub::refreshAllObjects(*(ID *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10033ad1c | FUN_10033ad1c */

void FUN_10033ad1c(undefined8 param_1)

{
  if (DAT_100fc0300 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cac678);
  return;
}



/* Address: 0x10033ad54 | FUN_10033ad54 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033ad54(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10033ad80 | FUN_10033ad80 */

void FUN_10033ad80(void)

{
  long unaff_x20;
  
  FUN_100335dd0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10033ad98 | FUN_10033ad98 */

void FUN_10033ad98(void)

{
  long unaff_x20;
  
  FUN_1003348c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fc1aa0,
                &PTR__OBJC_CLASS___NSAttributedString_100f8d688);
  return;
}



/* Address: 0x10033adc4 | FUN_10033adc4 */

void FUN_10033adc4(void)

{
  long unaff_x20;
  
  FUN_1003347c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),PTR___type_metadata_for_Swift_Int_100eac6f8);
  return;
}



/* Address: 0x10033ade8 | FUN_10033ade8 */

void FUN_10033ade8(void)

{
  long unaff_x20;
  
  FUN_1003346b4(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbf838,&DAT_100c43280);
  return;
}



/* Address: 0x10033ae1c | FUN_10033ae1c */

void FUN_10033ae1c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0xb) {
    return;
  }
  FUN_10003bf18();
  return;
}



/* Address: 0x10033ae30 | FUN_10033ae30 */

void FUN_10033ae30(void)

{
  long unaff_x20;
  
  FUN_100334ad8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe650,&DAT_100c40760,
                PTR_typeMetadataAccessor_100ea71a8);
  return;
}


