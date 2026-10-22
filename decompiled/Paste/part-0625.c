/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006ab3b4 | FUN_1006ab3b4 */

void FUN_1006ab3b4(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x1006ab3c8 | FUN_1006ab3c8 */

void FUN_1006ab3c8(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x1006ab3dc | FUN_1006ab3dc */

void FUN_1006ab3dc(void)

{
  FUN_1006aaae8();
  return;
}



/* Address: 0x1006ab3f0 | FUN_1006ab3f0 */

void FUN_1006ab3f0(void)

{
  FUN_1006aae04();
  return;
}



/* Address: 0x1006ab404 | FUN_1006ab404 */

void FUN_1006ab404(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0x0,0xe000000000000000,0xdaff50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ab44c);
  (*pcVar1)();
}



/* Address: 0x1006ab44c | FUN_1006ab44c */

void FUN_1006ab44c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_1006ad130(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1006ab498 | thunk_FUN_1006ab670 */

void thunk_FUN_1006ab670(void)

{
  FUN_1006ab670();
  return;
}



/* Address: 0x1006ab49c | FUN_1006ab49c */

void FUN_1006ab49c(void)

{
  long *unaff_x20;
  
  FUN_1006b0378(*(undefined8 *)(*unaff_x20 + 0x30));
  return;
}



/* Address: 0x1006ab4a8 | FUN_1006ab4a8 */

void FUN_1006ab4a8(void)

{
  FUN_1006a6fbc();
  return;
}



/* Address: 0x1006ab4c8 | FUN_1006ab4c8 */

void FUN_1006ab4c8(void)

{
  FUN_1006a7308();
  return;
}



/* Address: 0x1006ab4e8 | FUN_1006ab4e8 */

void FUN_1006ab4e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = 0;
  FUN_1006a6ebc();
  param_1[3] = uVar1;
  puVar2 = &DAT_100fdbf48;
  FUN_1006afd54(&DAT_100fdbf48,&TargetProtocolConformanceDescriptor_100c6f870);
  param_1[4] = puVar2;
  *param_1 = uVar3;
  _swift_retain(uVar3);
  return;
}



/* Address: 0x1006ab548 | FUN_1006ab548 */

bool FUN_1006ab548(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0,0);
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar3 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x10) + lVar3 * 0x18;
    if (*(char *)(lVar3 + 0x18) == '\0') {
      bVar2 = *(long *)(lVar3 + 0x10) == 0;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ab5a8);
  (*pcVar1)();
}



/* Address: 0x1006ab5a8 | FUN_1006ab5a8 */

void FUN_1006ab5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar5 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x10) + lVar5 * 0x18;
    uVar1 = *(undefined8 *)(lVar5 + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    uVar3 = *(undefined1 *)(lVar5 + 0x18);
    FUN_1006ad53c(uVar1,uVar2,uVar3);
    FUN_1006a6f58(param_1,uVar1,uVar2,uVar3,param_3,param_3,param_4);
    FUN_1006ad108(uVar1,uVar2,uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1006ab670);
  (*pcVar4)();
}



/* Address: 0x1006ab670 | FUN_1006ab670 */

void FUN_1006ab670(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x38,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(lVar1 + 0x38));
  return;
}



/* Address: 0x1006ab6b0 | FUN_1006ab6b0 */

uint FUN_1006ab6b0(uint param_1)

{
  FUN_1006ab548();
  return param_1 & 1;
}



/* Address: 0x1006ab6d4 | FUN_1006ab6d4 */

uint FUN_1006ab6d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar7 = *unaff_x20;
  _swift_beginAccess(lVar7 + 0x10,auStack_58,0,0);
  lVar7 = *(long *)(lVar7 + 0x10);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 != 0) {
    lVar7 = lVar7 + lVar6 * 0x18;
    uVar1 = *(undefined8 *)(lVar7 + 8);
    uVar2 = *(undefined8 *)(lVar7 + 0x10);
    uVar3 = *(undefined1 *)(lVar7 + 0x18);
    FUN_1006ad53c(uVar1,uVar2,uVar3);
    uVar5 = uVar1;
    FUN_1006ad768(uVar1,uVar2,uVar3);
    FUN_1006ad108(uVar1,uVar2,uVar3);
    return (uint)uVar5 & 1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1006ab784);
  (*pcVar4)();
}



/* Address: 0x1006ab784 | FUN_1006ab784 */

undefined1  [16] FUN_1006ab784(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long unaff_x21;
  undefined8 unaff_x25;
  undefined1 auVar7 [16];
  undefined1 auStack_58 [24];
  
  lVar6 = *unaff_x20;
  _swift_beginAccess(lVar6 + 0x10,auStack_58,0,0);
  lVar6 = *(long *)(lVar6 + 0x10);
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006ab84c);
    (*pcVar3)();
  }
  lVar6 = lVar6 + lVar5 * 0x18;
  lVar5 = *(long *)(lVar6 + 8);
  uVar1 = *(undefined8 *)(lVar6 + 0x10);
  uVar2 = *(undefined1 *)(lVar6 + 0x18);
  FUN_1006ad53c(lVar5,uVar1,uVar2);
  lVar6 = lVar5;
  uVar4 = uVar1;
  FUN_1006ad564(lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRetain(uVar4);
    unaff_x21 = lVar6;
    unaff_x25 = uVar4;
  }
  FUN_1006ad108(lVar5,uVar1,uVar2);
  auVar7._8_8_ = unaff_x25;
  auVar7._0_8_ = unaff_x21;
  return auVar7;
}



/* Address: 0x1006ab84c | FUN_1006ab84c */

void FUN_1006ab84c(void)

{
  FUN_1006af6ac();
  return;
}



/* Address: 0x1006ab86c | FUN_1006ab86c */

void FUN_1006ab86c(void)

{
  FUN_1006af950();
  return;
}



/* Address: 0x1006ab88c | FUN_1006ab88c */

void FUN_1006ab88c(undefined8 param_1,undefined8 param_2)

{
  FUN_1006ab954(param_1,param_2,thunk_FUN_1006c9d88,PTR___type_metadata_for_Swift_Int_100eac6f8,
                0xec000000746e4920,FUN_1006ae46c);
  return;
}



/* Address: 0x1006ab8c4 | FUN_1006ab8c4 */

void FUN_1006ab8c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1006aba9c(param_1,param_2,FUN_1006ad96c);
  return;
}



/* Address: 0x1006ab8e0 | FUN_1006ab8e0 */

void FUN_1006ab8e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1006aba9c(param_1,param_2,FUN_1006add30);
  return;
}



/* Address: 0x1006ab8fc | FUN_1006ab8fc */

void FUN_1006ab8fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1006aba9c(param_1,param_2,FUN_1006ae0f4);
  return;
}



/* Address: 0x1006ab918 | FUN_1006ab918 */

void FUN_1006ab918(undefined8 param_1,undefined8 param_2)

{
  FUN_1006ab954(param_1,param_2,thunk_FUN_1006c9d88,PTR___type_metadata_for_Swift_Int64_100eadc00,
                0xee003436746e4920,FUN_1006ae46c);
  return;
}



/* Address: 0x1006ab954 | FUN_1006ab954 */

undefined8
FUN_1006ab954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  undefined1 auStack_78 [24];
  
  lVar7 = *unaff_x20;
  _swift_beginAccess(lVar7 + 0x10,auStack_78,0,0);
  lVar7 = *(long *)(lVar7 + 0x10);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 != 0) {
    lVar7 = lVar7 + lVar6 * 0x18;
    uVar1 = *(undefined8 *)(lVar7 + 8);
    uVar2 = *(undefined8 *)(lVar7 + 0x10);
    uVar3 = *(undefined1 *)(lVar7 + 0x18);
    FUN_1006ad53c(uVar1,uVar2,uVar3);
    uVar5 = uVar1;
    (*param_6)(uVar1,uVar2,uVar3,param_3,param_4,param_5);
    FUN_1006ad108(uVar1,uVar2,uVar3);
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1006aba30);
  (*pcVar4)();
}



/* Address: 0x1006aba30 | FUN_1006aba30 */

void FUN_1006aba30(void)

{
  (extension_Swift)::Swift::SingleValueDecodingContainer::_decode();
  return;
}



/* Address: 0x1006aba44 | FUN_1006aba44 */

void FUN_1006aba44(undefined8 param_1,undefined8 param_2)

{
  FUN_1006ab954(param_1,param_2,thunk_FUN_1006c9fd0,PTR___type_metadata_for_Swift_UInt_100eacb00,
                0xed0000746e495520,FUN_1006af308);
  return;
}



/* Address: 0x1006aba80 | FUN_1006aba80 */

void FUN_1006aba80(undefined8 param_1,undefined8 param_2)

{
  FUN_1006aba9c(param_1,param_2,FUN_1006ae810);
  return;
}



/* Address: 0x1006aba9c | FUN_1006aba9c */

undefined8 FUN_1006aba9c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar7 = *unaff_x20;
  _swift_beginAccess(lVar7 + 0x10,auStack_58,0,0);
  lVar7 = *(long *)(lVar7 + 0x10);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 != 0) {
    lVar7 = lVar7 + lVar6 * 0x18;
    uVar1 = *(undefined8 *)(lVar7 + 8);
    uVar2 = *(undefined8 *)(lVar7 + 0x10);
    uVar3 = *(undefined1 *)(lVar7 + 0x18);
    FUN_1006ad53c(uVar1,uVar2,uVar3);
    uVar5 = uVar1;
    (*param_3)(uVar1,uVar2,uVar3);
    FUN_1006ad108(uVar1,uVar2,uVar3);
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1006abb50);
  (*pcVar4)();
}



/* Address: 0x1006abb50 | FUN_1006abb50 */

void FUN_1006abb50(undefined8 param_1,undefined8 param_2)

{
  FUN_1006aba9c(param_1,param_2,FUN_1006aebd0);
  return;
}



/* Address: 0x1006abb6c | FUN_1006abb6c */

void FUN_1006abb6c(undefined8 param_1,undefined8 param_2)

{
  FUN_1006aba9c(param_1,param_2,FUN_1006aef90);
  return;
}



/* Address: 0x1006abb88 | FUN_1006abb88 */

void FUN_1006abb88(undefined8 param_1,undefined8 param_2)

{
  FUN_1006ab954(param_1,param_2,thunk_FUN_1006c9fd0,PTR___type_metadata_for_Swift_UInt64_100eade90,
                0xef3436746e495520,FUN_1006af308);
  return;
}



/* Address: 0x1006abbc4 | FUN_1006abbc4 */

void FUN_1006abbc4(void)

{
  (extension_Swift)::Swift::SingleValueDecodingContainer::_decode();
  return;
}



/* Address: 0x1006abbd8 | FUN_1006abbd8 */

void FUN_1006abbd8(void)

{
  FUN_1006ab5a8();
  return;
}



/* Address: 0x1006abbf8 | FUN_1006abbf8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006abe10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006abbf8(undefined8 param_1,undefined8 param_2,long param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  DecodingError DVar3;
  undefined *puVar4;
  undefined7 uVar10;
  URL UVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  code *pcVar11;
  long unaff_x20;
  char *pcVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar4 = &DAT_100fdbf98;
  FUN_1000f7830(&DAT_100fdbf98,&DAT_100c6f998);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_60 + -extraout_x8;
  uVar10 = (undefined7)((ulong)puVar4 >> 8);
  if (param_4 == '\0') {
    if (param_3 != 0) {
      Foundation::URL::_init();
      UVar5 = Foundation::URL::typeMetadataAccessor();
      lVar14 = *(long *)(UVar5.unknown + -8);
      puVar8 = puVar13;
      (**(code **)(lVar14 + 0x30))(puVar13,1,UVar5.unknown);
      if ((int)puVar8 != 1) {
        (**(code **)(lVar14 + 0x20))(param_1,puVar13,UVar5.unknown);
        return;
      }
      FUN_1000fb4c4(puVar13,&DAT_100fdbf98,&DAT_100c6f998);
      DVar3 = Swift::DecodingError::typeMetadataAccessor();
      lVar14 = CONCAT71((int7)((ulong)puVar8 >> 8),DVar3.value);
      puVar7 = (undefined8 *)
               PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(lVar14,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      puVar4 = &DAT_100fdbf50;
      FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
      iVar2 = *(int *)(puVar4 + 0x30);
      *puVar7 = UVar5.unknown;
      _swift_beginAccess(unaff_x20 + 0x38,auStack_58,0,0);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
      _swift_bridgeObjectRetain(uVar9);
      Swift::DecodingError::Context::_init
                ((undefined *)((long)puVar7 + (long)iVar2),uVar9,0xd000000000000012,
                 0x8000000100daff10,0);
      uVar1 = *(undefined4 *)
               PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
      ;
      pcVar11 = *(code **)(*(long *)(lVar14 + -8) + 0x68);
      goto LAB_1006abd0c;
    }
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    lVar14 = CONCAT71(uVar10,DVar3.value);
    puVar7 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar14,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar4 = &DAT_100fdbf50;
    FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
    iVar2 = *(int *)(puVar4 + 0x30);
    UVar5 = Foundation::URL::typeMetadataAccessor();
    *puVar7 = UVar5.unknown;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_58,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
    pcVar12 = " array or dictionary";
    _swift_bridgeObjectRetain(uVar6);
    puVar4 = (undefined *)((long)puVar7 + (long)iVar2);
    uVar9 = 0xd00000000000001f;
  }
  else {
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    lVar14 = CONCAT71(uVar10,DVar3.value);
    puVar7 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar14,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar4 = &DAT_100fdbf50;
    FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
    iVar2 = *(int *)(puVar4 + 0x30);
    UVar5 = Foundation::URL::typeMetadataAccessor();
    *puVar7 = UVar5.unknown;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_58,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
    pcVar12 = "Unrecognised Error";
    _swift_bridgeObjectRetain(uVar6);
    puVar4 = (undefined *)((long)puVar7 + (long)iVar2);
    uVar9 = 0xd000000000000024;
  }
  Swift::DecodingError::Context::_init(puVar4,uVar6,uVar9,(ulong)pcVar12 | 0x8000000000000000,0);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
  ;
  pcVar11 = *(code **)(*(long *)(lVar14 + -8) + 0x68);
LAB_1006abd0c:
  (*pcVar11)(puVar7,uVar1,lVar14);
  _swift_willThrow();
  return;
}



/* Address: 0x1006abed4 | FUN_1006abed4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001006ac4f8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006ac614 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006abed4(undefined8 param_1,byte *******param_2,byte *******param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  byte ******ppppppbVar5;
  undefined4 uVar6;
  code *pcVar7;
  DecodingError DVar8;
  undefined *puVar9;
  Date DVar10;
  NSString *pNVar11;
  ISO8601FormatStyle IVar12;
  ISO8601FormatStyle IVar13;
  byte *******pppppppbVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar19;
  long unaff_x20;
  long unaff_x21;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  code *pcVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  double timeIntervalSince1970;
  code *local_d0;
  undefined8 local_c8;
  byte ******local_c0;
  undefined4 local_b4;
  byte ******local_a8;
  ulong uStack_a0;
  byte local_91;
  double local_58;
  
  puVar9 = &DAT_100fdbf88;
  local_c8 = param_1;
  local_c0 = (byte ******)param_3;
  local_b4 = param_4;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = (long)&local_d0 - extraout_x8;
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar25 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar25 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar24 - extraout_x12_00;
  pcVar7 = *(code **)(unaff_x20 + 0x18);
  lVar18 = *(long *)(unaff_x20 + 0x20);
  if (*(char *)(unaff_x20 + 0x28) == '\0') {
    local_d0 = (code *)DVar10.unknown;
    FUN_1006ad0e8(pcVar7,lVar18,0);
    pppppppbVar14 = (byte *******)local_c0;
    FUN_1006ad564(param_2,local_c0,local_b4);
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRetain(pppppppbVar14);
      pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pppppppbVar14);
      DVar10.unknown = (undefined *)objc_stub::dateFromString_((ID)pcVar7,pNVar11);
      if (DVar10.unknown != (undefined *)0x0) {
        Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar10);
        FUN_1006ad130(pcVar7,lVar18,0);
        pcVar7 = local_d0;
        pcVar23 = *(code **)(lVar19 + 0x20);
        (*pcVar23)(lVar24,lVar25,local_d0);
        (*pcVar23)(local_c8,lVar24,pcVar7);
        return;
      }
      DVar8 = Swift::DecodingError::typeMetadataAccessor();
      uVar22 = (ulong)(byte)DVar8.value;
      puVar9 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(uVar22,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      _swift_beginAccess(unaff_x20 + 0x38,&stack0xffffffffffffff70,0,0);
      uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
      _swift_bridgeObjectRetain(uVar17);
      Swift::DecodingError::Context::_init(puVar9,uVar17,0xd000000000000013,0x8000000100d8fc40,0);
      (**(code **)(*(long *)(uVar22 - 8) + 0x68))
                (puVar9,*(undefined4 *)
                         PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
                 ,uVar22);
      _swift_willThrow();
    }
    uVar17 = 0;
LAB_1006ac318:
    FUN_1006ad130(pcVar7,lVar18,uVar17);
    return;
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    local_d0 = pcVar7;
    _swift_beginAccess(unaff_x20 + 0x10,&stack0xffffffffffffff70,0x21,0);
    uVar21 = *(ulong *)(unaff_x20 + 0x10);
    _swift_retain(lVar18);
    uVar22 = uVar21;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x10) = uVar21;
    uVar15 = uVar21;
    if ((uVar22 & 1) == 0) {
      uVar15 = 0;
      FUN_1006a2628(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
      *(ulong *)(unaff_x20 + 0x10) = uVar15;
    }
    uVar22 = *(ulong *)(uVar15 + 0x10);
    uVar21 = uVar15;
    if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar22) {
      uVar21 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
      FUN_1006a2628(uVar21,uVar22 + 1,1,uVar15);
    }
    uVar6 = local_b4;
    ppppppbVar5 = local_c0;
    *(ulong *)(uVar21 + 0x10) = uVar22 + 1;
    lVar19 = uVar21 + uVar22 * 0x18;
    *(byte ********)(lVar19 + 0x20) = param_2;
    *(byte *******)(lVar19 + 0x28) = local_c0;
    *(char *)(lVar19 + 0x30) = (char)local_b4;
    *(ulong *)(unaff_x20 + 0x10) = uVar21;
    _swift_endAccess(&stack0xffffffffffffff70);
    FUN_1006a6ebc();
    FUN_1006afd54(&DAT_100fdbf80,&TargetProtocolConformanceDescriptor_100c6f928);
    FUN_1006ad53c(param_2,ppppppbVar5,uVar6);
    _swift_retain();
    (*local_d0)(local_c8,&stack0xffffffffffffff70);
    if (unaff_x21 == 0) {
      FUN_100004594(&stack0xffffffffffffff70);
      _swift_beginAccess(unaff_x20 + 0x10,&stack0xffffffffffffff70,0x21,0);
      uVar22 = *(ulong *)(unaff_x20 + 0x10);
      if (*(long *)(uVar22 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006ac908);
        (*pcVar7)();
      }
      uVar15 = uVar22;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar15 & 1) == 0) {
        FUN_1006f8218();
        lVar19 = *(long *)(uVar22 + 0x10);
      }
      else {
        lVar19 = *(long *)(uVar22 + 0x10);
      }
      if (lVar19 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006ac920);
        (*pcVar7)();
      }
    }
    else {
      FUN_100004594(&stack0xffffffffffffff70);
      _swift_beginAccess(unaff_x20 + 0x10,&stack0xffffffffffffff70,0x21,0);
      uVar22 = *(ulong *)(unaff_x20 + 0x10);
      if (*(long *)(uVar22 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006ac8ec);
        (*pcVar7)();
      }
      uVar15 = uVar22;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar15 & 1) == 0) {
        FUN_1006f8218();
        lVar19 = *(long *)(uVar22 + 0x10);
      }
      else {
        lVar19 = *(long *)(uVar22 + 0x10);
      }
      if (lVar19 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006ac0cc);
        (*pcVar7)();
      }
    }
    lVar20 = uVar22 + lVar19 * 0x18;
    uVar17 = *(undefined8 *)(lVar20 + 8);
    uVar1 = *(undefined8 *)(lVar20 + 0x10);
    uVar2 = *(undefined1 *)(lVar20 + 0x18);
    *(long *)(uVar22 + 0x10) = lVar19 + -1;
    *(ulong *)(unaff_x20 + 0x10) = uVar22;
    _swift_endAccess(&stack0xffffffffffffff70);
    FUN_1006ad108(uVar17,uVar1,uVar2);
    uVar17 = 1;
    pcVar7 = local_d0;
    goto LAB_1006ac318;
  }
  uVar22 = lVar18 + (ulong)(pcVar7 >= (code *)0x2);
  pppppppbVar14 = (byte *******)local_c0;
  if ((long)-uVar22 < 0 == SCARRY8(~uVar22,(ulong)(pcVar7 < (code *)0x2))) {
    if (pcVar7 == (code *)0x0 && lVar18 == 0) {
      _swift_beginAccess(unaff_x20 + 0x10,&stack0xffffffffffffff70,0x21,0);
      uVar21 = *(ulong *)(unaff_x20 + 0x10);
      uVar22 = uVar21;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x10) = uVar21;
      uVar15 = uVar21;
      if ((uVar22 & 1) == 0) {
        uVar15 = 0;
        FUN_1006a2628(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
        *(ulong *)(unaff_x20 + 0x10) = uVar15;
      }
      uVar22 = *(ulong *)(uVar15 + 0x10);
      uVar21 = uVar15;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar22) {
        uVar21 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_1006a2628(uVar21,uVar22 + 1,1,uVar15);
      }
      uVar6 = local_b4;
      ppppppbVar5 = local_c0;
      *(ulong *)(uVar21 + 0x10) = uVar22 + 1;
      lVar18 = uVar21 + uVar22 * 0x18;
      *(byte ********)(lVar18 + 0x20) = param_2;
      *(byte *******)(lVar18 + 0x28) = local_c0;
      *(char *)(lVar18 + 0x30) = (char)local_b4;
      *(ulong *)(unaff_x20 + 0x10) = uVar21;
      _swift_endAccess(&stack0xffffffffffffff70);
      FUN_1006a6ebc();
      FUN_1006afd54(&DAT_100fdbf80,&TargetProtocolConformanceDescriptor_100c6f928);
      FUN_1006ad53c(param_2,ppppppbVar5,uVar6);
      _swift_retain();
      Foundation::Date::_init();
      if (unaff_x21 == 0) {
        _swift_beginAccess(unaff_x20 + 0x10,&stack0xffffffffffffff70,0x21,0);
        uVar22 = *(ulong *)(unaff_x20 + 0x10);
        if (*(long *)(uVar22 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006aca24);
          (*pcVar7)();
        }
        uVar15 = uVar22;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar15 & 1) == 0) {
          FUN_1006f8218();
          lVar18 = *(long *)(uVar22 + 0x10);
        }
        else {
          lVar18 = *(long *)(uVar22 + 0x10);
        }
        if (lVar18 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006aca3c);
          (*pcVar7)();
        }
      }
      else {
        _swift_beginAccess(unaff_x20 + 0x10,&stack0xffffffffffffff70,0x21,0);
        uVar22 = *(ulong *)(unaff_x20 + 0x10);
        if (*(long *)(uVar22 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006ac968);
          (*pcVar7)();
        }
        uVar15 = uVar22;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar15 & 1) == 0) {
          FUN_1006f8218();
          lVar18 = *(long *)(uVar22 + 0x10);
        }
        else {
          lVar18 = *(long *)(uVar22 + 0x10);
        }
        if (lVar18 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006ac21c);
          (*pcVar7)();
        }
      }
      lVar19 = uVar22 + lVar18 * 0x18;
      uVar17 = *(undefined8 *)(lVar19 + 8);
      uVar1 = *(undefined8 *)(lVar19 + 0x10);
      uVar2 = *(undefined1 *)(lVar19 + 0x18);
      *(long *)(uVar22 + 0x10) = lVar18 + -1;
      *(ulong *)(unaff_x20 + 0x10) = uVar22;
      _swift_endAccess(&stack0xffffffffffffff70);
      FUN_1006ad108(uVar17,uVar1,uVar2);
      return;
    }
    FUN_1006ad564(param_2,local_c0,local_b4);
    if (unaff_x21 != 0) {
      return;
    }
    local_58 = 0.0;
    if (((ulong)pppppppbVar14 >> 0x3c & 1) != 0) {
LAB_1006ac9d0:
      _swift_bridgeObjectRetain(pppppppbVar14);
      Swift::_StringGuts::__slowWithCString((_StringGuts)0x1006b00f0);
      _swift_bridgeObjectRelease(pppppppbVar14);
      timeIntervalSince1970 = local_58;
      if ((local_91 & 1) != 0) goto LAB_1006ac890;
      goto LAB_1006ac758;
    }
    if (((ulong)pppppppbVar14 >> 0x3d & 1) == 0) {
      if (((ulong)param_2 >> 0x3c & 1) == 0) goto LAB_1006ac9d0;
      param_2 = (byte *******)(((ulong)pppppppbVar14 & 0xfffffffffffffff) + 0x20);
      if ((*(byte *)param_2 < 0x21) &&
         ((1L << ((ulong)*(byte *)param_2 & 0x3f) & 0x100003e01U) != 0)) goto LAB_1006ac744;
      _swift_bridgeObjectRetain(pppppppbVar14);
    }
    else {
      uStack_a0 = (ulong)pppppppbVar14 & 0xffffffffffffff;
      local_a8 = (byte ******)param_2;
      if ((((uint)param_2 & 0xff) < 0x21) && ((1L << ((ulong)param_2 & 0x3f) & 0x100003e01U) != 0))
      goto LAB_1006ac744;
      _swift_bridgeObjectRetain(pppppppbVar14);
      param_2 = &local_a8;
    }
    __swift_stdlib_strtod_clocale(param_2,&local_58);
    if (param_2 != (byte *******)0x0) {
      bVar3 = *(byte *)param_2;
      _swift_bridgeObjectRelease(pppppppbVar14);
      timeIntervalSince1970 = local_58;
      if (bVar3 != 0) goto LAB_1006ac758;
LAB_1006ac890:
      Foundation::Date::init(timeIntervalSince1970);
      return;
    }
  }
  else {
    if (pcVar7 != (code *)0x2 || lVar18 != 0) {
      FUN_1006ad564(param_2,local_c0,local_b4);
      if (unaff_x21 != 0) {
        return;
      }
      IVar12 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(undefined8 *)(*(long *)(IVar12.unknown + -8) + 0x40));
      _swift_bridgeObjectRetain(pppppppbVar14);
      IVar13 = (extension_Foundation)::Foundation::ParseStrategy::_get_iso8601();
      FUN_1006afd94();
      Foundation::Date::_init
                (lVar26,IVar13.unknown,lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0),
                 IVar12.unknown,IVar13.unknown);
      (**(code **)(lVar19 + 0x38))(lVar26,0,1,DVar10.unknown);
      pcVar7 = *(code **)(lVar19 + 0x20);
      (*pcVar7)(lVar20,lVar26,DVar10.unknown);
      (*pcVar7)(local_c8,lVar20,DVar10.unknown);
      return;
    }
    FUN_1006ad564(param_2,local_c0,local_b4);
    if (unaff_x21 != 0) {
      return;
    }
    local_58 = 0.0;
    if (((ulong)pppppppbVar14 >> 0x3c & 1) != 0) {
LAB_1006ac980:
      _swift_bridgeObjectRetain(pppppppbVar14);
      Swift::_StringGuts::__slowWithCString((_StringGuts)0x1006b00f0);
      _swift_bridgeObjectRelease(pppppppbVar14);
      if ((local_91 & 1) == 0) goto LAB_1006ac758;
LAB_1006ac6fc:
      timeIntervalSince1970 = local_58 / 1000.0;
      goto LAB_1006ac890;
    }
    if (((ulong)pppppppbVar14 >> 0x3d & 1) == 0) {
      if (((ulong)param_2 >> 0x3c & 1) == 0) goto LAB_1006ac980;
      param_2 = (byte *******)(((ulong)pppppppbVar14 & 0xfffffffffffffff) + 0x20);
      if ((0x20 < *(byte *)param_2) ||
         ((1L << ((ulong)*(byte *)param_2 & 0x3f) & 0x100003e01U) == 0)) {
        _swift_bridgeObjectRetain(pppppppbVar14);
        goto LAB_1006ac6e4;
      }
    }
    else {
      uStack_a0 = (ulong)pppppppbVar14 & 0xffffffffffffff;
      local_a8 = (byte ******)param_2;
      if ((0x20 < ((uint)param_2 & 0xff)) || ((1L << ((ulong)param_2 & 0x3f) & 0x100003e01U) == 0))
      {
        _swift_bridgeObjectRetain(pppppppbVar14);
        param_2 = &local_a8;
LAB_1006ac6e4:
        __swift_stdlib_strtod_clocale(param_2,&local_58);
        if (param_2 != (byte *******)0x0) {
          bVar3 = *(byte *)param_2;
          _swift_bridgeObjectRelease(pppppppbVar14);
          if (bVar3 != 0) goto LAB_1006ac758;
          goto LAB_1006ac6fc;
        }
        goto LAB_1006ac754;
      }
    }
LAB_1006ac744:
    local_58 = 0.0;
    _swift_bridgeObjectRetain(pppppppbVar14);
  }
LAB_1006ac754:
  _swift_bridgeObjectRelease(pppppppbVar14);
  param_2 = pppppppbVar14;
LAB_1006ac758:
  DVar8 = Swift::DecodingError::typeMetadataAccessor();
  lVar18 = CONCAT71((int7)((ulong)param_2 >> 8),DVar8.value);
  puVar16 = (undefined8 *)
            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar18,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar9 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar4 = *(int *)(puVar9 + 0x30);
  *puVar16 = PTR___type_metadata_for_Swift_Double_100eac5d0;
  _swift_beginAccess(unaff_x20 + 0x38,&stack0xffffffffffffff70,0,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar17);
  Swift::DecodingError::Context::_init
            ((long)puVar16 + (long)iVar4,uVar17,0x6465746365707845,0xef656c62756f4420,0);
  (**(code **)(*(long *)(lVar18 + -8) + 0x68))
            (puVar16,*(undefined4 *)
                      PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,lVar18);
  _swift_willThrow();
  return;
}



/* Address: 0x1006aca3c | FUN_1006aca3c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006acc80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006aca3c(undefined8 *param_1,NSDataBase64DecodingOptions param_2,ulong param_3,
                  undefined8 param_4,undefined *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  DecodingError DVar4;
  Date DVar5;
  URL UVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x20;
  long unaff_x21;
  ulong uVar14;
  undefined1 auStack_88 [24];
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar10 = PTR___type_metadata_for_Foundation_Data_100ea7300;
  if (param_5 == PTR___type_metadata_for_Foundation_Data_100ea7300) {
    FUN_1006ad564();
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRetain(param_3);
      uVar13 = param_3;
      Foundation::Data::_init(param_2);
      _swift_bridgeObjectRelease(param_3);
      if (uVar13 >> 0x3c < 0xf) {
        param_1[3] = puVar10;
        *param_1 = param_2.unknown;
        param_1[1] = uVar13;
      }
      else {
        DVar4 = Swift::DecodingError::typeMetadataAccessor();
        lVar12 = CONCAT71((int7)((ulong)param_2.unknown >> 8),DVar4.value);
        puVar10 = 
        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
        _swift_allocError(lVar12,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        _swift_beginAccess(unaff_x20 + 0x38,auStack_88,0,0);
        uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
        _swift_bridgeObjectRetain(uVar7);
        Swift::DecodingError::Context::_init(puVar10,uVar7,0xd000000000000025,0x8000000100dafeb0,0);
        (**(code **)(*(long *)(lVar12 + -8) + 0x68))
                  (puVar10,*(undefined4 *)
                            PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
                   ,lVar12);
        _swift_willThrow();
      }
    }
  }
  else {
    DVar5 = Foundation::Date::typeMetadataAccessor();
    if (param_5 == DVar5.unknown) {
      param_1[3] = DVar5.unknown;
      puVar8 = param_1;
      FUN_10000cbb0(param_1);
      FUN_1006abed4(puVar8,param_2.unknown,param_3,param_4);
    }
    else {
      UVar6 = Foundation::URL::typeMetadataAccessor();
      if (param_5 != UVar6.unknown) {
        _swift_beginAccess(unaff_x20 + 0x10,auStack_88,0x21,0);
        uVar14 = *(ulong *)(unaff_x20 + 0x10);
        uVar13 = uVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(unaff_x20 + 0x10) = uVar14;
        uVar9 = uVar14;
        if ((uVar13 & 1) == 0) {
          uVar9 = 0;
          FUN_1006a2628(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
          *(ulong *)(unaff_x20 + 0x10) = uVar9;
        }
        uVar13 = *(ulong *)(uVar9 + 0x10);
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar13) {
          uVar14 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_1006a2628(uVar14,uVar13 + 1,1,uVar9);
          uVar9 = uVar14;
        }
        *(ulong *)(uVar9 + 0x10) = uVar13 + 1;
        lVar12 = uVar9 + uVar13 * 0x18;
        *(undefined **)(lVar12 + 0x20) = param_2.unknown;
        *(ulong *)(lVar12 + 0x28) = param_3;
        *(char *)(lVar12 + 0x30) = (char)param_4;
        *(ulong *)(unaff_x20 + 0x10) = uVar9;
        _swift_endAccess(auStack_88);
        FUN_1006a6ebc();
        FUN_1006afd54(&DAT_100fdbf80,&TargetProtocolConformanceDescriptor_100c6f928);
        local_70 = param_5;
        uStack_68 = param_6;
        FUN_10000cbb0(auStack_88);
        FUN_1006ad53c(param_2.unknown,param_3,param_4);
        _swift_retain();
        Swift::Decodable::_init();
        puVar10 = local_70;
        if (unaff_x21 == 0) {
          FUN_100004640(auStack_88,local_70);
          param_1[3] = puVar10;
          FUN_10000cbb0();
          (**(code **)(*(long *)(puVar10 + -8) + 0x10))();
          FUN_100004594(auStack_88);
          _swift_beginAccess(unaff_x20 + 0x10,auStack_88,0x21,0);
          uVar13 = *(ulong *)(unaff_x20 + 0x10);
          if (*(long *)(uVar13 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1006ace60);
            (*pcVar3)();
          }
          uVar9 = uVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar9 & 1) == 0) {
            FUN_1006f8218();
            lVar12 = *(long *)(uVar13 + 0x10);
          }
          else {
            lVar12 = *(long *)(uVar13 + 0x10);
          }
          if (lVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1006ace78);
            (*pcVar3)();
          }
        }
        else {
          FUN_100445238(auStack_88);
          _swift_beginAccess(unaff_x20 + 0x10,auStack_88,0x21,0);
          uVar13 = *(ulong *)(unaff_x20 + 0x10);
          if (*(long *)(uVar13 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1006ace44);
            (*pcVar3)();
          }
          uVar9 = uVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar9 & 1) == 0) {
            FUN_1006f8218();
            lVar12 = *(long *)(uVar13 + 0x10);
          }
          else {
            lVar12 = *(long *)(uVar13 + 0x10);
          }
          if (lVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1006acbd0);
            (*pcVar3)();
          }
        }
        lVar11 = uVar13 + lVar12 * 0x18;
        uVar7 = *(undefined8 *)(lVar11 + 8);
        uVar1 = *(undefined8 *)(lVar11 + 0x10);
        uVar2 = *(undefined1 *)(lVar11 + 0x18);
        *(long *)(uVar13 + 0x10) = lVar12 + -1;
        *(ulong *)(unaff_x20 + 0x10) = uVar13;
        _swift_endAccess(auStack_88);
        FUN_1006ad108(uVar7,uVar1,uVar2);
        return;
      }
      param_1[3] = UVar6.unknown;
      puVar8 = param_1;
      FUN_10000cbb0(param_1);
      FUN_1006abbf8(puVar8,param_2.unknown,param_3,param_4);
    }
    if (unaff_x21 != 0) {
      FUN_100445238(param_1);
    }
  }
  return;
}



/* Address: 0x1006ace78 | FUN_1006ace78 */

code * FUN_1006ace78(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100ef66d8;
  _swift_allocObject(&DAT_100ef66d8,uVar5 + lVar3,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2)
  ;
  return FUN_1006ad1a0;
}



/* Address: 0x1006acf38 | FUN_1006acf38 */

/* WARNING: Removing unreachable block (ram,0x0001006acff0) */
/* WARNING: Removing unreachable block (ram,0x0001006ad0a4) */

void FUN_1006acf38(long param_1)

{
  long unaff_x21;
  String SVar1;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_88,local_70);
    SVar1 = Swift::SingleValueDecodingContainer::_decode();
    Foundation::ParseStrategy::_parse();
    _swift_bridgeObjectRelease(SVar1.bridgeObject);
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x1006ad0e8 | FUN_1006ad0e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1006ad0e8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_retain(param_2);
    return param_2;
  }
  if (param_3 == '\0') {
    return param_1;
  }
  return param_1;
}



/* Address: 0x1006ad108 | FUN_1006ad108 */

void FUN_1006ad108(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\x02') && (param_3 != '\x01')) {
    if (param_3 == '\0') {
      _swift_bridgeObjectRelease(param_2);
      return;
    }
    return;
  }
  _swift_release();
  return;
}



/* Address: 0x1006ad130 | FUN_1006ad130 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1006ad130(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_release(param_2);
    return param_2;
  }
  if (param_3 == '\0') {
    return 0;
  }
  return param_1;
}



/* Address: 0x1006ad150 | FUN_1006ad150 */

void FUN_1006ad150(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006ad1a0 | FUN_1006ad1a0 */

void FUN_1006ad1a0(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  FUN_1006acf38(param_1,unaff_x20 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff)),
                *(long *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006ad1cc | FUN_1006ad1cc */

void FUN_1006ad1cc(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1006ad1d8 | FUN_1006ad1d8 */

undefined1  [16] FUN_1006ad1d8(void)

{
  return ZEXT816(0x100ef6758);
}



/* Address: 0x1006ad1e8 | thunk_FUN_1006ad1fc */

void thunk_FUN_1006ad1fc(void)

{
  FUN_1006ad1fc();
  return;
}



/* Address: 0x1006ad1ec | FUN_1006ad1ec */

void FUN_1006ad1ec(undefined8 *param_1)

{
  FUN_1006ad130(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1006ad1fc | FUN_1006ad1fc */

undefined8 * FUN_1006ad1fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1006ad0e8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1006ad244 | FUN_1006ad244 */

undefined8 * FUN_1006ad244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1006ad0e8(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1006ad130(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1006ad298 | FUN_1006ad298 */

void FUN_1006ad298(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1006ad2ac | FUN_1006ad2ac */

undefined8 * FUN_1006ad2ac(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1006ad130(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x1006ad2f0 | FUN_1006ad2f0 */

uint FUN_1006ad2f0(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 2;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = (uint)*(byte *)(param_1 + 4);
  }
  return uVar1;
}



/* Address: 0x1006ad308 | FUN_1006ad308 */

void FUN_1006ad308(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2);
    param_1[1] = 0;
    param_2 = 2;
  }
  *(char *)(param_1 + 2) = (char)param_2;
  return;
}



/* Address: 0x1006ad320 | FUN_1006ad320 */

undefined1  [16] FUN_1006ad320(void)

{
  return ZEXT816(0x100ef67f0);
}



/* Address: 0x1006ad330 | FUN_1006ad330 */

void FUN_1006ad330(void)

{
  FUN_1006ad338(0);
  return;
}



/* Address: 0x1006ad338 | FUN_1006ad338 */

void FUN_1006ad338(void)

{
  Date DVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (DAT_100fdbe38 != 0) {
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar2 = &DAT_100fdbe40;
  FUN_1000f8b08(&DAT_100fdbe40,&DAT_100c6f808);
  uVar3 = 0x45000001;
  _swift_getFunctionTypeMetadata1(0x45000001,puVar2,DVar1.unknown);
  DAT_100fdbe38 = uVar3;
  return;
}



/* Address: 0x1006ad3a8 | thunk_FUN_1006ad3ac */

void thunk_FUN_1006ad3ac(undefined8 *param_1)

{
  FUN_1006ad130(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  _swift_bridgeObjectRelease(param_1[3]);
  return;
}



/* Address: 0x1006ad3ac | FUN_1006ad3ac */

void FUN_1006ad3ac(undefined8 *param_1)

{
  FUN_1006ad130(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  _swift_bridgeObjectRelease(param_1[3]);
  return;
}



/* Address: 0x1006ad3dc | thunk_FUN_1006ad3e0 */

undefined8 * thunk_FUN_1006ad3e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1006ad0e8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1006ad3e0 | FUN_1006ad3e0 */

undefined8 * FUN_1006ad3e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1006ad0e8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1006ad440 | thunk_FUN_1006ad444 */

undefined8 * thunk_FUN_1006ad444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_1006ad0e8(uVar6,uVar2,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar6;
  param_1[1] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar4;
  FUN_1006ad130(uVar1,uVar3,uVar5);
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Address: 0x1006ad444 | FUN_1006ad444 */

undefined8 * FUN_1006ad444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_1006ad0e8(uVar6,uVar2,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar6;
  param_1[1] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar4;
  FUN_1006ad130(uVar1,uVar3,uVar5);
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Address: 0x1006ad4bc | thunk_FUN_1006ad4c0 */

undefined8 * thunk_FUN_1006ad4c0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1006ad130(uVar3,uVar4,uVar2);
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}


