/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004f740c | FUN_1004f740c */

void FUN_1004f740c(void)

{
  AsyncBytes AVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x9b8) + _TtC3MCP19HTTPClientTransport::logger);
  *(long *)(unaff_x22 + 0xa00) = lVar8;
  _swift_beginAccess(lVar8 + 0x20,unaff_x22 + 0x910,0,0);
  FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x8a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x8b8);
  lVar6 = *(long *)(unaff_x22 + 0x8c0);
  FUN_100004640(unaff_x22 + 0x8a0,uVar4);
  (**(code **)(lVar6 + 0x70))(uVar4,lVar6);
  FUN_100004594(unaff_x22 + 0x8a0);
  if (((uint)uVar4 & 0xff) < 2) {
    FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x828);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x840);
    lVar6 = *(long *)(unaff_x22 + 0x848);
    FUN_100004640(unaff_x22 + 0x828,uVar4);
    *(undefined1 *)(unaff_x22 + 0x430) = 1;
    *(undefined8 *)(unaff_x22 + 0x438) = 0x1000000000000022;
    *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100dab730;
    *(undefined8 *)(unaff_x22 + 0x450) = 0;
    *(undefined8 *)(unaff_x22 + 0x448) = 0;
    *(undefined8 *)(unaff_x22 + 0x460) = 0;
    *(undefined8 *)(unaff_x22 + 0x458) = 0;
    *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x478) = 0x53737365636f7270;
    *(undefined8 *)(unaff_x22 + 0x480) = 0xee00293a5f284553;
    *(undefined8 *)(unaff_x22 + 0x488) = 0x286;
    *(undefined1 *)(unaff_x22 + 0x250) = 1;
    *(undefined8 *)(unaff_x22 + 600) = 0x1000000000000022;
    *(undefined8 *)(unaff_x22 + 0x260) = 0x8000000100dab730;
    *(undefined8 *)(unaff_x22 + 0x270) = 0;
    *(undefined8 *)(unaff_x22 + 0x268) = 0;
    *(undefined8 *)(unaff_x22 + 0x280) = 0;
    *(undefined8 *)(unaff_x22 + 0x278) = 0;
    *(undefined8 *)(unaff_x22 + 0x288) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x298) = 0x53737365636f7270;
    *(undefined8 *)(unaff_x22 + 0x2a0) = 0xee00293a5f284553;
    *(undefined8 *)(unaff_x22 + 0x2a8) = 0x286;
    FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0x2b0);
    FUN_1004eaa3c(unaff_x22 + 0x250);
    (**(code **)(lVar6 + 0x28))(unaff_x22 + 0x430,uVar4,lVar6);
    FUN_1004eaa3c(unaff_x22 + 0x430);
    FUN_100004594(unaff_x22 + 0x828);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x9f8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x9f0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x9b0);
  AVar1 = AsyncBytes::_typeMetadataAccessor();
  (**(code **)(*(long *)(AVar1.unknown + -8) + 0x10))(uVar5,uVar7,AVar1.unknown);
  FUN_1005cfcc8(unaff_x22 + 0x8f0,uVar4);
  FUN_1000fb4c4(uVar5,&DAT_100fcd498,&DAT_100c538b8);
  *(undefined8 *)(unaff_x22 + 0xa08) = _TtC3MCP19HTTPClientTransport::lastEventID;
  *(undefined8 *)(unaff_x22 + 0xa10) = _TtC3MCP19HTTPClientTransport::retryInterval;
  *(undefined8 *)(unaff_x22 + 0xa18) = _TtC3MCP19HTTPClientTransport::messageContinuation;
  plVar2 = (long *)0x250;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa20) = plVar2;
  puVar3 = &DAT_100fcd4a0;
  FUN_1000f7830(&DAT_100fcd4a0,&DAT_100c538c0);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1004f7674;
  FUN_1005cfe84(unaff_x22 + 0x6d0,puVar3);
  return;
}



/* Address: 0x1004f7674 | FUN_1004f7674 */

void FUN_1004f7674(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa20));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x9b8);
    *(undefined1 *)(lVar3 + 0x709) = 0;
    *(undefined8 *)(lVar3 + 0xa28) = 0;
    pcVar1 = FUN_1004f76dc;
  }
  else {
    *(long *)(lVar3 + 0xa48) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x9b8);
    pcVar1 = FUN_1004f8780;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1004f76dc | FUN_1004f76dc */

void FUN_1004f76dc(Task param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  Encoding EVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  long unaff_x22;
  char *pcVar18;
  ulong uVar19;
  Encoding using;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  char *pcVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  
  EVar14.unknown = *(undefined **)(unaff_x22 + 0x6f8);
  if (EVar14.unknown == (undefined *)0x0) {
    _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x8f0));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x908));
    lVar21 = *(long *)(unaff_x22 + 0xa28);
LAB_1004f7d48:
    FUN_100076688(*(long *)(unaff_x22 + 0xa00) + 0x20,unaff_x22 + 0x7d8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x7f0);
    lVar15 = *(long *)(unaff_x22 + 0x7f8);
    FUN_100004640(unaff_x22 + 0x7d8,uVar12);
    (**(code **)(lVar15 + 0x70))(uVar12,lVar15);
    FUN_100004594(unaff_x22 + 0x7d8);
    if (((uint)uVar12 & 0xff) < 2) {
      cVar3 = *(char *)(unaff_x22 + 0x709);
      FUN_100076688(*(long *)(unaff_x22 + 0xa00) + 0x20,unaff_x22 + 0x710);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x728);
      lVar15 = *(long *)(unaff_x22 + 0x730);
      FUN_100004640();
      puVar6 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar18 = (char *)0xa0;
      pcVar20 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar6 + 0x20) = 0x725073746e657665;
      *(undefined8 *)(puVar6 + 0x18) = 4;
      *(undefined8 *)(puVar6 + 0x10) = 2;
      *(undefined8 *)(puVar6 + 0x28) = 0xef6465737365636f;
      SVar31.bridgeObject = pcVar20;
      SVar31.str = pcVar18;
      Swift::String::reserveCapacity(2,SVar31);
      *(long *)(unaff_x22 + 0x9a0) = lVar21;
      SVar26 = Swift::CustomStringConvertible::get_description();
      SVar37.bridgeObject = param_4;
      SVar37.str = pcVar20;
      pcVar18 = SVar26.bridgeObject;
      Swift::String::append(SVar26,SVar37);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      *(undefined8 *)(puVar6 + 0x30) = 0;
      *(undefined8 *)(puVar6 + 0x38) = 0xe000000000000000;
      puVar6[0x58] = 0;
      *(undefined8 *)(puVar6 + 0x60) = 0x61746144646168;
      *(undefined1 **)(puVar6 + 0x68) = &DAT_e700000000000000;
      SVar32.bridgeObject = pcVar20;
      SVar32.str = pcVar18;
      Swift::String::reserveCapacity(2,SVar32);
      bVar5 = cVar3 == '\0';
      pcVar18 = (char *)0x65757274;
      if (bVar5) {
        pcVar18 = (char *)0x65736c6166;
      }
      puVar17 = &DAT_e400000000000000;
      if (bVar5) {
        puVar17 = &DAT_e500000000000000;
      }
      SVar27.bridgeObject = puVar17;
      SVar27.str = pcVar18;
      SVar38.bridgeObject = param_4;
      SVar38.str = pcVar20;
      Swift::String::append(SVar27,SVar38);
      _swift_bridgeObjectRelease(puVar17);
      *(undefined8 *)(puVar6 + 0x70) = 0;
      *(undefined8 *)(puVar6 + 0x78) = 0xe000000000000000;
      puVar6[0x98] = 0;
      puVar7 = puVar6;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar6);
      puVar8 = &DAT_100fcb448;
      FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
      _swift_arrayDestroy(puVar6 + 0x20,2,puVar8);
      _swift_deallocClassInstance(puVar6,0x20,7);
      *(undefined1 *)(unaff_x22 + 0x1f0) = 1;
      *(undefined8 *)(unaff_x22 + 0x1f8) = 0x100000000000001e;
      *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dab760;
      *(undefined8 *)(unaff_x22 + 0x208) = 0;
      *(undefined **)(unaff_x22 + 0x210) = puVar7;
      *(undefined8 *)(unaff_x22 + 0x220) = 0;
      *(undefined8 *)(unaff_x22 + 0x218) = 0;
      *(undefined8 *)(unaff_x22 + 0x228) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x238) = 0x53737365636f7270;
      *(undefined8 *)(unaff_x22 + 0x240) = 0xee00293a5f284553;
      *(undefined8 *)(unaff_x22 + 0x248) = 0x2aa;
      *(undefined1 *)(unaff_x22 + 0x370) = 1;
      *(undefined8 *)(unaff_x22 + 0x378) = 0x100000000000001e;
      *(undefined8 *)(unaff_x22 + 0x380) = 0x8000000100dab760;
      *(undefined8 *)(unaff_x22 + 0x388) = 0;
      *(undefined **)(unaff_x22 + 0x390) = puVar7;
      *(undefined8 *)(unaff_x22 + 0x3a0) = 0;
      *(undefined8 *)(unaff_x22 + 0x398) = 0;
      *(undefined8 *)(unaff_x22 + 0x3a8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x3b0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x3b8) = 0x53737365636f7270;
      *(undefined8 *)(unaff_x22 + 0x3c0) = 0xee00293a5f284553;
      *(undefined8 *)(unaff_x22 + 0x3c8) = 0x2aa;
      FUN_1004eaa00(unaff_x22 + 0x1f0,unaff_x22 + 0x3d0);
      FUN_1004eaa3c(unaff_x22 + 0x370);
      (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x1f0,uVar12,lVar15);
      FUN_1004eaa3c(unaff_x22 + 0x1f0);
      FUN_100004594(unaff_x22 + 0x710);
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x9e8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x9d0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x9f8));
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001004f805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x709));
    return;
  }
  pcVar20 = ((String *)(unaff_x22 + 0x6d0))->str;
  puVar17 = *(undefined1 **)(unaff_x22 + 0x6d8);
  SVar26 = *(String *)(unaff_x22 + 0x6d0);
  pcVar18 = *(char **)(unaff_x22 + 0x6e0);
  pcVar23 = *(char **)(unaff_x22 + 0x6e8);
  uVar22 = *(ulong *)(unaff_x22 + 0x6f0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x700);
  cVar3 = *(char *)(unaff_x22 + 0x708);
  lVar21 = *(long *)(unaff_x22 + 0xa28) + 1;
  *(long *)(unaff_x22 + 0xa30) = lVar21;
  if (SCARRY8(*(long *)(unaff_x22 + 0xa28),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f86a8);
    (*pcVar4)();
  }
  bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  lVar15 = *(long *)(unaff_x22 + 0xa00);
  if (bVar5) {
    FUN_1000fb4c4(unaff_x22 + 0x6d0,&DAT_100fcd4b0,&DAT_100c538d8);
    FUN_100076688(lVar15 + 0x20,unaff_x22 + 0x7b0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x7c8);
    lVar15 = *(long *)(unaff_x22 + 2000);
    FUN_100004640(unaff_x22 + 0x7b0,uVar12);
    (**(code **)(lVar15 + 0x70))(uVar12,lVar15);
    FUN_100004594(unaff_x22 + 0x7b0);
    if (((uint)uVar12 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0xa00) + 0x20,unaff_x22 + 0x788);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x7a0);
      lVar15 = *(long *)(unaff_x22 + 0x7a8);
      FUN_100004640(unaff_x22 + 0x788,uVar12);
      puVar6 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar18 = (char *)0x60;
      pcVar20 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar6 + 0x20) = 0x725073746e657665;
      *(undefined8 *)(puVar6 + 0x18) = 2;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      *(undefined8 *)(puVar6 + 0x28) = 0xef6465737365636f;
      SVar30.bridgeObject = pcVar20;
      SVar30.str = pcVar18;
      Swift::String::reserveCapacity(2,SVar30);
      *(long *)(unaff_x22 + 0x9a8) = lVar21;
      SVar26 = Swift::CustomStringConvertible::get_description();
      SVar36.bridgeObject = param_4;
      SVar36.str = pcVar20;
      Swift::String::append(SVar26,SVar36);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      *(undefined8 *)(puVar6 + 0x30) = 0;
      *(undefined8 *)(puVar6 + 0x38) = 0xe000000000000000;
      puVar6[0x58] = 0;
      puVar8 = puVar6;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar6);
      FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
      _swift_deallocClassInstance(puVar6,0x20,7);
      *(undefined1 *)(unaff_x22 + 400) = 1;
      *(undefined8 *)(unaff_x22 + 0x198) = 0x100000000000001f;
      *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dab7f0;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
      *(undefined **)(unaff_x22 + 0x1b0) = puVar8;
      *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x1d8) = 0x53737365636f7270;
      *(undefined8 *)(unaff_x22 + 0x1e0) = 0xee00293a5f284553;
      *(undefined8 *)(unaff_x22 + 0x1e8) = 0x28e;
      *(undefined1 *)(unaff_x22 + 0x310) = 1;
      *(undefined8 *)(unaff_x22 + 0x318) = 0x100000000000001f;
      *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dab7f0;
      *(undefined8 *)(unaff_x22 + 0x328) = 0;
      *(undefined **)(unaff_x22 + 0x330) = puVar8;
      *(undefined8 *)(unaff_x22 + 0x340) = 0;
      *(undefined8 *)(unaff_x22 + 0x338) = 0;
      *(undefined8 *)(unaff_x22 + 0x348) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x358) = 0x53737365636f7270;
      *(undefined8 *)(unaff_x22 + 0x360) = 0xee00293a5f284553;
      *(undefined8 *)(unaff_x22 + 0x368) = 0x28e;
      FUN_1004eaa00(unaff_x22 + 400,unaff_x22 + 0x10);
      FUN_1004eaa3c(unaff_x22 + 0x310);
      (**(code **)(lVar15 + 0x28))(unaff_x22 + 400,uVar12,lVar15);
      FUN_1004eaa3c(unaff_x22 + 400);
      _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x8f0));
      _swift_release(*(undefined8 *)(unaff_x22 + 0x908));
      FUN_100004594(unaff_x22 + 0x788);
    }
    else {
      _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x8f0));
      _swift_release(*(undefined8 *)(unaff_x22 + 0x908));
    }
    goto LAB_1004f7d48;
  }
  FUN_100076688(lVar15 + 0x20,unaff_x22 + 0x760);
  uVar19 = *(ulong *)(unaff_x22 + 0x778);
  lVar21 = *(long *)(unaff_x22 + 0x780);
  FUN_100004640(unaff_x22 + 0x760,uVar19);
  (**(code **)(lVar21 + 0x70))(uVar19,lVar21);
  FUN_100004594(unaff_x22 + 0x760);
  if ((uVar19 & 0xff) == 0) {
    FUN_100076688(*(long *)(unaff_x22 + 0xa00) + 0x20,unaff_x22 + 0x738);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x750);
    lVar21 = *(long *)(unaff_x22 + 0x758);
    FUN_100004640();
    puVar6 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar10 = (char *)0xa0;
    pcVar11 = (char *)0x7;
    _swift_allocObject();
    *(undefined1 **)(puVar6 + 0x20) = &DAT_65707974;
    *(undefined8 *)(puVar6 + 0x18) = 4;
    *(undefined8 *)(puVar6 + 0x10) = 2;
    *(undefined1 **)(puVar6 + 0x28) = &DAT_e400000000000000;
    *(undefined8 *)(unaff_x22 + 0x988) = 0;
    *(undefined8 *)(unaff_x22 + 0x990) = 0xe000000000000000;
    SVar28.bridgeObject = pcVar11;
    SVar28.str = pcVar10;
    Swift::String::reserveCapacity(2,SVar28);
    pcVar10 = (char *)0x6567617373656d;
    if (pcVar23 != (char *)0x0) {
      pcVar10 = pcVar18;
    }
    pcVar18 = &DAT_e700000000000000;
    if (pcVar23 != (char *)0x0) {
      pcVar18 = pcVar23;
    }
    _swift_bridgeObjectRetain(pcVar23);
    SVar24.bridgeObject = pcVar18;
    SVar24.str = pcVar10;
    SVar34.bridgeObject = param_4;
    SVar34.str = pcVar11;
    pcVar23 = pcVar18;
    Swift::String::write(SVar24,SVar34);
    _swift_bridgeObjectRelease(pcVar18);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x990);
    *(undefined8 *)(puVar6 + 0x30) = *(undefined8 *)(unaff_x22 + 0x988);
    *(undefined8 *)(puVar6 + 0x38) = uVar13;
    puVar6[0x58] = 0;
    *(undefined1 **)(puVar6 + 0x60) = &SUB_00006469;
    *(undefined1 **)(puVar6 + 0x68) = &SUB_e200000000000000;
    *(undefined8 *)(unaff_x22 + 0x928) = 0;
    *(undefined8 *)(unaff_x22 + 0x930) = 0xe000000000000000;
    SVar29.bridgeObject = pcVar11;
    SVar29.str = pcVar23;
    Swift::String::reserveCapacity(2,SVar29);
    pcVar18 = (char *)0x656e6f6e;
    if (puVar17 != (undefined1 *)0x0) {
      pcVar18 = pcVar20;
    }
    puVar2 = &DAT_e400000000000000;
    if (puVar17 != (undefined1 *)0x0) {
      puVar2 = puVar17;
    }
    _swift_bridgeObjectRetain(puVar17);
    SVar25.bridgeObject = puVar2;
    SVar25.str = pcVar18;
    SVar35.bridgeObject = param_4;
    SVar35.str = pcVar11;
    Swift::String::write(SVar25,SVar35);
    _swift_bridgeObjectRelease(puVar2);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x930);
    *(undefined8 *)(puVar6 + 0x70) = *(undefined8 *)(unaff_x22 + 0x928);
    *(undefined8 *)(puVar6 + 0x78) = uVar13;
    puVar6[0x98] = 0;
    puVar7 = puVar6;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar6);
    puVar8 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar6 + 0x20,2,puVar8);
    _swift_deallocClassInstance(puVar6,0x20,7);
    *(undefined1 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dab780;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined **)(unaff_x22 + 0xf0) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x118) = 0x53737365636f7270;
    *(undefined8 *)(unaff_x22 + 0x120) = 0xee00293a5f284553;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x292;
    *(undefined1 *)(unaff_x22 + 0x670) = 0;
    *(undefined8 *)(unaff_x22 + 0x678) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x680) = 0x8000000100dab780;
    *(undefined8 *)(unaff_x22 + 0x688) = 0;
    *(undefined **)(unaff_x22 + 0x690) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x6a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x698) = 0;
    *(undefined8 *)(unaff_x22 + 0x6a8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x6b0) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x6b8) = 0x53737365636f7270;
    *(undefined8 *)(unaff_x22 + 0x6c0) = 0xee00293a5f284553;
    *(undefined8 *)(unaff_x22 + 0x6c8) = 0x292;
    FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 0x5b0);
    FUN_1004eaa3c(unaff_x22 + 0x670);
    (**(code **)(lVar21 + 0x28))(unaff_x22 + 0xd0,uVar16);
    FUN_1004eaa3c(unaff_x22 + 0xd0);
    FUN_100004594(unaff_x22 + 0x738);
  }
  if (puVar17 != (undefined1 *)0x0) {
    uVar19 = (ulong)pcVar20 & 0xffffffffffff;
    if (((ulong)puVar17 & 0x2000000000000000) != 0) {
      uVar19 = (ulong)puVar17 >> 0x38 & 0xf;
    }
    if (uVar19 != 0) {
      lVar21 = *(long *)(unaff_x22 + 0xa00);
      puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x9b8) + *(long *)(unaff_x22 + 0xa08));
      uVar16 = puVar1[1];
      *puVar1 = pcVar20;
      puVar1[1] = puVar17;
      _swift_bridgeObjectRetain_n(puVar17,2);
      _swift_bridgeObjectRelease(uVar16);
      FUN_100076688(lVar21 + 0x20,unaff_x22 + 0x8c8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x8e0);
      lVar21 = *(long *)(unaff_x22 + 0x8e8);
      FUN_100004640(unaff_x22 + 0x8c8,uVar16);
      (**(code **)(lVar21 + 0x70))(uVar16,lVar21);
      FUN_100004594(unaff_x22 + 0x8c8);
      if (((uint)uVar16 & 0xff) < 2) {
        FUN_100076688(*(long *)(unaff_x22 + 0xa00) + 0x20,unaff_x22 + 0x878);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x890);
        lVar21 = *(long *)(unaff_x22 + 0x898);
        FUN_100004640();
        puVar6 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar18 = (char *)0x60;
        pcVar20 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar6 + 0x20) = 0x4449746e657665;
        *(undefined8 *)(puVar6 + 0x18) = 2;
        *(undefined8 *)(puVar6 + 0x10) = 1;
        *(undefined1 **)(puVar6 + 0x28) = &DAT_e700000000000000;
        *(undefined8 *)(unaff_x22 + 0x948) = 0;
        *(undefined8 *)(unaff_x22 + 0x950) = 0xe000000000000000;
        SVar33.bridgeObject = pcVar20;
        SVar33.str = pcVar18;
        Swift::String::reserveCapacity(2,SVar33);
        SVar39.bridgeObject = param_4;
        SVar39.str = pcVar20;
        Swift::String::write(SVar26,SVar39);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x950);
        *(undefined8 *)(puVar6 + 0x30) = *(undefined8 *)(unaff_x22 + 0x948);
        *(undefined8 *)(puVar6 + 0x38) = uVar13;
        puVar6[0x58] = 0;
        puVar8 = puVar6;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar6);
        FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
        _swift_deallocClassInstance(puVar6,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x610) = 1;
        *(undefined8 *)(unaff_x22 + 0x618) = 0xd000000000000020;
        *(undefined8 *)(unaff_x22 + 0x620) = 0x8000000100dab7c0;
        *(undefined8 *)(unaff_x22 + 0x628) = 0;
        *(undefined **)(unaff_x22 + 0x630) = puVar8;
        *(undefined8 *)(unaff_x22 + 0x640) = 0;
        *(undefined8 *)(unaff_x22 + 0x638) = 0;
        *(undefined8 *)(unaff_x22 + 0x648) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x650) = 0x8000000100dab630;
        *(undefined8 *)(unaff_x22 + 0x658) = 0x53737365636f7270;
        *(undefined8 *)(unaff_x22 + 0x660) = 0xee00293a5f284553;
        *(undefined8 *)(unaff_x22 + 0x668) = 0x29c;
        *(undefined1 *)(unaff_x22 + 0x490) = 1;
        *(undefined8 *)(unaff_x22 + 0x498) = 0xd000000000000020;
        *(undefined8 *)(unaff_x22 + 0x4a0) = 0x8000000100dab7c0;
        *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
        *(undefined **)(unaff_x22 + 0x4b0) = puVar8;
        *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
        *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
        *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x4d0) = 0x8000000100dab630;
        *(undefined8 *)(unaff_x22 + 0x4d8) = 0x53737365636f7270;
        *(undefined8 *)(unaff_x22 + 0x4e0) = 0xee00293a5f284553;
        *(undefined8 *)(unaff_x22 + 0x4e8) = 0x29c;
        FUN_1004eaa00(unaff_x22 + 0x610,unaff_x22 + 0x550);
        FUN_1004eaa3c(unaff_x22 + 0x490);
        (**(code **)(lVar21 + 0x28))(unaff_x22 + 0x610,uVar16,lVar21);
        _swift_bridgeObjectRelease(puVar17);
        FUN_1004eaa3c(unaff_x22 + 0x610);
        FUN_100004594(unaff_x22 + 0x878);
      }
      else {
        _swift_bridgeObjectRelease(puVar17);
      }
    }
  }
  if (cVar3 != '\x01') {
    lVar21 = *(long *)(unaff_x22 + 0xa00);
    *(undefined8 *)(*(long *)(unaff_x22 + 0x9b8) + *(long *)(unaff_x22 + 0xa10)) = uVar12;
    FUN_100076688(lVar21 + 0x20,unaff_x22 + 0x800);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x818);
    lVar21 = *(long *)(unaff_x22 + 0x820);
    FUN_100004640(unaff_x22 + 0x800,uVar16);
    (**(code **)(lVar21 + 0x70))(uVar16,lVar21);
    FUN_100004594(unaff_x22 + 0x800);
    if (((uint)uVar16 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0xa00) + 0x20,unaff_x22 + 0x850);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x868);
      lVar21 = *(long *)(unaff_x22 + 0x870);
      FUN_100004640();
      puVar6 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar18 = (char *)0x60;
      pcVar20 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar6 + 0x20) = 0x734d7972746572;
      *(undefined8 *)(puVar6 + 0x18) = 2;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      *(undefined1 **)(puVar6 + 0x28) = &DAT_e700000000000000;
      *(undefined8 *)(unaff_x22 + 0x938) = 0;
      *(undefined8 *)(unaff_x22 + 0x940) = 0xe000000000000000;
      SVar26.bridgeObject = pcVar20;
      SVar26.str = pcVar18;
      Swift::String::reserveCapacity(2,SVar26);
      *(undefined8 *)(unaff_x22 + 0x998) = uVar12;
      SVar26 = Swift::CustomStringConvertible::get_description();
      SVar40.bridgeObject = param_4;
      SVar40.str = pcVar20;
      Swift::String::append(SVar26,SVar40);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x940);
      *(undefined8 *)(puVar6 + 0x30) = *(undefined8 *)(unaff_x22 + 0x938);
      *(undefined8 *)(puVar6 + 0x38) = uVar12;
      puVar6[0x58] = 0;
      puVar8 = puVar6;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar6);
      FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
      _swift_deallocClassInstance(puVar6,0x20,7);
      *(undefined1 *)(unaff_x22 + 0x130) = 1;
      *(undefined8 *)(unaff_x22 + 0x138) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dab7a0;
      *(undefined8 *)(unaff_x22 + 0x148) = 0;
      *(undefined **)(unaff_x22 + 0x150) = puVar8;
      *(undefined8 *)(unaff_x22 + 0x160) = 0;
      *(undefined8 *)(unaff_x22 + 0x158) = 0;
      *(undefined8 *)(unaff_x22 + 0x168) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x178) = 0x53737365636f7270;
      *(undefined8 *)(unaff_x22 + 0x180) = 0xee00293a5f284553;
      *(undefined8 *)(unaff_x22 + 0x188) = 0x2a1;
      *(undefined1 *)(unaff_x22 + 0x4f0) = 1;
      *(undefined8 *)(unaff_x22 + 0x4f8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x500) = 0x8000000100dab7a0;
      *(undefined8 *)(unaff_x22 + 0x508) = 0;
      *(undefined **)(unaff_x22 + 0x510) = puVar8;
      *(undefined8 *)(unaff_x22 + 0x520) = 0;
      *(undefined8 *)(unaff_x22 + 0x518) = 0;
      *(undefined8 *)(unaff_x22 + 0x528) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x530) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x538) = 0x53737365636f7270;
      *(undefined8 *)(unaff_x22 + 0x540) = 0xee00293a5f284553;
      *(undefined8 *)(unaff_x22 + 0x548) = 0x2a1;
      FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 0x70);
      FUN_1004eaa3c(unaff_x22 + 0x4f0);
      (**(code **)(lVar21 + 0x28))(unaff_x22 + 0x130,uVar16,lVar21);
      FUN_1004eaa3c(unaff_x22 + 0x130);
      FUN_100004594(unaff_x22 + 0x850);
    }
  }
  *(ulong *)(unaff_x22 + 0x978) = uVar22;
  *(undefined **)(unaff_x22 + 0x980) = EVar14.unknown;
  uVar22 = uVar22 & 0xffffffffffff;
  if (((ulong)EVar14.unknown & 0x2000000000000000) != 0) {
    uVar22 = (ulong)EVar14.unknown >> 0x38 & 0xf;
  }
  if (uVar22 == 0) {
    FUN_1000fb4c4(unaff_x22 + 0x6d0,&DAT_100fcd4b0,&DAT_100c538d8);
  }
  else {
    using.unknown = *(undefined **)(unaff_x22 + 0x9e8);
    lVar21 = *(long *)(unaff_x22 + 0x9e0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x9d8);
    *(undefined8 *)(unaff_x22 + 0x970) = *(undefined8 *)(unaff_x22 + 0x980);
    *(undefined8 *)(unaff_x22 + 0x968) = *(undefined8 *)(unaff_x22 + 0x978);
    _swift_bridgeObjectRetain();
    Encoding::_get_utf8(EVar14);
    FUN_1004b8f18();
    uVar22 = 0;
    EVar14.unknown = using.unknown;
    (extension_Foundation)::Swift::StringProtocol::_data(using,false);
    FUN_1000fb4c4(unaff_x22 + 0x6d0,&DAT_100fcd4b0,&DAT_100c538d8);
    (**(code **)(lVar21 + 8))(using.unknown,uVar12);
    FUN_10000caac((undefined8 *)(unaff_x22 + 0x978));
    if (uVar22 >> 0x3c < 0xf) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x9d0);
      lVar21 = *(long *)(unaff_x22 + 0x9c8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x9c0);
      *(undefined **)(unaff_x22 + 0x958) = EVar14.unknown;
      *(ulong *)(unaff_x22 + 0x960) = uVar22;
      FUN_1001037b4(EVar14.unknown,uVar22);
      puVar6 = &DAT_100fcb3a0;
      FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
      Swift::AsyncThrowingStream::Continuation::_yield(uVar12,unaff_x22 + 0x958,puVar6);
      FUN_10003bf18(EVar14.unknown,uVar22);
      (**(code **)(lVar21 + 8))(uVar12,uVar16);
      plVar9 = (long *)0x250;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xa38) = plVar9;
      puVar6 = &DAT_100fcd4a0;
      FUN_1000f7830(&DAT_100fcd4a0,&DAT_100c538c0);
      pcVar4 = FUN_1004f86a8;
      goto LAB_1004f8674;
    }
  }
  plVar9 = (long *)0x250;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa40) = plVar9;
  puVar6 = &DAT_100fcd4a0;
  FUN_1000f7830(&DAT_100fcd4a0,&DAT_100c538c0);
  pcVar4 = FUN_1004f8718;
LAB_1004f8674:
  *plVar9 = unaff_x22;
  plVar9[1] = (long)pcVar4;
  FUN_1005cfe84(unaff_x22 + 0x6d0,puVar6);
  return;
}



/* Address: 0x1004f86a8 | FUN_1004f86a8 */

void FUN_1004f86a8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa38));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar3 + 0x709) = 1;
    *(undefined8 *)(lVar3 + 0xa28) = *(undefined8 *)(lVar3 + 0xa30);
    uVar2 = *(undefined8 *)(lVar3 + 0x9b8);
    pcVar1 = FUN_1004f76dc;
  }
  else {
    *(long *)(lVar3 + 0xa48) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x9b8);
    pcVar1 = FUN_1004f8780;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1004f8718 | FUN_1004f8718 */

void FUN_1004f8718(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa40));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0xa28) = *(undefined8 *)(lVar3 + 0xa30);
    uVar2 = *(undefined8 *)(lVar3 + 0x9b8);
    pcVar1 = FUN_1004f76dc;
  }
  else {
    *(long *)(lVar3 + 0xa48) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x9b8);
    pcVar1 = FUN_1004f8780;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1004f8780 | FUN_1004f8780 */

void FUN_1004f8780(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x9f8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x9e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x9d0);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x8f0));
  _swift_release(*(undefined8 *)(unaff_x22 + 0x908));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001004f87e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004f87ec | FUN_1004f87ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004f87ec(void)

{
  long lVar1;
  URL UVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _TtC3MCP19HTTPClientTransport::endpoint;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::sessionID + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::protocolVersion + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::streamingTask));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::logger));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::requestModifier + 8));
  _swift_unknownObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::authorizer));
  lVar1 = _TtC3MCP19HTTPClientTransport::messageStream;
  puVar3 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar1,puVar3);
  lVar1 = _TtC3MCP19HTTPClientTransport::messageContinuation;
  puVar3 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar1,puVar3);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC3MCP19HTTPClientTransport::initialSessionIDSignalTask));
  FUN_1000fb4c4(unaff_x20 + _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation,
                &DAT_100fcd1d8,&DAT_100c53780);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::lastEventID + 8));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x1004f8964 | FUN_1004f8964 */

void FUN_1004f8964(void)

{
  FUN_1004f87ec();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x1004f897c | FUN_1004f897c */

void FUN_1004f897c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_1004ea648();
  return;
}



/* Address: 0x1004f89c0 | FUN_1004f89c0 */

void FUN_1004f89c0(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x200;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_1004eab24();
  return;
}



/* Address: 0x1004f8a04 | FUN_1004f8a04 */

void FUN_1004f8a04(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1004eb038(param_1,param_2);
  return;
}



/* Address: 0x1004f8a60 | FUN_1004f8a60 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1004f8a60(Data param_1)

{
  undefined *puVar1;
  long lVar2;
  CharacterSet CVar3;
  NSData *pNVar4;
  ID IVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  CharacterSet CVar9;
  ulong uVar10;
  void *pvVar11;
  long extraout_x8;
  long lVar12;
  String SVar13;
  undefined1 auStack_90 [8];
  long local_88;
  undefined8 uStack_80;
  long local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar12 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  pNVar4 = Foundation::Data::_bridgeToObjectiveC(param_1);
  local_70 = 0;
  IVar5 = objc_stub::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar4,0,&local_70);
  if (IVar5 == 0) {
    lVar12 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(lVar12);
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
    puVar6 = &DAT_100fcd4f0;
    FUN_1000f7830(&DAT_100fcd4f0,&DAT_100c53920);
    puVar1 = PTR___type_metadata_for_Any_100eae0c0;
    plVar7 = &local_88;
    _swift_dynamicCast(plVar7,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
    lVar2 = local_88;
    if (((ulong)plVar7 & 1) != 0) {
      if (*(long *)(local_88 + 0x10) == 0) {
LAB_1004f8bf0:
        uStack_68 = 0;
        local_70 = 0;
        local_58 = 0;
        uStack_60 = 0;
      }
      else {
        _swift_bridgeObjectRetain(local_88);
        lVar8 = 0x646f6874656d;
        uVar10 = 0;
        FUN_100071370(0x646f6874656d);
        if ((uVar10 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar2);
          goto LAB_1004f8bf0;
        }
        FUN_10000cbfc(*(long *)(lVar2 + 0x38) + lVar8 * 0x20,&local_70);
        _swift_bridgeObjectRelease(lVar2);
      }
      _swift_bridgeObjectRelease(lVar2);
      if (local_58 == 0) {
        FUN_1000fb4c4(&local_70,&DAT_100fcb738,&DAT_100c53fd0);
      }
      else {
        CVar9.unknown = (undefined *)&local_88;
        _swift_dynamicCast(CVar9.unknown,&local_70,puVar1 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        if (((ulong)CVar9.unknown & 1) != 0) {
          local_70 = local_88;
          uStack_68 = uStack_80;
          Foundation::CharacterSet::get_whitespacesAndNewlines(CVar9);
          FUN_1004b8f18();
          SVar13 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                             ((CharacterSet)
                              (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
          pvVar11 = SVar13.bridgeObject;
          (**(code **)(lVar12 + 8))
                    (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar3.unknown);
          _swift_bridgeObjectRelease(uStack_80);
          uVar10 = (ulong)SVar13.str & 0xffffffffffff;
          if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
            uVar10 = (ulong)pvVar11 >> 0x38 & 0xf;
          }
          if (uVar10 != 0) goto LAB_1004f8cc0;
          _swift_bridgeObjectRelease(pvVar11);
        }
      }
    }
  }
  SVar13 = (String)ZEXT816(0);
LAB_1004f8cc0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(SVar13.str,SVar13.bridgeObject);
  }
  return;
}



/* Address: 0x1004f8cf4 | FUN_1004f8cf4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1004f8cf4(ID param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  Dictionary<undefined,undefined> DVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong local_168;
  ulong uStack_160;
  undefined *local_158 [5];
  undefined1 auStack_130 [32];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a66a4();
  objc_stub::FUN_100bfda80(param_1);
  DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar14 = 1L << ((ulong)(byte)DVar6.unknown[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((DVar6.unknown[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(DVar6.unknown + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  lVar13 = 0;
joined_r0x0001004f8db0:
  do {
    lVar17 = lVar13;
    if (uVar16 == 0) {
      uVar16 = uVar14;
      if ((long)uVar14 <= lVar13 + 1) {
        uVar16 = lVar13 + 1;
      }
      lVar19 = uVar16 - 1;
      do {
        lVar17 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f9070);
          (*pcVar4)();
        }
        if ((long)uVar14 <= lVar17) {
          uVar16 = 0;
          local_d0 = 0;
          uStack_d8 = 0;
          local_e0 = 0;
          lStack_f8 = 0;
          local_100 = 0;
          uStack_e8 = 0;
          local_f0 = 0;
          uStack_108 = 0;
          local_110 = 0;
          goto LAB_1004f8e18;
        }
        uVar16 = *(ulong *)((long)(DVar6.unknown + 0x40) + lVar17 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar16 == 0);
    }
    uVar18 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar16 = uVar16 - 1 & uVar16;
    uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | lVar17 << 6;
    FUN_1000f1c9c(*(long *)(DVar6.unknown + 0x30) + uVar18 * 0x28,&local_110);
    FUN_10000cbfc(*(long *)(DVar6.unknown + 0x38) + uVar18 * 0x20,&uStack_e8);
    lVar19 = lVar17;
LAB_1004f8e18:
    uStack_98 = uStack_e8;
    local_a0 = local_f0;
    uStack_88 = uStack_d8;
    uStack_90 = local_e0;
    local_80 = local_d0;
    uStack_b8 = uStack_108;
    local_c0 = local_110;
    local_a8 = lStack_f8;
    uStack_b0 = local_100;
    if (lStack_f8 == 0) {
      _swift_release(DVar6.unknown);
      return puVar5;
    }
    FUN_100011080(&uStack_98,auStack_130);
    FUN_1000f1c9c(&local_110,local_158);
    puVar8 = &local_168;
    _swift_dynamicCast(puVar8,local_158,PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,puVar1,6
                      );
    uVar7 = uStack_160;
    uVar18 = local_168;
    lVar13 = lVar19;
    if (((ulong)puVar8 & 1) != 0) {
      FUN_10000cbfc(auStack_130,local_158);
      puVar8 = &local_168;
      _swift_dynamicCast(puVar8,local_158,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar1,6);
      uVar3 = uStack_160;
      uVar2 = local_168;
      if (((ulong)puVar8 & 1) != 0) {
        puVar9 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = uVar18;
        uVar12 = uVar7;
        local_158[0] = puVar5;
        FUN_100071370();
        uVar11 = (uint)uVar12;
        uVar15 = (ulong)~uVar11 & 1;
        lVar17 = *(long *)(puVar5 + 0x10) + uVar15;
        if (SCARRY8(*(long *)(puVar5 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f9074);
          (*pcVar4)();
        }
        if (*(long *)(puVar5 + 0x18) < lVar17) {
          FUN_1004b5c40(lVar17,(ulong)puVar9 & 0xffffffff);
          uVar10 = uVar18;
          uVar15 = uVar7;
          FUN_100071370();
          uVar12 = uVar12 & 0xffffffff;
          puVar5 = local_158[0];
          if ((uVar11 & 1) != ((uint)uVar15 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f9088);
            (*pcVar4)();
          }
        }
        else {
          puVar5 = local_158[0];
          if (((ulong)puVar9 & 1) == 0) {
            FUN_100506688();
            puVar5 = local_158[0];
          }
        }
        local_158[0] = puVar5;
        if ((uVar12 & 1) == 0) {
          *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar5 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
          puVar8 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar10 * 0x10);
          *puVar8 = uVar18;
          puVar8[1] = uVar7;
          puVar8 = (ulong *)(*(long *)(puVar5 + 0x38) + uVar10 * 0x10);
          *puVar8 = uVar2;
          puVar8[1] = uVar3;
          FUN_100004594(auStack_130);
          FUN_100089674(&local_110);
          if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f9078);
            (*pcVar4)();
          }
          *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
          goto joined_r0x0001004f8db0;
        }
        puVar8 = (ulong *)(*(long *)(puVar5 + 0x38) + uVar10 * 0x10);
        uVar18 = puVar8[1];
        *puVar8 = uVar2;
        puVar8[1] = uVar3;
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = uVar18;
      }
      _swift_bridgeObjectRelease(uVar7);
    }
    FUN_100004594(auStack_130);
    FUN_100089674(&local_110);
  } while( true );
}



/* Address: 0x1004f9088 | FUN_1004f9088 */

undefined8 FUN_1004f9088(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  String SVar2;
  String SVar3;
  
  uVar1 = 0xd000000000000010;
  if (param_1 != 0x193) {
    if (param_1 == 0x191) {
      uVar1 = 0xd000000000000017;
    }
    else {
      Swift::_StringGuts::grow(0x1c,param_2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar2 = Swift::CustomStringConvertible::get_description();
      SVar3.bridgeObject = param_4;
      SVar3.str = param_3;
      Swift::String::append(SVar2,SVar3);
      _swift_bridgeObjectRelease(SVar2.bridgeObject);
      uVar1 = 0xd00000000000001a;
    }
  }
  return uVar1;
}



/* Address: 0x1004f9170 | FUN_1004f9170 */

void FUN_1004f9170(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcd1d0;
  FUN_100003a00(&DAT_100fcd1d0,FUN_1004e9780,&TargetProtocolConformanceDescriptor_100c537a0);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x1004f91ac | FUN_1004f91ac */

void FUN_1004f91ac(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(*param_2 + _TtC3MCP19HTTPClientTransport::sessionID);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar3;
  _swift_bridgeObjectRetain(uVar2);
  return;
}



/* Address: 0x1004f9204 | thunk_FUN_1004e913c */

void thunk_FUN_1004e913c(void)

{
  FUN_1004e913c();
  return;
}



/* Address: 0x1004f9208 | FUN_1004f9208 */

void FUN_1004f9208(void)

{
  FUN_1004e9780(0);
  return;
}



/* Address: 0x1004f9210 | FUN_1004f9210 */

void FUN_1004f9210(long param_1,ulong param_2)

{
  undefined *puVar1;
  URL UVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  long local_68;
  long local_60;
  undefined *puStack_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  local_c8 = &DAT_100c53830;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  puVar1 = PTR___value_witness_table_for_Builtin_Int64_100eabd48;
  if (param_2 < 0x40) {
    local_c0 = *(long *)(UVar2.unknown + -8) + 0x40;
    puStack_b8 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
    local_b0 = &DAT_100c53848;
    puStack_a8 = &DAT_100c53848;
    local_a0 = &DAT_100c53860;
    puStack_98 = &DAT_100c53878;
    local_90 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    puStack_88 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_80 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    puStack_78 = &DAT_100c53848;
    local_70 = &DAT_100c53860;
    puVar4 = &DAT_100fcd218;
    lVar3 = 0x13f;
    FUN_1004f9364(0x13f,&DAT_100fcd218,PTR_typeMetadataAccessor_100eaeea0);
    if (puVar4 < (undefined8 *)0x40) {
      local_68 = *(long *)(lVar3 + -8) + 0x40;
      puVar5 = &DAT_100fcd220;
      lVar3 = 0x13f;
      FUN_1004f9364(0x13f,&DAT_100fcd220,PTR_typeMetadataAccessor_100eaee68);
      if (puVar5 < (undefined *)0x40) {
        local_60 = *(long *)(lVar3 + -8) + 0x40;
        puStack_58 = &DAT_100c53878;
        lVar3 = 0x13f;
        FUN_1004f93d8();
        if (puVar5 < (undefined *)0x40) {
          local_50 = *(long *)(lVar3 + -8) + 0x40;
          puStack_48 = &DAT_100c53848;
          local_40 = puVar1 + 0x40;
          puStack_38 = &DAT_100c53878;
          _swift_updateClassMetadata2(param_1,0x100,0x13,&local_c8,param_1 + 0x50);
        }
      }
    }
  }
  return;
}



/* Address: 0x1004f9364 | FUN_1004f9364 */

void FUN_1004f9364(long param_1,long *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*param_2 == 0) {
    puVar1 = &DAT_100fcb578;
    FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
    puVar2 = PTR___type_metadata_for_Foundation_Data_100ea7300;
    (*param_3)(param_1,PTR___type_metadata_for_Foundation_Data_100ea7300,puVar1,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    if (puVar2 == (undefined *)0x0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Address: 0x1004f93d8 | FUN_1004f93d8 */

void FUN_1004f93d8(void)

{
  Optional OVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  
  if (DAT_100fcd228 == 0) {
    puVar2 = &DAT_100fcb398;
    FUN_1000f8b08(&DAT_100fcb398,&DAT_100c50198);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (puVar2 == (undefined *)0x0) {
      DAT_100fcd228 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1004f9438 | FUN_1004f9438 */

void FUN_1004f9438(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1004f945c | FUN_1004f945c */

void FUN_1004f945c(undefined8 param_1)

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
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100071054(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1004f94cc | FUN_1004f94cc */

void FUN_1004f94cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd4c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64ee0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64ee0,&DAT_100ee6ec8);
  DAT_100fcd4c8 = pTVar1;
  return;
}



/* Address: 0x1004f950c | FUN_1004f950c */

void FUN_1004f950c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1004f4dac(plVar1,uVar3,param_1,param_2,uVar2);
  return;
}



/* Address: 0x1004f957c | FUN_1004f957c */

void FUN_1004f957c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1004f95a0 | FUN_1004f95a0 */

void FUN_1004f95a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1004f50dc(plVar3,uVar4,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1004f9614 | FUN_1004f9614 */

void FUN_1004f9614(undefined8 param_1)

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
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1004f5440(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1004f9680 | FUN_1004f9680 */

void FUN_1004f9680(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd4d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51018;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51018,&DAT_100eda098);
  DAT_100fcd4d8 = pTVar1;
  return;
}



/* Address: 0x1004f96c0 | FUN_1004f96c0 */

void FUN_1004f96c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fcd4e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcd4e0;
  FUN_1000f8b08(&DAT_100fcd4e0,&DAT_100c53918);
  puVar2 = PTR__Foundation__Swift__CollectionOfOne<undefined>_>Foundation__ContiguousBytes_100ea7b50
  ;
  _swift_getWitnessTable
            (PTR__Foundation__Swift__CollectionOfOne<undefined>_>Foundation__ContiguousBytes_100ea7b50
             ,puVar1);
  DAT_100fcd4e8 = puVar2;
  return;
}



/* Address: 0x1004f9710 | FUN_1004f9710 */

void FUN_1004f9710(undefined8 param_1)

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
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1004f9780 | FUN_1004f9780 */

void FUN_1004f9780(void)

{
  FUN_1004e9b7c();
  return;
}



/* Address: 0x1004f9788 | thunk_FUN_1004f9438 */

void thunk_FUN_1004f9438(void)

{
  FUN_1004f9438();
  return;
}



/* Address: 0x1004f978c | thunk_FUN_1004f9438 */

void thunk_FUN_1004f9438(void)

{
  FUN_1004f9438();
  return;
}



/* Address: 0x1004f9790 | thunk_FUN_1004f9438 */

void thunk_FUN_1004f9438(void)

{
  FUN_1004f9438();
  return;
}



/* Address: 0x1004f9794 | thunk_FUN_1004eb6ec */

void thunk_FUN_1004eb6ec(void)

{
  FUN_1004eb6ec();
  return;
}



/* Address: 0x1004f9798 | thunk_FUN_1004f6234 */

void thunk_FUN_1004f6234(void)

{
  FUN_1004f6234();
  return;
}



/* Address: 0x1004f979c | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x1004f97a0 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x1004f97a4 | FUN_1004f97a4 */

void FUN_1004f97a4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1004f97ac | FUN_1004f97ac */

void FUN_1004f97ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = param_6;
  param_1[5] = param_7;
  return;
}



/* Address: 0x1004f97c0 | FUN_1004f97c0 */

void FUN_1004f97c0(undefined8 *param_1,undefined8 param_2,long *param_3,uint param_4)

{
  long lVar1;
  undefined1 *puVar2;
  char *pcVar3;
  void *pvVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  CharacterSet CVar8;
  undefined8 uVar9;
  long lVar10;
  CharacterSet CVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long extraout_x8;
  code *pcVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined1 auStack_c0 [8];
  long local_b8;
  uint local_ac;
  undefined8 *local_a8;
  long *local_a0;
  long local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined *local_68;
  
  local_ac = param_4;
  local_a8 = param_1;
  local_a0 = param_3;
  CVar8 = Foundation::CharacterSet::typeMetadataAccessor();
  local_98 = *(long *)(CVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  uVar9 = 0x747065636341;
  puVar14 = &DAT_e600000000000000;
  FUN_1004fe364();
  local_90 = 0;
  if (puVar14 != (undefined1 *)0x0) {
    local_90 = uVar9;
  }
  puVar2 = (undefined1 *)0xe000000000000000;
  if (puVar14 != (undefined1 *)0x0) {
    puVar2 = puVar14;
  }
  puStack_88 = puVar2;
  FUN_1004b8f18();
  SVar20.bridgeObject = (void *)0xe100000000000000;
  SVar20.str = (char *)0x2c;
  lVar10 = 0x2c;
  (extension_RegexBuilder)::Swift::StringProtocol::_split(SVar20,0x7fffffffffffffff,true);
  _swift_bridgeObjectRelease(puVar2);
  lVar17 = *(long *)(lVar10 + 0x10);
  if (lVar17 == 0) {
    _swift_bridgeObjectRelease(lVar10);
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004d6e0c(0,lVar17,0);
    puVar13 = (undefined8 *)(lVar10 + 0x38);
    local_b8 = lVar10;
    do {
      puVar5 = local_68;
      local_80 = puVar13[-1];
      puVar12 = (undefined *)*puVar13;
      puStack_88 = (undefined1 *)puVar13[-2];
      local_90 = puVar13[-3];
      CVar11.unknown = puVar12;
      puStack_78 = puVar12;
      _swift_bridgeObjectRetain();
      Foundation::CharacterSet::get_whitespaces(CVar11);
      FUN_1004d3b94();
      SVar20 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                         ((CharacterSet)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
      (**(code **)(local_98 + 8))
                (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar8.unknown);
      _swift_bridgeObjectRelease(puVar12);
      uVar18 = *(ulong *)(puVar5 + 0x10);
      local_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar18) {
        FUN_1004d6e0c(1 < *(ulong *)(puVar5 + 0x18),uVar18 + 1,1);
      }
      puVar12 = local_68;
      puVar13 = puVar13 + 4;
      *(ulong *)(local_68 + 0x10) = uVar18 + 1;
      *(String *)(local_68 + uVar18 * 0x10 + 0x20) = SVar20;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    _swift_bridgeObjectRelease(local_b8);
  }
  lVar17 = *(long *)(puVar12 + 0x10);
  uVar18 = 0xffffffffffffffff;
  puVar13 = (undefined8 *)(puVar12 + 0x28);
  do {
    lVar10 = uVar18 - lVar17;
    if (lVar10 == -1) break;
    uVar18 = uVar18 + 1;
    if (*(ulong *)(puVar12 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1004f9cb8);
      (*pcVar15)();
    }
    pcVar3 = (char *)puVar13[-1];
    pvVar4 = (void *)*puVar13;
    _swift_bridgeObjectRetain(pvVar4);
    SVar21.bridgeObject = (void *)0x8000000100d8fc90;
    SVar21.str = (char *)0xd000000000000010;
    SVar23.bridgeObject = pvVar4;
    SVar23.str = pcVar3;
    bVar6 = Swift::String::hasPrefix(SVar21,SVar23);
    _swift_bridgeObjectRelease(pvVar4);
    puVar13 = puVar13 + 2;
  } while (!bVar6);
  uVar18 = 0xffffffffffffffff;
  puVar13 = (undefined8 *)(puVar12 + 0x28);
  do {
    lVar1 = uVar18 - lVar17;
    bVar6 = lVar1 != -1;
    if (lVar1 == -1) {
      _swift_bridgeObjectRelease(puVar12);
      lVar17 = *local_a0;
      puVar14 = (undefined1 *)local_a0[1];
      if ((lVar17 != 0x54534f50) || (lVar17 = 0x54534f50, puVar14 != &DAT_e400000000000000))
      goto LAB_1004f9af4;
      bVar6 = false;
      plVar16 = local_a0;
      puVar13 = local_a8;
      goto LAB_1004f9b14;
    }
    uVar18 = uVar18 + 1;
    if (*(ulong *)(puVar12 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1004f9cbc);
      (*pcVar15)();
    }
    pcVar3 = (char *)puVar13[-1];
    pvVar4 = (void *)*puVar13;
    _swift_bridgeObjectRetain(pvVar4);
    SVar22.bridgeObject = (void *)0x8000000100dab8a0;
    SVar22.str = (char *)0xd000000000000011;
    SVar24.bridgeObject = pvVar4;
    SVar24.str = pcVar3;
    bVar7 = Swift::String::hasPrefix(SVar22,SVar24);
    _swift_bridgeObjectRelease(pvVar4);
    puVar13 = puVar13 + 2;
  } while (!bVar7);
  _swift_bridgeObjectRelease(puVar12);
  lVar17 = *local_a0;
  puVar14 = (undefined1 *)local_a0[1];
  if ((lVar17 == 0x54534f50) && (lVar17 = 0x54534f50, puVar14 == &DAT_e400000000000000)) {
    bVar6 = true;
    plVar16 = local_a0;
    puVar13 = local_a8;
LAB_1004f9b14:
    if ((local_ac & 0xff) == 1) {
      if (lVar10 != -1) {
LAB_1004f9c70:
        lVar17 = 0;
        FUN_1004fe770();
        pcVar15 = *(code **)(*(long *)(lVar17 + -8) + 0x38);
        uVar9 = 1;
        goto LAB_1004f9c90;
      }
      uVar9 = 0x8000000100dac010;
      lVar17 = plVar16[2];
      lVar10 = plVar16[3];
      _swift_bridgeObjectRetain(lVar10);
      puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      uVar19 = 0xd000000000000033;
    }
    else {
      bVar7 = false;
      if (lVar10 != -1) {
        bVar7 = bVar6;
      }
      if (bVar7) goto LAB_1004f9c70;
      uVar9 = 0x8000000100dac050;
      lVar17 = plVar16[2];
      lVar10 = plVar16[3];
      _swift_bridgeObjectRetain(lVar10);
      puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      uVar19 = 0xd00000000000004e;
    }
  }
  else {
LAB_1004f9af4:
    plVar16 = local_a0;
    puVar13 = local_a8;
    bVar7 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x54534f50,(_StringGuts)0xe400000000000000,
                       (_StringComparisonResult)(__int8)lVar17);
    if (bVar7) goto LAB_1004f9b14;
    if ((lVar17 != 0x544547) || (puVar14 != (undefined1 *)0xe300000000000000)) {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x544547,(_StringGuts)0xe300000000000000,
                         (_StringComparisonResult)(__int8)lVar17);
      if ((lVar1 == -1) && (bVar6)) goto LAB_1004f9bf0;
      goto LAB_1004f9c70;
    }
    if (lVar1 != -1) goto LAB_1004f9c70;
LAB_1004f9bf0:
    uVar9 = 0x8000000100dabfd0;
    lVar17 = plVar16[2];
    lVar10 = plVar16[3];
    _swift_bridgeObjectRetain(lVar10);
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    uVar19 = 0xd000000000000034;
  }
  puVar13[1] = uVar19;
  *puVar13 = 0x196;
  puVar13[2] = uVar9;
  puVar13[3] = 0;
  *(undefined1 *)(puVar13 + 4) = 1;
  puVar13[5] = lVar17;
  puVar13[6] = lVar10;
  puVar13[7] = puVar12;
  lVar17 = 0;
  FUN_1004fe770();
  _swift_storeEnumTagMultiPayload(puVar13,lVar17,4);
  pcVar15 = *(code **)(*(long *)(lVar17 + -8) + 0x38);
  uVar9 = 0;
LAB_1004f9c90:
  (*pcVar15)(puVar13,uVar9,1,lVar17);
  return;
}



/* Address: 0x1004f9cbc | FUN_1004f9cbc */

void FUN_1004f9cbc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *unaff_x20;
  
  FUN_1004f97c0(param_1,param_2,*unaff_x20);
  return;
}



/* Address: 0x1004f9cc4 | FUN_1004f9cc4 */

void FUN_1004f9cc4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  CharacterSet CVar4;
  undefined8 uVar5;
  CharacterSet CVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  code *pcVar9;
  CharacterSet in;
  long lVar10;
  String SVar11;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar10 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  in.unknown = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (((undefined *)*param_3 != (undefined *)0x54534f50 ||
       (undefined *)param_3[1] != &DAT_e400000000000000) &&
     (bVar3 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_3,(undefined *)param_3[1],(_StringComparisonResult)0x50
                        ), !bVar3)) {
    lVar10 = 0;
    FUN_1004fe770();
                    /* WARNING: Could not recover jumptable at 0x0001004f9f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(param_1,1,1,lVar10);
    return;
  }
  uVar5 = 0x2d746e65746e6f43;
  lVar8 = -0x13ffffff9a8f86ac;
  FUN_1004fe364();
  local_80 = 0;
  if (lVar8 != 0) {
    local_80 = uVar5;
  }
  lVar1 = -0x2000000000000000;
  if (lVar8 != 0) {
    lVar1 = lVar8;
  }
  lStack_78 = lVar1;
  FUN_1004b8f18();
  SVar11.bridgeObject = (void *)0xe100000000000000;
  SVar11.str = (char *)0x3b;
  CVar6.unknown = (undefined *)0x3b;
  (extension_RegexBuilder)::Swift::StringProtocol::_split(SVar11,0x7fffffffffffffff,true);
  _swift_bridgeObjectRelease(lVar1);
  if (*(long *)(CVar6.unknown + 0x10) == 0) {
    _swift_bridgeObjectRelease(CVar6.unknown);
    SVar11 = (String)(ZEXT816(0xe000000000000000) << 0x40);
LAB_1004f9e84:
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar11.str,(_StringGuts)SVar11.bridgeObject,
                       (_StringComparisonResult)0x10);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    if (!bVar3) {
      uVar5 = param_3[2];
      uVar2 = param_3[3];
      _swift_bridgeObjectRetain(uVar2);
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      param_1[1] = 0xd00000000000003d;
      *param_1 = 0x19f;
      param_1[2] = 0x8000000100dac0a0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[5] = uVar5;
      param_1[6] = uVar2;
      param_1[7] = puVar7;
      lVar10 = 0;
      FUN_1004fe770();
      _swift_storeEnumTagMultiPayload(param_1,lVar10,4);
      pcVar9 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
      uVar5 = 0;
      goto LAB_1004f9f90;
    }
  }
  else {
    lStack_88 = *(long *)(CVar6.unknown + 0x28);
    local_90 = *(undefined8 *)(CVar6.unknown + 0x20);
    uVar5 = *(undefined8 *)(CVar6.unknown + 0x30);
    uVar2 = *(undefined8 *)(CVar6.unknown + 0x38);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRelease();
    lStack_78 = lStack_88;
    local_80 = local_90;
    local_70 = uVar5;
    uStack_68 = uVar2;
    Foundation::CharacterSet::get_whitespaces(CVar6);
    FUN_1004d3b94();
    SVar11 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(lVar10 + 8))(in.unknown,CVar4.unknown);
    _swift_bridgeObjectRelease(uVar2);
    if (SVar11.str != (char *)0xd000000000000010 ||
        SVar11.bridgeObject != (void *)0x8000000100d8fc90) goto LAB_1004f9e84;
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
  }
  lVar10 = 0;
  FUN_1004fe770();
  pcVar9 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
  uVar5 = 1;
LAB_1004f9f90:
  (*pcVar9)(param_1,uVar5,1,lVar10);
  return;
}



/* Address: 0x1004f9fb4 | thunk_FUN_1004f9cc4 */

void thunk_FUN_1004f9cc4(void)

{
  FUN_1004f9cc4();
  return;
}



/* Address: 0x1004f9fb8 | FUN_1004f9fb8 */

/* WARNING: Removing unreachable block (ram,0x0001004fa268) */

void FUN_1004f9fb8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  char *pcVar10;
  undefined *puVar11;
  void *pvVar12;
  _StringGuts _Var13;
  long lVar14;
  undefined8 ***pppuVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined8 **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  
  if ((*(byte *)(param_3 + 0x20) & 1) == 0) {
    pvVar12 = (void *)0x8000000100dab710;
    pcVar6 = (char *)0xd000000000000014;
    FUN_1004fe364();
    if (pvVar12 != (void *)0x0) {
      lVar14 = *(long *)(param_3 + 0x28);
      _swift_bridgeObjectRetain(lVar14);
      pcVar7 = pcVar6;
      FUN_100052458(pcVar6,pvVar12,lVar14);
      if (((ulong)pcVar7 & 1) == 0) {
        pppuVar15 = *(undefined8 ****)(lVar14 + 0x10);
        if (pppuVar15 == (undefined8 ***)0x0) {
          _swift_bridgeObjectRelease(lVar14);
          local_68 = (undefined8 **)PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          pppuVar8 = pppuVar15;
          FUN_1004b4ca0(pppuVar15,0);
          pppuVar9 = &local_90;
          FUN_100370d3c(pppuVar9,pppuVar8 + 4,pppuVar15,lVar14);
          FUN_10000c650(local_90,uStack_88,local_80,uStack_78,local_70);
          local_68 = pppuVar8;
          if (pppuVar9 != pppuVar15) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1004fa0d8);
            (*pcVar5)();
          }
        }
        FUN_1004b7b80(&local_68);
        ppuVar3 = local_68;
        local_90 = local_68;
        pcVar7 = &DAT_100fcb568;
        FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
        pcVar10 = pcVar7;
        FUN_1004b8a64();
        SVar16.bridgeObject = &SUB_e200000000000000;
        SVar16.str = (char *)0x202c;
        SVar16 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar16);
        _Var13.unknown = SVar16.bridgeObject;
        _swift_release(ppuVar3);
        local_90 = (undefined8 **)0x0;
        uStack_88 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x3c,_Var13);
        SVar17.bridgeObject = (void *)0x8000000100dac0e0;
        SVar17.str = (char *)0xd00000000000002b;
        SVar20.bridgeObject = pcVar10;
        SVar20.str = pcVar7;
        Swift::String::append(SVar17,SVar20);
        SVar18.bridgeObject = pvVar12;
        SVar18.str = pcVar6;
        SVar21.bridgeObject = pcVar10;
        SVar21.str = pcVar7;
        Swift::String::append(SVar18,SVar21);
        _swift_bridgeObjectRelease(pvVar12);
        SVar19.bridgeObject = (void *)0xed0000203a646574;
        SVar19.str = (char *)0x726f70707553202e;
        SVar22.bridgeObject = pcVar10;
        SVar22.str = pcVar7;
        Swift::String::append(SVar19,SVar22);
        SVar23.bridgeObject = pcVar10;
        SVar23.str = pcVar7;
        Swift::String::append(SVar16,SVar23);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        uVar4 = uStack_88;
        ppuVar3 = local_90;
        uVar1 = *(undefined8 *)(param_3 + 0x10);
        uVar2 = *(undefined8 *)(param_3 + 0x18);
        _swift_bridgeObjectRetain(uVar2);
        puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1004a66a4();
        *param_1 = 400;
        param_1[1] = ppuVar3;
        param_1[2] = uVar4;
        param_1[3] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        param_1[5] = uVar1;
        param_1[6] = uVar2;
        param_1[7] = puVar11;
        lVar14 = 0;
        FUN_1004fe770();
        _swift_storeEnumTagMultiPayload(param_1,lVar14,4);
        (**(code **)(*(long *)(lVar14 + -8) + 0x38))(param_1,0,1,lVar14);
        return;
      }
      _swift_bridgeObjectRelease(pvVar12);
      _swift_bridgeObjectRelease(lVar14);
    }
  }
  lVar14 = 0;
  FUN_1004fe770();
                    /* WARNING: Could not recover jumptable at 0x0001004fa088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(param_1,1,1,lVar14);
  return;
}



/* Address: 0x1004fa274 | thunk_FUN_1004f9fb8 */

/* WARNING: Removing unreachable block (ram,0x0001004fa268) */

void thunk_FUN_1004f9fb8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  char *pcVar10;
  undefined *puVar11;
  void *pvVar12;
  _StringGuts _Var13;
  long lVar14;
  undefined8 ***pppuVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  
  if ((*(byte *)(param_3 + 0x20) & 1) == 0) {
    pvVar12 = (void *)0x8000000100dab710;
    pcVar6 = (char *)0xd000000000000014;
    FUN_1004fe364();
    if (pvVar12 != (void *)0x0) {
      lVar14 = *(long *)(param_3 + 0x28);
      _swift_bridgeObjectRetain(lVar14);
      pcVar7 = pcVar6;
      FUN_100052458(pcVar6,pvVar12,lVar14);
      if (((ulong)pcVar7 & 1) == 0) {
        pppuVar15 = *(undefined8 ****)(lVar14 + 0x10);
        if (pppuVar15 == (undefined8 ***)0x0) {
          _swift_bridgeObjectRelease(lVar14);
          ppuStack_68 = (undefined8 **)PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          pppuVar8 = pppuVar15;
          FUN_1004b4ca0(pppuVar15,0);
          pppuVar9 = &ppuStack_90;
          FUN_100370d3c(pppuVar9,pppuVar8 + 4,pppuVar15,lVar14);
          FUN_10000c650(ppuStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
          ppuStack_68 = pppuVar8;
          if (pppuVar9 != pppuVar15) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1004fa0d8);
            (*pcVar5)();
          }
        }
        FUN_1004b7b80(&ppuStack_68);
        ppuVar3 = ppuStack_68;
        ppuStack_90 = ppuStack_68;
        pcVar7 = &DAT_100fcb568;
        FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
        pcVar10 = pcVar7;
        FUN_1004b8a64();
        SVar16.bridgeObject = &SUB_e200000000000000;
        SVar16.str = (char *)0x202c;
        SVar16 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar16);
        _Var13.unknown = SVar16.bridgeObject;
        _swift_release(ppuVar3);
        ppuStack_90 = (undefined8 **)0x0;
        uStack_88 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x3c,_Var13);
        SVar17.bridgeObject = (void *)0x8000000100dac0e0;
        SVar17.str = (char *)0xd00000000000002b;
        SVar20.bridgeObject = pcVar10;
        SVar20.str = pcVar7;
        Swift::String::append(SVar17,SVar20);
        SVar18.bridgeObject = pvVar12;
        SVar18.str = pcVar6;
        SVar21.bridgeObject = pcVar10;
        SVar21.str = pcVar7;
        Swift::String::append(SVar18,SVar21);
        _swift_bridgeObjectRelease(pvVar12);
        SVar19.bridgeObject = (void *)0xed0000203a646574;
        SVar19.str = (char *)0x726f70707553202e;
        SVar22.bridgeObject = pcVar10;
        SVar22.str = pcVar7;
        Swift::String::append(SVar19,SVar22);
        SVar23.bridgeObject = pcVar10;
        SVar23.str = pcVar7;
        Swift::String::append(SVar16,SVar23);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        uVar4 = uStack_88;
        ppuVar3 = ppuStack_90;
        uVar1 = *(undefined8 *)(param_3 + 0x10);
        uVar2 = *(undefined8 *)(param_3 + 0x18);
        _swift_bridgeObjectRetain(uVar2);
        puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1004a66a4();
        *param_1 = 400;
        param_1[1] = ppuVar3;
        param_1[2] = uVar4;
        param_1[3] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        param_1[5] = uVar1;
        param_1[6] = uVar2;
        param_1[7] = puVar11;
        lVar14 = 0;
        FUN_1004fe770();
        _swift_storeEnumTagMultiPayload(param_1,lVar14,4);
        (**(code **)(*(long *)(lVar14 + -8) + 0x38))(param_1,0,1,lVar14);
        return;
      }
      _swift_bridgeObjectRelease(pvVar12);
      _swift_bridgeObjectRelease(lVar14);
    }
  }
  lVar14 = 0;
  FUN_1004fe770();
                    /* WARNING: Could not recover jumptable at 0x0001004fa088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(param_1,1,1,lVar14);
  return;
}



/* Address: 0x1004fa278 | FUN_1004fa278 */

void FUN_1004fa278(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  char *pcVar2;
  bool bVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  long lVar6;
  _StringGuts _Var7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  _StringGuts _Var9;
  undefined8 uVar10;
  
  if ((*(byte *)(param_3 + 0x20) & 1) == 0) {
    puVar1 = *(undefined **)(param_3 + 0x10);
    _Var9.unknown = *(undefined **)(param_3 + 0x18);
    if (_Var9.unknown == (undefined *)0x0) {
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      param_1[1] = 0xd000000000000024;
      *param_1 = 400;
      param_1[2] = 0x8000000100dac110;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[5] = puVar1;
      param_1[6] = 0;
    }
    else {
      _swift_bridgeObjectRetain(_Var9.unknown);
      _Var4.unknown = (undefined *)0x737365532d50434d;
      _Var7.unknown = (undefined *)0xee0064492d6e6f69;
      FUN_1004fe364();
      if (_Var7.unknown != (undefined *)0x0) {
        if ((_Var4.unknown == puVar1) && (_Var7.unknown == _Var9.unknown)) {
          _swift_bridgeObjectRelease(_Var9.unknown);
          _Var9.unknown = _Var7.unknown;
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            (_Var4,_Var7,(_StringComparisonResult)(__int8)puVar1);
          _swift_bridgeObjectRelease(_Var7.unknown);
          if (!bVar3) {
            pcVar2 = "Bad Request: Missing MCP-Session-Id header";
            puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
            FUN_1004a66a4();
            uVar10 = 0xd000000000000028;
            uVar8 = 0x194;
            goto LAB_1004fa3d0;
          }
        }
        _swift_bridgeObjectRelease(_Var9.unknown);
        goto LAB_1004fa388;
      }
      pcVar2 = "Bad Request: Session not initialized";
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      uVar10 = 0xd00000000000002a;
      uVar8 = 400;
LAB_1004fa3d0:
      param_1[1] = uVar10;
      *param_1 = uVar8;
      param_1[2] = (ulong)(pcVar2 + 0x10) | 0x8000000000000000;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[5] = puVar1;
      param_1[6] = _Var9.unknown;
    }
    param_1[7] = puVar5;
    lVar6 = 0;
    FUN_1004fe770();
    _swift_storeEnumTagMultiPayload(param_1,lVar6,4);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    uVar8 = 0;
  }
  else {
LAB_1004fa388:
    lVar6 = 0;
    FUN_1004fe770();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    uVar8 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004fa42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar8,1,lVar6);
  return;
}



/* Address: 0x1004fa430 | thunk_FUN_1004fa278 */

void thunk_FUN_1004fa278(void)

{
  FUN_1004fa278();
  return;
}



/* Address: 0x1004fa434 | FUN_1004fa434 */

void FUN_1004fa434(void)

{
  return;
}



/* Address: 0x1004fa43c | thunk_FUN_1004fcca4 */

void thunk_FUN_1004fcca4(void)

{
  FUN_1004fcca4();
  return;
}



/* Address: 0x1004fa440 | FUN_1004fa440 */

void FUN_1004fa440(void)

{
  return;
}



/* Address: 0x1004fa454 | FUN_1004fa454 */

void FUN_1004fa454(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  ulong param_6)

{
  String *pSVar1;
  ulong uVar2;
  char *pcVar3;
  bool bVar4;
  _StringGuts _Var5;
  __int64 _Var6;
  Substring SVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  UnsafeMutablePointer UVar10;
  _StringGuts _Var12;
  undefined8 uVar13;
  undefined *puVar15;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar17;
  undefined8 uVar18;
  Index IVar19;
  long lVar20;
  _StringGuts _Var21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  Character CVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  undefined *puVar11;
  char *pcVar14;
  _StringGuts _Var16;
  
  if ((param_6 & 1) == 0) {
LAB_1004faac8:
    lVar22 = 0;
    FUN_1004fe770();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar22 + -8) + 0x38);
    uVar13 = 1;
  }
  else {
    _Var5.unknown = (undefined *)0x74736f48;
    _Var9.unknown = &DAT_e400000000000000;
    FUN_1004fe364();
    if (_Var9.unknown == (undefined *)0x0) {
LAB_1004fa780:
      _Var5.unknown = (undefined *)0x6e696769724f;
      _Var9.unknown = &DAT_e600000000000000;
      FUN_1004fe364();
      if (_Var9.unknown == (undefined *)0x0) goto LAB_1004faac8;
      lVar22 = *(long *)(param_5 + 0x10);
      if (lVar22 != 0) {
        lVar20 = 0;
        do {
          pSVar1 = (String *)(param_5 + 0x20 + lVar20 * 0x10);
          pcVar14 = pSVar1->str;
          _Var21.unknown = pSVar1->bridgeObject;
          SVar27 = *pSVar1;
          SVar26 = *pSVar1;
          _swift_bridgeObjectRetain(_Var21.unknown);
          SVar29.bridgeObject = &SUB_e200000000000000;
          SVar29.str = (char *)0x2a3a;
          bVar4 = Swift::String::hasSuffix(SVar29,SVar26);
          if (!bVar4) {
            _Var16.unknown = _Var9.unknown;
            if (_Var5.unknown == pcVar14 && _Var9.unknown == _Var21.unknown) {
LAB_1004faab8:
              _swift_bridgeObjectRelease(_Var16.unknown);
              _Var9.unknown = _Var21.unknown;
            }
            else {
              bVar4 = Swift::_stringCompareWithSmolCheck
                                (_Var5,_Var9,(_StringComparisonResult)(__int8)pcVar14);
              _swift_bridgeObjectRelease(_Var21.unknown);
              if (!bVar4) goto LAB_1004fa7e0;
            }
            _swift_bridgeObjectRelease(_Var9.unknown);
            goto LAB_1004faac8;
          }
          pcVar3 = pcVar14;
          if (((ulong)_Var21.unknown & 0x2000000000000000) != 0) {
            pcVar3 = (char *)((ulong)_Var21.unknown >> 0x38 & 0xf);
          }
          uVar17 = (uint)((ulong)pcVar14 >> 0x3b) & 1;
          if (((ulong)_Var21.unknown & 0x1000000000000000) == 0) {
            uVar17 = 1;
          }
          uVar2 = 7;
          if (uVar17 == 0) {
            uVar2 = 0xb;
          }
          IVar19.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | (long)pcVar3 << 0x10);
          _swift_bridgeObjectRetain(_Var21.unknown);
          uVar17 = 0xfffffffe;
          Swift::String::_index(IVar19,-2,(Index)0xf,SVar27);
          UVar10.unknown = (char *)0xf;
          if ((uVar17 & 0xff) != 1) {
            UVar10 = IVar19.cmsgPointer.unknown;
          }
          SVar33.bridgeObject = pcVar14;
          SVar33.str = UVar10.unknown;
          puVar8 = _Var21.unknown;
          SVar30.str = Swift::String::get_subscript((Range<Index>)0xf,SVar33);
          _swift_bridgeObjectRelease(_Var21.unknown);
          SVar30.bridgeObject = UVar10.unknown;
          puVar15 = puVar8;
          SVar26 = Swift::String::__fromSubstring(SVar30);
          puVar11 = SVar26.bridgeObject;
          _swift_bridgeObjectRelease(puVar8);
          _swift_bridgeObjectRetain(puVar11);
          SVar31.bridgeObject = (void *)0xe100000000000000;
          SVar31.str = &DAT_0000003a;
          SVar36.bridgeObject = puVar15;
          SVar36.str = pcVar14;
          Swift::String::append(SVar31,SVar36);
          SVar37.bridgeObject = _Var9.unknown;
          SVar37.str = _Var5.unknown;
          _Var16.unknown = _Var9.unknown;
          bVar4 = Swift::String::hasPrefix(SVar26,SVar37);
          _swift_bridgeObjectRelease(puVar11);
          if (bVar4) {
            _swift_bridgeObjectRetain(_Var9.unknown);
            _Var6 = Swift::String::get_count(SVar26);
            _swift_bridgeObjectRelease(puVar11);
            SVar7.unknown = (undefined *)(_Var6 + 1);
            if (SCARRY8(_Var6,1)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1004fab10);
              (*UNRECOVERED_JUMPTABLE)();
            }
            _Var12.unknown = _Var5.unknown;
            FUN_100108f9c(SVar7.unknown,_Var5.unknown,_Var9.unknown);
            _swift_bridgeObjectRelease(_Var9.unknown);
            IVar19.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)SVar7.unknown;
            puVar11 = _Var16.unknown;
            if ((ulong)_Var12.unknown >> 0xe != (ulong)SVar7.unknown >> 0xe) {
              do {
                if ((ulong)_Var12.unknown >> 0xe == (ulong)IVar19.cmsgPointer.unknown >> 0xe) {
                  _swift_bridgeObjectRelease(_Var16.unknown);
                  _Var16.unknown = _Var21.unknown;
                  _Var21.unknown = _Var9.unknown;
                  goto LAB_1004faab8;
                }
                CVar28 = Swift::Substring::get_subscript(IVar19,SVar7);
                IVar19 = Swift::Substring::index(IVar19,SVar7);
                _swift_bridgeObjectRetain(CVar28.bridgeObject);
                bVar4 = Swift::Character::get_isNumber(CVar28);
                _swift_bridgeObjectRelease_n(CVar28.bridgeObject,2);
              } while (bVar4);
            }
          }
          _swift_bridgeObjectRelease(puVar11);
          _swift_bridgeObjectRelease(_Var21.unknown);
LAB_1004fa7e0:
          lVar20 = lVar20 + 1;
        } while (lVar20 != lVar22);
      }
      _swift_bridgeObjectRelease(_Var9.unknown);
      pcVar14 = "Forbidden: Origin not allowed";
      uVar13 = *(undefined8 *)(param_3 + 0x10);
      uVar18 = *(undefined8 *)(param_3 + 0x18);
      _swift_bridgeObjectRetain(uVar18);
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      uVar24 = 0xd00000000000001d;
      uVar23 = 0x193;
    }
    else {
      lVar22 = *(long *)(param_4 + 0x10);
      if (lVar22 != 0) {
        lVar20 = 0;
        do {
          pSVar1 = (String *)(param_4 + 0x20 + lVar20 * 0x10);
          pcVar14 = pSVar1->str;
          _Var21.unknown = pSVar1->bridgeObject;
          SVar27 = *pSVar1;
          SVar26 = *pSVar1;
          _swift_bridgeObjectRetain(_Var21.unknown);
          SVar25.bridgeObject = &SUB_e200000000000000;
          SVar25.str = (char *)0x2a3a;
          bVar4 = Swift::String::hasSuffix(SVar25,SVar26);
          if (!bVar4) {
            _Var16.unknown = _Var9.unknown;
            if (_Var5.unknown == pcVar14 && _Var9.unknown == _Var21.unknown) {
LAB_1004fa770:
              _swift_bridgeObjectRelease(_Var16.unknown);
              _Var9.unknown = _Var21.unknown;
            }
            else {
              bVar4 = Swift::_stringCompareWithSmolCheck
                                (_Var5,_Var9,(_StringComparisonResult)(__int8)pcVar14);
              _swift_bridgeObjectRelease(_Var21.unknown);
              if (!bVar4) goto LAB_1004fa4ec;
            }
            _swift_bridgeObjectRelease(_Var9.unknown);
            goto LAB_1004fa780;
          }
          pcVar3 = pcVar14;
          if (((ulong)_Var21.unknown & 0x2000000000000000) != 0) {
            pcVar3 = (char *)((ulong)_Var21.unknown >> 0x38 & 0xf);
          }
          uVar17 = (uint)((ulong)pcVar14 >> 0x3b) & 1;
          if (((ulong)_Var21.unknown & 0x1000000000000000) == 0) {
            uVar17 = 1;
          }
          uVar2 = 7;
          if (uVar17 == 0) {
            uVar2 = 0xb;
          }
          IVar19.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | (long)pcVar3 << 0x10);
          _swift_bridgeObjectRetain(_Var21.unknown);
          uVar17 = 0xfffffffe;
          Swift::String::_index(IVar19,-2,(Index)0xf,SVar27);
          UVar10.unknown = (char *)0xf;
          if ((uVar17 & 0xff) != 1) {
            UVar10 = IVar19.cmsgPointer.unknown;
          }
          SVar32.bridgeObject = pcVar14;
          SVar32.str = UVar10.unknown;
          puVar8 = _Var21.unknown;
          SVar26.str = Swift::String::get_subscript((Range<Index>)0xf,SVar32);
          _swift_bridgeObjectRelease(_Var21.unknown);
          SVar26.bridgeObject = UVar10.unknown;
          puVar15 = puVar8;
          SVar26 = Swift::String::__fromSubstring(SVar26);
          puVar11 = SVar26.bridgeObject;
          _swift_bridgeObjectRelease(puVar8);
          _swift_bridgeObjectRetain(puVar11);
          SVar27.bridgeObject = (void *)0xe100000000000000;
          SVar27.str = &DAT_0000003a;
          SVar34.bridgeObject = puVar15;
          SVar34.str = pcVar14;
          Swift::String::append(SVar27,SVar34);
          SVar35.bridgeObject = _Var9.unknown;
          SVar35.str = _Var5.unknown;
          _Var16.unknown = _Var9.unknown;
          bVar4 = Swift::String::hasPrefix(SVar26,SVar35);
          _swift_bridgeObjectRelease(puVar11);
          if (bVar4) {
            _swift_bridgeObjectRetain(_Var9.unknown);
            _Var6 = Swift::String::get_count(SVar26);
            _swift_bridgeObjectRelease(puVar11);
            SVar7.unknown = (undefined *)(_Var6 + 1);
            if (SCARRY8(_Var6,1)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1004fab0c);
              (*UNRECOVERED_JUMPTABLE)();
            }
            _Var12.unknown = _Var5.unknown;
            FUN_100108f9c(SVar7.unknown,_Var5.unknown,_Var9.unknown);
            _swift_bridgeObjectRelease(_Var9.unknown);
            IVar19.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)SVar7.unknown;
            puVar11 = _Var16.unknown;
            if ((ulong)_Var12.unknown >> 0xe != (ulong)SVar7.unknown >> 0xe) {
              do {
                if ((ulong)_Var12.unknown >> 0xe == (ulong)IVar19.cmsgPointer.unknown >> 0xe) {
                  _swift_bridgeObjectRelease(_Var16.unknown);
                  _Var16.unknown = _Var21.unknown;
                  _Var21.unknown = _Var9.unknown;
                  goto LAB_1004fa770;
                }
                CVar28 = Swift::Substring::get_subscript(IVar19,SVar7);
                IVar19 = Swift::Substring::index(IVar19,SVar7);
                _swift_bridgeObjectRetain(CVar28.bridgeObject);
                bVar4 = Swift::Character::get_isNumber(CVar28);
                _swift_bridgeObjectRelease_n(CVar28.bridgeObject,2);
              } while (bVar4);
            }
          }
          _swift_bridgeObjectRelease(puVar11);
          _swift_bridgeObjectRelease(_Var21.unknown);
LAB_1004fa4ec:
          lVar20 = lVar20 + 1;
        } while (lVar20 != lVar22);
      }
      _swift_bridgeObjectRelease(_Var9.unknown);
      pcVar14 = "Misdirected Request: Host header not allowed";
      uVar13 = *(undefined8 *)(param_3 + 0x10);
      uVar18 = *(undefined8 *)(param_3 + 0x18);
      _swift_bridgeObjectRetain(uVar18);
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      uVar24 = 0xd00000000000002c;
      uVar23 = 0x1a5;
    }
    param_1[1] = uVar24;
    *param_1 = uVar23;
    param_1[2] = (ulong)(pcVar14 + -0x20) | 0x8000000000000000;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[5] = uVar13;
    param_1[6] = uVar18;
    param_1[7] = puVar8;
    lVar22 = 0;
    FUN_1004fe770();
    _swift_storeEnumTagMultiPayload(param_1,lVar22,4);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar22 + -8) + 0x38);
    uVar13 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004fab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar13,1,lVar22);
  return;
}



/* Address: 0x1004fab10 | FUN_1004fab10 */

void FUN_1004fab10(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1004fa454(param_1,param_2,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1004fab1c | FUN_1004fab1c */

/* WARNING: Removing unreachable block (ram,0x0001004fab90) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004fab88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1004fab1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  JSONEncoder *pJVar1;
  JSONEncoder *pJVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  pJVar1 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar1,*(undefined4 *)(pJVar1 + 0x30),*(undefined2 *)(pJVar1 + 0x34));
  pJVar2 = Foundation::JSONEncoder::init(pJVar1);
  pJVar1 = pJVar2;
  FUN_1004fcee0();
  puVar3 = &DAT_100ed9f88;
  auVar4._0_8_ = Foundation::JSONEncoder::_encode(pJVar2,pJVar1,&DAT_100ed9f88,pJVar1);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_2);
  _swift_release(pJVar2);
  _swift_bridgeObjectRelease(param_4);
  auVar4._8_8_ = puVar3;
  return auVar4;
}



/* Address: 0x1004fac08 | FUN_1004fac08 */

void FUN_1004fac08(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  _StringGuts _Var6;
  _StringGuts _Var7;
  String SVar8;
  String SVar9;
  
  if (((((undefined *)*param_3 == (undefined *)0x544547 &&
         (undefined *)param_3[1] == (undefined *)0xe300000000000000) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)*param_3,(undefined *)param_3[1],
                           (_StringComparisonResult)0x47), bVar1)) &&
      (_Var6.unknown = *(undefined **)(param_2 + 0x30), _Var6.unknown != (undefined *)0x0)) &&
     (((_Var7.unknown = *(undefined **)(param_2 + 0x28),
       _Var7.unknown == (undefined *)0xd000000000000025 &&
       _Var6.unknown == (undefined *)0x8000000100da7190 ||
       (bVar1 = Swift::_stringCompareWithSmolCheck(_Var7,_Var6,(_StringComparisonResult)0x25), bVar1
       )) || (SVar8.bridgeObject = (void *)0x8000000100dac1f0,
             SVar8.str = (char *)0xd000000000000026, SVar9.bridgeObject = _Var6.unknown,
             SVar9.str = _Var7.unknown, bVar1 = Swift::String::hasPrefix(SVar8,SVar9), bVar1)))) {
    puVar2 = &DAT_100fcb888;
    FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
    _swift_initStaticObject();
    FUN_1001037b4(param_4,param_5);
    puVar3 = puVar2;
    FUN_1004a66a4();
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = puVar3;
    lVar4 = 0;
    FUN_1004fe770();
    _swift_storeEnumTagMultiPayload(param_1,lVar4,2);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar5 = 0;
  }
  else {
    lVar4 = 0;
    FUN_1004fe770();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar5 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004fad94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar5,1,lVar4);
  return;
}



/* Address: 0x1004fad98 | FUN_1004fad98 */

void FUN_1004fad98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1004fac08(param_1,param_2,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1004fada0 | thunk_FUN_1004fc870 */

void thunk_FUN_1004fc870(void)

{
  FUN_1004fc870();
  return;
}



/* Address: 0x1004fada4 | FUN_1004fada4 */

void FUN_1004fada4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  URL UVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1004fcf20();
  iVar1 = *(int *)(lVar2 + 0x14);
  UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004fadec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,UVar3.unknown);
  return;
}



/* Address: 0x1004fadf0 | FUN_1004fadf0 */

void FUN_1004fadf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  URL UVar2;
  long lVar3;
  code *pcVar4;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  pcVar4 = *(code **)(*(long *)(UVar2.unknown + -8) + 0x20);
  (*pcVar4)(param_1,param_2,UVar2.unknown);
  lVar3 = 0;
  FUN_1004fcf20();
  (*pcVar4)(param_1 + *(int *)(lVar3 + 0x14),param_3,UVar2.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x18));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x1c));
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x20));
  *puVar1 = param_8;
  puVar1[1] = param_9;
  FUN_100076508(param_10,param_1 + *(int *)(lVar3 + 0x24));
  return;
}



/* Address: 0x1004faecc | FUN_1004faecc */

void FUN_1004faecc(undefined8 *param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  URL UVar5;
  Date DVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  char *pcVar13;
  Date DVar14;
  ulong uVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  char *pcVar20;
  void *pvVar21;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  long lVar22;
  long lVar23;
  long extraout_x8_00;
  ulong uVar24;
  long extraout_x8_01;
  long lVar25;
  long lVar26;
  long extraout_x8_02;
  long lVar27;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar28;
  long lVar29;
  long extraout_x12;
  long unaff_x20;
  void *pvVar30;
  ulong uVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  long *plVar34;
  undefined8 uVar35;
  ulong uVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  long lStack_250;
  char *local_248;
  void *local_240;
  
  puVar4 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)&lStack_250 - extraout_x8;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar23 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
  uVar24 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = uVar24 - extraout_x8_01;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar26 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar26 + 0x40));
  lVar29 = lVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar27 = lVar29 - extraout_x12;
  lVar7 = 0;
  FUN_1004ca408();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  plVar34 = (long *)(lVar27 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar8 = 0;
  FUN_1004fcf34();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar32 = (undefined8 *)((long)plVar34 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  lVar9 = 0;
  FUN_1004fcf20();
  pcVar10 = param_2;
  (**(code **)(unaff_x20 + *(int *)(lVar9 + 0x20)))(param_2,param_3);
  if (((ulong)pcVar10 & 1) == 0) {
    lVar7 = 0;
    FUN_1004fe770();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    uVar17 = 1;
LAB_1004fb1f0:
                    /* WARNING: Could not recover jumptable at 0x0001004fb20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar17,1,lVar7);
    return;
  }
  pcVar10 = (char *)0x7a69726f68747541;
  pvVar16 = (void *)0xed00006e6f697461;
  FUN_1004fe364();
  if (pvVar16 == (void *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + *(int *)(lVar9 + 0x1c));
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      param_2 = (char *)0x0;
    }
    else {
      (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
    }
    uVar17 = *(undefined8 *)((long)param_3 + 0x10);
    uVar35 = *(undefined8 *)((long)param_3 + 0x18);
    pcVar10 = param_2;
    FUN_1004fbfc8();
    puVar4 = &DAT_100fcb888;
    FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(undefined8 *)(puVar4 + 0x20) = 0xd000000000000010;
    *(undefined8 *)(puVar4 + 0x28) = 0x8000000100dac220;
    *(long *)(puVar4 + 0x30) = unaff_x20;
    *(char **)(puVar4 + 0x38) = pcVar10;
    _swift_bridgeObjectRetain(uVar35);
    puVar12 = puVar4;
    FUN_1004a66a4();
    _swift_setDeallocating(puVar4);
    FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
    _swift_bridgeObjectRelease(param_2);
    param_1[1] = 0x726f687475616e55;
    *param_1 = 0x191;
    param_1[3] = 0;
    param_1[2] = 0xec00000064657a69;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[5] = uVar17;
LAB_1004fb410:
    param_1[6] = uVar35;
    param_1[7] = puVar12;
    lVar7 = 0;
    FUN_1004fe770();
    _swift_storeEnumTagMultiPayload(param_1,lVar7,4);
LAB_1004fb430:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  }
  else {
    pvVar30 = pvVar16;
    FUN_1004fbc9c();
    uVar19 = (uint)param_4;
    pcVar20 = param_4;
    _swift_bridgeObjectRelease(pvVar16);
    if ((uVar19 & 0xff) == 1) {
      SVar37.bridgeObject = pvVar30;
      SVar37.str = pcVar10;
      SVar39.bridgeObject = param_5;
      SVar39.str = pcVar20;
      Swift::String::append(SVar37,SVar39);
      FUN_10002cca0(pcVar10,pvVar30,1);
      uVar17 = *(undefined8 *)((long)param_3 + 0x10);
      uVar35 = *(undefined8 *)((long)param_3 + 0x18);
      _swift_bridgeObjectRetain(uVar35);
      puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      *param_1 = 400;
      param_1[1] = 0x7571655220646142;
      param_1[2] = 0xed0000203a747365;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[5] = uVar17;
      param_1[6] = uVar35;
      param_1[7] = puVar4;
      lVar7 = 0;
      FUN_1004fe770();
      _swift_storeEnumTagMultiPayload(param_1,lVar7,4);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      uVar17 = 0;
      goto LAB_1004fb1f0;
    }
    pcVar20 = param_2;
    pvVar21 = param_3;
    local_248 = pcVar10;
    local_240 = pvVar30;
    (**(code **)(unaff_x20 + *(int *)(lVar9 + 0x18)))(puVar32,pcVar10,pvVar30);
    puVar11 = puVar32;
    _swift_getEnumCaseMultiPayload(puVar32,lVar8);
    pvVar16 = local_240;
    pcVar10 = local_248;
    iVar3 = (int)puVar11;
    if (iVar3 < 2) {
      if (iVar3 != 0) {
        uVar17 = *puVar32;
        uVar33 = puVar32[2];
        uVar1 = *(undefined8 *)((long)param_3 + 0x10);
        uVar35 = *(undefined8 *)((long)param_3 + 0x18);
        uVar18 = uVar17;
        FUN_1004fbfc8(unaff_x20,uVar17,0xd000000000000012,0x8000000100daa4b0,puVar32[1],uVar33);
        puVar4 = &DAT_100fcb888;
        FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
        _swift_initStackObject();
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined8 *)(puVar4 + 0x20) = 0xd000000000000010;
        *(undefined8 *)(puVar4 + 0x28) = 0x8000000100dac220;
        *(long *)(puVar4 + 0x30) = unaff_x20;
        *(undefined8 *)(puVar4 + 0x38) = uVar18;
        _swift_bridgeObjectRetain(uVar35);
        puVar12 = puVar4;
        FUN_1004a66a4();
        _swift_setDeallocating(puVar4);
        FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
        FUN_10002cca0(local_248,local_240,(ulong)param_4 & 0xffffffff);
        _swift_bridgeObjectRelease(uVar17);
        _swift_bridgeObjectRelease(uVar33);
        param_1[1] = 0xd00000000000001d;
        *param_1 = 0x193;
        param_1[2] = 0x8000000100dac260;
        param_1[3] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        param_1[5] = uVar1;
        goto LAB_1004fb410;
      }
      FUN_1000523d8(puVar32,plVar34,FUN_1004ca408);
      FUN_1004fcf48((long)plVar34 + (long)*(int *)(lVar7 + 0x18),lVar25);
      lVar7 = lVar25;
      (**(code **)(lVar26 + 0x30))(lVar25,1,DVar6.unknown);
      if ((int)lVar7 == 1) {
        FUN_1000fb4c4(lVar25,&DAT_100fcb550,&USHORT_100c50b50);
      }
      else {
        (**(code **)(lVar26 + 0x20))(lVar27,lVar25,DVar6.unknown);
        DVar14 = Foundation::Date::init();
        FUN_1004fcf98();
        bVar2 = Swift::Comparable::<__infix(lVar27,lVar29,DVar6.unknown,DVar14.unknown);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar26 + 8);
        (*UNRECOVERED_JUMPTABLE)(lVar29,DVar6.unknown);
        if (bVar2) {
          pcVar28 = *(code **)(unaff_x20 + *(int *)(lVar9 + 0x1c));
          if (pcVar28 == (code *)0x0) {
            param_2 = (char *)0x0;
          }
          else {
            (*pcVar28)(param_2,param_3);
          }
          uVar35 = *(undefined8 *)((long)param_3 + 0x10);
          uVar17 = *(undefined8 *)((long)param_3 + 0x18);
          pcVar10 = param_2;
          FUN_1004fbfc8(unaff_x20,param_2,0x5f64696c61766e69,0xed00006e656b6f74,0xd000000000000011,
                        0x8000000100dac2a0);
          puVar4 = &DAT_100fcb888;
          FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
          _swift_initStackObject();
          *(undefined8 *)(puVar4 + 0x18) = 2;
          *(undefined8 *)(puVar4 + 0x10) = 1;
          *(undefined8 *)(puVar4 + 0x20) = 0xd000000000000010;
          *(undefined8 *)(puVar4 + 0x28) = 0x8000000100dac220;
          *(long *)(puVar4 + 0x30) = unaff_x20;
          *(char **)(puVar4 + 0x38) = pcVar10;
          _swift_bridgeObjectRetain(uVar17);
          puVar12 = puVar4;
          FUN_1004a66a4();
          _swift_setDeallocating(puVar4);
          FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
          _swift_bridgeObjectRelease(param_2);
          FUN_10002cca0(local_248,local_240,(ulong)param_4 & 0xffffffff);
          (*UNRECOVERED_JUMPTABLE)(lVar27,DVar6.unknown);
          param_1[1] = 0x726f687475616e55;
          *param_1 = 0x191;
          param_1[3] = 0;
          param_1[2] = 0xec00000064657a69;
          *(undefined1 *)(param_1 + 4) = 1;
          param_1[5] = uVar35;
          param_1[6] = uVar17;
          param_1[7] = puVar12;
          lVar7 = 0;
          FUN_1004fe770();
          _swift_storeEnumTagMultiPayload(param_1,lVar7,4);
          FUN_10005241c(plVar34,FUN_1004ca408);
          goto LAB_1004fb758;
        }
        (*UNRECOVERED_JUMPTABLE)(lVar27,DVar6.unknown);
      }
      lVar7 = *plVar34;
      if (lVar7 == 0) {
LAB_1004fb970:
        FUN_10002cca0(local_248,local_240,uVar19);
        FUN_10005241c(plVar34,FUN_1004ca408);
        lVar7 = 0;
        FUN_1004fe770();
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + -8) + 0x38);
        uVar17 = 1;
        goto LAB_1004fb448;
      }
      uVar36 = *(ulong *)(lVar7 + 0x10);
      if (uVar36 != 0) {
        uVar31 = 0;
        puVar32 = (undefined8 *)(lVar7 + 0x28);
        do {
          if (*(ulong *)(lVar7 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1004fbc9c);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar17 = *puVar32;
          _swift_bridgeObjectRetain(uVar17);
          Foundation::URL::_init();
          lVar8 = lVar22;
          (**(code **)(lVar23 + 0x30))(lVar22,1,UVar5.unknown);
          if ((int)lVar8 == 1) {
            _swift_bridgeObjectRelease(uVar17);
            FUN_1000fb4c4(lVar22,&DAT_100fcb378,&DAT_100c50170);
          }
          else {
            (**(code **)(lVar23 + 0x20))(uVar24,lVar22,UVar5.unknown);
            lVar8 = unaff_x20 + *(int *)(lVar9 + 0x24);
            uVar35 = *(undefined8 *)(lVar8 + 0x18);
            lVar25 = *(long *)(lVar8 + 0x20);
            FUN_100004640(lVar8,uVar35);
            uVar15 = uVar24;
            (**(code **)(lVar25 + 0x28))(uVar24,unaff_x20 + *(int *)(lVar9 + 0x14),uVar35,lVar25);
            _swift_bridgeObjectRelease(uVar17);
            (**(code **)(lVar23 + 8))(uVar24,UVar5.unknown);
            if ((uVar15 & 1) != 0) goto LAB_1004fb970;
          }
          uVar31 = uVar31 + 1;
          puVar32 = puVar32 + 2;
        } while (uVar36 != uVar31);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + *(int *)(lVar9 + 0x1c));
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_2 = (char *)0x0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
      }
      pvVar16 = local_240;
      uVar17 = *(undefined8 *)((long)param_3 + 0x10);
      uVar35 = *(undefined8 *)((long)param_3 + 0x18);
      pcVar10 = param_2;
      FUN_1004fbfc8(unaff_x20,param_2,0x5f64696c61766e69,0xed00006e656b6f74,0xd000000000000017,
                    0x8000000100dac280);
      puVar4 = &DAT_100fcb888;
      FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined8 *)(puVar4 + 0x20) = 0xd000000000000010;
      *(undefined8 *)(puVar4 + 0x28) = 0x8000000100dac220;
      *(long *)(puVar4 + 0x30) = unaff_x20;
      *(char **)(puVar4 + 0x38) = pcVar10;
      _swift_bridgeObjectRetain(uVar35);
      puVar12 = puVar4;
      FUN_1004a66a4();
      _swift_setDeallocating(puVar4);
      FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
      FUN_10002cca0(local_248,pvVar16,uVar19);
      _swift_bridgeObjectRelease(param_2);
      param_1[1] = 0x726f687475616e55;
      *param_1 = 0x191;
      param_1[3] = 0;
      param_1[2] = 0xec00000064657a69;
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[5] = uVar17;
      param_1[6] = uVar35;
      param_1[7] = puVar12;
      lVar7 = 0;
      FUN_1004fe770();
      _swift_storeEnumTagMultiPayload(param_1,lVar7,4);
      FUN_10005241c(plVar34,FUN_1004ca408);
      goto LAB_1004fb430;
    }
    if (iVar3 == 2) {
      uVar17 = *puVar32;
      uVar35 = puVar32[1];
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + *(int *)(lVar9 + 0x1c));
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_2 = (char *)0x0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
      }
      uVar1 = *(undefined8 *)((long)param_3 + 0x10);
      uVar18 = *(undefined8 *)((long)param_3 + 0x18);
      pcVar10 = param_2;
      FUN_1004fbfc8(unaff_x20,param_2,0x5f64696c61766e69,0xed00006e656b6f74,uVar17,uVar35);
      puVar4 = &DAT_100fcb888;
      FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined8 *)(puVar4 + 0x20) = 0xd000000000000010;
      *(undefined8 *)(puVar4 + 0x28) = 0x8000000100dac220;
      *(long *)(puVar4 + 0x30) = unaff_x20;
      *(char **)(puVar4 + 0x38) = pcVar10;
      _swift_bridgeObjectRetain(uVar18);
      puVar12 = puVar4;
      FUN_1004a66a4();
      _swift_setDeallocating(puVar4);
      FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
      FUN_10002cca0(local_248,pvVar16,(ulong)param_4 & 0xffffffff);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(uVar35);
      param_1[1] = 0x726f687475616e55;
      *param_1 = 0x191;
      param_1[3] = 0;
      param_1[2] = 0xec00000064657a69;
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[5] = uVar1;
      param_1[6] = uVar18;
      param_1[7] = puVar12;
      lVar7 = 0;
      FUN_1004fe770();
      _swift_storeEnumTagMultiPayload(param_1,lVar7,4);
LAB_1004fb758:
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    }
    else {
      pvVar30 = (void *)puVar32[1];
      if (pvVar30 == (void *)0x0) {
        pvVar30 = (void *)0x8000000100dac240;
        pcVar13 = (char *)0xd00000000000001f;
      }
      else {
        pcVar13 = (char *)*puVar32;
      }
      SVar38.bridgeObject = pvVar30;
      SVar38.str = pcVar13;
      SVar40.bridgeObject = pvVar21;
      SVar40.str = pcVar20;
      Swift::String::append(SVar38,SVar40);
      _swift_bridgeObjectRelease(pvVar30);
      uVar17 = *(undefined8 *)((long)param_3 + 0x10);
      uVar35 = *(undefined8 *)((long)param_3 + 0x18);
      _swift_bridgeObjectRetain(uVar35);
      puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      FUN_10002cca0(pcVar10,pvVar16,(ulong)param_4 & 0xffffffff);
      *param_1 = 400;
      param_1[1] = 0x7571655220646142;
      param_1[2] = 0xed0000203a747365;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[5] = uVar17;
      param_1[6] = uVar35;
      param_1[7] = puVar4;
      lVar7 = 0;
      FUN_1004fe770();
      _swift_storeEnumTagMultiPayload(param_1,lVar7,4);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    }
  }
  uVar17 = 0;
LAB_1004fb448:
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar17,1,lVar7);
  return;
}



/* Address: 0x1004fbc9c | FUN_1004fbc9c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004fbdd4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

char * FUN_1004fbc9c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  CharacterSet CVar4;
  CharacterSet CVar5;
  NSComparisonResult NVar6;
  Iterator IVar7;
  char *pcVar8;
  void *pvVar9;
  undefined *puVar10;
  long extraout_x8;
  CharacterSet in;
  long lVar12;
  code *pcVar13;
  String SVar14;
  String SVar15;
  Character CVar16;
  undefined1 auStack_90 [8];
  String local_88;
  undefined8 local_78;
  ulong uStack_70;
  undefined *puVar11;
  
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar12 = *(long *)(CVar4.unknown + -8);
  CVar5 = CVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  in.unknown = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88.bridgeObject = (void *)param_2;
  local_88.str = (char *)param_1;
  CVar5 = Foundation::CharacterSet::get_whitespacesAndNewlines(CVar5);
  FUN_1004b8f18();
  SVar14 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar9 = SVar14.bridgeObject;
  pcVar13 = *(code **)(lVar12 + 8);
  (*pcVar13)(in.unknown,CVar4.unknown);
  uVar1 = (ulong)SVar14.str & 0xffffffffffff;
  if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar9 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar9);
    pcVar8 = (char *)0xd00000000000001d;
  }
  else {
    lVar12 = 1;
    FUN_1004c0730(1,1,SVar14.str,pvVar9);
    if (*(long *)(lVar12 + 0x10) == 2) {
      SVar14 = *(String *)(lVar12 + 0x20);
      uVar2 = *(undefined8 *)(lVar12 + 0x38);
      _swift_bridgeObjectRetain(uVar2);
      SVar14 = Swift::String::__fromSubstring(SVar14);
      _swift_bridgeObjectRelease(uVar2);
      local_88 = SVar14;
      NVar6 = (extension_Foundation)::Swift::StringProtocol::_caseInsensitiveCompare
                        (lVar12,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_String_100eac208,CVar5.unknown,CVar5.unknown)
      ;
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
      if (NVar6.unknown == (undefined *)0x0) {
        if (*(ulong *)(lVar12 + 0x10) < 2) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1004fbfc8);
          (*pcVar13)();
        }
        SVar14 = *(String *)(lVar12 + 0x40);
        CVar5.unknown = *(undefined **)(lVar12 + 0x58);
        _swift_bridgeObjectRetain(CVar5.unknown);
        _swift_bridgeObjectRelease(lVar12);
        SVar14 = Swift::String::__fromSubstring(SVar14);
        _swift_bridgeObjectRelease();
        local_88 = SVar14;
        Foundation::CharacterSet::get_whitespacesAndNewlines(CVar5);
        SVar15 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        puVar10 = SVar15.bridgeObject;
        (*pcVar13)(in.unknown);
        _swift_bridgeObjectRelease(SVar14.bridgeObject);
        uStack_70 = (ulong)SVar15.str & 0xffffffffffff;
        if (((ulong)puVar10 & 0x2000000000000000) != 0) {
          uStack_70 = (ulong)puVar10 >> 0x38 & 0xf;
        }
        if (uStack_70 == 0) {
          _swift_bridgeObjectRelease(puVar10);
          pcVar8 = (char *)0xd000000000000015;
        }
        else {
          local_78 = 0;
          IVar7.unknown = puVar10;
          local_88 = SVar15;
          _swift_bridgeObjectRetain();
          do {
            Swift::String::Iterator::_next(IVar7);
            if (CVar4.unknown == (undefined *)0x0) {
              _swift_bridgeObjectRelease(local_88.bridgeObject);
              return SVar15.str;
            }
            CVar16.bridgeObject = CVar4.unknown;
            CVar16.str = IVar7.unknown;
            puVar11 = CVar4.unknown;
            bVar3 = Swift::Character::get_isWhitespace(CVar16);
            _swift_bridgeObjectRelease();
            IVar7.unknown = CVar4.unknown;
            CVar4.unknown = puVar11;
          } while (!bVar3);
          _swift_bridgeObjectRelease(puVar10);
          _swift_bridgeObjectRelease(local_88.bridgeObject);
          pcVar8 = (char *)0xd000000000000028;
        }
      }
      else {
        _swift_bridgeObjectRelease(lVar12);
        pcVar8 = (char *)0xd000000000000023;
      }
    }
    else {
      _swift_bridgeObjectRelease();
      pcVar8 = (char *)0xd000000000000038;
    }
  }
  return pcVar8;
}



/* Address: 0x1004fbfc8 | FUN_1004fbfc8 */

/* WARNING: Removing unreachable block (ram,0x0001004fc688) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_1004fbfc8(undefined8 param_1,_StringGuts param_2,undefined8 param_3,long param_4,ulong param_5,
             ulong param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  URL UVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  ulong uVar14;
  void *pvVar15;
  _StringGuts _Var16;
  char *pcVar17;
  void *pvVar18;
  void *pvVar19;
  undefined8 *******pppppppuVar20;
  String SVar21;
  String separator;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String separator_00;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined8 *******local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  String local_80;
  ulong local_70;
  
  local_c8 = (undefined8 *******)0x0;
  local_c0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x16,param_2);
  UVar9.unknown = local_c0;
  _swift_bridgeObjectRelease();
  local_c8 = (undefined8 *******)0xd000000000000013;
  local_c0 = (undefined1 *)0x8000000100dac3a0;
  local_80 = Foundation::URL::get_absoluteString(UVar9);
  pvVar15 = local_80.bridgeObject;
  pcVar10 = local_80.str;
  local_90 = 0x5c;
  uStack_88 = 0xe100000000000000;
  local_a0 = 0x5c5c;
  puStack_98 = &SUB_e200000000000000;
  FUN_1004b8f18();
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  local_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_90,&local_a0,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Swift_String_100eac208,pcVar10,pcVar10,pcVar10);
  pvVar19 = local_80.bridgeObject;
  local_90 = 0x22;
  uStack_88 = 0xe100000000000000;
  local_a0 = 0x225c;
  puStack_98 = &SUB_e200000000000000;
  pcVar17 = (char *)0x0;
  pvVar18 = (void *)0x0;
  SVar21 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_90,&local_a0,0,0,0,1,puVar6,puVar6,puVar6,pcVar10,pcVar10,pcVar10);
  _swift_bridgeObjectRelease(pvVar19);
  _swift_bridgeObjectRelease(pvVar15);
  SVar22.bridgeObject = pvVar18;
  SVar22.str = pcVar17;
  Swift::String::append(SVar21,SVar22);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar21.bridgeObject = (void *)0xe100000000000000;
  SVar21.str = (char *)0x22;
  SVar26.bridgeObject = pvVar18;
  SVar26.str = pcVar17;
  Swift::String::append(SVar21,SVar26);
  puVar2 = local_c0;
  pppppppuVar20 = local_c8;
  uVar11 = 0;
  _Var16.unknown = &DAT_00000001;
  FUN_1004a4448(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar4 = *(ulong *)(uVar11 + 0x10);
  puVar1 = (undefined1 *)(uVar4 + 1);
  uVar14 = uVar11;
  if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar4) {
    uVar14 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
    _Var16.unknown = puVar1;
    FUN_1004a4448(uVar14,puVar1,1,uVar11);
  }
  *(undefined1 **)(uVar14 + 0x10) = puVar1;
  lVar3 = uVar14 + uVar4 * 0x10;
  *(undefined8 ********)(lVar3 + 0x20) = pppppppuVar20;
  *(undefined **)(lVar3 + 0x28) = puVar2;
  if ((param_2.unknown != (undefined *)0x0) &&
     (pppppppuVar20 = *(undefined8 ********)(param_2.unknown + 0x10),
     pppppppuVar20 != (undefined8 *******)0x0)) {
    local_70 = uVar14;
    _swift_bridgeObjectRetain(param_2.unknown);
    pppppppuVar12 = pppppppuVar20;
    FUN_1004b4ca0(pppppppuVar20,0);
    pppppppuVar13 = &local_c8;
    FUN_100370d3c(pppppppuVar13,pppppppuVar12 + 4,pppppppuVar20,param_2.unknown);
    FUN_10000c650(local_c8,local_c0,local_b8,uStack_b0,local_a8);
    if (pppppppuVar13 != pppppppuVar20) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1004fc648);
      (*pcVar8)();
    }
    local_c8 = pppppppuVar12;
    FUN_1004b7b80(&local_c8);
    pppppppuVar20 = local_c8;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    FUN_1004b8a64();
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x20;
    SVar21 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_release(pppppppuVar20);
    local_c8 = (undefined8 *******)0x223d65706f6373;
    local_c0 = &DAT_e700000000000000;
    local_90 = 0x5c;
    uStack_88 = 0xe100000000000000;
    local_a0 = 0x5c5c;
    puStack_98 = &SUB_e200000000000000;
    local_80 = SVar21;
    local_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_90,&local_a0,0,0,0,1,puVar6,puVar6,puVar6,pcVar10,pcVar10,pcVar10);
    pvVar15 = local_80.bridgeObject;
    local_90 = 0x22;
    uStack_88 = 0xe100000000000000;
    local_a0 = 0x225c;
    puStack_98 = &SUB_e200000000000000;
    pcVar17 = (char *)0x0;
    pvVar19 = (void *)0x0;
    SVar22 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_90,&local_a0,0,0,0,1,puVar6,puVar6,puVar6,pcVar10,pcVar10,pcVar10);
    _swift_bridgeObjectRelease(pvVar15);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    SVar27.bridgeObject = pvVar19;
    SVar27.str = pcVar17;
    Swift::String::append(SVar22,SVar27);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    SVar23.bridgeObject = (void *)0xe100000000000000;
    SVar23.str = (char *)0x22;
    _Var16.unknown = (undefined1 *)0xe100000000000000;
    SVar28.bridgeObject = pvVar19;
    SVar28.str = pcVar17;
    Swift::String::append(SVar23,SVar28);
    puVar2 = local_c0;
    pppppppuVar20 = local_c8;
    uVar4 = *(ulong *)(uVar14 + 0x10);
    puVar1 = (undefined1 *)(uVar4 + 1);
    uVar11 = uVar14;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar4) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
      _Var16.unknown = puVar1;
      FUN_1004a4448(uVar11,puVar1,1,uVar14);
    }
    *(undefined1 **)(uVar11 + 0x10) = puVar1;
    lVar3 = uVar11 + uVar4 * 0x10;
    *(undefined8 ********)(lVar3 + 0x20) = pppppppuVar20;
    *(undefined **)(lVar3 + 0x28) = puVar2;
    uVar14 = uVar11;
  }
  local_70 = uVar14;
  if (param_4 != 0) {
    local_c8 = (undefined8 *******)0x223d726f727265;
    local_c0 = &DAT_e700000000000000;
    local_80.bridgeObject = (void *)param_4;
    local_80.str = (char *)param_3;
    local_90 = 0x5c;
    uStack_88 = 0xe100000000000000;
    local_a0 = 0x5c5c;
    puStack_98 = &SUB_e200000000000000;
    local_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_90,&local_a0,0,0,0,1,puVar6,puVar6,puVar6,pcVar10,pcVar10,pcVar10);
    pvVar15 = local_80.bridgeObject;
    local_90 = 0x22;
    uStack_88 = 0xe100000000000000;
    local_a0 = 0x225c;
    puStack_98 = &SUB_e200000000000000;
    pcVar17 = (char *)0x0;
    pvVar19 = (void *)0x0;
    SVar21 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_90,&local_a0,0,0,0,1,puVar6,puVar6,puVar6,pcVar10,pcVar10,pcVar10);
    _swift_bridgeObjectRelease(pvVar15);
    SVar29.bridgeObject = pvVar19;
    SVar29.str = pcVar17;
    Swift::String::append(SVar21,SVar29);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    SVar24.bridgeObject = (void *)0xe100000000000000;
    SVar24.str = (char *)0x22;
    _Var16.unknown = (undefined *)0xe100000000000000;
    SVar30.bridgeObject = pvVar19;
    SVar30.str = pcVar17;
    Swift::String::append(SVar24,SVar30);
    puVar7 = local_c0;
    pppppppuVar20 = local_c8;
    uVar4 = *(ulong *)(uVar14 + 0x10);
    puVar2 = (undefined *)(uVar4 + 1);
    uVar11 = uVar14;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar4) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
      _Var16.unknown = puVar2;
      FUN_1004a4448(uVar11,puVar2,1,uVar14);
    }
    *(undefined **)(uVar11 + 0x10) = puVar2;
    lVar3 = uVar11 + uVar4 * 0x10;
    *(undefined8 ********)(lVar3 + 0x20) = pppppppuVar20;
    *(undefined **)(lVar3 + 0x28) = puVar7;
    local_70 = uVar11;
  }
  uVar4 = local_70;
  if (param_6 != 0) {
    uVar14 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar14 = param_6 >> 0x38 & 0xf;
    }
    if (uVar14 != 0) {
      local_c8 = (undefined8 *******)0x0;
      local_c0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x16,_Var16);
      _swift_bridgeObjectRelease(local_c0);
      local_c8 = (undefined8 *******)0xd000000000000013;
      local_c0 = (undefined1 *)0x8000000100dac3c0;
      local_80.bridgeObject = (void *)param_6;
      local_80.str = (char *)param_5;
      local_90 = 0x5c;
      uStack_88 = 0xe100000000000000;
      local_a0 = 0x5c5c;
      puStack_98 = &SUB_e200000000000000;
      local_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_90,&local_a0,0,0,0,1,puVar6,puVar6,puVar6,pcVar10,pcVar10,pcVar10
                           );
      pvVar15 = local_80.bridgeObject;
      local_90 = 0x22;
      uStack_88 = 0xe100000000000000;
      local_a0 = 0x225c;
      puStack_98 = &SUB_e200000000000000;
      pcVar17 = (char *)0x0;
      pvVar19 = (void *)0x0;
      SVar21 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_90,&local_a0,0,0,0,1,puVar6,puVar6,puVar6,pcVar10,pcVar10,pcVar10);
      _swift_bridgeObjectRelease(pvVar15);
      SVar31.bridgeObject = pvVar19;
      SVar31.str = pcVar17;
      Swift::String::append(SVar21,SVar31);
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      SVar25.bridgeObject = (void *)0xe100000000000000;
      SVar25.str = (char *)0x22;
      SVar32.bridgeObject = pvVar19;
      SVar32.str = pcVar17;
      Swift::String::append(SVar25,SVar32);
      puVar6 = local_c0;
      pppppppuVar20 = local_c8;
      uVar14 = *(ulong *)(uVar4 + 0x10);
      uVar11 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar14) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_1004a4448(uVar11,uVar14 + 1,1,uVar4);
      }
      *(ulong *)(uVar11 + 0x10) = uVar14 + 1;
      lVar3 = uVar11 + uVar14 * 0x10;
      *(undefined8 ********)(lVar3 + 0x20) = pppppppuVar20;
      *(undefined **)(lVar3 + 0x28) = puVar6;
      local_70 = uVar11;
    }
  }
  uVar4 = local_70;
  pcVar10 = &DAT_100fcb568;
  FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
  pcVar17 = pcVar10;
  FUN_1004b8a64();
  separator_00.bridgeObject = &SUB_e200000000000000;
  separator_00.str = (char *)0x202c;
  SVar21 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
  local_c8 = (undefined8 *******)0x20726572616542;
  local_c0 = &DAT_e700000000000000;
  SVar33.bridgeObject = pcVar17;
  SVar33.str = pcVar10;
  Swift::String::append(SVar21,SVar33);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  auVar5._8_8_ = local_c0;
  auVar5._0_8_ = local_c8;
  return auVar5;
}



/* Address: 0x1004fc694 | thunk_FUN_1004faecc */

void thunk_FUN_1004faecc(void)

{
  FUN_1004faecc();
  return;
}


