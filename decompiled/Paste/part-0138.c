/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001a4998 | FUN_1001a4998 */

void FUN_1001a4998(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1001a2b68(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x1001a49f8 | FUN_1001a49f8 */

undefined * FUN_1001a49f8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001a4b28);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fb4258;
    FUN_1000037f0(&DAT_100fb4258,&DAT_100c32550);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fb4260;
    FUN_1000037f0(&DAT_100fb4260,&DAT_100c32558);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1001a4b28 | FUN_1001a4b28 */

undefined * FUN_1001a4b28(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *capacity;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb4228;
    FUN_1000037f0(&DAT_100fb4228,&DAT_100c324a8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_98,&DAT_100fb4210,&DAT_100c324a0);
      uVar3 = uStack_90;
      uVar2 = local_98;
      uVar6 = local_98;
      uVar7 = uStack_90;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001a4c58);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      puVar8[4] = local_68;
      puVar8[1] = uStack_80;
      *puVar8 = local_88;
      puVar8[3] = uStack_70;
      puVar8[2] = uStack_78;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001a4c5c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1001a4c5c | FUN_1001a4c5c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001a4c5c(long param_1,undefined8 param_2)

{
  long lVar1;
  CurrentValueSubject *pCVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long unaff_x20;
  ulong *puVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long local_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&local_90 - extraout_x8;
  lVar1 = 0;
  FUN_10019fee0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar3,1,1,lVar1);
  pCVar2 = (CurrentValueSubject *)&DAT_100fb4240;
  FUN_1000037f0(&DAT_100fb4240,&DAT_100c32510);
  _swift_allocObject();
  Combine::CurrentValueSubject::_init(pCVar2);
  *(long *)(unaff_x20 + 0x10) = lVar3;
  puVar10 = (ulong *)(unaff_x20 + 0x18);
  *puVar10 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  puVar4 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  *(ID *)(unaff_x20 + 0x30) = IVar5;
  puVar4 = &DAT_100c32518;
  _swift_getKeyPath();
  puVar6 = &DAT_100fb4250;
  FUN_1000037f0(&DAT_100fb4250,&DAT_100c32548);
  _swift_allocObject();
  FUN_1000da6e0(puVar4,puVar6);
  *(undefined **)(unaff_x20 + 0x38) = puVar4;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar7 = 0xd000000000000012;
  FUN_1000d4624(0xd000000000000012,0x8000000100c32430);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  FUN_1001a1770(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    plVar14 = (long *)(param_1 + 0x28);
    do {
      lVar12 = *plVar14;
      lStack_88 = *plVar14;
      lVar15 = plVar14[-1];
      lVar3 = lVar15;
      local_90 = lVar15;
      _swift_getObjectType(lVar15);
      puVar4 = &DAT_100ebdc08;
      _swift_allocObject(&DAT_100ebdc08,0x28,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(long *)(puVar4 + 0x18) = local_90;
      *(long *)(puVar4 + 0x20) = lVar12;
      pcVar11 = *(code **)(lVar12 + 0x18);
      _swift_unknownObjectRetain_n(lVar15,2);
      _swift_retain();
      (*pcVar11)(FUN_1001a5218,puVar4,lVar3,lVar12);
      _swift_beginAccess(puVar10,auStack_78,0x21,0);
      uVar13 = *(ulong *)(unaff_x20 + 0x18);
      _swift_unknownObjectRetain(lVar15);
      uVar8 = uVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x18) = uVar13;
      uVar9 = uVar13;
      if ((uVar8 & 1) == 0) {
        uVar9 = 0;
        FUN_1001a49f8(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        *puVar10 = uVar9;
      }
      uVar8 = *(ulong *)(uVar9 + 0x10);
      uVar13 = uVar9;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_1001a49f8(uVar13,uVar8 + 1,1,uVar9);
      }
      plVar14 = plVar14 + 2;
      *(ulong *)(uVar13 + 0x10) = uVar8 + 1;
      lVar3 = uVar13 + uVar8 * 0x10;
      *(long *)(lVar3 + 0x28) = lStack_88;
      *(long *)(lVar3 + 0x20) = local_90;
      *puVar10 = uVar13;
      _swift_endAccess(auStack_78);
      _swift_unknownObjectRelease(lVar15);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Address: 0x1001a4f30 | FUN_1001a4f30 */

void FUN_1001a4f30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fb4218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb4120;
  FUN_100005c24(&DAT_100fb4120,&DAT_100c323e0);
  puVar2 = &DAT_100fb4220;
  FUN_100003a00(&DAT_100fb4220,FUN_10019fee0,&TargetProtocolConformanceDescriptor_100c32260);
  puVar3 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
  ;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
             ,puVar1,&local_28);
  DAT_100fb4218 = puVar3;
  return;
}



/* Address: 0x1001a4fb8 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x1001a4fbc | FUN_1001a4fbc */

void FUN_1001a4fbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1001a1d98(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1001a5028 | FUN_1001a5028 */

void FUN_1001a5028(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1001a5098 | FUN_1001a5098 */

void FUN_1001a5098(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001a50bc | FUN_1001a50bc */

void FUN_1001a50bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1001a512c | FUN_1001a512c */

void FUN_1001a512c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1001a3920(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1001a5198 | FUN_1001a5198 */

void FUN_1001a5198(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb4248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb4240;
  FUN_100005c24(&DAT_100fb4240,&DAT_100c32510);
  puVar2 = 
  PTR__Combine__protocol_conformance_descriptor_for_Combine_CurrentValueSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9830
  ;
  _swift_getWitnessTable
            (PTR__Combine__protocol_conformance_descriptor_for_Combine_CurrentValueSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9830
             ,puVar1);
  DAT_100fb4248 = puVar2;
  return;
}



/* Address: 0x1001a51e8 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  FUN_1001965a8();
  return;
}



/* Address: 0x1001a51ec | FUN_1001a51ec */

void FUN_1001a51ec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001a5218 | FUN_1001a5218 */

void FUN_1001a5218(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1001a3c90(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1001a5224 | FUN_1001a5224 */

void FUN_1001a5224(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  Date DVar6;
  URL UVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  puVar3 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  lVar9 = *(long *)(puVar3 + -8);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar8 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + uVar8;
  lVar4 = 0;
  FUN_10019fee0();
  lVar5 = lVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
  if ((int)lVar5 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    iVar2 = *(int *)(lVar4 + 0x18);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar10 = *(long *)(DVar6.unknown + -8);
    lVar5 = lVar1 + iVar2;
    (**(code **)(lVar10 + 0x30))(lVar5,1,DVar6.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar10 + 8))(lVar1 + iVar2,DVar6.unknown);
    }
    iVar2 = *(int *)(lVar4 + 0x1c);
    UVar7 = Foundation::URL::typeMetadataAccessor();
    lVar4 = *(long *)(UVar7.unknown + -8);
    lVar5 = lVar1 + iVar2;
    (**(code **)(lVar4 + 0x30))(lVar5,1,UVar7.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar4 + 8))(lVar1 + iVar2,UVar7.unknown);
    }
  }
  _swift_release(*(undefined8 *)
                  (unaff_x20 + (uVar8 + *(long *)(lVar9 + 0x40) + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001a5360 | FUN_1001a5360 */

undefined8 FUN_1001a5360(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001a53b0 | FUN_1001a53b0 */

void FUN_1001a53b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  puVar3 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  uVar5 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(puVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8))
  ;
  plVar4 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_100008284;
  FUN_1001a3f7c(plVar4,param_1,uVar1,uVar2,unaff_x20 + uVar5,uVar6);
  return;
}



/* Address: 0x1001a545c | thunk_FUN_1001a5098 */

void thunk_FUN_1001a5098(void)

{
  FUN_1001a5098();
  return;
}



/* Address: 0x1001a5460 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x1001a5464 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x1001a5468 | thunk_FUN_1001a3ae8 */

void thunk_FUN_1001a3ae8(void)

{
  FUN_1001a3ae8();
  return;
}



/* Address: 0x1001a546c | FUN_1001a546c */

undefined1 FUN_1001a546c(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x20);
}



/* Address: 0x1001a5474 | FUN_1001a5474 */

void FUN_1001a5474(undefined1 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Address: 0x1001a54a8 | FUN_1001a54a8 */

void FUN_1001a54a8(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Address: 0x1001a54b8 | FUN_1001a54b8 */

void FUN_1001a54b8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x22;
  
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    if (DAT_100fb4268 != -1) {
      _swift_once(&DAT_100fb4268,FUN_1001a55b0);
    }
    lVar1 = 0;
    FUN_10019fee0();
    FUN_1000cd990();
    FUN_1001a0764();
    uVar2 = 0;
  }
  else {
    lVar1 = 0;
    FUN_10019fee0();
    uVar2 = 1;
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,uVar2,2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001001a5554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1001a5570 | FUN_1001a5570 */

void FUN_1001a5570(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1001a558c | FUN_1001a558c */

void FUN_1001a558c(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001a55b0 | FUN_1001a55b0 */

void FUN_1001a55b0(void)

{
  int iVar1;
  undefined *puVar2;
  Date DVar3;
  Date DVar4;
  URL UVar5;
  long extraout_x8;
  
  puVar2 = &DAT_100fb4018;
  FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined *)0x0;
  FUN_10019fee0();
  FUN_1000ce204();
  DVar3.unknown = puVar2;
  FUN_1000cd990(puVar2,&DAT_101057398);
  Foundation::Date::get_distantFuture(DVar3);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,0,1,DVar4.unknown);
  iVar1 = *(int *)(puVar2 + 0x1c);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x38))(DVar3.unknown + iVar1,1,1,UVar5.unknown);
  *(undefined8 *)DVar3.unknown = 0xd000000000000017;
  *(undefined8 *)(DVar3.unknown + 8) = 0x8000000100d97d40;
  *(undefined8 *)(DVar3.unknown + 0x10) = 0x6775626544;
  *(undefined1 **)(DVar3.unknown + 0x18) = &DAT_e500000000000000;
  FUN_1001a56f8(&stack0xffffffffffffffc0 + -extraout_x8,DVar3.unknown + *(int *)(puVar2 + 0x18));
  return;
}



/* Address: 0x1001a56d8 | FUN_1001a56d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001a56d8(void)

{
  return ZEXT816(0x100fb42b0);
}



/* Address: 0x1001a56f8 | FUN_1001a56f8 */

undefined8 FUN_1001a56f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb4018;
  FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001a5748 | FUN_1001a5748 */

void FUN_1001a5748(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  FUN_1001a5804();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1001a583c();
  lVar2 = 0;
  FUN_10019fee0();
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,2,lVar2);
  bVar1 = (int)puVar3 == 0;
  if (bVar1) {
    FUN_1000182c8(puVar4,param_1);
  }
  (**(code **)(lVar5 + 0x38))(param_1,!bVar1,1,lVar2);
  return;
}



/* Address: 0x1001a5804 | FUN_1001a5804 */

void FUN_1001a5804(undefined8 param_1)

{
  if (DAT_100fb4388 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100ca6b20);
  return;
}



/* Address: 0x1001a583c | FUN_1001a583c */

undefined8 FUN_1001a583c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1001a5804();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1001a5880 | FUN_1001a5880 */

long * FUN_1001a5880(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  Date DVar4;
  undefined *puVar5;
  URL UVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar8 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar8 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    FUN_10019fee0();
    lVar10 = *(long *)(lVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,2,lVar2);
    if ((int)plVar3 != 0) {
      plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar8 + 0x40));
      return plVar3;
    }
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    lVar9 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar9;
    lVar11 = (long)*(int *)(lVar2 + 0x18);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar4.unknown + -8);
    pcVar13 = *(code **)(lVar12 + 0x30);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar9);
    lVar8 = (long)param_2 + lVar11;
    (*pcVar13)(lVar8,1,DVar4.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar4.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar4.unknown);
    }
    else {
      puVar5 = &DAT_100fb4018;
      FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    lVar9 = (long)*(int *)(lVar2 + 0x1c);
    UVar6 = Foundation::URL::typeMetadataAccessor();
    lVar11 = *(long *)(UVar6.unknown + -8);
    lVar8 = (long)param_2 + lVar9;
    (**(code **)(lVar11 + 0x30))(lVar8,1,UVar6.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar11 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar6.unknown);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar9,0,1,UVar6.unknown);
    }
    else {
      puVar5 = &DAT_100fb4020;
      FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
      _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    (**(code **)(lVar10 + 0x38))(param_1,0,2,lVar2);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1001a5a80 | FUN_1001a5a80 */

void FUN_1001a5a80(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Date DVar4;
  URL UVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_10019fee0();
  lVar3 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,2,lVar2);
  if ((int)lVar3 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
    iVar1 = *(int *)(lVar2 + 0x18);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    lVar6 = *(long *)(DVar4.unknown + -8);
    lVar3 = param_1 + iVar1;
    (**(code **)(lVar6 + 0x30))(lVar3,1,DVar4.unknown);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 8))(param_1 + iVar1,DVar4.unknown);
    }
    iVar1 = *(int *)(lVar2 + 0x1c);
    UVar5 = Foundation::URL::typeMetadataAccessor();
    lVar2 = *(long *)(UVar5.unknown + -8);
    lVar3 = param_1 + iVar1;
    (**(code **)(lVar2 + 0x30))(lVar3,1,UVar5.unknown);
    if ((int)lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001a5b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(param_1 + iVar1,UVar5.unknown);
      return;
    }
  }
  return;
}



/* Address: 0x1001a5b6c | FUN_1001a5b6c */

undefined8 * FUN_1001a5b6c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  Date DVar5;
  long lVar6;
  undefined *puVar7;
  URL UVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  lVar3 = 0;
  FUN_10019fee0();
  lVar9 = *(long *)(lVar3 + -8);
  puVar4 = param_2;
  (**(code **)(lVar9 + 0x30))(param_2,2,lVar3);
  if ((int)puVar4 != 0) {
    puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar4;
  }
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  lVar10 = (long)*(int *)(lVar3 + 0x18);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar12)(lVar6,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_100fb4018;
    FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(lVar3 + 0x1c);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar8.unknown + -8);
  lVar6 = (long)param_2 + lVar10;
  (**(code **)(lVar11 + 0x30))(lVar6,1,UVar8.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar8.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,UVar8.unknown);
  }
  else {
    puVar7 = &DAT_100fb4020;
    FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  (**(code **)(lVar9 + 0x38))(param_1,0,2,lVar3);
  return param_1;
}



/* Address: 0x1001a5d48 | FUN_1001a5d48 */

undefined8 * FUN_1001a5d48(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  URL UVar1;
  undefined8 *puVar2;
  Date DVar3;
  undefined8 *puVar4;
  long lVar5;
  URL UVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  UVar1.unknown = (undefined *)0x0;
  FUN_10019fee0();
  lVar11 = *(long *)(UVar1.unknown + -8);
  pcVar9 = *(code **)(lVar11 + 0x30);
  puVar4 = param_1;
  (*pcVar9)(param_1,2,UVar1.unknown);
  puVar2 = param_2;
  (*pcVar9)(param_2,2,UVar1.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar2 != 0) {
      FUN_10001835c(param_1);
      goto LAB_1001a5e44;
    }
    *param_1 = *param_2;
    uVar8 = param_1[1];
    param_1[1] = param_2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar8);
    param_1[2] = param_2[2];
    uVar8 = param_1[3];
    param_1[3] = param_2[3];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar8);
    lVar12 = (long)*(int *)(UVar1.unknown + 0x18);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar3.unknown + -8);
    pcVar9 = *(code **)(lVar13 + 0x30);
    lVar11 = (long)param_1 + lVar12;
    (*pcVar9)(lVar11,1,DVar3.unknown);
    lVar5 = (long)param_2 + lVar12;
    (*pcVar9)(lVar5,1,DVar3.unknown);
    if ((int)lVar11 == 0) {
      if ((int)lVar5 != 0) {
        (**(code **)(lVar13 + 8))((long)param_1 + lVar12,DVar3.unknown);
        goto LAB_1001a6004;
      }
      (**(code **)(lVar13 + 0x18))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar3.unknown);
    }
    else if ((int)lVar5 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar3.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,DVar3.unknown);
    }
    else {
LAB_1001a6004:
      puVar7 = &DAT_100fb4018;
      FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
      _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    lVar12 = (long)*(int *)(UVar1.unknown + 0x1c);
    UVar1 = Foundation::URL::typeMetadataAccessor();
    lVar13 = *(long *)(UVar1.unknown + -8);
    pcVar9 = *(code **)(lVar13 + 0x30);
    lVar11 = (long)param_1 + lVar12;
    (*pcVar9)(lVar11,1,UVar1.unknown);
    lVar5 = (long)param_2 + lVar12;
    (*pcVar9)(lVar5,1,UVar1.unknown);
    if ((int)lVar11 == 0) {
      if ((int)lVar5 == 0) {
        (**(code **)(lVar13 + 0x18))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar1.unknown);
        return param_1;
      }
      (**(code **)(lVar13 + 8))((long)param_1 + lVar12,UVar1.unknown);
    }
    else if ((int)lVar5 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar1.unknown);
      pcVar9 = *(code **)(lVar13 + 0x38);
      puVar4 = (undefined8 *)((long)param_1 + lVar12);
      uVar8 = 1;
      goto LAB_1001a5fe4;
    }
    puVar7 = &DAT_100fb4020;
    FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  else {
    if ((int)puVar2 != 0) {
LAB_1001a5e44:
      puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar4;
    }
    *param_1 = *param_2;
    uVar8 = param_2[1];
    param_1[1] = uVar8;
    param_1[2] = param_2[2];
    uVar10 = param_2[3];
    param_1[3] = uVar10;
    lVar12 = (long)*(int *)(UVar1.unknown + 0x18);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar3.unknown + -8);
    pcVar9 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar10);
    lVar5 = (long)param_2 + lVar12;
    (*pcVar9)(lVar5,1,DVar3.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar3.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,DVar3.unknown);
    }
    else {
      puVar7 = &DAT_100fb4018;
      FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
      _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    lVar12 = (long)*(int *)(UVar1.unknown + 0x1c);
    UVar6 = Foundation::URL::typeMetadataAccessor();
    lVar13 = *(long *)(UVar6.unknown + -8);
    lVar5 = (long)param_2 + lVar12;
    (**(code **)(lVar13 + 0x30))(lVar5,1,UVar6.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar6.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,UVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fb4020;
      FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
      _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    pcVar9 = *(code **)(lVar11 + 0x38);
    uVar8 = 2;
    puVar4 = param_1;
LAB_1001a5fe4:
    (*pcVar9)(puVar4,0,uVar8,UVar1.unknown);
  }
  return param_1;
}



/* Address: 0x1001a6124 | FUN_1001a6124 */

undefined8 * FUN_1001a6124(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  Date DVar3;
  long lVar4;
  undefined *puVar5;
  URL UVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = 0;
  FUN_10019fee0();
  lVar7 = *(long *)(lVar1 + -8);
  puVar2 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,2,lVar1);
  if ((int)puVar2 != 0) {
    puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar2;
  }
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  lVar8 = (long)*(int *)(lVar1 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  lVar4 = (long)param_2 + lVar8;
  (**(code **)(lVar9 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar3.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fb4018;
    FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(lVar1 + 0x1c);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar6.unknown + -8);
  lVar4 = (long)param_2 + lVar8;
  (**(code **)(lVar9 + 0x30))(lVar4,1,UVar6.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,UVar6.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,UVar6.unknown);
  }
  else {
    puVar5 = &DAT_100fb4020;
    FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  (**(code **)(lVar7 + 0x38))(param_1,0,2,lVar1);
  return param_1;
}



/* Address: 0x1001a62dc | FUN_1001a62dc */

undefined8 * FUN_1001a62dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  URL UVar1;
  undefined8 *puVar2;
  Date DVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  URL UVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  
  UVar1.unknown = (undefined *)0x0;
  FUN_10019fee0();
  lVar11 = *(long *)(UVar1.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  puVar4 = param_1;
  (*pcVar12)(param_1,2,UVar1.unknown);
  puVar2 = param_2;
  (*pcVar12)(param_2,2,UVar1.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar2 != 0) {
      FUN_10001835c(param_1);
      goto LAB_1001a63ac;
    }
    uVar9 = param_2[1];
    uVar5 = param_1[1];
    *param_1 = *param_2;
    param_1[1] = uVar9;
    _swift_bridgeObjectRelease(uVar5);
    uVar9 = param_2[3];
    uVar5 = param_1[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar9;
    _swift_bridgeObjectRelease(uVar5);
    lVar10 = (long)*(int *)(UVar1.unknown + 0x18);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar3.unknown + -8);
    pcVar12 = *(code **)(lVar13 + 0x30);
    lVar11 = (long)param_1 + lVar10;
    (*pcVar12)(lVar11,1,DVar3.unknown);
    lVar6 = (long)param_2 + lVar10;
    (*pcVar12)(lVar6,1,DVar3.unknown);
    if ((int)lVar11 == 0) {
      if ((int)lVar6 != 0) {
        (**(code **)(lVar13 + 8))((long)param_1 + lVar10,DVar3.unknown);
        goto LAB_1001a6548;
      }
      (**(code **)(lVar13 + 0x28))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar3.unknown);
    }
    else if ((int)lVar6 == 0) {
      (**(code **)(lVar13 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar3.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar10,0,1,DVar3.unknown);
    }
    else {
LAB_1001a6548:
      puVar8 = &DAT_100fb4018;
      FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
      _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    lVar10 = (long)*(int *)(UVar1.unknown + 0x1c);
    UVar1 = Foundation::URL::typeMetadataAccessor();
    lVar13 = *(long *)(UVar1.unknown + -8);
    pcVar12 = *(code **)(lVar13 + 0x30);
    lVar11 = (long)param_1 + lVar10;
    (*pcVar12)(lVar11,1,UVar1.unknown);
    lVar6 = (long)param_2 + lVar10;
    (*pcVar12)(lVar6,1,UVar1.unknown);
    if ((int)lVar11 == 0) {
      if ((int)lVar6 == 0) {
        (**(code **)(lVar13 + 0x28))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
        return param_1;
      }
      (**(code **)(lVar13 + 8))((long)param_1 + lVar10,UVar1.unknown);
    }
    else if ((int)lVar6 == 0) {
      (**(code **)(lVar13 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
      pcVar12 = *(code **)(lVar13 + 0x38);
      puVar4 = (undefined8 *)((long)param_1 + lVar10);
      uVar9 = 1;
      goto LAB_1001a6528;
    }
    puVar8 = &DAT_100fb4020;
    FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  else {
    if ((int)puVar2 != 0) {
LAB_1001a63ac:
      puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar4;
    }
    uVar9 = *param_2;
    uVar14 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    param_1[3] = uVar14;
    param_1[2] = uVar5;
    lVar10 = (long)*(int *)(UVar1.unknown + 0x18);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar3.unknown + -8);
    lVar6 = (long)param_2 + lVar10;
    (**(code **)(lVar13 + 0x30))(lVar6,1,DVar3.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar13 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar3.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar10,0,1,DVar3.unknown);
    }
    else {
      puVar8 = &DAT_100fb4018;
      FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
      _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    lVar10 = (long)*(int *)(UVar1.unknown + 0x1c);
    UVar7 = Foundation::URL::typeMetadataAccessor();
    lVar13 = *(long *)(UVar7.unknown + -8);
    lVar6 = (long)param_2 + lVar10;
    (**(code **)(lVar13 + 0x30))(lVar6,1,UVar7.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar13 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar7.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar10,0,1,UVar7.unknown);
    }
    else {
      puVar8 = &DAT_100fb4020;
      FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
      _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    pcVar12 = *(code **)(lVar11 + 0x38);
    uVar9 = 2;
    puVar4 = param_1;
LAB_1001a6528:
    (*pcVar12)(puVar4,0,uVar9,UVar1.unknown);
  }
  return param_1;
}



/* Address: 0x1001a6664 | FUN_1001a6664 */

void FUN_1001a6664(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1001a6670 | FUN_1001a6670 */

int FUN_1001a6670(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_10019fee0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
  iVar1 = 0;
  if (1 < (uint)param_1) {
    iVar1 = (uint)param_1 - 2;
  }
  return iVar1;
}



/* Address: 0x1001a66b8 | FUN_1001a66b8 */

void FUN_1001a66b8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1001a66c4 | FUN_1001a66c4 */

void FUN_1001a66c4(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + 2;
  }
  lVar2 = 0;
  FUN_10019fee0();
                    /* WARNING: Could not recover jumptable at 0x0001001a6714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,iVar1,param_3,lVar2);
  return;
}



/* Address: 0x1001a6718 | FUN_1001a6718 */

void FUN_1001a6718(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10019fee0();
                    /* WARNING: Could not recover jumptable at 0x0001001a674c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,2,lVar1);
  return;
}



/* Address: 0x1001a6750 | FUN_1001a6750 */

void FUN_1001a6750(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10019fee0();
                    /* WARNING: Could not recover jumptable at 0x0001001a678c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,2,lVar1);
  return;
}



/* Address: 0x1001a6790 | FUN_1001a6790 */

void FUN_1001a6790(undefined8 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  FUN_10019fee0();
  if (param_2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0x100,*(long *)(lVar1 + -8) + 0x40,2);
  }
  return;
}



/* Address: 0x1001a67e4 | FUN_1001a67e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a67e4(void)

{
  AutoreleaseFrequency AVar1;
  undefined7 extraout_var;
  Attributes AVar2;
  DispatchQoS DVar3;
  NWPathMonitor *pNVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  OS_dispatch_queue *pOVar8;
  NWPath NVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar10;
  Attributes attributes;
  String label;
  OS_dispatch_queue *local_80;
  long local_78;
  long lStack_70;
  undefined *local_68;
  
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lStack_70 = CONCAT71(extraout_var,AVar1.value);
  local_78 = *(long *)(lStack_70 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_78 + 0x40));
  lVar10 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar2 = Attributes::_typeMetadataAccessor();
  puVar6 = PTR__typeMetadataAccessor_100eae788;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(AVar2.unknown + -8) + 0x40));
  attributes.unknown = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar3.unknown + -8) + 0x40));
  pNVar4 = Network::NWPathMonitor::typeMetadataAccessor();
  _swift_allocObject(pNVar4,*(undefined4 *)(pNVar4 + 0x30),*(undefined2 *)(pNVar4 + 0x34));
  pNVar4 = Network::NWPathMonitor::init(pNVar4);
  *(NWPathMonitor **)(unaff_x20 + 0x10) = pNVar4;
  DVar3.unknown = (undefined *)0x0;
  FUN_1001a7b98();
  local_80 = (OS_dispatch_queue *)DVar3.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar3);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = &DAT_100fb44b8;
  FUN_100003a00(&DAT_100fb44b8,puVar6,PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar6 = &DAT_100fb44c0;
  FUN_1000037f0(&DAT_100fb44c0,&DAT_100c326b8);
  puVar7 = &DAT_100fb44c8;
  FUN_1001a7bdc(&DAT_100fb44c8,&DAT_100fb44c0,&DAT_100c326b8);
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar6,puVar7,AVar2.unknown,puVar5);
  (**(code **)(local_78 + 0x68))
            (lVar10,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,lStack_70);
  label.bridgeObject = (void *)0x8000000100d97d80;
  label.str = (char *)0xd000000000000018;
  pOVar8 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                     (local_80,label,
                      (DispatchQoS)
                      (attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
                      attributes,(AutoreleaseFrequency)(__int8)lVar10);
  *(OS_dispatch_queue **)(unaff_x20 + 0x18) = pOVar8;
  lVar10 = _TtC14PasteLicensing13NetworkStatus::currentPath;
  NVar9 = Network::NWPath::typeMetadataAccessor();
  (**(code **)(*(long *)(NVar9.unknown + -8) + 0x38))(unaff_x20 + lVar10,1,1,NVar9.unknown);
  lVar10 = _TtC14PasteLicensing13NetworkStatus::pathContinuation;
  puVar5 = &DAT_100fb43f0;
  FUN_1000037f0(&DAT_100fb43f0,&DAT_100c32678);
  (**(code **)(*(long *)(puVar5 + -8) + 0x38))(unaff_x20 + lVar10,1,1,puVar5);
  pNVar4 = *(NWPathMonitor **)(unaff_x20 + 0x10);
  puVar5 = &DAT_100ebdd20;
  _swift_allocObject(&DAT_100ebdd20,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  _swift_retain(pNVar4);
  _swift_retain(puVar5);
  Network::NWPathMonitor::_set_pathUpdateHandler(pNVar4);
  _swift_release(puVar5);
  _swift_release(pNVar4);
  pNVar4 = *(NWPathMonitor **)(unaff_x20 + 0x10);
  pOVar8 = *(OS_dispatch_queue **)(unaff_x20 + 0x18);
  _swift_retain(pNVar4);
  Network::NWPathMonitor::start(pNVar4,pOVar8);
  _swift_release(pNVar4);
  return;
}



/* Address: 0x1001a6ac0 | FUN_1001a6ac0 */

void FUN_1001a6ac0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  NWPath NVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100fb44a8;
  local_98 = param_1;
  FUN_1000037f0(&DAT_100fb44a8,&DAT_100c326b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_a0 + -extraout_x8;
  NVar2 = Network::NWPath::typeMetadataAccessor();
  lVar5 = *(long *)(NVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fb43f0;
  FUN_1000037f0(&DAT_100fb43f0,&DAT_100c32678);
  lVar9 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_01;
  puVar3 = &DAT_100fb4488;
  FUN_1000037f0(&DAT_100fb4488,&DAT_100c326a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - extraout_x8_02;
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    pcVar10 = *(code **)(lVar5 + 0x10);
    (*pcVar10)(lVar8,local_98,NVar2.unknown);
    (**(code **)(lVar5 + 0x38))(lVar8,0,1,NVar2.unknown);
    lVar5 = _TtC14PasteLicensing13NetworkStatus::currentPath;
    _swift_beginAccess(param_2 + _TtC14PasteLicensing13NetworkStatus::currentPath,auStack_78,0x21,0)
    ;
    FUN_1001a7c4c(lVar8,param_2 + lVar5,&DAT_100fb4488,&DAT_100c326a0);
    _swift_endAccess(auStack_78);
    lVar8 = _TtC14PasteLicensing13NetworkStatus::pathContinuation;
    _swift_beginAccess(param_2 + _TtC14PasteLicensing13NetworkStatus::pathContinuation,auStack_78,0,
                       0);
    lVar5 = param_2 + lVar8;
    (**(code **)(lVar9 + 0x30))(lVar5,1,puVar1);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar9 + 0x10))(lVar7,param_2 + lVar8,puVar1);
      (*pcVar10)(lVar6,local_98,NVar2.unknown);
      Swift::CheckedContinuation::resume(lVar6,puVar1);
      (**(code **)(lVar9 + 8))(lVar7,puVar1);
    }
    (**(code **)(lVar9 + 0x38))(puVar4,1,1,puVar1);
    _swift_beginAccess(param_2 + lVar8,auStack_90,0x21,0);
    FUN_1001a7c4c(puVar4,param_2 + lVar8,&DAT_100fb44a8,&DAT_100c326b0);
    _swift_endAccess(auStack_90);
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x1001a6d44 | FUN_1001a6d44 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a6d44(void)

{
  long unaff_x20;
  NWPathMonitor *this;
  
  this = *(NWPathMonitor **)(unaff_x20 + 0x10);
  _swift_retain(this);
  Network::NWPathMonitor::cancel(this);
  _swift_release(this);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100005808(unaff_x20 + _TtC14PasteLicensing13NetworkStatus::currentPath,&DAT_100fb4488,
                &DAT_100c326a0);
  FUN_100005808(unaff_x20 + _TtC14PasteLicensing13NetworkStatus::pathContinuation,&DAT_100fb44a8,
                &DAT_100c326b0);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001a6dd8 | FUN_1001a6dd8 */

void FUN_1001a6dd8(void)

{
  FUN_1001a6de0(0);
  return;
}



/* Address: 0x1001a6de0 | FUN_1001a6de0 */

void FUN_1001a6de0(undefined8 param_1)

{
  if (DAT_100fb43d0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca6bbc);
  return;
}



/* Address: 0x1001a6e18 | FUN_1001a6e18 */

void FUN_1001a6e18(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  long local_28;
  
  local_40 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puStack_38 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  lVar1 = 0x13f;
  FUN_1001a6ebc();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_1001a6f10();
    if (param_2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_updateClassMetadata2(param_1,0x100,4,&local_40,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x1001a6ebc | FUN_1001a6ebc */

void FUN_1001a6ebc(void)

{
  Optional OVar1;
  NWPath NVar2;
  undefined7 extraout_var;
  
  if (DAT_100fb43e0 == 0) {
    NVar2 = Network::NWPath::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (NVar2.unknown == (undefined *)0x0) {
      DAT_100fb43e0 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1001a6f10 | FUN_1001a6f10 */

void FUN_1001a6f10(void)

{
  Optional OVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  
  if (DAT_100fb43e8 == 0) {
    puVar2 = &DAT_100fb43f0;
    FUN_100005c24(&DAT_100fb43f0,&DAT_100c32678);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (puVar2 == (undefined *)0x0) {
      DAT_100fb43e8 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1001a6f70 | FUN_1001a6f70 */

void FUN_1001a6f70(void *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  Status SVar4;
  bool bVar5;
  NWPath NVar6;
  char *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined7 extraout_var;
  UnownedSerialExecutor UVar14;
  undefined8 uVar15;
  long unaff_x20;
  code *pcVar16;
  long unaff_x22;
  long lVar17;
  long lVar18;
  String isolation;
  long lVar13;
  
  *(ulong *)(unaff_x22 + 0x70) = param_2;
  *(long *)(unaff_x22 + 0x78) = unaff_x20;
  *(void **)(unaff_x22 + 0x68) = param_1;
  NVar6 = Network::NWPath::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x80) = NVar6.unknown;
  lVar17 = *(long *)(NVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x88) = lVar17;
  uVar8 = *(long *)(lVar17 + 0x40) + 0xf;
  pcVar7 = (char *)(uVar8 & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x90) = pcVar7;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  lVar1 = _TtC14PasteLicensing13NetworkStatus::currentPath;
  _swift_beginAccess(unaff_x20 + _TtC14PasteLicensing13NetworkStatus::currentPath,unaff_x22 + 0x50,0
                     ,0);
  puVar9 = &DAT_100fb4488;
  FUN_1000037f0(&DAT_100fb4488,&DAT_100c326a0);
  uVar10 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1001a7a70(unaff_x20 + lVar1,uVar10);
  uVar11 = uVar10;
  (**(code **)(lVar17 + 0x30))(uVar10,1,NVar6.unknown);
  if ((int)uVar11 != 1) {
    pcVar16 = *(code **)(lVar17 + 0x20);
    (*pcVar16)(uVar8,uVar10,NVar6.unknown);
    _swift_task_dealloc(uVar10);
    (*pcVar16)(pcVar7,uVar8,NVar6.unknown);
    _swift_task_dealloc(uVar8);
    lVar1 = *(long *)(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
    SVar4 = Network::NWPath::Status::typeMetadataAccessor();
    lVar13 = CONCAT71(extraout_var,SVar4.value);
    lVar18 = *(long *)(lVar13 + -8);
    uVar8 = *(long *)(lVar18 + 0x40) + 0xf;
    NVar6.unknown = (undefined *)(uVar8 & 0xfffffffffffffff0);
    _swift_task_alloc();
    Network::NWPath::get_status(NVar6);
    uVar8 = uVar8 & 0xfffffffffffffff0;
    _swift_task_alloc();
    lVar17 = lVar13;
    (**(code **)(lVar18 + 0x68))();
    bVar5 = Network::NWPath::Status::___infix
                      ((Status)(__int8)NVar6.unknown,(Status)(__int8)uVar8,(Status)(__int8)lVar17);
    pcVar16 = *(code **)(lVar18 + 8);
    (*pcVar16)(uVar8,lVar13);
    (*pcVar16)(NVar6.unknown,lVar13);
    (**(code **)(lVar1 + 8))(uVar2,uVar15);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(NVar6.unknown);
    _swift_task_dealloc(uVar2);
    (**(code **)(unaff_x22 + 8))(bVar5);
    return;
  }
  FUN_100005808(uVar10,&DAT_100fb4488,&DAT_100c326a0);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar8);
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    plVar12 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x98) = plVar12;
    *plVar12 = unaff_x22;
    plVar12[1] = (long)FUN_1001a7274;
    isolation.bridgeObject = param_1;
    isolation.str = pcVar7;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  if (param_1 == (void *)0x0) {
    UVar14.unknown = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    _swift_getObjectType(param_1);
    param_2 = param_2 & 0xcfffffffffffffff;
    UVar14 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1001a72cc,UVar14.unknown,param_2);
  return;
}



/* Address: 0x1001a7274 | FUN_1001a7274 */

void FUN_1001a7274(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x98));
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  uVar2 = *(undefined8 *)(lVar3 + 0x70);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1001a7410,uVar1,uVar2);
  return;
}



/* Address: 0x1001a72cc | FUN_1001a72cc */

void FUN_1001a72cc(void)

{
  undefined8 uVar1;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x22;
  long lVar4;
  String function;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x90);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1001a73c0;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar2 = &DAT_100fb43f0;
  FUN_1000037f0(&DAT_100fb43f0,&DAT_100c32678);
  lVar4 = *(long *)(puVar2 + -8);
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  function.bridgeObject = (void *)0x8000000100d97d60;
  function.str = (char *)0xd000000000000012;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1001a7500(uVar3,uVar1);
  (**(code **)(lVar4 + 8))(uVar3,puVar2);
  _swift_task_dealloc(uVar3);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1001a73c0 | FUN_1001a73c0 */

void FUN_1001a73c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x70);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1001a7410,uVar1,uVar2);
  return;
}



/* Address: 0x1001a7410 | FUN_1001a7410 */

void FUN_1001a7410(void)

{
  long lVar1;
  undefined8 uVar2;
  Status SVar3;
  bool bVar4;
  undefined7 extraout_var;
  NWPath NVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  code *pcVar11;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  SVar3 = Network::NWPath::Status::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,SVar3.value);
  lVar10 = *(long *)(lVar5 + -8);
  uVar7 = *(long *)(lVar10 + 0x40) + 0xf;
  NVar6.unknown = (undefined *)(uVar7 & 0xfffffffffffffff0);
  _swift_task_alloc();
  Network::NWPath::get_status(NVar6);
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  lVar8 = lVar5;
  (**(code **)(lVar10 + 0x68))();
  bVar4 = Network::NWPath::Status::___infix
                    ((Status)(__int8)NVar6.unknown,(Status)(__int8)uVar7,(Status)(__int8)lVar8);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(uVar7,lVar5);
  (*pcVar11)(NVar6.unknown,lVar5);
  (**(code **)(lVar1 + 8))(uVar2,uVar9);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(NVar6.unknown);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001001a74fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar4);
  return;
}



/* Address: 0x1001a7500 | FUN_1001a7500 */

void FUN_1001a7500(undefined8 param_1,DispatchQoS param_2)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  DispatchWorkItemFlags qos;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  puVar6 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  qos.unknown = puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fb43f0;
  FUN_1000037f0(&DAT_100fb43f0,&DAT_100c32678);
  lVar7 = *(long *)(puVar2 + -8);
  lVar9 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  local_b8 = *(undefined8 *)(param_2.unknown + 0x18);
  (**(code **)(lVar7 + 0x10))((long)qos.unknown - extraout_x8_01,param_1,puVar2);
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100ebdcd0;
  _swift_allocObject(&DAT_100ebdcd0,uVar8 + lVar9,uVar5 | 7);
  *(undefined **)(puVar3 + 0x10) = param_2.unknown;
  (**(code **)(lVar7 + 0x20))(puVar3 + uVar8,(long)qos.unknown - extraout_x8_01,puVar2);
  local_70 = FUN_1001a7b40;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ebdce8;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_2);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100fb4490;
  FUN_100003a00(&DAT_100fb4490,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar3 = &DAT_100fb4498;
  FUN_1000037f0(&DAT_100fb4498,&DAT_100c326a8);
  puVar4 = &DAT_100fb44a0;
  FUN_1001a7bdc(&DAT_100fb44a0,&DAT_100fb4498,&DAT_100c326a8);
  Swift::SetAlgebra::_init(puVar6,&local_98,puVar3,puVar4,DVar1.unknown,puVar2);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar6,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}



/* Address: 0x1001a7778 | FUN_1001a7778 */

void FUN_1001a7778(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  NWPath NVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100fb44a8;
  FUN_1000037f0(&DAT_100fb44a8,&DAT_100c326b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  puVar1 = &DAT_100fb4488;
  FUN_1000037f0(&DAT_100fb4488,&DAT_100c326a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar3 - extraout_x8_00;
  NVar2 = Network::NWPath::typeMetadataAccessor();
  lVar8 = *(long *)(NVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = _TtC14PasteLicensing13NetworkStatus::currentPath;
  lVar7 = lVar6 - extraout_x12;
  _swift_beginAccess(param_1 + _TtC14PasteLicensing13NetworkStatus::currentPath,auStack_78,0,0);
  FUN_1001a7a70(param_1 + lVar5,lVar4);
  lVar5 = lVar4;
  (**(code **)(lVar8 + 0x30))(lVar4,1,NVar2.unknown);
  if ((int)lVar5 == 1) {
    FUN_100005808(lVar4,&DAT_100fb4488,&DAT_100c326a0);
    puVar1 = &DAT_100fb43f0;
    FUN_1000037f0(&DAT_100fb43f0,&DAT_100c32678);
    lVar5 = *(long *)(puVar1 + -8);
    (**(code **)(lVar5 + 0x10))(puVar3,param_2,puVar1);
    (**(code **)(lVar5 + 0x38))(puVar3,0,1,puVar1);
    lVar5 = _TtC14PasteLicensing13NetworkStatus::pathContinuation;
    _swift_beginAccess(param_1 + _TtC14PasteLicensing13NetworkStatus::pathContinuation,auStack_90,
                       0x21,0);
    FUN_1001a7c4c(puVar3,param_1 + lVar5,&DAT_100fb44a8,&DAT_100c326b0);
    _swift_endAccess(auStack_90);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar7,lVar4,NVar2.unknown);
    (**(code **)(lVar8 + 0x10))(lVar6,lVar7,NVar2.unknown);
    puVar1 = &DAT_100fb43f0;
    FUN_1000037f0(&DAT_100fb43f0,&DAT_100c32678);
    Swift::CheckedContinuation::resume(lVar6,puVar1);
    (**(code **)(lVar8 + 8))(lVar7,NVar2.unknown);
  }
  return;
}



/* Address: 0x1001a79cc | FUN_1001a79cc */

void FUN_1001a79cc(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1001a7a2c;
  FUN_1001a6f70(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x1001a7a2c | FUN_1001a7a2c */

void FUN_1001a7a2c(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001001a7a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}


