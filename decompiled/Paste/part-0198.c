/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100242cd0 | FUN_100242cd0 */

void FUN_100242cd0(NSObject *param_1)

{
  (extension_ObjectiveC)::__C::NSObject::get_hashValue(param_1);
  return;
}



/* Address: 0x100242cf0 | FUN_100242cf0 */

void FUN_100242cf0(Hasher param_1)

{
  FUN_100003a00(&DAT_100fb7e40,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c377f0);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::hash(param_1);
  return;
}



/* Address: 0x100242d40 | FUN_100242d40 */

void FUN_100242d40(__int64 param_1)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_80 [72];
  undefined8 local_38;
  
  HVar1.unknown = auStack_80;
  local_38 = *unaff_x20;
  Swift::Hasher::init(param_1);
  Swift::Hashable::hash((Hasher)auStack_80);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100242d9c | FUN_100242d9c */

String FUN_100242d9c(void)

{
  String SVar1;
  
  FUN_100003a00(&DAT_100fb7e08,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c377ac);
  SVar1 = (extension_Foundation)::Swift::Error::_get__domain();
  return SVar1;
}



/* Address: 0x100242ddc | FUN_100242ddc */

void FUN_100242ddc(void)

{
  FUN_100003a00(&DAT_100fb7e08,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c377ac);
  (extension_Foundation)::Swift::Error::_get__code();
  return;
}



/* Address: 0x100242e1c | FUN_100242e1c */

void FUN_100242e1c(void)

{
  FUN_100003a00(&DAT_100fb7e40,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c377f0);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::__getEmbeddedNSError();
  return;
}



/* Address: 0x100242e5c | FUN_100242e5c */

void FUN_100242e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_100fb7e40;
  FUN_100003a00(&DAT_100fb7e40,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c377f0);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::___infix
            (param_1,param_2,param_3,puVar1);
  return;
}



/* Address: 0x100242eb4 | FUN_100242eb4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100242eb4(void)

{
  return ZEXT816(0x100fb7d80);
}



/* Address: 0x100242ed4 | FUN_100242ed4 */

undefined8 FUN_100242ed4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7dd8;
  FUN_1000037f0(&DAT_100fb7dd8,&DAT_100c37678);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100242f24 | FUN_100242f24 */

undefined8 FUN_100242f24(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7dd8;
  FUN_1000037f0(&DAT_100fb7dd8,&DAT_100c37678);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100242f6c | FUN_100242f6c */

void FUN_100242f6c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb7df0,&DAT_100ec3980);
  return;
}



/* Address: 0x100242f80 | FUN_100242f80 */

void FUN_100242f80(void)

{
  FUN_100003a00(&DAT_100fb7df8,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c376c4);
  return;
}



/* Address: 0x100242fac | FUN_100242fac */

void FUN_100242fac(void)

{
  FUN_100003a00(&DAT_100fb7e00,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c376f0);
  return;
}



/* Address: 0x100242fd8 | FUN_100242fd8 */

void FUN_100242fd8(void)

{
  FUN_100003a00(&DAT_100fb7e08,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c377ac);
  return;
}



/* Address: 0x100243004 | FUN_100243004 */

void FUN_100243004(void)

{
  FUN_100003a00(&DAT_100fb7e10,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c37778);
  return;
}



/* Address: 0x100243030 | FUN_100243030 */

void FUN_100243030(void)

{
  FUN_100003a00(&DAT_100fb7e18,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c37734);
  return;
}



/* Address: 0x10024305c | FUN_10024305c */

void FUN_10024305c(void)

{
  FUN_100003a00(&DAT_100fb7e20,FUN_100243088,&TargetProtocolConformanceDescriptor_100c37898);
  return;
}



/* Address: 0x100243088 | FUN_100243088 */

void FUN_100243088(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb7e48,&DAT_100ec39a8);
  return;
}



/* Address: 0x10024309c | FUN_10024309c */

void FUN_10024309c(void)

{
  FUN_100003a00(&DAT_100fb7e28,FUN_100243088,&TargetProtocolConformanceDescriptor_100c3785c);
  return;
}



/* Address: 0x1002430c8 | thunk_FUN_1002430cc */

void thunk_FUN_1002430cc(void)

{
  undefined *puVar1;
  
  if (DAT_100fb7e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__FixedWidthInteger_100eac740;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__FixedWidthInteger_100eac740,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fb7e30 = puVar1;
  return;
}



/* Address: 0x1002430cc | FUN_1002430cc */

void FUN_1002430cc(void)

{
  undefined *puVar1;
  
  if (DAT_100fb7e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__FixedWidthInteger_100eac740;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__FixedWidthInteger_100eac740,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fb7e30 = puVar1;
  return;
}



/* Address: 0x10024310c | FUN_10024310c */

void FUN_10024310c(void)

{
  FUN_100003a00(&DAT_100fb7e38,FUN_100243088,&TargetProtocolConformanceDescriptor_100c378d4);
  return;
}



/* Address: 0x100243138 | FUN_100243138 */

void FUN_100243138(void)

{
  FUN_100003a00(&DAT_100fb7e40,FUN_100242f6c,&TargetProtocolConformanceDescriptor_100c377f0);
  return;
}



/* Address: 0x100243164 | thunk_FUN_100242654 */

void thunk_FUN_100242654(void)

{
  FUN_100242654();
  return;
}



/* Address: 0x100243168 | thunk_FUN_100242b90 */

void thunk_FUN_100242b90(void)

{
  FUN_100242b90();
  return;
}



/* Address: 0x10024316c | thunk_FUN_100242bb0 */

void thunk_FUN_100242bb0(void)

{
  FUN_100242bb0();
  return;
}



/* Address: 0x100243170 | thunk_FUN_100242fac */

void thunk_FUN_100242fac(void)

{
  FUN_100242fac();
  return;
}



/* Address: 0x100243174 | FUN_100243174 */

undefined * FUN_100243174(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  
  puVar8 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  pcVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar15 = pcVar4 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar14 = pcVar15 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = (long)pcVar14 - extraout_x12_01;
  pcVar3 = (char *)0x0;
  FUN_1002b5a40();
  lVar18 = *(long *)(pcVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  pcVar11 = (char *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_1002435dc(param_2,lVar17);
  pcVar16 = *(code **)(lVar18 + 0x30);
  lVar18 = lVar17;
  (*pcVar16)(lVar17,1,pcVar3);
  if ((int)lVar18 == 1) {
    FUN_10024362c(lVar17);
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  FUN_100243674(lVar17,pcVar11);
  cVar2 = *pcVar11;
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (cVar2 == '\0') {
    if ((pcVar11[1] & 1U) != 0) goto LAB_100243570;
    FUN_1002435dc(param_1,pcVar15);
    pcVar4 = pcVar15;
    (*pcVar16)(pcVar15,1,pcVar3);
    if ((int)pcVar4 == 1) {
      FUN_10024362c(pcVar15);
    }
    else if (*pcVar15 == '\0') {
      cVar2 = pcVar15[1];
      FUN_1002436b8(pcVar15);
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (cVar2 != '\x01') goto LAB_100243570;
    }
    else {
      FUN_1002436b8(pcVar15);
    }
    uVar12 = *(ulong *)((long)(pcVar11 + *(int *)(pcVar3 + 0x20)) + 8);
    if (uVar12 == 0) {
LAB_1002434fc:
      uVar12 = 3;
    }
    else {
      uVar13 = *(ulong *)(pcVar11 + *(int *)(pcVar3 + 0x20));
      _swift_bridgeObjectRetain(uVar12);
      FUN_1002abb30(uVar13,uVar12);
      if (((uint)uVar13 & 0xff) == 6) goto LAB_1002434fc;
      uVar9 = 1;
      if (((uint)uVar13 & 0xff) == 5) {
        uVar9 = 2;
      }
      uVar1 = 0;
      if ((uVar13 & 0xff) != 0) {
        uVar1 = uVar9;
      }
      uVar12 = (ulong)uVar1;
    }
    pcVar14 = pcVar11 + *(int *)(pcVar3 + 0x18);
    uVar5 = 0;
    FUN_10019243c();
LAB_10024352c:
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar8;
    if (((ulong)puVar7 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_1002b0be0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar13 = *(ulong *)(puVar6 + 0x10);
    uVar10 = *(ulong *)(puVar6 + 0x18);
  }
  else {
    if (cVar2 == '\x04') {
      FUN_1002435dc(param_1,pcVar4);
      pcVar15 = pcVar4;
      pcVar14 = pcVar3;
      (*pcVar16)(pcVar4,1);
      if ((int)pcVar15 == 1) {
        FUN_10024362c(pcVar4);
      }
      else {
        cVar2 = *pcVar4;
        FUN_1002436b8(pcVar4);
        puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (cVar2 == '\x04') goto LAB_100243570;
      }
      uVar12 = *(ulong *)((long)(pcVar11 + *(int *)(pcVar3 + 0x20)) + 8);
      if (uVar12 == 0) {
LAB_1002433b8:
        uVar12 = 3;
      }
      else {
        uVar13 = *(ulong *)(pcVar11 + *(int *)(pcVar3 + 0x20));
        _swift_bridgeObjectRetain(uVar12);
        FUN_1002abb30(uVar13,uVar12);
        if (((uint)uVar13 & 0xff) == 6) goto LAB_1002433b8;
        uVar9 = 1;
        if (((uint)uVar13 & 0xff) == 5) {
          uVar9 = 2;
        }
        uVar1 = 0;
        if ((uVar13 & 0xff) != 0) {
          uVar1 = uVar9;
        }
        uVar12 = (ulong)uVar1;
      }
      uVar5 = 0;
      FUN_100192738();
      goto LAB_10024352c;
    }
    if ((cVar2 != '\x01') || ((pcVar11[1] & 1U) != 0)) goto LAB_100243570;
    FUN_1002435dc(param_1,pcVar14);
    pcVar4 = pcVar14;
    (*pcVar16)(pcVar14,1,pcVar3);
    if ((int)pcVar4 == 1) {
      FUN_10024362c(pcVar14);
    }
    else if (*pcVar14 == '\x01') {
      cVar2 = pcVar14[1];
      FUN_1002436b8(pcVar14);
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (cVar2 != '\x01') goto LAB_100243570;
    }
    else {
      FUN_1002436b8(pcVar14);
    }
    uVar12 = *(ulong *)((long)(pcVar11 + *(int *)(pcVar3 + 0x20)) + 8);
    if (uVar12 == 0) {
LAB_100243458:
      pcVar14 = (char *)0x3;
    }
    else {
      uVar13 = *(ulong *)(pcVar11 + *(int *)(pcVar3 + 0x20));
      _swift_bridgeObjectRetain(uVar12);
      FUN_1002abb30(uVar13,uVar12);
      if (((uint)uVar13 & 0xff) == 6) goto LAB_100243458;
      uVar9 = 1;
      if (((uint)uVar13 & 0xff) == 5) {
        uVar9 = 2;
      }
      uVar1 = 0;
      if ((uVar13 & 0xff) != 0) {
        uVar1 = uVar9;
      }
      pcVar14 = (char *)(ulong)uVar1;
    }
    uVar5 = 0;
    uVar12 = 1;
    FUN_100191fc4();
    puVar6 = (undefined *)0x0;
    FUN_1002b0be0(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar13 = *(ulong *)(puVar6 + 0x10);
    uVar10 = *(ulong *)(puVar6 + 0x18);
  }
  puVar8 = puVar6;
  if (uVar10 >> 1 <= uVar13) {
    puVar8 = (undefined *)(ulong)(1 < uVar10);
    FUN_1002b0be0(puVar8,uVar13 + 1,1,puVar6);
  }
  *(ulong *)(puVar8 + 0x10) = uVar13 + 1;
  *(undefined8 *)(puVar8 + uVar13 * 0x18 + 0x20) = uVar5;
  *(ulong *)(puVar8 + uVar13 * 0x18 + 0x28) = uVar12;
  *(char **)(puVar8 + uVar13 * 0x18 + 0x30) = pcVar14;
LAB_100243570:
  FUN_1002436b8(pcVar11);
  return puVar8;
}



/* Address: 0x1002435dc | FUN_1002435dc */

undefined8 FUN_1002435dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10024362c | FUN_10024362c */

undefined8 FUN_10024362c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100243674 | FUN_100243674 */

undefined8 FUN_100243674(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002b5a40();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1002436b8 | FUN_1002436b8 */

undefined8 FUN_1002436b8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002b5a40();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1002436f4 | FUN_1002436f4 */

void FUN_1002436f4(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  _swift_beginAccess(unaff_x20 + 0x70,auStack_a8,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  local_90 = uVar2;
  uStack_88 = uVar4;
  local_80 = uVar5;
  local_70 = uVar3;
  local_60 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fb7f28,&DAT_100c37988);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return;
}



/* Address: 0x1002437d8 | FUN_1002437d8 */

void FUN_1002437d8(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  UUID UVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_e0 [8];
  long local_d8;
  long local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100fb7f20;
  local_c0 = param_1;
  FUN_1000037f0(&DAT_100fb7f20,&DAT_100c37980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  local_c8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_d0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar6 - extraout_x12_00;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  local_d8 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x70,auStack_b8,0,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  local_a0 = uVar10;
  uStack_98 = uVar12;
  local_90 = uVar13;
  local_80 = uVar11;
  local_70 = uVar9;
  _swift_retain(uVar10);
  _swift_retain(uVar12);
  _swift_retain(uVar13);
  _swift_retain(uVar11);
  _swift_retain(uVar9);
  FUN_1000037f0(&DAT_100fb7f28,&DAT_100c37988);
  FUN_1002ca7e0(lVar6);
  _swift_release(uVar9);
  _swift_release(uVar11);
  _swift_release(uVar13);
  _swift_release(uVar12);
  _swift_release(uVar10);
  lVar5 = lVar6;
  (**(code **)(lVar8 + 0x30))(lVar6,1,UVar4.unknown);
  lVar1 = local_d8;
  if ((int)lVar5 == 1) {
    FUN_100243af8(lVar6);
    uVar9 = local_c0;
    Foundation::UUID::init();
    lVar1 = local_d0;
    (**(code **)(lVar8 + 0x10))(local_d0,uVar9,UVar4.unknown);
    (**(code **)(lVar8 + 0x38))(lVar1,0,1,UVar4.unknown);
    _swift_getKeyPath(&DAT_100c37990);
    _swift_getKeyPath(&DAT_100c379b8);
    puVar2 = local_c8;
    FUN_100243e10(lVar1,local_c8);
    _swift_retain();
    FUN_1002cb5a0(puVar2);
    FUN_100243af8(lVar1);
  }
  else {
    pcVar7 = *(code **)(lVar8 + 0x20);
    (*pcVar7)(local_d8,lVar6,UVar4.unknown);
    (*pcVar7)(local_c0,lVar1,UVar4.unknown);
  }
  return;
}



/* Address: 0x100243a64 | FUN_100243a64 */

void FUN_100243a64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x100243acc | FUN_100243acc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100243acc(void)

{
  return ZEXT816(0x100fb7e90);
}



/* Address: 0x100243aec | FUN_100243aec */

void FUN_100243aec(void)

{
  return;
}



/* Address: 0x100243af8 | FUN_100243af8 */

undefined8 FUN_100243af8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7f20;
  FUN_1000037f0(&DAT_100fb7f20,&DAT_100c37980);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100243b40 | FUN_100243b40 */

undefined8 FUN_100243b40(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_100243acc();
  FUN_1000d80e0(&local_18,"PasteLicensingAppStore/AppAccountTokenProvider.swift",0x34,2,0x14,0x13,
                FUN_100243b90,0,param_1);
  return local_18;
}



/* Address: 0x100243b90 | FUN_100243b90 */

void FUN_100243b90(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_100243acc();
  _swift_allocObject();
  _swift_defaultActor_initialize();
  puVar1 = &DAT_100c379d8;
  _swift_getKeyPath(&DAT_100c379d8);
  puVar2 = &DAT_100fb7f30;
  FUN_100243f20(&DAT_100fb7f30,&DAT_100fb7f38,
                PTR_Foundation__Foundation__UUID_>Swift__Decodable_100ea7528,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
               );
  puVar3 = &DAT_100fb7f40;
  FUN_100243f20(&DAT_100fb7f40,&DAT_100fb7f48,
                PTR_Foundation__Foundation__UUID_>Swift__Encodable_100ea7510,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
               );
  FUN_1002cb88c(&local_68,puVar1,puVar2,puVar3);
  *(undefined8 *)(param_2 + 0x78) = uStack_60;
  *(undefined8 *)(param_2 + 0x70) = local_68;
  *(undefined8 *)(param_2 + 0x88) = uStack_50;
  *(undefined8 *)(param_2 + 0x80) = local_58;
  *(undefined8 *)(param_2 + 0x98) = uStack_40;
  *(undefined8 *)(param_2 + 0x90) = local_48;
  *(undefined8 *)(param_2 + 0xa0) = local_38;
  *param_1 = param_2;
  return;
}



/* Address: 0x100243c64 | FUN_100243c64 */

void FUN_100243c64(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x70,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x78);
  uVar3 = *(undefined8 *)(lVar1 + 0x70);
  uStack_78 = *(undefined8 *)(lVar1 + 0x88);
  uVar6 = *(undefined8 *)(lVar1 + 0x80);
  uStack_68 = *(undefined8 *)(lVar1 + 0x98);
  uVar4 = *(undefined8 *)(lVar1 + 0x90);
  uVar2 = *(undefined8 *)(lVar1 + 0xa0);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fb7f28,&DAT_100c37988);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100243d4c | thunk_FUN_100243c64 */

void thunk_FUN_100243c64(void)

{
  FUN_100243c64();
  return;
}



/* Address: 0x100243d50 | FUN_100243d50 */

void FUN_100243d50(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined8 uVar3;
  
  puVar1 = &DAT_100fb7f20;
  FUN_1000037f0(&DAT_100fb7f20,&DAT_100c37980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *param_2;
  puVar1 = &DAT_100c37990;
  _swift_getKeyPath(&DAT_100c37990);
  puVar2 = &DAT_100c379b8;
  _swift_getKeyPath(&DAT_100c379b8);
  FUN_100243e10(param_1,&stack0xffffffffffffffc0 + -extraout_x8);
  _swift_retain(uVar3);
  FUN_1002cb5a0(&stack0xffffffffffffffc0 + -extraout_x8,uVar3,puVar1,puVar2);
  return;
}



/* Address: 0x100243e0c | thunk_FUN_100243d50 */

void thunk_FUN_100243d50(void)

{
  FUN_100243d50();
  return;
}



/* Address: 0x100243e10 | FUN_100243e10 */

undefined8 FUN_100243e10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7f20;
  FUN_1000037f0(&DAT_100fb7f20,&DAT_100c37980);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100243e60 | FUN_100243e60 */

void FUN_100243e60(undefined8 param_1)

{
  undefined *puVar1;
  UUID UVar2;
  long extraout_x8;
  
  puVar1 = &DAT_100fb7f20;
  FUN_1000037f0(&DAT_100fb7f20,&DAT_100c37980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,UVar2.unknown);
  FUN_1002ccc34(param_1,0x756f636341707061,0xef6e656b6f54746e,
                &stack0xffffffffffffffd0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100243f1c | thunk_FUN_100243e60 */

void thunk_FUN_100243e60(void)

{
  FUN_100243e60();
  return;
}



/* Address: 0x100243f20 | FUN_100243f20 */

void FUN_100243f20(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 local_48;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fb7f20;
    FUN_100005c24(&DAT_100fb7f20,&DAT_100c37980);
    FUN_100171ed4(param_2,param_3);
    local_48 = param_2;
    _swift_getWitnessTable(param_4,puVar1,&local_48);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x100243fa4 | FUN_100243fa4 */

undefined8 FUN_100243fa4(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 1;
  FUN_1002ccc34(local_28,0xd000000000000021,0x8000000100d8e450,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x100243ff8 | FUN_100243ff8 */

undefined8 FUN_100243ff8(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 0;
  FUN_1002ccc34(local_28,0xd000000000000026,0x8000000100d8e420,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x100244048 | FUN_100244048 */

undefined8 FUN_100244048(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 1;
  FUN_1002ccc34(local_28,0xd00000000000001e,0x8000000100d9ee40,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x10024409c | FUN_10024409c */

undefined8 FUN_10024409c(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 3;
  FUN_1002ccc34(local_28,0x566c6c6177796170,0xee00746e61697261,&local_29,&DAT_100ec4358);
  return local_28[0];
}



/* Address: 0x1002440f8 | FUN_1002440f8 */

void FUN_1002440f8(void)

{
  FUN_10024427c(FUN_1002b85e4,7,FUN_100244110);
  return;
}



/* Address: 0x100244110 | FUN_100244110 */

void FUN_100244110(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1002b85e4();
  _swift_allocObject();
  puVar1 = &DAT_100c3c8e8;
  FUN_1002b80c8(&DAT_100c3c8e8,0);
  *param_1 = puVar1;
  return;
}



/* Address: 0x100244158 | FUN_100244158 */

void FUN_100244158(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  FUN_1002b0184();
  _swift_allocObject();
  puVar2 = &DAT_100c37a20;
  _swift_getKeyPath();
  puVar3 = &DAT_100fb7cf0;
  FUN_1000037f0(&DAT_100fb7cf0,&DAT_100c3ca30);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(lVar1 + 0x10) = puVar2;
  puVar2 = &DAT_100c37a50;
  _swift_getKeyPath();
  puVar3 = &DAT_100fb7f68;
  FUN_1000037f0(&DAT_100fb7f68,&DAT_100c37a78);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(lVar1 + 0x18) = puVar2;
  puVar2 = &DAT_100c37a80;
  _swift_getKeyPath();
  puVar3 = &DAT_100fb7f70;
  FUN_1000037f0(&DAT_100fb7f70,&DAT_100c37aa8);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(lVar1 + 0x20) = puVar2;
  *param_1 = lVar1;
  return;
}



/* Address: 0x100244264 | FUN_100244264 */

void FUN_100244264(void)

{
  FUN_10024427c(FUN_10024ffd4,0x16,FUN_1002442e0);
  return;
}



/* Address: 0x10024427c | FUN_10024427c */

undefined8 FUN_10024427c(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0;
  (*param_1)(0);
  FUN_1000d80e0(&local_28,"PasteLicensingAppStore/DI+AppStore.swift",0x28,2,param_2,0x13,param_3,0,
                uVar1);
  return local_28;
}



/* Address: 0x1002442e0 | FUN_1002442e0 */

void FUN_1002442e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_10024ffd4(0);
  _swift_allocObject();
  uVar1 = 1;
  FUN_10024e6d8(1,&DAT_100c37a10,0,&DAT_100c37a18,0);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100244338 | FUN_100244338 */

undefined1  [16] FUN_100244338(void)

{
  return ZEXT816(0x100244348);
}



/* Address: 0x100244348 | FUN_100244348 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002443c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100244348(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ObservedObject<undefined> OVar5;
  AnyView AVar6;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined1 *)(param_2 + 0x30);
  FUN_100018280(param_2,&local_60);
  uVar2 = 0;
  FUN_10025cdc8();
  uVar3 = uVar2;
  _swift_allocObject();
  FUN_1002563e8(&local_60,uVar1,uVar3);
  puVar4 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  OVar5 = SwiftUI::ObservedObject::init(puVar4,uVar2,puVar4);
  local_60 = OVar5.unknown;
  uStack_58 = uVar2;
  FUN_1002446a4();
  AVar6 = SwiftUI::AnyView::_init(OVar5.unknown,&DAT_100ec49b8,OVar5.unknown);
  *param_1 = AVar6.unknown;
  return;
}



/* Address: 0x100244400 | FUN_100244400 */

void FUN_100244400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  MainActor *pMVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x58) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x60) = pMVar1;
  plVar2 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100244474;
  FUN_100251450(plVar2,unaff_x22 + 0x10,param_4);
  return;
}



/* Address: 0x100244474 | FUN_100244474 */

void FUN_100244474(void)

{
  undefined8 *puVar1;
  UnownedSerialExecutor UVar2;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
  puVar1 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,PTR_typeMetadataAccessor_100eaec10,
                PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1002444f0,UVar2.unknown,puVar1);
  return;
}



/* Address: 0x1002444f0 | FUN_1002444f0 */

void FUN_1002444f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_100244544,uVar1,uVar2);
  return;
}



/* Address: 0x100244544 | FUN_100244544 */

void FUN_100244544(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1[3] = *(undefined8 *)(unaff_x22 + 0x28);
  puVar1[2] = uVar4;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010024455c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


