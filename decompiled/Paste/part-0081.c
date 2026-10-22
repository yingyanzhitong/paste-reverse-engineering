/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000f1de8 | FUN_1000f1de8 */

undefined8 FUN_1000f1de8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_48 [3];
  
  puVar1 = &DAT_100c2d398;
  _swift_getKeyPath(&DAT_100c2d398);
  puVar2 = &DAT_100c2d3c0;
  _swift_getKeyPath(&DAT_100c2d3c0);
  Combine::Published::_get_subscript(local_48);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_48[0];
}



/* Address: 0x1000f1e5c | FUN_1000f1e5c */

void FUN_1000f1e5c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c2d398;
  _swift_getKeyPath(&DAT_100c2d398);
  puVar2 = &DAT_100c2d3c0;
  _swift_getKeyPath(&DAT_100c2d3c0);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000f1ec4 | FUN_1000f1ec4 */

void FUN_1000f1ec4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  Published *pPVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  pPVar6 = (Published *)*param_2;
  puVar4 = &DAT_100c2d398;
  _swift_getKeyPath(&DAT_100c2d398);
  puVar5 = &DAT_100c2d3c0;
  _swift_getKeyPath(&DAT_100c2d3c0);
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(pPVar6);
  Combine::Published::_set_subscript(pPVar6,&local_58,pPVar6,puVar4,puVar5);
  return;
}



/* Address: 0x1000f1f4c | FUN_1000f1f4c */

void FUN_1000f1f4c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  Published *unaff_x20;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  _swift_getKeyPath(&DAT_100c2d398);
  _swift_getKeyPath(&DAT_100c2d3c0);
  local_58 = param_1;
  uStack_50 = param_2;
  local_48 = param_3;
  _swift_retain();
  Combine::Published::_set_subscript(unaff_x20,&local_58);
  return;
}



/* Address: 0x1000f1fcc | FUN_1000f1fcc */

code * FUN_1000f1fcc(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar1 = &DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x50d8);
  }
  *param_1 = puVar1;
  puVar2 = &DAT_100c2d398;
  _swift_getKeyPath();
  *(undefined **)(puVar1 + 0x20) = puVar2;
  puVar2 = &DAT_100c2d3c0;
  _swift_getKeyPath();
  *(undefined **)(puVar1 + 0x28) = puVar2;
  puVar3 = puVar1;
  Combine::Published::_modify_subscript();
  *(undefined1 **)(puVar1 + 0x30) = puVar3;
  return FUN_1000f205c;
}



/* Address: 0x1000f205c | FUN_1000f205c */

void FUN_1000f205c(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = (void *)*param_1;
  uVar1 = *(undefined8 *)((long)pvVar2 + 0x28);
  uVar3 = *(undefined8 *)((long)pvVar2 + 0x20);
  (**(code **)((long)pvVar2 + 0x30))(pvVar2,0);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _free(pvVar2);
  return;
}



/* Address: 0x1000f20a8 | FUN_1000f20a8 */

undefined8 FUN_1000f20a8(void)

{
  return 0;
}



/* Address: 0x1000f20b8 | FUN_1000f20b8 */

void FUN_1000f20b8(void)

{
  Published PVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + _TtC13PastePlatform13ActivePreview::_current,auStack_48,0x21,0);
  PVar1.unknown = &DAT_100fadf28;
  FUN_1000037f0(&DAT_100fadf28,&DAT_100c2d3e0);
  Combine::Published::_get_projectedValue(PVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1000f2128 | FUN_1000f2128 */

void FUN_1000f2128(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar2 = &DAT_100fadf30;
  FUN_1000037f0(&DAT_100fadf30,&DAT_100c2d3e8);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(auStack_60 + -extraout_x8,param_1,puVar2);
  lVar1 = _TtC13PastePlatform13ActivePreview::_current;
  _swift_beginAccess(unaff_x20 + _TtC13PastePlatform13ActivePreview::_current,auStack_58,0x21,0);
  FUN_1000037f0(&DAT_100fadf28,&DAT_100c2d3e0);
  Combine::Published::_set_projectedValue
            ((Published *)(unaff_x20 + lVar1),(Publisher)(auStack_60 + -extraout_x8));
  _swift_endAccess(auStack_58);
  (**(code **)(lVar3 + 8))(param_1,puVar2);
  return;
}



/* Address: 0x1000f2208 | FUN_1000f2208 */

undefined1  [16] FUN_1000f2208(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  void *pvVar4;
  Published PVar5;
  long lVar6;
  long unaff_x20;
  void *pvVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  pvVar2 = (void *)0x80;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x80);
  }
  else {
    _swift_coroFrameAlloc(0x80,52999);
  }
  *param_1 = pvVar2;
  *(long *)((long)pvVar2 + 0x48) = unaff_x20;
  puVar3 = &DAT_100fadf30;
  FUN_1000037f0(&DAT_100fadf30,&DAT_100c2d3e8);
  *(undefined **)((long)pvVar2 + 0x50) = puVar3;
  lVar6 = *(long *)(puVar3 + -8);
  *(long *)((long)pvVar2 + 0x58) = lVar6;
  pvVar7 = *(void **)(lVar6 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar7);
    *(void **)((long)pvVar2 + 0x60) = pvVar4;
    pvVar7 = _malloc((size_t)pvVar7);
  }
  else {
    pvVar4 = pvVar7;
    _swift_coroFrameAlloc(pvVar7,52999);
    *(void **)((long)pvVar2 + 0x60) = pvVar4;
    _swift_coroFrameAlloc(pvVar7,52999);
  }
  lVar6 = _TtC13PastePlatform13ActivePreview::_current;
  *(void **)((long)pvVar2 + 0x68) = pvVar7;
  *(long *)((long)pvVar2 + 0x70) = lVar6;
  _swift_beginAccess(unaff_x20 + lVar6,pvVar2,0x21,0);
  PVar5.unknown = &DAT_100fadf28;
  FUN_1000037f0(&DAT_100fadf28,&DAT_100c2d3e0);
  *(undefined **)((long)pvVar2 + 0x78) = PVar5.unknown;
  Combine::Published::_get_projectedValue(PVar5);
  _swift_endAccess(pvVar2);
  auVar8._8_8_ = pvVar7;
  auVar8._0_8_ = FUN_1000f230c;
  return auVar8;
}



/* Address: 0x1000f230c | FUN_1000f230c */

void FUN_1000f230c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  Publisher PVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  void *pvVar8;
  
  pvVar8 = (void *)*param_1;
  lVar5 = *(long *)((long)pvVar8 + 0x58);
  (**(code **)(lVar5 + 0x10))
            (*(undefined8 *)((long)pvVar8 + 0x60),*(undefined8 *)((long)pvVar8 + 0x68),
             *(undefined8 *)((long)pvVar8 + 0x50));
  lVar2 = *(long *)((long)pvVar8 + 0x70);
  PVar3.unknown = *(undefined **)((long)pvVar8 + 0x60);
  pvVar6 = *(void **)((long)pvVar8 + 0x68);
  lVar1 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar1 = 0x30;
  }
  lVar4 = *(long *)((long)pvVar8 + 0x48);
  uVar7 = *(undefined8 *)((long)pvVar8 + 0x50);
  _swift_beginAccess(lVar4 + lVar2,(long)pvVar8 + lVar1,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(lVar4 + lVar2),PVar3);
  _swift_endAccess((long)pvVar8 + lVar1);
  (**(code **)(lVar5 + 8))(pvVar6,uVar7);
  _free(pvVar6);
  _free(PVar3.unknown);
  _free(pvVar8);
  return;
}



/* Address: 0x1000f23c8 | FUN_1000f23c8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f241c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1000f23c8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_allocObject();
  lVar1 = _TtC13PastePlatform13ActivePreview::_current;
  puVar2 = &DAT_100fadf18;
  FUN_1000037f0(&DAT_100fadf18,&DAT_100c2d390);
  Combine::Published::init(unaff_x20 + lVar1,puVar2,puVar2);
  return unaff_x20;
}



/* Address: 0x1000f2434 | FUN_1000f2434 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f24bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000f2434(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  puVar2 = &DAT_100fadf28;
  FUN_1000037f0(&DAT_100fadf28,&DAT_100c2d3e0);
  lVar4 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC13PastePlatform13ActivePreview::_current;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  puVar3 = &DAT_100fadf18;
  FUN_1000037f0(&DAT_100fadf18,&DAT_100c2d390);
  Combine::Published::init(auStack_60 + -extraout_x8,puVar3,puVar3);
  (**(code **)(lVar4 + 0x20))(unaff_x20 + lVar1,auStack_60 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x1000f24f0 | FUN_1000f24f0 */

void FUN_1000f24f0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC13PastePlatform13ActivePreview::_current;
  puVar2 = &DAT_100fadf28;
  FUN_1000037f0(&DAT_100fadf28,&DAT_100c2d3e0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  return;
}



/* Address: 0x1000f253c | FUN_1000f253c */

void FUN_1000f253c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC13PastePlatform13ActivePreview::_current;
  puVar2 = &DAT_100fadf28;
  FUN_1000037f0(&DAT_100fadf28,&DAT_100c2d3e0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000f2594 | FUN_1000f2594 */

undefined8 FUN_1000f2594(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = 0;
  FUN_1000f26c0(0);
  FUN_1000d80e0(&local_18,"PastePlatform/ActivePreview.swift",0x21,2,0x1a,0x13,FUN_1000f25e8,0,uVar1
               );
  return local_18;
}



/* Address: 0x1000f25e8 | FUN_1000f25e8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f268c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000f25e8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  puVar2 = &DAT_100fadf28;
  FUN_1000037f0(&DAT_100fadf28,&DAT_100c2d3e0);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1000f26c0();
  _swift_allocObject();
  lVar1 = _TtC13PastePlatform13ActivePreview::_current;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  puVar4 = &DAT_100fadf18;
  FUN_1000037f0(&DAT_100fadf18,&DAT_100c2d390);
  Combine::Published::init(auStack_60 + -extraout_x8,puVar4,puVar4);
  (**(code **)(lVar5 + 0x20))(lVar3 + lVar1,auStack_60 + -extraout_x8,puVar2);
  *param_1 = lVar3;
  return;
}



/* Address: 0x1000f26c0 | FUN_1000f26c0 */

void FUN_1000f26c0(undefined8 param_1)

{
  if (DAT_100fadf60 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca3064);
  return;
}



/* Address: 0x1000f26f8 | FUN_1000f26f8 */

undefined * FUN_1000f26f8(void)

{
  return PTR___swiftEmptyArrayStorage_100eae0d8;
}



/* Address: 0x1000f2704 | FUN_1000f2704 */

undefined8 FUN_1000f2704(void)

{
  return 0;
}



/* Address: 0x1000f2714 | FUN_1000f2714 */

void FUN_1000f2714(void)

{
  FUN_1000f26c0(0);
  return;
}



/* Address: 0x1000f271c | FUN_1000f271c */

void FUN_1000f271c(long param_1,ulong param_2)

{
  long lVar1;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_1000f2788();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,1,&local_28,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1000f2788 | FUN_1000f2788 */

void FUN_1000f2788(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100fadf70.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fadf18;
    FUN_100005c24(&DAT_100fadf18,&DAT_100c2d390);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fadf70 = PVar2;
    }
  }
  return;
}



/* Address: 0x1000f27e8 | FUN_1000f27e8 */

void FUN_1000f27e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000f27fc | FUN_1000f27fc */

undefined1  [16] FUN_1000f27fc(void)

{
  return ZEXT816(0x100eb6c18);
}



/* Address: 0x1000f280c | FUN_1000f280c */

void FUN_1000f280c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100fadff0 != 0) {
    return;
  }
  puVar1 = &DAT_100eb6c40;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100fadff0 = param_1;
  return;
}



/* Address: 0x1000f285c | FUN_1000f285c */

void FUN_1000f285c(void)

{
  FUN_1000f2934(&DAT_100fae010,&TargetProtocolConformanceDescriptor_100c2d59c);
  FUN_1000f2934(&DAT_100fae018,&TargetProtocolConformanceDescriptor_100c2d4f0);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1000f28c8 | FUN_1000f28c8 */

void FUN_1000f28c8(void)

{
  FUN_1000f2934(&DAT_100fadff8,&TargetProtocolConformanceDescriptor_100c2d4b4);
  return;
}



/* Address: 0x1000f28ec | FUN_1000f28ec */

void FUN_1000f28ec(void)

{
  FUN_1000f2934(&DAT_100fae000,&TargetProtocolConformanceDescriptor_100c2d488);
  return;
}



/* Address: 0x1000f2910 | FUN_1000f2910 */

void FUN_1000f2910(void)

{
  FUN_1000f2934(&DAT_100fae008,&TargetProtocolConformanceDescriptor_100c2d524);
  return;
}



/* Address: 0x1000f2934 | FUN_1000f2934 */

void FUN_1000f2934(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1000f280c(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1000f2974 | FUN_1000f2974 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f29ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000f2974(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fae020;
  FUN_1000037f0(&DAT_100fae020,&DAT_100c2d5e8);
  Combine::Published::init(param_1,puVar1,puVar1);
  return;
}



/* Address: 0x1000f29c0 | FUN_1000f29c0 */

undefined8 FUN_1000f29c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c2d5f0;
  _swift_getKeyPath(&DAT_100c2d5f0);
  puVar2 = &DAT_100c2d618;
  _swift_getKeyPath(&DAT_100c2d618);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x1000f2a30 | FUN_1000f2a30 */

void FUN_1000f2a30(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c2d5f0;
  _swift_getKeyPath(&DAT_100c2d5f0);
  puVar2 = &DAT_100c2d618;
  _swift_getKeyPath(&DAT_100c2d618);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000f2a98 | thunk_FUN_1000f2a30 */

void thunk_FUN_1000f2a30(void)

{
  FUN_1000f2a30();
  return;
}



/* Address: 0x1000f2a9c | FUN_1000f2a9c */

void FUN_1000f2a9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c2d5f0;
  _swift_getKeyPath(&DAT_100c2d5f0);
  puVar2 = &DAT_100c2d618;
  _swift_getKeyPath(&DAT_100c2d618);
  local_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1000f2b14 | thunk_FUN_1000f2a9c */

void thunk_FUN_1000f2a9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 uStack_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c2d5f0;
  _swift_getKeyPath(&DAT_100c2d5f0);
  puVar2 = &DAT_100c2d618;
  _swift_getKeyPath(&DAT_100c2d618);
  uStack_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&uStack_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1000f2b18 | FUN_1000f2b18 */

void FUN_1000f2b18(undefined8 param_1)

{
  Published *unaff_x20;
  undefined8 local_38;
  
  _swift_getKeyPath(&DAT_100c2d5f0);
  _swift_getKeyPath(&DAT_100c2d618);
  local_38 = param_1;
  _swift_retain();
  Combine::Published::_set_subscript(unaff_x20,&local_38);
  return;
}



/* Address: 0x1000f2b84 | FUN_1000f2b84 */

code * FUN_1000f2b84(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar1 = &DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0xea14);
  }
  *param_1 = puVar1;
  puVar2 = &DAT_100c2d5f0;
  _swift_getKeyPath();
  *(undefined **)(puVar1 + 0x20) = puVar2;
  puVar2 = &DAT_100c2d618;
  _swift_getKeyPath();
  *(undefined **)(puVar1 + 0x28) = puVar2;
  puVar3 = puVar1;
  Combine::Published::_modify_subscript();
  *(undefined1 **)(puVar1 + 0x30) = puVar3;
  return FUN_1000f205c;
}



/* Address: 0x1000f2c14 | FUN_1000f2c14 */

void FUN_1000f2c14(void)

{
  Published PVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + _TtC13PastePlatform15ActiveSelection::_itemIdentifiers,auStack_48,
                     0x21,0);
  PVar1.unknown = &DAT_100fae030;
  FUN_1000037f0(&DAT_100fae030,&DAT_100c2d638);
  Combine::Published::_get_projectedValue(PVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1000f2c84 | FUN_1000f2c84 */

void FUN_1000f2c84(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar2 = &DAT_100fae038;
  FUN_1000037f0(&DAT_100fae038,&DAT_100c2d640);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(auStack_60 + -extraout_x8,param_1,puVar2);
  lVar1 = _TtC13PastePlatform15ActiveSelection::_itemIdentifiers;
  _swift_beginAccess(unaff_x20 + _TtC13PastePlatform15ActiveSelection::_itemIdentifiers,auStack_58,
                     0x21,0);
  FUN_1000037f0(&DAT_100fae030,&DAT_100c2d638);
  Combine::Published::_set_projectedValue
            ((Published *)(unaff_x20 + lVar1),(Publisher)(auStack_60 + -extraout_x8));
  _swift_endAccess(auStack_58);
  (**(code **)(lVar3 + 8))(param_1,puVar2);
  return;
}



/* Address: 0x1000f2d64 | FUN_1000f2d64 */

undefined1  [16] FUN_1000f2d64(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  void *pvVar4;
  Published PVar5;
  long lVar6;
  long unaff_x20;
  void *pvVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  pvVar2 = (void *)0x80;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x80);
  }
  else {
    _swift_coroFrameAlloc(0x80,0x5fa);
  }
  *param_1 = pvVar2;
  *(long *)((long)pvVar2 + 0x48) = unaff_x20;
  puVar3 = &DAT_100fae038;
  FUN_1000037f0(&DAT_100fae038,&DAT_100c2d640);
  *(undefined **)((long)pvVar2 + 0x50) = puVar3;
  lVar6 = *(long *)(puVar3 + -8);
  *(long *)((long)pvVar2 + 0x58) = lVar6;
  pvVar7 = *(void **)(lVar6 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar7);
    *(void **)((long)pvVar2 + 0x60) = pvVar4;
    pvVar7 = _malloc((size_t)pvVar7);
  }
  else {
    pvVar4 = pvVar7;
    _swift_coroFrameAlloc(pvVar7,0x5fa);
    *(void **)((long)pvVar2 + 0x60) = pvVar4;
    _swift_coroFrameAlloc(pvVar7,0x5fa);
  }
  lVar6 = _TtC13PastePlatform15ActiveSelection::_itemIdentifiers;
  *(void **)((long)pvVar2 + 0x68) = pvVar7;
  *(long *)((long)pvVar2 + 0x70) = lVar6;
  _swift_beginAccess(unaff_x20 + lVar6,pvVar2,0x21,0);
  PVar5.unknown = &DAT_100fae030;
  FUN_1000037f0(&DAT_100fae030,&DAT_100c2d638);
  *(undefined **)((long)pvVar2 + 0x78) = PVar5.unknown;
  Combine::Published::_get_projectedValue(PVar5);
  _swift_endAccess(pvVar2);
  auVar8._8_8_ = pvVar7;
  auVar8._0_8_ = FUN_1000f230c;
  return auVar8;
}



/* Address: 0x1000f2e68 | FUN_1000f2e68 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f2ec0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1000f2e68(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  _swift_allocObject();
  lVar2 = _TtC13PastePlatform15ActiveSelection::_itemIdentifiers;
  puVar3 = &DAT_100fae020;
  FUN_1000037f0(&DAT_100fae020,&DAT_100c2d5e8);
  Combine::Published::init(unaff_x20 + lVar2,puVar3,puVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PastePlatform15ActiveSelection::pending);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return unaff_x20;
}



/* Address: 0x1000f2eec | FUN_1000f2eec */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f2f78 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000f2eec(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined *local_48;
  
  puVar3 = &DAT_100fae030;
  FUN_1000037f0(&DAT_100fae030,&DAT_100c2d638);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC13PastePlatform15ActiveSelection::_itemIdentifiers;
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar4 = &DAT_100fae020;
  FUN_1000037f0(&DAT_100fae020,&DAT_100c2d5e8);
  Combine::Published::init(auStack_50 + -extraout_x8,puVar4,puVar4);
  (**(code **)(lVar5 + 0x20))(unaff_x20 + lVar2,auStack_50 + -extraout_x8,puVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PastePlatform15ActiveSelection::pending);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x1000f2fc0 | FUN_1000f2fc0 */

void FUN_1000f2fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PastePlatform15ActiveSelection::pending);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_1000764c8(uVar2,uVar3,uVar4);
  return;
}



/* Address: 0x1000f301c | FUN_1000f301c */

undefined8 FUN_1000f301c(undefined *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long unaff_x20;
  _StringGuts _Var4;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PastePlatform15ActiveSelection::pending);
  _Var4.unknown = (undefined *)puVar1[1];
  if (_Var4.unknown != (undefined *)0x0) {
    uVar3 = puVar1[2];
    if (((undefined *)*puVar1 == param_1 && _Var4.unknown == param_2) ||
       (bVar2 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)*puVar1,_Var4,(_StringComparisonResult)(__int8)param_1),
       bVar2)) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      _swift_bridgeObjectRelease(_Var4.unknown);
      return uVar3;
    }
  }
  return 0;
}



/* Address: 0x1000f3098 | FUN_1000f3098 */

void FUN_1000f3098(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PastePlatform15ActiveSelection::pending);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_1000764c8(uVar2,uVar3,uVar4);
  return;
}



/* Address: 0x1000f30b8 | FUN_1000f30b8 */

void FUN_1000f30b8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar2 = _TtC13PastePlatform15ActiveSelection::_itemIdentifiers;
  puVar3 = &DAT_100fae030;
  FUN_1000037f0(&DAT_100fae030,&DAT_100c2d638);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar2,puVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PastePlatform15ActiveSelection::pending);
  FUN_1000764c8(*puVar1,puVar1[1],puVar1[2]);
  return;
}



/* Address: 0x1000f311c | FUN_1000f311c */

void FUN_1000f311c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar2 = _TtC13PastePlatform15ActiveSelection::_itemIdentifiers;
  puVar3 = &DAT_100fae030;
  FUN_1000037f0(&DAT_100fae030,&DAT_100c2d638);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar2,puVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PastePlatform15ActiveSelection::pending);
  FUN_1000764c8(*puVar1,puVar1[1],puVar1[2]);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000f318c | FUN_1000f318c */

undefined8 FUN_1000f318c(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = 0;
  FUN_1000f32d0(0);
  FUN_1000d80e0(&local_18,"PastePlatform/ActiveSelection.swift",0x23,2,0x23,0x13,FUN_1000f31e0,0,
                uVar1);
  return local_18;
}



/* Address: 0x1000f31e0 | FUN_1000f31e0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f3288 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000f31e0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined *local_48;
  
  puVar3 = &DAT_100fae030;
  FUN_1000037f0(&DAT_100fae030,&DAT_100c2d638);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1000f32d0();
  _swift_allocObject();
  lVar2 = _TtC13PastePlatform15ActiveSelection::_itemIdentifiers;
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = &DAT_100fae020;
  FUN_1000037f0(&DAT_100fae020,&DAT_100c2d5e8);
  Combine::Published::init(auStack_50 + -extraout_x8,puVar5,puVar5);
  (**(code **)(lVar6 + 0x20))(lVar4 + lVar2,auStack_50 + -extraout_x8,puVar3);
  puVar1 = (undefined8 *)(lVar4 + _TtC13PastePlatform15ActiveSelection::pending);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_1 = lVar4;
  return;
}



/* Address: 0x1000f32d0 | FUN_1000f32d0 */

void FUN_1000f32d0(undefined8 param_1)

{
  if (DAT_100fae070 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca3100);
  return;
}



/* Address: 0x1000f3308 | FUN_1000f3308 */

void FUN_1000f3308(void)

{
  FUN_1000f32d0(0);
  return;
}



/* Address: 0x1000f3310 | FUN_1000f3310 */

void FUN_1000f3310(long param_1,ulong param_2)

{
  long lVar1;
  long local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1000f3384();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c2d670;
    _swift_updateClassMetadata2(param_1,0x100,2,&local_30,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1000f3384 | FUN_1000f3384 */

void FUN_1000f3384(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100fae080.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fae020;
    FUN_100005c24(&DAT_100fae020,&DAT_100c2d5e8);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fae080 = PVar2;
    }
  }
  return;
}



/* Address: 0x1000f33e4 | FUN_1000f33e4 */

void FUN_1000f33e4(code *param_1)

{
  (*param_1)();
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1000f3414 | FUN_1000f3414 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000f3414(code *param_1)

{
  (*param_1)();
  return;
}



/* Address: 0x1000f3444 | FUN_1000f3444 */

undefined1  [16] FUN_1000f3444(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0x534f69;
  if (param_1 != '\x01') {
    uVar1 = 0x534f63616d;
  }
  puVar2 = (undefined1 *)0xe300000000000000;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1000f3474 | FUN_1000f3474 */

undefined4 FUN_1000f3474(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_1 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x1000f348c | FUN_1000f348c */

void FUN_1000f348c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000f34ac | FUN_1000f34ac */

undefined1  [16] FUN_1000f34ac(char param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar2 = 0x64615069;
    if (param_1 != '\x01') {
      uVar2 = 0x63614d;
    }
    auVar3._4_4_ = 0;
    auVar3._0_4_ = uVar2;
    puVar1 = &DAT_e400000000000000;
    if (param_1 != '\x01') {
      puVar1 = (undefined1 *)0xe300000000000000;
    }
    auVar3._8_8_ = puVar1;
    return auVar3;
  }
  auVar4._8_8_ = &DAT_e600000000000000;
  auVar4._0_8_ = 0x656e6f685069;
  return auVar4;
}



/* Address: 0x1000f34f0 | FUN_1000f34f0 */

ulong FUN_1000f34f0(ulong param_1)

{
  if (2 < param_1) {
    param_1 = 3;
  }
  return param_1;
}



/* Address: 0x1000f3500 | FUN_1000f3500 */

void FUN_1000f3500(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1000f3518 | FUN_1000f3518 */

undefined1  [16] FUN_1000f3518(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  char cVar4;
  uint uVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar4 = *unaff_x20;
  uVar5 = 0x64615069;
  if (cVar4 != '\x01') {
    uVar5 = 0x63614d;
  }
  puVar1 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar1 = (undefined1 *)0xe300000000000000;
  }
  uVar2 = 0x656e6f685069;
  if (cVar4 != '\0') {
    uVar2 = (ulong)uVar5;
  }
  puVar3 = &DAT_e600000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}


