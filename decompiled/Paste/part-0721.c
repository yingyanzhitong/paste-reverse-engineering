/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007e42b4 | thunk_FUN_1007e40f0 */

void thunk_FUN_1007e40f0(void)

{
  FUN_1007e40f0();
  return;
}



/* Address: 0x1007e42b8 | FUN_1007e42b8 */

void FUN_1007e42b8(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c79a80,param_1);
  return;
}



/* Address: 0x1007e42c8 | FUN_1007e42c8 */

void FUN_1007e42c8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  *param_1 = *unaff_x20;
  uVar1 = unaff_x20[1];
  param_1[2] = unaff_x20[2];
  param_1[1] = uVar1;
  param_1[3] = 0;
  return;
}



/* Address: 0x1007e42e0 | FUN_1007e42e0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e42f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1007e42e0(undefined8 param_1,undefined8 param_2)

{
  ContiguousArray<Swift__copySequenceToContiguousArray<A_where_A:_Swift_Sequence>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar1;
  undefined8 *unaff_x20;
  
  CVar1 = Swift::__copySequenceToContiguousArray(param_1,param_1,param_2);
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[2]);
  return CVar1.unknown;
}



/* Address: 0x1007e4328 | FUN_1007e4328 */

undefined8 * FUN_1007e4328(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  _swift_retain(uVar4);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1007e437c | FUN_1007e437c */

undefined8 * FUN_1007e437c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x1007e43f8 | FUN_1007e43f8 */

void FUN_1007e43f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1007e4404 | FUN_1007e4404 */

undefined8 * FUN_1007e4404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x1007e4458 | FUN_1007e4458 */

void FUN_1007e4458(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007e4464 | FUN_1007e4464 */

void FUN_1007e4464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar1 = 0;
  local_38 = param_1;
  uStack_30 = param_2;
  local_28 = param_3;
  FUN_1007e44c4(0,param_4,param_5,param_6);
  uVar2 = 0x100c79cb8;
  _swift_getWitnessTable(0x100c79cb8,uVar1);
  FUN_10068f120(&local_38,uVar1,uVar2);
  return;
}



/* Address: 0x1007e44c4 | FUN_1007e44c4 */

void FUN_1007e44c4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007e44d0 | FUN_1007e44d0 */

void FUN_1007e44d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1007de3b4(param_1,param_2,FUN_1007e4464);
  return;
}



/* Address: 0x1007e44dc | thunk_FUN_1007e4464 */

void thunk_FUN_1007e4464(void)

{
  FUN_1007e4464();
  return;
}



/* Address: 0x1007e44e0 | FUN_1007e44e0 */

void FUN_1007e44e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1007de3b4(param_1,param_2,thunk_FUN_1007e4464);
  return;
}



/* Address: 0x1007e44ec | FUN_1007e44ec */

void FUN_1007e44ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  local_38 = param_3;
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_retain(param_3);
  puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130,CVar1.unknown);
  Swift::Array<undefined>::_init(&local_38,param_5,CVar1.unknown,puVar2);
  return;
}



/* Address: 0x1007e455c | FUN_1007e455c */

void FUN_1007e455c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_38 [8];
  
  uStack_58 = param_10;
  puVar1 = &DAT_100fe6850;
  local_70 = param_7;
  uStack_68 = param_8;
  local_60 = param_9;
  local_50 = param_2;
  uStack_48 = param_3;
  FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
  FUN_10068330c(param_1,FUN_1007e4600,auStack_80,param_6,param_8,param_9,puVar1,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_38);
  return;
}



/* Address: 0x1007e4600 | FUN_1007e4600 */

void FUN_1007e4600(void)

{
  FUN_1007e5970();
  return;
}



/* Address: 0x1007e4614 | FUN_1007e4614 */

void FUN_1007e4614(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ContiguousArray CVar1;
  __int64 start;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar1);
  start = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(start + 0x10);
  FUN_100636dd8(start,uVar4);
  uVar3 = uVar5;
  local_70 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(start);
  uStack_68 = uVar3;
  (*param_2)(param_1,&local_70);
  puVar2 = &DAT_100fe6850;
  FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
  FUN_1007e37e8(&local_70,start,uVar5,unaff_x20 + 0x10,uVar4,param_5,puVar2,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  return;
}



/* Address: 0x1007e46fc | FUN_1007e46fc */

void FUN_1007e46fc(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c79cb8,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x1007e4730 | FUN_1007e4730 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e475c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1007e4730(undefined8 param_1)

{
  undefined8 uVar1;
  ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar2;
  undefined8 *unaff_x20;
  
  uVar1 = 0x100c79cb8;
  _swift_getWitnessTable(0x100c79cb8,param_1);
  CVar2 = Swift::__copyCollectionToContiguousArray(uVar1,param_1,uVar1);
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[2]);
  return CVar2.unknown;
}



/* Address: 0x1007e478c | FUN_1007e478c */

void FUN_1007e478c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_38 [8];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_68 = *(undefined8 *)(param_5 + 0x18);
  local_70 = *(undefined8 *)(param_5 + 0x10);
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  uStack_58 = *(undefined8 *)(param_5 + 0x20);
  puVar2 = &DAT_100fe6850;
  local_60 = param_4;
  local_50 = param_2;
  local_48 = param_3;
  FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
  FUN_10068330c(param_1,FUN_1007e59a0,auStack_80,uVar3,uVar1,param_4,puVar2,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_38);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_4 + -8) + 0x38))(param_1,0,1,param_4);
  }
  return;
}



/* Address: 0x1007e4858 | FUN_1007e4858 */

void FUN_1007e4858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined *puVar1;
  long unaff_x21;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_38 [8];
  
  uStack_58 = param_10;
  puVar1 = &DAT_100fe6850;
  local_70 = param_7;
  uStack_68 = param_8;
  local_60 = param_9;
  local_50 = param_2;
  uStack_48 = param_3;
  FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
  FUN_10068330c(param_1,FUN_1007e59a0,auStack_80,param_6,param_8,param_9,puVar1,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_38);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_9 + -8) + 0x38))(param_1,0,1,param_9);
  }
  return;
}



/* Address: 0x1007e4924 | FUN_1007e4924 */

undefined1  [16] FUN_1007e4924(long *param_1,__int64 *param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  *param_1 = *(long *)(param_3 + 0x18);
  param_1[1] = lVar2;
  pvVar1 = *(void **)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc((size_t)pvVar1);
  }
  else {
    _swift_coroFrameAlloc(pvVar1,0x64e0);
  }
  param_1[2] = (long)pvVar1;
  Swift::ContiguousArray::get_subscript(*param_2,(ContiguousArray)*(undefined **)(unaff_x20 + 0x10))
  ;
  auVar3._8_8_ = pvVar1;
  auVar3._0_8_ = FUN_1006333c4;
  return auVar3;
}



/* Address: 0x1007e49a8 | FUN_1007e49a8 */

void FUN_1007e49a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x100c79d98;
  _swift_getWitnessTable(0x100c79d98);
  FUN_1007de4f8(param_1,param_2,param_3,uVar1);
  return;
}



/* Address: 0x1007e49f0 | FUN_1007e49f0 */

void FUN_1007e49f0(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c79c08,param_1);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  return;
}



/* Address: 0x1007e4a3c | FUN_1007e4a3c */

void FUN_1007e4a3c(__int64 param_1,undefined8 param_2,undefined8 param_3,ContiguousArray param_4)

{
  Swift::ContiguousArray::get_subscript(param_1,param_4);
  return;
}



/* Address: 0x1007e4a48 | FUN_1007e4a48 */

code * FUN_1007e4a48(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long unaff_x20;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x7f70);
  }
  *param_1 = pvVar1;
  Swift::ContiguousArray::typeMetadataAccessor();
  pvVar2 = pvVar1;
  Swift::ContiguousArray::modify_subscript((ContiguousArray *)(unaff_x20 + 0x10),(__int64)pvVar1);
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return thunk_FUN_10022c3e4;
}



/* Address: 0x1007e4ad0 | thunk_FUN_10022c3e4 */

void thunk_FUN_10022c3e4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x20))(pvVar1,0);
  _free(pvVar1);
  return;
}



/* Address: 0x1007e4ad4 | FUN_1007e4ad4 */

void FUN_1007e4ad4(undefined8 param_1,long param_2,long param_3)

{
  ContiguousArray CVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + 0x18);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar1);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_1007e381c(param_2,lVar2,lVar3);
  FUN_100636dd8(lVar2,lVar3);
  (**(code **)(*(long *)(lVar3 + -8) + 0x28))
            (lVar2 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_2,param_1,lVar3);
  FUN_1007e3838(unaff_x20 + 0x10,lVar3);
  return;
}



/* Address: 0x1007e4b64 | FUN_1007e4b64 */

void FUN_1007e4b64(void)

{
  ContiguousArray CVar1;
  
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar1.unknown);
  (extension_Swift)::Swift::MutableCollection::_swapAt();
  return;
}



/* Address: 0x1007e4bc0 | FUN_1007e4bc0 */

undefined8 FUN_1007e4bc0(void)

{
  ContiguousArray CVar1;
  undefined8 local_48;
  
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__BidirectionalCollection_100ead120,
             CVar1.unknown);
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar1.unknown);
  (extension_Swift)::Swift::MutableCollection::_partition();
  return local_48;
}



/* Address: 0x1007e4c58 | FUN_1007e4c58 */

void FUN_1007e4c58(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5)

{
  ContiguousArray CVar1;
  __int64 start;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar1);
  start = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(start + 0x10);
  FUN_100636dd8(start,uVar4);
  uVar3 = uVar5;
  local_70 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(start);
  uStack_68 = uVar3;
  (*param_2)(param_1,&local_70);
  puVar2 = &DAT_100fe6850;
  if (unaff_x21 == 0) {
    FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
    FUN_1007e37e8(&local_70,start,uVar5,unaff_x20 + 0x10,uVar4,param_5,puVar2,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    (**(code **)(*(long *)(param_5 + -8) + 0x38))(param_1,0,1,param_5);
  }
  else {
    FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
    FUN_1007e37e8(&local_70,start,uVar5,unaff_x20 + 0x10,uVar4,param_5,puVar2,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x1007e4d94 | FUN_1007e4d94 */

void FUN_1007e4d94(undefined8 param_1,long *param_2,long param_3)

{
  ContiguousArray CVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_2;
  lVar4 = *(long *)(param_3 + 0x18);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar1);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_1007e381c(lVar3,lVar2,lVar4);
  FUN_100636dd8(lVar2,lVar4);
  (**(code **)(*(long *)(lVar4 + -8) + 0x28))
            (lVar2 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * lVar3,param_1,lVar4);
  FUN_1007e3838(unaff_x20 + 0x10,lVar4);
  return;
}



/* Address: 0x1007e4e24 | FUN_1007e4e24 */

code * FUN_1007e4e24(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long unaff_x20;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xafda);
  }
  *param_1 = pvVar1;
  Swift::ContiguousArray::typeMetadataAccessor();
  pvVar2 = pvVar1;
  Swift::ContiguousArray::modify_subscript((ContiguousArray *)(unaff_x20 + 0x10),(__int64)pvVar1);
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return thunk_FUN_10022c3e4;
}



/* Address: 0x1007e4eb0 | FUN_1007e4eb0 */

void FUN_1007e4eb0(long param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  local_30 = *param_2;
  FUN_1007e58f8(param_1,&local_30);
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x1007e4efc | FUN_1007e4efc */

code * FUN_1007e4efc(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xf0a8);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_1007e4f78();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return FUN_10026c674;
}



/* Address: 0x1007e4f78 | FUN_1007e4f78 */

undefined1  [16]
FUN_1007e4f78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  Slice SVar4;
  undefined8 uVar5;
  Range RVar6;
  void *pvVar7;
  long lVar8;
  undefined8 unaff_x20;
  void *pvVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar2 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar3 = (undefined8 *)0x50;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar3 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0xd5c6);
  }
  *param_1 = puVar3;
  puVar3[1] = param_4;
  puVar3[2] = unaff_x20;
  *puVar3 = param_3;
  uVar10 = *(undefined8 *)(param_4 + 8);
  SVar4 = Swift::Slice::typeMetadataAccessor();
  puVar3[3] = SVar4.unknown;
  lVar8 = *(long *)(SVar4.unknown + -8);
  puVar3[4] = lVar8;
  pvVar9 = *(void **)(lVar8 + 0x40);
  if (puVar2 == (undefined *)0x0) {
    pvVar7 = _malloc((size_t)pvVar9);
    puVar3[5] = pvVar7;
    pvVar9 = _malloc((size_t)pvVar9);
  }
  else {
    pvVar7 = pvVar9;
    _swift_coroFrameAlloc(pvVar9,0xd5c6);
    puVar3[5] = pvVar7;
    _swift_coroFrameAlloc(pvVar9,0xd5c6);
  }
  puVar3[6] = pvVar9;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  _swift_getAssociatedConformanceWitness
            (uVar10,param_3,uVar5,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  RVar6 = Swift::Range::typeMetadataAccessor();
  puVar3[7] = RVar6.unknown;
  lVar8 = *(long *)(RVar6.unknown + -8);
  puVar3[8] = lVar8;
  pvVar7 = *(void **)(lVar8 + 0x40);
  if (puVar2 == (undefined *)0x0) {
    pvVar7 = _malloc((size_t)pvVar7);
  }
  else {
    _swift_coroFrameAlloc(pvVar7,0xd5c6);
  }
  puVar3[9] = pvVar7;
  (**(code **)(lVar8 + 0x10))();
  FUN_1007de4f8(pvVar9,param_2,param_3,param_4);
  auVar11._8_8_ = pvVar9;
  auVar11._0_8_ = FUN_1007e5100;
  return auVar11;
}



/* Address: 0x1007e5100 | FUN_1007e5100 */

void FUN_1007e5100(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  param_1 = (undefined8 *)*param_1;
  lVar1 = param_1[8];
  pvVar5 = (void *)param_1[9];
  pvVar2 = (void *)param_1[6];
  uVar6 = param_1[7];
  lVar3 = param_1[4];
  pvVar7 = (void *)param_1[5];
  uVar8 = param_1[3];
  uVar4 = *param_1;
  uVar9 = param_1[1];
  if ((param_2 & 1) == 0) {
    FUN_1007e58f8(pvVar2,pvVar5,uVar4,uVar9);
    (**(code **)(lVar1 + 8))(pvVar5,uVar6);
    pcVar10 = *(code **)(lVar3 + 8);
  }
  else {
    (**(code **)(lVar3 + 0x10))(pvVar7,pvVar2,uVar8);
    FUN_1007e58f8(pvVar7,pvVar5,uVar4,uVar9);
    (**(code **)(lVar1 + 8))(pvVar5,uVar6);
    pcVar10 = *(code **)(lVar3 + 8);
    (*pcVar10)(pvVar7,uVar8);
  }
  (*pcVar10)(pvVar2,uVar8);
  _free(pvVar5);
  _free(pvVar2);
  _free(pvVar7);
  _free(param_1);
  return;
}



/* Address: 0x1007e51fc | FUN_1007e51fc */

void FUN_1007e51fc(undefined8 *param_1)

{
  ContiguousArray CVar1;
  long unaff_x21;
  undefined8 local_48;
  
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__BidirectionalCollection_100ead120,
             CVar1.unknown);
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar1.unknown);
  (extension_Swift)::Swift::MutableCollection::_partition();
  if (unaff_x21 == 0) {
    *param_1 = local_48;
  }
  return;
}



/* Address: 0x1007e52a0 | FUN_1007e52a0 */

void FUN_1007e52a0(void)

{
  ContiguousArray CVar1;
  
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar1.unknown);
  (extension_Swift)::Swift::MutableCollection::_swapAt();
  return;
}



/* Address: 0x1007e5304 | FUN_1007e5304 */

void FUN_1007e5304(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5)

{
  ContiguousArray CVar1;
  __int64 start;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_5 + 0x18);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar1);
  start = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(start + 0x10);
  FUN_100636dd8(start,uVar4);
  uVar3 = uVar5;
  local_70 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(start);
  uStack_68 = uVar3;
  (*param_2)(param_1,&local_70);
  puVar2 = &DAT_100fe6850;
  if (unaff_x21 == 0) {
    FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
    FUN_1007e37e8(&local_70,start,uVar5,unaff_x20 + 0x10,uVar4,param_4,puVar2,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    (**(code **)(*(long *)(param_4 + -8) + 0x38))(param_1,0,1,param_4);
  }
  else {
    FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
    FUN_1007e37e8(&local_70,start,uVar5,unaff_x20 + 0x10,uVar4,param_4,puVar2,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x1007e5440 | FUN_1007e5440 */

void FUN_1007e5440(undefined8 param_1,undefined8 param_2,ContiguousArray<undefined> param_3,
                  undefined8 param_4,undefined8 param_5,ContiguousArray<undefined> param_6)

{
  (extension_Swift)::Swift::ContiguousArray::____infix(param_3,param_6);
  return;
}



/* Address: 0x1007e5454 | FUN_1007e5454 */

uint FUN_1007e5454(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  FUN_1007e5440(param_1,param_2,*(undefined8 *)(param_1 + 0x10),param_4,param_5,
                *(undefined8 *)(param_2 + 0x10),param_7,*(undefined8 *)(param_3 + 0x18));
  return (uint)param_1 & 1;
}



/* Address: 0x1007e548c | FUN_1007e548c */

void FUN_1007e548c(Hasher param_1,undefined8 param_2,undefined8 param_3,ContiguousArray param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  Hasher HVar4;
  __uint64 _Var5;
  __int64 _Var6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  lVar10 = *(long *)(param_6 + -8);
  uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = auStack_80 + -uVar7;
  uVar3 = 0;
  local_78 = param_2;
  uStack_70 = param_3;
  local_68 = param_4.unknown;
  FUN_1007e44c4(0,param_5,param_6,param_7);
  HVar4.unknown = (undefined *)&TargetResilientWitness_100c79cb4.Implementation;
  _swift_getWitnessTable(0x100c79cb8,uVar3);
  _Var5 = (extension_Swift)::Swift::Collection::get_count();
  Swift::Hasher::_combine(_Var5,HVar4);
  _Var6 = Swift::ContiguousArray::get_count(param_4);
  if (_Var6 != 0) {
    lVar9 = 0;
    do {
      Swift::ContiguousArray::get_subscript(lVar9,param_4);
      lVar1 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e55d0);
        (*pcVar2)();
      }
      (**(code **)(lVar10 + 0x20))(puVar8,(long)puVar8 - uVar7,param_6);
      Swift::Hashable::hash(param_1);
      (**(code **)(lVar10 + 8))(puVar8,param_6);
      _Var6 = Swift::ContiguousArray::get_count(param_4);
      lVar9 = lVar9 + 1;
    } while (lVar1 != _Var6);
  }
  return;
}



/* Address: 0x1007e55d0 | FUN_1007e55d0 */

void FUN_1007e55d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  Hasher HVar1;
  undefined1 auStack_98 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_98;
  FUN_1007e548c(HVar1.unknown,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007e565c | FUN_1007e565c */

void FUN_1007e565c(long param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1007e55d0(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x1007e5678 | FUN_1007e5678 */

void FUN_1007e5678(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1007e548c(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                *(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x1007e5694 | FUN_1007e5694 */

void FUN_1007e5694(__int64 param_1,long param_2,long param_3)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *(undefined8 *)(param_3 + -8);
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  FUN_1007e548c(HVar1.unknown,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007e56f0 | FUN_1007e56f0 */

void FUN_1007e56f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  Range RVar5;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar4,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  bVar3 = Swift::Comparable::<__infix(param_2,param_1,uVar4,param_4);
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e57b4);
    (*pcVar2)();
  }
  RVar5 = Swift::Range::typeMetadataAccessor();
  bVar3 = Swift::Comparable::<_infix(param_1,param_2 + *(int *)(RVar5.unknown + 0x24),uVar4,param_4)
  ;
  if (bVar3) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e57b8);
  (*pcVar2)();
}



/* Address: 0x1007e57b8 | FUN_1007e57b8 */

void FUN_1007e57b8(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c79c58,param_1);
  return;
}



/* Address: 0x1007e57c8 | FUN_1007e57c8 */

void FUN_1007e57c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c79c08;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__RandomAccessCollection_100eadcb0,param_1,
             &local_28);
  return;
}



/* Address: 0x1007e5810 | FUN_1007e5810 */

void FUN_1007e5810(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c79cb8,param_1);
  return;
}



/* Address: 0x1007e5820 | FUN_1007e5820 */

void FUN_1007e5820(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c79c58;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__BidirectionalCollection_100eadc98,param_1,
             &local_28);
  return;
}



/* Address: 0x1007e5868 | FUN_1007e5868 */

void FUN_1007e5868(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c79ba0,param_1);
  return;
}



/* Address: 0x1007e5878 | FUN_1007e5878 */

void FUN_1007e5878(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c79d98;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__MutableCollection_100eadca0,param_1,
             &local_28);
  return;
}



/* Address: 0x1007e58c0 | FUN_1007e58c0 */

void FUN_1007e58c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&TargetResilientWitness_100c79e08,param_1,&local_18);
  return;
}



/* Address: 0x1007e58f8 | FUN_1007e58f8 */

void FUN_1007e58f8(void)

{
  Slice SVar1;
  
  SVar1 = Swift::Slice::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8,SVar1.unknown);
  Swift::__writeBackMutableSlice();
  return;
}



/* Address: 0x1007e5970 | FUN_1007e5970 */

void FUN_1007e5970(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x30))();
  if (unaff_x21 != 0) {
    *param_3 = unaff_x21;
  }
  return;
}



/* Address: 0x1007e59a0 | FUN_1007e59a0 */

void FUN_1007e59a0(void)

{
  FUN_1007e4600();
  return;
}



/* Address: 0x1007e59b4 | thunk_FUN_10022c3e4 */

void thunk_FUN_10022c3e4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x20))(pvVar1,0);
  _free(pvVar1);
  return;
}



/* Address: 0x1007e59b8 | thunk_FUN_1007e5810 */

void thunk_FUN_1007e5810(void)

{
  FUN_1007e5810();
  return;
}



/* Address: 0x1007e59bc | FUN_1007e59bc */

void FUN_1007e59bc(void)

{
  FUN_1007e59f4();
  return;
}



/* Address: 0x1007e59d8 | FUN_1007e59d8 */

void FUN_1007e59d8(void)

{
  FUN_1007e59f4();
  return;
}



/* Address: 0x1007e59f4 | FUN_1007e59f4 */

void FUN_1007e59f4(undefined8 param_1)

{
  long in_x4;
  code *in_x6;
  
  (*in_x6)();
  (**(code **)(*(long *)(in_x4 + -8) + 8))(param_1,in_x4);
  return;
}


