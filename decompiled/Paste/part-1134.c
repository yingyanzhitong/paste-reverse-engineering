/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bc4e50 | FUN_100bc4e50 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bc4e84 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100bc4e50(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x100bc4eac | FUN_100bc4eac */

undefined1  [16] FUN_100bc4eac(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == '\0') {
    auVar4._8_8_ = &DAT_e600000000000000;
    auVar4._0_8_ = 0x73656d617266;
    return auVar4;
  }
  puVar2 = (undefined1 *)0xe900000000000073;
  uVar1 = 0x7265747369676572;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e800000000000000;
    uVar1 = 0x746f687370616e73;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100bc4f04 | FUN_100bc4f04 */

void FUN_100bc4f04(undefined1 *param_1,undefined1 *param_2)

{
  switchD_100bec0c4::caseD_40(*param_1,*param_2);
  return;
}



/* Address: 0x100bc4f10 | FUN_100bc4f10 */

void FUN_100bc4f10(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec888(*unaff_x20);
  return;
}



/* Address: 0x100bc4f18 | FUN_100bc4f18 */

void FUN_100bc4f18(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100becf50(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bc4f20 | FUN_100bc4f20 */

void FUN_100bc4f20(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed454(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bc4f28 | FUN_100bc4f28 */

void FUN_100bc4f28(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bc4e50(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100bc4f54 | FUN_100bc4f54 */

void FUN_100bc4f54(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100bc4eac();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bc4f7c | FUN_100bc4f7c */

void FUN_100bc4f7c(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bc4eac(*unaff_x20);
  return;
}



/* Address: 0x100bc4f84 | FUN_100bc4f84 */

void FUN_100bc4f84(undefined1 *param_1,undefined1 param_2)

{
  FUN_100bc4e50();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bc4fa8 | FUN_100bc4fa8 */

String FUN_100bc4fa8(void)

{
  String SVar1;
  
  FUN_100bc5020();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100bc4fd0 | FUN_100bc4fd0 */

String FUN_100bc4fd0(void)

{
  String SVar1;
  
  FUN_100bc5020();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100bc4ff8 | FUN_100bc4ff8 */

void FUN_100bc4ff8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100bc4930();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100bc5020 | FUN_100bc5020 */

void FUN_100bc5020(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010475c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d4a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d4a0,&DAT_100f3aea0);
  DAT_1010475c8 = pTVar1;
  return;
}



/* Address: 0x100bc5060 | FUN_100bc5060 */

void FUN_100bc5060(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_1010475d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_1010475d0;
  FUN_100b6734c();
  puVar2 = puVar1;
  FUN_100bc50c8();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_1010475d8 = puVar3;
  return;
}



/* Address: 0x100bc50c8 | FUN_100bc50c8 */

void FUN_100bc50c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_1010475e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100b94b18(0xff);
  puVar2 = &DAT_100c9b17c;
  _swift_getWitnessTable(&DAT_100c9b17c,uVar1);
  DAT_1010475e0 = puVar2;
  return;
}



/* Address: 0x100bc510c | FUN_100bc510c */

void FUN_100bc510c(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 2) {
    uVar2 = 4;
  }
  if (param_3 + 2 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfd < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfe) {
                    /* WARNING: Could not recover jumptable at 0x000100bc5154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bc5158 + (ulong)(byte)(&DAT_100c9d355)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x02';
                    /* WARNING: Could not recover jumptable at 0x000100bc5188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bc518c + (ulong)(byte)(&UNK_100c9d350)[uVar1] * 4))();
  return;
}



/* Address: 0x100bc51c8 | FUN_100bc51c8 */

undefined1  [16] FUN_100bc51c8(void)

{
  return ZEXT816(0x100f3aea0);
}



/* Address: 0x100bc51d8 | thunk_FUN_100bc51dc */

void thunk_FUN_100bc51dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010475e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d478;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d478,&DAT_100f3aea0);
  DAT_1010475e8 = pTVar1;
  return;
}



/* Address: 0x100bc51dc | FUN_100bc51dc */

void FUN_100bc51dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010475e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d478;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d478,&DAT_100f3aea0);
  DAT_1010475e8 = pTVar1;
  return;
}



/* Address: 0x100bc521c | thunk_FUN_100bc5220 */

void thunk_FUN_100bc5220(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010475f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d3d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d3d8,&DAT_100f3aea0);
  DAT_1010475f0 = pTVar1;
  return;
}



/* Address: 0x100bc5220 | FUN_100bc5220 */

void FUN_100bc5220(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010475f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d3d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d3d8,&DAT_100f3aea0);
  DAT_1010475f0 = pTVar1;
  return;
}



/* Address: 0x100bc5260 | thunk_FUN_100bc5264 */

void thunk_FUN_100bc5264(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010475f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d3b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d3b0,&DAT_100f3aea0);
  DAT_1010475f8 = pTVar1;
  return;
}



/* Address: 0x100bc5264 | FUN_100bc5264 */

void FUN_100bc5264(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010475f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d3b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d3b0,&DAT_100f3aea0);
  DAT_1010475f8 = pTVar1;
  return;
}



/* Address: 0x100bc52a4 | FUN_100bc52a4 */

void FUN_100bc52a4(void)

{
  FUN_100bc5dc8();
  FUN_100bc5dec();
  FUN_100bc5b54();
  return;
}



/* Address: 0x100bc52cc | FUN_100bc52cc */

void FUN_100bc52cc(void)

{
  FUN_100bc5dc8();
  FUN_100bc5dec();
  FUN_100bc5ba0();
  return;
}



/* Address: 0x100bc52f4 | SentryDefaultRateLimits::initWithRetryAfterHeaderParser:andRateLimitParser:currentDateProvider: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryDefaultRateLimits::initWithRetryAfterHeaderParser_andRateLimitParser_currentDateProvider_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = param_5;
  _swift_getObjectType(param_5);
  _swift_unknownObjectRetain(param_5);
  FUN_100bc5ba0(param_3,param_4,param_5,param_1,IVar1);
  return param_3;
}



/* Address: 0x100bc536c | FUN_100bc536c */

uint FUN_100bc536c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long lVar3;
  long lVar4;
  
  FUN_100b6730c(&DAT_101044980);
  FUN_100b7ef70();
  lVar3 = extraout_x9 - extraout_x8;
  lVar4 = lVar3 - extraout_x8;
  FUN_100badb24(lVar4,param_1);
  FUN_100badb24(lVar3,0);
  lVar1 = lVar4;
  FUN_100b7cbe0(lVar4);
  lVar2 = lVar3;
  FUN_100b7cbe0(lVar3);
  FUN_10004e7d4(lVar3);
  FUN_10004e7d4(lVar4);
  return ((uint)lVar1 | (uint)lVar2) & 1;
}



/* Address: 0x100bc5424 | SentryDefaultRateLimits::isRateLimitActive: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryDefaultRateLimits::isRateLimitActive_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  FUN_100bc536c();
  return uVar1 & 1;
}



/* Address: 0x100bc5460 | FUN_100bc5460 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bc5460(ID param_1)

{
  long lVar1;
  code *pcVar2;
  Date DVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ID IVar7;
  Date DVar8;
  long lVar9;
  undefined8 uVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  long unaff_x20;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  
  FUN_100b6730c(&DAT_101044980);
  FUN_100b7ef70();
  lVar19 = extraout_x9 - extraout_x8;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar21 = *(long *)(DVar3.unknown + -8);
  uVar11 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = lVar19 - uVar11;
  lVar12 = lVar18 - uVar11;
  FUN_100b6730c(&DAT_101047610);
  FUN_100b7ef70();
  puVar16 = (undefined8 *)(extraout_x9_00 - extraout_x8_00);
  plVar17 = (long *)((long)puVar16 - extraout_x8_00);
  lVar9 = -0x7ffffffeff230010;
  lVar4 = -0x2fffffffffffffec;
  FUN_100b6fe70();
  if (lVar9 == 0) {
    IVar7 = _objc_msgSend(param_1,"statusCode");
    if (IVar7 == 0x1ad) {
      uVar10 = 0xeb00000000726574;
      FUN_100b6fe70(0x66612d7972746572,0xeb00000000726574);
      FUN_100bbf1d4(lVar19);
      _swift_bridgeObjectRelease(uVar10);
      lVar4 = lVar19;
      FUN_1000c9ff0(lVar19,1,DVar3.unknown);
      if ((int)lVar4 == 1) {
        DVar8.unknown =
             (undefined *)
             _objc_msgSend(*(ID *)(unaff_x20 + SentryDefaultRateLimits::currentDateProvider),"date")
        ;
        Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar8);
        Foundation::Date::addingTimeInterval(60.0,(Date)0x0);
        FUN_100bc5ddc();
        lVar4 = lVar19;
        FUN_1000c9ff0(lVar19,1,DVar3.unknown);
        if ((int)lVar4 != 1) {
          FUN_10004e7d4(lVar19);
        }
      }
      else {
        (**(code **)(lVar21 + 0x20))(lVar18,lVar19,DVar3.unknown);
      }
      FUN_100bc58ec(0,lVar18);
      (**(code **)(lVar21 + 8))(lVar18,DVar3.unknown);
    }
    return;
  }
  FUN_100b838b0();
  _swift_bridgeObjectRelease();
  puVar13 = (ulong *)(lVar4 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((long)uVar14 < 0x40) {
    uVar11 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar11 = uVar11 & *puVar13;
  uVar14 = uVar14 + 0x3f >> 6;
  lVar19 = 0;
  lVar18 = 0;
  if (uVar11 == 0) goto LAB_100bc5608;
LAB_100bc5590:
  uVar20 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar11 - 1 & uVar11;
  uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) | lVar18 << 6;
  *puVar16 = *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar20 * 8);
  FUN_100bc5e04();
  (**(code **)(lVar21 + 0x10))
            ((long)puVar16 + (long)*(int *)(lVar9 + 0x30),
             *(long *)(lVar4 + 0x38) + *(long *)(lVar21 + 0x48) * uVar20,DVar3.unknown);
  FUN_1000c9ffc(puVar16,0,1,lVar9);
  do {
    puVar5 = puVar16;
    FUN_100bc5d4c(puVar16,plVar17);
    FUN_100bc5e04();
    plVar6 = plVar17;
    FUN_1000c9ff0(plVar17,1,puVar5);
    if ((int)plVar6 == 1) {
      _swift_release(lVar4);
      return;
    }
    lVar9 = *plVar17;
    (**(code **)(lVar21 + 0x20))(lVar12,(long)plVar17 + (long)*(int *)(puVar5 + 6),DVar3.unknown);
    FUN_100bc58ec(lVar9,lVar12);
    FUN_100bc5ddc();
    lVar19 = lVar18;
    if (uVar11 != 0) goto LAB_100bc5590;
LAB_100bc5608:
    lVar1 = lVar19 + 1;
    if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc58ec);
      (*pcVar2)();
    }
    lVar18 = lVar19;
    if (lVar1 < (long)uVar14) {
      uVar11 = puVar13[lVar1];
      lVar18 = lVar1;
      if (uVar11 != 0) goto LAB_100bc5590;
      lVar1 = lVar19 + 2;
      if (lVar1 < (long)uVar14) {
        uVar11 = puVar13[lVar1];
        lVar18 = lVar1;
        if (uVar11 != 0) goto LAB_100bc5590;
        lVar1 = lVar19 + 3;
        if (lVar1 < (long)uVar14) {
          uVar11 = puVar13[lVar1];
          lVar18 = lVar1;
          if (uVar11 != 0) goto LAB_100bc5590;
          lVar1 = lVar19 + 4;
          if (lVar1 < (long)uVar14) {
            uVar11 = puVar13[lVar1];
            lVar18 = lVar1;
            if (uVar11 != 0) goto LAB_100bc5590;
            lVar1 = lVar19 + 5;
            if (lVar1 < (long)uVar14) {
              uVar11 = puVar13[lVar1];
              lVar18 = lVar1;
              if (uVar11 != 0) goto LAB_100bc5590;
              lVar1 = lVar19 + 6;
              if (lVar1 < (long)uVar14) {
                uVar11 = puVar13[lVar1];
                lVar18 = lVar1;
                if (uVar11 != 0) goto LAB_100bc5590;
                lVar1 = lVar19 + 7;
                puVar15 = (ulong *)(lVar4 + 0x78 + lVar19 * 8);
                while (lVar19 = lVar1, lVar18 = uVar14 - 1, lVar19 < (long)uVar14) {
                  uVar11 = *puVar15;
                  lVar1 = lVar19 + 1;
                  puVar15 = puVar15 + 1;
                  lVar18 = lVar19;
                  if (uVar11 != 0) goto LAB_100bc5590;
                }
              }
            }
          }
        }
      }
    }
    FUN_100bc5e04();
    FUN_1000c9ffc(puVar16,1,1,lVar9);
    uVar11 = 0;
  } while( true );
}



/* Address: 0x100bc58ec | FUN_100bc58ec */

void FUN_100bc58ec(undefined8 param_1,undefined8 param_2)

{
  Date DVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar1.unknown + -8);
  puVar4 = &stack0xffffffffffffffa0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_101044980;
  FUN_100b6730c();
  uVar3 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)puVar4 - uVar3;
  lVar6 = lVar7 - uVar3;
  lVar5 = lVar6 - uVar3;
  FUN_100badb24(lVar5,param_1);
  FUN_100b7d154(0);
  (**(code **)(lVar8 + 0x10))(lVar7,param_2,DVar1.unknown);
  FUN_1000c9ffc(lVar7,0,1,DVar1.unknown);
  FUN_100b7cdd4(lVar6,lVar5,lVar7);
  FUN_10004e7d4(lVar7);
  lVar7 = lVar6;
  FUN_1000c9ff0(lVar6,1,DVar1.unknown);
  if ((int)lVar7 == 1) {
    FUN_10004e7d4(lVar5);
    lVar5 = lVar6;
  }
  else {
    (**(code **)(lVar8 + 0x20))(puVar4,lVar6,DVar1.unknown);
    FUN_100bada50(param_1,puVar4);
    (**(code **)(lVar8 + 8))(puVar4,DVar1.unknown);
  }
  FUN_10004e7d4(lVar5);
  return;
}



/* Address: 0x100bc5a64 | SentryDefaultRateLimits::update: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDefaultRateLimits::update_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bc5460(param_3);
  return;
}



/* Address: 0x100bc5ab4 | FUN_100bc5ab4 */

void FUN_100bc5ab4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.DefaultRateLimits",0x18,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc5ae0);
  (*pcVar1)();
}



/* Address: 0x100bc5ae0 | SentryDefaultRateLimits::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDefaultRateLimits::init(ID param_1,SEL param_2)

{
  FUN_100bc5ab4();
  _swift_release(*(undefined8 *)(param_1 + rateLimits));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + currentDateProvider));
  return 0;
}



/* Address: 0x100bc5aec | SentryDefaultRateLimits::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryDefaultRateLimits::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + rateLimits));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + currentDateProvider));
  return;
}



/* Address: 0x100bc5b54 | FUN_100bc5b54 */

void FUN_100bc5b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_allocWithZone(param_4);
  FUN_100bc5ba0(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x100bc5ba0 | FUN_100bc5ba0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bc5c2c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100bc5ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,class_t *param_4)

{
  class_t *pcVar1;
  long lVar2;
  Date DVar3;
  Date DVar4;
  Dictionary<undefined,undefined> DVar5;
  undefined *puVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  ID IVar9;
  objc_super local_80;
  objc_super local_70;
  
  pcVar1 = param_4;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_100badb90();
  _swift_allocObject();
  DVar3 = Foundation::Date::typeMetadataAccessor();
  DVar4 = DVar3;
  FUN_100b78b44();
  DVar5 = Swift::Dictionary::_init(DVar4.unknown,&DAT_100f3c108,DVar3.unknown,DVar4.unknown);
  puVar6 = &DAT_101044eb8;
  FUN_100b6730c(&DAT_101044eb8);
  _swift_allocObject();
  FUN_100b88668(DVar5.unknown,puVar6);
  *(undefined **)(lVar2 + 0x10) = DVar5.unknown;
  *(long *)((long)&param_4->isa + SentryDefaultRateLimits::rateLimits) = lVar2;
  *(undefined8 *)((long)&param_4->isa + SentryDefaultRateLimits::retryAfterHeaderParser) = param_1;
  *(undefined8 *)((long)&param_4->isa + SentryDefaultRateLimits::rateLimitParser) = param_2;
  *(undefined8 *)((long)&param_4->isa + SentryDefaultRateLimits::currentDateProvider) = param_3;
  pcVar7 = (class_t *)0x0;
  FUN_100b7d154();
  pcVar8 = pcVar7;
  _objc_allocWithZone();
  *(undefined8 *)((long)&pcVar8->isa + _TtC6Sentry14SentryDateUtil::currentDateProvider) = param_3;
  local_70.receiver = (ID)pcVar8;
  local_70.super_class = pcVar7;
  _swift_unknownObjectRetain_n(param_3,2);
  IVar9 = _objc_msgSendSuper2(&local_70,"init");
  *(ID *)((long)&param_4->isa + SentryDefaultRateLimits::dateUtil) = IVar9;
  local_80.receiver = (ID)param_4;
  local_80.super_class = pcVar1;
  IVar9 = _objc_msgSendSuper2(&local_80,"init");
  _swift_unknownObjectRelease(param_3);
  return IVar9;
}



/* Address: 0x100bc5d4c | FUN_100bc5d4c */

undefined8 FUN_100bc5d4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101047610;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100bc5d94 | FUN_100bc5d94 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc5d94(void)

{
  return ZEXT816(0x100fa3f50);
}



/* Address: 0x100bc5db4 | FUN_100bc5db4 */

void FUN_100bc5db4(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccfb50);
  return;
}



/* Address: 0x100bc5dc0 | FUN_100bc5dc0 */

void FUN_100bc5dc0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bc5dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x78))();
  return;
}



/* Address: 0x100bc5dc8 | FUN_100bc5dc8 */

void FUN_100bc5dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjectType(param_3);
  return;
}



/* Address: 0x100bc5ddc | FUN_100bc5ddc */

void FUN_100bc5ddc(void)

{
  long unaff_x28;
  
                    /* WARNING: Could not recover jumptable at 0x000100bc5de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x28 + 8))();
  return;
}



/* Address: 0x100bc5dec | FUN_100bc5dec */

void FUN_100bc5dec(void)

{
  return;
}



/* Address: 0x100bc5e04 | FUN_100bc5e04 */

void FUN_100bc5e04(void)

{
  FUN_100b6730c();
  return;
}



/* Address: 0x100bc5e0c | FUN_100bc5e0c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

String FUN_100bc5e0c(ulong param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  Locale LVar5;
  undefined *puVar6;
  ID IVar7;
  Locale LVar8;
  NSLocale *pNVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String local_60;
  
  LVar5 = Foundation::Locale::typeMetadataAccessor();
  lVar12 = *(long *)(LVar5.unknown + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  dVar13 = (double)param_1 * 0.0009765625;
  dVar14 = dVar13 * 0.0009765625;
  dVar15 = dVar14 * 0.0009765625;
  if (dVar14 < 1024.0) {
    dVar15 = dVar14;
  }
  lVar1 = 3;
  if (dVar14 < 1024.0) {
    lVar1 = 2;
  }
  dVar14 = dVar13;
  if (1024.0 <= dVar13) {
    dVar14 = dVar15;
  }
  lVar2 = 1;
  if (1024.0 <= dVar13) {
    lVar2 = lVar1;
  }
  dVar15 = (double)param_1;
  if (0x3ff < param_1) {
    dVar15 = dVar14;
  }
  lVar1 = 0;
  if (0x3ff < param_1) {
    lVar1 = lVar2;
  }
  puVar6 = &_OBJC_CLASS___NSNumberFormatter;
  _objc_allocWithZone();
  IVar7 = _objc_msgSend((ID)puVar6,"init");
  SVar16.bridgeObject = &DAT_e500000000000000;
  SVar16.str = (char *)0x53555f6e65;
  LVar8 = Foundation::Locale::init(SVar16);
  pNVar9 = Foundation::Locale::_bridgeToObjectiveC(LVar8);
  (**(code **)(lVar12 + 8))((long)&local_60 - (lVar11 + 0xfU & 0xfffffffffffffff0),LVar5.unknown);
  _objc_msgSend(IVar7,"setLocale:",pNVar9);
  FUN_100bc61b0(0,"setNumberStyle:");
  FUN_100bc61b0();
  FUN_100bc6140(0x3023232c23,&DAT_e500000000000000,IVar7);
  puVar6 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  pcVar10 = (char *)_objc_msgSend((ID)puVar6,"initWithDouble:",dVar15);
  IVar7 = _objc_msgSend(IVar7,"stringFromNumber:");
  if (IVar7 == 0) {
    if (0x7fe < (ulong)dVar15 >> 0x34) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc6080);
      (*pcVar4)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc6084);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc6088);
      (*pcVar4)();
    }
    local_60.str = (char *)(long)dVar15;
    local_60 = Swift::CustomStringConvertible::get_description();
  }
  else {
    local_60 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  SVar17.bridgeObject = (void *)0xe100000000000000;
  SVar17.str = (char *)0x20;
  SVar18.bridgeObject = param_4;
  SVar18.str = pcVar10;
  Swift::String::append(SVar17,SVar18);
  uVar3 = *(undefined8 *)(lVar1 * 0x10 + 0x101043f30);
  SVar16 = *(String *)(s_bytes_101043f28 + lVar1 * 0x10);
  _swift_bridgeObjectRetain(uVar3);
  SVar19.bridgeObject = param_4;
  SVar19.str = pcVar10;
  Swift::String::append(SVar16,SVar19);
  _swift_bridgeObjectRelease(uVar3);
  return local_60;
}



/* Address: 0x100bc6088 | _TtC6Sentry24SentryByteCountFormatter::bytesCountDescription: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry24SentryByteCountFormatter::bytesCountDescription_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  NSString *pNVar1;
  
  FUN_100bc5e0c(param_3);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100bc60c0 | FUN_100bc60c0 */

void FUN_100bc60c0(void)

{
  FUN_100bc6190();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100bc60f0 | _TtC6Sentry24SentryByteCountFormatter::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry24SentryByteCountFormatter::init(ID param_1,SEL param_2)

{
  FUN_100bc60c0();
  return param_1;
}



/* Address: 0x100bc6110 | FUN_100bc6110 */

void FUN_100bc6110(void)

{
  FUN_100bc6190();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bc6140 | FUN_100bc6140 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc6140(undefined8 param_1,undefined8 param_2,ID param_3)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSend(param_3,"setPositiveFormat:",pNVar1);
  return 0;
}



/* Address: 0x100bc6190 | FUN_100bc6190 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc6190(void)

{
  return ZEXT816(0x100fa4030);
}



/* Address: 0x100bc61b0 | FUN_100bc61b0 */

void FUN_100bc61b0(undefined8 param_1,SEL param_2)

{
  ID unaff_x19;
  
  _objc_msgSend(unaff_x19,param_2,1);
  return;
}



/* Address: 0x100bc61bc | FUN_100bc61bc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_100bc61bc(void)

{
  Dictionary<undefined,undefined> DVar1;
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"systemInfo");
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100b6faa8();
  return DVar1.unknown;
}



/* Address: 0x100bc6224 | FUN_100bc6224 */

void FUN_100bc6224(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"crashedLastLaunch")
  ;
  return;
}



/* Address: 0x100bc624c | FUN_100bc624c */

void FUN_100bc624c(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),
                "activeDurationSinceLastCrash");
  return;
}



/* Address: 0x100bc6264 | FUN_100bc6264 */

void FUN_100bc6264(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"introspectMemory");
  return;
}



/* Address: 0x100bc628c | FUN_100bc628c */

void FUN_100bc628c(uint param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),
                "setIntrospectMemory:",(ulong)(param_1 & 1));
  return;
}



/* Address: 0x100bc62ac | FUN_100bc62ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bc62ac(long param_1,uint param_2,long param_3,long param_4)

{
  NSArray *pNVar1;
  NSError *pNVar2;
  
  if (param_1 == 0) {
    pNVar1 = (NSArray *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  }
  pNVar2 = (NSError *)0x0;
  if (param_3 != 0) {
    pNVar2 = Foundation::__convertErrorToNSError();
  }
  (**(code **)(param_4 + 0x10))(param_4,pNVar1,param_2 & 1,pNVar2);
  FUN_100b78d38(pNVar2);
  return;
}



/* Address: 0x100bc6328 | FUN_100bc6328 */

void FUN_100bc6328(undefined8 param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash),"setBridgeObject:",
                param_1);
  return;
}



/* Address: 0x100bc6344 | FUN_100bc6344 */

void FUN_100bc6344(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100bc7340(param_1,*(undefined8 *)(unaff_x20 + _TtC6Sentry16SentryCrashSwift::sentryCrash));
  return;
}



/* Address: 0x100bc6354 | FUN_100bc6354 */

void FUN_100bc6354(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry28SentryCrashReportFilterSwift::filter);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100b69e10();
  FUN_100b69e90();
  return;
}



/* Address: 0x100bc63a0 | FUN_100bc63a0 */

void FUN_100bc63a0(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  FUN_100bc7550();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry28SentryCrashReportFilterSwift::filter);
  *puVar1 = unaff_x21;
  puVar1[1] = unaff_x19;
  FUN_100b69e10();
  FUN_100b69e90();
  return;
}



/* Address: 0x100bc63e0 | _TtC6Sentry28SentryCrashReportFilterSwift::initWithFilterReports: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry28SentryCrashReportFilterSwift::initWithFilterReports_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  puVar2 = &DAT_100f3b038;
  _swift_allocObject(&DAT_100f3b038,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  pcVar3 = FUN_100bc7524;
  FUN_100bc63a0(FUN_100bc7524,puVar2);
  return (ID)pcVar3;
}


