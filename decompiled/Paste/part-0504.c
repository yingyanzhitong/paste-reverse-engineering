/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005d0fa0 | FUN_1005d0fa0 */

void FUN_1005d0fa0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 8))(param_1,lVar1);
  _swift_release(*(undefined8 *)(param_1 + *(long *)(lVar2 + 0x40) + 7U & 0xfffffffffffffff8));
  return;
}



/* Address: 0x1005d1004 | FUN_1005d1004 */

long FUN_1005d1004(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  _swift_retain();
  return param_1;
}



/* Address: 0x1005d1088 | FUN_1005d1088 */

long FUN_1005d1088(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 0x18))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar4 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  uVar3 = *puVar2;
  *puVar2 = *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  _swift_retain();
  _swift_release(uVar3);
  return param_1;
}



/* Address: 0x1005d1118 | FUN_1005d1118 */

long FUN_1005d1118(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x20))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar2 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1005d1198 | FUN_1005d1198 */

long FUN_1005d1198(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 0x28))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  uVar2 = *puVar3;
  *puVar3 = *(undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1005d1220 | FUN_1005d1220 */

int * FUN_1005d1220(int *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar8 + 0x54);
  uVar1 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
    uVar9 = 2;
    uVar3 = uVar9;
    if ((uVar7 & 0xfffffff8) == 0) {
      uVar3 = (param_2 - uVar1) + 1;
    }
    if (0xffff < uVar3) {
      uVar9 = 4;
    }
    if (uVar3 < 0x100) {
      uVar9 = 1;
    }
    uVar2 = 0;
    if (1 < uVar3) {
      uVar2 = uVar9;
    }
    if (uVar2 < 2) {
      if ((uVar2 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_1005d12dc;
    }
    else if (uVar2 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_1005d12dc:
        iVar5 = uVar9 - 1;
        if ((uVar7 & 0xfffffff8) != 0) {
          iVar5 = *param_1;
        }
        return (int *)(ulong)(uVar1 + iVar5 + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_1005d12dc;
    }
  }
  if (uVar4 < 0x7fffffff) {
    uVar7 = *(ulong *)((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (int *)(ulong)((int)uVar7 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005d1318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x30))(param_1,uVar4,lVar6);
  return param_1;
}



/* Address: 0x1005d135c | FUN_1005d135c */

void FUN_1005d135c(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  sVar1 = (lVar8 + 7U & 0xfffffffffffffff8) + 8;
  uVar9 = 2;
  uVar10 = uVar9;
  if ((int)sVar1 == 0) {
    uVar10 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar10) {
    uVar9 = 4;
  }
  if (uVar10 < 0x100) {
    uVar9 = 1;
  }
  uVar3 = 0;
  if (1 < uVar10) {
    uVar3 = uVar9;
  }
  uVar9 = 0;
  if (uVar2 < param_3) {
    uVar9 = uVar3;
  }
  uVar10 = (uint)param_2;
  iVar5 = uVar10 - uVar2;
  if (uVar10 < uVar2 || iVar5 == 0) {
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar10 != 0) {
      if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001005d1494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(param_1,param_2,uVar4,lVar6);
        return;
      }
      if ((int)uVar10 < 0) {
        uVar10 = uVar10 & 0x7fffffff;
      }
      else {
        uVar10 = uVar10 - 1;
      }
      *(ulong *)((long)param_1 + lVar8 + 7 & 0xfffffffffffffff8) = (ulong)uVar10;
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar5 = 1;
      _bzero(param_1,sVar1);
      *param_1 = uVar10 + ~uVar2;
    }
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
      }
    }
    else if (uVar9 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar5;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar5;
    }
  }
  return;
}



/* Address: 0x1005d14e0 | FUN_1005d14e0 */

void FUN_1005d14e0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005d14ec | FUN_1005d14ec */

void FUN_1005d14ec(undefined8 param_1,undefined8 param_2)

{
  FUN_10012ae44(param_1,param_2,FUN_1005d07dc,FUN_1005afc04);
  return;
}



/* Address: 0x1005d1500 | FUN_1005d1500 */

void FUN_1005d1500(undefined8 param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1005cfcb0(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                param_2,param_3);
  return;
}



/* Address: 0x1005d158c | FUN_1005d158c */

long FUN_1005d158c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_allocObject();
  _swift_defaultActor_initialize();
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined1 *)(unaff_x20 + 0xa8) = 1;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x20 + 0xc0) = 3000;
  *(undefined **)(unaff_x20 + 200) = puVar1;
  *(undefined1 *)(unaff_x20 + 0xd0) = 0;
  puVar2 = PTR___swiftEmptySetSingleton_100eae0e8;
  *(undefined **)(unaff_x20 + 0xd8) = puVar1;
  *(undefined **)(unaff_x20 + 0xe0) = puVar2;
  return unaff_x20;
}



/* Address: 0x1005d1600 | FUN_1005d1600 */

undefined1  [16] FUN_1005d1600(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined1 auVar2 [16];
  String SVar3;
  String SVar4;
  undefined8 local_40;
  undefined8 local_38;
  
  if (((uint)param_3 & 0xff) == 1) {
    if (param_2.unknown == (undefined *)0x0) {
      local_38 = 0x8000000100dae5f0;
      local_40 = 0xd00000000000002b;
    }
    else {
      Swift::_StringGuts::grow(0x20,param_2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      local_40 = 0xd00000000000001e;
      local_38 = 0x8000000100dae620;
      SVar1.bridgeObject = param_2.unknown;
      SVar1.str = param_1;
      SVar3.bridgeObject = param_4;
      SVar3.str = param_3;
      Swift::String::append(SVar1,SVar3);
    }
  }
  else {
    Swift::_StringGuts::grow(0x25,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_40 = 0xd000000000000023;
    local_38 = 0x8000000100dae640;
    SVar1 = Swift::CustomStringConvertible::get_description();
    SVar4.bridgeObject = param_4;
    SVar4.str = param_3;
    Swift::String::append(SVar1,SVar4);
    _swift_bridgeObjectRelease(SVar1.bridgeObject);
  }
  auVar2._8_8_ = local_38;
  auVar2._0_8_ = local_40;
  return auVar2;
}



/* Address: 0x1005d170c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::LocalizedError::$get_errorDescription */

void (extension_Foundation)::Foundation::LocalizedError::_get_errorDescription(void)

{
  _get_errorDescription();
  return;
}



/* Address: 0x1005d1710 | FUN_1005d1710 */

undefined1  [16] FUN_1005d1710(char param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    puVar1 = (undefined1 *)0x6e65706f;
    if (param_1 != '\x01') {
      puVar1 = &DAT_6465736f6c63;
    }
    puVar2 = &DAT_e400000000000000;
    if (param_1 != '\x01') {
      puVar2 = &DAT_e600000000000000;
    }
    auVar3._8_8_ = puVar2;
    auVar3._0_8_ = puVar1;
    return auVar3;
  }
  auVar4._8_8_ = 0xea0000000000676e;
  auVar4._0_8_ = 0x697463656e6e6f63;
  return auVar4;
}



/* Address: 0x1005d1760 | FUN_1005d1760 */

void FUN_1005d1760(void)

{
  FUN_1005d7ec4();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005d17bc | FUN_1005d17bc */

void FUN_1005d17bc(void)

{
  FUN_1005d7ec4();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005d1808 | FUN_1005d1808 */

undefined1  [16] FUN_1005d1808(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar4 = *unaff_x20;
  puVar1 = (undefined1 *)0x6e65706f;
  if (cVar4 != '\x01') {
    puVar1 = &DAT_6465736f6c63;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e600000000000000;
  }
  puVar3 = (undefined1 *)0xea0000000000676e;
  puVar5 = (undefined1 *)0x697463656e6e6f63;
  if (cVar4 != '\0') {
    puVar3 = puVar2;
    puVar5 = puVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = puVar5;
  return auVar6;
}



/* Address: 0x1005d185c | FUN_1005d185c */

undefined1  [16] FUN_1005d185c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x30);
  return auVar1;
}



/* Address: 0x1005d1868 | FUN_1005d1868 */

undefined1  [16] FUN_1005d1868(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  puVar1 = (undefined1 *)0x61746164;
  if (bVar5 != 2) {
    puVar1 = (undefined1 *)0x7972746572;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar5 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  puVar3 = &SUB_00006469;
  if (bVar5 != 0) {
    puVar3 = (undefined1 *)0x746e657665;
  }
  puVar4 = &SUB_e200000000000000;
  if (bVar5 != 0) {
    puVar4 = &DAT_e500000000000000;
  }
  if (bVar5 < 2) {
    puVar2 = puVar4;
    puVar1 = puVar3;
  }
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Address: 0x1005d18c4 | FUN_1005d18c4 */

void FUN_1005d18c4(undefined1 *param_1,undefined1 param_2)

{
  FUN_1005d6ea8();
  *param_1 = param_2;
  return;
}



/* Address: 0x1005d18e8 | FUN_1005d18e8 */

String FUN_1005d18e8(void)

{
  String SVar1;
  
  FUN_1005d713c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005d1910 | FUN_1005d1910 */

String FUN_1005d1910(void)

{
  String SVar1;
  
  FUN_1005d713c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005d1938 | thunk_FUN_1005d6ff8 */

void thunk_FUN_1005d6ff8(void)

{
  FUN_1005d6ff8();
  return;
}



/* Address: 0x1005d193c | FUN_1005d193c */

void FUN_1005d193c(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd4888;
  FUN_1000f7830(&DAT_100fd4888,&DAT_100c65400);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005d713c();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encodeIfPresent(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[2],unaff_x20[3],&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],unaff_x20[5],&local_53,puVar1);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[6],*(undefined1 *)(unaff_x20 + 7),&local_54,puVar1);
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1005d1aac | FUN_1005d1aac */

void FUN_1005d1aac(Hasher param_1,Hasher param_2)

{
  __uint64 _Var1;
  undefined8 *unaff_x20;
  void *pvVar2;
  Hasher HVar3;
  char *pcVar4;
  String SVar5;
  String SVar6;
  
  pvVar2 = (void *)unaff_x20[1];
  if (pvVar2 == (void *)0x0) {
    Swift::Hasher::_combine(0,param_2);
    pvVar2 = (void *)unaff_x20[3];
    HVar3.unknown = param_2.unknown;
  }
  else {
    HVar3.unknown = (undefined *)*unaff_x20;
    Swift::Hasher::_combine(1,param_2);
    SVar5.bridgeObject = pvVar2;
    SVar5.str = HVar3.unknown;
    Swift::String::hash(param_1,SVar5);
    pvVar2 = (void *)unaff_x20[3];
  }
  if (pvVar2 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    pcVar4 = (char *)unaff_x20[2];
    Swift::Hasher::_combine(1,HVar3);
    SVar6.bridgeObject = pvVar2;
    SVar6.str = pcVar4;
    Swift::String::hash(param_1,SVar6);
  }
  HVar3.unknown = ((String *)(unaff_x20 + 4))->str;
  Swift::String::hash(param_1,*(String *)(unaff_x20 + 4));
  if (*(char *)(unaff_x20 + 7) == '\x01') {
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    _Var1 = unaff_x20[6];
    Swift::Hasher::_combine(1,HVar3);
    Swift::Hasher::_combine(_Var1,HVar3);
  }
  return;
}



/* Address: 0x1005d1b70 | FUN_1005d1b70 */

void FUN_1005d1b70(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005d1aac();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005d1bac | FUN_1005d1bac */

void FUN_1005d1bac(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1005d717c(&local_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = CONCAT71(uStack_37,uStack_38);
    param_1[4] = local_40;
    *(undefined8 *)((long)param_1 + 0x31) = uStack_2f;
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_30,uStack_37);
  }
  return;
}



/* Address: 0x1005d1bf4 | thunk_FUN_1005d1aac */

void thunk_FUN_1005d1aac(void)

{
  FUN_1005d1aac();
  return;
}



/* Address: 0x1005d1bf8 | FUN_1005d1bf8 */

void FUN_1005d1bf8(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005d1aac();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005d1c30 | FUN_1005d1c30 */

void FUN_1005d1c30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  param_1[1] = unaff_x20[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRetain(uVar1);
  return;
}



/* Address: 0x1005d1c40 | FUN_1005d1c40 */

void FUN_1005d1c40(void)

{
  FUN_1005d193c();
  return;
}



/* Address: 0x1005d1c54 | FUN_1005d1c54 */

uint FUN_1005d1c54(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  local_70 = param_1[4];
  uStack_68 = (undefined1)param_1[5];
  uStack_5f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_67 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  local_30 = param_2[4];
  uStack_28 = (undefined1)param_2[5];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x31);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  FUN_1005d6ff8(&local_90,&local_50);
  return uVar1 & 1;
}



/* Address: 0x1005d1cac | FUN_1005d1cac */

void FUN_1005d1cac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_defaultActor_initialize();
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined1 *)(unaff_x20 + 0xa8) = 1;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x20 + 0xc0) = 3000;
  *(undefined **)(unaff_x20 + 200) = puVar1;
  *(undefined1 *)(unaff_x20 + 0xd0) = 0;
  puVar2 = PTR___swiftEmptySetSingleton_100eae0e8;
  *(undefined **)(unaff_x20 + 0xd8) = puVar1;
  *(undefined **)(unaff_x20 + 0xe0) = puVar2;
  return;
}



/* Address: 0x1005d1d08 | FUN_1005d1d08 */

void FUN_1005d1d08(char param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  if (param_1 == '\r') {
    FUN_1005d1e58();
    FUN_1005d1fcc();
    _swift_bridgeObjectRelease(param_2);
    *(undefined1 *)(unaff_x20 + 0xd0) = 1;
  }
  else if (param_1 == '\n') {
    if (*(char *)(unaff_x20 + 0xd0) != '\x01') {
      FUN_1005d1e58();
      FUN_1005d1fcc();
      _swift_bridgeObjectRelease(param_2);
      return;
    }
    *(undefined1 *)(unaff_x20 + 0xd0) = 0;
  }
  else {
    if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
      *(undefined1 *)(unaff_x20 + 0xd0) = 0;
    }
    _swift_beginAccess(unaff_x20 + 200,auStack_58,0x21,0);
    uVar3 = *(ulong *)(unaff_x20 + 200);
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 200) = uVar3;
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_1005d07dc(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      *(ulong *)(unaff_x20 + 200) = uVar2;
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_1005d07dc(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(char *)(uVar3 + uVar1 + 0x20) = param_1;
    *(ulong *)(unaff_x20 + 200) = uVar3;
    _swift_endAccess(auStack_58);
  }
  return;
}



/* Address: 0x1005d1e58 | FUN_1005d1e58 */

String FUN_1005d1e58(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long unaff_x20;
  char *pcVar6;
  String SVar7;
  tuple2_conflict1 tVar8;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  pvVar4 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 200,auStack_48,0,0);
  lVar5 = *(long *)(unaff_x20 + 200);
  pcVar6 = *(char **)(lVar5 + 0x10);
  if (((char *)0x2 < pcVar6) &&
     (((char *)(lVar5 + 0x20) == &DAT_100fd4da8 ||
      (((*(char *)(lVar5 + 0x20) == DAT_100fd4da8 && (*(char *)(lVar5 + 0x21) == DAT_100fd4da9)) &&
       (*(char *)(lVar5 + 0x22) == DAT_100fd4daa)))))) {
    pvVar4 = (void *)0x21;
    _swift_beginAccess(unaff_x20 + 200,auStack_60,0x21,0);
    if (*(ulong *)(*(long *)(unaff_x20 + 200) + 0x10) < 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d1fcc);
      (*pcVar1)();
    }
    FUN_1005d14ec(0,3);
    _swift_endAccess(auStack_60);
    lVar5 = *(long *)(unaff_x20 + 200);
    pcVar6 = *(char **)(lVar5 + 0x10);
  }
  _swift_bridgeObjectRetain(lVar5);
  SVar7.bridgeObject = pvVar4;
  SVar7.str = pcVar6;
  tVar8 = Swift::String::_fromUTF8Repairing((undefined *)(lVar5 + 0x20),SVar7);
  _swift_bridgeObjectRelease(lVar5,tVar8.result.bridgeObject,tVar8._16_8_);
  _swift_beginAccess(unaff_x20 + 200,auStack_60,0x21,0);
  iVar2 = (int)*(undefined8 *)(unaff_x20 + 200);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(unaff_x20 + 200);
  if (iVar2 == 0) {
    uVar3 = 0;
    FUN_1005d6670(0,*(ulong *)(lVar5 + 0x18) >> 1);
    *(undefined8 *)(unaff_x20 + 200) = uVar3;
    _swift_bridgeObjectRelease(lVar5);
  }
  else {
    FUN_1005d14ec(0,*(undefined8 *)(lVar5 + 0x10));
  }
  _swift_endAccess(auStack_60);
  return tVar8.result;
}



/* Address: 0x1005d1fcc | FUN_1005d1fcc */

void FUN_1005d1fcc(char *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  Index IVar4;
  ulong uVar5;
  Index IVar6;
  void *pvVar7;
  _StringComparisonResult expecting;
  char *pcVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  UnsafeBufferPointer<__int8> UVar12;
  byte *pbVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  String SVar21;
  String SVar23;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined *local_78;
  ulong uStack_70;
  String local_60;
  String SVar22;
  String SVar24;
  
  SVar21.bridgeObject = param_2;
  SVar21.str = param_1;
  uVar5 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar5 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar5 == 0) {
    FUN_1005d273c();
    _swift_beginAccess(unaff_x20 + 0xe0,&local_78,1,0);
    pvVar9 = *(void **)(unaff_x20 + 0xe0);
    *(undefined **)(unaff_x20 + 0xe0) = PTR___swiftEmptySetSingleton_100eae0e8;
    goto LAB_1005d2208;
  }
  SVar23.bridgeObject = (void *)0xe100000000000000;
  SVar23.str = &DAT_0000003a;
  SVar29.bridgeObject = param_2;
  SVar29.str = param_1;
  bVar2 = Swift::String::hasPrefix(SVar23,SVar29);
  if (bVar2) {
    return;
  }
  local_60 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  IVar4.cmsgPointer.unknown = (UnsafeMutablePointer)&DAT_0000003a;
  uVar20 = 0;
  FUN_10051c750(0x3a,0xe100000000000000,param_1,param_2);
  if ((uVar20 & 0xff) == 1) {
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    SVar27.bridgeObject = param_1;
    SVar27.str = (char *)IVar4.cmsgPointer.unknown;
    IVar6.cmsgPointer.unknown = IVar4.cmsgPointer.unknown;
    pvVar9 = param_2;
    SVar22.str = Swift::String::get_subscript((Range<Index>)0xf,SVar27);
    SVar22.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    pvVar10 = pvVar9;
    SVar21 = Swift::String::__fromSubstring(SVar22);
    _swift_bridgeObjectRelease(pvVar9);
    SVar28.bridgeObject = param_2;
    SVar28.str = param_1;
    IVar4 = Swift::String::index(IVar4,SVar28);
    FUN_1000102ac(IVar4.cmsgPointer.unknown,param_1,param_2);
    SVar24.bridgeObject = param_1;
    SVar24.str = (char *)IVar4.cmsgPointer.unknown;
    SVar23 = Swift::String::__fromSubstring(SVar24);
    pvVar9 = SVar23.bridgeObject;
    _swift_bridgeObjectRelease(pvVar10);
    local_60 = SVar23;
    _swift_bridgeObjectRetain(pvVar9);
    SVar25.bridgeObject = (void *)0xe100000000000000;
    SVar25.str = (char *)0x20;
    bVar2 = Swift::String::hasPrefix(SVar25,SVar23);
    _swift_bridgeObjectRelease(pvVar9);
    if (bVar2) {
      uVar5 = (ulong)SVar23.str & 0xffffffffffff;
      if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
        uVar5 = (ulong)pvVar9 >> 0x38 & 0xf;
      }
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d26ec);
        (*pcVar1)();
      }
      FUN_1005d6258(SVar23.str);
      if (pvVar9 == (void *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d273c);
        (*pcVar1)();
      }
      FUN_1005d6e2c(1);
      _swift_bridgeObjectRelease(pvVar9);
    }
  }
  puVar17 = SVar21.bridgeObject;
  pcVar8 = SVar21.str;
  uVar18 = 0x746e657665;
  if ((pcVar8 == (char *)0x746e657665) && (puVar17 == &DAT_e500000000000000)) {
LAB_1005d21a4:
    pvVar9 = local_60.bridgeObject;
    uVar19 = *(undefined8 *)(unaff_x20 + 0x88);
    *(char **)(unaff_x20 + 0x80) = local_60.str;
    *(void **)(unaff_x20 + 0x88) = local_60.bridgeObject;
    _swift_bridgeObjectRetain(local_60.bridgeObject);
    _swift_bridgeObjectRelease(uVar19);
LAB_1005d21c0:
    _swift_beginAccess(unaff_x20 + 0xe0,&local_78,0x21,0);
    FUN_1005d6298(auStack_90,uVar18,&DAT_e500000000000000);
    _swift_endAccess(&local_78);
    _swift_bridgeObjectRelease(puVar17);
    local_98 = local_88;
  }
  else {
    expecting.value = SVar21.str._0_1_;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x746e657665,(_StringGuts)0xe500000000000000,expecting);
    if (bVar2) goto LAB_1005d21a4;
    if (((pcVar8 != (char *)0x61746164) || (puVar17 != &DAT_e400000000000000)) &&
       (bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x61746164,(_StringGuts)0xe400000000000000,expecting),
       !bVar2)) {
      if ((pcVar8 == &SUB_00006469) && (bVar3 = 0, puVar17 == &SUB_e200000000000000)) {
LAB_1005d2370:
        uVar5 = (ulong)bVar3;
        local_78 = (undefined *)0x0;
        uStack_70 = 0xe100000000000000;
        FUN_1005d81c8();
        bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                          (&local_78,PTR___type_metadata_for_Swift_String_100eac208,
                           PTR___type_metadata_for_Swift_String_100eac208,uVar5,uVar5);
        if (!bVar2) {
          pcVar8 = local_60.str;
          pvVar9 = local_60.bridgeObject;
          uVar18 = *(undefined8 *)(unaff_x20 + 0x78);
          *(char **)(unaff_x20 + 0x70) = local_60.str;
          *(void **)(unaff_x20 + 0x78) = local_60.bridgeObject;
          _swift_bridgeObjectRetain_n(local_60.bridgeObject,2);
          _swift_bridgeObjectRelease(uVar18);
          uVar18 = *(undefined8 *)(unaff_x20 + 0xb8);
          *(char **)(unaff_x20 + 0xb0) = pcVar8;
          *(void **)(unaff_x20 + 0xb8) = pvVar9;
          _swift_bridgeObjectRelease(uVar18);
        }
        _swift_beginAccess(unaff_x20 + 0xe0,&local_78,0x21,0);
        FUN_1005d6298(auStack_90,&SUB_00006469,&SUB_e200000000000000);
        _swift_endAccess(&local_78);
        _swift_bridgeObjectRelease(puVar17);
        _swift_bridgeObjectRelease(local_88);
        pvVar9 = local_60.bridgeObject;
        goto LAB_1005d2208;
      }
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
      bVar3 = 1;
      if (bVar2) goto LAB_1005d2370;
      uVar18 = 0x7972746572;
      if ((pcVar8 == (char *)0x7972746572) && (puVar17 == &DAT_e500000000000000)) {
        pvVar9 = local_60.bridgeObject;
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x7972746572,(_StringGuts)0xe500000000000000,expecting);
        pvVar9 = local_60.bridgeObject;
        if (!bVar2) {
          _swift_bridgeObjectRelease(puVar17);
          goto LAB_1005d2208;
        }
      }
      pcVar8 = local_60.str;
      pvVar7 = (void *)((ulong)local_60.str & 0xffffffffffff);
      pvVar11 = (void *)((ulong)pvVar9 >> 0x38 & 0xf);
      pvVar10 = pvVar7;
      if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
        pvVar10 = pvVar11;
      }
      if (pvVar10 == (void *)0x0) goto LAB_1005d21c0;
      if (((ulong)pvVar9 >> 0x3c & 1) == 0) {
        if (((ulong)pvVar9 >> 0x3d & 1) != 0) {
          local_78 = local_60.str;
          uStack_70 = (ulong)pvVar9 & 0xffffffffffffff;
          uVar20 = (uint)local_60.str & 0xff;
          if (uVar20 == 0x2b) {
            if (pvVar11 == (void *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d2738);
              (*pcVar1)();
            }
            lVar15 = (long)pvVar11 - 1;
            if (lVar15 == 0) goto LAB_1005d26bc;
            pcVar8 = (undefined *)0x0;
            pbVar13 = (byte *)((ulong)&local_78 | 1);
            do {
              if (((9 < *pbVar13 - 0x30) ||
                  (lVar16 = (long)pcVar8 * 10,
                  SUB168(SEXT816((long)pcVar8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar5 = (ulong)(byte)(*pbVar13 - 0x30), pcVar8 = (char *)(lVar16 + uVar5),
                 SCARRY8(lVar16,uVar5))) goto LAB_1005d26bc;
              uVar20 = 0;
              lVar15 = lVar15 + -1;
              pbVar13 = pbVar13 + 1;
            } while (lVar15 != 0);
          }
          else if (uVar20 == 0x2d) {
            if (pvVar11 == (void *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d2730);
              (*pcVar1)();
            }
            lVar15 = (long)pvVar11 - 1;
            if (lVar15 == 0) {
LAB_1005d26bc:
              pcVar8 = (undefined *)0x0;
              uVar20 = 1;
            }
            else {
              pcVar8 = (undefined *)0x0;
              pbVar13 = (byte *)((ulong)&local_78 | 1);
              do {
                if (((9 < *pbVar13 - 0x30) ||
                    (lVar16 = (long)pcVar8 * 10,
                    SUB168(SEXT816((long)pcVar8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                   (uVar5 = (ulong)(byte)(*pbVar13 - 0x30), pcVar8 = (char *)(lVar16 - uVar5),
                   SBORROW8(lVar16,uVar5))) goto LAB_1005d26bc;
                uVar20 = 0;
                lVar15 = lVar15 + -1;
                pbVar13 = pbVar13 + 1;
              } while (lVar15 != 0);
            }
          }
          else {
            if (pvVar11 == (void *)0x0) goto LAB_1005d26bc;
            pcVar8 = (undefined *)0x0;
            ppuVar14 = &local_78;
            do {
              if (((9 < *(byte *)ppuVar14 - 0x30) ||
                  (lVar15 = (long)pcVar8 * 10,
                  SUB168(SEXT816((long)pcVar8) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
                 (uVar5 = (ulong)(byte)(*(byte *)ppuVar14 - 0x30), pcVar8 = (char *)(lVar15 + uVar5)
                 , SCARRY8(lVar15,uVar5))) goto LAB_1005d26bc;
              uVar20 = 0;
              pvVar11 = (void *)((long)pvVar11 - 1);
              ppuVar14 = (undefined **)((long)ppuVar14 + 1);
            } while (pvVar11 != (void *)0x0);
          }
          goto LAB_1005d26c4;
        }
        if (((ulong)local_60.str >> 0x3c & 1) == 0) {
          pvVar7 = pvVar9;
          UVar12 = Swift::_StringObject::get_sharedUTF8((_StringObject)local_60.str);
        }
        else {
          UVar12.unknown = (undefined *)(((ulong)pvVar9 & 0xfffffffffffffff) + 0x20);
        }
        if (*UVar12.unknown == 0x2b) {
          lVar15 = (long)pvVar7 - 1;
          if ((long)pvVar7 < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d2734);
            (*pcVar1)();
          }
          if (lVar15 != 0) {
            pcVar8 = (undefined *)0x0;
            do {
              UVar12.unknown = UVar12.unknown + 1;
              if (((9 < (byte)*UVar12.unknown - 0x30) ||
                  (lVar16 = (long)pcVar8 * 10,
                  SUB168(SEXT816((long)pcVar8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar5 = (ulong)(byte)((byte)*UVar12.unknown - 0x30),
                 pcVar8 = (char *)(lVar16 + uVar5), SCARRY8(lVar16,uVar5))) goto LAB_1005d21c0;
              uVar20 = 0;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            goto LAB_1005d26c4;
          }
        }
        else if (*UVar12.unknown == 0x2d) {
          lVar15 = (long)pvVar7 - 1;
          if ((long)pvVar7 < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d272c);
            (*pcVar1)();
          }
          if (lVar15 != 0) {
            pcVar8 = (undefined *)0x0;
            do {
              UVar12.unknown = UVar12.unknown + 1;
              if (((9 < (byte)*UVar12.unknown - 0x30) ||
                  (lVar16 = (long)pcVar8 * 10,
                  SUB168(SEXT816((long)pcVar8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar5 = (ulong)(byte)((byte)*UVar12.unknown - 0x30),
                 pcVar8 = (char *)(lVar16 - uVar5), SBORROW8(lVar16,uVar5))) goto LAB_1005d21c0;
              uVar20 = 0;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            goto LAB_1005d26c4;
          }
        }
        else if ((UVar12.unknown != (byte *)0x0) && (pvVar7 != (void *)0x0)) {
          pcVar8 = (undefined *)0x0;
          do {
            if (((9 < (byte)*UVar12.unknown - 0x30) ||
                (lVar15 = (long)pcVar8 * 10,
                SUB168(SEXT816((long)pcVar8) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
               (uVar5 = (ulong)(byte)((byte)*UVar12.unknown - 0x30),
               pcVar8 = (char *)(lVar15 + uVar5), SCARRY8(lVar15,uVar5))) goto LAB_1005d21c0;
            uVar20 = 0;
            pvVar7 = (void *)((long)pvVar7 - 1);
            UVar12.unknown = UVar12.unknown + 1;
          } while (pvVar7 != (void *)0x0);
          goto LAB_1005d26c4;
        }
      }
      else {
        _swift_bridgeObjectRetain(pvVar9);
        pvVar10 = pvVar9;
        FUN_1005d63dc(pcVar8,pvVar9,10);
        uVar20 = (uint)pvVar10;
        _swift_bridgeObjectRelease(pvVar9);
LAB_1005d26c4:
        if (((uVar20 & 0xff) != 1) && (0 < (long)pcVar8)) {
          *(char **)(unaff_x20 + 0xc0) = pcVar8;
          *(char **)(unaff_x20 + 0xa0) = pcVar8;
          *(char *)(unaff_x20 + 0xa8) = (char)uVar20;
        }
      }
      goto LAB_1005d21c0;
    }
    _swift_beginAccess(unaff_x20 + 0x90,&local_78,0,0);
    uVar5 = *(ulong *)(unaff_x20 + 0x90) & 0xffffffffffff;
    if ((*(ulong *)(unaff_x20 + 0x98) & 0x2000000000000000) != 0) {
      uVar5 = *(ulong *)(unaff_x20 + 0x98) >> 0x38 & 0xf;
    }
    if (uVar5 != 0) {
      pcVar8 = (char *)0x21;
      pvVar9 = (void *)0x0;
      _swift_beginAccess(unaff_x20 + 0x90,auStack_90);
      SVar26.bridgeObject = (void *)0xe100000000000000;
      SVar26.str = (char *)0xa;
      SVar30.bridgeObject = pvVar9;
      SVar30.str = pcVar8;
      Swift::String::append(SVar26,SVar30);
      _swift_endAccess(auStack_90);
    }
    SVar21 = local_60;
    pvVar9 = local_60.bridgeObject;
    pcVar8 = (char *)0x21;
    pvVar10 = (void *)0x0;
    _swift_beginAccess(unaff_x20 + 0x90,auStack_90);
    SVar31.bridgeObject = pvVar10;
    SVar31.str = pcVar8;
    Swift::String::append(SVar21,SVar31);
    _swift_endAccess(auStack_90);
    _swift_beginAccess(unaff_x20 + 0xe0,auStack_90,0x21,0);
    FUN_1005d6298(auStack_a0,0x61746164,&DAT_e400000000000000);
    _swift_endAccess(auStack_90);
    _swift_bridgeObjectRelease(puVar17);
  }
  _swift_bridgeObjectRelease(pvVar9);
  pvVar9 = local_98;
LAB_1005d2208:
  _swift_bridgeObjectRelease(pvVar9);
  return;
}



/* Address: 0x1005d273c | FUN_1005d273c */

void FUN_1005d273c(void)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x90,auStack_78,1,0);
  uVar14 = *(ulong *)(unaff_x20 + 0x90);
  uVar10 = *(ulong *)(unaff_x20 + 0x98);
  uVar4 = uVar10 & 0x2000000000000000;
  uVar7 = uVar14 & 0xffffffffffff;
  uVar9 = uVar10 >> 0x38 & 0xf;
  uVar3 = uVar7;
  if (uVar4 != 0) {
    uVar3 = uVar9;
  }
  if (uVar3 == 0) {
    _swift_beginAccess(unaff_x20 + 0xe0,auStack_a8,0,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xe0);
    _swift_bridgeObjectRetain(uVar5);
    uVar12 = 0;
    FUN_100052458(0x61746164,&DAT_e400000000000000,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    uVar14 = *(ulong *)(unaff_x20 + 0x90);
    uVar10 = *(ulong *)(unaff_x20 + 0x98);
    uVar4 = uVar10 & 0x2000000000000000;
    uVar7 = uVar14 & 0xffffffffffff;
    uVar9 = uVar10 >> 0x38 & 0xf;
  }
  else {
    uVar12 = 0;
  }
  if (uVar4 != 0) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    lVar11 = *(long *)(unaff_x20 + 0x78);
    if (lVar11 == 0) {
      if (*(long *)(unaff_x20 + 0x88) == 0 && (uVar12 & 1) == 0) {
        *(undefined8 *)(unaff_x20 + 0x80) = 0;
        *(undefined8 *)(unaff_x20 + 0x88) = 0;
        *(undefined8 *)(unaff_x20 + 0x90) = 0;
        *(undefined8 *)(unaff_x20 + 0x98) = 0xe000000000000000;
        _swift_bridgeObjectRelease(uVar10);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
        *(undefined8 *)(unaff_x20 + 0x70) = 0;
        *(undefined8 *)(unaff_x20 + 0x78) = 0;
        goto LAB_1005d28e4;
      }
      lVar11 = 0;
    }
  }
  else {
    lVar11 = *(long *)(unaff_x20 + 0x78);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar2 = *(undefined1 *)(unaff_x20 + 0xa8);
  _swift_beginAccess(unaff_x20 + 0xd8,auStack_90,0x21,0);
  uVar7 = *(ulong *)(unaff_x20 + 0xd8);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(lVar11);
  uVar4 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0xd8) = uVar7;
  uVar3 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_1005d06d4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(unaff_x20 + 0xd8) = uVar3;
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar7 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1005d06d4(uVar7,uVar4 + 1,1,uVar3);
  }
  *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
  lVar1 = uVar7 + uVar4 * 0x40;
  *(undefined8 *)(lVar1 + 0x20) = uVar8;
  *(long *)(lVar1 + 0x28) = lVar11;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x38) = uVar13;
  *(ulong *)(lVar1 + 0x40) = uVar14;
  *(ulong *)(lVar1 + 0x48) = uVar10;
  *(undefined8 *)(lVar1 + 0x50) = uVar6;
  *(undefined1 *)(lVar1 + 0x58) = uVar2;
  *(ulong *)(unaff_x20 + 0xd8) = uVar7;
  _swift_endAccess(auStack_90);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
LAB_1005d28e4:
  _swift_bridgeObjectRelease(uVar5);
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined1 *)(unaff_x20 + 0xa8) = 1;
  return;
}



/* Address: 0x1005d2978 | FUN_1005d2978 */

void FUN_1005d2978(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined1 local_58;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0xd8,auStack_48,0,0);
  lVar2 = *(long *)(unaff_x20 + 0xd8);
  if (*(long *)(lVar2 + 0x10) == 0) {
    local_58 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    _swift_beginAccess(unaff_x20 + 0xd8,auStack_a8,0x21,0);
    uStack_88 = *(undefined8 *)(lVar2 + 0x28);
    local_90 = *(undefined8 *)(lVar2 + 0x20);
    uStack_78 = *(undefined8 *)(lVar2 + 0x38);
    uStack_80 = *(undefined8 *)(lVar2 + 0x30);
    local_70 = *(undefined8 *)(lVar2 + 0x40);
    uStack_68 = (undefined1)*(undefined8 *)(lVar2 + 0x48);
    uStack_5f = (undefined7)*(undefined8 *)(lVar2 + 0x51);
    local_58 = (undefined1)((ulong)*(undefined8 *)(lVar2 + 0x51) >> 0x38);
    uStack_67 = (undefined7)*(undefined8 *)(lVar2 + 0x49);
    local_60 = (undefined1)((ulong)*(undefined8 *)(lVar2 + 0x49) >> 0x38);
    FUN_1005d099c(&local_90,auStack_e8);
    FUN_1005d0988(0,1);
    _swift_endAccess(auStack_a8);
    uVar3 = CONCAT71(uStack_67,uStack_68);
    uVar1 = CONCAT71(uStack_5f,local_60);
  }
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uVar3;
  param_1[4] = local_70;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = local_58;
  return;
}



/* Address: 0x1005d2a48 | FUN_1005d2a48 */

undefined1  [16] FUN_1005d2a48(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xb0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0xb8));
  return auVar1;
}



/* Address: 0x1005d2a74 | FUN_1005d2a74 */

undefined8 FUN_1005d2a74(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0xc0);
}



/* Address: 0x1005d2a7c | FUN_1005d2a7c */

void FUN_1005d2a7c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
    FUN_1005d1e58();
    FUN_1005d1fcc();
    _swift_bridgeObjectRelease(param_2);
    *(undefined1 *)(unaff_x20 + 0xd0) = 0;
  }
  puVar2 = auStack_38;
  _swift_beginAccess(unaff_x20 + 200,puVar2,0,0);
  if (*(long *)(*(long *)(unaff_x20 + 200) + 0x10) != 0) {
    FUN_1005d1e58();
    FUN_1005d1fcc();
    _swift_bridgeObjectRelease(puVar2);
  }
  _swift_beginAccess(unaff_x20 + 0x90,auStack_50,0,0);
  uVar1 = *(ulong *)(unaff_x20 + 0x90) & 0xffffffffffff;
  if ((*(ulong *)(unaff_x20 + 0x98) & 0x2000000000000000) != 0) {
    uVar1 = *(ulong *)(unaff_x20 + 0x98) >> 0x38 & 0xf;
  }
  if (((uVar1 != 0) || (*(long *)(unaff_x20 + 0x78) != 0)) || (*(long *)(unaff_x20 + 0x88) != 0)) {
    FUN_1005d1fcc(0,0xe000000000000000);
  }
  return;
}



/* Address: 0x1005d2b3c | FUN_1005d2b3c */

void FUN_1005d2b3c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x98));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 200));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xd8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xe0));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x1005d2b90 | FUN_1005d2b90 */

void FUN_1005d2b90(void)

{
  FUN_1005d2b3c();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x1005d2ba8 | FUN_1005d2ba8 */

void FUN_1005d2ba8(URLRequest_conflict param_1)

{
  Foundation::URLRequest::_get_url(param_1);
  return;
}



/* Address: 0x1005d2bd0 | FUN_1005d2bd0 */

void FUN_1005d2bd0(undefined8 param_1)

{
  long lVar1;
  URLRequest_conflict UVar2;
  long unaff_x20;
  
  lVar1 = _TtC11EventSource11EventSource::request;
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005d2c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))(param_1,unaff_x20 + lVar1,UVar2.unknown);
  return;
}



/* Address: 0x1005d2c18 | FUN_1005d2c18 */

undefined1 FUN_1005d2c18(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC11EventSource11EventSource::readyState;
  _swift_beginAccess(unaff_x20 + _TtC11EventSource11EventSource::readyState,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1005d2c58 | FUN_1005d2c58 */

undefined8 FUN_1005d2c58(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC11EventSource11EventSource::maximumFinalizationEventCount;
  _swift_beginAccess(unaff_x20 + _TtC11EventSource11EventSource::maximumFinalizationEventCount,
                     auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x1005d2c98 | FUN_1005d2c98 */

void FUN_1005d2c98(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC11EventSource11EventSource::maximumFinalizationEventCount;
  _swift_beginAccess(unaff_x20 + _TtC11EventSource11EventSource::maximumFinalizationEventCount,
                     auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1005d2ce4 | FUN_1005d2ce4 */

undefined1  [16] FUN_1005d2ce4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC11EventSource11EventSource::maximumFinalizationEventCount;
  _swift_beginAccess(unaff_x20 + _TtC11EventSource11EventSource::maximumFinalizationEventCount,
                     param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1005d2d24 | FUN_1005d2d24 */

void FUN_1005d2d24(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000020,0x8000000100dae690,
             0xdae690);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d2d7c);
  (*pcVar1)();
}



/* Address: 0x1005d2d7c | FUN_1005d2d7c */

void FUN_1005d2d7c(undefined8 param_1,undefined8 param_2)

{
  FUN_1005d347c(param_1,param_2,&DAT_100ee7490,&DAT_100c65418);
  return;
}



/* Address: 0x1005d2d90 | FUN_1005d2d90 */

void FUN_1005d2d90(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_1005d2dac,in_x3,0);
  return;
}



/* Address: 0x1005d2dac | FUN_1005d2dac */

void FUN_1005d2dac(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)
           (*(long *)(unaff_x22 + 0x10) + _TtC11EventSource11EventSource::_onOpenCallback);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x20);
  *puVar1 = uVar5;
  _swift_retain(uVar4);
  FUN_100004550(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005d2e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d2e04 | FUN_1005d2e04 */

void FUN_1005d2e04(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fd4898;
  FUN_1000f7830(&DAT_100fd4898,&DAT_100c65408);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_1005d7f98(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar9,&DAT_100fd4898,&DAT_100c65408);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_1000fb4c4(param_3,&DAT_100fd4898,&DAT_100c65408);
    puVar2 = &DAT_100ee7868;
    _swift_allocObject(&DAT_100ee7868,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c659b8,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100ee7890;
    _swift_allocObject(&DAT_100ee7890,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c659c0,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_1000fb4c4(param_3,&DAT_100fd4898,&DAT_100c65408);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1005d3090 | FUN_1005d3090 */

void FUN_1005d3090(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fd4898;
  FUN_1000f7830(&DAT_100fd4898,&DAT_100c65408);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_c0 + -extraout_x8;
  FUN_1005d7f98(param_3,puVar10);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar10;
  (**(code **)(lVar13 + 0x30))(puVar10,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar10,&DAT_100fd4898,&DAT_100c65408);
    uVar11 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar13 + 8))(puVar10,TVar3.unknown);
    uVar11 = (ulong)_Var1 | 0x1c00;
  }
  lVar13 = *(long *)(param_5 + 0x10);
  lVar12 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar13);
  _swift_release(param_5);
  if (lVar13 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar12 = 0;
  }
  else {
    _swift_getObjectType(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar13);
  }
  if (param_2 == (void *)0x0) {
    FUN_1000fb4c4(param_3,&DAT_100fd4898,&DAT_100c65408);
    puVar2 = &DAT_100ee77a0;
    _swift_allocObject(&DAT_100ee77a0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    puVar8 = &DAT_100fd4d60;
    FUN_1000f7830(&DAT_100fd4d60,&DAT_100c65980);
    if (lVar12 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar9 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar12;
    }
    _swift_task_create(uVar11,puVar9,puVar8,&DAT_100c65978,puVar2);
  }
  else {
    SVar14.bridgeObject = param_2;
    SVar14.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar14);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100ee77c8;
    _swift_allocObject(&DAT_100ee77c8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    puVar8 = &DAT_100fd4d60;
    FUN_1000f7830(&DAT_100fd4d60,&DAT_100c65980);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar12 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar12;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar11,&local_b8,puVar8,&DAT_100c65988,puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
    FUN_1000fb4c4(param_3,&DAT_100fd4898,&DAT_100c65408);
  }
  return;
}



/* Address: 0x1005d3330 | FUN_1005d3330 */

void FUN_1005d3330(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000023,0x8000000100dae6c0,
             0xdae690);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d3388);
  (*pcVar1)();
}



/* Address: 0x1005d3388 | FUN_1005d3388 */

void FUN_1005d3388(undefined8 param_1,undefined8 param_2)

{
  FUN_1005d347c(param_1,param_2,&DAT_100ee74b8,&DAT_100c65428);
  return;
}



/* Address: 0x1005d339c | FUN_1005d339c */

void FUN_1005d339c(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_1005d33b8,in_x3,0);
  return;
}



/* Address: 0x1005d33b8 | FUN_1005d33b8 */

void FUN_1005d33b8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)
           (*(long *)(unaff_x22 + 0x10) + _TtC11EventSource11EventSource::_onMessageCallback);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x20);
  *puVar1 = uVar5;
  _swift_retain(uVar4);
  FUN_100004550(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005d340c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d3410 | FUN_1005d3410 */

void FUN_1005d3410(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000021,0x8000000100dae6f0,
             0xdae690);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d3468);
  (*pcVar1)();
}



/* Address: 0x1005d3468 | FUN_1005d3468 */

void FUN_1005d3468(undefined8 param_1,undefined8 param_2)

{
  FUN_1005d347c(param_1,param_2,&DAT_100ee74e0,&DAT_100c65438);
  return;
}



/* Address: 0x1005d347c | FUN_1005d347c */

void FUN_1005d347c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  TaskPriority TVar2;
  long extraout_x8;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100fd4898;
  FUN_1000f7830(&DAT_100fd4898,&DAT_100c65408);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_1 != 0) {
    TVar2 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
              (&stack0xffffffffffffffc0 + -extraout_x8,1,1,TVar2.unknown);
    _swift_allocObject(param_3,0x38,7);
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = unaff_x20;
    *(long *)(param_3 + 0x28) = param_1;
    *(undefined8 *)(param_3 + 0x30) = param_2;
    _swift_retain();
    FUN_1005d2e04(0,0,&stack0xffffffffffffffc0 + -extraout_x8,param_4,param_3);
    _swift_release();
  }
  return;
}



/* Address: 0x1005d3560 | FUN_1005d3560 */

void FUN_1005d3560(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_1005d357c,in_x3,0);
  return;
}



/* Address: 0x1005d357c | FUN_1005d357c */

void FUN_1005d357c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)
           (*(long *)(unaff_x22 + 0x10) + _TtC11EventSource11EventSource::_onErrorCallback);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x20);
  *puVar1 = uVar5;
  _swift_retain(uVar4);
  FUN_100004550(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005d35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


