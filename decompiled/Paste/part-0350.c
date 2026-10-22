/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10044b76c | FUN_10044b76c */

undefined8 * FUN_10044b76c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1001037b4(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Address: 0x10044b7a8 | FUN_10044b7a8 */

void FUN_10044b7a8(undefined8 *param_1)

{
  FUN_10003bf2c(*param_1,param_1[1]);
  return;
}



/* Address: 0x10044b7b4 | FUN_10044b7b4 */

undefined8 * FUN_10044b7b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  return param_1;
}



/* Address: 0x10044b7f8 | FUN_10044b7f8 */

void FUN_10044b7f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x10044b804 | FUN_10044b804 */

undefined8 * FUN_10044b804(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  return param_1;
}



/* Address: 0x10044b83c | FUN_10044b83c */

int FUN_10044b83c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10044b890 | FUN_10044b890 */

void FUN_10044b890(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xd) {
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      param_1[1] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0xd);
    param_1[1] = 0;
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x10044b8dc | FUN_10044b8dc */

undefined1  [16] FUN_10044b8dc(void)

{
  return ZEXT816(0x100ed5668);
}



/* Address: 0x10044b8ec | FUN_10044b8ec */

undefined1  [16] FUN_10044b8ec(void)

{
  return ZEXT816(0x100ed5690);
}



/* Address: 0x10044b8fc | FUN_10044b8fc */

undefined1  [16] FUN_10044b8fc(void)

{
  return ZEXT816(0x100ed56b0);
}



/* Address: 0x10044b90c | FUN_10044b90c */

undefined1  [16] FUN_10044b90c(void)

{
  return ZEXT816(0x100ed56d0);
}



/* Address: 0x10044b91c | FUN_10044b91c */

undefined1  [16] FUN_10044b91c(void)

{
  return ZEXT816(0x100ed56f0);
}



/* Address: 0x10044b92c | FUN_10044b92c */

void FUN_10044b92c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10044b938 | FUN_10044b938 */

void FUN_10044b938(void)

{
  return;
}



/* Address: 0x10044b93c | FUN_10044b93c */

undefined1  [16] FUN_10044b93c(void)

{
  return ZEXT816(0x100ed5780);
}



/* Address: 0x10044b94c | FUN_10044b94c */

undefined1  [16] FUN_10044b94c(void)

{
  return ZEXT816(0x100ed5810);
}



/* Address: 0x10044b95c | FUN_10044b95c */

void FUN_10044b95c(undefined8 *param_1)

{
  _swift_release(*param_1);
  return;
}



/* Address: 0x10044b964 | FUN_10044b964 */

undefined8 * FUN_10044b964(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_retain();
  return param_1;
}



/* Address: 0x10044b9a0 | FUN_10044b9a0 */

undefined8 * FUN_10044b9a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x10044ba04 | FUN_10044ba04 */

void FUN_10044ba04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10044ba18 | FUN_10044ba18 */

undefined8 * FUN_10044ba18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _swift_release(*param_1);
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x10044ba54 | FUN_10044ba54 */

int FUN_10044ba54(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10044ba9c | FUN_10044ba9c */

void FUN_10044ba9c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10044bae4 | FUN_10044bae4 */

undefined1  [16] FUN_10044bae4(void)

{
  return ZEXT816(0x100ed5888);
}



/* Address: 0x10044baf4 | FUN_10044baf4 */

void FUN_10044baf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7590 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b42c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b42c,&DAT_100ed5930);
  DAT_100fc7590 = pTVar1;
  return;
}



/* Address: 0x10044bb34 | FUN_10044bb34 */

void FUN_10044bb34(void)

{
  undefined *puVar1;
  
  if (DAT_100fc7598 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Swift__Decodable_100ea7318;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Swift__Decodable_100ea7318,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100fc7598 = puVar1;
  return;
}



/* Address: 0x10044bb74 | FUN_10044bb74 */

void FUN_10044bb74(void)

{
  return;
}



/* Address: 0x10044bb78 | FUN_10044bb78 */

undefined1  [16] FUN_10044bb78(void)

{
  return ZEXT816(0x100ed5930);
}



/* Address: 0x10044bb88 | thunk_FUN_10044bb8c */

void thunk_FUN_10044bb8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc75a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b404;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b404,&DAT_100ed5930);
  DAT_100fc75a0 = pTVar1;
  return;
}



/* Address: 0x10044bb8c | FUN_10044bb8c */

void FUN_10044bb8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc75a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b404;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b404,&DAT_100ed5930);
  DAT_100fc75a0 = pTVar1;
  return;
}



/* Address: 0x10044bbcc | thunk_FUN_10044bbd0 */

void thunk_FUN_10044bbd0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc75a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b39c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b39c,&DAT_100ed5930);
  DAT_100fc75a8 = pTVar1;
  return;
}



/* Address: 0x10044bbd0 | FUN_10044bbd0 */

void FUN_10044bbd0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc75a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b39c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b39c,&DAT_100ed5930);
  DAT_100fc75a8 = pTVar1;
  return;
}



/* Address: 0x10044bc10 | thunk_FUN_10044bc14 */

void thunk_FUN_10044bc14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc75b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b374;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b374,&DAT_100ed5930);
  DAT_100fc75b0 = pTVar1;
  return;
}



/* Address: 0x10044bc14 | FUN_10044bc14 */

void FUN_10044bc14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc75b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b374;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b374,&DAT_100ed5930);
  DAT_100fc75b0 = pTVar1;
  return;
}



/* Address: 0x10044bc54 | thunk_FUN_10044b3c4 */

void thunk_FUN_10044b3c4(void)

{
  thunk_FUN_10044b3c4();
  return;
}



/* Address: 0x10044bc58 | thunk_FUN_1002abb24 */

void thunk_FUN_1002abb24(void)

{
  FUN_1002abb24();
  return;
}



/* Address: 0x10044bc5c | thunk_FUN_10044b398 */

void thunk_FUN_10044b398(void)

{
  FUN_10044b398();
  return;
}



/* Address: 0x10044bc60 | thunk_FUN_10044b354 */

void thunk_FUN_10044b354(void)

{
  thunk_FUN_10044b354();
  return;
}



/* Address: 0x10044bc64 | thunk_FUN_10044b76c */

void thunk_FUN_10044b76c(void)

{
  FUN_10044b76c();
  return;
}



/* Address: 0x10044bc68 | FUN_10044bc68 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010044bd80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10044bc68(undefined8 *param_1,undefined8 param_2,_StringGuts param_3,char *param_4,
                  void *param_5)

{
  undefined4 uVar1;
  int iVar2;
  DecodingError DVar3;
  undefined *puVar4;
  void *pvVar6;
  char *pcVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  long lVar5;
  
  pcVar7 = param_4;
  Swift::_StringGuts::grow(0x2b,param_3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar8 = Swift::__typeName(SUB81(param_3.unknown,0));
  SVar11.bridgeObject = param_5;
  SVar11.str = pcVar7;
  Swift::String::append(SVar8,SVar11);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  pvVar6 = (void *)0xeb0000000020646e;
  SVar8.bridgeObject = (void *)0xeb0000000020646e;
  SVar8.str = (char *)0x756f662074756220;
  SVar12.bridgeObject = param_5;
  SVar12.str = pcVar7;
  Swift::String::append(SVar8,SVar12);
  FUN_10044bdc4();
  SVar9.bridgeObject = pvVar6;
  SVar9.str = param_4;
  SVar13.bridgeObject = param_5;
  SVar13.str = pcVar7;
  Swift::String::append(SVar9,SVar13);
  _swift_bridgeObjectRelease(pvVar6);
  SVar10.bridgeObject = (void *)0xe90000000000002e;
  SVar10.str = (char *)0x64616574736e6920;
  SVar14.bridgeObject = param_5;
  SVar14.str = pcVar7;
  Swift::String::append(SVar10,SVar14);
  puVar4 = &DAT_100fc70b8;
  FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
  iVar2 = *(int *)(puVar4 + 0x30);
  *param_1 = param_3.unknown;
  _swift_bridgeObjectRetain(param_2);
  Swift::DecodingError::Context::_init
            ((long)param_1 + (long)iVar2,puVar4,0xd000000000000013,0x8000000100da6970,0);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
  ;
  DVar3 = Swift::DecodingError::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)puVar4 >> 8),DVar3.value);
                    /* WARNING: Could not recover jumptable at 0x00010044bdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))(param_1,uVar1,lVar5);
  return;
}



/* Address: 0x10044bdc4 | FUN_10044bdc4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10044bdc4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  String SVar10;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_40 [32];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = (int)&local_50;
  iVar3 = (int)&local_50;
  iVar4 = (int)&local_50;
  iVar5 = (int)&local_50;
  iVar6 = (int)&local_50;
  FUN_10000cbfc(param_1,auStack_40);
  uVar8 = 0;
  FUN_10000ec2c(0,&DAT_100fc75b8,&PTR__OBJC_CLASS___NSNull_100f8d8d0);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  _swift_dynamicCast(&local_50,auStack_40,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar8,6);
  if (iVar2 == 0) {
    FUN_10000cbfc(param_1,auStack_40);
    uVar8 = 0;
    FUN_10000ec2c(0,&DAT_100fc75c0,&PTR__OBJC_CLASS___NSNumber_100f8d750);
    _swift_dynamicCast(&local_50,auStack_40,puVar1 + 8,uVar8,6);
    if (iVar3 == 0) {
      FUN_10000cbfc(param_1,auStack_40);
      _swift_dynamicCast(&local_50,auStack_40,puVar1 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      if (iVar4 == 0) {
        FUN_10000cbfc(param_1,auStack_40);
        puVar9 = &DAT_100fc75c8;
        FUN_1000f7830(&DAT_100fc75c8,&DAT_100c4b480);
        _swift_dynamicCast(&local_50,auStack_40,puVar1 + 8,puVar9,6);
        if (iVar5 == 0) {
          FUN_10000cbfc(param_1,auStack_40);
          puVar9 = &DAT_100fc75d0;
          FUN_1000f7830(&DAT_100fc75d0,&DAT_100c4b488);
          _swift_dynamicCast(&local_50,auStack_40,puVar1 + 8,puVar9,6);
          if (iVar6 == 0) {
            FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
            uVar7 = (undefined1)param_1;
            _swift_getDynamicType();
            SVar10 = Swift::__typeName((bool)uVar7);
          }
          else {
            _swift_bridgeObjectRelease(local_50);
            SVar10.bridgeObject = (void *)0xec0000007972616e;
            SVar10.str = (char *)0x6f69746369642061;
          }
        }
        else {
          _swift_bridgeObjectRelease(local_50);
          SVar10.bridgeObject = &DAT_e800000000000000;
          SVar10.str = (char *)0x7961727261206e61;
        }
      }
      else {
        _swift_bridgeObjectRelease(local_48);
        SVar10.bridgeObject = (void *)0xed0000617461642f;
        SVar10.str = (char *)0x676e697274732061;
      }
    }
    else {
      SVar10.bridgeObject = &DAT_e800000000000000;
      SVar10.str = (char *)0x7265626d756e2061;
    }
  }
  else {
    SVar10.bridgeObject = (void *)0xec00000065756c61;
    SVar10.str = (char *)0x76206c6c756e2061;
  }
  return SVar10;
}



/* Address: 0x10044bff0 | FUN_10044bff0 */

long FUN_10044bff0(void)

{
  bool bVar1;
  Encoding EVar2;
  Encoding EVar3;
  ulong uVar4;
  Encoding EVar5;
  ulong uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long lVar14;
  code *pcVar15;
  code *pcVar16;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  EVar2 = Encoding::_typeMetadataAccessor();
  lVar14 = *(long *)(EVar2.unknown + -8);
  uVar6 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar9 = auStack_80 + -uVar6;
  puVar12 = puVar9 + -uVar6;
  lVar10 = (long)puVar12 - uVar6;
  puVar13 = (undefined *)(lVar10 - uVar6);
  lVar8 = (long)puVar13 - uVar6;
  pcVar16 = *(code **)(lVar14 + 0x10);
  (*pcVar16)(lVar8);
  EVar3.unknown = puVar13;
  (*pcVar16)(puVar13,lVar8,EVar2.unknown);
  EVar3 = Encoding::_get_ascii(EVar3);
  FUN_10044c444();
  bVar1 = Swift::Equatable::___infix(lVar10,puVar13,EVar2.unknown,EVar3.unknown);
  pcVar15 = *(code **)(lVar14 + 8);
  (*pcVar15)(lVar10,EVar2.unknown);
  (*pcVar15)(puVar13,EVar2.unknown);
  if (bVar1) {
    lVar10 = 0;
    FUN_10044add8();
    _swift_allocObject();
    puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar11 = (ulong *)(lVar10 + 0x10);
    *puVar11 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_beginAccess(puVar11,auStack_78,0x21,0);
    uVar4 = 0;
    FUN_10044c504(0,1,1,puVar13);
    uVar6 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar6) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10044c504(uVar4,uVar6 + 1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar6 + 1;
    lVar14 = uVar4 + uVar6;
    uVar7 = 0x16;
  }
  else {
    EVar5.unknown = puVar12;
    (*pcVar16)(puVar12,lVar8,EVar2.unknown);
    Encoding::_get_utf8(EVar5);
    bVar1 = Swift::Equatable::___infix(lVar10,puVar12,EVar2.unknown,EVar3.unknown);
    (*pcVar15)(lVar10,EVar2.unknown);
    (*pcVar15)(puVar12,EVar2.unknown);
    if (bVar1) {
      lVar10 = 0;
      FUN_10044add8();
      _swift_allocObject();
      puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar11 = (ulong *)(lVar10 + 0x10);
      *puVar11 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
      _swift_beginAccess(puVar11,auStack_78,0x21,0);
      uVar4 = 0;
      FUN_10044c504(0,1,1,puVar13);
      uVar6 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar6) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_10044c504(uVar4,uVar6 + 1,1);
      }
      *(ulong *)(uVar4 + 0x10) = uVar6 + 1;
      lVar14 = uVar4 + uVar6;
      uVar7 = 0xc;
    }
    else {
      (*pcVar16)(puVar9,lVar8,EVar2.unknown);
      if (DAT_100fc75e0 != -1) {
        _swift_once(&DAT_100fc75e0,FUN_10044c4b8);
      }
      EVar5 = EVar2;
      FUN_1000cd990(EVar2.unknown,&DAT_101057aa0);
      (*pcVar16)(lVar10,EVar5.unknown,EVar2.unknown);
      bVar1 = Swift::Equatable::___infix(lVar10,puVar9,EVar2.unknown,EVar3.unknown);
      (*pcVar15)(lVar10,EVar2.unknown);
      (*pcVar15)(puVar9,EVar2.unknown);
      if (!bVar1) {
        (*pcVar15)(lVar8,EVar2.unknown);
        lVar8 = 0;
        FUN_10044add8();
        _swift_allocObject();
        puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
        puVar11 = (ulong *)(lVar8 + 0x10);
        *puVar11 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
        _swift_beginAccess(puVar11,auStack_78,0x21,0);
        uVar4 = 0;
        FUN_10044c504(0,1,1,puVar13);
        uVar6 = *(ulong *)(uVar4 + 0x10);
        if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar6) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
          FUN_10044c504(uVar4,uVar6 + 1,1);
        }
        *(ulong *)(uVar4 + 0x10) = uVar6 + 1;
        *(undefined1 *)(uVar4 + uVar6 + 0x20) = 0;
        *puVar11 = uVar4;
        _swift_endAccess(auStack_78);
        return lVar8;
      }
      lVar10 = 0;
      FUN_10044add8();
      _swift_allocObject();
      puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar11 = (ulong *)(lVar10 + 0x10);
      *puVar11 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
      _swift_beginAccess(puVar11,auStack_78,0x21,0);
      uVar4 = 0;
      FUN_10044c504(0,1,1,puVar13);
      uVar6 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar6) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_10044c504(uVar4,uVar6 + 1,1);
      }
      *(ulong *)(uVar4 + 0x10) = uVar6 + 1;
      lVar14 = uVar4 + uVar6;
      uVar7 = 6;
    }
  }
  *(undefined1 *)(lVar14 + 0x20) = uVar7;
  *puVar11 = uVar4;
  _swift_endAccess(auStack_78);
  (*pcVar15)(lVar8,EVar2.unknown);
  return lVar10;
}



/* Address: 0x10044c444 | FUN_10044c444 */

void FUN_10044c444(void)

{
  Encoding EVar1;
  undefined *puVar2;
  
  if (DAT_100fc75d8 != (undefined *)0x0) {
    return;
  }
  EVar1 = Encoding::_typeMetadataAccessor();
  puVar2 = PTR__Foundation__Encoding_>Swift__Equatable_100ea7850;
  _swift_getWitnessTable(PTR__Foundation__Encoding_>Swift__Equatable_100ea7850,EVar1.unknown);
  DAT_100fc75d8 = puVar2;
  return;
}



/* Address: 0x10044c488 | FUN_10044c488 */

void FUN_10044c488(void)

{
  FUN_10044b548(0xc);
  return;
}



/* Address: 0x10044c4a0 | FUN_10044c4a0 */

void FUN_10044c4a0(void)

{
  FUN_10044b548(2);
  return;
}



/* Address: 0x10044c4b8 | FUN_10044c4b8 */

void FUN_10044c4b8(void)

{
  Encoding EVar1;
  
  EVar1 = Encoding::_typeMetadataAccessor();
  FUN_1000ce204(EVar1.unknown,&DAT_101057aa0);
  FUN_1000cd990(EVar1.unknown,&DAT_101057aa0);
  Encoding::_init(0x168);
  return;
}



/* Address: 0x10044c504 | FUN_10044c504 */

undefined * FUN_10044c504(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10044c5f4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc7610;
    FUN_1000f7830(&DAT_100fc7610,&DAT_100c4b508);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10044c5f4 | FUN_10044c5f4 */

undefined * FUN_10044c5f4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10044c738);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fc75f8;
    FUN_1000f7830(&DAT_100fc75f8,&DAT_100c4b4f0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc7080;
    FUN_1000f7830(&DAT_100fc7080,&DAT_100c4ac28);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10044c738 | FUN_10044c738 */

undefined * FUN_10044c738(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10044c838);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc75f0;
    FUN_1000f7830(&DAT_100fc75f0,&DAT_100c4b4e8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 2);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 4 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10044c838 | FUN_10044c838 */

undefined * FUN_10044c838(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10044c954);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc75e8;
    FUN_1000f7830(&DAT_100fc75e8,&DAT_100c4b4e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ed5888);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10044c954 | FUN_10044c954 */

undefined * FUN_10044c954(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10044ca70);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc7600;
    FUN_1000f7830(&DAT_100fc7600,&DAT_100c4b4f8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0xa0) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ed5e78);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0xa0 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0xa0);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10044ca70 | FUN_10044ca70 */

undefined * FUN_10044ca70(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10044cb78);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc7608;
    FUN_1000f7830(&DAT_100fc7608,&DAT_100c4b500);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ed5d78);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10044cb78 | FUN_10044cb78 */

void FUN_10044cb78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10044bb34();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x10044cb9c | thunk_FUN_10044c4a0 */

void thunk_FUN_10044c4a0(void)

{
  FUN_10044c4a0();
  return;
}



/* Address: 0x10044cba0 | FUN_10044cba0 */

void FUN_10044cba0(Hasher param_1,byte param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  String SVar7;
  
  puVar5 = (undefined1 *)0x8000000100da69d0;
  pcVar4 = (char *)0xd000000000000014;
  if (param_2 != 6) {
    puVar5 = (undefined1 *)0xea0000000000736e;
    pcVar4 = (char *)0x6f69736e65747865;
  }
  pcVar1 = (char *)0x79746964696c6176;
  if (param_2 != 4) {
    pcVar1 = (char *)0x7463656a627573;
  }
  puVar6 = &DAT_e800000000000000;
  if (param_2 != 4) {
    puVar6 = &DAT_e700000000000000;
  }
  if (param_2 < 6) {
    puVar5 = puVar6;
    pcVar4 = pcVar1;
  }
  puVar6 = (undefined1 *)0xe900000000000065;
  pcVar1 = (char *)0x727574616e676973;
  if (param_2 != 2) {
    puVar6 = &DAT_e600000000000000;
    pcVar1 = (char *)0x726575737369;
  }
  pcVar2 = (char *)0x6e6f6973726576;
  if (param_2 != 0) {
    pcVar2 = (char *)0x754e6c6169726573;
  }
  puVar3 = &DAT_e700000000000000;
  if (param_2 != 0) {
    puVar3 = (undefined1 *)0xec0000007265626d;
  }
  if (param_2 < 2) {
    puVar6 = puVar3;
    pcVar1 = pcVar2;
  }
  if (param_2 < 4) {
    puVar5 = puVar6;
    pcVar4 = pcVar1;
  }
  SVar7.bridgeObject = puVar5;
  SVar7.str = pcVar4;
  Swift::String::hash(param_1,SVar7);
  _swift_bridgeObjectRelease(puVar5);
  return;
}



/* Address: 0x10044cccc | thunk_FUN_100451954 */

void thunk_FUN_100451954(void)

{
  FUN_100451954();
  return;
}



/* Address: 0x10044ccd0 | FUN_10044ccd0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010044cfb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10044ccd0(ulong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  undefined1 in_ZR;
  Hasher HVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  Hasher unaff_x19;
  byte *pbVar7;
  byte *unaff_x20;
  byte *unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined1 auStack_70 [80];
  
  pbVar4 = (byte *)0xed000036322e322e;
  HVar2.unknown = &DAT_332e34312e332e31;
  pcVar5 = (char *)(param_1 & 0xff);
  pbVar6 = &switchD_10044cd0c::switchdataD_100c4b510;
  pbVar3 = HVar2.unknown;
  pbVar7 = pbVar4;
  switch(pcVar5) {
  case (char *)0x0:
    goto switchD_10044cd0c_caseD_0;
  default:
    pcVar5 = "cancellation_date";
  case (char *)0x1c:
  case (char *)0x2a:
  case (char *)0x4c:
  case (char *)0x6a:
  case (char *)0xa2:
  case (char *)0xbe:
  case (char *)0xd8:
  case (char *)0xe6:
    pcVar5 = pcVar5 + 0x750;
  case (char *)0xba:
  case (char *)0xfe:
  case (char *)0xb0:
switchD_10044cd0c_caseD_b0:
    pbVar4 = (byte *)((ulong)(pcVar5 + -0x20) | 0x8000000000000000);
    pcVar5 = (char *)0xd000000000000014;
switchD_10044cd0c_caseD_55:
    HVar2.unknown = (undefined *)((ulong)pcVar5 | 2);
    goto switchD_10044cd0c_caseD_95;
  case (char *)0x2:
    HVar2.unknown = (byte *)0xd000000000000014;
    pcVar5 = "1.2.840.113549.1.1.5";
    break;
  case (char *)0x3:
    pcVar5 = " 1.2.840.113549.1.1.11";
    goto switchD_10044cd0c_caseD_b0;
  case (char *)0x4:
  case (char *)0x1a:
  case (char *)0x42:
  case (char *)0x82:
  case (char *)0x84:
  case (char *)0x8d:
  case (char *)0xbc:
  case (char *)0xd6:
    HVar2.unknown = (byte *)0x14;
  case (char *)0x44:
    HVar2.unknown = (undefined *)((ulong)HVar2.unknown & 0xffffffffffff | 0xd000000000000000);
  case (char *)0x4d:
    pcVar5 = "cancellation_date";
  case (char *)0x12:
  case (char *)0x3a:
  case (char *)0x7a:
  case (char *)0xb2:
  case (char *)0xce:
  case (char *)0xf6:
    pcVar5 = pcVar5 + 0x7b0;
    break;
  case (char *)0x5:
    HVar2.unknown = (byte *)0xd000000000000014;
    pcVar5 = "1.2.840.113549.1.7.2";
    break;
  case (char *)0x6:
    HVar2.unknown = (byte *)0xd000000000000014;
    pcVar5 = "1.2.840.113549.1.7.3";
  case (char *)0xe:
  case (char *)0x22:
  case (char *)0x36:
  case (char *)0x4a:
  case (char *)0x52:
  case (char *)0x5a:
  case (char *)0x62:
  case (char *)0x76:
  case (char *)0x8a:
  case (char *)0x92:
  case (char *)0x94:
  case (char *)0x9a:
  case (char *)0xae:
  case (char *)0xb6:
  case (char *)0xca:
  case (char *)0xde:
  case (char *)0xf2:
  case (char *)0xfa:
    break;
  case (char *)0x7:
    HVar2.unknown = (byte *)0xd000000000000014;
    pcVar5 = "cancellation_date";
  case (char *)0xe1:
    pcVar5 = pcVar5 + 0x810;
    break;
  case (char *)0x8:
    HVar2.unknown = (byte *)0xd000000000000014;
    pcVar5 = "1.2.840.113549.1.7.5";
    break;
  case (char *)0x9:
    HVar2.unknown = (byte *)0xd000000000000014;
    pcVar5 = "cancellation_date";
  case (char *)0x4e:
  case (char *)0x8e:
    pcVar5 = pcVar5 + 0x850;
    break;
  case (char *)0x26:
    unaff_x19.unknown = HVar2.unknown;
  case (char *)0x9c:
    pbVar7 = (byte *)(ulong)*unaff_x20;
    HVar2.unknown = pbVar4;
    FUN_10044ccd0();
    SVar22.bridgeObject = HVar2.unknown;
    SVar22.str = (char *)pbVar7;
    Swift::String::hash(unaff_x19,SVar22);
  case (char *)0xdc:
  case (char *)0xcd:
  case (char *)0xf5:
  case (char *)0x11:
  case (char *)0x39:
  case (char *)0x79:
  case (char *)0xb1:
    _swift_bridgeObjectRelease(HVar2.unknown);
    auVar11._8_8_ = pbVar7;
    auVar11._0_8_ = HVar2.unknown;
    return auVar11;
  case (char *)0x38:
    HVar2.unknown = _DAT_332e34312e332e31;
    pbVar4 = _DAT_332e34312e332e39;
    unaff_x19.unknown = pcVar5;
  case (char *)0xac:
    FUN_100451954(HVar2.unknown,pbVar4);
    *unaff_x19.unknown = (byte)HVar2.unknown;
    auVar13._8_8_ = pbVar4;
    auVar13._0_8_ = HVar2.unknown;
    return auVar13;
  case (char *)0x55:
  case (char *)0x5d:
  case (char *)0x65:
    goto switchD_10044cd0c_caseD_55;
  case (char *)0x56:
  case (char *)0x5e:
  case (char *)0x66:
  case (char *)0x96:
  case (char *)0x9e:
  case (char *)0xc2:
  case (char *)0xe2:
  case (char *)0xf8:
    *(undefined1 **)unaff_x19.unknown = &DAT_332e34312e332e31;
    unaff_x19.unknown[8] = 0x2e;
    unaff_x19.unknown[9] = 0x32;
    unaff_x19.unknown[10] = 0x2e;
    unaff_x19.unknown[0xb] = 0x32;
    unaff_x19.unknown[0xc] = 0x36;
    unaff_x19.unknown[0xd] = 0;
    unaff_x19.unknown[0xe] = 0;
    unaff_x19.unknown[0xf] = 0xed;
  case (char *)0x88:
  case (char *)0x90:
  case (char *)0x98:
    auVar14._8_8_ = 0xed000036322e322e;
    auVar14._0_8_ = &DAT_332e34312e332e31;
    return auVar14;
  case (char *)0x74:
    auVar16._0_8_ = *(undefined8 *)PTR__kSecKeyAlgorithmRSASignatureRaw_100eaa4f0;
    auVar16._8_8_ = 0xed000036322e322e;
    return auVar16;
  case (char *)0x78:
  case (char *)0xc0:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (char *)0xf0:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(undefined **)((long)register0x00000008 + 0x58) = unaff_x19.unknown;
    *(undefined8 *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    pbVar7 = (byte *)(ulong)*unaff_x20;
    Swift::Hasher::init(0);
    FUN_10044ccd0();
    SVar21.bridgeObject = pbVar4;
    SVar21.str = (char *)pbVar7;
    Swift::String::hash((undefined *)((long)register0x00000008 + 8),SVar21);
    unaff_x19.unknown = pbVar4;
  case (char *)0x70:
    HVar2.unknown = unaff_x19.unknown;
    pbVar4 = pbVar7;
    _swift_bridgeObjectRelease();
  case (char *)0x32:
  case (char *)0x72:
  case (char *)0xaa:
  case (char *)0xc6:
  case (char *)0xee:
    HVar2.unknown = (undefined *)Swift::Hasher::_finalize(HVar2);
  case (char *)0xec:
  case (char *)0x25:
    auVar10._8_8_ = pbVar4;
    auVar10._0_8_ = HVar2.unknown;
    return auVar10;
  case (char *)0x8c:
    FUN_1001037b4();
  case (char *)0x10:
    HVar2.unknown = unaff_x19.unknown;
  case (char *)0x48:
  case (char *)0x50:
  case (char *)0x58:
  case (char *)0x60:
    auVar17._8_8_ = unaff_x20;
    auVar17._0_8_ = HVar2.unknown;
    return auVar17;
  case (char *)0x95:
  case (char *)0x9d:
switchD_10044cd0c_caseD_95:
    auVar8._8_8_ = pbVar4;
    auVar8._0_8_ = HVar2.unknown;
    return auVar8;
  case (char *)0xa8:
    auVar15._0_8_ =
         *(undefined8 *)
          (&PTR__kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA1_100ed64b8)[(long)pcVar5];
    auVar15._8_8_ = 0xed000036322e322e;
    return auVar15;
  case (char *)0xb5:
  case (char *)0xf9:
  case (char *)0x34:
    HVar2.unknown = (byte *)0x0;
  case (char *)0xb4:
    FUN_10044add8();
  case (char *)0xd:
  case (char *)0x21:
  case (char *)0x35:
  case (char *)0x49:
  case (char *)0x51:
  case (char *)0x59:
  case (char *)0x61:
  case (char *)0x75:
  case (char *)0x89:
  case (char *)0x91:
  case (char *)0x99:
  case (char *)0xad:
  case (char *)0xc9:
  case (char *)0xdd:
  case (char *)0xf1:
    _swift_allocObject();
    unaff_x19.unknown = HVar2.unknown;
  case (char *)0x20:
    unaff_x20 = PTR___swiftEmptyArrayStorage_100eae0d8;
    unaff_x19.unknown = unaff_x19.unknown + 0x10;
    *(undefined **)unaff_x19.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_beginAccess(unaff_x19.unknown,&stack0x00000008,0x21,0);
    pbVar3 = (byte *)0x0;
    pbVar4 = &DAT_00000001;
    param_3 = 1;
    unaff_x21 = HVar2.unknown;
  case (char *)0xc:
    FUN_10044c504(pbVar3,pbVar4,param_3,unaff_x20);
    unaff_x22 = *(ulong *)(pbVar3 + 0x10);
    unaff_x20 = (byte *)(unaff_x22 + 1);
    param_4 = pbVar3;
    if (*(ulong *)(pbVar3 + 0x18) >> 1 <= unaff_x22) {
      param_4 = (byte *)(ulong)(1 < *(ulong *)(pbVar3 + 0x18));
      pbVar4 = unaff_x20;
      FUN_10044c504(param_4,unaff_x20,1);
    }
  case (char *)0x5c:
    *(byte **)(param_4 + 0x10) = unaff_x20;
    param_4[unaff_x22 + 0x20] = 6;
    *(byte **)unaff_x19.unknown = param_4;
    _swift_endAccess(&stack0x00000008);
    auVar18._8_8_ = pbVar4;
    auVar18._0_8_ = unaff_x21;
    return auVar18;
  case (char *)0xc4:
  case (char *)0xf4:
    HVar2.unknown = (byte *)0xea00000100c4b510;
    if (!(bool)in_ZR) {
      HVar2.unknown = pcVar5;
    }
    SVar24.bridgeObject = HVar2.unknown;
    SVar24.str = (char *)0xed000036322e322e;
    Swift::String::hash((Hasher)0x332e34312e332e31,SVar24);
  case (char *)0x31:
  case (char *)0x71:
  case (char *)0xa9:
  case (char *)0xc5:
  case (char *)0xed:
    _swift_bridgeObjectRelease(HVar2.unknown);
    auVar19._8_8_ = pbVar4;
    auVar19._0_8_ = HVar2.unknown;
    return auVar19;
  case (char *)0xcc:
    bVar1 = *unaff_x20;
    Swift::Hasher::init(0x332e34312e332e31);
    in_ZR = bVar1 == 1;
  case (char *)0x64:
    pcVar5 = (char *)0x64696f;
    pbVar6 = (byte *)0x6973;
  case (char *)0x27:
  case (char *)0x57:
  case (char *)0x5f:
  case (char *)0x67:
  case (char *)0x97:
  case (char *)0x9f:
  case (char *)0xc3:
  case (char *)0xe3:
    pbVar6 = (byte *)((ulong)pbVar6 & 0xffff00000000ffff | 0x614464656e670000);
    if (!(bool)in_ZR) {
      pbVar6 = (byte *)pcVar5;
    }
    HVar2.unknown = (undefined *)0xea00000000006174;
    if (!(bool)in_ZR) {
      HVar2.unknown = (undefined *)0xe300000000000000;
    }
    SVar25.bridgeObject = HVar2.unknown;
    SVar25.str = (char *)pbVar6;
    Swift::String::hash((Hasher)&stack0x00000008,SVar25);
    _swift_bridgeObjectRelease();
    auVar20._0_8_ = Swift::Hasher::_finalize(HVar2);
    auVar20._8_8_ = pbVar6;
    return auVar20;
  case (char *)0xe0:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    pbVar3 = (byte *)(ulong)*unaff_x20;
    Swift::Hasher::init(0x332e34312e332e31);
    FUN_10044ccd0();
  case (char *)0xc8:
    HVar2.unknown = (undefined *)((long)register0x00000008 + 8);
    pbVar7 = pbVar3;
    unaff_x19.unknown = pbVar4;
  case (char *)0xc1:
    pbVar4 = pbVar7;
    SVar23.bridgeObject = unaff_x19.unknown;
    SVar23.str = (char *)pbVar4;
    Swift::String::hash(HVar2,SVar23);
    _swift_bridgeObjectRelease();
    HVar2.unknown = (undefined *)Swift::Hasher::_finalize(unaff_x19);
  case (char *)0x24:
  case (char *)0x54:
    auVar12._8_8_ = pbVar4;
    auVar12._0_8_ = HVar2.unknown;
    return auVar12;
  }
  pbVar4 = (byte *)((ulong)(pcVar5 + -0x20) | 0x8000000000000000);
switchD_10044cd0c_caseD_0:
  auVar9._8_8_ = pbVar4;
  auVar9._0_8_ = HVar2.unknown;
  return auVar9;
}



/* Address: 0x10044cdd0 | switchD_10044cd0c::caseD_78 */

void switchD_10044cd0c::caseD_78(undefined8 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  FUN_10044ccd0();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x10044ce30 | FUN_10044ce30 */

void FUN_10044ce30(Hasher param_1,void *param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  FUN_10044ccd0();
  SVar2.bridgeObject = param_2;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x10044ce70 | switchD_10044cd0c::caseD_e0 */

void switchD_10044cd0c::caseD_e0(__int64 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  FUN_10044ccd0();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x10044cecc | FUN_10044cecc */

void FUN_10044cecc(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100451954(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10044cef8 | FUN_10044cef8 */

void FUN_10044cef8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_10044ccd0();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10044cf20 | FUN_10044cf20 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10044cf20(byte param_1)

{
  if (param_1 < 4) {
    return *(undefined8 *)(&PTR__kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA1_100ed64b8)[param_1]
    ;
  }
  return *(undefined8 *)PTR__kSecKeyAlgorithmRSASignatureRaw_100eaa4f0;
}



/* Address: 0x10044cf54 | FUN_10044cf54 */

undefined1  [16] FUN_10044cf54(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  FUN_1001037b4(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}


