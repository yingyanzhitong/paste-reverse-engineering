/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10028e2d8 | FUN_10028e2d8 */

void FUN_10028e2d8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10028c73c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_10028d37c(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),param_1);
  return;
}



/* Address: 0x10028e318 | FUN_10028e318 */

void FUN_10028e318(void)

{
  FUN_100016eac(&DAT_100fba6a8,&DAT_100fba6b0,&DAT_100c3ae98,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  return;
}



/* Address: 0x10028e34c | thunk_FUN_10028e144 */

void thunk_FUN_10028e144(void)

{
  thunk_FUN_10028e144();
  return;
}



/* Address: 0x10028e350 | FUN_10028e350 */

undefined1  [16] FUN_10028e350(void)

{
  return ZEXT816(0x100ec5af0);
}



/* Address: 0x10028e360 | FUN_10028e360 */

void FUN_10028e360(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa650,1);
  return;
}



/* Address: 0x10028e370 | FUN_10028e370 */

void FUN_10028e370(undefined8 *param_1)

{
  Alignment AVar1;
  undefined1 auStack_348 [120];
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 local_50;
  
  AVar1.unknown = &DAT_100fb9f08;
  FUN_1000037f0(&DAT_100fb9f08,&DAT_100c3af00);
  _swift_initStaticObject();
  FUN_1002827dc(&uStack_260);
  SwiftUI::Alignment::get_center(AVar1);
  SwiftUI::_FrameLayout::_init((Alignment)0x4074000000000000);
  uStack_2c8 = uStack_258;
  local_2d0 = uStack_260;
  uStack_298 = uStack_228;
  local_2a0 = local_230;
  uStack_1d8 = uStack_288;
  local_1e0 = local_290;
  uStack_1c8 = uStack_278;
  uStack_1d0 = local_280;
  uStack_218 = uStack_258;
  local_220 = uStack_260;
  uStack_208 = uStack_248;
  uStack_210 = local_250;
  uStack_2b8 = uStack_248;
  local_2c0 = local_250;
  uStack_2a8 = uStack_238;
  uStack_2b0 = uStack_240;
  uStack_1f8 = uStack_238;
  local_200 = uStack_240;
  uStack_1e8 = uStack_228;
  uStack_1f0 = local_230;
  uStack_1b8 = uStack_268;
  local_1c0 = local_270;
  uStack_1a8 = uStack_258;
  uStack_1b0 = uStack_260;
  uStack_198 = uStack_248;
  local_1a0 = local_250;
  uStack_188 = uStack_238;
  uStack_190 = uStack_240;
  uStack_158 = uStack_278;
  local_160 = local_280;
  uStack_148 = uStack_268;
  uStack_150 = local_270;
  uStack_178 = uStack_228;
  local_180 = local_230;
  uStack_168 = uStack_288;
  uStack_170 = local_290;
  FUN_100011090(&local_220,&local_c0,&DAT_100fba780,&DAT_100c3af08);
  FUN_100005808(&uStack_1b0,&DAT_100fba780,&DAT_100c3af08);
  uStack_f8 = uStack_288;
  local_100 = local_290;
  uStack_e8 = uStack_278;
  uStack_f0 = local_280;
  uStack_d8 = uStack_268;
  local_e0 = local_270;
  uStack_138 = uStack_2c8;
  local_140 = local_2d0;
  uStack_128 = uStack_2b8;
  uStack_130 = local_2c0;
  uStack_118 = uStack_2a8;
  local_120 = uStack_2b0;
  uStack_108 = uStack_298;
  uStack_110 = local_2a0;
  local_d0 = 0;
  uStack_b8 = uStack_2c8;
  local_c0 = local_2d0;
  uStack_a8 = uStack_2b8;
  uStack_b0 = local_2c0;
  uStack_68 = uStack_278;
  local_70 = local_280;
  uStack_58 = uStack_268;
  uStack_60 = local_270;
  uStack_98 = uStack_2a8;
  local_a0 = uStack_2b0;
  uStack_88 = uStack_298;
  uStack_90 = local_2a0;
  uStack_78 = uStack_288;
  local_80 = local_290;
  local_50 = 0;
  FUN_100011090(&local_140,auStack_348,&DAT_100fba788,&DAT_100c3af10);
  FUN_100005808(&local_c0,&DAT_100fba788,&DAT_100c3af10);
  param_1[9] = uStack_f8;
  param_1[8] = local_100;
  param_1[0xb] = uStack_e8;
  param_1[10] = uStack_f0;
  param_1[0xd] = uStack_d8;
  param_1[0xc] = local_e0;
  *(undefined2 *)(param_1 + 0xe) = local_d0;
  param_1[1] = uStack_138;
  *param_1 = local_140;
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  param_1[5] = uStack_118;
  param_1[4] = local_120;
  param_1[7] = uStack_108;
  param_1[6] = uStack_110;
  return;
}



/* Address: 0x10028e500 | thunk_FUN_10028e370 */

void thunk_FUN_10028e370(void)

{
  FUN_10028e370();
  return;
}



/* Address: 0x10028e504 | FUN_10028e504 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010028e778 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10028e504(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  MainActor *this;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  VerticalAlignment VVar7;
  MainActor *pMVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x12;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 auStack_d0 [2];
  MainActor *apMStack_c0 [4];
  undefined1 auStack_a0 [64];
  
  puVar2 = &DAT_100fba7c0;
  apMStack_c0[2] = (MainActor *)param_1;
  FUN_1000037f0(&DAT_100fba7c0,&DAT_100c3af98);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar15 = (long)apMStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar16 = (undefined8 *)(lVar15 - extraout_x12);
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(this,this);
  pMVar4 = pMVar3;
  FUN_100270a58();
  pMVar8 = pMVar4;
  apMStack_c0[1] = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x22,
               UVar5.unknown,pMVar8);
  }
  puVar2 = &DAT_100ec5ba0;
  _swift_allocObject(&DAT_100ec5ba0,0x50,7);
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  *(undefined8 *)(puVar2 + 0x18) = param_2[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar17;
  *(undefined8 *)(puVar2 + 0x28) = uVar19;
  *(undefined8 *)(puVar2 + 0x20) = uVar18;
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  *(undefined8 *)(puVar2 + 0x38) = param_2[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar17;
  *(undefined8 *)(puVar2 + 0x48) = uVar19;
  *(undefined8 *)(puVar2 + 0x40) = uVar18;
  VVar7.unknown = (undefined *)param_2;
  FUN_10028fe98(param_2,auStack_a0);
  VVar7 = SwiftUI::VerticalAlignment::get_center(VVar7);
  *puVar16 = VVar7.unknown;
  puVar16[1] = 0x4018000000000000;
  *(undefined1 *)(puVar16 + 2) = 0;
  pMVar8 = Swift::MainActor::get_shared(this,(MainActor *)VVar7.unknown);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x44,
               UVar5.unknown,pMVar4);
  }
  puVar9 = &DAT_100fba7c8;
  FUN_1000037f0(&DAT_100fba7c8,&DAT_100c3afa0);
  iVar1 = *(int *)(puVar9 + 0x2c);
  puVar9 = &DAT_100fb9f08;
  FUN_1000037f0(&DAT_100fb9f08,&DAT_100c3af00);
  _swift_initStaticObject();
  puVar10 = &DAT_100ec5bc8;
  apMStack_c0[3] = (MainActor *)puVar9;
  _swift_allocObject(&DAT_100ec5bc8,0x50,7);
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  *(undefined8 *)(puVar10 + 0x18) = param_2[1];
  *(undefined8 *)(puVar10 + 0x10) = uVar17;
  *(undefined8 *)(puVar10 + 0x28) = uVar19;
  *(undefined8 *)(puVar10 + 0x20) = uVar18;
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  *(undefined8 *)(puVar10 + 0x38) = param_2[5];
  *(undefined8 *)(puVar10 + 0x30) = uVar17;
  *(undefined8 *)(puVar10 + 0x48) = uVar19;
  *(undefined8 *)(puVar10 + 0x40) = uVar18;
  FUN_10028fe98(param_2,auStack_a0);
  puVar9 = &DAT_100fb9f60;
  FUN_1000037f0(&DAT_100fb9f60,&DAT_100c3a578);
  puVar11 = &DAT_100fba358;
  FUN_1000037f0(&DAT_100fba358,&DAT_100c3afb0);
  puVar12 = &DAT_100fb9f70;
  FUN_100016eac(&DAT_100fb9f70,&DAT_100fb9f60,&DAT_100c3a578,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar13 = puVar12;
  FUN_10028fed4();
  puVar14 = puVar13;
  FUN_100282d48();
  puVar16[-2] = puVar14;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)puVar16 + (long)iVar1,puVar14,FUN_10028fecc,puVar10,puVar9,
             PTR___type_metadata_for_Swift_String_100eac208,puVar11,puVar12,puVar13);
  _swift_release(pMVar8);
  FUN_100011090(puVar16,lVar15,&DAT_100fba7c0,&DAT_100c3af98);
  pMVar4 = apMStack_c0[2];
  *(code **)apMStack_c0[2] = FUN_10028fe90;
  *(undefined **)((long)apMStack_c0[2] + 8) = puVar2;
  puVar9 = &DAT_100fba7e8;
  FUN_1000037f0(&DAT_100fba7e8,&DAT_100c3afc0);
  FUN_100011090(lVar15,(long)pMVar4 + (long)*(int *)(puVar9 + 0x30),&DAT_100fba7c0,&DAT_100c3af98);
  _swift_retain(puVar2);
  FUN_100005808(puVar16,&DAT_100fba7c0,&DAT_100c3af98);
  FUN_100005808(lVar15,&DAT_100fba7c0,&DAT_100c3af98);
  _swift_release(apMStack_c0[1]);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10028e840 | FUN_10028e840 */

void FUN_10028e840(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Alignment AVar6;
  undefined *puVar7;
  undefined *puVar8;
  MainActor *pMVar9;
  long extraout_x8;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 auStack_90 [8];
  
  puVar1 = &DAT_100fba7f0;
  FUN_1000037f0(&DAT_100fba7f0,&DAT_100c3afd0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)auStack_90 + -extraout_x8);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100270a58();
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  pMVar9 = pMVar2;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift";
    pMVar9 = (MainActor *)0x3f;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x23,
               UVar4.unknown,pMVar2);
  }
  AVar6 = SwiftUI::Alignment::get_bottom((Alignment)pcVar5);
  *puVar10 = AVar6.unknown;
  *(MainActor **)((long)auStack_90 + -extraout_x8 + 8) = pMVar9;
  puVar7 = &DAT_100fba7f8;
  FUN_1000037f0(&DAT_100fba7f8,&DAT_100c3afd8);
  FUN_10028e9f0((long)puVar10 + (long)*(int *)(puVar7 + 0x2c),param_3,param_2);
  puVar7 = &DAT_100ec5bf0;
  _swift_allocObject(&DAT_100ec5bf0,0x50,7);
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar7 + 0x18) = param_3[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar13;
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  uVar11 = param_3[4];
  uVar13 = param_3[7];
  uVar12 = param_3[6];
  *(undefined8 *)(puVar7 + 0x38) = param_3[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar11;
  *(undefined8 *)(puVar7 + 0x48) = uVar13;
  *(undefined8 *)(puVar7 + 0x40) = uVar12;
  FUN_10028fe98(param_3,auStack_90);
  puVar8 = &DAT_100fba800;
  FUN_100016eac(&DAT_100fba800,&DAT_100fba7f0,&DAT_100c3afd0,
                PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958);
  FUN_10021f60c(param_1,FUN_100282be4,puVar7,puVar1,puVar8);
  _swift_release(puVar7);
  FUN_100005808(puVar10,&DAT_100fba7f0,&DAT_100c3afd0);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10028e9f0 | FUN_10028e9f0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010028ec60 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10028e9f0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  GeometryProxy GVar4;
  MainActor *this;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  VerticalAlignment VVar9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  State SVar18;
  State SVar19;
  Animation AVar20;
  Animation AVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  double dVar27;
  double dVar28;
  undefined8 auStack_e0 [2];
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  MainActor *local_b8;
  double local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  local_c0 = param_3;
  GVar4 = SwiftUI::GeometryProxy::typeMetadataAccessor();
  lVar23 = *(long *)(GVar4.unknown + -8);
  lVar25 = *(long *)(lVar23 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = -(lVar25 + 0xfU & 0xfffffffffffffff0);
  lVar24 = (long)&local_d0 + lVar2;
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(this,this);
  pMVar6 = pMVar5;
  FUN_100270a58();
  pMVar10 = pMVar6;
  local_b8 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x24,
               UVar7.unknown,pMVar10);
  }
  dVar27 = *(double *)(param_2 + 0x38);
  local_c8 = param_2;
  VVar9 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar8);
  *param_1 = VVar9.unknown;
  param_1[1] = dVar27;
  *(undefined1 *)(param_1 + 2) = 0;
  pMVar10 = Swift::MainActor::get_shared(this,(MainActor *)VVar9.unknown);
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x25,
               UVar11.unknown,pMVar6);
  }
  puVar12 = &DAT_100fba808;
  FUN_1000037f0(&DAT_100fba808,&DAT_100c3b000);
  local_d0 = (long)*(int *)(puVar12 + 0x2c);
  puVar12 = &DAT_100fb9f08;
  FUN_1000037f0(&DAT_100fb9f08,&DAT_100c3af00);
  _swift_initStaticObject();
  local_80 = puVar12;
  (**(code **)(lVar23 + 0x10))(lVar24,local_c0,GVar4.unknown);
  uVar22 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar26 = uVar22 + 0x10 & (uVar22 ^ 0xffffffffffffffff);
  puVar12 = &DAT_100ec5c18;
  _swift_allocObject(&DAT_100ec5c18,uVar26 + lVar25,uVar22 | 7);
  (**(code **)(lVar23 + 0x20))(puVar12 + uVar26,lVar24,GVar4.unknown);
  puVar13 = &DAT_100fb9f60;
  FUN_1000037f0(&DAT_100fb9f60,&DAT_100c3a578);
  puVar14 = &DAT_100fba810;
  FUN_1000037f0(&DAT_100fba810,&DAT_100c3b008);
  puVar15 = &DAT_100fb9f70;
  FUN_100016eac(&DAT_100fb9f70,&DAT_100fb9f60,&DAT_100c3a578,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar16 = &DAT_100fba818;
  FUN_1001eff10(&DAT_100fba818,&DAT_100fba810,&DAT_100c3b008,FUN_100290010);
  puVar17 = puVar16;
  FUN_100282d48();
  *(undefined **)((long)auStack_e0 + lVar2) = puVar17;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)param_1 + local_d0,puVar17,FUN_10028ffc4,puVar12,puVar13,
             PTR___type_metadata_for_Swift_String_100eac208,puVar14,puVar15,puVar16);
  _swift_release(pMVar10);
  lVar2 = local_c8;
  uStack_98 = *(undefined8 *)(local_c8 + 0x10);
  local_a0 = *(undefined8 *)(local_c8 + 8);
  uStack_78 = *(undefined8 *)(local_c8 + 0x10);
  local_80 = *(undefined **)(local_c8 + 8);
  SVar18.unknown = &DAT_100fb9f48;
  FUN_1000037f0(&DAT_100fb9f48,&DAT_100c3a560);
  SVar19.unknown = SVar18.unknown;
  SwiftUI::State::get_wrappedValue(SVar18);
  dVar28 = (double)(long)local_b0;
  SwiftUI::GeometryProxy::get_size((GeometryProxy)SVar19.unknown);
  puVar12 = &DAT_100fba828;
  FUN_1000037f0(&DAT_100fba828,&DAT_100c3b010);
  iVar1 = *(int *)(puVar12 + 0x24);
  *(double *)((long)param_1 + (long)iVar1) = -(dVar28 * (dVar27 + local_b0));
  ((double *)((long)param_1 + (long)iVar1))[1] = 0.0;
  uStack_a8 = *(undefined8 *)(lVar2 + 0x30);
  local_b0 = *(double *)(lVar2 + 0x28);
  uStack_78 = *(undefined8 *)(lVar2 + 0x30);
  local_80 = *(undefined **)(lVar2 + 0x28);
  SVar19.unknown = &DAT_100fb9f40;
  FUN_1000037f0(&DAT_100fb9f40,&DAT_100c3aff0);
  SwiftUI::State::get_wrappedValue(SVar19);
  AVar21.unknown = &DAT_100fba830;
  FUN_1000037f0(&DAT_100fba830,&DAT_100c3b018);
  iVar1 = *(int *)(AVar21.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar1) = local_88;
  ((undefined8 *)((long)param_1 + (long)iVar1))[1] = 0;
  AVar20 = SwiftUI::Animation::interactiveSpring(0.5,1.0,0.25,AVar21);
  SwiftUI::State::get_wrappedValue(SVar18);
  puVar12 = local_80;
  AVar21.unknown = &DAT_100fba838;
  FUN_1000037f0(&DAT_100fba838,&DAT_100c3b020);
  iVar1 = *(int *)(AVar21.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar1) = AVar20.unknown;
  ((undefined8 *)((long)param_1 + (long)iVar1))[1] = puVar12;
  AVar21 = SwiftUI::Animation::interactiveSpring(0.15,0.86,0.25,AVar21);
  SwiftUI::State::get_wrappedValue(SVar19);
  _swift_release(local_b8);
  bVar3 = (double)local_80 == 0.0;
  puVar12 = &DAT_100fba840;
  FUN_1000037f0(&DAT_100fba840,&DAT_100c3b028);
  iVar1 = *(int *)(puVar12 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar1) = AVar21.unknown;
  *(bool *)((undefined8 *)((long)param_1 + (long)iVar1) + 1) = bVar3;
  return;
}



/* Address: 0x10028ee20 | FUN_10028ee20 */

void FUN_10028ee20(undefined8 *param_1,Alignment param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  GeometryProxy GVar9;
  CGSize CVar10;
  undefined1 auStack_180 [80];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *param_3;
  uVar3 = param_3[1];
  uVar2 = param_3[2];
  puVar4 = (undefined *)param_3[3];
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  pMVar5 = pMVar6;
  FUN_100270a58();
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x26,
               UVar7.unknown,pMVar5);
  }
  _swift_bridgeObjectRetain(uVar3);
  GVar9.unknown = puVar4;
  _swift_bridgeObjectRetain();
  CVar10 = SwiftUI::GeometryProxy::get_size(GVar9);
  CVar10 = SwiftUI::GeometryProxy::get_size(CVar10.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar10.unknown);
  SwiftUI::_FrameLayout::_init(param_2);
  uStack_d8 = uStack_128;
  local_e0 = local_130;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_b8 = uStack_108;
  local_c0 = local_110;
  uStack_78 = uStack_118;
  local_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = local_110;
  uStack_88 = uStack_128;
  local_90 = local_130;
  local_100 = uVar1;
  uStack_f8 = uVar3;
  local_f0 = uVar2;
  puStack_e8 = puVar4;
  local_b0 = uVar1;
  uStack_a8 = uVar3;
  local_a0 = uVar2;
  puStack_98 = puVar4;
  FUN_100011090(&local_100,auStack_180,&DAT_100fba810,&DAT_100c3b008);
  FUN_100005808(&local_b0,&DAT_100fba810,&DAT_100c3b008);
  _swift_release(pMVar6);
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = uStack_b8;
  param_1[8] = local_c0;
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  param_1[3] = puStack_e8;
  param_1[2] = local_f0;
  return;
}



/* Address: 0x10028ef90 | FUN_10028ef90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10028ef90(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  _StringGuts _Var4;
  bool bVar5;
  MainActor *this;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  MainActor *pMVar10;
  MainActor *pMVar11;
  State SVar12;
  ID self;
  NSColor *nsColor;
  Color CVar13;
  MainActor *pMVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_1b0 [64];
  undefined *local_170;
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined2 uStack_160;
  undefined6 uStack_15e;
  undefined2 uStack_158;
  undefined6 local_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 local_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined *local_130;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined8 uStack_11e;
  undefined8 local_116;
  undefined8 uStack_10e;
  undefined8 local_106;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined6 uStack_e6;
  undefined2 local_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 local_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar1 = (undefined *)*param_2;
  puVar3 = (undefined *)param_2[1];
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar6 = Swift::MainActor::get_shared(this,this);
  pMVar7 = pMVar6;
  FUN_100270a58();
  pMVar10 = pMVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x45,
               UVar8.unknown,pMVar10);
  }
  puVar16 = (undefined *)0x0;
  ppuVar15 = &PTR_s_Incredibly_useful_100fba6f8;
  do {
    _Var2.unknown = ppuVar15[-3];
    _Var4.unknown = ppuVar15[-2];
    pMVar14 = (MainActor *)*ppuVar15;
    _swift_bridgeObjectRetain(_Var4.unknown);
    pMVar10 = pMVar14;
    _swift_bridgeObjectRetain();
    pMVar11 = Swift::MainActor::get_shared(this,pMVar10);
    pMVar10 = pMVar7;
    UVar8 = Swift::Actor::get_unownedExecutor();
    UVar9 = UVar8;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar9.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x46,
                 UVar8.unknown,pMVar10);
    }
    if ((_Var2.unknown == puVar1) && (_Var4.unknown == puVar3)) {
      _swift_bridgeObjectRelease(pMVar14);
      _swift_bridgeObjectRelease(_Var4.unknown);
      _swift_release(pMVar11);
      bVar5 = false;
      goto LAB_10028f124;
    }
    bVar5 = Swift::_stringCompareWithSmolCheck(_Var2,_Var4,(_StringComparisonResult)(__int8)puVar1);
    _swift_bridgeObjectRelease(pMVar14);
    _swift_bridgeObjectRelease(_Var4.unknown);
    _swift_release(pMVar11);
    if (bVar5) goto LAB_10028f0f0;
    ppuVar15 = ppuVar15 + 4;
    puVar16 = puVar16 + 1;
  } while (puVar16 != (undefined *)0x5);
  puVar16 = (undefined *)0x0;
LAB_10028f0f0:
  bVar5 = !bVar5;
LAB_10028f124:
  local_130 = *(undefined **)(param_3 + 8);
  uStack_128 = (undefined2)*(undefined8 *)(param_3 + 0x10);
  uStack_126 = (undefined6)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x10);
  SVar12.unknown = &DAT_100fb9f48;
  FUN_1000037f0(&DAT_100fb9f48,&DAT_100c3a560);
  SwiftUI::State::get_wrappedValue(SVar12);
  uVar17 = 0x3fd0000000000000;
  if (puVar16 != local_170) {
    uVar17 = 0x3fb999999999999a;
  }
  uVar18 = 0x3fb999999999999a;
  if (!bVar5) {
    uVar18 = uVar17;
  }
  self = NSColor::systemFillColor((ID)&_OBJC_CLASS___NSColor);
  nsColor = (NSColor *)NSColor::colorWithAlphaComponent_(self,uVar18);
  CVar13 = SwiftUI::Color::init(nsColor);
  SwiftUI::Alignment::get_center((Alignment)CVar13.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4018000000000000);
  uStack_d8 = (undefined2)uStack_a8;
  uStack_d6 = (undefined6)((ulong)uStack_a8 >> 0x10);
  local_e0 = (undefined2)local_b0;
  uStack_de = (undefined6)((ulong)local_b0 >> 0x10);
  uStack_c8 = (undefined2)uStack_98;
  uStack_c6 = (undefined6)((ulong)uStack_98 >> 0x10);
  uStack_d0 = (undefined2)uStack_a0;
  uStack_ce = (undefined6)((ulong)uStack_a0 >> 0x10);
  uStack_b8 = (undefined2)uStack_88;
  uStack_b6 = (undefined6)((ulong)uStack_88 >> 0x10);
  local_c0 = (undefined2)local_90;
  uStack_be = (undefined6)((ulong)local_90 >> 0x10);
  uStack_168 = 0x100;
  uStack_15e = uStack_de;
  uStack_158 = uStack_d8;
  uStack_166 = uStack_e6;
  uStack_160 = local_e0;
  uStack_10e = CONCAT26(uStack_c8,uStack_ce);
  local_116 = CONCAT26(uStack_d0,uStack_d6);
  uStack_14e = uStack_ce;
  uStack_148 = uStack_c8;
  local_156 = uStack_d6;
  uStack_150 = uStack_d0;
  local_106 = CONCAT26(local_c0,uStack_c6);
  uStack_13e = uStack_be;
  local_146 = uStack_c6;
  uStack_140 = local_c0;
  uStack_128 = 0x100;
  uStack_11e = CONCAT26(uStack_d8,uStack_de);
  uStack_fe = uStack_be;
  uStack_f8 = uStack_b8;
  uStack_120 = local_e0;
  local_170 = CVar13.unknown;
  uStack_138 = uStack_b8;
  uStack_136 = uStack_b6;
  local_130 = CVar13.unknown;
  uStack_f6 = uStack_b6;
  FUN_100011090(&local_170,auStack_1b0,&DAT_100fba358,&DAT_100c3afb0);
  FUN_100005808(&local_130,&DAT_100fba358,&DAT_100c3afb0);
  _swift_release(pMVar6);
  param_1[1] = CONCAT62(uStack_166,uStack_168);
  *param_1 = local_170;
  param_1[3] = CONCAT62(local_156,uStack_158);
  param_1[2] = CONCAT62(uStack_15e,uStack_160);
  param_1[5] = CONCAT62(local_146,uStack_148);
  param_1[4] = CONCAT62(uStack_14e,uStack_150);
  param_1[7] = CONCAT62(uStack_136,uStack_138);
  param_1[6] = CONCAT62(uStack_13e,uStack_140);
  return;
}



/* Address: 0x10028f2a8 | FUN_10028f2a8 */

void FUN_10028f2a8(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  Alignment AVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  local_40 = unaff_x20[4];
  uStack_28 = unaff_x20[7];
  uStack_30 = unaff_x20[6];
  AVar1 = SwiftUI::Alignment::get_bottom(param_2);
  *param_1 = AVar1.unknown;
  param_1[1] = param_3;
  puVar2 = &DAT_100fba7b8;
  FUN_1000037f0(&DAT_100fba7b8,&DAT_100c3af90);
  FUN_10028e504((long)param_1 + (long)*(int *)(puVar2 + 0x2c),&local_60);
  return;
}



/* Address: 0x10028f308 | FUN_10028f308 */

void FUN_10028f308(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Set _all;
  Alignment AVar4;
  undefined8 uVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  HVar2 = SwiftUI::HorizontalAlignment::get_center(param_6.unknown);
  *param_1 = HVar2.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_100fb9fc0;
  FUN_1000037f0(&DAT_100fb9fc0,&DAT_100c3a610);
  FUN_10028f468((long)param_1 + (long)*(int *)(puVar3 + 0x2c),param_6.unknown,param_7,param_8,
                param_9);
  _all = SwiftUI::Edge::Set::get_horizontal(param_6);
  uVar5 = 0x403e000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  AVar4.unknown = &DAT_100fb9fc8;
  FUN_1000037f0();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar4.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar4);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar3 = &DAT_100fb9fd0;
  FUN_1000037f0(&DAT_100fb9fd0,&DAT_100c3a620);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  param_1[9] = uStack_88;
  param_1[8] = local_90;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  param_1[0xd] = uStack_68;
  param_1[0xc] = local_70;
  param_1[1] = uStack_c8;
  *param_1 = local_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  param_1[5] = uStack_a8;
  param_1[4] = local_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  return;
}



/* Address: 0x10028f468 | FUN_10028f468 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010028f65c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10028f468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined *param_8,
                  undefined8 param_9)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  MainActor *this;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  VerticalAlignment VVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  Text TVar15;
  Font FVar16;
  Font FVar17;
  Text TVar18;
  Set _all;
  Text TVar19;
  Color CVar20;
  Text TVar21;
  Set SVar22;
  undefined8 uVar23;
  long extraout_x8;
  long lVar24;
  long extraout_x12;
  undefined8 *puVar25;
  undefined8 auStack_510 [2];
  MainActor *local_500 [4];
  long local_4e0;
  MainActor *local_4d8;
  long local_4d0;
  undefined1 auStack_4c8 [104];
  undefined *local_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined *puStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined1 uStack_418;
  undefined7 uStack_417;
  undefined1 uStack_410;
  undefined8 uStack_40f;
  undefined *local_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  MainActor *pMStack_3e8;
  undefined8 local_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined7 local_3c7;
  undefined1 uStack_3c0;
  undefined7 uStack_3bf;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 local_3a0;
  undefined *local_390;
  undefined *puStack_388;
  undefined1 local_380;
  undefined7 uStack_37f;
  MainActor *local_378;
  undefined8 local_370;
  undefined *puStack_368;
  undefined1 local_360;
  undefined7 uStack_35f;
  undefined1 local_358;
  undefined7 uStack_357;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined1 local_330;
  undefined *local_328;
  undefined *puStack_320;
  undefined1 local_318;
  MainActor *local_310;
  undefined8 uStack_308;
  undefined *local_300;
  undefined1 local_2f8;
  undefined1 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  undefined *local_2c0;
  undefined *puStack_2b8;
  undefined1 local_2b0;
  undefined7 uStack_2af;
  undefined *puStack_2a8;
  undefined1 local_2a0;
  undefined7 uStack_29f;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 local_280;
  undefined7 uStack_27f;
  undefined1 local_278;
  undefined *local_270;
  undefined *local_268;
  undefined1 local_260;
  undefined *local_258;
  undefined1 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined *local_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 local_1d0;
  undefined7 uStack_1cf;
  undefined1 local_1c8;
  undefined *local_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined1 local_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  MainActor *pMStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  
  puVar3 = &DAT_100fb9ff0;
  local_500[1] = (MainActor *)param_8;
  local_500[2] = (MainActor *)param_9;
  local_4e0 = param_1;
  FUN_1000037f0(&DAT_100fb9ff0,&DAT_100c3b0b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar24 = (long)local_500 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_4d0 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar25 = (undefined8 *)(lVar24 - extraout_x12);
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(this,this);
  pMVar5 = pMVar4;
  FUN_100270a58();
  pMVar9 = pMVar5;
  local_4d8 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar7 = (char *)UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = "PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x72,
               UVar6.unknown,pMVar9);
  }
  VVar8 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar7);
  *puVar25 = VVar8.unknown;
  puVar25[1] = 0;
  *(undefined1 *)(puVar25 + 2) = 0;
  pMVar9 = Swift::MainActor::get_shared(this,(MainActor *)VVar8.unknown);
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x89,
               UVar10.unknown,pMVar5);
  }
  puVar3 = &DAT_100fb9ff8;
  FUN_1000037f0(&DAT_100fb9ff8,&DAT_100c3a660);
  iVar1 = *(int *)(puVar3 + 0x2c);
  puStack_158 = (undefined *)0x5;
  local_160 = (undefined *)0x1;
  puVar3 = &DAT_100c3b0c8;
  _swift_getKeyPath(&DAT_100c3b0c8);
  puVar11 = &DAT_100fba000;
  FUN_1000037f0(&DAT_100fba000,&DAT_100c3b0e0);
  puVar12 = &DAT_100fba008;
  FUN_1000037f0(&DAT_100fba008,&DAT_100c3a690);
  puVar13 = puVar12;
  FUN_100282f08();
  puVar14 = puVar13;
  FUN_100282fc0();
  puVar25[-2] = puVar14;
  uVar23 = 0;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)puVar25 + (long)iVar1,puVar14,puVar3,FUN_10028fbc8,0,puVar11,puVar12,puVar13,
             PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708);
  _swift_release();
  local_160 = param_6;
  puStack_158 = (undefined *)param_7;
  FUN_1002538a0();
  local_500[0] = pMVar9;
  _swift_bridgeObjectRetain(param_7);
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar15 = SwiftUI::Text::_init();
  FVar16 = SwiftUI::Font::get_title(TVar15.unknown);
  FVar17 = SwiftUI::Font::bold(FVar16);
  local_500[3] = (MainActor *)puVar25;
  _swift_release(FVar16.unknown);
  TVar19 = TVar15;
  puVar11 = puVar3;
  pMVar5 = pMVar9;
  TVar18 = SwiftUI::Text::_font(FVar17.unknown);
  _swift_release(FVar17.unknown);
  FUN_100016d74(TVar15.unknown,puVar3,pMVar9);
  _swift_bridgeObjectRelease(uVar23);
  SVar22.unknown = &DAT_100c3b108;
  _swift_getKeyPath();
  _all = SwiftUI::Edge::Set::get_top(SVar22);
  uVar23 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_380 = SUB81(puVar11,0);
  local_370 = 0x3feb333333333333;
  local_360 = 1;
  local_358 = SUB81(_all.unknown,0);
  local_330 = 0;
  uStack_308 = 0x3feb333333333333;
  local_2f8 = 1;
  local_2c8 = 0;
  puVar25 = (undefined8 *)&DAT_100c3a6e0;
  local_390 = TVar18.unknown;
  puStack_388 = TVar19.unknown;
  local_378 = pMVar5;
  puStack_368 = SVar22.unknown;
  local_350 = uVar23;
  uStack_348 = param_3;
  local_340 = param_4;
  uStack_338 = param_5;
  local_328 = TVar18.unknown;
  puStack_320 = TVar19.unknown;
  local_318 = local_380;
  local_310 = pMVar5;
  local_300 = SVar22.unknown;
  local_2f0 = local_358;
  local_2e8 = uVar23;
  local_2e0 = param_3;
  local_2d8 = param_4;
  local_2d0 = param_5;
  FUN_100011090(&local_390,&local_160,&DAT_100fba058);
  FUN_100005808(&local_328,&DAT_100fba058,&DAT_100c3a6e0);
  local_160 = local_500[1];
  puStack_158 = local_500[2];
  _swift_bridgeObjectRetain();
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  pMVar5 = local_500[0];
  TVar19 = SwiftUI::Text::_init();
  if (DAT_100fba858 != -1) {
    _swift_once(&DAT_100fba858,FUN_10028fd54);
  }
  TVar15 = TVar19;
  puVar11 = puVar3;
  SVar22.unknown = pMVar5;
  TVar18 = SwiftUI::Text::_font(DAT_100fba860);
  FUN_100016d74(TVar19.unknown,puVar3,pMVar5);
  _swift_bridgeObjectRelease();
  FUN_100218c68();
  CVar20 = SwiftUI::Color::init((NSColor *)*puVar25);
  TVar19 = TVar18;
  puVar12 = TVar15.unknown;
  puVar13 = puVar11;
  TVar21 = SwiftUI::Text::_foregroundColor(CVar20.unknown);
  _swift_release(CVar20.unknown);
  FUN_100016d74(TVar18.unknown,TVar15.unknown,puVar11);
  _swift_bridgeObjectRelease();
  SVar22 = SwiftUI::Edge::Set::get_top(SVar22);
  uVar23 = 0x4000000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar22.unknown);
  uStack_288 = (undefined1)param_4;
  uStack_287 = (undefined7)((ulong)param_4 >> 8);
  local_280 = (undefined1)param_5;
  uStack_27f = (undefined7)((ulong)param_5 >> 8);
  local_278 = 0;
  puVar3 = &DAT_100c3b108;
  local_2c0 = TVar21.unknown;
  puStack_2b8 = TVar19.unknown;
  local_2b0 = (char)puVar12;
  puStack_2a8 = puVar13;
  local_2a0 = (char)SVar22.unknown;
  local_298 = uVar23;
  local_290 = param_3;
  _swift_getKeyPath();
  uStack_3f0 = CONCAT71(uStack_2af,local_2b0);
  local_3e0 = CONCAT71(uStack_29f,local_2a0);
  puStack_3d8 = (undefined *)local_298;
  uStack_3c8 = uStack_288;
  uStack_3d0 = local_290;
  uStack_3bf = uStack_27f;
  uStack_3b8 = local_278;
  local_3c7 = uStack_287;
  uStack_3c0 = local_280;
  puStack_3f8 = puStack_2b8;
  local_400 = local_2c0;
  pMStack_3e8 = (MainActor *)puStack_2a8;
  local_228 = 0;
  local_270 = TVar21.unknown;
  local_268 = TVar19.unknown;
  local_260 = (char)puVar12;
  local_258 = puVar13;
  local_250 = (char)SVar22.unknown;
  local_248 = uVar23;
  local_240 = param_3;
  local_238 = param_4;
  local_230 = param_5;
  FUN_100011090(&local_2c0,&local_160,&DAT_100fb90e8,&DAT_100c397b0);
  FUN_100005808(&local_270,&DAT_100fb90e8,&DAT_100c397b0);
  uStack_1e8 = CONCAT71(local_3c7,uStack_3c8);
  uStack_1f8 = puStack_3d8;
  local_200 = local_3e0;
  uStack_1f0 = uStack_3d0;
  uStack_178 = CONCAT71(uStack_3b7,uStack_3b8);
  local_1e0 = CONCAT71(uStack_3bf,uStack_3c0);
  uStack_1d8 = uStack_3b8;
  uStack_1d7 = uStack_3b7;
  puStack_218 = puStack_3f8;
  local_220 = local_400;
  puStack_208 = pMStack_3e8;
  uStack_210 = uStack_3f0;
  local_1d0 = SUB81(puVar3,0);
  uStack_1cf = (undefined7)((ulong)puVar3 >> 8);
  local_1c8 = 1;
  uStack_198 = puStack_3d8;
  local_1a0 = local_3e0;
  uStack_190 = uStack_3d0;
  puStack_1b8 = puStack_3f8;
  local_1c0 = local_400;
  puStack_1a8 = pMStack_3e8;
  uStack_1b0 = uStack_3f0;
  local_168 = 1;
  uStack_188 = uStack_1e8;
  local_180 = local_1e0;
  local_170 = puVar3;
  FUN_100011090(&local_220,&local_160,&DAT_100fba070,&DAT_100c3a6f0);
  FUN_100005808(&local_1c0,&DAT_100fba070,&DAT_100c3a6f0);
  lVar2 = local_4d0;
  pMVar5 = local_500[3];
  FUN_100011090(local_500[3],local_4d0,&DAT_100fb9ff0,&DAT_100c3b0b0);
  lVar24 = local_4e0;
  uStack_3b8 = (undefined1)uStack_348;
  uStack_3b7 = (undefined7)((ulong)uStack_348 >> 8);
  uStack_3c0 = (undefined1)local_350;
  uStack_3bf = (undefined7)((ulong)local_350 >> 8);
  uStack_3a8 = uStack_338;
  uStack_3b0 = local_340;
  local_3a0 = local_330;
  uStack_3f0 = CONCAT71(uStack_37f,local_380);
  puStack_3f8 = puStack_388;
  local_400 = local_390;
  pMStack_3e8 = local_378;
  uStack_3d0 = CONCAT71(uStack_35f,local_360);
  puStack_3d8 = puStack_368;
  local_3e0 = local_370;
  uStack_3c8 = local_358;
  local_3c7 = uStack_357;
  uStack_438 = uStack_1f8;
  local_440 = local_200;
  uStack_428 = uStack_1e8;
  uStack_430 = uStack_1f0;
  uStack_418 = uStack_1d8;
  local_420 = local_1e0;
  uStack_40f = CONCAT17(local_1c8,uStack_1cf);
  uStack_417 = uStack_1d7;
  uStack_410 = local_1d0;
  puStack_458 = puStack_218;
  local_460 = local_220;
  puStack_448 = puStack_208;
  uStack_450 = uStack_210;
  FUN_100011090(lVar2,local_4e0,&DAT_100fb9ff0,&DAT_100c3b0b0);
  puVar3 = &DAT_100fba078;
  FUN_1000037f0(&DAT_100fba078,&DAT_100c3b140);
  puVar25 = (undefined8 *)(lVar24 + *(int *)(puVar3 + 0x30));
  uStack_118 = CONCAT71(uStack_3b7,uStack_3b8);
  local_120 = CONCAT71(uStack_3bf,uStack_3c0);
  uStack_108 = uStack_3a8;
  uStack_110 = uStack_3b0;
  local_100 = local_3a0;
  puStack_158 = puStack_3f8;
  local_160 = local_400;
  pMStack_148 = pMStack_3e8;
  uStack_150 = uStack_3f0;
  uStack_128 = CONCAT71(local_3c7,uStack_3c8);
  puStack_138 = puStack_3d8;
  local_140 = local_3e0;
  uStack_130 = uStack_3d0;
  puVar25[1] = puStack_3f8;
  *puVar25 = local_400;
  puVar25[3] = pMStack_3e8;
  puVar25[2] = uStack_3f0;
  puVar25[9] = uStack_118;
  puVar25[8] = local_120;
  puVar25[0xb] = uStack_3a8;
  puVar25[10] = uStack_3b0;
  puVar25[5] = puStack_3d8;
  puVar25[4] = local_3e0;
  puVar25[7] = uStack_128;
  puVar25[6] = uStack_3d0;
  *(undefined1 *)(puVar25 + 0xc) = local_3a0;
  puVar25 = (undefined8 *)(lVar24 + *(int *)(puVar3 + 0x40));
  uStack_9f = uStack_40f;
  uStack_a0 = uStack_410;
  uStack_c8 = uStack_438;
  local_d0 = local_440;
  uStack_b8 = uStack_428;
  uStack_c0 = uStack_430;
  puStack_e8 = puStack_458;
  local_f0 = local_460;
  puStack_d8 = puStack_448;
  uStack_e0 = uStack_450;
  uStack_a8 = uStack_418;
  uStack_b0 = local_420;
  puVar25[7] = uStack_428;
  puVar25[6] = uStack_430;
  puVar25[9] = CONCAT71(uStack_417,uStack_418);
  puVar25[8] = local_420;
  puVar25[3] = puStack_448;
  puVar25[2] = uStack_450;
  puVar25[5] = uStack_438;
  puVar25[4] = local_440;
  *(undefined8 *)((long)puVar25 + 0x51) = uStack_40f;
  *(ulong *)((long)puVar25 + 0x49) = CONCAT17(uStack_410,uStack_417);
  puVar25[1] = puStack_458;
  *puVar25 = local_460;
  iVar1 = *(int *)(puVar3 + 0x50);
  *(undefined8 *)(lVar24 + iVar1) = 0;
  *(undefined1 *)((undefined8 *)(lVar24 + iVar1) + 1) = 1;
  FUN_100011090(&local_160,auStack_4c8,&DAT_100fba058,&DAT_100c3a6e0);
  FUN_100011090(&local_f0,auStack_4c8,&DAT_100fba070,&DAT_100c3a6f0);
  FUN_100005808(pMVar5,&DAT_100fb9ff0,&DAT_100c3b0b0);
  FUN_100005808(&local_460,&DAT_100fba070,&DAT_100c3a6f0);
  FUN_100005808(&local_400,&DAT_100fba058,&DAT_100c3a6e0);
  FUN_100005808(lVar2,&DAT_100fb9ff0,&DAT_100c3b0b0);
  _swift_release(local_4d8);
  return;
}



/* Address: 0x10028fbc8 | FUN_10028fbc8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10028fbc8(undefined8 *param_1)

{
  String systemName;
  undefined8 uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Image IVar6;
  undefined *puVar7;
  NSColor *pNVar8;
  Color CVar9;
  undefined *puVar10;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100270a58();
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.ReviewsView.swift",0x3f,1,0x8a,
               UVar4.unknown,pMVar2);
  }
  FUN_10020d970();
  systemName = *(String *)pcVar5;
  _swift_bridgeObjectRetain(((String *)pcVar5)->bridgeObject);
  IVar6 = SwiftUI::Image::init(systemName);
  if (DAT_100fba868 != -1) {
    _swift_once(&DAT_100fba868,FUN_10028fd14);
  }
  uVar1 = DAT_100fba870;
  puVar7 = &DAT_100c3b148;
  _swift_getKeyPath();
  _swift_retain(uVar1);
  pNVar8 = (NSColor *)NSColor::systemOrangeColor((ID)&_OBJC_CLASS___NSColor);
  CVar9 = SwiftUI::Color::init(pNVar8);
  puVar10 = &DAT_100c3b178;
  _swift_getKeyPath();
  _swift_release(pMVar3);
  *param_1 = IVar6.unknown;
  param_1[1] = puVar7;
  param_1[2] = uVar1;
  param_1[3] = puVar10;
  param_1[4] = CVar9.unknown;
  return;
}



/* Address: 0x10028fd08 | FUN_10028fd08 */

void FUN_10028fd08(void)

{
  undefined8 *unaff_x20;
  
  FUN_10028f308(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x10028fd14 | FUN_10028fd14 */

void FUN_10028fd14(Font param_1,Font param_2)

{
  Font FVar1;
  Font FVar2;
  
  FVar1 = SwiftUI::Font::get_title2(param_1);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar1.unknown);
  FVar2 = SwiftUI::Font::weight(FVar1.unknown,param_2);
  _swift_release(FVar1.unknown);
  DAT_100fba870 = FVar2.unknown;
  return;
}



/* Address: 0x10028fd54 | FUN_10028fd54 */

void FUN_10028fd54(Font param_1)

{
  DAT_100fba860 = SwiftUI::Font::get_callout(param_1);
  return;
}



/* Address: 0x10028fd70 | FUN_10028fd70 */

undefined1  [16] FUN_10028fd70(void)

{
  return ZEXT816(0x100ec5b68);
}



/* Address: 0x10028fd80 | thunk_FUN_10028fd84 */

void thunk_FUN_10028fd84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fba790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba788;
  FUN_100005c24(&DAT_100fba788,&DAT_100c3af10);
  puVar2 = &DAT_100fba798;
  FUN_1001eff10(&DAT_100fba798,&DAT_100fba780,&DAT_100c3af08,FUN_10028fe3c);
  puVar3 = &DAT_100fba7a8;
  FUN_100016eac(&DAT_100fba7a8,&DAT_100fba7b0,&DAT_100c3af38,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fba790 = puVar4;
  return;
}



/* Address: 0x10028fd84 | FUN_10028fd84 */

void FUN_10028fd84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba788;
  FUN_100005c24(&DAT_100fba788,&DAT_100c3af10);
  puVar2 = &DAT_100fba798;
  FUN_1001eff10(&DAT_100fba798,&DAT_100fba780,&DAT_100c3af08,FUN_10028fe3c);
  puVar3 = &DAT_100fba7a8;
  FUN_100016eac(&DAT_100fba7a8,&DAT_100fba7b0,&DAT_100c3af38,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba790 = puVar4;
  return;
}



/* Address: 0x10028fe3c | FUN_10028fe3c */

void FUN_10028fe3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fba7a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3af40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3af40,&DAT_100ec5b68);
  DAT_100fba7a0 = pTVar1;
  return;
}



/* Address: 0x10028fe4c | FUN_10028fe4c */

void FUN_10028fe4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3af40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3af40,&DAT_100ec5b68);
  DAT_100fba7a0 = pTVar1;
  return;
}



/* Address: 0x10028fe7c | FUN_10028fe7c */

void FUN_10028fe7c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa69c,1);
  return;
}



/* Address: 0x10028fe8c | thunk_FUN_100282ba8 */

void thunk_FUN_100282ba8(void)

{
  FUN_100282ba8();
  return;
}



/* Address: 0x10028fe90 | FUN_10028fe90 */

void FUN_10028fe90(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10028e840(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x10028fe98 | FUN_10028fe98 */

undefined8 FUN_10028fe98(undefined8 param_1,undefined8 param_2)

{
  FUN_1002828d4(param_2,param_1,&DAT_100ec5b68);
  return param_2;
}



/* Address: 0x10028fecc | FUN_10028fecc */

void FUN_10028fecc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10028ef90(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x10028fed4 | FUN_10028fed4 */

void FUN_10028fed4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba7d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba358;
  FUN_100005c24(&DAT_100fba358,&DAT_100c3afb0);
  puVar2 = &DAT_100fba7d8;
  FUN_100016eac(&DAT_100fba7d8,&DAT_100fba7e0,&DAT_100c3afb8,
                PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100eaa5d8);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba7d0 = puVar3;
  return;
}



/* Address: 0x10028ff6c | FUN_10028ff6c */

void FUN_10028ff6c(void)

{
  GeometryProxy GVar1;
  ulong uVar2;
  long unaff_x20;
  
  GVar1 = SwiftUI::GeometryProxy::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(GVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(GVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),GVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x10028ffc4 | FUN_10028ffc4 */

void FUN_10028ffc4(undefined8 param_1,undefined8 param_2)

{
  GeometryProxy GVar1;
  long unaff_x20;
  
  GVar1 = SwiftUI::GeometryProxy::typeMetadataAccessor();
  FUN_10028ee20(param_1,param_2,
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(GVar1.unknown + -8) + 0x50) + 0x10 &
                ((ulong)*(byte *)(*(long *)(GVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100290010 | FUN_100290010 */

void FUN_100290010(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fba820 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3b048;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3b048,&DAT_100ec5c98);
  DAT_100fba820 = pTVar1;
  return;
}



/* Address: 0x100290020 | FUN_100290020 */

void FUN_100290020(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3b048;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3b048,&DAT_100ec5c98);
  DAT_100fba820 = pTVar1;
  return;
}



/* Address: 0x100290050 | FUN_100290050 */

undefined1  [16] FUN_100290050(void)

{
  return ZEXT816(0x100ec5c98);
}



/* Address: 0x100290060 | FUN_100290060 */

void FUN_100290060(void)

{
  FUN_100016eac(&DAT_100fba848,&DAT_100fba850,&DAT_100c3b040,
                PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958);
  return;
}



/* Address: 0x100290094 | FUN_100290094 */

void FUN_100290094(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa6c4,1);
  return;
}



/* Address: 0x1002900a4 | thunk_FUN_10009cc1c */

void thunk_FUN_10009cc1c(void)

{
  FUN_10009cc1c();
  return;
}



/* Address: 0x1002900a8 | thunk_FUN_10009cc44 */

void thunk_FUN_10009cc44(void)

{
  FUN_10009cc44();
  return;
}



/* Address: 0x1002900ac | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x1002900b0 | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x1002900b4 | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x1002900b8 | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x1002900bc | thunk_FUN_1002831a4 */

void thunk_FUN_1002831a4(void)

{
  FUN_1002831a4();
  return;
}



/* Address: 0x1002900c0 | thunk_FUN_100282ba8 */

void thunk_FUN_100282ba8(void)

{
  thunk_FUN_100282ba8();
  return;
}



/* Address: 0x1002900c4 | thunk_FUN_100282ba8 */

void thunk_FUN_100282ba8(void)

{
  thunk_FUN_100282ba8();
  return;
}



/* Address: 0x1002900c8 | FUN_1002900c8 */

long * FUN_1002900c8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  DateComponents DVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  Product PVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar7 = *param_2;
  *param_1 = lVar7;
  if ((uVar5 >> 0x11 & 1) == 0) {
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar15 = puVar2[1];
    uVar19 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar19;
    _swift_bridgeObjectRetain();
    _swift_retain(uVar19);
    _swift_retain(uVar15);
    puVar8 = &DAT_100fba878;
    FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
    puVar3 = (undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x20));
    puVar4 = (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x20));
    *puVar3 = *puVar4;
    lVar7 = 0;
    FUN_1002abb94();
    iVar6 = *(int *)(lVar7 + 0x14);
    DVar9 = Foundation::DateComponents::typeMetadataAccessor();
    lVar17 = *(long *)(DVar9.unknown + -8);
    puVar10 = puVar4 + iVar6;
    (**(code **)(lVar17 + 0x30))(puVar10,1,DVar9.unknown);
    if ((int)puVar10 == 0) {
      (**(code **)(lVar17 + 0x10))(puVar3 + iVar6,puVar4 + iVar6,DVar9.unknown);
      (**(code **)(lVar17 + 0x38))(puVar3 + iVar6,0,1,DVar9.unknown);
    }
    else {
      puVar8 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy(puVar3 + iVar6,puVar4 + iVar6,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)(puVar3 + *(int *)(lVar7 + 0x18));
    puVar2 = (undefined8 *)(puVar4 + *(int *)(lVar7 + 0x18));
    lVar11 = 0;
    FUN_1002abbf0();
    lVar16 = *(long *)(lVar11 + -8);
    puVar12 = puVar2;
    (**(code **)(lVar16 + 0x30))(puVar2,1,lVar11);
    if ((int)puVar12 == 0) {
      puVar12 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar11);
      if (((int)puVar12 == 2) || ((int)puVar12 == 1)) {
        uVar15 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar15;
        _swift_bridgeObjectRetain();
        puVar8 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar18 = *(code **)(lVar17 + 0x10);
        (*pcVar18)((long)puVar1 + (long)*(int *)(puVar8 + 0x30),
                   (long)puVar2 + (long)*(int *)(puVar8 + 0x30),DVar9.unknown);
        (*pcVar18)((long)puVar1 + (long)*(int *)(puVar8 + 0x40),
                   (long)puVar2 + (long)*(int *)(puVar8 + 0x40),DVar9.unknown);
      }
      else {
        (**(code **)(lVar17 + 0x10))(puVar1,puVar2,DVar9.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar11,(ulong)puVar12 & 0xffffffff);
      (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar11);
    }
    else {
      puVar8 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar6 = *(int *)(lVar7 + 0x1c);
    PVar13 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar13.unknown + -8) + 0x10))
              (puVar3 + iVar6,puVar4 + iVar6,PVar13.unknown);
  }
  else {
    uVar14 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar7 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100290360 | FUN_100290360 */

void FUN_100290360(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  DateComponents DVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  Product PVar9;
  long lVar10;
  code *pcVar11;
  
  _swift_bridgeObjectRelease(*param_1);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x14));
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  puVar3 = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
  iVar1 = *(int *)(puVar3 + 0x20);
  lVar4 = 0;
  FUN_1002abb94();
  iVar2 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar10 = *(long *)(DVar5.unknown + -8);
  lVar6 = (long)param_1 + (long)iVar2 + (long)iVar1;
  (**(code **)(lVar10 + 0x30))(lVar6,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 8))((long)param_1 + (long)iVar2 + (long)iVar1,DVar5.unknown);
  }
  lVar6 = (long)param_1 + (long)*(int *)(lVar4 + 0x18) + (long)iVar1;
  lVar7 = 0;
  FUN_1002abbf0();
  lVar8 = lVar6;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar6,1,lVar7);
  if ((int)lVar8 == 0) {
    lVar8 = lVar6;
    _swift_getEnumCaseMultiPayload(lVar6,lVar7);
    iVar2 = (int)lVar8;
    if ((iVar2 == 2) || (iVar2 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
      puVar3 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(lVar6 + *(int *)(puVar3 + 0x30),DVar5.unknown);
      (*pcVar11)(lVar6 + *(int *)(puVar3 + 0x40),DVar5.unknown);
    }
    else if (iVar2 == 0) {
      (**(code **)(lVar10 + 8))(lVar6,DVar5.unknown);
    }
  }
  iVar2 = *(int *)(lVar4 + 0x1c);
  PVar9 = StoreKit::Product::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001002904d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(PVar9.unknown + -8) + 8))
            ((long)param_1 + (long)iVar2 + (long)iVar1,PVar9.unknown);
  return;
}



/* Address: 0x1002904d8 | FUN_1002904d8 */

undefined8 * FUN_1002904d8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  DateComponents DVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  Product PVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar13 = param_2[1];
  uVar17 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar17;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar17);
  _swift_retain(uVar13);
  puVar6 = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
  puVar2 = (undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x20));
  puVar3 = (undefined1 *)((long)param_2 + (long)*(int *)(puVar6 + 0x20));
  *puVar2 = *puVar3;
  lVar7 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar7 + 0x14);
  DVar8 = Foundation::DateComponents::typeMetadataAccessor();
  lVar15 = *(long *)(DVar8.unknown + -8);
  puVar9 = puVar3 + iVar5;
  (**(code **)(lVar15 + 0x30))(puVar9,1,DVar8.unknown);
  if ((int)puVar9 == 0) {
    (**(code **)(lVar15 + 0x10))(puVar2 + iVar5,puVar3 + iVar5,DVar8.unknown);
    (**(code **)(lVar15 + 0x38))(puVar2 + iVar5,0,1,DVar8.unknown);
  }
  else {
    puVar6 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar2 + iVar5,puVar3 + iVar5,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(puVar2 + *(int *)(lVar7 + 0x18));
  puVar4 = (undefined8 *)(puVar3 + *(int *)(lVar7 + 0x18));
  lVar10 = 0;
  FUN_1002abbf0();
  lVar14 = *(long *)(lVar10 + -8);
  puVar11 = puVar4;
  (**(code **)(lVar14 + 0x30))(puVar4,1,lVar10);
  if ((int)puVar11 == 0) {
    puVar11 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar10);
    if (((int)puVar11 == 2) || ((int)puVar11 == 1)) {
      uVar13 = puVar4[1];
      *puVar1 = *puVar4;
      puVar1[1] = uVar13;
      _swift_bridgeObjectRetain();
      puVar6 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar16 = *(code **)(lVar15 + 0x10);
      (*pcVar16)((long)puVar1 + (long)*(int *)(puVar6 + 0x30),
                 (long)puVar4 + (long)*(int *)(puVar6 + 0x30),DVar8.unknown);
      (*pcVar16)((long)puVar1 + (long)*(int *)(puVar6 + 0x40),
                 (long)puVar4 + (long)*(int *)(puVar6 + 0x40),DVar8.unknown);
    }
    else {
      (**(code **)(lVar15 + 0x10))(puVar1,puVar4,DVar8.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar10,(ulong)puVar11 & 0xffffffff);
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar10);
  }
  else {
    puVar6 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar1,puVar4,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar7 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x10))(puVar2 + iVar5,puVar3 + iVar5,PVar12.unknown)
  ;
  return param_1;
}



/* Address: 0x10029074c | FUN_10029074c */

undefined8 * FUN_10029074c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  DateComponents DVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Product PVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  
  uVar16 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar16);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar16 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar16);
  uVar16 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar16);
  puVar6 = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
  puVar3 = (undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x20));
  puVar4 = (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x20));
  *puVar3 = *puVar4;
  lVar7 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar7 + 0x14);
  DVar8 = Foundation::DateComponents::typeMetadataAccessor();
  lVar18 = *(long *)(DVar8.unknown + -8);
  pcVar17 = *(code **)(lVar18 + 0x30);
  puVar9 = puVar3 + iVar5;
  (*pcVar17)(puVar9,1,DVar8.unknown);
  puVar10 = puVar4 + iVar5;
  (*pcVar17)(puVar10,1,DVar8.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar18 + 8))(puVar3 + iVar5,DVar8.unknown);
      goto LAB_100290890;
    }
    (**(code **)(lVar18 + 0x18))(puVar3 + iVar5,puVar4 + iVar5,DVar8.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar18 + 0x10))(puVar3 + iVar5,puVar4 + iVar5,DVar8.unknown);
    (**(code **)(lVar18 + 0x38))(puVar3 + iVar5,0,1,DVar8.unknown);
  }
  else {
LAB_100290890:
    puVar6 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar3 + iVar5,puVar4 + iVar5,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(puVar3 + *(int *)(lVar7 + 0x18));
  puVar2 = (undefined8 *)(puVar4 + *(int *)(lVar7 + 0x18));
  lVar11 = 0;
  FUN_1002abbf0();
  lVar15 = *(long *)(lVar11 + -8);
  pcVar17 = *(code **)(lVar15 + 0x30);
  puVar12 = puVar1;
  (*pcVar17)(puVar1,1,lVar11);
  puVar13 = puVar2;
  (*pcVar17)(puVar2,1,lVar11);
  if ((int)puVar12 == 0) {
    if ((int)puVar13 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar1,FUN_1002abbf0);
        puVar12 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar11);
        if ((int)puVar12 == 2) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          _swift_bridgeObjectRetain();
          puVar6 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x10);
          (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x30)),DVar8.unknown);
          (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x40)),DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar11,2);
        }
        else if ((int)puVar12 == 1) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          _swift_bridgeObjectRetain();
          puVar6 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x10);
          (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x30)),DVar8.unknown);
          (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x40)),DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar11,1);
        }
        else {
          (**(code **)(lVar18 + 0x10))(puVar1,puVar2,DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar11,0);
        }
      }
      goto LAB_100290ad0;
    }
    FUN_10005241c(puVar1,FUN_1002abbf0);
  }
  else if ((int)puVar13 == 0) {
    puVar12 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar11);
    if (((int)puVar12 == 2) || ((int)puVar12 == 1)) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      puVar6 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar17 = *(code **)(lVar18 + 0x10);
      (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x30)),DVar8.unknown);
      (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x40)),DVar8.unknown);
    }
    else {
      (**(code **)(lVar18 + 0x10))(puVar1,puVar2,DVar8.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar11,puVar12);
    (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar11);
    goto LAB_100290ad0;
  }
  puVar6 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_100290ad0:
  iVar5 = *(int *)(lVar7 + 0x1c);
  PVar14 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar14.unknown + -8) + 0x18))(puVar3 + iVar5,puVar4 + iVar5,PVar14.unknown)
  ;
  return param_1;
}



/* Address: 0x100290bb4 | FUN_100290bb4 */

undefined8 * FUN_100290bb4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  DateComponents DVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  Product PVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar16 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar16;
  puVar6 = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
  puVar2 = (undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x20));
  puVar3 = (undefined1 *)((long)param_2 + (long)*(int *)(puVar6 + 0x20));
  *puVar2 = *puVar3;
  lVar7 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar7 + 0x14);
  DVar8 = Foundation::DateComponents::typeMetadataAccessor();
  lVar14 = *(long *)(DVar8.unknown + -8);
  puVar9 = puVar3 + iVar5;
  (**(code **)(lVar14 + 0x30))(puVar9,1,DVar8.unknown);
  if ((int)puVar9 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar2 + iVar5,puVar3 + iVar5,DVar8.unknown);
    (**(code **)(lVar14 + 0x38))(puVar2 + iVar5,0,1,DVar8.unknown);
  }
  else {
    puVar6 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar2 + iVar5,puVar3 + iVar5,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(puVar2 + *(int *)(lVar7 + 0x18));
  puVar4 = (undefined8 *)(puVar3 + *(int *)(lVar7 + 0x18));
  lVar10 = 0;
  FUN_1002abbf0();
  lVar13 = *(long *)(lVar10 + -8);
  puVar11 = puVar4;
  (**(code **)(lVar13 + 0x30))(puVar4,1,lVar10);
  if ((int)puVar11 == 0) {
    puVar11 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar10);
    if (((int)puVar11 == 2) || ((int)puVar11 == 1)) {
      uVar16 = *puVar4;
      puVar1[1] = puVar4[1];
      *puVar1 = uVar16;
      puVar6 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar15 = *(code **)(lVar14 + 0x20);
      (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar6 + 0x30)),DVar8.unknown);
      (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar6 + 0x40)),DVar8.unknown);
    }
    else {
      (**(code **)(lVar14 + 0x20))(puVar1,puVar4,DVar8.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar10,(ulong)puVar11 & 0xffffffff);
    (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar10);
  }
  else {
    puVar6 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar1,puVar4,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar7 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x20))(puVar2 + iVar5,puVar3 + iVar5,PVar12.unknown)
  ;
  return param_1;
}



/* Address: 0x100290e04 | FUN_100290e04 */

undefined8 * FUN_100290e04(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  DateComponents DVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  Product PVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  
  uVar6 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar6 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar6);
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar6);
  puVar7 = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
  puVar3 = (undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x20));
  puVar4 = (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x20));
  *puVar3 = *puVar4;
  lVar8 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar8 + 0x14);
  DVar9 = Foundation::DateComponents::typeMetadataAccessor();
  lVar18 = *(long *)(DVar9.unknown + -8);
  pcVar17 = *(code **)(lVar18 + 0x30);
  puVar10 = puVar3 + iVar5;
  (*pcVar17)(puVar10,1,DVar9.unknown);
  puVar11 = puVar4 + iVar5;
  (*pcVar17)(puVar11,1,DVar9.unknown);
  if ((int)puVar10 == 0) {
    if ((int)puVar11 != 0) {
      (**(code **)(lVar18 + 8))(puVar3 + iVar5,DVar9.unknown);
      goto LAB_100290f30;
    }
    (**(code **)(lVar18 + 0x28))(puVar3 + iVar5,puVar4 + iVar5,DVar9.unknown);
  }
  else if ((int)puVar11 == 0) {
    (**(code **)(lVar18 + 0x20))(puVar3 + iVar5,puVar4 + iVar5,DVar9.unknown);
    (**(code **)(lVar18 + 0x38))(puVar3 + iVar5,0,1,DVar9.unknown);
  }
  else {
LAB_100290f30:
    puVar7 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar3 + iVar5,puVar4 + iVar5,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(puVar3 + *(int *)(lVar8 + 0x18));
  puVar2 = (undefined8 *)(puVar4 + *(int *)(lVar8 + 0x18));
  lVar12 = 0;
  FUN_1002abbf0();
  lVar16 = *(long *)(lVar12 + -8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  puVar13 = puVar1;
  (*pcVar17)(puVar1,1,lVar12);
  puVar14 = puVar2;
  (*pcVar17)(puVar2,1,lVar12);
  if ((int)puVar13 == 0) {
    if ((int)puVar14 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar1,FUN_1002abbf0);
        puVar13 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar12);
        if ((int)puVar13 == 2) {
          uVar6 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar6;
          puVar7 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x20);
          (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar9.unknown);
          (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar9.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar12,2);
        }
        else if ((int)puVar13 == 1) {
          uVar6 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar6;
          puVar7 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x20);
          (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar9.unknown);
          (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar9.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar12,1);
        }
        else {
          (**(code **)(lVar18 + 0x20))(puVar1,puVar2,DVar9.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar12,0);
        }
      }
      goto LAB_100291158;
    }
    FUN_10005241c(puVar1,FUN_1002abbf0);
  }
  else if ((int)puVar14 == 0) {
    puVar13 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar12);
    if (((int)puVar13 == 2) || ((int)puVar13 == 1)) {
      uVar6 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar6;
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar17 = *(code **)(lVar18 + 0x20);
      (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar9.unknown);
      (*pcVar17)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar9.unknown);
    }
    else {
      (**(code **)(lVar18 + 0x20))(puVar1,puVar2,DVar9.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar12,puVar13);
    (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar12);
    goto LAB_100291158;
  }
  puVar7 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_100291158:
  iVar5 = *(int *)(lVar8 + 0x1c);
  PVar15 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar15.unknown + -8) + 0x28))(puVar3 + iVar5,puVar4 + iVar5,PVar15.unknown)
  ;
  return param_1;
}



/* Address: 0x100291230 | FUN_100291230 */

void FUN_100291230(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10029123c | FUN_10029123c */

ulong FUN_10029123c(ulong *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  puVar1 = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
  uVar2 = (long)param_1 + (long)*(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x0001002912c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar2,param_2,puVar1);
  return uVar2;
}



/* Address: 0x1002912c8 | FUN_1002912c8 */

void FUN_1002912c8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002912d4 | FUN_1002912d4 */

void FUN_1002912d4(ulong *param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *param_1 = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
                    /* WARNING: Could not recover jumptable at 0x000100291350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(param_4 + 0x14),param_2,param_2,puVar1);
  return;
}



/* Address: 0x100291354 | FUN_100291354 */

void FUN_100291354(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fba8d8,&TargetStructDescriptor_100caa6ec);
  return;
}



/* Address: 0x100291368 | FUN_100291368 */

void FUN_100291368(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_30;
  long local_28;
  
  local_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  lVar1 = 0x13f;
  FUN_1002913e0();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1002913e0 | FUN_1002913e0 */

void FUN_1002913e0(void)

{
  long lVar1;
  Binding BVar2;
  
  if (DAT_100fba8e8.unknown == (undefined *)0x0) {
    lVar1 = 0xff;
    FUN_1002abb94();
    BVar2 = SwiftUI::Binding::typeMetadataAccessor();
    if (lVar1 == 0) {
      DAT_100fba8e8 = BVar2;
    }
  }
  return;
}



/* Address: 0x100291434 | FUN_100291434 */

void FUN_100291434(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa744,1);
  return;
}



/* Address: 0x100291444 | FUN_100291444 */

void FUN_100291444(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  Binding BVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  long local_70;
  undefined8 local_68;
  
  lVar4 = 0;
  local_68 = param_3;
  FUN_100291354();
  local_70 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(local_70 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = (long)&local_70 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1002abb94();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pcVar15 = (char *)(lVar12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift",0x46,1,0xf,
               UVar7.unknown,puVar6);
  }
  FUN_1000c495c(param_2,param_1,FUN_1002abb94);
  BVar9.unknown = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
  uVar3 = local_68;
  SwiftUI::Binding::get_wrappedValue(BVar9);
  cVar1 = *param_2;
  cVar2 = *pcVar15;
  FUN_10005241c(pcVar15,FUN_1002abb94);
  FUN_1000c495c(uVar3,lVar12,FUN_100291354);
  uVar11 = (ulong)*(byte *)(local_70 + 0x50);
  uVar14 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100ec5d68;
  _swift_allocObject(&DAT_100ec5d68,uVar14 + lVar13,uVar11 | 7);
  FUN_1000523d8(lVar12,puVar10 + uVar14,FUN_100291354);
  _swift_release(pMVar5);
  lVar4 = 0;
  FUN_100291eb4();
  *(bool *)(param_1 + *(int *)(lVar4 + 0x14)) = cVar1 == cVar2;
  puVar6 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  *puVar6 = FUN_100293ee4;
  puVar6[1] = puVar10;
  return;
}



/* Address: 0x100291650 | FUN_100291650 */

void FUN_100291650(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0;
  FUN_1002abb94();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = 0;
  FUN_100291354();
  iVar1 = *(int *)(lVar2 + 0x14);
  FUN_1000c495c(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                FUN_1002abb94);
  puVar3 = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
  SwiftUI::Binding::set_wrappedValue
            ((Binding *)(param_2 + iVar1),
             &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar3);
  return;
}



/* Address: 0x100291700 | FUN_100291700 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100291700(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_100219ddc();
  uVar1 = (uint)uVar2;
  if ((uVar1 & 0xff) == 0xb) {
    FUN_10029176c();
    param_1 = 0;
  }
  else {
    FUN_100219ddc();
    if ((uVar1 & 0xff) == 10) {
      FUN_1002918a0();
      param_1 = 0;
    }
  }
  return param_1;
}



/* Address: 0x10029176c | FUN_10029176c */

void FUN_10029176c(undefined8 param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  uVar3 = 0;
  FUN_1002abb94();
  lVar7 = *(long *)(uVar3 - 8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = (long)puVar5 - extraout_x12;
  FUN_1002919dc();
  if (((param_2 & 0xff) == 1) || ((long)uVar3 < 1)) {
    FUN_1002920b8(0);
    (extension_AppKit)::__C::NSSound::beep();
  }
  else {
    if (*(ulong *)(*unaff_x20 + 0x10) < uVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002918a0);
      (*pcVar2)();
    }
    FUN_1000c495c(*unaff_x20 +
                  ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar7 + 0x48) * (uVar3 - 1),lVar6,FUN_1002abb94);
    lVar7 = 0;
    FUN_100291354();
    iVar1 = *(int *)(lVar7 + 0x14);
    FUN_1000c495c(lVar6,puVar5,FUN_1002abb94);
    puVar4 = &DAT_100fba878;
    FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
    SwiftUI::Binding::set_wrappedValue((Binding *)((long)unaff_x20 + (long)iVar1),puVar5,puVar4);
    FUN_10005241c(lVar6,FUN_1002abb94);
  }
  return;
}


