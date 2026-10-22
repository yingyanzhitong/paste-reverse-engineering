/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006d37b8 | FUN_1006d37b8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006d3910 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006d37b8(undefined1 *param_1,long param_2)

{
  DecodingError DVar1;
  undefined *puVar3;
  long unaff_x21;
  String SVar4;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined1 local_88 [8];
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lVar2;
  
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_b0,local_98);
    SVar4 = Swift::SingleValueDecodingContainer::_decode();
    FUN_1006d34a4(local_88,SVar4.str,SVar4.bridgeObject);
    if (local_78 != 0) {
      FUN_100004594(auStack_b0);
      FUN_100004594(param_2);
      *param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(long *)(param_1 + 0x10) = local_78;
      *(undefined8 *)(param_1 + 0x30) = uStack_58;
      *(undefined8 *)(param_1 + 0x28) = uStack_60;
      *(undefined8 *)(param_1 + 0x20) = uStack_68;
      *(undefined8 *)(param_1 + 0x18) = local_70;
      return;
    }
    DVar1 = Swift::DecodingError::typeMetadataAccessor();
    lVar2 = CONCAT71(SVar4.str._1_7_,DVar1.value);
    puVar3 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar2,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
    Swift::Decoder::_get_codingPath();
    Swift::DecodingError::Context::_init(puVar3,lVar2,0xd00000000000001a,0x8000000100db08c0,0);
    (**(code **)(*(long *)(lVar2 + -8) + 0x68))
              (puVar3,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
               ,lVar2);
    _swift_willThrow();
    FUN_100004594(auStack_b0);
  }
  FUN_100004594(param_2);
  return;
}



/* Address: 0x1006d3940 | FUN_1006d3940 */

void FUN_1006d3940(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x20) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Address: 0x1006d3980 | FUN_1006d3980 */

undefined1 * FUN_1006d3980(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  lVar1 = *(long *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_1 + 0x20) = lVar1;
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar2);
  }
  return param_1;
}



/* Address: 0x1006d39fc | FUN_1006d39fc */

undefined1 * FUN_1006d39fc(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    if (*(long *)(param_2 + 0x20) == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      *(undefined8 *)(param_1 + 0x18) = uVar1;
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
    }
  }
  else if (*(long *)(param_2 + 0x20) == 0) {
    FUN_1006d3b00(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
  }
  return param_1;
}



/* Address: 0x1006d3b00 | FUN_1006d3b00 */

undefined8 FUN_1006d3b00(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdc550;
  FUN_1000f7830(&DAT_100fdc550,&DAT_100c70c08);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1006d3b48 | FUN_1006d3b48 */

void FUN_1006d3b48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006d3b64 | FUN_1006d3b64 */

undefined1 * FUN_1006d3b64(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _swift_bridgeObjectRelease(uVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(long *)(param_1 + 0x20) = lVar2;
      _swift_bridgeObjectRelease();
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    FUN_1006d3b00(param_1 + 0x18);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  return param_1;
}



/* Address: 0x1006d3be8 | FUN_1006d3be8 */

undefined1  [16] FUN_1006d3be8(void)

{
  return ZEXT816(0x100ef90d0);
}



/* Address: 0x1006d3bf8 | FUN_1006d3bf8 */

undefined1  [16] FUN_1006d3bf8(void)

{
  return ZEXT816(0x100ef9158);
}



/* Address: 0x1006d3c08 | FUN_1006d3c08 */

undefined1  [16] FUN_1006d3c08(void)

{
  return ZEXT816(0x100ef91f0);
}



/* Address: 0x1006d3c18 | thunk_FUN_1006d3c1c */

void thunk_FUN_1006d3c1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdce90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71a18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71a18,&DAT_100ef91f0);
  DAT_100fdce90 = pTVar1;
  return;
}



/* Address: 0x1006d3c1c | FUN_1006d3c1c */

void FUN_1006d3c1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdce90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71a18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71a18,&DAT_100ef91f0);
  DAT_100fdce90 = pTVar1;
  return;
}



/* Address: 0x1006d3c5c | FUN_1006d3c5c */

void FUN_1006d3c5c(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  bVar1 = (byte)*param_2;
  FUN_100a33360();
  *param_1 = bVar1 & 1;
  return;
}



/* Address: 0x1006d3c88 | FUN_1006d3c88 */

undefined8 FUN_1006d3c88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdd040;
  FUN_1000f7830(&DAT_100fdd040,&DAT_100c71a70);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1006d3cd8 | thunk_FUN_1004289a8 */

void thunk_FUN_1004289a8(void)

{
  thunk_FUN_1004289a8();
  return;
}



/* Address: 0x1006d3cdc | thunk_FUN_1006d0074 */

void thunk_FUN_1006d0074(void)

{
  FUN_1006d0074();
  return;
}



/* Address: 0x1006d3ce0 | thunk_FUN_100428918 */

void thunk_FUN_100428918(void)

{
  thunk_FUN_100428918();
  return;
}



/* Address: 0x1006d3ce4 | thunk_FUN_1006cfb8c */

uint thunk_FUN_1006cfb8c(undefined8 param_1)

{
  if (DAT_100fdcfc8 != -1) {
    _swift_once(&DAT_100fdcfc8,switchD_1006d0104::caseD_ba);
  }
  FUN_1006e3df8(param_1,DAT_101058118);
  return ((uint)param_1 ^ 0xffffffff) & 1;
}



/* Address: 0x1006d3ce8 | thunk_FUN_1006d00cc */

void thunk_FUN_1006d00cc(void)

{
  thunk_FUN_1006d00cc();
  return;
}



/* Address: 0x1006d3cec | FUN_1006d3cec */

undefined8 FUN_1006d3cec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x65696b6f6f43;
  FUN_10085ca84(0x65696b6f6f43,&DAT_e600000000000000,0x65696b6f6f63,&DAT_e600000000000000,
                *(undefined8 *)(unaff_x20 + 0xb8));
  uVar2 = uVar1;
  FUN_1006cc780();
  _swift_bridgeObjectRelease(uVar1);
  return uVar2;
}



/* Address: 0x1006d3d3c | FUN_1006d3d3c */

void FUN_1006d3d3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  uVar4 = 0x6b6f6f432d746553;
  FUN_1006c9474();
  FUN_10085ca84(0x6b6f6f432d746553,0xea00000000006569,0x6b6f6f632d746573,0xea00000000006569,
                *(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1006a2520(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1006a2520(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  FUN_10085ca94(uVar4,0x6b6f6f432d746553,0xea00000000006569,0x6b6f6f632d746573,0xea00000000006569);
  return;
}



/* Address: 0x1006d3e4c | FUN_1006d3e4c */

void FUN_1006d3e4c(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1006d3e68 | FUN_1006d3e68 */

undefined1  [16] FUN_1006d3e68(long param_1,undefined1 *param_2,undefined *param_3,char param_4)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  bool bVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  
  if (param_4 == '\0') {
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    _swift_bridgeObjectRetain(param_2);
    _Var4.unknown = (undefined *)0x6e696769724f;
    _Var5.unknown = &DAT_e600000000000000;
    FUN_10085c5ec(0x6e696769724f,&DAT_e600000000000000,0x6e696769726f,&DAT_e600000000000000,uVar8);
    if ((_Var5.unknown == (undefined *)0x0) ||
       ((_Var4.unknown != (undefined *)0x6c6c756e || _Var5.unknown != &DAT_e400000000000000 &&
        (bVar3 = Swift::_stringCompareWithSmolCheck(_Var4,_Var5,(_StringComparisonResult)0x6e),
        !bVar3)))) {
      lVar9 = *(long *)(param_2 + 0x10);
      if (lVar9 != 0) {
        puVar10 = (undefined8 *)(param_2 + 0x28);
        do {
          if (_Var5.unknown != (undefined *)0x0) {
            _Var1.unknown = (undefined *)puVar10[-1];
            _Var2.unknown = (undefined *)*puVar10;
            _Var6.unknown = _Var5.unknown;
            _Var7.unknown = _Var4.unknown;
            if ((_Var1.unknown == _Var4.unknown && _Var5.unknown == _Var2.unknown) ||
               (bVar3 = Swift::_stringCompareWithSmolCheck
                                  (_Var1,_Var2,(_StringComparisonResult)(__int8)_Var4.unknown),
               _Var6.unknown = _Var2.unknown, _Var7.unknown = _Var1.unknown, bVar3)) {
              _swift_bridgeObjectRetain(_Var2.unknown);
              FUN_1006d52ac(param_2,param_3,0);
              _swift_bridgeObjectRelease(_Var5.unknown);
              goto LAB_1006d4034;
            }
          }
          puVar10 = puVar10 + 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      _swift_bridgeObjectRelease(_Var5.unknown);
      FUN_1006d52ac(param_2,param_3,0);
    }
    else {
      FUN_1006d52ac(param_2,param_3,0);
LAB_1006d4028:
      _swift_bridgeObjectRelease(_Var5.unknown);
    }
  }
  else {
    if (param_4 == '\x01') {
      _swift_bridgeObjectRetain(param_3);
      _Var6.unknown = param_3;
      _Var7.unknown = param_2;
      goto LAB_1006d4034;
    }
    if (param_2 != (undefined1 *)0x0 || param_3 != (undefined *)0x0) {
      if (param_2 == &DAT_00000001 && param_3 == (undefined *)0x0) {
        _Var7.unknown = &DAT_0000002a;
        _Var6.unknown = (undefined *)0xe100000000000000;
        goto LAB_1006d4034;
      }
      _Var7.unknown = (undefined *)0x6e696769724f;
      _Var5.unknown = &DAT_e600000000000000;
      FUN_10085c5ec(0x6e696769724f,&DAT_e600000000000000,0x6e696769726f,&DAT_e600000000000000,
                    *(undefined8 *)(param_1 + 0xb8));
      _Var6.unknown = _Var5.unknown;
      if ((_Var5.unknown == (undefined *)0x0) ||
         (((_Var7.unknown != (undefined *)0x6c6c756e || (_Var5.unknown != &DAT_e400000000000000)) &&
          (bVar3 = Swift::_stringCompareWithSmolCheck(_Var7,_Var5,(_StringComparisonResult)0x6e),
          !bVar3)))) goto LAB_1006d4034;
      goto LAB_1006d4028;
    }
  }
  _Var7.unknown = (undefined1 *)0x0;
  _Var6.unknown = (undefined *)0x0;
LAB_1006d4034:
  auVar11._8_8_ = _Var6.unknown;
  auVar11._0_8_ = _Var7.unknown;
  return auVar11;
}



/* Address: 0x1006d4088 | FUN_1006d4088 */

void FUN_1006d4088(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5,long param_6,byte param_7,long param_8,undefined8 param_9,
                  char param_10)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar5 = *(long *)(param_5 + 0x10);
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(param_5);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1006bf7c0(0,lVar5,0);
    puVar8 = (undefined8 *)(param_5 + 0x38);
    do {
      uVar1 = puVar8[-1];
      uVar3 = *puVar8;
      uVar2 = *(ulong *)(puVar7 + 0x10);
      uVar4 = *(ulong *)(puVar7 + 0x18);
      _swift_bridgeObjectRetain(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        FUN_1006bf7c0(1 < uVar4,uVar2 + 1,1);
      }
      puVar8 = puVar8 + 4;
      *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(param_5);
    puVar6 = puVar7;
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
  FUN_1006b7a54();
  SVar9.bridgeObject = &SUB_e200000000000000;
  SVar9.str = (char *)0x202c;
  SVar9 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar9);
  _swift_bridgeObjectRelease(puVar6);
  lVar5 = *(long *)(param_6 + 0x10);
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(param_6);
  }
  else {
    FUN_1006bf7c0(0,lVar5,0);
    puVar8 = (undefined8 *)(param_6 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar3 = *puVar8;
      uVar2 = *(ulong *)(puVar7 + 0x10);
      uVar4 = *(ulong *)(puVar7 + 0x18);
      _swift_bridgeObjectRetain(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        FUN_1006bf7c0(1 < uVar4,uVar2 + 1,1);
      }
      puVar8 = puVar8 + 2;
      *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(param_6);
  }
  SVar10.bridgeObject = &SUB_e200000000000000;
  SVar10.str = (char *)0x202c;
  SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar10);
  _swift_bridgeObjectRelease(puVar7);
  if (param_8 == 0) {
    SVar11 = (String)ZEXT816(0);
  }
  else {
    SVar11.bridgeObject = &SUB_e200000000000000;
    SVar11.str = (char *)0x202c;
    SVar11 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar11);
    _swift_bridgeObjectRelease(param_8);
  }
  if (param_10 == '\x01') {
    SVar12 = (String)ZEXT816(0);
  }
  else {
    SVar12 = Swift::CustomStringConvertible::get_description();
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  *(String *)(param_1 + 3) = SVar9;
  *(String *)(param_1 + 5) = SVar10;
  *(byte *)(param_1 + 7) = param_7 & 1;
  *(String *)(param_1 + 8) = SVar11;
  *(String *)(param_1 + 10) = SVar12;
  return;
}



/* Address: 0x1006d4378 | FUN_1006d4378 */

void FUN_1006d4378(ulong *param_1,ulong param_2,ulong param_3,long param_4,long param_5,byte param_6
                  ,long param_7,undefined8 param_8,char param_9)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = *(long *)(param_4 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_4);
    puVar8 = puVar9;
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1006bf7c0(0,lVar7,0);
    puVar6 = (undefined8 *)(param_4 + 0x38);
    do {
      uVar1 = puVar6[-1];
      uVar3 = *puVar6;
      uVar2 = *(ulong *)(puVar9 + 0x10);
      uVar4 = *(ulong *)(puVar9 + 0x18);
      _swift_bridgeObjectRetain(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        FUN_1006bf7c0(1 < uVar4,uVar2 + 1,1);
      }
      puVar6 = puVar6 + 4;
      *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar9 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar9 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(param_4);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
  FUN_1006b7a54();
  SVar10.bridgeObject = &SUB_e200000000000000;
  SVar10.str = (char *)0x202c;
  SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar10);
  _swift_bridgeObjectRelease(puVar9);
  lVar7 = *(long *)(param_5 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_5);
  }
  else {
    FUN_1006bf7c0(0,lVar7,0);
    puVar6 = (undefined8 *)(param_5 + 0x28);
    do {
      uVar1 = puVar6[-1];
      uVar3 = *puVar6;
      uVar2 = *(ulong *)(puVar8 + 0x10);
      uVar4 = *(ulong *)(puVar8 + 0x18);
      _swift_bridgeObjectRetain(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        FUN_1006bf7c0(1 < uVar4,uVar2 + 1,1);
      }
      puVar6 = puVar6 + 2;
      *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(param_5);
  }
  SVar11.bridgeObject = &SUB_e200000000000000;
  SVar11.str = (char *)0x202c;
  SVar11 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar11);
  _swift_bridgeObjectRelease(puVar8);
  if (param_7 == 0) {
    SVar12 = (String)ZEXT816(0);
  }
  else {
    SVar12.bridgeObject = &SUB_e200000000000000;
    SVar12.str = (char *)0x202c;
    SVar12 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar12);
    _swift_bridgeObjectRelease(param_7);
  }
  if (param_9 == '\x01') {
    SVar13 = (String)ZEXT816(0);
  }
  else {
    SVar13 = Swift::CustomStringConvertible::get_description();
  }
  uVar2 = param_3;
  uVar4 = 0;
  if (2 < param_3) {
    uVar2 = param_2;
    uVar4 = param_3;
  }
  *param_1 = uVar2;
  param_1[1] = uVar4;
  uVar5 = 1;
  if (2 >= param_3) {
    uVar5 = 2;
  }
  *(undefined1 *)(param_1 + 2) = uVar5;
  *(String *)(param_1 + 3) = SVar10;
  *(String *)(param_1 + 5) = SVar11;
  *(byte *)(param_1 + 7) = param_6 & 1;
  *(String *)(param_1 + 8) = SVar12;
  *(String *)(param_1 + 10) = SVar13;
  return;
}



/* Address: 0x1006d4680 | FUN_1006d4680 */

void FUN_1006d4680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2b8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x2b0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x2a8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x2a0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x298) = param_3;
  *(undefined8 *)(unaff_x22 + 0x290) = param_2;
  *(undefined8 *)(unaff_x22 + 0x288) = param_1;
  _swift_task_switch(FUN_1006d46b0,0,0);
  return;
}



/* Address: 0x1006d46b0 | FUN_1006d46b0 */

void FUN_1006d46b0(void)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  _StringGuts _Var12;
  long unaff_x22;
  long *plVar13;
  long lVar14;
  long lVar15;
  String SVar16;
  code *local_b0;
  
  uVar11 = 0x6e696769724f;
  _Var12.unknown = *(undefined **)(*(long *)(unaff_x22 + 0x290) + 0xb8);
  FUN_10085d47c(0x6e696769724f,&DAT_e600000000000000,0x6e696769726f,&DAT_e600000000000000,
                _Var12.unknown);
  if ((uVar11 & 1) == 0) {
    piVar8 = *(int **)(unaff_x22 + 0x2a0);
    plVar13 = (long *)(ulong)(uint)piVar8[1];
    local_b0 = (code *)((long)*piVar8 + (long)piVar8);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x2d0) = plVar13;
    *plVar13 = unaff_x22;
    plVar13[1] = (long)FUN_1006d4df0;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x290);
    lVar15 = unaff_x22 + 0x90;
LAB_1006d47dc:
                    /* WARNING: Could not recover jumptable at 0x0001006d4800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*local_b0)(plVar13,lVar15,uVar6,uVar7);
    return;
  }
  _Var4.unknown = *(undefined **)(*(long *)(unaff_x22 + 0x290) + 0xb0);
  FUN_100867ea8();
  if (_Var4.unknown == (undefined *)0x534e4f4954504f && _Var12.unknown == &DAT_e700000000000000) {
    _swift_bridgeObjectRelease(_Var12.unknown);
  }
  else {
    bVar3 = Swift::_stringCompareWithSmolCheck(_Var4,_Var12,(_StringComparisonResult)0x4f);
    _swift_bridgeObjectRelease(_Var12.unknown);
    if (!bVar3) {
      piVar8 = *(int **)(unaff_x22 + 0x2a0);
      plVar13 = (long *)(ulong)(uint)piVar8[1];
      local_b0 = (code *)((long)*piVar8 + (long)piVar8);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x2c0) = plVar13;
      *plVar13 = unaff_x22;
      plVar13[1] = (long)FUN_1006d4b4c;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x298);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x290);
      lVar15 = unaff_x22 + 0xd8;
      goto LAB_1006d47dc;
    }
  }
  plVar13 = *(long **)(unaff_x22 + 0x2b8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x290);
  puVar5 = &DAT_100fdd048;
  FUN_1000f7830(&DAT_100fdd048,&DAT_100c71a90);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  *(undefined8 *)(puVar5 + 0x20) = 0xd00000000000001c;
  *(undefined8 *)(puVar5 + 0x28) = 0x8000000100db09d0;
  *(undefined8 *)(puVar5 + 0x30) = 0xd00000000000001c;
  *(undefined8 *)(puVar5 + 0x38) = 0x8000000100db09f0;
  lVar15 = plVar13[3];
  *(long *)(unaff_x22 + 0x248) = plVar13[4];
  *(long *)(unaff_x22 + 0x240) = lVar15;
  lVar15 = plVar13[3];
  *(long *)(puVar5 + 0x48) = plVar13[4];
  *(long *)(puVar5 + 0x40) = lVar15;
  *(undefined8 *)(puVar5 + 0x50) = 0xd00000000000001c;
  *(undefined8 *)(puVar5 + 0x58) = 0x8000000100db0a10;
  *(undefined8 *)(puVar5 + 0x60) = 0xd00000000000001c;
  *(undefined8 *)(puVar5 + 0x68) = 0x8000000100db0a30;
  lVar15 = plVar13[5];
  *(long *)(unaff_x22 + 600) = plVar13[6];
  *(long *)(unaff_x22 + 0x250) = lVar15;
  lVar15 = plVar13[5];
  *(long *)(puVar5 + 0x78) = plVar13[6];
  *(long *)(puVar5 + 0x70) = lVar15;
  FUN_10000ca28(unaff_x22 + 0x240,unaff_x22 + 0x260);
  FUN_10000ca28(unaff_x22 + 0x250,unaff_x22 + 0x270);
  FUN_10085d78c();
  lVar15 = *plVar13;
  lVar1 = plVar13[1];
  bVar2 = *(byte *)(plVar13 + 2);
  lVar9 = lVar15;
  FUN_1006d3e68(uVar6,lVar15,lVar1,bVar2);
  if (lVar9 != 0) {
    FUN_10085c664();
  }
  lVar9 = *(long *)(unaff_x22 + 0x2b8);
  if ((*(byte *)(lVar9 + 0x38) & 1) != 0) {
    FUN_10085c664(0x65757274,&DAT_e400000000000000,0xd000000000000020,0x8000000100db0970,
                  0xd000000000000020,0x8000000100db09a0);
    lVar9 = *(long *)(unaff_x22 + 0x2b8);
  }
  lVar14 = *(long *)(lVar9 + 0x58);
  if (lVar14 != 0) {
    uVar6 = *(undefined8 *)(lVar9 + 0x50);
    _swift_bridgeObjectRetain(lVar14);
    FUN_10085c664(uVar6,lVar14,0xd000000000000016,0x8000000100db0a90,0xd000000000000016,
                  0x8000000100db0ab0);
    lVar9 = *(long *)(unaff_x22 + 0x2b8);
  }
  lVar14 = *(long *)(lVar9 + 0x48);
  if (lVar14 != 0) {
    uVar6 = *(undefined8 *)(lVar9 + 0x40);
    _swift_bridgeObjectRetain(lVar14);
    FUN_10085c664(uVar6,lVar14,0xd00000000000001d,0x8000000100db0a50,0xd00000000000001d,
                  0x8000000100db0a70);
  }
  if ((bVar2 < 2) || (((bVar2 == 2 && (lVar15 == 2)) && (lVar1 == 0)))) {
    FUN_10085c664(0x6e696769724f,&DAT_e600000000000000,0x79726156,&DAT_e400000000000000,0x79726176,
                  &DAT_e400000000000000);
  }
  uVar11 = 0x2d746e65746e6f43;
  _swift_retain(puVar5);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,puVar5);
  if ((uVar11 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x280) = 0;
    SVar16 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar16.str,SVar16.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
    _swift_release(puVar5);
  }
  else {
    _swift_release(puVar5);
  }
  puVar10 = *(undefined8 **)(unaff_x22 + 0x288);
  builtin_strncpy((char *)(puVar10 + 1),"No Conte",8);
  *puVar10 = 0xcc;
  puVar10[2] = 0xea0000000000746e;
  puVar10[3] = puVar5;
  puVar10[5] = 0;
  puVar10[4] = 0;
  puVar10[7] = 0;
  puVar10[6] = 0;
  *(undefined1 *)(puVar10 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x0001006d4b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d4b4c | FUN_1006d4b4c */

void FUN_1006d4b4c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2c0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006d4bb0;
  }
  else {
    pcVar1 = FUN_1006d4e54;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006d4bb0 | FUN_1006d4bb0 */

void FUN_1006d4bb0(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  plVar9 = *(long **)(unaff_x22 + 0x2b8);
  *(undefined1 *)(unaff_x22 + 0x160) = *(undefined1 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x108);
  lVar1 = *plVar9;
  lVar2 = plVar9[1];
  bVar3 = *(byte *)(plVar9 + 2);
  FUN_1006d3e68(*(undefined8 *)(unaff_x22 + 0x290),lVar1,lVar2,bVar3);
  FUN_10085c664();
  if ((*(byte *)(plVar9 + 7) & 1) != 0) {
    FUN_10085c664(0x65757274,&DAT_e400000000000000,0xd000000000000020,0x8000000100db0970,
                  0xd000000000000020,0x8000000100db09a0);
  }
  if ((bVar3 < 2) || ((bVar3 == 2 && lVar1 == 2) && lVar2 == 0)) {
    uVar5 = 0x79726156;
    FUN_10085ca84(0x79726156,&DAT_e400000000000000,0x79726176,&DAT_e400000000000000,
                  *(undefined8 *)(unaff_x22 + 0x138));
    uVar6 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_1006a2520(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar5 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_1006a2520(uVar5,uVar6 + 1,1,uVar7);
    }
    *(ulong *)(uVar5 + 0x10) = uVar6 + 1;
    lVar1 = uVar5 + uVar6 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = 0x6e696769724f;
    *(undefined1 **)(lVar1 + 0x28) = &DAT_e600000000000000;
    FUN_10085ca94(uVar5,0x79726156,&DAT_e400000000000000,0x79726176,&DAT_e400000000000000);
  }
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined1 *)(unaff_x22 + 0x1f0) = *(undefined1 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined1 *)(unaff_x22 + 0x1a8) = *(undefined1 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x130);
  FUN_1006be04c(unaff_x22 + 0x1b0,unaff_x22 + 0x1f8);
  FUN_1006a4e98((undefined8 *)(unaff_x22 + 0x168));
  uVar4 = *(undefined1 *)(unaff_x22 + 0x1f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1c0);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x288);
  puVar8[1] = *(undefined8 *)(unaff_x22 + 0x1b8);
  *puVar8 = uVar14;
  puVar8[3] = uVar16;
  puVar8[2] = uVar15;
  puVar8[5] = uVar11;
  puVar8[4] = uVar10;
  puVar8[7] = uVar13;
  puVar8[6] = uVar12;
  *(undefined1 *)(puVar8 + 8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001006d4dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d4df0 | FUN_1006d4df0 */

void FUN_1006d4df0(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x2d0));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined1 *)(lVar3 + 0xd0);
    puVar2 = *(undefined8 **)(lVar3 + 0x288);
    uVar6 = *(undefined8 *)(lVar3 + 0xb8);
    uVar5 = *(undefined8 *)(lVar3 + 0xb0);
    uVar8 = *(undefined8 *)(lVar3 + 200);
    uVar7 = *(undefined8 *)(lVar3 + 0xc0);
    uVar9 = *(undefined8 *)(lVar3 + 0x90);
    uVar11 = *(undefined8 *)(lVar3 + 0xa8);
    uVar10 = *(undefined8 *)(lVar3 + 0xa0);
    puVar2[1] = *(undefined8 *)(lVar3 + 0x98);
    *puVar2 = uVar9;
    puVar2[3] = uVar11;
    puVar2[2] = uVar10;
    puVar2[5] = uVar6;
    puVar2[4] = uVar5;
    puVar2[7] = uVar8;
    puVar2[6] = uVar7;
    *(undefined1 *)(puVar2 + 8) = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006d4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x1006d4e54 | FUN_1006d4e54 */

void FUN_1006d4e54(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x22 + 0x2b8);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x290);
  thunk_FUN_10085c548();
  lVar1 = *plVar6;
  lVar2 = plVar6[1];
  bVar3 = *(byte *)(plVar6 + 2);
  FUN_1006d3e68(puVar5,lVar1,lVar2,bVar3);
  FUN_10085c664();
  if ((*(byte *)(plVar6 + 7) & 1) != 0) {
    puVar5 = (undefined8 *)0x65757274;
    FUN_10085c664(0x65757274,&DAT_e400000000000000,0xd000000000000020,0x8000000100db0970,
                  0xd000000000000020,0x8000000100db09a0);
  }
  if ((bVar3 < 2) || ((bVar3 == 2 && lVar1 == 2) && lVar2 == 0)) {
    puVar5 = (undefined8 *)0x6e696769724f;
    FUN_10085c664(0x6e696769724f,&DAT_e600000000000000,0x79726156,&DAT_e400000000000000,0x79726176,
                  &DAT_e400000000000000);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2c8);
  FUN_1006bd540();
  _swift_allocError(&DAT_100ef79c8,puVar5,0,0);
  *puVar5 = uVar4;
  puVar5[1] = param_1;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001006d4fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d4fd4 | FUN_1006d4fd4 */

void FUN_1006d4fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(param_6 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  uVar2 = unaff_x20[4];
  uVar4 = unaff_x20[7];
  uVar3 = unaff_x20[6];
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20[5];
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  uVar2 = unaff_x20[8];
  uVar4 = unaff_x20[0xb];
  uVar3 = unaff_x20[10];
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20[9];
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  plVar1 = (long *)0x2e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006d5088;
  FUN_1006d4680(plVar1,unaff_x22 + 0xa0,param_2,param_3,&DAT_100c71bb0,unaff_x22 + 0x10,param_6);
  return;
}



/* Address: 0x1006d5088 | FUN_1006d5088 */

void FUN_1006d5088(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0xe8);
    uVar4 = *(undefined8 *)(lVar2 + 0xa0);
    puVar1[1] = *(undefined8 *)(lVar2 + 0xa8);
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0xb8);
    uVar4 = *(undefined8 *)(lVar2 + 0xb0);
    uVar7 = *(undefined8 *)(lVar2 + 200);
    uVar6 = *(undefined8 *)(lVar2 + 0xc0);
    uVar9 = *(undefined8 *)(lVar2 + 0xd8);
    uVar8 = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar2 + 0xe0);
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006d50f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1006d50f4 | FUN_1006d50f4 */

void FUN_1006d50f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  String SVar8;
  
  uVar3 = *param_6;
  cVar1 = (char)param_6[4];
  uVar5 = param_6[1];
  uVar4 = *param_6;
  uVar7 = param_6[3];
  uVar6 = param_6[2];
  if (cVar1 == '\0') {
    uVar3 = (ulong)(*(int *)((long)param_6 + 0xc) - (uint)param_6[1]);
  }
  else if (cVar1 == '\x01') {
    if (((uint)param_6[1] & 0xff) == 1) {
      _swift_retain(param_5);
      goto LAB_1006d51e4;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar2 = 0x2d746e65746e6f43;
  _swift_retain(param_5);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,param_5)
  ;
  if ((uVar2 & 1) == 0) {
    SVar8 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar8.str,SVar8.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c,param_8,param_9,uVar3);
  }
LAB_1006d51e4:
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  *(char *)(param_1 + 8) = cVar1;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[3] = param_5;
  param_1[2] = param_4;
  return;
}



/* Address: 0x1006d521c | FUN_1006d521c */

void FUN_1006d521c(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71ac0;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x1006d5248 | FUN_1006d5248 */

void FUN_1006d5248(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') && (param_1 = param_2, param_3 != '\x01')) {
    return;
  }
  _swift_bridgeObjectRetain(param_1);
  return;
}



/* Address: 0x1006d5264 | FUN_1006d5264 */

void FUN_1006d5264(undefined8 *param_1)

{
  FUN_1006d52ac(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  _swift_bridgeObjectRelease(param_1[4]);
  _swift_bridgeObjectRelease(param_1[6]);
  _swift_bridgeObjectRelease(param_1[9]);
  _swift_bridgeObjectRelease(param_1[0xb]);
  return;
}



/* Address: 0x1006d52ac | FUN_1006d52ac */

void FUN_1006d52ac(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') && (param_1 = param_2, param_3 != '\x01')) {
    return;
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Address: 0x1006d52c8 | FUN_1006d52c8 */

undefined8 * FUN_1006d52c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_1006d5248(uVar1,uVar2,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar4;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Address: 0x1006d5360 | FUN_1006d5360 */

undefined8 * FUN_1006d5360(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1006d5248(uVar6,uVar2,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar6;
  param_1[1] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar4;
  FUN_1006d52ac(uVar1,uVar3,uVar5);
  param_1[3] = param_2[3];
  uVar6 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[5] = param_2[5];
  uVar6 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  uVar6 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[10] = param_2[10];
  uVar6 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Address: 0x1006d5448 | FUN_1006d5448 */

void FUN_1006d5448(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Address: 0x1006d5464 | FUN_1006d5464 */

undefined8 * FUN_1006d5464(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1006d52ac(uVar3,uVar4,uVar2);
  uVar3 = param_2[4];
  uVar4 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  uVar3 = param_2[6];
  uVar4 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar3 = param_2[9];
  uVar4 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  uVar3 = param_2[0xb];
  uVar4 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Address: 0x1006d54f0 | FUN_1006d54f0 */

int FUN_1006d54f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1006d5538 | FUN_1006d5538 */

void FUN_1006d5538(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    if (param_2 != 0) {
      param_1[4] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1006d5590 | FUN_1006d5590 */

void FUN_1006d5590(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006d559c | FUN_1006d559c */

int FUN_1006d559c(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Address: 0x1006d55f8 | FUN_1006d55f8 */

void FUN_1006d55f8(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffd) {
    if (0x7ffffffc < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(param_1 + 2) = (ulong)(param_2 + 2);
      return;
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2 + 0x80000003;
    if (0x7ffffffc < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x1006d5648 | FUN_1006d5648 */

void FUN_1006d5648(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006d5654 | thunk_FUN_1006d5674 */

void thunk_FUN_1006d5674(void)

{
  FUN_1006d5674();
  return;
}



/* Address: 0x1006d5658 | FUN_1006d5658 */

void FUN_1006d5658(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006d5664 | FUN_1006d5664 */

void FUN_1006d5664(undefined8 *param_1)

{
  FUN_1006d52ac(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1006d5674 | FUN_1006d5674 */

undefined8 * FUN_1006d5674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1006d5248(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1006d56bc | thunk_FUN_1006d56c0 */

undefined8 * thunk_FUN_1006d56c0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1006d5248(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1006d52ac(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1006d56c0 | FUN_1006d56c0 */

undefined8 * FUN_1006d56c0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1006d5248(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1006d52ac(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1006d5714 | thunk_FUN_1006d5718 */

undefined8 * thunk_FUN_1006d5718(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1006d52ac(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x1006d5718 | FUN_1006d5718 */

undefined8 * FUN_1006d5718(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1006d52ac(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x1006d575c | FUN_1006d575c */

void FUN_1006d575c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006d5768 | FUN_1006d5768 */

void FUN_1006d5768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_1006e3fec(plVar5,param_1,param_2,param_3,uVar2,uVar4,uVar1,uVar3);
  return;
}



/* Address: 0x1006d580c | thunk_FUN_100342e08 */

void thunk_FUN_100342e08(void)

{
  thunk_FUN_100342e08();
  return;
}



/* Address: 0x1006d5810 | thunk_FUN_1006d5664 */

void thunk_FUN_1006d5664(undefined8 *param_1)

{
  FUN_1006d52ac(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1006d5814 | thunk_FUN_1006d5674 */

void thunk_FUN_1006d5674(void)

{
  FUN_1006d5674();
  return;
}



/* Address: 0x1006d5818 | thunk_FUN_1006d56c0 */

void thunk_FUN_1006d56c0(void)

{
  thunk_FUN_1006d56c0();
  return;
}



/* Address: 0x1006d581c | thunk_FUN_1006d5718 */

void thunk_FUN_1006d5718(void)

{
  thunk_FUN_1006d5718();
  return;
}



/* Address: 0x1006d5820 | thunk_FUN_100342dc0 */

void thunk_FUN_100342dc0(void)

{
  thunk_FUN_100342dc0();
  return;
}


