/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10079f39c | FUN_10079f39c */

void FUN_10079f39c(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar1 = *(long *)(lVar1 + -8);
  if (param_2 < 2) {
    uVar3 = *(ulong *)(lVar1 + 0x40);
    if (*(int *)(lVar1 + 0x54) == 0) {
      uVar3 = uVar3 + 1;
    }
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    uVar3 = *(ulong *)(lVar1 + 0x40);
    if (*(int *)(lVar1 + 0x54) == 0) {
      uVar3 = uVar3 + 1;
    }
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    param_2 = param_2 - 2;
    uVar2 = (uint)uVar3;
    if (uVar2 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar2 << 3 & 0x1f)) + '\x02';
      if (uVar2 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar2 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 2;
    }
    if (3 < uVar2) {
      uVar2 = 4;
    }
    _bzero(param_1,uVar3);
    if ((int)uVar2 < 3) {
      if (uVar2 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar2 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x10079f4b4 | thunk_FUN_10079f0dc */

void thunk_FUN_10079f0dc(void)

{
  thunk_FUN_10079f0dc();
  return;
}



/* Address: 0x10079f4b8 | thunk_FUN_100797bc8 */

void thunk_FUN_100797bc8(void)

{
  thunk_FUN_100797bc8();
  return;
}



/* Address: 0x10079f4bc | thunk_FUN_10079e6ec */

void thunk_FUN_10079e6ec(void)

{
  thunk_FUN_10079e6ec();
  return;
}



/* Address: 0x10079f4c0 | thunk_FUN_10079f2cc */

void thunk_FUN_10079f2cc(void)

{
  thunk_FUN_10079f2cc();
  return;
}



/* Address: 0x10079f4c4 | thunk_FUN_100796660 */

void thunk_FUN_100796660(void)

{
  thunk_FUN_100796660();
  return;
}



/* Address: 0x10079f4c8 | thunk_FUN_100708198 */

void thunk_FUN_100708198(void)

{
  thunk_FUN_100708198();
  return;
}



/* Address: 0x10079f4cc | thunk_FUN_1007081e4 */

void thunk_FUN_1007081e4(void)

{
  thunk_FUN_1007081e4();
  return;
}



/* Address: 0x10079f4d0 | thunk_FUN_1005e6c68 */

void thunk_FUN_1005e6c68(void)

{
  thunk_FUN_1005e6c68();
  return;
}



/* Address: 0x10079f4d4 | thunk_FUN_10079e4a0 */

void thunk_FUN_10079e4a0(void)

{
  thunk_FUN_10079e4a0();
  return;
}



/* Address: 0x10079f4d8 | thunk_FUN_10079e530 */

void thunk_FUN_10079e530(void)

{
  thunk_FUN_10079e530();
  return;
}



/* Address: 0x10079f4dc | thunk_FUN_10079e800 */

void thunk_FUN_10079e800(void)

{
  thunk_FUN_10079e800();
  return;
}



/* Address: 0x10079f4e0 | thunk_FUN_10079e984 */

void thunk_FUN_10079e984(void)

{
  thunk_FUN_10079e984();
  return;
}



/* Address: 0x10079f4e4 | thunk_FUN_10079ebb8 */

void thunk_FUN_10079ebb8(void)

{
  thunk_FUN_10079ebb8();
  return;
}



/* Address: 0x10079f4e8 | thunk_FUN_10079ed3c */

void thunk_FUN_10079ed3c(void)

{
  thunk_FUN_10079ed3c();
  return;
}



/* Address: 0x10079f4ec | thunk_FUN_10079ef70 */

void thunk_FUN_10079ef70(void)

{
  thunk_FUN_10079ef70();
  return;
}



/* Address: 0x10079f4f0 | thunk_FUN_10079f39c */

void thunk_FUN_10079f39c(void)

{
  thunk_FUN_10079f39c();
  return;
}



/* Address: 0x10079f4f4 | FUN_10079f4f4 */

void FUN_10079f4f4(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + DAT_100fe4250 + 8);
  return;
}



/* Address: 0x10079f534 | FUN_10079f534 */

void FUN_10079f534(undefined8 param_1,ManagedBuffer *param_2,undefined8 param_3,
                  ManagedBuffer *param_4)

{
  UnsafeMutablePointer<undefined> UVar1;
  UnsafeMutablePointer<undefined> UVar2;
  
  UVar1 = Swift::ManagedBuffer::get_headerAddress(param_4,param_2);
  UVar2 = Swift::ManagedBuffer::get_firstElementAddress(param_4,UVar1.unknown);
  _os_unfair_lock_lock();
  (*(code *)param_2)(param_1,UVar1.unknown);
  _os_unfair_lock_unlock(UVar2.unknown);
  return;
}



/* Address: 0x10079f5b0 | FUN_10079f5b0 */

void FUN_10079f5b0(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  _os_unfair_lock_lock(param_4);
  (*param_2)(param_1);
  _os_unfair_lock_unlock(param_4);
  return;
}



/* Address: 0x10079f610 | FUN_10079f610 */

void FUN_10079f610(ManagedBuffer *param_1)

{
  UnsafeMutablePointer<undefined> UVar1;
  ManagedBuffer *pMVar2;
  ManagedBuffer *unaff_x20;
  
  UVar1 = Swift::ManagedBuffer::get_headerAddress(unaff_x20,param_1);
  Swift::ManagedBuffer::get_firstElementAddress(unaff_x20,(ManagedBuffer *)UVar1.unknown);
  pMVar2 = Swift::ManagedBuffer::deinit(unaff_x20);
  _swift_deallocClassInstance
            (pMVar2,*(undefined4 *)(*(long *)pMVar2 + 0x30),*(undefined2 *)(*(long *)pMVar2 + 0x34))
  ;
  return;
}



/* Address: 0x10079f638 | FUN_10079f638 */

void FUN_10079f638(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10079f644 | FUN_10079f644 */

undefined1  [16] FUN_10079f644(void)

{
  return ZEXT816(0x100f009d0);
}



/* Address: 0x10079f654 | FUN_10079f654 */

void FUN_10079f654(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10079f660 | FUN_10079f660 */

void FUN_10079f660(void)

{
  ManagedBuffer *this;
  
  this = (ManagedBuffer *)0x0;
  FUN_10079f638();
  Swift::ManagedBuffer::_create(this,1);
  return;
}



/* Address: 0x10079f6b4 | FUN_10079f6b4 */

void FUN_10079f6b4(undefined8 param_1,ManagedBuffer *param_2)

{
  undefined *puVar1;
  UnsafeMutablePointer<undefined> UVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)param_2;
  UVar2 = Swift::ManagedBuffer::get_headerAddress(param_2,param_2);
  UVar2 = Swift::ManagedBuffer::get_firstElementAddress(param_2,UVar2.unknown);
  puVar1 = PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8;
  *(undefined4 *)UVar2.unknown = 0;
  (**(code **)(*(long *)(*(long *)(lVar4 + *(long *)puVar1) + -8) + 0x10))(param_1,uVar3);
  return;
}



/* Address: 0x10079f72c | FUN_10079f72c */

void FUN_10079f72c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_10079f744,0,0);
  return;
}



/* Address: 0x10079f744 | FUN_10079f744 */

void FUN_10079f744(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100758850;
  FUN_10079fa70(plVar1,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x10079f7a0 | FUN_10079f7a0 */

void FUN_10079f7a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar1 = (long)&local_80 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_4 + -8);
  lVar2 = lVar1 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar2,param_2);
  (**(code **)(lVar3 + 0x10))(lVar1,param_3,param_5);
  (**(code **)(lVar4 + 0x20))(param_1,lVar2,param_4);
  lVar2 = 0;
  local_80 = param_4;
  lStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_7;
  FUN_10079fb4c(0,&local_80);
  (**(code **)(lVar3 + 0x20))(param_1 + *(int *)(lVar2 + 0x34),lVar1,param_5);
  return;
}



/* Address: 0x10079f894 | FUN_10079f894 */

void FUN_10079f894(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined8 unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar2 = *(long *)(param_1 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar3 = (long)&local_80 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 0x20);
  local_80 = lVar2;
  local_70 = lVar2;
  local_58 = local_68;
  FUN_1007a7dd8(0,&local_80);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar3,1,1,lVar2);
  FUN_1007aae2c();
  (**(code **)(lVar4 + 8))(lVar3,CONCAT71(extraout_var,OVar1.value));
  FUN_10079f978(unaff_x20);
  return;
}



/* Address: 0x10079f978 | FUN_10079f978 */

void FUN_10079f978(long *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_38 = *(undefined8 *)(lVar1 + 0x58);
  local_40 = *(undefined8 *)(lVar1 + 0x50);
  uStack_28 = *(undefined8 *)(lVar1 + 0x70);
  uStack_30 = *(undefined8 *)(lVar1 + 0x68);
  lVar1 = 0;
  FUN_10079fb64(0,&local_40);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Address: 0x10079f9c8 | FUN_10079f9c8 */

void FUN_10079f9c8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10079f894();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Address: 0x10079fa10 | FUN_10079fa10 */

void FUN_10079fa10(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_1007a7aec();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10079fa50 | FUN_10079fa50 */

void FUN_10079fa50(void)

{
  FUN_10079fa10();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10079fa70 | FUN_10079fa70 */

void FUN_10079fa70(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_10079fa88,0,0);
  return;
}



/* Address: 0x10079fa88 | FUN_10079fa88 */

void FUN_10079fa88(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100758850;
  FUN_1007a7c60(plVar1,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x10079fae4 | FUN_10079fae4 */

void FUN_10079fae4(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10079f72c(plVar1,param_1);
  return;
}



/* Address: 0x10079fb3c | FUN_10079fb3c */

void FUN_10079fb3c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c77ce8,param_1);
  return;
}



/* Address: 0x10079fb4c | FUN_10079fb4c */

void FUN_10079fb4c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbfe48);
  return;
}



/* Address: 0x10079fb58 | FUN_10079fb58 */

void FUN_10079fb58(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbfe9c);
  return;
}



/* Address: 0x10079fb64 | FUN_10079fb64 */

void FUN_10079fb64(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cbfef0);
  return;
}



/* Address: 0x10079fb70 | FUN_10079fb70 */

void FUN_10079fb70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_80 = param_10;
  lVar3 = *(long *)(param_7 + -8);
  lVar4 = (long)&local_80 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(param_6 + -8);
  lVar5 = lVar4 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = lVar5 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = param_1;
  local_70 = param_8;
  local_68 = param_9;
  (**(code **)(*(long *)(param_5 + -8) + 0x10))(lVar1,param_2,param_5);
  (**(code **)(lVar2 + 0x10))(lVar5,param_3,param_6);
  (**(code **)(lVar3 + 0x10))(lVar4,param_4,param_7);
  *(undefined8 *)(lVar1 + -0x10) = local_80;
  FUN_10079fc94(local_78,lVar1,lVar5,lVar4,param_5,param_6,param_7,local_70,local_68);
  return;
}



/* Address: 0x10079fc94 | FUN_10079fc94 */

void FUN_10079fc94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  uStack_68 = param_10;
  lVar1 = 0;
  local_90 = param_5;
  lStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_10079ffd8(0,&local_90);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x44),param_3,param_6);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x48),param_4,param_7);
  return;
}



/* Address: 0x10079fd64 | FUN_10079fd64 */

void FUN_10079fd64(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar3 = *(long *)(param_1 + 0x20);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar4 = (long)&local_80 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  local_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  local_68 = *(undefined8 *)(param_1 + 0x28);
  local_70 = lVar3;
  FUN_1007a7dd8(0,&local_80);
  lVar2 = *(long *)(lVar3 + -8);
  (**(code **)(lVar2 + 0x10))(lVar4,unaff_x20 + *(int *)(param_1 + 0x48),lVar3);
  (**(code **)(lVar2 + 0x38))(lVar4,0,1,lVar3);
  FUN_1007aae2c();
  (**(code **)(lVar5 + 8))(lVar4,CONCAT71(extraout_var,OVar1.value));
  FUN_10079fe60(unaff_x20);
  return;
}



/* Address: 0x10079fe60 | FUN_10079fe60 */

void FUN_10079fe60(long *param_1)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_48 = *(undefined8 *)(lVar1 + 0x58);
  local_50 = *(undefined8 *)(lVar1 + 0x50);
  uStack_38 = *(undefined8 *)(lVar1 + 0x68);
  uStack_40 = *(undefined8 *)(lVar1 + 0x60);
  uStack_28 = *(undefined8 *)(lVar1 + 0x78);
  local_30 = *(undefined8 *)(lVar1 + 0x70);
  lVar1 = 0;
  FUN_10079fff0(0,&local_50);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Address: 0x10079feb4 | FUN_10079feb4 */

void FUN_10079feb4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10079fd64();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Address: 0x10079fefc | FUN_10079fefc */

void FUN_10079fefc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_10079ff14,0,0);
  return;
}



/* Address: 0x10079ff14 | FUN_10079ff14 */

void FUN_10079ff14(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100758850;
  FUN_10079fa70(plVar1,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x10079ff70 | FUN_10079ff70 */

void FUN_10079ff70(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10079fefc(plVar1,param_1);
  return;
}



/* Address: 0x10079ffc8 | FUN_10079ffc8 */

void FUN_10079ffc8(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c77e38,param_1);
  return;
}



/* Address: 0x10079ffd8 | FUN_10079ffd8 */

void FUN_10079ffd8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbff64);
  return;
}



/* Address: 0x10079ffe4 | FUN_10079ffe4 */

void FUN_10079ffe4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbffd0);
  return;
}



/* Address: 0x10079fff0 | FUN_10079fff0 */

void FUN_10079fff0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cc003c);
  return;
}



/* Address: 0x10079fffc | FUN_10079fffc */

void FUN_10079fffc(long param_1)

{
  long lVar1;
  long *plVar2;
  long local_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  plVar2 = &local_50;
  puStack_48 = *(undefined **)(param_1 + 0x18);
  local_50 = *(long *)(param_1 + 0x10);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = 0x13f;
  FUN_1007a135c();
  if (plVar2 < (undefined1 *)0x40) {
    local_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_50,param_1 + 0x40);
  }
  return;
}



/* Address: 0x1007a0084 | FUN_1007a0084 */

long * FUN_1007a0084(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  size_t sVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar17 = *(long *)(param_3 + 0x18);
  lVar18 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar13 = *(long *)(lVar17 + -8);
  uVar9 = (ulong)*(uint *)(lVar13 + 0x50) & 0xff;
  uVar6 = *(long *)(lVar8 + 0x40) + uVar9;
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar16 = *(long *)(lVar18 + -8);
  uVar12 = (ulong)*(uint *)(lVar16 + 0x50) & 0xff;
  sVar11 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar11 = sVar11 + 1;
  }
  uVar1 = sVar11 + (lVar14 + uVar12 + (uVar6 & (uVar9 ^ 0xffffffffffffffff)) &
                   (uVar12 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  uVar10 = *(uint *)(lVar13 + 0x50) | *(uint *)(lVar8 + 0x50) | *(uint *)(lVar16 + 0x50);
  if ((uVar10 & 0x1000f8) != 0 || 0x18 < (uVar1 & 0xfffffffffffffff8) + 0x10) {
    uVar6 = (ulong)(uVar10 & 0xf8 | 7);
    lVar14 = *(long *)param_2;
    *param_1 = lVar14;
    _swift_retain();
    return (long *)(lVar14 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
  }
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar4;
  if (2 < bVar4) {
    uVar15 = (uint)uVar1;
    uVar2 = 4;
    if (uVar15 < 4) {
      uVar2 = uVar15;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_1007a01e4;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar2 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar2 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    if (uVar15 < 4) {
      uVar10 = (uVar10 | bVar4 - 3 << (ulong)((uVar15 & 3) << 3)) + 3;
    }
    else {
      uVar10 = uVar10 + 3;
    }
  }
LAB_1007a01e4:
  if (uVar10 == 2) {
    lVar14 = *(long *)(param_2 + 2);
    *param_1 = *(long *)param_2;
    _swift_retain();
    _swift_errorRetain(lVar14);
    param_1[1] = lVar14;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar10 == 1) {
    lVar17 = *(long *)param_2;
    param_1[1] = *(long *)(param_2 + 2);
    *param_1 = lVar17;
    uVar3 = *(undefined8 *)(param_2 + 2);
    lVar14 = *(long *)(param_2 + 4);
    param_1[2] = lVar14;
    lVar18 = *(long *)(param_2 + 6);
    param_1[4] = *(long *)(param_2 + 8);
    param_1[3] = lVar18;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
    _swift_retain(lVar17);
    _swift_retain(uVar3);
    _swift_bridgeObjectRetain(lVar14);
  }
  else if (uVar10 == 0) {
    uVar7 = ~uVar12;
    (**(code **)(lVar8 + 0x10))(param_1,param_2);
    uVar5 = uVar6 + (long)param_1 & ~uVar9;
    uVar6 = (ulong)(uVar6 + (long)param_2) & ~uVar9;
    (**(code **)(lVar13 + 0x10))(uVar5,uVar6,lVar17);
    lVar14 = lVar14 + uVar12;
    uVar5 = uVar5 + lVar14;
    uVar6 = uVar6 + lVar14;
    uVar9 = uVar6 & uVar7;
    (**(code **)(lVar16 + 0x30))(uVar9,1,lVar18);
    if ((int)uVar9 == 0) {
      (**(code **)(lVar16 + 0x10))(uVar5 & uVar7,uVar6 & uVar7,lVar18);
      (**(code **)(lVar16 + 0x38))(uVar5 & uVar7,0,1,lVar18);
    }
    else {
      _memcpy((void *)(uVar5 & uVar7),(void *)(uVar6 & uVar7),sVar11);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar1 + 1);
  }
  *(undefined8 *)((long)param_1 + uVar1 + 8 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)((long)param_2 + uVar1 + 8) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007a0390 | FUN_1007a0390 */

undefined8 * FUN_1007a0390(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  size_t sVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar2 = *(long *)(param_3 + 0x18);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar14 = *(long *)(lVar2 + -8);
  uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar16 = *(long *)(lVar8 + 0x40) + uVar9;
  lVar19 = *(long *)(lVar14 + 0x40);
  lVar18 = *(long *)(lVar4 + -8);
  uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
  sVar12 = *(size_t *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  uVar1 = sVar12 + (lVar19 + uVar13 + (uVar16 & (uVar9 ^ 0xffffffffffffffff)) &
                   (uVar13 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  bVar6 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar6;
  if (2 < bVar6) {
    uVar17 = (uint)uVar1;
    uVar11 = 4;
    if (uVar17 < 4) {
      uVar11 = uVar17;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1007a0488;
      uVar11 = (uint)(byte)*param_2;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*param_2;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*param_2;
    }
    else {
      uVar11 = *param_2;
    }
    uVar10 = uVar11 | bVar6 - 3 << (ulong)((uVar17 & 3) << 3);
    if (3 < uVar17) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 3;
  }
LAB_1007a0488:
  if (uVar10 == 2) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    _swift_retain();
    _swift_errorRetain(uVar3);
    param_1[1] = uVar3;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar10 == 1) {
    uVar20 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar20;
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)(param_2 + 4);
    param_1[2] = uVar5;
    uVar21 = *(undefined8 *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = uVar21;
    *(undefined1 *)((long)param_1 + uVar1) = 1;
    _swift_retain(uVar20);
    _swift_retain(uVar3);
    _swift_bridgeObjectRetain(uVar5);
  }
  else if (uVar10 == 0) {
    uVar7 = ~uVar13;
    (**(code **)(lVar8 + 0x10))(param_1,param_2);
    uVar15 = uVar16 + (long)param_1 & ~uVar9;
    uVar16 = (ulong)(uVar16 + (long)param_2) & ~uVar9;
    (**(code **)(lVar14 + 0x10))(uVar15,uVar16,lVar2);
    lVar19 = lVar19 + uVar13;
    uVar15 = uVar15 + lVar19;
    uVar16 = uVar16 + lVar19;
    uVar9 = uVar16 & uVar7;
    (**(code **)(lVar18 + 0x30))(uVar9,1,lVar4);
    if ((int)uVar9 == 0) {
      (**(code **)(lVar18 + 0x10))(uVar15 & uVar7,uVar16 & uVar7,lVar4);
      (**(code **)(lVar18 + 0x38))(uVar15 & uVar7,0,1,lVar4);
    }
    else {
      _memcpy((void *)(uVar15 & uVar7),(void *)(uVar16 & uVar7),sVar12);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar1 + 1);
  }
  *(undefined8 *)(uVar1 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar1 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007a0604 | FUN_1007a0604 */

uint * FUN_1007a0604(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  size_t sVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  
  lVar12 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar18 = *(long *)(lVar12 + -8);
  lVar22 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar22 + 0x50);
  if (param_1 == param_2) {
    lVar9 = *(long *)(lVar22 + 0x40);
    lVar12 = *(long *)(*(long *)(param_3 + 0x20) + -8);
    uVar23 = (ulong)*(byte *)(lVar12 + 0x50);
    iVar13 = *(int *)(lVar12 + 0x54);
    sVar14 = *(size_t *)(lVar12 + 0x40);
    uVar11 = *(long *)(lVar18 + 0x40) + uVar8 & (uVar8 ^ 0xffffffffffffffff);
    uVar24 = ~uVar23;
    goto LAB_1007a09c4;
  }
  uVar7 = *(long *)(lVar18 + 0x40) + uVar8;
  uVar11 = uVar7 & (uVar8 ^ 0xffffffffffffffff);
  lVar9 = *(long *)(lVar22 + 0x40);
  lVar15 = *(long *)(param_3 + 0x20);
  lVar16 = *(long *)(lVar15 + -8);
  uVar23 = (ulong)*(byte *)(lVar16 + 0x50);
  iVar13 = *(int *)(lVar16 + 0x54);
  sVar14 = *(size_t *)(lVar16 + 0x40);
  sVar2 = sVar14;
  if (iVar13 == 0) {
    sVar2 = sVar14 + 1;
  }
  uVar1 = sVar2 + (lVar9 + uVar23 + uVar11 & (uVar23 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  uVar20 = (uint)uVar1;
  bVar5 = *(byte *)((long)param_1 + uVar1);
  uVar10 = (uint)bVar5;
  if (2 < bVar5) {
    uVar3 = 4;
    if (uVar20 < 4) {
      uVar3 = uVar20;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_1007a0758;
      uVar10 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar10 = (uint)(uint3)*param_1;
    }
    else {
      uVar10 = *param_1;
    }
    if (uVar20 < 4) {
      uVar10 = (uVar10 | bVar5 - 3 << (ulong)(uVar20 << 3 & 0x1f)) + 3;
    }
    else {
      uVar10 = uVar10 + 3;
    }
  }
LAB_1007a0758:
  uVar24 = ~uVar23;
  uVar8 = ~uVar8;
  if (uVar10 == 2) {
    _swift_release(*(undefined8 *)param_1);
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  else if (uVar10 == 1) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 2));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 4));
  }
  else if (uVar10 == 0) {
    (**(code **)(lVar18 + 8))(param_1,lVar12);
    uVar21 = (ulong)(uVar7 + (long)param_1) & uVar8;
    (**(code **)(lVar22 + 8))(uVar21,lVar4);
    uVar21 = uVar21 + lVar9 + uVar23;
    uVar6 = uVar21 & uVar24;
    (**(code **)(lVar16 + 0x30))(uVar6,1,lVar15);
    if ((int)uVar6 == 0) {
      (**(code **)(lVar16 + 8))(uVar21 & uVar24,lVar15);
    }
  }
  bVar5 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar5;
  if (2 < bVar5) {
    uVar3 = 4;
    if (uVar20 < 4) {
      uVar3 = uVar20;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto joined_r0x0001007a0880;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    if (uVar20 < 4) {
      uVar10 = (uVar10 | bVar5 - 3 << (ulong)(uVar20 << 3 & 0x1f)) + 3;
    }
    else {
      uVar10 = uVar10 + 3;
    }
  }
joined_r0x0001007a0880:
  if (uVar10 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar17 = *(undefined8 *)(param_2 + 2);
    _swift_retain();
    _swift_errorRetain(uVar17);
    *(undefined8 *)(param_1 + 2) = uVar17;
    *(byte *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar10 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar17 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 2) = uVar17;
    uVar19 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 4) = uVar19;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(byte *)((long)param_1 + uVar1) = 1;
    _swift_retain();
    _swift_retain(uVar17);
    _swift_bridgeObjectRetain(uVar19);
  }
  else if (uVar10 == 0) {
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar12);
    uVar21 = (ulong)(uVar7 + (long)param_1) & uVar8;
    uVar8 = (ulong)(uVar7 + (long)param_2) & uVar8;
    (**(code **)(lVar22 + 0x10))(uVar21,uVar8,lVar4);
    uVar21 = uVar21 + lVar9 + uVar23;
    uVar8 = uVar8 + lVar9 + uVar23;
    uVar7 = uVar8 & uVar24;
    (**(code **)(lVar16 + 0x30))(uVar7,1,lVar15);
    if ((int)uVar7 == 0) {
      (**(code **)(lVar16 + 0x10))(uVar21 & uVar24,uVar8 & uVar24,lVar15);
      (**(code **)(lVar16 + 0x38))(uVar21 & uVar24,0,1,lVar15);
      *(byte *)((long)param_1 + uVar1) = 0;
    }
    else {
      _memcpy((void *)(uVar21 & uVar24),(void *)(uVar8 & uVar24),sVar2);
      *(byte *)((long)param_1 + uVar1) = 0;
    }
  }
  else {
    _memcpy(param_1,param_2,uVar1 + 1);
  }
LAB_1007a09c4:
  if (iVar13 == 0) {
    sVar14 = sVar14 + 1;
  }
  uVar8 = sVar14 + (uVar11 + lVar9 + uVar23 & uVar24);
  if (uVar8 < 0x29) {
    uVar8 = 0x28;
  }
  *(undefined8 *)((ulong)(uVar8 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar8 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007a0a5c | FUN_1007a0a5c */

void FUN_1007a0a5c(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar2 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar17 = *(long *)(lVar2 + -8);
  uVar6 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar13 = *(long *)(lVar5 + 0x40) + uVar6;
  lVar16 = *(long *)(lVar17 + 0x40);
  lVar15 = *(long *)(lVar3 + -8);
  uVar11 = (ulong)*(byte *)(lVar15 + 0x50);
  sVar9 = *(size_t *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    sVar9 = sVar9 + 1;
  }
  uVar1 = sVar9 + (lVar16 + uVar11 + (uVar13 & (uVar6 ^ 0xffffffffffffffff)) &
                  (uVar11 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar7 = (uint)bVar4;
  if (2 < bVar4) {
    uVar14 = (uint)uVar1;
    uVar8 = 4;
    if (uVar14 < 4) {
      uVar8 = uVar14;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1007a0b50;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar4 - 3 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 3;
  }
LAB_1007a0b50:
  if (uVar7 == 2) {
    uVar18 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar18;
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar7 == 1) {
    uVar18 = *(undefined8 *)param_2;
    uVar20 = *(undefined8 *)(param_2 + 6);
    uVar19 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar18;
    param_1[3] = uVar20;
    param_1[2] = uVar19;
    param_1[4] = *(undefined8 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else if (uVar7 == 0) {
    uVar10 = ~uVar11;
    (**(code **)(lVar5 + 0x20))(param_1,param_2);
    uVar12 = uVar13 + (long)param_1 & ~uVar6;
    uVar13 = (ulong)(uVar13 + (long)param_2) & ~uVar6;
    (**(code **)(lVar17 + 0x20))(uVar12,uVar13,lVar2);
    lVar16 = lVar16 + uVar11;
    uVar12 = uVar12 + lVar16;
    uVar13 = uVar13 + lVar16;
    uVar6 = uVar13 & uVar10;
    (**(code **)(lVar15 + 0x30))(uVar6,1,lVar3);
    if ((int)uVar6 == 0) {
      (**(code **)(lVar15 + 0x20))(uVar12 & uVar10,uVar13 & uVar10,lVar3);
      (**(code **)(lVar15 + 0x38))(uVar12 & uVar10,0,1,lVar3);
    }
    else {
      _memcpy((void *)(uVar12 & uVar10),(void *)(uVar13 & uVar10),sVar9);
    }
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  else {
    _memcpy(param_1,param_2,uVar1 + 1);
  }
  *(undefined8 *)(uVar1 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar1 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return;
}



/* Address: 0x1007a0ca0 | FUN_1007a0ca0 */

uint * FUN_1007a0ca0(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  size_t sVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  lVar12 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar17 = *(long *)(lVar12 + -8);
  lVar20 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar20 + 0x50);
  if (param_1 == param_2) {
    lVar9 = *(long *)(lVar20 + 0x40);
    lVar12 = *(long *)(*(long *)(param_3 + 0x20) + -8);
    uVar21 = (ulong)*(byte *)(lVar12 + 0x50);
    iVar13 = *(int *)(lVar12 + 0x54);
    sVar14 = *(size_t *)(lVar12 + 0x40);
    uVar11 = *(long *)(lVar17 + 0x40) + uVar8 & (uVar8 ^ 0xffffffffffffffff);
    uVar18 = ~uVar21;
    goto LAB_1007a1054;
  }
  uVar6 = *(long *)(lVar17 + 0x40) + uVar8;
  uVar11 = uVar6 & (uVar8 ^ 0xffffffffffffffff);
  lVar9 = *(long *)(lVar20 + 0x40);
  lVar15 = *(long *)(param_3 + 0x20);
  lVar16 = *(long *)(lVar15 + -8);
  uVar21 = (ulong)*(byte *)(lVar16 + 0x50);
  iVar13 = *(int *)(lVar16 + 0x54);
  sVar14 = *(size_t *)(lVar16 + 0x40);
  sVar2 = sVar14;
  if (iVar13 == 0) {
    sVar2 = sVar14 + 1;
  }
  uVar1 = sVar2 + (lVar9 + uVar21 + uVar11 & (uVar21 ^ 0xffffffffffffffff));
  if (uVar1 < 0x29) {
    uVar1 = 0x28;
  }
  uVar22 = (uint)uVar1;
  bVar7 = *(byte *)((long)param_1 + uVar1);
  uVar10 = (uint)bVar7;
  if (2 < bVar7) {
    uVar3 = 4;
    if (uVar22 < 4) {
      uVar3 = uVar22;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_1007a0df4;
      uVar10 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar10 = (uint)(uint3)*param_1;
    }
    else {
      uVar10 = *param_1;
    }
    if (uVar22 < 4) {
      uVar10 = (uVar10 | bVar7 - 3 << (ulong)(uVar22 << 3 & 0x1f)) + 3;
    }
    else {
      uVar10 = uVar10 + 3;
    }
  }
LAB_1007a0df4:
  uVar18 = ~uVar21;
  uVar8 = ~uVar8;
  if (uVar10 == 2) {
    _swift_release(*(undefined8 *)param_1);
    _swift_errorRelease(*(undefined8 *)(param_1 + 2));
  }
  else if (uVar10 == 1) {
    _swift_release(*(undefined8 *)param_1);
    _swift_release(*(undefined8 *)(param_1 + 2));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 4));
  }
  else if (uVar10 == 0) {
    (**(code **)(lVar17 + 8))(param_1,lVar12);
    uVar19 = (ulong)(uVar6 + (long)param_1) & uVar8;
    (**(code **)(lVar20 + 8))(uVar19,lVar4);
    uVar19 = uVar19 + lVar9 + uVar21;
    uVar5 = uVar19 & uVar18;
    (**(code **)(lVar16 + 0x30))(uVar5,1,lVar15);
    if ((int)uVar5 == 0) {
      (**(code **)(lVar16 + 8))(uVar19 & uVar18,lVar15);
    }
  }
  bVar7 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar7;
  if (bVar7 < 3) {
LAB_1007a0f18:
    if (uVar10 == 2) goto LAB_1007a0ff8;
LAB_1007a0f20:
    if (uVar10 != 1) {
      if (uVar10 == 0) {
        (**(code **)(lVar17 + 0x20))(param_1,param_2,lVar12);
        uVar19 = (ulong)(uVar6 + (long)param_1) & uVar8;
        uVar8 = (ulong)(uVar6 + (long)param_2) & uVar8;
        (**(code **)(lVar20 + 0x20))(uVar19,uVar8,lVar4);
        uVar19 = uVar19 + lVar9 + uVar21;
        uVar8 = uVar8 + lVar9 + uVar21;
        uVar6 = uVar8 & uVar18;
        (**(code **)(lVar16 + 0x30))(uVar6,1,lVar15);
        if ((int)uVar6 == 0) {
          (**(code **)(lVar16 + 0x20))(uVar19 & uVar18,uVar8 & uVar18,lVar15);
          (**(code **)(lVar16 + 0x38))(uVar19 & uVar18,0,1,lVar15);
        }
        else {
          _memcpy((void *)(uVar19 & uVar18),(void *)(uVar8 & uVar18),sVar2);
        }
        *(byte *)((long)param_1 + uVar1) = 0;
      }
      else {
        _memcpy(param_1,param_2,uVar1 + 1);
      }
      goto LAB_1007a1054;
    }
    uVar23 = *(undefined8 *)param_2;
    uVar25 = *(undefined8 *)(param_2 + 6);
    uVar24 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar23;
    *(undefined8 *)(param_1 + 6) = uVar25;
    *(undefined8 *)(param_1 + 4) = uVar24;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    bVar7 = 1;
  }
  else {
    uVar3 = 4;
    if (uVar22 < 4) {
      uVar3 = uVar22;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_1007a0f18;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    if (3 < uVar22) {
      uVar10 = uVar10 + 3;
      goto LAB_1007a0f18;
    }
    uVar10 = (uVar10 | bVar7 - 3 << (ulong)(uVar22 << 3 & 0x1f)) + 3;
    if (uVar10 != 2) goto LAB_1007a0f20;
LAB_1007a0ff8:
    uVar23 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar23;
    bVar7 = 2;
  }
  *(byte *)((long)param_1 + uVar1) = bVar7;
LAB_1007a1054:
  if (iVar13 == 0) {
    sVar14 = sVar14 + 1;
  }
  uVar8 = sVar14 + (uVar11 + lVar9 + uVar21 & uVar18);
  if (uVar8 < 0x29) {
    uVar8 = 0x28;
  }
  *(undefined8 *)((ulong)(uVar8 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar8 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1007a10b8 | FUN_1007a10b8 */

int FUN_1007a10b8(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar10 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  uVar9 = lVar11 + ((*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40) + uVar9 &
                    (uVar9 ^ 0xffffffffffffffff)) +
                    *(long *)(lVar7 + 0x40) + (ulong)*(byte *)(lVar10 + 0x50) &
                   ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
  if (uVar9 < 0x29) {
    uVar9 = 0x28;
  }
  uVar5 = 0xfc - (1U >> (ulong)(((uint)uVar9 & 3) << 3));
  if (3 < (uint)uVar9) {
    uVar5 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (uVar5 <= param_2 && param_2 - uVar5 != 0) {
    uVar1 = (uVar9 & 0xfffffffffffffff8) + 0x10;
    uVar2 = uVar1 & 0xfffffff8;
    uVar8 = (uint)uVar2;
    uVar12 = 2;
    uVar4 = uVar12;
    if (uVar2 == 0) {
      uVar4 = (param_2 - uVar5) + 1;
    }
    if (0xffff < uVar4) {
      uVar12 = 4;
    }
    if (uVar4 < 0x100) {
      uVar12 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar12;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar12 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_1007a1198;
    }
    else if (uVar3 == 2) {
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_1007a1198:
        uVar12 = uVar12 - 1;
        if (uVar2 != 0) {
          uVar12 = 0;
          uVar8 = *param_1;
        }
        return uVar5 + (uVar8 | uVar12) + 1;
      }
    }
    else {
      uVar12 = *(uint *)((long)param_1 + uVar1);
      if (uVar12 != 0) goto LAB_1007a1198;
    }
  }
  iVar6 = 0x100 - (uint)*(byte *)((long)param_1 + uVar9);
  if (uVar5 <= (*(byte *)((long)param_1 + uVar9) ^ 0xff)) {
    iVar6 = 0;
  }
  return iVar6;
}



/* Address: 0x1007a11e0 | FUN_1007a11e0 */

void FUN_1007a11e0(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar8 = *(long *)(*(long *)(param_4 + 0x20) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar7 = lVar9 + ((*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40) + uVar7 &
                   (uVar7 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar6 + 0x40) + (ulong)*(byte *)(lVar8 + 0x50) &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  if (uVar7 < 0x29) {
    uVar7 = 0x28;
  }
  uVar4 = 0xfc - (1U >> (ulong)(((uint)uVar7 & 3) << 3));
  if (3 < (uint)uVar7) {
    uVar4 = 0xfc;
  }
  sVar1 = (uVar7 & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar3 = uVar10;
  if ((int)sVar1 == 0) {
    uVar3 = (param_3 - uVar4) + 1;
  }
  if (0xffff < uVar3) {
    uVar10 = 4;
  }
  if (uVar3 < 0x100) {
    uVar10 = 1;
  }
  uVar2 = 0;
  if (1 < uVar3) {
    uVar2 = uVar10;
  }
  uVar10 = 0;
  if (uVar4 < param_3) {
    uVar10 = uVar2;
  }
  iVar5 = param_2 - uVar4;
  if (param_2 < uVar4 || iVar5 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar7) = -(char)param_2;
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar5 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + ~uVar4;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar5;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar5;
    }
  }
  return;
}



/* Address: 0x1007a1350 | FUN_1007a1350 */

void FUN_1007a1350(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cc00c8);
  return;
}



/* Address: 0x1007a135c | FUN_1007a135c */

void FUN_1007a135c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc0184);
  return;
}



/* Address: 0x1007a1368 | FUN_1007a1368 */

void FUN_1007a1368(long param_1)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar2 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    lVar4 = *(long *)(lVar2 + -8);
    uVar3 = *(ulong *)(param_1 + 0x18);
    lVar2 = 0x13f;
    _swift_checkMetadataState();
    if (uVar3 < 0x40) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      OVar1 = Swift::Optional::typeMetadataAccessor();
      if (uVar3 < 0x40) {
        _swift_getTupleTypeLayout3
                  (auStack_68,lVar4 + 0x40,*(long *)(lVar2 + -8) + 0x40,
                   *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40);
        puStack_40 = &DAT_100c77f50;
        local_38 = &DAT_100c77f68;
        local_48 = auStack_68;
        _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_48);
      }
    }
  }
  return;
}


