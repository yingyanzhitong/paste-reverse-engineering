/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000010b0 | entry */

void entry(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = 0x800;
  uVar4 = 0;
  _swift_task_create(0x800,0,PTR___type_metadata_for____100008330 + 8,&DAT_100006050,0);
  uVar3 = uVar2;
  _swift_task_getMainExecutor();
  _swift_job_run(uVar2,uVar3,uVar4);
  _swift_task_asyncMainDrainQueue();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100001108);
  (*pcVar1)();
}



/* Address: 0x100001108 | FUN_100001108 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100001108(void)

{
  char *pcVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  _StringGuts _Var6;
  URL UVar7;
  long *plVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  Dictionary<undefined,undefined> DVar11;
  undefined *puVar12;
  long lVar13;
  _StringGuts _Var14;
  undefined *puVar15;
  undefined8 *puVar16;
  UnownedSerialExecutor UVar17;
  ulong uVar18;
  undefined8 uVar19;
  int *piVar20;
  Dictionary<undefined,undefined> DVar21;
  Dictionary<undefined,undefined> DVar22;
  long *unaff_x22;
  long lVar23;
  undefined *local_68;
  
  puVar9 = &DAT_10000c210;
  FUN_1000016c0(&DAT_10000c210,&DAT_100006060);
  _Var6.unknown =
       (undefined *)(*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  UVar7 = Foundation::URL::typeMetadataAccessor();
  unaff_x22[2] = (long)UVar7.unknown;
  lVar23 = *(long *)(UVar7.unknown + -8);
  unaff_x22[3] = lVar23;
  uVar18 = *(long *)(lVar23 + 0x40) + 0xf;
  plVar8 = (long *)(uVar18 & 0xfffffffffffffff0);
  _swift_task_alloc();
  puVar9 = (undefined *)(uVar18 & 0xfffffffffffffff0);
  _swift_task_alloc();
  unaff_x22[4] = (long)puVar9;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  unaff_x22[5] = (long)pMVar10;
  FUN_100005f80(&_OBJC_CLASS___NSProcessInfo);
  FUN_100005ee0();
  DVar11 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  puVar12 = &_OBJC_CLASS___NSFileHandle;
  DAT_10000c3d8 = DVar11;
  FUN_100005f00();
  DAT_10000c3e0 = puVar12;
  if (*(long *)(DVar11.unknown + 0x10) == 0) {
LAB_1000014fc:
    pcVar1 = "MCP_TOKEN environment variable is required";
    uVar19 = 0xd00000000000002a;
LAB_10000153c:
    FUN_100001710(uVar19,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,0x4e);
  }
  else {
    _swift_bridgeObjectRetain(DVar11.unknown);
    lVar13 = 0x454b4f545f50434d;
    uVar18 = 0;
    FUN_100001cd8();
    DVar21 = DVar11;
    if ((uVar18 & 1) == 0) {
LAB_1000014f4:
      _swift_bridgeObjectRelease(DVar21.unknown);
      goto LAB_1000014fc;
    }
    puVar2 = (ulong *)(*(long *)(DVar11.unknown + 0x38) + lVar13 * 0x10);
    uVar4 = *puVar2;
    DVar21.unknown = (undefined *)puVar2[1];
    _swift_bridgeObjectRetain(DVar21.unknown);
    _swift_bridgeObjectRelease(DVar11.unknown);
    uVar18 = uVar4 & 0xffffffffffff;
    if (((ulong)DVar21.unknown & 0x2000000000000000) != 0) {
      uVar18 = (ulong)DVar21.unknown >> 0x38 & 0xf;
    }
    if (uVar18 == 0) goto LAB_1000014f4;
    if (*(long *)(DVar11.unknown + 0x10) == 0) {
LAB_100001524:
      pcVar1 = "MCP_URL environment variable is required";
      uVar19 = 0xd000000000000028;
      goto LAB_10000153c;
    }
    local_68 = &_OBJC_CLASS___NSFileHandle;
    _swift_bridgeObjectRetain(DVar11.unknown);
    lVar13 = 0x4c52555f50434d;
    uVar18 = 0;
    FUN_100001cd8();
    DVar22 = DVar11;
    if ((uVar18 & 1) == 0) {
LAB_10000151c:
      _swift_bridgeObjectRelease(DVar22.unknown);
      goto LAB_100001524;
    }
    puVar2 = (ulong *)(*(long *)(DVar11.unknown + 0x38) + lVar13 * 0x10);
    uVar18 = *puVar2;
    DVar22.unknown = (undefined *)puVar2[1];
    _swift_bridgeObjectRetain(DVar22.unknown);
    _swift_bridgeObjectRelease(DVar11.unknown);
    uVar18 = uVar18 & 0xffffffffffff;
    if (((ulong)DVar22.unknown & 0x2000000000000000) != 0) {
      uVar18 = (ulong)DVar22.unknown >> 0x38 & 0xf;
    }
    if (uVar18 == 0) goto LAB_10000151c;
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(DVar22.unknown);
    puVar12 = _Var6.unknown;
    (**(code **)(lVar23 + 0x30))(_Var6.unknown,1,UVar7.unknown);
    if ((int)puVar12 != 1) {
      _Var14.unknown = puVar9;
      (**(code **)(lVar23 + 0x20))(puVar9,_Var6.unknown,UVar7.unknown);
      Foundation::URL::_get_scheme((URL)_Var14.unknown);
      if (_Var6.unknown != (undefined *)0x0) {
        if ((((_Var14.unknown == (undefined *)0x70747468) &&
             (_Var6.unknown == (undefined *)0xe400000000000000)) ||
            (bVar5 = Swift::_stringCompareWithSmolCheck(_Var14,_Var6,(_StringComparisonResult)0x68),
            bVar5)) ||
           ((_Var14.unknown == (undefined *)0x7370747468 &&
            (_Var6.unknown == (undefined *)0xe500000000000000)))) {
          _swift_bridgeObjectRelease();
LAB_1000013bc:
          FUN_100001d3c();
          unaff_x22[6] = (long)_Var6.unknown;
          FUN_10000452c(0);
          (**(code **)(lVar23 + 0x10))(plVar8,puVar9,UVar7.unknown);
          puVar15 = &_OBJC_CLASS___NSURLSession;
          FUN_100005fa0(&_OBJC_CLASS___NSURLSession);
          FUN_100002958();
          puVar12 = local_68;
          FUN_100005f20(&_OBJC_CLASS___NSFileHandle);
          FUN_100005f40(&_OBJC_CLASS___NSFileHandle);
          FUN_1000029b0(plVar8,uVar4,DVar21.unknown,puVar15,puVar9,puVar12,local_68);
          unaff_x22[7] = (long)plVar8;
          piVar20 = *(int **)(*plVar8 + 0xa8);
          iVar3 = *piVar20;
          puVar16 = (undefined8 *)(ulong)(uint)piVar20[1];
          _swift_task_alloc();
          unaff_x22[8] = (long)puVar16;
          *puVar16 = unaff_x22;
          puVar16[1] = FUN_100001580;
                    /* WARNING: Could not recover jumptable at 0x0001000014b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar3 + (long)piVar20))();
          return;
        }
        bVar5 = Swift::_stringCompareWithSmolCheck(_Var14,_Var6,(_StringComparisonResult)0x68);
        _swift_bridgeObjectRelease();
        if (bVar5) goto LAB_1000013bc;
      }
      (**(code **)(lVar23 + 8))(puVar9,UVar7.unknown);
      goto LAB_100001560;
    }
  }
  FUN_100001f78(_Var6.unknown,&DAT_10000c210,&DAT_100006060);
LAB_100001560:
  FUN_100001710(0xd000000000000024,0x80000001000062c0,0x4e);
  lVar13 = *unaff_x22;
  uVar19 = *(undefined8 *)(lVar13 + 0x38);
  lVar23 = *(long *)(lVar13 + 0x28);
  _swift_task_dealloc(*(undefined8 *)(lVar13 + 0x40));
  _swift_release(uVar19);
  if (lVar23 == 0) {
    UVar17.unknown = (undefined *)0x0;
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(lVar13 + 0x30);
    _swift_getObjectType(*(undefined8 *)(lVar13 + 0x28));
    UVar17 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100001604,UVar17.unknown,uVar19);
  return;
}



/* Address: 0x100001580 | FUN_100001580 */

void FUN_100001580(void)

{
  UnownedSerialExecutor UVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar4 + 0x38);
  lVar3 = *(long *)(lVar4 + 0x28);
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x40));
  _swift_release(uVar2);
  if (lVar3 == 0) {
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
    _swift_getObjectType(*(undefined8 *)(lVar4 + 0x28));
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100001604,UVar1.unknown,uVar2);
  return;
}



/* Address: 0x100001604 | FUN_100001604 */

void FUN_100001604(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  _exit(0);
}



/* Address: 0x10000163c | FUN_10000163c */

void FUN_10000163c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100001680;
  FUN_100001108();
  return;
}



/* Address: 0x100001680 | FUN_100001680 */

void FUN_100001680(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001000016bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1000016c0 | FUN_1000016c0 */

void FUN_1000016c0(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext2(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Address: 0x100001710 | FUN_100001710 */

/* WARNING: Removing unreachable block (ram,0x0001000017d4) */

void FUN_100001710(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_48 = 0xe000000000000000;
  pcVar3 = param_3;
  Swift::_StringGuts::grow(0x14,param_2);
  _swift_bridgeObjectRelease(local_48);
  local_50 = 0xd000000000000011;
  local_48 = 0x80000001000062f0;
  SVar4.bridgeObject = param_2.unknown;
  SVar4.str = param_1;
  SVar6.bridgeObject = param_4;
  SVar6.str = pcVar3;
  Swift::String::append(SVar4,SVar6);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0xa;
  SVar7.bridgeObject = param_4;
  SVar7.str = pcVar3;
  Swift::String::append(SVar5,SVar7);
  uVar2 = local_48;
  uVar1 = local_50;
  _swift_bridgeObjectRetain(local_48);
  FUN_1000017ec();
  local_60 = uVar1;
  uStack_58 = uVar2;
  FUN_100001d80();
  (extension_Foundation)::__C::NSFileHandle::_write
            (&local_60,PTR___type_metadata_for_Foundation_Data_100008118,uVar1);
  FUN_100001dc0(local_60,uStack_58);
                    /* WARNING: Subroutine does not return */
  _exit((int)param_3);
}



/* Address: 0x1000017ec | FUN_1000017ec */

/* WARNING: Removing unreachable block (ram,0x000100001ccc) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1000017ec(UTF8View param_1,undefined *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  __uint8 _Var3;
  Range<__int64> RVar4;
  undefined **ppuVar5;
  Index position;
  Index after;
  UnsafeBufferPointer<__int8> UVar6;
  undefined *puVar7;
  UnsafeBufferPointer<__int8> UVar8;
  undefined *puVar9;
  undefined6 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined6 local_f0;
  undefined2 uStack_ea;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined6 local_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined **local_90;
  undefined8 local_88;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1000081f8;
  local_f0 = SUB86(param_1.unknown,0);
  uStack_ea = (undefined2)((ulong)param_1.unknown >> 0x30);
  uStack_e8 = SUB86(param_2,0);
  uStack_e2 = (undefined2)((ulong)param_2 >> 0x30);
  local_e0 = param_1.unknown;
  puStack_d8 = param_2;
  _swift_bridgeObjectRetain(param_2);
  RVar4.unknown = &DAT_10000c228;
  FUN_1000016c0(&DAT_10000c228,&DAT_100006068);
  ppuVar5 = &local_d0;
  _swift_dynamicCast(ppuVar5,&local_f0,PTR___type_metadata_for_Swift_String_UTF8View_100008278,
                     RVar4.unknown,6);
  if ((int)ppuVar5 != 0) {
    FUN_100002850(&local_d0,&local_a0);
    FUN_100002868(&local_a0,local_88);
    Foundation::ContiguousBytes::_withUnsafeBytes();
    FUN_10000288c(&local_a0);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
    goto LAB_100001c28;
  }
  local_b0 = 0;
  puStack_c8 = (undefined *)0x0;
  local_d0 = (undefined *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  after.unknown = &DAT_100006070;
  FUN_100001f78(&local_d0,&DAT_10000c230);
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        puVar9 = param_2;
        UVar8 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
      }
      else {
        UVar8.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        puVar9 = param_1.unknown & 0xffffffffffff;
      }
      puVar15 = (undefined *)0x0;
      if (UVar8.unknown != (undefined *)0x0) {
        puVar15 = puVar9 + UVar8.unknown;
      }
      FUN_1000026e4();
      puVar9 = puVar15;
    }
    else {
      puVar15 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
      puStack_c8 = (undefined *)((ulong)param_2 & 0xffffffffffffff);
      local_d0 = param_1.unknown;
      FUN_100001eac(&local_a0,&local_d0);
      UVar8.unknown = (undefined *)CONCAT26(uStack_9a,local_a0);
      puVar9 = (undefined *)CONCAT26(uStack_92,uStack_98);
    }
    if ((ulong)puVar9 >> 0x3c < 0xf) goto LAB_100001c28;
    puVar7 = param_1.unknown & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar7 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    }
  }
  else {
    puVar15 = param_2;
    puVar7 = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    UVar8.unknown = (undefined *)0x0;
    puVar9 = (undefined *)0xf000000000000000;
  }
  FUN_100002748();
  local_90 = &local_e0;
  pcVar2 = FUN_1000027e4;
  puVar10 = &local_a0;
  local_d0 = puVar7;
  puStack_c8 = puVar15;
  FUN_100001fb8();
  uVar12 = (uint)((ulong)puStack_c8 >> 0x20);
  uVar13 = uVar12 >> 0x1e;
  if (uVar12 >> 0x1e < 2) {
    if (uVar13 == 0) {
      puVar15 = (undefined *)((ulong)puStack_c8 >> 0x30 & 0xff);
    }
    else {
      iVar14 = (int)((ulong)local_d0 >> 0x20);
      if (SBORROW4(iVar14,(int)local_d0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100001cc8);
        (*pcVar2)();
      }
      puVar15 = (undefined *)(long)(iVar14 - (int)local_d0);
    }
    if (RVar4.unknown == puVar15) goto LAB_100001a10;
LAB_1000019ec:
    if (uVar13 == 2) {
      uVar11 = *(ulong *)(local_d0 + 0x18);
    }
    else if (uVar13 == 1) {
      uVar11 = (long)local_d0 >> 0x20;
    }
    else {
      uVar11 = (ulong)puStack_c8 >> 0x30 & 0xff;
    }
LAB_100001c04:
    if ((long)uVar11 < (long)RVar4.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100001cc0);
      (*pcVar2)();
    }
    Foundation::Data::_Representation::_replaceSubrange(RVar4,uVar11,(_Representation)0x0,0);
LAB_100001c20:
    _swift_bridgeObjectRelease(puVar10);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
  else {
    if (uVar13 == 2) {
      if (SBORROW8(*(long *)(local_d0 + 0x18),*(long *)(local_d0 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100001cc4);
        (*pcVar2)();
      }
      if (RVar4.unknown != (undefined *)(*(long *)(local_d0 + 0x18) - *(long *)(local_d0 + 0x10)))
      goto LAB_1000019ec;
    }
    else if (RVar4.unknown != (undefined *)0x0) {
      uVar11 = 0;
      goto LAB_100001c04;
    }
LAB_100001a10:
    uVar11 = (ulong)pcVar2 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar11 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_ea = 0;
    if (uVar11 * 4 - ((ulong)after.unknown >> 0xe) != 0) {
      uVar19 = 0;
      uVar12 = (uint)((ulong)pcVar2 >> 0x3b) & 1;
      if (((ulong)puVar10 & 0x1000000000000000) == 0) {
        uVar12 = 1;
      }
      uVar17 = 4L << uVar12;
      do {
        uVar18 = (ulong)after.unknown & 0xc;
        position.unknown = after.unknown;
        if (uVar18 == uVar17) {
          FUN_100002488(after.unknown,pcVar2,puVar10);
        }
        uVar16 = (ulong)position.unknown >> 0x10;
        if (uVar11 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100001c8c);
          (*pcVar2)();
        }
        if (((ulong)puVar10 >> 0x3c & 1) == 0) {
          if (((ulong)puVar10 >> 0x3d & 1) != 0) {
            local_a0 = SUB86(pcVar2,0);
            uStack_9a = (undefined2)((ulong)pcVar2 >> 0x30);
            uStack_98 = (undefined6)((ulong)puVar10 & 0xffffffffffffff);
            uStack_92 = (undefined2)(((ulong)puVar10 & 0xffffffffffffff) >> 0x30);
            _Var3 = *(__uint8 *)((long)&local_a0 + uVar16);
            goto joined_r0x000100001b04;
          }
          UVar6.unknown = (undefined *)(((ulong)puVar10 & 0xfffffffffffffff) + 0x20);
          if (((ulong)pcVar2 >> 0x3c & 1) == 0) {
            UVar6 = Swift::_StringObject::get_sharedUTF8((_StringObject)pcVar2);
          }
          _Var3 = UVar6.unknown[uVar16];
          if (uVar18 != uVar17) goto LAB_100001ac4;
LAB_100001b08:
          FUN_100002488(after.unknown,pcVar2,puVar10);
          if (((ulong)puVar10 >> 0x3c & 1) != 0) goto LAB_100001b20;
LAB_100001ac8:
          after.unknown = (undefined *)(((ulong)after.unknown & 0xffffffffffff0000) + 0x10004);
        }
        else {
          _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)pcVar2);
joined_r0x000100001b04:
          if (uVar18 == uVar17) goto LAB_100001b08;
LAB_100001ac4:
          if (((ulong)puVar10 >> 0x3c & 1) == 0) goto LAB_100001ac8;
LAB_100001b20:
          if (uVar11 <= (ulong)after.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100001c94);
            (*pcVar2)();
          }
          after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)pcVar2);
        }
        *(__uint8 *)((long)&local_f0 + (uVar19 & 0xff)) = _Var3;
        uVar12 = ((uint)uVar19 & 0xff) + 1;
        uVar19 = (ulong)uVar12;
        if ((uVar12 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100001c90);
          (*pcVar2)();
        }
        if ((uVar12 & 0xff) == 0xe) {
          local_a0 = local_f0;
          uStack_9a = uStack_ea;
          uStack_98 = uStack_e8;
          Foundation::Data::_Representation::append
                    ((UnsafeRawBufferPointer)&local_a0,(_Representation)((char)&local_a0 + 0xe));
          uVar19 = 0;
        }
      } while (uVar11 * 4 - ((ulong)after.unknown >> 0xe) != 0);
      if ((uVar19 & 0xff) != 0) {
        local_a0 = local_f0;
        uStack_9a = uStack_ea;
        uStack_98 = uStack_e8;
        Foundation::Data::_Representation::append
                  ((UnsafeRawBufferPointer)&local_a0,
                   (_Representation)((char)&local_a0 + (char)uVar19));
        FUN_10000283c(UVar8.unknown,puVar9);
        goto LAB_100001c20;
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    FUN_10000283c(UVar8.unknown,puVar9);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
LAB_100001c28:
  puStack_c8 = puVar9;
  local_d0 = UVar8.unknown;
  auVar1._8_8_ = puStack_c8;
  auVar1._0_8_ = local_d0;
  FUN_1000027fc(local_d0,puStack_c8);
  _swift_bridgeObjectRelease(param_2);
  FUN_100001dc0(local_d0,puStack_c8);
  if (*(long *)PTR____stack_chk_guard_1000081f8 == local_70) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100001cd8 | FUN_100001cd8 */

void FUN_100001cd8(char *param_1,void *param_2)

{
  Hasher into;
  __int64 _Var1;
  long unaff_x20;
  String SVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  into.unknown = auStack_78;
  SVar2.bridgeObject = param_2;
  SVar2.str = param_1;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  FUN_100001e00(param_1,param_2,_Var1);
  return;
}



/* Address: 0x100001d3c | FUN_100001d3c */

void FUN_100001d3c(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_10000c218 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100008430;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100008430,pMVar1);
  DAT_10000c218 = puVar2;
  return;
}



/* Address: 0x100001d80 | FUN_100001d80 */

void FUN_100001d80(void)

{
  undefined *puVar1;
  
  if (DAT_10000c220 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Foundation__DataProtocol_100008108;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Foundation__DataProtocol_100008108,
             PTR___type_metadata_for_Foundation_Data_100008118);
  DAT_10000c220 = puVar1;
  return;
}



/* Address: 0x100001dc0 | FUN_100001dc0 */

void FUN_100001dc0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
  _swift_release(param_2 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x100001e00 | FUN_100001e00 */

undefined1  [16] FUN_100001e00(undefined *param_1,undefined *param_2,ulong param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar4)) {
        uVar5 = 1;
        goto LAB_100001e94;
      }
      param_3 = param_3 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_100001e94:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = param_3;
  return auVar7;
}



/* Address: 0x100001eac | FUN_100001eac */

void FUN_100001eac(long *param_1,RangeReference *param_2,ulong param_3)

{
  __DataStorage *p_Var1;
  RangeReference *pRVar2;
  ulong uVar3;
  
  if (param_2 != (RangeReference *)0x0) {
    if (param_3 != 0) {
      if (param_3 < 0xf) {
        pRVar2 = param_2 + param_3;
        FUN_100002558();
        uVar3 = (ulong)pRVar2 & 0xffffffffffffff;
      }
      else {
        p_Var1 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var1,*(undefined4 *)(p_Var1 + 0x30),*(undefined2 *)(p_Var1 + 0x34));
        p_Var1 = Foundation::__DataStorage::_init(p_Var1,(__int64)param_2);
        if (param_3 < 0x7fffffff) {
          param_2 = (RangeReference *)(param_3 << 0x20);
          uVar3 = (ulong)p_Var1 | 0x4000000000000000;
        }
        else {
          param_2 = Foundation::Data::RangeReference::typeMetadataAccessor();
          _swift_allocObject(param_2,0x20,7);
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(ulong *)(param_2 + 0x18) = param_3;
          uVar3 = (ulong)p_Var1 | 0x8000000000000000;
        }
      }
      goto LAB_100001ef4;
    }
    param_2 = (RangeReference *)0x0;
  }
  uVar3 = 0xc000000000000000;
LAB_100001ef4:
  *param_1 = (long)param_2;
  param_1[1] = uVar3;
  return;
}



/* Address: 0x100001f78 | FUN_100001f78 */

undefined8 FUN_100001f78(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000016c0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Address: 0x100001fb8 | FUN_100001fb8 */

void FUN_100001fb8(code *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  LargeSlice LVar5;
  __int64 _Var6;
  __DataStorage *p_Var7;
  uint uVar8;
  ulong uVar9;
  long *unaff_x20;
  __DataStorage *p_Var10;
  long unaff_x21;
  __DataStorage *this;
  long lVar11;
  long lVar12;
  long local_98;
  ulong uStack_90;
  char local_78 [16];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1000081f8;
  lVar1 = *unaff_x20;
  uVar9 = unaff_x20[1];
  uVar3 = (uint)(uVar9 >> 0x20);
  uVar8 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    cVar2 = (char)((ulong)lVar1 >> 0x20);
    if (uVar8 == 0) {
      FUN_100001dc0(lVar1,uVar9);
      local_78[1] = (char)((ulong)lVar1 >> 8);
      local_78[2] = (char)((ulong)lVar1 >> 0x10);
      local_78[3] = (char)((ulong)lVar1 >> 0x18);
      local_78[5] = (char)((ulong)lVar1 >> 0x28);
      local_78[6] = (char)((ulong)lVar1 >> 0x30);
      local_78[7] = (char)((ulong)lVar1 >> 0x38);
      local_78[8] = (char)uVar9;
      local_78[9] = (char)(uVar9 >> 8);
      local_78[10] = (char)(uVar9 >> 0x10);
      local_78[0xb] = (char)(uVar9 >> 0x18);
      local_78[0xc] = (char)(uVar9 >> 0x20);
      local_78[0xd] = (char)(uVar9 >> 0x28);
      local_78[0xe] = (char)(uVar9 >> 0x30);
      local_78[0] = (char)lVar1;
      local_78[4] = cVar2;
      (*param_1)(&local_98,local_78,local_78 + (byte)local_78[0xe]);
      if (unaff_x21 == 0) {
        *unaff_x20 = CONCAT17(local_78[7],
                              CONCAT16(local_78[6],
                                       CONCAT15(local_78[5],
                                                CONCAT14(local_78[4],
                                                         CONCAT13(local_78[3],
                                                                  CONCAT12(local_78[2],
                                                                           CONCAT11(local_78[1],
                                                                                    local_78[0])))))
                                      ));
        unaff_x20[1] = (ulong)CONCAT16(local_78[0xe],
                                       CONCAT15(local_78[0xd],
                                                CONCAT14(local_78[0xc],
                                                         CONCAT13(local_78[0xb],
                                                                  CONCAT12(local_78[10],
                                                                           CONCAT11(local_78[9],
                                                                                    local_78[8])))))
                                      );
      }
      else {
        *unaff_x20 = CONCAT17(local_78[7],
                              CONCAT16(local_78[6],
                                       CONCAT15(local_78[5],
                                                CONCAT14(local_78[4],
                                                         CONCAT13(local_78[3],
                                                                  CONCAT12(local_78[2],
                                                                           CONCAT11(local_78[1],
                                                                                    local_78[0])))))
                                      ));
        unaff_x20[1] = (ulong)CONCAT16(local_78[0xe],
                                       CONCAT15(local_78[0xd],
                                                CONCAT14(local_78[0xc],
                                                         CONCAT13(local_78[0xb],
                                                                  CONCAT12(local_78[10],
                                                                           CONCAT11(local_78[9],
                                                                                    local_78[8])))))
                                      );
      }
      goto LAB_1000022f0;
    }
    this = (__DataStorage *)(uVar9 & 0x3fffffffffffffff);
    _swift_retain(this);
    FUN_100001dc0(lVar1,uVar9);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    FUN_100001dc0(0,0xc000000000000000);
    p_Var10 = this;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar11 = (long)(int)lVar1;
    lVar12 = lVar1 >> 0x20;
    p_Var7 = this;
    if (((ulong)p_Var10 & 1) == 0) {
      if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100002348);
        (*pcVar4)();
      }
      p_Var10 = this;
      _swift_retain();
      Foundation::__DataStorage::_get__bytes(this,p_Var10);
      if (p_Var10 == (__DataStorage *)0x0) {
        p_Var10 = (__DataStorage *)0x0;
      }
      else {
        _Var6 = Foundation::__DataStorage::get__offset(this,p_Var10);
        if (SBORROW8(lVar11,_Var6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10000234c);
          (*pcVar4)();
        }
        p_Var10 = p_Var10 + (lVar11 - _Var6);
      }
      p_Var7 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var7,*(undefined4 *)(p_Var7 + 0x30),*(undefined2 *)(p_Var7 + 0x34));
      p_Var7 = Foundation::__DataStorage::_init
                         (p_Var7,(__int64)p_Var10,(bool)(cVar2 - (char)lVar1),1);
      _swift_release_n(this,2);
    }
    if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100002344);
      (*pcVar4)();
    }
    _swift_retain(p_Var7);
    FUN_1000023dc(lVar11,lVar12,param_1,param_2);
    _swift_release(p_Var7);
    uVar9 = (ulong)p_Var7 | 0x4000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = lVar1;
      unaff_x20[1] = uVar9;
      goto LAB_1000022f0;
    }
    *unaff_x20 = lVar1;
  }
  else {
    if (uVar8 != 2) {
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
      (*param_1)(&local_98,local_78,local_78);
      goto LAB_1000022f0;
    }
    _swift_retain(lVar1);
    _swift_retain(uVar9 & 0x3fffffffffffffff);
    FUN_100001dc0(lVar1,uVar9);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    LVar5.unknown = (undefined *)0x0;
    local_98 = lVar1;
    uStack_90 = uVar9 & 0x3fffffffffffffff;
    FUN_100001dc0(0,0xc000000000000000);
    Foundation::Data::LargeSlice::ensureUniqueReference(LVar5);
    uVar9 = uStack_90;
    lVar1 = local_98;
    FUN_1000023dc(*(undefined8 *)(local_98 + 0x10),*(undefined8 *)(local_98 + 0x18),param_1,param_2)
    ;
    uVar9 = uVar9 | 0x8000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = lVar1;
      unaff_x20[1] = uVar9;
      goto LAB_1000022f0;
    }
    *unaff_x20 = lVar1;
  }
  unaff_x20[1] = uVar9;
LAB_1000022f0:
  if (*(long *)PTR____stack_chk_guard_1000081f8 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100002350 | FUN_100002350 */

void FUN_100002350(ulong *param_1,ulong param_2,ulong param_3)

{
  if ((param_2 != 0) && (param_3 != param_2)) {
    if (param_3 - param_2 < 0xf) {
      FUN_100002558();
      param_3 = param_3 & 0xffffffffffffff;
    }
    else if (param_3 - param_2 < 0x7fffffff) {
      FUN_100002680();
      param_3 = param_3 | 0x4000000000000000;
    }
    else {
      FUN_10000260c();
      param_3 = param_3 | 0x8000000000000000;
    }
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0xc000000000000000;
  return;
}



/* Address: 0x10000236c | FUN_10000236c */

void FUN_10000236c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong in_x9;
  
  if (in_x9 < 0xf) {
    FUN_100002558();
    param_3 = param_3 & 0xffffffffffffff;
  }
  else if (in_x9 < 0x7fffffff) {
    FUN_100002680();
    param_3 = param_3 | 0x4000000000000000;
  }
  else {
    FUN_10000260c();
    param_3 = param_3 | 0x8000000000000000;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1000023dc | FUN_1000023dc */

void FUN_1000023dc(__DataStorage *param_1,long param_2,code *param_3)

{
  code *pcVar1;
  __DataStorage *p_Var2;
  __DataStorage *p_Var3;
  long lVar4;
  __DataStorage *unaff_x20;
  undefined1 local_70 [32];
  
  p_Var2 = param_1;
  Foundation::__DataStorage::_get__bytes(unaff_x20,param_1);
  if (p_Var2 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100002488);
    (*pcVar1)();
  }
  p_Var3 = (__DataStorage *)Foundation::__DataStorage::get__offset(unaff_x20,p_Var2);
  if (!SBORROW8((long)param_1,(long)p_Var3)) {
    if (!SBORROW8(param_2,(long)param_1)) {
      lVar4 = Foundation::__DataStorage::get__length(unaff_x20,p_Var3);
      if (param_2 - (long)param_1 <= lVar4) {
        lVar4 = param_2 - (long)param_1;
      }
      (*param_3)(local_70,p_Var2 + ((long)param_1 - (long)p_Var3),
                 p_Var2 + ((long)param_1 - (long)p_Var3) + lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100002484);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100002480);
  (*pcVar1)();
}



/* Address: 0x100002488 | FUN_100002488 */

ulong FUN_100002488(ulong param_1,UTF8View param_2,ulong param_3)

{
  Index IVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 >> 0xe & 3;
  if (((param_3 >> 0x3c & 1) == 0) || (((ulong)param_2.unknown >> 0x3b & 1) != 0)) {
    IVar1 = Swift::String::UTF16View::index((Index)0xf,param_1 >> 0x10,param_2.unknown);
    uVar2 = (ulong)(IVar1.unknown + uVar3 * 0x10000) & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = (ulong)IVar1.unknown & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    IVar1 = Swift::String::UTF8View::_foreignIndex((Index)0xf,param_1 >> 0x10,param_2);
    uVar2 = (ulong)(IVar1.unknown + uVar3 * 0x10000) & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = (ulong)IVar1.unknown & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}



/* Address: 0x100002500 | FUN_100002500 */

void FUN_100002500(undefined8 *param_1,UnsafeMutableBufferPointer<__int8> param_2,long param_3)

{
  code *pcVar1;
  _StringGuts _Var2;
  
  if (param_2.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100002554);
    (*pcVar1)();
  }
  _Var2.unknown = param_3 - param_2.unknown;
  Swift::_StringGuts::_copyUTF8(param_2,_Var2);
  if (((uint)_Var2.unknown & 0xff) != 1) {
    *param_1 = 0;
    param_1[1] = 0xe000000000000000;
    param_1[2] = 0xf;
    param_1[3] = param_2.unknown;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100002558);
  (*pcVar1)();
}



/* Address: 0x100002558 | FUN_100002558 */

void FUN_100002558(void *param_1,void *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1000081f8;
  uVar1 = 0;
  if (param_1 != (void *)0x0) {
    uVar1 = (long)param_2 - (long)param_1;
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100002604);
    (*pcVar2)();
  }
  if (0xff < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100002608);
    (*pcVar2)();
  }
  local_28 = 0;
  local_1a = (undefined1)uVar1;
  local_1c = 0;
  local_20 = 0;
  if ((param_1 != (void *)0x0) && (param_2 != param_1)) {
    _memcpy(&local_28,param_1,(long)param_2 - (long)param_1);
  }
  if (*(long *)PTR____stack_chk_guard_1000081f8 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_28);
  }
  return;
}



/* Address: 0x10000260c | FUN_10000260c */

void FUN_10000260c(long param_1,long param_2)

{
  long lVar1;
  __DataStorage *this;
  RangeReference *pRVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 - param_1;
  }
  this = Foundation::__DataStorage::typeMetadataAccessor();
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  Foundation::__DataStorage::_init(this,param_1);
  pRVar2 = Foundation::Data::RangeReference::typeMetadataAccessor();
  _swift_allocObject(pRVar2,0x20,7);
  *(undefined8 *)(pRVar2 + 0x10) = 0;
  *(long *)(pRVar2 + 0x18) = lVar1;
  return;
}



/* Address: 0x100002680 | FUN_100002680 */

undefined1  [16] FUN_100002680(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  __DataStorage *p_Var3;
  undefined1 auVar4 [16];
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_2 - param_1;
  }
  p_Var3 = Foundation::__DataStorage::typeMetadataAccessor();
  _swift_allocObject(p_Var3,*(undefined4 *)(p_Var3 + 0x30),*(undefined2 *)(p_Var3 + 0x34));
  p_Var3 = Foundation::__DataStorage::_init(p_Var3,param_1);
  if (uVar1 >> 0x1f == 0) {
    auVar4._0_8_ = uVar1 << 0x20;
    auVar4._8_8_ = p_Var3;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000026e4);
  (*pcVar2)();
}



/* Address: 0x1000026e4 | FUN_1000026e4 */

undefined1  [16] FUN_1000026e4(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((param_1 == 0) || (param_2 == param_1)) {
    return ZEXT816(0xc000000000000000) << 0x40;
  }
  if (param_2 - param_1 < 0xf) {
    FUN_100002558();
    auVar1._8_8_ = param_2 & 0xffffffffffffff;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  if (0x7ffffffe < param_2 - param_1) {
    FUN_10000260c();
    auVar3._8_8_ = param_2 | 0x8000000000000000;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  FUN_100002680();
  auVar2._8_8_ = param_2 | 0x4000000000000000;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Address: 0x100002748 | FUN_100002748 */

void FUN_100002748(ulong param_1)

{
  code *pcVar1;
  __DataStorage *this;
  RangeReference *pRVar2;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0xf) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000027e4);
        (*pcVar1)();
      }
    }
    else {
      this = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
      Foundation::__DataStorage::init(this,param_1);
      if (0x7ffffffe < param_1) {
        pRVar2 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar2,0x20,7);
        *(undefined8 *)(pRVar2 + 0x10) = 0;
        *(ulong *)(pRVar2 + 0x18) = param_1;
      }
    }
  }
  return;
}



/* Address: 0x1000027e4 | FUN_1000027e4 */

void FUN_1000027e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100002500(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000027fc | FUN_1000027fc */

void FUN_1000027fc(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain();
  }
  _swift_retain(param_2 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x10000283c | FUN_10000283c */

void FUN_10000283c(undefined8 param_1,ulong param_2)

{
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  FUN_100001dc0();
  return;
}



/* Address: 0x100002850 | FUN_100002850 */

undefined8 * FUN_100002850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Address: 0x100002868 | FUN_100002868 */

long * FUN_100002868(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Address: 0x10000288c | FUN_10000288c */

void FUN_10000288c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000028a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
  _swift_release(*param_1);
  return;
}



/* Address: 0x1000028ac | FUN_1000028ac */

void FUN_1000028ac(undefined8 param_1)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = _TtC13PasteMCPStdio12StdioAdapter::url;
  UVar2 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001000028f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))(param_1,unaff_x20 + lVar1,UVar2.unknown);
  return;
}



/* Address: 0x1000028f4 | FUN_1000028f4 */

undefined1  [16] FUN_1000028f4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::token);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::token) + 8));
  return auVar1;
}



/* Address: 0x10000292c | FUN_10000292c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10000292c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::input);
}



/* Address: 0x10000293c | FUN_10000293c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10000293c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::output);
}



/* Address: 0x10000294c | FUN_10000294c */

undefined1  [16] FUN_10000294c(void)

{
  return ZEXT816(0);
}



/* Address: 0x100002958 | FUN_100002958 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100002958(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &DAT_100008508;
  _swift_allocObject(&DAT_100008508,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = &DAT_100006098;
  return auVar2;
}



/* Address: 0x1000029b0 | FUN_1000029b0 */

long FUN_1000029b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  URL UVar3;
  long unaff_x20;
  
  _swift_allocObject();
  _swift_defaultActor_initialize();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::sessionID);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC13PasteMCPStdio12StdioAdapter::url;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x20))(unaff_x20 + lVar2,param_1,UVar3.unknown);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::token);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::transport);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::input) = param_6;
  *(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::output) = param_7;
  return unaff_x20;
}



/* Address: 0x100002a90 | FUN_100002a90 */

void FUN_100002a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  URL UVar3;
  long unaff_x20;
  
  _swift_defaultActor_initialize();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::sessionID);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC13PasteMCPStdio12StdioAdapter::url;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x20))(unaff_x20 + lVar2,param_1,UVar3.unknown);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::token);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::transport);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::input) = param_6;
  *(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::output) = param_7;
  return;
}



/* Address: 0x100002b60 | FUN_100002b60 */

tuple2 FUN_100002b60(undefined8 param_1,undefined8 param_2,URLRequest_conflict param_3,Data param_4)

{
  long *plVar1;
  long unaff_x22;
  tuple2 tVar2;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)(ulong)*(uint *)(PTR__upload_100008190 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100002bd4;
  tVar2 = (extension_Foundation)::__C::NSURLSession::_upload(param_3,param_4);
  return tVar2;
}



/* Address: 0x100002bd4 | FUN_100002bd4 */

void FUN_100002bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x28) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x20));
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x30) = param_3;
    *(undefined8 *)(lVar4 + 0x38) = param_2;
    *(undefined8 *)(lVar4 + 0x40) = param_1;
    FUN_1000058cc(uVar1,uVar3);
    pcVar2 = FUN_100002c70;
  }
  else {
    FUN_1000058cc(uVar1,uVar3);
    pcVar2 = FUN_100002c84;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x100002c70 | FUN_100002c70 */

void FUN_100002c70(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100002c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x100002c84 | FUN_100002c84 */

void FUN_100002c84(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100002c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100002c90 | FUN_100002c90 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100002c90(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100002cb4 | FUN_100002cb4 */

void FUN_100002cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100002d38;
  FUN_100002b60(param_1,param_2,param_3,param_4,param_5,uVar2);
  return;
}



/* Address: 0x100002d38 | FUN_100002d38 */

void FUN_100002d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100002d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3);
  return;
}



/* Address: 0x100002d94 | FUN_100002d94 */

void FUN_100002d94(void)

{
  undefined *puVar1;
  ulong uVar2;
  AsyncBytes AVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  puVar1 = &DAT_10000c238;
  FUN_1000016c0(&DAT_10000c238,&DAT_1000060a8);
  *(undefined **)(unaff_x22 + 0x38) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  AVar3 = AsyncBytes::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x50) = AVar3.unknown;
  lVar4 = *(long *)(AVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  puVar1 = &DAT_10000c240;
  FUN_1000016c0(&DAT_10000c240,&DAT_1000060b0);
  *(undefined **)(unaff_x22 + 0x68) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  _swift_task_switch(FUN_100002e5c);
  return;
}



/* Address: 0x100002e5c | FUN_100002e5c */

void FUN_100002e5c(NSFileHandle *param_1)

{
  long lVar1;
  undefined8 uVar2;
  AsyncLineSequence AVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  AVar3.unknown = *(undefined **)(unaff_x22 + 0x38);
  lVar6 = *(long *)(unaff_x22 + 0x40);
  (extension_Foundation)::__C::NSFileHandle::_get_bytes(param_1);
  FUN_10000501c(&DAT_10000c248,PTR__typeMetadataAccessor_100008160,
                PTR__Foundation__AsyncBytes_>Swift__AsyncSequence_100008170);
  (extension_Foundation)::Swift::AsyncSequence::_get_lines();
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  Foundation::AsyncLineSequence::_makeAsyncIterator(AVar3);
  (**(code **)(lVar6 + 8))(uVar2,AVar3.unknown);
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100008090 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100002f50;
  Foundation::AsyncLineSequence::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x100002f50 | FUN_100002f50 */

void FUN_100002f50(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x80));
  if (unaff_x20 == 0) {
    *(long **)(lVar3 + 0x10) = unaff_x22;
    *(undefined8 *)(lVar3 + 0x18) = param_1;
    *(undefined8 *)(lVar3 + 0x20) = param_2;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar3 + 0x88) = param_2;
    pcVar1 = FUN_100002fd8;
  }
  else {
    *(long *)(lVar3 + 0xa0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    pcVar1 = FUN_100003188;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100002fd8 | FUN_100002fd8 */

void FUN_100002fd8(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x88);
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    plVar1 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x90) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100003090;
    FUN_100003334(uVar2,lVar4);
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x68));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_100003200(*(undefined8 *)(unaff_x22 + 0x30));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010000308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100003090 | FUN_100003090 */

void FUN_100003090(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  _swift_bridgeObjectRelease(uVar1);
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100008090 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x98) = plVar2;
  *plVar2 = lVar4;
  plVar2[1] = (long)FUN_100003100;
  Foundation::AsyncLineSequence::AsyncIterator::_next((AsyncIterator)*(undefined **)(lVar3 + 0x68));
  return;
}



/* Address: 0x100003100 | FUN_100003100 */

void FUN_100003100(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x98));
  if (unaff_x20 == 0) {
    *(long **)(lVar3 + 0x10) = unaff_x22;
    *(undefined8 *)(lVar3 + 0x18) = param_1;
    *(undefined8 *)(lVar3 + 0x20) = param_2;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar3 + 0x88) = param_2;
    pcVar1 = FUN_100002fd8;
  }
  else {
    *(long *)(lVar3 + 0xa0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    pcVar1 = FUN_100003188;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100003188 | FUN_100003188 */

void FUN_100003188(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x68));
  _swift_errorRelease(uVar1);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_100003200(*(undefined8 *)(unaff_x22 + 0x30));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000031fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100003200 | FUN_100003200 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100003200(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1000081f8;
  uVar1 = *(undefined8 *)(param_1 + _TtC13PasteMCPStdio12StdioAdapter::input);
  local_40 = 0;
  FUN_100005ea0(uVar1,param_2,&local_40);
  if ((int)uVar1 == 0) {
    uVar1 = local_40;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _TtC13PasteMCPStdio12StdioAdapter::output);
  local_40 = 0;
  FUN_100005ea0(uVar1,param_2,&local_40);
  if ((int)uVar1 == 0) {
    uVar1 = local_40;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar1);
    if (*(long *)PTR____stack_chk_guard_1000081f8 == local_38) {
      return uVar1;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_1000081f8 == local_38) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100003334 | FUN_100003334 */

void FUN_100003334(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  ulong uVar2;
  URLRequest_conflict UVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x38) = UVar1.unknown;
  lVar4 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  UVar3 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x50) = UVar3.unknown;
  lVar4 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  _swift_task_switch(FUN_1000033c0);
  return;
}



/* Address: 0x1000033c0 | FUN_1000033c0 */

void FUN_1000033c0(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  URL url;
  undefined8 uVar4;
  String SVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  void *pvVar11;
  long unaff_x22;
  URLRequest *this;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  this = *(URLRequest **)(unaff_x22 + 0x60);
  lVar12 = *(long *)(unaff_x22 + 0x40);
  url.unknown = *(undefined **)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  _swift_bridgeObjectRetain(uVar9);
  FUN_1000037b0();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
  (**(code **)(lVar12 + 0x10))(url.unknown,lVar2 + _TtC13PasteMCPStdio12StdioAdapter::url,uVar4);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  Foundation::URLRequest::set_timeoutInterval(this,30.0);
  SVar13.bridgeObject = (void *)0x8000000100006330;
  SVar13.str = (char *)0xd000000000000010;
  Foundation::URLRequest::_setValue(SVar13,(URLRequest_conflict)0x2d746e65746e6f43);
  pcVar10 = (char *)0x747065636341;
  pvVar11 = (void *)0xe600000000000000;
  SVar14.bridgeObject = (void *)0x8000000100006350;
  SVar14.str = (char *)0xd000000000000023;
  Foundation::URLRequest::_setValue(SVar14,(URLRequest_conflict)0x747065636341);
  SVar16.bridgeObject = pvVar11;
  SVar16.str = pcVar10;
  Swift::String::append(*(String *)(lVar2 + _TtC13PasteMCPStdio12StdioAdapter::token),SVar16);
  SVar5.bridgeObject = (void *)0xe700000000000000;
  SVar5.str = (char *)0x20726572616542;
  Foundation::URLRequest::_setValue(SVar5,(URLRequest_conflict)0x7a69726f68747541);
  _swift_bridgeObjectRelease(0xe700000000000000);
  pvVar11 = (void *)((undefined8 *)(lVar2 + _TtC13PasteMCPStdio12StdioAdapter::sessionID))[1];
  if (pvVar11 != (void *)0x0) {
    pcVar10 = *(char **)(lVar2 + _TtC13PasteMCPStdio12StdioAdapter::sessionID);
    _swift_bridgeObjectRetain(pvVar11);
    SVar15.bridgeObject = pvVar11;
    SVar15.str = pcVar10;
    Foundation::URLRequest::_setValue(SVar15,(URLRequest_conflict)0x737365532d70634d);
    _swift_bridgeObjectRelease(pvVar11);
  }
  lVar12 = *(long *)(unaff_x22 + 0x30);
  piVar3 = *(int **)(lVar12 + _TtC13PasteMCPStdio12StdioAdapter::transport);
  puVar7 = &DAT_10000c3a0;
  FUN_10000501c(&DAT_10000c3a0,FUN_10000452c,&TargetProtocolConformanceDescriptor_1000060c0);
  iVar1 = *piVar3;
  plVar8 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100003618;
                    /* WARNING: Could not recover jumptable at 0x000100003614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (lVar12,puVar7,*(undefined8 *)(unaff_x22 + 0x60),uVar6,uVar9);
  return;
}



/* Address: 0x100003618 | FUN_100003618 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000036fc) */

void FUN_100003618(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char *unaff_x20;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 uVar9;
  String SVar10;
  String SVar11;
  
  lVar7 = *unaff_x22;
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x78));
  uVar8 = *(undefined8 *)(lVar7 + 0x68);
  uVar2 = *(undefined8 *)(lVar7 + 0x70);
  lVar1 = *(long *)(lVar7 + 0x58);
  uVar3 = *(undefined8 *)(lVar7 + 0x60);
  uVar9 = *(undefined8 *)(lVar7 + 0x50);
  if (unaff_x20 == (char *)0x0) {
    FUN_100003c9c(param_3);
    FUN_100003d90(param_1,param_2,param_3);
    FUN_100001dc0(uVar8,uVar2);
    FUN_100001dc0(param_1,param_2);
    (**(code **)(lVar1 + 8))(uVar3,uVar9);
  }
  else {
    uVar4 = *(undefined8 *)(lVar7 + 0x20);
    uVar5 = *(undefined8 *)(lVar7 + 0x28);
    (**(code **)(lVar1 + 8))(uVar3,uVar9);
    FUN_100001dc0(uVar8,uVar2);
    FUN_100005188();
    _swift_bridgeObjectRetain(uVar5);
    SVar10.bridgeObject = (void *)0xe100000000000000;
    SVar10.str = (char *)0xa;
    SVar11.bridgeObject = param_4;
    SVar11.str = unaff_x20;
    Swift::String::append(SVar10,SVar11);
    uVar8 = uVar5;
    FUN_1000037b0();
    *(undefined8 *)(lVar7 + 0x10) = uVar4;
    *(undefined8 *)(lVar7 + 0x18) = uVar8;
    FUN_100004730();
    (extension_Foundation)::__C::NSFileHandle::_write
              (lVar7 + 0x10,PTR___type_metadata_for_Foundation_Data_100008118,uVar4);
    _swift_bridgeObjectRelease(uVar5);
    _swift_errorRelease();
    FUN_100001dc0(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18));
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x60));
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001000037ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 8))();
  return;
}



/* Address: 0x1000037b0 | FUN_1000037b0 */

/* WARNING: Removing unreachable block (ram,0x000100003c90) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1000037b0(UTF8View param_1,undefined *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  __uint8 _Var3;
  Range<__int64> RVar4;
  undefined **ppuVar5;
  Index position;
  Index after;
  UnsafeBufferPointer<__int8> UVar6;
  undefined *puVar7;
  UnsafeBufferPointer<__int8> UVar8;
  undefined *puVar9;
  undefined6 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined6 local_f0;
  undefined2 uStack_ea;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined6 local_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined **local_90;
  undefined8 local_88;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1000081f8;
  local_f0 = SUB86(param_1.unknown,0);
  uStack_ea = (undefined2)((ulong)param_1.unknown >> 0x30);
  uStack_e8 = SUB86(param_2,0);
  uStack_e2 = (undefined2)((ulong)param_2 >> 0x30);
  local_e0 = param_1.unknown;
  puStack_d8 = param_2;
  _swift_bridgeObjectRetain(param_2);
  RVar4.unknown = &DAT_10000c390;
  FUN_1000016c0(&DAT_10000c390,&DAT_100006158);
  ppuVar5 = &local_d0;
  _swift_dynamicCast(ppuVar5,&local_f0,PTR___type_metadata_for_Swift_String_UTF8View_100008278,
                     RVar4.unknown,6);
  if ((int)ppuVar5 != 0) {
    FUN_100002850(&local_d0,&local_a0);
    FUN_100002868(&local_a0,local_88);
    Foundation::ContiguousBytes::_withUnsafeBytes();
    FUN_10000288c(&local_a0);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
    goto LAB_100003bec;
  }
  local_b0 = 0;
  puStack_c8 = (undefined *)0x0;
  local_d0 = (undefined *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  after.unknown = &DAT_100006160;
  FUN_100001f78(&local_d0,&DAT_10000c398);
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        puVar9 = param_2;
        UVar8 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
      }
      else {
        UVar8.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        puVar9 = param_1.unknown & 0xffffffffffff;
      }
      puVar15 = (undefined *)0x0;
      if (UVar8.unknown != (undefined *)0x0) {
        puVar15 = puVar9 + UVar8.unknown;
      }
      FUN_1000026e4();
      puVar9 = puVar15;
    }
    else {
      puVar15 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
      puStack_c8 = (undefined *)((ulong)param_2 & 0xffffffffffffff);
      local_d0 = param_1.unknown;
      FUN_100001eac(&local_a0,&local_d0);
      UVar8.unknown = (undefined *)CONCAT26(uStack_9a,local_a0);
      puVar9 = (undefined *)CONCAT26(uStack_92,uStack_98);
    }
    if ((ulong)puVar9 >> 0x3c < 0xf) goto LAB_100003bec;
    puVar7 = param_1.unknown & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar7 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    }
  }
  else {
    puVar15 = param_2;
    puVar7 = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    UVar8.unknown = (undefined *)0x0;
    puVar9 = (undefined *)0xf000000000000000;
  }
  FUN_100002748();
  local_90 = &local_e0;
  pcVar2 = FUN_1000027e4;
  puVar10 = &local_a0;
  local_d0 = puVar7;
  puStack_c8 = puVar15;
  FUN_100001fb8();
  uVar12 = (uint)((ulong)puStack_c8 >> 0x20);
  uVar13 = uVar12 >> 0x1e;
  if (uVar12 >> 0x1e < 2) {
    if (uVar13 == 0) {
      puVar15 = (undefined *)((ulong)puStack_c8 >> 0x30 & 0xff);
    }
    else {
      iVar14 = (int)((ulong)local_d0 >> 0x20);
      if (SBORROW4(iVar14,(int)local_d0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100003c8c);
        (*pcVar2)();
      }
      puVar15 = (undefined *)(long)(iVar14 - (int)local_d0);
    }
    if (RVar4.unknown == puVar15) goto LAB_1000039d4;
LAB_1000039b0:
    if (uVar13 == 2) {
      uVar11 = *(ulong *)(local_d0 + 0x18);
    }
    else if (uVar13 == 1) {
      uVar11 = (long)local_d0 >> 0x20;
    }
    else {
      uVar11 = (ulong)puStack_c8 >> 0x30 & 0xff;
    }
LAB_100003bc8:
    if ((long)uVar11 < (long)RVar4.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100003c84);
      (*pcVar2)();
    }
    Foundation::Data::_Representation::_replaceSubrange(RVar4,uVar11,(_Representation)0x0,0);
LAB_100003be4:
    _swift_bridgeObjectRelease(puVar10);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
  else {
    if (uVar13 == 2) {
      if (SBORROW8(*(long *)(local_d0 + 0x18),*(long *)(local_d0 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100003c88);
        (*pcVar2)();
      }
      if (RVar4.unknown != (undefined *)(*(long *)(local_d0 + 0x18) - *(long *)(local_d0 + 0x10)))
      goto LAB_1000039b0;
    }
    else if (RVar4.unknown != (undefined *)0x0) {
      uVar11 = 0;
      goto LAB_100003bc8;
    }
LAB_1000039d4:
    uVar11 = (ulong)pcVar2 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar11 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_ea = 0;
    if (uVar11 * 4 - ((ulong)after.unknown >> 0xe) != 0) {
      uVar19 = 0;
      uVar12 = (uint)((ulong)pcVar2 >> 0x3b) & 1;
      if (((ulong)puVar10 & 0x1000000000000000) == 0) {
        uVar12 = 1;
      }
      uVar17 = 4L << uVar12;
      do {
        uVar18 = (ulong)after.unknown & 0xc;
        position.unknown = after.unknown;
        if (uVar18 == uVar17) {
          FUN_100002488(after.unknown,pcVar2,puVar10);
        }
        uVar16 = (ulong)position.unknown >> 0x10;
        if (uVar11 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100003c50);
          (*pcVar2)();
        }
        if (((ulong)puVar10 >> 0x3c & 1) == 0) {
          if (((ulong)puVar10 >> 0x3d & 1) != 0) {
            local_a0 = SUB86(pcVar2,0);
            uStack_9a = (undefined2)((ulong)pcVar2 >> 0x30);
            uStack_98 = (undefined6)((ulong)puVar10 & 0xffffffffffffff);
            uStack_92 = (undefined2)(((ulong)puVar10 & 0xffffffffffffff) >> 0x30);
            _Var3 = *(__uint8 *)((long)&local_a0 + uVar16);
            goto joined_r0x000100003ac8;
          }
          UVar6.unknown = (undefined *)(((ulong)puVar10 & 0xfffffffffffffff) + 0x20);
          if (((ulong)pcVar2 >> 0x3c & 1) == 0) {
            UVar6 = Swift::_StringObject::get_sharedUTF8((_StringObject)pcVar2);
          }
          _Var3 = UVar6.unknown[uVar16];
          if (uVar18 != uVar17) goto LAB_100003a88;
LAB_100003acc:
          FUN_100002488(after.unknown,pcVar2,puVar10);
          if (((ulong)puVar10 >> 0x3c & 1) != 0) goto LAB_100003ae4;
LAB_100003a8c:
          after.unknown = (undefined *)(((ulong)after.unknown & 0xffffffffffff0000) + 0x10004);
        }
        else {
          _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)pcVar2);
joined_r0x000100003ac8:
          if (uVar18 == uVar17) goto LAB_100003acc;
LAB_100003a88:
          if (((ulong)puVar10 >> 0x3c & 1) == 0) goto LAB_100003a8c;
LAB_100003ae4:
          if (uVar11 <= (ulong)after.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100003c58);
            (*pcVar2)();
          }
          after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)pcVar2);
        }
        *(__uint8 *)((long)&local_f0 + (uVar19 & 0xff)) = _Var3;
        uVar12 = ((uint)uVar19 & 0xff) + 1;
        uVar19 = (ulong)uVar12;
        if ((uVar12 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100003c54);
          (*pcVar2)();
        }
        if ((uVar12 & 0xff) == 0xe) {
          local_a0 = local_f0;
          uStack_9a = uStack_ea;
          uStack_98 = uStack_e8;
          Foundation::Data::_Representation::append
                    ((UnsafeRawBufferPointer)&local_a0,(_Representation)((char)&local_a0 + 0xe));
          uVar19 = 0;
        }
      } while (uVar11 * 4 - ((ulong)after.unknown >> 0xe) != 0);
      if ((uVar19 & 0xff) != 0) {
        local_a0 = local_f0;
        uStack_9a = uStack_ea;
        uStack_98 = uStack_e8;
        Foundation::Data::_Representation::append
                  ((UnsafeRawBufferPointer)&local_a0,
                   (_Representation)((char)&local_a0 + (char)uVar19));
        FUN_10000283c(UVar8.unknown,puVar9);
        goto LAB_100003be4;
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    FUN_10000283c(UVar8.unknown,puVar9);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
LAB_100003bec:
  puStack_c8 = puVar9;
  local_d0 = UVar8.unknown;
  auVar1._8_8_ = puStack_c8;
  auVar1._0_8_ = local_d0;
  FUN_1000027fc(local_d0,puStack_c8);
  _swift_bridgeObjectRelease(param_2);
  FUN_100001dc0(local_d0,puStack_c8);
  if (*(long *)PTR____stack_chk_guard_1000081f8 == local_70) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100003c9c | FUN_100003c9c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100003c9c(long param_1)

{
  String *pSVar1;
  ulong uVar2;
  void *pvVar3;
  long unaff_x20;
  String SVar4;
  
  pSVar1 = (String *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::sessionID);
  if ((pSVar1->bridgeObject == (void *)0x0) &&
     (_swift_dynamicCastObjCClass(param_1,&_OBJC_CLASS___NSHTTPURLResponse), param_1 != 0)) {
    (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    FUN_100005fe0();
    if (param_1 != 0) {
      SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar3 = SVar4.bridgeObject;
      uVar2 = (ulong)SVar4.str & 0xffffffffffff;
      if (((ulong)pvVar3 & 0x2000000000000000) != 0) {
        uVar2 = (ulong)pvVar3 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        pvVar3 = pSVar1->bridgeObject;
        *pSVar1 = SVar4;
      }
      _swift_bridgeObjectRelease(pvVar3);
      return;
    }
  }
  return;
}



/* Address: 0x100003d90 | FUN_100003d90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000042d4) */
/* WARNING: Removing unreachable block (ram,0x000100004370) */

char * FUN_100003d90(Encoding param_1,void *param_2,long param_3)

{
  ulong uVar1;
  Range<Index> RVar2;
  bool bVar3;
  CharacterSet CVar4;
  Encoding EVar5;
  undefined8 *puVar6;
  CharacterSet CVar7;
  __int64 offsetBy;
  undefined *puVar8;
  undefined *puVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  char *pcVar15;
  code *pcVar16;
  Index limitedBy;
  char *pcVar17;
  CharacterSet in;
  long lVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  char acStack_e0 [8];
  long local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulong local_c0;
  undefined8 *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  long local_a0;
  CharacterSet local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  String local_70;
  
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar14 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_1000081e8)(*(undefined8 *)(lVar14 + 0x40));
  pcVar17 = acStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  EVar5 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_1000081e8)(*(undefined8 *)(*(long *)(EVar5.unknown + -8) + 0x40));
  pcVar15 = pcVar17 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_dynamicCastObjCClass(param_3,&_OBJC_CLASS___NSHTTPURLResponse);
  if ((param_3 == 0) || (lVar18 = param_3, FUN_100005fc0(), lVar18 != 0xca)) {
    uVar12 = (uint)((ulong)param_2 >> 0x20);
    uVar11 = uVar12 >> 0x1e;
    if (uVar12 >> 0x1e < 2) {
      if (uVar11 == 0) {
        if (((ulong)param_2 & 0xff000000000000) != 0) {
LAB_100003e9c:
          local_98.unknown = pcVar17;
          if (param_3 == 0) {
            SVar20 = (String)(ZEXT816(0xe000000000000000) << 0x40);
          }
          else {
            (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            lVar18 = param_3;
            FUN_100005fe0();
            if (lVar18 == 0) {
              SVar20 = (String)(ZEXT816(0xe000000000000000) << 0x40);
            }
            else {
              SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              SVar20 = Swift::String::lowercased(SVar19);
              _swift_bridgeObjectRelease(SVar19.bridgeObject);
            }
          }
          EVar5.unknown = SVar20.bridgeObject;
          SVar19.bridgeObject = (void *)0x8000000100006310;
          SVar19.str = (char *)0xd000000000000011;
          puVar8 = EVar5.unknown;
          bVar3 = Swift::String::hasPrefix(SVar19,SVar20);
          _swift_bridgeObjectRelease();
          Encoding::_get_utf8(EVar5);
          (extension_Foundation)::Swift::String::_init(param_1);
          if (bVar3) {
            local_70.str = (char *)0x0;
            if (param_2 != (void *)0x0) {
              local_70.str = param_1.unknown;
            }
            pvVar10 = (void *)0xe000000000000000;
            if (param_2 != (void *)0x0) {
              pvVar10 = param_2;
            }
            local_70.bridgeObject = pvVar10;
            local_88 = 0xa0a;
            local_80 = 0xe200000000000000;
            local_d8 = param_3;
            FUN_100004770();
            puVar6 = &local_88;
            local_90 = param_1.unknown;
            (extension_Foundation)::Swift::StringProtocol::_components
                      (puVar6,PTR___type_metadata_for_Swift_String_100008290,
                       PTR___type_metadata_for_Swift_String_100008290,param_1.unknown,
                       param_1.unknown);
            _swift_bridgeObjectRelease(pvVar10);
            local_c0 = puVar6[2];
            if (local_c0 != 0) {
              uVar13 = 0;
              local_a8 = *(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::output);
              local_c8 = puVar6 + 4;
              in.unknown = local_98.unknown;
              local_d0 = puVar6;
              local_a0 = lVar14;
              do {
                if ((ulong)local_d0[2] <= uVar13) {
                    /* WARNING: Does not return */
                  pcVar16 = (code *)SoftwareBreakpoint(1,0x1000043d0);
                  (*pcVar16)();
                }
                local_70 = *(String *)(local_c8 + uVar13 * 2);
                local_88 = 10;
                local_80 = 0xe100000000000000;
                puVar6 = &local_88;
                local_b0 = uVar13;
                (extension_Foundation)::Swift::StringProtocol::_components
                          (puVar6,PTR___type_metadata_for_Swift_String_100008290,
                           PTR___type_metadata_for_Swift_String_100008290,local_90,local_90);
                lVar18 = puVar6[2];
                local_b8 = puVar6;
                if (lVar18 != 0) {
                  puVar6 = puVar6 + 5;
                  do {
                    puVar8 = (undefined *)*puVar6;
                    local_70.bridgeObject = puVar8;
                    local_70.str = (char *)puVar6[-1];
                    CVar7.unknown = puVar8;
                    _swift_bridgeObjectRetain();
                    Foundation::CharacterSet::get_whitespaces(CVar7);
                    SVar20 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
                    puVar9 = SVar20.bridgeObject;
                    pcVar16 = *(code **)(lVar14 + 8);
                    (*pcVar16)(in.unknown,CVar4.unknown);
                    _swift_bridgeObjectRelease(puVar8);
                    SVar21.bridgeObject = (void *)0xe500000000000000;
                    SVar21.str = (char *)0x3a61746164;
                    bVar3 = Swift::String::hasPrefix(SVar21,SVar20);
                    if (bVar3) {
                      SVar22.bridgeObject = (void *)0xe500000000000000;
                      SVar22.str = (char *)0x3a61746164;
                      offsetBy = Swift::String::get_count(SVar22);
                      if (offsetBy < 0) {
                    /* WARNING: Does not return */
                        pcVar16 = (code *)SoftwareBreakpoint(1,0x1000043c8);
                        (*pcVar16)();
                      }
                      uVar13 = (ulong)SVar20.str & 0xffffffffffff;
                      if (((ulong)puVar9 & 0x2000000000000000) != 0) {
                        uVar13 = (ulong)puVar9 >> 0x38 & 0xf;
                      }
                      uVar12 = SVar20.str._4_4_ >> 0x1b & 1;
                      if (((ulong)puVar9 & 0x1000000000000000) == 0) {
                        uVar12 = 1;
                      }
                      uVar1 = 7;
                      if (uVar12 == 0) {
                        uVar1 = 0xb;
                      }
                      limitedBy.unknown = (undefined *)(uVar1 | uVar13 << 0x10);
                      puVar8 = (undefined *)0xf;
                      Swift::String::_index((Index)0xf,offsetBy,limitedBy,SVar20);
                      RVar2.unknown = limitedBy.unknown;
                      if (((uint)offsetBy & 0xff) != 1) {
                        RVar2.unknown = puVar8;
                      }
                      if (uVar13 << 2 < (ulong)RVar2.unknown >> 0xe) {
                    /* WARNING: Does not return */
                        pcVar16 = (code *)SoftwareBreakpoint(1,0x1000043cc);
                        (*pcVar16)();
                      }
                      SVar27.bridgeObject = SVar20.str;
                      SVar27.str = limitedBy.unknown;
                      CVar7.unknown = puVar9;
                      SVar23.str = Swift::String::get_subscript(RVar2,SVar27);
                      _swift_bridgeObjectRelease(puVar9);
                      SVar23.bridgeObject = limitedBy.unknown;
                      puVar8 = CVar7.unknown;
                      SVar20 = Swift::String::__fromSubstring(SVar23);
                      _swift_bridgeObjectRelease();
                      in.unknown = local_98.unknown;
                      local_70 = SVar20;
                      Foundation::CharacterSet::get_whitespaces(CVar7);
                      pcVar15 = local_90;
                      SVar19 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in)
                      ;
                      pvVar10 = SVar19.bridgeObject;
                      (*pcVar16)(in.unknown,CVar4.unknown);
                      _swift_bridgeObjectRelease(SVar20.bridgeObject);
                      uVar13 = (ulong)SVar19.str & 0xffffffffffff;
                      if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
                        uVar13 = (ulong)pvVar10 >> 0x38 & 0xf;
                      }
                      if (uVar13 == 0) {
                        _swift_bridgeObjectRelease(pvVar10);
                        lVar14 = local_a0;
                      }
                      else {
                        local_70 = SVar19;
                        _swift_bridgeObjectRetain(pvVar10);
                        SVar24.bridgeObject = (void *)0xe100000000000000;
                        SVar24.str = (char *)0xa;
                        SVar25.bridgeObject = puVar8;
                        SVar25.str = pcVar15;
                        Swift::String::append(SVar24,SVar25);
                        FUN_1000037b0();
                        pcVar15 = local_70.str;
                        FUN_100004730();
                        (extension_Foundation)::__C::NSFileHandle::_write
                                  (&local_70,PTR___type_metadata_for_Foundation_Data_100008118,
                                   pcVar15);
                        lVar14 = local_a0;
                        _swift_bridgeObjectRelease(pvVar10);
                        FUN_100001dc0(local_70.str,local_70.bridgeObject);
                      }
                    }
                    else {
                      _swift_bridgeObjectRelease(puVar9);
                    }
                    puVar6 = puVar6 + 2;
                    lVar18 = lVar18 + -1;
                  } while (lVar18 != 0);
                }
                uVar13 = local_b0 + 1;
                _swift_bridgeObjectRelease(local_b8);
                puVar6 = local_d0;
              } while (uVar13 != local_c0);
            }
            _swift_bridgeObjectRelease(puVar6);
            local_70.str = (char *)0x0;
          }
          else {
            local_70.str = (char *)0x7d7b;
            if (param_2 != (void *)0x0) {
              local_70.str = param_1.unknown;
            }
            pvVar10 = (void *)0xe200000000000000;
            if (param_2 != (void *)0x0) {
              pvVar10 = param_2;
            }
            local_70.bridgeObject = pvVar10;
            _swift_bridgeObjectRetain(pvVar10);
            SVar20.bridgeObject = (void *)0xe100000000000000;
            SVar20.str = (char *)0xa;
            SVar26.bridgeObject = puVar8;
            SVar26.str = pcVar15;
            Swift::String::append(SVar20,SVar26);
            FUN_1000037b0();
            pcVar15 = local_70.str;
            FUN_100004730();
            (extension_Foundation)::__C::NSFileHandle::_write
                      (&local_70,PTR___type_metadata_for_Foundation_Data_100008118,pcVar15);
            _swift_bridgeObjectRelease(pvVar10);
            FUN_100001dc0(local_70.str,local_70.bridgeObject);
          }
          return local_70.str;
        }
      }
      else if ((long)(int)param_1.unknown != (long)param_1.unknown >> 0x20) goto LAB_100003e9c;
    }
    else if ((uVar11 == 2) &&
            (*(long *)(param_1.unknown + 0x10) != *(long *)(param_1.unknown + 0x18)))
    goto LAB_100003e9c;
  }
  return (char *)0x0;
}



/* Address: 0x1000043d0 | FUN_1000043d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000043d0(void)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = _TtC13PasteMCPStdio12StdioAdapter::url;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::token + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::transport + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::sessionID + 8));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x100004474 | FUN_100004474 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100004474(void)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = _TtC13PasteMCPStdio12StdioAdapter::url;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::token + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::transport + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC13PasteMCPStdio12StdioAdapter::sessionID + 8));
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}


