/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a36eec | FUN_100a36eec */

void FUN_100a36eec(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100a36ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x18) + 0x50))(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100a36ef8 | FUN_100a36ef8 */

void FUN_100a36ef8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100a36f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x18) + 0x58))(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100a36f04 | thunk_FUN_100a36c68 */

void thunk_FUN_100a36c68(void)

{
  FUN_100a36c68();
  return;
}



/* Address: 0x100a36f08 | thunk_FUN_100a36ce0 */

void thunk_FUN_100a36ce0(void)

{
  FUN_100a36ce0();
  return;
}



/* Address: 0x100a36f0c | thunk_FUN_100a36d58 */

void thunk_FUN_100a36d58(void)

{
  FUN_100a36d58();
  return;
}



/* Address: 0x100a36f10 | thunk_FUN_100a36dd0 */

void thunk_FUN_100a36dd0(void)

{
  FUN_100a36dd0();
  return;
}



/* Address: 0x100a36f14 | thunk_FUN_100a36e50 */

void thunk_FUN_100a36e50(void)

{
  FUN_100a36e50();
  return;
}



/* Address: 0x100a36f18 | thunk_FUN_100a36ec8 */

void thunk_FUN_100a36ec8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100a36ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x18) + 0x38))(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100a36f1c | thunk_FUN_100a36ed4 */

void thunk_FUN_100a36ed4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100a36edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x18) + 0x40))(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100a36f20 | thunk_FUN_100a36ee0 */

void thunk_FUN_100a36ee0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100a36ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x18) + 0x48))(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100a36f24 | thunk_FUN_100a36eec */

void thunk_FUN_100a36eec(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100a36ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x18) + 0x50))(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100a36f28 | thunk_FUN_100a36ef8 */

void thunk_FUN_100a36ef8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100a36f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x18) + 0x58))(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100a36f2c | FUN_100a36f2c */

void FUN_100a36f2c(void)

{
  FUN_100a36f34(0);
  return;
}



/* Address: 0x100a36f34 | FUN_100a36f34 */

void FUN_100a36f34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (DAT_100ff5890 != 0) {
    return;
  }
  puVar1 = &DAT_100ff5898;
  FUN_1000f8b08(&DAT_100ff5898,0x100c8f2b8);
  puVar2 = &DAT_100ff58a0;
  FUN_1000f8b08(&DAT_100ff58a0,0x100c8f2c0);
  uVar3 = 0x44000002;
  _swift_getFunctionTypeMetadata2
            (0x44000002,PTR___type_metadata_for_Swift_String_100eac208,puVar2,puVar1);
  DAT_100ff5890 = uVar3;
  return;
}



/* Address: 0x100a36fb8 | FUN_100a36fb8 */

void FUN_100a36fb8(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  pthread_rwlock_t *ppVar5;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(10,0xf,0);
  if ((bVar3 & 1) == 0) {
    if (DAT_100ff58a8 != -1) {
      _swift_once(&DAT_100ff58a8,FUN_100a3a468);
    }
    lVar1 = DAT_100ff58b0;
    ppVar5 = *(pthread_rwlock_t **)(*(long *)(DAT_100ff58b0 + 0x10) + 0x10);
    iVar4 = _pthread_rwlock_rdlock(ppVar5);
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3713c);
      (*pcVar2)();
    }
    _swift_beginAccess(lVar1 + 0x18,&local_58,0,0);
    FUN_100076688(lVar1 + 0x18,param_1);
    iVar4 = _pthread_rwlock_unlock(ppVar5);
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a37140);
      (*pcVar2)();
    }
  }
  else {
    if (DAT_100ff58b8 != -1) {
      _swift_once(&DAT_100ff58b8,FUN_100a3a66c);
    }
    Swift::TaskLocal::get(DAT_1010582c8);
    uStack_78 = uStack_50;
    local_80 = local_58;
    local_68 = lStack_40;
    uStack_70 = local_48;
    local_60 = local_38;
    if (lStack_40 == 0) {
      if (DAT_100ff58a8 != -1) {
        _swift_once(&DAT_100ff58a8,FUN_100a3a468);
      }
      lVar1 = DAT_100ff58b0;
      ppVar5 = *(pthread_rwlock_t **)(*(long *)(DAT_100ff58b0 + 0x10) + 0x10);
      iVar4 = _pthread_rwlock_rdlock(ppVar5);
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3715c);
        (*pcVar2)();
      }
      _swift_beginAccess(lVar1 + 0x18,auStack_98,0,0);
      FUN_100076688(lVar1 + 0x18,param_1);
      iVar4 = _pthread_rwlock_unlock(ppVar5);
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a37160);
        (*pcVar2)();
      }
      if (local_68 != 0) {
        FUN_100a3a6cc(&local_80);
      }
    }
    else {
      FUN_100076508(&local_80,param_1);
    }
  }
  return;
}



/* Address: 0x100a37160 | FUN_100a37160 */

void FUN_100a37160(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  (**(code **)(lVar1 + 0x10))(1,uVar2,lVar1);
  return;
}



/* Address: 0x100a371a4 | FUN_100a371a4 */

long FUN_100a371a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100a36fb8(auStack_78);
  FUN_100004640(auStack_78,local_60);
  uVar1 = param_1;
  uVar2 = param_2;
  (**(code **)(lStack_58 + 0x10))(param_1,param_2,param_3,local_60,lStack_58);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  FUN_100076508(auStack_78,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a3725c | FUN_100a3725c */

long FUN_100a3725c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  lVar2 = *(long *)(param_4 + 0x20);
  FUN_100004640(param_4,uVar1);
  uVar3 = param_1;
  uVar4 = param_2;
  (**(code **)(lVar2 + 0x10))(param_1,param_2,param_3,uVar1,lVar2);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  FUN_100076508(param_4,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a37308 | FUN_100a37308 */

void FUN_100a37308(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  FUN_100004640(unaff_x20 + 0x20,uVar1);
  (**(code **)(lVar2 + 0x38))
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),uVar1,lVar2);
  return;
}



/* Address: 0x100a37354 | FUN_100a37354 */

void FUN_100a37354(void)

{
  FUN_100a3a378(0x1b,0x287265746e756f43,&DAT_e800000000000000);
  return;
}



/* Address: 0x100a37370 | FUN_100a37370 */

void FUN_100a37370(void)

{
  FUN_100a37354();
  return;
}



/* Address: 0x100a37390 | thunk_FUN_100a38848 */

void thunk_FUN_100a38848(void)

{
  FUN_100a38848();
  return;
}



/* Address: 0x100a37394 | thunk_FUN_100a388c0 */

void thunk_FUN_100a388c0(void)

{
  FUN_100a388c0();
  return;
}



/* Address: 0x100a37398 | thunk_FUN_100a388ec */

void thunk_FUN_100a388ec(void)

{
  FUN_100a388ec();
  return;
}



/* Address: 0x100a3739c | FUN_100a3739c */

void FUN_100a3739c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar5 = *(long *)(param_2 + -8);
  puVar4 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,param_1,param_2);
  FUN_100a3a754();
  (extension_Swift)::Swift::BinaryFloatingPoint::_init
            (&local_68,puVar4,PTR___type_metadata_for_Swift_Double_100eac5d0,param_2,puVar3,param_3)
  ;
  (**(code **)(lVar1 + 0x10))(local_68,uVar2,lVar1);
  return;
}



/* Address: 0x100a37468 | FUN_100a37468 */

void FUN_100a37468(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x10))(0x3ff0000000000000);
  return;
}



/* Address: 0x100a374a8 | thunk_FUN_100a374ac */

void thunk_FUN_100a374ac(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x18))();
  return;
}



/* Address: 0x100a374ac | FUN_100a374ac */

void FUN_100a374ac(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x18))();
  return;
}



/* Address: 0x100a374e8 | thunk_FUN_100a39f78 */

void thunk_FUN_100a39f78(void)

{
  FUN_100a39f78();
  return;
}



/* Address: 0x100a374ec | FUN_100a374ec */

void FUN_100a374ec(void)

{
  FUN_100a39fac(0x60);
  return;
}



/* Address: 0x100a374f4 | FUN_100a374f4 */

long FUN_100a374f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100a36fb8(auStack_78);
  FUN_100004640(auStack_78,local_60);
  uVar1 = param_1;
  uVar2 = param_2;
  (**(code **)(lStack_58 + 0x18))(param_1,param_2,param_3,local_60,lStack_58);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  FUN_100076508(auStack_78,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a375ac | FUN_100a375ac */

long FUN_100a375ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  lVar2 = *(long *)(param_4 + 0x20);
  FUN_100004640(param_4,uVar1);
  uVar3 = param_1;
  uVar4 = param_2;
  (**(code **)(lVar2 + 0x18))(param_1,param_2,param_3,uVar1,lVar2);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  FUN_100076508(param_4,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a37658 | FUN_100a37658 */

void FUN_100a37658(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  FUN_100004640(unaff_x20 + 0x20,uVar1);
  (**(code **)(lVar2 + 0x48))
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),uVar1,lVar2);
  return;
}



/* Address: 0x100a376a4 | FUN_100a376a4 */

undefined1  [16] FUN_100a376a4(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  
  Swift::_StringGuts::grow(0x28,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 0x48),SVar6);
  SVar4.bridgeObject = (void *)0xee00203a736e6f69;
  SVar4.str = (char *)0x736e656d6964202c;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar4,SVar7);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar2 = &DAT_100ff58d0;
  FUN_1000f7830(&DAT_100ff58d0,0x100c8f348);
  SVar4 = Swift::Array<undefined>::get_description(uVar3,puVar2);
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar4,SVar8);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x29;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar5,SVar9);
  auVar1._8_8_ = 0x8000000100db83c0;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Address: 0x100a37780 | FUN_100a37780 */

void FUN_100a37780(void)

{
  FUN_100a376a4();
  return;
}



/* Address: 0x100a377a0 | FUN_100a377a0 */

long FUN_100a377a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100a36fb8(auStack_78);
  FUN_100004640(auStack_78,local_60);
  uVar1 = param_1;
  uVar2 = param_2;
  (**(code **)(lStack_58 + 0x28))(param_1,param_2,param_3,0,local_60,lStack_58);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined1 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  FUN_100076508(auStack_78,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a37860 | FUN_100a37860 */

undefined8
FUN_100a37860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100a36fb8(auStack_78);
  FUN_100004640(auStack_78,local_60);
  uVar1 = param_1;
  uVar2 = param_2;
  (**(code **)(lStack_58 + 0x28))(param_1,param_2,param_3,param_4,local_60,lStack_58);
  FUN_100076688(auStack_78,auStack_a0);
  (**(code **)(unaff_x20 + 0x78))(param_1,param_2,param_3,param_4,uVar1,uVar2,auStack_a0);
  FUN_100004594(auStack_78);
  return param_1;
}



/* Address: 0x100a37934 | FUN_100a37934 */

long FUN_100a37934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100076688(param_4,auStack_78);
  FUN_100004640(auStack_78,local_60);
  uVar1 = param_1;
  uVar2 = param_2;
  (**(code **)(lStack_58 + 0x28))(param_1,param_2,param_3,0,local_60,lStack_58);
  FUN_100004594(param_4);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined1 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  FUN_100076508(auStack_78,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a37a04 | FUN_100a37a04 */

undefined8
FUN_100a37a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  lVar2 = *(long *)(param_5 + 0x20);
  FUN_100004640(param_5,uVar1);
  uVar3 = param_1;
  uVar4 = param_2;
  (**(code **)(lVar2 + 0x28))(param_1,param_2,param_3,param_4,uVar1,lVar2);
  FUN_100076688(param_5,auStack_88);
  (**(code **)(unaff_x20 + 0x78))(param_1,param_2,param_3,param_4,uVar3,uVar4,auStack_88);
  FUN_100004594(param_5);
  return param_1;
}



/* Address: 0x100a37adc | thunk_FUN_100a38480 */

void thunk_FUN_100a38480(void)

{
  FUN_100a38480();
  return;
}



/* Address: 0x100a37ae0 | thunk_FUN_100a37ae4 */

void thunk_FUN_100a37ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined1 *)(unaff_x20 + 0x60) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  FUN_100076508(param_7,unaff_x20 + 0x20);
  return;
}



/* Address: 0x100a37ae4 | FUN_100a37ae4 */

void FUN_100a37ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined1 *)(unaff_x20 + 0x60) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  FUN_100076508(param_7,unaff_x20 + 0x20);
  return;
}



/* Address: 0x100a37b14 | FUN_100a37b14 */

void FUN_100a37b14(void)

{
  FUN_100a39fac(0x61);
  return;
}



/* Address: 0x100a37b1c | thunk_FUN_100a37b20 */

void thunk_FUN_100a37b20(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  __int64 _Var4;
  __uint64 _Var5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar8 = *(long *)(param_2 + -8);
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)(auStack_80 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) - uVar7;
  lVar9 = lVar10 - uVar7;
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x10);
  lStack_70 = *(long *)(unaff_x20 + 0x18);
  (**(code **)(lVar8 + 0x10))(lVar9,param_1,param_2);
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if ((bVar2) && (_Var4 = Swift::BinaryInteger::get_bitWidth(), 0x40 < _Var4)) {
    uStack_68 = 0x8000000000000000;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    if (bVar2) {
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (0x3f < _Var4) {
LAB_100a37c6c:
        FUN_100a3a714();
        Swift::BinaryInteger::_init
                  (lVar10,&uStack_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,
                   param_3);
        bVar2 = Swift::Comparable::<_infix
                          (lVar9,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar8 + 8))(lVar10,param_2);
        if (bVar2) {
LAB_100a37ec8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a37ecc);
          (*pcVar1)();
        }
        goto LAB_100a37d68;
      }
    }
    else {
      bVar2 = Swift::BinaryInteger::get_isSigned();
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (bVar2) {
        if (0x40 < _Var4) goto LAB_100a37c6c;
        _swift_getAssociatedConformanceWitness
                  (uVar11,param_2,lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init
                  (auStack_80 + -(lVar6 + 0xfU & 0xfffffffffffffff0),&DAT_100c6c6b8,0x100,lVar3,
                   uVar11);
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar2 = Swift::Comparable::<_infix
                          (lVar9,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar8 + 8))(lVar10,param_2);
        if (bVar2) goto LAB_100a37ec8;
      }
      else if (0x3f < _Var4) goto LAB_100a37d68;
    }
    Swift::BinaryInteger::get__lowWord();
  }
LAB_100a37d68:
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if ((_Var4 < 0x41) &&
     ((_Var4 = Swift::BinaryInteger::get_bitWidth(), _Var4 != 0x40 ||
      (bVar2 = Swift::BinaryInteger::get_isSigned(), bVar2)))) goto LAB_100a37e5c;
  uStack_68 = 0x7fffffffffffffff;
  bVar2 = Swift::BinaryInteger::get_isSigned();
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if (bVar2) {
    if (_Var4 < 0x41) {
LAB_100a37e4c:
      Swift::BinaryInteger::get__lowWord();
      goto LAB_100a37e5c;
    }
  }
  else if (_Var4 < 0x40) goto LAB_100a37e4c;
  FUN_100a3a714();
  Swift::BinaryInteger::_init
            (lVar10,&uStack_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,param_3);
  bVar2 = Swift::Comparable::<_infix
                    (lVar10,lVar9,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
  (**(code **)(lVar8 + 8))(lVar10,param_2);
  if (bVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a37e14);
    (*pcVar1)();
  }
LAB_100a37e5c:
  uVar11 = uStack_78;
  _swift_getObjectType(uStack_78);
  _Var5 = Swift::BinaryInteger::get__lowWord();
  (**(code **)(lVar8 + 8))(lVar9,param_2);
  (**(code **)(lStack_70 + 0x10))(_Var5,uVar11);
  return;
}



/* Address: 0x100a37b20 | FUN_100a37b20 */

void FUN_100a37b20(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  __int64 _Var4;
  __uint64 _Var5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar8 = *(long *)(param_2 + -8);
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)(auStack_80 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) - uVar7;
  lVar9 = lVar10 - uVar7;
  local_78 = *(undefined8 *)(unaff_x20 + 0x10);
  local_70 = *(long *)(unaff_x20 + 0x18);
  (**(code **)(lVar8 + 0x10))(lVar9,param_1,param_2);
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if ((bVar2) && (_Var4 = Swift::BinaryInteger::get_bitWidth(), 0x40 < _Var4)) {
    local_68 = 0x8000000000000000;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    if (bVar2) {
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (0x3f < _Var4) {
LAB_100a37c6c:
        FUN_100a3a714();
        Swift::BinaryInteger::_init
                  (lVar10,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,
                   param_3);
        bVar2 = Swift::Comparable::<_infix
                          (lVar9,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar8 + 8))(lVar10,param_2);
        if (bVar2) {
LAB_100a37ec8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a37ecc);
          (*pcVar1)();
        }
        goto LAB_100a37d68;
      }
    }
    else {
      bVar2 = Swift::BinaryInteger::get_isSigned();
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (bVar2) {
        if (0x40 < _Var4) goto LAB_100a37c6c;
        _swift_getAssociatedConformanceWitness
                  (uVar11,param_2,lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init
                  (auStack_80 + -(lVar6 + 0xfU & 0xfffffffffffffff0),&DAT_100c6c6b8,0x100,lVar3,
                   uVar11);
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar2 = Swift::Comparable::<_infix
                          (lVar9,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar8 + 8))(lVar10,param_2);
        if (bVar2) goto LAB_100a37ec8;
      }
      else if (0x3f < _Var4) goto LAB_100a37d68;
    }
    Swift::BinaryInteger::get__lowWord();
  }
LAB_100a37d68:
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if ((_Var4 < 0x41) &&
     ((_Var4 = Swift::BinaryInteger::get_bitWidth(), _Var4 != 0x40 ||
      (bVar2 = Swift::BinaryInteger::get_isSigned(), bVar2)))) goto LAB_100a37e5c;
  local_68 = 0x7fffffffffffffff;
  bVar2 = Swift::BinaryInteger::get_isSigned();
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if (bVar2) {
    if (_Var4 < 0x41) {
LAB_100a37e4c:
      Swift::BinaryInteger::get__lowWord();
      goto LAB_100a37e5c;
    }
  }
  else if (_Var4 < 0x40) goto LAB_100a37e4c;
  FUN_100a3a714();
  Swift::BinaryInteger::_init
            (lVar10,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,param_3);
  bVar2 = Swift::Comparable::<_infix
                    (lVar10,lVar9,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
  (**(code **)(lVar8 + 8))(lVar10,param_2);
  if (bVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a37e14);
    (*pcVar1)();
  }
LAB_100a37e5c:
  uVar11 = local_78;
  _swift_getObjectType(local_78);
  _Var5 = Swift::BinaryInteger::get__lowWord();
  (**(code **)(lVar8 + 8))(lVar9,param_2);
  (**(code **)(local_70 + 0x10))(_Var5,uVar11);
  return;
}



/* Address: 0x100a37ecc | thunk_FUN_100a37ed0 */

void thunk_FUN_100a37ed0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar5 = *(long *)(param_2 + -8);
  puVar4 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,param_1,param_2);
  FUN_100a3a754();
  (extension_Swift)::Swift::BinaryFloatingPoint::_init
            (&uStack_68,puVar4,PTR___type_metadata_for_Swift_Double_100eac5d0,param_2,puVar3,param_3
            );
  (**(code **)(lVar1 + 0x18))(uStack_68,uVar2,lVar1);
  return;
}



/* Address: 0x100a37ed0 | FUN_100a37ed0 */

void FUN_100a37ed0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar5 = *(long *)(param_2 + -8);
  puVar4 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,param_1,param_2);
  FUN_100a3a754();
  (extension_Swift)::Swift::BinaryFloatingPoint::_init
            (&local_68,puVar4,PTR___type_metadata_for_Swift_Double_100eac5d0,param_2,puVar3,param_3)
  ;
  (**(code **)(lVar1 + 0x18))(local_68,uVar2,lVar1);
  return;
}



/* Address: 0x100a37f9c | FUN_100a37f9c */

void FUN_100a37f9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar5 = *(long *)(param_2 + -8);
  puVar4 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,param_1,param_2);
  FUN_100a3a754();
  (extension_Swift)::Swift::BinaryFloatingPoint::_init
            (&local_68,puVar4,PTR___type_metadata_for_Swift_Double_100eac5d0,param_2,puVar3,param_3)
  ;
  (**(code **)(lVar1 + 0x20))(local_68,uVar2,lVar1);
  return;
}



/* Address: 0x100a38068 | FUN_100a38068 */

void FUN_100a38068(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x20))(0x3ff0000000000000);
  return;
}



/* Address: 0x100a380a8 | FUN_100a380a8 */

void FUN_100a380a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar5 = *(long *)(param_2 + -8);
  puVar4 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,param_1,param_2);
  FUN_100a3a754();
  (extension_Swift)::Swift::BinaryFloatingPoint::_init
            (&local_68,puVar4,PTR___type_metadata_for_Swift_Double_100eac5d0,param_2,puVar3,param_3)
  ;
  (**(code **)(lVar1 + 0x28))(local_68,uVar2,lVar1);
  return;
}



/* Address: 0x100a38174 | FUN_100a38174 */

void FUN_100a38174(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x28))(0x3ff0000000000000);
  return;
}



/* Address: 0x100a381b4 | FUN_100a381b4 */

long FUN_100a381b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  lVar2 = *(long *)(param_4 + 0x20);
  FUN_100004640(param_4,uVar1);
  uVar3 = param_1;
  uVar4 = param_2;
  (**(code **)(lVar2 + 0x20))(param_1,param_2,param_3,uVar1,lVar2);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  FUN_100076508(param_4,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a38260 | FUN_100a38260 */

long FUN_100a38260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100a36fb8(auStack_78);
  FUN_100004640(auStack_78,local_60);
  uVar1 = param_1;
  uVar2 = param_2;
  (**(code **)(lStack_58 + 0x20))(param_1,param_2,param_3,local_60,lStack_58);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  FUN_100076508(auStack_78,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a38318 | FUN_100a38318 */

void FUN_100a38318(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  FUN_100004640(unaff_x20 + 0x20,uVar1);
  (**(code **)(lVar2 + 0x40))
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),uVar1,lVar2);
  return;
}



/* Address: 0x100a38364 | FUN_100a38364 */

String FUN_100a38364(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  
  Swift::_StringGuts::grow(0x16,param_2);
  SVar3 = Swift::__typeName(SUB81(*unaff_x20,0));
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x28;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar5,SVar7);
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 9),SVar8);
  SVar4.bridgeObject = (void *)0xee00203a736e6f69;
  SVar4.str = (char *)0x736e656d6964202c;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar4,SVar9);
  uVar2 = unaff_x20[0xb];
  puVar1 = &DAT_100ff58d0;
  FUN_1000f7830(&DAT_100ff58d0,0x100c8f348);
  SVar5 = Swift::Array<undefined>::get_description(uVar2,puVar1);
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar5,SVar10);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar6.bridgeObject = (void *)0xe100000000000000;
  SVar6.str = (char *)0x29;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar6,SVar11);
  return SVar3;
}



/* Address: 0x100a38458 | FUN_100a38458 */

void FUN_100a38458(void)

{
  FUN_100a38364();
  return;
}



/* Address: 0x100a38478 | FUN_100a38478 */

undefined1 FUN_100a38478(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x60);
}



/* Address: 0x100a38480 | FUN_100a38480 */

long FUN_100a38480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined1 *)(unaff_x20 + 0x60) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  FUN_100076508(param_7,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a38500 | FUN_100a38500 */

void FUN_100a38500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_78 [40];
  
  FUN_100a36fb8(auStack_78);
  (**(code **)(unaff_x20 + 0x78))(param_1,param_2,param_3,param_4,param_5,param_6,auStack_78);
  return;
}



/* Address: 0x100a3857c | FUN_100a3857c */

void FUN_100a3857c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  FUN_100004640(unaff_x20 + 0x20,uVar1);
  (**(code **)(lVar2 + 0x50))
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),uVar1,lVar2);
  return;
}



/* Address: 0x100a385c8 | FUN_100a385c8 */

String FUN_100a385c8(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  
  Swift::_StringGuts::grow(0x25,param_2);
  SVar5 = Swift::__typeName(SUB81(*unaff_x20,0));
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar7.bridgeObject = (void *)0xe100000000000000;
  SVar7.str = (char *)0x28;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar7,SVar11);
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 9),SVar12);
  SVar6.bridgeObject = (void *)0xee00203a736e6f69;
  SVar6.str = (char *)0x736e656d6964202c;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar6,SVar13);
  uVar4 = unaff_x20[0xb];
  puVar3 = &DAT_100ff58d0;
  FUN_1000f7830(&DAT_100ff58d0,0x100c8f348);
  SVar7 = Swift::Array<undefined>::get_description(uVar4,puVar3);
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar7,SVar14);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  SVar8.bridgeObject = (void *)0xed0000203a657461;
  SVar8.str = (char *)0x676572676761202c;
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar8,SVar15);
  pcVar1 = (char *)0x65757274;
  if (*(char *)(unaff_x20 + 0xc) == '\0') {
    pcVar1 = (char *)0x65736c6166;
  }
  puVar2 = &DAT_e400000000000000;
  if (*(char *)(unaff_x20 + 0xc) == '\0') {
    puVar2 = &DAT_e500000000000000;
  }
  SVar9.bridgeObject = puVar2;
  SVar9.str = pcVar1;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar9,SVar16);
  _swift_bridgeObjectRelease(puVar2);
  SVar10.bridgeObject = (void *)0xe100000000000000;
  SVar10.str = (char *)0x29;
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar10,SVar17);
  return SVar5;
}



/* Address: 0x100a38724 | FUN_100a38724 */

void FUN_100a38724(void)

{
  FUN_100a385c8();
  return;
}



/* Address: 0x100a38744 | FUN_100a38744 */

undefined8 FUN_100a38744(void)

{
  return 0x100c8f2d0;
}



/* Address: 0x100a38750 | FUN_100a38750 */

undefined1  [16] FUN_100a38750(void)

{
  return ZEXT816(1) << 0x40;
}


