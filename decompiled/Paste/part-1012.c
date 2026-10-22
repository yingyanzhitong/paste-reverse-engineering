/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100af1fec | thunk_FUN_100af21d0 */

void thunk_FUN_100af21d0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  char acStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar4 = &DAT_100c95cb8;
  _swift_getKeyPath(&DAT_100c95cb8);
  puVar5 = &DAT_100c95ce0;
  _swift_getKeyPath(&DAT_100c95ce0);
  Combine::Published::_get_subscript(acStack_88);
  _swift_release(puVar4);
  _swift_release(puVar5);
  FUN_1000da768(acStack_88);
  FUN_100004640(acStack_88,uStack_70);
  puVar6 = (undefined8 *)&DAT_100ff8dd8;
  FUN_1000037f0(&DAT_100ff8dd8,&DAT_100c95390);
  _swift_initStackObject();
  puVar6[3] = 2;
  puVar6[2] = 1;
  puVar7 = puVar6;
  FUN_1001949b4();
  uVar3 = puVar7[1];
  puVar6[4] = *puVar7;
  pcVar2 = "copy_to_clipboard";
  if (acStack_88[0] == '\0') {
    pcVar2 = "paste-to-other-apps";
  }
  uVar1 = 0xd000000000000024;
  if (acStack_88[0] == '\0') {
    uVar1 = 0xd000000000000011;
  }
  puVar6[9] = PTR___type_metadata_for_Swift_String_100eac208;
  puVar6[10] = &PTR_PTR_100ebcc60;
  puVar6[5] = uVar3;
  puVar6[6] = uVar1;
  puVar6[7] = (ulong)pcVar2 | 0x8000000000000000;
  _swift_bridgeObjectRetain();
  puVar7 = puVar6;
  FUN_100aec864(puVar6);
  _swift_setDeallocating(puVar6);
  FUN_100af01b8(puVar6 + 4);
  (**(code **)(lStack_68 + 0x18))(0xd00000000000001a,0x8000000100d975b0,puVar7,uStack_70,lStack_68);
  _swift_bridgeObjectRelease(puVar7);
  FUN_100004594(acStack_88);
  (**(code **)(unaff_x20 + _TtC22PasteSystemPermissions25PasteToOtherAppsViewModel::completion))
            (acStack_88[0]);
  return;
}



/* Address: 0x100af1ff0 | thunk_FUN_100af1ff4 */

void thunk_FUN_100af1ff4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100ff9198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff90e8;
  FUN_100005c24(&DAT_100ff90e8,&DAT_100c95af0);
  puVar2 = &DAT_100ff91a0;
  FUN_100016eac(&DAT_100ff91a0,&DAT_100ff91a8,&DAT_100c95c08,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100ff9198 = puVar3;
  return;
}



/* Address: 0x100af1ff4 | FUN_100af1ff4 */

void FUN_100af1ff4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100ff9198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff90e8;
  FUN_100005c24(&DAT_100ff90e8,&DAT_100c95af0);
  puVar2 = &DAT_100ff91a0;
  FUN_100016eac(&DAT_100ff91a0,&DAT_100ff91a8,&DAT_100c95c08,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100ff9198 = puVar3;
  return;
}



/* Address: 0x100af208c | FUN_100af208c */

void FUN_100af208c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_1000da768(auStack_78);
  FUN_100004640(auStack_78,local_60);
  puVar2 = (undefined8 *)&DAT_100ff8dd8;
  FUN_1000037f0(&DAT_100ff8dd8,&DAT_100c95390);
  _swift_initStackObject();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  FUN_1001949b4();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[9] = PTR___type_metadata_for_Swift_String_100eac208;
  puVar2[10] = &PTR_PTR_100ebcc60;
  puVar2[5] = uVar1;
  puVar2[6] = 0xd00000000000001b;
  puVar2[7] = 0x8000000100dbbb30;
  _swift_bridgeObjectRetain();
  puVar3 = puVar2;
  FUN_100aec864(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_100af01b8(puVar2 + 4);
  (**(code **)(lStack_58 + 0x18))(0xd00000000000001a,0x8000000100d975b0,puVar3,local_60,lStack_58);
  _swift_bridgeObjectRelease(puVar3);
  FUN_100004594(auStack_78);
  (**(code **)(unaff_x20 + _TtC22PasteSystemPermissions25PasteToOtherAppsViewModel::completion))(2);
  return;
}



/* Address: 0x100af21d0 | FUN_100af21d0 */

void FUN_100af21d0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  char local_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  puVar4 = &DAT_100c95cb8;
  _swift_getKeyPath(&DAT_100c95cb8);
  puVar5 = &DAT_100c95ce0;
  _swift_getKeyPath(&DAT_100c95ce0);
  Combine::Published::_get_subscript(local_88);
  _swift_release(puVar4);
  _swift_release(puVar5);
  FUN_1000da768(local_88);
  FUN_100004640(local_88,local_70);
  puVar6 = (undefined8 *)&DAT_100ff8dd8;
  FUN_1000037f0(&DAT_100ff8dd8,&DAT_100c95390);
  _swift_initStackObject();
  puVar6[3] = 2;
  puVar6[2] = 1;
  puVar7 = puVar6;
  FUN_1001949b4();
  uVar3 = puVar7[1];
  puVar6[4] = *puVar7;
  pcVar2 = "copy_to_clipboard";
  if (local_88[0] == '\0') {
    pcVar2 = "paste-to-other-apps";
  }
  uVar1 = 0xd000000000000024;
  if (local_88[0] == '\0') {
    uVar1 = 0xd000000000000011;
  }
  puVar6[9] = PTR___type_metadata_for_Swift_String_100eac208;
  puVar6[10] = &PTR_PTR_100ebcc60;
  puVar6[5] = uVar3;
  puVar6[6] = uVar1;
  puVar6[7] = (ulong)pcVar2 | 0x8000000000000000;
  _swift_bridgeObjectRetain();
  puVar7 = puVar6;
  FUN_100aec864(puVar6);
  _swift_setDeallocating(puVar6);
  FUN_100af01b8(puVar6 + 4);
  (**(code **)(lStack_68 + 0x18))(0xd00000000000001a,0x8000000100d975b0,puVar7,local_70,lStack_68);
  _swift_bridgeObjectRelease(puVar7);
  FUN_100004594(local_88);
  (**(code **)(unaff_x20 + _TtC22PasteSystemPermissions25PasteToOtherAppsViewModel::completion))
            (local_88[0]);
  return;
}



/* Address: 0x100af2378 | FUN_100af2378 */

undefined1 FUN_100af2378(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_31;
  
  puVar1 = &DAT_100c95cb8;
  _swift_getKeyPath(&DAT_100c95cb8);
  puVar2 = &DAT_100c95ce0;
  _swift_getKeyPath(&DAT_100c95ce0);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_31;
}



/* Address: 0x100af23e8 | FUN_100af23e8 */

void FUN_100af23e8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = _TtC22PasteSystemPermissions25PasteToOtherAppsViewModel::_doNotAskAgain;
  puVar2 = &DAT_100ff8e38;
  FUN_1000037f0(&DAT_100ff8e38,&DAT_100c95910);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC22PasteSystemPermissions25PasteToOtherAppsViewModel::completion +
                  8));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100af245c | FUN_100af245c */

undefined1  [16] FUN_100af245c(byte param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0xd000000000000024;
  pcVar2 = "copy_to_clipboard";
  if ((param_1 & 1) == 0) {
    uVar1 = 0xd000000000000011;
    pcVar2 = "paste-to-other-apps";
  }
  pcVar3 = "d_and_dont_ask_again";
  uVar4 = 0xd00000000000001b;
  if (param_1 != 2) {
    pcVar3 = pcVar2;
    uVar4 = uVar1;
  }
  auVar5._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Address: 0x100af24b8 | FUN_100af24b8 */

void FUN_100af24b8(void)

{
  undefined1 *unaff_x20;
  
  FUN_100af245c(*unaff_x20);
  return;
}



/* Address: 0x100af24c0 | FUN_100af24c0 */

uint FUN_100af24c0(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    param_2 = param_2 + 2;
    uVar2 = 2;
    if (0xfffeff < param_2) {
      uVar2 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar2 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar2;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar2 = (uint)param_1[1], param_1[1] != 0)) goto LAB_100af2528;
    }
    else if (uVar1 == 2) {
      uVar2 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_100af2528:
        return ((uint)*param_1 | uVar2 << 8) - 2;
      }
    }
    else {
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 != 0) goto LAB_100af2528;
    }
  }
  uVar2 = 0xffffffff;
  if (1 < *param_1) {
    uVar2 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x100af256c | FUN_100af256c */

undefined1  [16] FUN_100af256c(void)

{
  return ZEXT816(0x100f32868);
}



/* Address: 0x100af257c | FUN_100af257c */

void FUN_100af257c(void)

{
  FUN_100af2584(0);
  return;
}



/* Address: 0x100af2584 | FUN_100af2584 */

void FUN_100af2584(undefined8 param_1)

{
  if (DAT_100ff91e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccc150);
  return;
}



/* Address: 0x100af25bc | FUN_100af25bc */

void FUN_100af25bc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  lVar1 = 0x13f;
  FUN_100aec124();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,3,&local_38,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100af2644 | thunk_FUN_100af1dbc */

void thunk_FUN_100af1dbc(void)

{
  FUN_100af1dbc();
  return;
}



/* Address: 0x100af2648 | thunk_FUN_100af1e24 */

void thunk_FUN_100af1e24(void)

{
  FUN_100af1e24();
  return;
}



/* Address: 0x100af264c | FUN_100af264c */

undefined8 FUN_100af264c(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = 0;
  FUN_100af3750(0);
  FUN_1000d80e0(&local_18,"PasteHandoff/DI+PasteHandoff.swift",0x22,2,5,0x13,FUN_100af26a0,0,uVar1);
  return local_18;
}



/* Address: 0x100af26a0 | FUN_100af26a0 */

void FUN_100af26a0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100af3750();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x31) = 0;
  *(undefined8 *)(lVar1 + 0x29) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *param_1 = lVar1;
  return;
}



/* Address: 0x100af26ec | FUN_100af26ec */

void FUN_100af26ec(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x19) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x100af26fc | FUN_100af26fc */

void FUN_100af26fc(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x31) = 0;
  *(undefined8 *)(unaff_x20 + 0x29) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  return;
}



/* Address: 0x100af2734 | FUN_100af2734 */

undefined1  [16] FUN_100af2734(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x40,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Address: 0x100af2780 | FUN_100af2780 */

void FUN_100af2780(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x40,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  FUN_100004550(uVar1,uVar2);
  return;
}



/* Address: 0x100af27d0 | FUN_100af27d0 */

undefined1  [16] FUN_100af27d0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Address: 0x100af281c | FUN_100af281c */

void FUN_100af281c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  FUN_100004550(uVar1,uVar2);
  return;
}



/* Address: 0x100af286c | FUN_100af286c */

undefined1  [16] FUN_100af286c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x60,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Address: 0x100af28b8 | FUN_100af28b8 */

void FUN_100af28b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x60,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  FUN_100004550(uVar1,uVar2);
  return;
}



/* Address: 0x100af2908 | FUN_100af2908 */

undefined1  [16] FUN_100af2908(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x60,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x100af2938 | FUN_100af2938 */

void FUN_100af2938(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x31) = 0;
  *(undefined8 *)(unaff_x20 + 0x29) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  return;
}



/* Address: 0x100af2958 | FUN_100af2958 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100af2958(void)

{
  ID self;
  undefined *puVar1;
  NSString *pNVar2;
  NSDictionary *pNVar3;
  long lVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 *puVar7;
  ID self_00;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  byte local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (lVar4 == 0) {
    puVar7 = auStack_68;
    _swift_beginAccess(unaff_x20 + 0x40,puVar7,0,0);
    pcVar5 = *(code **)(unaff_x20 + 0x40);
    if (pcVar5 != (code *)0x0) {
      uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar6 = uVar9;
      _swift_retain();
      (*pcVar5)();
      FUN_100004550(pcVar5,uVar9);
      self = *(ID *)(unaff_x20 + 0x70);
      goto joined_r0x000100af2a40;
    }
  }
  else {
    local_a8 = *(undefined1 *)(unaff_x20 + 0x38);
    local_b0 = *(undefined8 *)(unaff_x20 + 0x30);
    local_d0 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x28);
    local_c0 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_7f = 0;
    local_87 = 0;
    uStack_80 = 0;
    lStack_c8 = lVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(uVar6);
    FUN_100005808(&local_d0,&DAT_100ff9280,&DAT_100c95d10);
  }
  uVar6 = 0;
  puVar7 = (undefined1 *)0x0;
  self = *(ID *)(unaff_x20 + 0x70);
joined_r0x000100af2a40:
  if (self == 0) {
    puVar1 = &_OBJC_CLASS___NSUserActivity;
    _objc_allocWithZone();
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    self = objc_stub::FUN_100c03a60((ID)puVar1,pNVar2);
  }
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setTitle_(self,pNVar2);
  objc_stub::FUN_100c0b7e0(self,1);
  *(ID *)(unaff_x20 + 0x70) = self;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  local_a8 = *(byte *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lStack_c8 = *(long *)(unaff_x20 + 0x18);
  local_d0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x28);
  local_c0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_7f = 0;
  local_87 = 0;
  uStack_80 = 0;
  local_b0 = uVar8;
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    if (puVar7 != (undefined1 *)0x0) {
      *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
      *(undefined1 **)(unaff_x20 + 0x18) = puVar7;
      puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
      *(undefined8 *)(unaff_x20 + 0x28) = 0;
      *(undefined8 *)(unaff_x20 + 0x30) = 0;
      *(undefined **)(unaff_x20 + 0x20) = puVar1;
      *(undefined1 *)(unaff_x20 + 0x38) = 0;
    }
  }
  else {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRelease(puVar7);
    FUN_100005808(&local_d0,&DAT_100ff9280,&DAT_100c95d10);
  }
  self_00 = *(ID *)(unaff_x20 + 0x70);
  if (self_00 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if (lVar4 == 0) {
      pNVar3 = (NSDictionary *)0x0;
    }
    else {
      uStack_b8 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
      local_a8 = *(byte *)(unaff_x20 + 0x38) & 1;
      local_d0 = uVar9;
      lStack_c8 = lVar4;
      local_c0 = uVar8;
      local_b0 = uVar6;
      FUN_100af33e8(uVar9,lVar4,uVar8,uStack_b8,uVar6,*(byte *)(unaff_x20 + 0x38));
      FUN_100af37b8();
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(lVar4);
      _swift_bridgeObjectRelease(uVar6);
      uVar6 = uVar9;
      FUN_100af3424(uVar9);
      _swift_bridgeObjectRelease(uVar9);
      pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar6);
    }
    objc_stub::setUserInfo_(self_00,pNVar3);
    objc_stub::FUN_100c0cd00(self_00,1);
  }
  objc_stub::FUN_100bfe420(self);
  return 0;
}



/* Address: 0x100af2c8c | FUN_100af2c8c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100af2c8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  if (*(ID *)(unaff_x20 + 0x70) != 0) {
    objc_stub::invalidate(*(ID *)(unaff_x20 + 0x70));
  }
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x31) = 0;
  *(undefined8 *)(unaff_x20 + 0x29) = 0;
  FUN_100af36d0(uVar1,uVar3,uVar2,uVar4,*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x100af2cd0 | FUN_100af2cd0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100af2cd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  ID IVar10;
  ID IVar11;
  NSDictionary *pNVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  ID self;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  byte local_78;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar17 = param_1[2];
  puVar16 = param_1 + 3;
  uVar14 = *puVar16;
  uVar15 = param_1[4];
  bVar6 = *(byte *)(param_1 + 5);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lStack_98 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x30);
  bVar7 = *(byte *)(unaff_x20 + 0x38);
  if (lStack_98 == 0) {
    lStack_98 = param_1[1];
    local_a0 = *param_1;
    uStack_b8 = param_1[4];
    local_c0 = *puVar16;
    local_a8 = uVar17;
    FUN_10000ca28(&local_a0,&local_d0);
    FUN_100011090(&local_a8,&local_d0,&DAT_100ff9288,&DAT_100c95d18);
    FUN_100011090(&local_c0,&local_d0,&DAT_100ff9290,&DAT_100c95d20);
    FUN_100af36d0(uVar2,0,uVar3,uVar5,uVar18,bVar7);
    FUN_100af36d0(uVar1,uVar4,uVar17,uVar14,uVar15,bVar6 & 1);
  }
  else {
    local_78 = bVar7 & 1;
    puVar9 = &local_a0;
    local_a0 = uVar2;
    local_90 = uVar3;
    uStack_88 = uVar5;
    local_80 = uVar18;
    FUN_100af40bc(puVar9,param_1);
    if (((ulong)puVar9 & 1) != 0) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar15;
  uVar8 = *(undefined1 *)(unaff_x20 + 0x38);
  *(byte *)(unaff_x20 + 0x38) = bVar6 & 1;
  FUN_100af36d0(uVar2,uVar5,uVar3,uVar18,uVar13,uVar8);
  self = *(ID *)(unaff_x20 + 0x70);
  if (self == 0) {
    uStack_c8 = param_1[1];
    local_d0 = *param_1;
    local_d8 = param_1[2];
    uStack_e8 = param_1[4];
    local_f0 = *puVar16;
    FUN_10000ca28(&local_d0,auStack_100);
    FUN_100011090(&local_d8,auStack_100,&DAT_100ff9288,&DAT_100c95d18);
    FUN_100011090(&local_f0,auStack_100,&DAT_100ff9290,&DAT_100c95d20);
  }
  else {
    uStack_c8 = param_1[1];
    local_d0 = *param_1;
    local_d8 = param_1[2];
    uStack_e8 = param_1[4];
    local_f0 = *puVar16;
    FUN_10000ca28(&local_d0,auStack_100);
    FUN_100011090(&local_d8,auStack_100,&DAT_100ff9288,&DAT_100c95d18);
    FUN_100011090(&local_f0,auStack_100,&DAT_100ff9290,&DAT_100c95d20);
    FUN_10000ca28(&local_d0,auStack_100);
    FUN_100011090(&local_d8,auStack_100,&DAT_100ff9288,&DAT_100c95d18);
    FUN_100011090(&local_f0,auStack_100,&DAT_100ff9290,&DAT_100c95d20);
    IVar10 = self;
    FUN_100af37b8();
    FUN_10000caac(&local_d0);
    FUN_100005808(&local_d8,&DAT_100ff9288,&DAT_100c95d18);
    FUN_100005808(&local_f0,&DAT_100ff9290,&DAT_100c95d20);
    IVar11 = IVar10;
    FUN_100af3424(IVar10);
    _swift_bridgeObjectRelease(IVar10);
    pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(IVar11);
    objc_stub::setUserInfo_(self,pNVar12);
    objc_stub::FUN_100c0cd00(self,1);
  }
  return;
}



/* Address: 0x100af2ff8 | FUN_100af2ff8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100af2ff8(undefined8 *param_1,ID param_2)

{
  bool bVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  _StringGuts _Var4;
  String SVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  objc_stub::activityType(param_2);
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var4.unknown = SVar5.bridgeObject;
  if (SVar5.str == (undefined *)0xd00000000000001a &&
      _Var4.unknown == (undefined *)0x8000000100dbbb80) {
    _swift_bridgeObjectRelease(_Var4.unknown);
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar5.str,_Var4,(_StringComparisonResult)0x1a);
    _swift_bridgeObjectRelease(_Var4.unknown);
    if (!bVar1) {
      local_50 = 0;
      local_48 = 0;
      local_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      goto LAB_100af3108;
    }
  }
  IVar2 = objc_stub::userInfo(param_2);
  if (IVar2 == 0) {
    DVar3.unknown = (undefined *)0x0;
  }
  else {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100af41cc(&local_70,DVar3.unknown);
LAB_100af3108:
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[4] = local_50;
  *(undefined1 *)(param_1 + 5) = local_48;
  return;
}



/* Address: 0x100af312c | FUN_100af312c */

void FUN_100af312c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined *puVar14;
  MainActor *pMVar15;
  code *pcVar16;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  pcVar12 = *(code **)(unaff_x20 + 0x50);
  if (pcVar12 != (code *)0x0) {
    uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar10 = *param_2;
    uVar9 = param_2[1];
    FUN_100011128(pcVar12,uVar13);
    _swift_bridgeObjectRetain(uVar9);
    uVar7 = uVar10;
    (*pcVar12)(uVar10,uVar9);
    if ((uVar7 & 1) != 0) {
      puVar14 = (undefined *)param_2[2];
      if (*(long *)(puVar14 + 0x10) == 0) {
        pMVar15 = (MainActor *)param_2[4];
        puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (pMVar15 != (MainActor *)0x0) {
          uVar7 = param_2[3];
          pMVar2 = Swift::MainActor::typeMetadataAccessor();
          pMVar3 = pMVar15;
          _swift_bridgeObjectRetain();
          pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar3);
          pMVar3 = pMVar2;
          FUN_100af370c();
          UVar4 = Swift::Actor::get_unownedExecutor();
          UVar5 = UVar4;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar5.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("PasteHandoff/HandoffController.swift",0x24,1,0x51,UVar4.unknown,pMVar3);
          }
          puVar14 = &DAT_100ff92a0;
          FUN_1000037f0(&DAT_100ff92a0,&DAT_100c95d28);
          _swift_allocObject();
          *(undefined8 *)(puVar14 + 0x18) = 2;
          *(undefined8 *)(puVar14 + 0x10) = 1;
          *(ulong *)(puVar14 + 0x20) = uVar7;
          *(MainActor **)(puVar14 + 0x28) = pMVar15;
          _swift_release(pMVar2);
        }
      }
      else {
        _swift_bridgeObjectRetain(puVar14);
      }
      _swift_beginAccess(unaff_x20 + 0x60,auStack_90,0,0);
      pcVar16 = *(code **)(unaff_x20 + 0x60);
      if (pcVar16 == (code *)0x0) {
        FUN_100004550(pcVar12,uVar13);
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x20 + 0x68);
        _swift_retain(uVar8);
        puVar6 = puVar14;
        (*pcVar16)();
        FUN_100004550(pcVar12,uVar13);
        FUN_100004550(pcVar16,uVar8);
        _swift_bridgeObjectRelease(puVar14);
        puVar14 = puVar6;
      }
      uVar7 = param_2[3];
      uVar1 = param_2[4];
      uVar11 = (undefined1)param_2[5];
      _swift_bridgeObjectRetain();
      goto LAB_100af3320;
    }
    _swift_bridgeObjectRelease(uVar9);
    FUN_100004550(pcVar12,uVar13);
  }
  uVar10 = 0;
  uVar9 = 0;
  puVar14 = (undefined *)0x0;
  uVar7 = 0;
  uVar1 = 0;
  uVar11 = 0;
LAB_100af3320:
  *param_1 = uVar10;
  param_1[1] = uVar9;
  param_1[2] = (ulong)puVar14;
  param_1[3] = uVar7;
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = uVar11;
  return;
}



/* Address: 0x100af3350 | FUN_100af3350 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100af3350(void)

{
  long unaff_x20;
  
  FUN_100af36d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Address: 0x100af3398 | FUN_100af3398 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100af3398(void)

{
  long unaff_x20;
  
  FUN_100af36d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100af33e8 | FUN_100af33e8 */

void FUN_100af33e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_5);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    return;
  }
  return;
}



/* Address: 0x100af3424 | FUN_100af3424 */

undefined * FUN_100af3424(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  _DictionaryStorage *this;
  ulong uVar5;
  AnyHashable AVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *capacity;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_88 [40];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100ff9368;
    FUN_1000037f0(&DAT_100ff9368,&DAT_100c95d88);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar12 = capacity;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar12);
  _swift_bridgeObjectRetain(param_1);
  lVar13 = 0;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar13 << 6;
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar7 * 0x10);
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar7 * 0x20,auStack_88);
      local_b8 = uVar1;
      uStack_b0 = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      _swift_dynamicCast(&local_150,&local_b8,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,7);
      FUN_100011080(auStack_88,auStack_128);
      uStack_f8 = uStack_148;
      local_100 = local_150;
      uStack_e8 = uStack_138;
      uStack_f0 = local_140;
      local_e0 = local_130;
      FUN_100011080(auStack_128,auStack_d8);
      uStack_148 = uStack_f8;
      local_150 = local_100;
      uStack_138 = uStack_e8;
      local_140 = uStack_f0;
      local_130 = local_e0;
      AVar6.unknown = (undefined *)&local_b8;
      FUN_100011080(auStack_d8);
      uVar5 = Swift::AnyHashable::_rawHashValue(*(__int64 *)(puVar12 + 0x28),AVar6);
      uVar11 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
      uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
      uVar8 = uVar5 >> 6;
      uVar7 = -1L << (uVar5 & 0x3f) & (*(ulong *)(puVar12 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar7 == 0) {
        bVar4 = false;
        uVar7 = 0x3f - uVar11 >> 6;
        do {
          uVar5 = uVar8 + 1;
          if ((uVar5 == uVar7) && (bVar4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100af36d0);
            (*pcVar3)();
          }
          uVar8 = 0;
          if (uVar5 != uVar7) {
            uVar8 = uVar5;
          }
          bVar4 = (bool)(uVar5 == uVar7 | bVar4);
        } while (*(ulong *)(puVar12 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
        uVar7 = ~*(ulong *)(puVar12 + uVar8 * 8 + 0x40);
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar8 << 6;
      }
      else {
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar8 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar12 + uVar8 + 0x40)
      ;
      puVar10 = (undefined8 *)(*(long *)(puVar12 + 0x30) + uVar7 * 0x28);
      puVar10[1] = uStack_148;
      *puVar10 = local_150;
      puVar10[3] = uStack_138;
      puVar10[2] = local_140;
      puVar10[4] = local_130;
      FUN_100011080(&local_b8,*(long *)(puVar12 + 0x38) + uVar7 * 0x20);
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
    }
    bVar4 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100af36cc);
      (*pcVar3)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar13) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  _swift_release(puVar12);
  _swift_release(param_1);
  return puVar12;
}



/* Address: 0x100af36d0 | FUN_100af36d0 */

void FUN_100af36d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_5);
    return;
  }
  return;
}



/* Address: 0x100af370c | FUN_100af370c */

void FUN_100af370c(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100ff9298 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100ff9298 = puVar2;
  return;
}



/* Address: 0x100af3750 | FUN_100af3750 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100af3750(void)

{
  return ZEXT816(0x100ff92e8);
}



/* Address: 0x100af3770 | FUN_100af3770 */

undefined * FUN_100af3770(void)

{
  return &DAT_100f328e8;
}



/* Address: 0x100af377c | FUN_100af377c */

void FUN_100af377c(undefined8 *param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_100af41cc(&local_50);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = CONCAT71(local_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  return;
}



/* Address: 0x100af37b8 | FUN_100af37b8 */

undefined * FUN_100af37b8(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined *local_170;
  long lStack_168;
  undefined *local_158;
  undefined1 auStack_150 [208];
  undefined *local_80;
  long lStack_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar3 = &DAT_100ff9370;
  FUN_1000037f0(&DAT_100ff9370,&DAT_100c95d98);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 6;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  *(undefined8 *)(puVar3 + 0x20) = 0x64497473696c;
  *(undefined1 **)(puVar3 + 0x28) = &DAT_e600000000000000;
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  *(undefined8 *)(puVar3 + 0x38) = uStack_58;
  *(undefined8 *)(puVar3 + 0x30) = local_60;
  *(undefined **)(puVar3 + 0x48) = puVar2;
  *(undefined8 *)(puVar3 + 0x50) = 0x7364496d657469;
  *(undefined1 **)(puVar3 + 0x58) = &DAT_e700000000000000;
  uVar6 = unaff_x20[2];
  puVar4 = &DAT_100ff9288;
  local_68 = uVar6;
  FUN_1000037f0(&DAT_100ff9288,&DAT_100c95d18);
  *(undefined8 *)(puVar3 + 0x60) = uVar6;
  *(undefined **)(puVar3 + 0x78) = puVar4;
  *(undefined8 *)(puVar3 + 0x80) = 0xd000000000000010;
  *(undefined8 *)(puVar3 + 0x88) = 0x8000000100dbbbd0;
  uVar1 = *(undefined1 *)(unaff_x20 + 5);
  *(undefined **)(puVar3 + 0xa8) = PTR___type_metadata_for_Swift_Bool_100eac570;
  puVar3[0x90] = uVar1;
  FUN_10000ca28(&local_60,auStack_150);
  FUN_100011090(&local_68,auStack_150,&DAT_100ff9288,&DAT_100c95d18);
  puVar5 = puVar3;
  FUN_100af3f90();
  _swift_setDeallocating(puVar3);
  puVar4 = &DAT_100ff9378;
  FUN_1000037f0(&DAT_100ff9378,&DAT_100c95da0);
  _swift_arrayDestroy(puVar3 + 0x20,3,puVar4);
  lStack_168 = unaff_x20[4];
  local_80 = (undefined *)unaff_x20[3];
  local_170 = puVar5;
  if (lStack_168 != 0) {
    local_158 = puVar2;
    local_170 = local_80;
    lStack_78 = lStack_168;
    FUN_100011080(&local_170,auStack_150);
    FUN_100011090(&local_80,&local_170,&DAT_100ff9290,&DAT_100c95d20);
    puVar3 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    local_170 = puVar5;
    FUN_100af3a0c(auStack_150,0x6577656976657270,0xef64496d65744964,puVar3);
  }
  return local_170;
}



/* Address: 0x100af39a4 | thunk_FUN_100af40bc */

void thunk_FUN_100af40bc(void)

{
  FUN_100af40bc();
  return;
}



/* Address: 0x100af39a8 | FUN_100af39a8 */

uint FUN_100af39a8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100af40bc(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x100af39f0 | FUN_100af39f0 */

undefined1  [16] FUN_100af39f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dbbb80;
  auVar1._0_8_ = 0xd00000000000001a;
  return auVar1;
}



/* Address: 0x100af3a0c | FUN_100af3a0c */

void FUN_100af3a0c(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100af3aec);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_100af3cd4(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100af3aac);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100af3b30();
    lVar4 = *unaff_x20;
    goto joined_r0x000100af3b00;
  }
  lVar4 = *unaff_x20;
joined_r0x000100af3b00:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + lVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return;
  }
  FUN_1000d93f0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100af3b30 | FUN_100af3b30 */

void FUN_100af3b30(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100ff9388;
  FUN_1000037f0(&DAT_100ff9388,&DAT_100c95df8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100af3cac:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_100af3c18;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      FUN_10000cbfc(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100011080(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_100af3c18:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100af3cd4);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100af3cac;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Address: 0x100af3cd4 | FUN_100af3cd4 */

void FUN_100af3cd4(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100ff9388;
  FUN_1000037f0(&DAT_100ff9388,&DAT_100c95df8);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100af3f5c:
    _swift_release(original);
LAB_100af3f64:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100af3f8c);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100af3f64;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100af3f5c;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar11 = *(long *)(original + 0x38) + uVar10 * 0x20;
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(lVar11,auStack_80);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100011080(lVar11,auStack_80);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100af3f90);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100011080(auStack_80,*(long *)(p_Var8 + 0x38) + uVar10 * 0x20);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x100af3f90 | FUN_100af3f90 */

undefined * FUN_100af3f90(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100ff9388;
    FUN_1000037f0(&DAT_100ff9388,&DAT_100c95df8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_90,&DAT_100ff9378,&DAT_100c95da0);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100af40b8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100af40bc);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x100af40bc | FUN_100af40bc */

byte FUN_100af40bc(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) {
    lVar5 = param_1[2];
    lVar6 = param_2[2];
    lVar7 = *(long *)(lVar5 + 0x10);
    if (lVar7 == *(long *)(lVar6 + 0x10)) {
      if (lVar7 != 0 && lVar5 != lVar6) {
        puVar8 = (undefined8 *)(lVar6 + 0x28);
        puVar9 = (undefined8 *)(lVar5 + 0x28);
        do {
          if (((undefined *)puVar9[-1] != (undefined *)puVar8[-1] ||
               (undefined *)*puVar9 != (undefined *)*puVar8) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)puVar9[-1],(undefined *)*puVar9,
                                 (_StringComparisonResult)(__int8)(undefined *)puVar8[-1]), !bVar1))
          goto LAB_100af419c;
          puVar8 = puVar8 + 2;
          puVar9 = puVar9 + 2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      _Var2.unknown = (undefined *)param_1[4];
      puVar3 = (undefined *)param_2[4];
      if (_Var2.unknown == (undefined *)0x0) {
        if (puVar3 == (undefined *)0x0) {
LAB_100af41b8:
          bVar4 = *(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5) ^ 1;
          goto LAB_100af41a0;
        }
      }
      else if (puVar3 != (undefined *)0x0) {
        if ((((undefined *)param_1[3] == (undefined *)param_2[3]) && (_Var2.unknown == puVar3)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)param_1[3],_Var2,
                               (_StringComparisonResult)(__int8)(undefined *)param_2[3]), bVar1))
        goto LAB_100af41b8;
      }
    }
  }
LAB_100af419c:
  bVar4 = 0;
LAB_100af41a0:
  return bVar4 & 1;
}



/* Address: 0x100af41cc | FUN_100af41cc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100af4220 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100af41cc(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *local_a8;
  undefined1 *puStack_a0;
  undefined *apuStack_98 [5];
  undefined8 local_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  long local_58;
  
  if (param_2 == 0) {
LAB_100af4330:
    puVar5 = (undefined *)0x0;
    puVar6 = (undefined1 *)0x0;
    puVar7 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
    puVar9 = (undefined1 *)0x0;
  }
  else {
    local_a8 = (undefined *)0x64497473696c;
    puStack_a0 = &DAT_e600000000000000;
    puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
    Swift::AnyHashable::_init
              (apuStack_98,param_2,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_100af4264:
      puStack_68 = (undefined1 *)0x0;
      local_70 = 0;
      local_58 = 0;
      uStack_60 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_2);
      ppuVar1 = apuStack_98;
      FUN_1000f1290(ppuVar1);
      if (((ulong)puVar2 & 1) == 0) {
        _swift_bridgeObjectRelease(param_2);
        goto LAB_100af4264;
      }
      FUN_10000cbfc(*(long *)(param_2 + 0x38) + (long)ppuVar1 * 0x20,&local_70);
      _swift_bridgeObjectRelease(param_2);
    }
    FUN_100089674(apuStack_98);
    puVar2 = PTR___type_metadata_for_Any_100eae0c0;
    if (local_58 == 0) {
      _swift_bridgeObjectRelease(param_2);
      FUN_100af4580(&local_70);
      goto LAB_100af4330;
    }
    ppuVar1 = &local_a8;
    _swift_dynamicCast(ppuVar1,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    puVar6 = puStack_a0;
    puVar5 = local_a8;
    if (((ulong)ppuVar1 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100af4330;
    }
    local_70 = 0x7364496d657469;
    puStack_68 = &DAT_e700000000000000;
    puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
    Swift::AnyHashable::_init
              (apuStack_98,ppuVar1,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_100af437c:
      puStack_68 = (undefined1 *)0x0;
      local_70 = 0;
      local_58 = 0;
      uStack_60 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_2);
      ppuVar1 = apuStack_98;
      FUN_1000f1290(ppuVar1);
      if (((ulong)puVar8 & 1) == 0) {
        _swift_bridgeObjectRelease(param_2);
        goto LAB_100af437c;
      }
      FUN_10000cbfc(*(long *)(param_2 + 0x38) + (long)ppuVar1 * 0x20,&local_70);
      _swift_bridgeObjectRelease(param_2);
    }
    FUN_100089674(apuStack_98);
    if (local_58 == 0) {
      FUN_100af4580(&local_70);
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      puVar8 = &DAT_100ff9288;
      FUN_1000037f0(&DAT_100ff9288,&DAT_100c95d18);
      ppuVar1 = &local_a8;
      _swift_dynamicCast(ppuVar1,&local_70,puVar2 + 8,puVar8,6);
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (((ulong)ppuVar1 & 1) != 0) {
        puVar7 = local_a8;
      }
    }
    local_70 = 0x6577656976657270;
    puStack_68 = (undefined1 *)0xef64496d65744964;
    puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
    Swift::AnyHashable::_init
              (apuStack_98,ppuVar1,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_100af445c:
      puStack_68 = (undefined1 *)0x0;
      local_70 = 0;
      local_58 = 0;
      uStack_60 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_2);
      ppuVar1 = apuStack_98;
      FUN_1000f1290(ppuVar1);
      if (((ulong)puVar8 & 1) == 0) {
        _swift_bridgeObjectRelease(param_2);
        goto LAB_100af445c;
      }
      FUN_10000cbfc(*(long *)(param_2 + 0x38) + (long)ppuVar1 * 0x20,&local_70);
      _swift_bridgeObjectRelease(param_2);
    }
    FUN_100089674(apuStack_98);
    if (local_58 == 0) {
      FUN_100af4580(&local_70);
      puVar8 = (undefined *)0x0;
      puVar9 = (undefined1 *)0x0;
    }
    else {
      ppuVar1 = &local_a8;
      _swift_dynamicCast(ppuVar1,&local_70,puVar2 + 8,PTR___type_metadata_for_Swift_String_100eac208
                         ,6);
      puVar8 = local_a8;
      puVar9 = puStack_a0;
      if ((int)ppuVar1 == 0) {
        puVar8 = (undefined *)0x0;
        puVar9 = (undefined1 *)0x0;
      }
    }
    local_70 = 0xd000000000000010;
    puStack_68 = (undefined1 *)0x8000000100dbbbd0;
    puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
    Swift::AnyHashable::_init
              (apuStack_98,ppuVar1,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_100af452c:
      puStack_68 = (undefined1 *)0x0;
      local_70 = 0;
      local_58 = 0;
      uStack_60 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_2);
      ppuVar1 = apuStack_98;
      FUN_1000f1290(ppuVar1);
      if (((ulong)puVar3 & 1) == 0) {
        _swift_bridgeObjectRelease(param_2);
        goto LAB_100af452c;
      }
      FUN_10000cbfc(*(long *)(param_2 + 0x38) + (long)ppuVar1 * 0x20,&local_70);
      _swift_bridgeObjectRelease(param_2);
    }
    _swift_bridgeObjectRelease(param_2);
    FUN_100089674(apuStack_98);
    if (local_58 == 0) {
      FUN_100af4580(&local_70);
    }
    else {
      ppuVar1 = &local_a8;
      _swift_dynamicCast(ppuVar1,&local_70,puVar2 + 8,PTR___type_metadata_for_Swift_Bool_100eac570,6
                        );
      if ((int)ppuVar1 != 0) {
        uVar4 = SUB81(local_a8,0);
        goto LAB_100af4348;
      }
    }
  }
  uVar4 = 0;
LAB_100af4348:
  *param_1 = puVar5;
  param_1[1] = puVar6;
  param_1[2] = puVar7;
  param_1[3] = puVar8;
  param_1[4] = puVar9;
  *(undefined1 *)(param_1 + 5) = uVar4;
  return;
}



/* Address: 0x100af4580 | FUN_100af4580 */

undefined8 FUN_100af4580(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff9380;
  FUN_1000037f0(&DAT_100ff9380,&DAT_100c95da8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100af45c8 | FUN_100af45c8 */

void FUN_100af45c8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x100af45f8 | FUN_100af45f8 */

undefined8 * FUN_100af45f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x100af465c | FUN_100af465c */

undefined8 * FUN_100af465c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x100af46e8 | FUN_100af46e8 */

void FUN_100af46e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100af46fc | FUN_100af46fc */

undefined8 * FUN_100af46fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x100af4758 | FUN_100af4758 */

undefined1  [16] FUN_100af4758(void)

{
  return ZEXT816(0x100f32960);
}



/* Address: 0x100af4768 | FUN_100af4768 */

uint FUN_100af4768(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_90 [64];
  undefined8 local_50;
  long lStack_48;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  if (lVar5 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (*(ulong *)(lVar3 + 0x10) < 2) {
      if (*(ulong *)(lVar3 + 0x10) == 0) {
        uVar2 = 1;
      }
      else {
        puVar1 = &DAT_100ff92a0;
        local_50 = uVar4;
        lStack_48 = lVar5;
        FUN_1000037f0(&DAT_100ff92a0,&DAT_100c95d28);
        _swift_initStackObject();
        *(undefined8 *)(puVar1 + 0x18) = 2;
        *(undefined8 *)(puVar1 + 0x10) = 1;
        *(undefined8 *)(puVar1 + 0x20) = uVar4;
        *(long *)(puVar1 + 0x28) = lVar5;
        FUN_1004827e8(lVar3,puVar1);
        uVar2 = (uint)lVar3;
        _swift_setDeallocating(puVar1);
        FUN_100af4838(&local_50,auStack_90);
        FUN_10000caac(puVar1 + 0x20);
      }
      goto LAB_100af4814;
    }
  }
  uVar2 = 0;
LAB_100af4814:
  return uVar2 & 1;
}



/* Address: 0x100af4838 | FUN_100af4838 */

undefined8 FUN_100af4838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff9290;
  FUN_1000037f0(&DAT_100ff9290,&DAT_100c95d20);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100af4888 | FUN_100af4888 */

undefined1  [16] FUN_100af4888(void)

{
  return ZEXT816(0x100f329f8);
}



/* Address: 0x100af4898 | FUN_100af4898 */

void FUN_100af4898(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c95e30;
  _swift_getKeyPath(&DAT_100c95e30);
  FUN_1000037f0(&DAT_100ff9390,&DAT_100c95e60);
  _swift_allocObject();
  FUN_1000da6e0(puVar1);
  return;
}



/* Address: 0x100af48ec | FUN_100af48ec */

void FUN_100af48ec(void)

{
  FUN_100af6b30(0);
  _swift_allocObject();
  FUN_100af576c();
  return;
}


