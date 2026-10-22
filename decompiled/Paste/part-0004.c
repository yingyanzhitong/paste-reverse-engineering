/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100009078 | FUN_100009078 */

void FUN_100009078(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10020b428();
  _swift_allocObject();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000090ac | FUN_1000090ac */

void FUN_1000090ac(void)

{
  FUN_100009690(FUN_1000055ec,0x24,FUN_1000090c4);
  return;
}



/* Address: 0x1000090c4 | FUN_1000090c4 */

void FUN_1000090c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000055ec();
  _swift_allocObject();
  FUN_1000046dc();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100009100 | FUN_100009100 */

void FUN_100009100(void)

{
  FUN_100009690(FUN_10009b180,0x2a,FUN_100009118);
  return;
}



/* Address: 0x100009118 | FUN_100009118 */

void FUN_100009118(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = 0;
  FUN_10009b180();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar2 = 0xd000000000000012;
  FUN_1000d4624(0xd000000000000012,0x8000000100d8dc50);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  puVar3 = &DAT_100c23180;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa8360;
  FUN_1000037f0(&DAT_100fa8360,&DAT_100c231b0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(lVar1 + 0x20) = puVar3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *param_1 = lVar1;
  return;
}



/* Address: 0x1000091d8 | FUN_1000091d8 */

void FUN_1000091d8(ID *param_1)

{
  ID IVar1;
  
  IVar1 = 0;
  FUN_10008782c();
  _objc_allocWithZone();
  IVar1 = objc_stub::init(IVar1);
  *param_1 = IVar1;
  return;
}



/* Address: 0x100009208 | FUN_100009208 */

void FUN_100009208(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10004f9c4();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100eb1cf8;
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x36,0x13,FUN_100009264,0);
  return;
}



/* Address: 0x100009264 | FUN_100009264 */

void FUN_100009264(void)

{
  FUN_100009774(FUN_10000927c,0x37,FUN_1000580e0);
  return;
}



/* Address: 0x10000927c | FUN_10000927c */

void FUN_10000927c(long *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/DI+App.swift",0x12,1,0x37,UVar4.unknown,pMVar2);
  }
  lVar6 = 0;
  FUN_10004f9c4();
  _swift_allocObject();
  _swift_getKeyPath(&DAT_100c23158);
  FUN_1002cb7e0(&local_78);
  *(undefined8 *)(lVar6 + 0x18) = uStack_70;
  *(undefined8 *)(lVar6 + 0x10) = local_78;
  *(undefined8 *)(lVar6 + 0x28) = uStack_60;
  *(undefined8 *)(lVar6 + 0x20) = local_68;
  *(undefined8 *)(lVar6 + 0x38) = uStack_50;
  *(undefined8 *)(lVar6 + 0x30) = local_58;
  puVar1 = PTR___swiftEmptySetSingleton_100eae0e8;
  *(undefined8 *)(lVar6 + 0x40) = local_48;
  *(undefined **)(lVar6 + 0x48) = puVar1;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  _swift_release(pMVar3);
  *param_1 = lVar6;
  return;
}



/* Address: 0x100009378 | FUN_100009378 */

void FUN_100009378(void)

{
  FUN_100009690(FUN_100307628,0x3c,thunk_FUN_100009390);
  return;
}



/* Address: 0x100009390 | FUN_100009390 */

void FUN_100009390(long *param_1)

{
  URL UVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  URL UVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  String SVar13;
  undefined1 auStack_e0 [7];
  undefined1 local_d9;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar3 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = (long)puVar3 - extraout_x12;
  puVar2 = &DAT_100eb0078;
  UVar5.unknown = (undefined *)0x7;
  _swift_allocObject(&DAT_100eb0078,0x48);
  _swift_getKeyPath(&DAT_100c23298);
  FUN_1002cb7e0(&local_d8);
  *(undefined8 *)(puVar2 + 0x18) = uStack_d0;
  *(undefined8 *)(puVar2 + 0x10) = local_d8;
  *(undefined8 *)(puVar2 + 0x28) = uStack_c0;
  *(undefined8 *)(puVar2 + 0x20) = local_c8;
  *(undefined8 *)(puVar2 + 0x38) = uStack_b0;
  *(undefined8 *)(puVar2 + 0x30) = local_b8;
  *(undefined8 *)(puVar2 + 0x40) = local_a8;
  FUN_10009f578(puVar3);
  SVar13.bridgeObject = (void *)0xeb00000000736369;
  SVar13.str = (char *)0x74736f6e67616944;
  Foundation::URL::appendingPathComponent(SVar13,UVar5);
  (**(code **)(lVar8 + 8))(puVar3,UVar1.unknown);
  FUN_1000d48fc();
  puVar4 = puVar3;
  FUN_1000d4994();
  FUN_100307628();
  _swift_allocObject();
  _swift_retain(puVar2);
  FUN_1002fea60(lVar6,puVar3,UVar1.unknown,puVar4,FUN_100009d24,puVar2);
  uVar11 = *(undefined8 *)(puVar2 + 0x18);
  uVar9 = *(undefined8 *)(puVar2 + 0x10);
  uStack_88 = *(undefined8 *)(puVar2 + 0x28);
  uVar12 = *(undefined8 *)(puVar2 + 0x20);
  uStack_78 = *(undefined8 *)(puVar2 + 0x38);
  uVar10 = *(undefined8 *)(puVar2 + 0x30);
  uVar7 = *(undefined8 *)(puVar2 + 0x40);
  local_a0 = uVar9;
  uStack_98 = uVar11;
  local_90 = uVar12;
  local_80 = uVar10;
  local_70 = uVar7;
  _swift_retain(uVar9);
  _swift_retain(uVar11);
  _swift_retain(uVar12);
  _swift_retain(uVar10);
  _swift_retain(uVar7);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_d9);
  _swift_release(uVar7);
  _swift_release(uVar10);
  _swift_release(uVar12);
  _swift_release(uVar11);
  _swift_release(uVar9);
  FUN_1002fe72c(local_d9);
  _swift_release(puVar2);
  *param_1 = lVar6;
  return;
}



/* Address: 0x1000095bc | FUN_1000095bc */

void FUN_1000095bc(undefined1 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_40 [31];
  undefined1 local_21;
  
  local_21 = param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_40,0x21,0);
  puVar1 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002cac1c(&local_21,puVar1);
  _swift_endAccess(auStack_40);
  return;
}



/* Address: 0x100009624 | FUN_100009624 */

void FUN_100009624(void)

{
  FUN_100009690(FUN_1000ae3cc,0x4a,FUN_10000963c);
  return;
}



/* Address: 0x10000963c | FUN_10000963c */

void FUN_10000963c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000ae3cc();
  _swift_allocObject();
  FUN_1000ae3ec();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100009678 | FUN_100009678 */

void FUN_100009678(void)

{
  FUN_100009690(FUN_100af5304,0x50,thunk_FUN_1000096f4);
  return;
}



/* Address: 0x100009690 | FUN_100009690 */

undefined8 FUN_100009690(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0;
  (*param_1)(0);
  FUN_1000d80e0(&local_28,"Paste/DI+App.swift",0x12,2,param_2,0x13,param_3,0,uVar1);
  return local_28;
}



/* Address: 0x1000096f4 | FUN_1000096f4 */

void FUN_1000096f4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_48 [3];
  undefined8 local_30;
  undefined **ppuStack_28;
  
  FUN_100008e84();
  uVar1 = 0;
  FUN_1001adc9c();
  ppuStack_28 = &PTR_PTR_100ec6cd0;
  local_48[0] = param_2;
  local_30 = uVar1;
  FUN_100af5304(0);
  _swift_allocObject();
  puVar2 = local_48;
  FUN_100af49cc();
  *param_1 = (long)puVar2;
  return;
}



/* Address: 0x10000975c | FUN_10000975c */

void FUN_10000975c(void)

{
  FUN_100009774(FUN_1000097e4,0x5a,FUN_1000580fc);
  return;
}



/* Address: 0x100009774 | FUN_100009774 */

void FUN_100009774(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  MainActor *pMVar1;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  (*param_4)(param_2,0,"Paste/DI+App.swift",0x12,2,param_3,pMVar1);
  *param_1 = param_2;
  return;
}



/* Address: 0x1000097e4 | FUN_1000097e4 */

void FUN_1000097e4(ID *param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *self;
  ID IVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/DI+App.swift",0x12,1,0x5a,UVar3.unknown,pMVar1);
  }
  self = &_OBJC_CLASS___NSViewController;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)self);
  _swift_release(pMVar2);
  *param_1 = IVar5;
  return;
}



/* Address: 0x100009890 | FUN_100009890 */

void FUN_100009890(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100307628(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x3c,0x13,thunk_FUN_100009390,0,uVar1);
  return;
}



/* Address: 0x1000098e0 | FUN_1000098e0 */

void FUN_1000098e0(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd00000000000001d,0x8000000100d8dc30,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x100009928 | FUN_100009928 */

void FUN_100009928(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd00000000000001d,0x8000000100d8dc30,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x100009970 | thunk_FUN_1000096f4 */

void thunk_FUN_1000096f4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 auStack_48 [3];
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  FUN_100008e84();
  uVar1 = 0;
  FUN_1001adc9c();
  ppuStack_28 = &PTR_PTR_100ec6cd0;
  auStack_48[0] = param_2;
  uStack_30 = uVar1;
  FUN_100af5304(0);
  _swift_allocObject();
  puVar2 = auStack_48;
  FUN_100af49cc();
  *param_1 = (long)puVar2;
  return;
}



/* Address: 0x100009974 | FUN_100009974 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100009974(void)

{
  undefined *puVar1;
  
  if (DAT_100fa6940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSViewController;
  _swift_getObjCClassMetadata();
  DAT_100fa6940 = puVar1;
  return;
}



/* Address: 0x1000099b8 | FUN_1000099b8 */

void FUN_1000099b8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  *param_1 = unaff_x20;
  _swift_retain();
  return;
}



/* Address: 0x1000099c4 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1000099c8 | FUN_1000099c8 */

void FUN_1000099c8(void)

{
  FUN_100008fb4();
  return;
}



/* Address: 0x1000099dc | FUN_1000099dc */

long FUN_1000099dc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_a0 [3];
  undefined8 local_88;
  undefined **local_80;
  undefined **ppuStack_78;
  undefined **local_70;
  undefined **ppuStack_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar1 = 0;
  FUN_1001adc9c();
  local_80 = &PTR_PTR_100eb06d0;
  ppuStack_78 = &PTR_PTR_100eb16f8;
  local_70 = &PTR_PTR_100eb21a8;
  ppuStack_68 = &PTR_PTR_100eb20c0;
  local_60 = &PTR_PTR_100ec6cd0;
  puVar2 = &DAT_100c231b8;
  local_a0[0] = param_1;
  local_88 = uVar1;
  _swift_getKeyPath(&DAT_100c231b8);
  puVar3 = puVar2;
  FUN_100009bac();
  FUN_1002cb7e0(&local_58,puVar2,puVar3);
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x10) = local_58;
  *(undefined8 *)(param_2 + 0x28) = uStack_40;
  *(undefined8 *)(param_2 + 0x20) = local_48;
  *(undefined8 *)(param_2 + 0x38) = uStack_30;
  *(undefined8 *)(param_2 + 0x30) = local_38;
  *(undefined8 *)(param_2 + 0x40) = local_28;
  puVar2 = &DAT_100c231e0;
  _swift_getKeyPath();
  puVar3 = &DAT_100fa6950;
  FUN_1000037f0(&DAT_100fa6950,&DAT_100c23208);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(param_2 + 0x48) = puVar2;
  puVar2 = &DAT_100c23210;
  _swift_getKeyPath();
  puVar3 = &DAT_100fa6958;
  FUN_1000037f0(&DAT_100fa6958,&DAT_100c23238);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(param_2 + 0x50) = puVar2;
  puVar2 = &DAT_100c23240;
  _swift_getKeyPath();
  puVar3 = &DAT_100fa6690;
  FUN_1000037f0(&DAT_100fa6690,&DAT_100c22ee0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(param_2 + 0x58) = puVar2;
  puVar2 = &DAT_100c23268;
  _swift_getKeyPath();
  puVar3 = &DAT_100faa820;
  FUN_1000037f0(&DAT_100faa820,&DAT_100c25c10);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(param_2 + 0x60) = puVar2;
  FUN_100009c70(local_a0,param_2 + 0x68);
  return param_2;
}



/* Address: 0x100009ba8 | thunk_FUN_1000b0718 */

void thunk_FUN_1000b0718(void)

{
  FUN_1000b0718();
  return;
}



/* Address: 0x100009bac | FUN_100009bac */

void FUN_100009bac(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined **local_18;
  
  if (DAT_100fa6948 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa8170;
  FUN_100005c24(&DAT_100fa8170,&DAT_100c24ca0);
  local_18 = &PTR_PTR_100ec7078;
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3ced4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3ced4,puVar1,&local_18);
  DAT_100fa6948 = pTVar2;
  return;
}



/* Address: 0x100009c14 | thunk_FUN_100025090 */

void thunk_FUN_100025090(void)

{
  FUN_100025090();
  return;
}



/* Address: 0x100009c18 | FUN_100009c18 */

void FUN_100009c18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100307628(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x3c,0x13,thunk_FUN_100009390,0,uVar1);
  return;
}



/* Address: 0x100009c68 | thunk_FUN_1000a0da0 */

void thunk_FUN_1000a0da0(void)

{
  FUN_1000a0da0();
  return;
}



/* Address: 0x100009c6c | thunk_FUN_10008d74c */

void thunk_FUN_10008d74c(void)

{
  FUN_10008d74c();
  return;
}



/* Address: 0x100009c70 | FUN_100009c70 */

undefined8 * FUN_100009c70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  uVar4 = param_1[5];
  uVar3 = param_1[4];
  uVar6 = param_1[7];
  uVar5 = param_1[6];
  param_2[8] = param_1[8];
  param_2[5] = uVar4;
  param_2[4] = uVar3;
  param_2[7] = uVar6;
  param_2[6] = uVar5;
  param_2[3] = uVar2;
  param_2[2] = uVar1;
  return param_2;
}



/* Address: 0x100009c98 | thunk_FUN_100009390 */

void thunk_FUN_100009390(void)

{
  FUN_100009390();
  return;
}



/* Address: 0x100009c9c | FUN_100009c9c */

void FUN_100009c9c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100009ce0 | FUN_100009ce0 */

void FUN_100009ce0(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_1002ccc34(0xd000000000000014,0x8000000100d8dc70,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x100009d24 | FUN_100009d24 */

void FUN_100009d24(void)

{
  FUN_1000095bc();
  return;
}



/* Address: 0x100009d2c | FUN_100009d2c */

void FUN_100009d2c(void)

{
  FUN_100009774(FUN_1000099c8,0x19,FUN_1000580c4);
  return;
}



/* Address: 0x100009d54 | thunk_FUN_100009390 */

void thunk_FUN_100009390(void)

{
  thunk_FUN_100009390();
  return;
}



/* Address: 0x100009d58 | FUN_100009d58 */

undefined * FUN_100009d58(long param_1)

{
  _HashTable _Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  Bucket BVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    FUN_100071750(0,lVar11,0);
    _Var1.unknown = (undefined *)(param_1 + 0x38);
    BVar8 = Swift::_HashTable::get_startBucket(_Var1);
    lVar16 = 0;
    do {
      if ((ulong)BVar8.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100009f60);
        (*pcVar7)();
      }
      uVar12 = (ulong)BVar8.offset >> 6;
      uVar13 = 1L << (BVar8.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar12 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100009f64);
        (*pcVar7)();
      }
      iVar5 = *(int *)(param_1 + 0x24);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + BVar8.offset * 0x30);
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar15 = *(ulong *)(puVar6 + 0x10);
      uVar4 = *(ulong *)(puVar6 + 0x18);
      _swift_bridgeObjectRetain(uVar3);
      if (uVar4 >> 1 <= uVar15) {
        FUN_100071750(1 < uVar4,uVar15 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar6 + uVar15 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar6 + uVar15 * 0x10 + 0x28) = uVar3;
      uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar15 <= (ulong)BVar8.offset) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100009f68);
        (*pcVar7)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar12 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100009f6c);
        (*pcVar7)();
      }
      if (iVar5 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100009f70);
        (*pcVar7)();
      }
      uVar13 = *(ulong *)(_Var1.unknown + uVar12 * 8) & -2L << (BVar8.offset & 0x3fU);
      if (uVar13 == 0) {
        lVar14 = uVar12 << 6;
        puVar10 = (ulong *)(param_1 + 0x40 + uVar12 * 8);
        do {
          uVar12 = uVar12 + 1;
          if (uVar15 + 0x3f >> 6 <= uVar12) {
            FUN_10000cae0(BVar8.offset,iVar5,0);
            BVar8.offset = uVar15;
            goto LAB_100009df0;
          }
          uVar13 = *puVar10;
          lVar14 = lVar14 + 0x40;
          puVar10 = puVar10 + 1;
        } while (uVar13 == 0);
        FUN_10000cae0(BVar8.offset,iVar5,0);
        uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        BVar8.offset = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + lVar14;
      }
      else {
        uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        BVar8.offset = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | BVar8.offset & 0x7fffffffffffffc0U
        ;
      }
LAB_100009df0:
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar11);
  }
  return puVar6;
}



/* Address: 0x100009f70 | FUN_100009f70 */

void FUN_100009f70(void)

{
  String SVar1;
  String SVar2;
  String SVar3;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_88 [72];
  
  SVar1 = *unaff_x20;
  SVar2 = unaff_x20[1];
  SVar3 = unaff_x20[2];
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_88,SVar1);
  Swift::String::hash((Hasher)auStack_88,SVar2);
  into.unknown = auStack_88;
  Swift::String::hash(into,SVar3);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x100009ff0 | FUN_100009ff0 */

void FUN_100009ff0(Hasher param_1)

{
  String SVar1;
  String SVar2;
  String *unaff_x20;
  
  SVar1 = unaff_x20[1];
  SVar2 = unaff_x20[2];
  Swift::String::hash(param_1,*unaff_x20);
  Swift::String::hash(param_1,SVar1);
  Swift::String::hash(param_1,SVar2);
  return;
}



/* Address: 0x10000a048 | FUN_10000a048 */

void FUN_10000a048(__int64 param_1)

{
  String SVar1;
  String SVar2;
  String SVar3;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_88 [72];
  
  SVar1 = *unaff_x20;
  SVar2 = unaff_x20[1];
  SVar3 = unaff_x20[2];
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_88,SVar1);
  Swift::String::hash((Hasher)auStack_88,SVar2);
  into.unknown = auStack_88;
  Swift::String::hash(into,SVar3);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10000a0c4 | FUN_10000a0c4 */

bool FUN_10000a0c4(undefined8 *param_1,long *param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  undefined *puVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  _StringGuts _Var9;
  
  _Var4.unknown = (undefined *)param_1[2];
  _Var1.unknown = (undefined *)param_1[3];
  _Var5.unknown = (undefined *)param_1[4];
  _Var9.unknown = (undefined *)param_1[5];
  puVar2 = (undefined *)param_2[2];
  puVar6 = (undefined *)param_2[3];
  puVar3 = (undefined *)param_2[4];
  puVar7 = (undefined *)param_2[5];
  if (((((undefined *)*param_1 == (undefined *)*param_2) &&
       ((undefined *)param_1[1] == (undefined *)param_2[1])) ||
      (bVar8 = Swift::_stringCompareWithSmolCheck
                         ((undefined *)*param_1,(undefined *)param_1[1],
                          (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar8)) &&
     (((_Var4.unknown == puVar2 && (_Var1.unknown == puVar6)) ||
      (bVar8 = Swift::_stringCompareWithSmolCheck
                         (_Var4,_Var1,(_StringComparisonResult)(__int8)puVar2), bVar8)))) {
    if ((_Var5.unknown != puVar3) || (_Var9.unknown != puVar7)) {
      bVar8 = Swift::_stringCompareWithSmolCheck
                        (_Var5,_Var9,(_StringComparisonResult)(__int8)puVar3);
      return bVar8;
    }
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}



/* Address: 0x10000a1a8 | FUN_10000a1a8 */

undefined1 FUN_10000a1a8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [31];
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_81);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_81;
}



/* Address: 0x10000a288 | FUN_10000a288 */

undefined8 FUN_10000a288(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
  FUN_1002ca7e0(&local_88);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_88;
}



/* Address: 0x10000a364 | FUN_10000a364 */

undefined8 FUN_10000a364(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x88,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
  FUN_1002ca7e0(&local_88);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_88;
}



/* Address: 0x10000a444 | FUN_10000a444 */

undefined1 FUN_10000a444(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [31];
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0xc0,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 200);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_81);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_81;
}



/* Address: 0x10000a520 | FUN_10000a520 */

void FUN_10000a520(void)

{
  FUN_10000a544(FUN_1003857b8);
  return;
}



/* Address: 0x10000a52c | FUN_10000a52c */

void FUN_10000a52c(undefined8 param_1)

{
  FUN_10000a670(param_1,FUN_1003857b8);
  return;
}



/* Address: 0x10000a538 | FUN_10000a538 */

void FUN_10000a538(void)

{
  FUN_10000a544(FUN_100385790);
  return;
}



/* Address: 0x10000a544 | FUN_10000a544 */

uint FUN_10000a544(code *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_b0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x50);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  local_90 = puVar2;
  uStack_88 = uVar4;
  local_80 = uVar5;
  local_70 = uVar3;
  local_60 = uVar1;
  _swift_retain(puVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
  FUN_1002ca7e0(&local_98);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release();
  (*param_1)();
  uVar1 = *puVar2;
  uVar3 = puVar2[1];
  _swift_bridgeObjectRetain(uVar3);
  FUN_100052458(uVar1,uVar3,local_98);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(local_98);
  return (uint)uVar1 & 1;
}



/* Address: 0x10000a664 | FUN_10000a664 */

void FUN_10000a664(undefined8 param_1)

{
  FUN_10000a670(param_1,FUN_100385790);
  return;
}



/* Address: 0x10000a670 | FUN_10000a670 */

void FUN_10000a670(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (((ulong)param_1 & 1) == 0) {
    (*param_2)();
    uVar1 = *param_1;
    uVar2 = param_1[1];
    _swift_getKeyPath();
    _swift_getKeyPath(&DAT_100c23628);
    _swift_beginAccess(unaff_x20 + 0x50,auStack_b8,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
    local_a0 = uVar4;
    uStack_98 = uVar6;
    local_90 = uVar7;
    local_80 = uVar5;
    local_70 = uVar3;
    _swift_retain();
    _swift_bridgeObjectRetain(uVar2);
    _swift_retain(uVar4);
    _swift_retain(uVar6);
    _swift_retain(uVar7);
    _swift_retain(uVar5);
    _swift_retain(uVar3);
    FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
    FUN_1002ca7e0(auStack_c8);
    _swift_release(uVar3);
    _swift_release(uVar5);
    _swift_release(uVar7);
    _swift_release(uVar6);
    _swift_release(uVar4);
    uVar3 = uVar2;
    FUN_10000798c(uVar1,uVar2);
    FUN_1002cb5a0(auStack_c8);
    _swift_bridgeObjectRelease(uVar2);
  }
  else {
    (*param_2)();
    uVar1 = *param_1;
    uVar2 = param_1[1];
    _swift_getKeyPath(&DAT_100c23600);
    _swift_getKeyPath(&DAT_100c23628);
    _swift_beginAccess(unaff_x20 + 0x50,auStack_b8,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
    local_a0 = uVar4;
    uStack_98 = uVar6;
    local_90 = uVar7;
    local_80 = uVar5;
    local_70 = uVar3;
    _swift_bridgeObjectRetain(uVar2);
    _swift_retain();
    _swift_retain(uVar4);
    _swift_retain(uVar6);
    _swift_retain(uVar7);
    _swift_retain(uVar5);
    _swift_retain(uVar3);
    FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
    FUN_1002ca7e0(auStack_d0);
    _swift_release(uVar3);
    _swift_release(uVar5);
    _swift_release(uVar7);
    _swift_release(uVar6);
    _swift_release(uVar4);
    FUN_10007253c(auStack_c8,uVar1,uVar2);
    FUN_1002cb5a0(auStack_d0);
    uVar3 = local_c0;
  }
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x10000a8e4 | FUN_10000a8e4 */

void FUN_10000a8e4(void)

{
  FUN_100005d90(&DAT_100c234f8,&DAT_100c23520);
  return;
}



/* Address: 0x10000a8f8 | FUN_10000a8f8 */

void FUN_10000a8f8(void)

{
  FUN_100005d90(&DAT_100c23540,&DAT_100c23568);
  return;
}



/* Address: 0x10000a90c | FUN_10000a90c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010000ab2c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10000a90c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_150 [8];
  undefined *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = &DAT_100fa6a68;
  FUN_1000037f0(&DAT_100fa6a68,&DAT_100c23400);
  lVar8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_150 + -extraout_x8;
  puVar3 = &DAT_100c23408;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa6a70;
  FUN_1000037f0(&DAT_100fa6a70,&DAT_100c23430);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  _swift_getKeyPath(&DAT_100c23438);
  FUN_1002cb7e0(&local_140);
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x18) = local_140;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x28) = local_130;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x38) = local_120;
  *(undefined8 *)(unaff_x20 + 0x48) = local_110;
  puVar3 = &DAT_100c23460;
  _swift_getKeyPath(&DAT_100c23460);
  puVar4 = &DAT_100fa6a78;
  FUN_10000c56c(&DAT_100fa6a78,
                PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240,
                PTR__Swift__Swift__Set<undefined>_>Swift__Decodable_100eac6d8);
  puVar5 = &DAT_100fa6a80;
  FUN_10000c56c(&DAT_100fa6a80,
                PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210,
                PTR__Swift__Swift__Set<undefined>_>Swift__Encodable_100eac6c8);
  FUN_1002cb88c(&local_108,puVar3,puVar4,puVar5);
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x50) = local_108;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x60) = local_f8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x70) = local_e8;
  *(undefined8 *)(unaff_x20 + 0x80) = local_d8;
  _swift_getKeyPath(&DAT_100c23498);
  FUN_1002cb88c(&local_d0);
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x88) = local_d0;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x98) = local_c0;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0xb8) = local_a0;
  _swift_getKeyPath(&DAT_100c234c8);
  FUN_1002cb7e0(&local_98);
  *(undefined8 *)(unaff_x20 + 200) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0xc0) = local_98;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0xd0) = local_88;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0xe0) = local_78;
  *(undefined8 *)(unaff_x20 + 0xf0) = local_68;
  lVar1 = _TtC5Paste24PrivacySettingsViewModel::_ignoredApplications;
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  local_148 = PTR___swiftEmptySetSingleton_100eae0e8;
  puVar3 = &DAT_100fa69b0;
  FUN_1000037f0(&DAT_100fa69b0,&DAT_100c27450);
  Combine::Published::init(puVar6,puVar3,puVar3);
  pcVar7 = *(code **)(lVar8 + 0x20);
  (*pcVar7)(unaff_x20 + lVar1,puVar6,puVar2);
  lVar1 = _TtC5Paste24PrivacySettingsViewModel::_selectedApplications;
  local_148 = puVar4;
  Combine::Published::init(puVar6,puVar3,puVar3);
  (*pcVar7)(unaff_x20 + lVar1,puVar6,puVar2);
  FUN_10000aba0();
  return;
}



/* Address: 0x10000aba0 | FUN_10000aba0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000aba0(void)

{
  long *plVar1;
  MainActor *pMVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  URL UVar6;
  MainActor *pMVar7;
  MainActor *pMVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  ID IVar11;
  NSString *pNVar12;
  URL UVar13;
  NSURL *pNVar14;
  undefined *puVar15;
  undefined *puVar16;
  Published *pPVar17;
  long lVar18;
  long extraout_x8;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar22;
  long unaff_x20;
  code *pcVar23;
  ulong uVar24;
  ulong *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  String SVar31;
  void *local_120;
  char *local_118;
  void *local_110;
  char *pcStack_108;
  ulong local_100;
  undefined *local_f0;
  undefined1 auStack_c0 [24];
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  lVar21 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = (lVar21 - extraout_x12) - extraout_x12_00;
  _swift_beginAccess(unaff_x20 + 0x88,auStack_c0,0,0);
  uVar29 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar30 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar28 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar22 = *(undefined8 *)(unaff_x20 + 0xb8);
  local_a0 = uVar27;
  uStack_98 = uVar29;
  local_90 = uVar30;
  local_80 = uVar28;
  local_70 = uVar22;
  _swift_retain(uVar27);
  _swift_retain(uVar29);
  _swift_retain(uVar30);
  _swift_retain(uVar28);
  _swift_retain(uVar22);
  FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
  FUN_1002ca7e0(&local_a8);
  _swift_release(uVar22);
  _swift_release(uVar28);
  _swift_release(uVar30);
  _swift_release(uVar29);
  _swift_release(uVar27);
  puVar25 = (ulong *)(local_a8 + 0x38);
  local_100 = -1L << ((ulong)(byte)local_a8[0x20] & 0x3f);
  uVar24 = 0xffffffffffffffff;
  if (-local_100 < 0x40) {
    uVar24 = ~(-1L << (-local_100 & 0x3f));
  }
  uVar24 = uVar24 & *puVar25;
  uVar20 = 0x3f - local_100;
  _swift_bridgeObjectRetain();
  lVar26 = 0;
  lVar4 = lVar26;
  local_f0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    while( true ) {
      while (uVar24 == 0) {
        bVar5 = SCARRY8(lVar26,1);
        lVar26 = lVar26 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x10000b134);
          (*pcVar23)();
        }
        if ((long)(uVar20 >> 6) <= lVar26) {
          FUN_10000c650(local_a8,puVar25,~local_100,lVar4,0);
          _swift_bridgeObjectRelease(local_a8);
          puVar16 = local_f0;
          FUN_1000749e0();
          _swift_bridgeObjectRelease(local_f0);
          pPVar17 = (Published *)&DAT_100c234f8;
          _swift_getKeyPath(&DAT_100c234f8);
          puVar15 = &DAT_100c23520;
          _swift_getKeyPath(&DAT_100c23520);
          local_a8 = puVar16;
          _swift_retain(unaff_x20);
          Combine::Published::_set_subscript(pPVar17,&local_a8,unaff_x20,pPVar17,puVar15);
          return;
        }
        uVar24 = puVar25[lVar26];
      }
      uVar3 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      pMVar2 = *(MainActor **)
                (*(long *)(local_a8 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
                 lVar26 * 0x400 + 8);
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      pMVar8 = pMVar2;
      _swift_bridgeObjectRetain();
      pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar8);
      pMVar8 = pMVar7;
      FUN_1000081a8();
      UVar9 = Swift::Actor::get_unownedExecutor();
      UVar10 = UVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar10.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/PrivacySettingsViewModel.swift",0x24,1,0x56,UVar9.unknown,pMVar8);
      }
      uVar24 = uVar24 - 1 & uVar24;
      IVar11 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pMVar2);
      UVar13.unknown =
           (undefined *)NSWorkspace::URLForApplicationWithBundleIdentifier_(IVar11,pNVar12);
      lVar4 = lVar26;
      if (UVar13.unknown != (undefined *)0x0) break;
LAB_10000ad6c:
      _swift_release(pMVar7);
    }
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar13);
    (**(code **)(lVar18 + 0x20))(lVar19,lVar21 - extraout_x12,UVar6.unknown);
    (**(code **)(lVar18 + 0x10))(lVar21,lVar19,UVar6.unknown);
    UVar13.unknown = &_OBJC_CLASS___NSBundle;
    _objc_allocWithZone();
    pNVar14 = Foundation::URL::_bridgeToObjectiveC(UVar13);
    IVar11 = objc_stub::initWithURL_((ID)UVar13.unknown,pNVar14);
    if ((IVar11 == 0) || (IVar11 = objc_stub::bundleIdentifier(IVar11), IVar11 == 0)) {
      pcVar23 = *(code **)(lVar18 + 8);
      (*pcVar23)(lVar21,UVar6.unknown);
      (*pcVar23)(lVar19,UVar6.unknown);
      goto LAB_10000ad6c;
    }
    SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    local_110 = SVar31.bridgeObject;
    pcStack_108 = SVar31.str;
    UVar13.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar31 = Foundation::URL::get_path(UVar13);
    pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    NSFileManager::displayNameAtPath_((ID)UVar13.unknown,pNVar12);
    SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    local_120 = SVar31.bridgeObject;
    local_118 = SVar31.str;
    SVar31 = Foundation::URL::get_path((URL)0x0);
    pcVar23 = *(code **)(lVar18 + 8);
    (*pcVar23)(lVar21,UVar6.unknown);
    (*pcVar23)(lVar19,UVar6.unknown);
    _swift_release(pMVar7);
    puVar15 = local_f0;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar15 & 1) == 0) {
      plVar1 = (long *)(local_f0 + 0x10);
      local_f0 = (undefined *)0x0;
      FUN_100088ad0(0,*plVar1 + 1,1);
    }
    uVar3 = *(ulong *)(local_f0 + 0x10);
    if (*(ulong *)(local_f0 + 0x18) >> 1 <= uVar3) {
      puVar15 = (undefined *)(ulong)(1 < *(ulong *)(local_f0 + 0x18));
      FUN_100088ad0(puVar15,uVar3 + 1,1,local_f0);
      local_f0 = puVar15;
    }
    *(ulong *)(local_f0 + 0x10) = uVar3 + 1;
    *(char **)(local_f0 + uVar3 * 0x30 + 0x20) = pcStack_108;
    *(void **)(local_f0 + uVar3 * 0x30 + 0x28) = local_110;
    *(char **)(local_f0 + uVar3 * 0x30 + 0x30) = local_118;
    *(void **)(local_f0 + uVar3 * 0x30 + 0x38) = local_120;
    *(String *)(local_f0 + uVar3 * 0x30 + 0x40) = SVar31;
  } while( true );
}



/* Address: 0x10000b134 | FUN_10000b134 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10000b134(void)

{
  URL UVar1;
  LocalizedStringResource LVar2;
  undefined *puVar3;
  ID self;
  NSString *pNVar4;
  UTType UVar5;
  UTType UVar6;
  NSArray *pNVar7;
  URL UVar8;
  NSURL *pNVar9;
  ID IVar10;
  TaskPriority TVar11;
  MainActor *pMVar12;
  MainActor *pMVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar14;
  MainActor *unaff_x20;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  String SVar18;
  
  puVar3 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = &stack0xffffffffffffffa0 + -extraout_x8;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar15 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = (undefined *)(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &_OBJC_CLASS___NSOpenPanel;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar3);
  FUN_1001c0908(LVar2.unknown);
  SVar18 = (extension_Foundation)::Swift::String::init(LVar2);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  objc_stub::setPrompt_(self,pNVar4);
  objc_stub::setShowsResizeIndicator_(self,1);
  objc_stub::setCanCreateDirectories_(self,0);
  objc_stub::setAllowsMultipleSelection_(self,1);
  UVar5.unknown = &DAT_100fa6a98;
  FUN_1000037f0(&DAT_100fa6a98,&DAT_100c235e0);
  UVar6 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  uVar14 = (ulong)*(byte *)(*(long *)(UVar6.unknown + -8) + 0x50);
  _swift_allocObject(UVar5.unknown,
                     (uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff)) +
                     *(long *)(*(long *)(UVar6.unknown + -8) + 0x48),uVar14 | 7);
  *(undefined8 *)(UVar5.unknown + 0x18) = 2;
  *(undefined8 *)(UVar5.unknown + 0x10) = 1;
  UniformTypeIdentifiers::UTType::get_application(UVar5);
  pNVar7 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(UVar5.unknown);
  objc_stub::setAllowedContentTypes_(self,pNVar7);
  UVar8 = Foundation::URL::_init();
  pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar8);
  (**(code **)(lVar17 + 8))(lVar15,UVar1.unknown);
  objc_stub::setDirectoryURL_(self,pNVar9);
  IVar10 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
  IVar10 = NSApplication::keyWindow(IVar10);
  if (IVar10 != 0) {
    TVar11 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar11.unknown + -8) + 0x38))(puVar16,1,1,TVar11.unknown);
    pMVar12 = Swift::MainActor::typeMetadataAccessor();
    pMVar13 = unaff_x20;
    _swift_retain();
    pMVar12 = Swift::MainActor::get_shared(pMVar12,pMVar13);
    pMVar13 = pMVar12;
    FUN_1000081a8();
    puVar3 = &DAT_100eb0138;
    _swift_allocObject(&DAT_100eb0138,0x38,7);
    *(MainActor **)(puVar3 + 0x10) = pMVar12;
    *(MainActor **)(puVar3 + 0x18) = pMVar13;
    *(ID *)(puVar3 + 0x20) = self;
    *(ID *)(puVar3 + 0x28) = IVar10;
    *(MainActor **)(puVar3 + 0x30) = unaff_x20;
    FUN_1000645b0(0,0,puVar16,&DAT_100c235f0,puVar3);
    _swift_release();
  }
  return 0;
}



/* Address: 0x10000b468 | FUN_10000b468 */

void FUN_10000b468(void)

{
  URL UVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x120) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x110) = in_x3;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x128) = UVar1.unknown;
  lVar7 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x130) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar3;
  puVar4 = &DAT_100fa6aa0;
  FUN_1000037f0(&DAT_100fa6aa0,&DAT_100c235f8);
  *(undefined **)(unaff_x22 + 0x148) = puVar4;
  lVar7 = *(long *)(puVar4 + -8);
  *(long *)(unaff_x22 + 0x150) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar3;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x160) = pMVar5;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x168) = pMVar5;
  FUN_1000081a8();
  *(MainActor **)(unaff_x22 + 0x170) = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x178) = UVar6.unknown;
  *(MainActor **)(unaff_x22 + 0x180) = pMVar5;
  _swift_task_switch(FUN_10000b548,UVar6.unknown,pMVar5);
  return;
}



/* Address: 0x10000b548 | FUN_10000b548 */

void FUN_10000b548(void)

{
  long lVar1;
  ID self;
  undefined8 uVar2;
  undefined8 uVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  String function;
  
  lVar1 = *(long *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  self = *(ID *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x100;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10000b668;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
  lVar4 = unaff_x22 + 0x70;
  FUN_10000cbb0(lVar4);
  FUN_100003c60(0);
  function.bridgeObject = (void *)0x8000000100d8dcc0;
  function.str = (char *)0xd00000000000001e;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar1 + 0x20))(lVar4,uVar2,uVar5);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10000bc00;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100eb0150;
  objc_stub::beginSheetModalForWindow_completionHandler_(self,uVar3);
  (**(code **)(lVar1 + 8))(lVar4,uVar5);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}


