/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000b9d90 | FUN_1000b9d90 */

void FUN_1000b9d90(void)

{
  FUN_1000b7080(0x92,FUN_1001c0788);
  return;
}



/* Address: 0x1000b9da0 | FUN_1000b9da0 */

void FUN_1000b9da0(MainActor *param_1)

{
  MainActor *pMVar1;
  code *pcVar2;
  long lVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  State SVar9;
  TaskPriority TVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long extraout_x8;
  UnsafeBufferPointer<__int8> UVar14;
  undefined **ppuVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  undefined *puVar23;
  long local_90;
  _StringObject local_88;
  ulong uStack_80;
  undefined *local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  lVar3 = 0;
  FUN_1000b292c();
  local_90 = *(long *)(lVar3 + -8);
  lVar22 = *(long *)(local_90 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = (long)&local_90 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  puVar23 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar23 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar23,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar12 = puVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x96,UVar7.unknown,puVar12);
  }
  pMVar1 = param_1 + *(int *)(lVar3 + 0x20);
  uStack_70 = *(ulong *)(pMVar1 + 8);
  local_78 = *(undefined **)pMVar1;
  local_68 = *(undefined8 *)(pMVar1 + 0x10);
  SVar9.unknown = &DAT_100fabc18;
  FUN_1000037f0(&DAT_100fabc18,&DAT_100c29e48);
  SwiftUI::State::get_wrappedValue(SVar9);
  uVar13 = (ulong)local_88.unknown & 0xffffffffffff;
  uVar17 = uStack_80 >> 0x38 & 0xf;
  uVar16 = uVar13;
  if ((uStack_80 & 0x2000000000000000) != 0) {
    uVar16 = uVar17;
  }
  if (uVar16 == 0) {
    _swift_release(pMVar5);
    _swift_bridgeObjectRelease(uStack_80);
    return;
  }
  if ((uStack_80 >> 0x3c & 1) != 0) {
    uVar16 = uStack_80;
    FUN_1000c42a0(local_88.unknown,uStack_80,10);
    uVar21 = (uint)uVar16;
    puVar23 = local_88.unknown;
    goto LAB_1000ba14c;
  }
  if ((uStack_80 >> 0x3d & 1) == 0) {
    if (((ulong)local_88.unknown >> 0x3c & 1) == 0) {
      uVar13 = uStack_80;
      UVar14 = Swift::_StringObject::get_sharedUTF8(local_88);
    }
    else {
      UVar14.unknown = (undefined *)((uStack_80 & 0xfffffffffffffff) + 0x20);
    }
    if (*UVar14.unknown == 0x2b) {
      if ((long)uVar13 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ba2b4);
        (*pcVar2)();
      }
      lVar3 = uVar13 - 1;
      if (lVar3 != 0) {
        puVar23 = (undefined *)0x0;
        do {
          UVar14.unknown = UVar14.unknown + 1;
          if (((9 < (byte)*UVar14.unknown - 0x30) ||
              (lVar19 = (long)puVar23 * 10,
              SUB168(SEXT816((long)puVar23) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
             (uVar16 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
             puVar23 = (undefined *)(lVar19 + uVar16), SCARRY8(lVar19,uVar16))) goto LAB_1000ba144;
          uVar21 = 0;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        goto LAB_1000ba14c;
      }
    }
    else if (*UVar14.unknown == 0x2d) {
      if ((long)uVar13 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ba2ac);
        (*pcVar2)();
      }
      lVar3 = uVar13 - 1;
      if (lVar3 != 0) {
        puVar23 = (undefined *)0x0;
        do {
          UVar14.unknown = UVar14.unknown + 1;
          if (((9 < (byte)*UVar14.unknown - 0x30) ||
              (lVar19 = (long)puVar23 * 10,
              SUB168(SEXT816((long)puVar23) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
             (uVar16 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
             puVar23 = (undefined *)(lVar19 - uVar16), SBORROW8(lVar19,uVar16))) goto LAB_1000ba144;
          uVar21 = 0;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        goto LAB_1000ba14c;
      }
    }
    else if (uVar13 != 0) {
      puVar23 = (undefined *)0x0;
      if (UVar14.unknown == (byte *)0x0) {
        uVar21 = 0;
      }
      else {
        do {
          if (((9 < (byte)*UVar14.unknown - 0x30) ||
              (lVar3 = (long)puVar23 * 10,
              SUB168(SEXT816((long)puVar23) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
             (uVar16 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
             puVar23 = (undefined *)(lVar3 + uVar16), SCARRY8(lVar3,uVar16))) goto LAB_1000ba144;
          uVar21 = 0;
          uVar13 = uVar13 - 1;
          UVar14.unknown = UVar14.unknown + 1;
        } while (uVar13 != 0);
      }
      goto LAB_1000ba14c;
    }
  }
  else {
    local_78 = local_88.unknown;
    uStack_70 = uStack_80 & 0xffffffffffffff;
    uVar21 = (uint)local_88.unknown & 0xff;
    if (uVar21 == 0x2b) {
      if (uVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ba2b8);
        (*pcVar2)();
      }
      lVar3 = uVar17 - 1;
      if (lVar3 != 0) {
        puVar23 = (undefined *)0x0;
        pbVar18 = (byte *)((ulong)&local_78 | 1);
        do {
          if (((9 < *pbVar18 - 0x30) ||
              (lVar19 = (long)puVar23 * 10,
              SUB168(SEXT816((long)puVar23) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
             (uVar16 = (ulong)(byte)(*pbVar18 - 0x30), puVar23 = (undefined *)(lVar19 + uVar16),
             SCARRY8(lVar19,uVar16))) goto LAB_1000ba144;
          uVar21 = 0;
          lVar3 = lVar3 + -1;
          pbVar18 = pbVar18 + 1;
        } while (lVar3 != 0);
        goto LAB_1000ba14c;
      }
    }
    else if (uVar21 == 0x2d) {
      if (uVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ba2b0);
        (*pcVar2)();
      }
      lVar3 = uVar17 - 1;
      if (lVar3 != 0) {
        puVar23 = (undefined *)0x0;
        pbVar18 = (byte *)((ulong)&local_78 | 1);
        do {
          if (((9 < *pbVar18 - 0x30) ||
              (lVar19 = (long)puVar23 * 10,
              SUB168(SEXT816((long)puVar23) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
             (uVar16 = (ulong)(byte)(*pbVar18 - 0x30), puVar23 = (undefined *)(lVar19 - uVar16),
             SBORROW8(lVar19,uVar16))) goto LAB_1000ba144;
          uVar21 = 0;
          lVar3 = lVar3 + -1;
          pbVar18 = pbVar18 + 1;
        } while (lVar3 != 0);
        goto LAB_1000ba14c;
      }
    }
    else if (uVar17 != 0) {
      puVar23 = (undefined *)0x0;
      ppuVar15 = &local_78;
      do {
        if (((9 < *(byte *)ppuVar15 - 0x30) ||
            (lVar3 = (long)puVar23 * 10,
            SUB168(SEXT816((long)puVar23) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
           (uVar16 = (ulong)(byte)(*(byte *)ppuVar15 - 0x30),
           puVar23 = (undefined *)(lVar3 + uVar16), SCARRY8(lVar3,uVar16))) goto LAB_1000ba144;
        uVar21 = 0;
        uVar17 = uVar17 - 1;
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (uVar17 != 0);
      goto LAB_1000ba14c;
    }
  }
LAB_1000ba144:
  uVar21 = 1;
  puVar23 = (undefined *)0x0;
LAB_1000ba14c:
  _swift_bridgeObjectRelease(uStack_80);
  if ((uVar21 & 0xff) != 1) {
    TVar10 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar10.unknown + -8) + 0x38))(lVar20 - extraout_x8,1,1,TVar10.unknown);
    FUN_1000c495c(param_1,lVar20,FUN_1000b292c);
    pMVar4 = Swift::MainActor::get_shared(pMVar4,param_1);
    uVar16 = (ulong)*(byte *)(local_90 + 0x50);
    uVar13 = uVar16 + 0x20 & (uVar16 ^ 0xffffffffffffffff);
    uVar17 = lVar22 + uVar13 + 7 & 0xfffffffffffffff8;
    puVar11 = &DAT_100eb4678;
    _swift_allocObject(&DAT_100eb4678,uVar17 + 8,uVar16 | 7);
    *(MainActor **)(puVar11 + 0x10) = pMVar4;
    *(undefined8 **)(puVar11 + 0x18) = puVar6;
    FUN_1000523d8(lVar20,puVar11 + uVar13,FUN_1000b292c);
    *(undefined **)(puVar11 + uVar17) = puVar23;
    pMVar4 = (MainActor *)0x0;
    FUN_1000645b0(0,0,lVar20 - extraout_x8,&DAT_100c29eb0,puVar11);
    _swift_release(pMVar5);
    pMVar5 = pMVar4;
  }
  _swift_release(pMVar5);
  return;
}



/* Address: 0x1000ba2b8 | FUN_1000ba2b8 */

void FUN_1000ba2b8(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x4;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x50) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x58) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x60) = puVar3;
  _swift_task_switch(FUN_1000ba348,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1000ba348 | FUN_1000ba348 */

void FUN_1000ba348(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000ba39c;
  FUN_1000c6ae0(*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x1000ba39c | FUN_1000ba39c */

void FUN_1000ba39c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1000ba3f4;
  }
  else {
    pcVar1 = FUN_1000ba468;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x60));
  return;
}



/* Address: 0x1000ba3f4 | FUN_1000ba3f4 */

void FUN_1000ba3f4(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  lVar2 = 0;
  FUN_1000b292c();
  iVar1 = *(int *)(lVar2 + 0x1c);
  *(undefined1 *)(unaff_x22 + 0x78) = 0;
  puVar3 = &DAT_100fa6e68;
  FUN_1000037f0(&DAT_100fa6e68,&DAT_100c26340);
  SwiftUI::State::set_wrappedValue((State *)(lVar4 + iVar1),(undefined1 *)(unaff_x22 + 0x78),puVar3)
  ;
                    /* WARNING: Could not recover jumptable at 0x0001000ba464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000ba468 | FUN_1000ba468 */

void FUN_1000ba468(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  String SVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_getErrorValue(uVar4,unaff_x22 + 0x38,unaff_x22 + 0x10);
  SVar6 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  lVar2 = 0;
  FUN_1000b292c();
  iVar1 = *(int *)(lVar2 + 0x24);
  *(String *)(unaff_x22 + 0x28) = SVar6;
  puVar3 = &DAT_100fabbf8;
  FUN_1000037f0(&DAT_100fabbf8,&DAT_100c29e28);
  SwiftUI::State::set_wrappedValue((State *)(lVar5 + iVar1),(String *)(unaff_x22 + 0x28),puVar3);
  _swift_errorRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001000ba514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000ba518 | FUN_1000ba518 */

void FUN_1000ba518(void)

{
  FUN_1000b7080(0xa0,FUN_1001de854);
  return;
}



/* Address: 0x1000ba528 | FUN_1000ba528 */

void FUN_1000ba528(undefined8 param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  State SVar6;
  long local_68;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xac,UVar4.unknown,puVar3);
  }
  FUN_1000b292c();
  SVar6.unknown = &DAT_100fabbf8;
  FUN_1000037f0(&DAT_100fabbf8,&DAT_100c29e28);
  SwiftUI::State::get_wrappedValue(SVar6);
  _swift_release(pMVar2);
  if (local_68 != 0) {
    _swift_bridgeObjectRelease(local_68);
  }
  *(bool *)param_1 = local_68 != 0;
  return;
}



/* Address: 0x1000ba63c | FUN_1000ba63c */

void FUN_1000ba63c(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  
  bVar1 = *param_1;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xad,UVar5.unknown,puVar4);
  }
  if ((bVar1 & 1) != 0) {
    _swift_release(pMVar3);
    return;
  }
  lVar7 = 0;
  FUN_1000b292c();
  iVar2 = *(int *)(lVar7 + 0x24);
  local_50 = 0;
  uStack_48 = 0;
  puVar8 = &DAT_100fabbf8;
  FUN_1000037f0(&DAT_100fabbf8,&DAT_100c29e28);
  SwiftUI::State::set_wrappedValue((State *)(param_4 + iVar2),&local_50,puVar8);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1000ba748 | FUN_1000ba748 */

void FUN_1000ba748(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar1 = 0;
  FUN_1000b292c();
  lVar9 = *(long *)(lVar1 + -8);
  lVar1 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xb0,UVar4.unknown,puVar3);
  }
  FUN_1000c495c(param_2,&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),
                FUN_1000b292c);
  uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100eb45d8;
  _swift_allocObject(&DAT_100eb45d8,uVar8 + lVar1,uVar7 | 7);
  FUN_1000523d8(&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),puVar6 + uVar8,
                FUN_1000b292c);
  SwiftUI::Button::_init();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000ba8b0 | FUN_1000ba8b0 */

void FUN_1000ba8b0(long param_1)

{
  int iVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xb1,UVar4.unknown,puVar3);
  }
  lVar6 = 0;
  FUN_1000b292c();
  iVar1 = *(int *)(lVar6 + 0x24);
  local_50 = 0;
  uStack_48 = 0;
  puVar7 = &DAT_100fabbf8;
  FUN_1000037f0(&DAT_100fabbf8,&DAT_100c29e28);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_50,puVar7);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000ba998 | FUN_1000ba998 */

void FUN_1000ba998(void)

{
  FUN_1000b7080(0xb3,FUN_1001ddf54);
  return;
}



/* Address: 0x1000ba9a8 | FUN_1000ba9a8 */

void FUN_1000ba9a8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  undefined *puVar7;
  undefined1 uVar8;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  uVar8 = SUB81(UVar5.unknown,0);
  if (((ulong)UVar5.unknown & 1) == 0) {
    uVar8 = 0x30;
    param_5 = 0xb6;
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xb6,UVar4.unknown,puVar3);
  }
  FUN_100008378();
  _swift_bridgeObjectRetain(uVar1);
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _swift_release(pMVar2);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar7;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = param_5;
  return;
}



/* Address: 0x1000baaa0 | FUN_1000baaa0 */

void FUN_1000baaa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  Set param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  LocalizedStringResource LVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  Text TVar7;
  Font FVar8;
  Font FVar9;
  Text TVar10;
  Set SVar11;
  VerticalAlignment VVar12;
  Text TVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  long extraout_x8;
  undefined8 *puVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar19;
  undefined *apuStack_250 [4];
  MainActor *local_230;
  undefined8 *local_228;
  long local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  long local_208;
  undefined1 auStack_200 [80];
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined *local_160;
  undefined *puStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined1 *local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined1 local_100;
  undefined1 *local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar3 = &DAT_100fabe60;
  apuStack_250[2] = param_6;
  local_210 = param_1;
  FUN_1000037f0(&DAT_100fabe60,&DAT_100c2a0d8);
  apuStack_250[3] = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar18 = (long)apuStack_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_208 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = (undefined8 *)(lVar18 - extraout_x12);
  puVar3 = &DAT_100fabe68;
  local_218 = puVar17;
  FUN_1000037f0(&DAT_100fabe68,&DAT_100c2a0e0);
  apuStack_250[1] = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar18 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_220 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = (undefined8 *)(lVar18 - extraout_x12_00);
  local_228 = puVar17;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = (undefined *)((long)puVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar17 = &DAT_100fa6bb0;
  puVar14 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar3);
  local_230 = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    puVar17 = (undefined8 *)0x1b;
    puVar14 = &DAT_00000001;
    param_9.unknown = (undefined *)0xbc;
    _swift_task_reportUnexpectedExecutor("Paste/MCPSettingsView.swift");
  }
  FUN_1001ddad4(LVar4.unknown);
  TVar7 = SwiftUI::Text::init(LVar4);
  FVar9.unknown = (undefined *)puVar17;
  FVar8 = SwiftUI::Font::get_body(TVar7.unknown);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar8.unknown);
  FVar9 = SwiftUI::Font::weight(FVar8.unknown,FVar9);
  _swift_release(FVar8.unknown);
  TVar13 = TVar7;
  puVar15 = puVar17;
  puVar16 = puVar14;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  _swift_release(FVar9.unknown);
  FUN_100016d74(TVar7.unknown,puVar17,puVar14);
  _swift_bridgeObjectRelease();
  SVar11 = SwiftUI::Edge::Set::get_all(param_9);
  uVar19 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  local_150 = SUB81(puVar15,0);
  local_140 = SUB81(SVar11.unknown,0);
  local_128 = (undefined1)param_4;
  uStack_127 = (undefined7)((ulong)param_4 >> 8);
  uStack_120 = (undefined1)param_5;
  uStack_11f = (undefined7)((ulong)param_5 >> 8);
  uStack_118 = 0;
  local_c8 = 0;
  local_160 = TVar10.unknown;
  puStack_158 = TVar13.unknown;
  local_148 = puVar16;
  uStack_138 = uVar19;
  uStack_130 = param_3;
  local_110 = TVar10.unknown;
  puStack_108 = TVar13.unknown;
  local_100 = local_150;
  local_f8 = puVar16;
  local_f0 = local_140;
  local_e8 = uVar19;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  FUN_100011090(&local_160,&local_c0,&DAT_100fa7ed8,&DAT_100c24e98);
  FUN_100005808(&local_110,&DAT_100fa7ed8,&DAT_100c24e98);
  puVar17 = local_228;
  *local_228 = 0;
  SVar11.unknown = apuStack_250[2];
  VVar12.unknown = apuStack_250[2];
  FUN_1000baf4c((long)puVar17 + (long)*(int *)(apuStack_250[1] + 0x24));
  VVar12 = SwiftUI::VerticalAlignment::get_center(VVar12);
  puVar15 = local_218;
  *local_218 = VVar12.unknown;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  puVar3 = &DAT_100fabe70;
  FUN_1000037f0(&DAT_100fabe70,&DAT_100c2a0e8);
  FUN_1000bbc68((long)puVar15 + (long)*(int *)(puVar3 + 0x2c));
  SVar11 = SwiftUI::Edge::Set::get_top(SVar11);
  uVar19 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  lVar18 = local_220;
  puVar16 = (undefined1 *)((long)puVar15 + (long)*(int *)(apuStack_250[3] + 0x24));
  *puVar16 = (char)SVar11.unknown;
  *(undefined8 *)(puVar16 + 8) = uVar19;
  *(undefined8 *)(puVar16 + 0x10) = param_3;
  *(undefined8 *)(puVar16 + 0x18) = param_4;
  *(undefined8 *)(puVar16 + 0x20) = param_5;
  puVar16[0x28] = 0;
  local_190 = CONCAT71(uStack_13f,local_140);
  uStack_188 = uStack_138;
  uStack_178 = local_128;
  uStack_180 = uStack_130;
  uStack_16f = CONCAT17(uStack_118,uStack_11f);
  local_177 = uStack_127;
  uStack_170 = uStack_120;
  uStack_1a0 = CONCAT71(uStack_14f,local_150);
  puStack_1a8 = puStack_158;
  local_1b0 = local_160;
  puStack_198 = local_148;
  FUN_100011090(puVar17,local_220,&DAT_100fabe68,&DAT_100c2a0e0);
  lVar2 = local_208;
  FUN_100011090(puVar15,local_208,&DAT_100fabe60,&DAT_100c2a0d8);
  puVar1 = local_210;
  uStack_98 = uStack_188;
  local_a0 = local_190;
  uStack_88 = uStack_178;
  uStack_90 = uStack_180;
  uStack_7f = uStack_16f;
  local_87 = local_177;
  uStack_80 = uStack_170;
  puStack_b8 = puStack_1a8;
  local_c0 = local_1b0;
  puStack_a8 = puStack_198;
  uStack_b0 = uStack_1a0;
  local_210[5] = uStack_188;
  local_210[4] = local_190;
  local_210[7] = CONCAT71(local_177,uStack_178);
  local_210[6] = uStack_180;
  *(undefined8 *)((long)local_210 + 0x41) = uStack_16f;
  *(ulong *)((long)local_210 + 0x39) = CONCAT17(uStack_170,local_177);
  local_210[1] = puStack_1a8;
  *local_210 = local_1b0;
  local_210[3] = puStack_198;
  local_210[2] = uStack_1a0;
  puVar3 = &DAT_100fabe78;
  FUN_1000037f0(&DAT_100fabe78,&DAT_100c2a0f0);
  FUN_100011090(lVar18,(long)puVar1 + (long)*(int *)(puVar3 + 0x30),&DAT_100fabe68,&DAT_100c2a0e0);
  FUN_100011090(lVar2,(long)puVar1 + (long)*(int *)(puVar3 + 0x40),&DAT_100fabe60,&DAT_100c2a0d8);
  FUN_100011090(&local_c0,auStack_200,&DAT_100fa7ed8,&DAT_100c24e98);
  FUN_100005808(puVar15,&DAT_100fabe60,&DAT_100c2a0d8);
  FUN_100005808(puVar17,&DAT_100fabe68,&DAT_100c2a0e0);
  FUN_100005808(lVar2,&DAT_100fabe60,&DAT_100c2a0d8);
  FUN_100005808(lVar18,&DAT_100fabe68,&DAT_100c2a0e0);
  FUN_100005808(&local_1b0,&DAT_100fa7ed8,&DAT_100c24e98);
  _swift_release(local_230);
  return;
}



/* Address: 0x1000baf4c | FUN_1000baf4c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000bb254 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000baf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  HierarchicalShapeStyle param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  HorizontalAlignment HVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined *puVar10;
  UUID UVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  Text TVar16;
  Font FVar17;
  Text TVar18;
  HierarchicalShapeStyle HVar19;
  Text TVar20;
  Alignment AVar21;
  Text TVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar23;
  LocalizedStringResource LVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined8 auStack_2d0 [2];
  long local_2c0;
  MainActor *local_2b8 [24];
  undefined *local_1f8;
  undefined *puStack_1f0;
  undefined1 local_1e8;
  undefined7 uStack_1e7;
  undefined *puStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined *local_168;
  undefined *puStack_160;
  undefined1 local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar4 = 0;
  FUN_1000b292c();
  lVar30 = *(long *)(lVar4 + -8);
  lVar29 = *(long *)(lVar30 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar28 = (long)&local_2c0 - (lVar29 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fabf10;
  FUN_1000037f0(&DAT_100fabf10,&DAT_100c2a1b8);
  local_2b8[4] = (MainActor *)puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar27 = (undefined8 *)(lVar28 - extraout_x8);
  puVar5 = &DAT_100fabf18;
  puVar10 = &DAT_100c2a1c0;
  FUN_1000037f0();
  local_2b8[3] = (MainActor *)puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = (undefined8 *)((long)puVar27 - extraout_x8_00);
  HVar6.unknown = (undefined *)Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(HVar6.unknown + -8) + 0x40));
  LVar24.unknown = (undefined *)((long)puVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_2b8[2] = (MainActor *)param_2;
  FUN_1000c7380();
  lVar4 = *(long *)(HVar6.unknown + 0x10);
  _swift_bridgeObjectRelease();
  local_2b8[5] = (MainActor *)param_1;
  if (lVar4 == 0) {
    FUN_1001df2d4(LVar24.unknown);
    TVar16 = SwiftUI::Text::init(LVar24);
    FVar17 = SwiftUI::Font::get_callout(TVar16.unknown);
    TVar22 = TVar16;
    puVar5 = puVar10;
    puVar12 = param_4;
    TVar18 = SwiftUI::Text::_font(FVar17.unknown);
    local_2b8[2] = (MainActor *)puVar12;
    _swift_release(FVar17.unknown);
    FUN_100016d74(TVar16.unknown,puVar10,param_4);
    _swift_bridgeObjectRelease();
    HVar19 = SwiftUI::HierarchicalShapeStyle::get_secondary(param_5);
    local_168 = (undefined *)CONCAT44(local_168._4_4_,(int)HVar19.unknown);
    FUN_1000c4248();
    AVar21.unknown = local_2b8[2];
    TVar16 = TVar18;
    puVar10 = TVar22.unknown;
    puVar12 = puVar5;
    TVar20 = SwiftUI::Text::_foregroundStyle();
    FUN_100016d74(TVar18.unknown,TVar22.unknown,puVar5);
    _swift_bridgeObjectRelease();
    AVar21 = SwiftUI::Alignment::get_center(AVar21);
    *(undefined **)(LVar24.unknown + -0x10) = AVar21.unknown;
    *(undefined **)(LVar24.unknown + -8) = TVar22.unknown;
    LVar24.unknown[-0x18] = 1;
    *(undefined8 *)(LVar24.unknown + -0x20) = 0;
    LVar24.unknown[-0x28] = 1;
    *(undefined8 *)(LVar24.unknown + -0x30) = 0;
    SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
    uStack_190 = uStack_90;
    local_198 = local_98;
    uStack_180 = uStack_80;
    local_188 = local_88;
    uStack_170 = uStack_70;
    local_178 = local_78;
    uStack_1d0 = uStack_d0;
    local_1d8 = local_d8;
    uStack_1c0 = uStack_c0;
    local_1c8 = local_c8;
    uStack_1a0 = uStack_a0;
    local_1a8 = local_a8;
    uStack_1b0 = uStack_b0;
    local_1b8 = local_b8;
    uStack_100 = uStack_90;
    local_108 = local_98;
    uStack_f0 = uStack_80;
    local_f8 = local_88;
    uStack_e0 = uStack_70;
    local_e8 = local_78;
    uStack_140 = uStack_d0;
    local_148 = local_d8;
    uStack_130 = uStack_c0;
    local_138 = local_c8;
    local_1e8 = SUB81(puVar10,0);
    uStack_110 = uStack_a0;
    local_118 = local_a8;
    uStack_120 = uStack_b0;
    local_128 = local_b8;
    local_1f8 = TVar20.unknown;
    puStack_1f0 = TVar16.unknown;
    puStack_1e0 = puVar12;
    local_168 = TVar20.unknown;
    puStack_160 = TVar16.unknown;
    local_158 = local_1e8;
    local_150 = puVar12;
    FUN_100011090(&local_1f8,local_2b8 + 6,&DAT_100fa7210,&DAT_100c24050);
    FUN_100005808(&local_168,&DAT_100fa7210,&DAT_100c24050);
    uVar3 = uStack_180;
    uVar2 = local_188;
    uVar1 = local_198;
    puVar26[0xd] = uStack_190;
    puVar26[0xc] = uVar1;
    puVar26[0xf] = uVar3;
    puVar26[0xe] = uVar2;
    uVar1 = local_178;
    puVar26[0x11] = uStack_170;
    puVar26[0x10] = uVar1;
    uVar3 = uStack_1c0;
    uVar2 = local_1c8;
    uVar1 = local_1d8;
    puVar26[5] = uStack_1d0;
    puVar26[4] = uVar1;
    puVar26[7] = uVar3;
    puVar26[6] = uVar2;
    uVar3 = uStack_1a0;
    uVar2 = local_1a8;
    uVar1 = local_1b8;
    puVar26[9] = uStack_1b0;
    puVar26[8] = uVar1;
    puVar26[0xb] = uVar3;
    puVar26[10] = uVar2;
    puVar10 = puStack_1e0;
    puVar5 = local_1f8;
    uVar1 = CONCAT71(uStack_1e7,local_1e8);
    puVar26[1] = puStack_1f0;
    *puVar26 = puVar5;
    puVar26[3] = puVar10;
    puVar26[2] = uVar1;
    _swift_storeEnumTagMultiPayload(puVar26,local_2b8[3],0);
    FUN_1000037f0(&DAT_100fa7210,&DAT_100c24050);
    FUN_10001ff90(&DAT_100fa7218,&DAT_100fa7210,&DAT_100c24050,
                  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
                 );
    FUN_100016eac(&DAT_100fabf50,&DAT_100fabf10,&DAT_100c2a1b8,
                  PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar26);
  }
  else {
    local_2b8[1] = (MainActor *)puVar26;
    HVar6 = SwiftUI::HorizontalAlignment::get_leading(HVar6);
    *puVar27 = HVar6.unknown;
    puVar27[1] = 0;
    *(undefined1 *)(puVar27 + 2) = 0;
    pMVar7 = Swift::MainActor::typeMetadataAccessor();
    puVar5 = PTR_typeMetadataAccessor_100eaec10;
    pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
    puVar26 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    local_2b8[0] = pMVar7;
    UVar8 = Swift::Actor::get_unownedExecutor();
    UVar9 = UVar8;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar9.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("Paste/MCPSettingsView.swift",0x1b,1,199,UVar8.unknown,puVar26);
    }
    puVar5 = &DAT_100fabf20;
    FUN_1000037f0(&DAT_100fabf20,&DAT_100c2a1c8);
    local_2c0 = (long)*(int *)(puVar5 + 0x2c);
    FUN_1000c7380();
    local_168 = puVar5;
    FUN_1000c495c(local_2b8[2],lVar28,FUN_1000b292c);
    uVar23 = (ulong)*(byte *)(lVar30 + 0x50);
    uVar25 = uVar23 + 0x10 & (uVar23 ^ 0xffffffffffffffff);
    puVar5 = &DAT_100eb48f8;
    _swift_allocObject(&DAT_100eb48f8,uVar25 + lVar29,uVar23 | 7);
    FUN_1000523d8(lVar28,puVar5 + uVar25,FUN_1000b292c);
    puVar10 = &DAT_100fabf28;
    FUN_1000037f0(&DAT_100fabf28,&DAT_100c2a390);
    UVar11 = Foundation::UUID::typeMetadataAccessor();
    puVar12 = &DAT_100fabf30;
    FUN_1000037f0(&DAT_100fabf30,&DAT_100c2a1d0);
    puVar13 = &DAT_100fabf38;
    FUN_100016eac(&DAT_100fabf38,&DAT_100fabf28,&DAT_100c2a390,
                  PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
    puVar14 = &DAT_100fabf40;
    FUN_100016eac(&DAT_100fabf40,&DAT_100fabf30,&DAT_100c2a1d0,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
    puVar15 = &DAT_100fabf48;
    FUN_100003a00(&DAT_100fabf48,FUN_10045ba0c,&TargetProtocolConformanceDescriptor_100c4c948);
    *(undefined **)(LVar24.unknown + -0x10) = puVar15;
    (extension_SwiftUI)::SwiftUI::ForEach::_init
              ((long)puVar27 + local_2c0,puVar15,FUN_1000c5908,puVar5,puVar10,UVar11.unknown,puVar12
               ,puVar13,puVar14);
    _swift_release(local_2b8[0]);
    pMVar7 = local_2b8[1];
    FUN_100011090(puVar27,local_2b8[1],&DAT_100fabf10,&DAT_100c2a1b8);
    _swift_storeEnumTagMultiPayload(pMVar7,local_2b8[3],1);
    FUN_1000037f0(&DAT_100fa7210,&DAT_100c24050);
    FUN_10001ff90(&DAT_100fa7218,&DAT_100fa7210,&DAT_100c24050,
                  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
                 );
    FUN_100016eac(&DAT_100fabf50,&DAT_100fabf10,&DAT_100c2a1b8,
                  PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)pMVar7);
    FUN_100005808(puVar27,&DAT_100fabf10,&DAT_100c2a1b8);
  }
  return;
}



/* Address: 0x1000bb60c | FUN_1000bb60c */

void FUN_1000bb60c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  VerticalAlignment VVar8;
  undefined *puVar9;
  Set SVar10;
  Divider DVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long local_b0 [3];
  undefined *apuStack_98 [2];
  MainActor *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = 0;
  local_b0[2] = param_6;
  apuStack_98[0] = param_7;
  local_68 = param_1;
  FUN_10045ba0c();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar19 = (long)local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fabbe8;
  local_b0[0] = lVar19;
  FUN_1000037f0(&DAT_100fabbe8,&DAT_100c29e18);
  apuStack_98[1] = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_00;
  puVar3 = &DAT_100faba30;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  uVar13 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b0[1] = uVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = uVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar20 - extraout_x12_00;
  puVar3 = &DAT_100fabef0;
  FUN_1000037f0(&DAT_100fabef0,&DAT_100c2a1a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar14 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_01;
  puVar3 = &DAT_100fabf58;
  local_78 = lVar14;
  FUN_1000037f0(&DAT_100fabf58,&DAT_100c2a1d8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar18 = (undefined8 *)(lVar14 - extraout_x12_02);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_88 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar7 = (char *)UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,200,UVar6.unknown,puVar5);
  }
  VVar8 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar7);
  *puVar18 = VVar8.unknown;
  puVar18[1] = 0x4024000000000000;
  *(undefined1 *)(puVar18 + 2) = 0;
  puVar9 = &DAT_100fabf60;
  FUN_1000037f0(&DAT_100fabf60,&DAT_100c2a1e0);
  lVar14 = local_b0[2];
  SVar10.unknown = apuStack_98[0];
  FUN_1000bccd8((long)puVar18 + (long)*(int *)(puVar9 + 0x2c),apuStack_98[0],local_b0[2]);
  SVar10 = SwiftUI::Edge::Set::get_vertical(SVar10);
  uVar21 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  puVar1 = (undefined1 *)((long)puVar18 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = (char)SVar10.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_1000c495c(lVar14,lVar17,FUN_10045ba0c);
  pcVar15 = *(code **)(lVar16 + 0x38);
  lVar14 = lVar17;
  (*pcVar15)(lVar17,0,1,lVar2);
  FUN_1000c7380();
  lVar12 = *(long *)(lVar14 + 0x10);
  if (lVar12 != 0) {
    FUN_1000c495c(lVar14 + ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar16 + 0x48) * (lVar12 + -1),lVar20,FUN_10045ba0c);
  }
  _swift_bridgeObjectRelease();
  (*pcVar15)(lVar20,lVar12 == 0,1,lVar2);
  lVar14 = (long)*(int *)(apuStack_98[1] + 0x30);
  FUN_100011090(lVar17,lVar19,&DAT_100faba30,&DAT_100c29c60);
  FUN_100011090(lVar20,lVar19 + lVar14,&DAT_100faba30,&DAT_100c29c60);
  pcVar15 = *(code **)(lVar16 + 0x30);
  lVar12 = lVar19;
  (*pcVar15)(lVar19,1,lVar2);
  lVar16 = local_b0[1];
  if ((int)lVar12 == 1) {
    FUN_100005808(lVar20,&DAT_100faba30,&DAT_100c29c60);
    FUN_100005808(lVar17,&DAT_100faba30,&DAT_100c29c60);
    lVar14 = lVar19 + lVar14;
    (*pcVar15)(lVar14,1,lVar2);
    if ((int)lVar14 == 1) {
      FUN_100005808(lVar19,&DAT_100faba30,&DAT_100c29c60);
LAB_1000bbb40:
      uVar21 = 1;
      lVar2 = local_78;
      goto LAB_1000bbb48;
    }
LAB_1000bba88:
    FUN_100005808(lVar19,&DAT_100fabbe8,&DAT_100c29e18);
  }
  else {
    FUN_100011090(lVar19,local_b0[1],&DAT_100faba30,&DAT_100c29c60);
    lVar12 = lVar19 + lVar14;
    (*pcVar15)(lVar12,1,lVar2);
    lVar2 = local_b0[0];
    if ((int)lVar12 == 1) {
      FUN_100005808(lVar20,&DAT_100faba30,&DAT_100c29c60);
      FUN_100005808(lVar17,&DAT_100faba30,&DAT_100c29c60);
      FUN_10005241c(lVar16,FUN_10045ba0c);
      goto LAB_1000bba88;
    }
    FUN_1000523d8(lVar19 + lVar14,local_b0[0],FUN_10045ba0c);
    uVar13 = lVar16;
    thunk_FUN_10045d51c(lVar16,lVar2);
    FUN_10005241c(lVar2,FUN_10045ba0c);
    FUN_100005808(lVar20,&DAT_100faba30,&DAT_100c29c60);
    FUN_100005808(lVar17,&DAT_100faba30,&DAT_100c29c60);
    FUN_10005241c(lVar16,FUN_10045ba0c);
    FUN_100005808(lVar19,&DAT_100faba30,&DAT_100c29c60);
    if ((uVar13 & 1) != 0) goto LAB_1000bbb40;
  }
  lVar2 = local_78;
  SwiftUI::Divider::init();
  uVar21 = 0;
LAB_1000bbb48:
  DVar11 = SwiftUI::Divider::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar11.unknown + -8) + 0x38))(lVar2,uVar21,1,DVar11.unknown);
  lVar19 = local_80;
  FUN_100011090(puVar18,local_80,&DAT_100fabf58,&DAT_100c2a1d8);
  lVar14 = local_70;
  FUN_100011090(lVar2,local_70,&DAT_100fabef0,&DAT_100c2a1a0);
  lVar16 = local_68;
  FUN_100011090(lVar19,local_68,&DAT_100fabf58,&DAT_100c2a1d8);
  puVar3 = &DAT_100fabf68;
  FUN_1000037f0(&DAT_100fabf68,&DAT_100c2a1e8);
  FUN_100011090(lVar14,lVar16 + *(int *)(puVar3 + 0x30),&DAT_100fabef0,&DAT_100c2a1a0);
  FUN_100005808(lVar2,&DAT_100fabef0,&DAT_100c2a1a0);
  FUN_100005808(puVar18,&DAT_100fabf58,&DAT_100c2a1d8);
  FUN_100005808(lVar14,&DAT_100fabef0,&DAT_100c2a1a0);
  FUN_100005808(lVar19,&DAT_100fabf58,&DAT_100c2a1d8);
  _swift_release(local_88);
  return;
}



/* Address: 0x1000bbc68 | FUN_1000bbc68 */

void FUN_1000bbc68(undefined8 *param_1,long param_2)

{
  long lVar1;
  ButtonMenuStyle BVar2;
  undefined *puVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long alStack_b0 [2];
  undefined *local_a0;
  long local_98;
  MainActor *local_90;
  undefined8 *local_88;
  undefined1 local_80 [16];
  long local_70;
  
  local_98 = param_2;
  local_88 = param_1;
  BVar2 = SwiftUI::ButtonMenuStyle::typeMetadataAccessor();
  alStack_b0[1] = *(long *)(BVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(alStack_b0[1] + 0x40));
  lVar14 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fabe80;
  FUN_1000037f0(&DAT_100fabe80,&DAT_100c2a0f8);
  lVar13 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fabe88;
  FUN_1000037f0(&DAT_100fabe88,&DAT_100c2a100);
  local_a0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar11 = (lVar14 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar11 - extraout_x12;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_90 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xd1,UVar7.unknown,puVar6);
  }
  lVar1 = local_98;
  local_70 = local_98;
  FUN_1000037f0(&DAT_100fabe90,&DAT_100c2a108);
  FUN_1000c5534();
  SwiftUI::Menu::_init();
  SwiftUI::ButtonMenuStyle::init();
  puVar4 = &DAT_100fabeb0;
  FUN_100016eac(&DAT_100fabeb0,&DAT_100fabe80,&DAT_100c2a0f8,
                PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100eab2e0);
  puVar9 = &DAT_100fabeb8;
  FUN_100003a00(&DAT_100fabeb8,PTR_typeMetadataAccessor_100eaa910,
                PTR_SwiftUI__SwiftUI__ButtonMenuStyle_>SwiftUI__MenuStyle_100eaa900);
  (extension_SwiftUI)::SwiftUI::View::_menuStyle(lVar12,lVar14,puVar3,BVar2.unknown,puVar4,puVar9);
  (**(code **)(alStack_b0[1] + 8))(lVar14,BVar2.unknown);
  (**(code **)(lVar13 + 8))(lVar14 - extraout_x8_00,puVar3);
  puVar3 = &DAT_100fabec0;
  FUN_1000037f0(&DAT_100fabec0,&DAT_100c2a118);
  *(undefined2 *)(lVar12 + *(int *)(puVar3 + 0x24)) = 0x101;
  uVar10 = *(undefined8 *)(lVar1 + 8);
  puVar3 = &DAT_100c2a120;
  _swift_getKeyPath(&DAT_100c2a120);
  puVar4 = &DAT_100c2a148;
  _swift_getKeyPath(&DAT_100c2a148);
  Combine::Published::_get_subscript(local_80,uVar10,puVar3,puVar4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  puVar3 = &DAT_100c29e70;
  _swift_getKeyPath();
  puVar4 = &DAT_100eb4830;
  _swift_allocObject(&DAT_100eb4830,0x11,7);
  puVar4[0x10] = local_80[0];
  puVar6 = (undefined8 *)(lVar12 + *(int *)(local_a0 + 0x24));
  *puVar6 = puVar3;
  puVar6[1] = thunk_FUN_100082388;
  puVar6[2] = puVar4;
  FUN_100011090(lVar12,lVar11,&DAT_100fabe88,&DAT_100c2a100);
  puVar6 = local_88;
  *local_88 = 0;
  *(undefined1 *)(local_88 + 1) = 1;
  puVar3 = &DAT_100fabec8;
  FUN_1000037f0(&DAT_100fabec8,&DAT_100c2a168);
  FUN_100011090(lVar11,(long)puVar6 + (long)*(int *)(puVar3 + 0x30),&DAT_100fabe88,&DAT_100c2a100);
  FUN_100005808(lVar12,&DAT_100fabe88,&DAT_100c2a100);
  FUN_100005808(lVar11,&DAT_100fabe88,&DAT_100c2a100);
  _swift_release(local_90);
  return;
}



/* Address: 0x1000bc028 | FUN_1000bc028 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000bc20c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000bc028(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  char *local_68;
  
  lVar1 = 0;
  FUN_1000b292c();
  lVar16 = *(long *)(lVar1 + -8);
  lVar14 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar1 = -(lVar14 + 0xfU & 0xfffffffffffffff0);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xda,UVar4.unknown,puVar3);
  }
  FUN_10045c8b0();
  puVar6 = &DAT_100c2a178;
  local_68 = pcVar5;
  _swift_getKeyPath(&DAT_100c2a178);
  FUN_1000c495c(param_2,auStack_70 + lVar1,FUN_1000b292c);
  uVar13 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar15 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100eb4858;
  _swift_allocObject(&DAT_100eb4858,uVar15 + lVar14,uVar13 | 7);
  FUN_1000523d8(auStack_70 + lVar1,puVar7 + uVar15,FUN_1000b292c);
  puVar8 = &DAT_100fabed0;
  FUN_1000037f0(&DAT_100fabed0,&DAT_100c2a190);
  puVar9 = &DAT_100fabea8;
  FUN_1000037f0(&DAT_100fabea8,&DAT_100c2a110);
  puVar10 = &DAT_100fabed8;
  FUN_100016eac(&DAT_100fabed8,&DAT_100fabed0,&DAT_100c2a190,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar11 = puVar10;
  FUN_1000c5628();
  puVar12 = &DAT_100fabea0;
  FUN_100016eac(&DAT_100fabea0,&DAT_100fabea8,&DAT_100c2a110,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  *(undefined **)((long)auStack_80 + lVar1) = puVar12;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar12,puVar6,FUN_1000c55dc,puVar7,puVar8,puVar9,puVar10,puVar11);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000bc23c | FUN_1000bc23c */

void FUN_1000bc23c(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  Divider DVar13;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  MainActor *local_a0;
  long local_98;
  long local_90;
  long local_88;
  char local_70;
  undefined8 local_68;
  
  lVar6 = 0;
  local_a8 = param_3;
  local_88 = param_1;
  FUN_1000b292c();
  local_b8 = *(long *)(lVar6 + -8);
  lVar6 = *(long *)(local_b8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar19 = auStack_c0 + -(lVar6 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fabee8;
  FUN_1000037f0(&DAT_100fabee8,&DAT_100c2a198);
  local_98 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar15 = (long)puVar19 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12;
  puVar8 = &DAT_100fabef0;
  local_b0 = lVar15;
  FUN_1000037f0(&DAT_100fabef0,&DAT_100c2a1a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar15 - extraout_x12_00;
  cVar1 = *param_2;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  puVar10 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_a0 = pMVar9;
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xdb,UVar11.unknown,puVar10);
  }
  if (cVar1 != '\x06') {
    DVar13 = SwiftUI::Divider::typeMetadataAccessor();
  }
  else {
    SwiftUI::Divider::init();
    DVar13 = SwiftUI::Divider::typeMetadataAccessor();
  }
  (**(code **)(*(long *)(DVar13.unknown + -8) + 0x38))(lVar17,cVar1 != '\x06',1);
  uVar2 = local_a8;
  FUN_1000c495c(local_a8,puVar19,FUN_1000b292c);
  uVar14 = (ulong)*(byte *)(local_b8 + 0x50);
  uVar18 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  lVar6 = uVar18 + lVar6;
  puVar8 = &DAT_100eb4880;
  _swift_allocObject(&DAT_100eb4880,lVar6 + 1,uVar14 | 7);
  FUN_1000523d8(puVar19,puVar8 + uVar18,FUN_1000b292c);
  puVar8[lVar6] = cVar1;
  local_68 = uVar2;
  local_70 = cVar1;
  FUN_1000037f0(&DAT_100fabef8,&DAT_100c2a1a8);
  FUN_100016eac(&DAT_100fabf00,&DAT_100fabef8,&DAT_100c2a1a8,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100eab7d8);
  lVar6 = local_b0;
  SwiftUI::Button::_init();
  FUN_100011090(lVar17,lVar15,&DAT_100fabef0,&DAT_100c2a1a0);
  lVar4 = local_90;
  lVar3 = local_98;
  pcVar16 = *(code **)(local_98 + 0x10);
  (*pcVar16)(local_90,lVar6,puVar7);
  lVar5 = local_88;
  FUN_100011090(lVar15,local_88,&DAT_100fabef0,&DAT_100c2a1a0);
  puVar8 = &DAT_100fabf08;
  FUN_1000037f0(&DAT_100fabf08,&DAT_100c2a1b0);
  (*pcVar16)(lVar5 + *(int *)(puVar8 + 0x30),lVar4,puVar7);
  pcVar16 = *(code **)(lVar3 + 8);
  (*pcVar16)(lVar6,puVar7);
  FUN_100005808(lVar17,&DAT_100fabef0,&DAT_100c2a1a0);
  (*pcVar16)(lVar4,puVar7);
  FUN_100005808(lVar15,&DAT_100fabef0,&DAT_100c2a1a0);
  _swift_release(local_a0);
  return;
}



/* Address: 0x1000bc5d8 | FUN_1000bc5d8 */

void FUN_1000bc5d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xdf,UVar4.unknown,puVar3);
  }
  FUN_1000bc690(param_2);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000bc690 | FUN_1000bc690 */

void FUN_1000bc690(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  Published *pPVar3;
  undefined1 local_31;
  
  pPVar3 = *(Published **)(unaff_x20 + 8);
  if (((uint)param_1 & 0xff) == 6) {
    puVar1 = &DAT_100c29d70;
    _swift_getKeyPath(&DAT_100c29d70);
    puVar2 = &DAT_100c2a088;
    _swift_getKeyPath(&DAT_100c2a088);
    local_31 = 1;
    _swift_retain(pPVar3);
    Combine::Published::_set_subscript(pPVar3,&local_31,pPVar3,puVar1,puVar2);
  }
  else {
    FUN_1000c7a40(param_1,0,0);
  }
  return;
}



/* Address: 0x1000bc71c | FUN_1000bc71c */

void FUN_1000bc71c(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xe1,UVar4.unknown,puVar3);
  }
  SwiftUI::Label::_init();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000bc820 | FUN_1000bc820 */

void FUN_1000bc820(undefined8 *param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  undefined *puVar7;
  undefined1 uVar8;
  long extraout_x8;
  String local_50;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    param_5 = 0xe2;
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xe2,UVar4.unknown,puVar3);
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      local_50.bridgeObject = (void *)0xee00706f746b7365;
      local_50.str = (char *)0x4420656475616c43;
    }
    else if (param_2 == 1) {
      local_50.bridgeObject = (void *)0xeb0000000065646f;
      local_50.str = (char *)0x4320656475616c43;
    }
    else {
      local_50.bridgeObject = &DAT_e500000000000000;
      local_50.str = (char *)0x7865646f43;
    }
  }
  else if (param_2 < 5) {
    if (param_2 == 3) {
      local_50.bridgeObject = &DAT_e600000000000000;
      local_50.str = (char *)0x726f73727543;
    }
    else {
      local_50.bridgeObject = &DAT_e700000000000000;
      local_50.str = (char *)0x65646f43205356;
    }
  }
  else if (param_2 == 5) {
    local_50.bridgeObject = &DAT_e800000000000000;
    local_50.str = (char *)0x66727573646e6957;
  }
  else {
    FUN_1001defd4(LVar1.unknown);
    local_50 = (extension_Foundation)::Swift::String::init(LVar1);
  }
  uVar8 = local_50.str._0_1_;
  FUN_100008378();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _swift_release(pMVar2);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar7;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = param_5;
  return;
}



/* Address: 0x1000bca1c | FUN_1000bca1c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000bca1c(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  NSString *pNVar5;
  ID IVar6;
  undefined *puVar7;
  void *aBlock;
  NSImage *nsImage;
  Image IVar8;
  char *pcVar9;
  ulong uVar10;
  void *pvVar11;
  String SVar12;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xe4,UVar3.unknown,puVar2);
  }
  pcVar9 = (char *)0x6e6f63692e70636d;
  if (param_3 < 4) {
    if (param_3 < 2) {
      uVar10 = 0x6475616c632e;
LAB_1000bcb48:
      pvVar11 = (void *)(uVar10 | 0xef65000000000000);
    }
    else {
      pvVar11 = (void *)0xee007865646f632e;
      if (param_3 != 2) {
        pvVar11 = (void *)0xef726f737275632e;
      }
    }
  }
  else {
    if (param_3 == 4) {
      uVar10 = 0x646f6373762e;
      goto LAB_1000bcb48;
    }
    if (param_3 != 5) {
      FUN_10020dc18();
      SVar12 = *(String *)pcVar4;
      _swift_bridgeObjectRetain(((String *)pcVar4)->bridgeObject);
      IVar8 = SwiftUI::Image::init(SVar12);
      goto LAB_1000bcc7c;
    }
    pcVar9 = (char *)0xd000000000000011;
    pvVar11 = (void *)0x8000000100d8f730;
  }
  FUN_10009468c(pcVar9,pvVar11,0);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar5);
  if (IVar6 == 0) {
    SVar12.bridgeObject = pvVar11;
    SVar12.str = pcVar9;
    IVar8 = SwiftUI::Image::_init(SVar12);
  }
  else {
    FUN_10002cca0(pcVar9,pvVar11,0);
    puVar7 = &DAT_100eb48a8;
    _swift_allocObject(&DAT_100eb48a8,0x18,7);
    *(ID *)(puVar7 + 0x10) = IVar6;
    local_60 = FUN_1000c58e4;
    local_80 = PTR___NSConcreteStackBlock_100ea82a0;
    local_78 = 0x42000000;
    local_70 = FUN_1000c37e4;
    puStack_68 = &DAT_100eb48c0;
    local_58 = puVar7;
    aBlock = __Block_copy(&local_80);
    nsImage = (NSImage *)
              NSImage::imageWithSize_flipped_drawingHandler_
                        ((ID)&_OBJC_CLASS___NSImage,0x4030000000000000,0x4030000000000000,0,aBlock);
    __Block_release(aBlock);
    _swift_release(local_58);
    IVar8 = SwiftUI::Image::init(nsImage);
  }
  FUN_10002cca0(pcVar9,pvVar11,0);
LAB_1000bcc7c:
  _swift_release(pMVar1);
  *param_1 = IVar8.unknown;
  return;
}



/* Address: 0x1000bccc8 | FUN_1000bccc8 */

void FUN_1000bccc8(void)

{
  FUN_1000b7080(0xe9,FUN_1001dced4);
  return;
}



/* Address: 0x1000bccd8 | FUN_1000bccd8 */

void FUN_1000bccd8(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  LocalizedStringResource LVar5;
  undefined *puVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined8 *puVar10;
  HorizontalAlignment HVar11;
  undefined *puVar12;
  undefined *puVar13;
  Text TVar14;
  undefined *puVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long local_330;
  undefined *local_328;
  long local_320;
  undefined *local_318;
  undefined *local_310;
  LocalizedStringResource local_308;
  MainActor *local_300;
  long local_2f8;
  long local_2f0;
  long local_2e8;
  long local_2e0;
  long local_2d8;
  long local_2d0;
  undefined1 auStack_2c8 [88];
  undefined7 uStack_270;
  undefined1 local_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  undefined7 uStack_260;
  undefined1 local_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined7 uStack_250;
  undefined1 local_249;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  undefined1 local_239;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  undefined1 uStack_229;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined1 local_210 [64];
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined7 local_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 local_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 local_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined *puStack_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_167;
  undefined8 uStack_15f;
  undefined8 local_157;
  undefined8 uStack_14f;
  undefined8 local_147;
  undefined8 uStack_13f;
  undefined8 local_137;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [96];
  
  local_2d8 = param_3;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  puVar6 = (undefined *)((long)&local_330 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_308.unknown = puVar6;
  local_318 = (undefined *)SwiftUI::BorderlessButtonMenuStyle::typeMetadataAccessor();
  local_320 = *(long *)(local_318 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_320 + 0x40));
  lVar18 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fabf70;
  FUN_1000037f0(&DAT_100fabf70,&DAT_100c2a1f0);
  local_330 = *(long *)(puVar6 + -8);
  local_328 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_330 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar6 = &DAT_100fabf78;
  FUN_1000037f0(&DAT_100fabf78,&DAT_100c2a1f8);
  local_310 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (lVar18 - extraout_x8_01) - extraout_x8_02;
  puVar6 = &DAT_100fabf80;
  FUN_1000037f0(&DAT_100fabf80,&DAT_100c2a200);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar17 = lVar22 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_2e8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12;
  puVar6 = &DAT_100fabc78;
  local_2f8 = lVar17;
  FUN_1000037f0(&DAT_100fabc78,&DAT_100c29ed0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_2f0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_2d0 = lVar17 - extraout_x12_00;
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar10 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_300 = pMVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xf2,UVar8.unknown,puVar10);
  }
  uVar19 = 0x6e6f63692e70636d;
  puVar10 = (undefined8 *)0x0;
  FUN_10045ba0c();
  bVar1 = *(byte *)(local_2d8 + *(int *)(puVar10 + 3));
  local_2e0 = param_1;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      uVar20 = 0;
      uVar21 = 0xef656475616c632e;
    }
    else {
      uVar20 = 0;
      if (bVar1 == 2) {
        uVar21 = 0xee007865646f632e;
      }
      else {
        uVar21 = 0xef726f737275632e;
      }
    }
  }
  else if (bVar1 == 4) {
    uVar20 = 0;
    uVar21 = 0xef65646f6373762e;
  }
  else if (bVar1 == 5) {
    uVar20 = 0;
    uVar21 = 0x8000000100d8f730;
    uVar19 = 0xd000000000000011;
  }
  else {
    FUN_10020dc18();
    uVar19 = *puVar10;
    uVar21 = puVar10[1];
    _swift_bridgeObjectRetain(uVar21);
    uVar20 = 1;
  }
  FUN_1000bd4f0(auStack_c0,0x403c000000000000,uVar19,uVar21,uVar20);
  FUN_10002cca0(uVar19,uVar21,uVar20);
  FUN_1000037f0(&DAT_100fabc80,&DAT_100c29ed8);
  FUN_1000c48d8();
  (extension_SwiftUI)::SwiftUI::View::accessibilityHidden(true);
  HVar11.unknown = auStack_c0;
  FUN_100005808(HVar11.unknown,&DAT_100fabc80,&DAT_100c29ed8);
  HVar11 = SwiftUI::HorizontalAlignment::get_leading(HVar11);
  lVar17 = local_2d8;
  FUN_1000bd958(local_210,param_2,local_2d8);
  uStack_251 = (undefined1)local_210._24_8_;
  uStack_250 = SUB87(local_210._24_8_,1);
  local_259 = (undefined1)local_210._16_8_;
  uStack_258 = SUB87(local_210._16_8_,1);
  uStack_261 = (undefined1)local_210._8_8_;
  uStack_260 = SUB87(local_210._8_8_,1);
  local_269 = (undefined1)local_210._0_8_;
  uStack_268 = SUB87(local_210._0_8_,1);
  uStack_241 = (undefined1)local_210._40_8_;
  uStack_240 = SUB87(local_210._40_8_,1);
  local_249 = (undefined1)local_210._32_8_;
  uStack_248 = SUB87(local_210._32_8_,1);
  uStack_231 = (undefined1)local_210._56_8_;
  uStack_230 = SUB87(local_210._56_8_,1);
  local_239 = (undefined1)local_210._48_8_;
  uStack_238 = SUB87(local_210._48_8_,1);
  uStack_1a7 = uStack_258;
  uStack_1a0 = uStack_251;
  local_1af = uStack_260;
  uStack_1a8 = local_259;
  uStack_14f = CONCAT17(uStack_251,uStack_258);
  local_157 = CONCAT17(local_259,uStack_260);
  uStack_13f = CONCAT17(uStack_241,uStack_248);
  local_147 = CONCAT17(local_249,uStack_250);
  uStack_197 = uStack_248;
  uStack_190 = uStack_241;
  local_19f = uStack_250;
  uStack_198 = local_249;
  uStack_187 = uStack_238;
  local_18f = uStack_240;
  uStack_188 = local_239;
  uStack_15f = CONCAT17(uStack_261,uStack_268);
  local_167 = CONCAT17(local_269,uStack_270);
  uStack_1b7 = uStack_268;
  uStack_1b0 = uStack_261;
  local_1bf = uStack_270;
  uStack_1b8 = local_269;
  local_137 = CONCAT17(local_239,uStack_240);
  uStack_12f = uStack_238;
  uStack_1c8 = 0x4000000000000000;
  local_1c0 = 0;
  local_170 = 0x4000000000000000;
  local_168 = 0;
  local_1d0 = HVar11.unknown;
  uStack_180 = uStack_231;
  uStack_17f = uStack_230;
  puStack_178 = HVar11.unknown;
  uStack_128 = uStack_231;
  uStack_127 = uStack_230;
  FUN_100011090(&local_1d0,&local_120,&DAT_100fa6430,&DAT_100c26510);
  FUN_100005808(&puStack_178,&DAT_100fa6430,&DAT_100c26510);
  lStack_108 = lVar17;
  local_110 = param_2;
  FUN_1000037f0(&DAT_100fabee8,&DAT_100c2a198);
  FUN_100016eac(&DAT_100fabf88,&DAT_100fabee8,&DAT_100c2a198,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  SwiftUI::Menu::_init();
  SwiftUI::BorderlessButtonMenuStyle::init();
  puVar6 = &DAT_100fabf90;
  FUN_100016eac(&DAT_100fabf90,&DAT_100fabf70,&DAT_100c2a1f0,
                PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100eab2e0);
  puVar12 = &DAT_100fabf98;
  FUN_100003a00(&DAT_100fabf98,PTR_typeMetadataAccessor_100eab030,
                PTR_SwiftUI__SwiftUI__BorderlessButtonMenuStyle_>SwiftUI__MenuStyle_100eab020);
  puVar15 = local_318;
  puVar13 = local_328;
  puVar16 = local_318;
  (extension_SwiftUI)::SwiftUI::View::_menuStyle(lVar22,lVar18,local_328,local_318,puVar6,puVar12);
  (**(code **)(local_320 + 8))(lVar18,puVar15);
  (**(code **)(local_330 + 8))(lVar18 - extraout_x8_01,puVar13);
  puVar12 = &DAT_100c2a208;
  _swift_getKeyPath();
  puVar13 = &DAT_100fabfa0;
  puVar15 = &DAT_100c2a238;
  FUN_1000037f0(&DAT_100fabfa0,&DAT_100c2a238);
  iVar2 = *(int *)(puVar13 + 0x24);
  *(undefined8 *)(lVar22 + iVar2) = puVar12;
  *(undefined1 *)((undefined8 *)(lVar22 + iVar2) + 1) = 2;
  LVar5.unknown = local_308.unknown;
  *(undefined2 *)(lVar22 + *(int *)(local_310 + 0x24)) = 0x101;
  FUN_1001df154(LVar5.unknown);
  TVar14 = SwiftUI::Text::init(LVar5);
  FUN_1000c59c4();
  lVar17 = local_2f8;
  (extension_SwiftUI)::SwiftUI::View::accessibilityLabel(TVar14);
  FUN_100016d74(TVar14.unknown,puVar15,puVar16);
  _swift_bridgeObjectRelease(puVar6);
  FUN_100005808(lVar22,&DAT_100fabf78,&DAT_100c2a1f8);
  lVar4 = local_2d0;
  lVar18 = local_2f0;
  FUN_100011090(local_2d0,local_2f0,&DAT_100fabc78,&DAT_100c29ed0);
  lVar22 = local_2e8;
  uStack_228 = CONCAT71(uStack_187,uStack_188);
  uStack_238 = (undefined7)CONCAT71(uStack_197,uStack_198);
  uStack_231 = (undefined1)((uint7)uStack_197 >> 0x30);
  uStack_240 = (undefined7)CONCAT71(local_19f,uStack_1a0);
  local_239 = (undefined1)((uint7)local_19f >> 0x30);
  uStack_230 = (undefined7)CONCAT71(local_18f,uStack_190);
  uStack_229 = (undefined1)((uint7)local_18f >> 0x30);
  local_220 = CONCAT71(uStack_17f,uStack_180);
  uStack_268 = (undefined7)uStack_1c8;
  uStack_261 = (undefined1)((ulong)uStack_1c8 >> 0x38);
  uStack_270 = SUB87(local_1d0,0);
  local_269 = (undefined1)((ulong)local_1d0 >> 0x38);
  uStack_258 = (undefined7)CONCAT71(uStack_1b7,uStack_1b8);
  uStack_251 = (undefined1)((uint7)uStack_1b7 >> 0x30);
  uStack_260 = (undefined7)CONCAT71(local_1bf,local_1c0);
  local_259 = (undefined1)((uint7)local_1bf >> 0x30);
  uStack_248 = (undefined7)CONCAT71(uStack_1a7,uStack_1a8);
  uStack_241 = (undefined1)((uint7)uStack_1a7 >> 0x30);
  uStack_250 = (undefined7)CONCAT71(local_1af,uStack_1b0);
  local_249 = (undefined1)((uint7)local_1af >> 0x30);
  FUN_100011090(lVar17,local_2e8,&DAT_100fabf80,&DAT_100c2a200);
  lVar3 = local_2e0;
  FUN_100011090(lVar18,local_2e0,&DAT_100fabc78,&DAT_100c29ed0);
  puVar6 = &DAT_100fabfc8;
  FUN_1000037f0(&DAT_100fabfc8,&DAT_100c2a248);
  puVar10 = (undefined8 *)(lVar3 + *(int *)(puVar6 + 0x30));
  uStack_e8 = CONCAT17(uStack_231,uStack_238);
  local_f0 = CONCAT17(local_239,uStack_240);
  local_e0 = CONCAT17(uStack_229,uStack_230);
  uStack_d8 = uStack_228;
  local_d0 = local_220;
  lStack_108 = CONCAT17(uStack_251,uStack_258);
  local_110 = CONCAT17(local_259,uStack_260);
  uStack_f8 = CONCAT17(uStack_241,uStack_248);
  local_100 = CONCAT17(local_249,uStack_250);
  uStack_118 = CONCAT17(uStack_261,uStack_268);
  local_120 = CONCAT17(local_269,uStack_270);
  puVar10[7] = uStack_e8;
  puVar10[6] = local_f0;
  puVar10[9] = uStack_228;
  puVar10[8] = local_e0;
  puVar10[3] = lStack_108;
  puVar10[2] = local_110;
  puVar10[5] = uStack_f8;
  puVar10[4] = local_100;
  puVar10[10] = local_220;
  puVar10[1] = uStack_118;
  *puVar10 = local_120;
  iVar2 = *(int *)(puVar6 + 0x40);
  *(undefined8 *)(lVar3 + iVar2) = 0;
  *(undefined1 *)((undefined8 *)(lVar3 + iVar2) + 1) = 1;
  FUN_100011090(lVar22,lVar3 + *(int *)(puVar6 + 0x50),&DAT_100fabf80,&DAT_100c2a200);
  FUN_100011090(&local_120,auStack_2c8,&DAT_100fa6430,&DAT_100c26510);
  FUN_100005808(lVar17,&DAT_100fabf80,&DAT_100c2a200);
  FUN_100005808(lVar4,&DAT_100fabc78,&DAT_100c29ed0);
  FUN_100005808(lVar22,&DAT_100fabf80,&DAT_100c2a200);
  FUN_100005808(&uStack_270,&DAT_100fa6430,&DAT_100c26510);
  FUN_100005808(lVar18,&DAT_100fabc78,&DAT_100c29ed0);
  _swift_release(local_300);
  return;
}



/* Address: 0x1000bd4f0 | FUN_1000bd4f0 */

void FUN_1000bd4f0(undefined8 *param_1,Alignment param_2,char *param_3,void *param_4,char param_5)

{
  ResizingMode RVar1;
  Design DVar2;
  Storage storage;
  undefined7 extraout_var;
  Image IVar4;
  undefined7 extraout_var_00;
  Font FVar5;
  Image IVar6;
  long extraout_x8;
  long extraout_x8_00;
  CGFloat size;
  long lVar7;
  Alignment AVar8;
  long lVar9;
  String systemName;
  String SVar10;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined2 local_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined6 uStack_1ce;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 uStack_1c0;
  undefined6 uStack_1be;
  undefined2 local_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined *local_1a0;
  undefined *puStack_198;
  undefined2 local_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined2 local_178;
  undefined6 uStack_176;
  undefined2 uStack_170;
  undefined6 uStack_16e;
  undefined1 local_168;
  undefined1 uStack_167;
  undefined6 uStack_166;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined6 uStack_15e;
  undefined1 uStack_158;
  undefined6 local_150;
  undefined2 uStack_14a;
  undefined6 uStack_148;
  undefined2 uStack_142;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 local_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined1 uStack_118;
  undefined7 local_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *puVar3;
  
  puVar3 = &DAT_100fa73a0;
  FUN_1000037f0(&DAT_100fa73a0,&DAT_100c241c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_1f0 - extraout_x8;
  RVar1 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71(extraout_var,RVar1.value);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  AVar8.unknown = (undefined *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if (param_5 == '\x01') {
    _swift_bridgeObjectRetain(param_4);
    systemName.bridgeObject = param_4;
    systemName.str = param_3;
    IVar4 = SwiftUI::Image::init(systemName);
    size.unknown = (undefined *)0x3fe6666666666666;
    SwiftUI::Font::Weight::get_regular((Weight)IVar4.unknown);
    DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar2.value) + -8) + 0x38))
              (lVar7,1,1,CONCAT71(extraout_var_00,DVar2.value));
    FVar5 = SwiftUI::Font::_system(size,(Font)0x0);
    FUN_100005808(lVar7,&DAT_100fa73a0,&DAT_100c241c8);
    AVar8.unknown = &DAT_100c2a030;
    _swift_getKeyPath();
    SwiftUI::Alignment::get_center(AVar8);
    SwiftUI::_FrameLayout::_init(param_2);
    local_1e0 = SUB82(FVar5.unknown,0);
    uStack_1de = (undefined6)((ulong)FVar5.unknown >> 0x10);
    uStack_1d0 = (undefined2)uStack_148;
    uStack_1ce = (undefined6)(CONCAT26(uStack_142,uStack_148) >> 0x10);
    uStack_1d8 = (undefined2)local_150;
    uStack_1d6 = (undefined6)(CONCAT26(uStack_14a,local_150) >> 0x10);
    uStack_1c0 = (undefined2)uStack_138;
    uStack_1be = (undefined6)(CONCAT26(uStack_132,uStack_138) >> 0x10);
    uStack_1c8 = (undefined2)uStack_140;
    uStack_1c6 = (undefined6)(CONCAT26(uStack_13a,uStack_140) >> 0x10);
    uStack_1b0 = (undefined2)uStack_128;
    uStack_1ae = (undefined6)(CONCAT26(uStack_122,uStack_128) >> 0x10);
    local_1b8 = (undefined2)local_130;
    uStack_1b6 = (undefined6)(CONCAT26(uStack_12a,local_130) >> 0x10);
    uStack_160 = (undefined1)uStack_128;
    uStack_15f = (undefined1)((uint6)uStack_128 >> 8);
    local_168 = (undefined1)local_130;
    uStack_167 = (undefined1)((uint6)local_130 >> 8);
    local_1f0 = IVar4.unknown;
    puStack_1e8 = AVar8.unknown;
    local_1a0 = IVar4.unknown;
    puStack_198 = AVar8.unknown;
    local_190 = local_1e0;
    uStack_18e = uStack_1de;
    uStack_188 = uStack_1d8;
    uStack_186 = uStack_1d6;
    uStack_180 = uStack_1d0;
    uStack_17e = uStack_1ce;
    local_178 = uStack_1c8;
    uStack_176 = uStack_1c6;
    uStack_170 = uStack_1c0;
    uStack_16e = uStack_1be;
    uStack_166 = uStack_1b6;
    uStack_15e = uStack_1ae;
    FUN_100011090(&local_1f0,&local_100,&DAT_100fa9f68,&DAT_100c27520);
    FUN_100005808(&local_1a0,&DAT_100fa9f68,&DAT_100c27520);
    uStack_128 = (undefined6)CONCAT62(uStack_1c6,uStack_1c8);
    uStack_122 = (undefined2)((uint6)uStack_1c6 >> 0x20);
    local_130 = (undefined6)CONCAT62(uStack_1ce,uStack_1d0);
    uStack_12a = (undefined2)((uint6)uStack_1ce >> 0x20);
    uStack_118 = (undefined1)local_1b8;
    local_117 = (undefined7)(CONCAT62(uStack_1b6,local_1b8) >> 8);
    uStack_120 = (undefined6)CONCAT62(uStack_1be,uStack_1c0);
    uStack_11a = (undefined2)((uint6)uStack_1be >> 0x20);
    uStack_110 = (undefined1)uStack_1b0;
    uStack_10f = (undefined7)(CONCAT62(uStack_1ae,uStack_1b0) >> 8);
    uStack_148 = SUB86(puStack_1e8,0);
    uStack_142 = (undefined2)((ulong)puStack_1e8 >> 0x30);
    local_150 = SUB86(local_1f0,0);
    uStack_14a = (undefined2)((ulong)local_1f0 >> 0x30);
    uStack_138 = (undefined6)CONCAT62(uStack_1d6,uStack_1d8);
    uStack_132 = (undefined2)((uint6)uStack_1d6 >> 0x20);
    uStack_140 = (undefined6)CONCAT62(uStack_1de,local_1e0);
    uStack_13a = (undefined2)((uint6)uStack_1de >> 0x20);
    uStack_108 = 1;
    FUN_1000037f0(&DAT_100fa7cc8,&DAT_100c264d0);
    FUN_1000037f0(&DAT_100fa9f68,&DAT_100c27520);
    FUN_10002e538();
    FUN_1000822d8();
    storage.value = (__int8)&local_150;
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    IVar6 = SwiftUI::Image::_init(SVar10);
    IVar4.unknown = puVar3;
    (**(code **)(lVar9 + 0x68))
              (AVar8.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
              );
    IVar4 = SwiftUI::Image::resizable
                      ((EdgeInsets)AVar8.unknown,(ResizingMode)(__int8)IVar6.unknown,IVar4);
    _swift_release(IVar6.unknown);
    (**(code **)(lVar9 + 8))(AVar8.unknown,puVar3);
    SwiftUI::Alignment::get_center(AVar8);
    SwiftUI::_FrameLayout::_init(param_2);
    uStack_142 = (undefined2)uStack_a8;
    uStack_140 = (undefined6)((ulong)uStack_a8 >> 0x10);
    uStack_14a = (undefined2)local_b0;
    uStack_148 = (undefined6)((ulong)local_b0 >> 0x10);
    uStack_132 = (undefined2)uStack_98;
    local_130 = (undefined6)((ulong)uStack_98 >> 0x10);
    uStack_13a = (undefined2)uStack_a0;
    uStack_138 = (undefined6)((ulong)uStack_a0 >> 0x10);
    uStack_122 = (undefined2)uStack_88;
    uStack_120 = (undefined6)((ulong)uStack_88 >> 0x10);
    uStack_12a = (undefined2)local_90;
    uStack_128 = (undefined6)((ulong)local_90 >> 0x10);
    uStack_1d6 = uStack_148;
    uStack_1d0 = uStack_142;
    uStack_1de = local_150;
    uStack_1d8 = uStack_14a;
    uStack_1c6 = uStack_138;
    uStack_1c0 = uStack_132;
    uStack_1ce = uStack_140;
    uStack_1c8 = uStack_13a;
    uStack_1b6 = uStack_128;
    uStack_1be = local_130;
    local_1b8 = uStack_12a;
    puStack_1e8 = (undefined *)0x0;
    local_1e0 = 1;
    puStack_198 = (undefined *)0x0;
    local_190 = 1;
    uStack_166 = uStack_128;
    uStack_160 = (undefined1)uStack_88;
    uStack_15f = (undefined1)((ulong)uStack_88 >> 8);
    uStack_16e = local_130;
    local_168 = (undefined1)local_90;
    uStack_167 = (undefined1)((ulong)local_90 >> 8);
    uStack_176 = uStack_138;
    uStack_170 = uStack_132;
    uStack_17e = uStack_140;
    local_178 = uStack_13a;
    uStack_186 = uStack_148;
    uStack_180 = uStack_142;
    uStack_18e = local_150;
    uStack_188 = uStack_14a;
    local_1f0 = IVar4.unknown;
    uStack_1b0 = uStack_122;
    uStack_1ae = uStack_120;
    local_1a0 = IVar4.unknown;
    uStack_15e = uStack_120;
    FUN_100011090(&local_1f0,&local_100,&DAT_100fa7cc8,&DAT_100c264d0);
    FUN_100005808(&local_1a0,&DAT_100fa7cc8,&DAT_100c264d0);
    uStack_128 = (undefined6)CONCAT62(uStack_1c6,uStack_1c8);
    uStack_122 = (undefined2)((uint6)uStack_1c6 >> 0x20);
    local_130 = (undefined6)CONCAT62(uStack_1ce,uStack_1d0);
    uStack_12a = (undefined2)((uint6)uStack_1ce >> 0x20);
    uStack_118 = (undefined1)local_1b8;
    local_117 = (undefined7)(CONCAT62(uStack_1b6,local_1b8) >> 8);
    uStack_120 = (undefined6)CONCAT62(uStack_1be,uStack_1c0);
    uStack_11a = (undefined2)((uint6)uStack_1be >> 0x20);
    uStack_110 = (undefined1)uStack_1b0;
    uStack_10f = (undefined7)(CONCAT62(uStack_1ae,uStack_1b0) >> 8);
    uStack_148 = SUB86(puStack_1e8,0);
    uStack_142 = (undefined2)((ulong)puStack_1e8 >> 0x30);
    local_150 = SUB86(local_1f0,0);
    uStack_14a = (undefined2)((ulong)local_1f0 >> 0x30);
    uStack_138 = (undefined6)CONCAT62(uStack_1d6,uStack_1d8);
    uStack_132 = (undefined2)((uint6)uStack_1d6 >> 0x20);
    uStack_140 = (undefined6)CONCAT62(uStack_1de,local_1e0);
    uStack_13a = (undefined2)((uint6)uStack_1de >> 0x20);
    uStack_108 = 0;
    FUN_1000037f0(&DAT_100fa7cc8,&DAT_100c264d0);
    FUN_1000037f0(&DAT_100fa9f68,&DAT_100c27520);
    FUN_10002e538();
    FUN_1000822d8();
    storage.value = (__int8)&local_150;
  }
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
  local_178 = (undefined2)uStack_d8;
  uStack_176 = (undefined6)((ulong)uStack_d8 >> 0x10);
  uStack_180 = (undefined2)local_e0;
  uStack_17e = (undefined6)((ulong)local_e0 >> 0x10);
  uStack_170 = (undefined2)uStack_d0;
  uStack_16e = (undefined6)((ulong)uStack_d0 >> 0x10);
  uStack_15f = (undefined1)uStack_bf;
  uStack_15e = (undefined6)((ulong)uStack_bf >> 8);
  uStack_158 = (undefined1)((ulong)uStack_bf >> 0x38);
  uStack_167 = (undefined1)local_c7;
  uStack_166 = (undefined6)((uint7)local_c7 >> 8);
  puStack_198 = (undefined *)uStack_f8;
  local_1a0 = local_100;
  uStack_188 = (undefined2)uStack_e8;
  uStack_186 = (undefined6)((ulong)uStack_e8 >> 0x10);
  local_190 = (undefined2)uStack_f0;
  uStack_18e = (undefined6)((ulong)uStack_f0 >> 0x10);
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = CONCAT71(local_c7,uStack_c8);
  param_1[6] = uStack_d0;
  *(undefined8 *)((long)param_1 + 0x41) = uStack_bf;
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_c0,local_c7);
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  uStack_128 = (undefined6)uStack_d8;
  uStack_122 = (undefined2)((ulong)uStack_d8 >> 0x30);
  local_130 = (undefined6)local_e0;
  uStack_12a = (undefined2)((ulong)local_e0 >> 0x30);
  uStack_120 = (undefined6)uStack_d0;
  uStack_11a = (undefined2)((ulong)uStack_d0 >> 0x30);
  uStack_148 = (undefined6)uStack_f8;
  uStack_142 = (undefined2)((ulong)uStack_f8 >> 0x30);
  local_150 = SUB86(local_100,0);
  uStack_14a = (undefined2)((ulong)local_100 >> 0x30);
  uStack_138 = (undefined6)uStack_e8;
  uStack_132 = (undefined2)((ulong)uStack_e8 >> 0x30);
  uStack_140 = (undefined6)uStack_f0;
  uStack_13a = (undefined2)((ulong)uStack_f0 >> 0x30);
  uStack_10f = (undefined7)uStack_bf;
  uStack_108 = uStack_158;
  FUN_100011090(&local_1a0,&local_1f0,&DAT_100fabc80,&DAT_100c29ed8);
  FUN_100005808(&local_150,&DAT_100fabc80,&DAT_100c29ed8);
  return;
}



/* Address: 0x1000bd958 | FUN_1000bd958 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000bda50 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000bd958(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined *param_5)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  Text TVar5;
  Text TVar6;
  Font FVar7;
  Text TVar8;
  HierarchicalShapeStyle HVar9;
  Text TVar10;
  undefined *puVar11;
  undefined *puVar12;
  Text TVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar12 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    param_5 = (undefined *)0xf5;
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xf5,UVar3.unknown,puVar2);
  }
  FUN_1000b72d4();
  FUN_100008378();
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar14 = param_3;
  TVar5 = SwiftUI::Text::_init();
  HVar9.unknown = param_5;
  FUN_1000bdbb4();
  TVar6 = SwiftUI::Text::_init(TVar5.unknown,puVar12,param_3);
  FVar7 = SwiftUI::Font::get_caption(TVar6.unknown);
  TVar13 = TVar6;
  puVar15 = puVar12;
  uVar16 = param_3;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100016d74(TVar6.unknown,puVar12,param_3);
  _swift_bridgeObjectRelease();
  SwiftUI::HierarchicalShapeStyle::get_secondary(HVar9);
  FUN_1000c4248();
  TVar6 = TVar8;
  puVar12 = TVar13.unknown;
  puVar17 = puVar15;
  TVar10 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar8.unknown,TVar13.unknown,puVar15);
  _swift_bridgeObjectRelease(uVar16);
  *param_1 = TVar5.unknown;
  param_1[1] = puVar11;
  *(char *)(param_1 + 2) = (char)uVar14;
  param_1[3] = param_5;
  param_1[4] = TVar10.unknown;
  param_1[5] = TVar6.unknown;
  *(char *)(param_1 + 6) = (char)puVar12;
  param_1[7] = puVar17;
  FUN_100016d5c(TVar5.unknown,puVar11,uVar14 & 0xffffffff);
  _swift_bridgeObjectRetain(param_5);
  FUN_100016d5c(TVar10.unknown,TVar6.unknown,puVar12);
  _swift_bridgeObjectRetain(puVar17);
  FUN_100016d74(TVar10.unknown,TVar6.unknown,puVar12);
  _swift_bridgeObjectRelease(puVar17);
  FUN_100016d74(TVar5.unknown,puVar11,uVar14 & 0xffffffff);
  _swift_release(pMVar1);
  _swift_bridgeObjectRelease(param_5);
  return;
}



/* Address: 0x1000bdbb4 | FUN_1000bdbb4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1000bdbb4(long param_1)

{
  ID self;
  LocalizedStringResource LVar1;
  Date DVar2;
  long lVar3;
  NSDate *pNVar4;
  Date DVar5;
  NSDate *pNVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  String SVar12;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)LVar1.unknown - extraout_x8_00;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar7 = (undefined *)(lVar8 - extraout_x12);
  lVar3 = 0;
  FUN_10045ba0c();
  FUN_100011090(param_1 + *(int *)(lVar3 + 0x20),lVar9,&DAT_100fa6660,&DAT_100c22e18);
  lVar3 = lVar9;
  (**(code **)(lVar11 + 0x30))(lVar9,1,DVar2.unknown);
  if ((int)lVar3 == 1) {
    FUN_100005808(lVar9,&DAT_100fa6660,&DAT_100c22e18);
    FUN_1001df454(LVar1.unknown);
    SVar12 = (extension_Foundation)::Swift::String::init(LVar1);
  }
  else {
    DVar5.unknown = puVar7;
    (**(code **)(lVar11 + 0x20))(puVar7,lVar9,DVar2.unknown);
    if (DAT_100fabfd0 != -1) {
      DVar5.unknown = (undefined *)&DAT_100fabfd0;
      _swift_once(&DAT_100fabfd0,FUN_1000b43b8);
    }
    self = DAT_100fabfd8;
    pNVar4 = Foundation::Date::_bridgeToObjectiveC(DVar5);
    DVar5 = Foundation::Date::init();
    pNVar6 = Foundation::Date::_bridgeToObjectiveC(DVar5);
    pcVar10 = *(code **)(lVar11 + 8);
    (*pcVar10)(lVar8,DVar2.unknown);
    objc_stub::localizedStringForDate_relativeToDate_(self,pNVar4,pNVar6);
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    thunk_FUN_1001e7154(LVar1.unknown,SVar12.str,SVar12.bridgeObject);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    SVar12 = (extension_Foundation)::Swift::String::init(LVar1);
    (*pcVar10)(puVar7,DVar2.unknown);
  }
  return SVar12;
}



/* Address: 0x1000bde1c | FUN_1000bde1c */

void FUN_1000bde1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  local_70 = param_3;
  local_68 = param_1;
  FUN_10045ba0c();
  lVar9 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)&local_70 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1000b292c();
  lVar3 = *(long *)(lVar3 + -8);
  lVar15 = *(long *)(lVar3 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar11 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xfc,UVar6.unknown,puVar5);
  }
  FUN_1000c495c(param_2,lVar14,FUN_1000b292c);
  FUN_1000c495c(local_70,lVar11,FUN_10045ba0c);
  bVar1 = *(byte *)(lVar3 + 0x50);
  uVar13 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar9 + 0x50);
  uVar10 = lVar15 + (ulong)bVar2 + uVar13 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100eb4920;
  _swift_allocObject(&DAT_100eb4920,uVar10 + lVar12,bVar1 | bVar2 | 7);
  FUN_1000523d8(lVar14,puVar8 + uVar13,FUN_1000b292c);
  FUN_1000523d8(lVar11,puVar8 + uVar10,FUN_10045ba0c);
  FUN_1000037f0(&DAT_100fabef8,&DAT_100c2a1a8);
  FUN_100016eac(&DAT_100fabf00,&DAT_100fabef8,&DAT_100c2a1a8,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100eab7d8);
  SwiftUI::Button::_init();
  _swift_release(pMVar4);
  return;
}



/* Address: 0x1000be034 | FUN_1000be034 */

void FUN_1000be034(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar8;
  long lVar9;
  
  puVar2 = &DAT_100faba30;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)puVar8 - extraout_x12;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xfd,UVar5.unknown,puVar4);
  }
  FUN_1000c495c(param_2,lVar9,FUN_10045ba0c);
  lVar7 = 0;
  FUN_10045ba0c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar9,0,1,lVar7);
  lVar7 = 0;
  FUN_1000b292c();
  iVar1 = *(int *)(lVar7 + 0x18);
  FUN_100011090(lVar9,puVar8,&DAT_100faba30,&DAT_100c29c60);
  puVar2 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),puVar8,puVar2);
  FUN_100005808(lVar9,&DAT_100faba30,&DAT_100c29c60);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1000be1e8 | FUN_1000be1e8 */

void FUN_1000be1e8(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0xff,UVar4.unknown,puVar3);
  }
  SwiftUI::Label::_init();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000be2c4 | FUN_1000be2c4 */

void FUN_1000be2c4(void)

{
  FUN_1000b7080(0x100,FUN_1001de254);
  return;
}



/* Address: 0x1000be2d4 | FUN_1000be2d4 */

void FUN_1000be2d4(void)

{
  FUN_1000be2f4(0x102,FUN_10020dafc);
  return;
}



/* Address: 0x1000be2e4 | FUN_1000be2e4 */

void FUN_1000be2e4(void)

{
  FUN_1000be2f4(0x106,FUN_10020cecc);
  return;
}



/* Address: 0x1000be2f4 | FUN_1000be2f4 */

void FUN_1000be2f4(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  String systemName;
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Image IVar6;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,param_2,UVar4.unknown,puVar3);
  }
  (*param_3)();
  systemName = *(String *)pcVar5;
  _swift_bridgeObjectRetain(((String *)pcVar5)->bridgeObject);
  IVar6 = SwiftUI::Image::init(systemName);
  _swift_release(pMVar2);
  *param_1 = IVar6.unknown;
  return;
}



/* Address: 0x1000be3c8 | FUN_1000be3c8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000be758 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000be3c8(undefined8 *param_1,Text param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,Weight param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  void *pvVar7;
  undefined *puVar8;
  LocalizedStringResource LVar9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  Text TVar13;
  Font FVar14;
  Text TVar15;
  State SVar16;
  Binding<undefined> BVar17;
  VerticalAlignment VVar18;
  undefined8 *puVar19;
  Text TVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  long extraout_x8;
  undefined8 *puVar23;
  long extraout_x8_00;
  long lVar24;
  long extraout_x8_01;
  undefined *puVar25;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar26;
  String SVar27;
  undefined8 auStack_160 [4];
  undefined *apuStack_140 [2];
  undefined4 local_12c;
  undefined8 local_128;
  undefined *local_120;
  undefined *local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  MainActor *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  String local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar8 = &DAT_100fabc00;
  local_d8 = param_3;
  local_c8 = param_1;
  FUN_1000037f0(&DAT_100fabc00,&DAT_100c29e30);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar24 = (long)apuStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar23 = (undefined8 *)(lVar24 - extraout_x12);
  local_d0 = puVar23;
  local_f0 = (undefined *)SwiftUI::RoundedBorderTextFieldStyle::typeMetadataAccessor();
  local_f8 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f8 + 0x40));
  lVar24 = (long)puVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fabc08;
  local_100 = lVar24;
  FUN_1000037f0(&DAT_100fabc08,&DAT_100c29e38);
  local_110 = *(long *)(puVar8 + -8);
  local_108 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar25 = (undefined *)(lVar24 - extraout_x8_01);
  puVar8 = &DAT_100fabc10;
  local_118 = puVar25;
  FUN_1000037f0(&DAT_100fabc10,&DAT_100c29e40);
  local_b8 = *(long *)(puVar8 + -8);
  local_e0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b8 + 0x40));
  lVar24 = (long)puVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar24 - extraout_x12_00;
  local_c0 = lVar24;
  LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  LVar9.unknown = (undefined *)(lVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  puVar23 = &DAT_100fa6bb0;
  puVar25 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_e8 = pMVar10;
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  puVar19 = puVar23;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    puVar19 = (undefined8 *)0x1b;
    puVar25 = &DAT_00000001;
    param_6.unknown = (undefined *)0x112;
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x112,UVar11.unknown,puVar23);
  }
  FUN_1001dcbd4(LVar9.unknown);
  TVar13 = SwiftUI::Text::init(LVar9);
  FVar14 = SwiftUI::Font::get_title3(TVar13.unknown);
  TVar20 = TVar13;
  puVar23 = puVar19;
  puVar22 = puVar25;
  TVar15 = SwiftUI::Text::_font(FVar14.unknown);
  _swift_release(FVar14.unknown);
  FUN_100016d74(TVar13.unknown,puVar19,puVar25);
  _swift_bridgeObjectRelease();
  SwiftUI::Font::Weight::get_semibold(param_6);
  uVar21 = 0;
  TVar13 = TVar15;
  puVar8 = TVar20.unknown;
  local_120 = (undefined *)SwiftUI::Text::_fontWeight(param_2);
  local_12c = SUB84(TVar13.unknown,0);
  apuStack_140[1] = puVar8;
  local_128 = uVar21;
  FUN_100016d74(TVar15.unknown,TVar20.unknown,puVar23);
  _swift_bridgeObjectRelease(puVar22);
  FUN_1001dca54(LVar9.unknown);
  SVar27 = (extension_Foundation)::Swift::String::init(LVar9);
  lVar4 = local_d8;
  uStack_78 = *(undefined8 *)(local_d8 + 0x18);
  local_80 = *(undefined8 *)(local_d8 + 0x10);
  local_70 = *(undefined8 *)(local_d8 + 0x20);
  SVar16.unknown = &DAT_100fabc18;
  FUN_1000037f0(&DAT_100fabc18,&DAT_100c29e48);
  BVar17 = SwiftUI::State::get_projectedValue(SVar16);
  pcVar6 = local_a0.str;
  pvVar7 = local_a0.bridgeObject;
  local_a0 = SVar27;
  FUN_100008378();
  *(undefined **)(LVar9.unknown + -0x10) = BVar17.unknown;
  *(undefined8 *)(LVar9.unknown + -0x20) = 0;
  *(undefined **)(LVar9.unknown + -0x18) = PTR___type_metadata_for_Swift_String_100eac208;
  VVar18.unknown = local_118;
  (extension_SwiftUI)::SwiftUI::TextField::_init
            (local_118,BVar17.unknown,pcVar6,pvVar7,local_90,uStack_88,FUN_100004520,0,FUN_100004520
            );
  lVar24 = local_100;
  SwiftUI::RoundedBorderTextFieldStyle::init();
  puVar8 = &DAT_100fabc20;
  FUN_100016eac(&DAT_100fabc20,&DAT_100fabc08,&DAT_100c29e38,
                PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_100eabb10);
  puVar25 = &DAT_100fabc28;
  FUN_100003a00(&DAT_100fabc28,PTR_typeMetadataAccessor_100eab0a8,
                PTR_SwiftUI__SwiftUI__RoundedBorderTextFieldStyle_>SwiftUI__TextFieldStyle_100eab098
               );
  lVar5 = local_c0;
  puVar3 = local_f0;
  puVar2 = local_108;
  (extension_SwiftUI)::SwiftUI::View::_textFieldStyle
            (local_c0,lVar24,local_108,local_f0,puVar8,puVar25);
  (**(code **)(local_f8 + 8))(lVar24,puVar3);
  (**(code **)(local_110 + 8))(VVar18.unknown,puVar2);
  VVar18 = SwiftUI::VerticalAlignment::get_center(VVar18);
  puVar23 = local_d0;
  *local_d0 = VVar18.unknown;
  puVar23[1] = 0;
  *(undefined1 *)(puVar23 + 2) = 1;
  puVar8 = &DAT_100fabc38;
  FUN_1000037f0(&DAT_100fabc38,&DAT_100c29e50);
  FUN_1000be998((long)puVar23 + (long)*(int *)(puVar8 + 0x2c),lVar4);
  lVar24 = local_b0;
  puVar3 = local_e0;
  pcVar26 = *(code **)(local_b8 + 0x10);
  (*pcVar26)(local_b0,lVar5,local_e0);
  FUN_100011090(puVar23,local_a8,&DAT_100fabc00,&DAT_100c29e30);
  puVar19 = local_c8;
  puVar2 = local_120;
  uVar21 = local_128;
  uVar1 = local_12c;
  puVar25 = apuStack_140[1];
  *local_c8 = local_120;
  local_c8[1] = local_128;
  *(char *)(local_c8 + 2) = (char)local_12c;
  local_c8[3] = apuStack_140[1];
  puVar8 = &DAT_100fabe20;
  FUN_1000037f0(&DAT_100fabe20,&DAT_100c2a080);
  (*pcVar26)((long)puVar19 + (long)*(int *)(puVar8 + 0x30),lVar24,puVar3);
  lVar24 = local_a8;
  FUN_100011090(local_a8,(long)puVar19 + (long)*(int *)(puVar8 + 0x40),&DAT_100fabc00,&DAT_100c29e30
               );
  FUN_100016d5c(puVar2,uVar21,uVar1);
  _swift_bridgeObjectRetain(puVar25);
  FUN_100005808(puVar23,&DAT_100fabc00,&DAT_100c29e30);
  pcVar26 = *(code **)(local_b8 + 8);
  (*pcVar26)(local_c0,puVar3);
  FUN_100005808(lVar24,&DAT_100fabc00,&DAT_100c29e30);
  (*pcVar26)(local_b0,puVar3);
  FUN_100016d74(puVar2,uVar21,uVar1);
  _swift_release(local_e8);
  _swift_bridgeObjectRelease(puVar25);
  return;
}



/* Address: 0x1000be998 | FUN_1000be998 */

void FUN_1000be998(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  CharacterSet in;
  long lVar4;
  undefined *puVar5;
  KeyboardShortcut KVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  char *pcVar10;
  ButtonRole BVar11;
  Button<undefined> BVar12;
  CharacterSet CVar13;
  undefined *puVar14;
  void *pvVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar16;
  long extraout_x8_04;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  KeyboardShortcut KVar18;
  ulong uVar19;
  ulong uVar20;
  code *pcVar21;
  String SVar22;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  code *local_f8;
  MainActor *local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  CharacterSet local_d0;
  long local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  undefined8 *local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_100 = param_2;
  local_a0 = param_1;
  puStack_c0 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_c8 = *(long *)(puStack_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8 + 0x40));
  puVar14 = (undefined *)((long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100fabc48;
  local_d0.unknown = puVar14;
  FUN_1000037f0(&DAT_100fabc48,&DAT_100c29e60);
  local_b8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar17 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12;
  local_b0 = lVar17;
  KVar6 = SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_f8 = *(code **)(KVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_f8 + 0x40));
  KVar18.unknown = (undefined *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar17 = 0;
  FUN_1000b292c();
  local_118 = *(long *)(lVar17 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = (long)KVar18.unknown - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fa6e90;
  local_98 = extraout_x12_00;
  FUN_1000037f0(&DAT_100fa6e90,&DAT_100c239b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fa6e58;
  FUN_1000037f0(&DAT_100fa6e58,&DAT_100c26330);
  local_110 = *(long *)(puVar5 + -8);
  local_108 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar16 = (lVar17 - extraout_x8_02) - extraout_x8_03;
  puVar5 = &DAT_100fabc50;
  local_120 = lVar16;
  FUN_1000037f0(&DAT_100fabc50,&DAT_100c29e68);
  local_e8 = *(long *)(puVar5 + -8);
  local_d8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  lVar16 = lVar16 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar8 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_f0 = pMVar7;
  UVar9 = Swift::Actor::get_unownedExecutor();
  pcVar10 = (char *)UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar10 & 1) == 0) {
    pcVar10 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x11b,UVar9.unknown,puVar8);
  }
  SwiftUI::ButtonRole::get_cancel((ButtonRole)pcVar10);
  BVar11 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar11.unknown + -8) + 0x38))(lVar17 - extraout_x8_02,0,1,BVar11.unknown);
  lVar2 = local_100;
  FUN_1000c495c(local_100,lVar17,FUN_1000b292c);
  uVar20 = (ulong)*(byte *)(local_118 + 0x50);
  uVar19 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100eb47b8;
  _swift_allocObject(&DAT_100eb47b8,uVar19 + local_98,uVar20 | 7);
  FUN_1000523d8(lVar17,puVar5 + uVar19,FUN_1000b292c);
  lVar1 = local_120;
  BVar12 = SwiftUI::Button::_init();
  SwiftUI::KeyboardShortcut::get_cancelAction((KeyboardShortcut)BVar12.unknown);
  puVar5 = &DAT_100fa6e78;
  FUN_100016eac(&DAT_100fa6e78,&DAT_100fa6e58,&DAT_100c26330,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar14 = local_108;
  local_128 = puVar5;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar18);
  local_f8 = *(code **)((long)local_f8 + 8);
  local_118 = lVar16 - extraout_x12_01;
  (*local_f8)(KVar18.unknown,KVar6.unknown);
  pcVar21 = *(code **)(local_110 + 8);
  local_130 = KVar6.unknown;
  (*pcVar21)(lVar1,puVar14);
  FUN_1000c495c(lVar2,lVar17,FUN_1000b292c);
  puVar5 = &DAT_100eb47e0;
  _swift_allocObject(&DAT_100eb47e0,uVar19 + local_98,uVar20 | 7);
  FUN_1000523d8(lVar17,puVar5 + uVar19,FUN_1000b292c);
  BVar12 = SwiftUI::Button::_init();
  SwiftUI::KeyboardShortcut::get_defaultAction((KeyboardShortcut)BVar12.unknown);
  lVar17 = local_b0;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar18);
  (*local_f8)(KVar18.unknown,local_130);
  (*pcVar21)(lVar1,puVar14);
  uStack_78 = *(undefined8 *)(lVar2 + 0x18);
  local_80 = *(undefined8 *)(lVar2 + 0x10);
  local_70 = *(undefined8 *)(lVar2 + 0x20);
  CVar13.unknown = &DAT_100fabc18;
  FUN_1000037f0(&DAT_100fabc18,&DAT_100c29e48);
  SwiftUI::State::get_wrappedValue((State)CVar13.unknown);
  in.unknown = local_d0.unknown;
  local_80 = local_90;
  uStack_78 = uStack_88;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar13);
  FUN_100008378();
  SVar22 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar15 = SVar22.bridgeObject;
  (**(code **)(local_c8 + 8))(in.unknown,puStack_c0);
  _swift_bridgeObjectRelease(uStack_88);
  _swift_bridgeObjectRelease(pvVar15);
  uVar19 = (ulong)SVar22.str & 0xffffffffffff;
  if (((ulong)pvVar15 & 0x2000000000000000) != 0) {
    uVar19 = (ulong)pvVar15 >> 0x38 & 0xf;
  }
  puVar5 = &DAT_100c29e70;
  _swift_getKeyPath();
  puVar14 = &DAT_100eb4808;
  _swift_allocObject(&DAT_100eb4808,0x11,7);
  puVar3 = local_d8;
  lVar2 = local_e0;
  lVar1 = local_e8;
  lVar16 = local_118;
  puVar14[0x10] = uVar19 == 0;
  puVar8 = (undefined8 *)(lVar17 + *(int *)(local_b8 + 0x24));
  *puVar8 = puVar5;
  puVar8[1] = thunk_FUN_100082388;
  puVar8[2] = puVar14;
  pcVar21 = *(code **)(local_e8 + 0x10);
  (*pcVar21)(local_e0,local_118,local_d8);
  lVar4 = local_a8;
  FUN_100011090(lVar17,local_a8,&DAT_100fabc48,&DAT_100c29e60);
  puVar8 = local_a0;
  *local_a0 = 0;
  *(undefined1 *)(local_a0 + 1) = 1;
  puVar5 = &DAT_100fabc58;
  FUN_1000037f0(&DAT_100fabc58,&DAT_100c29ea0);
  (*pcVar21)((long)puVar8 + (long)*(int *)(puVar5 + 0x30),lVar2,puVar3);
  FUN_100011090(lVar4,(long)puVar8 + (long)*(int *)(puVar5 + 0x40),&DAT_100fabc48,&DAT_100c29e60);
  FUN_100005808(lVar17,&DAT_100fabc48,&DAT_100c29e60);
  pcVar21 = *(code **)(lVar1 + 8);
  (*pcVar21)(lVar16,puVar3);
  FUN_100005808(lVar4,&DAT_100fabc48,&DAT_100c29e60);
  (*pcVar21)(lVar2,puVar3);
  _swift_release(local_f0);
  return;
}



/* Address: 0x1000bf044 | FUN_1000bf044 */

void FUN_1000bf044(long param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 local_31;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x11d,UVar3.unknown,puVar2);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar5 = &DAT_100c29d70;
  _swift_getKeyPath(&DAT_100c29d70);
  puVar6 = &DAT_100c2a088;
  _swift_getKeyPath(&DAT_100c2a088);
  local_31 = 0;
  _swift_retain(uVar7);
  Combine::Published::_set_subscript((Published *)pMVar1,&local_31,uVar7,puVar5,puVar6);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x1000bf130 | FUN_1000bf130 */

void FUN_1000bf130(void)

{
  FUN_1000b7080(0x11f,FUN_1001dc754);
  return;
}



/* Address: 0x1000bf140 | FUN_1000bf140 */

void FUN_1000bf140(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  State SVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x123,UVar4.unknown,puVar3);
  }
  SVar6.unknown = &DAT_100fabc18;
  FUN_1000037f0(&DAT_100fabc18,&DAT_100c29e48);
  SwiftUI::State::get_wrappedValue(SVar6);
  FUN_1000c791c(local_68,uStack_60);
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(uStack_60);
  return;
}



/* Address: 0x1000bf240 | FUN_1000bf240 */

void FUN_1000bf240(void)

{
  FUN_1000b7080(0x125,FUN_1001dc8d4);
  return;
}



/* Address: 0x1000bf250 | FUN_1000bf250 */

void FUN_1000bf250(long param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined8 *puVar10;
  HorizontalAlignment HVar11;
  VerticalAlignment VVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long local_380;
  MainActor *local_378;
  undefined8 *local_370;
  long local_368;
  long local_360;
  long local_358;
  long local_350;
  long local_348;
  undefined1 auStack_340 [96];
  undefined7 uStack_2e0;
  undefined1 local_2d9;
  undefined7 uStack_2d8;
  undefined1 uStack_2d1;
  undefined7 uStack_2d0;
  undefined1 local_2c9;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined7 uStack_2c0;
  undefined1 local_2b9;
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  undefined7 uStack_2b0;
  undefined1 local_2a9;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined5 uStack_290;
  undefined8 uStack_28b;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined5 uStack_248;
  undefined3 local_243;
  undefined5 uStack_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  undefined7 local_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 local_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 local_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined4 uStack_197;
  undefined4 local_193;
  undefined4 uStack_18f;
  undefined8 uStack_18b;
  undefined *local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_16f;
  undefined8 uStack_167;
  undefined8 local_15f;
  undefined8 uStack_157;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 uStack_13f;
  undefined4 uStack_137;
  undefined4 local_133;
  undefined4 uStack_12f;
  undefined8 uStack_12b;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined3 local_d3;
  undefined5 uStack_d0;
  undefined8 uStack_cb;
  undefined1 auStack_c0 [96];
  
  puVar6 = &DAT_100fabc68;
  FUN_1000037f0(&DAT_100fabc68,&DAT_100c29ec0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar16 = (long)&local_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar6 = &DAT_100fabc70;
  local_370 = (undefined8 *)(lVar16 - extraout_x12);
  FUN_1000037f0(&DAT_100fabc70,&DAT_100c29ec8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar13 = (lVar16 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_358 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12_00;
  puVar6 = &DAT_100fabc78;
  local_380 = lVar13;
  FUN_1000037f0(&DAT_100fabc78,&DAT_100c29ed0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_368 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar10 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_378 = pMVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x131,UVar8.unknown,puVar10);
  }
  uVar14 = 0x6e6f63692e70636d;
  puVar10 = (undefined8 *)0x0;
  FUN_1000c99d0();
  bVar1 = param_3[*(int *)((long)puVar10 + 0x14)];
  local_360 = param_1;
  local_350 = lVar16;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      uVar15 = 0;
      uVar17 = 0xef656475616c632e;
    }
    else {
      uVar15 = 0;
      if (bVar1 == 2) {
        uVar17 = 0xee007865646f632e;
      }
      else {
        uVar17 = 0xef726f737275632e;
      }
    }
  }
  else if (bVar1 == 4) {
    uVar15 = 0;
    uVar17 = 0xef65646f6373762e;
  }
  else if (bVar1 == 5) {
    uVar15 = 0;
    uVar17 = 0x8000000100d8f730;
    uVar14 = 0xd000000000000011;
  }
  else {
    FUN_10020dc18();
    uVar14 = *puVar10;
    uVar17 = puVar10[1];
    _swift_bridgeObjectRetain(uVar17);
    uVar15 = 1;
  }
  FUN_1000bd4f0(auStack_c0,0x4046800000000000,uVar14,uVar17,uVar15);
  FUN_10002cca0(uVar14,uVar17,uVar15);
  FUN_1000037f0(&DAT_100fabc80,&DAT_100c29ed8);
  FUN_1000c48d8();
  local_348 = lVar13 - extraout_x12_01;
  (extension_SwiftUI)::SwiftUI::View::accessibilityHidden(true);
  HVar11.unknown = auStack_c0;
  FUN_100005808(HVar11.unknown,&DAT_100fabc80,&DAT_100c29ed8);
  HVar11 = SwiftUI::HorizontalAlignment::get_leading(HVar11);
  FUN_1000bf91c(&local_120,param_3,param_2);
  uStack_258 = uStack_f8;
  local_260 = local_100;
  uStack_248 = uStack_e8;
  uStack_250 = local_f0;
  local_243 = uStack_e3;
  uStack_240 = uStack_e0;
  uStack_278 = uStack_118;
  local_280 = local_120;
  uStack_268 = uStack_108;
  uStack_270 = local_110;
  uStack_208 = uStack_f8;
  local_210 = local_100;
  uStack_200 = local_f0;
  uStack_228 = uStack_118;
  local_230 = local_120;
  uStack_218 = uStack_108;
  uStack_220 = local_110;
  FUN_100011090(&local_280,&local_180,&DAT_100fabc90,&DAT_100c29ee0);
  FUN_100005808(&local_230,&DAT_100fabc90,&DAT_100c29ee0);
  uStack_2d1 = (undefined1)uStack_278;
  uStack_2d0 = (undefined7)((ulong)uStack_278 >> 8);
  local_2d9 = (undefined1)local_280;
  uStack_2d8 = (undefined7)((ulong)local_280 >> 8);
  uStack_2c1 = (undefined1)uStack_268;
  uStack_2c0 = (undefined7)((ulong)uStack_268 >> 8);
  local_2c9 = (undefined1)uStack_270;
  uStack_2c8 = (undefined7)((ulong)uStack_270 >> 8);
  uStack_2b1 = (undefined1)uStack_258;
  uStack_2b0 = (undefined7)((ulong)uStack_258 >> 8);
  local_2b9 = (undefined1)local_260;
  uStack_2b8 = (undefined7)((ulong)local_260 >> 8);
  uStack_2a4._3_1_ = (undefined1)uStack_248;
  uStack_2a0 = (undefined4)((uint5)uStack_248 >> 8);
  local_2a9 = (undefined1)uStack_250;
  uStack_2a8 = (undefined4)((ulong)uStack_250 >> 8);
  uStack_2a4._0_3_ = (undefined3)((ulong)uStack_250 >> 0x28);
  uStack_29c = (undefined4)CONCAT53(uStack_240,local_243);
  uStack_298 = (undefined4)((uint5)uStack_240 >> 8);
  uStack_157 = CONCAT17(uStack_2c1,uStack_2c8);
  local_15f = CONCAT17(local_2c9,uStack_2d0);
  uStack_1c7 = uStack_2d8;
  uStack_1c0 = uStack_2d1;
  local_1cf = uStack_2e0;
  uStack_1c8 = local_2d9;
  uStack_18b = CONCAT44(uStack_298,uStack_29c);
  uStack_18f = uStack_2a0;
  uStack_197 = uStack_2a8;
  local_193 = uStack_2a4;
  uStack_19f = uStack_2b0;
  uStack_198 = local_2a9;
  uStack_147 = CONCAT17(uStack_2b1,uStack_2b8);
  local_14f = CONCAT17(local_2b9,uStack_2c0);
  uStack_13f = CONCAT17(local_2a9,uStack_2b0);
  uStack_1a7 = uStack_2b8;
  uStack_1a0 = uStack_2b1;
  local_1af = uStack_2c0;
  uStack_1a8 = local_2b9;
  uStack_167 = CONCAT17(uStack_2d1,uStack_2d8);
  local_16f = CONCAT17(local_2d9,uStack_2e0);
  uStack_1b7 = uStack_2c8;
  uStack_1b0 = uStack_2c1;
  local_1bf = uStack_2d0;
  uStack_1b8 = local_2c9;
  uStack_1d8 = 0x4010000000000000;
  local_1d0 = 0;
  local_178 = 0x4010000000000000;
  local_170 = 0;
  uStack_12b = CONCAT44(uStack_298,uStack_29c);
  uStack_12f = uStack_2a0;
  uStack_137 = uStack_2a8;
  local_133 = uStack_2a4;
  local_1e0 = HVar11.unknown;
  local_180 = HVar11.unknown;
  FUN_100011090(&local_1e0,&local_120,&DAT_100fabc98,&DAT_100c29ee8);
  FUN_100005808(&local_180,&DAT_100fabc98,&DAT_100c29ee8);
  lVar13 = local_380;
  VVar12.unknown = param_3;
  FUN_1000c0b78(local_380);
  VVar12 = SwiftUI::VerticalAlignment::get_center(VVar12);
  puVar2 = local_370;
  *local_370 = VVar12.unknown;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar6 = &DAT_100fabca0;
  FUN_1000037f0(&DAT_100fabca0,&DAT_100c29ef0);
  FUN_1000c2388((long)puVar2 + (long)*(int *)(puVar6 + 0x2c),param_2,param_3);
  lVar16 = local_368;
  FUN_100011090(local_348,local_368,&DAT_100fabc78,&DAT_100c29ed0);
  lVar4 = local_358;
  uStack_2b8 = (undefined7)CONCAT71(uStack_1b7,uStack_1b8);
  uStack_2b1 = (undefined1)((uint7)uStack_1b7 >> 0x30);
  uStack_2c0 = (undefined7)CONCAT71(local_1bf,uStack_1c0);
  local_2b9 = (undefined1)((uint7)local_1bf >> 0x30);
  uStack_2a8 = (undefined4)CONCAT71(uStack_1a7,uStack_1a8);
  uStack_2a4 = (undefined4)((uint7)uStack_1a7 >> 0x18);
  uStack_2b0 = (undefined7)CONCAT71(local_1af,uStack_1b0);
  local_2a9 = (undefined1)((uint7)local_1af >> 0x30);
  uStack_298 = (undefined4)CONCAT41(uStack_197,uStack_198);
  uStack_2a0 = (undefined4)CONCAT71(uStack_19f,uStack_1a0);
  uStack_29c = (undefined4)((uint7)uStack_19f >> 0x18);
  uStack_28b = uStack_18b;
  uStack_294._1_3_ = (undefined3)local_193;
  uStack_294 = CONCAT31(uStack_294._1_3_,(char)((uint)uStack_197 >> 0x18));
  uStack_290 = (undefined5)(CONCAT44(uStack_18f,local_193) >> 0x18);
  uStack_2d8 = (undefined7)uStack_1d8;
  uStack_2d1 = (undefined1)((ulong)uStack_1d8 >> 0x38);
  uStack_2e0 = SUB87(local_1e0,0);
  local_2d9 = (undefined1)((ulong)local_1e0 >> 0x38);
  uStack_2c8 = (undefined7)CONCAT71(uStack_1c7,uStack_1c8);
  uStack_2c1 = (undefined1)((uint7)uStack_1c7 >> 0x30);
  uStack_2d0 = (undefined7)CONCAT71(local_1cf,local_1d0);
  local_2c9 = (undefined1)((uint7)local_1cf >> 0x30);
  FUN_100011090(lVar13,local_358,&DAT_100fabc70,&DAT_100c29ec8);
  lVar5 = local_350;
  FUN_100011090(puVar2,local_350,&DAT_100fabc68,&DAT_100c29ec0);
  lVar3 = local_360;
  FUN_100011090(lVar16,local_360,&DAT_100fabc78,&DAT_100c29ed0);
  puVar6 = &DAT_100fabca8;
  FUN_1000037f0(&DAT_100fabca8,&DAT_100c29ef8);
  puVar10 = (undefined8 *)(lVar3 + *(int *)(puVar6 + 0x30));
  local_f0 = CONCAT17(local_2a9,uStack_2b0);
  uStack_e8 = (undefined5)CONCAT44(uStack_2a4,uStack_2a8);
  uStack_e3 = (undefined3)((uint)uStack_2a4 >> 8);
  uStack_d8 = (undefined5)CONCAT44(uStack_294,uStack_298);
  uStack_e0 = (undefined5)CONCAT44(uStack_29c,uStack_2a0);
  uStack_db = (undefined3)((uint)uStack_29c >> 8);
  uStack_cb = uStack_28b;
  local_d3 = uStack_294._1_3_;
  uStack_d0 = uStack_290;
  uStack_108 = CONCAT17(uStack_2c1,uStack_2c8);
  local_110 = CONCAT17(local_2c9,uStack_2d0);
  uStack_f8 = CONCAT17(uStack_2b1,uStack_2b8);
  local_100 = CONCAT17(local_2b9,uStack_2c0);
  uStack_118 = CONCAT17(uStack_2d1,uStack_2d8);
  local_120 = CONCAT17(local_2d9,uStack_2e0);
  puVar10[5] = uStack_f8;
  puVar10[4] = local_100;
  puVar10[7] = CONCAT44(uStack_2a4,uStack_2a8);
  puVar10[6] = local_f0;
  puVar10[9] = CONCAT44(uStack_294,uStack_298);
  puVar10[8] = CONCAT44(uStack_29c,uStack_2a0);
  *(undefined8 *)((long)puVar10 + 0x55) = uStack_28b;
  *(ulong *)((long)puVar10 + 0x4d) = CONCAT53(uStack_290,uStack_294._1_3_);
  puVar10[1] = uStack_118;
  *puVar10 = local_120;
  puVar10[3] = uStack_108;
  puVar10[2] = local_110;
  FUN_100011090(lVar4,lVar3 + *(int *)(puVar6 + 0x40),&DAT_100fabc70,&DAT_100c29ec8);
  FUN_100011090(lVar5,lVar3 + *(int *)(puVar6 + 0x50),&DAT_100fabc68,&DAT_100c29ec0);
  FUN_100011090(&local_120,auStack_340,&DAT_100fabc98,&DAT_100c29ee8);
  FUN_100005808(puVar2,&DAT_100fabc68,&DAT_100c29ec0);
  FUN_100005808(lVar13,&DAT_100fabc70,&DAT_100c29ec8);
  FUN_100005808(local_348,&DAT_100fabc78,&DAT_100c29ed0);
  FUN_100005808(lVar5,&DAT_100fabc68,&DAT_100c29ec0);
  FUN_100005808(lVar4,&DAT_100fabc70,&DAT_100c29ec8);
  FUN_100005808(&uStack_2e0,&DAT_100fabc98,&DAT_100c29ee8);
  FUN_100005808(lVar16,&DAT_100fabc78,&DAT_100c29ed0);
  _swift_release(local_378);
  return;
}



/* Address: 0x1000bf91c | FUN_1000bf91c */

void FUN_1000bf91c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  char *pcVar4;
  LocalizedStringResource LVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  long lVar10;
  Text TVar11;
  Font FVar12;
  Font FVar13;
  Text TVar14;
  undefined *puVar15;
  Text TVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x8;
  undefined1 *puVar19;
  long extraout_x12;
  String SVar20;
  undefined1 auStack_b0 [8];
  undefined8 *local_a8;
  long local_a0;
  undefined8 local_98;
  MainActor *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  
  local_a8 = param_1;
  local_98 = param_3;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  LVar5.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar15 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fa6bb0;
  puVar17 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar15);
  local_90 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    puVar17 = &DAT_00000001;
    param_5 = 0x135;
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x135,UVar8.unknown,puVar7);
  }
  lVar10 = 0;
  FUN_1000c99d0();
  bVar3 = *(byte *)(param_2 + *(int *)(lVar10 + 0x14));
  local_a0 = param_2;
  if (bVar3 < 3) {
    puVar19 = (undefined1 *)0xeb0000000065646f;
    pcVar1 = (char *)0x4320656475616c43;
    if (bVar3 != 1) {
      puVar19 = &DAT_e500000000000000;
      pcVar1 = (char *)0x7865646f43;
    }
    puVar2 = (undefined1 *)0xee00706f746b7365;
    pcVar4 = (char *)0x4420656475616c43;
    if (bVar3 != 0) {
      puVar2 = puVar19;
      pcVar4 = pcVar1;
    }
    SVar20.bridgeObject = puVar2;
    SVar20.str = pcVar4;
  }
  else if (bVar3 < 5) {
    pcVar1 = (char *)0x726f73727543;
    if (bVar3 != 3) {
      pcVar1 = (char *)0x65646f43205356;
    }
    puVar19 = &DAT_e600000000000000;
    if (bVar3 != 3) {
      puVar19 = &DAT_e700000000000000;
    }
    SVar20.bridgeObject = puVar19;
    SVar20.str = pcVar1;
  }
  else if (bVar3 == 5) {
    SVar20.bridgeObject = &DAT_e800000000000000;
    SVar20.str = (char *)0x66727573646e6957;
  }
  else {
    FUN_1001defd4(LVar5.unknown);
    SVar20 = (extension_Foundation)::Swift::String::init(LVar5);
  }
  puVar15 = SVar20.bridgeObject;
  thunk_FUN_1001e7124(LVar5.unknown + -extraout_x12,SVar20.str);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  TVar11 = SwiftUI::Text::init(LVar5.unknown + -extraout_x12);
  FVar13.unknown = puVar15;
  FVar12 = SwiftUI::Font::get_title2(TVar11.unknown);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar12.unknown);
  FVar13 = SwiftUI::Font::weight(FVar12.unknown,FVar13);
  _swift_release(FVar12.unknown);
  TVar16 = TVar11;
  puVar18 = puVar15;
  puVar19 = puVar17;
  TVar14 = SwiftUI::Text::_font(FVar13.unknown);
  _swift_release(FVar13.unknown);
  FUN_100016d74(TVar11.unknown,puVar15,puVar17);
  _swift_bridgeObjectRelease(param_5);
  FUN_1000bfc64(&local_88,local_a0);
  *local_a8 = TVar14.unknown;
  local_a8[1] = TVar16.unknown;
  *(char *)(local_a8 + 2) = (char)puVar18;
  local_a8[3] = puVar19;
  local_a8[4] = local_88;
  local_a8[5] = uStack_80;
  local_a8[6] = local_78;
  local_a8[7] = uStack_70;
  *(undefined4 *)(local_a8 + 8) = local_68;
  *(undefined1 *)((long)local_a8 + 0x44) = local_64;
  FUN_100016d5c(TVar14.unknown,TVar16.unknown,puVar18);
  _swift_bridgeObjectRetain(puVar19);
  FUN_1000c5340(local_88,uStack_80,local_78,uStack_70,local_68,local_64);
  FUN_1000c53a4(local_88,uStack_80,local_78,uStack_70,local_68,local_64);
  FUN_100016d74(TVar14.unknown,TVar16.unknown,puVar18);
  _swift_release(local_90);
  _swift_bridgeObjectRelease(puVar19);
  return;
}



/* Address: 0x1000bfc64 | FUN_1000bfc64 */

void FUN_1000bfc64(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  HierarchicalShapeStyle param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  LocalizedStringResource LVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  Text TVar12;
  Font FVar13;
  Text TVar14;
  HierarchicalShapeStyle HVar15;
  Text TVar16;
  undefined *puVar17;
  Text TVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long extraout_x8;
  LocalizedStringResource localized;
  long extraout_x8_00;
  undefined1 *puVar23;
  long extraout_x12;
  long extraout_x12_00;
  long lVar24;
  ulong uVar25;
  LocalizedStringResource LVar26;
  String SVar27;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined8 *local_118;
  undefined *local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint3 local_c8;
  undefined1 local_c5;
  undefined *local_c0;
  undefined *puStack_b8;
  ulong local_b0;
  undefined *puStack_a8;
  uint local_a0;
  undefined1 local_9c;
  undefined *local_90;
  undefined *puStack_88;
  ulong local_80;
  undefined *puStack_78;
  undefined4 local_70;
  undefined1 local_6c;
  
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  local_100 = *(long *)(LVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_100 + 0x40));
  puVar19 = (undefined *)((long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  LVar26.unknown = puVar19 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  localized.unknown = LVar26.unknown + -extraout_x12_00;
  lVar9 = 0;
  FUN_1000c932c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar24 = (long)localized.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  FUN_1000c99d0();
  FUN_1000c495c(param_2 + *(int *)(lVar10 + 0x18),lVar24,FUN_1000c932c);
  lVar11 = lVar24;
  _swift_getEnumCaseMultiPayload(lVar24,lVar9);
  iVar7 = (int)lVar11;
  cVar4 = (char)&stack0xfffffffffffffff0;
  local_110 = LVar8.unknown;
  local_120 = localized.unknown;
  local_118 = param_1;
  if (iVar7 < 2) {
    local_128 = (undefined *)lVar24;
    if (iVar7 == 0) {
      FUN_1001dd4d4(localized.unknown);
      lVar11 = local_100;
      (**(code **)(local_100 + 0x10))(LVar26.unknown,localized.unknown,LVar8.unknown);
      TVar12 = SwiftUI::Text::init(LVar26);
      FVar13 = SwiftUI::Font::get_body(TVar12.unknown);
      TVar18 = TVar12;
      puVar19 = localized.unknown;
      puVar20 = LVar8.unknown;
      TVar14 = SwiftUI::Text::_font(FVar13.unknown);
      _swift_release(FVar13.unknown);
      FUN_100016d74(TVar12.unknown,localized.unknown,LVar8.unknown);
      _swift_bridgeObjectRelease();
      HVar15 = SwiftUI::HierarchicalShapeStyle::get_primary(param_5);
      local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)HVar15.unknown);
      FUN_1000c4248();
      TVar12 = TVar14;
      puVar17 = TVar18.unknown;
      puVar21 = puVar19;
      TVar16 = SwiftUI::Text::_foregroundStyle();
      local_130 = puVar21;
      FUN_100016d74(TVar14.unknown,TVar18.unknown,puVar19);
      _swift_bridgeObjectRelease(puVar20);
      (**(code **)(lVar11 + 8))(local_120,local_110);
      local_80 = (ulong)puVar17 & 0xff;
      local_70 = CONCAT13(local_70._3_1_,0x100);
      local_140 = TVar12.unknown;
      local_138 = TVar16.unknown;
      local_90 = TVar16.unknown;
      puStack_88 = TVar12.unknown;
      puStack_78 = puVar21;
      FUN_100016d5c(TVar16.unknown,TVar12.unknown,puVar17);
      _swift_bridgeObjectRetain(puVar21);
      FUN_1000037f0(&DAT_100fabdf0,&DAT_100c2a068);
      FUN_10001ff90(&DAT_100fabe10,&DAT_100fabdf0,&DAT_100c2a068,
                    PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
                   );
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + -0x80));
      puStack_88 = puStack_b8;
      local_90 = local_c0;
      puStack_78 = puStack_a8;
      local_80 = local_b0;
      local_70 = local_a0 & 0xffffff;
      FUN_1000037f0(&DAT_100fabe08,&DAT_100c2a070);
      FUN_1000c5478();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + -0x80));
      uVar25 = (ulong)local_c8;
      local_c0 = (undefined *)local_e8;
      puStack_b8 = (undefined *)uStack_e0;
      local_b0 = local_d8;
      puStack_a8 = (undefined *)uStack_d0;
      local_a0 = _local_c8;
      local_9c = 0;
      FUN_1000c5378(local_e8,uStack_e0,local_d8,uStack_d0,uVar25,local_c5);
      FUN_1000037f0(&DAT_100fabde8,&DAT_100c2a060);
      FUN_1000c5408();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + 0x50));
      FUN_100016d74(local_138,local_140,puVar17);
      _swift_bridgeObjectRelease(local_130);
    }
    else {
      bVar3 = *(byte *)(param_2 + *(int *)(lVar10 + 0x14));
      if (bVar3 < 3) {
        puVar23 = (undefined1 *)0xeb0000000065646f;
        pcVar1 = (char *)0x4320656475616c43;
        if (bVar3 != 1) {
          puVar23 = &DAT_e500000000000000;
          pcVar1 = (char *)0x7865646f43;
        }
        puVar2 = (undefined1 *)0xee00706f746b7365;
        pcVar5 = (char *)0x4420656475616c43;
        if (bVar3 != 0) {
          puVar2 = puVar23;
          pcVar5 = pcVar1;
        }
        SVar27.bridgeObject = puVar2;
        SVar27.str = pcVar5;
      }
      else if (bVar3 < 5) {
        pcVar1 = (char *)0x726f73727543;
        if (bVar3 != 3) {
          pcVar1 = (char *)0x65646f43205356;
        }
        puVar23 = &DAT_e600000000000000;
        if (bVar3 != 3) {
          puVar23 = &DAT_e700000000000000;
        }
        SVar27.bridgeObject = puVar23;
        SVar27.str = pcVar1;
      }
      else if (bVar3 == 5) {
        SVar27.bridgeObject = &DAT_e800000000000000;
        SVar27.str = (char *)0x66727573646e6957;
      }
      else {
        FUN_1001defd4(localized.unknown);
        SVar27 = (extension_Foundation)::Swift::String::init(localized);
      }
      thunk_FUN_1001e7114(puVar19,SVar27.str,SVar27.bridgeObject);
      _swift_bridgeObjectRelease(SVar27.bridgeObject);
      puVar17 = puVar19;
      (**(code **)(local_100 + 0x10))(localized.unknown,puVar19,LVar8.unknown);
      TVar12 = SwiftUI::Text::init(localized);
      FVar13 = SwiftUI::Font::get_body(TVar12.unknown);
      TVar18 = TVar12;
      puVar20 = puVar17;
      puVar21 = LVar8.unknown;
      TVar14 = SwiftUI::Text::_font(FVar13.unknown);
      _swift_release(FVar13.unknown);
      FUN_100016d74(TVar12.unknown,puVar17,LVar8.unknown);
      _swift_bridgeObjectRelease();
      HVar15 = SwiftUI::HierarchicalShapeStyle::get_primary(param_5);
      local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)HVar15.unknown);
      FUN_1000c4248();
      TVar12 = TVar14;
      puVar17 = TVar18.unknown;
      puVar22 = puVar20;
      TVar16 = SwiftUI::Text::_foregroundStyle();
      local_120 = puVar22;
      FUN_100016d74(TVar14.unknown,TVar18.unknown,puVar20);
      _swift_bridgeObjectRelease(puVar21);
      (**(code **)(local_100 + 8))(puVar19,local_110);
      local_80 = (ulong)puVar17 & 0xff;
      local_70 = CONCAT13(local_70._3_1_,0x10100);
      local_138 = puVar17;
      local_130 = TVar12.unknown;
      local_90 = TVar16.unknown;
      puStack_88 = TVar12.unknown;
      puStack_78 = puVar22;
      FUN_100016d5c(TVar16.unknown,TVar12.unknown,puVar17);
      _swift_bridgeObjectRetain(puVar22);
      FUN_1000037f0(&DAT_100fabdf0,&DAT_100c2a068);
      FUN_10001ff90(&DAT_100fabe10,&DAT_100fabdf0,&DAT_100c2a068,
                    PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
                   );
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + -0x80));
      puStack_88 = puStack_b8;
      local_90 = local_c0;
      puStack_78 = puStack_a8;
      local_80 = local_b0;
      local_70 = local_a0 & 0xffffff;
      FUN_1000037f0(&DAT_100fabe08,&DAT_100c2a070);
      FUN_1000c5478();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + -0x80));
      uVar25 = (ulong)local_c8;
      local_c0 = (undefined *)local_e8;
      puStack_b8 = (undefined *)uStack_e0;
      local_b0 = local_d8;
      puStack_a8 = (undefined *)uStack_d0;
      local_a0 = _local_c8;
      local_9c = 0;
      FUN_1000c5378(local_e8,uStack_e0,local_d8,uStack_d0,uVar25,local_c5);
      FUN_1000037f0(&DAT_100fabde8,&DAT_100c2a060);
      FUN_1000c5408();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + 0x50));
      FUN_100016d74(TVar16.unknown,local_130,local_138);
      _swift_bridgeObjectRelease(local_120);
    }
    FUN_1000c53dc(local_e8,uStack_e0,local_d8,uStack_d0,uVar25,local_c5);
    uVar6 = local_70;
    uStack_108 = puStack_78;
    local_110 = (undefined *)local_80;
    uStack_f8 = puStack_88;
    local_100 = (long)local_90;
    FUN_10005241c(local_128,FUN_1000c932c);
    local_70 = uVar6;
  }
  else if (iVar7 == 2) {
    FUN_10005241c(lVar24,FUN_1000c932c);
    FUN_1001dd1d4(localized.unknown);
    lVar11 = local_100;
    (**(code **)(local_100 + 0x10))(LVar26.unknown,localized.unknown,LVar8.unknown);
    TVar12 = SwiftUI::Text::init(LVar26);
    FVar13 = SwiftUI::Font::get_body(TVar12.unknown);
    TVar18 = TVar12;
    puVar19 = localized.unknown;
    puVar20 = LVar8.unknown;
    TVar14 = SwiftUI::Text::_font(FVar13.unknown);
    _swift_release(FVar13.unknown);
    FUN_100016d74(TVar12.unknown,localized.unknown,LVar8.unknown);
    _swift_bridgeObjectRelease();
    HVar15 = SwiftUI::HierarchicalShapeStyle::get_primary(param_5);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)HVar15.unknown);
    FUN_1000c4248();
    TVar12 = TVar14;
    puVar17 = TVar18.unknown;
    puVar21 = puVar19;
    TVar16 = SwiftUI::Text::_foregroundStyle();
    local_128 = puVar21;
    FUN_100016d74(TVar14.unknown,TVar18.unknown,puVar19);
    _swift_bridgeObjectRelease(puVar20);
    (**(code **)(lVar11 + 8))(local_120,local_110);
    local_80 = (ulong)puVar17 & 0xff;
    local_70 = CONCAT13(local_70._3_1_,0x100);
    local_138 = puVar17;
    local_130 = TVar16.unknown;
    local_90 = TVar16.unknown;
    puStack_88 = TVar12.unknown;
    puStack_78 = puVar21;
    FUN_100016d5c(TVar16.unknown,TVar12.unknown,puVar17);
    _swift_bridgeObjectRetain(puVar21);
    FUN_1000037f0(&DAT_100fabdf0,&DAT_100c2a068);
    FUN_10001ff90(&DAT_100fabe10,&DAT_100fabdf0,&DAT_100c2a068,
                  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
                 );
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + -0x80));
    puStack_88 = puStack_b8;
    local_90 = local_c0;
    puStack_78 = puStack_a8;
    local_80 = local_b0;
    local_70 = CONCAT13(1,(int3)local_a0);
    FUN_1000037f0(&DAT_100fabe08,&DAT_100c2a070);
    FUN_1000c5478();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + -0x80));
    local_c0 = (undefined *)local_e8;
    puStack_b8 = (undefined *)uStack_e0;
    local_b0 = local_d8;
    puStack_a8 = (undefined *)uStack_d0;
    local_a0 = _local_c8;
    local_9c = 0;
    FUN_1000c5378(local_e8,uStack_e0,local_d8,uStack_d0,(ulong)local_c8,local_c5);
    FUN_1000037f0(&DAT_100fabde8,&DAT_100c2a060);
    FUN_1000c5408();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + 0x50));
    FUN_100016d74(local_130,TVar12.unknown,local_138);
    _swift_bridgeObjectRelease(local_128);
    FUN_1000c53dc(local_e8,uStack_e0,local_d8,uStack_d0,(ulong)local_c8,local_c5);
    local_100 = (long)local_90;
    uStack_f8 = puStack_88;
    local_110 = (undefined *)local_80;
    uStack_108 = puStack_78;
  }
  else if (iVar7 == 3) {
    FUN_10005241c(lVar24,FUN_1000c932c);
    FUN_1001dd354(localized.unknown);
    lVar11 = local_100;
    (**(code **)(local_100 + 0x10))(LVar26.unknown,localized.unknown,LVar8.unknown);
    TVar12 = SwiftUI::Text::init(LVar26);
    FVar13 = SwiftUI::Font::get_body(TVar12.unknown);
    TVar18 = TVar12;
    puVar19 = localized.unknown;
    puVar20 = LVar8.unknown;
    TVar14 = SwiftUI::Text::_font(FVar13.unknown);
    _swift_release(FVar13.unknown);
    FUN_100016d74(TVar12.unknown,localized.unknown,LVar8.unknown);
    _swift_bridgeObjectRelease();
    HVar15 = SwiftUI::HierarchicalShapeStyle::get_primary(param_5);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)HVar15.unknown);
    FUN_1000c4248();
    TVar12 = TVar14;
    puVar17 = TVar18.unknown;
    puVar21 = puVar19;
    TVar16 = SwiftUI::Text::_foregroundStyle();
    local_128 = puVar21;
    FUN_100016d74(TVar14.unknown,TVar18.unknown,puVar19);
    _swift_bridgeObjectRelease(puVar20);
    (**(code **)(lVar11 + 8))(local_120,local_110);
    local_80 = (ulong)puVar17 & 0xff;
    local_70 = CONCAT13(local_70._3_1_,0x10100);
    local_138 = puVar17;
    local_130 = TVar16.unknown;
    local_90 = TVar16.unknown;
    puStack_88 = TVar12.unknown;
    puStack_78 = puVar21;
    FUN_100016d5c(TVar16.unknown,TVar12.unknown,puVar17);
    _swift_bridgeObjectRetain(puVar21);
    FUN_1000037f0(&DAT_100fabdf0,&DAT_100c2a068);
    FUN_10001ff90(&DAT_100fabe10,&DAT_100fabdf0,&DAT_100c2a068,
                  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
                 );
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + -0x80));
    puStack_88 = puStack_b8;
    local_90 = local_c0;
    puStack_78 = puStack_a8;
    local_80 = local_b0;
    local_70 = CONCAT13(1,(int3)local_a0);
    FUN_1000037f0(&DAT_100fabe08,&DAT_100c2a070);
    FUN_1000c5478();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + -0x80));
    local_c0 = (undefined *)local_e8;
    puStack_b8 = (undefined *)uStack_e0;
    local_b0 = local_d8;
    puStack_a8 = (undefined *)uStack_d0;
    local_a0 = _local_c8;
    local_9c = 0;
    FUN_1000c5378(local_e8,uStack_e0,local_d8,uStack_d0,(ulong)local_c8,local_c5);
    FUN_1000037f0(&DAT_100fabde8,&DAT_100c2a060);
    FUN_1000c5408();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + 0x50));
    FUN_100016d74(local_130,TVar12.unknown,local_138);
    _swift_bridgeObjectRelease(local_128);
    FUN_1000c53dc(local_e8,uStack_e0,local_d8,uStack_d0,(ulong)local_c8,local_c5);
    local_100 = (long)local_90;
    uStack_f8 = puStack_88;
    local_110 = (undefined *)local_80;
    uStack_108 = puStack_78;
  }
  else {
    FUN_10005241c(lVar24,FUN_1000c932c);
    FUN_1001dd654(localized.unknown);
    lVar11 = local_100;
    (**(code **)(local_100 + 0x10))(LVar26.unknown,localized.unknown,LVar8.unknown);
    TVar12 = SwiftUI::Text::init(LVar26);
    FVar13 = SwiftUI::Font::get_body(TVar12.unknown);
    TVar18 = TVar12;
    puVar19 = localized.unknown;
    puVar20 = LVar8.unknown;
    TVar14 = SwiftUI::Text::_font(FVar13.unknown);
    _swift_release(FVar13.unknown);
    FUN_100016d74(TVar12.unknown,localized.unknown,LVar8.unknown);
    _swift_bridgeObjectRelease();
    HVar15 = SwiftUI::HierarchicalShapeStyle::get_primary(param_5);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)HVar15.unknown);
    FUN_1000c4248();
    TVar12 = TVar14;
    puVar17 = TVar18.unknown;
    puVar21 = puVar19;
    TVar16 = SwiftUI::Text::_foregroundStyle();
    FUN_100016d74(TVar14.unknown,TVar18.unknown,puVar19);
    _swift_bridgeObjectRelease(puVar20);
    (**(code **)(lVar11 + 8))(local_120,local_110);
    local_b0 = (ulong)puVar17 & 0xff;
    local_a0 = 0x100;
    local_9c = 1;
    local_c0 = TVar16.unknown;
    puStack_b8 = TVar12.unknown;
    puStack_a8 = puVar21;
    FUN_1000037f0(&DAT_100fabde8,&DAT_100c2a060);
    FUN_1000037f0(&DAT_100fabdf0,&DAT_100c2a068);
    FUN_1000c5408();
    FUN_10001ff90(&DAT_100fabe10,&DAT_100fabdf0,&DAT_100c2a068,
                  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
                 );
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar4 + 0x50));
    local_100 = (long)local_90;
    uStack_f8 = puStack_88;
    local_110 = (undefined *)local_80;
    uStack_108 = puStack_78;
  }
  local_118[1] = uStack_f8;
  *local_118 = local_100;
  local_118[3] = uStack_108;
  local_118[2] = local_110;
  *(uint *)(local_118 + 4) = local_70;
  *(undefined1 *)((long)local_118 + 0x24) = local_6c;
  return;
}



/* Address: 0x1000c0b78 | FUN_1000c0b78 */

void FUN_1000c0b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,
                  HierarchicalShapeStyle param_8)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  LocalizedStringResource LVar5;
  code *pcVar6;
  Storage storage;
  RoundedCornerStyle RVar7;
  uint uVar8;
  undefined *puVar9;
  URL UVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined7 extraout_var;
  VerticalAlignment VVar14;
  Set SVar15;
  Set SVar16;
  Color CVar17;
  Color CVar18;
  RoundedRectangle RVar19;
  undefined7 extraout_var_00;
  Text TVar20;
  Font FVar21;
  Text TVar22;
  Text TVar23;
  URL UVar24;
  Text TVar25;
  HierarchicalShapeStyle HVar26;
  undefined *puVar27;
  undefined7 extraout_var_01;
  EdgeInsets EVar28;
  undefined *puVar29;
  undefined *puVar30;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar31;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar32;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined *puVar33;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar34;
  long extraout_x8_08;
  long extraout_x8_09;
  ulong uVar35;
  undefined *puVar36;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar37;
  long unaff_x20;
  long lVar38;
  undefined *puVar39;
  long lVar40;
  undefined8 uVar41;
  undefined8 *puVar42;
  undefined2 uVar43;
  long lVar44;
  ulong uVar45;
  undefined8 *puVar46;
  ulong uVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  String SVar55;
  undefined *apuStack_200 [2];
  code *local_1f0 [3];
  long local_1d8;
  undefined4 local_1cc;
  undefined *local_1c8;
  undefined *local_1c0;
  char *local_1b8;
  ulong local_1b0;
  undefined *local_1a8;
  ulong local_1a0;
  ulong local_198;
  code *local_190;
  undefined *local_188;
  long local_180;
  long local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined8 *local_140;
  undefined *local_138;
  LocalizedStringResource local_130;
  undefined *local_128;
  undefined *local_120;
  long local_118;
  undefined8 *local_110;
  ulong local_108;
  code *local_100;
  undefined *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  
  puVar9 = &DAT_100fabcd8;
  local_e0 = param_5;
  FUN_1000037f0(&DAT_100fabcd8,&DAT_100c29f38);
  local_120 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100fabce0;
  local_118 = (long)apuStack_200 - extraout_x8;
  FUN_1000037f0(&DAT_100fabce0,&DAT_100c29f40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar31 = (undefined8 *)(((long)apuStack_200 - extraout_x8) - extraout_x8_00);
  puVar9 = &DAT_100fabce8;
  local_110 = puVar31;
  FUN_1000037f0(&DAT_100fabce8,&DAT_100c29f48);
  local_128 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar31 = (undefined8 *)((long)puVar31 - extraout_x8_01);
  local_140 = puVar31;
  UVar10 = Foundation::URL::typeMetadataAccessor();
  lVar38 = *(long *)(UVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar38 + 0x40));
  lVar44 = (long)puVar31 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100fabcf0;
  FUN_1000037f0(&DAT_100fabcf0,&DAT_100c29f50);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar32 = lVar44 - extraout_x8_03;
  puVar36 = &DAT_100fabcf8;
  FUN_1000037f0(&DAT_100fabcf8,&DAT_100c29f58);
  local_160 = puVar36;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar36 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar36 = &DAT_100fabd00;
  local_150 = (undefined *)(lVar32 - extraout_x8_04);
  FUN_1000037f0(&DAT_100fabd00,&DAT_100c29f60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar36 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar33 = (undefined *)(lVar32 - extraout_x8_04) + -extraout_x8_05;
  puVar36 = &DAT_100fabd08;
  local_148 = puVar33;
  FUN_1000037f0(&DAT_100fabd08,&DAT_100c29f68);
  local_158 = puVar36;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar36 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_168 = (undefined8 *)(puVar33 + -extraout_x8_06);
  local_e8 = (undefined *)Foundation::LocalizedStringResource::typeMetadataAccessor();
  local_138 = *(undefined **)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_138 + 0x40));
  puVar36 = (undefined *)
            ((long)(puVar33 + -extraout_x8_06) - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
  local_130.unknown = puVar36;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar36 = puVar36 + -extraout_x12;
  lVar11 = 0;
  local_f8 = puVar36;
  FUN_1000b292c();
  local_108 = *(ulong *)(lVar11 + -8);
  lVar37 = *(long *)(local_108 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar34 = (long)puVar36 - (lVar37 + 0xfU & 0xfffffffffffffff0);
  puVar36 = &DAT_100fabd10;
  local_f0 = lVar34;
  FUN_1000037f0(&DAT_100fabd10,&DAT_100c29f70);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar36 + -8) + 0x40));
  lVar34 = lVar34 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar40 = lVar34 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar46 = (undefined8 *)(lVar40 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar31 = (undefined8 *)((long)puVar46 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = 0;
  local_100 = (code *)((long)puVar31 - extraout_x12_03);
  FUN_1000c932c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  puVar42 = (undefined8 *)
            ((long)((long)puVar31 - extraout_x12_03) - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0))
  ;
  lVar12 = 0;
  FUN_1000c99d0();
  FUN_1000c495c(local_e0 + *(int *)(lVar12 + 0x18),puVar42,FUN_1000c932c);
  puVar13 = puVar42;
  _swift_getEnumCaseMultiPayload(puVar42,lVar11);
  lVar11 = local_f0;
  uVar8 = (uint)puVar13;
  storage.value = (__int8)lVar32;
  if ((int)uVar8 < 3) {
    if (uVar8 < 2) {
      FUN_10005241c(puVar42,FUN_1000c932c);
      lVar11 = local_118;
      _swift_storeEnumTagMultiPayload(local_118,local_120,1);
      FUN_100016eac(&DAT_100fabd18,&DAT_100fabce8,&DAT_100c29f48,
                    PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
      puVar31 = local_110;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar11);
      puVar36 = &DAT_100fabce0;
      puVar33 = &DAT_100c29f40;
      FUN_100011090(puVar31,lVar32,&DAT_100fabce0,&DAT_100c29f40);
      _swift_storeEnumTagMultiPayload(lVar32,puVar9,1);
      FUN_1000c4d14();
      FUN_1000c4f54();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
    }
    else {
      SVar16.unknown = (undefined *)*puVar42;
      puVar39 = (undefined *)puVar42[1];
      cVar3 = *(char *)(puVar42 + 2);
      FUN_1000c495c(unaff_x20,local_f0,FUN_1000b292c);
      uVar35 = (ulong)*(byte *)(local_108 + 0x50);
      uVar45 = uVar35 + 0x10 & (uVar35 ^ 0xffffffffffffffff);
      uVar47 = lVar37 + uVar45 + 7 & 0xfffffffffffffff8;
      puVar33 = &DAT_100eb4768;
      _swift_allocObject(&DAT_100eb4768,uVar47 + 0x10,uVar35 | 7);
      FUN_1000523d8(lVar11,puVar33 + uVar45,FUN_1000b292c);
      *(undefined **)(puVar33 + uVar47) = SVar16.unknown;
      *(undefined **)((long)(puVar33 + uVar47) + 8) = puVar39;
      VVar14.unknown = puVar39;
      _swift_bridgeObjectRetain();
      VVar14 = SwiftUI::VerticalAlignment::get_center(VVar14);
      pcVar6 = local_100;
      *(undefined **)local_100 = VVar14.unknown;
      *(undefined8 *)((long)pcVar6 + 8) = 0x4024000000000000;
      *(undefined1 *)((long)pcVar6 + 0x10) = 0;
      puVar27 = &DAT_100fabd80;
      FUN_1000037f0(&DAT_100fabd80,&DAT_100c29fe0);
      HVar26.unknown = puVar33;
      FUN_1000c38c8((long)pcVar6 + (long)*(int *)(puVar27 + 0x2c),SVar16.unknown,puVar39,
                    thunk_FUN_1000c503c);
      SVar15 = SwiftUI::Edge::Set::get_horizontal(SVar16);
      uVar52 = 0x4030000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar15.unknown);
      SVar16.unknown = &DAT_100fabd50;
      uVar41 = param_2;
      uVar50 = param_3;
      uVar51 = param_4;
      FUN_1000037f0(&DAT_100fabd50,&DAT_100c29f80);
      puVar1 = (undefined1 *)((long)pcVar6 + (long)*(int *)(SVar16.unknown + 0x24));
      *puVar1 = (char)SVar15.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar52;
      *(undefined8 *)(puVar1 + 0x10) = param_2;
      *(undefined8 *)(puVar1 + 0x18) = param_3;
      *(undefined8 *)(puVar1 + 0x20) = param_4;
      puVar1[0x28] = 0;
      SVar16 = SwiftUI::Edge::Set::get_vertical(SVar16);
      uVar52 = 0x4028000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar16.unknown);
      CVar17.unknown = &DAT_100fabd40;
      FUN_1000037f0(&DAT_100fabd40,&DAT_100c29f78);
      puVar1 = (undefined1 *)((long)pcVar6 + (long)*(int *)(CVar17.unknown + 0x24));
      *puVar1 = (char)SVar16.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar52;
      *(undefined8 *)(puVar1 + 0x10) = uVar41;
      *(undefined8 *)(puVar1 + 0x18) = uVar50;
      *(undefined8 *)(puVar1 + 0x20) = uVar51;
      puVar1[0x28] = 0;
      CVar17 = SwiftUI::Color::get_secondary(CVar17);
      CVar18 = SwiftUI::Color::opacity(0.1,CVar17);
      _swift_release(CVar17.unknown);
      _swift_bridgeObjectRelease(puVar39);
      _swift_release(puVar33);
      puVar13 = (undefined8 *)((long)pcVar6 + (long)*(int *)(puVar36 + 0x24));
      puVar36 = &DAT_100fabd70;
      FUN_1000037f0(&DAT_100fabd70,&DAT_100c29f90);
      puVar42 = (undefined8 *)((long)puVar13 + (long)*(int *)(puVar36 + 0x34));
      RVar19 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
      iVar4 = *(int *)(RVar19.unknown + 0x14);
      uVar2 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
      ;
      RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var_00,RVar7.value) + -8) + 0x68))
                ((long)puVar42 + (long)iVar4,uVar2,CONCAT71(extraout_var_00,RVar7.value));
      puVar33 = local_f8;
      auVar49 = NEON_fmov(0x4020000000000000,8);
      puVar42[1] = auVar49._8_8_;
      *puVar42 = auVar49._0_8_;
      *puVar13 = CVar18.unknown;
      *(undefined2 *)((long)puVar13 + (long)*(int *)(puVar36 + 0x38)) = 0x100;
      if (cVar3 == '\x01') {
        FUN_1001dd054(local_f8);
        LVar5.unknown = local_130.unknown;
        puVar27 = local_138;
        puVar36 = local_e8;
        (**(code **)(local_138 + 0x10))(local_130.unknown,puVar33,local_e8);
        TVar20 = SwiftUI::Text::init(LVar5);
        FVar21 = SwiftUI::Font::get_body(TVar20.unknown);
        TVar25 = TVar20;
        puVar39 = puVar33;
        puVar30 = puVar36;
        TVar22 = SwiftUI::Text::_font(FVar21.unknown);
        _swift_release(FVar21.unknown);
        FUN_100016d74(TVar20.unknown,puVar33,puVar36);
        _swift_bridgeObjectRelease();
        SwiftUI::HierarchicalShapeStyle::get_primary(HVar26);
        FUN_1000c4248();
        TVar20 = TVar22;
        puVar33 = TVar25.unknown;
        puVar36 = puVar39;
        TVar23 = SwiftUI::Text::_foregroundStyle();
        FUN_100016d74(TVar22.unknown,TVar25.unknown,puVar39);
        _swift_bridgeObjectRelease(puVar30);
        (**(code **)(puVar27 + 8))(local_f8,local_e8);
        uVar35 = (ulong)puVar33 & 0xff;
        FUN_100016d5c(TVar23.unknown,TVar20.unknown,puVar33);
        _swift_bridgeObjectRetain(puVar36);
        uVar43 = 0x100;
      }
      else {
        TVar23.unknown = (undefined *)0x0;
        TVar20.unknown = (undefined *)0x0;
        uVar35 = 0;
        puVar36 = (undefined *)0x0;
        uVar43 = 0;
      }
      FUN_100011090(local_100,puVar31,&DAT_100fabd10,&DAT_100c29f70);
      puVar42 = local_168;
      FUN_100011090(puVar31,local_168,&DAT_100fabd10,&DAT_100c29f70);
      puVar33 = &DAT_100fabd90;
      FUN_1000037f0(&DAT_100fabd90,&DAT_100c29ff0);
      puVar13 = (undefined8 *)((long)puVar42 + (long)*(int *)(puVar33 + 0x30));
      *puVar13 = TVar23.unknown;
      puVar13[1] = TVar20.unknown;
      puVar13[2] = uVar35;
      puVar13[3] = puVar36;
      *(undefined2 *)(puVar13 + 4) = uVar43;
      FUN_100020200(TVar23.unknown,TVar20.unknown,uVar35,puVar36,uVar43);
      FUN_10002022c(TVar23.unknown,TVar20.unknown,uVar35,puVar36,uVar43);
      FUN_100005808(puVar31,&DAT_100fabd10,&DAT_100c29f70);
      puVar33 = local_150;
      FUN_100011090(puVar42,local_150,&DAT_100fabd08,&DAT_100c29f68);
      _swift_storeEnumTagMultiPayload(puVar33,local_160,0);
      FUN_100016eac(&DAT_100fabd28,&DAT_100fabd08,&DAT_100c29f68,
                    PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
      FUN_1000c4dac();
      puVar27 = local_148;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar33);
      FUN_100011090(puVar27,lVar32,&DAT_100fabd00,&DAT_100c29f60);
      _swift_storeEnumTagMultiPayload(lVar32,puVar9,0);
      FUN_1000c4d14();
      FUN_1000c4f54();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
      FUN_10002022c(TVar23.unknown,TVar20.unknown,uVar35,puVar36,uVar43);
      FUN_100005808(puVar27,&DAT_100fabd00,&DAT_100c29f60);
      FUN_100005808(local_100,&DAT_100fabd10,&DAT_100c29f70);
      puVar36 = &DAT_100fabd08;
      puVar33 = &DAT_100c29f68;
      puVar31 = puVar42;
    }
  }
  else {
    local_180 = lVar34;
    local_178 = lVar40;
    local_170 = puVar46;
    if (uVar8 == 3) {
      SVar16.unknown = (undefined *)puVar42[2];
      puVar39 = (undefined *)puVar42[3];
      _swift_bridgeObjectRelease(puVar42[1]);
      lVar11 = local_f0;
      FUN_1000c495c(unaff_x20,local_f0,FUN_1000b292c);
      uVar35 = (ulong)*(byte *)(local_108 + 0x50);
      uVar45 = uVar35 + 0x10 & (uVar35 ^ 0xffffffffffffffff);
      uVar47 = lVar37 + uVar45 + 7 & 0xfffffffffffffff8;
      puVar33 = &DAT_100eb4740;
      _swift_allocObject(&DAT_100eb4740,uVar47 + 0x10,uVar35 | 7);
      FUN_1000523d8(lVar11,puVar33 + uVar45,FUN_1000b292c);
      *(undefined **)(puVar33 + uVar47) = SVar16.unknown;
      *(undefined **)((long)(puVar33 + uVar47) + 8) = puVar39;
      VVar14.unknown = puVar39;
      _swift_bridgeObjectRetain();
      VVar14 = SwiftUI::VerticalAlignment::get_center(VVar14);
      *puVar31 = VVar14.unknown;
      puVar31[1] = 0x4024000000000000;
      *(undefined1 *)(puVar31 + 2) = 0;
      puVar27 = &DAT_100fabd80;
      FUN_1000037f0(&DAT_100fabd80,&DAT_100c29fe0);
      FUN_1000c38c8((long)puVar31 + (long)*(int *)(puVar27 + 0x2c),SVar16.unknown,puVar39,
                    thunk_FUN_1000c503c,puVar33);
      SVar15 = SwiftUI::Edge::Set::get_horizontal(SVar16);
      uVar52 = 0x4030000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar15.unknown);
      SVar16.unknown = &DAT_100fabd50;
      uVar41 = param_2;
      uVar50 = param_3;
      uVar51 = param_4;
      FUN_1000037f0(&DAT_100fabd50,&DAT_100c29f80);
      puVar1 = (undefined1 *)((long)puVar31 + (long)*(int *)(SVar16.unknown + 0x24));
      *puVar1 = (char)SVar15.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar52;
      *(undefined8 *)(puVar1 + 0x10) = param_2;
      *(undefined8 *)(puVar1 + 0x18) = param_3;
      *(undefined8 *)(puVar1 + 0x20) = param_4;
      puVar1[0x28] = 0;
      SVar16 = SwiftUI::Edge::Set::get_vertical(SVar16);
      uVar52 = 0x4028000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar16.unknown);
      CVar17.unknown = &DAT_100fabd40;
      FUN_1000037f0(&DAT_100fabd40,&DAT_100c29f78);
      puVar1 = (undefined1 *)((long)puVar31 + (long)*(int *)(CVar17.unknown + 0x24));
      *puVar1 = (char)SVar16.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar52;
      *(undefined8 *)(puVar1 + 0x10) = uVar41;
      *(undefined8 *)(puVar1 + 0x18) = uVar50;
      *(undefined8 *)(puVar1 + 0x20) = uVar51;
      puVar1[0x28] = 0;
      CVar17 = SwiftUI::Color::get_secondary(CVar17);
      CVar18 = SwiftUI::Color::opacity(0.1,CVar17);
      _swift_release(CVar17.unknown);
      _swift_bridgeObjectRelease(puVar39);
      _swift_release(puVar33);
      puVar13 = (undefined8 *)((long)puVar31 + (long)*(int *)(puVar36 + 0x24));
      puVar36 = &DAT_100fabd70;
      FUN_1000037f0(&DAT_100fabd70,&DAT_100c29f90);
      puVar42 = (undefined8 *)((long)puVar13 + (long)*(int *)(puVar36 + 0x34));
      RVar19 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
      iVar4 = *(int *)(RVar19.unknown + 0x14);
      uVar2 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
      ;
      RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,RVar7.value) + -8) + 0x68))
                ((long)puVar42 + (long)iVar4,uVar2,CONCAT71(extraout_var,RVar7.value));
      puVar27 = local_150;
      auVar49 = NEON_fmov(0x4020000000000000,8);
      puVar42[1] = auVar49._8_8_;
      *puVar42 = auVar49._0_8_;
      *puVar13 = CVar18.unknown;
      *(undefined2 *)((long)puVar13 + (long)*(int *)(puVar36 + 0x38)) = 0x100;
      puVar36 = &DAT_100fabd10;
      puVar33 = &DAT_100c29f70;
      FUN_100011090(puVar31,local_150,&DAT_100fabd10,&DAT_100c29f70);
      _swift_storeEnumTagMultiPayload(puVar27,local_160,1);
      FUN_100016eac(&DAT_100fabd28,&DAT_100fabd08,&DAT_100c29f68,
                    PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
      FUN_1000c4dac();
      puVar39 = local_148;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar27);
      FUN_100011090(puVar39,lVar32,&DAT_100fabd00,&DAT_100c29f60);
      _swift_storeEnumTagMultiPayload(lVar32,puVar9,0);
      FUN_1000c4d14();
      FUN_1000c4f54();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
      FUN_100005808(puVar39,&DAT_100fabd00,&DAT_100c29f60);
    }
    else {
      local_168 = (undefined8 *)*puVar42;
      local_160 = (undefined *)puVar42[1];
      uVar41 = *(undefined8 *)(unaff_x20 + 8);
      puVar33 = &DAT_100c29f98;
      _swift_getKeyPath(&DAT_100c29f98);
      UVar24.unknown = &DAT_100c29fc0;
      _swift_getKeyPath();
      Combine::Published::_get_subscript(lVar44,uVar41,puVar33,UVar24.unknown);
      _swift_release(puVar33);
      _swift_release();
      SVar55 = Foundation::URL::get_absoluteString(UVar24);
      local_1c8 = SVar55.bridgeObject;
      local_1b8 = SVar55.str;
      (**(code **)(lVar38 + 8))(lVar44,UVar10.unknown);
      puVar33 = local_f8;
      FUN_1001dd7d4(local_f8);
      LVar5.unknown = local_130.unknown;
      local_100 = *(code **)(local_138 + 0x10);
      puVar27 = local_e8;
      (*local_100)(local_130.unknown,puVar33,local_e8);
      TVar23 = SwiftUI::Text::init(LVar5);
      FVar21 = SwiftUI::Font::get_body(TVar23.unknown);
      TVar20 = TVar23;
      puVar39 = puVar33;
      puVar30 = puVar27;
      TVar25 = SwiftUI::Text::_font(FVar21.unknown);
      _swift_release(FVar21.unknown);
      FUN_100016d74(TVar23.unknown,puVar33,puVar27);
      _swift_bridgeObjectRelease();
      HVar26 = SwiftUI::HierarchicalShapeStyle::get_primary(param_8);
      FUN_1000c4248();
      TVar23 = TVar25;
      puVar33 = TVar20.unknown;
      puVar27 = puVar39;
      local_188 = HVar26.unknown;
      local_e0 = (undefined *)SwiftUI::Text::_foregroundStyle();
      local_158 = (undefined *)CONCAT44(local_158._4_4_,(int)puVar33);
      local_150 = TVar23.unknown;
      local_148 = puVar27;
      FUN_100016d74(TVar25.unknown,TVar20.unknown,puVar39);
      _swift_bridgeObjectRelease(puVar30);
      puVar29 = local_e8;
      puVar30 = local_f8;
      local_190 = *(code **)(local_138 + 8);
      (*local_190)(local_f8,local_e8);
      lVar11 = local_f0;
      FUN_1000c495c(unaff_x20,local_f0,FUN_1000b292c);
      local_1a0 = (ulong)*(byte *)(local_108 + 0x50);
      uVar35 = local_1a0 + 0x10 & (local_1a0 ^ 0xffffffffffffffff);
      uVar45 = lVar37 + uVar35 + 7 & 0xfffffffffffffff8;
      puVar33 = &DAT_100eb46f0;
      local_1b0 = uVar45;
      local_198 = uVar35;
      _swift_allocObject(&DAT_100eb46f0,uVar45 + 0x10,local_1a0 | 7);
      FUN_1000523d8(lVar11,puVar33 + uVar35,FUN_1000b292c);
      SVar16.unknown = local_1b8;
      puVar39 = local_1c8;
      *(char **)(puVar33 + uVar45) = local_1b8;
      *(undefined **)((long)(puVar33 + uVar45) + 8) = local_1c8;
      VVar14.unknown = local_1c8;
      _swift_bridgeObjectRetain();
      VVar14 = SwiftUI::VerticalAlignment::get_center(VVar14);
      *puVar31 = VVar14.unknown;
      puVar31[1] = 0x4024000000000000;
      *(undefined1 *)(puVar31 + 2) = 0;
      puVar27 = &DAT_100fabd80;
      FUN_1000037f0(&DAT_100fabd80,&DAT_100c29fe0);
      HVar26.unknown = puVar33;
      local_1a8 = puVar27;
      FUN_1000c38c8((long)puVar31 + (long)*(int *)(puVar27 + 0x2c),SVar16.unknown,puVar39,
                    thunk_FUN_1000c503c);
      SVar15 = SwiftUI::Edge::Set::get_horizontal(SVar16);
      uVar50 = 0x4030000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar15.unknown);
      SVar16.unknown = &DAT_100fabd50;
      uVar41 = param_2;
      uVar51 = param_3;
      uVar53 = param_4;
      FUN_1000037f0(&DAT_100fabd50,&DAT_100c29f80);
      puVar1 = (undefined1 *)((long)puVar31 + (long)*(int *)(SVar16.unknown + 0x24));
      *puVar1 = (char)SVar15.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar50;
      *(undefined8 *)(puVar1 + 0x10) = param_2;
      *(undefined8 *)(puVar1 + 0x18) = param_3;
      *(undefined8 *)(puVar1 + 0x20) = param_4;
      puVar1[0x28] = 0;
      local_1b8 = SVar16.unknown;
      SVar16 = SwiftUI::Edge::Set::get_vertical(SVar16);
      uVar48 = 0x4028000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar16.unknown);
      CVar17.unknown = &DAT_100fabd40;
      uVar50 = uVar41;
      uVar52 = uVar51;
      uVar54 = uVar53;
      FUN_1000037f0(&DAT_100fabd40,&DAT_100c29f78);
      puVar1 = (undefined1 *)((long)puVar31 + (long)*(int *)(CVar17.unknown + 0x24));
      *puVar1 = (char)SVar16.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar48;
      *(undefined8 *)(puVar1 + 0x10) = uVar41;
      *(undefined8 *)(puVar1 + 0x18) = uVar51;
      *(undefined8 *)(puVar1 + 0x20) = uVar53;
      puVar1[0x28] = 0;
      local_1c0 = CVar17.unknown;
      CVar17 = SwiftUI::Color::get_secondary(CVar17);
      CVar18 = SwiftUI::Color::opacity(0.1,CVar17);
      _swift_release(CVar17.unknown);
      _swift_bridgeObjectRelease(puVar39);
      _swift_release(puVar33);
      puVar13 = (undefined8 *)((long)puVar31 + (long)*(int *)(puVar36 + 0x24));
      puVar33 = &DAT_100fabd70;
      FUN_1000037f0(&DAT_100fabd70,&DAT_100c29f90);
      puVar42 = (undefined8 *)((long)puVar13 + (long)*(int *)(puVar33 + 0x34));
      apuStack_200[1] = puVar33;
      local_1c8 = (undefined *)SwiftUI::RoundedRectangle::typeMetadataAccessor();
      iVar4 = *(int *)(local_1c8 + 0x14);
      uVar2 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
      ;
      local_1cc = uVar2;
      RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      local_1d8 = CONCAT71(extraout_var_01,RVar7.value);
      local_1f0[2] = *(code **)(*(long *)(local_1d8 + -8) + 0x68);
      (*local_1f0[2])((long)puVar42 + (long)iVar4,uVar2,local_1d8);
      auVar49 = NEON_fmov(0x4020000000000000,8);
      puVar42[1] = auVar49._8_8_;
      *puVar42 = auVar49._0_8_;
      *puVar13 = CVar18.unknown;
      *(undefined2 *)((long)puVar13 + (long)*(int *)(puVar33 + 0x38)) = 0x100;
      local_1f0[0] = (code *)auVar49._0_8_;
      local_1f0[1] = (code *)auVar49._8_8_;
      FUN_1001dd954(puVar30);
      LVar5.unknown = local_130.unknown;
      puVar33 = puVar30;
      (*local_100)(local_130.unknown);
      TVar23 = SwiftUI::Text::init(LVar5);
      FVar21 = SwiftUI::Font::get_body(TVar23.unknown);
      TVar20 = TVar23;
      puVar27 = puVar33;
      puVar39 = puVar29;
      TVar25 = SwiftUI::Text::_font(FVar21.unknown);
      _swift_release(FVar21.unknown);
      FUN_100016d74(TVar23.unknown,puVar33,puVar29);
      _swift_bridgeObjectRelease();
      SwiftUI::HierarchicalShapeStyle::get_primary(HVar26);
      TVar23 = TVar25;
      puVar33 = TVar20.unknown;
      puVar29 = puVar27;
      local_138 = (undefined *)SwiftUI::Text::_foregroundStyle();
      local_108 = CONCAT44(local_108._4_4_,(int)puVar33);
      local_130.unknown = puVar29;
      local_100 = (code *)TVar23.unknown;
      FUN_100016d74(TVar25.unknown,TVar20.unknown,puVar27);
      _swift_bridgeObjectRelease(puVar39);
      (*local_190)(puVar30,local_e8);
      lVar11 = local_f0;
      FUN_1000c495c(unaff_x20,local_f0,FUN_1000b292c);
      uVar35 = local_1b0;
      puVar33 = &DAT_100eb4718;
      _swift_allocObject(&DAT_100eb4718,local_1b0 + 0x10,local_1a0 | 7);
      FUN_1000523d8(lVar11,puVar33 + local_198,FUN_1000b292c);
      puVar27 = local_160;
      SVar16.unknown = (undefined *)local_168;
      *(undefined8 **)(puVar33 + uVar35) = local_168;
      *(undefined **)((long)(puVar33 + uVar35) + 8) = local_160;
      VVar14.unknown = local_160;
      _swift_bridgeObjectRetain();
      VVar14 = SwiftUI::VerticalAlignment::get_center(VVar14);
      puVar46 = local_170;
      *local_170 = VVar14.unknown;
      puVar46[1] = 0x4024000000000000;
      *(undefined1 *)(puVar46 + 2) = 0;
      FUN_1000c38c8((long)puVar46 + (long)*(int *)(local_1a8 + 0x2c),SVar16.unknown,puVar27,
                    FUN_1000c4ff8,puVar33);
      SVar16 = SwiftUI::Edge::Set::get_horizontal(SVar16);
      uVar41 = 0x4030000000000000;
      EVar28 = SwiftUI::EdgeInsets::init(SVar16.unknown);
      puVar1 = (undefined1 *)((long)puVar46 + (long)*(int *)(local_1b8 + 0x24));
      *puVar1 = (char)SVar16.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar41;
      *(undefined8 *)(puVar1 + 0x10) = uVar50;
      *(undefined8 *)(puVar1 + 0x18) = uVar52;
      *(undefined8 *)(puVar1 + 0x20) = uVar54;
      puVar1[0x28] = 0;
      SVar16 = SwiftUI::Edge::Set::get_vertical(EVar28.unknown);
      uVar41 = 0x4028000000000000;
      EVar28 = SwiftUI::EdgeInsets::init(SVar16.unknown);
      puVar1 = (undefined1 *)((long)puVar46 + (long)*(int *)(local_1c0 + 0x24));
      *puVar1 = (char)SVar16.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar41;
      *(undefined8 *)(puVar1 + 0x10) = uVar50;
      *(undefined8 *)(puVar1 + 0x18) = uVar52;
      *(undefined8 *)(puVar1 + 0x20) = uVar54;
      puVar1[0x28] = 0;
      CVar17 = SwiftUI::Color::get_secondary(EVar28.unknown);
      CVar18 = SwiftUI::Color::opacity(0.1,CVar17);
      _swift_release(CVar17.unknown);
      _swift_bridgeObjectRelease(puVar27);
      _swift_release(puVar33);
      puVar33 = apuStack_200[1];
      puVar13 = (undefined8 *)((long)puVar46 + (long)*(int *)(puVar36 + 0x24));
      puVar42 = (undefined8 *)((long)puVar13 + (long)*(int *)(apuStack_200[1] + 0x34));
      (*local_1f0[2])((long)puVar42 + (long)*(int *)(local_1c8 + 0x14),local_1cc,local_1d8);
      lVar12 = local_178;
      puVar42[1] = local_1f0[1];
      *puVar42 = local_1f0[0];
      *puVar13 = CVar18.unknown;
      *(undefined2 *)((long)puVar13 + (long)*(int *)(puVar33 + 0x38)) = 0x100;
      FUN_100011090(puVar31,local_178,&DAT_100fabd10,&DAT_100c29f70);
      lVar11 = local_180;
      FUN_100011090(puVar46,local_180,&DAT_100fabd10,&DAT_100c29f70);
      puVar30 = local_e0;
      puVar42 = local_140;
      puVar33 = local_150;
      *local_140 = local_e0;
      puVar42[1] = puVar33;
      uVar35 = (ulong)local_158 & 0xffffffff;
      *(char *)(puVar42 + 2) = (char)local_158;
      puVar27 = local_148;
      puVar42[3] = local_148;
      *(undefined2 *)(puVar42 + 4) = 0x100;
      puVar36 = &DAT_100fabd88;
      FUN_1000037f0(&DAT_100fabd88,&DAT_100c29fe8);
      FUN_100011090(lVar12,(long)puVar42 + (long)*(int *)(puVar36 + 0x30),&DAT_100fabd10,
                    &DAT_100c29f70);
      pcVar6 = local_100;
      LVar5.unknown = local_130.unknown;
      puVar39 = local_138;
      puVar13 = (undefined8 *)((long)puVar42 + (long)*(int *)(puVar36 + 0x40));
      *puVar13 = local_138;
      puVar13[1] = local_100;
      uVar45 = local_108 & 0xffffffff;
      *(char *)(puVar13 + 2) = (char)local_108;
      puVar13[3] = local_130.unknown;
      *(undefined2 *)(puVar13 + 4) = 0x100;
      FUN_100011090(lVar11,(long)puVar42 + (long)*(int *)(puVar36 + 0x50),&DAT_100fabd10,
                    &DAT_100c29f70);
      FUN_100016d5c(puVar30,puVar33,uVar35);
      _swift_bridgeObjectRetain(puVar27);
      FUN_100016d5c(puVar39,pcVar6,uVar45);
      _swift_bridgeObjectRetain(LVar5.unknown);
      FUN_100016d5c(puVar30,puVar33,uVar35);
      _swift_bridgeObjectRetain(puVar27);
      FUN_100016d5c(puVar39,pcVar6,uVar45);
      _swift_bridgeObjectRetain(LVar5.unknown);
      FUN_100005808(local_180,&DAT_100fabd10,&DAT_100c29f70);
      FUN_100016d74(puVar39,pcVar6,uVar45);
      _swift_bridgeObjectRelease(LVar5.unknown);
      FUN_100005808(local_178,&DAT_100fabd10,&DAT_100c29f70);
      FUN_100016d74(local_e0,puVar33,uVar35);
      _swift_bridgeObjectRelease(puVar27);
      lVar11 = local_118;
      puVar13 = local_140;
      FUN_100011090(local_140,local_118,&DAT_100fabce8,&DAT_100c29f48);
      _swift_storeEnumTagMultiPayload(lVar11,local_120,0);
      FUN_100016eac(&DAT_100fabd18,&DAT_100fabce8,&DAT_100c29f48,
                    PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
      puVar42 = local_110;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar11);
      FUN_100011090(puVar42,lVar32,&DAT_100fabce0,&DAT_100c29f40);
      _swift_storeEnumTagMultiPayload(lVar32,puVar9,1);
      FUN_1000c4d14();
      FUN_1000c4f54();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
      FUN_100016d74(local_138,local_100,local_108 & 0xffffffff);
      _swift_bridgeObjectRelease(local_130.unknown);
      FUN_100016d74(local_e0,puVar33,uVar35);
      _swift_bridgeObjectRelease(puVar27);
      FUN_100005808(puVar42,&DAT_100fabce0,&DAT_100c29f40);
      FUN_100005808(local_170,&DAT_100fabd10,&DAT_100c29f70);
      FUN_100005808(puVar31,&DAT_100fabd10,&DAT_100c29f70);
      puVar36 = &DAT_100fabce8;
      puVar33 = &DAT_100c29f48;
      puVar31 = puVar13;
    }
  }
  FUN_100005808(puVar31,puVar36,puVar33);
  return;
}



/* Address: 0x1000c2388 | FUN_1000c2388 */

void FUN_1000c2388(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  ButtonRole BVar7;
  Button<undefined> BVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  KeyboardShortcut KVar11;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  code *local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  undefined *local_100;
  MainActor *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  long local_70;
  
  puVar1 = (undefined *)0x0;
  local_d0 = param_1;
  local_b0 = param_2;
  local_a8 = param_3;
  FUN_1000c99d0();
  local_140 = *(long *)(puVar1 + -8);
  local_108 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (long)&local_140 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_138 = extraout_x12;
  local_130 = lVar10;
  FUN_1000c932c();
  local_110 = lVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fabcb0;
  local_90 = lVar10;
  FUN_1000037f0(&DAT_100fabcb0,&DAT_100c2b690);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_00;
  local_118 = lVar10;
  local_98 = (undefined *)Foundation::LocalizedStringResource::typeMetadataAccessor();
  local_a0 = *(long *)(local_98 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fabcb8;
  local_128 = lVar10;
  FUN_1000037f0(&DAT_100fabcb8,&DAT_100c29f00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12_00;
  local_e0 = lVar10;
  local_b8 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_120 = *(code **)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_120 + 0x40));
  KVar11.unknown = (undefined *)(lVar10 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  FUN_1000b292c();
  lVar20 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (long)KVar11.unknown - (lVar2 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fa6e90;
  local_c8 = lVar10;
  FUN_1000037f0(&DAT_100fa6e90,&DAT_100c239b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_04;
  puVar1 = &DAT_100fa6e58;
  FUN_1000037f0(&DAT_100fa6e58,&DAT_100c26330);
  lVar18 = *(long *)(puVar1 + -8);
  local_c0 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar10 - extraout_x8_05;
  puVar1 = &DAT_100fabc50;
  FUN_1000037f0(&DAT_100fabc50,&DAT_100c29e68);
  local_f0 = *(long *)(puVar1 + -8);
  local_100 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f0 + 0x40));
  lVar14 = lVar17 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = lVar14 - extraout_x12_01;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_f8 = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x13e,UVar5.unknown,puVar4);
  }
  SwiftUI::ButtonRole::get_cancel((ButtonRole)pcVar6);
  BVar7 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar7.unknown + -8) + 0x38))(lVar10,0,1,BVar7.unknown);
  lVar10 = local_c8;
  FUN_1000c495c(local_b0,local_c8,FUN_1000b292c);
  uVar12 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar21 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  lVar2 = uVar21 + lVar2;
  puVar1 = &DAT_100eb46a0;
  _swift_allocObject(&DAT_100eb46a0,lVar2,uVar12 | 7);
  FUN_1000523d8(lVar10,puVar1 + uVar21,FUN_1000b292c);
  BVar8 = SwiftUI::Button::_init();
  SwiftUI::KeyboardShortcut::get_cancelAction((KeyboardShortcut)BVar8.unknown);
  puVar1 = &DAT_100fa6e78;
  FUN_100016eac(&DAT_100fa6e78,&DAT_100fa6e58,&DAT_100c26330,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar9 = local_c0;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar11);
  pcVar15 = *(code **)(local_120 + 8);
  (*pcVar15)(KVar11.unknown,local_b8);
  pcVar19 = *(code **)(lVar18 + 8);
  (*pcVar19)(lVar17,puVar9);
  lVar14 = local_90;
  FUN_1000c495c(local_a8 + *(int *)(local_108 + 0x18),local_90,FUN_1000c932c);
  lVar18 = lVar14;
  _swift_getEnumCaseMultiPayload(lVar14,local_110);
  puVar9 = local_98;
  lVar10 = local_118;
  if ((int)lVar18 - 2U < 3) {
    FUN_10005241c(lVar14,FUN_1000c932c);
    lVar10 = local_118;
    (**(code **)(local_a0 + 0x38))(local_118,1,1,local_98);
  }
  else {
    local_120 = pcVar15;
    local_108 = puVar1;
    if ((int)lVar18 == 0) {
      FUN_1001dddd4(local_118);
    }
    else {
      FUN_1001ddc54(local_118);
    }
    lVar18 = local_a0;
    (**(code **)(local_a0 + 0x38))(lVar10,0,1,puVar9);
    FUN_10005241c(local_90,FUN_1000c932c);
    lVar20 = lVar10;
    (**(code **)(lVar18 + 0x30))(lVar10,1,puVar9);
    lVar14 = local_128;
    if ((int)lVar20 != 1) {
      (**(code **)(lVar18 + 0x20))(local_128,lVar10,puVar9);
      lVar18 = local_c8;
      FUN_1000c495c(local_b0,local_c8,FUN_1000b292c);
      lVar10 = local_130;
      FUN_1000c495c(local_a8,local_130,FUN_1000c99d0);
      uVar13 = (ulong)*(byte *)(local_140 + 0x50);
      uVar16 = lVar2 + uVar13 & (uVar13 ^ 0xffffffffffffffff);
      puVar1 = &DAT_100eb46c8;
      _swift_allocObject(&DAT_100eb46c8,uVar16 + local_138,uVar12 | 7 | uVar13);
      FUN_1000523d8(lVar18,puVar1 + uVar21,FUN_1000b292c);
      FUN_1000523d8(lVar10,puVar1 + uVar16,FUN_1000c99d0);
      local_70 = lVar14;
      BVar8 = SwiftUI::Button::_init();
      SwiftUI::KeyboardShortcut::get_defaultAction((KeyboardShortcut)BVar8.unknown);
      puVar1 = local_c0;
      lVar10 = local_e0;
      (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar11);
      (*local_120)(KVar11.unknown,local_b8);
      (*pcVar19)(lVar17,puVar1);
      lVar2 = local_f0;
      puVar1 = local_100;
      (**(code **)(local_f0 + 0x38))(lVar10,0,1,local_100);
      (**(code **)(local_a0 + 8))(lVar14,local_98);
      goto LAB_1000c295c;
    }
  }
  FUN_100005808(lVar10,&DAT_100fabcb0,&DAT_100c2b690);
  lVar10 = local_e0;
  lVar2 = local_f0;
  puVar1 = local_100;
  (**(code **)(local_f0 + 0x38))(local_e0,1,1,local_100);
LAB_1000c295c:
  lVar18 = local_88;
  lVar14 = local_e8;
  pcVar15 = *(code **)(lVar2 + 0x10);
  (*pcVar15)(local_e8,local_88,puVar1);
  lVar17 = local_d8;
  FUN_100011090(lVar10,local_d8,&DAT_100fabcb8,&DAT_100c29f00);
  puVar4 = local_d0;
  *local_d0 = 0;
  *(undefined1 *)(local_d0 + 1) = 1;
  puVar9 = &DAT_100fabcc0;
  FUN_1000037f0(&DAT_100fabcc0,&DAT_100c29f08);
  (*pcVar15)((long)puVar4 + (long)*(int *)(puVar9 + 0x30),lVar14,puVar1);
  FUN_100011090(lVar17,(long)puVar4 + (long)*(int *)(puVar9 + 0x40),&DAT_100fabcb8,&DAT_100c29f00);
  FUN_100005808(lVar10,&DAT_100fabcb8,&DAT_100c29f00);
  pcVar15 = *(code **)(lVar2 + 8);
  (*pcVar15)(lVar18,puVar1);
  FUN_100005808(lVar17,&DAT_100fabcb8,&DAT_100c29f00);
  (*pcVar15)(lVar14,puVar1);
  _swift_release(local_f8);
  return;
}



/* Address: 0x1000c2bb8 | FUN_1000c2bb8 */

void FUN_1000c2bb8(long param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100fabcc8;
  FUN_1000037f0(&DAT_100fabcc8,&DAT_100c2a4d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_80 + -extraout_x8;
  puVar1 = &DAT_100fabcd0;
  FUN_1000037f0(&DAT_100fabcd0,&DAT_100c29f10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar9 - extraout_x12;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x140,UVar4.unknown,puVar3);
  }
  lVar11 = *(long *)(param_1 + 8);
  lVar6 = 0;
  FUN_1000c99d0();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar10,1,1,lVar6);
  puVar1 = &DAT_100c29db8;
  _swift_getKeyPath(&DAT_100c29db8);
  puVar7 = &DAT_100c29f18;
  _swift_getKeyPath(&DAT_100c29f18);
  FUN_100011090(lVar10,lVar9,&DAT_100fabcd0,&DAT_100c29f10);
  _swift_retain(lVar11);
  Combine::Published::_set_subscript((Published *)pMVar2,lVar9,lVar11,puVar1,puVar7);
  FUN_100005808(lVar10,&DAT_100fabcd0,&DAT_100c29f10);
  lVar9 = 0;
  FUN_10046de5c();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar8,1,1,lVar9);
  lVar9 = _TtC5Paste20MCPSettingsViewModel::pendingWatch;
  _swift_beginAccess(lVar11 + _TtC5Paste20MCPSettingsViewModel::pendingWatch,auStack_78,0x21,0);
  FUN_1000c4cc4(puVar8,lVar11 + lVar9);
  _swift_endAccess(auStack_78);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000c2dfc | FUN_1000c2dfc */

void FUN_1000c2dfc(void)

{
  FUN_1000b7080(0x142,FUN_1001c0788);
  return;
}



/* Address: 0x1000c2e0c | FUN_1000c2e0c */

void FUN_1000c2e0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x148,UVar4.unknown,puVar3);
  }
  FUN_1000cd16c(param_2);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000c2eb0 | FUN_1000c2eb0 */

void FUN_1000c2eb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  Text TVar7;
  undefined1 uVar8;
  long extraout_x8;
  long lVar9;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar9 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    param_5 = 0x14a;
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x14a,UVar5.unknown,puVar4);
  }
  (**(code **)(lVar9 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  uVar8 = SUB81(LVar2.unknown,0);
  TVar7 = SwiftUI::Text::init((LocalizedStringResource)
                              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)
                              ));
  _swift_release(pMVar3);
  *param_1 = TVar7.unknown;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = param_5;
  return;
}



/* Address: 0x1000c2fd8 | thunk_FUN_1000b4400 */

void thunk_FUN_1000b4400(void)

{
  FUN_1000b4400();
  return;
}



/* Address: 0x1000c2fdc | thunk_FUN_1000b5728 */

void thunk_FUN_1000b5728(void)

{
  FUN_1000b5728();
  return;
}



/* Address: 0x1000c2fe0 | FUN_1000c2fe0 */

void FUN_1000c2fe0(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x1000c300c | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  UUID UVar6;
  Date DVar7;
  undefined *puVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  lVar4 = 0;
  FUN_1000b292c();
  lVar14 = *(long *)(lVar4 + -8);
  uVar12 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar13 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar13;
  _swift_release(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_release(*(undefined8 *)(lVar1 + 0x20));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar5 = 0;
  FUN_10045ba0c();
  lVar11 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
  if ((int)lVar11 == 0) {
    UVar6 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar6.unknown + -8) + 8))(lVar2,UVar6.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x14) + 8));
    iVar3 = *(int *)(lVar5 + 0x1c);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    lVar10 = *(long *)(DVar7.unknown + -8);
    pcVar9 = *(code **)(lVar10 + 8);
    (*pcVar9)(lVar2 + iVar3,DVar7.unknown);
    iVar3 = *(int *)(lVar5 + 0x20);
    lVar11 = lVar2 + iVar3;
    (**(code **)(lVar10 + 0x30))(lVar11,1,DVar7.unknown);
    if ((int)lVar11 == 0) {
      (*pcVar9)(lVar2 + iVar3,DVar7.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x24) + 8));
    lVar11 = lVar2 + *(int *)(lVar5 + 0x28);
    lVar10 = 0;
    FUN_10045bd80();
    lVar5 = lVar11;
    (**(code **)(*(long *)(lVar10 + -8) + 0x30))(lVar11,1,lVar10);
    if ((int)lVar5 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x10));
      (*pcVar9)(lVar11 + *(int *)(lVar10 + 0x18),DVar7.unknown);
    }
  }
  lVar11 = *(long *)(lVar14 + 0x40);
  puVar8 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar8 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x10));
  lVar1 = lVar1 + *(int *)(lVar4 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  _swift_deallocObject(unaff_x20,lVar11 + uVar13,uVar12 | 7);
  return;
}



/* Address: 0x1000c3010 | FUN_1000c3010 */

void FUN_1000c3010(void)

{
  FUN_1000c5efc(FUN_1000b57ac);
  return;
}



/* Address: 0x1000c301c | FUN_1000c301c */

void FUN_1000c301c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabb40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabb38;
  FUN_100005c24(&DAT_100fabb38,&DAT_100c29d98);
  puVar2 = puVar1;
  FUN_1000c3094();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabb40 = puVar3;
  return;
}



/* Address: 0x1000c3094 | FUN_1000c3094 */

void FUN_1000c3094(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabb48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabb50;
  FUN_100005c24(&DAT_100fabb50,&DAT_100c29da0);
  puVar2 = puVar1;
  FUN_1000c310c();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabb48 = puVar3;
  return;
}



/* Address: 0x1000c310c | FUN_1000c310c */

void FUN_1000c310c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabb58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabb60;
  FUN_100005c24(&DAT_100fabb60,&DAT_100c29da8);
  puVar2 = &DAT_100fabb68;
  FUN_100016eac(&DAT_100fabb68,&DAT_100fabb70,&DAT_100c29db0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabb58 = puVar3;
  return;
}



/* Address: 0x1000c31a4 | thunk_FUN_1000c6674 */

void thunk_FUN_1000c6674(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000c31a8 | thunk_FUN_1000c6688 */

void thunk_FUN_1000c6688(void)

{
  FUN_1000c6688();
  return;
}



/* Address: 0x1000c31ac | FUN_1000c31ac */

void FUN_1000c31ac(undefined8 param_1)

{
  FUN_1000c5914(param_1,FUN_1000b5ad8);
  return;
}



/* Address: 0x1000c31b8 | FUN_1000c31b8 */

void FUN_1000c31b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabb88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabb78;
  FUN_100005c24(&DAT_100fabb78,&DAT_100c29de0);
  puVar2 = puVar1;
  FUN_1000c3230();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabb88 = puVar3;
  return;
}


