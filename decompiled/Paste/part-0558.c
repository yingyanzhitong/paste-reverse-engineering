/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100641a58 | FUN_100641a58 */

void FUN_100641a58(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100641a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Address: 0x100641a60 | FUN_100641a60 */

void FUN_100641a60(void)

{
  FUN_100641a74();
  return;
}



/* Address: 0x100641a74 | FUN_100641a74 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100641a74(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  dispatch_semaphore_t pdVar4;
  undefined *puVar5;
  long lVar6;
  pthread_mutexattr_t local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  (**(code **)(param_2 + 0x30))("NIOCore/EventLoop.swift",0x17,2,0x5f5,param_1,param_2);
  puVar3 = &DAT_100fd84d0;
  FUN_1000f7830(&DAT_100fd84d0,&DAT_100c6aa48);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x10) = 0;
  local_68.__sig = 0;
  local_68.__opaque[0] = '\0';
  local_68.__opaque[1] = '\0';
  local_68.__opaque[2] = '\0';
  local_68.__opaque[3] = '\0';
  local_68.__opaque[4] = '\0';
  local_68.__opaque[5] = '\0';
  local_68.__opaque[6] = '\0';
  local_68.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_68);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x18),&local_68);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100641c20);
    (*pcVar1)();
  }
  pdVar4 = _dispatch_semaphore_create(0);
  puVar5 = &DAT_100eef6f0;
  _swift_allocObject(&DAT_100eef6f0,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(dispatch_semaphore_t *)(puVar5 + 0x18) = pdVar4;
  _swift_retain(puVar3);
  FUN_10063d8a4(FUN_100642ad4,puVar5,param_1,param_2);
  _swift_release(puVar5);
  (extension_Dispatch)::__C::OS_dispatch_semaphore::wait();
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(puVar3 + 0x18));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100641c24);
    (*pcVar1)();
  }
  lVar6 = *(long *)(puVar3 + 0x10);
  if (lVar6 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(puVar3 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100641c2c);
      (*pcVar1)();
    }
    _swift_release(puVar3);
  }
  else {
    _swift_willThrow();
    _swift_errorRetain(lVar6);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(puVar3 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100641c28);
      (*pcVar1)();
    }
    _swift_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100641c30 | FUN_100641c30 */

void FUN_100641c30(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != 0) {
    _swift_errorRetain();
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100641c90);
      (*pcVar1)();
    }
    _swift_errorRelease(*(undefined8 *)(param_2 + 0x10));
    *(long *)(param_2 + 0x10) = param_1;
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100641c94);
      (*pcVar1)();
    }
  }
  (extension_Dispatch)::__C::OS_dispatch_semaphore::signal();
  return;
}



/* Address: 0x100641c94 | FUN_100641c94 */

void FUN_100641c94(undefined1 *param_1)

{
  undefined *puVar1;
  
  FUN_100642d30();
  puVar1 = &DAT_100eef640;
  _swift_allocError(&DAT_100eef640,param_1,0,0);
  DAT_101057c18 = puVar1;
  *param_1 = 1;
  return;
}



/* Address: 0x100641cd0 | FUN_100641cd0 */

undefined8 FUN_100641cd0(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd8330 != -1) {
    _swift_once(&DAT_100fd8330,FUN_100641c94);
  }
  uVar1 = DAT_101057c18;
  _swift_errorRetain(DAT_101057c18);
  return uVar1;
}



/* Address: 0x100641d24 | FUN_100641d24 */

undefined1  [16] FUN_100641d24(byte param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  pcVar2 = "wn the event loop";
  uVar3 = 0xd00000000000002a;
  if (param_1 != 2) {
    pcVar2 = "ed as number and unit";
    uVar3 = 0xd000000000000031;
  }
  pcVar1 = "sk was cancelled";
  uVar4 = 0xd000000000000049;
  if (param_1 != 0) {
    pcVar1 = "the event loop is shutdown";
    uVar4 = 0xd000000000000030;
  }
  if (param_1 < 2) {
    pcVar2 = pcVar1;
    uVar3 = uVar4;
  }
  auVar5._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x100641d98 | FUN_100641d98 */

void FUN_100641d98(void)

{
  undefined1 *unaff_x20;
  
  FUN_100641d24(*unaff_x20);
  return;
}



/* Address: 0x100641da0 | FUN_100641da0 */

undefined * FUN_100641da0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  _swift_bridgeObjectRetain();
  lVar13 = 0;
  lVar9 = uVar7 - param_2;
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar9 != 0) {
    lVar10 = 0;
    if (param_2 <= uVar7) {
      lVar10 = lVar9;
    }
    puVar11 = (undefined8 *)(param_1 + param_2 * 0x10 + 0x20);
    puVar12 = (undefined8 *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x20);
    do {
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100641f50);
        (*pcVar3)();
      }
      uVar15 = puVar11[1];
      uVar14 = *puVar11;
      if (lVar13 == 0) {
        uVar7 = *(ulong *)(puVar8 + 0x18);
        if ((long)((uVar7 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100641f58);
          (*pcVar3)();
        }
        uVar6 = uVar7 & 0xfffffffffffffffe;
        if ((long)uVar7 < 2) {
          uVar6 = 1;
        }
        puVar4 = &DAT_100fd8358;
        FUN_1000f7830(&DAT_100fd8358,&DAT_100c6a568);
        _swift_allocObject();
        _swift_unknownObjectRetain(uVar14);
        puVar5 = puVar4;
        _malloc_size();
        puVar1 = puVar5 + -0x11;
        if (0x1f < (long)puVar5) {
          puVar1 = puVar5 + -0x20;
        }
        *(ulong *)(puVar4 + 0x10) = uVar6;
        *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 4) << 1;
        puVar5 = puVar4 + 0x20;
        uVar7 = *(ulong *)(puVar8 + 0x18) >> 1;
        lVar13 = ((long)puVar1 >> 4 & 0x7fffffffffffffffU) - uVar7;
        if (*(long *)(puVar8 + 0x10) != 0) {
          if ((puVar4 != puVar8) || (puVar8 + 0x20 + uVar7 * 0x10 <= puVar5)) {
            _memmove(puVar5,puVar8 + 0x20,uVar7 << 4);
          }
          *(undefined8 *)(puVar8 + 0x10) = 0;
        }
        _swift_release(puVar8);
        puVar2 = (undefined8 *)(puVar5 + uVar7 * 0x10);
        puVar8 = puVar4;
      }
      else {
        _swift_unknownObjectRetain(uVar14);
        puVar2 = puVar12;
      }
      if (SBORROW8(lVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100641f54);
        (*pcVar3)();
      }
      lVar13 = lVar13 + -1;
      puVar12 = puVar2 + 2;
      puVar2[1] = uVar15;
      *puVar2 = uVar14;
      lVar10 = lVar10 + -1;
      puVar11 = puVar11 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  _swift_bridgeObjectRelease(param_1);
  if (1 < *(ulong *)(puVar8 + 0x18)) {
    uVar7 = *(ulong *)(puVar8 + 0x18) >> 1;
    if (SBORROW8(uVar7,lVar13)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100641f5c);
      (*pcVar3)();
    }
    *(ulong *)(puVar8 + 0x10) = uVar7 - lVar13;
  }
  return puVar8;
}



/* Address: 0x100641f5c | FUN_100641f5c */

/* WARNING: Removing unreachable block (ram,0x00010064205c) */

undefined1  [16]
FUN_100641f5c(undefined *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_100642ce8();
  _swift_bridgeObjectRetain(param_4);
  SVar6 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_Substring_100eaca98,
                     PTR___protocol_witness_table_for_Swift_Substring___Swift_LosslessStringConvertible_in_Swift_100eacac8
                     ,param_1);
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_100642168();
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
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_48 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_50;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_5);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x100642068 | FUN_100642068 */

/* WARNING: Removing unreachable block (ram,0x00010064215c) */

undefined1  [16] FUN_100642068(undefined *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_40;
  ulong uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_40,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_40;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_100642168();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_40;
    pvVar4 = SVar6.bridgeObject;
  }
  local_40 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_40 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_40;
      local_40 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_40 & 0xffffffffffff);
      local_40 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_38 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_40;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x100642168 | FUN_100642168 */

undefined1  [16]
FUN_100642168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_1006421b8();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1006421b8 | FUN_1006421b8 */

String FUN_1006421b8(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

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
      FUN_10060f15c(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006422b8);
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
      goto LAB_1006421f0;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_1006421f0:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x1006422fc | FUN_1006422fc */

undefined8 FUN_1006422fc(void)

{
  undefined8 unaff_x20;
  
  thunk_FUN_1006528a4();
  _swift_unknownObjectRetain();
  return unaff_x20;
}



/* Address: 0x100642338 | FUN_100642338 */

void FUN_100642338(uint param_1,long param_2)

{
  code *pcVar1;
  
  (**(code **)(param_2 + 0x10))();
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100642358);
  (*pcVar1)();
}



/* Address: 0x100642358 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x10064235c | FUN_10064235c */

void FUN_10064235c(void)

{
  long unaff_x20;
  
  FUN_10063e578(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100642380 | FUN_100642380 */

void FUN_100642380(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006423a4 | FUN_1006423a4 */

void FUN_1006423a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return;
}



/* Address: 0x1006423c4 | FUN_1006423c4 */

void FUN_1006423c4(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fd8338 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10063d83c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c6a4fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a4fc,uVar1);
  DAT_100fd8338 = pTVar2;
  return;
}



/* Address: 0x100642408 | FUN_100642408 */

void FUN_100642408(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10064242c | FUN_10064242c */

void FUN_10064242c(void)

{
  long unaff_x20;
  
  FUN_10063f734(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100642438 | FUN_100642438 */

void FUN_100642438(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8340 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6aa04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6aa04,&DAT_100eef6d0);
  DAT_100fd8340 = pTVar1;
  return;
}



/* Address: 0x100642478 | FUN_100642478 */

void FUN_100642478(void)

{
  undefined *puVar1;
  
  if (DAT_100fd8348 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eadc10;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eadc10,
             PTR___type_metadata_for_Swift_Int64_100eadc00);
  DAT_100fd8348 = puVar1;
  return;
}



/* Address: 0x1006424b8 | FUN_1006424b8 */

void FUN_1006424b8(void)

{
  long unaff_x20;
  
  FUN_100640f48(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1006424c8 | FUN_1006424c8 */

void FUN_1006424c8(void)

{
  FUN_100642c24();
  return;
}



/* Address: 0x1006424dc | FUN_1006424dc */

void FUN_1006424dc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1006424ec | FUN_1006424ec */

void FUN_1006424ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100642528(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  _swift_retain();
  return;
}



/* Address: 0x100642508 | FUN_100642508 */

void FUN_100642508(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10064128c(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100642524 | thunk_FUN_100642ca4 */

void thunk_FUN_100642ca4(void)

{
  FUN_100642ca4();
  return;
}



/* Address: 0x100642528 | FUN_100642528 */

undefined8 FUN_100642528(undefined8 *param_1)

{
  return *param_1;
}



/* Address: 0x100642530 | FUN_100642530 */

undefined8
FUN_100642530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  code *pcVar4;
  
  FUN_1000f4a44(param_4,param_5,param_6);
  thunk_FUN_1006528a4();
  puVar1 = &DAT_100eef970;
  _swift_allocObject(&DAT_100eef970,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(long *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  pcVar4 = *(code **)(param_6 + 0x38);
  FUN_1006529e0(0,param_5);
  _swift_unknownObjectRetain();
  _swift_retain(param_3);
  pcVar2 = FUN_100642dbc;
  puVar3 = puVar1;
  (*pcVar4)();
  _swift_release(puVar1);
  puVar1 = &DAT_100eef998;
  _swift_allocObject(&DAT_100eef998,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(long *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = unaff_x20;
  _swift_retain(param_1);
  _swift_retain(unaff_x20);
  FUN_100646e1c(thunk_FUN_100642508,puVar1);
  _swift_release(param_1);
  _swift_release(puVar1);
  puVar1 = &DAT_100eef9c0;
  _swift_allocObject(&DAT_100eef9c0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(long *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(code **)(puVar1 + 0x30) = pcVar2;
  *(undefined **)(puVar1 + 0x38) = puVar3;
  return unaff_x20;
}



/* Address: 0x1006426a0 | FUN_1006426a0 */

void FUN_1006426a0(long *param_1)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x28))();
  if (unaff_x21 != 0) {
    *param_1 = unaff_x21;
  }
  return;
}



/* Address: 0x1006426d0 | thunk_FUN_1006426d4 */

void thunk_FUN_1006426d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8360 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a5d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a5d8,&DAT_100eef4c8);
  DAT_100fd8360 = pTVar1;
  return;
}



/* Address: 0x1006426d4 | FUN_1006426d4 */

void FUN_1006426d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8360 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a5d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a5d8,&DAT_100eef4c8);
  DAT_100fd8360 = pTVar1;
  return;
}



/* Address: 0x100642714 | thunk_FUN_100642718 */

void thunk_FUN_100642718(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a648;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a648,&DAT_100eef4f0);
  DAT_100fd8368 = pTVar1;
  return;
}



/* Address: 0x100642718 | FUN_100642718 */

void FUN_100642718(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a648;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a648,&DAT_100eef4f0);
  DAT_100fd8368 = pTVar1;
  return;
}



/* Address: 0x100642758 | thunk_FUN_10064275c */

void thunk_FUN_10064275c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8370 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a730;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a730,&DAT_100eef518);
  DAT_100fd8370 = pTVar1;
  return;
}



/* Address: 0x10064275c | FUN_10064275c */

void FUN_10064275c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8370 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a730;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a730,&DAT_100eef518);
  DAT_100fd8370 = pTVar1;
  return;
}



/* Address: 0x10064279c | thunk_FUN_1006427a0 */

void thunk_FUN_1006427a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8378 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a808;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a808,&DAT_100eef640);
  DAT_100fd8378 = pTVar1;
  return;
}



/* Address: 0x1006427a0 | FUN_1006427a0 */

void FUN_1006427a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8378 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a808;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a808,&DAT_100eef640);
  DAT_100fd8378 = pTVar1;
  return;
}



/* Address: 0x1006427e0 | FUN_1006427e0 */

void FUN_1006427e0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006427ec | FUN_1006427ec */

void FUN_1006427ec(void)

{
  FUN_1005f7164(0);
  return;
}



/* Address: 0x1006427f4 | FUN_1006427f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1006427f4(void)

{
  return ZEXT816(0x100fd8440);
}



/* Address: 0x100642814 | FUN_100642814 */

void FUN_100642814(void)

{
  FUN_10064281c(0);
  return;
}



/* Address: 0x10064281c | FUN_10064281c */

void FUN_10064281c(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100fd84c0 == 0) {
    lVar2 = 0xff;
    FUN_100642870();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100fd84c0 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100642870 | FUN_100642870 */

void FUN_100642870(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (DAT_100fd84c8 != 0) {
    return;
  }
  puVar1 = &DAT_100fd4fc8;
  FUN_1000f8b08(&DAT_100fd4fc8,&DAT_100c65f90);
  puVar2 = puVar1;
  FUN_1006427f4();
  uVar3 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,puVar2,puVar1);
  DAT_100fd84c8 = uVar3;
  return;
}



/* Address: 0x1006428dc | FUN_1006428dc */

undefined1  [16] FUN_1006428dc(void)

{
  return ZEXT816(0x100eef4c8);
}



/* Address: 0x1006428ec | FUN_1006428ec */

undefined1  [16] FUN_1006428ec(void)

{
  return ZEXT816(0x100eef4f0);
}



/* Address: 0x1006428fc | FUN_1006428fc */

undefined1  [16] FUN_1006428fc(void)

{
  return ZEXT816(0x100eef518);
}



/* Address: 0x10064290c | FUN_10064290c */

undefined8 * FUN_10064290c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  _swift_unknownObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x10064293c | FUN_10064293c */

undefined8 * FUN_10064293c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar2);
  param_1[1] = uVar1;
  return param_1;
}



/* Address: 0x100642980 | FUN_100642980 */

undefined8 * FUN_100642980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRelease(*param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1006429b4 | FUN_1006429b4 */

int FUN_1006429b4(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Address: 0x100642a04 | FUN_100642a04 */

void FUN_100642a04(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
      return;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint *)param_1 = param_2 + 0x80000001;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x100642a58 | FUN_100642a58 */

void FUN_100642a58(ulong *param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    param_2 = param_2 & 0x7fffffff;
    param_1[1] = 0;
  }
  else {
    if (param_2 == 0) {
      return;
    }
    param_2 = param_2 - 1;
  }
  *param_1 = (ulong)param_2;
  return;
}



/* Address: 0x100642a78 | FUN_100642a78 */

undefined1  [16] FUN_100642a78(void)

{
  return ZEXT816(0x100eef5b0);
}



/* Address: 0x100642a88 | FUN_100642a88 */

undefined1  [16] FUN_100642a88(void)

{
  return ZEXT816(0x100eef640);
}



/* Address: 0x100642a98 | FUN_100642a98 */

undefined1  [16] FUN_100642a98(void)

{
  return ZEXT816(0x100eef6d0);
}



/* Address: 0x100642aa8 | FUN_100642aa8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100642aa8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100642ad4 | FUN_100642ad4 */

void FUN_100642ad4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100641c30(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100642adc | FUN_100642adc */

void FUN_100642adc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100642b00 | FUN_100642b00 */

void FUN_100642b00(void)

{
  long unaff_x20;
  
  FUN_10063de60(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100642b24 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}


