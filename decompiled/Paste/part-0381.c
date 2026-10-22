/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004a7388 | FUN_1004a7388 */

undefined1  [16] FUN_1004a7388(void)

{
  return ZEXT816(0x100ed9818);
}



/* Address: 0x1004a7398 | FUN_1004a7398 */

void FUN_1004a7398(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x1004a73ac | thunk_FUN_1004a4118 */

void thunk_FUN_1004a4118(void)

{
  FUN_1004a4118();
  return;
}



/* Address: 0x1004a73b0 | thunk_FUN_1004a41d8 */

void thunk_FUN_1004a41d8(void)

{
  FUN_1004a41d8();
  return;
}



/* Address: 0x1004a73b4 | thunk_FUN_1004a41ac */

void thunk_FUN_1004a41ac(void)

{
  FUN_1004a41ac();
  return;
}



/* Address: 0x1004a73b8 | thunk_FUN_1004a41e4 */

void thunk_FUN_1004a41e4(void)

{
  FUN_1004a41e4();
  return;
}



/* Address: 0x1004a73bc | thunk_FUN_1004a4254 */

void thunk_FUN_1004a4254(void)

{
  FUN_1004a4254();
  return;
}



/* Address: 0x1004a73c0 | thunk_FUN_1004a40a4 */

void thunk_FUN_1004a40a4(void)

{
  FUN_1004a40a4();
  return;
}



/* Address: 0x1004a73c4 | thunk_FUN_1004a4150 */

void thunk_FUN_1004a4150(void)

{
  FUN_1004a4150();
  return;
}



/* Address: 0x1004a73c8 | thunk_FUN_1004597a8 */

void thunk_FUN_1004597a8(void)

{
  FUN_1004597a8();
  return;
}



/* Address: 0x1004a73cc | FUN_1004a73cc */

long FUN_1004a73cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  URL UVar10;
  long lVar11;
  Date DVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 auStack_1f0 [3];
  undefined1 local_1d8 [8];
  undefined1 auStack_1d7 [8];
  undefined1 auStack_1cf [15];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined *local_198;
  undefined **ppuStack_190;
  undefined1 local_188 [24];
  undefined *local_170;
  undefined **ppuStack_168;
  undefined1 local_160 [24];
  undefined *local_148;
  undefined **ppuStack_140;
  undefined *local_138 [3];
  undefined *local_120;
  undefined **ppuStack_118;
  undefined1 local_110 [24];
  undefined *local_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [40];
  undefined1 local_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  lVar5 = 0;
  auStack_1f0[1] = param_6;
  auStack_1f0[2] = param_5;
  local_1d8 = (undefined1  [8])param_4;
  local_1c0 = param_2;
  uStack_1b8 = param_3;
  FUN_1004bcc58();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = (long)auStack_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x20));
  unique0x100003ae = param_1;
  auStack_1cf._7_8_ = lVar11;
  FUN_1000c495c(param_1);
  FUN_100076688(param_4,auStack_90);
  FUN_100076688(param_5,auStack_b8);
  FUN_100076688(param_6,auStack_e8);
  local_f8 = &DAT_100eda858;
  ppuStack_f0 = &PTR_PTR_100eda7c8;
  local_120 = &DAT_100ed9dd0;
  ppuStack_118 = &PTR_PTR_100ed9de8;
  puVar6 = &DAT_100ed9840;
  local_110[0] = uVar4;
  local_c0 = uVar4;
  _swift_allocObject(&DAT_100ed9840,0x39,7);
  local_138[0] = puVar6;
  FUN_1004a7868(auStack_e8,puVar6 + 0x10);
  local_148 = &DAT_100eda798;
  ppuStack_140 = &PTR_PTR_100eda7b0;
  local_170 = &DAT_100ed98f0;
  ppuStack_168 = &PTR_PTR_100ed9908;
  local_198 = &DAT_100ed9818;
  ppuStack_190 = &PTR_PTR_100ed97f0;
  local_188[0] = uVar4;
  local_160[0] = uVar4;
  _swift_allocObject();
  puVar7 = local_110;
  FUN_10007d048(puVar7,&DAT_100eda858);
  FUN_10007d048(local_138,&DAT_100ed9dd0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0x29);
  puVar13 = (undefined8 *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar13);
  puVar8 = local_160;
  FUN_10007d048(puVar8,&DAT_100eda798);
  puVar9 = local_188;
  FUN_10007d048(puVar9,&DAT_100ed98f0);
  FUN_10007d048(auStack_1b0,&DAT_100ed9818);
  uVar4 = *puVar7;
  uVar2 = *puVar8;
  uVar3 = *puVar9;
  puVar7 = (undefined1 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::urlValidator);
  *(undefined **)(puVar7 + 0x18) = &DAT_100eda858;
  *(undefined ***)(puVar7 + 0x20) = &PTR_PTR_100eda7c8;
  *puVar7 = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::discoveryClient);
  puVar1[3] = &DAT_100ed9dd0;
  puVar1[4] = &PTR_PTR_100ed9de8;
  puVar6 = &DAT_100ed9840;
  _swift_allocObject(&DAT_100ed9840,0x39,7);
  *puVar1 = puVar6;
  uVar15 = *puVar13;
  uVar17 = puVar13[3];
  uVar16 = puVar13[2];
  *(undefined8 *)(puVar6 + 0x18) = puVar13[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar15;
  *(undefined8 *)(puVar6 + 0x28) = uVar17;
  *(undefined8 *)(puVar6 + 0x20) = uVar16;
  uVar15 = *(undefined8 *)((long)puVar13 + 0x19);
  *(undefined8 *)(puVar6 + 0x31) = *(undefined8 *)((long)puVar13 + 0x21);
  *(undefined8 *)(puVar6 + 0x29) = uVar15;
  puVar7 = (undefined1 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::tokenEndpointClient);
  *(undefined **)(puVar7 + 0x18) = &DAT_100eda798;
  *(undefined ***)(puVar7 + 0x20) = &PTR_PTR_100eda7b0;
  *puVar7 = uVar2;
  puVar7 = (undefined1 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::clientRegistrar);
  *(undefined **)(puVar7 + 0x18) = &DAT_100ed98f0;
  *(undefined ***)(puVar7 + 0x20) = &PTR_PTR_100ed9908;
  *puVar7 = uVar3;
  lVar5 = unaff_x20 + _TtC3MCP15OAuthAuthorizer::authCodeFlow;
  *(undefined **)(lVar5 + 0x18) = &DAT_100ed9818;
  *(undefined ***)(lVar5 + 0x20) = &PTR_PTR_100ed97f0;
  lVar5 = _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer;
  UVar10 = Foundation::URL::typeMetadataAccessor();
  pcVar14 = *(code **)(*(long *)(UVar10.unknown + -8) + 0x38);
  (*pcVar14)(unaff_x20 + lVar5,1,1,UVar10.unknown);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::protectedResourceMetadata);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lVar5 = _TtC3MCP15OAuthAuthorizer::authorizationServerMetadata;
  lVar11 = 0;
  FUN_1004ce850();
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(unaff_x20 + lVar5,1,1,lVar11);
  (*pcVar14)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::cachedProtectedResourceMetadataURL,1,1,
             UVar10.unknown);
  lVar5 = _TtC3MCP15OAuthAuthorizer::stepUpAttempts;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a65b0();
  FUN_100004594(auStack_1f0[1]);
  FUN_100004594(auStack_1f0[2]);
  FUN_100004594(local_1d8);
  FUN_10005241c(stack0xfffffffffffffe30,FUN_1004bcc58);
  FUN_1004b8480(auStack_e8);
  *(undefined **)(unaff_x20 + lVar5) = puVar6;
  *(undefined1 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::clientRegistrationAttempted) = 0;
  lVar5 = _TtC3MCP15OAuthAuthorizer::clientSecretExpiresAt;
  DVar12 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar12.unknown + -8) + 0x38))(unaff_x20 + lVar5,1,1,DVar12.unknown);
  FUN_1000523d8(auStack_1cf._7_8_,unaff_x20 + _TtC3MCP15OAuthAuthorizer::configuration,FUN_1004bcc58
               );
  puVar1 = (undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::tokenStorage);
  *puVar1 = local_1c0;
  puVar1[1] = uStack_1b8;
  FUN_100076508(auStack_90,unaff_x20 + _TtC3MCP15OAuthAuthorizer::scopeSelector);
  FUN_100076508(auStack_b8,unaff_x20 + _TtC3MCP15OAuthAuthorizer::challengeParser);
  FUN_100004594(auStack_1b0);
  FUN_100004594(local_188);
  FUN_100004594(local_160);
  FUN_100004594(local_138);
  FUN_100004594(local_110);
  return unaff_x20;
}



/* Address: 0x1004a7844 | FUN_1004a7844 */

void FUN_1004a7844(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1004a7868 | FUN_1004a7868 */

undefined8 FUN_1004a7868(undefined8 param_1,undefined8 param_2)

{
  FUN_1004c3f44(param_2,param_1);
  return param_2;
}



/* Address: 0x1004a78a4 | FUN_1004a78a4 */

undefined8 FUN_1004a78a4(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::configuration + 0x30);
}



/* Address: 0x1004a78b8 | FUN_1004a78b8 */

void FUN_1004a78b8(undefined8 param_1)

{
  FUN_1004d1224(param_1,0x70646e652050434d,0xec000000746e696f);
  return;
}



/* Address: 0x1004a78e8 | FUN_1004a78e8 */

undefined1  [16] FUN_1004a78e8(void)

{
  bool bVar1;
  Date DVar2;
  URL UVar3;
  long lVar4;
  long lVar5;
  Date DVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar15;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  String *pSVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  undefined1 auVar24 [16];
  String SVar25;
  String SStack_f0;
  undefined8 local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined1 *puStack_68;
  
  puVar17 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&SStack_f0 - extraout_x8;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = (undefined *)(lVar16 - extraout_x12);
  local_d0 = puVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)puVar17 - extraout_x12_00;
  puVar17 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar17 + -8) + 0x40));
  lVar18 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12_01;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar16 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar15 = lVar16 - extraout_x12_02;
  puVar17 = &DAT_100fcb558;
  local_b8 = uVar15;
  FUN_1000f7830(&DAT_100fcb558,&DAT_100c51960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = uVar15 - extraout_x8_03;
  lVar4 = 0;
  FUN_1004c78dc();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  pSVar19 = (String *)(lVar22 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  uVar9 = *(undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::tokenStorage);
  lVar16 = ((undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::tokenStorage))[1];
  _swift_getObjectType();
  local_e0 = uVar9;
  (**(code **)(lVar16 + 0x10))(lVar22);
  lVar5 = lVar22;
  (**(code **)(lVar21 + 0x30))(lVar22,1,lVar4);
  if ((int)lVar5 == 1) {
    FUN_1000fb4c4(lVar22,&DAT_100fcb558,&DAT_100c51960);
  }
  else {
    FUN_1000523d8(lVar22,pSVar19,FUN_1004c78dc);
    FUN_1000f8cac((long)&pSVar19->str + (long)*(int *)(lVar4 + 0x20),lVar18,&DAT_100fcb378,
                  &DAT_100c50170);
    pcVar23 = *(code **)(lVar20 + 0x30);
    lVar5 = lVar18;
    (*pcVar23)(lVar18,1,UVar3.unknown);
    uVar15 = local_b8;
    if ((int)lVar5 == 1) {
LAB_1004a7c38:
      FUN_1000fb4c4(lVar18,&DAT_100fcb378,&DAT_100c50170);
LAB_1004a7c50:
      Foundation::Date::init();
      puVar7 = &USHORT_100c50b50;
      FUN_1000f8cac((long)&pSVar19->str + (long)*(int *)(lVar4 + 0x18),lVar12,&DAT_100fcb550);
      lVar16 = lVar12;
      (**(code **)(lVar13 + 0x30))(lVar12,1,DVar2.unknown);
      puVar17 = local_d0;
      if ((int)lVar16 == 1) {
        (**(code **)(lVar13 + 8))(lVar14,DVar2.unknown);
        puVar11 = &USHORT_100c50b50;
        FUN_1000fb4c4(lVar12,&DAT_100fcb550);
      }
      else {
        DVar6.unknown = local_d0;
        (**(code **)(lVar13 + 0x20))(local_d0,lVar12,DVar2.unknown);
        lVar16 = local_c8;
        Foundation::Date::addingTimeInterval(30.0,DVar6);
        puVar7 = (ushort *)&DAT_100fcb560;
        FUN_100003a00(&DAT_100fcb560,PTR_typeMetadataAccessor_100ea7480,
                      PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
        puVar11 = (ushort *)DVar2;
        bVar1 = Swift::Comparable::>__infix(lVar16,puVar17);
        pcVar23 = *(code **)(lVar13 + 8);
        (*pcVar23)(lVar16,DVar2.unknown);
        (*pcVar23)(puVar17,DVar2.unknown);
        (*pcVar23)(lVar14,DVar2.unknown);
        if (bVar1) goto LAB_1004a7e20;
      }
      local_70 = 0x20726572616542;
      puStack_68 = &DAT_e700000000000000;
      SVar25.bridgeObject = puVar7;
      SVar25.str = (char *)puVar11;
      Swift::String::append(*pSVar19,SVar25);
      puVar10 = puStack_68;
      uVar9 = local_70;
      FUN_10005241c(pSVar19,FUN_1004c78dc);
      goto LAB_1004a7e38;
    }
    SStack_f0.bridgeObject = *(void **)(lVar20 + 0x20);
    (*SStack_f0.bridgeObject)(local_b8,lVar18,UVar3.unknown);
    lVar5 = _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer;
    _swift_beginAccess(unaff_x20 + _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer,auStack_88
                       ,0,0);
    lVar18 = local_c0;
    FUN_1000f8cac(unaff_x20 + lVar5,local_c0,&DAT_100fcb378,&DAT_100c50170);
    lVar21 = lVar18;
    (*pcVar23)(lVar18,1,UVar3.unknown);
    lVar5 = local_d8;
    if ((int)lVar21 == 1) {
      (**(code **)(lVar20 + 8))(uVar15,UVar3.unknown);
      goto LAB_1004a7c38;
    }
    (*SStack_f0.bridgeObject)(local_d8,lVar18,UVar3.unknown);
    uVar8 = uVar15;
    FUN_1004a7e58(uVar15,lVar5);
    if ((uVar8 & 1) != 0) {
      pcVar23 = *(code **)(lVar20 + 8);
      (*pcVar23)(lVar5,UVar3.unknown);
      (*pcVar23)(uVar15,UVar3.unknown);
      goto LAB_1004a7c50;
    }
    (**(code **)(lVar16 + 0x18))(local_e0,lVar16);
    pcVar23 = *(code **)(lVar20 + 8);
    (*pcVar23)(lVar5,UVar3.unknown);
    (*pcVar23)(uVar15,UVar3.unknown);
LAB_1004a7e20:
    FUN_10005241c(pSVar19,FUN_1004c78dc);
  }
  uVar9 = 0;
  puVar10 = (undefined1 *)0x0;
LAB_1004a7e38:
  auVar24._8_8_ = puVar10;
  auVar24._0_8_ = uVar9;
  return auVar24;
}



/* Address: 0x1004a7e58 | FUN_1004a7e58 */

bool FUN_1004a7e58(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  URL UVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  long local_70;
  undefined8 local_68;
  
  local_68 = param_2;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar5 = &DAT_100fcb580;
  local_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000f7830(&DAT_100fcb580,&DAT_100c503a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar6 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar9 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar9 - extraout_x12_00;
  FUN_1004b4584(lVar12,param_1);
  FUN_1004b4584(lVar9,local_68);
  lVar14 = (long)*(int *)(puVar5 + 0x30);
  FUN_1000f8cac(lVar12,lVar10,&DAT_100fcb378,&DAT_100c50170);
  FUN_1000f8cac(lVar9,lVar10 + lVar14,&DAT_100fcb378,&DAT_100c50170);
  pcVar13 = *(code **)(lVar11 + 0x30);
  lVar7 = lVar10;
  (*pcVar13)(lVar10,1,UVar4.unknown);
  lVar2 = local_70;
  if ((int)lVar7 == 1) {
    FUN_1000fb4c4(lVar9,&DAT_100fcb378,&DAT_100c50170);
    FUN_1000fb4c4(lVar12,&DAT_100fcb378,&DAT_100c50170);
    lVar14 = lVar10 + lVar14;
    (*pcVar13)(lVar14,1,UVar4.unknown);
    if ((int)lVar14 == 1) {
      FUN_1000fb4c4(lVar10,&DAT_100fcb378,&DAT_100c50170);
      return true;
    }
  }
  else {
    FUN_1000f8cac(lVar10,local_70,&DAT_100fcb378,&DAT_100c50170);
    lVar7 = lVar10 + lVar14;
    (*pcVar13)(lVar7,1,UVar4.unknown);
    puVar1 = local_78;
    if ((int)lVar7 != 1) {
      (**(code **)(lVar11 + 0x20))(local_78,lVar10 + lVar14,UVar4.unknown);
      puVar8 = &DAT_100fcb590;
      FUN_100003a00(&DAT_100fcb590,PTR_typeMetadataAccessor_100ea71a8,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
      bVar3 = Swift::Equatable::___infix(lVar2,puVar1,UVar4.unknown,puVar8);
      pcVar13 = *(code **)(lVar11 + 8);
      (*pcVar13)(puVar1,UVar4.unknown);
      FUN_1000fb4c4(lVar9,&DAT_100fcb378,&DAT_100c50170);
      FUN_1000fb4c4(lVar12,&DAT_100fcb378,&DAT_100c50170);
      (*pcVar13)(lVar2,UVar4.unknown);
      FUN_1000fb4c4(lVar10,&DAT_100fcb378,&DAT_100c50170);
      return bVar3;
    }
    FUN_1000fb4c4(lVar9,&DAT_100fcb378,&DAT_100c50170);
    FUN_1000fb4c4(lVar12,&DAT_100fcb378,&DAT_100c50170);
    (**(code **)(lVar11 + 8))(lVar2,UVar4.unknown);
  }
  FUN_1000fb4c4(lVar10,&DAT_100fcb580,&DAT_100c503a0);
  return false;
}



/* Address: 0x1004a81b4 | FUN_1004a81b4 */

void FUN_1004a81b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  URL UVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x248) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x240) = param_6;
  *(undefined8 *)(unaff_x22 + 0x238) = param_5;
  *(undefined8 *)(unaff_x22 + 0x230) = param_4;
  *(undefined8 *)(unaff_x22 + 0x228) = param_3;
  *(undefined8 *)(unaff_x22 + 0x220) = param_2;
  *(undefined8 *)(unaff_x22 + 0x218) = param_1;
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 600) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x268) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x278) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x288) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x290) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar3;
  lVar4 = 0;
  FUN_1004ba764();
  *(long *)(unaff_x22 + 0x2a0) = lVar4;
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2a8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2b0) = uVar3;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x2b8) = UVar5.unknown;
  lVar4 = *(long *)(UVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x2c0) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2c8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2d0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2d8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2e0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2e8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2f0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2f8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x300) = uVar3;
  lVar4 = 0;
  FUN_1004ce850();
  *(long *)(unaff_x22 + 0x308) = lVar4;
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x310) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x318) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 800) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x328) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x330) = uVar3;
  puVar1 = &DAT_100fcb558;
  FUN_1000f7830(&DAT_100fcb558,&DAT_100c51960);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x338) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x340) = uVar3;
  _swift_task_switch(FUN_1004a83d4,0,0);
  return;
}



/* Address: 0x1004a83d4 | FUN_1004a83d4 */

/* WARNING: Removing unreachable block (ram,0x0001004a8428) */

void FUN_1004a83d4(void)

{
  undefined8 *puVar1;
  String *pSVar2;
  void *pvVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  _StringGuts _Var9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long unaff_x22;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  String SVar39;
  
  FUN_1004d1224(*(undefined8 *)(unaff_x22 + 0x228),0x70646e652050434d,0xec000000746e696f);
  lVar28 = *(long *)(unaff_x22 + 0x220);
  lVar31 = *(long *)(unaff_x22 + 0x218);
  lVar6 = *(long *)(unaff_x22 + 0x248) + _TtC3MCP15OAuthAuthorizer::challengeParser;
  uVar10 = *(undefined8 *)(lVar6 + 0x18);
  lVar5 = *(long *)(lVar6 + 0x20);
  FUN_100004640(lVar6,uVar10);
  (**(code **)(lVar5 + 8))(lVar28,uVar10,lVar5);
  *(long *)(unaff_x22 + 0x348) = lVar28;
  if (lVar31 == 0x193) {
    if (lVar28 == 0) goto LAB_1004a87e4;
    if (*(long *)(lVar28 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar28);
      lVar6 = 0x726f727265;
      uVar8 = 0;
      FUN_100071370();
      if ((uVar8 & 1) != 0) {
        pSVar2 = (String *)(*(long *)(lVar28 + 0x38) + lVar6 * 0x10);
        pvVar3 = pSVar2->bridgeObject;
        SVar39 = *pSVar2;
        _swift_bridgeObjectRetain(pvVar3);
        _swift_bridgeObjectRelease(lVar28);
        SVar39 = Swift::String::lowercased(SVar39);
        _Var9.unknown = SVar39.bridgeObject;
        _swift_bridgeObjectRelease(pvVar3);
        if (SVar39.str == (undefined *)0xd000000000000012 &&
            _Var9.unknown == (undefined *)0x8000000100daa4b0) {
          _swift_bridgeObjectRelease(_Var9.unknown);
        }
        else {
          bVar4 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar39.str,_Var9,(_StringComparisonResult)0x12);
          _swift_bridgeObjectRelease(_Var9.unknown);
          if (!bVar4) goto LAB_1004a87dc;
        }
        plVar7 = (long *)0x210;
        _swift_task_alloc();
        pcVar18 = FUN_1004ab864;
        *(long **)(unaff_x22 + 0x458) = plVar7;
        goto LAB_1004a8994;
      }
      _swift_bridgeObjectRelease(lVar28);
    }
LAB_1004a87dc:
    _swift_bridgeObjectRelease(lVar28);
LAB_1004a87e4:
    uVar37 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar38 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar27 = *(undefined8 *)(unaff_x22 + 800);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar16 = *(undefined8 *)(unaff_x22 + 600);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x250);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    _swift_task_dealloc(uVar37);
    _swift_task_dealloc(uVar38);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar35);
    _swift_task_dealloc(uVar36);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar34);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x0001004a8970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  if (lVar31 != 0x191) goto LAB_1004a87dc;
  uVar34 = *(undefined8 *)(unaff_x22 + 0x340);
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x248) + _TtC3MCP15OAuthAuthorizer::tokenStorage);
  uVar10 = *puVar1;
  lVar6 = puVar1[1];
  _swift_getObjectType(uVar10);
  (**(code **)(lVar6 + 0x10))(uVar34);
  lVar5 = 0;
  FUN_1004c78dc();
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(uVar34,1,lVar5);
  lVar31 = *(long *)(unaff_x22 + 0x340);
  if ((int)uVar34 == 1) {
    FUN_1000fb4c4(lVar31,&DAT_100fcb558,&DAT_100c51960);
  }
  else {
    puVar1 = (undefined8 *)(lVar31 + *(int *)(lVar5 + 0x24));
    *(undefined8 *)(unaff_x22 + 0x350) = *puVar1;
    lVar5 = puVar1[1];
    *(long *)(unaff_x22 + 0x358) = lVar5;
    _swift_bridgeObjectRetain(lVar5);
    FUN_10005241c(lVar31,FUN_1004c78dc);
    if (lVar5 != 0) {
      (**(code **)(lVar6 + 0x18))(uVar10,lVar6);
      plVar7 = (long *)0x210;
      _swift_task_alloc();
      pcVar18 = FUN_1004a89d0;
      *(long **)(unaff_x22 + 0x360) = plVar7;
LAB_1004a8994:
      *plVar7 = unaff_x22;
      plVar7[1] = (long)pcVar18;
      uVar10 = *(undefined8 *)(unaff_x22 + 0x240);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x228);
      goto LAB_1004a89b0;
    }
  }
  (**(code **)(lVar6 + 0x18))(uVar10,lVar6);
  plVar7 = (long *)0x210;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x3a8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1004a9954;
  lVar28 = *(long *)(unaff_x22 + 0x348);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x228);
LAB_1004a89b0:
  FUN_1004ae444(uVar34,lVar28,uVar10);
  return;
}



/* Address: 0x1004a89d0 | FUN_1004a89d0 */

void FUN_1004a89d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  long *unaff_x22;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  
  lVar28 = *unaff_x22;
  lVar21 = *unaff_x22;
  *(undefined8 *)(lVar28 + 0x368) = param_2;
  *(undefined8 *)(lVar28 + 0x370) = param_3;
  *(undefined8 *)(lVar28 + 0x378) = param_4;
  _swift_task_dealloc(*(undefined8 *)(lVar28 + 0x360));
  if (unaff_x20 != 0) {
    uVar17 = *(undefined8 *)(lVar28 + 0x348);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar28 + 0x358));
    _swift_bridgeObjectRelease(uVar17);
    uVar18 = *(undefined8 *)(lVar28 + 0x338);
    uVar20 = *(undefined8 *)(lVar28 + 0x330);
    uVar23 = *(undefined8 *)(lVar28 + 0x328);
    uVar24 = *(undefined8 *)(lVar28 + 800);
    uVar25 = *(undefined8 *)(lVar28 + 0x318);
    uVar26 = *(undefined8 *)(lVar28 + 0x310);
    uVar22 = *(undefined8 *)(lVar28 + 0x300);
    uVar19 = *(undefined8 *)(lVar28 + 0x2f8);
    uVar27 = *(undefined8 *)(lVar28 + 0x2f0);
    uVar9 = *(undefined8 *)(lVar28 + 0x2e8);
    uVar17 = *(undefined8 *)(lVar28 + 0x2e0);
    uVar10 = *(undefined8 *)(lVar28 + 0x2d8);
    uVar2 = *(undefined8 *)(lVar28 + 0x2d0);
    uVar11 = *(undefined8 *)(lVar28 + 0x2c8);
    uVar3 = *(undefined8 *)(lVar28 + 0x2b0);
    uVar12 = *(undefined8 *)(lVar28 + 0x2a8);
    uVar4 = *(undefined8 *)(lVar28 + 0x298);
    uVar13 = *(undefined8 *)(lVar28 + 0x290);
    uVar5 = *(undefined8 *)(lVar28 + 0x288);
    uVar14 = *(undefined8 *)(lVar28 + 0x280);
    uVar6 = *(undefined8 *)(lVar28 + 0x278);
    uVar15 = *(undefined8 *)(lVar28 + 0x270);
    uVar7 = *(undefined8 *)(lVar28 + 0x268);
    uVar16 = *(undefined8 *)(lVar28 + 0x260);
    uVar8 = *(undefined8 *)(lVar28 + 600);
    uVar29 = *(undefined8 *)(lVar28 + 0x250);
    _swift_task_dealloc(*(undefined8 *)(lVar28 + 0x340));
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar29);
                    /* WARNING: Could not recover jumptable at 0x0001004a8bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar21 + 8))(0);
    return;
  }
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(lVar28 + 0x380) = plVar1;
  *plVar1 = lVar21;
  plVar1[1] = (long)FUN_1004a8c2c;
  FUN_1004afbe4(plVar1,*(undefined8 *)(lVar28 + 0x330),param_1,param_2,param_3,param_4,
                *(undefined8 *)(lVar28 + 0x240));
  return;
}



/* Address: 0x1004a8c2c | FUN_1004a8c2c */

void FUN_1004a8c2c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0x388) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x380));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004a8cc8;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x378);
    uVar2 = *(undefined8 *)(lVar5 + 0x368);
    uVar4 = *(undefined8 *)(lVar5 + 0x358);
    uVar6 = *(undefined8 *)(lVar5 + 0x348);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x370));
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar6);
    pcVar1 = FUN_1004adef0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004a8cc8 | FUN_1004a8cc8 */

/* WARNING: Removing unreachable block (ram,0x0001004a900c) */

void FUN_1004a8cc8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long unaff_x22;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  URL UVar35;
  code *pcVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  String SVar39;
  
  lVar25 = *(long *)(unaff_x22 + 0x388);
  FUN_1004b051c(*(undefined8 *)(unaff_x22 + 0x300),*(undefined8 *)(unaff_x22 + 0x228));
  lVar6 = _TtC3MCP15OAuthAuthorizer::scopeSelector;
  if (lVar25 == 0) {
    lVar24 = *(long *)(unaff_x22 + 0x348);
    lVar19 = *(long *)(unaff_x22 + 0x248);
    FUN_100076688(lVar19 + _TtC3MCP15OAuthAuthorizer::scopeSelector,unaff_x22 + 0xd8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar25 = *(long *)(unaff_x22 + 0xf8);
    FUN_100004640(unaff_x22 + 0xd8);
    if ((lVar24 == 0) || (lVar24 = *(long *)(unaff_x22 + 0x348), *(long *)(lVar24 + 0x10) == 0)) {
      lVar3 = 0;
      lVar32 = 0;
    }
    else {
      _swift_bridgeObjectRetain_n(lVar24,2);
      lVar3 = 0x65706f6373;
      uVar5 = 0;
      FUN_100071370();
      if ((uVar5 & 1) == 0) {
        lVar3 = 0;
        lVar32 = 0;
      }
      else {
        plVar4 = (long *)(*(long *)(lVar24 + 0x38) + lVar3 * 0x10);
        lVar3 = *plVar4;
        lVar32 = plVar4[1];
        _swift_bridgeObjectRetain(lVar32);
      }
      _swift_bridgeObjectRelease_n(lVar24,2);
    }
    uVar28 = *(undefined8 *)(unaff_x22 + 0x378);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x370);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2f0);
    (**(code **)(lVar25 + 8))(lVar3,lVar32,uVar28,uVar20);
    *(long *)(unaff_x22 + 0x390) = lVar3;
    _swift_bridgeObjectRelease(uVar30);
    _swift_bridgeObjectRelease(lVar32);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar28);
    FUN_100004594(unaff_x22 + 0xd8);
    FUN_1004b3db0(uVar22,uVar26);
    puVar1 = (undefined8 *)(unaff_x22 + 0x128);
    puVar2 = (undefined8 *)(unaff_x22 + 0x208);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x358);
    UVar35.unknown = *(undefined **)(unaff_x22 + 0x350);
    lVar25 = *(long *)(unaff_x22 + 0x248);
    (**(code **)(*(long *)(unaff_x22 + 0x2c0) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x2f8),*(undefined8 *)(unaff_x22 + 0x2f0),
               *(undefined8 *)(unaff_x22 + 0x2b8));
    lVar25 = lVar25 + _TtC3MCP15OAuthAuthorizer::configuration;
    lVar24 = 0;
    FUN_1004bcc58();
    uVar20 = *(undefined8 *)(lVar25 + *(int *)(lVar24 + 0x28));
    *(undefined8 *)(unaff_x22 + 0x208) = uVar20;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    uVar22 = *(undefined8 *)(unaff_x22 + 0x208);
    FUN_1004b4f30(0x5f68736572666572,0xed00006e656b6f74,0x79745f746e617267,0xea00000000006570,uVar20
                 );
    *(undefined8 *)(unaff_x22 + 0x208) = uVar22;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar20 = *(undefined8 *)(unaff_x22 + 0x208);
    _swift_bridgeObjectRetain(uVar26);
    FUN_1004b4f30(UVar35.unknown,uVar26,0x5f68736572666572,0xed00006e656b6f74,uVar22);
    *(undefined8 *)(unaff_x22 + 0x208) = uVar20;
    SVar39 = Foundation::URL::get_absoluteString(UVar35);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x208);
    _swift_isUniquelyReferenced_nonNull_native(uVar20);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x208);
    FUN_1004b4f30(SVar39.str,SVar39.bridgeObject,0x656372756f736572,&DAT_e800000000000000,uVar20);
    *(undefined8 *)(unaff_x22 + 0x208) = uVar22;
    FUN_100076688(lVar19 + lVar6,unaff_x22 + 0x100);
    if (lVar3 == 0) {
      FUN_100004594(unaff_x22 + 0x100);
    }
    else {
      lVar6 = *(long *)(unaff_x22 + 0x118);
      lVar19 = *(long *)(unaff_x22 + 0x120);
      FUN_100004640(unaff_x22 + 0x100,lVar6);
      pcVar36 = *(code **)(lVar19 + 0x18);
      lVar19 = lVar3;
      _swift_bridgeObjectRetain(lVar3);
      (*pcVar36)();
      _swift_bridgeObjectRelease(lVar3);
      FUN_100004594(unaff_x22 + 0x100);
      if (lVar6 != 0) {
        uVar20 = *puVar2;
        _swift_isUniquelyReferenced_nonNull_native(uVar20);
        uVar22 = *puVar2;
        FUN_1004b4f30(lVar19,lVar6,0x65706f6373,&DAT_e500000000000000,uVar20);
        *puVar2 = uVar22;
      }
    }
    uVar22 = *(undefined8 *)(lVar25 + 0x10);
    uVar20 = *(undefined8 *)(lVar25 + 8);
    uVar28 = *(undefined8 *)(lVar25 + 0x20);
    uVar26 = *(undefined8 *)(lVar25 + 0x18);
    *(undefined1 *)(unaff_x22 + 0x148) = *(undefined1 *)(lVar25 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x130) = uVar22;
    *puVar1 = uVar20;
    *(undefined8 *)(unaff_x22 + 0x140) = uVar28;
    *(undefined8 *)(unaff_x22 + 0x138) = uVar26;
    FUN_1004b8ab4(puVar1,unaff_x22 + 0x150);
    plVar4 = (long *)0x190;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x398) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1004a931c;
    FUN_1004d0304(plVar4,unaff_x22 + 0x10,puVar2,*(undefined8 *)(unaff_x22 + 0x2f8),puVar1,
                  *(undefined8 *)(unaff_x22 + 0x240));
    return;
  }
  uVar22 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x348);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x330),FUN_1004ce850);
  _swift_bridgeObjectRelease(uVar20);
  _swift_bridgeObjectRelease(uVar28);
  _swift_bridgeObjectRelease(uVar26);
  _swift_bridgeObjectRelease(uVar22);
  _swift_bridgeObjectRelease(uVar30);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar21 = *(undefined8 *)(unaff_x22 + 800);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar18 = *(undefined8 *)(unaff_x22 + 600);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001004a8ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004a931c | FUN_1004a931c */

void FUN_1004a931c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3a0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x398));
  if (unaff_x20 == 0) {
    FUN_1004b8af0(lVar2 + 0x128);
    pcVar1 = FUN_1004a9380;
  }
  else {
    pcVar1 = FUN_1004a95b8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004a9380 | FUN_1004a9380 */

void FUN_1004a9380(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x390);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2f8);
  lVar27 = *(long *)(unaff_x22 + 0x2c0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2b8);
  FUN_1004b4220(unaff_x22 + 0x10,uVar11);
  FUN_1004b8b94(unaff_x22 + 0x10);
  pcVar13 = *(code **)(lVar27 + 8);
  (*pcVar13)(uVar23,uVar25);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x208));
  _swift_bridgeObjectRelease(uVar15);
  _swift_bridgeObjectRelease(uVar11);
  (*pcVar13)(uVar21,uVar25);
  FUN_10005241c(uVar19,FUN_1004ce850);
  _swift_bridgeObjectRelease(uVar17);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar12 = *(undefined8 *)(unaff_x22 + 800);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar1 = *(undefined8 *)(unaff_x22 + 600);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001004a95b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Address: 0x1004a95b8 | FUN_1004a95b8 */

void FUN_1004a95b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x22;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  code *pcVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  uVar20 = *(undefined8 *)(unaff_x22 + 0x3a0);
  FUN_1004b8af0(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x210) = uVar20;
  _swift_errorRetain(uVar20);
  puVar5 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  lVar6 = unaff_x22 + 0x178;
  _swift_dynamicCast(lVar6,unaff_x22 + 0x210,puVar5,&DAT_100ed9e90,0);
  plVar7 = *(long **)(unaff_x22 + 0x3a0);
  if ((int)lVar6 != 0) {
    _swift_errorRelease();
    lVar6 = *(long *)(unaff_x22 + 0x178);
    lVar2 = *(long *)(unaff_x22 + 0x180);
    lVar1 = *(long *)(unaff_x22 + 0x188);
    lVar3 = *(long *)(unaff_x22 + 400);
    cVar4 = *(char *)(unaff_x22 + 0x198);
    if ((cVar4 == '\0') && (lVar6 - 400U < 100)) {
      uVar20 = *(undefined8 *)(unaff_x22 + 0x390);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x358);
      pcVar31 = *(code **)(*(long *)(unaff_x22 + 0x2c0) + 8);
      (*pcVar31)(*(undefined8 *)(unaff_x22 + 0x2f8),*(undefined8 *)(unaff_x22 + 0x2b8));
      FUN_1004b8b24(lVar6,lVar2,lVar1,lVar3,0);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x208));
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x210));
      _swift_bridgeObjectRelease(uVar28);
      _swift_bridgeObjectRelease(uVar20);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x330);
      (*pcVar31)(*(undefined8 *)(unaff_x22 + 0x300),*(undefined8 *)(unaff_x22 + 0x2b8));
      FUN_10005241c(uVar20,FUN_1004ce850);
      plVar7 = (long *)0x210;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3a8) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_1004a9954;
      FUN_1004ae444(*(undefined8 *)(unaff_x22 + 0x228),*(undefined8 *)(unaff_x22 + 0x348),
                    *(undefined8 *)(unaff_x22 + 0x240));
      return;
    }
    FUN_1004a3fb4();
    _swift_allocError(&DAT_100ed9e90,plVar7,0,0);
    *plVar7 = lVar6;
    plVar7[1] = lVar2;
    plVar7[2] = lVar1;
    plVar7[3] = lVar3;
    *(char *)(plVar7 + 4) = cVar4;
    _swift_willThrow();
  }
  uVar28 = *(undefined8 *)(unaff_x22 + 0x390);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x2b8);
  pcVar31 = *(code **)(*(long *)(unaff_x22 + 0x2c0) + 8);
  (*pcVar31)(*(undefined8 *)(unaff_x22 + 0x2f8),uVar29);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x208));
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x210));
  _swift_bridgeObjectRelease(uVar20);
  _swift_bridgeObjectRelease(uVar28);
  _swift_bridgeObjectRelease(uVar22);
  (*pcVar31)(uVar26,uVar29);
  FUN_10005241c(uVar24,FUN_1004ce850);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar23 = *(undefined8 *)(unaff_x22 + 800);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar18 = *(undefined8 *)(unaff_x22 + 600);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001004a9950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004a9954 | FUN_1004a9954 */

void FUN_1004a9954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  long *unaff_x22;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  
  lVar27 = *unaff_x22;
  lVar20 = *unaff_x22;
  *(undefined8 *)(lVar27 + 0x3b0) = param_1;
  *(undefined8 *)(lVar27 + 0x3b8) = param_2;
  *(undefined8 *)(lVar27 + 0x3c0) = param_3;
  *(undefined8 *)(lVar27 + 0x3c8) = param_4;
  _swift_task_dealloc(*(undefined8 *)(lVar27 + 0x3a8));
  if (unaff_x20 != 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar27 + 0x348));
    uVar17 = *(undefined8 *)(lVar27 + 0x338);
    uVar19 = *(undefined8 *)(lVar27 + 0x330);
    uVar22 = *(undefined8 *)(lVar27 + 0x328);
    uVar23 = *(undefined8 *)(lVar27 + 800);
    uVar24 = *(undefined8 *)(lVar27 + 0x318);
    uVar25 = *(undefined8 *)(lVar27 + 0x310);
    uVar18 = *(undefined8 *)(lVar27 + 0x300);
    uVar26 = *(undefined8 *)(lVar27 + 0x2f8);
    uVar21 = *(undefined8 *)(lVar27 + 0x2f0);
    uVar9 = *(undefined8 *)(lVar27 + 0x2e8);
    uVar1 = *(undefined8 *)(lVar27 + 0x2e0);
    uVar10 = *(undefined8 *)(lVar27 + 0x2d8);
    uVar2 = *(undefined8 *)(lVar27 + 0x2d0);
    uVar11 = *(undefined8 *)(lVar27 + 0x2c8);
    uVar3 = *(undefined8 *)(lVar27 + 0x2b0);
    uVar12 = *(undefined8 *)(lVar27 + 0x2a8);
    uVar4 = *(undefined8 *)(lVar27 + 0x298);
    uVar13 = *(undefined8 *)(lVar27 + 0x290);
    uVar5 = *(undefined8 *)(lVar27 + 0x288);
    uVar14 = *(undefined8 *)(lVar27 + 0x280);
    uVar6 = *(undefined8 *)(lVar27 + 0x278);
    uVar15 = *(undefined8 *)(lVar27 + 0x270);
    uVar7 = *(undefined8 *)(lVar27 + 0x268);
    uVar16 = *(undefined8 *)(lVar27 + 0x260);
    uVar8 = *(undefined8 *)(lVar27 + 600);
    uVar28 = *(undefined8 *)(lVar27 + 0x250);
    _swift_task_dealloc(*(undefined8 *)(lVar27 + 0x340));
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar28);
                    /* WARNING: Could not recover jumptable at 0x0001004a9b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar20 + 8))(0);
    return;
  }
  _swift_task_switch(FUN_1004a9b6c,0,0);
  return;
}



/* Address: 0x1004a9b6c | FUN_1004a9b6c */

void FUN_1004a9b6c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0x348);
  FUN_100076688(*(long *)(unaff_x22 + 0x248) + _TtC3MCP15OAuthAuthorizer::scopeSelector,
                unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  FUN_100004640(unaff_x22 + 0xb0,uVar2);
  if (lVar7 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0x348);
    if (*(long *)(lVar7 + 0x10) != 0) {
      _swift_bridgeObjectRetain_n(lVar7,2);
      lVar4 = 0x65706f6373;
      uVar6 = 0;
      FUN_100071370();
      if ((uVar6 & 1) == 0) {
        uVar9 = 0;
        uVar8 = 0;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar4 * 0x10);
        uVar9 = *puVar1;
        uVar8 = puVar1[1];
        _swift_bridgeObjectRetain(uVar8);
      }
      _swift_bridgeObjectRelease_n(lVar7,2);
      goto LAB_1004a9c24;
    }
  }
  uVar9 = 0;
  uVar8 = 0;
LAB_1004a9c24:
  (**(code **)(lVar3 + 8))(uVar9,uVar8,*(undefined8 *)(unaff_x22 + 0x3c8),uVar2,lVar3);
  *(undefined8 *)(unaff_x22 + 0x3d0) = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  FUN_100004594(unaff_x22 + 0xb0);
  plVar5 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x3d8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1004a9cb0;
  FUN_1004afbe4(plVar5,*(undefined8 *)(unaff_x22 + 0x328),*(undefined8 *)(unaff_x22 + 0x3b0),
                *(undefined8 *)(unaff_x22 + 0x3b8),*(undefined8 *)(unaff_x22 + 0x3c0),
                *(undefined8 *)(unaff_x22 + 0x3c8),*(undefined8 *)(unaff_x22 + 0x240));
  return;
}



/* Address: 0x1004a9cb0 | FUN_1004a9cb0 */

void FUN_1004a9cb0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3e0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x3d8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004a9d0c;
  }
  else {
    pcVar1 = FUN_1004aa47c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004a9d0c | FUN_1004a9d0c */

void FUN_1004a9d0c(void)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  long unaff_x22;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  code *pcVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  code *pcVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar25 = *(long *)(unaff_x22 + 0x3e0);
  FUN_1004b051c(*(undefined8 *)(unaff_x22 + 0x2e8),*(undefined8 *)(unaff_x22 + 0x228));
  lVar10 = _TtC3MCP15OAuthAuthorizer::configuration;
  if (lVar25 == 0) {
    lVar25 = *(long *)(unaff_x22 + 0x2c0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x290);
    *(long *)(unaff_x22 + 1000) = _TtC3MCP15OAuthAuthorizer::configuration;
    lVar10 = *(long *)(unaff_x22 + 0x248) + lVar10;
    lVar4 = 0;
    FUN_1004bcc58();
    iVar3 = *(int *)(lVar4 + 0x1c);
    lVar5 = 0;
    FUN_1004bcbcc();
    FUN_1000f8cac(lVar10 + (long)iVar3 + (long)*(int *)(lVar5 + 0x14),uVar20,&DAT_100fcb378,
                  &DAT_100c50170);
    pcVar32 = *(code **)(lVar25 + 0x30);
    (*pcVar32)(uVar20,1,uVar22);
    lVar25 = _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer;
    if ((int)uVar20 == 1) {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x2b8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x288);
      lVar36 = *(long *)(unaff_x22 + 0x248);
      _swift_beginAccess(lVar36 + _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer,
                         unaff_x22 + 0x1e8,0,0);
      FUN_1000f8cac(lVar36 + lVar25,uVar20,&DAT_100fcb378,&DAT_100c50170);
      (*pcVar32)(uVar20,1,uVar22);
      if ((int)uVar20 == 1) {
        bVar2 = *(long *)(*(long *)(unaff_x22 + 0x3c0) + 0x10) == 0;
        if (!bVar2) {
          uVar19 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x2c0) + 0x50);
          (**(code **)(*(long *)(unaff_x22 + 0x2c0) + 0x10))
                    (*(undefined8 *)(unaff_x22 + 0x298),
                     *(long *)(unaff_x22 + 0x3c0) + (uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff)),
                     *(undefined8 *)(unaff_x22 + 0x2b8));
        }
        uVar22 = *(undefined8 *)(unaff_x22 + 0x2b8);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x288);
        pcVar37 = *(code **)(*(long *)(unaff_x22 + 0x2c0) + 0x38);
        (*pcVar37)(*(undefined8 *)(unaff_x22 + 0x298),bVar2,1,uVar22);
        (*pcVar32)(uVar20,1,uVar22);
        if ((int)uVar20 != 1) {
          FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x288),&DAT_100fcb378,&DAT_100c50170);
        }
      }
      else {
        lVar25 = *(long *)(unaff_x22 + 0x2c0);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x2b8);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x298);
        (**(code **)(lVar25 + 0x20))(uVar22,*(undefined8 *)(unaff_x22 + 0x288),uVar20);
        pcVar37 = *(code **)(lVar25 + 0x38);
        (*pcVar37)(uVar22,0,1,uVar20);
      }
      uVar22 = *(undefined8 *)(unaff_x22 + 0x290);
      uVar20 = uVar22;
      (*pcVar32)(uVar22,1,*(undefined8 *)(unaff_x22 + 0x2b8));
      if ((int)uVar20 != 1) {
        FUN_1000fb4c4(uVar22,&DAT_100fcb378,&DAT_100c50170);
      }
    }
    else {
      lVar25 = *(long *)(unaff_x22 + 0x2c0);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x2b8);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x298);
      (**(code **)(lVar25 + 0x20))(uVar22,*(undefined8 *)(unaff_x22 + 0x290),uVar20);
      pcVar37 = *(code **)(lVar25 + 0x38);
      (*pcVar37)(uVar22,0,1,uVar20);
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x278);
    FUN_1000f8cac(lVar10 + (long)*(int *)(lVar4 + 0x1c) + (long)*(int *)(lVar5 + 0x18),uVar20,
                  &DAT_100fcb378,&DAT_100c50170);
    (*pcVar32)(uVar20,1,uVar22);
    if ((int)uVar20 == 1) {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x2b8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x278);
      FUN_1000f8cac(*(long *)(unaff_x22 + 0x328) +
                    (long)*(int *)(*(long *)(unaff_x22 + 0x308) + 0x18),
                    *(undefined8 *)(unaff_x22 + 0x280),&DAT_100fcb378,&DAT_100c50170);
      (*pcVar32)(uVar20,1,uVar22);
      if ((int)uVar20 != 1) {
        FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x278),&DAT_100fcb378,&DAT_100c50170);
      }
    }
    else {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x2b8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x280);
      (**(code **)(*(long *)(unaff_x22 + 0x2c0) + 0x20))
                (uVar20,*(undefined8 *)(unaff_x22 + 0x278),uVar22);
      (*pcVar37)(uVar20,0,1,uVar22);
    }
    lVar10 = *(long *)(unaff_x22 + 0x348);
    lVar25 = *(long *)(unaff_x22 + 0x328);
    lVar4 = *(long *)(unaff_x22 + 0x308);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x2b8);
    lVar5 = *(long *)(unaff_x22 + 0x2b0);
    lVar36 = *(long *)(unaff_x22 + 0x2a0);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x280);
    pcVar32 = *(code **)(*(long *)(unaff_x22 + 0x2c0) + 0x10);
    (*pcVar32)(lVar5 + *(int *)(lVar36 + 0x14),*(undefined8 *)(unaff_x22 + 0x228),uVar20);
    (*pcVar32)(lVar5 + *(int *)(lVar36 + 0x18),uVar22,uVar20);
    iVar3 = *(int *)(lVar36 + 0x1c);
    *(int *)(unaff_x22 + 0x14c) = iVar3;
    FUN_1000f8cac(uVar27,lVar5 + iVar3,&DAT_100fcb378,&DAT_100c50170);
    FUN_1000f8cac(lVar25 + *(int *)(lVar4 + 0x14),lVar5 + *(int *)(lVar36 + 0x20),&DAT_100fcb378,
                  &DAT_100c50170);
    FUN_1000f8cac(uVar30,lVar5 + *(int *)(lVar36 + 0x24),&DAT_100fcb378,&DAT_100c50170);
    FUN_1000f8cac(lVar25 + *(int *)(lVar4 + 0x1c),lVar5 + *(int *)(lVar36 + 0x28),&DAT_100fcb378,
                  &DAT_100c50170);
    if (lVar10 == 0) {
      local_70 = 0;
      local_68 = 0;
    }
    else {
      lVar10 = *(long *)(unaff_x22 + 0x348);
      if (*(long *)(lVar10 + 0x10) == 0) {
        local_68 = 0;
        local_70 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar10);
        lVar25 = 0x65706f6373;
        uVar19 = 0;
        FUN_100071370();
        if ((uVar19 & 1) == 0) {
          local_68 = 0;
          local_70 = 0;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar25 * 0x10);
          local_68 = *puVar1;
          local_70 = puVar1[1];
          _swift_bridgeObjectRetain();
        }
        _swift_bridgeObjectRelease(lVar10);
      }
      _swift_bridgeObjectRelease(lVar10);
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x3c8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x2e8);
    lVar25 = *(long *)(unaff_x22 + 0x2c0);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x2b8);
    puVar29 = *(undefined8 **)(unaff_x22 + 0x2b0);
    lVar10 = *(long *)(unaff_x22 + 0x2a0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x298);
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x280),&DAT_100fcb378,&DAT_100c50170);
    FUN_1000fb4c4(uVar6,&DAT_100fcb378,&DAT_100c50170);
    pcVar32 = *(code **)(lVar25 + 8);
    *(code **)(unaff_x22 + 0x3f0) = pcVar32;
    (*pcVar32)(uVar30,uVar33);
    FUN_10005241c(uVar22,FUN_1004ce850);
    *puVar29 = 0x191;
    puVar1 = (undefined8 *)((long)puVar29 + (long)*(int *)(lVar10 + 0x2c));
    *puVar1 = local_68;
    puVar1[1] = local_70;
    *(undefined8 *)((long)puVar29 + (long)*(int *)(lVar10 + 0x30)) = uVar27;
    *(undefined8 *)((long)puVar29 + (long)*(int *)(lVar10 + 0x34)) = uVar20;
    plVar24 = (long *)0x60;
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar20);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3f8) = plVar24;
    *plVar24 = unaff_x22;
    plVar24[1] = (long)FUN_1004aa670;
    FUN_1004b0b78(*(undefined8 *)(unaff_x22 + 0x2b0),*(undefined8 *)(unaff_x22 + 0x240));
    return;
  }
  uVar22 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x328);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x3c0));
  _swift_bridgeObjectRelease(uVar27);
  _swift_bridgeObjectRelease(uVar20);
  _swift_bridgeObjectRelease(uVar30);
  _swift_bridgeObjectRelease(uVar22);
  FUN_10005241c(uVar33,FUN_1004ce850);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar31 = *(undefined8 *)(unaff_x22 + 800);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar18 = *(undefined8 *)(unaff_x22 + 600);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001004a9f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004aa47c | FUN_1004aa47c */

void FUN_1004aa47c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x348);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x3c0));
  _swift_bridgeObjectRelease(uVar18);
  _swift_bridgeObjectRelease(uVar14);
  _swift_bridgeObjectRelease(uVar20);
  _swift_bridgeObjectRelease(uVar16);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar19 = *(undefined8 *)(unaff_x22 + 800);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar4 = *(undefined8 *)(unaff_x22 + 600);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001004aa66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004aa670 | FUN_1004aa670 */

void FUN_1004aa670(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x400) = param_1;
  *(undefined8 *)(lVar4 + 0x408) = param_2;
  *(long *)(lVar4 + 0x410) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x3f8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004aa70c;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x3d0);
    uVar2 = *(undefined8 *)(lVar4 + 0x3c8);
    uVar5 = *(undefined8 *)(lVar4 + 0x3b8);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x3c0));
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar5);
    pcVar1 = FUN_1004ae0ac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004aa70c | FUN_1004aa70c */

void FUN_1004aa70c(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  lVar16 = *(long *)(unaff_x22 + 0x408);
  if (lVar16 != 0) {
    uVar27 = *(undefined8 *)(unaff_x22 + 0x400);
    iVar1 = *(int *)(unaff_x22 + 0x14c);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x3c8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x3b8);
    lVar25 = *(long *)(unaff_x22 + 0x2b0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x3c0));
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(uVar21);
    _swift_bridgeObjectRelease(uVar23);
    FUN_1004b0d44(uVar27,lVar16,uVar19,lVar25 + iVar1);
    _swift_bridgeObjectRelease(lVar16);
    FUN_10005241c(lVar25,FUN_1004ba764);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar17 = *(undefined8 *)(unaff_x22 + 800);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar6 = *(undefined8 *)(unaff_x22 + 600);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x250);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001004aa92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(1);
    return;
  }
  plVar2 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x418) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1004aa990;
  FUN_1004afbe4(plVar2,*(undefined8 *)(unaff_x22 + 800),*(undefined8 *)(unaff_x22 + 0x3b0),
                *(undefined8 *)(unaff_x22 + 0x3b8),*(undefined8 *)(unaff_x22 + 0x3c0),
                *(undefined8 *)(unaff_x22 + 0x3c8),*(undefined8 *)(unaff_x22 + 0x240));
  return;
}



/* Address: 0x1004aa990 | FUN_1004aa990 */

void FUN_1004aa990(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x420) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x418));
  if (unaff_x20 != 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x3d0));
    _swift_task_switch(FUN_1004aaa8c,0,0);
    return;
  }
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x428) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_1004aaa28;
  FUN_1004b1de4(*(undefined8 *)(lVar2 + 800),*(undefined8 *)(lVar2 + 0x240));
  return;
}



/* Address: 0x1004aaa28 | FUN_1004aaa28 */

void FUN_1004aaa28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x430) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x428));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004aac78;
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x3d0));
    pcVar1 = FUN_1004aaf58;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004aaa8c | FUN_1004aaa8c */

void FUN_1004aaa8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar18 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x3b8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x3c0));
  _swift_bridgeObjectRelease(uVar18);
  _swift_bridgeObjectRelease(uVar16);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2b0),FUN_1004ba764);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar20 = *(undefined8 *)(unaff_x22 + 800);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar6 = *(undefined8 *)(unaff_x22 + 600);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001004aac74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004aac78 | FUN_1004aac78 */

void FUN_1004aac78(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  lVar19 = *(long *)(unaff_x22 + 0x430);
  FUN_1004b051c(*(undefined8 *)(unaff_x22 + 0x2e0),*(undefined8 *)(unaff_x22 + 0x228));
  if (lVar19 != 0) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x3c8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x3b8);
    uVar23 = *(undefined8 *)(unaff_x22 + 800);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x3c0));
    _swift_bridgeObjectRelease(uVar17);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar21);
    FUN_10005241c(uVar23,FUN_1004ce850);
    FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2b0),FUN_1004ba764);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar24 = *(undefined8 *)(unaff_x22 + 800);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar14 = *(undefined8 *)(unaff_x22 + 600);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001004aae94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  if (*(char *)(*(long *)(unaff_x22 + 0x248) + *(long *)(unaff_x22 + 1000)) != '\0') {
    plVar1 = (long *)0x130;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x438) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1004ab158;
    FUN_1004b2444(*(undefined8 *)(unaff_x22 + 0x2e0),*(undefined8 *)(unaff_x22 + 0x3d0),
                  *(undefined8 *)(unaff_x22 + 800),*(undefined8 *)(unaff_x22 + 0x240));
    return;
  }
  plVar1 = (long *)0x280;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x448) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1004ab1bc;
  FUN_1004b2844(*(undefined8 *)(unaff_x22 + 0x2e0),*(undefined8 *)(unaff_x22 + 0x3d0),
                *(undefined8 *)(unaff_x22 + 800),*(undefined8 *)(unaff_x22 + 0x240));
  return;
}



/* Address: 0x1004aaf58 | FUN_1004aaf58 */

void FUN_1004aaf58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar19 = *(undefined8 *)(unaff_x22 + 800);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x3c0));
  _swift_bridgeObjectRelease(uVar17);
  _swift_bridgeObjectRelease(uVar15);
  FUN_10005241c(uVar19,FUN_1004ce850);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2b0),FUN_1004ba764);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar20 = *(undefined8 *)(unaff_x22 + 800);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 600);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001004ab154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004ab158 | FUN_1004ab158 */

void FUN_1004ab158(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x440) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x438));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x3d0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004ab220;
  }
  else {
    pcVar1 = FUN_1004ab434;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004ab1bc | FUN_1004ab1bc */

void FUN_1004ab1bc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x450) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x448));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x3d0));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_1004ab220;
  }
  else {
    pcVar1 = FUN_1004ab64c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004ab220 | FUN_1004ab220 */

void FUN_1004ab220(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  pcVar24 = *(code **)(unaff_x22 + 0x3f0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar16 = *(undefined8 *)(unaff_x22 + 800);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2b0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x3c0));
  _swift_bridgeObjectRelease(uVar14);
  _swift_bridgeObjectRelease(uVar12);
  (*pcVar24)(uVar18,uVar20);
  FUN_10005241c(uVar16,FUN_1004ce850);
  FUN_10005241c(uVar22,FUN_1004ba764);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar13 = *(undefined8 *)(unaff_x22 + 800);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar2 = *(undefined8 *)(unaff_x22 + 600);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001004ab430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Address: 0x1004ab434 | FUN_1004ab434 */

void FUN_1004ab434(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  pcVar23 = *(code **)(unaff_x22 + 0x3f0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar17 = *(undefined8 *)(unaff_x22 + 800);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2b8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x3c0));
  _swift_bridgeObjectRelease(uVar15);
  _swift_bridgeObjectRelease(uVar13);
  (*pcVar23)(uVar19,uVar21);
  FUN_10005241c(uVar17,FUN_1004ce850);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2b0),FUN_1004ba764);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar18 = *(undefined8 *)(unaff_x22 + 800);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar3 = *(undefined8 *)(unaff_x22 + 600);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001004ab648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004ab64c | FUN_1004ab64c */

void FUN_1004ab64c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  pcVar23 = *(code **)(unaff_x22 + 0x3f0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar17 = *(undefined8 *)(unaff_x22 + 800);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2b8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x3c0));
  _swift_bridgeObjectRelease(uVar15);
  _swift_bridgeObjectRelease(uVar13);
  (*pcVar23)(uVar19,uVar21);
  FUN_10005241c(uVar17,FUN_1004ce850);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2b0),FUN_1004ba764);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar18 = *(undefined8 *)(unaff_x22 + 800);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar3 = *(undefined8 *)(unaff_x22 + 600);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001004ab860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004ab864 | FUN_1004ab864 */

void FUN_1004ab864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined8 uVar19;
  long *unaff_x22;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  
  lVar27 = *unaff_x22;
  lVar20 = *unaff_x22;
  *(undefined8 *)(lVar27 + 0x460) = param_1;
  *(undefined8 *)(lVar27 + 0x468) = param_2;
  *(undefined8 *)(lVar27 + 0x470) = param_3;
  *(undefined8 *)(lVar27 + 0x478) = param_4;
  *(long *)(lVar27 + 0x480) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar27 + 0x458));
  if (unaff_x20 != 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar27 + 0x348));
    uVar18 = *(undefined8 *)(lVar27 + 0x338);
    uVar19 = *(undefined8 *)(lVar27 + 0x330);
    uVar22 = *(undefined8 *)(lVar27 + 0x328);
    uVar23 = *(undefined8 *)(lVar27 + 800);
    uVar24 = *(undefined8 *)(lVar27 + 0x318);
    uVar25 = *(undefined8 *)(lVar27 + 0x310);
    uVar26 = *(undefined8 *)(lVar27 + 0x300);
    uVar21 = *(undefined8 *)(lVar27 + 0x2f8);
    uVar10 = *(undefined8 *)(lVar27 + 0x2f0);
    uVar1 = *(undefined8 *)(lVar27 + 0x2e8);
    uVar11 = *(undefined8 *)(lVar27 + 0x2e0);
    uVar2 = *(undefined8 *)(lVar27 + 0x2d8);
    uVar12 = *(undefined8 *)(lVar27 + 0x2d0);
    uVar3 = *(undefined8 *)(lVar27 + 0x2c8);
    uVar13 = *(undefined8 *)(lVar27 + 0x2b0);
    uVar4 = *(undefined8 *)(lVar27 + 0x2a8);
    uVar14 = *(undefined8 *)(lVar27 + 0x298);
    uVar5 = *(undefined8 *)(lVar27 + 0x290);
    uVar15 = *(undefined8 *)(lVar27 + 0x288);
    uVar6 = *(undefined8 *)(lVar27 + 0x280);
    uVar16 = *(undefined8 *)(lVar27 + 0x278);
    uVar7 = *(undefined8 *)(lVar27 + 0x270);
    uVar17 = *(undefined8 *)(lVar27 + 0x268);
    uVar8 = *(undefined8 *)(lVar27 + 0x260);
    uVar9 = *(undefined8 *)(lVar27 + 600);
    uVar28 = *(undefined8 *)(lVar27 + 0x250);
    _swift_task_dealloc(*(undefined8 *)(lVar27 + 0x340));
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar28);
                    /* WARNING: Could not recover jumptable at 0x0001004aba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar20 + 8))(0);
    return;
  }
  _swift_task_switch(FUN_1004aba84,0,0);
  return;
}



/* Address: 0x1004aba84 | FUN_1004aba84 */

/* WARNING: Removing unreachable block (ram,0x0001004abf70) */

void FUN_1004aba84(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 ****ppppuVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 ****ppppuVar30;
  long lVar31;
  undefined8 uVar32;
  long unaff_x22;
  undefined8 uVar33;
  void *pvVar34;
  URL UVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  char *pcVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long lVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  char *local_a0;
  void *pvStack_98;
  undefined8 ***local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  String separator;
  
  lVar26 = *(long *)(unaff_x22 + 0x348);
  FUN_100076688(*(long *)(unaff_x22 + 0x248) + _TtC3MCP15OAuthAuthorizer::scopeSelector,
                unaff_x22 + 0x60);
  pvVar10 = *(void **)(unaff_x22 + 0x78);
  lVar4 = *(long *)(unaff_x22 + 0x80);
  FUN_100004640(unaff_x22 + 0x60,pvVar10);
  if (*(long *)(lVar26 + 0x10) == 0) {
    puVar27 = (undefined *)0x0;
    uVar28 = 0;
  }
  else {
    _swift_bridgeObjectRetain_n(*(undefined8 *)(unaff_x22 + 0x348),2);
    lVar26 = 0x65706f6373;
    uVar9 = 0;
    FUN_100071370();
    lVar39 = *(long *)(unaff_x22 + 0x348);
    if ((uVar9 & 1) == 0) {
      puVar27 = (undefined *)0x0;
      uVar28 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar39 + 0x38) + lVar26 * 0x10);
      puVar27 = (undefined *)*puVar1;
      uVar28 = puVar1[1];
      _swift_bridgeObjectRetain(uVar28);
    }
    _swift_bridgeObjectRelease_n(lVar39,2);
  }
  uVar40 = *(undefined8 *)(unaff_x22 + 0x338);
  lVar26 = *(long *)(unaff_x22 + 0x248);
  (**(code **)(lVar4 + 8))(puVar27,uVar28,*(undefined8 *)(unaff_x22 + 0x478),pvVar10,lVar4);
  _swift_bridgeObjectRelease(uVar28);
  puVar2 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar27 != (undefined *)0x0) {
    puVar2 = puVar27;
  }
  FUN_100004594(unaff_x22 + 0x60);
  puVar1 = (undefined8 *)(lVar26 + _TtC3MCP15OAuthAuthorizer::tokenStorage);
  lVar4 = puVar1[1];
  _swift_getObjectType(*puVar1);
  (**(code **)(lVar4 + 0x10))(uVar40);
  lVar4 = 0;
  FUN_1004c78dc();
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(uVar40,1,lVar4);
  lVar26 = *(long *)(unaff_x22 + 0x338);
  if ((int)uVar40 == 1) {
    FUN_1000fb4c4(lVar26,&DAT_100fcb558,&DAT_100c51960);
    ppppuVar25 = (undefined8 ****)PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    ppppuVar25 = *(undefined8 *****)(lVar26 + *(int *)(lVar4 + 0x1c));
    _swift_bridgeObjectRetain(ppppuVar25);
    FUN_10005241c(lVar26,FUN_1004c78dc);
  }
  lVar26 = *(long *)(unaff_x22 + 0x480);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x2d8);
  lVar4 = *(long *)(unaff_x22 + 0x248);
  UVar35.unknown = *(undefined **)(unaff_x22 + 0x228);
  local_90 = ppppuVar25;
  FUN_1004b4e24(puVar2);
  ppppuVar25 = (undefined8 ****)local_90;
  *(undefined8 ****)(unaff_x22 + 0x488) = local_90;
  lVar4 = lVar4 + _TtC3MCP15OAuthAuthorizer::discoveryClient;
  FUN_100004640(lVar4,*(undefined8 *)(lVar4 + 0x18));
  FUN_100076688();
  uVar28 = *(undefined8 *)(unaff_x22 + 0xa0);
  pcVar7 = *(char **)(unaff_x22 + 0xa8);
  FUN_100004640(unaff_x22 + 0x88,uVar28);
  (**(code **)(pcVar7 + 0x18))(uVar40,UVar35.unknown,uVar28);
  if (lVar26 == 0) {
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2d8);
    lVar4 = *(long *)(unaff_x22 + 0x2c0);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x2b8);
    pvVar34 = *(void **)(unaff_x22 + 0x238);
    pcVar38 = *(char **)(unaff_x22 + 0x230);
    SVar47 = Foundation::URL::get_absoluteString(UVar35);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
    *(code **)(unaff_x22 + 0x490) = UNRECOVERED_JUMPTABLE;
    (*UNRECOVERED_JUMPTABLE)(uVar28,uVar40);
    FUN_100004594(unaff_x22 + 0x88);
    FUN_1004b896c();
    SVar50.bridgeObject = (void *)0xe100000000000000;
    SVar50.str = (char *)0x7c;
    SVar51.bridgeObject = pvVar10;
    SVar51.str = pcVar7;
    Swift::String::append(SVar50,SVar51);
    SVar48.bridgeObject = pvVar34;
    SVar48.str = pcVar38;
    SVar52.bridgeObject = pvVar10;
    SVar52.str = pcVar7;
    Swift::String::append(SVar48,SVar52);
    _swift_bridgeObjectRelease(pvVar34);
    SVar49.bridgeObject = (void *)0xe100000000000000;
    SVar49.str = (char *)0x7c;
    SVar53.bridgeObject = pvVar10;
    SVar53.str = pcVar7;
    Swift::String::append(SVar49,SVar53);
    ppppuVar30 = (undefined8 ****)ppppuVar25[2];
    ppppuVar5 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ppppuVar30 != (undefined8 ****)0x0) {
      _swift_bridgeObjectRetain(ppppuVar25);
      ppppuVar5 = ppppuVar30;
      FUN_1004b4ca0(ppppuVar30,0);
      ppppuVar6 = &local_90;
      FUN_100370d3c(ppppuVar6,ppppuVar5 + 4,ppppuVar30,ppppuVar25);
      FUN_10000c650(local_90,uStack_88,local_80,uStack_78,local_70);
      if (ppppuVar6 != ppppuVar30) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1004abf54);
        (*UNRECOVERED_JUMPTABLE)();
      }
    }
    local_90 = ppppuVar5;
    FUN_1004b7b80(&local_90);
    pppuVar3 = local_90;
    lVar39 = *(long *)(unaff_x22 + 0x248);
    *(undefined8 ****)(unaff_x22 + 0x200) = local_90;
    pcVar7 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    pcVar38 = pcVar7;
    FUN_1004b8a64();
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x20;
    SVar50 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_release(pppuVar3);
    SVar54.bridgeObject = pcVar38;
    SVar54.str = pcVar7;
    Swift::String::append(SVar50,SVar54);
    _swift_bridgeObjectRelease(SVar50.bridgeObject);
    lVar4 = _TtC3MCP15OAuthAuthorizer::stepUpAttempts;
    local_a0 = SVar47.str;
    pvStack_98 = SVar47.bridgeObject;
    _swift_beginAccess(lVar39 + _TtC3MCP15OAuthAuthorizer::stepUpAttempts,unaff_x22 + 0x1a0,0x20,0);
    lVar26 = *(long *)(lVar39 + lVar4);
    if (*(long *)(lVar26 + 0x10) == 0) {
      lVar44 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar26);
      pcVar7 = local_a0;
      pvVar10 = pvStack_98;
      FUN_100071370();
      if (((ulong)pvVar10 & 1) == 0) {
        lVar44 = 0;
      }
      else {
        lVar44 = *(long *)(*(long *)(lVar26 + 0x38) + (long)pcVar7 * 8);
      }
      _swift_bridgeObjectRelease(lVar26);
    }
    lVar31 = *(long *)(unaff_x22 + 0x248);
    _swift_endAccess(unaff_x22 + 0x1a0);
    lVar26 = _TtC3MCP15OAuthAuthorizer::configuration;
    *(long *)(unaff_x22 + 0x498) = _TtC3MCP15OAuthAuthorizer::configuration;
    if (lVar44 < *(long *)(lVar31 + lVar26 + 0x38)) {
      _swift_beginAccess(lVar39 + lVar4,unaff_x22 + 0x1b8,0x21,0);
      uVar28 = *(undefined8 *)(lVar39 + lVar4);
      _swift_isUniquelyReferenced_nonNull_native(uVar28);
      local_90 = *(undefined8 ****)(lVar39 + lVar4);
      *(undefined8 *)(lVar39 + lVar4) = 0x8000000000000000;
      FUN_1004b5178(lVar44 + 1,local_a0,pvStack_98,uVar28);
      _swift_bridgeObjectRelease(pvStack_98);
      *(undefined8 ****)(lVar39 + lVar4) = local_90;
      _swift_endAccess(unaff_x22 + 0x1b8);
      if (ppppuVar25[2] == (undefined8 ***)0x0) {
        ppppuVar25 = (undefined8 ****)0x0;
      }
      else {
        _swift_bridgeObjectRetain(ppppuVar25);
      }
      *(undefined8 *****)(unaff_x22 + 0x4a0) = ppppuVar25;
      plVar8 = (long *)0x130;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x4a8) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_1004ac314;
      FUN_1004afbe4(plVar8,*(undefined8 *)(unaff_x22 + 0x318),*(undefined8 *)(unaff_x22 + 0x460),
                    *(undefined8 *)(unaff_x22 + 0x468),*(undefined8 *)(unaff_x22 + 0x470),
                    *(undefined8 *)(unaff_x22 + 0x478),*(undefined8 *)(unaff_x22 + 0x240));
      return;
    }
    uVar28 = *(undefined8 *)(unaff_x22 + 0x478);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x470);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x468);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x348);
    _swift_bridgeObjectRelease(pvStack_98);
    _swift_bridgeObjectRelease(ppppuVar25);
    _swift_bridgeObjectRelease(uVar40);
    _swift_bridgeObjectRelease(uVar41);
    _swift_bridgeObjectRelease(uVar36);
    _swift_bridgeObjectRelease(uVar28);
    uVar45 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar46 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar24 = *(undefined8 *)(unaff_x22 + 800);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar42 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar43 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar14 = *(undefined8 *)(unaff_x22 + 600);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x250);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    _swift_task_dealloc(uVar45);
    _swift_task_dealloc(uVar46);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar37);
    _swift_task_dealloc(uVar42);
    _swift_task_dealloc(uVar43);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar40);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar36);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar41);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar15);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar28 = *(undefined8 *)(unaff_x22 + 0x478);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x470);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x468);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x348);
    _swift_bridgeObjectRelease(ppppuVar25);
    _swift_bridgeObjectRelease(uVar41);
    _swift_bridgeObjectRelease(uVar36);
    _swift_bridgeObjectRelease(uVar40);
    _swift_bridgeObjectRelease(uVar28);
    FUN_100004594(unaff_x22 + 0x88);
    uVar46 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar24 = *(undefined8 *)(unaff_x22 + 800);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar42 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar43 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar45 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar14 = *(undefined8 *)(unaff_x22 + 600);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x250);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    _swift_task_dealloc(uVar46);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar37);
    _swift_task_dealloc(uVar42);
    _swift_task_dealloc(uVar43);
    _swift_task_dealloc(uVar45);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar40);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar36);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar41);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar15);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004abe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}



/* Address: 0x1004ac314 | FUN_1004ac314 */

void FUN_1004ac314(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x4b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x4a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004ac370;
  }
  else {
    pcVar1 = FUN_1004acad8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004ac370 | FUN_1004ac370 */

void FUN_1004ac370(void)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  long unaff_x22;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  code *pcVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  code *pcVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar24 = *(long *)(unaff_x22 + 0x4b0);
  FUN_1004b051c(*(undefined8 *)(unaff_x22 + 0x2d0),*(undefined8 *)(unaff_x22 + 0x228));
  if (lVar24 == 0) {
    lVar24 = *(long *)(unaff_x22 + 0x498);
    lVar31 = *(long *)(unaff_x22 + 0x2c0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x268);
    lVar17 = *(long *)(unaff_x22 + 0x248);
    lVar4 = 0;
    FUN_1004bcc58();
    iVar3 = *(int *)(lVar4 + 0x1c);
    lVar5 = 0;
    FUN_1004bcbcc();
    FUN_1000f8cac(lVar17 + lVar24 + (long)iVar3 + (long)*(int *)(lVar5 + 0x14),uVar19,&DAT_100fcb378
                  ,&DAT_100c50170);
    pcVar32 = *(code **)(lVar31 + 0x30);
    (*pcVar32)(uVar19,1,uVar21);
    lVar24 = _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer;
    if ((int)uVar19 == 1) {
      uVar21 = *(undefined8 *)(unaff_x22 + 0x2b8);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x260);
      lVar17 = *(long *)(unaff_x22 + 0x248);
      _swift_beginAccess(lVar17 + _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer,
                         unaff_x22 + 0x1d0,0,0);
      FUN_1000f8cac(lVar17 + lVar24,uVar19,&DAT_100fcb378,&DAT_100c50170);
      (*pcVar32)(uVar19,1,uVar21);
      if ((int)uVar19 == 1) {
        bVar2 = *(long *)(*(long *)(unaff_x22 + 0x470) + 0x10) == 0;
        if (!bVar2) {
          uVar18 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x2c0) + 0x50);
          (**(code **)(*(long *)(unaff_x22 + 0x2c0) + 0x10))
                    (*(undefined8 *)(unaff_x22 + 0x270),
                     *(long *)(unaff_x22 + 0x470) + (uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff)),
                     *(undefined8 *)(unaff_x22 + 0x2b8));
        }
        uVar21 = *(undefined8 *)(unaff_x22 + 0x2b8);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x260);
        pcVar35 = *(code **)(*(long *)(unaff_x22 + 0x2c0) + 0x38);
        (*pcVar35)(*(undefined8 *)(unaff_x22 + 0x270),bVar2,1,uVar21);
        (*pcVar32)(uVar19,1,uVar21);
        if ((int)uVar19 != 1) {
          FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x260),&DAT_100fcb378,&DAT_100c50170);
        }
      }
      else {
        lVar24 = *(long *)(unaff_x22 + 0x2c0);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x2b8);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x270);
        (**(code **)(lVar24 + 0x20))(uVar21,*(undefined8 *)(unaff_x22 + 0x260),uVar19);
        pcVar35 = *(code **)(lVar24 + 0x38);
        (*pcVar35)(uVar21,0,1,uVar19);
      }
      uVar21 = *(undefined8 *)(unaff_x22 + 0x268);
      uVar19 = uVar21;
      (*pcVar32)(uVar21,1,*(undefined8 *)(unaff_x22 + 0x2b8));
      if ((int)uVar19 != 1) {
        FUN_1000fb4c4(uVar21,&DAT_100fcb378,&DAT_100c50170);
      }
    }
    else {
      lVar24 = *(long *)(unaff_x22 + 0x2c0);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x2b8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x270);
      (**(code **)(lVar24 + 0x20))(uVar21,*(undefined8 *)(unaff_x22 + 0x268),uVar19);
      pcVar35 = *(code **)(lVar24 + 0x38);
      (*pcVar35)(uVar21,0,1,uVar19);
    }
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x250);
    FUN_1000f8cac(*(long *)(unaff_x22 + 0x248) + *(long *)(unaff_x22 + 0x498) +
                  (long)*(int *)(lVar4 + 0x1c) + (long)*(int *)(lVar5 + 0x18),uVar19,&DAT_100fcb378,
                  &DAT_100c50170);
    (*pcVar32)(uVar19,1,uVar21);
    if ((int)uVar19 == 1) {
      uVar21 = *(undefined8 *)(unaff_x22 + 0x2b8);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x250);
      FUN_1000f8cac(*(long *)(unaff_x22 + 0x318) +
                    (long)*(int *)(*(long *)(unaff_x22 + 0x308) + 0x18),
                    *(undefined8 *)(unaff_x22 + 600),&DAT_100fcb378,&DAT_100c50170);
      (*pcVar32)(uVar19,1,uVar21);
      if ((int)uVar19 != 1) {
        FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x250),&DAT_100fcb378,&DAT_100c50170);
      }
    }
    else {
      uVar21 = *(undefined8 *)(unaff_x22 + 0x2b8);
      uVar19 = *(undefined8 *)(unaff_x22 + 600);
      (**(code **)(*(long *)(unaff_x22 + 0x2c0) + 0x20))
                (uVar19,*(undefined8 *)(unaff_x22 + 0x250),uVar21);
      (*pcVar35)(uVar19,0,1,uVar21);
    }
    lVar24 = *(long *)(unaff_x22 + 0x348);
    lVar4 = *(long *)(unaff_x22 + 0x318);
    lVar5 = *(long *)(unaff_x22 + 0x308);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2b8);
    lVar17 = *(long *)(unaff_x22 + 0x2a8);
    lVar31 = *(long *)(unaff_x22 + 0x2a0);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar29 = *(undefined8 *)(unaff_x22 + 600);
    pcVar32 = *(code **)(*(long *)(unaff_x22 + 0x2c0) + 0x10);
    (*pcVar32)(lVar17 + *(int *)(lVar31 + 0x14),*(undefined8 *)(unaff_x22 + 0x228),uVar19);
    (*pcVar32)(lVar17 + *(int *)(lVar31 + 0x18),uVar21,uVar19);
    iVar3 = *(int *)(lVar31 + 0x1c);
    *(int *)(unaff_x22 + 0x174) = iVar3;
    FUN_1000f8cac(uVar27,lVar17 + iVar3,&DAT_100fcb378,&DAT_100c50170);
    FUN_1000f8cac(lVar4 + *(int *)(lVar5 + 0x14),lVar17 + *(int *)(lVar31 + 0x20),&DAT_100fcb378,
                  &DAT_100c50170);
    FUN_1000f8cac(uVar29,lVar17 + *(int *)(lVar31 + 0x24),&DAT_100fcb378,&DAT_100c50170);
    FUN_1000f8cac(lVar4 + *(int *)(lVar5 + 0x1c),lVar17 + *(int *)(lVar31 + 0x28),&DAT_100fcb378,
                  &DAT_100c50170);
    if (*(long *)(lVar24 + 0x10) == 0) {
      local_70 = 0;
      local_68 = 0;
    }
    else {
      _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x22 + 0x348));
      lVar24 = 0x65706f6373;
      uVar18 = 0;
      FUN_100071370();
      lVar4 = *(long *)(unaff_x22 + 0x348);
      if ((uVar18 & 1) == 0) {
        local_68 = 0;
        local_70 = 0;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x38) + lVar24 * 0x10);
        local_68 = *puVar1;
        local_70 = puVar1[1];
        _swift_bridgeObjectRetain();
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x4a0);
    pcVar32 = *(code **)(unaff_x22 + 0x490);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x478);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x2b8);
    puVar26 = *(undefined8 **)(unaff_x22 + 0x2a8);
    lVar24 = *(long *)(unaff_x22 + 0x2a0);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar6 = *(undefined8 *)(unaff_x22 + 600);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x348));
    FUN_1000fb4c4(uVar6,&DAT_100fcb378,&DAT_100c50170);
    FUN_1000fb4c4(uVar36,&DAT_100fcb378,&DAT_100c50170);
    (*pcVar32)(uVar29,uVar33);
    FUN_10005241c(uVar21,FUN_1004ce850);
    *puVar26 = 0x193;
    puVar1 = (undefined8 *)((long)puVar26 + (long)*(int *)(lVar24 + 0x2c));
    *puVar1 = local_68;
    puVar1[1] = local_70;
    *(undefined8 *)((long)puVar26 + (long)*(int *)(lVar24 + 0x30)) = uVar27;
    *(undefined8 *)((long)puVar26 + (long)*(int *)(lVar24 + 0x34)) = uVar19;
    plVar23 = (long *)0x60;
    _swift_bridgeObjectRetain(uVar27);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x4b8) = plVar23;
    *plVar23 = unaff_x22;
    plVar23[1] = (long)FUN_1004accd8;
    FUN_1004b0b78(*(undefined8 *)(unaff_x22 + 0x2a8),*(undefined8 *)(unaff_x22 + 0x240));
    return;
  }
  uVar21 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x488);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x468);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x318);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x470));
  _swift_bridgeObjectRelease(uVar19);
  _swift_bridgeObjectRelease(uVar33);
  _swift_bridgeObjectRelease(uVar29);
  _swift_bridgeObjectRelease(uVar27);
  _swift_bridgeObjectRelease(uVar21);
  FUN_10005241c(uVar36,FUN_1004ce850);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar30 = *(undefined8 *)(unaff_x22 + 800);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar16 = *(undefined8 *)(unaff_x22 + 600);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001004ac594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004acad8 | FUN_1004acad8 */

void FUN_1004acad8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x488);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x468);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x348);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x470));
  _swift_bridgeObjectRelease(uVar13);
  _swift_bridgeObjectRelease(uVar21);
  _swift_bridgeObjectRelease(uVar19);
  _swift_bridgeObjectRelease(uVar17);
  _swift_bridgeObjectRelease(uVar15);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar18 = *(undefined8 *)(unaff_x22 + 800);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar3 = *(undefined8 *)(unaff_x22 + 600);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001004accd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004accd8 | FUN_1004accd8 */

void FUN_1004accd8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x4c0) = param_1;
  *(undefined8 *)(lVar4 + 0x4c8) = param_2;
  *(long *)(lVar4 + 0x4d0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x4b8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004acd74;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x478);
    uVar2 = *(undefined8 *)(lVar4 + 0x470);
    uVar5 = *(undefined8 *)(lVar4 + 0x468);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x488));
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar5);
    pcVar1 = FUN_1004ae278;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004acd74 | FUN_1004acd74 */

void FUN_1004acd74(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  lVar15 = *(long *)(unaff_x22 + 0x4c8);
  if (lVar15 != 0) {
    uVar28 = *(undefined8 *)(unaff_x22 + 0x4c0);
    iVar1 = *(int *)(unaff_x22 + 0x174);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x4a0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x478);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x470);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x468);
    lVar26 = *(long *)(unaff_x22 + 0x2a8);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x488));
    _swift_bridgeObjectRelease(uVar22);
    _swift_bridgeObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar24);
    FUN_1004b0d44(uVar28,lVar15,uVar18,lVar26 + iVar1);
    _swift_bridgeObjectRelease(lVar15);
    FUN_10005241c(lVar26,FUN_1004ba764);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar16 = *(undefined8 *)(unaff_x22 + 800);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar5 = *(undefined8 *)(unaff_x22 + 600);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001004acf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(1);
    return;
  }
  plVar2 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x4d8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1004acffc;
  FUN_1004afbe4(plVar2,*(undefined8 *)(unaff_x22 + 0x310),*(undefined8 *)(unaff_x22 + 0x460),
                *(undefined8 *)(unaff_x22 + 0x468),*(undefined8 *)(unaff_x22 + 0x470),
                *(undefined8 *)(unaff_x22 + 0x478),*(undefined8 *)(unaff_x22 + 0x240));
  return;
}



/* Address: 0x1004acffc | FUN_1004acffc */

void FUN_1004acffc(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x4e0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x4d8));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1004ad0e8,0,0);
    return;
  }
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x4e8) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_1004ad08c;
  FUN_1004b1de4(*(undefined8 *)(lVar2 + 0x310),*(undefined8 *)(lVar2 + 0x240));
  return;
}



/* Address: 0x1004ad08c | FUN_1004ad08c */

void FUN_1004ad08c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x4f0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x4e8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004ad2e0;
  }
  else {
    pcVar1 = FUN_1004ad5c4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004ad0e8 | FUN_1004ad0e8 */

void FUN_1004ad0e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x468);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x488));
  _swift_bridgeObjectRelease(uVar15);
  _swift_bridgeObjectRelease(uVar17);
  _swift_bridgeObjectRelease(uVar19);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2a8),FUN_1004ba764);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar20 = *(undefined8 *)(unaff_x22 + 800);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 600);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001004ad2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004ad2e0 | FUN_1004ad2e0 */

void FUN_1004ad2e0(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  lVar19 = *(long *)(unaff_x22 + 0x4f0);
  FUN_1004b051c(*(undefined8 *)(unaff_x22 + 0x2c8),*(undefined8 *)(unaff_x22 + 0x228));
  if (lVar19 != 0) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x478);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x470);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x468);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x310);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x488));
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar17);
    _swift_bridgeObjectRelease(uVar21);
    FUN_10005241c(uVar23,FUN_1004ce850);
    FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2a8),FUN_1004ba764);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar24 = *(undefined8 *)(unaff_x22 + 800);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar14 = *(undefined8 *)(unaff_x22 + 600);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001004ad4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x488);
  if (*(char *)(*(long *)(unaff_x22 + 0x248) + *(long *)(unaff_x22 + 0x498)) != '\0') {
    plVar1 = (long *)0x130;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x4f8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1004ad7d0;
    FUN_1004b2444(*(undefined8 *)(unaff_x22 + 0x2c8),uVar15,*(undefined8 *)(unaff_x22 + 0x310),
                  *(undefined8 *)(unaff_x22 + 0x240));
    return;
  }
  plVar1 = (long *)0x280;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x508) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1004ad82c;
  FUN_1004b2844(*(undefined8 *)(unaff_x22 + 0x2c8),uVar15,*(undefined8 *)(unaff_x22 + 0x310),
                *(undefined8 *)(unaff_x22 + 0x240));
  return;
}



/* Address: 0x1004ad5c4 | FUN_1004ad5c4 */

void FUN_1004ad5c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x468);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x310);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x488));
  _swift_bridgeObjectRelease(uVar14);
  _swift_bridgeObjectRelease(uVar16);
  _swift_bridgeObjectRelease(uVar18);
  FUN_10005241c(uVar20,FUN_1004ce850);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2a8),FUN_1004ba764);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar19 = *(undefined8 *)(unaff_x22 + 800);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar4 = *(undefined8 *)(unaff_x22 + 600);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001004ad7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004ad7d0 | FUN_1004ad7d0 */

void FUN_1004ad7d0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x500) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x4f8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004ad888;
  }
  else {
    pcVar1 = FUN_1004adaa8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004ad82c | FUN_1004ad82c */

void FUN_1004ad82c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x510) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x508));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_1004ad888;
  }
  else {
    pcVar1 = FUN_1004adccc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004ad888 | FUN_1004ad888 */

void FUN_1004ad888(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  pcVar25 = *(code **)(unaff_x22 + 0x490);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x468);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2a8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x488));
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(uVar13);
  _swift_bridgeObjectRelease(uVar15);
  (*pcVar25)(uVar19,uVar21);
  FUN_10005241c(uVar17,FUN_1004ce850);
  FUN_10005241c(uVar23,FUN_1004ba764);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar12 = *(undefined8 *)(unaff_x22 + 800);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar1 = *(undefined8 *)(unaff_x22 + 600);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001004adaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Address: 0x1004adaa8 | FUN_1004adaa8 */

void FUN_1004adaa8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  pcVar24 = *(code **)(unaff_x22 + 0x490);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x468);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2b8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x488));
  _swift_bridgeObjectRelease(uVar12);
  _swift_bridgeObjectRelease(uVar14);
  _swift_bridgeObjectRelease(uVar16);
  (*pcVar24)(uVar20,uVar22);
  FUN_10005241c(uVar18,FUN_1004ce850);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2a8),FUN_1004ba764);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar17 = *(undefined8 *)(unaff_x22 + 800);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar2 = *(undefined8 *)(unaff_x22 + 600);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001004adcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004adccc | FUN_1004adccc */

void FUN_1004adccc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  pcVar24 = *(code **)(unaff_x22 + 0x490);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x468);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2b8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x488));
  _swift_bridgeObjectRelease(uVar12);
  _swift_bridgeObjectRelease(uVar14);
  _swift_bridgeObjectRelease(uVar16);
  (*pcVar24)(uVar20,uVar22);
  FUN_10005241c(uVar18,FUN_1004ce850);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2a8),FUN_1004ba764);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar17 = *(undefined8 *)(unaff_x22 + 800);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar2 = *(undefined8 *)(unaff_x22 + 600);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001004adeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004adef0 | FUN_1004adef0 */

void FUN_1004adef0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar20 = *(undefined8 *)(unaff_x22 + 800);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar8 = *(undefined8 *)(unaff_x22 + 600);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001004ae0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004ae0ac | FUN_1004ae0ac */

void FUN_1004ae0ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2b0),FUN_1004ba764);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar20 = *(undefined8 *)(unaff_x22 + 800);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar8 = *(undefined8 *)(unaff_x22 + 600);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001004ae274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004ae278 | FUN_1004ae278 */

void FUN_1004ae278(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x2a8),FUN_1004ba764);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar20 = *(undefined8 *)(unaff_x22 + 800);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar8 = *(undefined8 *)(unaff_x22 + 600);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001004ae440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1004ae444 | FUN_1004ae444 */

void FUN_1004ae444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  URL UVar3;
  ulong uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xf0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
  puVar1 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  puVar1 = &DAT_100fcb588;
  FUN_1000f7830(&DAT_100fcb588,&DAT_100c503a8);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
  puVar1 = &DAT_100fcb580;
  FUN_1000f7830(&DAT_100fcb580,&DAT_100c503a0);
  *(undefined **)(unaff_x22 + 0x108) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar2;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x118) = UVar3.unknown;
  lVar5 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x120) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar2;
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar2;
  _swift_task_switch(FUN_1004ae628,0,0);
  return;
}



/* Address: 0x1004ae628 | FUN_1004ae628 */

/* WARNING: Removing unreachable block (ram,0x0001004aee78) */
/* WARNING: Removing unreachable block (ram,0x0001004af398) */
/* WARNING: Removing unreachable block (ram,0x0001004aed40) */

void FUN_1004ae628(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long *plVar19;
  URLComponents UVar20;
  char *pcVar21;
  undefined *puVar22;
  undefined1 *puVar23;
  undefined8 uVar25;
  code *pcVar26;
  code *pcVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  URLComponents UVar39;
  long lVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long unaff_x22;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  code *pcVar47;
  undefined8 uVar48;
  String SVar49;
  URL UVar24;
  
  lVar40 = _TtC3MCP15OAuthAuthorizer::protectedResourceMetadata;
  *(long *)(unaff_x22 + 0x1c0) = _TtC3MCP15OAuthAuthorizer::protectedResourceMetadata;
  puVar16 = (undefined8 *)(*(long *)(unaff_x22 + 0xf0) + lVar40);
  lVar40 = puVar16[2];
  if (lVar40 != 0) {
    uVar37 = *puVar16;
    uVar38 = puVar16[1];
    uVar32 = puVar16[3];
    lVar35 = *(long *)(unaff_x22 + 0xe0);
    if (lVar35 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x120) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x1b8),1,1,*(undefined8 *)(unaff_x22 + 0x118));
      _swift_bridgeObjectRetain(uVar32);
      _swift_bridgeObjectRetain(uVar38);
      _swift_bridgeObjectRetain(lVar40);
    }
    else {
      if (*(long *)(lVar35 + 0x10) == 0) {
        _swift_bridgeObjectRetain(uVar32);
        _swift_bridgeObjectRetain(uVar38);
        _swift_bridgeObjectRetain(lVar40);
      }
      else {
        FUN_1004b8f58(uVar37,uVar38,lVar40,uVar32);
        _swift_bridgeObjectRetain(lVar35);
        uVar30 = 0;
        lVar14 = -0x2fffffffffffffef;
        FUN_100071370();
        if ((uVar30 & 1) != 0) {
          uVar36 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + lVar14 * 0x10 + 8);
          _swift_bridgeObjectRetain(uVar36);
          _swift_bridgeObjectRelease(lVar35);
          Foundation::URL::_init();
          _swift_bridgeObjectRelease(uVar36);
          goto LAB_1004ae774;
        }
        _swift_bridgeObjectRelease(lVar35);
      }
      (**(code **)(*(long *)(unaff_x22 + 0x120) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x1b8),1,1,*(undefined8 *)(unaff_x22 + 0x118));
    }
LAB_1004ae774:
    uVar36 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x118);
    lVar35 = *(long *)(unaff_x22 + 0x120);
    FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x1b8),uVar36,&DAT_100fcb378,&DAT_100c50170);
    pcVar47 = *(code **)(lVar35 + 0x30);
    (*pcVar47)(uVar36,1,uVar33);
    if ((int)uVar36 == 1) {
      uVar36 = *(undefined8 *)(unaff_x22 + 0x1b0);
      FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x1b8),&DAT_100fcb378,&DAT_100c50170);
LAB_1004ae7c8:
      FUN_1000fb4c4(uVar36,&DAT_100fcb378,&DAT_100c50170);
LAB_1004ae7e0:
      uVar36 = *(undefined8 *)(unaff_x22 + 0x1b0);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar48 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar7 = *(undefined8 *)(unaff_x22 + 400);
      uVar42 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x100);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
      _swift_task_dealloc(uVar36);
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar33);
      _swift_task_dealloc(uVar48);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar41);
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar42);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar1);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar29);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar34);
      _swift_task_dealloc(uVar28);
      _swift_task_dealloc(uVar2);
      _swift_task_dealloc(uVar31);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar25);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001004ae904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar37,uVar38,lVar40,uVar32);
      return;
    }
    uVar36 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x118);
    lVar43 = *(long *)(unaff_x22 + 0x120);
    lVar14 = *(long *)(unaff_x22 + 0x108);
    lVar35 = *(long *)(unaff_x22 + 0x110);
    lVar44 = *(long *)(unaff_x22 + 0xf0);
    pcVar26 = *(code **)(lVar43 + 0x20);
    (*pcVar26)(uVar41,*(undefined8 *)(unaff_x22 + 0x1b0),uVar33);
    (**(code **)(lVar43 + 0x10))(uVar36,uVar41,uVar33);
    pcVar27 = *(code **)(lVar43 + 0x38);
    (*pcVar27)(uVar36,0,1,uVar33);
    lVar43 = _TtC3MCP15OAuthAuthorizer::cachedProtectedResourceMetadataURL;
    _swift_beginAccess(lVar44 + _TtC3MCP15OAuthAuthorizer::cachedProtectedResourceMetadataURL,
                       unaff_x22 + 0x78,0,0);
    lVar46 = (long)*(int *)(lVar14 + 0x30);
    FUN_1000f8cac(uVar36,lVar35,&DAT_100fcb378,&DAT_100c50170);
    FUN_1000f8cac(lVar44 + lVar43,lVar35 + lVar46,&DAT_100fcb378,&DAT_100c50170);
    lVar14 = lVar35;
    (*pcVar47)(lVar35,1,uVar33);
    if ((int)lVar14 == 1) {
      uVar33 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x170);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x118);
      lVar14 = *(long *)(unaff_x22 + 0x120);
      FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x1a8),&DAT_100fcb378,&DAT_100c50170);
      (**(code **)(lVar14 + 8))(uVar41,uVar36);
      FUN_1000fb4c4(uVar33,&DAT_100fcb378,&DAT_100c50170);
      lVar35 = lVar35 + lVar46;
      (*pcVar47)(lVar35,1,uVar36);
      if ((int)lVar35 == 1) {
        uVar36 = *(undefined8 *)(unaff_x22 + 0x110);
        goto LAB_1004ae7c8;
      }
      _swift_bridgeObjectRelease(lVar40);
      _swift_bridgeObjectRelease(uVar38);
      _swift_bridgeObjectRelease(uVar32);
LAB_1004aeb14:
      FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x110),&DAT_100fcb580,&DAT_100c503a0);
    }
    else {
      uVar36 = *(undefined8 *)(unaff_x22 + 0x118);
      FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x1a0),
                    &DAT_100fcb378,&DAT_100c50170);
      lVar14 = lVar35 + lVar46;
      (*pcVar47)(lVar14,1,uVar36);
      uVar42 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x170);
      if ((int)lVar14 == 1) {
        uVar37 = *(undefined8 *)(unaff_x22 + 0x118);
        lVar35 = *(long *)(unaff_x22 + 0x120);
        _swift_bridgeObjectRelease(lVar40);
        _swift_bridgeObjectRelease(uVar38);
        _swift_bridgeObjectRelease(uVar32);
        FUN_1000fb4c4(uVar33,&DAT_100fcb378,&DAT_100c50170);
        pcVar47 = *(code **)(lVar35 + 8);
        (*pcVar47)(uVar41,uVar37);
        FUN_1000fb4c4(uVar42,&DAT_100fcb378,&DAT_100c50170);
        (*pcVar47)(uVar36,uVar37);
        goto LAB_1004aeb14;
      }
      uVar34 = *(undefined8 *)(unaff_x22 + 0x168);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
      lVar14 = *(long *)(unaff_x22 + 0x120);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x110);
      (*pcVar26)(uVar34,lVar35 + lVar46,uVar1);
      puVar15 = &DAT_100fcb590;
      FUN_100003a00(&DAT_100fcb590,PTR_typeMetadataAccessor_100ea71a8,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
      bVar13 = Swift::Equatable::___infix(uVar36,uVar34,uVar1,puVar15);
      pcVar47 = *(code **)(lVar14 + 8);
      (*pcVar47)(uVar34,uVar1);
      FUN_1000fb4c4(uVar33,&DAT_100fcb378,&DAT_100c50170);
      (*pcVar47)(uVar41,uVar1);
      FUN_1000fb4c4(uVar42,&DAT_100fcb378,&DAT_100c50170);
      (*pcVar47)(uVar36,uVar1);
      FUN_1000fb4c4(uVar29,&DAT_100fcb378,&DAT_100c50170);
      if (bVar13) goto LAB_1004ae7e0;
      _swift_bridgeObjectRelease(lVar40);
      _swift_bridgeObjectRelease(uVar38);
      _swift_bridgeObjectRelease(uVar32);
    }
    uVar41 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar42 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar35 = *(long *)(unaff_x22 + 0xf0);
    uVar37 = *puVar16;
    uVar32 = puVar16[1];
    uVar38 = puVar16[2];
    uVar36 = puVar16[3];
    puVar16[1] = 0;
    *puVar16 = 0;
    puVar16[3] = 0;
    puVar16[2] = 0;
    FUN_1004b8bc8(uVar37,uVar32,uVar38,uVar36);
    lVar40 = 0;
    FUN_1004ce850();
    (**(code **)(*(long *)(lVar40 + -8) + 0x38))(uVar42,1,1,lVar40);
    lVar40 = _TtC3MCP15OAuthAuthorizer::authorizationServerMetadata;
    _swift_beginAccess(lVar35 + _TtC3MCP15OAuthAuthorizer::authorizationServerMetadata,
                       unaff_x22 + 0x90,0x21,0);
    FUN_1004375f4(uVar42,lVar35 + lVar40,&DAT_100fcb588,&DAT_100c503a8);
    _swift_endAccess(unaff_x22 + 0x90);
    (*pcVar27)(uVar41,1,1,uVar33);
    lVar40 = _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer;
    _swift_beginAccess(lVar35 + _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer,
                       unaff_x22 + 0xa8,0x21,0);
    FUN_1004375f4(uVar41,lVar35 + lVar40,&DAT_100fcb378,&DAT_100c50170);
    _swift_endAccess(unaff_x22 + 0xa8);
    (*pcVar27)(uVar41,1,1,uVar33);
    _swift_beginAccess(lVar44 + lVar43,unaff_x22 + 0xc0,0x21,0);
    FUN_1004375f4(uVar41,lVar44 + lVar43,&DAT_100fcb378,&DAT_100c50170);
    _swift_endAccess(unaff_x22 + 0xc0);
  }
  lVar40 = *(long *)(unaff_x22 + 0xe0);
  if ((lVar40 == 0) || (*(long *)(lVar40 + 0x10) == 0)) {
LAB_1004aed58:
    (**(code **)(*(long *)(unaff_x22 + 0x120) + 0x38))
              (*(undefined8 *)(unaff_x22 + 400),1,1,*(undefined8 *)(unaff_x22 + 0x118));
  }
  else {
    _swift_bridgeObjectRetain(lVar40);
    uVar30 = 0;
    lVar35 = -0x2fffffffffffffef;
    FUN_100071370();
    if ((uVar30 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar40);
      goto LAB_1004aed58;
    }
    uVar32 = *(undefined8 *)(unaff_x22 + 400);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x118);
    lVar14 = *(long *)(unaff_x22 + 0x120);
    uVar38 = *(undefined8 *)(*(long *)(lVar40 + 0x38) + lVar35 * 0x10 + 8);
    _swift_bridgeObjectRetain(uVar38);
    _swift_bridgeObjectRelease(lVar40);
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(uVar38);
    (**(code **)(lVar14 + 0x30))(uVar32,1,uVar37);
    if ((int)uVar32 != 1) {
      uVar37 = *(undefined8 *)(unaff_x22 + 0x160);
      pcVar47 = *(code **)(*(long *)(unaff_x22 + 0x120) + 0x20);
      (*pcVar47)(uVar37,*(undefined8 *)(unaff_x22 + 400),*(undefined8 *)(unaff_x22 + 0x118));
      FUN_1004d1224(uVar37,0xd00000000000001f,0x8000000100daa5a0);
      UVar39.unknown = *(undefined **)(unaff_x22 + 0xf8);
      Foundation::URLComponents::_init(SUB81(*(undefined8 *)(unaff_x22 + 0x160),0));
      UVar20 = Foundation::URLComponents::typeMetadataAccessor();
      lVar40 = *(long *)(UVar20.unknown + -8);
      puVar23 = &DAT_00000001;
      (**(code **)(lVar40 + 0x30))(UVar39.unknown,1,UVar20.unknown);
      uVar37 = *(undefined8 *)(unaff_x22 + 0xf8);
      if ((int)UVar39.unknown == 1) {
        FUN_1000fb4c4(uVar37,&DAT_100fcb380,&DAT_100c504a0);
      }
      else {
        Foundation::URLComponents::_get_host(UVar39);
        (**(code **)(lVar40 + 8))(uVar37,UVar20.unknown);
        if (puVar23 != (undefined1 *)0x0) {
          SVar49.bridgeObject = puVar23;
          SVar49.str = UVar39.unknown;
          SVar49 = Swift::String::lowercased(SVar49);
          UVar24.unknown = SVar49.bridgeObject;
          pcVar21 = SVar49.str;
          _swift_bridgeObjectRelease(puVar23);
          FUN_1004d19e4(pcVar21,UVar24.unknown);
          _swift_bridgeObjectRelease();
          if (((ulong)pcVar21 & 1) != 0) {
            uVar38 = *(undefined8 *)(unaff_x22 + 0x160);
            uVar37 = *(undefined8 *)(unaff_x22 + 0x118);
            lVar40 = *(long *)(unaff_x22 + 0x120);
            SVar49 = Foundation::URL::get_absoluteString(UVar24);
            pcVar21 = SVar49.str;
            FUN_1004a3fb4();
            _swift_allocError(&DAT_100ed9e90,pcVar21,0,0);
            pcVar21[0] = '\x1f';
            pcVar21[1] = '\0';
            pcVar21[2] = '\0';
            pcVar21[3] = '\0';
            pcVar21[4] = '\0';
            pcVar21[5] = '\0';
            pcVar21[6] = '\0';
            pcVar21[7] = -0x30;
            pcVar21[8] = -0x60;
            pcVar21[9] = -0x5b;
            pcVar21[10] = -0x26;
            pcVar21[0xb] = '\0';
            pcVar21[0xc] = '\x01';
            pcVar21[0xd] = '\0';
            pcVar21[0xe] = '\0';
            pcVar21[0xf] = -0x80;
            *(String *)(pcVar21 + 0x10) = SVar49;
            pcVar21[0x20] = '\x05';
            _swift_willThrow();
            (**(code **)(lVar40 + 8))(uVar38,uVar37);
            uVar37 = *(undefined8 *)(unaff_x22 + 0x1b0);
            uVar38 = *(undefined8 *)(unaff_x22 + 0x1a0);
            uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
            uVar32 = *(undefined8 *)(unaff_x22 + 400);
            uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
            uVar36 = *(undefined8 *)(unaff_x22 + 0x180);
            uVar4 = *(undefined8 *)(unaff_x22 + 0x188);
            uVar33 = *(undefined8 *)(unaff_x22 + 0x170);
            uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
            uVar41 = *(undefined8 *)(unaff_x22 + 0x160);
            uVar7 = *(undefined8 *)(unaff_x22 + 0x168);
            uVar42 = *(undefined8 *)(unaff_x22 + 0x150);
            uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
            uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
            uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
            uVar29 = *(undefined8 *)(unaff_x22 + 0x130);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x138);
            uVar31 = *(undefined8 *)(unaff_x22 + 0x128);
            uVar28 = *(undefined8 *)(unaff_x22 + 0x110);
            uVar34 = *(undefined8 *)(unaff_x22 + 0xf8);
            uVar11 = *(undefined8 *)(unaff_x22 + 0x100);
            _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
            _swift_task_dealloc(uVar37);
            _swift_task_dealloc(uVar2);
            _swift_task_dealloc(uVar38);
            _swift_task_dealloc(uVar3);
            _swift_task_dealloc(uVar32);
            _swift_task_dealloc(uVar4);
            _swift_task_dealloc(uVar36);
            _swift_task_dealloc(uVar6);
            _swift_task_dealloc(uVar33);
            _swift_task_dealloc(uVar7);
            _swift_task_dealloc(uVar41);
            _swift_task_dealloc(uVar8);
            _swift_task_dealloc(uVar42);
            _swift_task_dealloc(uVar9);
            _swift_task_dealloc(uVar1);
            _swift_task_dealloc(uVar10);
            _swift_task_dealloc(uVar29);
            _swift_task_dealloc(uVar31);
            _swift_task_dealloc(uVar28);
            _swift_task_dealloc(uVar11);
            _swift_task_dealloc(uVar34);
                    /* WARNING: Could not recover jumptable at 0x0001004aefac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x22 + 8))();
            return;
          }
        }
      }
      (**(code **)(*(long *)(unaff_x22 + 0x120) + 0x10))
                (*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x160),
                 *(undefined8 *)(unaff_x22 + 0x118));
      puVar22 = (undefined *)0x0;
      FUN_1004a4640(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
      uVar30 = *(ulong *)(puVar22 + 0x10);
      puVar17 = puVar22;
      if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar30) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar22 + 0x18));
        FUN_1004a4640(puVar17,uVar30 + 1,1,puVar22);
      }
      uVar37 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar38 = *(undefined8 *)(unaff_x22 + 0x118);
      lVar40 = *(long *)(unaff_x22 + 0x120);
      *(ulong *)(puVar17 + 0x10) = uVar30 + 1;
      (*pcVar47)(puVar17 + *(long *)(lVar40 + 0x48) * uVar30 +
                           ((ulong)*(byte *)(lVar40 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar40 + 0x50) ^ 0xffffffffffffffff)),uVar37,uVar38);
      (**(code **)(lVar40 + 8))(uVar32,uVar38);
      goto LAB_1004aed90;
    }
  }
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 400),&DAT_100fcb378,&DAT_100c50170);
  puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1004aed90:
  uVar38 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar35 = *(long *)(unaff_x22 + 0x120);
  lVar40 = *(long *)(unaff_x22 + 0xf0) + _TtC3MCP15OAuthAuthorizer::configuration;
  lVar14 = 0;
  FUN_1004bcc58();
  FUN_1000f8cac(lVar40 + *(int *)(lVar14 + 0x1c),uVar38,&DAT_100fcb378,&DAT_100c50170);
  (**(code **)(lVar35 + 0x30))(uVar38,1,uVar37);
  if ((int)uVar38 == 1) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x188),&DAT_100fcb378,&DAT_100c50170);
  }
  else {
    uVar30 = *(ulong *)(unaff_x22 + 0x150);
    pcVar47 = *(code **)(*(long *)(unaff_x22 + 0x120) + 0x20);
    (*pcVar47)(uVar30,*(undefined8 *)(unaff_x22 + 0x188),*(undefined8 *)(unaff_x22 + 0x118));
    FUN_1004d0c24(uVar30,puVar17);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x150);
    if ((uVar30 & 1) == 0) {
      FUN_1004d1224(uVar37,0xd00000000000002a,0x8000000100daa550);
      (**(code **)(*(long *)(unaff_x22 + 0x120) + 0x10))
                (*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x150),
                 *(undefined8 *)(unaff_x22 + 0x118));
      puVar22 = puVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar18 = puVar17;
      if (((ulong)puVar22 & 1) == 0) {
        puVar18 = (undefined *)0x0;
        FUN_1004a4640(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
      }
      uVar30 = *(ulong *)(puVar18 + 0x10);
      puVar17 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar30) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
        FUN_1004a4640(puVar17,uVar30 + 1,1,puVar18);
      }
      uVar32 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar38 = *(undefined8 *)(unaff_x22 + 0x118);
      lVar40 = *(long *)(unaff_x22 + 0x120);
      *(ulong *)(puVar17 + 0x10) = uVar30 + 1;
      (*pcVar47)(puVar17 + *(long *)(lVar40 + 0x48) * uVar30 +
                           ((ulong)*(byte *)(lVar40 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar40 + 0x50) ^ 0xffffffffffffffff)),uVar32,uVar38);
      pcVar47 = *(code **)(lVar40 + 8);
    }
    else {
      uVar38 = *(undefined8 *)(unaff_x22 + 0x118);
      pcVar47 = *(code **)(*(long *)(unaff_x22 + 0x120) + 8);
    }
    (*pcVar47)(uVar37,uVar38);
  }
  lVar14 = *(long *)(unaff_x22 + 0xd8);
  lVar40 = *(long *)(unaff_x22 + 0xf0) + _TtC3MCP15OAuthAuthorizer::discoveryClient;
  FUN_100004640(lVar40,*(undefined8 *)(lVar40 + 0x18));
  FUN_100076688();
  uVar37 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar35 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar37);
  (**(code **)(lVar35 + 8))(lVar14,uVar37,lVar35);
  FUN_100004594(unaff_x22 + 0x10);
  lVar35 = *(long *)(lVar14 + 0x10);
  if (lVar35 != 0) {
    lVar43 = 0;
    lVar44 = *(long *)(unaff_x22 + 0x120);
    uVar30 = (ulong)*(byte *)(lVar44 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar44 + 0x50) ^ 0xffffffffffffffff);
    lVar46 = *(long *)(lVar44 + 0x48);
    pcVar47 = *(code **)(lVar44 + 0x10);
    do {
      uVar37 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar38 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x118);
      (*pcVar47)(uVar38,lVar14 + uVar30 + lVar43 * lVar46,uVar32);
      lVar43 = lVar43 + 1;
      pcVar26 = *(code **)(lVar44 + 0x20);
      (*pcVar26)(uVar37,uVar38,uVar32);
      lVar45 = *(long *)(puVar17 + 0x10) + 1;
      puVar22 = puVar17 + uVar30;
      do {
        uVar37 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar38 = *(undefined8 *)(unaff_x22 + 0x118);
        lVar45 = lVar45 + -1;
        if (lVar45 == 0) {
          (*pcVar47)(*(undefined8 *)(unaff_x22 + 0x128),uVar37,uVar38);
          puVar22 = puVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar18 = puVar17;
          if (((ulong)puVar22 & 1) == 0) {
            puVar18 = (undefined *)0x0;
            FUN_1004a4640(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
          }
          uVar5 = *(ulong *)(puVar18 + 0x10);
          puVar17 = puVar18;
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar5) {
            puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
            FUN_1004a4640(puVar17,uVar5 + 1,1,puVar18);
          }
          uVar37 = *(undefined8 *)(unaff_x22 + 0x128);
          uVar38 = *(undefined8 *)(unaff_x22 + 0x118);
          *(ulong *)(puVar17 + 0x10) = uVar5 + 1;
          (*pcVar26)(puVar17 + uVar5 * lVar46 + uVar30,uVar37,uVar38);
          pcVar27 = *(code **)(lVar44 + 8);
          break;
        }
        uVar32 = *(undefined8 *)(unaff_x22 + 0x130);
        (*pcVar47)(uVar32,puVar22,uVar38);
        puVar16 = &DAT_100fcb590;
        FUN_100003a00(&DAT_100fcb590,PTR_typeMetadataAccessor_100ea71a8,
                      PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
        bVar13 = Swift::Equatable::___infix(uVar32,uVar37,uVar38,puVar16);
        pcVar27 = *(code **)(lVar44 + 8);
        (*pcVar27)(uVar32,uVar38);
        puVar22 = puVar22 + lVar46;
      } while (!bVar13);
      (*pcVar27)(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x118));
    } while (lVar43 != lVar35);
  }
  *(undefined **)(unaff_x22 + 0x1c8) = puVar17;
  uVar32 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar38 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_bridgeObjectRelease(lVar14);
  FUN_100004640(lVar40,*(undefined8 *)(lVar40 + 0x18));
  FUN_100076688();
  uVar37 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar35 = *(long *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,uVar37);
  (**(code **)(lVar35 + 0x20))(uVar32,uVar38,uVar37,lVar35);
  pcVar47 = *(code **)(*(long *)(unaff_x22 + 0x120) + 0x38);
  (*pcVar47)(*(undefined8 *)(unaff_x22 + 0x180),0,1,*(undefined8 *)(unaff_x22 + 0x118));
  FUN_100004594(unaff_x22 + 0x38);
  *(code **)(unaff_x22 + 0x1d0) = pcVar47;
  FUN_100004640(lVar40,*(undefined8 *)(lVar40 + 0x18));
  plVar19 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1d8) = plVar19;
  *plVar19 = unaff_x22;
  plVar19[1] = (long)FUN_1004af634;
  FUN_1004c40b0(puVar17,*(undefined8 *)(unaff_x22 + 0x180),*(undefined8 *)(unaff_x22 + 0xe8));
  return;
}


