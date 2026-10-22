/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100324b90 | FUN_100324b90 */

void FUN_100324b90(void)

{
  FUN_1000037f0(&DAT_100fbfd90,&DAT_100c41360);
  _swift_initStaticObject();
  return;
}



/* Address: 0x100324bbc | FUN_100324bbc */

void FUN_100324bbc(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbfd90;
  FUN_1000037f0(&DAT_100fbfd90,&DAT_100c41360);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x100324bfc | FUN_100324bfc */

undefined8 FUN_100324bfc(ulong param_1)

{
  return *(undefined8 *)(&DAT_100c41520 + (param_1 & 0xff) * 8);
}



/* Address: 0x100324c10 | FUN_100324c10 */

void FUN_100324c10(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&DAT_100c41520 + (ulong)*unaff_x20 * 8);
  return;
}



/* Address: 0x100324c28 | FUN_100324c28 */

undefined8 FUN_100324c28(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong local_28;
  
  if (param_1 != 0) {
    local_28 = 0;
    _swift_stdlib_random(&local_28,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_28;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    uVar6 = SUB168(auVar1 * auVar3,8);
    if (local_28 * param_1 < param_1) {
      uVar7 = 0;
      if (param_1 != 0) {
        uVar7 = -param_1 / param_1;
      }
      uVar7 = -param_1 - uVar7 * param_1;
      if (local_28 * param_1 < uVar7) {
        do {
          local_28 = 0;
          _swift_stdlib_random(&local_28,8);
        } while (local_28 * param_1 < uVar7);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_28;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1;
        uVar6 = SUB168(auVar2 * auVar4,8);
      }
    }
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100324cb0);
  (*pcVar5)();
}



/* Address: 0x100324cb0 | FUN_100324cb0 */

undefined8 FUN_100324cb0(ulong param_1)

{
  uint uVar1;
  
  if ((long)param_1 < 0xff52cc64) {
    if ((long)param_1 < 0xb663e0) {
      if (param_1 == 0x52cc64) {
        return 3;
      }
      if (param_1 == 0x62a9f5) {
        return 4;
      }
      if (param_1 == 0x8f8f93) {
        return 7;
      }
      return 0;
    }
    if (0xfa9213 < (long)param_1) {
      if (param_1 == 0xfa9214) {
        return 1;
      }
      if (param_1 == 0xfab700) {
        return 2;
      }
      return 0;
    }
    if (param_1 == 0xb663e0) {
      return 5;
    }
    uVar1 = 0xfa506f;
  }
  else {
    if ((long)param_1 < 0xffb663e0) {
      if (param_1 == 0xff52cc64) {
        return 3;
      }
      if (param_1 == 0xff62a9f5) {
        return 4;
      }
      if (param_1 == 0xff8f8f93) {
        return 7;
      }
      return 0;
    }
    if (0xfffa9213 < (long)param_1) {
      if (param_1 == 0xfffab700) {
        return 2;
      }
      if (param_1 == 0xfffa9214) {
        return 1;
      }
      return 0;
    }
    if (param_1 == 0xffb663e0) {
      return 5;
    }
    uVar1 = 0xfffa506f;
  }
  if (param_1 == uVar1) {
    return 6;
  }
  return 0;
}



/* Address: 0x100324e24 | thunk_FUN_100324e28 */

void thunk_FUN_100324e28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfd98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41420;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41420,&DAT_100ecacb0);
  DAT_100fbfd98 = pTVar1;
  return;
}



/* Address: 0x100324e28 | FUN_100324e28 */

void FUN_100324e28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfd98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41420;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41420,&DAT_100ecacb0);
  DAT_100fbfd98 = pTVar1;
  return;
}



/* Address: 0x100324e68 | thunk_FUN_100324e6c */

void thunk_FUN_100324e6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbfda0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbfda8;
  FUN_100005c24(&DAT_100fbfda8,&DAT_100c41448);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fbfda0 = puVar2;
  return;
}



/* Address: 0x100324e6c | FUN_100324e6c */

void FUN_100324e6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbfda0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbfda8;
  FUN_100005c24(&DAT_100fbfda8,&DAT_100c41448);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fbfda0 = puVar2;
  return;
}



/* Address: 0x100324ebc | FUN_100324ebc */

undefined * FUN_100324ebc(void)

{
  return PTR___protocol_witness_table_for_Swift_UInt64___Swift_Hashable_in_Swift_100eade98;
}



/* Address: 0x100324ec8 | FUN_100324ec8 */

void FUN_100324ec8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100324edc | FUN_100324edc */

int FUN_100324edc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100324f24 | FUN_100324f24 */

void FUN_100324f24(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
  }
  return;
}



/* Address: 0x100324f68 | FUN_100324f68 */

undefined1  [16] FUN_100324f68(void)

{
  return ZEXT816(0x100ecabd0);
}



/* Address: 0x100324f78 | FUN_100324f78 */

undefined1  [16] FUN_100324f78(void)

{
  return ZEXT816(0x100ecabf0);
}



/* Address: 0x100324f88 | FUN_100324f88 */

undefined1  [16] FUN_100324f88(void)

{
  return ZEXT816(0x100ecac18);
}



/* Address: 0x100324f98 | FUN_100324f98 */

int FUN_100324f98(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100325014;
        goto LAB_100324ff8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100324ff8:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_100325014:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x100325028 | FUN_100325028 */

void FUN_100325028(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 7) {
    uVar3 = 4;
  }
  if (param_3 + 7 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xf8 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xf9) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_1003250a8;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_1003250a8:
      *param_1 = (char)param_2 + '\a';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xf9 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xf9);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1003250d8 | FUN_1003250d8 */

undefined1  [16] FUN_1003250d8(void)

{
  return ZEXT816(0x100ecacb0);
}



/* Address: 0x1003250e8 | thunk_FUN_100324bfc */

void thunk_FUN_100324bfc(void)

{
  FUN_100324bfc();
  return;
}



/* Address: 0x1003250ec | thunk_FUN_100324b84 */

void thunk_FUN_100324b84(void)

{
  FUN_100324b84();
  return;
}



/* Address: 0x1003250f0 | FUN_1003250f0 */

bool FUN_1003250f0(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::rawType(unaff_x20);
  return IVar1 == 2;
}



/* Address: 0x100325110 | FUN_100325110 */

bool FUN_100325110(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::rawType(unaff_x20);
  return IVar1 == 1;
}



/* Address: 0x100325130 | FUN_100325130 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100325184) */

bool FUN_100325130(void)

{
  bool bVar1;
  ID IVar2;
  __int64 _Var3;
  ID unaff_x20;
  
  IVar2 = objc_stub::managedObjectContext(unaff_x20);
  if (IVar2 == 0) {
    bVar1 = true;
  }
  else {
    FUN_100329088();
    FUN_1003214a8(0);
    _Var3 = (extension_CoreData)::__C::NSManagedObjectContext::_count();
    bVar1 = _Var3 == 0;
  }
  return bVar1;
}



/* Address: 0x1003251d4 | FUN_1003251d4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100325228) */

__int64 FUN_1003251d4(void)

{
  ID IVar1;
  __int64 _Var2;
  ID unaff_x20;
  
  IVar1 = objc_stub::managedObjectContext(unaff_x20);
  if (IVar1 == 0) {
    _Var2 = 0;
  }
  else {
    FUN_100329088();
    FUN_1003214a8(0);
    _Var2 = (extension_CoreData)::__C::NSManagedObjectContext::_count();
  }
  return _Var2;
}



/* Address: 0x10032526c | FUN_10032526c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003252c8) */

void FUN_10032526c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ID unaff_x20;
  
  puVar1 = (undefined *)objc_stub::managedObjectContext(unaff_x20);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_100fbe920;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    param_1[3] = puVar1;
    FUN_10032547c();
    param_1[4] = puVar1;
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100329088();
    FUN_1003214a8(0);
    (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
    puVar2 = &DAT_100fbe920;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    param_1[3] = puVar2;
    FUN_10032547c();
    param_1[4] = puVar2;
  }
  *param_1 = puVar1;
  return;
}



/* Address: 0x10032535c | FUN_10032535c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003253e8) */

void FUN_10032535c(void)

{
  Data DVar1;
  JSONDecoder *pJVar2;
  ID unaff_x20;
  undefined1 local_60 [48];
  
  DVar1.unknown = (undefined *)objc_stub::rawAttributes(unaff_x20);
  if (DVar1.unknown != (undefined *)0x0) {
    DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar1);
    pJVar2 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
    pJVar2 = Foundation::JSONDecoder::init(pJVar2);
    FUN_1003254cc();
    Foundation::JSONDecoder::_decode(pJVar2,(Data)0x100eca9e8);
    FUN_10003bf2c(DVar1.unknown);
    _swift_release(pJVar2);
    FUN_1003245fc(local_60);
  }
  return;
}



/* Address: 0x10032547c | FUN_10032547c */

void FUN_10032547c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbfdb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbe920;
  FUN_100005c24(&DAT_100fbe920,&DAT_100c408d0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fbfdb0 = puVar2;
  return;
}



/* Address: 0x1003254cc | FUN_1003254cc */

void FUN_1003254cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfdb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41210;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41210,&DAT_100eca9e8);
  DAT_100fbfdb8 = pTVar1;
  return;
}



/* Address: 0x10032550c | FUN_10032550c */

undefined8 FUN_10032550c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x10));
  return uVar1;
}



/* Address: 0x100325558 | FUN_100325558 */

void FUN_100325558(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100325588();
  FUN_1002fc054(unaff_x20 + *(int *)(lVar1 + 0x18),param_1);
  return;
}



/* Address: 0x100325588 | FUN_100325588 */

void FUN_100325588(undefined8 param_1)

{
  if (DAT_100fbfec8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cac37c);
  return;
}



/* Address: 0x1003255c0 | FUN_1003255c0 */

undefined1  [16] FUN_1003255c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = 0x8000000100da2300;
  uVar2 = 0xd000000000000016;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xe300000000000000;
    uVar2 = 0x6c7275;
  }
  uVar1 = 0xec00000073746e61;
  uVar3 = 0x7069636974726170;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x100325620 | FUN_100325620 */

void FUN_100325620(undefined1 *param_1,undefined1 param_2)

{
  FUN_100326e2c();
  *param_1 = param_2;
  return;
}



/* Address: 0x100325644 | FUN_100325644 */

String FUN_100325644(void)

{
  String SVar1;
  
  FUN_100325854();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10032566c | FUN_10032566c */

String FUN_10032566c(void)

{
  String SVar1;
  
  FUN_100325854();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100325694 | FUN_100325694 */

void FUN_100325694(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  URL UVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fbfdc0;
  FUN_1000037f0(&DAT_100fbfdc0,&DAT_100c41568);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100325854();
  Swift::Encoder::_container();
  local_51 = 0;
  FUN_1000037f0(&DAT_100fbfdd0,&DAT_100c41570);
  FUN_100325bf0(&DAT_100fbfdd8,FUN_100325894,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  lVar3 = unaff_x20;
  Swift::KeyedEncodingContainer::_encode();
  if (unaff_x21 == 0) {
    local_52 = 1;
    FUN_100325894();
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + 8,&local_52,puVar2,&DAT_100ecada0,lVar3);
    lVar3 = 0;
    FUN_100325588();
    iVar1 = *(int *)(lVar3 + 0x18);
    local_53 = 2;
    UVar4 = Foundation::URL::typeMetadataAccessor();
    puVar5 = &DAT_100fbf650;
    FUN_100325ca0(&DAT_100fbf650,PTR_Foundation__Foundation__URL_>Swift__Encodable_100ea71b8);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20 + iVar1,&local_53,puVar2,UVar4.unknown,puVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x100325854 | FUN_100325854 */

void FUN_100325854(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfdc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41cfc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41cfc,&DAT_100ecb070);
  DAT_100fbfdc8 = pTVar1;
  return;
}



/* Address: 0x100325894 | FUN_100325894 */

void FUN_100325894(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfde0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41628;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41628,&DAT_100ecada0);
  DAT_100fbfde0 = pTVar1;
  return;
}



/* Address: 0x1003258d4 | FUN_1003258d4 */

/* WARNING: Removing unreachable block (ram,0x000100325b8c) */
/* WARNING: Removing unreachable block (ram,0x000100325af0) */
/* WARNING: Removing unreachable block (ram,0x000100325b90) */
/* WARNING: Removing unreachable block (ram,0x000100325ba4) */
/* WARNING: Removing unreachable block (ram,0x000100325a68) */

void FUN_1003258d4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  URL UVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 auStack_b0 [3];
  undefined8 local_98;
  undefined1 auStack_97 [7];
  undefined *local_90;
  long local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_51;
  
  puVar2 = &DAT_100fc1a40;
  local_98 = param_1;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)auStack_b0 - extraout_x8;
  puVar2 = &DAT_100fbfde8;
  FUN_1000037f0(&DAT_100fbfde8,&DAT_100c41578);
  lVar7 = *(long *)(puVar2 + -8);
  local_90 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_100325588();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar6 = (undefined8 *)((lVar8 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_88 = param_2;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100325854();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar2 = &DAT_100fbfdd0;
    FUN_1000037f0(&DAT_100fbfdd0,&DAT_100c41570);
    local_51 = 0;
    puVar4 = &DAT_100fbfdf0;
    FUN_100325bf0(&DAT_100fbfdf0,FUN_100325c60,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    puVar1 = local_90;
    Swift::KeyedDecodingContainer::_decode(&local_80,puVar2,&local_51,local_90,puVar2,puVar4);
    *puVar6 = CONCAT71(uStack_7f,local_80);
    local_51 = 1;
    FUN_100325c60();
    Swift::KeyedDecodingContainer::_decode
              (&local_80,&DAT_100ecada0,&local_51,puVar1,&DAT_100ecada0,puVar2);
    auStack_b0[1] = uStack_78;
    puVar6[2] = uStack_78;
    puVar6[1] = CONCAT71(uStack_7f,local_80);
    *(undefined1 *)(puVar6 + 3) = local_70;
    *(undefined1 *)((long)puVar6 + 0x19) = local_6f;
    UVar5 = Foundation::URL::typeMetadataAccessor();
    local_80 = 2;
    puVar2 = &DAT_100fbf620;
    FUN_100325ca0(&DAT_100fbf620,PTR_Foundation__Foundation__URL_>Swift__Decodable_100ea71d0);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (lVar8,UVar5.unknown,&local_80,puVar1,UVar5.unknown,puVar2);
    (**(code **)(lVar7 + 8))(lVar8 - extraout_x8_00,puVar1);
    FUN_10019ffdc(lVar8,(long)puVar6 + (long)*(int *)(lVar3 + 0x18),&DAT_100fc1a40,&DAT_100c40660);
    FUN_100325ce0(puVar6,local_98);
    FUN_100004594(local_88);
    FUN_100325d24(puVar6);
  }
  else {
    FUN_100004594(local_88);
  }
  return;
}



/* Address: 0x100325bf0 | FUN_100325bf0 */

void FUN_100325bf0(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fbfdd0;
    FUN_100005c24(&DAT_100fbfdd0,&DAT_100c41570);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x100325c60 | FUN_100325c60 */

void FUN_100325c60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfdf8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41600;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41600,&DAT_100ecada0);
  DAT_100fbfdf8 = pTVar1;
  return;
}



/* Address: 0x100325ca0 | FUN_100325ca0 */

void FUN_100325ca0(long *param_1,long param_2)

{
  URL UVar1;
  
  if (*param_1 == 0) {
    UVar1 = Foundation::URL::typeMetadataAccessor();
    _swift_getWitnessTable(param_2,UVar1.unknown);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100325ce0 | FUN_100325ce0 */

undefined8 FUN_100325ce0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100325588();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100325d24 | FUN_100325d24 */

undefined8 FUN_100325d24(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100325588();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100325d60 | FUN_100325d60 */

void FUN_100325d60(void)

{
  FUN_1003258d4();
  return;
}



/* Address: 0x100325d74 | FUN_100325d74 */

void FUN_100325d74(void)

{
  FUN_100325694();
  return;
}



/* Address: 0x100325d88 | FUN_100325d88 */

undefined1  [16] FUN_100325d88(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x656c6f72;
  if (cVar5 != '\x01') {
    uVar1 = 0x7470656363417369;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar5 != '\x01') {
    puVar2 = (undefined1 *)0xea00000000006465;
  }
  uVar3 = 0x656d616e;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e400000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x100325dd8 | FUN_100325dd8 */

void FUN_100325dd8(undefined1 *param_1,undefined1 param_2)

{
  FUN_100326f4c();
  *param_1 = param_2;
  return;
}



/* Address: 0x100325dfc | FUN_100325dfc */

String FUN_100325dfc(void)

{
  String SVar1;
  
  FUN_100325fb8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100325e24 | FUN_100325e24 */

String FUN_100325e24(void)

{
  String SVar1;
  
  FUN_100325fb8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100325e4c | FUN_100325e4c */

void FUN_100325e4c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x21;
  long lVar2;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fbfe00;
  FUN_1000037f0(&DAT_100fbfe00,&DAT_100c41580);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100325fb8();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2,param_3,&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = (undefined1)(param_4 & 0xffff);
    local_53 = 1;
    FUN_100325ff8();
    Swift::KeyedEncodingContainer::_encode(&local_52,&local_53,puVar1,&DAT_100ecae40,param_2);
    local_54 = 2;
    Swift::KeyedEncodingContainer::_encode((param_4 & 0xffff) >> 8 & 1,&local_54,puVar1);
  }
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100325fb8 | FUN_100325fb8 */

void FUN_100325fb8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfe08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41cac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41cac,&DAT_100ecafe0);
  DAT_100fbfe08 = pTVar1;
  return;
}



/* Address: 0x100325ff8 | FUN_100325ff8 */

void FUN_100325ff8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfe10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c416e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c416e0,&DAT_100ecae40);
  DAT_100fbfe10 = pTVar1;
  return;
}



/* Address: 0x100326038 | FUN_100326038 */

undefined8 FUN_100326038(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_100327068();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Address: 0x10032605c | FUN_10032605c */

void FUN_10032605c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  long unaff_x21;
  
  FUN_100327068();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(char *)(param_1 + 2) = (char)param_4;
    *(byte *)((long)param_1 + 0x11) = (byte)((ushort)param_4 >> 8) & 1;
  }
  return;
}



/* Address: 0x100326090 | FUN_100326090 */

void FUN_100326090(undefined8 param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = 0x100;
  if (*(char *)((long)unaff_x20 + 0x11) == '\0') {
    uVar1 = 0;
  }
  FUN_100325e4c(param_1,*unaff_x20,unaff_x20[1],uVar1 | *(byte *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1003260c0 | FUN_1003260c0 */

String FUN_1003260c0(byte param_1)

{
  LocalizedStringResource LVar1;
  long extraout_x8;
  String SVar2;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 < 2) {
    if (param_1 == 0) {
      FUN_1001e4e78(LVar1.unknown);
    }
    else {
      FUN_1001e4b78(LVar1.unknown);
    }
  }
  else if (param_1 == 2) {
    FUN_1001e5178(LVar1.unknown);
  }
  else {
    FUN_1001e4cf8(LVar1.unknown);
  }
  SVar2 = (extension_Foundation)::Swift::String::init(LVar1);
  return SVar2;
}



/* Address: 0x100326160 | FUN_100326160 */

undefined1  [16] FUN_100326160(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar1 = 0x726577656976;
  if (bVar5 != 2) {
    uVar1 = 0x64657469766e69;
  }
  puVar2 = &DAT_e600000000000000;
  if (bVar5 != 2) {
    puVar2 = &DAT_e700000000000000;
  }
  uVar3 = 0x72656e776f;
  if (bVar5 != 0) {
    uVar3 = 0x726f74696465;
  }
  puVar4 = &DAT_e500000000000000;
  if (bVar5 != 0) {
    puVar4 = &DAT_e600000000000000;
  }
  if (bVar5 < 2) {
    puVar2 = puVar4;
    uVar1 = uVar3;
  }
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Address: 0x1003261d0 | FUN_1003261d0 */

void FUN_1003261d0(undefined1 *param_1,undefined1 param_2)

{
  FUN_100327378();
  *param_1 = param_2;
  return;
}



/* Address: 0x1003261f4 | FUN_1003261f4 */

String FUN_1003261f4(void)

{
  String SVar1;
  
  FUN_100327238();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10032621c | FUN_10032621c */

String FUN_10032621c(void)

{
  String SVar1;
  
  FUN_100327238();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100326244 | FUN_100326244 */

undefined1  [16] FUN_100326244(void)

{
  return ZEXT816(0xe000000000000000) << 0x40;
}


