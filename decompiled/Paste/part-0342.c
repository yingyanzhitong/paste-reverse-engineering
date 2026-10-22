/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100436b2c | FUN_100436b2c */

void FUN_100436b2c(void)

{
  FUN_1004358b0();
  return;
}



/* Address: 0x100436b40 | FUN_100436b40 */

void FUN_100436b40(void)

{
  FUN_100436b48(0);
  return;
}



/* Address: 0x100436b48 | FUN_100436b48 */

void FUN_100436b48(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc68f8,&TargetClassDescriptor_100cb04c8);
  return;
}



/* Address: 0x100436b5c | FUN_100436b5c */

void FUN_100436b5c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c4a3b8;
  lVar1 = 0x13f;
  FUN_100436bd4();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&local_30,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100436bd4 | FUN_100436bd4 */

void FUN_100436bd4(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100fc6908 == 0) {
    lVar2 = 0xff;
    FUN_10043ee24();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100fc6908 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100436c28 | FUN_100436c28 */

void FUN_100436c28(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc69c0;
  FUN_100003a00(&DAT_100fc69c0,FUN_10043ee24,&TargetProtocolConformanceDescriptor_100c4a3d0);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x100436c64 | FUN_100436c64 */

void FUN_100436c64(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc69e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a5ec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a5ec,&DAT_100ed4b48);
  DAT_100fc69e0 = pTVar1;
  return;
}



/* Address: 0x100436ca4 | FUN_100436ca4 */

void FUN_100436ca4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined8 local_70;
  long local_68;
  
  lVar1 = 0;
  local_70 = param_1;
  FUN_10043ee24();
  lVar4 = (long)&local_70 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fc6b50;
  FUN_1000f7830(&DAT_100fc6b50,&DAT_100c4a640);
  local_68 = *(long *)(puVar2 + -8);
  lVar5 = lVar4 - (*(long *)(local_68 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1004375a0();
  lVar3 = lVar5 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004386c8();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    FUN_100003a00(&DAT_100fc69c0,FUN_10043ee24,&TargetProtocolConformanceDescriptor_100c4a3d0);
    Swift::KeyedDecodingContainer::_decode(lVar4,lVar1);
    (**(code **)(local_68 + 8))(lVar5,puVar2);
    FUN_1000523d8(lVar4,lVar3,FUN_10043ee24);
    FUN_1000523d8(lVar3,local_70,FUN_1004375a0);
  }
  FUN_100004594(param_2);
  return;
}



/* Address: 0x100436e4c | FUN_100436e4c */

undefined1  [16] FUN_100436e4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e700000000000000;
  auVar1._0_8_ = 0x64616f6c796170;
  return auVar1;
}



/* Address: 0x100436e64 | thunk_FUN_1004370f8 */

void thunk_FUN_1004370f8(void)

{
  FUN_1004370f8();
  return;
}



/* Address: 0x100436e68 | FUN_100436e68 */

String FUN_100436e68(void)

{
  String SVar1;
  
  FUN_1004386c8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100436e90 | FUN_100436e90 */

String FUN_100436e90(void)

{
  String SVar1;
  
  FUN_1004386c8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100436eb8 | FUN_100436eb8 */

long * FUN_100436eb8(void)

{
  long *plVar1;
  long *plVar2;
  
  FUN_10044add8(0);
  plVar1 = (long *)0x0;
  FUN_10044ab0c();
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x88))();
  _swift_release(plVar1);
  plVar1 = (long *)0x4;
  (**(code **)(*plVar2 + 0x80))();
  _swift_release(plVar2);
  (**(code **)(*plVar1 + 0x88))();
  _swift_release(plVar1);
  return plVar2;
}



/* Address: 0x100436f3c | FUN_100436f3c */

void FUN_100436f3c(void)

{
  FUN_100436ca4();
  return;
}



/* Address: 0x100436f50 | FUN_100436f50 */

void FUN_100436f50(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined8 local_70;
  long local_68;
  
  lVar1 = 0;
  local_70 = param_1;
  FUN_10043ee24();
  lVar4 = (long)&local_70 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fc6b60;
  FUN_1000f7830(&DAT_100fc6b60,&DAT_100c4a648);
  local_68 = *(long *)(puVar2 + -8);
  lVar5 = lVar4 - (*(long *)(local_68 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_10043758c();
  lVar3 = lVar5 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100438708();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    FUN_100003a00(&DAT_100fc69c0,FUN_10043ee24,&TargetProtocolConformanceDescriptor_100c4a3d0);
    Swift::KeyedDecodingContainer::_decode(lVar4,lVar1);
    (**(code **)(local_68 + 8))(lVar5,puVar2);
    FUN_1000523d8(lVar4,lVar3,FUN_10043ee24);
    FUN_1000523d8(lVar3,local_70,FUN_10043758c);
  }
  FUN_100004594(param_2);
  return;
}



/* Address: 0x1004370f8 | FUN_1004370f8 */

void FUN_1004370f8(byte *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x64616f6c796170 && param_3 == &DAT_e700000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x64616f6c796170,(_StringGuts)0xe700000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x10043717c | FUN_10043717c */

String FUN_10043717c(void)

{
  String SVar1;
  
  FUN_100438708();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004371a4 | FUN_1004371a4 */

String FUN_1004371a4(void)

{
  String SVar1;
  
  FUN_100438708();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004371cc | FUN_1004371cc */

void FUN_1004371cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1004371dc(param_1,param_2,0,FUN_10044ab0c);
  return;
}



/* Address: 0x1004371dc | FUN_1004371dc */

long * FUN_1004371dc(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = 0;
  FUN_10044add8(0);
  (*param_4)(param_3,uVar1);
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x88))();
  _swift_release(param_3);
  return plVar2;
}



/* Address: 0x100437234 | FUN_100437234 */

void FUN_100437234(void)

{
  FUN_100436f50();
  return;
}



/* Address: 0x100437248 | FUN_100437248 */

undefined * FUN_100437248(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004373dc);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar5 = &DAT_100fc65f0;
    FUN_1000f7830(&DAT_100fc65f0,&DAT_100c4a910);
    puVar6 = &DAT_100fc65e8;
    FUN_1000f7830(&DAT_100fc65e8,&DAT_100c49f70);
    lVar11 = *(long *)(*(long *)(puVar6 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar5,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar5;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004373d4);
      (*pcVar4)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004373d8);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar11 != 0) {
      lVar3 = lVar9 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar3 << 1;
  }
  puVar6 = &DAT_100fc65e8;
  FUN_1000f7830(&DAT_100fc65e8,&DAT_100c49f70);
  uVar7 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar5 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar10,puVar6);
  }
  else {
    if ((puVar5 < param_4) || (puVar2 + *(long *)(*(long *)(puVar6 + -8) + 0x48) * uVar10 <= puVar1)
       ) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar10);
    }
    else if (puVar5 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Address: 0x1004373dc | FUN_1004373dc */

undefined * FUN_1004373dc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100437558);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100fc69e8;
    FUN_1000f7830(&DAT_100fc69e8,&DAT_100c4a430);
    lVar5 = 0;
    FUN_100432e30();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100437550);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100437554);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_100432e30();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Address: 0x100437558 | FUN_100437558 */

undefined8 FUN_100437558(undefined8 param_1)

{
  FUN_100451e94();
  return param_1;
}



/* Address: 0x10043758c | FUN_10043758c */

void FUN_10043758c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc6af0,&TargetStructDescriptor_100cb0568);
  return;
}



/* Address: 0x1004375a0 | FUN_1004375a0 */

void FUN_1004375a0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc6a60,&TargetStructDescriptor_100cb0540);
  return;
}



/* Address: 0x1004375b4 | FUN_1004375b4 */

void FUN_1004375b4(void)

{
  undefined *puVar1;
  
  if (DAT_100fc69f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c4b5bc;
  _swift_getWitnessTable(&DAT_100c4b5bc,&DAT_100ed5c40);
  DAT_100fc69f0 = puVar1;
  return;
}



/* Address: 0x1004375f4 | FUN_1004375f4 */

undefined8 FUN_1004375f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000f7830(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Address: 0x10043763c | thunk_FUN_100437678 */

long * thunk_FUN_100437678(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  
  lVar9 = 0;
  FUN_10043ee24();
  uVar8 = *(uint *)(*(long *)(lVar9 + -8) + 0x50);
  lVar14 = *param_2;
  *param_1 = lVar14;
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar15 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar15;
    lVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[4] = lVar4;
    lVar5 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar5;
    lVar17 = (long)*(int *)(lVar9 + 0x20);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar10.unknown + -8);
    pcVar16 = *(code **)(lVar12 + 0x30);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar15);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar5);
    lVar14 = (long)param_2 + lVar17;
    (*pcVar16)(lVar14,1,DVar10.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar17,(long)param_2 + lVar17,DVar10.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar17,0,1,DVar10.unknown);
    }
    else {
      puVar11 = &DAT_100fc67c8;
      FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
      _memcpy((void *)((long)param_1 + lVar17),(void *)((long)param_2 + lVar17),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar15 = (long)*(int *)(lVar9 + 0x24);
    lVar14 = (long)param_2 + lVar15;
    (*pcVar16)(lVar14,1,DVar10.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar10.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar15,0,1,DVar10.unknown);
    }
    else {
      puVar11 = &DAT_100fc67c8;
      FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
      _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x28));
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    FUN_1001037b4(uVar3,uVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x2c));
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    FUN_1001037b4(uVar3,uVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    FUN_1001037b4(uVar3,uVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar6;
    (**(code **)(lVar12 + 0x10))
              ((long)param_1 + (long)*(int *)(lVar9 + 0x34),
               (long)param_2 + (long)*(int *)(lVar9 + 0x34),DVar10.unknown);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x38));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x3c));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x40));
    uVar3 = *puVar2;
    uVar7 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    FUN_1001037b4(uVar3,uVar7);
    *puVar1 = uVar3;
    puVar1[1] = uVar7;
  }
  else {
    uVar13 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar14 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    _swift_retain(lVar14);
  }
  return param_1;
}



/* Address: 0x100437640 | thunk_FUN_100437904 */

void thunk_FUN_100437904(void)

{
  FUN_100437904();
  return;
}



/* Address: 0x100437644 | thunk_FUN_100437a30 */

void thunk_FUN_100437a30(void)

{
  FUN_100437a30();
  return;
}



/* Address: 0x100437648 | thunk_FUN_100437c94 */

void thunk_FUN_100437c94(void)

{
  FUN_100437c94();
  return;
}



/* Address: 0x10043764c | thunk_FUN_100437fe0 */

void thunk_FUN_100437fe0(void)

{
  FUN_100437fe0();
  return;
}



/* Address: 0x100437650 | thunk_FUN_10043819c */

void thunk_FUN_10043819c(void)

{
  FUN_10043819c();
  return;
}



/* Address: 0x100437654 | FUN_100437654 */

void FUN_100437654(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100437660 | thunk_FUN_10043845c */

void thunk_FUN_10043845c(void)

{
  FUN_10043845c();
  return;
}



/* Address: 0x100437664 | FUN_100437664 */

void FUN_100437664(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100437670 | thunk_FUN_1004384a4 */

void thunk_FUN_1004384a4(void)

{
  FUN_1004384a4();
  return;
}



/* Address: 0x100437674 | thunk_FUN_1004384e4 */

void thunk_FUN_1004384e4(void)

{
  FUN_1004384e4();
  return;
}



/* Address: 0x100437678 | FUN_100437678 */

long * FUN_100437678(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  
  lVar9 = 0;
  FUN_10043ee24();
  uVar8 = *(uint *)(*(long *)(lVar9 + -8) + 0x50);
  lVar14 = *param_2;
  *param_1 = lVar14;
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar15 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar15;
    lVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[4] = lVar4;
    lVar5 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar5;
    lVar17 = (long)*(int *)(lVar9 + 0x20);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar10.unknown + -8);
    pcVar16 = *(code **)(lVar12 + 0x30);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar15);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar5);
    lVar14 = (long)param_2 + lVar17;
    (*pcVar16)(lVar14,1,DVar10.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar17,(long)param_2 + lVar17,DVar10.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar17,0,1,DVar10.unknown);
    }
    else {
      puVar11 = &DAT_100fc67c8;
      FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
      _memcpy((void *)((long)param_1 + lVar17),(void *)((long)param_2 + lVar17),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar15 = (long)*(int *)(lVar9 + 0x24);
    lVar14 = (long)param_2 + lVar15;
    (*pcVar16)(lVar14,1,DVar10.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar10.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar15,0,1,DVar10.unknown);
    }
    else {
      puVar11 = &DAT_100fc67c8;
      FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
      _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x28));
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    FUN_1001037b4(uVar3,uVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x2c));
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    FUN_1001037b4(uVar3,uVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    FUN_1001037b4(uVar3,uVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar6;
    (**(code **)(lVar12 + 0x10))
              ((long)param_1 + (long)*(int *)(lVar9 + 0x34),
               (long)param_2 + (long)*(int *)(lVar9 + 0x34),DVar10.unknown);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x38));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x3c));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x40));
    uVar3 = *puVar2;
    uVar7 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    FUN_1001037b4(uVar3,uVar7);
    *puVar1 = uVar3;
    puVar1[1] = uVar7;
  }
  else {
    uVar13 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar14 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    _swift_retain(lVar14);
  }
  return param_1;
}



/* Address: 0x100437904 | FUN_100437904 */

void FUN_100437904(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  Date DVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[4]);
  _swift_bridgeObjectRelease(param_1[6]);
  lVar3 = 0;
  FUN_10043ee24();
  iVar2 = *(int *)(lVar3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar4.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar5 = (long)param_1 + (long)iVar2;
  (*pcVar7)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 8))((long)param_1 + (long)iVar2,DVar4.unknown);
  }
  iVar2 = *(int *)(lVar3 + 0x24);
  lVar5 = (long)param_1 + (long)iVar2;
  (*pcVar7)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 8))((long)param_1 + (long)iVar2,DVar4.unknown);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
  FUN_10003bf2c(*puVar1,puVar1[1]);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  FUN_10003bf2c(*puVar1,puVar1[1]);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30));
  FUN_10003bf2c(*puVar1,puVar1[1]);
  (**(code **)(lVar6 + 8))((long)param_1 + (long)*(int *)(lVar3 + 0x34),DVar4.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x38) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x3c) + 8));
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x40));
  FUN_10003bf2c(*param_1,param_1[1]);
  return;
}



/* Address: 0x100437a30 | FUN_100437a30 */

undefined8 * FUN_100437a30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  Date DVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *param_1 = uVar3;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  uVar5 = param_2[4];
  uVar12 = param_2[5];
  param_1[4] = uVar5;
  param_1[5] = uVar12;
  uVar12 = param_2[6];
  param_1[6] = uVar12;
  lVar6 = 0;
  FUN_10043ee24();
  lVar13 = (long)*(int *)(lVar6 + 0x20);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar7.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar12);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar11)(lVar8,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar7.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(lVar6 + 0x24);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar11)(lVar8,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar7.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar3,uVar4);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x2c));
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar3,uVar4);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar3,uVar4);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  (**(code **)(lVar10 + 0x10))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x34),
             (long)param_2 + (long)*(int *)(lVar6 + 0x34),DVar7.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x38));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x3c));
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x40));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x40));
  uVar3 = *param_2;
  uVar5 = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  FUN_1001037b4(uVar3,uVar5);
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  return param_1;
}



/* Address: 0x100437c94 | FUN_100437c94 */

undefined8 * FUN_100437c94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  Date DVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  
  uVar11 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[1] = param_2[1];
  uVar11 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[3] = param_2[3];
  uVar11 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[5] = param_2[5];
  uVar11 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  lVar6 = 0;
  FUN_10043ee24();
  lVar14 = (long)*(int *)(lVar6 + 0x20);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar7.unknown + -8);
  pcVar12 = *(code **)(lVar13 + 0x30);
  lVar8 = (long)param_1 + lVar14;
  (*pcVar12)(lVar8,1,DVar7.unknown);
  lVar9 = (long)param_2 + lVar14;
  (*pcVar12)(lVar9,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    if ((int)lVar9 != 0) {
      (**(code **)(lVar13 + 8))((long)param_1 + lVar14,DVar7.unknown);
      goto LAB_100437dc0;
    }
    (**(code **)(lVar13 + 0x18))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar7.unknown);
  }
  else if ((int)lVar9 == 0) {
    (**(code **)(lVar13 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar7.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar14,0,1,DVar7.unknown);
  }
  else {
LAB_100437dc0:
    puVar10 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  lVar14 = (long)*(int *)(lVar6 + 0x24);
  lVar8 = (long)param_1 + lVar14;
  (*pcVar12)(lVar8,1,DVar7.unknown);
  lVar9 = (long)param_2 + lVar14;
  (*pcVar12)(lVar9,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    if ((int)lVar9 == 0) {
      (**(code **)(lVar13 + 0x18))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar7.unknown);
      goto LAB_100437e84;
    }
    (**(code **)(lVar13 + 8))((long)param_1 + lVar14,DVar7.unknown);
  }
  else if ((int)lVar9 == 0) {
    (**(code **)(lVar13 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar7.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar14,0,1,DVar7.unknown);
    goto LAB_100437e84;
  }
  puVar10 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
          *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_100437e84:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
  uVar11 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar11,uVar4);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = uVar11;
  puVar1[1] = uVar4;
  FUN_10003bf2c(uVar3,uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x2c));
  uVar11 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar11,uVar4);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = uVar11;
  puVar1[1] = uVar4;
  FUN_10003bf2c(uVar3,uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
  uVar11 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar11,uVar4);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = uVar11;
  puVar1[1] = uVar4;
  FUN_10003bf2c(uVar3,uVar5);
  (**(code **)(lVar13 + 0x18))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x34),
             (long)param_2 + (long)*(int *)(lVar6 + 0x34),DVar7.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x38));
  *puVar1 = *puVar2;
  uVar11 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x3c));
  *puVar1 = *puVar2;
  uVar11 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x40));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x40));
  uVar11 = *param_2;
  uVar4 = param_2[1];
  FUN_1001037b4(uVar11,uVar4);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = uVar11;
  puVar1[1] = uVar4;
  FUN_10003bf2c(uVar3,uVar5);
  return param_1;
}



/* Address: 0x100437fe0 | FUN_100437fe0 */

undefined8 * FUN_100437fe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  uVar10 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar10;
  uVar10 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar10;
  uVar10 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar10;
  lVar3 = 0;
  FUN_10043ee24();
  lVar9 = (long)*(int *)(lVar3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar4.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(lVar3 + 0x24);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    pcVar8 = *(code **)(lVar7 + 0x20);
    (*pcVar8)((long)param_1 + lVar9,(long)param_2 + lVar9,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    pcVar8 = *(code **)(lVar7 + 0x20);
  }
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x28));
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x2c));
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x30));
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  (*pcVar8)((long)param_1 + (long)*(int *)(lVar3 + 0x34),
            (long)param_2 + (long)*(int *)(lVar3 + 0x34),DVar4.unknown);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x38));
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x38));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x3c));
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x3c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x40));
  uVar10 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x40));
  puVar1[1] = param_2[1];
  *puVar1 = uVar10;
  return param_1;
}



/* Address: 0x10043819c | FUN_10043819c */

undefined8 * FUN_10043819c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[2];
  uVar4 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
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
  lVar5 = 0;
  FUN_10043ee24();
  lVar12 = (long)*(int *)(lVar5 + 0x20);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar6.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar7 = (long)param_1 + lVar12;
  (*pcVar11)(lVar7,1,DVar6.unknown);
  lVar8 = (long)param_2 + lVar12;
  (*pcVar11)(lVar8,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar12,DVar6.unknown);
      goto LAB_100438290;
    }
    (**(code **)(lVar10 + 0x28))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar6.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar12,0,1,DVar6.unknown);
  }
  else {
LAB_100438290:
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(lVar5 + 0x24);
  lVar7 = (long)param_1 + lVar12;
  (*pcVar11)(lVar7,1,DVar6.unknown);
  lVar8 = (long)param_2 + lVar12;
  (*pcVar11)(lVar8,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 == 0) {
      (**(code **)(lVar10 + 0x28))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar6.unknown);
      goto LAB_100438354;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar12,DVar6.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar12,0,1,DVar6.unknown);
    goto LAB_100438354;
  }
  puVar9 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
          *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_100438354:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
  uVar13 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar13;
  FUN_10003bf2c(uVar3,uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x2c));
  uVar13 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar13;
  FUN_10003bf2c(uVar3,uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
  uVar13 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar13;
  FUN_10003bf2c(uVar3,uVar4);
  (**(code **)(lVar10 + 0x28))
            ((long)param_1 + (long)*(int *)(lVar5 + 0x34),
             (long)param_2 + (long)*(int *)(lVar5 + 0x34),DVar6.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x38));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x3c));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x40));
  uVar13 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar13;
  FUN_10003bf2c(uVar3,uVar4);
  return param_1;
}



/* Address: 0x100438450 | FUN_100438450 */

void FUN_100438450(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10043845c | FUN_10043845c */

void FUN_10043845c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10043ee24();
                    /* WARNING: Could not recover jumptable at 0x000100438494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x100438498 | FUN_100438498 */

void FUN_100438498(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004384a4 | FUN_1004384a4 */

void FUN_1004384a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10043ee24();
                    /* WARNING: Could not recover jumptable at 0x0001004384e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
  return;
}



/* Address: 0x1004384e4 | FUN_1004384e4 */

void FUN_1004384e4(long param_1,ulong param_2)

{
  long lVar1;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_10043ee24();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&local_28,param_1 + 0x10);
  }
  return;
}



/* Address: 0x10043854c | FUN_10043854c */

void FUN_10043854c(void)

{
  return;
}



/* Address: 0x100438550 | FUN_100438550 */

undefined1  [16] FUN_100438550(void)

{
  return ZEXT816(0x100ed4b48);
}



/* Address: 0x100438560 | FUN_100438560 */

void FUN_100438560(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100436c64();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100438584 | thunk_FUN_100438588 */

void thunk_FUN_100438588(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6b28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a53c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a53c,&DAT_100ed4b48);
  DAT_100fc6b28 = pTVar1;
  return;
}



/* Address: 0x100438588 | FUN_100438588 */

void FUN_100438588(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6b28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a53c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a53c,&DAT_100ed4b48);
  DAT_100fc6b28 = pTVar1;
  return;
}



/* Address: 0x1004385c8 | FUN_1004385c8 */

void FUN_1004385c8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc6b30;
  FUN_100003a00(&DAT_100fc6b30,FUN_10043758c,&TargetProtocolConformanceDescriptor_100c4a564);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x100438604 | FUN_100438604 */

void FUN_100438604(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc6b38;
  FUN_100003a00(&DAT_100fc6b38,FUN_1004375a0,&TargetProtocolConformanceDescriptor_100c4a58c);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x100438640 | thunk_FUN_100438644 */

void thunk_FUN_100438644(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6b40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a4b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a4b8,&DAT_100ed4b48);
  DAT_100fc6b40 = pTVar1;
  return;
}



/* Address: 0x100438644 | FUN_100438644 */

void FUN_100438644(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6b40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a4b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a4b8,&DAT_100ed4b48);
  DAT_100fc6b40 = pTVar1;
  return;
}



/* Address: 0x100438684 | thunk_FUN_100438688 */

void thunk_FUN_100438688(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6b48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a490;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a490,&DAT_100ed4b48);
  DAT_100fc6b48 = pTVar1;
  return;
}



/* Address: 0x100438688 | FUN_100438688 */

void FUN_100438688(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6b48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a490;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a490,&DAT_100ed4b48);
  DAT_100fc6b48 = pTVar1;
  return;
}



/* Address: 0x1004386c8 | FUN_1004386c8 */

void FUN_1004386c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6b58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a848;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a848,&DAT_100ed4cb8);
  DAT_100fc6b58 = pTVar1;
  return;
}



/* Address: 0x100438708 | FUN_100438708 */

void FUN_100438708(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6b68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a7f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a7f8,&DAT_100ed4c28);
  DAT_100fc6b68 = pTVar1;
  return;
}



/* Address: 0x100438748 | FUN_100438748 */

undefined1  [16] FUN_100438748(void)

{
  return ZEXT816(0x100ed4c28);
}


