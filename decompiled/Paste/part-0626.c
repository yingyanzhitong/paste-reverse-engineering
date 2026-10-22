/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006ad4c0 | FUN_1006ad4c0 */

undefined8 * FUN_1006ad4c0(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1006ad514 | thunk_FUN_10016d6e0 */

void thunk_FUN_10016d6e0(void)

{
  FUN_10016d6e0();
  return;
}



/* Address: 0x1006ad518 | thunk_FUN_10016d728 */

void thunk_FUN_10016d728(void)

{
  FUN_10016d728();
  return;
}



/* Address: 0x1006ad51c | FUN_1006ad51c */

undefined1  [16] FUN_1006ad51c(void)

{
  return ZEXT816(0x100ef6868);
}



/* Address: 0x1006ad52c | FUN_1006ad52c */

undefined1  [16] FUN_1006ad52c(void)

{
  return ZEXT816(0x100ef6890);
}



/* Address: 0x1006ad53c | FUN_1006ad53c */

void FUN_1006ad53c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\x02') && (param_3 != '\x01')) {
    if (param_3 == '\0') {
      _swift_bridgeObjectRetain(param_2);
      return;
    }
    return;
  }
  _swift_retain();
  return;
}



/* Address: 0x1006ad564 | FUN_1006ad564 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006ad70c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006ad564(undefined8 param_1,long param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  DecodingError DVar3;
  undefined7 uVar8;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  code *pcVar9;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long lVar4;
  
  uVar8 = (undefined7)((ulong)param_1 >> 8);
  if (param_3 == '\0') {
    if (param_2 != 0) {
      return;
    }
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    lVar4 = CONCAT71(uVar8,DVar3.value);
    puVar6 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar4,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar7 = &DAT_100fdbf50;
    FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
    iVar2 = *(int *)(puVar7 + 0x30);
    *puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_68,0,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    FUN_1006ad53c(param_1,0,0);
    _swift_bridgeObjectRetain(uVar5);
    Swift::DecodingError::Context::_init
              ((long)puVar6 + (long)iVar2,puVar7,0xd00000000000001f,0x8000000100dafe30,0);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
    ;
    pcVar9 = *(code **)(*(long *)(lVar4 + -8) + 0x68);
  }
  else {
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    lVar4 = CONCAT71(uVar8,DVar3.value);
    puVar6 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar4,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar7 = &DAT_100fdbf50;
    FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
    iVar2 = *(int *)(puVar7 + 0x30);
    *puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_68,0,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    _swift_bridgeObjectRetain(uVar5);
    Swift::DecodingError::Context::_init
              ((long)puVar6 + (long)iVar2,uVar5,0xd000000000000024,0x8000000100dafe00,0);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
    ;
    pcVar9 = *(code **)(*(long *)(lVar4 + -8) + 0x68);
  }
  (*pcVar9)(puVar6,uVar1,lVar4);
  _swift_willThrow();
  return;
}



/* Address: 0x1006ad72c | FUN_1006ad72c */

undefined8 FUN_1006ad72c(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x38,auStack_38,0,0);
  return *(undefined8 *)(param_1 + 0x38);
}



/* Address: 0x1006ad768 | FUN_1006ad768 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006ad810 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

uint FUN_1006ad768(_StringGuts param_1,_StringGuts param_2,char param_3)

{
  int iVar1;
  DecodingError DVar2;
  bool bVar3;
  undefined7 uVar7;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint extraout_w8;
  uint uVar10;
  long lVar11;
  long unaff_x20;
  char *pcVar12;
  undefined1 auStack_48 [24];
  long lVar4;
  
  uVar7 = (undefined7)((ulong)param_1.unknown >> 8);
  if (param_3 != '\0') {
    DVar2 = Swift::DecodingError::typeMetadataAccessor();
    lVar4 = CONCAT71(uVar7,DVar2.value);
    puVar8 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar4,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar6 = &DAT_100fdbf50;
    FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
    iVar1 = *(int *)(puVar6 + 0x30);
    *puVar8 = PTR___type_metadata_for_Swift_Bool_100eac570;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_48,0,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    pcVar12 = "Unrecognised Error";
    _swift_bridgeObjectRetain(uVar5);
    lVar11 = (long)puVar8 + (long)iVar1;
    uVar9 = 0xd000000000000024;
LAB_1006ad80c:
    Swift::DecodingError::Context::_init(lVar11,uVar5,uVar9,(ulong)pcVar12 | 0x8000000000000000,0);
    (**(code **)(*(long *)(lVar4 + -8) + 0x68))
              (puVar8,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
               ,lVar4);
    _swift_willThrow();
    uVar10 = extraout_w8;
    goto LAB_1006ad8c8;
  }
  if (param_2.unknown == (undefined *)0x0) {
LAB_1006ad8c4:
    uVar10 = 0;
  }
  else {
    if (param_1.unknown == (undefined *)0x65757274) {
      if (param_2.unknown != &DAT_e400000000000000) goto LAB_1006ad864;
    }
    else {
LAB_1006ad864:
      bVar3 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x74);
      if (!bVar3) {
        if (param_1.unknown == (undefined *)0x65736c6166) {
          if (param_2.unknown == &DAT_e500000000000000) goto LAB_1006ad8c4;
        }
        bVar3 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x66);
        if (!bVar3) {
          DVar2 = Swift::DecodingError::typeMetadataAccessor();
          lVar4 = CONCAT71(uVar7,DVar2.value);
          puVar8 = (undefined8 *)
                   PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
          ;
          _swift_allocError(lVar4,
                            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                            ,0,0);
          puVar6 = &DAT_100fdbf50;
          FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
          iVar1 = *(int *)(puVar6 + 0x30);
          *puVar8 = PTR___type_metadata_for_Swift_Bool_100eac570;
          _swift_beginAccess(unaff_x20 + 0x38,auStack_48,0,0);
          uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
          pcVar12 = "Expected value not empty string";
          _swift_bridgeObjectRetain(uVar5);
          lVar11 = (long)puVar8 + (long)iVar1;
          uVar9 = 0xd000000000000016;
          goto LAB_1006ad80c;
        }
        goto LAB_1006ad8c4;
      }
    }
    uVar10 = 1;
  }
LAB_1006ad8c8:
  return uVar10 & 1;
}



/* Address: 0x1006ad96c | FUN_1006ad96c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006adc84 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte * FUN_1006ad96c(_StringObject param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  DecodingError DVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  bool bVar10;
  byte *pbVar11;
  undefined **ppuVar12;
  byte *unaff_x19;
  byte *pbVar13;
  long unaff_x20;
  long unaff_x21;
  undefined *local_48;
  ulong uStack_40;
  
  FUN_1006ad564();
  if (unaff_x21 != 0) {
    return unaff_x19;
  }
  pbVar8 = (byte *)((ulong)param_1.unknown & 0xffffffffffff);
  pbVar11 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar13 = pbVar8;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar13 = pbVar11;
  }
  if (pbVar13 == (byte *)0x0) goto LAB_1006adbf4;
  if (((ulong)param_2 >> 0x3c & 1) != 0) {
    _swift_bridgeObjectRetain(param_2);
    FUN_1006c9ea0(param_1.unknown,param_2,10);
    _swift_bridgeObjectRelease(param_2);
    if (((uint)param_1.unknown >> 8 & 0xff) != 1) {
      return param_1.unknown;
    }
    goto LAB_1006adbf4;
  }
  if (((ulong)param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      param_1.unknown = (undefined *)Swift::_StringObject::get_sharedUTF8(param_1);
    }
    else {
      param_1.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
      param_2 = pbVar8;
    }
    if (*param_1.unknown == 0x2b) {
      pbVar13 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006add2c);
        (*pcVar4)();
      }
      if (pbVar13 != (byte *)0x0) {
        pbVar8 = (byte *)0x0;
        pbVar11 = param_1.unknown;
        while( true ) {
          pbVar11 = pbVar11 + 1;
          iVar1 = ((int)(char)pbVar8 + (char)pbVar8 * 4) * 2;
          iVar3 = (int)(char)iVar1;
          uVar2 = iVar3 + (char)(*pbVar11 - 0x30);
          pbVar8 = (byte *)(ulong)uVar2;
          if ((9 < *pbVar11 - 0x30 || iVar3 != iVar1) || (int)(char)uVar2 != uVar2) break;
          pbVar13 = pbVar13 + -1;
          if (pbVar13 == (byte *)0x0) {
            return pbVar8;
          }
        }
      }
    }
    else if (*param_1.unknown == 0x2d) {
      pbVar13 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006add24);
        (*pcVar4)();
      }
      if (pbVar13 != (byte *)0x0) {
        pbVar8 = (byte *)0x0;
        pbVar11 = param_1.unknown;
        while( true ) {
          pbVar11 = pbVar11 + 1;
          iVar1 = ((int)(char)pbVar8 + (char)pbVar8 * 4) * 2;
          iVar3 = (int)(char)iVar1;
          if (9 < *pbVar11 - 0x30 || iVar3 != iVar1) break;
          uVar2 = iVar3 - (char)(*pbVar11 - 0x30);
          pbVar8 = (byte *)(ulong)uVar2;
          if ((int)(char)uVar2 != uVar2) break;
          pbVar13 = pbVar13 + -1;
          if (pbVar13 == (byte *)0x0) {
            return pbVar8;
          }
        }
      }
    }
    else if (param_2 != (byte *)0x0) {
      pbVar13 = (byte *)0x0;
      pbVar11 = param_1.unknown;
      while( true ) {
        if (param_1.unknown == (byte *)0x0) {
          return pbVar13;
        }
        param_1.unknown = pbVar11 + 1;
        iVar1 = ((int)(char)pbVar13 + (char)pbVar13 * 4) * 2;
        iVar3 = (int)(char)iVar1;
        uVar2 = iVar3 + (char)(*pbVar11 - 0x30);
        pbVar13 = (byte *)(ulong)uVar2;
        if ((9 < *pbVar11 - 0x30 || iVar3 != iVar1) || (int)(char)uVar2 != uVar2) break;
        param_2 = param_2 + -1;
        pbVar11 = param_1.unknown;
        param_1.unknown = param_2;
      }
    }
    goto LAB_1006adbf4;
  }
  local_48 = param_1.unknown;
  uStack_40 = (ulong)param_2 & 0xffffffffffffff;
  uVar2 = (uint)param_1.unknown & 0xff;
  if (uVar2 == 0x2b) {
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006add30);
      (*pcVar4)();
    }
    pbVar11 = pbVar11 + -1;
    if (pbVar11 == (byte *)0x0) goto LAB_1006adbe4;
    pbVar8 = (byte *)0x0;
    pbVar13 = (byte *)((ulong)&local_48 | 1);
    do {
      if ((9 < *pbVar13 - 0x30) ||
         (iVar1 = ((int)(char)pbVar8 + (char)pbVar8 * 4) * 2, iVar3 = (int)(char)iVar1,
         iVar3 != iVar1)) goto LAB_1006adbe4;
      uVar2 = iVar3 + (char)(*pbVar13 - 0x30);
      pbVar8 = (byte *)(ulong)uVar2;
      if ((int)(char)uVar2 != uVar2) goto LAB_1006adbe4;
      bVar10 = false;
      pbVar11 = pbVar11 + -1;
      pbVar13 = pbVar13 + 1;
    } while (pbVar11 != (byte *)0x0);
  }
  else if (uVar2 == 0x2d) {
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006add28);
      (*pcVar4)();
    }
    pbVar11 = pbVar11 + -1;
    if (pbVar11 == (byte *)0x0) {
LAB_1006adbe4:
      pbVar8 = (byte *)0x0;
      bVar10 = true;
    }
    else {
      pbVar8 = (byte *)0x0;
      pbVar13 = (byte *)((ulong)&local_48 | 1);
      do {
        if ((9 < *pbVar13 - 0x30) ||
           (iVar1 = ((int)(char)pbVar8 + (char)pbVar8 * 4) * 2, iVar3 = (int)(char)iVar1,
           iVar3 != iVar1)) goto LAB_1006adbe4;
        uVar2 = iVar3 - (char)(*pbVar13 - 0x30);
        pbVar8 = (byte *)(ulong)uVar2;
        if ((int)(char)uVar2 != uVar2) goto LAB_1006adbe4;
        bVar10 = false;
        pbVar11 = pbVar11 + -1;
        pbVar13 = pbVar13 + 1;
      } while (pbVar11 != (byte *)0x0);
    }
  }
  else {
    if (pbVar11 == (byte *)0x0) goto LAB_1006adbe4;
    pbVar8 = (byte *)0x0;
    ppuVar12 = &local_48;
    do {
      if ((9 < *(byte *)ppuVar12 - 0x30) ||
         (iVar1 = ((int)(char)pbVar8 + (char)pbVar8 * 4) * 2, iVar3 = (int)(char)iVar1,
         iVar3 != iVar1)) goto LAB_1006adbe4;
      uVar2 = iVar3 + (char)(*(byte *)ppuVar12 - 0x30);
      pbVar8 = (byte *)(ulong)uVar2;
      if ((int)(char)uVar2 != uVar2) goto LAB_1006adbe4;
      bVar10 = false;
      pbVar11 = pbVar11 + -1;
      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
    } while (pbVar11 != (byte *)0x0);
  }
  if (!bVar10) {
    return pbVar8;
  }
LAB_1006adbf4:
  DVar5 = Swift::DecodingError::typeMetadataAccessor();
  pbVar13 = (byte *)CONCAT71((int7)((ulong)param_1.unknown >> 8),DVar5.value);
  puVar9 = (undefined8 *)
           PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(pbVar13,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar6 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar1 = *(int *)(puVar6 + 0x30);
  *puVar9 = PTR___type_metadata_for_Swift_Int8_100eadb28;
  _swift_beginAccess(unaff_x20 + 0x38,&local_48,0,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar7);
  Swift::DecodingError::Context::_init
            ((undefined *)((long)puVar9 + (long)iVar1),uVar7,0x6465746365707845,0xed000038746e4920,0
            );
  (**(code **)(*(long *)(pbVar13 + -8) + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,pbVar13);
  _swift_willThrow();
  return pbVar13;
}



/* Address: 0x1006add30 | FUN_1006add30 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006ae048 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte * FUN_1006add30(_StringObject param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  DecodingError DVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  bool bVar10;
  byte *pbVar11;
  undefined **ppuVar12;
  byte *unaff_x19;
  byte *pbVar13;
  long unaff_x20;
  long unaff_x21;
  undefined *local_48;
  ulong uStack_40;
  
  FUN_1006ad564();
  if (unaff_x21 != 0) {
    return unaff_x19;
  }
  pbVar8 = (byte *)((ulong)param_1.unknown & 0xffffffffffff);
  pbVar11 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar13 = pbVar8;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar13 = pbVar11;
  }
  if (pbVar13 == (byte *)0x0) goto LAB_1006adfb8;
  if (((ulong)param_2 >> 0x3c & 1) != 0) {
    _swift_bridgeObjectRetain(param_2);
    FUN_1006c9eac(param_1.unknown,param_2,10);
    _swift_bridgeObjectRelease(param_2);
    if (((uint)param_1.unknown >> 0x10 & 0xff) != 1) {
      return param_1.unknown;
    }
    goto LAB_1006adfb8;
  }
  if (((ulong)param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      param_1.unknown = (undefined *)Swift::_StringObject::get_sharedUTF8(param_1);
    }
    else {
      param_1.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
      param_2 = pbVar8;
    }
    if (*param_1.unknown == 0x2b) {
      pbVar13 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006ae0f0);
        (*pcVar4)();
      }
      if (pbVar13 != (byte *)0x0) {
        pbVar8 = (byte *)0x0;
        pbVar11 = param_1.unknown;
        while( true ) {
          pbVar11 = pbVar11 + 1;
          iVar1 = ((int)(short)pbVar8 + (short)pbVar8 * 4) * 2;
          iVar3 = (int)(short)iVar1;
          uVar2 = iVar3 + (*pbVar11 - 0x30 & 0xff);
          pbVar8 = (byte *)(ulong)uVar2;
          if ((9 < *pbVar11 - 0x30 || iVar3 != iVar1) || (int)(short)uVar2 != uVar2) break;
          pbVar13 = pbVar13 + -1;
          if (pbVar13 == (byte *)0x0) {
            return pbVar8;
          }
        }
      }
    }
    else if (*param_1.unknown == 0x2d) {
      pbVar13 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006ae0e8);
        (*pcVar4)();
      }
      if (pbVar13 != (byte *)0x0) {
        pbVar8 = (byte *)0x0;
        pbVar11 = param_1.unknown;
        while( true ) {
          pbVar11 = pbVar11 + 1;
          iVar1 = ((int)(short)pbVar8 + (short)pbVar8 * 4) * 2;
          iVar3 = (int)(short)iVar1;
          if (9 < *pbVar11 - 0x30 || iVar3 != iVar1) break;
          uVar2 = iVar3 - (*pbVar11 - 0x30 & 0xff);
          pbVar8 = (byte *)(ulong)uVar2;
          if ((int)(short)uVar2 != uVar2) break;
          pbVar13 = pbVar13 + -1;
          if (pbVar13 == (byte *)0x0) {
            return pbVar8;
          }
        }
      }
    }
    else if (param_2 != (byte *)0x0) {
      pbVar13 = (byte *)0x0;
      pbVar11 = param_1.unknown;
      while( true ) {
        if (param_1.unknown == (byte *)0x0) {
          return pbVar13;
        }
        param_1.unknown = pbVar11 + 1;
        iVar1 = ((int)(short)pbVar13 + (short)pbVar13 * 4) * 2;
        iVar3 = (int)(short)iVar1;
        uVar2 = iVar3 + (*pbVar11 - 0x30 & 0xff);
        pbVar13 = (byte *)(ulong)uVar2;
        if ((9 < *pbVar11 - 0x30 || iVar3 != iVar1) || (int)(short)uVar2 != uVar2) break;
        param_2 = param_2 + -1;
        pbVar11 = param_1.unknown;
        param_1.unknown = param_2;
      }
    }
    goto LAB_1006adfb8;
  }
  local_48 = param_1.unknown;
  uStack_40 = (ulong)param_2 & 0xffffffffffffff;
  uVar2 = (uint)param_1.unknown & 0xff;
  if (uVar2 == 0x2b) {
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006ae0f4);
      (*pcVar4)();
    }
    pbVar11 = pbVar11 + -1;
    if (pbVar11 == (byte *)0x0) goto LAB_1006adfa8;
    pbVar8 = (byte *)0x0;
    pbVar13 = (byte *)((ulong)&local_48 | 1);
    do {
      if ((9 < *pbVar13 - 0x30) ||
         (iVar1 = ((int)(short)pbVar8 + (short)pbVar8 * 4) * 2, iVar3 = (int)(short)iVar1,
         iVar3 != iVar1)) goto LAB_1006adfa8;
      uVar2 = iVar3 + (*pbVar13 - 0x30 & 0xff);
      pbVar8 = (byte *)(ulong)uVar2;
      if ((int)(short)uVar2 != uVar2) goto LAB_1006adfa8;
      bVar10 = false;
      pbVar11 = pbVar11 + -1;
      pbVar13 = pbVar13 + 1;
    } while (pbVar11 != (byte *)0x0);
  }
  else if (uVar2 == 0x2d) {
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006ae0ec);
      (*pcVar4)();
    }
    pbVar11 = pbVar11 + -1;
    if (pbVar11 == (byte *)0x0) {
LAB_1006adfa8:
      pbVar8 = (byte *)0x0;
      bVar10 = true;
    }
    else {
      pbVar8 = (byte *)0x0;
      pbVar13 = (byte *)((ulong)&local_48 | 1);
      do {
        if ((9 < *pbVar13 - 0x30) ||
           (iVar1 = ((int)(short)pbVar8 + (short)pbVar8 * 4) * 2, iVar3 = (int)(short)iVar1,
           iVar3 != iVar1)) goto LAB_1006adfa8;
        uVar2 = iVar3 - (*pbVar13 - 0x30 & 0xff);
        pbVar8 = (byte *)(ulong)uVar2;
        if ((int)(short)uVar2 != uVar2) goto LAB_1006adfa8;
        bVar10 = false;
        pbVar11 = pbVar11 + -1;
        pbVar13 = pbVar13 + 1;
      } while (pbVar11 != (byte *)0x0);
    }
  }
  else {
    if (pbVar11 == (byte *)0x0) goto LAB_1006adfa8;
    pbVar8 = (byte *)0x0;
    ppuVar12 = &local_48;
    do {
      if ((9 < *(byte *)ppuVar12 - 0x30) ||
         (iVar1 = ((int)(short)pbVar8 + (short)pbVar8 * 4) * 2, iVar3 = (int)(short)iVar1,
         iVar3 != iVar1)) goto LAB_1006adfa8;
      uVar2 = iVar3 + (*(byte *)ppuVar12 - 0x30 & 0xff);
      pbVar8 = (byte *)(ulong)uVar2;
      if ((int)(short)uVar2 != uVar2) goto LAB_1006adfa8;
      bVar10 = false;
      pbVar11 = pbVar11 + -1;
      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
    } while (pbVar11 != (byte *)0x0);
  }
  if (!bVar10) {
    return pbVar8;
  }
LAB_1006adfb8:
  DVar5 = Swift::DecodingError::typeMetadataAccessor();
  pbVar13 = (byte *)CONCAT71((int7)((ulong)param_1.unknown >> 8),DVar5.value);
  puVar9 = (undefined8 *)
           PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(pbVar13,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar6 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar1 = *(int *)(puVar6 + 0x30);
  *puVar9 = PTR___type_metadata_for_Swift_Int16_100eadba0;
  _swift_beginAccess(unaff_x20 + 0x38,&local_48,0,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar7);
  Swift::DecodingError::Context::_init
            ((undefined *)((long)puVar9 + (long)iVar1),uVar7,0x6465746365707845,0xee003631746e4920,0
            );
  (**(code **)(*(long *)(pbVar13 + -8) + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,pbVar13);
  _swift_willThrow();
  return pbVar13;
}



/* Address: 0x1006ae0f4 | FUN_1006ae0f4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006ae3c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte * FUN_1006ae0f4(_StringObject param_1,byte *param_2)

{
  uint uVar1;
  code *pcVar2;
  DecodingError DVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  bool bVar8;
  byte *pbVar9;
  int iVar10;
  undefined **ppuVar11;
  long lVar12;
  byte *unaff_x19;
  byte *pbVar13;
  long unaff_x20;
  long unaff_x21;
  undefined *local_48;
  ulong uStack_40;
  
  FUN_1006ad564();
  if (unaff_x21 != 0) {
    return unaff_x19;
  }
  pbVar6 = (byte *)((ulong)param_1.unknown & 0xffffffffffff);
  pbVar9 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar13 = pbVar6;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar13 = pbVar9;
  }
  if (pbVar13 == (byte *)0x0) goto LAB_1006ae330;
  if (((ulong)param_2 >> 0x3c & 1) != 0) {
    _swift_bridgeObjectRetain(param_2);
    FUN_1006c9eb8(param_1.unknown,param_2,10);
    _swift_bridgeObjectRelease(param_2);
    if (((uint)((ulong)param_1.unknown >> 0x20) & 0xff) != 1) {
      return param_1.unknown;
    }
    goto LAB_1006ae330;
  }
  if (((ulong)param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      param_1.unknown = (undefined *)Swift::_StringObject::get_sharedUTF8(param_1);
    }
    else {
      param_1.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
      param_2 = pbVar6;
    }
    if (*param_1.unknown == 0x2b) {
      pbVar13 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006ae468);
        (*pcVar2)();
      }
      if (pbVar13 != (byte *)0x0) {
        pbVar6 = (byte *)0x0;
        pbVar9 = param_1.unknown;
        while( true ) {
          pbVar9 = pbVar9 + 1;
          if (((9 < *pbVar9 - 0x30) ||
              (lVar12 = (long)(int)pbVar6 * 10, iVar10 = (int)lVar12, lVar12 - iVar10 != 0)) ||
             (uVar1 = *pbVar9 - 0x30 & 0xff, pbVar6 = (byte *)(ulong)(iVar10 + uVar1),
             SCARRY4(iVar10,uVar1))) break;
          pbVar13 = pbVar13 + -1;
          if (pbVar13 == (byte *)0x0) {
            return pbVar6;
          }
        }
      }
    }
    else if (*param_1.unknown == 0x2d) {
      pbVar13 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006ae460);
        (*pcVar2)();
      }
      if (pbVar13 != (byte *)0x0) {
        pbVar6 = (byte *)0x0;
        pbVar9 = param_1.unknown;
        while( true ) {
          pbVar9 = pbVar9 + 1;
          if (((9 < *pbVar9 - 0x30) ||
              (lVar12 = (long)(int)pbVar6 * 10, iVar10 = (int)lVar12, lVar12 - iVar10 != 0)) ||
             (uVar1 = *pbVar9 - 0x30 & 0xff, pbVar6 = (byte *)(ulong)(iVar10 - uVar1),
             SBORROW4(iVar10,uVar1))) break;
          pbVar13 = pbVar13 + -1;
          if (pbVar13 == (byte *)0x0) {
            return pbVar6;
          }
        }
      }
    }
    else if (param_2 != (byte *)0x0) {
      pbVar13 = (byte *)0x0;
      pbVar9 = param_1.unknown;
      while( true ) {
        if (param_1.unknown == (byte *)0x0) {
          return pbVar13;
        }
        param_1.unknown = pbVar9 + 1;
        if (((9 < *pbVar9 - 0x30) ||
            (lVar12 = (long)(int)pbVar13 * 10, iVar10 = (int)lVar12, lVar12 - iVar10 != 0)) ||
           (uVar1 = *pbVar9 - 0x30 & 0xff, pbVar13 = (byte *)(ulong)(iVar10 + uVar1),
           SCARRY4(iVar10,uVar1))) break;
        param_2 = param_2 + -1;
        pbVar9 = param_1.unknown;
        param_1.unknown = param_2;
      }
    }
    goto LAB_1006ae330;
  }
  local_48 = param_1.unknown;
  uStack_40 = (ulong)param_2 & 0xffffffffffffff;
  uVar1 = (uint)param_1.unknown & 0xff;
  if (uVar1 == 0x2b) {
    if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006ae46c);
      (*pcVar2)();
    }
    pbVar9 = pbVar9 + -1;
    if (pbVar9 == (byte *)0x0) goto LAB_1006ae320;
    pbVar6 = (byte *)0x0;
    pbVar13 = (byte *)((ulong)&local_48 | 1);
    do {
      if (((9 < *pbVar13 - 0x30) ||
          (lVar12 = (long)(int)pbVar6 * 10, iVar10 = (int)lVar12, lVar12 - iVar10 != 0)) ||
         (uVar1 = *pbVar13 - 0x30 & 0xff, pbVar6 = (byte *)(ulong)(iVar10 + uVar1),
         SCARRY4(iVar10,uVar1))) goto LAB_1006ae320;
      bVar8 = false;
      pbVar9 = pbVar9 + -1;
      pbVar13 = pbVar13 + 1;
    } while (pbVar9 != (byte *)0x0);
  }
  else if (uVar1 == 0x2d) {
    if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006ae464);
      (*pcVar2)();
    }
    pbVar9 = pbVar9 + -1;
    if (pbVar9 == (byte *)0x0) {
LAB_1006ae320:
      pbVar6 = (byte *)0x0;
      bVar8 = true;
    }
    else {
      pbVar6 = (byte *)0x0;
      pbVar13 = (byte *)((ulong)&local_48 | 1);
      do {
        if (((9 < *pbVar13 - 0x30) ||
            (lVar12 = (long)(int)pbVar6 * 10, iVar10 = (int)lVar12, lVar12 - iVar10 != 0)) ||
           (uVar1 = *pbVar13 - 0x30 & 0xff, pbVar6 = (byte *)(ulong)(iVar10 - uVar1),
           SBORROW4(iVar10,uVar1))) goto LAB_1006ae320;
        bVar8 = false;
        pbVar9 = pbVar9 + -1;
        pbVar13 = pbVar13 + 1;
      } while (pbVar9 != (byte *)0x0);
    }
  }
  else {
    if (pbVar9 == (byte *)0x0) goto LAB_1006ae320;
    pbVar6 = (byte *)0x0;
    ppuVar11 = &local_48;
    do {
      if (((9 < *(byte *)ppuVar11 - 0x30) ||
          (lVar12 = (long)(int)pbVar6 * 10, iVar10 = (int)lVar12, lVar12 - iVar10 != 0)) ||
         (uVar1 = *(byte *)ppuVar11 - 0x30 & 0xff, pbVar6 = (byte *)(ulong)(iVar10 + uVar1),
         SCARRY4(iVar10,uVar1))) goto LAB_1006ae320;
      bVar8 = false;
      pbVar9 = pbVar9 + -1;
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
    } while (pbVar9 != (byte *)0x0);
  }
  if (!bVar8) {
    return pbVar6;
  }
LAB_1006ae330:
  DVar3 = Swift::DecodingError::typeMetadataAccessor();
  pbVar13 = (byte *)CONCAT71((int7)((ulong)param_1.unknown >> 8),DVar3.value);
  puVar7 = (undefined8 *)
           PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(pbVar13,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar4 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar10 = *(int *)(puVar4 + 0x30);
  *puVar7 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
  _swift_beginAccess(unaff_x20 + 0x38,&local_48,0,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar5);
  Swift::DecodingError::Context::_init
            ((undefined *)((long)puVar7 + (long)iVar10),uVar5,0x6465746365707845,0xee003233746e4920,
             0);
  (**(code **)(*(long *)(pbVar13 + -8) + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,pbVar13);
  _swift_willThrow();
  return pbVar13;
}



/* Address: 0x1006ae46c | FUN_1006ae46c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006ae768 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

code * FUN_1006ae46c(_StringObject param_1,code *param_2,undefined8 param_3,code *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  DecodingError DVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  code *pcVar10;
  byte *pbVar11;
  long lVar12;
  long unaff_x20;
  long unaff_x21;
  uint uVar13;
  undefined *local_58;
  ulong uStack_50;
  
  FUN_1006ad564();
  if (unaff_x21 != 0) {
    return param_4;
  }
  pcVar7 = (code *)((ulong)param_1.unknown & 0xffffffffffff);
  pcVar10 = (code *)((ulong)param_2 >> 0x38 & 0xf);
  pcVar3 = pcVar7;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pcVar3 = pcVar10;
  }
  if (pcVar3 == (code *)0x0) goto LAB_1006ae6ec;
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        param_1.unknown = (undefined *)Swift::_StringObject::get_sharedUTF8(param_1);
      }
      else {
        param_1.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        param_2 = pcVar7;
      }
      if ((code)*param_1.unknown == (code)0x2b) {
        pcVar3 = param_2 + -1;
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006ae80c);
          (*pcVar3)();
        }
        if (pcVar3 != (code *)0x0) {
          pcVar10 = (code *)0x0;
          pcVar7 = (code *)param_1.unknown;
          while( true ) {
            pcVar7 = pcVar7 + 1;
            if (((9 < (byte)*pcVar7 - 0x30) ||
                (lVar12 = (long)pcVar10 * 10,
                SUB168(SEXT816((long)pcVar10) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)((byte)*pcVar7 - 0x30), pcVar10 = (code *)(lVar12 + uVar1),
               SCARRY8(lVar12,uVar1))) break;
            pcVar3 = pcVar3 + -1;
            if (pcVar3 == (code *)0x0) {
              return pcVar10;
            }
          }
        }
      }
      else if ((code)*param_1.unknown == (code)0x2d) {
        pcVar3 = param_2 + -1;
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006ae804);
          (*pcVar3)();
        }
        if (pcVar3 != (code *)0x0) {
          pcVar10 = (code *)0x0;
          pcVar7 = (code *)param_1.unknown;
          while( true ) {
            pcVar7 = pcVar7 + 1;
            if (((9 < (byte)*pcVar7 - 0x30) ||
                (lVar12 = (long)pcVar10 * 10,
                SUB168(SEXT816((long)pcVar10) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)((byte)*pcVar7 - 0x30), pcVar10 = (code *)(lVar12 - uVar1),
               SBORROW8(lVar12,uVar1))) break;
            pcVar3 = pcVar3 + -1;
            if (pcVar3 == (code *)0x0) {
              return pcVar10;
            }
          }
        }
      }
      else if (param_2 != (code *)0x0) {
        pcVar3 = (code *)0x0;
        pcVar10 = (code *)param_1.unknown;
        while( true ) {
          if ((code *)param_1.unknown == (code *)0x0) {
            return pcVar3;
          }
          param_1.unknown = pcVar10 + 1;
          if (((9 < (byte)*pcVar10 - 0x30) ||
              (lVar12 = (long)pcVar3 * 10,
              SUB168(SEXT816((long)pcVar3) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)((byte)*pcVar10 - 0x30), pcVar3 = (code *)(lVar12 + uVar1),
             SCARRY8(lVar12,uVar1))) break;
          param_2 = param_2 + -1;
          pcVar10 = (code *)param_1.unknown;
          param_1.unknown = param_2;
        }
      }
      goto LAB_1006ae6ec;
    }
    local_58 = param_1.unknown;
    uStack_50 = (ulong)param_2 & 0xffffffffffffff;
    uVar13 = (uint)param_1.unknown & 0xff;
    if (uVar13 == 0x2b) {
      if (pcVar10 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006ae810);
        (*pcVar3)();
      }
      pcVar10 = pcVar10 + -1;
      if (pcVar10 == (code *)0x0) goto LAB_1006ae6d8;
      pcVar3 = (code *)0x0;
      pbVar11 = (byte *)((ulong)&local_58 | 1);
      do {
        if (((9 < *pbVar11 - 0x30) ||
            (lVar12 = (long)pcVar3 * 10,
            SUB168(SEXT816((long)pcVar3) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*pbVar11 - 0x30), pcVar3 = (code *)(lVar12 + uVar1),
           SCARRY8(lVar12,uVar1))) goto LAB_1006ae6d8;
        uVar13 = 0;
        pcVar10 = pcVar10 + -1;
        pbVar11 = pbVar11 + 1;
      } while (pcVar10 != (code *)0x0);
    }
    else if (uVar13 == 0x2d) {
      if (pcVar10 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006ae808);
        (*pcVar3)();
      }
      pcVar10 = pcVar10 + -1;
      if (pcVar10 == (code *)0x0) {
LAB_1006ae6d8:
        uVar13 = 1;
        pcVar3 = (code *)0x0;
      }
      else {
        pcVar3 = (code *)0x0;
        pbVar11 = (byte *)((ulong)&local_58 | 1);
        do {
          if (((9 < *pbVar11 - 0x30) ||
              (lVar12 = (long)pcVar3 * 10,
              SUB168(SEXT816((long)pcVar3) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar11 - 0x30), pcVar3 = (code *)(lVar12 - uVar1),
             SBORROW8(lVar12,uVar1))) goto LAB_1006ae6d8;
          uVar13 = 0;
          pcVar10 = pcVar10 + -1;
          pbVar11 = pbVar11 + 1;
        } while (pcVar10 != (code *)0x0);
      }
    }
    else {
      if (pcVar10 == (code *)0x0) goto LAB_1006ae6d8;
      pcVar3 = (code *)0x0;
      ppuVar9 = &local_58;
      do {
        if (((9 < *(byte *)ppuVar9 - 0x30) ||
            (lVar12 = (long)pcVar3 * 10,
            SUB168(SEXT816((long)pcVar3) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*(byte *)ppuVar9 - 0x30), pcVar3 = (code *)(lVar12 + uVar1),
           SCARRY8(lVar12,uVar1))) goto LAB_1006ae6d8;
        uVar13 = 0;
        pcVar10 = pcVar10 + -1;
        ppuVar9 = (undefined **)((long)ppuVar9 + 1);
      } while (pcVar10 != (code *)0x0);
    }
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    pcVar3 = param_2;
    (*param_4)(param_1.unknown,param_2,10);
    uVar13 = (uint)pcVar3;
    _swift_bridgeObjectRelease(param_2);
    pcVar3 = (code *)param_1.unknown;
  }
  if ((uVar13 & 0xff) != 1) {
    return pcVar3;
  }
LAB_1006ae6ec:
  DVar4 = Swift::DecodingError::typeMetadataAccessor();
  pcVar3 = (code *)CONCAT71((int7)((ulong)param_1.unknown >> 8),DVar4.value);
  puVar8 = (undefined8 *)
           PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(pcVar3,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar5 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar2 = *(int *)(puVar5 + 0x30);
  *puVar8 = param_5;
  _swift_beginAccess(unaff_x20 + 0x38,&local_58,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar6);
  Swift::DecodingError::Context::_init
            ((undefined *)((long)puVar8 + (long)iVar2),uVar6,0x6465746365707845,param_6,0);
  (**(code **)(*(long *)(pcVar3 + -8) + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,pcVar3);
  _swift_willThrow();
  return pcVar3;
}



/* Address: 0x1006ae810 | FUN_1006ae810 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006aeb24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte * FUN_1006ae810(_StringObject param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  DecodingError DVar4;
  undefined *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  bool bVar9;
  byte *pbVar10;
  undefined **ppuVar11;
  byte *unaff_x19;
  byte *pbVar12;
  long unaff_x20;
  long unaff_x21;
  undefined *local_48;
  ulong uStack_40;
  
  FUN_1006ad564();
  if (unaff_x21 != 0) {
    return unaff_x19;
  }
  pbVar7 = (byte *)((ulong)param_1.unknown & 0xffffffffffff);
  pbVar10 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar12 = pbVar7;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar12 = pbVar10;
  }
  if (pbVar12 == (byte *)0x0) goto LAB_1006aea94;
  if (((ulong)param_2 >> 0x3c & 1) != 0) {
    _swift_bridgeObjectRetain(param_2);
    FUN_1006c9fdc(param_1.unknown,param_2,10);
    _swift_bridgeObjectRelease(param_2);
    if (((uint)param_1.unknown >> 8 & 0xff) != 1) {
      return param_1.unknown;
    }
    goto LAB_1006aea94;
  }
  if (((ulong)param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      param_1.unknown = (undefined *)Swift::_StringObject::get_sharedUTF8(param_1);
    }
    else {
      param_1.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
      param_2 = pbVar7;
    }
    if (*param_1.unknown == 0x2b) {
      pbVar12 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006aebcc);
        (*pcVar3)();
      }
      if (pbVar12 != (byte *)0x0) {
        pbVar7 = (byte *)0x0;
        pbVar10 = param_1.unknown;
        while( true ) {
          pbVar10 = pbVar10 + 1;
          if (((9 < *pbVar10 - 0x30) ||
              (uVar2 = (((uint)pbVar7 & 0xff) + ((uint)pbVar7 & 0xff) * 4) * 2, (uVar2 & 0xf00) != 0
              )) || (uVar2 = (uVar2 & 0xff) + (*pbVar10 - 0x30 & 0xff),
                    pbVar7 = (byte *)(ulong)uVar2, uVar2 >> 8 != 0)) break;
          pbVar12 = pbVar12 + -1;
          if (pbVar12 == (byte *)0x0) {
            return pbVar7;
          }
        }
      }
    }
    else if (*param_1.unknown == 0x2d) {
      pbVar12 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006aebc4);
        (*pcVar3)();
      }
      if (pbVar12 != (byte *)0x0) {
        pbVar7 = (byte *)0x0;
        pbVar10 = param_1.unknown;
        while( true ) {
          pbVar10 = pbVar10 + 1;
          if (((9 < *pbVar10 - 0x30) ||
              (uVar2 = (((uint)pbVar7 & 0xff) + ((uint)pbVar7 & 0xff) * 4) * 2, (uVar2 & 0xf00) != 0
              )) || (uVar2 = (uVar2 & 0xff) - (*pbVar10 - 0x30 & 0xff),
                    pbVar7 = (byte *)(ulong)uVar2, (uVar2 & 0xffffff00) != 0)) break;
          pbVar12 = pbVar12 + -1;
          if (pbVar12 == (byte *)0x0) {
            return pbVar7;
          }
        }
      }
    }
    else if (param_2 != (byte *)0x0) {
      pbVar12 = (byte *)0x0;
      pbVar10 = param_1.unknown;
      while( true ) {
        if (param_1.unknown == (byte *)0x0) {
          return pbVar12;
        }
        param_1.unknown = pbVar10 + 1;
        if (((9 < *pbVar10 - 0x30) ||
            (uVar2 = (((uint)pbVar12 & 0xff) + ((uint)pbVar12 & 0xff) * 4) * 2, (uVar2 & 0xf00) != 0
            )) || (uVar2 = (uVar2 & 0xff) + (*pbVar10 - 0x30 & 0xff), pbVar12 = (byte *)(ulong)uVar2
                  , uVar2 >> 8 != 0)) break;
        param_2 = param_2 + -1;
        pbVar10 = param_1.unknown;
        param_1.unknown = param_2;
      }
    }
    goto LAB_1006aea94;
  }
  local_48 = param_1.unknown;
  uStack_40 = (ulong)param_2 & 0xffffffffffffff;
  uVar2 = (uint)param_1.unknown & 0xff;
  if (uVar2 == 0x2b) {
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006aebd0);
      (*pcVar3)();
    }
    pbVar10 = pbVar10 + -1;
    if (pbVar10 == (byte *)0x0) goto LAB_1006aea84;
    pbVar7 = (byte *)0x0;
    pbVar12 = (byte *)((ulong)&local_48 | 1);
    do {
      if (((9 < *pbVar12 - 0x30) ||
          (uVar2 = (((uint)pbVar7 & 0xff) + ((uint)pbVar7 & 0xff) * 4) * 2, (uVar2 & 0xf00) != 0))
         || (uVar2 = (uVar2 & 0xff) + (*pbVar12 - 0x30 & 0xff), pbVar7 = (byte *)(ulong)uVar2,
            uVar2 >> 8 != 0)) goto LAB_1006aea84;
      bVar9 = false;
      pbVar10 = pbVar10 + -1;
      pbVar12 = pbVar12 + 1;
    } while (pbVar10 != (byte *)0x0);
  }
  else if (uVar2 == 0x2d) {
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006aebc8);
      (*pcVar3)();
    }
    pbVar10 = pbVar10 + -1;
    if (pbVar10 == (byte *)0x0) {
LAB_1006aea84:
      pbVar7 = (byte *)0x0;
      bVar9 = true;
    }
    else {
      pbVar7 = (byte *)0x0;
      pbVar12 = (byte *)((ulong)&local_48 | 1);
      do {
        if (((9 < *pbVar12 - 0x30) ||
            (uVar2 = (((uint)pbVar7 & 0xff) + ((uint)pbVar7 & 0xff) * 4) * 2, (uVar2 & 0xf00) != 0))
           || (uVar2 = (uVar2 & 0xff) - (*pbVar12 - 0x30 & 0xff), pbVar7 = (byte *)(ulong)uVar2,
              (uVar2 & 0xffffff00) != 0)) goto LAB_1006aea84;
        bVar9 = false;
        pbVar10 = pbVar10 + -1;
        pbVar12 = pbVar12 + 1;
      } while (pbVar10 != (byte *)0x0);
    }
  }
  else {
    if (pbVar10 == (byte *)0x0) goto LAB_1006aea84;
    pbVar7 = (byte *)0x0;
    ppuVar11 = &local_48;
    do {
      if (((9 < *(byte *)ppuVar11 - 0x30) ||
          (uVar2 = (((uint)pbVar7 & 0xff) + ((uint)pbVar7 & 0xff) * 4) * 2, (uVar2 & 0xf00) != 0))
         || (uVar2 = (uVar2 & 0xff) + (*(byte *)ppuVar11 - 0x30 & 0xff),
            pbVar7 = (byte *)(ulong)uVar2, uVar2 >> 8 != 0)) goto LAB_1006aea84;
      bVar9 = false;
      pbVar10 = pbVar10 + -1;
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
    } while (pbVar10 != (byte *)0x0);
  }
  if (!bVar9) {
    return pbVar7;
  }
LAB_1006aea94:
  DVar4 = Swift::DecodingError::typeMetadataAccessor();
  pbVar12 = (byte *)CONCAT71((int7)((ulong)param_1.unknown >> 8),DVar4.value);
  puVar8 = (undefined8 *)
           PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(pbVar12,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar5 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar1 = *(int *)(puVar5 + 0x30);
  *puVar8 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
  _swift_beginAccess(unaff_x20 + 0x38,&local_48,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar6);
  Swift::DecodingError::Context::_init
            ((undefined *)((long)puVar8 + (long)iVar1),uVar6,0x6465746365707845,0xee0038746e495520,0
            );
  (**(code **)(*(long *)(pbVar12 + -8) + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,pbVar12);
  _swift_willThrow();
  return pbVar12;
}



/* Address: 0x1006aebd0 | FUN_1006aebd0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006aeee4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte * FUN_1006aebd0(_StringObject param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  DecodingError DVar4;
  undefined *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  bool bVar9;
  byte *pbVar10;
  undefined **ppuVar11;
  byte *unaff_x19;
  byte *pbVar12;
  long unaff_x20;
  long unaff_x21;
  undefined *local_48;
  ulong uStack_40;
  
  FUN_1006ad564();
  if (unaff_x21 != 0) {
    return unaff_x19;
  }
  pbVar7 = (byte *)((ulong)param_1.unknown & 0xffffffffffff);
  pbVar10 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar12 = pbVar7;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar12 = pbVar10;
  }
  if (pbVar12 == (byte *)0x0) goto LAB_1006aee54;
  if (((ulong)param_2 >> 0x3c & 1) != 0) {
    _swift_bridgeObjectRetain(param_2);
    FUN_1006ca0f4(param_1.unknown,param_2,10);
    _swift_bridgeObjectRelease(param_2);
    if (((uint)param_1.unknown >> 0x10 & 0xff) != 1) {
      return param_1.unknown;
    }
    goto LAB_1006aee54;
  }
  if (((ulong)param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      param_1.unknown = (undefined *)Swift::_StringObject::get_sharedUTF8(param_1);
    }
    else {
      param_1.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
      param_2 = pbVar7;
    }
    if (*param_1.unknown == 0x2b) {
      pbVar12 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006aef8c);
        (*pcVar3)();
      }
      if (pbVar12 != (byte *)0x0) {
        pbVar7 = (byte *)0x0;
        pbVar10 = param_1.unknown;
        while( true ) {
          pbVar10 = pbVar10 + 1;
          if (((9 < *pbVar10 - 0x30) ||
              (uVar2 = (((uint)pbVar7 & 0xffff) + ((uint)pbVar7 & 0xffff) * 4) * 2,
              (uVar2 & 0xf0000) != 0)) ||
             (uVar2 = (uVar2 & 0xffff) + (*pbVar10 - 0x30 & 0xff), pbVar7 = (byte *)(ulong)uVar2,
             uVar2 >> 0x10 != 0)) break;
          pbVar12 = pbVar12 + -1;
          if (pbVar12 == (byte *)0x0) {
            return pbVar7;
          }
        }
      }
    }
    else if (*param_1.unknown == 0x2d) {
      pbVar12 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006aef84);
        (*pcVar3)();
      }
      if (pbVar12 != (byte *)0x0) {
        pbVar7 = (byte *)0x0;
        pbVar10 = param_1.unknown;
        while( true ) {
          pbVar10 = pbVar10 + 1;
          if (((9 < *pbVar10 - 0x30) ||
              (uVar2 = (((uint)pbVar7 & 0xffff) + ((uint)pbVar7 & 0xffff) * 4) * 2,
              (uVar2 & 0xf0000) != 0)) ||
             (uVar2 = (uVar2 & 0xffff) - (*pbVar10 - 0x30 & 0xff), pbVar7 = (byte *)(ulong)uVar2,
             (uVar2 & 0xffff0000) != 0)) break;
          pbVar12 = pbVar12 + -1;
          if (pbVar12 == (byte *)0x0) {
            return pbVar7;
          }
        }
      }
    }
    else if (param_2 != (byte *)0x0) {
      pbVar12 = (byte *)0x0;
      pbVar10 = param_1.unknown;
      while( true ) {
        if (param_1.unknown == (byte *)0x0) {
          return pbVar12;
        }
        param_1.unknown = pbVar10 + 1;
        if (((9 < *pbVar10 - 0x30) ||
            (uVar2 = (((uint)pbVar12 & 0xffff) + ((uint)pbVar12 & 0xffff) * 4) * 2,
            (uVar2 & 0xf0000) != 0)) ||
           (uVar2 = (uVar2 & 0xffff) + (*pbVar10 - 0x30 & 0xff), pbVar12 = (byte *)(ulong)uVar2,
           uVar2 >> 0x10 != 0)) break;
        param_2 = param_2 + -1;
        pbVar10 = param_1.unknown;
        param_1.unknown = param_2;
      }
    }
    goto LAB_1006aee54;
  }
  local_48 = param_1.unknown;
  uStack_40 = (ulong)param_2 & 0xffffffffffffff;
  uVar2 = (uint)param_1.unknown & 0xff;
  if (uVar2 == 0x2b) {
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006aef90);
      (*pcVar3)();
    }
    pbVar10 = pbVar10 + -1;
    if (pbVar10 == (byte *)0x0) goto LAB_1006aee44;
    pbVar7 = (byte *)0x0;
    pbVar12 = (byte *)((ulong)&local_48 | 1);
    do {
      if (((9 < *pbVar12 - 0x30) ||
          (uVar2 = (((uint)pbVar7 & 0xffff) + ((uint)pbVar7 & 0xffff) * 4) * 2,
          (uVar2 & 0xf0000) != 0)) ||
         (uVar2 = (uVar2 & 0xffff) + (*pbVar12 - 0x30 & 0xff), pbVar7 = (byte *)(ulong)uVar2,
         uVar2 >> 0x10 != 0)) goto LAB_1006aee44;
      bVar9 = false;
      pbVar10 = pbVar10 + -1;
      pbVar12 = pbVar12 + 1;
    } while (pbVar10 != (byte *)0x0);
  }
  else if (uVar2 == 0x2d) {
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006aef88);
      (*pcVar3)();
    }
    pbVar10 = pbVar10 + -1;
    if (pbVar10 == (byte *)0x0) {
LAB_1006aee44:
      pbVar7 = (byte *)0x0;
      bVar9 = true;
    }
    else {
      pbVar7 = (byte *)0x0;
      pbVar12 = (byte *)((ulong)&local_48 | 1);
      do {
        if (((9 < *pbVar12 - 0x30) ||
            (uVar2 = (((uint)pbVar7 & 0xffff) + ((uint)pbVar7 & 0xffff) * 4) * 2,
            (uVar2 & 0xf0000) != 0)) ||
           (uVar2 = (uVar2 & 0xffff) - (*pbVar12 - 0x30 & 0xff), pbVar7 = (byte *)(ulong)uVar2,
           (uVar2 & 0xffff0000) != 0)) goto LAB_1006aee44;
        bVar9 = false;
        pbVar10 = pbVar10 + -1;
        pbVar12 = pbVar12 + 1;
      } while (pbVar10 != (byte *)0x0);
    }
  }
  else {
    if (pbVar10 == (byte *)0x0) goto LAB_1006aee44;
    pbVar7 = (byte *)0x0;
    ppuVar11 = &local_48;
    do {
      if (((9 < *(byte *)ppuVar11 - 0x30) ||
          (uVar2 = (((uint)pbVar7 & 0xffff) + ((uint)pbVar7 & 0xffff) * 4) * 2,
          (uVar2 & 0xf0000) != 0)) ||
         (uVar2 = (uVar2 & 0xffff) + (*(byte *)ppuVar11 - 0x30 & 0xff),
         pbVar7 = (byte *)(ulong)uVar2, uVar2 >> 0x10 != 0)) goto LAB_1006aee44;
      bVar9 = false;
      pbVar10 = pbVar10 + -1;
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
    } while (pbVar10 != (byte *)0x0);
  }
  if (!bVar9) {
    return pbVar7;
  }
LAB_1006aee54:
  DVar4 = Swift::DecodingError::typeMetadataAccessor();
  pbVar12 = (byte *)CONCAT71((int7)((ulong)param_1.unknown >> 8),DVar4.value);
  puVar8 = (undefined8 *)
           PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(pbVar12,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar5 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar1 = *(int *)(puVar5 + 0x30);
  *puVar8 = PTR___type_metadata_for_Swift_UInt16_100eade18;
  _swift_beginAccess(unaff_x20 + 0x38,&local_48,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar6);
  Swift::DecodingError::Context::_init
            ((undefined *)((long)puVar8 + (long)iVar1),uVar6,0x6465746365707845,0xef3631746e495520,0
            );
  (**(code **)(*(long *)(pbVar12 + -8) + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,pbVar12);
  _swift_willThrow();
  return pbVar12;
}



/* Address: 0x1006aef90 | FUN_1006aef90 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006af25c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte * FUN_1006aef90(_StringObject param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  DecodingError DVar4;
  undefined *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  bool bVar9;
  byte *pbVar10;
  uint uVar11;
  undefined **ppuVar12;
  byte *unaff_x19;
  byte *pbVar13;
  long unaff_x20;
  long unaff_x21;
  undefined *local_48;
  ulong uStack_40;
  
  FUN_1006ad564();
  if (unaff_x21 != 0) {
    return unaff_x19;
  }
  pbVar7 = (byte *)((ulong)param_1.unknown & 0xffffffffffff);
  pbVar10 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar13 = pbVar7;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar13 = pbVar10;
  }
  if (pbVar13 == (byte *)0x0) goto LAB_1006af1cc;
  if (((ulong)param_2 >> 0x3c & 1) != 0) {
    _swift_bridgeObjectRetain(param_2);
    FUN_1006ca204(param_1.unknown,param_2,10);
    _swift_bridgeObjectRelease(param_2);
    if (((uint)((ulong)param_1.unknown >> 0x20) & 0xff) != 1) {
      return param_1.unknown;
    }
    goto LAB_1006af1cc;
  }
  if (((ulong)param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      param_1.unknown = (undefined *)Swift::_StringObject::get_sharedUTF8(param_1);
    }
    else {
      param_1.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
      param_2 = pbVar7;
    }
    if (*param_1.unknown == 0x2b) {
      pbVar13 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006af304);
        (*pcVar3)();
      }
      if (pbVar13 != (byte *)0x0) {
        pbVar7 = (byte *)0x0;
        pbVar10 = param_1.unknown;
        while( true ) {
          pbVar10 = pbVar10 + 1;
          if (((9 < *pbVar10 - 0x30) || (((long)pbVar7 * 10 & 0xffffffff00000000U) != 0)) ||
             (uVar1 = *pbVar10 - 0x30 & 0xff, uVar11 = (uint)((long)pbVar7 * 10),
             pbVar7 = (byte *)(ulong)(uVar11 + uVar1), CARRY4(uVar11,uVar1))) break;
          pbVar13 = pbVar13 + -1;
          if (pbVar13 == (byte *)0x0) {
            return pbVar7;
          }
        }
      }
    }
    else if (*param_1.unknown == 0x2d) {
      pbVar13 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006af2fc);
        (*pcVar3)();
      }
      if (pbVar13 != (byte *)0x0) {
        pbVar7 = (byte *)0x0;
        pbVar10 = param_1.unknown;
        while( true ) {
          pbVar10 = pbVar10 + 1;
          if (((9 < *pbVar10 - 0x30) || (((long)pbVar7 * 10 & 0xffffffff00000000U) != 0)) ||
             (uVar1 = *pbVar10 - 0x30 & 0xff, uVar11 = (uint)((long)pbVar7 * 10),
             pbVar7 = (byte *)(ulong)(uVar11 - uVar1), uVar11 < uVar1)) break;
          pbVar13 = pbVar13 + -1;
          if (pbVar13 == (byte *)0x0) {
            return pbVar7;
          }
        }
      }
    }
    else if (param_2 != (byte *)0x0) {
      pbVar13 = (byte *)0x0;
      pbVar10 = param_1.unknown;
      while( true ) {
        if (param_1.unknown == (byte *)0x0) {
          return pbVar13;
        }
        param_1.unknown = pbVar10 + 1;
        if (((9 < *pbVar10 - 0x30) || (((long)pbVar13 * 10 & 0xffffffff00000000U) != 0)) ||
           (uVar1 = *pbVar10 - 0x30 & 0xff, uVar11 = (uint)((long)pbVar13 * 10),
           pbVar13 = (byte *)(ulong)(uVar11 + uVar1), CARRY4(uVar11,uVar1))) break;
        param_2 = param_2 + -1;
        pbVar10 = param_1.unknown;
        param_1.unknown = param_2;
      }
    }
    goto LAB_1006af1cc;
  }
  local_48 = param_1.unknown;
  uStack_40 = (ulong)param_2 & 0xffffffffffffff;
  uVar1 = (uint)param_1.unknown & 0xff;
  if (uVar1 == 0x2b) {
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006af308);
      (*pcVar3)();
    }
    pbVar10 = pbVar10 + -1;
    if (pbVar10 == (byte *)0x0) goto LAB_1006af1bc;
    pbVar7 = (byte *)0x0;
    pbVar13 = (byte *)((ulong)&local_48 | 1);
    do {
      if (((9 < *pbVar13 - 0x30) || (((long)pbVar7 * 10 & 0xffffffff00000000U) != 0)) ||
         (uVar1 = *pbVar13 - 0x30 & 0xff, uVar11 = (uint)((long)pbVar7 * 10),
         pbVar7 = (byte *)(ulong)(uVar11 + uVar1), CARRY4(uVar11,uVar1))) goto LAB_1006af1bc;
      bVar9 = false;
      pbVar10 = pbVar10 + -1;
      pbVar13 = pbVar13 + 1;
    } while (pbVar10 != (byte *)0x0);
  }
  else if (uVar1 == 0x2d) {
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006af300);
      (*pcVar3)();
    }
    pbVar10 = pbVar10 + -1;
    if (pbVar10 == (byte *)0x0) {
LAB_1006af1bc:
      pbVar7 = (byte *)0x0;
      bVar9 = true;
    }
    else {
      pbVar7 = (byte *)0x0;
      pbVar13 = (byte *)((ulong)&local_48 | 1);
      do {
        if (((9 < *pbVar13 - 0x30) || (((long)pbVar7 * 10 & 0xffffffff00000000U) != 0)) ||
           (uVar1 = *pbVar13 - 0x30 & 0xff, uVar11 = (uint)((long)pbVar7 * 10),
           pbVar7 = (byte *)(ulong)(uVar11 - uVar1), uVar11 < uVar1)) goto LAB_1006af1bc;
        bVar9 = false;
        pbVar10 = pbVar10 + -1;
        pbVar13 = pbVar13 + 1;
      } while (pbVar10 != (byte *)0x0);
    }
  }
  else {
    if (pbVar10 == (byte *)0x0) goto LAB_1006af1bc;
    pbVar7 = (byte *)0x0;
    ppuVar12 = &local_48;
    do {
      if (((9 < *(byte *)ppuVar12 - 0x30) || (((long)pbVar7 * 10 & 0xffffffff00000000U) != 0)) ||
         (uVar1 = *(byte *)ppuVar12 - 0x30 & 0xff, uVar11 = (uint)((long)pbVar7 * 10),
         pbVar7 = (byte *)(ulong)(uVar11 + uVar1), CARRY4(uVar11,uVar1))) goto LAB_1006af1bc;
      bVar9 = false;
      pbVar10 = pbVar10 + -1;
      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
    } while (pbVar10 != (byte *)0x0);
  }
  if (!bVar9) {
    return pbVar7;
  }
LAB_1006af1cc:
  DVar4 = Swift::DecodingError::typeMetadataAccessor();
  pbVar13 = (byte *)CONCAT71((int7)((ulong)param_1.unknown >> 8),DVar4.value);
  puVar8 = (undefined8 *)
           PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(pbVar13,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar5 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar2 = *(int *)(puVar5 + 0x30);
  *puVar8 = PTR___type_metadata_for_Swift_UInt32_100eade50;
  _swift_beginAccess(unaff_x20 + 0x38,&local_48,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar6);
  Swift::DecodingError::Context::_init
            ((undefined *)((long)puVar8 + (long)iVar2),uVar6,0x6465746365707845,0xef3233746e495520,0
            );
  (**(code **)(*(long *)(pbVar13 + -8) + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,pbVar13);
  _swift_willThrow();
  return pbVar13;
}



/* Address: 0x1006af308 | FUN_1006af308 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006af604 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

code * FUN_1006af308(_StringObject param_1,code *param_2,undefined8 param_3,code *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  DecodingError DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  code *pcVar16;
  byte *pbVar17;
  ulong uVar18;
  long unaff_x20;
  long unaff_x21;
  uint uVar19;
  undefined *local_58;
  ulong uStack_50;
  
  FUN_1006ad564();
  if (unaff_x21 != 0) {
    return param_4;
  }
  pcVar13 = (code *)((ulong)param_1.unknown & 0xffffffffffff);
  pcVar16 = (code *)((ulong)param_2 >> 0x38 & 0xf);
  pcVar9 = pcVar13;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pcVar9 = pcVar16;
  }
  if (pcVar9 == (code *)0x0) goto LAB_1006af588;
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        param_1.unknown = (undefined *)Swift::_StringObject::get_sharedUTF8(param_1);
      }
      else {
        param_1.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        param_2 = pcVar13;
      }
      if ((code)*param_1.unknown == (code)0x2b) {
        pcVar9 = param_2 + -1;
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006af6a8);
          (*pcVar9)();
        }
        if (pcVar9 != (code *)0x0) {
          pcVar16 = (code *)0x0;
          pcVar13 = (code *)param_1.unknown;
          while( true ) {
            pcVar13 = pcVar13 + 1;
            if (((9 < (byte)*pcVar13 - 0x30) ||
                (auVar5._8_8_ = 0, auVar5._0_8_ = pcVar16, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
               (uVar18 = (long)pcVar16 * 10, uVar1 = (ulong)(byte)((byte)*pcVar13 - 0x30),
               pcVar16 = (code *)(uVar18 + uVar1), CARRY8(uVar18,uVar1))) break;
            pcVar9 = pcVar9 + -1;
            if (pcVar9 == (code *)0x0) {
              return pcVar16;
            }
          }
        }
      }
      else if ((code)*param_1.unknown == (code)0x2d) {
        pcVar9 = param_2 + -1;
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006af6a0);
          (*pcVar9)();
        }
        if (pcVar9 != (code *)0x0) {
          pcVar16 = (code *)0x0;
          pcVar13 = (code *)param_1.unknown;
          while( true ) {
            pcVar13 = pcVar13 + 1;
            if (((9 < (byte)*pcVar13 - 0x30) ||
                (auVar3._8_8_ = 0, auVar3._0_8_ = pcVar16, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
               (uVar18 = (long)pcVar16 * 10, uVar1 = (ulong)(byte)((byte)*pcVar13 - 0x30),
               pcVar16 = (code *)(uVar18 - uVar1), uVar18 < uVar1)) break;
            pcVar9 = pcVar9 + -1;
            if (pcVar9 == (code *)0x0) {
              return pcVar16;
            }
          }
        }
      }
      else if (param_2 != (code *)0x0) {
        pcVar9 = (code *)0x0;
        pcVar16 = (code *)param_1.unknown;
        while( true ) {
          if ((code *)param_1.unknown == (code *)0x0) {
            return pcVar9;
          }
          param_1.unknown = pcVar16 + 1;
          if (((9 < (byte)*pcVar16 - 0x30) ||
              (auVar7._8_8_ = 0, auVar7._0_8_ = pcVar9, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
             (uVar18 = (long)pcVar9 * 10, uVar1 = (ulong)(byte)((byte)*pcVar16 - 0x30),
             pcVar9 = (code *)(uVar18 + uVar1), CARRY8(uVar18,uVar1))) break;
          param_2 = param_2 + -1;
          pcVar16 = (code *)param_1.unknown;
          param_1.unknown = param_2;
        }
      }
      goto LAB_1006af588;
    }
    local_58 = param_1.unknown;
    uStack_50 = (ulong)param_2 & 0xffffffffffffff;
    uVar19 = (uint)param_1.unknown & 0xff;
    if (uVar19 == 0x2b) {
      if (pcVar16 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006af6ac);
        (*pcVar9)();
      }
      pcVar16 = pcVar16 + -1;
      if (pcVar16 == (code *)0x0) goto LAB_1006af574;
      pcVar9 = (code *)0x0;
      pbVar17 = (byte *)((ulong)&local_58 | 1);
      do {
        if (((9 < *pbVar17 - 0x30) ||
            (auVar6._8_8_ = 0, auVar6._0_8_ = pcVar9, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
           (uVar18 = (long)pcVar9 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
           pcVar9 = (code *)(uVar18 + uVar1), CARRY8(uVar18,uVar1))) goto LAB_1006af574;
        uVar19 = 0;
        pcVar16 = pcVar16 + -1;
        pbVar17 = pbVar17 + 1;
      } while (pcVar16 != (code *)0x0);
    }
    else if (uVar19 == 0x2d) {
      if (pcVar16 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006af6a4);
        (*pcVar9)();
      }
      pcVar16 = pcVar16 + -1;
      if (pcVar16 == (code *)0x0) {
LAB_1006af574:
        uVar19 = 1;
        pcVar9 = (code *)0x0;
      }
      else {
        pcVar9 = (code *)0x0;
        pbVar17 = (byte *)((ulong)&local_58 | 1);
        do {
          if (((9 < *pbVar17 - 0x30) ||
              (auVar4._8_8_ = 0, auVar4._0_8_ = pcVar9, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
             (uVar18 = (long)pcVar9 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
             pcVar9 = (code *)(uVar18 - uVar1), uVar18 < uVar1)) goto LAB_1006af574;
          uVar19 = 0;
          pcVar16 = pcVar16 + -1;
          pbVar17 = pbVar17 + 1;
        } while (pcVar16 != (code *)0x0);
      }
    }
    else {
      if (pcVar16 == (code *)0x0) goto LAB_1006af574;
      pcVar9 = (code *)0x0;
      ppuVar15 = &local_58;
      do {
        if (((9 < *(byte *)ppuVar15 - 0x30) ||
            (auVar8._8_8_ = 0, auVar8._0_8_ = pcVar9, SUB168(auVar8 * ZEXT816(10),8) != 0)) ||
           (uVar18 = (long)pcVar9 * 10, uVar1 = (ulong)(byte)(*(byte *)ppuVar15 - 0x30),
           pcVar9 = (code *)(uVar18 + uVar1), CARRY8(uVar18,uVar1))) goto LAB_1006af574;
        uVar19 = 0;
        pcVar16 = pcVar16 + -1;
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (pcVar16 != (code *)0x0);
    }
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    pcVar9 = param_2;
    (*param_4)(param_1.unknown,param_2,10);
    uVar19 = (uint)pcVar9;
    _swift_bridgeObjectRelease(param_2);
    pcVar9 = (code *)param_1.unknown;
  }
  if ((uVar19 & 0xff) != 1) {
    return pcVar9;
  }
LAB_1006af588:
  DVar10 = Swift::DecodingError::typeMetadataAccessor();
  pcVar9 = (code *)CONCAT71((int7)((ulong)param_1.unknown >> 8),DVar10.value);
  puVar14 = (undefined8 *)
            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(pcVar9,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar11 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar2 = *(int *)(puVar11 + 0x30);
  *puVar14 = param_5;
  _swift_beginAccess(unaff_x20 + 0x38,&local_58,0,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar12);
  Swift::DecodingError::Context::_init
            ((undefined *)((long)puVar14 + (long)iVar2),uVar12,0x6465746365707845,param_6,0);
  (**(code **)(*(long *)(pcVar9 + -8) + 0x68))
            (puVar14,*(undefined4 *)
                      PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,pcVar9);
  _swift_willThrow();
  return pcVar9;
}



/* Address: 0x1006af6ac | FUN_1006af6ac */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006af854 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006af6ac(void)

{
  byte *******pppppppbVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  DecodingError DVar7;
  byte *******pppppppbVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x20;
  long unaff_x21;
  byte *******pppppppbVar14;
  byte ******local_98;
  ulong uStack_90;
  byte local_81;
  undefined1 auStack_80 [16];
  undefined8 *local_70;
  undefined1 auStack_68 [24];
  undefined8 local_48;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar13 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006af900);
    (*pcVar6)();
  }
  lVar13 = *(long *)(unaff_x20 + 0x10) + lVar13 * 0x18;
  pppppppbVar1 = *(byte ********)(lVar13 + 8);
  uVar2 = *(ulong *)(lVar13 + 0x10);
  uVar3 = *(undefined1 *)(lVar13 + 0x18);
  FUN_1006ad53c(pppppppbVar1,uVar2,uVar3);
  pppppppbVar8 = pppppppbVar1;
  uVar11 = uVar2;
  FUN_1006ad564(pppppppbVar1,uVar2,uVar3);
  if (unaff_x21 != 0) goto LAB_1006af880;
  local_48 = 0;
  local_70 = &local_48;
  if ((uVar11 >> 0x3c & 1) == 0) {
    if ((uVar11 >> 0x3d & 1) == 0) {
      if (((ulong)pppppppbVar8 >> 0x3c & 1) == 0) goto LAB_1006af900;
      pppppppbVar14 = (byte *******)((uVar11 & 0xfffffffffffffff) + 0x20);
      if (*(byte *)pppppppbVar14 < 0x21 &&
          (1L << ((ulong)*(byte *)pppppppbVar14 & 0x3f) & 0x100003e01U) != 0) goto LAB_1006af7b0;
      _swift_bridgeObjectRetain(uVar11);
LAB_1006af8c4:
      __swift_stdlib_strtod_clocale(pppppppbVar14,&local_48);
      if (pppppppbVar14 != (byte *******)0x0) {
        bVar4 = *(byte *)pppppppbVar14;
        _swift_bridgeObjectRelease(uVar11);
        pppppppbVar8 = pppppppbVar14;
        if (bVar4 == 0) {
LAB_1006af8dc:
          FUN_1006ad108(pppppppbVar1,uVar2,uVar3);
          return;
        }
        goto LAB_1006af7c4;
      }
    }
    else {
      uStack_90 = uVar11 & 0xffffffffffffff;
      local_98 = (byte ******)pppppppbVar8;
      if (0x20 < ((uint)pppppppbVar8 & 0xff) ||
          (1L << ((ulong)pppppppbVar8 & 0x3f) & 0x100003e01U) == 0) {
        _swift_bridgeObjectRetain(uVar11);
        pppppppbVar14 = &local_98;
        goto LAB_1006af8c4;
      }
LAB_1006af7b0:
      _swift_bridgeObjectRetain(uVar11);
      pppppppbVar14 = pppppppbVar8;
    }
    _swift_bridgeObjectRelease(uVar11);
    pppppppbVar8 = pppppppbVar14;
  }
  else {
LAB_1006af900:
    _swift_bridgeObjectRetain(uVar11);
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x1006afc10);
    _swift_bridgeObjectRelease(uVar11);
    if ((local_81 & 1) != 0) goto LAB_1006af8dc;
  }
LAB_1006af7c4:
  DVar7 = Swift::DecodingError::typeMetadataAccessor();
  lVar13 = CONCAT71((int7)((ulong)pppppppbVar8 >> 8),DVar7.value);
  puVar12 = (undefined8 *)
            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar13,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar9 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar5 = *(int *)(puVar9 + 0x30);
  *puVar12 = PTR___type_metadata_for_Swift_Double_100eac5d0;
  _swift_beginAccess(unaff_x20 + 0x38,auStack_80,0,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar10);
  Swift::DecodingError::Context::_init
            ((long)puVar12 + (long)iVar5,uVar10,0x6465746365707845,0xef656c62756f4420,0);
  (**(code **)(*(long *)(lVar13 + -8) + 0x68))
            (puVar12,*(undefined4 *)
                      PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,lVar13);
  _swift_willThrow();
LAB_1006af880:
  FUN_1006ad108(pppppppbVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1006af950 | FUN_1006af950 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006afaf8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006af950(void)

{
  byte *pbVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  DecodingError DVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x20;
  long unaff_x21;
  byte **ppbVar14;
  byte *local_90;
  ulong uStack_88;
  undefined1 auStack_80 [16];
  undefined4 *local_70;
  undefined1 auStack_68 [24];
  byte local_45;
  undefined4 local_44;
  
  ppbVar14 = &local_90;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar13 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1006afba4);
    (*pcVar6)();
  }
  lVar13 = *(long *)(unaff_x20 + 0x10) + lVar13 * 0x18;
  pbVar1 = *(byte **)(lVar13 + 8);
  uVar2 = *(ulong *)(lVar13 + 0x10);
  uVar3 = *(undefined1 *)(lVar13 + 0x18);
  FUN_1006ad53c(pbVar1,uVar2,uVar3);
  pbVar8 = pbVar1;
  uVar11 = uVar2;
  FUN_1006ad564(pbVar1,uVar2,uVar3);
  if (unaff_x21 != 0) goto LAB_1006afb24;
  local_44 = 0;
  local_70 = &local_44;
  if ((uVar11 >> 0x3c & 1) == 0) {
    if ((uVar11 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar8 >> 0x3c & 1) == 0) goto LAB_1006afba4;
      ppbVar14 = (byte **)((uVar11 & 0xfffffffffffffff) + 0x20);
      if (*(byte *)ppbVar14 < 0x21 && (1L << ((ulong)*(byte *)ppbVar14 & 0x3f) & 0x100003e01U) != 0)
      goto LAB_1006afa54;
      _swift_bridgeObjectRetain(uVar11);
LAB_1006afb68:
      __swift_stdlib_strtof_clocale(ppbVar14,&local_44);
      if (ppbVar14 != (byte **)0x0) {
        bVar4 = *(byte *)ppbVar14;
        _swift_bridgeObjectRelease(uVar11);
        pbVar8 = (byte *)ppbVar14;
        if (bVar4 == 0) {
LAB_1006afb80:
          FUN_1006ad108(pbVar1,uVar2,uVar3);
          return;
        }
        goto LAB_1006afa68;
      }
    }
    else {
      uStack_88 = uVar11 & 0xffffffffffffff;
      local_90 = pbVar8;
      if (0x20 < ((uint)pbVar8 & 0xff) || (1L << ((ulong)pbVar8 & 0x3f) & 0x100003e01U) == 0) {
        _swift_bridgeObjectRetain(uVar11);
        goto LAB_1006afb68;
      }
LAB_1006afa54:
      _swift_bridgeObjectRetain(uVar11);
      ppbVar14 = (byte **)pbVar8;
    }
    _swift_bridgeObjectRelease(uVar11);
    pbVar8 = (byte *)ppbVar14;
  }
  else {
LAB_1006afba4:
    _swift_bridgeObjectRetain(uVar11);
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x1006afbf4);
    _swift_bridgeObjectRelease(uVar11);
    if ((local_45 & 1) != 0) goto LAB_1006afb80;
  }
LAB_1006afa68:
  DVar7 = Swift::DecodingError::typeMetadataAccessor();
  lVar13 = CONCAT71((int7)((ulong)pbVar8 >> 8),DVar7.value);
  puVar12 = (undefined8 *)
            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar13,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar9 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar5 = *(int *)(puVar9 + 0x30);
  *puVar12 = PTR___type_metadata_for_Swift_Float_100eac620;
  _swift_beginAccess(unaff_x20 + 0x38,auStack_80,0,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(uVar10);
  Swift::DecodingError::Context::_init
            ((long)puVar12 + (long)iVar5,uVar10,0x6465746365707845,0xee0074616f6c4620,0);
  (**(code **)(*(long *)(lVar13 + -8) + 0x68))
            (puVar12,*(undefined4 *)
                      PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,lVar13);
  _swift_willThrow();
LAB_1006afb24:
  FUN_1006ad108(pbVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1006afbf4 | FUN_1006afbf4 */

void FUN_1006afbf4(undefined8 param_1)

{
  FUN_1006b006c(param_1,PTR___swift_stdlib_strtof_clocale_100eae108);
  return;
}



/* Address: 0x1006afc10 | FUN_1006afc10 */

void FUN_1006afc10(undefined8 param_1)

{
  FUN_1006b006c(param_1,PTR___swift_stdlib_strtod_clocale_100eae100);
  return;
}



/* Address: 0x1006afc2c | FUN_1006afc2c */

void FUN_1006afc2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdbf60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6fb58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6fb58,&DAT_100ef6990);
  DAT_100fdbf60 = pTVar1;
  return;
}



/* Address: 0x1006afc6c | FUN_1006afc6c */

void FUN_1006afc6c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006afc98 | FUN_1006afc98 */

void FUN_1006afc98(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006afca4 | FUN_1006afca4 */

void FUN_1006afca4(String *param_1)

{
  String stringValue;
  
  stringValue = *param_1;
  _swift_bridgeObjectRetain(param_1->bridgeObject);
  Swift::CodingKey::_init(stringValue);
  return;
}



/* Address: 0x1006afd04 | FUN_1006afd04 */

void FUN_1006afd04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fdbf78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fdbf70;
  FUN_1000f8b08(&DAT_100fdbf70,&DAT_100c6f988);
  puVar2 = PTR__Swift__Keys_>Swift__Sequence_100eabdd0;
  _swift_getWitnessTable(PTR__Swift__Keys_>Swift__Sequence_100eabdd0,puVar1);
  DAT_100fdbf78 = puVar2;
  return;
}



/* Address: 0x1006afd54 | FUN_1006afd54 */

void FUN_1006afd54(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1006a6ebc(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1006afd94 | FUN_1006afd94 */

void FUN_1006afd94(void)

{
  ISO8601FormatStyle IVar1;
  undefined *puVar2;
  
  if (DAT_100fdbf90 != (undefined *)0x0) {
    return;
  }
  IVar1 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__ParseStrategy_100ea73e8
  ;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__ParseStrategy_100ea73e8
             ,IVar1.unknown);
  DAT_100fdbf90 = puVar2;
  return;
}



/* Address: 0x1006afdd8 | thunk_FUN_1006afe0c */

void thunk_FUN_1006afe0c(void)

{
  FUN_1006afe0c();
  return;
}



/* Address: 0x1006afddc | FUN_1006afddc */

void FUN_1006afddc(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  return;
}



/* Address: 0x1006afe0c | FUN_1006afe0c */

undefined8 * FUN_1006afe0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1006afe5c | FUN_1006afe5c */

undefined8 * FUN_1006afe5c(undefined8 *param_1,undefined8 *param_2)

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
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006afed0 | FUN_1006afed0 */

void FUN_1006afed0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006afee4 | FUN_1006afee4 */

undefined8 * FUN_1006afee4(undefined8 *param_1,undefined8 *param_2)

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
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006aff30 | FUN_1006aff30 */

undefined8 * FUN_1006aff30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1006aff80 | FUN_1006aff80 */

undefined8 * FUN_1006aff80(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x1006afff4 | FUN_1006afff4 */

void FUN_1006afff4(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1006b0008 | FUN_1006b0008 */

undefined8 * FUN_1006b0008(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x1006b005c | FUN_1006b005c */

undefined1  [16] FUN_1006b005c(void)

{
  return ZEXT816(0x100ef6990);
}



/* Address: 0x1006b006c | FUN_1006b006c */

void FUN_1006b006c(undefined1 *param_1,byte *param_2,code *param_3)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  (*param_3)(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Address: 0x1006b00ec | thunk_FUN_10016d728 */

void thunk_FUN_10016d728(void)

{
  FUN_10016d728();
  return;
}



/* Address: 0x1006b00f0 | FUN_1006b00f0 */

void FUN_1006b00f0(void)

{
  FUN_1006afc10();
  return;
}



/* Address: 0x1006b0104 | FUN_1006b0104 */

void FUN_1006b0104(void)

{
  FUN_1006afbf4();
  return;
}



/* Address: 0x1006b0118 | thunk_FUN_1006ad3ac */

void thunk_FUN_1006ad3ac(void)

{
  thunk_FUN_1006ad3ac();
  return;
}



/* Address: 0x1006b011c | thunk_FUN_1006ab670 */

void thunk_FUN_1006ab670(void)

{
  thunk_FUN_1006ab670();
  return;
}



/* Address: 0x1006b0120 | thunk_FUN_1006ad1fc */

void thunk_FUN_1006ad1fc(void)

{
  thunk_FUN_1006ad1fc();
  return;
}



/* Address: 0x1006b0124 | thunk_FUN_1006ad3e0 */

void thunk_FUN_1006ad3e0(void)

{
  thunk_FUN_1006ad3e0();
  return;
}



/* Address: 0x1006b0128 | thunk_FUN_1006ad444 */

void thunk_FUN_1006ad444(void)

{
  thunk_FUN_1006ad444();
  return;
}



/* Address: 0x1006b012c | thunk_FUN_1006ad4c0 */

void thunk_FUN_1006ad4c0(void)

{
  thunk_FUN_1006ad4c0();
  return;
}



/* Address: 0x1006b0130 | thunk_FUN_10016d6e0 */

void thunk_FUN_10016d6e0(void)

{
  thunk_FUN_10016d6e0();
  return;
}



/* Address: 0x1006b0134 | thunk_FUN_1006afe0c */

void thunk_FUN_1006afe0c(void)

{
  thunk_FUN_1006afe0c();
  return;
}



/* Address: 0x1006b0138 | FUN_1006b0138 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006b0340 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1006b0138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  EncodingError EVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x21;
  undefined1 auVar10 [16];
  long local_88 [3];
  long local_70;
  undefined *local_68;
  
  FUN_1006ad0e8(param_2,param_3,param_4);
  FUN_1006b0378();
  lVar6 = 0;
  FUN_1006b0784();
  lVar7 = lVar6;
  _swift_allocObject();
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(lVar7 + 0x20) = param_2;
  *(undefined8 *)(lVar7 + 0x28) = param_3;
  *(char *)(lVar7 + 0x30) = (char)param_4;
  *(undefined **)(lVar7 + 0x10) = puVar8;
  *(undefined **)(lVar7 + 0x18) = puVar8;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x38) = param_5;
  *(undefined1 *)(lVar7 + 0x50) = 0xff;
  puVar8 = &DAT_100fdc028;
  local_70 = lVar6;
  FUN_1006b4b5c(&DAT_100fdc028,&TargetProtocolConformanceDescriptor_100c6fe48);
  local_88[0] = lVar7;
  local_68 = puVar8;
  _swift_retain(lVar7);
  Swift::Encodable::_encode();
  if (unaff_x21 == 0) {
    FUN_100004594(local_88);
    cVar3 = *(char *)(lVar7 + 0x50);
    if (cVar3 == -1) {
      EVar5 = Swift::EncodingError::typeMetadataAccessor();
      lVar6 = CONCAT71((int7)((ulong)puVar8 >> 8),EVar5.value);
      puVar9 = PTR___protocol_witness_table_for_Swift_EncodingError___Swift_Error_in_Swift_100eacfa8
      ;
      _swift_allocError(lVar6,
                        PTR___protocol_witness_table_for_Swift_EncodingError___Swift_Error_in_Swift_100eacfa8
                        ,0,0);
      puVar8 = &DAT_100fdc030;
      FUN_1000f7830(&DAT_100fdc030,&DAT_100c6fce0);
      iVar4 = *(int *)(puVar8 + 0x30);
      *(long *)(puVar9 + 0x18) = param_6;
      FUN_10000cbb0(puVar9);
      (**(code **)(*(long *)(param_6 + -8) + 0x10))();
      Swift::EncodingError::Context::_init
                (puVar9 + iVar4,puVar8,0xd000000000000035,0x8000000100daff90,0);
      (**(code **)(*(long *)(lVar6 + -8) + 0x68))
                (puVar9,*(undefined4 *)
                         PTR___enum_case_for_Swift_EncodingError_invalidValue_Swift_EncodingError_Type___>__Any_Swift_EncodingError_Context___>_Swift_EncodingError_100eacf88
                 ,lVar6);
      _swift_willThrow();
      _swift_release(lVar7);
    }
    else {
      uVar1 = *(undefined8 *)(lVar7 + 0x40);
      uVar2 = *(undefined8 *)(lVar7 + 0x48);
      FUN_1006ad53c(uVar1,uVar2,cVar3);
      param_6 = 0;
      lVar6 = -0x2000000000000000;
      FUN_1006b5070(0,0xe000000000000000,uVar1,uVar2,cVar3);
      FUN_1006b4a08(uVar1,uVar2,cVar3);
      _swift_release(lVar7);
    }
  }
  else {
    _swift_release(lVar7);
    FUN_100004594(local_88);
  }
  auVar10._8_8_ = lVar6;
  auVar10._0_8_ = param_6;
  return auVar10;
}



/* Address: 0x1006b0378 | FUN_1006b0378 */

undefined * FUN_1006b0378(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  bool bVar7;
  undefined *puVar8;
  CodingUserInfoKey CVar9;
  _DictionaryStorage *this;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined *puVar16;
  ulong uVar17;
  code *pcVar18;
  undefined1 auStack_f0 [8];
  ulong local_e8;
  ulong *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined1 auStack_80 [32];
  
  puVar8 = &DAT_100fdc188;
  FUN_1000f7830(&DAT_100fdc188,&DAT_100c6fe90);
  local_a0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fdc190;
  local_a8 = auStack_f0 + -extraout_x8;
  FUN_1000f7830(&DAT_100fdc190,&DAT_100c6fe98);
  local_b0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_f0 + -extraout_x8) - extraout_x8_00;
  local_b8 = lVar11;
  CVar9 = Swift::CodingUserInfoKey::typeMetadataAccessor();
  local_c0 = *(long *)(CVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fdc198;
  local_88 = lVar11;
  FUN_1000f7830(&DAT_100fdc198,&DAT_100c6fea0);
  local_c8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar11 - extraout_x8_02;
  puVar16 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  local_98 = param_1;
  if (puVar16 != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc1a0;
    FUN_1000f7830(&DAT_100fdc1a0,&DAT_100c6fea8);
    Swift::_DictionaryStorage::_allocate(this,(__int64)puVar16);
    puVar8 = puVar16;
  }
  puVar15 = (ulong *)(local_98 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(local_98 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(local_98 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *puVar15;
  _swift_bridgeObjectRetain();
  lVar11 = 0;
  local_d8 = puVar8;
  local_e0 = puVar15;
  local_e8 = uVar13 + 0x3f >> 6;
  puVar16 = puVar8;
  while( true ) {
    for (; lVar6 = local_98, lVar4 = local_c0, lVar3 = local_d0, uVar17 != 0;
        uVar17 = uVar17 - 1 & uVar17) {
      uVar13 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar11 << 6;
      local_90 = *(long *)(local_c0 + 0x48);
      (**(code **)(local_c0 + 0x10))
                (local_d0,*(long *)(local_98 + 0x30) + local_90 * uVar13,CVar9.unknown);
      iVar1 = *(int *)(local_c8 + 0x30);
      FUN_10000cbfc(*(long *)(lVar6 + 0x38) + uVar13 * 0x20,lVar3 + iVar1);
      puVar5 = local_a8;
      iVar2 = *(int *)(local_a0 + 0x30);
      pcVar18 = *(code **)(lVar4 + 0x20);
      (*pcVar18)(local_a8,lVar3,CVar9.unknown);
      FUN_100011080(lVar3 + iVar1,auStack_80);
      puVar16 = &DAT_100fdc1a8;
      FUN_1000f7830(&DAT_100fdc1a8,&DAT_100c6feb0);
      _swift_dynamicCast(puVar5 + iVar2,auStack_80,puVar16,PTR___type_metadata_for_Any_100eae0c0 + 8
                         ,7);
      lVar3 = local_b8;
      iVar1 = *(int *)(local_b0 + 0x30);
      (*pcVar18)(local_b8,puVar5,CVar9.unknown);
      FUN_100011080(puVar5 + iVar2,lVar3 + iVar1);
      (*pcVar18)(local_88,lVar3,CVar9.unknown);
      puVar16 = local_d8;
      FUN_100011080(lVar3 + iVar1,auStack_80);
      uVar10 = Swift::Hashable::_rawHashValue(*(__int64 *)(puVar16 + 0x28));
      uVar14 = -1L << ((ulong)(byte)puVar16[0x20] & 0x3f);
      uVar10 = uVar10 & (uVar14 ^ 0xffffffffffffffff);
      uVar12 = uVar10 >> 6;
      uVar13 = -1L << (uVar10 & 0x3f) &
               (*(ulong *)(puVar8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar13 == 0) {
        bVar7 = false;
        uVar13 = 0x3f - uVar14 >> 6;
        do {
          uVar10 = uVar12 + 1;
          if ((uVar10 == uVar13) && (bVar7)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x1006b0784);
            (*pcVar18)();
          }
          uVar12 = 0;
          if (uVar10 != uVar13) {
            uVar12 = uVar10;
          }
          bVar7 = (bool)(uVar10 == uVar13 | bVar7);
        } while (*(ulong *)(puVar8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
        uVar13 = ~*(ulong *)(puVar8 + uVar12 * 8 + 0x40);
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar12 << 6;
      }
      else {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar10 & 0x7fffffffffffffc0;
      }
      uVar12 = uVar13 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar12 + 0x40) =
           1L << (uVar13 & 0x3f) | *(ulong *)(puVar8 + uVar12 + 0x40);
      (*pcVar18)(*(long *)(puVar16 + 0x30) + uVar13 * local_90,local_88,CVar9.unknown);
      FUN_100011080(auStack_80,*(long *)(puVar16 + 0x38) + uVar13 * 0x20);
      *(long *)(puVar16 + 0x10) = *(long *)(puVar16 + 0x10) + 1;
    }
    bVar7 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1006b0780);
      (*pcVar18)();
    }
    if ((long)local_e8 <= lVar11) break;
    uVar17 = local_e0[lVar11];
  }
  _swift_release(local_98);
  return puVar16;
}



/* Address: 0x1006b0784 | FUN_1006b0784 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1006b0784(void)

{
  return ZEXT816(0x100fdc088);
}



/* Address: 0x1006b07a4 | FUN_1006b07a4 */

void FUN_1006b07a4(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  uVar4 = *unaff_x20;
  if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b0808);
    (*pcVar1)();
  }
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_1006f822c();
    lVar3 = *(long *)(uVar4 + 0x10);
  }
  else {
    lVar3 = *(long *)(uVar4 + 0x10);
  }
  if (lVar3 != 0) {
    *(long *)(uVar4 + 0x10) = lVar3 + -1;
    *unaff_x20 = uVar4;
    FUN_100076508(uVar4 + lVar3 * 0x28 + -8,param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b0820);
  (*pcVar1)();
}



/* Address: 0x1006b0820 | FUN_1006b0820 */

undefined8 FUN_1006b0820(undefined8 param_1)

{
  undefined8 in_x4;
  
  _swift_bridgeObjectRelease(in_x4);
  return param_1;
}



/* Address: 0x1006b0868 | FUN_1006b0868 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006b0988 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006b0868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  long local_68;
  
  _swift_beginAccess(unaff_x20 + 0x18,&local_68,0x21,0);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c25a4();
  lVar2 = 0;
  FUN_1006b5aec();
  _swift_allocObject();
  *(undefined **)(lVar2 + 0x10) = puVar1;
  uVar8 = *(ulong *)(unaff_x20 + 0x18);
  _swift_retain_n();
  uVar3 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x18) = uVar8;
  uVar6 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
    FUN_1006a2628(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(unaff_x20 + 0x18) = uVar6;
  }
  uVar3 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_1006a2628(uVar8,uVar3 + 1,1,uVar6);
  }
  *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
  lVar7 = uVar8 + uVar3 * 0x18;
  *(long *)(lVar7 + 0x20) = lVar2;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined1 *)(lVar7 + 0x30) = 1;
  *(ulong *)(unaff_x20 + 0x18) = uVar8;
  _swift_endAccess(&local_68);
  if (*(char *)(unaff_x20 + 0x50) == -1) {
    *(long *)(unaff_x20 + 0x40) = lVar2;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined1 *)(unaff_x20 + 0x50) = 1;
  }
  else {
    _swift_release(lVar2);
  }
  uVar4 = 0;
  local_68 = lVar2;
  FUN_1006b4bdc(0,param_3,param_4);
  _swift_retain();
  pTVar5 = &TargetProtocolConformanceDescriptor_100c6fee8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6fee8,uVar4);
  Swift::KeyedEncodingContainer::_init(param_1,pTVar5,param_3,uVar4,pTVar5);
  return;
}



/* Address: 0x1006b09ec | FUN_1006b09ec */

void FUN_1006b09ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_68 [24];
  
  lVar3 = *unaff_x20;
  _swift_beginAccess(lVar3 + 0x10,auStack_68,0x21,0);
  _swift_bridgeObjectRetain(param_5);
  FUN_1006ad53c(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(lVar3 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = 0x8000000000000000;
  FUN_1006b9c38(param_1,param_2,param_3,param_4,param_5,uVar1);
  _swift_bridgeObjectRelease(param_5);
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  _swift_endAccess(auStack_68);
  return;
}



/* Address: 0x1006b0ab8 | FUN_1006b0ab8 */

void FUN_1006b0ab8(undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  FUN_1006b7c9c(param_1,in_x4,in_x5);
  FUN_1006b09ec();
  _swift_bridgeObjectRelease(in_x4);
  return;
}



/* Address: 0x1006b0b14 | FUN_1006b0b14 */

void FUN_1006b0b14(undefined8 param_1,undefined8 param_2)

{
  String SVar1;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_48 = 0xe000000000000000;
  SVar1 = Swift::CodingKey::get_stringValue();
  FUN_1006b0ab8(&local_50,SVar1.str,SVar1.bridgeObject,param_2,
                PTR___type_metadata_for_Swift_String_100eac208,
                PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
               );
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x1006b0ba4 | FUN_1006b0ba4 */

void FUN_1006b0ba4(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  String SVar1;
  undefined1 local_31;
  
  local_31 = param_1;
  SVar1 = Swift::CodingKey::get_stringValue();
  FUN_1006b0ab8(&local_31,SVar1.str,SVar1.bridgeObject,param_3,
                PTR___type_metadata_for_Swift_Bool_100eac570,
                PTR___protocol_witness_table_for_Swift_Bool___Swift_LosslessStringConvertible_in_Swift_100eac598
               );
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x1006b0c28 | FUN_1006b0c28 */

void FUN_1006b0c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  String SVar1;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = param_1;
  local_48 = param_2;
  SVar1 = Swift::CodingKey::get_stringValue();
  FUN_1006b0ab8(&local_50,SVar1.str,SVar1.bridgeObject,param_4,
                PTR___type_metadata_for_Swift_String_100eac208,
                PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
               );
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x1006b0cb0 | FUN_1006b0cb0 */

void FUN_1006b0cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  String SVar1;
  undefined8 local_38;
  
  local_38 = param_1;
  SVar1 = Swift::CodingKey::get_stringValue();
  FUN_1006b0ab8(&local_38,SVar1.str,SVar1.bridgeObject,param_3,
                PTR___type_metadata_for_Swift_Double_100eac5d0,
                PTR___protocol_witness_table_for_Swift_Double___Swift_LosslessStringConvertible_in_Swift_100eac5f0
               );
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x1006b0d34 | FUN_1006b0d34 */

void FUN_1006b0d34(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  String SVar1;
  undefined4 local_34;
  
  local_34 = param_1;
  SVar1 = Swift::CodingKey::get_stringValue();
  FUN_1006b0ab8(&local_34,SVar1.str,SVar1.bridgeObject,param_3,
                PTR___type_metadata_for_Swift_Float_100eac620,
                PTR___protocol_witness_table_for_Swift_Float___Swift_LosslessStringConvertible_in_Swift_100eac630
               );
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}


