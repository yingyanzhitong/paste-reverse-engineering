/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10051c74c | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x10051c750 | FUN_10051c750 */

undefined1  [16] FUN_10051c750(char *param_1,void *param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  Character CVar2;
  bool bVar3;
  _StringGuts _Var4;
  undefined8 uVar5;
  Index after;
  Character CVar6;
  undefined1 auVar7 [16];
  String SVar8;
  String SVar9;
  
  CVar2.bridgeObject = param_2;
  CVar2.str = param_1;
  uVar1 = (ulong)param_3 & 0xffffffffffff;
  if (((ulong)param_4 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      SVar8.bridgeObject = param_4;
      SVar8.str = param_3;
      CVar6 = Swift::String::get_subscript(after,SVar8);
      _Var4.unknown = CVar6.bridgeObject;
      if (CVar6 == CVar2) {
        _swift_bridgeObjectRelease(_Var4.unknown);
LAB_10051c80c:
        uVar5 = 0;
        goto LAB_10051c810;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)CVar6.str,_Var4,(_StringComparisonResult)(__int8)param_1);
      _swift_bridgeObjectRelease(_Var4.unknown);
      if (bVar3) goto LAB_10051c80c;
      SVar9.bridgeObject = param_4;
      SVar9.str = param_3;
      after = Swift::String::index(after,SVar9);
    } while (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x0;
  uVar5 = 1;
LAB_10051c810:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = after.cmsgPointer.unknown;
  return auVar7;
}



/* Address: 0x10051c82c | FUN_10051c82c */

ulong FUN_10051c82c(__DataStorage *param_1,long param_2,ulong param_3)

{
  __DataStorage _Var1;
  code *pcVar2;
  uint uVar3;
  __DataStorage *p_Var4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  __DataStorage local_76 [4];
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar10 = (uint)(param_3 >> 0x20);
  uVar9 = uVar10 >> 0x1e;
  if (uVar10 >> 0x1e < 2) {
    uVar7 = 0;
    if (uVar9 != 0) {
      uVar7 = (long)(int)param_2;
    }
  }
  else {
    uVar7 = 0;
    if (uVar9 == 2) {
      uVar7 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar3 = (uint)param_1;
  uVar11 = param_3 >> 0x30 & 0xff;
  uVar10 = uVar10 >> 0x1e;
  uVar8 = uVar7;
  if (1 < uVar9) goto LAB_10051c8e4;
LAB_10051c8cc:
  uVar6 = uVar11;
  if (uVar9 != 0) {
    uVar6 = param_2 >> 0x20;
  }
  if (uVar8 == uVar6) {
LAB_10051ca1c:
    uVar8 = 0;
    uVar5 = 1;
LAB_10051ca24:
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(param_1,uVar5);
  }
  do {
    if (uVar9 == 2) {
      if ((long)uVar8 < *(long *)(param_2 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051ca68);
        (*pcVar2)();
      }
      if (*(long *)(param_2 + 0x18) <= (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051ca70);
        (*pcVar2)();
      }
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
      if (param_1 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051ca84);
        (*pcVar2)();
      }
      p_Var4 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
      if (SBORROW8(uVar8,(long)p_Var4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051ca78);
        (*pcVar2)();
      }
LAB_10051c978:
      _Var1 = param_1[uVar8 - (long)p_Var4];
      param_1 = p_Var4;
    }
    else {
      if (uVar10 == 1) {
        if (((long)uVar8 < (long)(int)param_2) || (param_2 >> 0x20 <= (long)uVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10051ca6c);
          (*pcVar2)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
        if (param_1 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10051ca80);
          (*pcVar2)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
        if (SBORROW8(uVar8,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10051ca74);
          (*pcVar2)();
        }
        goto LAB_10051c978;
      }
      if ((long)uVar11 <= (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051ca64);
        (*pcVar2)();
      }
      local_76[0] = SUB81(param_2,0);
      local_76[1] = (__DataStorage)(char)((ulong)param_2 >> 8);
      local_76[2] = (__DataStorage)(char)((ulong)param_2 >> 0x10);
      local_76[3] = (__DataStorage)(char)((ulong)param_2 >> 0x18);
      local_72 = (char)((ulong)param_2 >> 0x20);
      local_71 = (char)((ulong)param_2 >> 0x28);
      local_70 = (char)((ulong)param_2 >> 0x30);
      local_6f = (char)((ulong)param_2 >> 0x38);
      local_6e = (char)param_3;
      local_6d = (char)(param_3 >> 8);
      local_6c = (char)(param_3 >> 0x10);
      local_6b = (char)(param_3 >> 0x18);
      local_6a = (char)(param_3 >> 0x20);
      local_69 = (char)(param_3 >> 0x28);
      _Var1 = local_76[uVar8];
    }
    if ((uint)(byte)_Var1 == (uVar3 & 0xff)) {
      uVar5 = 0;
      goto LAB_10051ca24;
    }
    uVar8 = uVar8 + 1;
    if (uVar10 < 2) goto LAB_10051c8cc;
LAB_10051c8e4:
    if (uVar10 != 2) {
      if (uVar7 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051ca7c);
        (*pcVar2)();
      }
      goto LAB_10051ca1c;
    }
    if (uVar8 == *(ulong *)(param_2 + 0x18)) goto LAB_10051ca1c;
  } while( true );
}



/* Address: 0x10051ca88 | FUN_10051ca88 */

void FUN_10051ca88(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Address: 0x10051ca90 | FUN_10051ca90 */

undefined8 FUN_10051ca90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_100521584(param_1,param_2,param_3);
  _swift_release(param_3);
  return param_1;
}



/* Address: 0x10051caf0 | FUN_10051caf0 */

undefined8 FUN_10051caf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100521584();
  _swift_release(param_3);
  return param_1;
}



/* Address: 0x10051cb20 | FUN_10051cb20 */

void FUN_10051cb20(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x198) = unaff_x20;
  puVar1 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar2;
  _swift_task_switch(FUN_10051cb84);
  return;
}



/* Address: 0x10051cb84 | FUN_10051cb84 */

/* WARNING: Removing unreachable block (ram,0x00010051cbe4) */

void FUN_10051cb84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x198);
  if ((*(byte *)(lVar7 + 0x80) & 1) == 0) {
    FUN_100521820(*(undefined4 *)(lVar7 + 0x70));
    FUN_100521820(*(undefined4 *)(*(long *)(unaff_x22 + 0x198) + 0x74));
    lVar6 = *(long *)(unaff_x22 + 0x198);
    *(undefined1 *)(lVar7 + 0x80) = 1;
    lVar6 = *(long *)(lVar6 + 0x78);
    _swift_beginAccess(lVar6 + 0x20,unaff_x22 + 0x180,0,0);
    FUN_100076688(lVar6 + 0x20,unaff_x22 + 0x130);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
    lVar7 = *(long *)(unaff_x22 + 0x150);
    FUN_100004640(unaff_x22 + 0x130,uVar2);
    (**(code **)(lVar7 + 0x70))(uVar2,lVar7);
    FUN_100004594(unaff_x22 + 0x130);
    if (((uint)uVar2 & 0xff) < 2) {
      FUN_100076688(lVar6 + 0x20,unaff_x22 + 0x158);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar7 = *(long *)(unaff_x22 + 0x178);
      FUN_100004640(unaff_x22 + 0x158,uVar2);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dacb10;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000018;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dad090;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 0x68) = 99;
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dacb10;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000018;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad090;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 200) = 99;
      FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      (**(code **)(lVar7 + 0x28))(unaff_x22 + 0x10,uVar2,lVar7);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      FUN_100004594(unaff_x22 + 0x158);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
    TVar3 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(uVar1,1,1,TVar3.unknown);
    puVar4 = &DAT_100fce340;
    FUN_100003a00(&DAT_100fce340,FUN_1005218c8,&TargetProtocolConformanceDescriptor_100c54840);
    puVar5 = &DAT_100edc8a0;
    _swift_allocObject(&DAT_100edc8a0,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar2;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    *(undefined8 *)(puVar5 + 0x20) = uVar2;
    _swift_retain_n(uVar2,2);
    FUN_1004e9c98(0,0,uVar1,&DAT_100c54828,puVar5);
    _swift_release();
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010051cc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10051cdec | FUN_10051cdec */

void FUN_10051cdec(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x610;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_10051ce34();
  return;
}



/* Address: 0x10051ce34 | FUN_10051ce34 */

void FUN_10051ce34(void)

{
  long lVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x598) = unaff_x20;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_10051ce98);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10051ce98 | FUN_10051ce98 */

/* WARNING: Removing unreachable block (ram,0x00010051d664) */
/* WARNING: Removing unreachable block (ram,0x00010051d6d0) */
/* WARNING: Removing unreachable block (ram,0x00010051d774) */
/* WARNING: Removing unreachable block (ram,0x00010051d78c) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010051cee4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10051ce98(undefined8 param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  _ArrayBuffer<undefined> _Var7;
  ulong uVar8;
  UnsafeMutableRawBufferPointer UVar9;
  Data DVar10;
  Task TVar11;
  __DataStorage *p_Var12;
  undefined *puVar13;
  ulong uVar14;
  long *plVar15;
  __DataStorage *p_Var16;
  undefined8 *puVar17;
  __DataStorage *p_Var18;
  undefined4 *puVar20;
  undefined *puVar21;
  int *piVar22;
  ContinuousClock CVar23;
  undefined *puVar24;
  uint uVar25;
  UnsafeMutableRawBufferPointer into;
  void *pvVar26;
  char *pcVar27;
  char *pcVar28;
  void *pvVar29;
  int iVar30;
  long lVar31;
  uint uVar32;
  undefined8 uVar33;
  long lVar34;
  undefined *puVar35;
  undefined8 *puVar36;
  void *pvVar37;
  undefined8 uVar38;
  long unaff_x22;
  int iVar39;
  long lVar40;
  long lVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  undefined4 *puVar19;
  
  lVar31 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar34 = *(long *)(unaff_x22 + 0x598);
  _Var7 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (param_1,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
  *(undefined8 *)(_Var7.unknown + 0x10) = 0x1000;
  TVar11.unknown = _Var7.unknown + 0x20;
  _bzero(TVar11.unknown,0x1000);
  *(undefined8 *)(unaff_x22 + 0x520) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x518) = 0;
  *(undefined8 *)(unaff_x22 + 0x5a0) = _TtC3MCP14StdioTransport::messageContinuation;
  *(undefined8 *)(unaff_x22 + 0x5a8) = *(undefined8 *)(lVar34 + 0x78);
  if (*(char *)(lVar34 + 0x80) == '\x01') {
    puVar1 = (undefined8 *)(unaff_x22 + 0x507);
    puVar20 = (undefined4 *)(unaff_x22 + 0x600);
    piVar2 = (int *)(unaff_x22 + 0x604);
    while (bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar11), !bVar5) {
      puVar35 = _Var7.unknown;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar35 & 1) == 0) {
        FUN_100521570();
      }
      *(undefined **)(unaff_x22 + 0x5b0) = _Var7.unknown;
      uVar8 = *(ulong *)(unaff_x22 + 0x598);
      lVar34 = *(long *)(_Var7.unknown + 0x10);
      _swift_task_isCurrentExecutor(uVar8,0);
      if ((uVar8 & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("MCP/StdioTransport.swift",0x18,1,0x8f,*(undefined8 *)(unaff_x22 + 0x598),0);
      }
      into.unknown = _Var7.unknown + 0x20;
      uVar25 = (uint)(into.unknown + lVar34);
      UVar9.unknown = into.unknown;
      System::FileDescriptor::__read(into,SUB81(into.unknown + lVar34,0),(FileDescriptor)0x1);
      if ((uVar25 & 0xff) == 1) {
        *puVar20 = (int)UVar9.unknown;
        bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        puVar19 = (undefined4 *)CONCAT71((int7)((ulong)UVar9.unknown >> 8),bVar6);
        if ((bVar6 & 1) != 0) {
          FUN_100521998();
          _swift_willThrowTypedImpl(puVar20,PTR___type_metadata_for_System_Errno_100eae9c8,puVar19);
          puVar19 = puVar20;
        }
        FUN_100521998();
        puVar21 = PTR___type_metadata_for_System_Errno_100eae9c8;
        _swift_allocError(PTR___type_metadata_for_System_Errno_100eae9c8,puVar19,0,0);
        *puVar19 = (int)UVar9.unknown;
        *(undefined **)(unaff_x22 + 0x5b8) = puVar21;
        *(undefined **)(unaff_x22 + 0x588) = puVar21;
        _swift_errorRetain(puVar21);
        _swift_errorRetain(puVar21);
        puVar35 = &DAT_100fcb578;
        FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
        piVar22 = piVar2;
        _swift_dynamicCast(piVar2,unaff_x22 + 0x588,puVar35,
                           PTR___type_metadata_for_System_Errno_100eae9c8,6);
        TVar11.unknown = puVar21;
        if (((ulong)piVar22 & 1) == 0) {
          _swift_errorRelease();
        }
        else {
          iVar39 = *piVar2;
          _swift_errorRelease();
          if (iVar39 == 0x23) {
            CVar23 = Swift::ContinuousClock::typeMetadataAccessor();
            *(undefined **)(unaff_x22 + 0x5c0) = CVar23.unknown;
            lVar34 = *(long *)(CVar23.unknown + -8);
            *(long *)(unaff_x22 + 0x5c8) = lVar34;
            uVar8 = *(long *)(lVar34 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            *(ulong *)(unaff_x22 + 0x5d0) = uVar8;
            (extension_Swift)::Swift::Clock::_get_continuous();
            *(undefined8 *)(unaff_x22 + 0x568) = 10000000000000000;
            *(undefined8 *)(unaff_x22 + 0x570) = 0;
            *(undefined8 *)(unaff_x22 + 0x4f0) = 0;
            *(undefined8 *)(unaff_x22 + 0x4e8) = 0;
            *(undefined1 *)(unaff_x22 + 0x4f8) = 1;
            if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar31) {
              _swift_task_switch(FUN_10051dd48,0,0);
              return;
            }
            goto LAB_10051dd44;
          }
        }
        bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar11);
        if (!bVar5) {
          lVar34 = *(long *)(unaff_x22 + 0x5a8);
          _swift_beginAccess(lVar34 + 0x20,unaff_x22 + 0x4b8,0,0);
          FUN_100076688(lVar34 + 0x20,unaff_x22 + 1000);
          uVar38 = *(undefined8 *)(unaff_x22 + 0x400);
          lVar34 = *(long *)(unaff_x22 + 0x408);
          FUN_100004640(unaff_x22 + 1000,uVar38);
          (**(code **)(lVar34 + 0x70))(uVar38,lVar34);
          FUN_100004594(unaff_x22 + 1000);
          if (((uint)uVar38 & 0xff) < 6) {
            FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x460);
            uVar38 = *(undefined8 *)(unaff_x22 + 0x478);
            lVar34 = *(long *)(unaff_x22 + 0x480);
            FUN_100004640(unaff_x22 + 0x460,uVar38);
            puVar35 = &DAT_100fcd4a8;
            FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
            pcVar27 = (char *)0x60;
            pvVar37 = (void *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar35 + 0x20) = 0x726f727265;
            *(undefined8 *)(puVar35 + 0x18) = 2;
            *(undefined8 *)(puVar35 + 0x10) = 1;
            *(undefined1 **)(puVar35 + 0x28) = &DAT_e500000000000000;
            SVar42.bridgeObject = pvVar37;
            SVar42.str = pcVar27;
            Swift::String::reserveCapacity(2,SVar42);
            _swift_getErrorValue(puVar21,unaff_x22 + 0x580,unaff_x22 + 0x4a0);
            FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x4a0),*(undefined8 *)(unaff_x22 + 0x4a8));
            *(undefined8 *)(puVar35 + 0x30) = 0;
            *(undefined8 *)(puVar35 + 0x38) = 0xe000000000000000;
            puVar35[0x58] = 0;
            puVar24 = puVar35;
            FUN_1004a6a1c();
            _swift_setDeallocating(puVar35);
            FUN_1000fb4c4(puVar35 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
            _swift_deallocClassInstance(puVar35,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x70) = 5;
            *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000013;
            *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad0b0;
            *(undefined8 *)(unaff_x22 + 0x88) = 0;
            *(undefined **)(unaff_x22 + 0x90) = puVar24;
            *(undefined8 *)(unaff_x22 + 0x98) = 0;
            *(undefined8 *)(unaff_x22 + 0xa0) = 0;
            *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0xb8) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0xc0) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 200) = 0xaa;
            *(undefined1 *)(unaff_x22 + 0x130) = 5;
            *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000013;
            *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dad0b0;
            *(undefined8 *)(unaff_x22 + 0x148) = 0;
            *(undefined **)(unaff_x22 + 0x150) = puVar24;
            *(undefined8 *)(unaff_x22 + 0x158) = 0;
            *(undefined8 *)(unaff_x22 + 0x160) = 0;
            *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0x178) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0x180) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 0x188) = 0xaa;
            FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 400);
            FUN_1004eaa3c(unaff_x22 + 0x130);
            (**(code **)(lVar34 + 0x28))(unaff_x22 + 0x70,uVar38,lVar34);
            _swift_errorRelease(puVar21);
            FUN_1004eaa3c(unaff_x22 + 0x70);
            lVar34 = unaff_x22 + 0x460;
            goto LAB_10051dc94;
          }
        }
        _swift_errorRelease(puVar21);
        break;
      }
      if (UVar9.unknown == (undefined *)0x0) {
        lVar34 = *(long *)(unaff_x22 + 0x5a8);
        _swift_beginAccess(lVar34 + 0x20,unaff_x22 + 0x4d0,0,0);
        FUN_100076688(lVar34 + 0x20,unaff_x22 + 0x410);
        uVar38 = *(undefined8 *)(unaff_x22 + 0x428);
        lVar34 = *(long *)(unaff_x22 + 0x430);
        FUN_100004640(unaff_x22 + 0x410,uVar38);
        (**(code **)(lVar34 + 0x70))(uVar38,lVar34);
        FUN_100004594(unaff_x22 + 0x410);
        if (((uint)uVar38 & 0xff) < 4) {
          FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x3c0);
          uVar38 = *(undefined8 *)(unaff_x22 + 0x3d8);
          lVar34 = *(long *)(unaff_x22 + 0x3e0);
          FUN_100004640(unaff_x22 + 0x3c0,uVar38);
          *(undefined1 *)(unaff_x22 + 0xd0) = 3;
          *(undefined8 *)(unaff_x22 + 0xd8) = 0x6563657220464f45;
          *(undefined8 *)(unaff_x22 + 0xe0) = 0xec00000064657669;
          *(undefined8 *)(unaff_x22 + 0xf0) = 0;
          *(undefined8 *)(unaff_x22 + 0xe8) = 0;
          *(undefined8 *)(unaff_x22 + 0x100) = 0;
          *(undefined8 *)(unaff_x22 + 0xf8) = 0;
          *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000018;
          *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dad090;
          *(undefined8 *)(unaff_x22 + 0x118) = 0x706f6f4c64616572;
          *(undefined8 *)(unaff_x22 + 0x120) = 0xea00000000002928;
          *(undefined8 *)(unaff_x22 + 0x128) = 0x94;
          *(undefined1 *)(unaff_x22 + 0x1f0) = 3;
          *(undefined8 *)(unaff_x22 + 0x1f8) = 0x6563657220464f45;
          *(undefined8 *)(unaff_x22 + 0x200) = 0xec00000064657669;
          *(undefined8 *)(unaff_x22 + 0x210) = 0;
          *(undefined8 *)(unaff_x22 + 0x208) = 0;
          *(undefined8 *)(unaff_x22 + 0x220) = 0;
          *(undefined8 *)(unaff_x22 + 0x218) = 0;
          *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000018;
          *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dad090;
          *(undefined8 *)(unaff_x22 + 0x238) = 0x706f6f4c64616572;
          *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002928;
          *(undefined8 *)(unaff_x22 + 0x248) = 0x94;
          FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 0x10);
          FUN_1004eaa3c(unaff_x22 + 0x1f0);
          (**(code **)(lVar34 + 0x28))(unaff_x22 + 0xd0,uVar38,lVar34);
          FUN_1004eaa3c(unaff_x22 + 0xd0);
          lVar34 = unaff_x22 + 0x3c0;
LAB_10051dc94:
          FUN_100004594(lVar34);
        }
        break;
      }
      if ((long)UVar9.unknown < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd30);
        (*pcVar4)();
      }
      if (*(undefined **)(_Var7.unknown + 0x10) < UVar9.unknown) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd34);
        (*pcVar4)();
      }
      lVar34 = *(long *)(unaff_x22 + 0x5a8);
      DVar10.unknown = _Var7.unknown;
      _swift_bridgeObjectRetain();
      FUN_1004bb0f8();
      Foundation::Data::append(DVar10,(Data)into.unknown);
      FUN_10003bf2c(DVar10.unknown,into.unknown);
      _swift_beginAccess(lVar34 + 0x20,unaff_x22 + 0x488,0,0);
      puVar35 = *(undefined **)(unaff_x22 + 0x518);
      pvVar37 = *(void **)(unaff_x22 + 0x520);
      TVar11.unknown = (undefined *)0xa;
      puVar21 = puVar35;
      FUN_10051c82c(10,puVar35,pvVar37);
      uVar25 = (uint)puVar21;
      while ((uVar25 & 0xff) != 1) {
        uVar25 = (uint)((ulong)pvVar37 >> 0x20);
        uVar32 = uVar25 >> 0x1e;
        if (uVar25 >> 0x1e < 2) {
          pvVar26 = (void *)((ulong)pvVar37 >> 0x30 & 0xff);
          if (uVar32 != 0) {
            pvVar26 = (void *)((long)puVar35 >> 0x20);
          }
          p_Var12 = (__DataStorage *)0x0;
          if (uVar32 != 0) {
            p_Var12 = (__DataStorage *)(long)(int)puVar35;
          }
        }
        else if (uVar25 >> 0x1e == 2) {
          pvVar26 = *(void **)(puVar35 + 0x18);
          p_Var12 = *(__DataStorage **)(puVar35 + 0x10);
        }
        else {
          pvVar26 = (void *)0x0;
          p_Var12 = (__DataStorage *)0x0;
        }
        if (((long)pvVar26 < (long)p_Var12) || ((long)TVar11.unknown < (long)p_Var12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd1c);
          (*pcVar4)();
        }
        puVar24 = TVar11.unknown;
        __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                  (p_Var12,TVar11.unknown,puVar35,pvVar37);
        puVar21 = TVar11.unknown + 1;
        if (SCARRY8((long)TVar11.unknown,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd20);
          (*pcVar4)();
        }
        if (uVar32 < 2) {
          bVar5 = uVar25 >> 0x1e != 0;
          pvVar26 = (void *)((ulong)pvVar37 >> 0x30 & 0xff);
          if (bVar5) {
            pvVar26 = (void *)((long)puVar35 >> 0x20);
          }
          lVar34 = 0;
          if (bVar5) {
            lVar34 = (long)(int)puVar35;
          }
        }
        else if (uVar32 == 2) {
          pvVar26 = *(void **)(puVar35 + 0x18);
          lVar34 = *(long *)(puVar35 + 0x10);
        }
        else {
          pvVar26 = (void *)0x0;
          lVar34 = 0;
        }
        if (((long)pvVar26 < (long)puVar21) || ((long)pvVar26 < lVar34)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd24);
          (*pcVar4)();
        }
        pvVar29 = pvVar37;
        __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                  (puVar21,pvVar26,puVar35);
        FUN_10003bf2c(puVar35,pvVar37);
        uVar25 = (uint)((ulong)puVar24 >> 0x20);
        uVar32 = uVar25 >> 0x1e;
        uVar25 = uVar25 >> 0x1e;
        iVar39 = (int)p_Var12;
        if (uVar32 < 2) {
          if (uVar25 != 0) {
            if ((long)iVar39 == (long)p_Var12 >> 0x20) goto LAB_10051d0c4;
            goto LAB_10051d218;
          }
          if (((ulong)puVar24 & 0xff000000000000) != 0) goto LAB_10051d218;
LAB_10051d0c4:
          FUN_10003bf2c(p_Var12,puVar24);
        }
        else {
          if ((uVar32 != 2) || (*(long *)(p_Var12 + 0x10) == *(long *)(p_Var12 + 0x18)))
          goto LAB_10051d0c4;
LAB_10051d218:
          FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x370);
          uVar8 = *(ulong *)(unaff_x22 + 0x388);
          lVar34 = *(long *)(unaff_x22 + 0x390);
          FUN_100004640(unaff_x22 + 0x370,uVar8);
          (**(code **)(lVar34 + 0x70))(uVar8,lVar34);
          FUN_100004594(unaff_x22 + 0x370);
          if ((uVar8 & 0xff) == 0) {
            FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x398);
            uVar38 = *(undefined8 *)(unaff_x22 + 0x3b0);
            lVar34 = *(long *)(unaff_x22 + 0x3b8);
            FUN_100004640(unaff_x22 + 0x398,uVar38);
            puVar35 = &DAT_100fcd4a8;
            FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
            pcVar27 = (char *)0x60;
            pcVar28 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar35 + 0x18) = 2;
            *(undefined8 *)(puVar35 + 0x10) = 1;
            *(undefined8 *)(puVar35 + 0x20) = 0x657a6973;
            *(undefined1 **)(puVar35 + 0x28) = &DAT_e400000000000000;
            *(undefined8 *)(unaff_x22 + 0x538) = 0;
            *(undefined8 *)(unaff_x22 + 0x540) = 0xe000000000000000;
            SVar43.bridgeObject = pcVar28;
            SVar43.str = pcVar27;
            Swift::String::reserveCapacity(2,SVar43);
            *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x538);
            *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x540);
            if (uVar25 == 2) {
              uVar8 = *(long *)(p_Var12 + 0x18) - *(long *)(p_Var12 + 0x10);
              if (SBORROW8(*(long *)(p_Var12 + 0x18),*(long *)(p_Var12 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd44);
                (*pcVar4)();
              }
            }
            else if (uVar25 == 1) {
              iVar30 = (int)((ulong)p_Var12 >> 0x20);
              if (SBORROW4(iVar30,iVar39)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd40);
                (*pcVar4)();
              }
              uVar8 = (ulong)(iVar30 - iVar39);
            }
            else {
              uVar8 = (ulong)puVar24 >> 0x30 & 0xff;
            }
            *(ulong *)(unaff_x22 + 0x578) = uVar8;
            SVar42 = Swift::CustomStringConvertible::get_description();
            SVar44.bridgeObject = pvVar29;
            SVar44.str = pcVar28;
            Swift::String::append(SVar42,SVar44);
            _swift_bridgeObjectRelease(SVar42.bridgeObject);
            uVar33 = *(undefined8 *)(unaff_x22 + 0x530);
            *(undefined8 *)(puVar35 + 0x30) = *(undefined8 *)(unaff_x22 + 0x528);
            *(undefined8 *)(puVar35 + 0x38) = uVar33;
            puVar35[0x58] = 0;
            puVar13 = puVar35;
            FUN_1004a6a1c();
            _swift_setDeallocating(puVar35);
            FUN_1000fb4c4(puVar35 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
            _swift_deallocClassInstance(puVar35,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x310) = 0;
            *(undefined8 *)(unaff_x22 + 0x318) = 0xd000000000000010;
            *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dacbf0;
            *(undefined8 *)(unaff_x22 + 0x328) = 0;
            *(undefined **)(unaff_x22 + 0x330) = puVar13;
            *(undefined8 *)(unaff_x22 + 0x338) = 0;
            *(undefined8 *)(unaff_x22 + 0x340) = 0;
            *(undefined8 *)(unaff_x22 + 0x348) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0x358) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0x360) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 0x368) = 0xa0;
            *(undefined1 *)(unaff_x22 + 0x2b0) = 0;
            *(undefined8 *)(unaff_x22 + 0x2b8) = 0xd000000000000010;
            *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100dacbf0;
            *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
            *(undefined **)(unaff_x22 + 0x2d0) = puVar13;
            *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
            *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
            *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0x2f8) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0x300) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 0x308) = 0xa0;
            FUN_1004eaa00(unaff_x22 + 0x310,unaff_x22 + 0x250);
            FUN_1004eaa3c(unaff_x22 + 0x2b0);
            (**(code **)(lVar34 + 0x28))(unaff_x22 + 0x310,uVar38);
            FUN_1004eaa3c(unaff_x22 + 0x310);
            FUN_100004594(unaff_x22 + 0x398);
          }
          puVar35 = &DAT_100fcd490;
          FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
          lVar41 = *(long *)(puVar35 + -8);
          uVar14 = *(long *)(lVar41 + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc();
          *(undefined **)(unaff_x22 + 0x450) = PTR___type_metadata_for_Foundation_Data_100ea7300;
          *(undefined **)(unaff_x22 + 0x458) =
               PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100ea72f0
          ;
          *(__DataStorage **)(unaff_x22 + 0x438) = p_Var12;
          *(undefined **)(unaff_x22 + 0x440) = puVar24;
          plVar15 = (long *)(unaff_x22 + 0x438);
          FUN_100004640();
          lVar34 = *plVar15;
          uVar8 = plVar15[1];
          uVar25 = (uint)(uVar8 >> 0x20);
          uVar32 = uVar25 >> 0x1e;
          if (uVar32 < 2) {
            if (uVar25 >> 0x1e == 0) {
              *(char *)(unaff_x22 + 0x4f9) = (char)lVar34;
              *(char *)(unaff_x22 + 0x4fa) = (char)((ulong)lVar34 >> 8);
              *(char *)(unaff_x22 + 0x4fb) = (char)((ulong)lVar34 >> 0x10);
              *(char *)(unaff_x22 + 0x4fc) = (char)((ulong)lVar34 >> 0x18);
              *(char *)(unaff_x22 + 0x4fd) = (char)((ulong)lVar34 >> 0x20);
              *(char *)(unaff_x22 + 0x4fe) = (char)((ulong)lVar34 >> 0x28);
              *(char *)(unaff_x22 + 0x4ff) = (char)((ulong)lVar34 >> 0x30);
              *(char *)(unaff_x22 + 0x500) = (char)((ulong)lVar34 >> 0x38);
              *(char *)(unaff_x22 + 0x501) = (char)uVar8;
              *(char *)(unaff_x22 + 0x502) = (char)(uVar8 >> 8);
              *(char *)(unaff_x22 + 0x503) = (char)(uVar8 >> 0x10);
              *(char *)(unaff_x22 + 0x504) = (char)(uVar8 >> 0x18);
              *(char *)(unaff_x22 + 0x505) = (char)(uVar8 >> 0x20);
              *(char *)(unaff_x22 + 0x506) = (char)(uVar8 >> 0x28);
              FUN_1001037b4(p_Var12,puVar24);
              puVar17 = (undefined8 *)(unaff_x22 + 0x4f9);
              puVar36 = (undefined8 *)(unaff_x22 + 0x4f9 + (uVar8 >> 0x30 & 0xff));
LAB_10051d654:
              FUN_100441844(unaff_x22 + 0x548,puVar17,puVar36);
            }
            else {
              lVar40 = (long)(int)lVar34;
              lVar3 = (lVar34 >> 0x20) - lVar40;
              if (lVar34 >> 0x20 < lVar40) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd28);
                (*pcVar4)();
              }
              p_Var18 = p_Var12;
              FUN_1001037b4(p_Var12,puVar24);
              Foundation::__DataStorage::_get__bytes
                        ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var18);
              if (p_Var18 == (__DataStorage *)0x0) {
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                p_Var18 = (__DataStorage *)0x0;
                p_Var16 = (__DataStorage *)0x0;
              }
              else {
                p_Var16 = (__DataStorage *)
                          Foundation::__DataStorage::get__offset
                                    ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var18);
                if (SBORROW8(lVar40,(long)p_Var16)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd3c);
                  (*pcVar4)();
                }
                p_Var18 = p_Var18 + (lVar40 - (long)p_Var16);
                lVar34 = Foundation::__DataStorage::get__length
                                   ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var16);
                if (p_Var18 == (__DataStorage *)0x0) {
                  p_Var16 = (__DataStorage *)0x0;
                }
                else {
                  if (lVar3 <= lVar34) {
                    lVar34 = lVar3;
                  }
                  p_Var16 = p_Var18 + lVar34;
                }
              }
              FUN_100441844(unaff_x22 + 0x548,p_Var18,p_Var16);
            }
          }
          else {
            if (uVar32 != 2) {
              *(undefined8 *)(unaff_x22 + 0x50d) = 0;
              *puVar1 = 0;
              FUN_1001037b4(p_Var12,puVar24);
              puVar17 = puVar1;
              puVar36 = puVar1;
              goto LAB_10051d654;
            }
            lVar3 = *(long *)(lVar34 + 0x10);
            lVar34 = *(long *)(lVar34 + 0x18);
            p_Var18 = p_Var12;
            FUN_1001037b4(p_Var12,puVar24);
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var18);
            if (p_Var18 == (__DataStorage *)0x0) {
              p_Var16 = (__DataStorage *)0x0;
              p_Var18 = (__DataStorage *)0x0;
            }
            else {
              p_Var16 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var18);
              if (SBORROW8(lVar3,(long)p_Var16)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd38);
                (*pcVar4)();
              }
              p_Var18 = p_Var18 + (lVar3 - (long)p_Var16);
            }
            lVar40 = lVar34 - lVar3;
            if (SBORROW8(lVar34,lVar3)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10051dd2c);
              (*pcVar4)();
            }
            lVar34 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var16);
            if (p_Var18 == (__DataStorage *)0x0) {
              p_Var16 = (__DataStorage *)0x0;
            }
            else {
              if (lVar40 <= lVar34) {
                lVar34 = lVar40;
              }
              p_Var16 = p_Var18 + lVar34;
            }
            FUN_100441844(unaff_x22 + 0x548,p_Var18,p_Var16);
          }
          FUN_100004594(unaff_x22 + 0x438);
          *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x548);
          *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x550);
          puVar13 = &DAT_100fcb3a0;
          FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
          Swift::AsyncThrowingStream::Continuation::_yield(uVar14,unaff_x22 + 0x558,puVar13);
          FUN_10003bf2c(p_Var12,puVar24);
          (**(code **)(lVar41 + 8))(uVar14,puVar35);
          _swift_task_dealloc(uVar14);
        }
        TVar11.unknown = (undefined *)0xa;
        puVar35 = puVar21;
        FUN_10051c82c(10,puVar21,pvVar26);
        uVar25 = (uint)puVar35;
        puVar35 = puVar21;
        pvVar37 = pvVar26;
      }
      *(undefined **)(unaff_x22 + 0x518) = puVar35;
      *(void **)(unaff_x22 + 0x520) = pvVar37;
      if (*(char *)(*(long *)(unaff_x22 + 0x598) + 0x80) != '\x01') break;
    }
  }
  *(undefined8 *)(unaff_x22 + 0x590) = 0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x590));
  _swift_bridgeObjectRelease(_Var7.unknown);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x518),*(undefined8 *)(unaff_x22 + 0x520));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar31) {
                    /* WARNING: Could not recover jumptable at 0x00010051dd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_10051dd44:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10051dd48 | FUN_10051dd48 */

void FUN_10051dd48(void)

{
  undefined *puVar1;
  Instant IVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x22;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar2 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaeef0;
  *(undefined **)(unaff_x22 + 0x5d8) = IVar2.unknown;
  lVar8 = *(long *)(IVar2.unknown + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x5e0) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_100003a00(&DAT_100fcd4b8,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fcd4c0,puVar1,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar7 = *(code **)(lVar8 + 8);
  *(code **)(unaff_x22 + 0x5e8) = pcVar7;
  (*pcVar7)(uVar4,IVar2.unknown);
  _swift_task_dealloc(uVar4);
  plVar5 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x5f0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10051deb4;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar6) {
    Swift::Clock::_sleep();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10051deb4 | FUN_10051deb4 */

void FUN_10051deb4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x22;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar7 = *unaff_x22;
  *(long *)(lVar7 + 0x5f8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x5f0));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar7 + 0x5e0);
    uVar4 = *(undefined8 *)(lVar7 + 0x5d0);
    lVar8 = *(long *)(lVar7 + 0x5c8);
    uVar6 = *(undefined8 *)(lVar7 + 0x5c0);
    uVar2 = *(undefined8 *)(lVar7 + 0x598);
    (**(code **)(lVar7 + 0x5e8))(uVar3,*(undefined8 *)(lVar7 + 0x5d8));
    (**(code **)(lVar8 + 8))(uVar4,uVar6);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar4);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar1) goto LAB_10051dfd0;
    pcVar5 = FUN_10051dfd4;
  }
  else {
    pcVar5 = *(code **)(lVar7 + 0x5e8);
    uVar2 = *(undefined8 *)(lVar7 + 0x5e0);
    uVar3 = *(undefined8 *)(lVar7 + 0x5d8);
    _swift_errorRelease();
    (*pcVar5)(uVar2,uVar3);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar1) {
LAB_10051dfd0:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar5 = FUN_10051ee48;
    uVar2 = 0;
  }
  _swift_task_switch(pcVar5,uVar2,0);
  return;
}



/* Address: 0x10051dfd4 | FUN_10051dfd4 */

/* WARNING: Removing unreachable block (ram,0x00010051e758) */
/* WARNING: Removing unreachable block (ram,0x00010051e7c4) */
/* WARNING: Removing unreachable block (ram,0x00010051e8ec) */
/* WARNING: Removing unreachable block (ram,0x00010051e904) */

void FUN_10051dfd4(void)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  Task TVar7;
  ulong uVar8;
  UnsafeMutableRawBufferPointer UVar9;
  Data DVar10;
  __DataStorage *p_Var11;
  undefined *puVar12;
  ulong uVar13;
  long *plVar14;
  __DataStorage *p_Var15;
  undefined8 *puVar16;
  __DataStorage *p_Var17;
  undefined7 extraout_var;
  undefined4 *puVar19;
  int *piVar20;
  ContinuousClock CVar21;
  undefined *puVar22;
  uint uVar23;
  UnsafeMutableRawBufferPointer into;
  void *pvVar24;
  char *pcVar25;
  char *pcVar26;
  void *pvVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined *puVar32;
  undefined8 *puVar33;
  undefined *puVar34;
  void *pvVar35;
  undefined8 uVar36;
  long unaff_x22;
  uint uVar37;
  long lVar38;
  int iVar39;
  undefined *puVar40;
  long lVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  undefined4 *puVar18;
  
  lVar29 = *(long *)PTR____stack_chk_guard_100ea82f0;
  TVar7.unknown = *(undefined **)(unaff_x22 + 0x5b8);
  _swift_errorRelease();
  if ((*(byte *)(*(long *)(unaff_x22 + 0x598) + 0x80) & 1) == 0) {
    puVar40 = *(undefined **)(unaff_x22 + 0x5b0);
  }
  else {
    puVar1 = (undefined8 *)(unaff_x22 + 0x507);
    puVar19 = (undefined4 *)(unaff_x22 + 0x600);
    piVar2 = (int *)(unaff_x22 + 0x604);
    puVar34 = *(undefined **)(unaff_x22 + 0x5f8);
    puVar40 = *(undefined **)(unaff_x22 + 0x5b0);
    while (bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7), !bVar5) {
      puVar32 = puVar40;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar32 & 1) == 0) {
        FUN_100521570();
      }
      *(undefined **)(unaff_x22 + 0x5b0) = puVar40;
      uVar8 = *(ulong *)(unaff_x22 + 0x598);
      lVar31 = *(long *)(puVar40 + 0x10);
      _swift_task_isCurrentExecutor(uVar8,0);
      if ((uVar8 & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("MCP/StdioTransport.swift",0x18,1,0x8f,*(undefined8 *)(unaff_x22 + 0x598),0);
      }
      into.unknown = puVar40 + 0x20;
      uVar23 = (uint)(into.unknown + lVar31);
      UVar9.unknown = into.unknown;
      System::FileDescriptor::__read(into,SUB81(into.unknown + lVar31,0),(FileDescriptor)0x1);
      if (puVar34 != (undefined *)0x0) {
LAB_10051e988:
        *(undefined **)(unaff_x22 + 0x5b8) = puVar34;
        *(undefined **)(unaff_x22 + 0x588) = puVar34;
        _swift_errorRetain(puVar34);
        _swift_errorRetain(puVar34);
        puVar32 = &DAT_100fcb578;
        FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
        piVar20 = piVar2;
        _swift_dynamicCast(piVar2,unaff_x22 + 0x588,puVar32,
                           PTR___type_metadata_for_System_Errno_100eae9c8,6);
        TVar7.unknown = puVar34;
        if (((ulong)piVar20 & 1) == 0) {
          _swift_errorRelease();
        }
        else {
          iVar39 = *piVar2;
          _swift_errorRelease();
          if (iVar39 == 0x23) {
            CVar21 = Swift::ContinuousClock::typeMetadataAccessor();
            *(undefined **)(unaff_x22 + 0x5c0) = CVar21.unknown;
            lVar31 = *(long *)(CVar21.unknown + -8);
            *(long *)(unaff_x22 + 0x5c8) = lVar31;
            uVar8 = *(long *)(lVar31 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            *(ulong *)(unaff_x22 + 0x5d0) = uVar8;
            (extension_Swift)::Swift::Clock::_get_continuous();
            *(undefined8 *)(unaff_x22 + 0x568) = 10000000000000000;
            *(undefined8 *)(unaff_x22 + 0x570) = 0;
            *(undefined8 *)(unaff_x22 + 0x4f0) = 0;
            *(undefined8 *)(unaff_x22 + 0x4e8) = 0;
            *(undefined1 *)(unaff_x22 + 0x4f8) = 1;
            if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar29) {
              _swift_task_switch(FUN_10051dd48,0,0);
              return;
            }
            goto LAB_10051ee44;
          }
        }
        bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
        if (!bVar5) {
          lVar31 = *(long *)(unaff_x22 + 0x5a8);
          _swift_beginAccess(lVar31 + 0x20,unaff_x22 + 0x4b8,0,0);
          FUN_100076688(lVar31 + 0x20,unaff_x22 + 1000);
          uVar36 = *(undefined8 *)(unaff_x22 + 0x400);
          lVar31 = *(long *)(unaff_x22 + 0x408);
          FUN_100004640(unaff_x22 + 1000,uVar36);
          (**(code **)(lVar31 + 0x70))(uVar36,lVar31);
          FUN_100004594(unaff_x22 + 1000);
          if (((uint)uVar36 & 0xff) < 6) {
            FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x460);
            uVar36 = *(undefined8 *)(unaff_x22 + 0x478);
            lVar31 = *(long *)(unaff_x22 + 0x480);
            FUN_100004640(unaff_x22 + 0x460,uVar36);
            puVar32 = &DAT_100fcd4a8;
            FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
            pcVar25 = (char *)0x60;
            pvVar35 = (void *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar32 + 0x20) = 0x726f727265;
            *(undefined8 *)(puVar32 + 0x18) = 2;
            *(undefined8 *)(puVar32 + 0x10) = 1;
            *(undefined1 **)(puVar32 + 0x28) = &DAT_e500000000000000;
            SVar42.bridgeObject = pvVar35;
            SVar42.str = pcVar25;
            Swift::String::reserveCapacity(2,SVar42);
            _swift_getErrorValue(puVar34,unaff_x22 + 0x580,unaff_x22 + 0x4a0);
            FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x4a0),*(undefined8 *)(unaff_x22 + 0x4a8));
            *(undefined8 *)(puVar32 + 0x30) = 0;
            *(undefined8 *)(puVar32 + 0x38) = 0xe000000000000000;
            puVar32[0x58] = 0;
            puVar22 = puVar32;
            FUN_1004a6a1c();
            _swift_setDeallocating(puVar32);
            FUN_1000fb4c4(puVar32 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
            _swift_deallocClassInstance(puVar32,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x70) = 5;
            *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000013;
            *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad0b0;
            *(undefined8 *)(unaff_x22 + 0x88) = 0;
            *(undefined **)(unaff_x22 + 0x90) = puVar22;
            *(undefined8 *)(unaff_x22 + 0x98) = 0;
            *(undefined8 *)(unaff_x22 + 0xa0) = 0;
            *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0xb8) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0xc0) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 200) = 0xaa;
            *(undefined1 *)(unaff_x22 + 0x130) = 5;
            *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000013;
            *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dad0b0;
            *(undefined8 *)(unaff_x22 + 0x148) = 0;
            *(undefined **)(unaff_x22 + 0x150) = puVar22;
            *(undefined8 *)(unaff_x22 + 0x158) = 0;
            *(undefined8 *)(unaff_x22 + 0x160) = 0;
            *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0x178) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0x180) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 0x188) = 0xaa;
            FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 400);
            FUN_1004eaa3c(unaff_x22 + 0x130);
            (**(code **)(lVar31 + 0x28))(unaff_x22 + 0x70,uVar36,lVar31);
            _swift_errorRelease(puVar34);
            FUN_1004eaa3c(unaff_x22 + 0x70);
            lVar31 = unaff_x22 + 0x460;
            goto LAB_10051ee10;
          }
        }
        _swift_errorRelease(puVar34);
        break;
      }
      if ((uVar23 & 0xff) == 1) {
        *puVar19 = (int)UVar9.unknown;
        bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        puVar18 = (undefined4 *)CONCAT71(extraout_var,bVar6);
        if ((bVar6 & 1) != 0) {
          FUN_100521998();
          _swift_willThrowTypedImpl(puVar19,PTR___type_metadata_for_System_Errno_100eae9c8,puVar18);
          puVar18 = puVar19;
        }
        FUN_100521998();
        puVar34 = PTR___type_metadata_for_System_Errno_100eae9c8;
        _swift_allocError(PTR___type_metadata_for_System_Errno_100eae9c8,puVar18,0,0);
        *puVar18 = (int)UVar9.unknown;
        goto LAB_10051e988;
      }
      if (UVar9.unknown == (undefined *)0x0) {
        lVar31 = *(long *)(unaff_x22 + 0x5a8);
        _swift_beginAccess(lVar31 + 0x20,unaff_x22 + 0x4d0,0,0);
        FUN_100076688(lVar31 + 0x20,unaff_x22 + 0x410);
        uVar36 = *(undefined8 *)(unaff_x22 + 0x428);
        lVar31 = *(long *)(unaff_x22 + 0x430);
        FUN_100004640(unaff_x22 + 0x410,uVar36);
        (**(code **)(lVar31 + 0x70))(uVar36,lVar31);
        FUN_100004594(unaff_x22 + 0x410);
        if (((uint)uVar36 & 0xff) < 4) {
          FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x3c0);
          uVar36 = *(undefined8 *)(unaff_x22 + 0x3d8);
          lVar31 = *(long *)(unaff_x22 + 0x3e0);
          FUN_100004640(unaff_x22 + 0x3c0,uVar36);
          *(undefined1 *)(unaff_x22 + 0xd0) = 3;
          *(undefined8 *)(unaff_x22 + 0xd8) = 0x6563657220464f45;
          *(undefined8 *)(unaff_x22 + 0xe0) = 0xec00000064657669;
          *(undefined8 *)(unaff_x22 + 0xf0) = 0;
          *(undefined8 *)(unaff_x22 + 0xe8) = 0;
          *(undefined8 *)(unaff_x22 + 0x100) = 0;
          *(undefined8 *)(unaff_x22 + 0xf8) = 0;
          *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000018;
          *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dad090;
          *(undefined8 *)(unaff_x22 + 0x118) = 0x706f6f4c64616572;
          *(undefined8 *)(unaff_x22 + 0x120) = 0xea00000000002928;
          *(undefined8 *)(unaff_x22 + 0x128) = 0x94;
          *(undefined1 *)(unaff_x22 + 0x1f0) = 3;
          *(undefined8 *)(unaff_x22 + 0x1f8) = 0x6563657220464f45;
          *(undefined8 *)(unaff_x22 + 0x200) = 0xec00000064657669;
          *(undefined8 *)(unaff_x22 + 0x210) = 0;
          *(undefined8 *)(unaff_x22 + 0x208) = 0;
          *(undefined8 *)(unaff_x22 + 0x220) = 0;
          *(undefined8 *)(unaff_x22 + 0x218) = 0;
          *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000018;
          *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dad090;
          *(undefined8 *)(unaff_x22 + 0x238) = 0x706f6f4c64616572;
          *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002928;
          *(undefined8 *)(unaff_x22 + 0x248) = 0x94;
          FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 0x10);
          FUN_1004eaa3c(unaff_x22 + 0x1f0);
          (**(code **)(lVar31 + 0x28))(unaff_x22 + 0xd0,uVar36,lVar31);
          FUN_1004eaa3c(unaff_x22 + 0xd0);
          lVar31 = unaff_x22 + 0x3c0;
LAB_10051ee10:
          FUN_100004594(lVar31);
        }
        break;
      }
      if ((long)UVar9.unknown < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee30);
        (*pcVar4)();
      }
      if (*(undefined **)(puVar40 + 0x10) < UVar9.unknown) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee34);
        (*pcVar4)();
      }
      lVar31 = *(long *)(unaff_x22 + 0x5a8);
      DVar10.unknown = puVar40;
      _swift_bridgeObjectRetain();
      FUN_1004bb0f8();
      Foundation::Data::append(DVar10,(Data)into.unknown);
      FUN_10003bf2c(DVar10.unknown,into.unknown);
      _swift_beginAccess(lVar31 + 0x20,unaff_x22 + 0x488,0,0);
      puVar32 = *(undefined **)(unaff_x22 + 0x518);
      pvVar35 = *(void **)(unaff_x22 + 0x520);
      TVar7.unknown = (undefined *)0xa;
      puVar34 = puVar32;
      FUN_10051c82c(10,puVar32,pvVar35);
      uVar23 = (uint)puVar34;
      while ((uVar23 & 0xff) != 1) {
        uVar23 = (uint)((ulong)pvVar35 >> 0x20);
        uVar37 = uVar23 >> 0x1e;
        if (uVar23 >> 0x1e < 2) {
          pvVar24 = (void *)((ulong)pvVar35 >> 0x30 & 0xff);
          if (uVar37 != 0) {
            pvVar24 = (void *)((long)puVar32 >> 0x20);
          }
          p_Var11 = (__DataStorage *)0x0;
          if (uVar37 != 0) {
            p_Var11 = (__DataStorage *)(long)(int)puVar32;
          }
        }
        else if (uVar37 == 2) {
          pvVar24 = *(void **)(puVar32 + 0x18);
          p_Var11 = *(__DataStorage **)(puVar32 + 0x10);
        }
        else {
          pvVar24 = (void *)0x0;
          p_Var11 = (__DataStorage *)0x0;
        }
        if (((long)pvVar24 < (long)p_Var11) || ((long)TVar7.unknown < (long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee1c);
          (*pcVar4)();
        }
        puVar22 = TVar7.unknown;
        __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                  (p_Var11,TVar7.unknown,puVar32,pvVar35);
        puVar34 = TVar7.unknown + 1;
        if (SCARRY8((long)TVar7.unknown,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee20);
          (*pcVar4)();
        }
        if (uVar37 < 2) {
          pvVar24 = (void *)((ulong)pvVar35 >> 0x30 & 0xff);
          if (uVar37 != 0) {
            pvVar24 = (void *)((long)puVar32 >> 0x20);
          }
          lVar31 = 0;
          if (uVar37 != 0) {
            lVar31 = (long)(int)puVar32;
          }
        }
        else if (uVar37 == 2) {
          pvVar24 = *(void **)(puVar32 + 0x18);
          lVar31 = *(long *)(puVar32 + 0x10);
        }
        else {
          pvVar24 = (void *)0x0;
          lVar31 = 0;
        }
        if (((long)pvVar24 < (long)puVar34) || ((long)pvVar24 < lVar31)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee24);
          (*pcVar4)();
        }
        pvVar27 = pvVar35;
        __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                  (puVar34,pvVar24,puVar32);
        FUN_10003bf2c(puVar32,pvVar35);
        uVar23 = (uint)((ulong)puVar22 >> 0x20);
        uVar37 = uVar23 >> 0x1e;
        iVar39 = (int)p_Var11;
        if (uVar23 >> 0x1e < 2) {
          if (uVar37 != 0) {
            if ((long)iVar39 == (long)p_Var11 >> 0x20) goto LAB_10051e1bc;
            goto LAB_10051e310;
          }
          if (((ulong)puVar22 & 0xff000000000000) != 0) goto LAB_10051e310;
LAB_10051e1bc:
          FUN_10003bf2c(p_Var11,puVar22);
        }
        else {
          if ((uVar37 != 2) || (*(long *)(p_Var11 + 0x10) == *(long *)(p_Var11 + 0x18)))
          goto LAB_10051e1bc;
LAB_10051e310:
          FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x370);
          uVar8 = *(ulong *)(unaff_x22 + 0x388);
          lVar31 = *(long *)(unaff_x22 + 0x390);
          FUN_100004640(unaff_x22 + 0x370,uVar8);
          (**(code **)(lVar31 + 0x70))(uVar8,lVar31);
          FUN_100004594(unaff_x22 + 0x370);
          if ((uVar8 & 0xff) == 0) {
            FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x398);
            uVar36 = *(undefined8 *)(unaff_x22 + 0x3b0);
            lVar31 = *(long *)(unaff_x22 + 0x3b8);
            FUN_100004640(unaff_x22 + 0x398,uVar36);
            puVar32 = &DAT_100fcd4a8;
            FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
            pcVar25 = (char *)0x60;
            pcVar26 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar32 + 0x18) = 2;
            *(undefined8 *)(puVar32 + 0x10) = 1;
            *(undefined8 *)(puVar32 + 0x20) = 0x657a6973;
            *(undefined1 **)(puVar32 + 0x28) = &DAT_e400000000000000;
            *(undefined8 *)(unaff_x22 + 0x538) = 0;
            *(undefined8 *)(unaff_x22 + 0x540) = 0xe000000000000000;
            SVar43.bridgeObject = pcVar26;
            SVar43.str = pcVar25;
            Swift::String::reserveCapacity(2,SVar43);
            *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x538);
            *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x540);
            if (uVar37 == 2) {
              uVar8 = *(long *)(p_Var11 + 0x18) - *(long *)(p_Var11 + 0x10);
              if (SBORROW8(*(long *)(p_Var11 + 0x18),*(long *)(p_Var11 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee44);
                (*pcVar4)();
              }
            }
            else if (uVar37 == 1) {
              iVar28 = (int)((ulong)p_Var11 >> 0x20);
              if (SBORROW4(iVar28,iVar39)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee40);
                (*pcVar4)();
              }
              uVar8 = (ulong)(iVar28 - iVar39);
            }
            else {
              uVar8 = (ulong)puVar22 >> 0x30 & 0xff;
            }
            *(ulong *)(unaff_x22 + 0x578) = uVar8;
            SVar42 = Swift::CustomStringConvertible::get_description();
            SVar44.bridgeObject = pvVar27;
            SVar44.str = pcVar26;
            Swift::String::append(SVar42,SVar44);
            _swift_bridgeObjectRelease(SVar42.bridgeObject);
            uVar30 = *(undefined8 *)(unaff_x22 + 0x530);
            *(undefined8 *)(puVar32 + 0x30) = *(undefined8 *)(unaff_x22 + 0x528);
            *(undefined8 *)(puVar32 + 0x38) = uVar30;
            puVar32[0x58] = 0;
            puVar12 = puVar32;
            FUN_1004a6a1c();
            _swift_setDeallocating(puVar32);
            FUN_1000fb4c4(puVar32 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
            _swift_deallocClassInstance(puVar32,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x310) = 0;
            *(undefined8 *)(unaff_x22 + 0x318) = 0xd000000000000010;
            *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dacbf0;
            *(undefined8 *)(unaff_x22 + 0x328) = 0;
            *(undefined **)(unaff_x22 + 0x330) = puVar12;
            *(undefined8 *)(unaff_x22 + 0x338) = 0;
            *(undefined8 *)(unaff_x22 + 0x340) = 0;
            *(undefined8 *)(unaff_x22 + 0x348) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0x358) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0x360) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 0x368) = 0xa0;
            *(undefined1 *)(unaff_x22 + 0x2b0) = 0;
            *(undefined8 *)(unaff_x22 + 0x2b8) = 0xd000000000000010;
            *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100dacbf0;
            *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
            *(undefined **)(unaff_x22 + 0x2d0) = puVar12;
            *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
            *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
            *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0x2f8) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0x300) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 0x308) = 0xa0;
            FUN_1004eaa00(unaff_x22 + 0x310,unaff_x22 + 0x250);
            FUN_1004eaa3c(unaff_x22 + 0x2b0);
            (**(code **)(lVar31 + 0x28))(unaff_x22 + 0x310,uVar36);
            FUN_1004eaa3c(unaff_x22 + 0x310);
            FUN_100004594(unaff_x22 + 0x398);
          }
          puVar32 = &DAT_100fcd490;
          FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
          lVar41 = *(long *)(puVar32 + -8);
          uVar13 = *(long *)(lVar41 + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc();
          *(undefined **)(unaff_x22 + 0x450) = PTR___type_metadata_for_Foundation_Data_100ea7300;
          *(undefined **)(unaff_x22 + 0x458) =
               PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100ea72f0
          ;
          *(__DataStorage **)(unaff_x22 + 0x438) = p_Var11;
          *(undefined **)(unaff_x22 + 0x440) = puVar22;
          plVar14 = (long *)(unaff_x22 + 0x438);
          FUN_100004640();
          lVar31 = *plVar14;
          uVar8 = plVar14[1];
          uVar23 = (uint)(uVar8 >> 0x20);
          uVar37 = uVar23 >> 0x1e;
          if (uVar23 >> 0x1e < 2) {
            if (uVar37 == 0) {
              *(char *)(unaff_x22 + 0x4f9) = (char)lVar31;
              *(char *)(unaff_x22 + 0x4fa) = (char)((ulong)lVar31 >> 8);
              *(char *)(unaff_x22 + 0x4fb) = (char)((ulong)lVar31 >> 0x10);
              *(char *)(unaff_x22 + 0x4fc) = (char)((ulong)lVar31 >> 0x18);
              *(char *)(unaff_x22 + 0x4fd) = (char)((ulong)lVar31 >> 0x20);
              *(char *)(unaff_x22 + 0x4fe) = (char)((ulong)lVar31 >> 0x28);
              *(char *)(unaff_x22 + 0x4ff) = (char)((ulong)lVar31 >> 0x30);
              *(char *)(unaff_x22 + 0x500) = (char)((ulong)lVar31 >> 0x38);
              *(char *)(unaff_x22 + 0x501) = (char)uVar8;
              *(char *)(unaff_x22 + 0x502) = (char)(uVar8 >> 8);
              *(char *)(unaff_x22 + 0x503) = (char)(uVar8 >> 0x10);
              *(char *)(unaff_x22 + 0x504) = (char)(uVar8 >> 0x18);
              *(char *)(unaff_x22 + 0x505) = (char)(uVar8 >> 0x20);
              *(char *)(unaff_x22 + 0x506) = (char)(uVar8 >> 0x28);
              FUN_1001037b4(p_Var11,puVar22);
              puVar16 = (undefined8 *)(unaff_x22 + 0x4f9);
              puVar33 = (undefined8 *)(unaff_x22 + 0x4f9 + (uVar8 >> 0x30 & 0xff));
LAB_10051e748:
              FUN_100441844(unaff_x22 + 0x548,puVar16,puVar33);
            }
            else {
              lVar38 = (long)(int)lVar31;
              lVar3 = (lVar31 >> 0x20) - lVar38;
              if (lVar31 >> 0x20 < lVar38) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee28);
                (*pcVar4)();
              }
              p_Var17 = p_Var11;
              FUN_1001037b4(p_Var11,puVar22);
              Foundation::__DataStorage::_get__bytes
                        ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var17);
              if (p_Var17 == (__DataStorage *)0x0) {
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                p_Var17 = (__DataStorage *)0x0;
                p_Var15 = (__DataStorage *)0x0;
              }
              else {
                p_Var15 = (__DataStorage *)
                          Foundation::__DataStorage::get__offset
                                    ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var17);
                if (SBORROW8(lVar38,(long)p_Var15)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee3c);
                  (*pcVar4)();
                }
                p_Var17 = p_Var17 + (lVar38 - (long)p_Var15);
                lVar31 = Foundation::__DataStorage::get__length
                                   ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var15);
                if (p_Var17 == (__DataStorage *)0x0) {
                  p_Var15 = (__DataStorage *)0x0;
                }
                else {
                  if (lVar3 <= lVar31) {
                    lVar31 = lVar3;
                  }
                  p_Var15 = p_Var17 + lVar31;
                }
              }
              FUN_100441844(unaff_x22 + 0x548,p_Var17,p_Var15);
            }
          }
          else {
            if (uVar37 != 2) {
              *(undefined8 *)(unaff_x22 + 0x50d) = 0;
              *puVar1 = 0;
              FUN_1001037b4(p_Var11,puVar22);
              puVar16 = puVar1;
              puVar33 = puVar1;
              goto LAB_10051e748;
            }
            lVar3 = *(long *)(lVar31 + 0x10);
            lVar31 = *(long *)(lVar31 + 0x18);
            p_Var17 = p_Var11;
            FUN_1001037b4(p_Var11,puVar22);
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var17);
            if (p_Var17 == (__DataStorage *)0x0) {
              p_Var15 = (__DataStorage *)0x0;
              p_Var17 = (__DataStorage *)0x0;
            }
            else {
              p_Var15 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var17);
              if (SBORROW8(lVar3,(long)p_Var15)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee38);
                (*pcVar4)();
              }
              p_Var17 = p_Var17 + (lVar3 - (long)p_Var15);
            }
            lVar38 = lVar31 - lVar3;
            if (SBORROW8(lVar31,lVar3)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10051ee2c);
              (*pcVar4)();
            }
            lVar31 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(uVar8 & 0x3fffffffffffffff),p_Var15);
            if (p_Var17 == (__DataStorage *)0x0) {
              p_Var15 = (__DataStorage *)0x0;
            }
            else {
              if (lVar38 <= lVar31) {
                lVar31 = lVar38;
              }
              p_Var15 = p_Var17 + lVar31;
            }
            FUN_100441844(unaff_x22 + 0x548,p_Var17,p_Var15);
          }
          FUN_100004594(unaff_x22 + 0x438);
          *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x548);
          *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x550);
          puVar12 = &DAT_100fcb3a0;
          FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
          Swift::AsyncThrowingStream::Continuation::_yield(uVar13,unaff_x22 + 0x558,puVar12);
          FUN_10003bf2c(p_Var11,puVar22);
          (**(code **)(lVar41 + 8))(uVar13,puVar32);
          _swift_task_dealloc(uVar13);
        }
        TVar7.unknown = (undefined *)0xa;
        puVar32 = puVar34;
        FUN_10051c82c(10,puVar34,pvVar24);
        uVar23 = (uint)puVar32;
        puVar32 = puVar34;
        pvVar35 = pvVar24;
      }
      puVar34 = (undefined *)0x0;
      *(undefined **)(unaff_x22 + 0x518) = puVar32;
      *(void **)(unaff_x22 + 0x520) = pvVar35;
      if (*(char *)(*(long *)(unaff_x22 + 0x598) + 0x80) != '\x01') break;
    }
  }
  *(undefined8 *)(unaff_x22 + 0x590) = 0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x590));
  _swift_bridgeObjectRelease(puVar40);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x518),*(undefined8 *)(unaff_x22 + 0x520));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar29) {
                    /* WARNING: Could not recover jumptable at 0x00010051e8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_10051ee44:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10051ee48 | FUN_10051ee48 */

void FUN_10051ee48(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x598);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x5e0));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_10051eeb4,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10051eeb4 | FUN_10051eeb4 */

/* WARNING: Removing unreachable block (ram,0x00010051f658) */
/* WARNING: Removing unreachable block (ram,0x00010051f6c4) */
/* WARNING: Removing unreachable block (ram,0x00010051f768) */
/* WARNING: Removing unreachable block (ram,0x00010051f780) */

void FUN_10051eeb4(void)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  UnsafeMutableRawBufferPointer UVar8;
  Data DVar9;
  __DataStorage *p_Var10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  __DataStorage *p_Var14;
  undefined8 *puVar15;
  __DataStorage *p_Var16;
  undefined7 extraout_var;
  undefined4 *puVar18;
  undefined *puVar19;
  int *piVar20;
  ContinuousClock CVar21;
  undefined *puVar22;
  uint uVar23;
  UnsafeMutableRawBufferPointer into;
  void *pvVar24;
  char *pcVar25;
  char *pcVar26;
  void *pvVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  Task TVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  long lVar35;
  void *pvVar36;
  long unaff_x22;
  uint uVar37;
  long lVar38;
  undefined *puVar39;
  long lVar40;
  int iVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  undefined4 *puVar17;
  
  lVar29 = *(long *)PTR____stack_chk_guard_100ea82f0;
  TVar32.unknown = *(undefined **)(unaff_x22 + 0x5d0);
  lVar35 = *(long *)(unaff_x22 + 0x5c8);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x5c0);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x5b8));
  (**(code **)(lVar35 + 8))(TVar32.unknown,uVar31);
  _swift_task_dealloc();
  puVar39 = *(undefined **)(unaff_x22 + 0x5b0);
  if ((*(byte *)(*(long *)(unaff_x22 + 0x598) + 0x80) & 1) != 0) {
    puVar1 = (undefined8 *)(unaff_x22 + 0x507);
    puVar18 = (undefined4 *)(unaff_x22 + 0x600);
    piVar2 = (int *)(unaff_x22 + 0x604);
    while (bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar32), !bVar5) {
      puVar33 = puVar39;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar33 & 1) == 0) {
        FUN_100521570();
      }
      *(undefined **)(unaff_x22 + 0x5b0) = puVar39;
      uVar7 = *(ulong *)(unaff_x22 + 0x598);
      lVar35 = *(long *)(puVar39 + 0x10);
      _swift_task_isCurrentExecutor(uVar7,0);
      if ((uVar7 & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("MCP/StdioTransport.swift",0x18,1,0x8f,*(undefined8 *)(unaff_x22 + 0x598),0);
      }
      into.unknown = puVar39 + 0x20;
      uVar23 = (uint)(into.unknown + lVar35);
      UVar8.unknown = into.unknown;
      System::FileDescriptor::__read(into,SUB81(into.unknown + lVar35,0),(FileDescriptor)0x1);
      if ((uVar23 & 0xff) == 1) {
        *puVar18 = (int)UVar8.unknown;
        bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        puVar17 = (undefined4 *)CONCAT71(extraout_var,bVar6);
        if ((bVar6 & 1) != 0) {
          FUN_100521998();
          _swift_willThrowTypedImpl(puVar18,PTR___type_metadata_for_System_Errno_100eae9c8,puVar17);
          puVar17 = puVar18;
        }
        FUN_100521998();
        puVar19 = PTR___type_metadata_for_System_Errno_100eae9c8;
        _swift_allocError(PTR___type_metadata_for_System_Errno_100eae9c8,puVar17,0,0);
        *puVar17 = (int)UVar8.unknown;
        *(undefined **)(unaff_x22 + 0x5b8) = puVar19;
        *(undefined **)(unaff_x22 + 0x588) = puVar19;
        _swift_errorRetain(puVar19);
        _swift_errorRetain(puVar19);
        puVar33 = &DAT_100fcb578;
        FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
        piVar20 = piVar2;
        _swift_dynamicCast(piVar2,unaff_x22 + 0x588,puVar33,
                           PTR___type_metadata_for_System_Errno_100eae9c8,6);
        TVar32.unknown = puVar19;
        if (((ulong)piVar20 & 1) == 0) {
          _swift_errorRelease();
        }
        else {
          iVar41 = *piVar2;
          _swift_errorRelease();
          if (iVar41 == 0x23) {
            CVar21 = Swift::ContinuousClock::typeMetadataAccessor();
            *(undefined **)(unaff_x22 + 0x5c0) = CVar21.unknown;
            lVar35 = *(long *)(CVar21.unknown + -8);
            *(long *)(unaff_x22 + 0x5c8) = lVar35;
            uVar7 = *(long *)(lVar35 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc();
            *(ulong *)(unaff_x22 + 0x5d0) = uVar7;
            (extension_Swift)::Swift::Clock::_get_continuous();
            *(undefined8 *)(unaff_x22 + 0x568) = 10000000000000000;
            *(undefined8 *)(unaff_x22 + 0x570) = 0;
            *(undefined8 *)(unaff_x22 + 0x4f0) = 0;
            *(undefined8 *)(unaff_x22 + 0x4e8) = 0;
            *(undefined1 *)(unaff_x22 + 0x4f8) = 1;
            if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar29) {
              _swift_task_switch(FUN_10051dd48,0,0);
              return;
            }
            goto LAB_10051fd44;
          }
        }
        bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar32);
        if (!bVar5) {
          lVar35 = *(long *)(unaff_x22 + 0x5a8);
          _swift_beginAccess(lVar35 + 0x20,unaff_x22 + 0x4b8,0,0);
          FUN_100076688(lVar35 + 0x20,unaff_x22 + 1000);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x400);
          lVar35 = *(long *)(unaff_x22 + 0x408);
          FUN_100004640(unaff_x22 + 1000,uVar31);
          (**(code **)(lVar35 + 0x70))(uVar31,lVar35);
          FUN_100004594(unaff_x22 + 1000);
          if (((uint)uVar31 & 0xff) < 6) {
            FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x460);
            uVar31 = *(undefined8 *)(unaff_x22 + 0x478);
            lVar35 = *(long *)(unaff_x22 + 0x480);
            FUN_100004640(unaff_x22 + 0x460,uVar31);
            puVar33 = &DAT_100fcd4a8;
            FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
            pcVar25 = (char *)0x60;
            pvVar36 = (void *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar33 + 0x20) = 0x726f727265;
            *(undefined8 *)(puVar33 + 0x18) = 2;
            *(undefined8 *)(puVar33 + 0x10) = 1;
            *(undefined1 **)(puVar33 + 0x28) = &DAT_e500000000000000;
            SVar42.bridgeObject = pvVar36;
            SVar42.str = pcVar25;
            Swift::String::reserveCapacity(2,SVar42);
            _swift_getErrorValue(puVar19,unaff_x22 + 0x580,unaff_x22 + 0x4a0);
            FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x4a0),*(undefined8 *)(unaff_x22 + 0x4a8));
            *(undefined8 *)(puVar33 + 0x30) = 0;
            *(undefined8 *)(puVar33 + 0x38) = 0xe000000000000000;
            puVar33[0x58] = 0;
            puVar22 = puVar33;
            FUN_1004a6a1c();
            _swift_setDeallocating(puVar33);
            FUN_1000fb4c4(puVar33 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
            _swift_deallocClassInstance(puVar33,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x70) = 5;
            *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000013;
            *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad0b0;
            *(undefined8 *)(unaff_x22 + 0x88) = 0;
            *(undefined **)(unaff_x22 + 0x90) = puVar22;
            *(undefined8 *)(unaff_x22 + 0x98) = 0;
            *(undefined8 *)(unaff_x22 + 0xa0) = 0;
            *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0xb8) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0xc0) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 200) = 0xaa;
            *(undefined1 *)(unaff_x22 + 0x130) = 5;
            *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000013;
            *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dad0b0;
            *(undefined8 *)(unaff_x22 + 0x148) = 0;
            *(undefined **)(unaff_x22 + 0x150) = puVar22;
            *(undefined8 *)(unaff_x22 + 0x158) = 0;
            *(undefined8 *)(unaff_x22 + 0x160) = 0;
            *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0x178) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0x180) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 0x188) = 0xaa;
            FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 400);
            FUN_1004eaa3c(unaff_x22 + 0x130);
            (**(code **)(lVar35 + 0x28))(unaff_x22 + 0x70,uVar31,lVar35);
            _swift_errorRelease(puVar19);
            FUN_1004eaa3c(unaff_x22 + 0x70);
            lVar35 = unaff_x22 + 0x460;
            goto LAB_10051fc94;
          }
        }
        _swift_errorRelease(puVar19);
        break;
      }
      if (UVar8.unknown == (undefined *)0x0) {
        lVar35 = *(long *)(unaff_x22 + 0x5a8);
        _swift_beginAccess(lVar35 + 0x20,unaff_x22 + 0x4d0,0,0);
        FUN_100076688(lVar35 + 0x20,unaff_x22 + 0x410);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x428);
        lVar35 = *(long *)(unaff_x22 + 0x430);
        FUN_100004640(unaff_x22 + 0x410,uVar31);
        (**(code **)(lVar35 + 0x70))(uVar31,lVar35);
        FUN_100004594(unaff_x22 + 0x410);
        if (((uint)uVar31 & 0xff) < 4) {
          FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x3c0);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x3d8);
          lVar35 = *(long *)(unaff_x22 + 0x3e0);
          FUN_100004640(unaff_x22 + 0x3c0,uVar31);
          *(undefined1 *)(unaff_x22 + 0xd0) = 3;
          *(undefined8 *)(unaff_x22 + 0xd8) = 0x6563657220464f45;
          *(undefined8 *)(unaff_x22 + 0xe0) = 0xec00000064657669;
          *(undefined8 *)(unaff_x22 + 0xf0) = 0;
          *(undefined8 *)(unaff_x22 + 0xe8) = 0;
          *(undefined8 *)(unaff_x22 + 0x100) = 0;
          *(undefined8 *)(unaff_x22 + 0xf8) = 0;
          *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000018;
          *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dad090;
          *(undefined8 *)(unaff_x22 + 0x118) = 0x706f6f4c64616572;
          *(undefined8 *)(unaff_x22 + 0x120) = 0xea00000000002928;
          *(undefined8 *)(unaff_x22 + 0x128) = 0x94;
          *(undefined1 *)(unaff_x22 + 0x1f0) = 3;
          *(undefined8 *)(unaff_x22 + 0x1f8) = 0x6563657220464f45;
          *(undefined8 *)(unaff_x22 + 0x200) = 0xec00000064657669;
          *(undefined8 *)(unaff_x22 + 0x210) = 0;
          *(undefined8 *)(unaff_x22 + 0x208) = 0;
          *(undefined8 *)(unaff_x22 + 0x220) = 0;
          *(undefined8 *)(unaff_x22 + 0x218) = 0;
          *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000018;
          *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dad090;
          *(undefined8 *)(unaff_x22 + 0x238) = 0x706f6f4c64616572;
          *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002928;
          *(undefined8 *)(unaff_x22 + 0x248) = 0x94;
          FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 0x10);
          FUN_1004eaa3c(unaff_x22 + 0x1f0);
          (**(code **)(lVar35 + 0x28))(unaff_x22 + 0xd0,uVar31,lVar35);
          FUN_1004eaa3c(unaff_x22 + 0xd0);
          lVar35 = unaff_x22 + 0x3c0;
LAB_10051fc94:
          FUN_100004594(lVar35);
        }
        break;
      }
      if ((long)UVar8.unknown < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd30);
        (*pcVar4)();
      }
      if (*(undefined **)(puVar39 + 0x10) < UVar8.unknown) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd34);
        (*pcVar4)();
      }
      lVar35 = *(long *)(unaff_x22 + 0x5a8);
      DVar9.unknown = puVar39;
      _swift_bridgeObjectRetain();
      FUN_1004bb0f8();
      Foundation::Data::append(DVar9,(Data)into.unknown);
      FUN_10003bf2c(DVar9.unknown,into.unknown);
      _swift_beginAccess(lVar35 + 0x20,unaff_x22 + 0x488,0,0);
      puVar33 = *(undefined **)(unaff_x22 + 0x518);
      pvVar36 = *(void **)(unaff_x22 + 0x520);
      TVar32.unknown = (undefined *)0xa;
      puVar19 = puVar33;
      FUN_10051c82c(10,puVar33,pvVar36);
      uVar23 = (uint)puVar19;
      while ((uVar23 & 0xff) != 1) {
        uVar23 = (uint)((ulong)pvVar36 >> 0x20);
        uVar37 = uVar23 >> 0x1e;
        if (uVar23 >> 0x1e < 2) {
          pvVar24 = (void *)((ulong)pvVar36 >> 0x30 & 0xff);
          if (uVar37 != 0) {
            pvVar24 = (void *)((long)puVar33 >> 0x20);
          }
          p_Var10 = (__DataStorage *)0x0;
          if (uVar37 != 0) {
            p_Var10 = (__DataStorage *)(long)(int)puVar33;
          }
        }
        else if (uVar37 == 2) {
          pvVar24 = *(void **)(puVar33 + 0x18);
          p_Var10 = *(__DataStorage **)(puVar33 + 0x10);
        }
        else {
          pvVar24 = (void *)0x0;
          p_Var10 = (__DataStorage *)0x0;
        }
        if (((long)pvVar24 < (long)p_Var10) || ((long)TVar32.unknown < (long)p_Var10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd1c);
          (*pcVar4)();
        }
        puVar22 = TVar32.unknown;
        __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                  (p_Var10,TVar32.unknown,puVar33,pvVar36);
        puVar19 = TVar32.unknown + 1;
        if (SCARRY8((long)TVar32.unknown,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd20);
          (*pcVar4)();
        }
        if (uVar37 < 2) {
          pvVar24 = (void *)((ulong)pvVar36 >> 0x30 & 0xff);
          if (uVar37 != 0) {
            pvVar24 = (void *)((long)puVar33 >> 0x20);
          }
          lVar35 = 0;
          if (uVar37 != 0) {
            lVar35 = (long)(int)puVar33;
          }
        }
        else if (uVar37 == 2) {
          pvVar24 = *(void **)(puVar33 + 0x18);
          lVar35 = *(long *)(puVar33 + 0x10);
        }
        else {
          pvVar24 = (void *)0x0;
          lVar35 = 0;
        }
        if (((long)pvVar24 < (long)puVar19) || ((long)pvVar24 < lVar35)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd24);
          (*pcVar4)();
        }
        pvVar27 = pvVar36;
        __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                  (puVar19,pvVar24,puVar33);
        FUN_10003bf2c(puVar33,pvVar36);
        uVar23 = (uint)((ulong)puVar22 >> 0x20);
        uVar37 = uVar23 >> 0x1e;
        iVar41 = (int)p_Var10;
        if (uVar23 >> 0x1e < 2) {
          if (uVar37 != 0) {
            if ((long)iVar41 == (long)p_Var10 >> 0x20) goto LAB_10051f0bc;
            goto LAB_10051f210;
          }
          if (((ulong)puVar22 & 0xff000000000000) != 0) goto LAB_10051f210;
LAB_10051f0bc:
          FUN_10003bf2c(p_Var10,puVar22);
        }
        else {
          if ((uVar37 != 2) || (*(long *)(p_Var10 + 0x10) == *(long *)(p_Var10 + 0x18)))
          goto LAB_10051f0bc;
LAB_10051f210:
          FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x370);
          uVar7 = *(ulong *)(unaff_x22 + 0x388);
          lVar35 = *(long *)(unaff_x22 + 0x390);
          FUN_100004640(unaff_x22 + 0x370,uVar7);
          (**(code **)(lVar35 + 0x70))(uVar7,lVar35);
          FUN_100004594(unaff_x22 + 0x370);
          if ((uVar7 & 0xff) == 0) {
            FUN_100076688(*(long *)(unaff_x22 + 0x5a8) + 0x20,unaff_x22 + 0x398);
            uVar31 = *(undefined8 *)(unaff_x22 + 0x3b0);
            lVar35 = *(long *)(unaff_x22 + 0x3b8);
            FUN_100004640(unaff_x22 + 0x398,uVar31);
            puVar33 = &DAT_100fcd4a8;
            FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
            pcVar25 = (char *)0x60;
            pcVar26 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar33 + 0x18) = 2;
            *(undefined8 *)(puVar33 + 0x10) = 1;
            *(undefined8 *)(puVar33 + 0x20) = 0x657a6973;
            *(undefined1 **)(puVar33 + 0x28) = &DAT_e400000000000000;
            *(undefined8 *)(unaff_x22 + 0x538) = 0;
            *(undefined8 *)(unaff_x22 + 0x540) = 0xe000000000000000;
            SVar43.bridgeObject = pcVar26;
            SVar43.str = pcVar25;
            Swift::String::reserveCapacity(2,SVar43);
            *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x538);
            *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x540);
            if (uVar37 == 2) {
              uVar7 = *(long *)(p_Var10 + 0x18) - *(long *)(p_Var10 + 0x10);
              if (SBORROW8(*(long *)(p_Var10 + 0x18),*(long *)(p_Var10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd44);
                (*pcVar4)();
              }
            }
            else if (uVar37 == 1) {
              iVar28 = (int)((ulong)p_Var10 >> 0x20);
              if (SBORROW4(iVar28,iVar41)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd40);
                (*pcVar4)();
              }
              uVar7 = (ulong)(iVar28 - iVar41);
            }
            else {
              uVar7 = (ulong)puVar22 >> 0x30 & 0xff;
            }
            *(ulong *)(unaff_x22 + 0x578) = uVar7;
            SVar42 = Swift::CustomStringConvertible::get_description();
            SVar44.bridgeObject = pvVar27;
            SVar44.str = pcVar26;
            Swift::String::append(SVar42,SVar44);
            _swift_bridgeObjectRelease(SVar42.bridgeObject);
            uVar30 = *(undefined8 *)(unaff_x22 + 0x530);
            *(undefined8 *)(puVar33 + 0x30) = *(undefined8 *)(unaff_x22 + 0x528);
            *(undefined8 *)(puVar33 + 0x38) = uVar30;
            puVar33[0x58] = 0;
            puVar11 = puVar33;
            FUN_1004a6a1c();
            _swift_setDeallocating(puVar33);
            FUN_1000fb4c4(puVar33 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
            _swift_deallocClassInstance(puVar33,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x310) = 0;
            *(undefined8 *)(unaff_x22 + 0x318) = 0xd000000000000010;
            *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dacbf0;
            *(undefined8 *)(unaff_x22 + 0x328) = 0;
            *(undefined **)(unaff_x22 + 0x330) = puVar11;
            *(undefined8 *)(unaff_x22 + 0x338) = 0;
            *(undefined8 *)(unaff_x22 + 0x340) = 0;
            *(undefined8 *)(unaff_x22 + 0x348) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0x358) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0x360) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 0x368) = 0xa0;
            *(undefined1 *)(unaff_x22 + 0x2b0) = 0;
            *(undefined8 *)(unaff_x22 + 0x2b8) = 0xd000000000000010;
            *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100dacbf0;
            *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
            *(undefined **)(unaff_x22 + 0x2d0) = puVar11;
            *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
            *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
            *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dad090;
            *(undefined8 *)(unaff_x22 + 0x2f8) = 0x706f6f4c64616572;
            *(undefined8 *)(unaff_x22 + 0x300) = 0xea00000000002928;
            *(undefined8 *)(unaff_x22 + 0x308) = 0xa0;
            FUN_1004eaa00(unaff_x22 + 0x310,unaff_x22 + 0x250);
            FUN_1004eaa3c(unaff_x22 + 0x2b0);
            (**(code **)(lVar35 + 0x28))(unaff_x22 + 0x310,uVar31);
            FUN_1004eaa3c(unaff_x22 + 0x310);
            FUN_100004594(unaff_x22 + 0x398);
          }
          puVar33 = &DAT_100fcd490;
          FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
          lVar40 = *(long *)(puVar33 + -8);
          uVar12 = *(long *)(lVar40 + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc();
          *(undefined **)(unaff_x22 + 0x450) = PTR___type_metadata_for_Foundation_Data_100ea7300;
          *(undefined **)(unaff_x22 + 0x458) =
               PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100ea72f0
          ;
          *(__DataStorage **)(unaff_x22 + 0x438) = p_Var10;
          *(undefined **)(unaff_x22 + 0x440) = puVar22;
          plVar13 = (long *)(unaff_x22 + 0x438);
          FUN_100004640();
          lVar35 = *plVar13;
          uVar7 = plVar13[1];
          uVar23 = (uint)(uVar7 >> 0x20);
          uVar37 = uVar23 >> 0x1e;
          if (uVar23 >> 0x1e < 2) {
            if (uVar37 == 0) {
              *(char *)(unaff_x22 + 0x4f9) = (char)lVar35;
              *(char *)(unaff_x22 + 0x4fa) = (char)((ulong)lVar35 >> 8);
              *(char *)(unaff_x22 + 0x4fb) = (char)((ulong)lVar35 >> 0x10);
              *(char *)(unaff_x22 + 0x4fc) = (char)((ulong)lVar35 >> 0x18);
              *(char *)(unaff_x22 + 0x4fd) = (char)((ulong)lVar35 >> 0x20);
              *(char *)(unaff_x22 + 0x4fe) = (char)((ulong)lVar35 >> 0x28);
              *(char *)(unaff_x22 + 0x4ff) = (char)((ulong)lVar35 >> 0x30);
              *(char *)(unaff_x22 + 0x500) = (char)((ulong)lVar35 >> 0x38);
              *(char *)(unaff_x22 + 0x501) = (char)uVar7;
              *(char *)(unaff_x22 + 0x502) = (char)(uVar7 >> 8);
              *(char *)(unaff_x22 + 0x503) = (char)(uVar7 >> 0x10);
              *(char *)(unaff_x22 + 0x504) = (char)(uVar7 >> 0x18);
              *(char *)(unaff_x22 + 0x505) = (char)(uVar7 >> 0x20);
              *(char *)(unaff_x22 + 0x506) = (char)(uVar7 >> 0x28);
              FUN_1001037b4(p_Var10,puVar22);
              puVar15 = (undefined8 *)(unaff_x22 + 0x4f9);
              puVar34 = (undefined8 *)(unaff_x22 + 0x4f9 + (uVar7 >> 0x30 & 0xff));
LAB_10051f648:
              FUN_100441844(unaff_x22 + 0x548,puVar15,puVar34);
            }
            else {
              lVar38 = (long)(int)lVar35;
              lVar3 = (lVar35 >> 0x20) - lVar38;
              if (lVar35 >> 0x20 < lVar38) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd28);
                (*pcVar4)();
              }
              p_Var16 = p_Var10;
              FUN_1001037b4(p_Var10,puVar22);
              Foundation::__DataStorage::_get__bytes
                        ((__DataStorage *)(uVar7 & 0x3fffffffffffffff),p_Var16);
              if (p_Var16 == (__DataStorage *)0x0) {
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(uVar7 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                p_Var16 = (__DataStorage *)0x0;
                p_Var14 = (__DataStorage *)0x0;
              }
              else {
                p_Var14 = (__DataStorage *)
                          Foundation::__DataStorage::get__offset
                                    ((__DataStorage *)(uVar7 & 0x3fffffffffffffff),p_Var16);
                if (SBORROW8(lVar38,(long)p_Var14)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd3c);
                  (*pcVar4)();
                }
                p_Var16 = p_Var16 + (lVar38 - (long)p_Var14);
                lVar35 = Foundation::__DataStorage::get__length
                                   ((__DataStorage *)(uVar7 & 0x3fffffffffffffff),p_Var14);
                if (p_Var16 == (__DataStorage *)0x0) {
                  p_Var14 = (__DataStorage *)0x0;
                }
                else {
                  if (lVar3 <= lVar35) {
                    lVar35 = lVar3;
                  }
                  p_Var14 = p_Var16 + lVar35;
                }
              }
              FUN_100441844(unaff_x22 + 0x548,p_Var16,p_Var14);
            }
          }
          else {
            if (uVar37 != 2) {
              *(undefined8 *)(unaff_x22 + 0x50d) = 0;
              *puVar1 = 0;
              FUN_1001037b4(p_Var10,puVar22);
              puVar15 = puVar1;
              puVar34 = puVar1;
              goto LAB_10051f648;
            }
            lVar3 = *(long *)(lVar35 + 0x10);
            lVar35 = *(long *)(lVar35 + 0x18);
            p_Var16 = p_Var10;
            FUN_1001037b4(p_Var10,puVar22);
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(uVar7 & 0x3fffffffffffffff),p_Var16);
            if (p_Var16 == (__DataStorage *)0x0) {
              p_Var14 = (__DataStorage *)0x0;
              p_Var16 = (__DataStorage *)0x0;
            }
            else {
              p_Var14 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(uVar7 & 0x3fffffffffffffff),p_Var16);
              if (SBORROW8(lVar3,(long)p_Var14)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd38);
                (*pcVar4)();
              }
              p_Var16 = p_Var16 + (lVar3 - (long)p_Var14);
            }
            lVar38 = lVar35 - lVar3;
            if (SBORROW8(lVar35,lVar3)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10051fd2c);
              (*pcVar4)();
            }
            lVar35 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(uVar7 & 0x3fffffffffffffff),p_Var14);
            if (p_Var16 == (__DataStorage *)0x0) {
              p_Var14 = (__DataStorage *)0x0;
            }
            else {
              if (lVar38 <= lVar35) {
                lVar35 = lVar38;
              }
              p_Var14 = p_Var16 + lVar35;
            }
            FUN_100441844(unaff_x22 + 0x548,p_Var16,p_Var14);
          }
          FUN_100004594(unaff_x22 + 0x438);
          *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x548);
          *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x550);
          puVar11 = &DAT_100fcb3a0;
          FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
          Swift::AsyncThrowingStream::Continuation::_yield(uVar12,unaff_x22 + 0x558,puVar11);
          FUN_10003bf2c(p_Var10,puVar22);
          (**(code **)(lVar40 + 8))(uVar12,puVar33);
          _swift_task_dealloc(uVar12);
        }
        TVar32.unknown = (undefined *)0xa;
        puVar33 = puVar19;
        FUN_10051c82c(10,puVar19,pvVar24);
        uVar23 = (uint)puVar33;
        puVar33 = puVar19;
        pvVar36 = pvVar24;
      }
      *(undefined **)(unaff_x22 + 0x518) = puVar33;
      *(void **)(unaff_x22 + 0x520) = pvVar36;
      if (*(char *)(*(long *)(unaff_x22 + 0x598) + 0x80) != '\x01') break;
    }
  }
  *(undefined8 *)(unaff_x22 + 0x590) = 0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x590));
  _swift_bridgeObjectRelease(puVar39);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x518),*(undefined8 *)(unaff_x22 + 0x520));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar29) {
                    /* WARNING: Could not recover jumptable at 0x00010051fd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_10051fd44:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10051fd48 | FUN_10051fd48 */

void FUN_10051fd48(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = unaff_x20;
  _swift_task_switch(FUN_10051fd60);
  return;
}



/* Address: 0x10051fd60 | FUN_10051fd60 */

void FUN_10051fd60(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x22 + 0x170);
  if (*(char *)(lVar2 + 0x80) == '\x01') {
    *(undefined1 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x70));
    lVar3 = *(long *)(lVar2 + 0x78);
    _swift_beginAccess(lVar3 + 0x20,unaff_x22 + 0x158,0,0);
    FUN_100076688(lVar3 + 0x20,unaff_x22 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar2 = *(long *)(unaff_x22 + 0x90);
    FUN_100004640(unaff_x22 + 0x70,uVar1);
    (**(code **)(lVar2 + 0x70))(uVar1,lVar2);
    FUN_100004594(unaff_x22 + 0x70);
    if (((uint)uVar1 & 0xff) < 2) {
      FUN_100076688(lVar3 + 0x20,unaff_x22 + 0x130);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar2 = *(long *)(unaff_x22 + 0x150);
      FUN_100004640(unaff_x22 + 0x130,uVar1);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dacb60;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000018;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dad090;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x656e6e6f63736964;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xec00000029287463;
      *(undefined8 *)(unaff_x22 + 0x68) = 0xba;
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dacb60;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000018;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad090;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x656e6e6f63736964;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xec00000029287463;
      *(undefined8 *)(unaff_x22 + 200) = 0xba;
      FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      (**(code **)(lVar2 + 0x28))(unaff_x22 + 0x10,uVar1,lVar2);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      FUN_100004594(unaff_x22 + 0x130);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010051ff18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10051ff1c | FUN_10051ff1c */

void FUN_10051ff1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_10051ff84);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10051ff84 | FUN_10051ff84 */

void FUN_10051ff84(undefined4 *param_1)

{
  UnsafeRawBufferPointer UVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  UnsafeRawBufferPointer UVar14;
  ulong uVar15;
  __int64 _Var16;
  __DataStorage *p_Var17;
  undefined7 extraout_var;
  undefined4 *puVar19;
  int *piVar20;
  ContinuousClock CVar21;
  uint uVar22;
  long lVar23;
  __DataStorage *p_Var24;
  long lVar25;
  __DataStorage *p_Var26;
  __DataStorage *p_Var27;
  uint uVar28;
  ulong uVar29;
  long unaff_x22;
  Range<__int64> with;
  __DataStorage *p_Var30;
  __DataStorage *p_Var31;
  __DataStorage *p_Var32;
  __DataStorage *p_Var33;
  __DataStorage *p_Var34;
  undefined4 *puVar18;
  undefined7 extraout_var_00;
  
  lVar23 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(char *)(*(long *)(unaff_x22 + 0x90) + 0x80) == '\x01') {
    UVar1.unknown = (undefined *)(unaff_x22 + 0x49);
    lVar25 = *(long *)(unaff_x22 + 0x80);
    uVar29 = *(ulong *)(unaff_x22 + 0x88);
    *(long *)(unaff_x22 + 0x58) = lVar25;
    *(ulong *)(unaff_x22 + 0x60) = uVar29;
    uVar28 = (uint)(uVar29 >> 0x20);
    uVar22 = uVar28 >> 0x1e;
    if (uVar28 >> 0x1e < 2) {
      with.unknown = (undefined *)(uVar29 >> 0x30 & 0xff);
      if (uVar22 != 0) {
        with.unknown = (undefined *)(lVar25 >> 0x20);
      }
    }
    else if (uVar22 == 2) {
      with.unknown = *(undefined **)(lVar25 + 0x18);
    }
    else {
      with.unknown = (undefined *)0x0;
    }
    puVar18 = (undefined4 *)(unaff_x22 + 0x100);
    piVar2 = (int *)(unaff_x22 + 0x104);
    puVar11 = &DAT_100fcd4e0;
    FUN_1000f7830(&DAT_100fcd4e0,&DAT_100c53918);
    *(undefined **)(unaff_x22 + 0x28) = puVar11;
    puVar12 = puVar11;
    FUN_1004f96c0();
    *(undefined **)(unaff_x22 + 0x30) = puVar12;
    *(undefined1 *)(unaff_x22 + 0x10) = 10;
    puVar13 = (undefined1 *)(unaff_x22 + 0x10);
    FUN_100004640(puVar13,puVar11);
    *(undefined1 *)(unaff_x22 + 0x57) = *puVar13;
    FUN_1001037b4(lVar25,uVar29);
    Foundation::Data::_Representation::_replaceSubrange
              (with,(__int64)with.unknown,(_Representation)((char)unaff_x22 + 0x57),1);
    FUN_100004594(unaff_x22 + 0x10);
    p_Var17 = *(__DataStorage **)(unaff_x22 + 0x58);
    p_Var30 = *(__DataStorage **)(unaff_x22 + 0x60);
    *(__DataStorage **)(unaff_x22 + 0x98) = p_Var17;
    *(__DataStorage **)(unaff_x22 + 0xa0) = p_Var30;
    UVar14.unknown = p_Var17;
    FUN_1001037b4(p_Var17,p_Var30);
    while( true ) {
      *(__DataStorage **)(unaff_x22 + 0xa8) = p_Var17;
      *(__DataStorage **)(unaff_x22 + 0xb0) = p_Var30;
      uVar29 = (ulong)p_Var30 >> 0x3e;
      if (uVar29 == 3) break;
      p_Var34 = (__DataStorage *)(long)(int)p_Var17;
      p_Var31 = (__DataStorage *)((long)p_Var17 >> 0x20);
      p_Var33 = (__DataStorage *)((ulong)p_Var30 >> 0x30 & 0xff);
      do {
        uVar28 = (uint)((ulong)p_Var30 >> 0x3e);
        p_Var24 = p_Var34;
        p_Var32 = p_Var31;
        if (uVar28 == 1) {
LAB_100520224:
          if (p_Var24 == p_Var32) goto LAB_10052053c;
          if (uVar29 != 2) {
            if ((long)p_Var31 < (long)p_Var34) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005207fc);
              (*UNRECOVERED_JUMPTABLE)();
            }
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),
                       (__DataStorage *)UVar14.unknown);
            if ((__DataStorage *)UVar14.unknown == (__DataStorage *)0x0) {
              Foundation::__DataStorage::get__length
                        ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),(__DataStorage *)0x0
                        );
              uVar22 = 0;
              UVar14.unknown = (undefined *)0x0;
            }
            else {
              p_Var24 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),
                                   (__DataStorage *)UVar14.unknown);
              if (SBORROW8((long)p_Var34,(long)p_Var24)) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100520808);
                (*UNRECOVERED_JUMPTABLE)();
              }
              p_Var32 = (__DataStorage *)(UVar14.unknown + ((long)p_Var34 - (long)p_Var24));
              _Var16 = Foundation::__DataStorage::get__length
                                 ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),p_Var24);
              if ((long)p_Var31 - (long)p_Var34 <= _Var16) {
                _Var16 = (long)p_Var31 - (long)p_Var34;
              }
              uVar22 = 0;
              if (p_Var32 != (__DataStorage *)0x0) {
                uVar22 = (int)_Var16 + (int)p_Var32;
              }
              UVar14.unknown = (undefined *)0x0;
              if (p_Var32 != (__DataStorage *)0x0) {
                UVar14.unknown = p_Var32;
              }
            }
            uVar15 = *(ulong *)(unaff_x22 + 0x90);
            _swift_task_isCurrentExecutor(uVar15,0);
            if ((uVar15 & 1) == 0) {
              _swift_task_reportUnexpectedExecutor
                        ("MCP/StdioTransport.swift",0x18,1,0xd1,*(undefined8 *)(unaff_x22 + 0x90),0)
              ;
            }
            System::FileDescriptor::__write(UVar14,SUB41(uVar22,0),(FileDescriptor)0x1);
            puVar19 = (undefined4 *)(unaff_x22 + 0x108);
            goto joined_r0x0001005203bc;
          }
          lVar25 = *(long *)(p_Var17 + 0x10);
          lVar4 = *(long *)(p_Var17 + 0x18);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),
                     (__DataStorage *)UVar14.unknown);
          p_Var24 = (__DataStorage *)0x0;
          if ((__DataStorage *)UVar14.unknown != (__DataStorage *)0x0) {
            p_Var24 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),
                                 (__DataStorage *)UVar14.unknown);
            if (SBORROW8(lVar25,(long)p_Var24)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100520804);
              (*UNRECOVERED_JUMPTABLE)();
            }
            UVar14.unknown = UVar14.unknown + (lVar25 - (long)p_Var24);
          }
          lVar7 = lVar4 - lVar25;
          if (SBORROW8(lVar4,lVar25)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100520800);
            (*UNRECOVERED_JUMPTABLE)();
          }
          lVar25 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),p_Var24);
          if (lVar7 <= lVar25) {
            lVar25 = lVar7;
          }
          uVar22 = 0;
          if (UVar14.unknown != (undefined *)0x0) {
            uVar22 = (int)lVar25 + (int)UVar14.unknown;
          }
          uVar15 = *(ulong *)(unaff_x22 + 0x90);
          _swift_task_isCurrentExecutor(uVar15,0);
          if ((uVar15 & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("MCP/StdioTransport.swift",0x18,1,0xd1,*(undefined8 *)(unaff_x22 + 0x90),0);
          }
          System::FileDescriptor::__write(UVar14,SUB41(uVar22,0),(FileDescriptor)0x1);
          if ((uVar22 & 0xff) == 1) {
            *puVar18 = (int)UVar14.unknown;
            bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
            puVar19 = (undefined4 *)CONCAT71(extraout_var_00,bVar8);
            if ((bVar8 & 1) != 0) {
              FUN_100521998();
              _swift_willThrowTypedImpl
                        (puVar18,PTR___type_metadata_for_System_Errno_100eae9c8,puVar19);
              puVar19 = puVar18;
            }
            FUN_100521998();
            puVar9 = (undefined8 *)PTR___type_metadata_for_System_Errno_100eae9c8;
            _swift_allocError(PTR___type_metadata_for_System_Errno_100eae9c8,puVar19,0,0);
            *puVar19 = (int)UVar14.unknown;
            goto LAB_10052066c;
          }
        }
        else {
          if (uVar28 != 0) {
            p_Var24 = *(__DataStorage **)(p_Var17 + 0x10);
            p_Var32 = *(__DataStorage **)(p_Var17 + 0x18);
            goto LAB_100520224;
          }
          if (((ulong)p_Var30 & 0xff000000000000) == 0) goto LAB_10052053c;
          uVar15 = *(ulong *)(unaff_x22 + 0x90);
          *(char *)(unaff_x22 + 0x49) = (char)p_Var17;
          *(char *)(unaff_x22 + 0x4a) = (char)((ulong)p_Var17 >> 8);
          *(char *)(unaff_x22 + 0x4b) = (char)((ulong)p_Var17 >> 0x10);
          *(char *)(unaff_x22 + 0x4c) = (char)((ulong)p_Var17 >> 0x18);
          *(char *)(unaff_x22 + 0x4d) = (char)((ulong)p_Var17 >> 0x20);
          *(char *)(unaff_x22 + 0x4e) = (char)((ulong)p_Var17 >> 0x28);
          *(char *)(unaff_x22 + 0x4f) = (char)((ulong)p_Var17 >> 0x30);
          *(char *)(unaff_x22 + 0x50) = (char)((ulong)p_Var17 >> 0x38);
          *(char *)(unaff_x22 + 0x51) = (char)p_Var30;
          *(char *)(unaff_x22 + 0x52) = (char)((ulong)p_Var30 >> 8);
          *(char *)(unaff_x22 + 0x53) = (char)((ulong)p_Var30 >> 0x10);
          *(char *)(unaff_x22 + 0x54) = (char)((ulong)p_Var30 >> 0x18);
          *(char *)(unaff_x22 + 0x55) = (char)((ulong)p_Var30 >> 0x20);
          *(char *)(unaff_x22 + 0x56) = (char)((ulong)p_Var30 >> 0x28);
          _swift_task_isCurrentExecutor(uVar15,0);
          if ((uVar15 & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("MCP/StdioTransport.swift",0x18,1,0xd1,*(undefined8 *)(unaff_x22 + 0x90),0);
          }
          uVar22 = (uint)(UVar1.unknown + (long)p_Var33);
          UVar14.unknown = UVar1.unknown;
          System::FileDescriptor::__write
                    (UVar1,SUB81(UVar1.unknown + (long)p_Var33,0),(FileDescriptor)0x1);
          puVar19 = (undefined4 *)(unaff_x22 + 0x10c);
joined_r0x0001005203bc:
          if ((uVar22 & 0xff) == 1) {
            *puVar19 = (int)UVar14.unknown;
            bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
            puVar18 = (undefined4 *)CONCAT71(extraout_var,bVar8);
            if ((bVar8 & 1) != 0) {
              FUN_100521998();
              _swift_willThrowTypedImpl
                        (puVar19,PTR___type_metadata_for_System_Errno_100eae9c8,puVar18);
              puVar18 = puVar19;
            }
            FUN_100521998();
            puVar9 = (undefined8 *)PTR___type_metadata_for_System_Errno_100eae9c8;
            _swift_allocError(PTR___type_metadata_for_System_Errno_100eae9c8,puVar18,0,0);
            *puVar18 = (int)UVar14.unknown;
LAB_10052066c:
            *(undefined8 **)(unaff_x22 + 0xb8) = puVar9;
            *(undefined8 **)(unaff_x22 + 0x78) = puVar9;
            _swift_errorRetain(puVar9);
            _swift_errorRetain(puVar9);
            puVar11 = &DAT_100fcb578;
            FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
            piVar20 = piVar2;
            _swift_dynamicCast(piVar2,unaff_x22 + 0x78,puVar11,
                               PTR___type_metadata_for_System_Errno_100eae9c8,6);
            puVar10 = puVar9;
            if (((ulong)piVar20 & 1) == 0) {
              _swift_errorRelease();
            }
            else {
              iVar6 = *piVar2;
              _swift_errorRelease();
              if (iVar6 == 0x23) {
                CVar21 = Swift::ContinuousClock::typeMetadataAccessor();
                *(undefined **)(unaff_x22 + 0xc0) = CVar21.unknown;
                lVar25 = *(long *)(CVar21.unknown + -8);
                *(long *)(unaff_x22 + 200) = lVar25;
                uVar29 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
                _swift_task_alloc();
                *(ulong *)(unaff_x22 + 0xd0) = uVar29;
                (extension_Swift)::Swift::Clock::_get_continuous();
                *(undefined8 *)(unaff_x22 + 0x70) = 0;
                *(undefined8 *)(unaff_x22 + 0x68) = 10000000000000000;
                *(undefined8 *)(unaff_x22 + 0x38) = 0;
                *(undefined8 *)(unaff_x22 + 0x40) = 0;
                *(undefined1 *)(unaff_x22 + 0x48) = 1;
                if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar23) {
                  _swift_task_switch(FUN_100520824,0,0);
                  return;
                }
                goto LAB_100520820;
              }
            }
            uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
            uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
            FUN_1004db3ac();
            _swift_allocError(&DAT_100eda9c8,puVar10,0,0);
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = puVar9;
            *(undefined1 *)(puVar10 + 3) = 7;
            _swift_willThrow();
            FUN_10003bf2c(p_Var17,p_Var30);
            FUN_10003bf2c(uVar3,uVar5);
            goto LAB_1005207b8;
          }
        }
      } while ((long)UVar14.unknown < 1);
      if (uVar28 < 2) {
        p_Var24 = p_Var34;
        p_Var32 = p_Var31;
        if (uVar28 == 0) {
          p_Var24 = (__DataStorage *)0x0;
          p_Var32 = p_Var33;
          p_Var26 = (__DataStorage *)0x0;
          p_Var27 = p_Var33;
        }
        else {
LAB_1005203f8:
          if ((long)p_Var32 < (long)p_Var24) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10052080c);
            (*UNRECOVERED_JUMPTABLE)();
          }
          p_Var26 = p_Var34;
          p_Var27 = p_Var31;
          if (uVar29 == 2) {
            p_Var26 = *(__DataStorage **)(p_Var17 + 0x10);
            p_Var27 = *(__DataStorage **)(p_Var17 + 0x18);
          }
        }
      }
      else {
        if (uVar28 == 2) {
          p_Var24 = *(__DataStorage **)(p_Var17 + 0x10);
          p_Var32 = *(__DataStorage **)(p_Var17 + 0x18);
          goto LAB_1005203f8;
        }
        p_Var32 = (__DataStorage *)0x0;
        p_Var24 = (__DataStorage *)0x0;
        p_Var26 = (__DataStorage *)0x0;
        p_Var27 = (__DataStorage *)0x0;
      }
      if (((long)p_Var27 < (long)p_Var32) || ((long)p_Var32 < (long)p_Var26)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100520810);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (SBORROW8((long)p_Var32,(long)p_Var24)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100520814);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (p_Var32 + -(long)p_Var24 < UVar14.unknown) {
        if (uVar28 < 2) {
          p_Var34 = p_Var31;
          p_Var32 = p_Var31;
          if (uVar28 == 0) {
            p_Var34 = p_Var33;
            p_Var32 = p_Var33;
          }
        }
        else if (uVar28 == 2) {
          p_Var34 = *(__DataStorage **)(p_Var17 + 0x18);
          p_Var32 = p_Var34;
        }
        else {
          p_Var32 = (__DataStorage *)0x0;
          p_Var34 = (__DataStorage *)0x0;
        }
      }
      else {
        p_Var32 = p_Var24 + (long)UVar14.unknown;
        if (SCARRY8((long)p_Var24,(long)UVar14.unknown)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10052081c);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if (uVar28 < 2) {
          p_Var24 = p_Var31;
          if (uVar28 == 0) {
            p_Var34 = (__DataStorage *)0x0;
            p_Var24 = p_Var33;
          }
        }
        else if (uVar28 == 2) {
          p_Var34 = *(__DataStorage **)(p_Var17 + 0x10);
          p_Var24 = *(__DataStorage **)(p_Var17 + 0x18);
        }
        else {
          p_Var24 = (__DataStorage *)0x0;
          p_Var34 = (__DataStorage *)0x0;
        }
        if (((long)p_Var24 < (long)p_Var32) || ((long)p_Var32 < (long)p_Var34)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100520820);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if (uVar28 < 2) {
          p_Var34 = p_Var33;
          if (uVar28 != 0) {
            p_Var34 = p_Var31;
          }
        }
        else if (uVar28 == 2) {
          p_Var34 = *(__DataStorage **)(p_Var17 + 0x18);
        }
        else {
          p_Var34 = (__DataStorage *)0x0;
        }
        if ((long)p_Var34 < (long)p_Var32) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100520818);
          (*UNRECOVERED_JUMPTABLE)();
        }
      }
      __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                (p_Var32,p_Var34,p_Var17,p_Var30);
      FUN_10003bf2c(p_Var17,p_Var30);
      UVar14.unknown = p_Var17;
      p_Var17 = p_Var32;
      p_Var30 = p_Var34;
    }
LAB_10052053c:
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
    FUN_10003bf2c(p_Var17,p_Var30);
    FUN_10003bf2c(uVar3,uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar25 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  else {
    FUN_100521998();
    puVar9 = (undefined8 *)PTR___type_metadata_for_System_Errno_100eae9c8;
    _swift_allocError(PTR___type_metadata_for_System_Errno_100eae9c8,param_1,0,0);
    *param_1 = 0x39;
    puVar10 = puVar9;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar10,0,0);
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = puVar9;
    *(undefined1 *)(puVar10 + 3) = 7;
    _swift_willThrow();
LAB_1005207b8:
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar25 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  if (lVar25 == lVar23) {
                    /* WARNING: Could not recover jumptable at 0x0001005207f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_100520820:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100520824 | FUN_100520824 */

void FUN_100520824(void)

{
  undefined *puVar1;
  Instant IVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x22;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar2 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaeef0;
  *(undefined **)(unaff_x22 + 0xd8) = IVar2.unknown;
  lVar8 = *(long *)(IVar2.unknown + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_100003a00(&DAT_100fcd4b8,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fcd4c0,puVar1,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar7 = *(code **)(lVar8 + 8);
  *(code **)(unaff_x22 + 0xe8) = pcVar7;
  (*pcVar7)(uVar4,IVar2.unknown);
  _swift_task_dealloc(uVar4);
  plVar5 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100520990;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar6) {
    Swift::Clock::_sleep();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100520990 | FUN_100520990 */

void FUN_100520990(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long *unaff_x22;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar8 = *unaff_x22;
  *(long *)(lVar8 + 0xf8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar8 + 0xf0));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar8 + 0xe0);
    uVar2 = *(undefined8 *)(lVar8 + 0xd0);
    uVar3 = *(undefined8 *)(lVar8 + 0xc0);
    lVar4 = *(long *)(lVar8 + 200);
    uVar6 = *(undefined8 *)(lVar8 + 0x90);
    (**(code **)(lVar8 + 0xe8))(uVar1,*(undefined8 *)(lVar8 + 0xd8));
    (**(code **)(lVar4 + 8))(uVar2,uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar2);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar7) goto LAB_100520a8c;
    pcVar5 = FUN_100520a90;
  }
  else {
    (**(code **)(lVar8 + 0xe8))(*(undefined8 *)(lVar8 + 0xe0),*(undefined8 *)(lVar8 + 0xd8));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar7) {
LAB_100520a8c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar5 = FUN_100521204;
    uVar6 = 0;
  }
  _swift_task_switch(pcVar5,uVar6,0);
  return;
}



/* Address: 0x100520a90 | FUN_100520a90 */

void FUN_100520a90(void)

{
  UnsafeRawBufferPointer UVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar8;
  UnsafeRawBufferPointer UVar9;
  ulong uVar10;
  __int64 _Var11;
  __DataStorage *p_Var12;
  undefined7 extraout_var;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  int *piVar17;
  ContinuousClock CVar18;
  undefined8 *puVar19;
  uint uVar20;
  long lVar21;
  __DataStorage *p_Var22;
  long lVar23;
  __DataStorage *p_Var24;
  __DataStorage *p_Var25;
  __DataStorage *p_Var26;
  long unaff_x22;
  uint uVar27;
  ulong uVar28;
  __DataStorage *p_Var29;
  __DataStorage *p_Var30;
  __DataStorage *p_Var31;
  __DataStorage *p_Var32;
  undefined4 *puVar13;
  undefined7 extraout_var_00;
  
  lVar21 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar1.unknown = (undefined *)(unaff_x22 + 0x49);
  puVar13 = (undefined4 *)(unaff_x22 + 0x100);
  piVar2 = (int *)(unaff_x22 + 0x104);
  UVar9.unknown = *(undefined **)(unaff_x22 + 0xb8);
  _swift_errorRelease();
  p_Var26 = *(__DataStorage **)(unaff_x22 + 0xb0);
  p_Var12 = *(__DataStorage **)(unaff_x22 + 0xa8);
  do {
    *(__DataStorage **)(unaff_x22 + 0xa8) = p_Var12;
    *(__DataStorage **)(unaff_x22 + 0xb0) = p_Var26;
    uVar28 = (ulong)p_Var26 >> 0x3e;
    if (uVar28 == 3) {
LAB_100520f1c:
      uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
      FUN_10003bf2c(p_Var12,p_Var26);
      FUN_10003bf2c(uVar3,uVar5);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      lVar23 = *(long *)PTR____stack_chk_guard_100ea82f0;
joined_r0x000100520f50:
      if (lVar23 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x0001005211d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
LAB_100521200:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    p_Var32 = (__DataStorage *)(long)(int)p_Var12;
    p_Var29 = (__DataStorage *)((long)p_Var12 >> 0x20);
    p_Var31 = (__DataStorage *)((ulong)p_Var26 >> 0x30 & 0xff);
    do {
      uVar27 = (uint)((ulong)p_Var26 >> 0x3e);
      p_Var22 = p_Var32;
      p_Var30 = p_Var29;
      if (uVar27 == 1) {
LAB_100520c0c:
        if (p_Var22 == p_Var30) goto LAB_100520f1c;
        if (uVar28 != 2) {
          if ((long)p_Var29 < (long)p_Var32) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005211dc);
            (*UNRECOVERED_JUMPTABLE)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)((ulong)p_Var26 & 0x3fffffffffffffff),
                     (__DataStorage *)UVar9.unknown);
          if ((__DataStorage *)UVar9.unknown == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)((ulong)p_Var26 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            uVar20 = 0;
            UVar9.unknown = (undefined *)0x0;
          }
          else {
            p_Var22 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)((ulong)p_Var26 & 0x3fffffffffffffff),
                                 (__DataStorage *)UVar9.unknown);
            if (SBORROW8((long)p_Var32,(long)p_Var22)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005211e8);
              (*UNRECOVERED_JUMPTABLE)();
            }
            p_Var30 = (__DataStorage *)(UVar9.unknown + ((long)p_Var32 - (long)p_Var22));
            _Var11 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)((ulong)p_Var26 & 0x3fffffffffffffff),p_Var22);
            if ((long)p_Var29 - (long)p_Var32 <= _Var11) {
              _Var11 = (long)p_Var29 - (long)p_Var32;
            }
            uVar20 = 0;
            if (p_Var30 != (__DataStorage *)0x0) {
              uVar20 = (int)_Var11 + (int)p_Var30;
            }
            UVar9.unknown = (undefined *)0x0;
            if (p_Var30 != (__DataStorage *)0x0) {
              UVar9.unknown = p_Var30;
            }
          }
          uVar10 = *(ulong *)(unaff_x22 + 0x90);
          _swift_task_isCurrentExecutor(uVar10,0);
          if ((uVar10 & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("MCP/StdioTransport.swift",0x18,1,0xd1,*(undefined8 *)(unaff_x22 + 0x90),0);
          }
          System::FileDescriptor::__write(UVar9,SUB41(uVar20,0),(FileDescriptor)0x1);
          puVar14 = (undefined4 *)(unaff_x22 + 0x108);
          goto joined_r0x000100520d9c;
        }
        lVar23 = *(long *)(p_Var12 + 0x10);
        lVar4 = *(long *)(p_Var12 + 0x18);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)p_Var26 & 0x3fffffffffffffff),
                   (__DataStorage *)UVar9.unknown);
        p_Var22 = (__DataStorage *)0x0;
        if ((__DataStorage *)UVar9.unknown != (__DataStorage *)0x0) {
          p_Var22 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)p_Var26 & 0x3fffffffffffffff),
                               (__DataStorage *)UVar9.unknown);
          if (SBORROW8(lVar23,(long)p_Var22)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005211e4);
            (*UNRECOVERED_JUMPTABLE)();
          }
          UVar9.unknown = UVar9.unknown + (lVar23 - (long)p_Var22);
        }
        lVar7 = lVar4 - lVar23;
        if (SBORROW8(lVar4,lVar23)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005211e0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar23 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)((ulong)p_Var26 & 0x3fffffffffffffff),p_Var22);
        if (lVar7 <= lVar23) {
          lVar23 = lVar7;
        }
        uVar20 = 0;
        if (UVar9.unknown != (undefined *)0x0) {
          uVar20 = (int)lVar23 + (int)UVar9.unknown;
        }
        uVar10 = *(ulong *)(unaff_x22 + 0x90);
        _swift_task_isCurrentExecutor(uVar10,0);
        if ((uVar10 & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("MCP/StdioTransport.swift",0x18,1,0xd1,*(undefined8 *)(unaff_x22 + 0x90),0);
        }
        System::FileDescriptor::__write(UVar9,SUB41(uVar20,0),(FileDescriptor)0x1);
        if ((uVar20 & 0xff) == 1) {
          *puVar13 = (int)UVar9.unknown;
          bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
          puVar14 = (undefined4 *)CONCAT71(extraout_var_00,bVar8);
          if ((bVar8 & 1) != 0) {
            FUN_100521998();
            _swift_willThrowTypedImpl
                      (puVar13,PTR___type_metadata_for_System_Errno_100eae9c8,puVar14);
            puVar14 = puVar13;
          }
          FUN_100521998();
          puVar15 = (undefined8 *)PTR___type_metadata_for_System_Errno_100eae9c8;
          _swift_allocError(PTR___type_metadata_for_System_Errno_100eae9c8,puVar14,0,0);
          *puVar14 = (int)UVar9.unknown;
          goto LAB_10052104c;
        }
      }
      else {
        if (uVar27 != 0) {
          p_Var22 = *(__DataStorage **)(p_Var12 + 0x10);
          p_Var30 = *(__DataStorage **)(p_Var12 + 0x18);
          goto LAB_100520c0c;
        }
        if (((ulong)p_Var26 & 0xff000000000000) == 0) goto LAB_100520f1c;
        uVar10 = *(ulong *)(unaff_x22 + 0x90);
        *(char *)(unaff_x22 + 0x49) = (char)p_Var12;
        *(char *)(unaff_x22 + 0x4a) = (char)((ulong)p_Var12 >> 8);
        *(char *)(unaff_x22 + 0x4b) = (char)((ulong)p_Var12 >> 0x10);
        *(char *)(unaff_x22 + 0x4c) = (char)((ulong)p_Var12 >> 0x18);
        *(char *)(unaff_x22 + 0x4d) = (char)((ulong)p_Var12 >> 0x20);
        *(char *)(unaff_x22 + 0x4e) = (char)((ulong)p_Var12 >> 0x28);
        *(char *)(unaff_x22 + 0x4f) = (char)((ulong)p_Var12 >> 0x30);
        *(char *)(unaff_x22 + 0x50) = (char)((ulong)p_Var12 >> 0x38);
        *(char *)(unaff_x22 + 0x51) = (char)p_Var26;
        *(char *)(unaff_x22 + 0x52) = (char)((ulong)p_Var26 >> 8);
        *(char *)(unaff_x22 + 0x53) = (char)((ulong)p_Var26 >> 0x10);
        *(char *)(unaff_x22 + 0x54) = (char)((ulong)p_Var26 >> 0x18);
        *(char *)(unaff_x22 + 0x55) = (char)((ulong)p_Var26 >> 0x20);
        *(char *)(unaff_x22 + 0x56) = (char)((ulong)p_Var26 >> 0x28);
        _swift_task_isCurrentExecutor(uVar10,0);
        if ((uVar10 & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("MCP/StdioTransport.swift",0x18,1,0xd1,*(undefined8 *)(unaff_x22 + 0x90),0);
        }
        uVar20 = (uint)(UVar1.unknown + (long)p_Var31);
        UVar9.unknown = UVar1.unknown;
        System::FileDescriptor::__write
                  (UVar1,SUB81(UVar1.unknown + (long)p_Var31,0),(FileDescriptor)0x1);
        puVar14 = (undefined4 *)(unaff_x22 + 0x10c);
joined_r0x000100520d9c:
        if ((uVar20 & 0xff) == 1) {
          *puVar14 = (int)UVar9.unknown;
          bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
          puVar13 = (undefined4 *)CONCAT71(extraout_var,bVar8);
          if ((bVar8 & 1) != 0) {
            FUN_100521998();
            _swift_willThrowTypedImpl
                      (puVar14,PTR___type_metadata_for_System_Errno_100eae9c8,puVar13);
            puVar13 = puVar14;
          }
          FUN_100521998();
          puVar15 = (undefined8 *)PTR___type_metadata_for_System_Errno_100eae9c8;
          _swift_allocError(PTR___type_metadata_for_System_Errno_100eae9c8,puVar13,0,0);
          *puVar13 = (int)UVar9.unknown;
LAB_10052104c:
          *(undefined8 **)(unaff_x22 + 0xb8) = puVar15;
          *(undefined8 **)(unaff_x22 + 0x78) = puVar15;
          _swift_errorRetain(puVar15);
          _swift_errorRetain(puVar15);
          puVar16 = &DAT_100fcb578;
          FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
          piVar17 = piVar2;
          _swift_dynamicCast(piVar2,unaff_x22 + 0x78,puVar16,
                             PTR___type_metadata_for_System_Errno_100eae9c8,6);
          puVar19 = puVar15;
          if (((ulong)piVar17 & 1) == 0) {
            _swift_errorRelease();
          }
          else {
            iVar6 = *piVar2;
            _swift_errorRelease();
            if (iVar6 == 0x23) {
              CVar18 = Swift::ContinuousClock::typeMetadataAccessor();
              *(undefined **)(unaff_x22 + 0xc0) = CVar18.unknown;
              lVar23 = *(long *)(CVar18.unknown + -8);
              *(long *)(unaff_x22 + 200) = lVar23;
              uVar28 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
              _swift_task_alloc();
              *(ulong *)(unaff_x22 + 0xd0) = uVar28;
              (extension_Swift)::Swift::Clock::_get_continuous();
              *(undefined8 *)(unaff_x22 + 0x70) = 0;
              *(undefined8 *)(unaff_x22 + 0x68) = 10000000000000000;
              *(undefined8 *)(unaff_x22 + 0x38) = 0;
              *(undefined8 *)(unaff_x22 + 0x40) = 0;
              *(undefined1 *)(unaff_x22 + 0x48) = 1;
              if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar21) {
                _swift_task_switch(FUN_100520824,0,0);
                return;
              }
              goto LAB_100521200;
            }
          }
          uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
          uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
          FUN_1004db3ac();
          _swift_allocError(&DAT_100eda9c8,puVar19,0,0);
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = puVar15;
          *(undefined1 *)(puVar19 + 3) = 7;
          _swift_willThrow();
          FUN_10003bf2c(p_Var12,p_Var26);
          FUN_10003bf2c(uVar3,uVar5);
          UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
          lVar23 = *(long *)PTR____stack_chk_guard_100ea82f0;
          goto joined_r0x000100520f50;
        }
      }
    } while ((long)UVar9.unknown < 1);
    if (uVar27 < 2) {
      p_Var22 = p_Var32;
      p_Var30 = p_Var29;
      if (uVar27 == 0) {
        p_Var22 = (__DataStorage *)0x0;
        p_Var30 = p_Var31;
        p_Var24 = (__DataStorage *)0x0;
        p_Var25 = p_Var31;
      }
      else {
LAB_100520dd8:
        if ((long)p_Var30 < (long)p_Var22) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005211ec);
          (*UNRECOVERED_JUMPTABLE)();
        }
        p_Var24 = p_Var32;
        p_Var25 = p_Var29;
        if (uVar28 == 2) {
          p_Var24 = *(__DataStorage **)(p_Var12 + 0x10);
          p_Var25 = *(__DataStorage **)(p_Var12 + 0x18);
        }
      }
    }
    else {
      if (uVar27 == 2) {
        p_Var22 = *(__DataStorage **)(p_Var12 + 0x10);
        p_Var30 = *(__DataStorage **)(p_Var12 + 0x18);
        goto LAB_100520dd8;
      }
      p_Var30 = (__DataStorage *)0x0;
      p_Var22 = (__DataStorage *)0x0;
      p_Var24 = (__DataStorage *)0x0;
      p_Var25 = (__DataStorage *)0x0;
    }
    if (((long)p_Var25 < (long)p_Var30) || ((long)p_Var30 < (long)p_Var24)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005211f0);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (SBORROW8((long)p_Var30,(long)p_Var22)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005211f4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (p_Var30 + -(long)p_Var22 < UVar9.unknown) {
      if (uVar27 < 2) {
        p_Var32 = p_Var29;
        p_Var30 = p_Var29;
        if (uVar27 == 0) {
          p_Var32 = p_Var31;
          p_Var30 = p_Var31;
        }
      }
      else if (uVar27 == 2) {
        p_Var32 = *(__DataStorage **)(p_Var12 + 0x18);
        p_Var30 = p_Var32;
      }
      else {
        p_Var30 = (__DataStorage *)0x0;
        p_Var32 = (__DataStorage *)0x0;
      }
    }
    else {
      p_Var30 = p_Var22 + (long)UVar9.unknown;
      if (SCARRY8((long)p_Var22,(long)UVar9.unknown)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005211fc);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (uVar27 < 2) {
        p_Var22 = p_Var29;
        if (uVar27 == 0) {
          p_Var32 = (__DataStorage *)0x0;
          p_Var22 = p_Var31;
        }
      }
      else if (uVar27 == 2) {
        p_Var32 = *(__DataStorage **)(p_Var12 + 0x10);
        p_Var22 = *(__DataStorage **)(p_Var12 + 0x18);
      }
      else {
        p_Var22 = (__DataStorage *)0x0;
        p_Var32 = (__DataStorage *)0x0;
      }
      if (((long)p_Var22 < (long)p_Var30) || ((long)p_Var30 < (long)p_Var32)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100521200);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (uVar27 < 2) {
        p_Var32 = p_Var31;
        if (uVar27 != 0) {
          p_Var32 = p_Var29;
        }
      }
      else if (uVar27 == 2) {
        p_Var32 = *(__DataStorage **)(p_Var12 + 0x18);
      }
      else {
        p_Var32 = (__DataStorage *)0x0;
      }
      if ((long)p_Var32 < (long)p_Var30) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005211f8);
        (*UNRECOVERED_JUMPTABLE)();
      }
    }
    __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
              (p_Var30,p_Var32,p_Var12,p_Var26);
    FUN_10003bf2c(p_Var12,p_Var26);
    UVar9.unknown = p_Var12;
    p_Var26 = p_Var32;
    p_Var12 = p_Var30;
  } while( true );
}



/* Address: 0x100521204 | FUN_100521204 */

void FUN_100521204(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe0));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100521270,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100521270 | FUN_100521270 */

void FUN_100521270(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar1 = *(long *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_errorRelease(uVar2);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  FUN_10003bf2c(uVar3,uVar6);
  _swift_task_dealloc(uVar4);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000100521318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100521320 | FUN_100521320 */

void FUN_100521320(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC3MCP14StdioTransport::messageStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
                    /* WARNING: Could not recover jumptable at 0x000100521370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,puVar2);
  return;
}



/* Address: 0x100521374 | FUN_100521374 */

void FUN_100521374(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  lVar1 = _TtC3MCP14StdioTransport::messageStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC3MCP14StdioTransport::messageContinuation;
  puVar2 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x100521400 | FUN_100521400 */

void FUN_100521400(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  lVar1 = _TtC3MCP14StdioTransport::messageStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC3MCP14StdioTransport::messageContinuation;
  puVar2 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x10052148c | FUN_10052148c */

void FUN_10052148c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_10051cb20();
  return;
}



/* Address: 0x1005214d0 | FUN_1005214d0 */

void FUN_1005214d0(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_10051fd48();
  return;
}



/* Address: 0x100521514 | FUN_100521514 */

void FUN_100521514(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_10051ff1c(param_1,param_2);
  return;
}



/* Address: 0x100521570 | FUN_100521570 */

void FUN_100521570(long param_1)

{
  FUN_1004a4550(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100521584 | FUN_100521584 */

void FUN_100521584(undefined4 param_1,undefined4 param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  long local_80;
  undefined *local_78;
  undefined **ppuStack_70;
  
  puVar2 = &DAT_100fcd148;
  FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  local_a0 = *(long *)(puVar3 + -8);
  puStack_98 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = ((long)&local_a0 - extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar6 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar6 - extraout_x12;
  _swift_defaultActor_initialize();
  *(undefined1 *)(unaff_x20 + 0x80) = 0;
  *(undefined4 *)(unaff_x20 + 0x70) = param_1;
  *(undefined4 *)(unaff_x20 + 0x74) = param_2;
  lVar4 = param_3;
  if (param_3 == 0) {
    local_78 = &DAT_100ee6990;
    ppuStack_70 = &PTR_PTR_100ee68f0;
    lVar4 = 0;
    FUN_1005ce220();
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x10) = 0xd000000000000013;
    *(undefined8 *)(lVar4 + 0x18) = 0x8000000100dad0d0;
    FUN_100076508(auStack_90,lVar4 + 0x20);
  }
  *(long *)(unaff_x20 + 0x78) = lVar4;
  puVar3 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar9 = *(long *)(puVar3 + -8);
  (**(code **)(lVar9 + 0x38))(lVar7,1,1,puVar3);
  local_80 = lVar7;
  (**(code **)(lVar5 + 0x68))
            ((long)&local_a0 - extraout_x8,
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
             ,puVar2);
  _swift_retain(param_3);
  Swift::AsyncThrowingStream::_init
            ((BufferingPolicy)(__int8)PTR___type_metadata_for_Foundation_Data_100ea7300);
  (**(code **)(local_a0 + 0x20))
            (unaff_x20 + _TtC3MCP14StdioTransport::messageStream,lVar8,puStack_98);
  FUN_10050c9f0(lVar7,lVar6);
  lVar4 = lVar6;
  (**(code **)(lVar9 + 0x30))(lVar6,1,puVar3);
  if ((int)lVar4 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100521820);
    (*pcVar1)();
  }
  (**(code **)(lVar9 + 0x20))
            (unaff_x20 + _TtC3MCP14StdioTransport::messageContinuation,lVar6,puVar3);
  FUN_1000fb4c4(lVar7,&DAT_100fcd158,&DAT_100c53740);
  return;
}



/* Address: 0x100521820 | FUN_100521820 */

void FUN_100521820(__int32 param_1)

{
  uint uVar1;
  __int32 _Var2;
  __int32 *p_Var3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 extraout_var;
  
  uVar1 = Darwin::fcntl(param_1,3);
  if (((int)uVar1 < 0) || (_Var2 = Darwin::fcntl(param_1,4,uVar1 | 4), _Var2 < 0)) {
    _Var2 = Darwin::get_errno();
    p_Var3 = (__int32 *)CONCAT44(extraout_var,_Var2);
    FUN_100521998();
    puVar4 = (undefined8 *)PTR___type_metadata_for_System_Errno_100eae9c8;
    _swift_allocError(PTR___type_metadata_for_System_Errno_100eae9c8,p_Var3,0,0);
    *p_Var3 = _Var2;
    puVar5 = puVar4;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar5,0,0);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = puVar4;
    *(undefined1 *)(puVar5 + 3) = 7;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1005218c8 | FUN_1005218c8 */

void FUN_1005218c8(undefined8 param_1)

{
  if (DAT_100fce388 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cb368c);
  return;
}



/* Address: 0x100521900 | FUN_100521900 */

void FUN_100521900(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10052192c | FUN_10052192c */

void FUN_10052192c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10051cdec(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100521998 | FUN_100521998 */

void FUN_100521998(void)

{
  undefined *puVar1;
  
  if (DAT_100fce350 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_System__System__Errno_>Swift__Error_100eae9d0;
  _swift_getWitnessTable
            (PTR_System__System__Errno_>Swift__Error_100eae9d0,
             PTR___type_metadata_for_System_Errno_100eae9c8);
  DAT_100fce350 = puVar1;
  return;
}



/* Address: 0x1005219d8 | FUN_1005219d8 */

void FUN_1005219d8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fce340;
  FUN_100003a00(&DAT_100fce340,FUN_1005218c8,&TargetProtocolConformanceDescriptor_100c54840);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x100521a14 | FUN_100521a14 */

void FUN_100521a14(void)

{
  FUN_1005218c8(0);
  return;
}



/* Address: 0x100521a1c | FUN_100521a1c */

void FUN_100521a1c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puStack_50 = PTR___value_witness_table_for_Builtin_Int32_100eabd40 + 0x40;
  local_58 = &DAT_100c548e0;
  puStack_40 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_38 = &DAT_100c548f8;
  puVar2 = &DAT_100fcd218;
  lVar1 = 0x13f;
  local_48 = puStack_50;
  FUN_1004f9364(0x13f,&DAT_100fcd218,PTR_typeMetadataAccessor_100eaeea0);
  if (puVar2 < (undefined8 *)0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puVar3 = &DAT_100fcd220;
    lVar1 = 0x13f;
    FUN_1004f9364(0x13f,&DAT_100fcd220,PTR_typeMetadataAccessor_100eaee68);
    if (puVar3 < (undefined *)0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_updateClassMetadata2(param_1,0x100,7,&local_58,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x100521af4 | FUN_100521af4 */

double FUN_100521af4(double param_1)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 <= 1.0 && 0.0 <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}



/* Address: 0x100521b18 | FUN_100521b18 */

bool FUN_100521b18(double param_1,double param_2)

{
  return param_1 == param_2;
}



/* Address: 0x100521b24 | FUN_100521b24 */

void FUN_100521b24(double param_1,undefined8 param_2,Hasher param_3)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  Swift::Hasher::_combine((__uint64)dVar1,param_3);
  return;
}



/* Address: 0x100521b54 | FUN_100521b54 */

void FUN_100521b54(undefined *param_1,undefined8 param_2,Hasher param_3)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)0x0;
  if ((double)param_1 != 0.0) {
    HVar1.unknown = param_1;
  }
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_3);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100521bac | FUN_100521bac */

void FUN_100521bac(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined *puVar2;
  
  puVar2 = (undefined *)*unaff_x20;
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)0x0;
  if ((double)puVar2 != 0.0) {
    HVar1.unknown = puVar2;
  }
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100521c04 | FUN_100521c04 */

void FUN_100521c04(undefined8 param_1,Hasher param_2)

{
  double *unaff_x20;
  double dVar1;
  
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  Swift::Hasher::_combine((__uint64)dVar1,param_2);
  return;
}



/* Address: 0x100521c3c | FUN_100521c3c */

void FUN_100521c3c(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined *puVar2;
  
  puVar2 = (undefined *)*unaff_x20;
  Swift::Hasher::init(param_1);
  HVar1.unknown = (undefined *)0x0;
  if ((double)puVar2 != 0.0) {
    HVar1.unknown = puVar2;
  }
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100521c90 | FUN_100521c90 */

bool FUN_100521c90(double *param_1,double *param_2)

{
  return *param_1 == *param_2;
}



/* Address: 0x100521ca4 | FUN_100521ca4 */

bool FUN_100521ca4(double param_1,double param_2)

{
  return param_1 < param_2;
}



/* Address: 0x100521cb0 | FUN_100521cb0 */

bool FUN_100521cb0(double *param_1,double *param_2)

{
  return *param_1 < *param_2;
}



/* Address: 0x100521cc4 | FUN_100521cc4 */

bool FUN_100521cc4(double *param_1,double *param_2)

{
  return *param_1 <= *param_2;
}



/* Address: 0x100521cd8 | FUN_100521cd8 */

bool FUN_100521cd8(double *param_1,double *param_2)

{
  return *param_2 <= *param_1;
}



/* Address: 0x100521cec | FUN_100521cec */

bool FUN_100521cec(double *param_1,double *param_2)

{
  return *param_2 < *param_1;
}



/* Address: 0x100521d00 | FUN_100521d00 */

undefined1  [16] FUN_100521d00(double param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0xe000000000000000;
  double::_write((undefined *)&local_20,param_1);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}



/* Address: 0x100521d3c | FUN_100521d3c */

undefined1  [16] FUN_100521d3c(void)

{
  undefined1 auVar1 [16];
  double *unaff_x20;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0xe000000000000000;
  double::_write((undefined *)&local_20,*unaff_x20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}



/* Address: 0x100521d7c | FUN_100521d7c */

void FUN_100521d7c(void)

{
  FUN_100521f40();
  return;
}



/* Address: 0x100521d90 | FUN_100521d90 */

void FUN_100521d90(double param_1,long param_2)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::Encoder::_singleValueContainer();
  FUN_10007d048(auStack_68,local_50);
  Swift::SingleValueEncodingContainer::_encode(param_1);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x100521e20 | FUN_100521e20 */

void FUN_100521e20(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100521f40();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100521e48 | FUN_100521e48 */

void FUN_100521e48(long param_1)

{
  double *unaff_x20;
  double dVar1;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  dVar1 = *unaff_x20;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  FUN_10007d048(auStack_68,local_50);
  Swift::SingleValueEncodingContainer::_encode(dVar1);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x100521ed8 | FUN_100521ed8 */

void FUN_100521ed8(double param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  bVar3 = true;
  if (0.0 <= param_1) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar2 = param_1 == 1.0;
      bVar3 = 1.0 <= param_1;
    }
  }
  if (!bVar3 || bVar2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100521ef0);
  (*pcVar1)();
}



/* Address: 0x100521ef0 | FUN_100521ef0 */

void FUN_100521ef0(double *param_1,double *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  
  dVar4 = *param_2;
  bVar2 = false;
  bVar3 = true;
  if (0.0 <= dVar4) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar4)) {
      bVar2 = dVar4 == 1.0;
      bVar3 = 1.0 <= dVar4;
    }
  }
  if (!bVar3 || bVar2) {
    *param_1 = dVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100521f10);
  (*pcVar1)();
}



/* Address: 0x100521f10 | FUN_100521f10 */

double FUN_100521f10(ulong param_1)

{
  code *pcVar1;
  
  if (param_1 < 2) {
    return (double)param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100521f24);
  (*pcVar1)();
}



/* Address: 0x100521f24 | FUN_100521f24 */

void FUN_100521f24(double *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (*param_2 < 2) {
    *param_1 = (double)*param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100521f40);
  (*pcVar1)();
}


