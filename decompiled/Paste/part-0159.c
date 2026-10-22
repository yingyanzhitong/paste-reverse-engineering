/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001eed50 | FUN_1001eed50 */

void FUN_1001eed50(void)

{
  undefined *puVar1;
  
  if (DAT_100fb5920 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fb5920 = puVar1;
  return;
}



/* Address: 0x1001eed90 | FUN_1001eed90 */

void FUN_1001eed90(void)

{
  long unaff_x20;
  
  FUN_1001ee308(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1001eed98 | FUN_1001eed98 */

void FUN_1001eed98(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca7424,1);
  return;
}



/* Address: 0x1001eeda8 | FUN_1001eeda8 */

void FUN_1001eeda8(undefined8 *param_1)

{
  FUN_1001eebe0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  _swift_release(param_1[3]);
  _swift_release(param_1[4]);
  return;
}



/* Address: 0x1001eede0 | FUN_1001eede0 */

undefined8 * FUN_1001eede0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar1 = *(undefined1 *)(param_2 + 2);
  FUN_1001eebf0(uVar2,uVar3,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar1;
  uVar2 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  _swift_retain(uVar3);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1001eee60 | FUN_1001eee60 */

undefined8 * FUN_1001eee60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_2;
  uVar1 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1001eebf0(uVar5,uVar1,uVar3);
  uVar6 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar5;
  param_1[1] = uVar1;
  uVar4 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar3;
  FUN_1001eebe0(uVar6,uVar2,uVar4);
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar5);
  uVar5 = param_1[4];
  param_1[4] = param_2[4];
  _swift_retain();
  _swift_release(uVar5);
  uVar6 = param_2[6];
  uVar5 = param_2[5];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  return param_1;
}



/* Address: 0x1001eef00 | FUN_1001eef00 */

void FUN_1001eef00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001eef1c | FUN_1001eef1c */

undefined8 * FUN_1001eef1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1001eebe0(uVar3,uVar4,uVar2);
  _swift_release(param_1[3]);
  uVar3 = param_1[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  _swift_release(uVar3);
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Address: 0x1001eef88 | FUN_1001eef88 */

int FUN_1001eef88(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1001eefd0 | FUN_1001eefd0 */

void FUN_1001eefd0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x39) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
    }
    if (param_2 != 0) {
      param_1[4] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1001ef020 | FUN_1001ef020 */

undefined1  [16] FUN_1001ef020(void)

{
  return ZEXT816(0x100ebf298);
}



/* Address: 0x1001ef030 | FUN_1001ef030 */

void FUN_1001ef030(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  
  ppuVar7 = &local_70;
  puVar1 = &DAT_100fb58e8;
  FUN_100005c24(&DAT_100fb58e8,&DAT_100c33848);
  puVar2 = &DAT_100fb5928;
  FUN_100005c24(&DAT_100fb5928,&DAT_100c338f8);
  puVar3 = &DAT_100fb58e0;
  FUN_100005c24(&DAT_100fb58e0,&DAT_100c33840);
  puVar4 = &DAT_100fb5908;
  FUN_100005c24(&DAT_100fb5908,&DAT_100c338a8);
  puVar5 = &DAT_100fb5910;
  FUN_100016eac(&DAT_100fb5910,&DAT_100fb58e0,&DAT_100c33840,
                PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8);
  puVar6 = puVar5;
  FUN_1001eebf8();
  local_70 = puVar3;
  puStack_68 = puVar4;
  local_60 = puVar5;
  puStack_58 = puVar6;
  _swift_getOpaqueTypeConformance2
            (&local_70,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100eab5f8
             ,1);
  puVar3 = &DAT_100fb5930;
  FUN_100016eac(&DAT_100fb5930,&DAT_100fb5928,&DAT_100c338f8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  local_70 = puVar1;
  puStack_68 = puVar2;
  local_60 = (undefined *)ppuVar7;
  puStack_58 = puVar3;
  _swift_getOpaqueTypeConformance2
            (&local_70,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_SwiftUI_View>(_:_SwiftUI_Text,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1)__>_some>>_100eab580
             ,1);
  return;
}



/* Address: 0x1001ef154 | FUN_1001ef154 */

undefined1  [16] FUN_1001ef154(void)

{
  return ZEXT816(0x100ebf2c0);
}



/* Address: 0x1001ef164 | FUN_1001ef164 */

undefined1  [16] FUN_1001ef164(void)

{
  return ZEXT816(0x100ebf2e0);
}



/* Address: 0x1001ef174 | FUN_1001ef174 */

void FUN_1001ef174(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca74bc,1);
  return;
}



/* Address: 0x1001ef184 | FUN_1001ef184 */

void FUN_1001ef184(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca7494,1);
  return;
}



/* Address: 0x1001ef194 | FUN_1001ef194 */

void FUN_1001ef194(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_font(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x1001ef1bc | FUN_1001ef1bc */

void FUN_1001ef1bc(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_font(param_2);
  return;
}



/* Address: 0x1001ef1e4 | FUN_1001ef1e4 */

void FUN_1001ef1e4(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_foregroundColor(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x1001ef20c | FUN_1001ef20c */

void FUN_1001ef20c(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_foregroundColor(param_2);
  return;
}



/* Address: 0x1001ef234 | FUN_1001ef234 */

undefined8 FUN_1001ef234(undefined8 param_1,undefined8 param_2)

{
  RoundedRectangle RVar1;
  
  RVar1 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (**(code **)(*(long *)(RVar1.unknown + -8) + 0x10))(param_2,param_1,RVar1.unknown);
  return param_2;
}



/* Address: 0x1001ef278 | FUN_1001ef278 */

undefined8 FUN_1001ef278(undefined8 param_1)

{
  RoundedRectangle RVar1;
  
  RVar1 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (**(code **)(*(long *)(RVar1.unknown + -8) + 8))(param_1,RVar1.unknown);
  return param_1;
}



/* Address: 0x1001ef2b4 | FUN_1001ef2b4 */

void FUN_1001ef2b4(void)

{
  FUN_1001ee478();
  return;
}



/* Address: 0x1001ef2bc | thunk_FUN_1001eff84 */

void thunk_FUN_1001eff84(void)

{
  FUN_1001eff84();
  return;
}



/* Address: 0x1001ef2c0 | FUN_1001ef2c0 */

void FUN_1001ef2c0(void)

{
  long unaff_x20;
  
  FUN_1001ed830(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1001ef2c8 | FUN_1001ef2c8 */

void FUN_1001ef2c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  if (DAT_100fb59d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb59d0;
  FUN_100005c24(&DAT_100fb59d0,&DAT_100c33b18);
  puVar2 = &DAT_100fb59e0;
  FUN_100005c24(&DAT_100fb59e0,&DAT_100c33b20);
  puVar3 = &DAT_100fb59e8;
  FUN_100016eac(&DAT_100fb59e8,&DAT_100fb59e0,&DAT_100c33b20,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puVar4 = puVar3;
  FUN_1001eed50();
  puStack_48 = PTR___type_metadata_for_Swift_String_100eac208;
  ppuVar5 = &local_50;
  local_50 = puVar2;
  local_40 = puVar3;
  puStack_38 = puVar4;
  _swift_getOpaqueTypeConformance2
            (ppuVar5,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help<A_where_A1:_Swift_StringProtocol>(A1)__>_some>>_100eab540
             ,1);
  puVar2 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_60 = ppuVar5;
  puStack_58 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_60);
  DAT_100fb59d8 = puVar2;
  return;
}



/* Address: 0x1001ef3a4 | FUN_1001ef3a4 */

void FUN_1001ef3a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb59f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c339b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c339b4,&DAT_100ebf2e0);
  DAT_100fb59f8 = pTVar1;
  return;
}



/* Address: 0x1001ef3e4 | FUN_1001ef3e4 */

undefined8 FUN_1001ef3e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb59b8;
  FUN_1000037f0(&DAT_100fb59b8,&DAT_100c33b00);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001ef434 | FUN_1001ef434 */

void FUN_1001ef434(void)

{
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  (**(code **)(unaff_x20 + _TtC13PasteShortcut25ShortcutRecorderViewModel::onDetect))(0,0,1);
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_28 = 0x80;
  FUN_1001f1150(&local_50);
  return;
}



/* Address: 0x1001ef49c | FUN_1001ef49c */

void FUN_1001ef49c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb5a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5a10;
  FUN_100005c24(&DAT_100fb5a10,&DAT_100c33b38);
  puVar2 = &DAT_100fb5a20;
  FUN_100016eac(&DAT_100fb5a20,&DAT_100fb5a28,&DAT_100c33b40,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  local_30 = PTR___protocol_witness_table_for_SwiftUI_Image___SwiftUI_View_in_SwiftUI_100eab7a8;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb5a18 = puVar3;
  return;
}



/* Address: 0x1001ef534 | FUN_1001ef534 */

void FUN_1001ef534(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5a38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c339ec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c339ec,&DAT_100ebf2c0);
  DAT_100fb5a38 = pTVar1;
  return;
}



/* Address: 0x1001ef574 | FUN_1001ef574 */

undefined8 FUN_1001ef574(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb59e0;
  FUN_1000037f0(&DAT_100fb59e0,&DAT_100c33b20);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1001ef5bc | FUN_1001ef5bc */

undefined8 FUN_1001ef5bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb59e0;
  FUN_1000037f0(&DAT_100fb59e0,&DAT_100c33b20);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001ef60c | FUN_1001ef60c */

undefined *
FUN_1001ef60c(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  String systemName;
  code *pcVar3;
  Iterator IVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  Iterator IVar8;
  LocalizedStringKey LVar9;
  Text TVar10;
  Image IVar11;
  Text TVar12;
  Text TVar13;
  MainActor *pMVar14;
  undefined8 *puVar15;
  UnownedSerialExecutor UVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  Text TVar19;
  uint uVar20;
  Text TVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  Text TVar27;
  ulong uVar28;
  ulong uVar29;
  Text TVar30;
  Text TVar31;
  undefined *local_b8;
  
  puVar25 = &DAT_100fb5b08;
  FUN_1000037f0(&DAT_100fb5b08,&DAT_100c33b60);
  _swift_initStaticObject();
  puVar18 = puVar25;
  FUN_1001e7b68();
  uVar20 = 0;
  FUN_1000037f0(&DAT_100fb5b10,&DAT_100c33b68);
  puVar17 = (undefined8 *)0x4;
  _swift_arrayDestroy(puVar25 + 0x20);
  IVar4.unknown = param_2;
  _swift_bridgeObjectRetain();
  Swift::String::Iterator::_next(IVar4);
  if (puVar17 == (undefined8 *)0x0) {
    local_b8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    pMVar5 = Swift::MainActor::typeMetadataAccessor();
    puVar26 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
    puVar25 = PTR_typeMetadataAccessor_100eaec10;
    local_b8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pMVar6 = pMVar5;
    do {
      IVar8.unknown = (undefined *)puVar17;
      pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar6);
      puVar17 = &DAT_100fb59a0;
      puVar22 = puVar26;
      FUN_100003a00(&DAT_100fb59a0,puVar25);
      uVar20 = (uint)puVar22;
      UVar7 = Swift::Actor::get_unownedExecutor();
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        puVar17 = (undefined8 *)&DAT_0000002a;
        uVar20 = 1;
        param_4 = (undefined *)0x3c;
        _swift_task_reportUnexpectedExecutor("PasteShortcut/ShortcutRecorderButton.swift");
      }
      if ((*(long *)(puVar18 + 0x10) == 0) ||
         (puVar17 = (undefined8 *)IVar8.unknown, FUN_1001e91d8(), ((ulong)puVar17 & 1) == 0)) {
        _swift_release(pMVar6);
        _swift_bridgeObjectRelease();
      }
      else {
        puVar15 = (undefined8 *)(*(long *)(puVar18 + 0x38) + (long)IVar4.unknown * 0x10);
        uVar1 = *puVar15;
        uVar2 = puVar15[1];
        _swift_bridgeObjectRetain(puVar18);
        _swift_bridgeObjectRetain(uVar2);
        _swift_release(pMVar6);
        _swift_bridgeObjectRelease(puVar18);
        _swift_bridgeObjectRelease(IVar8.unknown);
        IVar8.unknown = local_b8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)IVar8.unknown & 1) == 0) {
          puVar17 = (undefined8 *)(*(long *)(local_b8 + 0x10) + 1);
          IVar8.unknown = (undefined *)0x0;
          uVar20 = 1;
          FUN_1001e93cc();
          param_4 = local_b8;
          local_b8 = IVar8.unknown;
        }
        uVar28 = *(ulong *)(local_b8 + 0x10);
        if (*(ulong *)(local_b8 + 0x18) >> 1 <= uVar28) {
          IVar8.unknown = (undefined *)(ulong)(1 < *(ulong *)(local_b8 + 0x18));
          uVar20 = 1;
          puVar17 = (undefined8 *)(uVar28 + 1);
          FUN_1001e93cc();
          param_4 = local_b8;
          local_b8 = IVar8.unknown;
        }
        *(undefined8 **)(local_b8 + 0x10) = (undefined8 *)(uVar28 + 1);
        *(undefined8 *)(local_b8 + uVar28 * 0x10 + 0x20) = uVar1;
        *(undefined8 *)(local_b8 + uVar28 * 0x10 + 0x28) = uVar2;
      }
      Swift::String::Iterator::_next(IVar8);
      pMVar6 = (MainActor *)IVar8.unknown;
      IVar4.unknown = IVar8.unknown;
    } while (puVar17 != (undefined8 *)0x0);
  }
  _swift_bridgeObjectRelease(puVar18);
  _swift_bridgeObjectRelease(param_2);
  puVar18 = (undefined *)0xe000000000000000;
  LVar9 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  uVar20 = uVar20 & 1;
  TVar10 = SwiftUI::Text::_init(LVar9);
  uVar28 = *(ulong *)(local_b8 + 0x10);
  puVar25 = param_4;
  FUN_100016d5c();
  _swift_bridgeObjectRetain(param_4);
  TVar13 = TVar10;
  if (uVar28 != 0) {
    uVar29 = 0;
    puVar17 = (undefined8 *)(local_b8 + 0x28);
    puVar26 = param_4;
    TVar27 = TVar10;
    TVar30.unknown = (undefined *)(ulong)uVar20;
    TVar31.unknown = puVar18;
    do {
      if (*(ulong *)(local_b8 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001efa98);
        (*pcVar3)();
      }
      pMVar6 = (MainActor *)*puVar17;
      systemName = *(String *)(puVar17 + -1);
      pMVar14 = Swift::MainActor::typeMetadataAccessor();
      pMVar5 = pMVar6;
      _swift_bridgeObjectRetain();
      pMVar5 = Swift::MainActor::get_shared(pMVar14,pMVar5);
      puVar15 = &DAT_100fb59a0;
      puVar22 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
      FUN_100003a00(&DAT_100fb59a0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar16 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar16;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        puVar22 = &DAT_00000001;
        puVar25 = (undefined *)0x3d;
        _swift_task_reportUnexpectedExecutor
                  ("PasteShortcut/ShortcutRecorderButton.swift",0x2a,1,0x3d,UVar16.unknown,puVar15);
      }
      uVar29 = uVar29 + 1;
      _swift_bridgeObjectRetain(pMVar6);
      pMVar14 = pMVar6;
      IVar11 = SwiftUI::Image::init(systemName);
      TVar12 = SwiftUI::Text::init(IVar11);
      TVar19.unknown = TVar31.unknown;
      TVar21.unknown = TVar30.unknown;
      puVar23 = puVar26;
      TVar13 = SwiftUI::Text::__infix(TVar27,TVar31,TVar30);
      puVar24 = puVar23;
      FUN_100016d74(TVar12.unknown,pMVar14,puVar22);
      _swift_release(pMVar5);
      _swift_bridgeObjectRelease(puVar25);
      FUN_100016d74(TVar27.unknown,TVar31.unknown,TVar30.unknown);
      _swift_bridgeObjectRelease(pMVar6);
      _swift_bridgeObjectRelease(puVar26);
      puVar17 = puVar17 + 2;
      puVar25 = puVar24;
      puVar26 = puVar23;
      TVar27 = TVar13;
      TVar30.unknown = TVar21.unknown;
      TVar31.unknown = TVar19.unknown;
    } while (uVar28 != uVar29);
  }
  _swift_bridgeObjectRelease(local_b8);
  FUN_100016d74(TVar10.unknown,puVar18,uVar20);
  _swift_bridgeObjectRelease(param_4);
  return TVar13.unknown;
}



/* Address: 0x1001efa98 | FUN_1001efa98 */

void FUN_1001efa98(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001efac4 | FUN_1001efac4 */

void FUN_1001efac4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  Binding local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  local_50.unknown = *(undefined **)(unaff_x20 + 0x10);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x20);
  local_30 = *(undefined1 *)(unaff_x20 + 0x30);
  puVar1 = &DAT_100fb5900;
  local_68 = param_1;
  uStack_60 = param_2;
  local_58 = param_3;
  FUN_1000037f0(&DAT_100fb5900,&DAT_100c338a0);
  SwiftUI::Binding::set_wrappedValue(&local_50,&local_68,puVar1);
  return;
}



/* Address: 0x1001efb20 | thunk_FUN_1001efb24 */

void thunk_FUN_1001efb24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb5b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5950;
  FUN_100005c24(&DAT_100fb5950,&DAT_100c33aa0);
  puVar2 = &DAT_100fb5b20;
  FUN_1001eff10(&DAT_100fb5b20,&DAT_100fb5948,&DAT_100c33a98,FUN_1001efbdc);
  puVar3 = &DAT_100fb5b50;
  FUN_100016eac(&DAT_100fb5b50,&DAT_100fb5b58,&DAT_100c33b78,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100eaae90
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb5b18 = puVar4;
  return;
}



/* Address: 0x1001efb24 | FUN_1001efb24 */

void FUN_1001efb24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb5b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5950;
  FUN_100005c24(&DAT_100fb5950,&DAT_100c33aa0);
  puVar2 = &DAT_100fb5b20;
  FUN_1001eff10(&DAT_100fb5b20,&DAT_100fb5948,&DAT_100c33a98,FUN_1001efbdc);
  puVar3 = &DAT_100fb5b50;
  FUN_100016eac(&DAT_100fb5b50,&DAT_100fb5b58,&DAT_100c33b78,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100eaae90
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb5b18 = puVar4;
  return;
}



/* Address: 0x1001efbdc | FUN_1001efbdc */

void FUN_1001efbdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb5b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5940;
  FUN_100005c24(&DAT_100fb5940,&DAT_100c33a90);
  puVar2 = puVar1;
  FUN_1001efc74();
  puVar3 = &DAT_100fb5b40;
  FUN_100016eac(&DAT_100fb5b40,&DAT_100fb5b48,&DAT_100c33b70,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb5b28 = puVar4;
  return;
}



/* Address: 0x1001efbec | FUN_1001efbec */

void FUN_1001efbec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar1 = &DAT_100fb5940;
  FUN_100005c24(&DAT_100fb5940,&DAT_100c33a90);
  puVar2 = puVar1;
  FUN_1001efc74();
  puVar3 = &DAT_100fb5b40;
  FUN_100016eac(&DAT_100fb5b40,&DAT_100fb5b48,&DAT_100c33b70,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb5b28 = puVar4;
  return;
}



/* Address: 0x1001efc74 | FUN_1001efc74 */

void FUN_1001efc74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb5b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5938;
  FUN_100005c24(&DAT_100fb5938,&DAT_100c33a58);
  puVar2 = &DAT_100fb5b38;
  FUN_100003a00(&DAT_100fb5b38,PTR_typeMetadataAccessor_100eaaf98,
                PTR_SwiftUI__SwiftUI__ButtonStyleConfiguration__Label_>SwiftUI__View_100eaaf90);
  puVar3 = &DAT_100fb5a20;
  FUN_100016eac(&DAT_100fb5a20,&DAT_100fb5a28,&DAT_100c33b40,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb5b30 = puVar4;
  return;
}



/* Address: 0x1001efd24 | thunk_FUN_1001efd28 */

void thunk_FUN_1001efd28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb5b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5978;
  FUN_100005c24(&DAT_100fb5978,&DAT_100c33ac8);
  puVar2 = puVar1;
  FUN_1001efdc0();
  puVar3 = &DAT_100fb5b98;
  FUN_100016eac(&DAT_100fb5b98,&DAT_100fb5998,&DAT_100c33ae8,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100eaaa88);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb5b60 = puVar4;
  return;
}



/* Address: 0x1001efd28 | FUN_1001efd28 */

void FUN_1001efd28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb5b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5978;
  FUN_100005c24(&DAT_100fb5978,&DAT_100c33ac8);
  puVar2 = puVar1;
  FUN_1001efdc0();
  puVar3 = &DAT_100fb5b98;
  FUN_100016eac(&DAT_100fb5b98,&DAT_100fb5998,&DAT_100c33ae8,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100eaaa88);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb5b60 = puVar4;
  return;
}



/* Address: 0x1001efdc0 | FUN_1001efdc0 */

void FUN_1001efdc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb5b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5968;
  FUN_100005c24(&DAT_100fb5968,&DAT_100c33ab8);
  puVar2 = puVar1;
  FUN_1001efe58();
  puVar3 = &DAT_100fb5b90;
  FUN_100016eac(&DAT_100fb5b90,&DAT_100fb5970,&DAT_100c33ac0,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb5b68 = puVar4;
  return;
}



/* Address: 0x1001efe58 | FUN_1001efe58 */

void FUN_1001efe58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb5b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5960;
  FUN_100005c24(&DAT_100fb5960,&DAT_100c33ab0);
  puVar2 = &DAT_100fb5b78;
  FUN_1001eff10(&DAT_100fb5b78,&DAT_100fb5958,&DAT_100c33aa8,FUN_1001efc74);
  puVar3 = &DAT_100fb5b80;
  FUN_100016eac(&DAT_100fb5b80,&DAT_100fb5b88,&DAT_100c33b80,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eaafe0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb5b70 = puVar4;
  return;
}



/* Address: 0x1001eff10 | FUN_1001eff10 */

void FUN_1001eff10(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    FUN_100005c24(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = 
    PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0
    ;
    puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
    local_40 = uVar1;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
               param_2,&local_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Address: 0x1001eff80 | thunk_FUN_1001efa98 */

void thunk_FUN_1001efa98(void)

{
  FUN_1001efa98();
  return;
}



/* Address: 0x1001eff84 | FUN_1001eff84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001eff84(void)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  void *aBlock;
  ID IVar8;
  Published *unaff_x20;
  ulong uVar9;
  undefined *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_78 [24];
  long local_60;
  undefined1 auStack_58 [24];
  
  ppuVar7 = &local_b0;
  puVar5 = &DAT_100c33d88;
  puVar3 = puVar5;
  _swift_getKeyPath(&DAT_100c33d88);
  puVar6 = &DAT_100c33db0;
  puVar4 = puVar6;
  _swift_getKeyPath(&DAT_100c33db0);
  Combine::Published::_get_subscript(&local_b0);
  _swift_release(puVar3);
  _swift_release(puVar4);
  bVar1 = (byte)local_88 & 0xc0;
  _swift_getKeyPath(&DAT_100c33d88);
  _swift_getKeyPath(&DAT_100c33db0);
  if (bVar1 == 0x40) {
    Combine::Published::_get_subscript(&local_b0);
    _swift_release(puVar5);
    _swift_release(puVar6);
    if (((byte)local_88 >> 6 == 0) ||
       (((byte)local_88 >> 6 == 1 && (((ulong)local_a0 & 0xff) != 1)))) {
      local_88 = (undefined *)((ulong)local_88._1_7_ << 8);
    }
    else {
      uStack_a8 = 0;
      local_b0 = (undefined *)0x0;
      local_88 = (undefined *)CONCAT71(local_88._1_7_,0x80);
    }
    local_90 = (code *)0x0;
    local_98 = (undefined *)0x0;
    local_a0 = (code *)0x0;
    FUN_1001f1150(&local_b0);
  }
  else {
    Combine::Published::_get_subscript(&local_b0);
    _swift_release(puVar5);
    _swift_release(puVar6);
    if ((byte)local_88 >> 6 == 0) {
      uVar9 = 0;
    }
    else if ((byte)local_88 >> 6 == 1) {
      uVar9 = (ulong)local_a0 & 0xff;
    }
    else {
      uVar9 = 1;
      local_b0 = (undefined *)0x0;
      uStack_a8 = 0;
    }
    _swift_getKeyPath(&DAT_100c33d88);
    _swift_getKeyPath(&DAT_100c33db0);
    local_98 = (undefined *)0x0;
    local_90 = (code *)0x0;
    local_88 = (undefined *)CONCAT71(local_88._1_7_,0x41);
    local_a0 = (code *)uVar9;
    _swift_retain();
    Combine::Published::_set_subscript(unaff_x20,&local_b0);
    lVar2 = _TtC13PasteShortcut25ShortcutRecorderViewModel::eventMonitor;
    _swift_beginAccess((long)&unaff_x20->unknown +
                       _TtC13PasteShortcut25ShortcutRecorderViewModel::eventMonitor,auStack_58,0,0);
    FUN_100011090((long)&unaff_x20->unknown + lVar2,auStack_78,&DAT_100fb5cc0,&DAT_100c33d28);
    if (local_60 == 0) {
      FUN_100005808(auStack_78,&DAT_100fb5cc0,&DAT_100c33d28);
    }
    else {
      FUN_100011080(auStack_78,&local_b0);
      FUN_100004640(&local_b0,local_98);
      Swift::__bridgeAnythingToObjectiveC();
      NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,ppuVar7);
      _swift_unknownObjectRelease(ppuVar7);
      FUN_100004594(&local_b0);
    }
    puVar5 = &DAT_100ebf4a8;
    _swift_allocObject(&DAT_100ebf4a8,0x18,7);
    _swift_weakInit(puVar5 + 0x10,unaff_x20);
    local_90 = FUN_1001f1dfc;
    local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
    uStack_a8 = 0x42000000;
    local_a0 = FUN_100059c14;
    local_98 = &DAT_100ebf4c0;
    local_88 = puVar5;
    aBlock = __Block_copy(&local_b0);
    _swift_release(local_88);
    IVar8 = NSEvent::addLocalMonitorForEventsMatchingMask_handler_
                      ((ID)&_OBJC_CLASS___NSEvent,0x1400,aBlock);
    __Block_release(aBlock);
    if (IVar8 == 0) {
      uStack_a8 = 0;
      local_b0 = (undefined *)0x0;
      local_98 = (undefined *)0x0;
      local_a0 = (code *)0x0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar8);
    }
    _swift_beginAccess((long)&unaff_x20->unknown + lVar2,auStack_78,0x21,0);
    FUN_1001f1d88(&local_b0,(long)&unaff_x20->unknown + lVar2);
    _swift_endAccess(auStack_78);
  }
  return;
}



/* Address: 0x1001f02d8 | FUN_1001f02d8 */

void FUN_1001f02d8(String *param_1)

{
  ulong uVar1;
  LocalizedStringResource LVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  void *in_x3;
  undefined1 uVar8;
  long extraout_x8;
  String SVar9;
  String SVar10;
  String SVar11;
  char *local_70;
  void *pvStack_68;
  char *local_58;
  void *pvStack_50;
  byte local_48;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &DAT_100c33d88;
  _swift_getKeyPath(&DAT_100c33d88);
  pcVar6 = &DAT_100c33db0;
  _swift_getKeyPath();
  pcVar5 = pcVar6;
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar3);
  _swift_release(pcVar6);
  pvVar7 = pvStack_68;
  pcVar6 = local_70;
  if (local_48 >> 6 == 0) {
LAB_1001f03f0:
    pcVar5 = (char *)0x0;
    FUN_1001e9774();
    SVar10.bridgeObject = pvVar7;
    SVar10.str = pcVar5;
    FUN_1001e7e50();
    uVar8 = 1;
  }
  else {
    if (local_48 >> 6 == 1) {
      if ((local_48 & 0x3f) != 1) {
        pcVar4 = (char *)0x0;
        pvVar7 = pvStack_50;
        FUN_1001e9774();
        pcVar6 = local_58;
        local_70 = pcVar4;
        pvStack_68 = pvVar7;
        FUN_1001e7e50();
        SVar9.bridgeObject = pvVar7;
        SVar9.str = pcVar6;
        SVar11.bridgeObject = in_x3;
        SVar11.str = pcVar5;
        Swift::String::append(SVar9,SVar11);
        _swift_bridgeObjectRelease(pvVar7);
        pcVar6 = local_70;
        _swift_bridgeObjectRelease(pvStack_68);
        uVar1 = (ulong)pcVar6 & 0xffffffffffff;
        if (((ulong)pvStack_68 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pvStack_68 >> 0x38 & 0xf;
        }
        pvVar7 = pvStack_50;
        pcVar6 = local_58;
        if (uVar1 != 0) goto LAB_1001f03f0;
      }
      FUN_1001e49d4(LVar2.unknown);
    }
    else {
      FUN_1001e4854(LVar2.unknown);
    }
    SVar10 = (extension_Foundation)::Swift::String::init(LVar2);
    pcVar6 = (char *)0x0;
    pvVar7 = (void *)0x0;
    uVar8 = 0;
  }
  *param_1 = SVar10;
  param_1[1].str = pcVar6;
  param_1[1].bridgeObject = pvVar7;
  *(undefined1 *)&param_1[2].str = uVar8;
  return;
}



/* Address: 0x1001f0460 | FUN_1001f0460 */

void FUN_1001f0460(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  puVar1 = &DAT_100c33d88;
  _swift_getKeyPath(&DAT_100c33d88);
  puVar2 = &DAT_100c33db0;
  _swift_getKeyPath(&DAT_100c33db0);
  Combine::Published::_get_subscript(&local_60);
  _swift_release(puVar1);
  _swift_release(puVar2);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[4] = local_40;
  *(undefined1 *)(param_1 + 5) = local_38;
  return;
}



/* Address: 0x1001f04e8 | FUN_1001f04e8 */

undefined8 FUN_1001f04e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c33d40;
  _swift_getKeyPath(&DAT_100c33d40);
  puVar2 = &DAT_100c33d68;
  _swift_getKeyPath(&DAT_100c33d68);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x1001f0558 | FUN_1001f0558 */

void FUN_1001f0558(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint64 _Var2;
  __uint64 _Var3;
  byte bVar4;
  __uint64 _Var5;
  __uint64 _Var6;
  __uint64 _Var7;
  __uint64 *unaff_x20;
  
  _Var1 = *unaff_x20;
  _Var7 = unaff_x20[1];
  _Var5 = unaff_x20[5];
  bVar4 = (byte)_Var5 >> 6;
  if (bVar4 == 0) {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine(_Var1,param_2);
  }
  else if (bVar4 == 1) {
    _Var2 = unaff_x20[3];
    _Var3 = unaff_x20[4];
    _Var6 = unaff_x20[2];
    Swift::Hasher::_combine(2,param_2);
    if ((char)_Var6 == '\x01') {
      Swift::Hasher::_combine(0,param_2);
    }
    else {
      Swift::Hasher::_combine(1,param_2);
      Swift::Hasher::_combine(_Var1,param_2);
      Swift::Hasher::_combine(_Var7,param_2);
    }
    if (((byte)_Var5 & 0x3f) == 1) {
      Swift::Hasher::_combine(0,param_2);
      return;
    }
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine(_Var2,param_2);
    _Var7 = _Var3;
  }
  else {
    _Var7 = 0;
  }
  Swift::Hasher::_combine(_Var7,param_2);
  return;
}



/* Address: 0x1001f0638 | FUN_1001f0638 */

void FUN_1001f0638(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1001f0558();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1001f0674 | thunk_FUN_1001f0558 */

void thunk_FUN_1001f0558(void)

{
  FUN_1001f0558();
  return;
}



/* Address: 0x1001f0678 | FUN_1001f0678 */

void FUN_1001f0678(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1001f0558();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1001f06b0 | FUN_1001f06b0 */

uint FUN_1001f06b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 local_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  local_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  local_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_1001f1ab4(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x1001f06f8 | FUN_1001f06f8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001f079c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001f06f8(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  puVar3 = &DAT_100fb5cd0;
  FUN_1000037f0(&DAT_100fb5cd0,&DAT_100c33d38);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC13PasteShortcut25ShortcutRecorderViewModel::_validationError;
  local_90 = 0;
  puVar4 = &DAT_100fb5c08;
  FUN_1000037f0(&DAT_100fb5c08,&DAT_100c33bb0);
  Combine::Published::init((long)&local_90 - extraout_x8,puVar4,puVar4);
  (**(code **)(lVar5 + 0x20))(unaff_x20 + lVar2,(long)&local_90 - extraout_x8,puVar3);
  lVar2 = _TtC13PasteShortcut25ShortcutRecorderViewModel::shortcutValidator;
  puVar3 = &DAT_100c33dd8;
  _swift_getKeyPath();
  puVar4 = &DAT_100fb5ce8;
  FUN_1000037f0(&DAT_100fb5ce8,&DAT_100c33e00);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PasteShortcut25ShortcutRecorderViewModel::eventMonitor);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  if (param_3 == '\x01') {
    uStack_88 = 0;
    local_90 = 0;
    local_68 = 0x80;
  }
  else {
    local_68 = 0;
    local_90 = param_1;
    uStack_88 = param_2;
  }
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  Combine::Published::init
            (unaff_x20 + _TtC13PasteShortcut25ShortcutRecorderViewModel::_state,puVar3,
             &DAT_100ebf410);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PasteShortcut25ShortcutRecorderViewModel::onDetect);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  return;
}



/* Address: 0x1001f0890 | FUN_1001f0890 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001f0890(void)

{
  long lVar1;
  long lVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 auStack_98 [24];
  long local_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 local_48;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1001f1bcc();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteShortcut/ShortcutRecorderViewModel.swift",0x2d,1,0x39,UVar5.unknown,pMVar3);
  }
  lVar2 = _TtC13PasteShortcut25ShortcutRecorderViewModel::eventMonitor;
  _swift_beginAccess(unaff_x20 + _TtC13PasteShortcut25ShortcutRecorderViewModel::eventMonitor,
                     auStack_78,0,0);
  FUN_100011090(unaff_x20 + lVar2,auStack_98,&DAT_100fb5cc0,&DAT_100c33d28);
  if (local_80 == 0) {
    FUN_100005808(auStack_98,&DAT_100fb5cc0,&DAT_100c33d28);
  }
  else {
    FUN_100011080(auStack_98,auStack_60);
    puVar7 = auStack_60;
    FUN_100004640(puVar7,local_48);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,puVar7);
    _swift_unknownObjectRelease(puVar7);
    FUN_100004594(auStack_60);
  }
  _swift_release(pMVar4);
  lVar1 = _TtC13PasteShortcut25ShortcutRecorderViewModel::_state;
  puVar8 = &DAT_100fb5cc8;
  FUN_1000037f0(&DAT_100fb5cc8,&DAT_100c33d30);
  (**(code **)(*(long *)(puVar8 + -8) + 8))(unaff_x20 + lVar1,puVar8);
  lVar1 = _TtC13PasteShortcut25ShortcutRecorderViewModel::_validationError;
  puVar8 = &DAT_100fb5cd0;
  FUN_1000037f0(&DAT_100fb5cd0,&DAT_100c33d38);
  (**(code **)(*(long *)(puVar8 + -8) + 8))(unaff_x20 + lVar1,puVar8);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC13PasteShortcut25ShortcutRecorderViewModel::onDetect + 8));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC13PasteShortcut25ShortcutRecorderViewModel::shortcutValidator));
  FUN_100005808(unaff_x20 + lVar2,&DAT_100fb5cc0,&DAT_100c33d28);
  return;
}



/* Address: 0x1001f0a74 | FUN_1001f0a74 */

void FUN_1001f0a74(long *param_1)

{
  FUN_1001f0890();
  _swift_deallocClassInstance
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}



/* Address: 0x1001f0aa4 | FUN_1001f0aa4 */

void FUN_1001f0aa4(void)

{
  byte bVar1;
  __uint8 _Var2;
  int iVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  MainActor *pMVar8;
  TaskPriority TVar9;
  UnownedSerialExecutor UVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 unaff_x20;
  undefined1 *puVar13;
  undefined1 *puVar14;
  MainActor *pMVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined1 *local_90;
  MainActor *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  MainActor *pMStack_68;
  
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  pMVar15 = pMVar5;
  FUN_1001f1bcc();
  Swift::Actor::get_unownedExecutor();
  _swift_release(pMVar5);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,4,0,0x12,4,0);
  if ((bVar1 & 1) == 0) {
    iVar3 = _pthread_main_np();
    if (iVar3 == 1) {
      FUN_1001f0890();
      _swift_deallocClassInstance();
      return;
    }
    pMVar5 = (MainActor *)&DAT_100ebf430;
    _swift_allocObject(&DAT_100ebf430,0x18,7);
    *(undefined8 *)(pMVar5 + 0x10) = unaff_x20;
    puVar6 = &DAT_100fb5cb8;
    FUN_1000037f0(&DAT_100fb5cb8,&DAT_100c33d00);
    lVar17 = *(long *)(*(long *)(puVar6 + -8) + 0x40);
    local_90 = auStack_a0;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar16 = lVar17 + 0xfU & 0xfffffffffffffff0;
    puVar14 = auStack_a0 + -uVar16;
    TVar7 = Swift::TaskPriority::typeMetadataAccessor();
    lVar17 = *(long *)(TVar7.unknown + -8);
    (**(code **)(lVar17 + 0x38))(puVar14,1,1,TVar7.unknown);
    pMVar8 = pMVar5;
    _swift_retain();
    pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar8);
    puVar6 = &DAT_100ebf458;
    _swift_allocObject(&DAT_100ebf458,0x30,7);
    *(MainActor **)(puVar6 + 0x10) = pMVar4;
    *(MainActor **)(puVar6 + 0x18) = pMVar15;
    *(code **)(puVar6 + 0x20) = FUN_1001f0a74;
    *(MainActor **)(puVar6 + 0x28) = pMVar5;
    local_98 = puVar14;
    local_88 = pMVar5;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    puVar13 = puVar14 + -uVar16;
    FUN_100011090(puVar14,puVar13,&DAT_100fb5cb8,&DAT_100c33d00);
    TVar9.unknown = puVar13;
    (**(code **)(lVar17 + 0x30))(puVar13,1,TVar7.unknown);
    if ((int)TVar9.unknown == 1) {
      FUN_100005808(puVar13,&DAT_100fb5cb8,&DAT_100c33d00);
      uVar16 = 0x1000;
    }
    else {
      _Var2 = Swift::TaskPriority::get_rawValue(TVar9);
      (**(code **)(lVar17 + 8))(puVar13,TVar7.unknown);
      uVar16 = (ulong)_Var2 | 0x1000;
    }
    if (pMVar4 == (MainActor *)0x0) {
      UVar10.unknown = (undefined *)0x0;
      pMVar15 = (MainActor *)0x0;
    }
    else {
      _swift_getObjectType(pMVar4);
      _swift_unknownObjectRetain(pMVar4);
      UVar10 = Swift::Actor::get_unownedExecutor();
      _swift_unknownObjectRelease(pMVar4);
    }
    puVar11 = &DAT_100ebf480;
    _swift_allocObject(&DAT_100ebf480,0x20,7);
    *(undefined **)(puVar11 + 0x10) = &DAT_100c33d10;
    *(undefined **)(puVar11 + 0x18) = puVar6;
    if (pMVar15 == (MainActor *)0x0 && UVar10.unknown == (undefined *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar12 = &local_80;
      local_70 = UVar10.unknown;
      pMStack_68 = pMVar15;
    }
    _swift_task_create(uVar16,puVar12,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c33d20,
                       puVar11);
    _swift_release();
    FUN_100005808(puVar14,&DAT_100fb5cb8,&DAT_100c33d00);
    _swift_release(local_88);
  }
  else {
    _swift_task_deinitOnExecutor();
  }
  return;
}



/* Address: 0x1001f0de8 | FUN_1001f0de8 */

void FUN_1001f0de8(void)

{
  FUN_1001f0df0(0);
  return;
}



/* Address: 0x1001f0df0 | FUN_1001f0df0 */

void FUN_1001f0df0(undefined8 param_1)

{
  if (DAT_100fb5be8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca74e4);
  return;
}



/* Address: 0x1001f0e28 | FUN_1001f0e28 */

void FUN_1001f0e28(long param_1,ulong param_2)

{
  long lVar1;
  long local_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1001f0ed4();
  if (param_2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_1001f0f24();
    if (param_2 < 0x40) {
      local_40 = *(long *)(lVar1 + -8) + 0x40;
      puStack_38 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
      local_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
      puStack_28 = &DAT_100c33bb8;
      _swift_updateClassMetadata2(param_1,0x100,5,&local_48,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x1001f0ed4 | FUN_1001f0ed4 */

void FUN_1001f0ed4(void)

{
  Published PVar1;
  undefined *puVar2;
  
  if (DAT_100fb5bf8 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100ebf410;
  PVar1 = Combine::Published::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100fb5bf8 = PVar1.unknown;
  return;
}


