/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10050cda8 | FUN_10050cda8 */

void FUN_10050cda8(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  String SVar16;
  String SVar17;
  
  lVar9 = *(long *)(unaff_x22 + 0x210);
  if (*(char *)(lVar9 + 0x78) == '\x01') {
    lVar12 = *(long *)(lVar9 + 0x80);
    *(long *)(unaff_x22 + 0x218) = lVar12;
    if (lVar12 != 0) {
      lVar13 = *(long *)(lVar9 + 0x70);
      pcVar7 = (char *)0x0;
      pvVar8 = (void *)0x0;
      _swift_beginAccess(lVar13 + 0x20,unaff_x22 + 0x1e0);
      FUN_100076688(lVar13 + 0x20,unaff_x22 + 400);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
      lVar9 = *(long *)(unaff_x22 + 0x1b0);
      FUN_100004640(unaff_x22 + 400,uVar3);
      pcVar14 = *(code **)(lVar9 + 0x70);
      _swift_retain(lVar12);
      (*pcVar14)(uVar3,lVar9);
      FUN_100004594(unaff_x22 + 400);
      if (((uint)uVar3 & 0xff) < 2) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x208);
        FUN_100076688(lVar13 + 0x20,unaff_x22 + 0x1b8);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x1d0);
        lVar9 = *(long *)(unaff_x22 + 0x1d8);
        FUN_100004640(unaff_x22 + 0x1b8,uVar3);
        puVar4 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar6 = (char *)(unaff_x22 + 0x70);
        _swift_initStackObject();
        *(undefined8 *)(puVar4 + 0x20) = 0x657a6973;
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined1 **)(puVar4 + 0x28) = &DAT_e400000000000000;
        SVar16.bridgeObject = pcVar7;
        SVar16.str = pcVar6;
        Swift::String::reserveCapacity(2,SVar16);
        uVar2 = (uint)((ulong)uVar15 >> 0x20);
        uVar11 = uVar2 >> 0x1e;
        if (uVar2 >> 0x1e < 2) {
          if (uVar11 == 0) {
            uVar10 = (ulong)*(byte *)(unaff_x22 + 0x20e);
          }
          else {
            if (SBORROW4(*(int *)(unaff_x22 + 0x204),*(int *)(unaff_x22 + 0x200))) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x10050d108);
              (*pcVar14)();
            }
            uVar10 = (ulong)(*(int *)(unaff_x22 + 0x204) - *(int *)(unaff_x22 + 0x200));
          }
        }
        else {
          uVar10 = 0;
          if ((uVar11 == 2) &&
             (lVar13 = *(long *)(*(long *)(unaff_x22 + 0x200) + 0x10),
             lVar1 = *(long *)(*(long *)(unaff_x22 + 0x200) + 0x18), uVar10 = lVar1 - lVar13,
             SBORROW8(lVar1,lVar13))) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10050cf98);
            (*pcVar14)();
          }
        }
        *(ulong *)(unaff_x22 + 0x1f8) = uVar10;
        SVar16 = Swift::CustomStringConvertible::get_description();
        SVar17.bridgeObject = pvVar8;
        SVar17.str = pcVar7;
        Swift::String::append(SVar16,SVar17);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        *(undefined8 *)(puVar4 + 0x30) = 0;
        *(undefined8 *)(puVar4 + 0x38) = 0xe000000000000000;
        puVar4[0x58] = 0;
        puVar5 = puVar4;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar4);
        FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
        *(undefined1 *)(unaff_x22 + 0x10) = 1;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x20676e69646e6553;
        *(undefined8 *)(unaff_x22 + 0x20) = 0xef6567617373656d;
        *(undefined8 *)(unaff_x22 + 0x28) = 0;
        *(undefined **)(unaff_x22 + 0x30) = puVar5;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        *(undefined8 *)(unaff_x22 + 0x40) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001b;
        *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacaf0;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x293a5f28646e6573;
        *(undefined1 **)(unaff_x22 + 0x60) = &DAT_e800000000000000;
        *(undefined8 *)(unaff_x22 + 0x68) = 0x9b;
        *(undefined1 *)(unaff_x22 + 0xd0) = 1;
        *(undefined8 *)(unaff_x22 + 0xd8) = 0x20676e69646e6553;
        *(undefined8 *)(unaff_x22 + 0xe0) = 0xef6567617373656d;
        *(undefined8 *)(unaff_x22 + 0xe8) = 0;
        *(undefined **)(unaff_x22 + 0xf0) = puVar5;
        *(undefined8 *)(unaff_x22 + 0xf8) = 0;
        *(undefined8 *)(unaff_x22 + 0x100) = 0;
        *(undefined8 *)(unaff_x22 + 0x108) = 0xd00000000000001b;
        *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dacaf0;
        *(undefined8 *)(unaff_x22 + 0x118) = 0x293a5f28646e6573;
        *(undefined1 **)(unaff_x22 + 0x120) = &DAT_e800000000000000;
        *(undefined8 *)(unaff_x22 + 0x128) = 0x9b;
        FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0x130);
        FUN_1004eaa3c(unaff_x22 + 0xd0);
        (**(code **)(lVar9 + 0x28))(unaff_x22 + 0x10,uVar3,lVar9);
        FUN_1004eaa3c(unaff_x22 + 0x10);
        FUN_100004594(unaff_x22 + 0x1b8);
      }
      _swift_task_switch(FUN_10050d108,lVar12,0);
      return;
    }
    pcVar7 = "No paired transport";
    lVar9 = -8;
  }
  else {
    pcVar7 = "Transport not connected";
    lVar9 = -4;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = lVar9 + -0x2fffffffffffffe5;
  param_1[1] = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010050cf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050d108 | FUN_10050d108 */

void FUN_10050d108(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x210);
  FUN_10050d184(*(undefined8 *)(unaff_x22 + 0x200),*(undefined8 *)(unaff_x22 + 0x208));
  _swift_task_switch(FUN_10050d150,uVar1,0);
  return;
}



/* Address: 0x10050d150 | FUN_10050d150 */

void FUN_10050d150(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x218));
                    /* WARNING: Could not recover jumptable at 0x00010050d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050d184 | FUN_10050d184 */

void FUN_10050d184(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  int iVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar13;
  uint uVar14;
  long unaff_x20;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  String SVar19;
  String SVar20;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 *local_280;
  undefined1 *local_278;
  long local_270;
  undefined8 local_268;
  undefined *local_260;
  long local_258;
  ulong local_250;
  long local_248;
  long local_240;
  ulong local_238;
  undefined8 uStack_230;
  char acStack_228 [96];
  long local_1c8;
  ulong uStack_1c0;
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100fcd490;
  FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
  local_240 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_240 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar4 = &DAT_100fcd158;
  local_248 = (long)&local_290 - extraout_x8;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = ((long)&local_290 - extraout_x8) - extraout_x8_00;
  puVar4 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar17 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(unaff_x20 + 0x70);
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    pcVar10 = (char *)0x0;
    pvVar11 = (void *)0x0;
    local_260 = puVar3;
    local_258 = param_1;
    local_250 = param_2;
    _swift_beginAccess(lVar16 + 0x20,auStack_e0);
    FUN_100076688(lVar16 + 0x20,&local_c8);
    puVar3 = puStack_a8;
    uVar5 = local_b0;
    FUN_100004640(&local_c8,local_b0);
    (**(code **)(puVar3 + 0x70))(uVar5,puVar3);
    FUN_100004594(&local_c8);
    if (((uint)uVar5 & 0xff) < 2) {
      FUN_100076688(lVar16 + 0x20,auStack_168);
      puVar6 = auStack_168;
      FUN_100004640(puVar6,local_150);
      puVar3 = &DAT_100fcd4a8;
      local_278 = puVar6;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar9 = acStack_228;
      _swift_initStackObject();
      local_280 = (undefined8 *)(puVar3 + 0x20);
      *local_280 = 0x657a6973;
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined1 **)(puVar3 + 0x28) = &DAT_e400000000000000;
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      SVar19.bridgeObject = pcVar10;
      SVar19.str = pcVar9;
      Swift::String::reserveCapacity(2,SVar19);
      local_238 = local_c8;
      uStack_230 = local_c0;
      uVar1 = (uint)(local_250 >> 0x20);
      local_270 = lStack_148;
      local_268 = local_150;
      uVar14 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar14 == 0) {
          uVar13 = local_250 >> 0x30 & 0xff;
        }
        else {
          iVar12 = (int)((ulong)local_258 >> 0x20);
          if (SBORROW4(iVar12,(int)local_258)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10050d7ac);
            (*pcVar2)();
          }
          uVar13 = (ulong)(iVar12 - (int)local_258);
        }
      }
      else {
        uVar13 = 0;
        if ((uVar14 == 2) &&
           (uVar13 = *(long *)(local_258 + 0x18) - *(long *)(local_258 + 0x10),
           SBORROW8(*(long *)(local_258 + 0x18),*(long *)(local_258 + 0x10)))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10050d4ec);
          (*pcVar2)();
        }
      }
      local_290 = 0x8000000100dacba0;
      uStack_288 = 0x8000000100dacaf0;
      local_c8 = uVar13;
      SVar19 = Swift::CustomStringConvertible::get_description();
      SVar20.bridgeObject = pvVar11;
      SVar20.str = pcVar10;
      Swift::String::append(SVar19,SVar20);
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
      *(ulong *)(puVar3 + 0x30) = local_238;
      *(undefined8 *)(puVar3 + 0x38) = uStack_230;
      puVar3[0x58] = 0;
      puVar7 = puVar3;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar3);
      FUN_1000fb4c4(local_280,&DAT_100fcb448,&DAT_100c538d0);
      local_c8 = CONCAT71(local_c8._1_7_,1);
      local_c0 = 0xd000000000000010;
      uStack_b8 = 0x8000000100dacbf0;
      local_b0 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0xd00000000000001b;
      uStack_88 = uStack_288;
      local_80 = 0xd000000000000012;
      uStack_78 = local_290;
      local_70 = 0xa8;
      local_140[0] = 1;
      local_138 = 0xd000000000000010;
      uStack_130 = 0x8000000100dacbf0;
      local_128 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0xd00000000000001b;
      uStack_100 = uStack_288;
      local_f8 = 0xd000000000000012;
      uStack_f0 = local_290;
      local_e8 = 0xa8;
      puStack_120 = puVar7;
      puStack_a8 = puVar7;
      FUN_1004eaa00(&local_c8,&local_1c8);
      FUN_1004eaa3c(local_140);
      (**(code **)(local_270 + 0x28))(&local_c8,local_268);
      FUN_1004eaa3c(&local_c8);
      FUN_100004594(auStack_168);
    }
    lVar16 = _TtC3MCP17InMemoryTransport::messageContinuation;
    _swift_beginAccess(unaff_x20 + _TtC3MCP17InMemoryTransport::messageContinuation,local_140,0,0);
    FUN_10050c9f0(unaff_x20 + lVar16,lVar18);
    lVar16 = lVar18;
    (**(code **)(lVar17 + 0x30))(lVar18,1,puVar4);
    puVar3 = local_260;
    if ((int)lVar16 == 1) {
      FUN_1000fb4c4(lVar18,&DAT_100fcd158,&DAT_100c53740);
      _swift_beginAccess(unaff_x20 + 0x88,&local_1c8,0x21,0);
      uVar15 = *(ulong *)(unaff_x20 + 0x88);
      uVar13 = uVar15;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x88) = uVar15;
      uVar8 = uVar15;
      if ((uVar13 & 1) == 0) {
        uVar8 = 0;
        FUN_1004a4ae8(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
        *(ulong *)(unaff_x20 + 0x88) = uVar8;
      }
      uVar13 = *(ulong *)(uVar8 + 0x10);
      uVar15 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        uVar15 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_1004a4ae8(uVar15,uVar13 + 1,1,uVar8);
      }
      uVar8 = local_250;
      lVar17 = local_258;
      *(ulong *)(uVar15 + 0x10) = uVar13 + 1;
      lVar16 = uVar15 + uVar13 * 0x10;
      *(long *)(lVar16 + 0x20) = local_258;
      *(ulong *)(lVar16 + 0x28) = local_250;
      *(ulong *)(unaff_x20 + 0x88) = uVar15;
      _swift_endAccess(&local_1c8);
      FUN_1001037b4(lVar17,uVar8);
    }
    else {
      (**(code **)(lVar17 + 0x20))(lVar18 - extraout_x8_01,lVar18,puVar4);
      local_1c8 = local_258;
      uStack_1c0 = local_250;
      FUN_1001037b4();
      lVar16 = local_248;
      Swift::AsyncThrowingStream::Continuation::_yield(local_248,&local_1c8,puVar4);
      (**(code **)(local_240 + 8))(lVar16,puVar3);
      (**(code **)(lVar17 + 8))(lVar18 - extraout_x8_01,puVar4);
    }
  }
  else {
    _swift_beginAccess(lVar16 + 0x20,auStack_e0,0,0);
    FUN_100076688(lVar16 + 0x20,&local_c8);
    FUN_100004640(&local_c8,local_b0);
    (**(code **)(puStack_a8 + 0x70))(local_b0,puStack_a8);
    FUN_100004594(&local_c8);
    if (((uint)local_b0 & 0xff) < 5) {
      FUN_100076688(lVar16 + 0x20,auStack_168);
      FUN_100004640(auStack_168,local_150);
      local_c8 = CONCAT71(local_c8._1_7_,4);
      local_c0 = 0xd000000000000023;
      uStack_b8 = 0x8000000100dacbc0;
      puStack_a8 = (undefined *)0x0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      local_90 = 0xd00000000000001b;
      uStack_88 = 0x8000000100dacaf0;
      local_80 = 0xd000000000000012;
      uStack_78 = 0x8000000100dacba0;
      local_70 = 0xa4;
      local_140[0] = 4;
      local_138 = 0xd000000000000023;
      uStack_130 = 0x8000000100dacbc0;
      puStack_120 = (undefined *)0x0;
      local_128 = 0;
      uStack_110 = 0;
      local_118 = 0;
      local_108 = 0xd00000000000001b;
      uStack_100 = 0x8000000100dacaf0;
      local_f8 = 0xd000000000000012;
      uStack_f0 = 0x8000000100dacba0;
      local_e8 = 0xa4;
      FUN_1004eaa00(&local_c8,&local_1c8);
      FUN_1004eaa3c(local_140);
      (**(code **)(lStack_148 + 0x28))(&local_c8,local_150,lStack_148);
      FUN_1004eaa3c(&local_c8);
      FUN_100004594(auStack_168);
    }
  }
  return;
}



/* Address: 0x10050d7ac | FUN_10050d7ac */

void FUN_10050d7ac(void)

{
  long extraout_x8;
  long extraout_x12;
  
  FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (**(code **)(extraout_x8 + 0x68))
            (&stack0xffffffffffffffd0 + -extraout_x12,
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
            );
  Swift::AsyncThrowingStream::_init
            ((BufferingPolicy)(__int8)PTR___type_metadata_for_Foundation_Data_100ea7300);
  return;
}



/* Address: 0x10050d850 | FUN_10050d850 */

void FUN_10050d850(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100fcd490;
  FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&local_90 - extraout_x8;
  puVar2 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar4 - extraout_x8_00;
  uVar3 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar3 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/InMemoryTransport.swift",0x1b,1,0xb6,param_2,0);
  }
  puVar2 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar7 = *(long *)(puVar2 + -8);
  (**(code **)(lVar7 + 0x10))(lVar5,param_1,puVar2);
  (**(code **)(lVar7 + 0x38))(lVar5,0,1,puVar2);
  lVar7 = _TtC3MCP17InMemoryTransport::messageContinuation;
  _swift_beginAccess(param_2 + _TtC3MCP17InMemoryTransport::messageContinuation,auStack_78,0x21,0);
  FUN_1005085a8(lVar5,param_2 + lVar7);
  _swift_endAccess(auStack_78);
  _swift_beginAccess(param_2 + 0x88,auStack_78,1,0);
  lVar7 = *(long *)(param_2 + 0x88);
  lVar5 = *(long *)(lVar7 + 0x10);
  if (lVar5 != 0) {
    _swift_bridgeObjectRetain(lVar7);
    puVar8 = (undefined8 *)(lVar7 + 0x20);
    do {
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      FUN_1001037b4(*puVar8,puVar8[1]);
      Swift::AsyncThrowingStream::Continuation::_yield(lVar4,&local_90,puVar2);
      (**(code **)(lVar6 + 8))(lVar4,puVar1);
      lVar5 = lVar5 + -1;
      puVar8 = puVar8 + 2;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar7);
    lVar7 = *(long *)(param_2 + 0x88);
  }
  *(undefined **)(param_2 + 0x88) = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRelease(lVar7);
  if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
    local_90 = 0;
    Swift::AsyncThrowingStream::Continuation::_finish((Continuation)&local_90);
  }
  return;
}



/* Address: 0x10050da58 | FUN_10050da58 */

void FUN_10050da58(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  FUN_1000fb4c4(unaff_x20 + _TtC3MCP17InMemoryTransport::messageContinuation,&DAT_100fcd158,
                &DAT_100c53740);
  lVar1 = *(long *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  _swift_retain(lVar1);
  while (lVar1 != 0) {
    _swift_release(lVar1);
    lVar2 = lVar1;
    _swift_isUniquelyReferenced_native();
    if ((int)lVar2 == 0) break;
    lVar2 = *(long *)(lVar1 + 0x80);
    _swift_retain_n(lVar2,2);
    _swift_release(lVar1);
    lVar1 = lVar2;
  }
  _swift_release(lVar1);
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x10050db04 | FUN_10050db04 */

void FUN_10050db04(void)

{
  FUN_10050da58();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x10050db1c | FUN_10050db1c */

void FUN_10050db1c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_10050c164();
  return;
}



/* Address: 0x10050db60 | FUN_10050db60 */

void FUN_10050db60(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x210;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_10050c480();
  return;
}



/* Address: 0x10050dba4 | FUN_10050dba4 */

void FUN_10050dba4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x220;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_10050cd88(param_1,param_2);
  return;
}



/* Address: 0x10050dc00 | FUN_10050dc00 */

void FUN_10050dc00(void)

{
  long extraout_x8;
  long extraout_x12;
  
  FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (**(code **)(extraout_x8 + 0x68))
            (&stack0xffffffffffffffd0 + -extraout_x12,
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
            );
  Swift::AsyncThrowingStream::_init
            ((BufferingPolicy)(__int8)PTR___type_metadata_for_Foundation_Data_100ea7300);
  return;
}



/* Address: 0x10050dca4 | FUN_10050dca4 */

void FUN_10050dca4(void)

{
  FUN_10050d850();
  return;
}



/* Address: 0x10050dcac | FUN_10050dcac */

void FUN_10050dcac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10050dcd0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x10050dcd0 | FUN_10050dcd0 */

void FUN_10050dcd0(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fcdd90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10050c12c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c541b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c541b8,uVar1);
  DAT_100fcdd90 = pTVar2;
  return;
}



/* Address: 0x10050dd14 | FUN_10050dd14 */

void FUN_10050dd14(void)

{
  FUN_10050c12c(0);
  return;
}



/* Address: 0x10050dd1c | FUN_10050dd1c */

void FUN_10050dd1c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  puStack_48 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_50 = &DAT_100c54258;
  local_40 = &DAT_100c54270;
  puStack_38 = &DAT_100c54288;
  local_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  lVar1 = 0x13f;
  FUN_1005082d8();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,6,&local_50,param_1 + 0x50);
  }
  return;
}



/* Address: 0x10050ddc4 | thunk_FUN_10050dca4 */

void thunk_FUN_10050dca4(void)

{
  FUN_10050d850();
  return;
}



/* Address: 0x10050ddc8 | FUN_10050ddc8 */

undefined * FUN_10050ddc8(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  Iterator IVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long extraout_x8;
  undefined *puVar7;
  long lVar8;
  tuple2 tVar9;
  
  IVar3 = Foundation::Data::Iterator::typeMetadataAccessor();
  lVar8 = *(long *)(IVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  uVar1 = (uint)(param_2 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      puVar7 = (undefined *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar6 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar6,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10050def8);
        (*pcVar2)();
      }
      puVar7 = (undefined *)(long)(iVar6 - (int)param_1);
    }
  }
  else {
    if (uVar5 != 2) goto LAB_10050dec0;
    puVar7 = (undefined *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050def4);
      (*pcVar2)();
    }
  }
  if (puVar7 != (undefined *)0x0) {
    puVar4 = puVar7;
    FUN_10051b064(puVar7,0);
    tVar9 = Foundation::Data::_copyContents
                      ((UnsafeMutableBufferPointer<__int8>)
                       (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)),
                       (Data)(puVar4 + 0x20));
    FUN_10003bf2c(param_1,param_2);
    (**(code **)(lVar8 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar3.unknown);
    if (tVar9._.unknown.unknown == puVar7) {
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10050deac);
    (*pcVar2)();
  }
LAB_10050dec0:
  FUN_10003bf2c(param_1,param_2);
  return PTR___swiftEmptyArrayStorage_100eae0d8;
}



/* Address: 0x10050def8 | FUN_10050def8 */

void FUN_10050def8(void)

{
  undefined8 *unaff_x20;
  
  Network::NWConnection::_set_stateUpdateHandler((NWConnection *)*unaff_x20);
  return;
}



/* Address: 0x10050df18 | FUN_10050df18 */

void FUN_10050df18(undefined8 param_1)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010050df4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10050df50 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::init */

Date Foundation::Date::init(void)

{
  Date DVar1;
  
  DVar1 = init();
  return (Date)DVar1.unknown;
}



/* Address: 0x10050df54 | FUN_10050df54 */

void FUN_10050df54(undefined8 param_1,undefined8 param_2)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010050df8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
  return;
}



/* Address: 0x10050df90 | FUN_10050df90 */

void FUN_10050df90(undefined8 param_1,__DataStorage *param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  __DataStorage *p_Var5;
  __DataStorage *p_Var6;
  long extraout_x8;
  __DataStorage *p_Var7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  lVar3 = 0;
  FUN_10050e1b0();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  if (*(ulong *)(param_2 + 0x10) < 0xc) {
LAB_10050e09c:
    _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010050e0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x38))(param_1,1,1,lVar3);
    return;
  }
  uVar4 = 0;
  FUN_1000f7830(&DAT_100fcb3e8,&DAT_100c54310);
  _swift_initStaticObject();
  FUN_10051b0d4();
  if ((uVar4 & 1) == 0) goto LAB_10050e09c;
  p_Var6 = param_2 + 0x20;
  FUN_1004bb0f8(param_2,p_Var6,4,0x19);
  uVar1 = (uint)((ulong)p_Var6 >> 0x20);
  uVar8 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    p_Var7 = param_2;
    if (uVar8 == 0) goto LAB_10050e120;
    lVar10 = (long)(int)param_2;
    if ((long)param_2 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e190);
      (*pcVar2)();
    }
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)((ulong)p_Var6 & 0x3fffffffffffffff),param_2);
    if (p_Var7 == (__DataStorage *)0x0) {
      Foundation::__DataStorage::get__length
                ((__DataStorage *)((ulong)p_Var6 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e1b0);
      (*pcVar2)();
    }
    p_Var5 = (__DataStorage *)
             Foundation::__DataStorage::get__offset
                       ((__DataStorage *)((ulong)p_Var6 & 0x3fffffffffffffff),p_Var7);
    if (SBORROW8(lVar10,(long)p_Var5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e198);
      (*pcVar2)();
    }
    p_Var7 = p_Var7 + (lVar10 - (long)p_Var5);
    Foundation::__DataStorage::get__length
              ((__DataStorage *)((ulong)p_Var6 & 0x3fffffffffffffff),p_Var5);
    if (p_Var7 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e09c);
      (*pcVar2)();
    }
  }
  else {
    if (uVar8 != 2) {
      p_Var7 = (__DataStorage *)0x0;
      goto LAB_10050e120;
    }
    lVar10 = *(long *)(param_2 + 0x10);
    p_Var7 = param_2;
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)((ulong)p_Var6 & 0x3fffffffffffffff),param_2);
    if (p_Var7 == (__DataStorage *)0x0) {
      Foundation::__DataStorage::get__length
                ((__DataStorage *)((ulong)p_Var6 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_10050e1a0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e1a4);
      (*pcVar2)();
    }
    p_Var5 = (__DataStorage *)
             Foundation::__DataStorage::get__offset
                       ((__DataStorage *)((ulong)p_Var6 & 0x3fffffffffffffff),p_Var7);
    if (SBORROW8(lVar10,(long)p_Var5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e194);
      (*pcVar2)();
    }
    p_Var7 = p_Var7 + (lVar10 - (long)p_Var5);
    Foundation::__DataStorage::get__length
              ((__DataStorage *)((ulong)p_Var6 & 0x3fffffffffffffff),p_Var5);
    if (p_Var7 == (__DataStorage *)0x0) goto LAB_10050e1a0;
  }
  p_Var7 = *(__DataStorage **)p_Var7;
LAB_10050e120:
  Foundation::Date::init((double)p_Var7 / 1000.0);
  FUN_10003bf2c(param_2,p_Var6);
  FUN_10051b17c(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar3);
  return;
}



/* Address: 0x10050e1b0 | FUN_10050e1b0 */

void FUN_10050e1b0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fce1f8,&TargetStructDescriptor_100cb35d4);
  return;
}



/* Address: 0x10050e1c4 | FUN_10050e1c4 */

bool FUN_10050e1c4(long param_1,Data param_2,__int64 param_3)

{
  bool bVar1;
  Iterator IVar2;
  long extraout_x8;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [14];
  char local_52;
  char local_51;
  
  IVar2 = Foundation::Data::Iterator::typeMetadataAccessor();
  lVar5 = *(long *)(IVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  FUN_1001037b4(param_2.unknown,param_3);
  Foundation::Data::Iterator::init(param_2,param_3);
  lVar4 = *(long *)(param_1 + 0x10);
  FUN_100003a00(&DAT_100fce338,PTR_typeMetadataAccessor_100ea72c8,
                PTR_Foundation__Foundation__Data__Iterator_>Swift__IteratorProtocol_100ea72d8);
  Swift::IteratorProtocol::_next();
  if (lVar4 != 0) {
    pcVar3 = (char *)(param_1 + 0x20);
    do {
      if ((local_51 == '\x01') || (local_52 != *pcVar3)) {
        bVar1 = false;
        goto LAB_10050e2f4;
      }
      Swift::IteratorProtocol::_next();
      lVar4 = lVar4 + -1;
      pcVar3 = pcVar3 + 1;
    } while (lVar4 != 0);
  }
  bVar1 = local_51 == '\x01';
LAB_10050e2f4:
  (**(code **)(lVar5 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar2.unknown);
  return bVar1;
}



/* Address: 0x10050e324 | FUN_10050e324 */

undefined * FUN_10050e324(void)

{
  undefined *puVar1;
  code *pcVar2;
  Date DVar3;
  long **pplVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  long local_78;
  long *local_70;
  long **pplStack_68;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar3.unknown = &DAT_100fcb3e8;
  FUN_1000f7830(&DAT_100fcb3e8,&DAT_100c54310);
  puVar6 = &DAT_100fcdf10;
  _swift_initStaticObject();
  FUN_1004bc9a8();
  local_48 = DVar3.unknown;
  puStack_40 = puVar6;
  dVar7 = Foundation::Date::get_timeIntervalSinceReferenceDate(DVar3);
  dVar7 = dVar7 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e45c);
    (*pcVar2)();
  }
  if (dVar7 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e460);
    (*pcVar2)();
  }
  if (1.8446744073709552e+19 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e464);
    (*pcVar2)();
  }
  local_78 = (long)dVar7;
  local_70 = &local_78;
  pplStack_68 = &local_70;
  local_58 = PTR___type_metadata_for_Swift_UnsafeRawBufferPointer_100eac370;
  puStack_50 = 
  PTR___protocol_witness_table_for_Swift_UnsafeRawBufferPointer___Foundation_ContiguousBytes_in_Foundation_100ea7880
  ;
  pplVar4 = &local_70;
  FUN_100004640();
  Foundation::Data::_Representation::append
            ((UnsafeRawBufferPointer)*pplVar4,(_Representation)(__int8)pplVar4[1]);
  FUN_100004594(&local_70);
  puVar1 = puStack_40;
  puVar6 = local_48;
  FUN_1001037b4(local_48,puStack_40);
  puVar5 = puVar6;
  FUN_10050ddc8(puVar6,puVar1);
  FUN_10003bf2c(puVar6,puVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10050e468 | FUN_10050e468 */

undefined1  [16] FUN_10050e468(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  FUN_10050e324();
  uVar1 = param_1;
  FUN_1004bc9a8();
  _swift_bridgeObjectRelease(param_1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x10050e4ac | FUN_10050e4ac */

uint FUN_10050e4ac(long param_1,ulong param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = (uint)(param_2 >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if (3 < (param_2 >> 0x30 & 0xff)) {
LAB_10050e4e8:
        FUN_1001037b4();
        FUN_100371514(&local_40,4,param_1,param_2);
        uVar2 = 0;
        FUN_1000f7830(&DAT_100fcb3e8,&DAT_100c54310);
        _swift_initStaticObject();
        FUN_10050e1c4();
        FUN_10003bf2c(local_40,uStack_38);
        return uVar2 & 1;
      }
    }
    else {
      iVar4 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar4,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10050e59c);
        (*pcVar1)();
      }
      if (3 < iVar4 - (int)param_1) goto LAB_10050e4e8;
    }
  }
  else if (uVar3 == 2) {
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10050e598);
      (*pcVar1)();
    }
    if (3 < *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) goto LAB_10050e4e8;
  }
  return 0;
}



/* Address: 0x10050e59c | FUN_10050e59c */

void FUN_10050e59c(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if (0xb < (param_3 >> 0x30 & 0xff)) {
LAB_10050e5ec:
        FUN_1001037b4();
        FUN_10050ddc8(param_2,param_3);
        FUN_10050df90(param_1);
        return;
      }
    }
    else {
      iVar5 = (int)((ulong)param_2 >> 0x20);
      if (SBORROW4(iVar5,(int)param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e668);
        (*pcVar2)();
      }
      if (0xb < iVar5 - (int)param_2) goto LAB_10050e5ec;
    }
  }
  else if (uVar4 == 2) {
    if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e664);
      (*pcVar2)();
    }
    if (0xb < *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) goto LAB_10050e5ec;
  }
  lVar3 = 0;
  FUN_10050e1b0();
                    /* WARNING: Could not recover jumptable at 0x00010050e65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,1,1,lVar3);
  return;
}



/* Address: 0x10050e668 | FUN_10050e668 */

void FUN_10050e668(undefined8 *param_1)

{
  FUN_10050df90(*param_1);
  return;
}



/* Address: 0x10050e670 | FUN_10050e670 */

void FUN_10050e670(undefined8 *param_1,undefined8 param_2)

{
  FUN_10050e324();
  *param_1 = param_2;
  return;
}



/* Address: 0x10050e694 | FUN_10050e694 */

void FUN_10050e694(void)

{
  FUN_1005a09c8(0);
  return;
}



/* Address: 0x10050e69c | thunk_FUN_10056f6f8 */

void thunk_FUN_10056f6f8(void)

{
  FUN_10056f6f8();
  return;
}



/* Address: 0x10050e6a0 | thunk_FUN_1005a09c8 */

void thunk_FUN_1005a09c8(void)

{
  FUN_1005a09c8();
  return;
}



/* Address: 0x10050e6a4 | FUN_10050e6a4 */

uint FUN_10050e6a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10050e324();
  uVar1 = param_1;
  FUN_10050e324();
  uVar2 = param_1;
  thunk_FUN_100556d68(param_1,uVar1);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(uVar1);
  return (uint)uVar2 & 1;
}



/* Address: 0x10050e704 | FUN_10050e704 */

undefined * FUN_10050e704(void)

{
  return &DAT_100c542a0;
}



/* Address: 0x10050e710 | FUN_10050e710 */

undefined8 FUN_10050e710(void)

{
  return 1;
}



/* Address: 0x10050e71c | FUN_10050e71c */

undefined * FUN_10050e71c(void)

{
  return &DAT_100c542b0;
}



/* Address: 0x10050e728 | FUN_10050e728 */

undefined8 FUN_10050e728(void)

{
  return 0;
}



/* Address: 0x10050e734 | FUN_10050e734 */

byte FUN_10050e734(double param_1,double param_2,byte param_3,byte param_4)

{
  return param_1 == param_2 & (param_3 ^ param_4 ^ 0xff);
}



/* Address: 0x10050e748 | FUN_10050e748 */

void FUN_10050e748(double param_1,undefined8 param_2,Hasher param_3)

{
  Hasher HVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  
  uVar3 = (undefined4)((ulong)param_3.unknown >> 0x20);
  uVar2 = SUB84(param_3.unknown,0);
  Swift::Hasher::_combine((byte)param_3.unknown & 1,param_3);
  dVar4 = 0.0;
  if (param_1 != 0.0) {
    dVar4 = param_1;
  }
  HVar1.unknown._4_4_ = uVar3;
  HVar1.unknown._0_4_ = uVar2;
  Swift::Hasher::_combine((__uint64)dVar4,HVar1);
  return;
}



/* Address: 0x10050e78c | FUN_10050e78c */

void FUN_10050e78c(undefined *param_1,byte param_2,Hasher param_3)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(param_2 & 1,param_3);
  HVar1.unknown = (undefined *)0x0;
  if ((double)param_1 != 0.0) {
    HVar1.unknown = param_1;
  }
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_3);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10050e7f4 | FUN_10050e7f4 */

void FUN_10050e7f4(void)

{
  undefined1 *unaff_x20;
  
  FUN_10050e78c(*(undefined8 *)(unaff_x20 + 8),*unaff_x20);
  return;
}



/* Address: 0x10050e800 | FUN_10050e800 */

void FUN_10050e800(undefined8 param_1,Hasher param_2)

{
  __uint8 *unaff_x20;
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(unaff_x20 + 8);
  Swift::Hasher::_combine(*unaff_x20,param_2);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  Swift::Hasher::_combine((__uint64)dVar1,param_2);
  return;
}



/* Address: 0x10050e848 | FUN_10050e848 */

void FUN_10050e848(__int64 param_1,Hasher param_2)

{
  __uint8 _Var1;
  Hasher HVar2;
  __uint8 *unaff_x20;
  undefined *puVar3;
  
  _Var1 = *unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 8);
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(_Var1,param_2);
  HVar2.unknown = (undefined *)0x0;
  if ((double)puVar3 != 0.0) {
    HVar2.unknown = puVar3;
  }
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10050e8ac | FUN_10050e8ac */

bool FUN_10050e8ac(char *param_1,char *param_2)

{
  if (*param_1 != *param_2) {
    return false;
  }
  return *(double *)(param_1 + 8) == *(double *)(param_2 + 8);
}



/* Address: 0x10050e8d8 | FUN_10050e8d8 */

undefined * FUN_10050e8d8(void)

{
  return &DAT_100c542c0;
}



/* Address: 0x10050e8e4 | FUN_10050e8e4 */

undefined8 FUN_10050e8e4(void)

{
  return 1;
}



/* Address: 0x10050e8f4 | FUN_10050e8f4 */

undefined * FUN_10050e8f4(void)

{
  return &DAT_100c542d8;
}



/* Address: 0x10050e900 | FUN_10050e900 */

undefined8 FUN_10050e900(void)

{
  return 0;
}



/* Address: 0x10050e910 | FUN_10050e910 */

double FUN_10050e910(double param_1,long param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(param_2,1)) {
    _pow(param_1,(double)(param_2 + -1));
    return param_1 * 0.5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10050e93c);
  (*pcVar1)();
}



/* Address: 0x10050e918 | FUN_10050e918 */

double FUN_10050e918(long param_1,double param_2)

{
  _pow(param_2,(double)param_1);
  return param_2 * 0.5;
}



/* Address: 0x10050e93c | FUN_10050e93c */

byte FUN_10050e93c(double param_1,double param_2,byte param_3,long param_4,byte param_5,long param_6
                  )

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_1 == param_2) {
    bVar1 = param_4 == param_6 & (param_3 ^ param_5 ^ 0xff);
  }
  return bVar1;
}



/* Address: 0x10050e958 | FUN_10050e958 */

void FUN_10050e958(double param_1,undefined8 param_2,Hasher param_3,__uint64 param_4)

{
  Hasher HVar1;
  Hasher HVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  uVar4 = (undefined4)((ulong)param_3.unknown >> 0x20);
  uVar3 = SUB84(param_3.unknown,0);
  Swift::Hasher::_combine((byte)param_3.unknown & 1,param_3);
  HVar1.unknown._4_4_ = uVar4;
  HVar1.unknown._0_4_ = uVar3;
  Swift::Hasher::_combine(param_4,HVar1);
  dVar5 = 0.0;
  if (param_1 != 0.0) {
    dVar5 = param_1;
  }
  HVar2.unknown._4_4_ = uVar4;
  HVar2.unknown._0_4_ = uVar3;
  Swift::Hasher::_combine((__uint64)dVar5,HVar2);
  return;
}



/* Address: 0x10050e9a8 | FUN_10050e9a8 */

void FUN_10050e9a8(undefined *param_1,byte param_2,undefined *param_3)

{
  Hasher HVar1;
  Hasher HVar2;
  
  HVar2.unknown = param_3;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(param_2 & 1,HVar2);
  Swift::Hasher::_combine((__uint64)param_3,HVar2);
  HVar1.unknown = (undefined *)0x0;
  if ((double)param_1 != 0.0) {
    HVar1.unknown = param_1;
  }
  Swift::Hasher::_combine((__uint64)HVar1.unknown,HVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10050ea20 | FUN_10050ea20 */

void FUN_10050ea20(void)

{
  undefined1 *unaff_x20;
  
  FUN_10050e9a8(*(undefined8 *)(unaff_x20 + 0x10),*unaff_x20,*(undefined8 *)(unaff_x20 + 8));
  return;
}



/* Address: 0x10050ea30 | FUN_10050ea30 */

void FUN_10050ea30(undefined8 param_1,Hasher param_2)

{
  __uint8 *unaff_x20;
  __uint64 _Var1;
  double dVar2;
  double dVar3;
  
  _Var1 = *(__uint64 *)(unaff_x20 + 8);
  dVar3 = *(double *)(unaff_x20 + 0x10);
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  dVar2 = 0.0;
  if (dVar3 != 0.0) {
    dVar2 = dVar3;
  }
  Swift::Hasher::_combine((__uint64)dVar2,param_2);
  return;
}



/* Address: 0x10050ea8c | FUN_10050ea8c */

void FUN_10050ea8c(__int64 param_1,Hasher param_2)

{
  __uint8 _Var1;
  Hasher HVar2;
  __uint8 *unaff_x20;
  __uint64 _Var3;
  undefined *puVar4;
  
  _Var1 = *unaff_x20;
  _Var3 = *(__uint64 *)(unaff_x20 + 8);
  puVar4 = *(undefined **)(unaff_x20 + 0x10);
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var3,param_2);
  HVar2.unknown = (undefined *)0x0;
  if ((double)puVar4 != 0.0) {
    HVar2.unknown = puVar4;
  }
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10050eb08 | FUN_10050eb08 */

bool FUN_10050eb08(char *param_1,char *param_2)

{
  if (*param_1 != *param_2 || *(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    return false;
  }
  return *(double *)(param_1 + 0x10) == *(double *)(param_2 + 0x10);
}



/* Address: 0x10050eb40 | FUN_10050eb40 */

undefined * FUN_10050eb40(void)

{
  return &DAT_100c542f0;
}



/* Address: 0x10050eb4c | FUN_10050eb4c */

undefined1  [16] FUN_10050eb4c(void)

{
  return ZEXT816(0xa00000);
}



/* Address: 0x10050eb58 | FUN_10050eb58 */

undefined * FUN_10050eb58(void)

{
  return &DAT_100c54300;
}



/* Address: 0x10050eb64 | FUN_10050eb64 */

undefined8 FUN_10050eb64(long param_1,char param_2,long param_3,char param_4)

{
  if (param_2 == '\x01') {
    if (param_4 == '\x01') {
      return 1;
    }
  }
  else if ((param_4 != '\x01') && (param_1 == param_3)) {
    return 1;
  }
  return 0;
}


