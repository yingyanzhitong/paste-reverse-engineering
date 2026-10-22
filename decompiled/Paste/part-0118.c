/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10016bf20 | FUN_10016bf20 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

void * FUN_10016bf20(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = param_4;
  uStack_48 = param_5;
  pvVar3 = __Block_copy(&local_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
  return pvVar3;
}



/* Address: 0x10016bf9c | FUN_10016bf9c */

undefined1  [16] FUN_10016bf9c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog23BoxedBeforeSendLogBlock::block);
  _swift_retain(*(undefined8 *)
                 (*(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog23BoxedBeforeSendLogBlock::block) +
                 8));
  return auVar1;
}



/* Address: 0x10016bfd4 | FUN_10016bfd4 */

void FUN_10016bfd4(undefined8 param_1,undefined8 param_2)

{
  FUN_10016bfe0(param_1,param_2,&_TtC7PostHog23BoxedBeforeSendLogBlock::block);
  return;
}



/* Address: 0x10016bfe0 | FUN_10016bfe0 */

void FUN_10016bfe0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long unaff_x20;
  
  _objc_allocWithZone();
  lVar1 = *param_3;
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  ((undefined8 *)(unaff_x20 + lVar1))[1] = param_2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x10016c03c | FUN_10016c03c */

void FUN_10016c03c(undefined8 param_1,undefined8 param_2)

{
  FUN_10016c048(param_1,param_2,&_TtC7PostHog23BoxedBeforeSendLogBlock::block);
  return;
}



/* Address: 0x10016c048 | FUN_10016c048 */

void FUN_10016c048(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar1 = *param_3;
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  ((undefined8 *)(unaff_x20 + lVar1))[1] = param_2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x10016c0a4 | _TtC7PostHog23BoxedBeforeSendLogBlock::block: */

/* Function Stack Size: 0x18 bytes */

ID _TtC7PostHog23BoxedBeforeSendLogBlock::block_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  FUN_10016c0c0();
  return param_1;
}



/* Address: 0x10016c0c0 | FUN_10016c0c0 */

void FUN_10016c0c0(class_t *param_1,undefined8 param_2,void *param_3,long param_4,long *param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  void *pvVar3;
  objc_super local_50;
  
  pcVar2 = param_1;
  _swift_getObjectType();
  pvVar3 = __Block_copy(param_3);
  _swift_allocObject(param_4,0x18,7);
  *(void **)(param_4 + 0x10) = pvVar3;
  puVar1 = (undefined8 *)((long)&param_1->isa + *param_5);
  *puVar1 = param_6;
  puVar1[1] = param_4;
  local_50.receiver = (ID)param_1;
  local_50.super_class = pcVar2;
  _objc_msgSendSuper2(&local_50,"init");
  return;
}



/* Address: 0x10016c14c | _TtC7PostHog23BoxedBeforeSendLogBlock::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog23BoxedBeforeSendLogBlock::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.BoxedBeforeSendLogBlock",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10016c178);
  (*pcVar1)();
}



/* Address: 0x10016c178 | _TtC7PostHog23BoxedBeforeSendLogBlock::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog23BoxedBeforeSendLogBlock::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + block + 8));
  return;
}



/* Address: 0x10016c18c | FUN_10016c18c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10016c18c(void)

{
  return ZEXT816(0x100f95418);
}



/* Address: 0x10016c1ac | FUN_10016c1ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10016c1ac(void)

{
  return ZEXT816(0x100f954d8);
}



/* Address: 0x10016c1cc | FUN_10016c1cc */

void FUN_10016c1cc(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10016c1f0 | FUN_10016c1f0 */

void FUN_10016c1f0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10016c204 | FUN_10016c204 */

void FUN_10016c204(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10016c20c | FUN_10016c20c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10016c20c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Address: 0x10016c230 | thunk_FUN_10016c1cc */

void thunk_FUN_10016c1cc(void)

{
  FUN_10016c1cc();
  return;
}



/* Address: 0x10016c234 | thunk_FUN_10016c1f0 */

void thunk_FUN_10016c1f0(void)

{
  FUN_10016c1f0();
  return;
}



/* Address: 0x10016c238 | thunk_FUN_10016c204 */

void thunk_FUN_10016c204(void)

{
  FUN_10016c204();
  return;
}



/* Address: 0x10016c23c | thunk_FUN_10016c20c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void thunk_FUN_10016c20c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Address: 0x10016c240 | thunk_FUN_100059c14 */

void thunk_FUN_100059c14(void)

{
  FUN_100059c14();
  return;
}



/* Address: 0x10016c244 | FUN_10016c244 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10016c244(void)

{
  undefined *puVar1;
  int iVar2;
  ID IVar3;
  Dictionary<undefined,undefined> DVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  iVar2 = (int)&local_60;
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar3 = NSBundle::infoDictionary(IVar3);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (IVar3 == 0) {
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
  }
  else {
    DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar4.unknown + 0x10) != 0) {
      _swift_bridgeObjectRetain(DVar4.unknown);
      uVar6 = 0;
      lVar5 = -0x2fffffffffffffe6;
      FUN_100071370(0xd00000000000001a);
      if ((uVar6 & 1) != 0) {
        FUN_10000cbfc(*(long *)(DVar4.unknown + 0x38) + lVar5 * 0x20,&local_50);
        _swift_bridgeObjectRelease_n(DVar4.unknown,2);
        if (local_38 != 0) {
          _swift_dynamicCast(&local_60,&local_50,puVar1 + 8,
                             PTR___type_metadata_for_Swift_String_100eac208,6);
          if (iVar2 == 0) {
            local_60 = 0;
            uStack_58 = 0;
          }
          goto LAB_10016c378;
        }
        goto LAB_10016c368;
      }
      _swift_bridgeObjectRelease(DVar4.unknown);
    }
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
    _swift_bridgeObjectRelease(DVar4.unknown);
  }
LAB_10016c368:
  FUN_1000faea8(&local_50);
  local_60 = 0;
  uStack_58 = 0;
LAB_10016c378:
  auVar7._8_8_ = uStack_58;
  auVar7._0_8_ = local_60;
  return auVar7;
}



/* Address: 0x10016c38c | FUN_10016c38c */

void FUN_10016c38c(undefined8 *param_1,_StringObject param_2,byte *param_3)

{
  ulong uVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  byte *pbVar6;
  UnsafeBufferPointer<__int8> UVar7;
  long lVar8;
  _StringObject _Var9;
  uint uVar10;
  undefined *local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  
  pbVar4 = (byte *)((ulong)param_2.unknown & 0xffffffffffff);
  pbVar6 = (byte *)((ulong)param_3 >> 0x38 & 0xf);
  pbVar3 = pbVar4;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    pbVar3 = pbVar6;
  }
  if (pbVar3 == (byte *)0x0) goto LAB_10016c5f4;
  if (((ulong)param_3 >> 0x3c & 1) == 0) {
    if (((ulong)param_3 >> 0x3d & 1) == 0) {
      if (((ulong)param_2.unknown >> 0x3c & 1) == 0) {
        pbVar4 = param_3;
        UVar7 = Swift::_StringObject::get_sharedUTF8(param_2);
      }
      else {
        UVar7.unknown = (undefined *)(((ulong)param_3 & 0xfffffffffffffff) + 0x20);
      }
      if (*UVar7.unknown != 0x2b) {
        if (*UVar7.unknown != 0x2d) {
          if (pbVar4 == (byte *)0x0) goto LAB_10016c5f4;
          _Var9.unknown = (undefined *)0x0;
          pbVar3 = UVar7.unknown;
          while (pbVar3 != (byte *)0x0) {
            if (((9 < (byte)*UVar7.unknown - 0x30) ||
                (lVar8 = (long)_Var9.unknown * 10,
                SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)((byte)*UVar7.unknown - 0x30),
               _Var9.unknown = (undefined *)(lVar8 + uVar1), SCARRY8(lVar8,uVar1)))
            goto LAB_10016c5f4;
            pbVar4 = pbVar4 + -1;
            UVar7.unknown = UVar7.unknown + 1;
            pbVar3 = pbVar4;
          }
          goto LAB_10016c610;
        }
        pbVar3 = pbVar4 + -1;
        if ((long)pbVar4 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10016c6bc);
          (*pcVar2)();
        }
        if (pbVar3 != (byte *)0x0) {
          _Var9.unknown = (undefined *)0x0;
          do {
            UVar7.unknown = UVar7.unknown + 1;
            if (((9 < (byte)*UVar7.unknown - 0x30) ||
                (lVar8 = (long)_Var9.unknown * 10,
                SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)((byte)*UVar7.unknown - 0x30),
               _Var9.unknown = (undefined *)(lVar8 - uVar1), SBORROW8(lVar8,uVar1)))
            goto LAB_10016c5f4;
            pbVar3 = pbVar3 + -1;
          } while (pbVar3 != (byte *)0x0);
          goto LAB_10016c610;
        }
        goto LAB_10016c5f4;
      }
      pbVar3 = pbVar4 + -1;
      if ((long)pbVar4 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10016c6c4);
        (*pcVar2)();
      }
      if (pbVar3 == (byte *)0x0) goto LAB_10016c5f4;
      _Var9.unknown = (undefined *)0x0;
      do {
        UVar7.unknown = UVar7.unknown + 1;
        if (((9 < (byte)*UVar7.unknown - 0x30) ||
            (lVar8 = (long)_Var9.unknown * 10,
            SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)((byte)*UVar7.unknown - 0x30),
           _Var9.unknown = (undefined *)(lVar8 + uVar1), SCARRY8(lVar8,uVar1))) goto LAB_10016c5f4;
        pbVar3 = pbVar3 + -1;
      } while (pbVar3 != (byte *)0x0);
      goto LAB_10016c610;
    }
    local_60 = param_2.unknown;
    uStack_58 = (ulong)param_3 & 0xffffffffffffff;
    uVar10 = (uint)param_2.unknown & 0xff;
    if (uVar10 == 0x2b) {
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10016c6c8);
        (*pcVar2)();
      }
      pbVar6 = pbVar6 + -1;
      if (pbVar6 == (byte *)0x0) goto LAB_10016c5e0;
      _Var9.unknown = (undefined *)0x0;
      pbVar3 = (byte *)((ulong)&local_60 | 1);
      do {
        if (((9 < *pbVar3 - 0x30) ||
            (lVar8 = (long)_Var9.unknown * 10,
            SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*pbVar3 - 0x30), _Var9.unknown = (undefined *)(lVar8 + uVar1),
           SCARRY8(lVar8,uVar1))) goto LAB_10016c5e0;
        uVar10 = 0;
        pbVar6 = pbVar6 + -1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar6 != (byte *)0x0);
    }
    else if (uVar10 == 0x2d) {
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10016c6c0);
        (*pcVar2)();
      }
      pbVar6 = pbVar6 + -1;
      if (pbVar6 == (byte *)0x0) {
LAB_10016c5e0:
        _Var9.unknown = (undefined *)0x0;
        uVar10 = 1;
      }
      else {
        _Var9.unknown = (undefined *)0x0;
        pbVar3 = (byte *)((ulong)&local_60 | 1);
        do {
          if (((9 < *pbVar3 - 0x30) ||
              (lVar8 = (long)_Var9.unknown * 10,
              SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar3 - 0x30), _Var9.unknown = (undefined *)(lVar8 - uVar1),
             SBORROW8(lVar8,uVar1))) goto LAB_10016c5e0;
          uVar10 = 0;
          pbVar6 = pbVar6 + -1;
          pbVar3 = pbVar3 + 1;
        } while (pbVar6 != (byte *)0x0);
      }
    }
    else {
      if (pbVar6 == (byte *)0x0) goto LAB_10016c5e0;
      _Var9.unknown = (undefined *)0x0;
      ppuVar5 = &local_60;
      do {
        if (((9 < *(byte *)ppuVar5 - 0x30) ||
            (lVar8 = (long)_Var9.unknown * 10,
            SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar1 = (ulong)(byte)(*(byte *)ppuVar5 - 0x30),
           _Var9.unknown = (undefined *)(lVar8 + uVar1), SCARRY8(lVar8,uVar1))) goto LAB_10016c5e0;
        uVar10 = 0;
        pbVar6 = pbVar6 + -1;
        ppuVar5 = (undefined **)((long)ppuVar5 + 1);
      } while (pbVar6 != (byte *)0x0);
    }
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    _Var9.unknown = param_2.unknown;
    pbVar3 = param_3;
    FUN_10016c7d4(param_2.unknown,param_3,10,FUN_1000c43a8);
    uVar10 = (uint)pbVar3;
    _swift_bridgeObjectRelease(param_3);
  }
  if ((uVar10 & 0xff) == 1) {
LAB_10016c5f4:
    param_1[3] = PTR___type_metadata_for_Swift_String_100eac208;
    *param_1 = param_2.unknown;
    param_1[1] = param_3;
    _swift_bridgeObjectRetain(param_3);
    return;
  }
LAB_10016c610:
  uStack_58 = 0;
  local_50 = 0;
  puStack_48 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  local_60 = _Var9.unknown;
  FUN_100011080(&local_60,param_1);
  return;
}



/* Address: 0x10016c6c8 | FUN_10016c6c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10016c6c8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  ID self;
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String local_58;
  
  self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  NSProcessInfo::operatingSystemVersion(self,&local_58);
  local_58 = Swift::CustomStringConvertible::get_description();
  SVar1.bridgeObject = (void *)0xe100000000000000;
  SVar1.str = (char *)0x2e;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar1,SVar3);
  SVar1 = Swift::CustomStringConvertible::get_description();
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar1,SVar4);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x2e;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  SVar1 = Swift::CustomStringConvertible::get_description();
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar1,SVar6);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return local_58;
}



/* Address: 0x10016c7c8 | FUN_10016c7c8 */

void FUN_10016c7c8(void)

{
  FUN_10016c7d4();
  return;
}



/* Address: 0x10016c7d4 | FUN_10016c7d4 */

/* WARNING: Removing unreachable block (ram,0x00010016c8d4) */

undefined1  [16] FUN_10016c7d4(undefined *param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_50;
  ulong uStack_48;
  
  local_50 = param_1;
  uStack_48 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_10016cb5c();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_50;
    pvVar4 = SVar6.bridgeObject;
  }
  local_50 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_50 & 0xffffffffffff);
      local_50 = puVar1;
    }
    (*param_4)(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_48 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_50;
    (*param_4)(UVar3.unknown,pvVar4,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x10016c8e0 | FUN_10016c8e0 */

undefined1  [16] FUN_10016c8e0(byte *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  code *pcVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  char cVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  iVar13 = (int)param_3;
  uVar16 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016cb5c);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) goto LAB_10016cb4c;
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_10016cb4c;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_3;
      if ((SUB168(auVar5 * auVar8,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
         CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) goto LAB_10016cb30;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar13 + 0x30;
        uVar2 = 0x61;
        if (10 < (long)param_3) {
          uVar2 = iVar13 + 0x57;
        }
        uVar11 = 0x41;
        if (10 < (long)param_3) {
          uVar1 = 0x3a;
          uVar11 = iVar13 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar15 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar17 = (uint)bVar3;
            if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
              uVar16 = 1;
              if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_10016cb4c;
              cVar18 = -0x57;
            }
            else {
              cVar18 = -0x37;
            }
          }
          else {
            cVar18 = -0x30;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar15;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = param_3;
          if ((SUB168(auVar6 * auVar9,8) != 0) ||
             (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
             CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar15;
            return auVar20;
          }
        } while( true );
      }
LAB_10016cb30:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016cb58);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) {
LAB_10016cb4c:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar16;
      return auVar10 << 0x40;
    }
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_10016cb4c;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_3;
      if ((SUB168(auVar4 * auVar7,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 - (byte)(bVar3 + cVar18),
         uVar16 < (byte)(bVar3 + cVar18))) goto LAB_10016cb30;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar15;
  return auVar19;
}



/* Address: 0x10016cb5c | FUN_10016cb5c */

undefined1  [16]
FUN_10016cb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_10016cbac();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x10016cbac | FUN_10016cbac */

String FUN_10016cbac(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  Index IVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined *local_68;
  ulong uStack_60;
  undefined8 local_50;
  
  if ((param_4 >> 0x3c & 1) != 0) {
    IVar6.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    ppuVar2 = (undefined **)
              Swift::Substring::UTF8View::distance
                        (param_1,param_2,(UTF8View)param_1.cmsgPointer.unknown);
    ppuVar3 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
      FUN_10016ccf0(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10016ccac);
        (*pcVar1)();
      }
    }
    SVar8.str = ppuVar3[2];
    SVar8.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)(ppuVar3 + 4),SVar8);
    _swift_release(ppuVar3);
    return SVar8;
  }
  uVar7 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
  if ((param_4 >> 0x3d & 1) != 0) {
    uStack_60 = param_4 & 0xffffffffffffff;
    SVar10.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
    SVar10.bridgeObject = param_3.unknown;
    local_68 = param_3.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((undefined *)((long)&local_68 + uVar7),SVar10);
    return SVar8;
  }
  if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
    UVar5 = Swift::_StringObject::get_sharedUTF8(param_3);
    if (UVar5.unknown == (undefined *)0x0) {
      UVar5.unknown = (undefined *)0x0;
      goto LAB_10016cbe4;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_10016cbe4:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x10016ccf0 | FUN_10016ccf0 */

undefined * FUN_10016ccf0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100faf5f8;
    FUN_1000f7830(&DAT_100faf5f8,&DAT_100c2e380);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x10016cd60 | FUN_10016cd60 */

void FUN_10016cd60(int param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 extraout_var;
  __DataStorage *p_Var7;
  __DataStorage *p_Var8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  Bytef local_108 [20];
  uint local_f4;
  long local_f0;
  ulong uStack_e8;
  z_stream local_e0;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = (uint)(param_4 >> 0x20);
  uVar22 = uVar3 >> 0x1e;
  iVar6 = (int)param_3;
  if (uVar3 >> 0x1e < 2) {
    if (uVar22 == 0) {
      if ((param_4 & 0xff000000000000) == 0) goto LAB_10016d318;
    }
    else if ((long)iVar6 == param_3 >> 0x20) goto LAB_10016d318;
  }
  else if ((uVar22 != 2) || (*(long *)(param_3 + 0x10) == *(long *)(param_3 + 0x18)))
  goto LAB_10016d318;
  local_e0.data_type = 0;
  local_e0._92_4_ = 0;
  local_e0.opaque = (voidpf)0x0;
  local_e0.reserved = 0;
  local_e0.adler = 0;
  local_e0.state = (internal_state *)0x0;
  local_e0.msg = (char *)0x0;
  local_e0.zfree = (free_func)0x0;
  local_e0.zalloc = (alloc_func)0x0;
  local_e0.next_out = (Bytef *)0x0;
  local_e0.total_in = 0;
  local_e0.total_out = 0;
  local_e0.avail_out = 0;
  local_e0._36_4_ = 0;
  local_e0.avail_in = 0;
  local_e0._12_4_ = 0;
  local_e0.next_in = (Bytef *)0x0;
  uVar11 = 8;
  local_f4 = _deflateInit2_(&local_e0,param_1,8,(int)param_2,9,0,"1.2.12",0x70);
  puVar20 = (undefined8 *)CONCAT44(extraout_var,local_f4);
  if (local_f4 == 0) {
    p_Var7 = Foundation::__DataStorage::typeMetadataAccessor();
    _swift_allocObject(p_Var7,*(undefined4 *)(p_Var7 + 0x30),*(undefined2 *)(p_Var7 + 0x34));
    p_Var7 = Foundation::__DataStorage::init(p_Var7,0x4000);
    uStack_e8 = (ulong)p_Var7 | 0x4000000000000000;
    iVar13 = (int)((ulong)param_3 >> 0x20);
    local_f0 = 0;
    lVar15 = (long)iVar6;
    do {
      if ((long)local_e0.total_out < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d358);
        (*pcVar5)();
      }
      uVar4 = (uint)(uStack_e8 >> 0x20);
      uVar23 = uVar3 >> 0x1e;
      uVar16 = uVar4 >> 0x1e;
      iVar14 = (int)local_f0;
      iVar18 = (int)((ulong)local_f0 >> 0x20);
      if (uVar4 >> 0x1e < 2) {
        if (uVar16 == 0) {
          uVar19 = uStack_e8 >> 0x30 & 0xff;
        }
        else {
          if (SBORROW4(iVar18,iVar14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d364);
            (*pcVar5)();
          }
          uVar19 = (ulong)(iVar18 - iVar14);
        }
joined_r0x00010016cf18:
        if ((long)uVar19 <= (long)local_e0.total_out) {
          if (uVar16 == 2) {
            uVar19 = *(long *)(local_f0 + 0x18) - *(long *)(local_f0 + 0x10);
            if (SBORROW8(*(long *)(local_f0 + 0x18),*(long *)(local_f0 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3e0);
              (*pcVar5)();
            }
          }
          else if (uVar16 == 1) {
            if (SBORROW4(iVar18,iVar14)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3dc);
              (*pcVar5)();
            }
            uVar19 = (ulong)(iVar18 - iVar14);
          }
          else {
            uVar19 = uStack_e8 >> 0x30 & 0xff;
          }
          goto LAB_10016cf94;
        }
        if (uVar23 < 2) goto LAB_10016cf24;
LAB_10016cfb0:
        if (uVar22 == 2) {
          uVar19 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
          if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d370);
            (*pcVar5)();
          }
        }
        else {
          uVar19 = 0;
        }
      }
      else {
        if (uVar16 == 2) {
          uVar19 = *(long *)(local_f0 + 0x18) - *(long *)(local_f0 + 0x10);
          if (SBORROW8(*(long *)(local_f0 + 0x18),*(long *)(local_f0 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d368);
            (*pcVar5)();
          }
          goto joined_r0x00010016cf18;
        }
        uVar19 = 0;
LAB_10016cf94:
        p_Var7 = (__DataStorage *)(uVar19 + 0x4000);
        if (SCARRY8(uVar19,0x4000)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d35c);
          (*pcVar5)();
        }
        if ((long)p_Var7 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d360);
          (*pcVar5)();
        }
        Foundation::Data::_Representation::set_count((_Representation *)&local_f0,(__int64)p_Var7);
        if (1 < uVar23) goto LAB_10016cfb0;
LAB_10016cf24:
        uVar19 = param_4 >> 0x30 & 0xff;
        if ((uVar22 != 0) && (uVar19 = (long)(iVar13 - iVar6), SBORROW4(iVar13,iVar6))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d36c);
          (*pcVar5)();
        }
      }
      uVar4 = (uint)(uStack_e8 >> 0x20);
      uVar17 = uVar4 >> 0x1e;
      uVar24 = (uint)uVar19;
      uVar16 = (uint)local_e0.total_in;
      if (uVar4 >> 0x1e < 2) {
        if (uVar17 == 0) {
          uVar21 = uStack_e8 >> 0x30 & 0xff;
        }
        else {
          iVar14 = (int)((ulong)local_f0 >> 0x20);
          if (SBORROW4(iVar14,(int)local_f0)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d374);
            (*pcVar5)();
          }
          uVar21 = (ulong)(iVar14 - (int)local_f0);
        }
joined_r0x00010016d01c:
        if (uVar3 >> 0x1e < 2) goto LAB_10016d020;
LAB_10016d0cc:
        if (uVar23 != 2) {
          local_108[8] = 0;
          local_108[9] = 0;
          local_108[10] = 0;
          local_108[0xb] = 0;
          local_108[0xc] = 0;
          local_108[0xd] = 0;
          local_108[0] = '\0';
          local_108[1] = 0;
          local_108[2] = 0;
          local_108[3] = 0;
          local_108[4] = 0;
          local_108[5] = 0;
          local_108[6] = 0;
          local_108[7] = 0;
          if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d384);
            (*pcVar5)();
          }
          local_e0.next_in = local_108 + local_e0.total_in;
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d390);
            (*pcVar5)();
          }
          if (uVar19 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3a0);
            (*pcVar5)();
          }
          if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3b0);
            (*pcVar5)();
          }
          if (uVar24 < uVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3bc);
            (*pcVar5)();
          }
          goto LAB_10016d23c;
        }
        lVar1 = *(long *)(param_3 + 0x10);
        lVar2 = *(long *)(param_3 + 0x18);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_4 & 0x3fffffffffffffff),p_Var7);
        p_Var8 = (__DataStorage *)0x0;
        if (p_Var7 != (__DataStorage *)0x0) {
          p_Var8 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_4 & 0x3fffffffffffffff),p_Var7);
          if (SBORROW8(lVar1,(long)p_Var8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3d8);
            (*pcVar5)();
          }
          p_Var7 = p_Var7 + (lVar1 - (long)p_Var8);
        }
        if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d388);
          (*pcVar5)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_4 & 0x3fffffffffffffff),p_Var8);
        if (p_Var7 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3f4);
          (*pcVar5)();
        }
        if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d398);
          (*pcVar5)();
        }
        local_e0.next_in = (Bytef *)(p_Var7 + local_e0.total_in);
        if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3a8);
          (*pcVar5)();
        }
        if (uVar19 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3b8);
          (*pcVar5)();
        }
        if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3c8);
          (*pcVar5)();
        }
        if (uVar24 < (uint)local_e0.total_in) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3d0);
          (*pcVar5)();
        }
        local_e0.avail_in = uVar24 - (uint)local_e0.total_in;
        p_Var7 = (__DataStorage *)&local_f0;
        puVar12 = &local_f4;
        FUN_10016d79c(p_Var7,&local_e0);
      }
      else {
        if (uVar17 == 2) {
          uVar21 = *(long *)(local_f0 + 0x18) - *(long *)(local_f0 + 0x10);
          if (SBORROW8(*(long *)(local_f0 + 0x18),*(long *)(local_f0 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d378);
            (*pcVar5)();
          }
          goto joined_r0x00010016d01c;
        }
        uVar21 = 0;
        if (1 < uVar23) goto LAB_10016d0cc;
LAB_10016d020:
        if (uVar23 == 0) {
          local_108[0] = (Bytef)param_3;
          local_108[1] = (Bytef)((ulong)param_3 >> 8);
          local_108[2] = (Bytef)((ulong)param_3 >> 0x10);
          local_108[3] = (Bytef)((ulong)param_3 >> 0x18);
          local_108[4] = (Bytef)((ulong)param_3 >> 0x20);
          local_108[5] = (Bytef)((ulong)param_3 >> 0x28);
          local_108[6] = (Bytef)((ulong)param_3 >> 0x30);
          local_108[7] = (Bytef)((ulong)param_3 >> 0x38);
          local_108[8] = (Bytef)param_4;
          local_108[9] = (Bytef)(param_4 >> 8);
          local_108[10] = (Bytef)(param_4 >> 0x10);
          local_108[0xb] = (Bytef)(param_4 >> 0x18);
          local_108[0xc] = (Bytef)(param_4 >> 0x20);
          local_108[0xd] = (Bytef)(param_4 >> 0x28);
          if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d380);
            (*pcVar5)();
          }
          local_e0.next_in = local_108 + local_e0.total_in;
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d38c);
            (*pcVar5)();
          }
          if (uVar19 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d39c);
            (*pcVar5)();
          }
          if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3ac);
            (*pcVar5)();
          }
          if (uVar24 < uVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3c0);
            (*pcVar5)();
          }
LAB_10016d23c:
          local_e0.avail_in = uVar24 - uVar16;
          p_Var7 = (__DataStorage *)&local_f0;
          puVar12 = &local_f4;
          FUN_10016d79c(p_Var7,&local_e0);
        }
        else {
          if (param_3 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d37c);
            (*pcVar5)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_4 & 0x3fffffffffffffff),p_Var7);
          if (p_Var7 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_4 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_10016d3ec:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3f0);
            (*pcVar5)();
          }
          p_Var8 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_4 & 0x3fffffffffffffff),p_Var7);
          if (SBORROW8(lVar15,(long)p_Var8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d394);
            (*pcVar5)();
          }
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_4 & 0x3fffffffffffffff),p_Var8);
          if (p_Var7 + (lVar15 - (long)p_Var8) == (__DataStorage *)0x0) goto LAB_10016d3ec;
          if ((long)local_e0.total_in < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3a4);
            (*pcVar5)();
          }
          local_e0.next_in = (Bytef *)(p_Var7 + (lVar15 - (long)p_Var8) + local_e0.total_in);
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3b4);
            (*pcVar5)();
          }
          if (uVar19 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3c4);
            (*pcVar5)();
          }
          if (local_e0.total_in >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3cc);
            (*pcVar5)();
          }
          if (uVar24 < (uint)local_e0.total_in) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3d4);
            (*pcVar5)();
          }
          local_e0.avail_in = uVar24 - (uint)local_e0.total_in;
          p_Var7 = (__DataStorage *)&local_f0;
          puVar12 = &local_f4;
          FUN_10016d79c(p_Var7,&local_e0);
        }
      }
      uVar4 = local_f4;
      local_e0.next_in = (Bytef *)0x0;
      puVar20 = (undefined8 *)(ulong)local_f4;
    } while ((local_e0.avail_out == 0) && (local_f4 != 1));
    iVar6 = _deflateEnd(&local_e0);
    if ((iVar6 == 0) && (uVar4 == 1)) {
      if ((long)local_e0.total_out < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10016d3e4);
        (*pcVar5)();
      }
      Foundation::Data::_Representation::set_count((_Representation *)&local_f0,local_e0.total_out);
      uVar19 = uStack_e8;
      lVar15 = local_f0;
      FUN_1001037b4(local_f0,uStack_e8);
      FUN_10003bf2c(lVar15,uVar19);
    }
    else {
      pcVar10 = local_e0.msg;
      FUN_10016dc50();
      puVar9 = puVar20;
      FUN_10016dcbc();
      _swift_allocError(&DAT_100eb9ca0,puVar9,0,0);
      *puVar9 = puVar20;
      *(char *)(puVar9 + 1) = (char)pcVar10;
      puVar9[2] = uVar21;
      puVar9[3] = puVar12;
      _swift_willThrow();
      FUN_10003bf2c(local_f0,uStack_e8);
    }
  }
  else {
    pcVar10 = local_e0.msg;
    FUN_10016dc50();
    puVar9 = puVar20;
    FUN_10016dcbc();
    _swift_allocError(&DAT_100eb9ca0,puVar9,0,0);
    *puVar9 = puVar20;
    *(char *)(puVar9 + 1) = (char)pcVar10;
    puVar9[2] = uVar11;
    puVar9[3] = param_2;
    _swift_willThrow();
  }
LAB_10016d318:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10016d3f8 | FUN_10016d3f8 */

undefined * FUN_10016d3f8(void)

{
  return &DAT_100c2fe90;
}



/* Address: 0x10016d404 | FUN_10016d404 */

undefined8 FUN_10016d404(void)

{
  return 0xf;
}



/* Address: 0x10016d40c | FUN_10016d40c */

undefined * FUN_10016d40c(void)

{
  return &DAT_100c2fe94;
}



/* Address: 0x10016d418 | FUN_10016d418 */

undefined * FUN_10016d418(void)

{
  return &DAT_100c2fe98;
}



/* Address: 0x10016d424 | FUN_10016d424 */

undefined * FUN_10016d424(void)

{
  return &DAT_100c2fe9c;
}



/* Address: 0x10016d430 | FUN_10016d430 */

undefined8 FUN_10016d430(void)

{
  return 9;
}



/* Address: 0x10016d438 | FUN_10016d438 */

undefined * FUN_10016d438(void)

{
  return &DAT_100c2fea0;
}



/* Address: 0x10016d444 | FUN_10016d444 */

undefined8 FUN_10016d444(void)

{
  return 0xffffffff;
}



/* Address: 0x10016d44c | FUN_10016d44c */

bool FUN_10016d44c(ulong param_1,char param_2,ulong param_3,char param_4)

{
  if (param_2 == '\x01') {
    if ((long)param_1 < 2) {
      if (param_1 == 0) {
        if ((param_4 == '\x01') && (param_3 == 0)) {
          return true;
        }
      }
      else if ((param_4 == '\x01') && (param_3 == 1)) {
        return true;
      }
    }
    else if (param_1 == 2) {
      if ((param_4 == '\x01') && (param_3 == 2)) {
        return true;
      }
    }
    else if (param_1 == 3) {
      if ((param_4 == '\x01') && (param_3 == 3)) {
        return true;
      }
    }
    else if ((param_4 == '\x01') && (3 < param_3)) {
      return true;
    }
  }
  else if (param_4 != '\x01') {
    return param_1 == param_3;
  }
  return false;
}



/* Address: 0x10016d508 | FUN_10016d508 */

bool FUN_10016d508(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  uVar3 = *param_2;
  cVar1 = (char)param_2[1];
  if ((char)param_1[1] == '\x01') {
    if ((long)uVar4 < 2) {
      if (uVar4 == 0) {
        bVar2 = uVar3 == 0;
      }
      else {
        bVar2 = uVar3 == 1;
      }
      if (cVar1 == '\x01' && bVar2) {
        return true;
      }
    }
    else if (uVar4 == 2) {
      if (cVar1 == '\x01' && uVar3 == 2) {
        return true;
      }
    }
    else if (uVar4 == 3) {
      if ((cVar1 == '\x01') && (uVar3 == 3)) {
        return true;
      }
    }
    else if ((cVar1 == '\x01') && (3 < uVar3)) {
      return true;
    }
  }
  else if (cVar1 != '\x01') {
    return uVar4 == uVar3;
  }
  return false;
}



/* Address: 0x10016d5b0 | FUN_10016d5b0 */

undefined1  [16]
FUN_10016d5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  _swift_bridgeObjectRetain(param_4);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Address: 0x10016d5e0 | FUN_10016d5e0 */

undefined1  [16] FUN_10016d5e0(void)

{
  return ZEXT816(0x100eb9c00);
}



/* Address: 0x10016d5f0 | FUN_10016d5f0 */

undefined1  [16] FUN_10016d5f0(void)

{
  return ZEXT816(0x100eb9c20);
}



/* Address: 0x10016d600 | FUN_10016d600 */

void FUN_10016d600(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x10016d608 | FUN_10016d608 */

undefined8 * FUN_10016d608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10016d644 | FUN_10016d644 */

undefined8 * FUN_10016d644(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10016d694 | FUN_10016d694 */

void FUN_10016d694(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x10016d6a0 | FUN_10016d6a0 */

undefined8 * FUN_10016d6a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x10016d6e0 | FUN_10016d6e0 */

int FUN_10016d6e0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10016d728 | FUN_10016d728 */

void FUN_10016d728(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10016d768 | FUN_10016d768 */

undefined1  [16] FUN_10016d768(void)

{
  return ZEXT816(0x100eb9ca0);
}



/* Address: 0x10016d778 | FUN_10016d778 */

void FUN_10016d778(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10016d78c | FUN_10016d78c */

undefined1  [16] FUN_10016d78c(void)

{
  return ZEXT816(0x100eb9d38);
}



/* Address: 0x10016d79c | FUN_10016d79c */

void FUN_10016d79c(long *param_1,z_streamp param_2,ulong param_3,int *param_4)

{
  long lVar1;
  Bytef BVar2;
  uint uVar10;
  long lVar11;
  code *pcVar12;
  int iVar13;
  LargeSlice LVar14;
  __int64 _Var15;
  __DataStorage *p_Var16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  __DataStorage *p_Var20;
  uint uVar21;
  __DataStorage *p_Var22;
  long lVar23;
  Bytef local_78 [15];
  undefined1 uStack_69;
  long local_68;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar1 = *param_1;
  uVar18 = param_1[1];
  uVar10 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar10 >> 0x1e;
  uVar21 = (uint)param_3;
  BVar2 = (Bytef)lVar1;
  uVar3 = (undefined1)((ulong)lVar1 >> 8);
  uVar4 = (undefined1)((ulong)lVar1 >> 0x10);
  uVar5 = (undefined1)((ulong)lVar1 >> 0x18);
  cVar6 = (char)((ulong)lVar1 >> 0x20);
  uVar7 = (undefined1)((ulong)lVar1 >> 0x28);
  uVar8 = (undefined1)((ulong)lVar1 >> 0x30);
  uVar9 = (undefined1)((ulong)lVar1 >> 0x38);
  if (uVar10 >> 0x1e < 2) {
    if (uVar17 == 0) {
      FUN_10003bf2c(lVar1,uVar18);
      local_78[8] = (Bytef)uVar18;
      local_78[9] = (Bytef)(uVar18 >> 8);
      local_78[10] = (Bytef)(uVar18 >> 0x10);
      local_78[0xb] = (Bytef)(uVar18 >> 0x18);
      local_78[0xc] = (Bytef)(uVar18 >> 0x20);
      local_78[0xd] = (Bytef)(uVar18 >> 0x28);
      local_78[0xe] = (Bytef)(uVar18 >> 0x30);
      uVar18 = param_2->total_out;
      if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dbe0);
        local_78[0] = BVar2;
        local_78[1] = uVar3;
        local_78[2] = uVar4;
        local_78[3] = uVar5;
        local_78[4] = cVar6;
        local_78[5] = uVar7;
        local_78[6] = uVar8;
        local_78[7] = uVar9;
        (*pcVar12)();
      }
      param_2->next_out = local_78 + uVar18;
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dbf0);
        local_78[0] = BVar2;
        local_78[1] = uVar3;
        local_78[2] = uVar4;
        local_78[3] = uVar5;
        local_78[4] = cVar6;
        local_78[5] = uVar7;
        local_78[6] = uVar8;
        local_78[7] = uVar9;
        (*pcVar12)();
      }
      if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc00);
        local_78[0] = BVar2;
        local_78[1] = uVar3;
        local_78[2] = uVar4;
        local_78[3] = uVar5;
        local_78[4] = cVar6;
        local_78[5] = uVar7;
        local_78[6] = uVar8;
        local_78[7] = uVar9;
        (*pcVar12)();
      }
      if (uVar18 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc10);
        local_78[0] = BVar2;
        local_78[1] = uVar3;
        local_78[2] = uVar4;
        local_78[3] = uVar5;
        local_78[4] = cVar6;
        local_78[5] = uVar7;
        local_78[6] = uVar8;
        local_78[7] = uVar9;
        (*pcVar12)();
      }
      if (uVar21 < (uint)uVar18) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc20);
        local_78[0] = BVar2;
        local_78[1] = uVar3;
        local_78[2] = uVar4;
        local_78[3] = uVar5;
        local_78[4] = cVar6;
        local_78[5] = uVar7;
        local_78[6] = uVar8;
        local_78[7] = uVar9;
        (*pcVar12)();
      }
      param_2->avail_out = uVar21 - (uint)uVar18;
      local_78[0] = BVar2;
      local_78[1] = uVar3;
      local_78[2] = uVar4;
      local_78[3] = uVar5;
      local_78[4] = cVar6;
      local_78[5] = uVar7;
      local_78[6] = uVar8;
      local_78[7] = uVar9;
      iVar13 = _deflate(param_2,4);
      *param_4 = iVar13;
      param_2->next_out = (Bytef *)0x0;
      *param_1 = CONCAT17(local_78[7],
                          CONCAT16(local_78[6],
                                   CONCAT15(local_78[5],
                                            CONCAT14(local_78[4],
                                                     CONCAT13(local_78[3],
                                                              CONCAT12(local_78[2],
                                                                       CONCAT11(local_78[1],
                                                                                local_78[0])))))));
      param_1[1] = (ulong)CONCAT16(local_78[0xe],
                                   CONCAT15(local_78[0xd],
                                            CONCAT14(local_78[0xc],
                                                     CONCAT13(local_78[0xb],
                                                              CONCAT12(local_78[10],
                                                                       CONCAT11(local_78[9],
                                                                                local_78[8]))))));
      goto LAB_10016dba4;
    }
    p_Var22 = (__DataStorage *)(uVar18 & 0x3fffffffffffffff);
    _swift_retain(p_Var22);
    FUN_10003bf2c(lVar1,uVar18);
    param_1[1] = -0x4000000000000000;
    *param_1 = 0;
    FUN_10003bf2c(0,0xc000000000000000);
    p_Var20 = p_Var22;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar23 = (long)(int)lVar1;
    p_Var16 = p_Var22;
    if (((ulong)p_Var20 & 1) == 0) {
      if (lVar1 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc40);
        (*pcVar12)();
      }
      p_Var20 = p_Var22;
      _swift_retain();
      Foundation::__DataStorage::_get__bytes(p_Var22,p_Var20);
      if (p_Var20 == (__DataStorage *)0x0) {
        p_Var20 = (__DataStorage *)0x0;
      }
      else {
        _Var15 = Foundation::__DataStorage::get__offset(p_Var22,p_Var20);
        if (SBORROW8(lVar23,_Var15)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc44);
          (*pcVar12)();
        }
        p_Var20 = p_Var20 + (lVar23 - _Var15);
      }
      p_Var16 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var16,*(undefined4 *)(p_Var16 + 0x30),*(undefined2 *)(p_Var16 + 0x34));
      p_Var16 = Foundation::__DataStorage::_init(p_Var16,(__int64)p_Var20,(bool)(cVar6 - BVar2),1);
      _swift_release_n(p_Var22,2);
    }
    if (lVar1 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dbec);
      (*pcVar12)();
    }
    p_Var20 = p_Var16;
    _swift_retain();
    Foundation::__DataStorage::_get__bytes(p_Var16,p_Var20);
    if (p_Var20 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc50);
      (*pcVar12)();
    }
    p_Var22 = (__DataStorage *)Foundation::__DataStorage::get__offset(p_Var16,p_Var20);
    if (SBORROW8(lVar23,(long)p_Var22)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dbfc);
      (*pcVar12)();
    }
    Foundation::__DataStorage::get__length(p_Var16,p_Var22);
    uVar18 = param_2->total_out;
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc0c);
      (*pcVar12)();
    }
    param_2->next_out = (Bytef *)(p_Var20 + uVar18 + (lVar23 - (long)p_Var22));
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc1c);
      (*pcVar12)();
    }
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc2c);
      (*pcVar12)();
    }
    if (uVar18 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc34);
      (*pcVar12)();
    }
    if (uVar21 < (uint)uVar18) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc3c);
      (*pcVar12)();
    }
    param_2->avail_out = uVar21 - (uint)uVar18;
    iVar13 = _deflate(param_2,4);
    *param_4 = iVar13;
    param_2->next_out = (Bytef *)0x0;
    _swift_release(p_Var16);
    uVar18 = (ulong)p_Var16 | 0x4000000000000000;
    *param_1 = lVar1;
  }
  else {
    if (uVar17 != 2) {
      local_78[8] = 0;
      local_78[9] = 0;
      local_78[10] = 0;
      local_78[0xb] = 0;
      local_78[0xc] = 0;
      local_78[0xd] = 0;
      local_78[0] = '\0';
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = '\0';
      local_78[5] = 0;
      local_78[6] = 0;
      local_78[7] = 0;
      uVar18 = param_2->total_out;
      if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dbe4);
        (*pcVar12)();
      }
      param_2->next_out = local_78 + uVar18;
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dbf4);
        (*pcVar12)();
      }
      if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc04);
        (*pcVar12)();
      }
      if (uVar18 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc14);
        (*pcVar12)();
      }
      if (uVar21 < (uint)uVar18) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc24);
        (*pcVar12)();
      }
      param_2->avail_out = uVar21 - (uint)uVar18;
      iVar13 = _deflate(param_2,4);
      *param_4 = iVar13;
      param_2->next_out = (Bytef *)0x0;
      goto LAB_10016dba4;
    }
    uVar19 = uVar18 & 0x3fffffffffffffff;
    _swift_retain(lVar1);
    _swift_retain(uVar19);
    FUN_10003bf2c(lVar1,uVar18);
    local_78[8] = (Bytef)uVar19;
    local_78[9] = (Bytef)(uVar19 >> 8);
    local_78[10] = (Bytef)(uVar19 >> 0x10);
    local_78[0xb] = (Bytef)(uVar19 >> 0x18);
    local_78[0xc] = (Bytef)(uVar19 >> 0x20);
    local_78[0xd] = (Bytef)(uVar19 >> 0x28);
    local_78[0xe] = (Bytef)(uVar19 >> 0x30);
    uStack_69 = (undefined1)(uVar19 >> 0x38);
    param_1[1] = -0x4000000000000000;
    *param_1 = 0;
    LVar14.unknown = (undefined *)0x0;
    local_78[0] = BVar2;
    local_78[1] = uVar3;
    local_78[2] = uVar4;
    local_78[3] = uVar5;
    local_78[4] = cVar6;
    local_78[5] = uVar7;
    local_78[6] = uVar8;
    local_78[7] = uVar9;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::ensureUniqueReference(LVar14);
    lVar11 = CONCAT17(local_78[7],
                      CONCAT16(local_78[6],
                               CONCAT15(local_78[5],
                                        CONCAT14(local_78[4],
                                                 CONCAT13(local_78[3],
                                                          CONCAT12(local_78[2],
                                                                   CONCAT11(local_78[1],local_78[0])
                                                                  ))))));
    p_Var20 = (__DataStorage *)
              CONCAT17(uStack_69,
                       CONCAT16(local_78[0xe],
                                CONCAT15(local_78[0xd],
                                         CONCAT14(local_78[0xc],
                                                  CONCAT13(local_78[0xb],
                                                           CONCAT12(local_78[10],
                                                                    CONCAT11(local_78[9],local_78[8]
                                                                            )))))));
    lVar1 = *(long *)(lVar11 + 0x10);
    lVar23 = *(long *)(lVar11 + 0x18);
    Foundation::__DataStorage::_get__bytes(p_Var20,(__DataStorage *)LVar14.unknown);
    if ((__DataStorage *)LVar14.unknown == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc4c);
      (*pcVar12)();
    }
    p_Var16 = (__DataStorage *)
              Foundation::__DataStorage::get__offset(p_Var20,(__DataStorage *)LVar14.unknown);
    if (SBORROW8(lVar1,(long)p_Var16)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dbe8);
      (*pcVar12)();
    }
    if (SBORROW8(lVar23,lVar1)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dbf8);
      (*pcVar12)();
    }
    Foundation::__DataStorage::get__length(p_Var20,p_Var16);
    uVar18 = param_2->total_out;
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc08);
      (*pcVar12)();
    }
    param_2->next_out = (Bytef *)(LVar14.unknown + uVar18 + (lVar1 - (long)p_Var16));
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc18);
      (*pcVar12)();
    }
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc28);
      (*pcVar12)();
    }
    if (uVar18 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc30);
      (*pcVar12)();
    }
    if (uVar21 < (uint)uVar18) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10016dc38);
      (*pcVar12)();
    }
    param_2->avail_out = uVar21 - (uint)uVar18;
    iVar13 = _deflate(param_2,4);
    *param_4 = iVar13;
    param_2->next_out = (Bytef *)0x0;
    uVar18 = (ulong)p_Var20 | 0x8000000000000000;
    *param_1 = lVar11;
  }
  param_1[1] = uVar18;
LAB_10016dba4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10016dc50 | FUN_10016dc50 */

long FUN_10016dc50(int param_1,UnsafePointer<__int8> param_2)

{
  long lVar1;
  
  if (param_2.unknown != (undefined *)0x0) {
    Swift::String::_init(param_2);
  }
  lVar1 = 4 - (ulong)(param_1 + 6U);
  if (4 < param_1 + 6U) {
    lVar1 = (long)param_1;
  }
  return lVar1;
}



/* Address: 0x10016dcbc | FUN_10016dcbc */

void FUN_10016dcbc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb29f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ff04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ff04,&DAT_100eb9ca0);
  DAT_100fb29f8 = pTVar1;
  return;
}



/* Address: 0x10016dcfc | thunk_FUN_10016d5b0 */

void thunk_FUN_10016d5b0(void)

{
  FUN_10016d5b0();
  return;
}



/* Address: 0x10016dd00 | FUN_10016dd00 */

String FUN_10016dd00(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  Date DVar3;
  Date DVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  String SVar9;
  undefined1 auStack_50 [8];
  long local_48;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  DVar4 = Foundation::Date::init();
  dVar7 = Foundation::Date::get_timeIntervalSince1970(DVar4);
  (**(code **)(lVar6 + 8))(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar3.unknown);
  if (dVar7 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10016de4c);
    (*pcVar2)();
  }
  if (1.8446744073709552e+19 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10016de50);
    (*pcVar2)();
  }
  dVar8 = (double)NEON_ucvtf((long)dVar7);
  dVar8 = (dVar7 - dVar8) * 1000000000.0;
  if ((0x7fefffffffffffff < (ulong)ABS(dVar7)) || (0x7fefffffffffffff < (ulong)ABS(dVar8))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10016de54);
    (*pcVar2)();
  }
  if (dVar8 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10016de58);
    (*pcVar2)();
  }
  if (dVar8 < 1.8446744073709552e+19) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)dVar7;
    if (SUB168(auVar1 * ZEXT816(1000000000),8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10016de60);
      (*pcVar2)();
    }
    uVar5 = (long)dVar7 * 1000000000;
    local_48 = uVar5 + (long)dVar8;
    if (!CARRY8(uVar5,(long)dVar8)) {
      SVar9 = Swift::CustomStringConvertible::get_description();
      return SVar9;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10016de64);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10016de5c);
  (*pcVar2)();
}



/* Address: 0x10016de64 | FUN_10016de64 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10016de64(Date param_1)

{
  NSDate *pNVar1;
  ID self;
  String SVar2;
  
  if (DAT_100fb2a00 != -1) {
    param_1.unknown = (undefined *)&DAT_100fb2a00;
    _swift_once(&DAT_100fb2a00,FUN_10016e594);
  }
  self = *(ID *)(DAT_101057338 + 0x10);
  pNVar1 = Foundation::Date::_bridgeToObjectiveC(param_1);
  objc_stub::stringFromDate_(self,pNVar1);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar2;
}



/* Address: 0x10016df04 | FUN_10016df04 */

void FUN_10016df04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_100fb2a00 != -1) {
    _swift_once(&DAT_100fb2a00,FUN_10016e594);
  }
  FUN_10016e1a8(param_1,param_2,param_3);
  return;
}



/* Address: 0x10016df78 | FUN_10016df78 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10016df78(ulong param_1,ulong param_2)

{
  ID self;
  Date DVar1;
  ulong *puVar2;
  NSString *pNVar3;
  Date DVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  ulong local_a0;
  ulong uStack_98;
  byte local_81;
  double *local_70;
  double local_68;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar6 = (undefined *)(lVar7 - extraout_x12);
  local_70 = &local_68;
  local_68 = 0.0;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_10016e15c;
      puVar2 = (ulong *)((param_2 & 0xfffffffffffffff) + 0x20);
      if (0x20 < *(byte *)puVar2 || (1L << ((ulong)*(byte *)puVar2 & 0x3f) & 0x100003e01U) == 0)
      goto LAB_10016e134;
    }
    else {
      uStack_98 = param_2 & 0xffffffffffffff;
      local_a0 = param_1;
      if ((0x20 < ((uint)param_1 & 0xff)) || ((1L << (param_1 & 0x3f) & 0x100003e01U) == 0)) {
        puVar2 = &local_a0;
LAB_10016e134:
        __swift_stdlib_strtod_clocale(puVar2,&local_68);
        if ((puVar2 != (ulong *)0x0) && ((byte)*puVar2 == 0)) goto LAB_10016e148;
      }
    }
LAB_10016e064:
    if (DAT_100fb2ab0 != -1) {
      _swift_once(&DAT_100fb2ab0,FUN_10016e62c);
    }
    self = DAT_100fb2ab8;
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    DVar4.unknown = (undefined *)objc_stub::dateFromString_(self,pNVar3);
    if (DVar4.unknown == (undefined *)0x0) {
      local_68 = 0.0;
      uVar5 = 1;
      goto LAB_10016e110;
    }
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar4);
    DVar4.unknown = puVar6;
    (**(code **)(lVar8 + 0x20))(puVar6,lVar7,DVar1.unknown);
    dVar9 = Foundation::Date::get_timeIntervalSinceNow(DVar4);
    (**(code **)(lVar8 + 8))(puVar6,DVar1.unknown);
    local_68 = dVar9;
    if (dVar9 < 0.0) {
      local_68 = 0.0;
    }
  }
  else {
LAB_10016e15c:
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x10016e660);
    if ((local_81 & 1) == 0) goto LAB_10016e064;
LAB_10016e148:
    if (local_68 < 0.0) goto LAB_10016e064;
  }
  uVar5 = 0;
LAB_10016e110:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = local_68;
  return auVar10;
}



/* Address: 0x10016e1a8 | FUN_10016e1a8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016e1a8(undefined8 param_1)

{
  undefined *puVar1;
  NSString *pNVar2;
  Date DVar3;
  Date DVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar6;
  ID IVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  IVar7 = *(ID *)(unaff_x20 + 0x10);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  DVar3.unknown = (undefined *)objc_stub::dateFromString_(IVar7,pNVar2);
  if (DVar3.unknown == (undefined *)0x0) {
    DVar4 = Foundation::Date::typeMetadataAccessor();
  }
  else {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar3);
    DVar4 = Foundation::Date::typeMetadataAccessor();
  }
  lVar10 = *(long *)(DVar4.unknown + -8);
  pcVar9 = *(code **)(lVar10 + 0x38);
  (*pcVar9)((long)puVar6 - extraout_x12,DVar3.unknown == (undefined *)0x0,1,DVar4.unknown);
  FUN_10012b26c((long)puVar6 - extraout_x12,puVar6);
  Foundation::Date::typeMetadataAccessor();
  pcVar8 = *(code **)(lVar10 + 0x30);
  puVar5 = puVar6;
  (*pcVar8)(puVar6,1,DVar4.unknown);
  if ((int)puVar5 == 1) {
    IVar7 = *(ID *)(unaff_x20 + 0x18);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    DVar3.unknown = (undefined *)objc_stub::dateFromString_(IVar7,pNVar2);
    if (DVar3.unknown != (undefined *)0x0) {
      Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar3);
    }
    (*pcVar9)(param_1,DVar3.unknown == (undefined *)0x0,1,DVar4.unknown);
    puVar5 = puVar6;
    (*pcVar8)(puVar6,1,DVar4.unknown);
    if ((int)puVar5 != 1) {
      FUN_10012bcb8(puVar6);
    }
  }
  else {
    (**(code **)(lVar10 + 0x20))(param_1,puVar6,DVar4.unknown);
    (*pcVar9)(param_1,0,1,DVar4.unknown);
  }
  return;
}



/* Address: 0x10016e3b8 | FUN_10016e3b8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10016e3b8(void)

{
  Locale LVar1;
  undefined *puVar2;
  ID self;
  Locale LVar3;
  NSLocale *pNVar4;
  TimeZone TVar5;
  TimeZone TVar6;
  NSString *pNVar7;
  long extraout_x8;
  long extraout_x8_00;
  NSTimeZone *pNVar8;
  undefined1 *puVar9;
  long lVar10;
  String identifier;
  
  puVar2 = &DAT_100fb2ac0;
  FUN_1000f7830(&DAT_100fb2ac0,&DAT_100c2ffa8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + -extraout_x8;
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  lVar10 = *(long *)(LVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar2 = &_OBJC_CLASS___NSDateFormatter;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar2);
  identifier.bridgeObject = (void *)0xeb00000000584953;
  identifier.str = (char *)0x4f505f53555f6e65;
  LVar3 = Foundation::Locale::init(identifier);
  pNVar4 = Foundation::Locale::_bridgeToObjectiveC(LVar3);
  (**(code **)(lVar10 + 8))
            ((long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),LVar1.unknown);
  objc_stub::setLocale_(self,pNVar4);
  Foundation::TimeZone::_init();
  TVar5 = Foundation::TimeZone::typeMetadataAccessor();
  lVar10 = *(long *)(TVar5.unknown + -8);
  TVar6.unknown = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,TVar5.unknown);
  pNVar8 = (NSTimeZone *)0x0;
  if ((int)TVar6.unknown != 1) {
    pNVar8 = Foundation::TimeZone::_bridgeToObjectiveC(TVar6);
    (**(code **)(lVar10 + 8))(puVar9,TVar5.unknown);
  }
  objc_stub::setTimeZone_(self,pNVar8);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setDateFormat_(self,pNVar7);
  return self;
}


