/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001f0f24 | FUN_1001f0f24 */

void FUN_1001f0f24(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100fb5c00.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fb5c08;
    FUN_100005c24(&DAT_100fb5c08,&DAT_100c33bb0);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fb5c00 = PVar2;
    }
  }
  return;
}



/* Address: 0x1001f0f84 | FUN_1001f0f84 */

void FUN_1001f0f84(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1001f0f98 | FUN_1001f0f98 */

int FUN_1001f0f98(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 4) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Address: 0x1001f0fe8 | FUN_1001f0fe8 */

void FUN_1001f0fe8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[2] = (ulong)-param_2 << 1;
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
  }
  return;
}



/* Address: 0x1001f1044 | FUN_1001f1044 */

uint FUN_1001f1044(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 2;
  if (-1 < (char)*(byte *)(param_1 + 10)) {
    uVar1 = (uint)(*(byte *)(param_1 + 10) >> 6);
  }
  return uVar1;
}



/* Address: 0x1001f1064 | FUN_1001f1064 */

void FUN_1001f1064(long param_1)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0x3f;
  return;
}



/* Address: 0x1001f1074 | FUN_1001f1074 */

void FUN_1001f1074(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2);
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 5) = 0x80;
    return;
  }
  param_1[2] = param_1[2] & 1;
  *(byte *)(param_1 + 5) = (byte)param_1[5] & 1 | (byte)(param_2 << 6);
  return;
}



/* Address: 0x1001f10b8 | FUN_1001f10b8 */

undefined1  [16] FUN_1001f10b8(void)

{
  return ZEXT816(0x100ebf410);
}



/* Address: 0x1001f10c8 | thunk_FUN_1001f10cc */

void thunk_FUN_1001f10cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5ca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c33bd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33bd8,&DAT_100ebf410);
  DAT_100fb5ca8 = pTVar1;
  return;
}



/* Address: 0x1001f10cc | FUN_1001f10cc */

void FUN_1001f10cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5ca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c33bd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33bd8,&DAT_100ebf410);
  DAT_100fb5ca8 = pTVar1;
  return;
}



/* Address: 0x1001f110c | thunk_FUN_1001f1110 */

void thunk_FUN_1001f1110(void)

{
  FUN_1001f1110();
  return;
}



/* Address: 0x1001f1110 | FUN_1001f1110 */

void FUN_1001f1110(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5cb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c33c88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33c88,&DAT_100ebf568);
  DAT_100fb5cb0 = pTVar1;
  return;
}



/* Address: 0x1001f1150 | FUN_1001f1150 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001f1150(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  Published *unaff_x20;
  ulong uVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  byte local_a8;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 auStack_58 [24];
  
  puVar3 = &local_d0;
  uVar4 = param_1[2];
  bVar1 = *(byte *)(param_1 + 5);
  if (uVar4 >> 1 != 0xffffffff || 1 < bVar1) {
    uStack_c8 = param_1[1];
    local_d0 = *param_1;
    uStack_b0 = param_1[4];
    local_b8 = param_1[3];
    _swift_getKeyPath(&DAT_100c33d88);
    _swift_getKeyPath(&DAT_100c33db0);
    local_c0 = uVar4;
    local_a8 = bVar1;
    _swift_retain();
    Combine::Published::_set_subscript(unaff_x20,&local_d0);
  }
  lVar2 = _TtC13PasteShortcut25ShortcutRecorderViewModel::eventMonitor;
  _swift_beginAccess((long)&unaff_x20->unknown +
                     _TtC13PasteShortcut25ShortcutRecorderViewModel::eventMonitor,auStack_58,0,0);
  FUN_100011090((long)&unaff_x20->unknown + lVar2,&local_80,&DAT_100fb5cc0,&DAT_100c33d28);
  if (local_68 == 0) {
    FUN_100005808(&local_80,&DAT_100fb5cc0,&DAT_100c33d28);
  }
  else {
    FUN_100011080(&local_80,&local_d0);
    FUN_100004640(&local_d0,local_b8);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,puVar3);
    _swift_unknownObjectRelease(puVar3);
    FUN_100004594(&local_d0);
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    _swift_beginAccess((long)&unaff_x20->unknown + lVar2,auStack_98,0x21,0);
    FUN_1001f1d88(&local_80,(long)&unaff_x20->unknown + lVar2);
    _swift_endAccess(auStack_98);
  }
  return;
}



/* Address: 0x1001f12cc | FUN_1001f12cc */

String FUN_1001f12cc(void)

{
  LocalizedStringResource LVar1;
  long extraout_x8;
  String SVar2;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  FUN_1001e4554(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar2 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  return SVar2;
}



/* Address: 0x1001f132c | FUN_1001f132c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ID FUN_1001f132c(ID param_1,long param_2)

{
  undefined1 auVar1 [16];
  uint7 uVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  ID IVar10;
  ID IVar11;
  undefined *puVar12;
  undefined *puVar13;
  Published **ppPVar14;
  void *pvVar16;
  undefined8 uVar17;
  ulong uVar18;
  Published *pPVar19;
  Published *pPVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  Published *pPVar24;
  byte bVar25;
  ulong uVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  Published *local_138;
  long local_130;
  undefined1 auStack_120 [128];
  Published *local_a0;
  ulong uStack_98;
  ulong local_90;
  Published *local_88;
  ulong local_80;
  byte local_78;
  void *pvVar15;
  
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  pMVar7 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  pMVar6 = pMVar7;
  FUN_1001f1bcc();
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteShortcut/ShortcutRecorderViewModel.swift",0x2d,1,0x7d,UVar8.unknown,pMVar6);
  }
  pMVar6 = (MainActor *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar6 == (MainActor *)0x0) goto LAB_1001f1958;
  IVar10 = objc_stub::modifierFlags(param_1);
  uVar18 = IVar10 & 0xff5f0000;
  IVar11 = objc_stub::keyCode(param_1);
  pPVar19 = (Published *)(IVar11 & 0xffffffff);
  puVar12 = &DAT_100fb5cd8;
  FUN_1000037f0(&DAT_100fb5cd8,&DAT_100c33dd0);
  puVar13 = puVar12;
  _swift_initStackObject();
  *(undefined8 *)(puVar13 + 0x18) = 4;
  *(undefined8 *)(puVar13 + 0x10) = 2;
  *(undefined8 *)(puVar13 + 0x28) = 0;
  *(undefined8 *)(puVar13 + 0x20) = 0x33;
  *(undefined8 *)(puVar13 + 0x38) = 0;
  *(undefined8 *)(puVar13 + 0x30) = 0x75;
  _swift_release();
  iVar21 = (int)IVar11;
  if ((iVar21 == 0x33) || (iVar21 == 0x75)) {
    if (uVar18 != 0) goto LAB_1001f1444;
    (**(code **)(pMVar6 + _TtC13PasteShortcut25ShortcutRecorderViewModel::onDetect))(0,0,1);
    local_80 = 0;
    uStack_98 = 0;
    local_a0 = (Published *)0x0;
    local_88 = (Published *)0x0;
    local_90 = 0;
    local_78 = 0x80;
    FUN_1001f1150(&local_a0);
  }
  else {
    if ((iVar21 != 0x35) || (uVar18 != 0)) {
LAB_1001f1444:
      _swift_initStackObject(puVar12,auStack_120);
      *(undefined8 *)(puVar12 + 0x18) = 4;
      *(undefined8 *)(puVar12 + 0x10) = 2;
      if (DAT_100fb5078 != -1) {
        _swift_once(&DAT_100fb5078,FUN_1001e9654);
      }
      pvVar3 = DAT_100fb5080;
      SVar27.bridgeObject = (void *)0xe100000000000000;
      SVar27.str = (char *)0x77;
      SVar27 = Swift::String::lowercased(SVar27);
      pvVar15 = SVar27.bridgeObject;
      if (*(long *)((long)pvVar3 + 0x10) == 0) goto LAB_1001f19ac;
      _swift_bridgeObjectRetain(pvVar3);
      FUN_1001e9100();
      if (((ulong)SVar27.bridgeObject & 1) != 0) {
        pPVar20 = *(Published **)(*(long *)((long)pvVar3 + 0x38) + (long)SVar27.str * 8);
        _swift_bridgeObjectRelease(pvVar15);
        _swift_bridgeObjectRelease(pvVar3);
        *(Published **)(puVar12 + 0x20) = pPVar20;
        *(undefined8 *)(puVar12 + 0x28) = 0x100000;
        SVar28.bridgeObject = (void *)0xe100000000000000;
        SVar28.str = (char *)0x71;
        SVar27 = Swift::String::lowercased(SVar28);
        pvVar15 = SVar27.bridgeObject;
        if (*(long *)((long)pvVar3 + 0x10) == 0) goto LAB_1001f19ac;
        _swift_bridgeObjectRetain(pvVar3);
        FUN_1001e9100();
        pvVar16 = SVar27.bridgeObject;
        if (((ulong)pvVar16 & 1) != 0) {
          pPVar24 = *(Published **)(*(long *)((long)pvVar3 + 0x38) + (long)SVar27.str * 8);
          _swift_bridgeObjectRelease(pvVar15);
          _swift_bridgeObjectRelease(pvVar3);
          *(Published **)(puVar12 + 0x30) = pPVar24;
          *(undefined8 *)(puVar12 + 0x38) = 0x100000;
          _swift_release(puVar12);
          if ((pPVar24 == pPVar19 || pPVar20 == pPVar19) && (uVar18 == 0x100000)) {
            local_80 = 0;
            uStack_98 = 0;
            local_a0 = (Published *)0x0;
            local_88 = (Published *)0x0;
            local_90 = 0;
            local_78 = 0x80;
            FUN_1001f1150(&local_a0);
LAB_1001f1560:
            _swift_release(pMVar6);
            _swift_release(pMVar7);
            return param_1;
          }
          pPVar20 = pPVar19;
          FUN_1001e7e50();
          _swift_bridgeObjectRelease(pvVar16);
          lVar4 = _TtC13PasteShortcut25ShortcutRecorderViewModel::shortcutValidator;
          uVar22 = (ulong)pPVar20 & 0xffffffffffff;
          if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
            uVar22 = (ulong)pvVar16 >> 0x38 & 0xf;
          }
          if (uVar22 == 0) {
            puVar12 = &DAT_100c33d88;
            _swift_getKeyPath(&DAT_100c33d88);
            puVar13 = &DAT_100c33db0;
            _swift_getKeyPath(&DAT_100c33db0);
            Combine::Published::_get_subscript(&local_a0,pMVar6,puVar12,puVar13);
            _swift_release(puVar12);
            _swift_release(puVar13);
            if (local_78 >> 6 == 0) {
              uVar22 = 0;
            }
            else if (local_78 >> 6 == 1) {
              uVar22 = local_90 & 0xff;
            }
            else {
              uVar22 = 1;
              local_a0 = (Published *)0x0;
              uStack_98 = 0;
            }
            pPVar20 = (Published *)&DAT_100c33d88;
            _swift_getKeyPath(&DAT_100c33d88);
            puVar12 = &DAT_100c33db0;
            _swift_getKeyPath(&DAT_100c33db0);
            local_78 = 0x40;
            local_90 = uVar22;
            local_88 = pPVar19;
            local_80 = uVar18;
LAB_1001f1944:
            ppPVar14 = &local_a0;
            pPVar19 = pPVar20;
LAB_1001f1950:
            Combine::Published::_set_subscript(pPVar19,ppPVar14,pMVar6,pPVar20,puVar12);
            goto LAB_1001f1958;
          }
          uVar17 = *(undefined8 *)
                    (pMVar6 + _TtC13PasteShortcut25ShortcutRecorderViewModel::shortcutValidator);
          _swift_retain(uVar17);
          FUN_1000da768(&local_a0);
          _swift_release(uVar17);
          _swift_release(local_a0);
          uVar26 = IVar11 & 0xffff;
          uVar22 = (CONCAT44(iVar21,iVar21) & 0xffff0000ffff) >> 0x20;
          uVar2 = CONCAT16(~-(uRam0000000100fb57a0 == uVar22),
                           (uint6)CONCAT14(~-(_DAT_100fb5798 == uVar26),
                                           (uint)CONCAT12(~-(uRam0000000100fb5790 == uVar22),
                                                          (ushort)(byte)~-(_DAT_100fb5788 == uVar26)
                                                         ))) &
                  CONCAT16(~-(uRam0000000100fb5820 == uVar22),
                           (uint6)CONCAT14(~-(_DAT_100fb5818 == uVar26),
                                           (uint)CONCAT12(~-(uRam0000000100fb5810 == uVar22),
                                                          (ushort)(byte)~-(_DAT_100fb5808 == uVar26)
                                                         )));
          auVar1[1] = -((char)((char)(uVar2 >> 0x10) << 7) < '\0');
          auVar1[0] = -((char)((char)uVar2 << 7) < '\0');
          auVar1[2] = -((char)((char)(uVar2 >> 0x20) << 7) < '\0');
          auVar1[3] = -((char)((char)(uVar2 >> 0x30) << 7) < '\0');
          auVar1[4] = -((char)(~-(_DAT_100fb57a8 == uVar26) << 7) < '\0');
          auVar1[5] = -((char)(~-(uRam0000000100fb57b0 == uVar22) << 7) < '\0');
          auVar1[6] = -((char)(~-(_DAT_100fb57b8 == uVar26) << 7) < '\0');
          auVar1[7] = -((char)(~-(uRam0000000100fb57c0 == uVar22) << 7) < '\0');
          auVar1[8] = -((char)(~-(_DAT_100fb57c8 == uVar26) << 7) < '\0');
          auVar1[9] = -((char)(~-(uRam0000000100fb57d0 == uVar22) << 7) < '\0');
          auVar1[10] = -((char)(~-(_DAT_100fb57d8 == uVar26) << 7) < '\0');
          auVar1[0xb] = -((char)(~-(uRam0000000100fb57e0 == uVar22) << 7) < '\0');
          auVar1[0xc] = -((char)(~-(_DAT_100fb57e8 == uVar26) << 7) < '\0');
          auVar1[0xd] = -((char)(~-(uRam0000000100fb57f0 == uVar22) << 7) < '\0');
          auVar1[0xe] = -((char)(~-(_DAT_100fb57f8 == uVar26) << 7) < '\0');
          auVar1[0xf] = -((char)(~-(uRam0000000100fb5800 == uVar22) << 7) < '\0');
          bVar25 = NEON_uminv(auVar1,1);
          uVar23 = (uint)IVar10;
          if ((((bVar25 & 1) != 0) && ((IVar10 & 0x140000) == 0)) && ((uVar23 >> 0x13 & 1) == 0)) {
            FUN_1001f1e20(0);
            (extension_AppKit)::__C::NSSound::beep();
            goto LAB_1001f1560;
          }
          uVar17 = *(undefined8 *)(pMVar6 + lVar4);
          _swift_retain(uVar17);
          FUN_1000da768(&local_a0);
          _swift_release(uVar17);
          pPVar24 = pPVar19;
          uVar22 = uVar18;
          FUN_1001ebce4();
          _swift_release(local_a0);
          if (((uint)uVar22 & 0xff) == 1) {
            FUN_1001eff84();
            pPVar20 = (Published *)&DAT_100c33d40;
            _swift_getKeyPath(&DAT_100c33d40);
            puVar12 = &DAT_100c33d68;
            _swift_getKeyPath(&DAT_100c33d68);
            local_a0 = pPVar24;
            goto LAB_1001f1944;
          }
          pcVar5 = *(code **)(pMVar6 + _TtC13PasteShortcut25ShortcutRecorderViewModel::onDetect);
          uVar17 = *(undefined8 *)
                    (pMVar6 + _TtC13PasteShortcut25ShortcutRecorderViewModel::onDetect + 8);
          _swift_retain(uVar17);
          (*pcVar5)(pPVar19,uVar18,0);
          _swift_release(uVar17);
          local_88 = (Published *)0x0;
          local_80 = 0;
          local_90 = 0;
          local_78 = 0;
          local_a0 = pPVar19;
          uStack_98 = uVar18;
          FUN_1001f1150(&local_a0);
          if ((((uVar23 >> 0x13 & 1) != 0) && ((uVar23 >> 0x14 & 1) == 0)) &&
             ((uVar23 >> 0x12 & 1) == 0)) {
            IVar10 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
            NSProcessInfo::operatingSystemVersion(IVar10,&local_138);
            if (local_138 == (Published *)0xf) {
              IVar10 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
              NSProcessInfo::operatingSystemVersion(IVar10,&local_138);
              uVar17 = 0;
              if (local_130 < 2) {
                FUN_1001f1110(0);
                pPVar19 = (Published *)&DAT_100ebf568;
                _swift_allocError(&DAT_100ebf568,uVar17,0,0);
                pPVar20 = (Published *)&DAT_100c33d40;
                _swift_getKeyPath(&DAT_100c33d40);
                puVar12 = &DAT_100c33d68;
                _swift_getKeyPath(&DAT_100c33d68);
                ppPVar14 = &local_138;
                local_138 = pPVar19;
                goto LAB_1001f1950;
              }
            }
          }
          goto LAB_1001f16fc;
        }
      }
      _swift_bridgeObjectRelease(pvVar15);
      pvVar15 = pvVar3;
LAB_1001f19ac:
      _swift_bridgeObjectRelease(pvVar15);
      SVar29.bridgeObject = (void *)0x2;
      SVar29.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar29,(StaticString)0xd000000000000014,
                 0x8000000100d9dc10,0xd9dc00);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f1a00);
      (*pcVar5)();
    }
    FUN_1001eff84();
  }
LAB_1001f16fc:
  _swift_release(pMVar7);
  pMVar7 = pMVar6;
LAB_1001f1958:
  _swift_release(pMVar7);
  return 0;
}



/* Address: 0x1001f1a00 | FUN_1001f1a00 */

void FUN_1001f1a00(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar1;
  FUN_1001f1bcc();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001f1a6c,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1001f1a6c | FUN_1001f1a6c */

void FUN_1001f1a6c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  lVar3 = *(long *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  if (lVar3 != 0) {
    (**(code **)(unaff_x22 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001001f1aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f1ab4);
  (*pcVar2)();
}



/* Address: 0x1001f1ab4 | FUN_1001f1ab4 */

bool FUN_1001f1ab4(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  
  bVar4 = *(byte *)(param_1 + 5) >> 6;
  if (bVar4 == 0) {
    if (*(byte *)(param_2 + 5) < 0x40) {
      return *param_1 == *param_2 && param_1[1] == param_2[1];
    }
  }
  else if (bVar4 == 1) {
    if ((*(byte *)(param_2 + 5) & 0xc0) == 0x40) {
      if ((char)param_1[2] == '\x01') {
        if ((char)param_2[2] != '\x01') {
          return false;
        }
      }
      else {
        if ((char)param_2[2] == '\x01') {
          return false;
        }
        if (*param_1 != *param_2) {
          return false;
        }
        if (param_1[1] != param_2[1]) {
          return false;
        }
      }
      bVar4 = *(byte *)(param_2 + 5) & 0x3f;
      if ((*(byte *)(param_1 + 5) & 0x3f) == 1) {
        if (bVar4 == 1) {
          return true;
        }
      }
      else if (((bVar4 != 1) && (param_1[3] == param_2[3])) && (param_1[4] == param_2[4])) {
        return true;
      }
    }
  }
  else if ((char)param_2[5] < -0x40) {
    lVar3 = param_2[4];
    lVar2 = param_2[3];
    bVar4 = *(byte *)(param_2 + 1) | (byte)lVar2;
    bVar5 = *(byte *)((long)param_2 + 9) | (byte)((ulong)lVar2 >> 8);
    bVar6 = *(byte *)((long)param_2 + 10) | (byte)((ulong)lVar2 >> 0x10);
    bVar7 = *(byte *)((long)param_2 + 0xb) | (byte)((ulong)lVar2 >> 0x18);
    bVar8 = *(byte *)((long)param_2 + 0xc) | (byte)((ulong)lVar2 >> 0x20);
    bVar9 = *(byte *)((long)param_2 + 0xd) | (byte)((ulong)lVar2 >> 0x28);
    bVar10 = *(byte *)((long)param_2 + 0xe) | (byte)((ulong)lVar2 >> 0x30);
    bVar11 = *(byte *)((long)param_2 + 0xf) | (byte)((ulong)lVar2 >> 0x38);
    bVar12 = *(byte *)(param_2 + 2) | (byte)lVar3;
    bVar13 = *(byte *)((long)param_2 + 0x11) | (byte)((ulong)lVar3 >> 8);
    bVar14 = *(byte *)((long)param_2 + 0x12) | (byte)((ulong)lVar3 >> 0x10);
    bVar15 = *(byte *)((long)param_2 + 0x13) | (byte)((ulong)lVar3 >> 0x18);
    bVar16 = *(byte *)((long)param_2 + 0x14) | (byte)((ulong)lVar3 >> 0x20);
    bVar17 = *(byte *)((long)param_2 + 0x15) | (byte)((ulong)lVar3 >> 0x28);
    bVar18 = *(byte *)((long)param_2 + 0x16) | (byte)((ulong)lVar3 >> 0x30);
    bVar19 = *(byte *)((long)param_2 + 0x17) | (byte)((ulong)lVar3 >> 0x38);
    auVar20[1] = bVar5;
    auVar20[0] = bVar4;
    auVar20[2] = bVar6;
    auVar20[3] = bVar7;
    auVar20[4] = bVar8;
    auVar20[5] = bVar9;
    auVar20[6] = bVar10;
    auVar20[7] = bVar11;
    auVar20[8] = bVar12;
    auVar20[9] = bVar13;
    auVar20[10] = bVar14;
    auVar20[0xb] = bVar15;
    auVar20[0xc] = bVar16;
    auVar20[0xd] = bVar17;
    auVar20[0xe] = bVar18;
    auVar20[0xf] = bVar19;
    auVar1[1] = bVar5;
    auVar1[0] = bVar4;
    auVar1[2] = bVar6;
    auVar1[3] = bVar7;
    auVar1[4] = bVar8;
    auVar1[5] = bVar9;
    auVar1[6] = bVar10;
    auVar1[7] = bVar11;
    auVar1[8] = bVar12;
    auVar1[9] = bVar13;
    auVar1[10] = bVar14;
    auVar1[0xb] = bVar15;
    auVar1[0xc] = bVar16;
    auVar1[0xd] = bVar17;
    auVar1[0xe] = bVar18;
    auVar1[0xf] = bVar19;
    auVar20 = NEON_ext(auVar20,auVar1,8,1);
    if ((char)param_2[5] == -0x80 &&
        (CONCAT17(bVar11 | auVar20[7],
                  CONCAT16(bVar10 | auVar20[6],
                           CONCAT15(bVar9 | auVar20[5],
                                    CONCAT14(bVar8 | auVar20[4],
                                             CONCAT13(bVar7 | auVar20[3],
                                                      CONCAT12(bVar6 | auVar20[2],
                                                               CONCAT11(bVar5 | auVar20[1],
                                                                        bVar4 | auVar20[0]))))))) ==
         0 && *param_2 == 0)) {
      return true;
    }
  }
  return false;
}



/* Address: 0x1001f1bcc | FUN_1001f1bcc */

void FUN_1001f1bcc(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100fb59a0 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100fb59a0 = puVar2;
  return;
}



/* Address: 0x1001f1c10 | FUN_1001f1c10 */

void FUN_1001f1c10(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f1c34 | FUN_1001f1c34 */

void FUN_1001f1c34(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f1c60 | FUN_1001f1c60 */

void FUN_1001f1c60(undefined8 param_1)

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
  plVar5 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_1001f1a00(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1001f1ce4 | FUN_1001f1ce4 */

void FUN_1001f1ce4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f1d08 | FUN_1001f1d08 */

void FUN_1001f1d08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1001f1d78 | thunk_FUN_1001eec68 */

void thunk_FUN_1001eec68(void)

{
  FUN_1001eec68();
  return;
}



/* Address: 0x1001f1d7c | thunk_FUN_1001eecd4 */

void thunk_FUN_1001eecd4(void)

{
  FUN_1001eecd4();
  return;
}



/* Address: 0x1001f1d80 | thunk_FUN_1001eeaac */

void thunk_FUN_1001eeaac(void)

{
  FUN_1001eeaac();
  return;
}



/* Address: 0x1001f1d84 | thunk_FUN_1001eeb18 */

void thunk_FUN_1001eeb18(void)

{
  FUN_1001eeb18();
  return;
}



/* Address: 0x1001f1d88 | FUN_1001f1d88 */

undefined8 FUN_1001f1d88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb5cc0;
  FUN_1000037f0(&DAT_100fb5cc0,&DAT_100c33d28);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001f1dd8 | FUN_1001f1dd8 */

void FUN_1001f1dd8(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f1dfc | FUN_1001f1dfc */

void FUN_1001f1dfc(void)

{
  FUN_1001f132c();
  return;
}



/* Address: 0x1001f1e04 | FUN_1001f1e04 */

void FUN_1001f1e04(long param_1,long param_2)

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



/* Address: 0x1001f1e18 | FUN_1001f1e18 */

void FUN_1001f1e18(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001f1e20 | FUN_1001f1e20 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001f1e20(void)

{
  undefined *puVar1;
  
  if (DAT_100fb5ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSSound;
  _swift_getObjCClassMetadata();
  DAT_100fb5ce0 = puVar1;
  return;
}



/* Address: 0x1001f1e64 | FUN_1001f1e64 */

void FUN_1001f1e64(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1001ec904(0);
  FUN_1000d80e0(param_1,"PasteShortcut/DI+PasteShortcut.swift",0x24,2,0xc,0x13,FUN_1001e75e4,0,uVar1
               );
  return;
}



/* Address: 0x1001f1eb4 | FUN_1001f1eb4 */

void FUN_1001f1eb4(void)

{
  return;
}



/* Address: 0x1001f1eb8 | FUN_1001f1eb8 */

undefined1  [16] FUN_1001f1eb8(void)

{
  return ZEXT816(0x100ebf568);
}



/* Address: 0x1001f1ec8 | thunk_FUN_1001f1ecc */

void thunk_FUN_1001f1ecc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5cf0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c33e58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33e58,&DAT_100ebf568);
  DAT_100fb5cf0 = pTVar1;
  return;
}



/* Address: 0x1001f1ecc | FUN_1001f1ecc */

void FUN_1001f1ecc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5cf0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c33e58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33e58,&DAT_100ebf568);
  DAT_100fb5cf0 = pTVar1;
  return;
}



/* Address: 0x1001f1f0c | FUN_1001f1f0c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001f1f98 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001f1f0c(undefined8 param_1,undefined8 param_2)

{
  Display DVar1;
  Display DVar2;
  long extraout_x8;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  DVar1 = (extension_AppKit)::__C::NSView::Invalidations::Display::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar1.unknown + -8) + 0x40));
  local_48 = param_2;
  DVar2 = (extension_AppKit)::__C::NSView::Invalidations::Display::init();
  FUN_1001f1fb4();
  Invalidating::_init(param_1,DVar2.unknown,auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528,DVar1.unknown,
                      DVar2.unknown,
                      PTR___protocol_witness_table_for__extension_in_AppKit____C_NSView_Invalidations_Display___AppKit_NSViewInvalidating_in_AppKit_100ea8ef8
                     );
  return;
}



/* Address: 0x1001f1fb4 | FUN_1001f1fb4 */

void FUN_1001f1fb4(void)

{
  undefined *puVar1;
  
  if (DAT_100fb5d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_CoreGraphics__CoreGraphics__CGFloat_>Swift__Equatable_100eae530;
  _swift_getWitnessTable
            (PTR_CoreGraphics__CoreGraphics__CGFloat_>Swift__Equatable_100eae530,
             PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528);
  DAT_100fb5d00 = puVar1;
  return;
}



/* Address: 0x1001f1ff4 | FUN_1001f1ff4 */

undefined8 FUN_1001f1ff4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c34040;
  _swift_getKeyPath(&DAT_100c34040);
  puVar2 = &DAT_100c34068;
  _swift_getKeyPath(&DAT_100c34068);
  Invalidating::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x1001f2064 | FUN_1001f2064 */

void FUN_1001f2064(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c34040;
  _swift_getKeyPath(&DAT_100c34040);
  puVar2 = &DAT_100c34068;
  _swift_getKeyPath(&DAT_100c34068);
  Invalidating::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1001f20cc | FUN_1001f20cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001f20cc(undefined8 *param_1,undefined8 *param_2)

{
  Invalidating *pIVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  
  uVar4 = *param_1;
  uVar3 = *param_2;
  pIVar1 = (Invalidating *)&DAT_100c34040;
  _swift_getKeyPath(&DAT_100c34040);
  puVar2 = &DAT_100c34068;
  _swift_getKeyPath(&DAT_100c34068);
  local_48 = uVar4;
  Invalidating::_set_subscript(pIVar1,&local_48,uVar3,pIVar1,puVar2);
  return;
}



/* Address: 0x1001f2144 | FUN_1001f2144 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001f2144(undefined8 param_1)

{
  Invalidating *unaff_x20;
  undefined8 local_48;
  
  _swift_getKeyPath(&DAT_100c34040);
  _swift_getKeyPath(&DAT_100c34068);
  local_48 = param_1;
  Invalidating::_set_subscript(unaff_x20,&local_48);
  return;
}



/* Address: 0x1001f21b8 | FUN_1001f21b8 */

code * FUN_1001f21b8(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar1 = &DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x60ac);
  }
  *param_1 = puVar1;
  puVar2 = &DAT_100c34040;
  _swift_getKeyPath();
  *(undefined **)(puVar1 + 0x20) = puVar2;
  puVar2 = &DAT_100c34068;
  _swift_getKeyPath();
  *(undefined **)(puVar1 + 0x28) = puVar2;
  puVar3 = puVar1;
  Invalidating::_modify_subscript();
  *(undefined1 **)(puVar1 + 0x30) = puVar3;
  return thunk_FUN_1000f205c;
}



/* Address: 0x1001f2248 | thunk_FUN_1000f205c */

void thunk_FUN_1000f205c(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = (void *)*param_1;
  uVar1 = *(undefined8 *)((long)pvVar2 + 0x28);
  uVar3 = *(undefined8 *)((long)pvVar2 + 0x20);
  (**(code **)((long)pvVar2 + 0x30))(pvVar2,0);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _free(pvVar2);
  return;
}



/* Address: 0x1001f224c | FUN_1001f224c */

undefined8 FUN_1001f224c(void)

{
  return 0x3fe999999999999a;
}



/* Address: 0x1001f2260 | FUN_1001f2260 */

undefined8 FUN_1001f2260(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c34088;
  _swift_getKeyPath(&DAT_100c34088);
  puVar2 = &DAT_100c340b0;
  _swift_getKeyPath(&DAT_100c340b0);
  Invalidating::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x1001f22d0 | FUN_1001f22d0 */

void FUN_1001f22d0(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c34088;
  _swift_getKeyPath(&DAT_100c34088);
  puVar2 = &DAT_100c340b0;
  _swift_getKeyPath(&DAT_100c340b0);
  Invalidating::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1001f2338 | FUN_1001f2338 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001f2338(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Invalidating *pIVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pIVar4 = (Invalidating *)*param_2;
  puVar1 = &DAT_100c34088;
  _swift_getKeyPath(&DAT_100c34088);
  puVar2 = &DAT_100c340b0;
  _swift_getKeyPath(&DAT_100c340b0);
  local_38 = uVar3;
  Invalidating::_set_subscript(pIVar4,&local_38,pIVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1001f23b0 | FUN_1001f23b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001f23b0(undefined8 param_1)

{
  Invalidating *unaff_x20;
  undefined8 local_38;
  
  _swift_getKeyPath(&DAT_100c34088);
  _swift_getKeyPath(&DAT_100c340b0);
  local_38 = param_1;
  Invalidating::_set_subscript(unaff_x20,&local_38);
  return;
}



/* Address: 0x1001f241c | FUN_1001f241c */

code * FUN_1001f241c(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar1 = &DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x7f7b);
  }
  *param_1 = puVar1;
  puVar2 = &DAT_100c34088;
  _swift_getKeyPath();
  *(undefined **)(puVar1 + 0x20) = puVar2;
  puVar2 = &DAT_100c340b0;
  _swift_getKeyPath();
  *(undefined **)(puVar1 + 0x28) = puVar2;
  puVar3 = puVar1;
  Invalidating::_modify_subscript();
  *(undefined1 **)(puVar1 + 0x30) = puVar3;
  return thunk_FUN_1000f205c;
}



/* Address: 0x1001f24ac | FUN_1001f24ac */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001f2544 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001f24ac(undefined8 param_1)

{
  Display DVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  DVar1 = (extension_AppKit)::__C::NSView::Invalidations::Display::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar1.unknown + -8) + 0x40));
  local_38 = 0;
  (extension_AppKit)::__C::NSView::Invalidations::Display::init();
  puVar2 = &DAT_100fb5d18;
  FUN_1000037f0(&DAT_100fb5d18,&DAT_100c340d0);
  puVar3 = puVar2;
  FUN_1001f255c();
  Invalidating::_init(param_1,puVar3,auStack_40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar2,
                      DVar1.unknown,puVar3,
                      PTR___protocol_witness_table_for__extension_in_AppKit____C_NSView_Invalidations_Display___AppKit_NSViewInvalidating_in_AppKit_100ea8ef8
                     );
  return;
}



/* Address: 0x1001f255c | FUN_1001f255c */

void FUN_1001f255c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fb5d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5d18;
  FUN_100005c24(&DAT_100fb5d18,&DAT_100c340d0);
  puVar2 = &DAT_100fb5d28;
  FUN_100003a00(&DAT_100fb5d28,FUN_1001f25e4,
                PTR_ObjectiveC____C__NSObject_>Swift__Equatable_100eae8d8);
  puVar3 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Equatable>_A____Swift_Equatable_in_Swift_>Swift__Equatable_100eae0a8
  ;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Equatable>_A____Swift_Equatable_in_Swift_>Swift__Equatable_100eae0a8
             ,puVar1,&local_28);
  DAT_100fb5d20 = puVar3;
  return;
}



/* Address: 0x1001f25e4 | FUN_1001f25e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001f25e4(void)

{
  undefined *puVar1;
  
  if (DAT_100fb5d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSImage;
  _swift_getObjCClassMetadata();
  DAT_100fb5d30 = puVar1;
  return;
}



/* Address: 0x1001f2628 | FUN_1001f2628 */

void FUN_1001f2628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID unaff_x20;
  
  _objc_allocWithZone();
  objc_stub::initWithFrame_(unaff_x20,param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x1001f2670 | FUN_1001f2670 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001f2778 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001f2670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  Display DVar3;
  undefined *puVar4;
  Display DVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  
  _swift_getObjectType();
  DVar3 = (extension_AppKit)::__C::NSView::Invalidations::Display::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar3.unknown + -8) + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fb5d38;
  FUN_1000037f0(&DAT_100fb5d38,&DAT_100c340d8);
  lVar8 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC7PasteUI24AdaptiveScalingImageView::_scaleToFillRatio;
  DVar5 = (extension_AppKit)::__C::NSView::Invalidations::Display::init();
  FUN_1001f1fb4();
  puVar1 = 
  PTR___protocol_witness_table_for__extension_in_AppKit____C_NSView_Invalidations_Display___AppKit_NSViewInvalidating_in_AppKit_100ea8ef8
  ;
  Invalidating::_init((long)puVar7 - extraout_x8_00,DVar5.unknown,puVar7,
                      PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528,DVar3.unknown,
                      DVar5.unknown,
                      PTR___protocol_witness_table_for__extension_in_AppKit____C_NSView_Invalidations_Display___AppKit_NSViewInvalidating_in_AppKit_100ea8ef8
                     );
  (**(code **)(lVar8 + 0x20))(unaff_x20 + lVar2,(long)puVar7 - extraout_x8_00,puVar4);
  lVar2 = _TtC7PasteUI24AdaptiveScalingImageView::_image;
  (extension_AppKit)::__C::NSView::Invalidations::Display::init();
  puVar4 = &DAT_100fb5d18;
  FUN_1000037f0(&DAT_100fb5d18,&DAT_100c340d0);
  puVar6 = puVar4;
  FUN_1001f255c();
  Invalidating::_init(unaff_x20 + lVar2,puVar6,puVar7,puVar4,DVar3.unknown,puVar6,puVar1);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff68,"initWithFrame:",param_1,param_2,
                      param_3,param_4);
  return;
}



/* Address: 0x1001f282c | _TtC7PasteUI24AdaptiveScalingImageView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC7PasteUI24AdaptiveScalingImageView::initWithFrame_
          (_TtC7PasteUI24AdaptiveScalingImageView *this,ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteUI/AdaptiveScalingImageView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/AdaptiveScalingImageView.swift",0x26,1,0x1f,UVar4.unknown,puVar3);
  }
  FUN_1001f2670();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x1001f2918 | _TtC7PasteUI24AdaptiveScalingImageView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI24AdaptiveScalingImageView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/AdaptiveScalingImageView.swift",0x26,1,0x28,UVar4.unknown,puVar3);
  }
  FUN_1001f3160();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1001f29e0 | thunk_FUN_1001f32fc */

void thunk_FUN_1001f32fc(void)

{
  FUN_1001f32fc();
  return;
}



/* Address: 0x1001f29e4 | _TtC7PasteUI24AdaptiveScalingImageView::drawRect: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC7PasteUI24AdaptiveScalingImageView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/AdaptiveScalingImageView.swift",0x26,1,0x2c,UVar4.unknown,puVar3);
  }
  FUN_1001f32fc(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1001f2aa4 | _TtC7PasteUI24AdaptiveScalingImageView::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI24AdaptiveScalingImageView::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = _scaleToFillRatio;
  puVar2 = &DAT_100fb5d38;
  FUN_1000037f0(&DAT_100fb5d38,&DAT_100c340d8);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(param_1 + lVar1,puVar2);
  lVar1 = _image;
  puVar2 = &DAT_100fb5e98;
  FUN_1000037f0(&DAT_100fb5e98,&DAT_100c34828);
                    /* WARNING: Could not recover jumptable at 0x0001001f2b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 8))(param_1 + lVar1,puVar2);
  return;
}



/* Address: 0x1001f2b1c | FUN_1001f2b1c */

void FUN_1001f2b1c(void)

{
  FUN_1001f350c(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}


