/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000e4c58 | thunk_FUN_1000e4a84 */

void thunk_FUN_1000e4a84(void)

{
  FUN_1000e4a84();
  return;
}



/* Address: 0x1000e4c5c | thunk_FUN_1000e4a84 */

void thunk_FUN_1000e4a84(void)

{
  FUN_1000e4a84();
  return;
}



/* Address: 0x1000e4c60 | thunk_FUN_1000e4a18 */

void thunk_FUN_1000e4a18(void)

{
  FUN_1000e4a18();
  return;
}



/* Address: 0x1000e4c64 | thunk_FUN_1000e4a2c */

void thunk_FUN_1000e4a2c(void)

{
  FUN_1000e4a2c();
  return;
}



/* Address: 0x1000e4c68 | FUN_1000e4c68 */

undefined1  [16] FUN_1000e4c68(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Address: 0x1000e4cb4 | FUN_1000e4cb4 */

void FUN_1000e4cb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_100004550(uVar1,uVar2);
  return;
}



/* Address: 0x1000e4d04 | FUN_1000e4d04 */

uint FUN_1000e4d04(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar1 = 0;
  FUN_1000dcac4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fad4c8;
  local_80 = lVar7;
  FUN_1000037f0(&DAT_100fad4c8,&DAT_100c2c650);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_00;
  puVar3 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar6 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar6 - extraout_x12_00;
  FUN_1000da768(&local_68);
  FUN_1000da768(&local_70);
  FUN_1001a94ec(lVar10,1);
  _swift_release(local_70);
  _swift_release(local_68);
  (**(code **)(lVar8 + 0x38))(lVar6,1,1,lVar1);
  lVar11 = (long)*(int *)(puVar2 + 0x30);
  FUN_100011090(lVar10,lVar7,&DAT_100fad470,&DAT_100c2d0f0);
  FUN_100011090(lVar6,lVar7 + lVar11,&DAT_100fad470,&DAT_100c2d0f0);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = lVar7;
  (*pcVar9)(lVar7,1,lVar1);
  lVar8 = local_78;
  if ((int)lVar4 == 1) {
    FUN_100005808(lVar6,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_100005808(lVar10,&DAT_100fad470,&DAT_100c2d0f0);
    lVar11 = lVar7 + lVar11;
    (*pcVar9)(lVar11,1,lVar1);
    if ((int)lVar11 == 1) {
      FUN_100005808(lVar7,&DAT_100fad470,&DAT_100c2d0f0);
      uVar5 = 0;
      goto LAB_1000e5034;
    }
  }
  else {
    FUN_100011090(lVar7,local_78,&DAT_100fad470,&DAT_100c2d0f0);
    lVar4 = lVar7 + lVar11;
    (*pcVar9)(lVar4,1,lVar1);
    lVar1 = local_80;
    if ((int)lVar4 != 1) {
      FUN_1000e4b40(lVar7 + lVar11,local_80);
      lVar11 = lVar8;
      FUN_1000de2ec(lVar8,lVar1);
      FUN_1000de6c8(lVar1);
      FUN_100005808(lVar6,&DAT_100fad470,&DAT_100c2d0f0);
      FUN_100005808(lVar10,&DAT_100fad470,&DAT_100c2d0f0);
      FUN_1000de6c8(lVar8);
      FUN_100005808(lVar7,&DAT_100fad470,&DAT_100c2d0f0);
      uVar5 = (uint)lVar11 ^ 1;
      goto LAB_1000e5034;
    }
    FUN_100005808(lVar6,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_100005808(lVar10,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_1000de6c8(lVar8);
  }
  FUN_100005808(lVar7,&DAT_100fad4c8,&DAT_100c2c650);
  uVar5 = 1;
LAB_1000e5034:
  return uVar5 & 1;
}



/* Address: 0x1000e5058 | FUN_1000e5058 */

undefined8 FUN_1000e5058(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1000e508c();
  return unaff_x20;
}



/* Address: 0x1000e508c | FUN_1000e508c */

void FUN_1000e508c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar3;
  AnyCancellable *this;
  __int64 _Var4;
  long unaff_x20;
  undefined8 uVar5;
  Set<AnyCancellable> in;
  long local_70 [3];
  undefined *local_58;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar1 = &DAT_100c2c660;
  _swift_getKeyPath();
  puVar2 = &DAT_100facfd0;
  FUN_1000037f0(&DAT_100facfd0,&DAT_100c2d310);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  puVar1 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var4 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar1 = PTR___swiftEmptySetSingleton_100eae0e8, _Var4 != 0)) {
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000e5a0c();
  }
  in.unknown = (undefined *)(unaff_x20 + 0x28);
  *(undefined **)in.unknown = puVar1;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_retain(uVar5);
  FUN_1000da768(local_70);
  _swift_release(uVar5);
  uVar5 = *(undefined8 *)(local_70[0] + 0x10);
  local_58 = (undefined *)uVar5;
  _swift_retain(uVar5);
  FUN_1000037f0(&DAT_100fad4a8,&DAT_100c2c4d0);
  FUN_100016eac(&DAT_100fad4d0,&DAT_100fad4a8,&DAT_100c2c4d0,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9800
               );
  AVar3 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  _swift_release(uVar5);
  _swift_release(local_70[0]);
  puVar1 = &DAT_100eb63c0;
  local_58 = AVar3.unknown;
  _swift_allocObject(&DAT_100eb63c0,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  FUN_1000037f0(&DAT_100fad4d8,&DAT_100c2c688);
  FUN_100016eac(&DAT_100fad4e0,&DAT_100fad4d8,&DAT_100c2c688,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(AVar3.unknown);
  _swift_release(puVar1);
  _swift_beginAccess(in.unknown,local_70,0x21,0);
  Combine::AnyCancellable::store(this,in);
  _swift_endAccess(local_70);
  _swift_release(this);
  return;
}



/* Address: 0x1000e52a4 | FUN_1000e52a4 */

void FUN_1000e52a4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  URL UVar7;
  URL UVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 auStack_90 [6];
  
  lVar4 = 0;
  FUN_1000dcac4();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)auStack_90 + lVar17);
  puVar5 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)puVar12 - extraout_x8_00;
  puVar5 = &DAT_100fad5b8;
  FUN_1000037f0(&DAT_100fad5b8,&DAT_100c2c710);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)(lVar15 - extraout_x8_01);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_90 + 3,0,0);
    pcVar13 = *(code **)(param_2 + 0x10);
    if (pcVar13 == (code *)0x0) {
      _swift_release(param_2);
    }
    else {
      uVar14 = *(undefined8 *)(param_2 + 0x18);
      FUN_100011128(pcVar13,uVar14);
      _swift_release(param_2);
      FUN_100011090(param_1,lVar15,&DAT_100fad470,&DAT_100c2d0f0);
      lVar6 = lVar15;
      (**(code **)(lVar16 + 0x30))(lVar15,1,lVar4);
      if ((int)lVar6 == 1) {
        lVar4 = 0;
        FUN_10019fee0();
        pcVar10 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
        uVar9 = 1;
      }
      else {
        FUN_1000e4b40(lVar15,puVar12);
        auStack_90[2] = *puVar12;
        uVar9 = *(undefined8 *)((long)auStack_90 + lVar17 + 8);
        auStack_90[1] = *(undefined8 *)((long)auStack_90 + lVar17 + 0x10);
        uVar1 = *(undefined8 *)((long)auStack_90 + lVar17 + 0x18);
        iVar2 = *(int *)(lVar4 + 0x1c);
        lVar4 = 0;
        FUN_10019fee0();
        FUN_100011090((long)puVar12 + (long)iVar2,(long)puVar11 + (long)*(int *)(lVar4 + 0x18),
                      &DAT_100fad0e8,&DAT_100c2bea0);
        lVar17 = DAT_100fad4e8;
        iVar2 = *(int *)(lVar4 + 0x1c);
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar1);
        if (lVar17 != -1) {
          _swift_once(&DAT_100fad4e8,FUN_1000e5930);
        }
        UVar7 = Foundation::URL::typeMetadataAccessor();
        UVar8 = UVar7;
        FUN_1000cd990(UVar7.unknown,&DAT_101057168);
        lVar17 = *(long *)(UVar7.unknown + -8);
        (**(code **)(lVar17 + 0x10))((long)puVar11 + (long)iVar2,UVar8.unknown,UVar7.unknown);
        (**(code **)(lVar17 + 0x38))((long)puVar11 + (long)iVar2,0,1,UVar7.unknown);
        uVar3 = auStack_90[1];
        *puVar11 = auStack_90[2];
        puVar11[1] = uVar9;
        puVar11[2] = uVar3;
        puVar11[3] = uVar1;
        FUN_1000de6c8(puVar12);
        pcVar10 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
        uVar9 = 0;
      }
      (*pcVar10)(puVar11,uVar9,1,lVar4);
      (*pcVar13)(puVar11);
      FUN_100004550(pcVar13,uVar14);
      FUN_100005808(puVar11,&DAT_100fad5b8,&DAT_100c2c710);
    }
  }
  return;
}



/* Address: 0x1000e5574 | FUN_1000e5574 */

void FUN_1000e5574(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  lVar1 = 0;
  FUN_1000dcac4();
  *(long *)(unaff_x22 + 0x20) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  lVar1 = 0;
  FUN_1000e34b0();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  FUN_1000da768(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x10);
  plVar3 = (long *)0x500;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1000e5640;
  FUN_1000dfabc(plVar3,uVar2,param_2,param_3 & 0xcfffffffffffffff,1);
  return;
}



/* Address: 0x1000e5640 | FUN_1000e5640 */

void FUN_1000e5640(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  URL UVar8;
  URL UVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *unaff_x22;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar15 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar15 + 0x40);
  uVar10 = *(undefined8 *)(lVar15 + 0x38);
  uVar2 = *(undefined8 *)(lVar15 + 0x20);
  lVar3 = *(long *)(lVar15 + 0x28);
  lVar12 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar15 + 0x48));
  _swift_release(uVar1);
  (**(code **)(lVar3 + 0x30))(uVar10,2,uVar2);
  if ((int)uVar10 == 0) {
    puVar11 = *(undefined8 **)(lVar15 + 0x30);
    lVar3 = *(long *)(lVar15 + 0x18);
    lVar13 = *(long *)(lVar15 + 0x20);
    FUN_1000e4b40(*(undefined8 *)(lVar15 + 0x38),puVar11);
    uVar1 = *puVar11;
    uVar4 = puVar11[1];
    uVar2 = puVar11[2];
    uVar5 = puVar11[3];
    iVar6 = *(int *)(lVar13 + 0x1c);
    lVar7 = 0;
    FUN_10019fee0();
    FUN_100011090((long)puVar11 + (long)iVar6,lVar3 + *(int *)(lVar7 + 0x18),&DAT_100fad0e8,
                  &DAT_100c2bea0);
    lVar13 = DAT_100fad4e8;
    iVar6 = *(int *)(lVar7 + 0x1c);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    if (lVar13 != -1) {
      _swift_once(&DAT_100fad4e8,FUN_1000e5930);
    }
    uVar14 = *(undefined8 *)(lVar15 + 0x30);
    puVar11 = *(undefined8 **)(lVar15 + 0x18);
    UVar8 = Foundation::URL::typeMetadataAccessor();
    UVar9 = UVar8;
    FUN_1000cd990(UVar8.unknown,&DAT_101057168);
    lVar13 = *(long *)(UVar8.unknown + -8);
    (**(code **)(lVar13 + 0x10))(lVar3 + iVar6,UVar9.unknown,UVar8.unknown);
    FUN_1000de6c8(uVar14);
    (**(code **)(lVar13 + 0x38))(lVar3 + iVar6,0,1,UVar8.unknown);
    *puVar11 = uVar1;
    puVar11[1] = uVar4;
    puVar11[2] = uVar2;
    puVar11[3] = uVar5;
  }
  else {
    lVar7 = 0;
    FUN_10019fee0();
  }
  uVar1 = *(undefined8 *)(lVar15 + 0x30);
  uVar2 = *(undefined8 *)(lVar15 + 0x38);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(*(undefined8 *)(lVar15 + 0x18),uVar10,2,lVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000e57ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 8))();
  return;
}



/* Address: 0x1000e5808 | FUN_1000e5808 */

void FUN_1000e5808(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001000e5810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000e5814 | FUN_1000e5814 */

void FUN_1000e5814(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000e2854(0);
  FUN_1000d80e0(param_1,"PasteLicensingDirect/DI+Direct.swift",0x24,2,0x3b,0x13,FUN_1000dc908,0,
                uVar1);
  return;
}



/* Address: 0x1000e5864 | FUN_1000e5864 */

void FUN_1000e5864(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1000e5890 | FUN_1000e5890 */

void FUN_1000e5890(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000e58c4 | thunk_FUN_1000e4d04 */

void thunk_FUN_1000e4d04(void)

{
  FUN_1000e4d04();
  return;
}



/* Address: 0x1000e58c8 | FUN_1000e58c8 */

void FUN_1000e58c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1000e5574(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x1000e5930 | FUN_1000e5930 */

void FUN_1000e5930(void)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar1.unknown,&DAT_101057168);
  FUN_1000cd990(UVar1.unknown,&DAT_101057168);
  FUN_1001ab6b0(UVar1.unknown,0xd000000000000010,0x8000000100d90440);
  return;
}



/* Address: 0x1000e5990 | FUN_1000e5990 */

void FUN_1000e5990(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000e2854(0);
  FUN_1000d80e0(param_1,"PasteLicensingDirect/DI+Direct.swift",0x24,2,0x3b,0x13,FUN_1000dc908,0,
                uVar1);
  return;
}



/* Address: 0x1000e59e0 | FUN_1000e59e0 */

void FUN_1000e59e0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000e5a04 | FUN_1000e5a04 */

void FUN_1000e5a04(void)

{
  FUN_1000e52a4();
  return;
}



/* Address: 0x1000e5a0c | FUN_1000e5a0c */

undefined * FUN_1000e5a0c(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  _SetStorage *this;
  AnyCancellable *pAVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  __int64 seed;
  ulong uVar14;
  undefined8 local_70;
  ulong local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    puVar11 = *(undefined **)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    puVar11 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar2 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar11 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fad5a0;
    FUN_1000037f0(&DAT_100fad5a0,&DAT_100c2c708);
    Swift::_SetStorage::_allocate(this,(__int64)puVar11);
    puVar2 = puVar11;
  }
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar12 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    uVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar12 != 0) {
    uVar13 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e5c5c);
          (*pcVar3)();
        }
        uVar14 = *(ulong *)(param_1.unknown + uVar13 * 8 + 0x20);
        _swift_retain(uVar14);
      }
      else {
        uVar14 = uVar13;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar13,param_1);
      }
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e5c54);
        (*pcVar3)();
      }
      uVar13 = uVar13 + 1;
      seed = *(__int64 *)(puVar2 + 0x28);
      local_68 = uVar14;
      pAVar5 = Combine::AnyCancellable::typeMetadataAccessor();
      FUN_1000e5c7c(&DAT_100fad5a8,PTR_Combine__Combine__AnyCancellable_>Swift__Hashable_100ea9790);
      uVar6 = Swift::Hashable::_rawHashValue(seed);
      uVar10 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar6 >> 6;
      uVar8 = *(ulong *)(puVar2 + uVar7 * 8 + 0x38);
      uVar9 = 1L << (uVar6 & 0x3f);
      if ((uVar9 & uVar8) != 0) {
        puVar11 = &DAT_100fad5b0;
        FUN_1000e5c7c(&DAT_100fad5b0,
                      PTR_Combine__Combine__AnyCancellable_>Swift__Equatable_100ea9798);
        do {
          local_70 = *(undefined8 *)(*(long *)(puVar2 + 0x30) + uVar6 * 8);
          bVar4 = Swift::Equatable::___infix(&local_70,&local_68,pAVar5,puVar11);
          if (bVar4) {
            _swift_release(uVar14);
            goto LAB_1000e5aec;
          }
          uVar6 = uVar6 + 1 & ~uVar10;
          uVar7 = uVar6 >> 6;
          uVar8 = *(ulong *)(puVar2 + uVar7 * 8 + 0x38);
          uVar9 = 1L << (uVar6 & 0x3f);
        } while ((uVar9 & uVar8) != 0);
      }
      *(ulong *)(puVar2 + uVar7 * 8 + 0x38) = uVar9 | uVar8;
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar6 * 8) = uVar14;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e5c58);
        (*pcVar3)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_1000e5aec:
    } while (uVar13 != uVar12);
  }
  return puVar2;
}



/* Address: 0x1000e5c5c | FUN_1000e5c5c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000e5c5c(void)

{
  return ZEXT816(0x100fad530);
}



/* Address: 0x1000e5c7c | FUN_1000e5c7c */

void FUN_1000e5c7c(long *param_1,long param_2)

{
  AnyCancellable *pAVar1;
  
  if (*param_1 == 0) {
    pAVar1 = Combine::AnyCancellable::typeMetadataAccessor();
    _swift_getWitnessTable(param_2,pAVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1000e5cbc | FUN_1000e5cbc */

void FUN_1000e5cbc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000e5ce0 | FUN_1000e5ce0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000e5ce0(void)

{
  return ZEXT816(0x100fad600);
}



/* Address: 0x1000e5d00 | FUN_1000e5d00 */

uint FUN_1000e5d00(undefined8 param_1)

{
  undefined8 local_28;
  
  FUN_1000da768(&local_28);
  FUN_1000e424c(param_1);
  _swift_release(local_28);
  return (uint)param_1 & 1;
}



/* Address: 0x1000e5d50 | FUN_1000e5d50 */

uint FUN_1000e5d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  
  FUN_1000da768(&local_38);
  FUN_1000e37b4(param_1,param_2,param_3);
  _swift_release(local_38);
  return (uint)param_1 & 1;
}



/* Address: 0x1000e5db8 | FUN_1000e5db8 */

void FUN_1000e5db8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000e799c(0);
  FUN_1000d80e0(param_1,"PasteLicensingDirect/DI+Direct.swift",0x24,2,0x31,0x13,FUN_1000dc6c0,0,
                uVar1);
  return;
}



/* Address: 0x1000e5e08 | FUN_1000e5e08 */

bool FUN_1000e5e08(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  puVar2 = &DAT_100fad5b8;
  FUN_1000037f0(&DAT_100fad5b8,&DAT_100c2c710);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_50 + -extraout_x8;
  lVar3 = 0;
  FUN_1001a5804();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_1000da768(&local_48);
  FUN_1000e6640(lVar6 - extraout_x12);
  _swift_release(local_48);
  FUN_1000523d8(lVar6 - extraout_x12,lVar6,FUN_1001a5804);
  lVar4 = 0;
  FUN_10019fee0();
  lVar7 = *(long *)(lVar4 + -8);
  lVar3 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,2,lVar4);
  iVar1 = (int)lVar3;
  if (iVar1 == 0) {
    FUN_1000523d8(lVar6,puVar5,FUN_10019fee0);
  }
  (**(code **)(lVar7 + 0x38))(puVar5,iVar1 != 0,1,lVar4);
  FUN_1000e5f70(puVar5);
  return iVar1 == 0;
}



/* Address: 0x1000e5f70 | FUN_1000e5f70 */

undefined8 FUN_1000e5f70(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad5b8;
  FUN_1000037f0(&DAT_100fad5b8,&DAT_100c2c710);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000e5fb8 | FUN_1000e5fb8 */

undefined8 FUN_1000e5fb8(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1000e5fec();
  return unaff_x20;
}



/* Address: 0x1000e5fec | FUN_1000e5fec */

void FUN_1000e5fec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar3;
  AnyCancellable *this;
  __int64 _Var4;
  long unaff_x20;
  undefined8 uVar5;
  Set<AnyCancellable> in;
  undefined8 local_70 [3];
  undefined *local_58;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar1 = &DAT_100c2c788;
  _swift_getKeyPath();
  puVar2 = &DAT_100facfd8;
  FUN_1000037f0(&DAT_100facfd8,&DAT_100c2c7b0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  puVar1 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var4 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar1 = PTR___swiftEmptySetSingleton_100eae0e8, _Var4 != 0)) {
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000e5a0c();
  }
  in.unknown = (undefined *)(unaff_x20 + 0x28);
  *(undefined **)in.unknown = puVar1;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_retain(uVar5);
  FUN_1000da768(local_70);
  _swift_release(uVar5);
  FUN_1000037f0(&DAT_100facfe0,&DAT_100c2bd70);
  FUN_100016eac(&DAT_100fad660,&DAT_100facfe0,&DAT_100c2bd70,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9800
               );
  AVar3 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  _swift_release(local_70[0]);
  puVar1 = &DAT_100eb6440;
  local_58 = AVar3.unknown;
  _swift_allocObject(&DAT_100eb6440,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &DAT_100eb6468;
  _swift_allocObject(&DAT_100eb6468,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1000e6458;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  FUN_1000037f0(&DAT_100fad668,&DAT_100c2c7c0);
  FUN_100016eac(&DAT_100fad670,&DAT_100fad668,&DAT_100c2c7c0,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(AVar3.unknown);
  _swift_release(puVar2);
  _swift_beginAccess(in.unknown,local_70,0x21,0);
  Combine::AnyCancellable::store(this,in);
  _swift_endAccess(local_70);
  _swift_release(this);
  return;
}



/* Address: 0x1000e6210 | FUN_1000e6210 */

void FUN_1000e6210(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000e799c(0);
  FUN_1000d80e0(param_1,"PasteLicensingDirect/DI+Direct.swift",0x24,2,0x31,0x13,FUN_1000dc6c0,0,
                uVar1);
  return;
}



/* Address: 0x1000e6260 | FUN_1000e6260 */

void FUN_1000e6260(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000e6284 | FUN_1000e6284 */

void FUN_1000e6284(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar8;
  code *pcVar9;
  long lVar10;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  puVar4 = &DAT_100fad5b8;
  FUN_1000037f0(&DAT_100fad5b8,&DAT_100c2c710);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_68 + (-8 - extraout_x8);
  lVar5 = 0;
  FUN_1001a5804();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
    pcVar9 = *(code **)(param_1 + 0x10);
    if (pcVar9 == (code *)0x0) {
      _swift_release(param_1);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      FUN_100011128(pcVar9,uVar2);
      _swift_retain(uVar3);
      FUN_1000da768(&local_70);
      _swift_release(uVar3);
      FUN_1000e6640(lVar5 - extraout_x12);
      _swift_release(local_70);
      FUN_1000523d8(lVar5 - extraout_x12,lVar5,FUN_1001a5804);
      lVar6 = 0;
      FUN_10019fee0();
      lVar10 = *(long *)(lVar6 + -8);
      lVar7 = lVar5;
      (**(code **)(lVar10 + 0x30))(lVar5,2,lVar6);
      bVar1 = (int)lVar7 == 0;
      if (bVar1) {
        FUN_1000523d8(lVar5,puVar8,FUN_10019fee0);
      }
      (**(code **)(lVar10 + 0x38))(puVar8,!bVar1,1,lVar6);
      (*pcVar9)(puVar8);
      FUN_100004550(pcVar9,uVar2);
      _swift_release(param_1);
      FUN_1000e5f70(puVar8);
    }
  }
  return;
}



/* Address: 0x1000e6458 | FUN_1000e6458 */

void FUN_1000e6458(void)

{
  FUN_1000e6284();
  return;
}



/* Address: 0x1000e6460 | FUN_1000e6460 */

void FUN_1000e6460(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000e6484 | FUN_1000e6484 */

void FUN_1000e6484(undefined8 param_1)

{
  long unaff_x22;
  undefined8 local_28;
  
  FUN_1000da768(&local_28);
  FUN_1000e6640(param_1);
  _swift_release(local_28);
                    /* WARNING: Could not recover jumptable at 0x0001000e64d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000e64d8 | thunk_FUN_1000e5e08 */

void thunk_FUN_1000e5e08(void)

{
  FUN_1000e5e08();
  return;
}



/* Address: 0x1000e64dc | FUN_1000e64dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000e64dc(void)

{
  return ZEXT816(0x100fad6b8);
}



/* Address: 0x1000e64fc | FUN_1000e64fc */

undefined8 FUN_1000e64fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_1000e7654(param_1,param_2,param_3);
  _swift_release(param_2);
  _swift_release(param_3);
  return param_1;
}



/* Address: 0x1000e6564 | FUN_1000e6564 */

undefined8 FUN_1000e6564(void)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  Date DVar4;
  long extraout_x8;
  ID self;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  lVar1 = 0;
  FUN_1000e78b4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  FUN_1000e6eb4(puVar6);
  puVar2 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  puVar3 = puVar6;
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(puVar6,3,puVar2);
  if ((int)puVar3 - 1U < 2) {
    uVar5 = 0;
  }
  else {
    if ((int)puVar3 == 0) {
      DVar4 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar4.unknown + -8) + 8))(puVar6,DVar4.unknown);
    }
    uVar5 = 1;
  }
  objc_stub::unlock(self);
  return uVar5;
}



/* Address: 0x1000e6640 | FUN_1000e6640 */

void FUN_1000e6640(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  long lVar8;
  Date DVar9;
  URL UVar10;
  undefined8 uVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar14;
  long extraout_x12;
  long lVar15;
  long unaff_x20;
  undefined8 *puVar16;
  ID self;
  byte *pbVar17;
  byte abStack_a0 [8];
  long local_98 [6];
  long lStack_68;
  undefined8 *puVar11;
  
  lVar4 = 0;
  FUN_1000e78b4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pbVar17 = abStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fad880;
  FUN_1000037f0(&DAT_100fad880,&DAT_100c2c8f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar4 = (long)pbVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar16 = (undefined8 *)(lVar4 - extraout_x12);
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  FUN_1000e6eb4(pbVar17);
  puVar6 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  pbVar7 = pbVar17;
  (**(code **)(*(long *)(puVar6 + -8) + 0x30))(pbVar17,3,puVar6);
  iVar3 = (int)pbVar7;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      lVar8 = 0;
      FUN_10019fee0();
      iVar3 = *(int *)(lVar8 + 0x18);
      DVar9 = Foundation::Date::typeMetadataAccessor();
      lVar15 = *(long *)(DVar9.unknown + -8);
      local_98[1] = param_1;
      (**(code **)(lVar15 + 0x20))((long)puVar16 + (long)iVar3,pbVar17,DVar9.unknown);
      param_1 = local_98[1];
      local_98[0] = (long)*(int *)(puVar5 + 0x30);
      (**(code **)(lVar15 + 0x38))((long)puVar16 + (long)iVar3,0,1,DVar9.unknown);
      iVar3 = *(int *)(lVar8 + 0x1c);
      UVar10 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar10.unknown + -8) + 0x38))
                ((long)puVar16 + (long)iVar3,1,1,UVar10.unknown);
      *puVar16 = 0xd000000000000011;
      puVar16[1] = 0x8000000100d90460;
      puVar16[2] = 0x6972542065657246;
      puVar16[3] = 0xea00000000006c61;
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(puVar16,0,2,lVar8);
      *(undefined1 *)((long)puVar16 + local_98[0]) = 0;
      goto LAB_1000e68b8;
    }
    iVar3 = *(int *)(puVar5 + 0x30);
    lVar8 = 0;
    FUN_10019fee0();
    pcVar14 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
    uVar12 = 1;
  }
  else {
    if (iVar3 != 2) {
      iVar3 = *(int *)(puVar5 + 0x30);
      lVar8 = 0;
      FUN_10019fee0();
      puVar11 = puVar16;
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(puVar16,1,2,lVar8);
      bVar2 = (byte)puVar11;
      FUN_1000e742c();
      *(byte *)((long)puVar16 + (long)iVar3) = bVar2 & 1;
      goto LAB_1000e68b8;
    }
    iVar3 = *(int *)(puVar5 + 0x30);
    lVar8 = 0;
    FUN_10019fee0();
    pcVar14 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
    uVar12 = 2;
  }
  (*pcVar14)(puVar16,uVar12,2,lVar8);
  *(undefined1 *)((long)puVar16 + (long)iVar3) = 0;
LAB_1000e68b8:
  objc_stub::unlock(self);
  FUN_1000e817c(puVar16,lVar4);
  cVar1 = *(char *)(lVar4 + *(int *)(puVar5 + 0x30));
  FUN_10005241c(lVar4,FUN_1001a5804);
  if (cVar1 == '\x01') {
    FUN_1000da768(local_98 + 2);
    FUN_100004640(local_98 + 2,local_98[5]);
    uVar12 = 0;
    uVar13 = 3;
    FUN_100191fc4(1,0,3);
    (**(code **)(lStack_68 + 0x18))();
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar12);
    FUN_100004594(local_98 + 2);
  }
  FUN_1000e81cc(puVar16,lVar4);
  FUN_1000523d8(lVar4,param_1,FUN_1001a5804);
  return;
}



/* Address: 0x1000e698c | FUN_1000e698c */

void FUN_1000e698c(void)

{
  FUN_1000037f0(&DAT_100facfe0,&DAT_100c2bd70);
  FUN_100016eac(&DAT_100fad660,&DAT_100facfe0,&DAT_100c2bd70,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9800
               );
  (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  return;
}



/* Address: 0x1000e69f8 | FUN_1000e69f8 */

bool FUN_1000e69f8(long param_1,char param_2,long param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = param_4 == '\x01' && param_3 != 0;
  if (param_1 == 0) {
    bVar1 = param_4 == '\x01' && param_3 == 0;
  }
  bVar2 = param_4 != '\x01' && param_1 == param_3;
  if (param_2 == '\x01') {
    bVar2 = bVar1;
  }
  return bVar2;
}



/* Address: 0x1000e6a38 | FUN_1000e6a38 */

bool FUN_1000e6a38(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  cVar1 = (char)param_2[1];
  bVar2 = cVar1 == '\x01' && lVar4 != 0;
  if (*param_1 == 0) {
    bVar2 = cVar1 == '\x01' && lVar4 == 0;
  }
  bVar3 = cVar1 != '\x01' && *param_1 == lVar4;
  if ((char)param_1[1] == '\x01') {
    bVar3 = bVar2;
  }
  return bVar3;
}



/* Address: 0x1000e6a80 | FUN_1000e6a80 */

undefined * FUN_1000e6a80(void)

{
  return &DAT_100c2c840;
}



/* Address: 0x1000e6a8c | FUN_1000e6a8c */

undefined8 FUN_1000e6a8c(void)

{
  return 0x4122750000000000;
}



/* Address: 0x1000e6a9c | FUN_1000e6a9c */

undefined * FUN_1000e6a9c(void)

{
  return &DAT_100eb64c0;
}



/* Address: 0x1000e6aa8 | FUN_1000e6aa8 */

undefined1  [16] FUN_1000e6aa8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d90460;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Address: 0x1000e6ac4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::init */

Date Foundation::Date::init(void)

{
  Date DVar1;
  
  DVar1 = init();
  return (Date)DVar1.unknown;
}



/* Address: 0x1000e6ac8 | FUN_1000e6ac8 */

undefined8 FUN_1000e6ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000e7654();
  _swift_release(param_2);
  _swift_release(param_3);
  return param_1;
}



/* Address: 0x1000e6b0c | FUN_1000e6b0c */

void FUN_1000e6b0c(void)

{
  __CocoaSet _Var1;
  long lVar2;
  undefined *puVar3;
  AnyCancellable *this;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_58,0,0);
  puVar4 = *(undefined **)(unaff_x20 + 0x38);
  if (((ulong)puVar4 & 0xc000000000000001) == 0) {
    lVar2 = *(long *)(puVar4 + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var1.unknown = puVar4;
    }
    _swift_bridgeObjectRetain(puVar4);
    lVar2 = Swift::__CocoaSet::get_count(_Var1);
    _swift_bridgeObjectRelease(puVar4);
  }
  if (lVar2 == 0) {
    puVar4 = &DAT_100eb6590;
    _swift_allocObject(&DAT_100eb6590,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    puVar3 = &DAT_100eb65b8;
    _swift_allocObject(&DAT_100eb65b8,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_1000e8148;
    *(undefined **)(puVar3 + 0x18) = puVar4;
    FUN_1000037f0(&DAT_100fad668,&DAT_100c2c7c0);
    FUN_100016eac(&DAT_100fad670,&DAT_100fad668,&DAT_100c2c7c0,
                  PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
                 );
    this = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(puVar3);
    _swift_beginAccess(unaff_x20 + 0x38,auStack_70,0x21,0);
    Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + 0x38));
    _swift_endAccess(auStack_70);
    _swift_release(this);
  }
  return;
}



/* Address: 0x1000e6c70 | FUN_1000e6c70 */

bool FUN_1000e6c70(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar6;
  ID self;
  long lVar7;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  lVar1 = 0;
  FUN_1000e8570();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1000e78b4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  FUN_1000e6eb4(lVar7);
  puVar3 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  lVar2 = lVar7;
  (**(code **)(*(long *)(puVar3 + -8) + 0x30))(lVar7,3,puVar3);
  FUN_10005241c(lVar7,FUN_1000e78b4);
  if ((int)lVar2 == 1) {
    (**(code **)(unaff_x20 + 0x20))(puVar6);
    puVar6[*(int *)(lVar1 + 0x14)] = 0;
    FUN_1000e71d0(puVar6);
    FUN_10005241c(puVar6,FUN_1000e8570);
    objc_stub::unlock(self);
    FUN_1000e6b0c();
    FUN_1000da768(auStack_78);
    lVar1 = lStack_58;
    uVar4 = local_60;
    FUN_100004640(auStack_78,local_60);
    (**(code **)(lVar1 + 0x30))
              (0x6c61697274,&DAT_e500000000000000,0x7473206c61697254,0xed00006465747261,uVar4,lVar1)
    ;
    FUN_100004594(auStack_78);
    Combine::PassthroughSubject::send(*(PassthroughSubject **)(unaff_x20 + 0x10));
    FUN_1000da768(auStack_78);
    FUN_100004640(auStack_78,local_60);
    *(undefined8 *)(lVar7 + -0x10) = 0;
    *(undefined8 *)(lVar7 + -8) = 0;
    uVar4 = 3;
    uVar5 = 1;
    FUN_100191dd8(1,3,1,7,0,0,0,3);
    (**(code **)(lStack_58 + 0x18))();
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar4);
    FUN_100004594(auStack_78);
  }
  else {
    objc_stub::unlock(self);
  }
  return (int)lVar2 == 1;
}



/* Address: 0x1000e6eb4 | FUN_1000e6eb4 */

void FUN_1000e6eb4(long param_1)

{
  int iVar1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar8;
  long extraout_x12;
  long unaff_x20;
  Date DVar9;
  Date DVar10;
  Date DVar11;
  long lVar12;
  double dVar13;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  DVar10.unknown = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar9.unknown = DVar10.unknown + -extraout_x12;
  puVar4 = &DAT_100fad890;
  FUN_1000037f0(&DAT_100fad890,&DAT_100c2c900);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar11.unknown = DVar9.unknown + -extraout_x8_00;
  lVar5 = 0;
  FUN_1000e8570();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = (long)DVar11.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_78);
  FUN_1001a8a24(DVar11.unknown);
  _swift_release(local_78);
  puVar6 = DVar11.unknown;
  _swift_getEnumCaseMultiPayload(DVar11.unknown,puVar4);
  if ((uint)puVar6 < 2) {
    pcVar8 = FUN_1000e8570;
    FUN_1000523d8(DVar11.unknown,lVar5);
    Foundation::Date::addingTimeInterval(604800.0,DVar11);
    (**(code **)(unaff_x20 + 0x20))(DVar10.unknown);
    DVar11.unknown = DVar9.unknown;
    bVar2 = Foundation::Date::<_infix(DVar10,DVar9,(Date)pcVar8);
    if (bVar2) {
      dVar13 = Foundation::Date::timeIntervalSince(DVar10,DVar11);
      dVar13 = (double)(long)(dVar13 / 86400.0);
      (**(code **)(lVar12 + 8))(DVar10.unknown,DVar3.unknown);
      FUN_10005241c(lVar5,FUN_1000e8570);
      if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1000e71c8);
        (*pcVar8)();
      }
      if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1000e71cc);
        (*pcVar8)();
      }
      if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1000e71d0);
        (*pcVar8)();
      }
      lVar5 = (long)dVar13;
      if (lVar5 < 2) {
        lVar5 = 1;
      }
      puVar4 = &DAT_100fad488;
      FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
      iVar1 = *(int *)(puVar4 + 0x30);
      (**(code **)(lVar12 + 0x20))(param_1,DVar9.unknown,DVar3.unknown);
      *(long *)(param_1 + iVar1) = lVar5;
      pcVar8 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
      uVar7 = 0;
    }
    else {
      pcVar8 = *(code **)(lVar12 + 8);
      (*pcVar8)(DVar10.unknown,DVar3.unknown);
      (*pcVar8)(DVar9.unknown,DVar3.unknown);
      FUN_10005241c(lVar5,FUN_1000e8570);
      puVar4 = &DAT_100fad488;
      FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
      pcVar8 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
      uVar7 = 3;
    }
  }
  else {
    puVar4 = &DAT_100fad488;
    if ((uint)puVar6 == 2) {
      FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
      pcVar8 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
      uVar7 = 1;
    }
    else {
      FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
      pcVar8 = *(code **)(*(long *)(puVar4 + -8) + 0x38);
      uVar7 = 2;
    }
  }
  (*pcVar8)(param_1,uVar7,3,puVar4);
  return;
}



/* Address: 0x1000e71d0 | FUN_1000e71d0 */

/* WARNING: Removing unreachable block (ram,0x0001000e721c) */

void FUN_1000e71d0(undefined8 param_1)

{
  undefined8 local_80 [6];
  
  FUN_1000da768(local_80);
  FUN_1001a8654(param_1);
  _swift_release(local_80[0]);
  return;
}



/* Address: 0x1000e7334 | FUN_1000e7334 */

undefined1  [16] FUN_1000e7334(void)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  Date DVar4;
  long extraout_x8;
  ID self;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar1 = 0;
  FUN_1000e78b4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  FUN_1000e6eb4(puVar6);
  puVar2 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  puVar3 = puVar6;
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(puVar6,3,puVar2);
  if ((int)puVar3 - 1U < 2) {
    uVar5 = 0;
  }
  else {
    if ((int)puVar3 == 0) {
      uVar5 = *(undefined8 *)(puVar6 + *(int *)(puVar2 + 0x30));
      DVar4 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar4.unknown + -8) + 8))(puVar6,DVar4.unknown);
      uVar7 = 0;
      goto LAB_1000e7408;
    }
    uVar5 = 1;
  }
  uVar7 = 1;
LAB_1000e7408:
  objc_stub::unlock(self);
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Address: 0x1000e742c | FUN_1000e742c */

undefined8 FUN_1000e742c(void)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  long extraout_x8;
  long extraout_x8_00;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  byte abStack_50 [8];
  undefined8 local_48;
  
  puVar1 = &DAT_100fad888;
  FUN_1000037f0(&DAT_100fad888,&DAT_100c2c8f8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar4 = abStack_50 + -extraout_x8;
  lVar2 = 0;
  FUN_1000e8570();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)pbVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_48);
  FUN_1001a94ec(pbVar4,1);
  _swift_release(local_48);
  pbVar3 = pbVar4;
  (**(code **)(lVar6 + 0x30))(pbVar4,1,lVar2);
  if ((int)pbVar3 == 1) {
    FUN_100005808(pbVar4,&DAT_100fad888,&DAT_100c2c8f8);
  }
  else {
    FUN_1000523d8(pbVar4,lVar5,FUN_1000e8570);
    if ((*(byte *)(lVar5 + *(int *)(lVar2 + 0x14)) & 1) == 0) {
      *(undefined1 *)(lVar5 + *(int *)(lVar2 + 0x14)) = 1;
      FUN_1000e71d0(lVar5);
      FUN_10005241c(lVar5,FUN_1000e8570);
      return 1;
    }
    FUN_10005241c(lVar5,FUN_1000e8570);
  }
  return 0;
}



/* Address: 0x1000e7590 | FUN_1000e7590 */

void FUN_1000e7590(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _swift_retain(uVar1);
    _swift_release(param_1);
    Combine::PassthroughSubject::send();
    _swift_release(uVar1);
    return;
  }
  return;
}



/* Address: 0x1000e75e0 | FUN_1000e75e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000e75e0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1000e7634 | FUN_1000e7634 */

void FUN_1000e7634(void)

{
  FUN_1000e75e0();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000e7654 | FUN_1000e7654 */

void FUN_1000e7654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  PassthroughSubject *this;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  Date DVar6;
  __int64 _Var7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  
  lVar1 = 0;
  FUN_1000e78b4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  this = (PassthroughSubject *)&DAT_100facfe0;
  FUN_1000037f0(&DAT_100facfe0,&DAT_100c2bd70);
  _swift_allocObject();
  Combine::PassthroughSubject::_init(this);
  *(PassthroughSubject **)(unaff_x20 + 0x10) = this;
  puVar2 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + 0x18) = IVar3;
  puVar2 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var7 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar2 = PTR___swiftEmptySetSingleton_100eae0e8, _Var7 != 0)) {
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000e5a0c();
  }
  *(undefined **)(unaff_x20 + 0x38) = puVar2;
  puVar2 = &DAT_100c2c908;
  _swift_getKeyPath();
  puVar4 = &DAT_100facfe8;
  FUN_1000037f0(&DAT_100facfe8,&DAT_100c2bda0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar4);
  *(undefined **)(unaff_x20 + 0x40) = puVar2;
  puVar2 = &DAT_100c2c938;
  _swift_getKeyPath();
  puVar4 = &DAT_100facff0;
  FUN_1000037f0(&DAT_100facff0,&DAT_100c2c5a0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar4);
  *(undefined **)(unaff_x20 + 0x48) = puVar2;
  puVar2 = &DAT_100c2c970;
  _swift_getKeyPath();
  puVar4 = &DAT_100facff8;
  FUN_1000037f0(&DAT_100facff8,&DAT_100c2be10);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar4);
  *(undefined **)(unaff_x20 + 0x50) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  IVar3 = *(ID *)(unaff_x20 + 0x18);
  _swift_retain(param_2);
  _swift_retain(param_3);
  objc_stub::lock(IVar3);
  FUN_1000e6eb4(puVar8);
  puVar2 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  puVar5 = puVar8;
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(puVar8,3,puVar2);
  if ((int)puVar5 - 1U < 2) {
    objc_stub::unlock(IVar3);
  }
  else {
    if ((int)puVar5 == 0) {
      DVar6 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar6.unknown + -8) + 8))(puVar8,DVar6.unknown);
    }
    objc_stub::unlock(IVar3);
    FUN_1000e6b0c();
  }
  return;
}


