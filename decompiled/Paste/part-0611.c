/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006903b0 | FUN_1006903b0 */

undefined8 FUN_1006903b0(void)

{
  return 0x3f;
}



/* Address: 0x1006903b8 | FUN_1006903b8 */

ulong FUN_1006903b8(ulong param_1)

{
  code *pcVar1;
  
  if (param_1 < 0xffffffffffffffc0) {
    return param_1 + 0x3f >> 6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006903d0);
  (*pcVar1)();
}



/* Address: 0x1006903d0 | FUN_1006903d0 */

bool FUN_1006903d0(long param_1)

{
  return param_1 == 0;
}



/* Address: 0x1006903dc | FUN_1006903dc */

bool FUN_1006903dc(long param_1)

{
  return param_1 == -1;
}



/* Address: 0x1006903e8 | FUN_1006903e8 */

uint FUN_1006903e8(ulong param_1,ulong param_2)

{
  return (uint)(param_2 >> (param_1 & 0x3f)) & 1;
}



/* Address: 0x1006903f4 | FUN_1006903f4 */

void FUN_1006903f4(ulong param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 | 1L << (param_1 & 0x3f);
  return;
}



/* Address: 0x10069040c | FUN_10069040c */

bool FUN_10069040c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar1 = 1L << (param_1 & 0x3f);
  uVar2 = *unaff_x20;
  *unaff_x20 = uVar2 | uVar1;
  return (uVar2 & uVar1) == 0;
}



/* Address: 0x10069042c | FUN_10069042c */

void FUN_10069042c(ulong param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & (-1L << (param_1 & 0x3f)) - 1U;
  return;
}



/* Address: 0x100690448 | FUN_100690448 */

bool FUN_100690448(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar1 = 1L << (param_1 & 0x3f);
  uVar2 = *unaff_x20;
  *unaff_x20 = uVar2 & (uVar1 ^ 0xffffffffffffffff);
  return (uVar2 & uVar1) != 0;
}



/* Address: 0x100690468 | FUN_100690468 */

void FUN_100690468(ulong param_1,uint param_2)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = 1L << (param_1 & 0x3f);
  if ((param_2 & 1) != 0) {
    *unaff_x20 = *unaff_x20 | uVar1;
    return;
  }
  *unaff_x20 = *unaff_x20 & (uVar1 ^ 0xffffffffffffffff);
  return;
}



/* Address: 0x100690494 | FUN_100690494 */

void FUN_100690494(ulong param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 | -1L << (param_1 & 0x3f) ^ 0xffffffffffffffffU;
  return;
}



/* Address: 0x1006904ac | FUN_1006904ac */

void FUN_1006904ac(ulong param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & -1L << (param_1 & 0x3f);
  return;
}



/* Address: 0x1006904c4 | FUN_1006904c4 */

void FUN_1006904c4(ulong param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = -1L << (param_1 & 0x3f);
  *unaff_x20 = uVar1 - 1 & uVar1 & *unaff_x20;
  return;
}



/* Address: 0x1006904e4 | FUN_1006904e4 */

void FUN_1006904e4(ulong param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & (-1L << (param_1 & 0x3f) ^ 0xffffffffffffffffU);
  return;
}



/* Address: 0x1006904fc | FUN_1006904fc */

undefined8 FUN_1006904fc(void)

{
  return 0xffffffffffffffff;
}



/* Address: 0x100690504 | FUN_100690504 */

char FUN_100690504(undefined8 param_1)

{
  return POPCOUNT((char)param_1) + POPCOUNT((char)((ulong)param_1 >> 8)) +
         POPCOUNT((char)((ulong)param_1 >> 0x10)) + POPCOUNT((char)((ulong)param_1 >> 0x18)) +
         POPCOUNT((char)((ulong)param_1 >> 0x20)) + POPCOUNT((char)((ulong)param_1 >> 0x28)) +
         POPCOUNT((char)((ulong)param_1 >> 0x30)) + POPCOUNT((char)((ulong)param_1 >> 0x38));
}



/* Address: 0x100690518 | FUN_100690518 */

undefined1  [16] FUN_100690518(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = *unaff_x20;
  if (uVar2 != 0) {
    uVar1 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    auVar3._0_8_ = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
    *unaff_x20 = uVar2 - 1 & uVar2;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x100690548 | FUN_100690548 */

char FUN_100690548(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  return POPCOUNT((char)uVar1) + POPCOUNT((char)((ulong)uVar1 >> 8)) +
         POPCOUNT((char)((ulong)uVar1 >> 0x10)) + POPCOUNT((char)((ulong)uVar1 >> 0x18)) +
         POPCOUNT((char)((ulong)uVar1 >> 0x20)) + POPCOUNT((char)((ulong)uVar1 >> 0x28)) +
         POPCOUNT((char)((ulong)uVar1 >> 0x30)) + POPCOUNT((char)((ulong)uVar1 >> 0x38));
}



/* Address: 0x10069055c | FUN_10069055c */

void FUN_10069055c(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006906bc(*unaff_x20);
  return;
}



/* Address: 0x100690564 | FUN_100690564 */

void FUN_100690564(void)

{
  FUN_100690894();
  return;
}



/* Address: 0x10069056c | FUN_10069056c */

void FUN_10069056c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  if (uVar3 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    lVar2 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
    *unaff_x20 = uVar3 - 1 & uVar3;
  }
  *param_1 = lVar2;
  *(bool *)(param_1 + 1) = uVar3 == 0;
  return;
}



/* Address: 0x1006905a4 | FUN_1006905a4 */

ulong FUN_1006905a4(ulong param_1)

{
  return ~param_1;
}



/* Address: 0x1006905ac | FUN_1006905ac */

void FUN_1006905ac(void)

{
  ulong *unaff_x20;
  
  *unaff_x20 = ~*unaff_x20;
  return;
}



/* Address: 0x1006905bc | FUN_1006905bc */

ulong FUN_1006905bc(ulong param_1,ulong param_2)

{
  return param_2 | param_1;
}



/* Address: 0x1006905c4 | FUN_1006905c4 */

void FUN_1006905c4(ulong param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 | param_1;
  return;
}



/* Address: 0x1006905d4 | FUN_1006905d4 */

ulong FUN_1006905d4(ulong param_1,ulong param_2)

{
  return param_2 & param_1;
}



/* Address: 0x1006905dc | FUN_1006905dc */

void FUN_1006905dc(ulong param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & param_1;
  return;
}



/* Address: 0x1006905ec | FUN_1006905ec */

void FUN_1006905ec(ulong param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 ^ param_1;
  return;
}



/* Address: 0x1006905fc | FUN_1006905fc */

ulong FUN_1006905fc(ulong param_1,ulong param_2)

{
  return param_2 & (param_1 ^ 0xffffffffffffffff);
}



/* Address: 0x100690604 | FUN_100690604 */

void FUN_100690604(ulong param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & (param_1 ^ 0xffffffffffffffff);
  return;
}



/* Address: 0x100690614 | FUN_100690614 */

ulong FUN_100690614(ulong param_1,ulong param_2)

{
  return param_2 >> (param_1 & 0x3f);
}



/* Address: 0x10069061c | FUN_10069061c */

long FUN_10069061c(ulong param_1,long param_2)

{
  return param_2 << (param_1 & 0x3f);
}



/* Address: 0x100690624 | thunk_FUN_100690628 */

void thunk_FUN_100690628(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6dff8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6dff8,&DAT_100ef5458);
  DAT_100fda5c0 = pTVar1;
  return;
}



/* Address: 0x100690628 | FUN_100690628 */

void FUN_100690628(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6dff8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6dff8,&DAT_100ef5458);
  DAT_100fda5c0 = pTVar1;
  return;
}



/* Address: 0x100690668 | thunk_FUN_10069066c */

void thunk_FUN_10069066c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e028;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e028,&DAT_100ef5458);
  DAT_100fda5c8 = pTVar1;
  return;
}



/* Address: 0x10069066c | FUN_10069066c */

void FUN_10069066c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e028;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e028,&DAT_100ef5458);
  DAT_100fda5c8 = pTVar1;
  return;
}



/* Address: 0x1006906ac | FUN_1006906ac */

undefined1  [16] FUN_1006906ac(void)

{
  return ZEXT816(0x100ef5458);
}



/* Address: 0x1006906bc | FUN_1006906bc */

undefined * FUN_1006906bc(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 == 0) {
    uVar9 = *(ulong *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x18);
    _swift_release(PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar9 = uVar9 >> 1;
  }
  else {
    puVar8 = (undefined *)
             (ulong)(byte)(POPCOUNT((char)param_1) + POPCOUNT((char)(param_1 >> 8)) +
                           POPCOUNT((char)(param_1 >> 0x10)) + POPCOUNT((char)(param_1 >> 0x18)) +
                           POPCOUNT((char)(param_1 >> 0x20)) + POPCOUNT((char)(param_1 >> 0x28)) +
                           POPCOUNT((char)(param_1 >> 0x30)) + POPCOUNT((char)(param_1 >> 0x38)));
    puVar5 = puVar8;
    FUN_100691bdc(puVar8,0);
    uVar9 = (*(ulong *)(puVar5 + 0x18) >> 1) - (long)puVar8;
    uVar7 = *(ulong *)(puVar5 + 0x18) >> 1 | 0x8000000000000000;
    plVar11 = (long *)(puVar5 + 0x20);
    do {
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100690880);
        (*pcVar3)();
      }
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100690884);
        (*pcVar3)();
      }
      uVar10 = param_1 - 1 & param_1;
      uVar2 = (param_1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_1 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      plVar12 = plVar11 + 1;
      *plVar11 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + -1;
      param_1 = uVar10;
      plVar11 = plVar12;
    } while (puVar8 != (undefined *)0x0);
    if (uVar10 != 0) {
      puVar8 = puVar5;
      do {
        puVar5 = puVar8;
        if (uVar9 == 0) {
          uVar9 = *(ulong *)(puVar8 + 0x18);
          if ((long)((uVar9 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10069088c);
            (*pcVar3)();
          }
          uVar7 = uVar9 & 0xfffffffffffffffe;
          if ((long)uVar9 < 2) {
            uVar7 = 1;
          }
          puVar5 = &DAT_100fda5d0;
          FUN_1000f7830(&DAT_100fda5d0,&DAT_100c6e0a0);
          _swift_allocObject();
          puVar6 = puVar5;
          _malloc_size();
          puVar1 = puVar6 + -0x19;
          if (0x1f < (long)puVar6) {
            puVar1 = puVar6 + -0x20;
          }
          *(ulong *)(puVar5 + 0x10) = uVar7;
          *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 3) << 1;
          puVar6 = puVar5 + 0x20;
          uVar9 = *(ulong *)(puVar8 + 0x18) >> 1;
          if (*(long *)(puVar8 + 0x10) != 0) {
            if ((puVar5 != puVar8) || (puVar8 + 0x20 + uVar9 * 8 <= puVar6)) {
              _memmove(puVar6,puVar8 + 0x20,uVar9 << 3);
            }
            *(undefined8 *)(puVar8 + 0x10) = 0;
          }
          plVar12 = (long *)(puVar6 + uVar9 * 8);
          uVar9 = ((long)puVar1 >> 3 & 0x7fffffffffffffffU) - uVar9;
          _swift_release(puVar8);
        }
        bVar4 = SBORROW8(uVar9,1);
        uVar9 = uVar9 - 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100690888);
          (*pcVar3)();
        }
        uVar7 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        *plVar12 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        uVar10 = uVar10 - 1 & uVar10;
        puVar8 = puVar5;
        plVar12 = plVar12 + 1;
      } while (uVar10 != 0);
    }
  }
  if (1 < *(ulong *)(puVar5 + 0x18)) {
    uVar7 = *(ulong *)(puVar5 + 0x18) >> 1;
    if (SBORROW8(uVar7,uVar9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100690890);
      (*pcVar3)();
    }
    *(ulong *)(puVar5 + 0x10) = uVar7 - uVar9;
  }
  return puVar5;
}



/* Address: 0x100690890 | thunk_FUN_100690504 */

void thunk_FUN_100690504(void)

{
  FUN_100690504();
  return;
}



/* Address: 0x100690894 | FUN_100690894 */

long FUN_100690894(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006908f0);
        (*pcVar2)();
      }
      lVar3 = 0;
      lVar4 = lVar3;
      if (param_4 != 0) {
        do {
          uVar1 = (param_4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_4 & 0x5555555555555555) << 1;
          uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
          uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          param_4 = param_4 - 1 & param_4;
          *(long *)(param_2 + lVar3 * 8) = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
          lVar4 = param_3;
          if (param_3 + -1 == lVar3) break;
          lVar3 = lVar3 + 1;
          lVar4 = lVar3;
        } while (param_4 != 0);
      }
    }
  }
  *param_1 = param_4;
  return lVar4;
}



/* Address: 0x1006908f0 | FUN_1006908f0 */

long FUN_1006908f0(long *param_1,ulong *param_2,long param_3,ulong *param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_5 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_4;
  }
  if (param_2 == (ulong *)0x0) {
    uVar5 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006909d8);
      (*pcVar2)();
    }
    lVar6 = 0;
    uVar4 = 0;
    do {
      uVar7 = uVar4;
      if (uVar3 == 0) {
        do {
          uVar5 = uVar7 + 1;
          if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006909d0);
            (*pcVar2)();
          }
          if (param_5 <= (long)uVar5) {
            uVar3 = 0;
            lVar1 = param_5;
            if (param_5 <= (long)(uVar4 + 1)) {
              lVar1 = uVar4 + 1;
            }
            uVar5 = lVar1 - 1;
            param_3 = lVar6;
            goto LAB_1006909bc;
          }
          uVar8 = param_4[uVar5];
          uVar7 = uVar7 + 1;
        } while (uVar8 == 0);
        if ((uVar5 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006909dc);
          (*pcVar2)();
        }
        uVar3 = uVar8 - 1 & uVar8;
        uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | uVar5 * 0x40;
      }
      else {
        if ((uVar4 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006909d4);
          (*pcVar2)();
        }
        uVar5 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar3 = uVar3 - 1 & uVar3;
        uVar7 = uVar4 << 6 | LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
        uVar5 = uVar4;
      }
      lVar6 = lVar6 + 1;
      *param_2 = uVar7;
      param_2 = param_2 + 1;
      uVar4 = uVar5;
    } while (lVar6 != param_3);
  }
LAB_1006909bc:
  *param_1 = (long)param_4;
  param_1[1] = param_5;
  param_1[2] = uVar5;
  param_1[3] = uVar3;
  return param_3;
}



/* Address: 0x1006909dc | FUN_1006909dc */

void FUN_1006909dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined1 *puVar4;
  ulong uVar5;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined1 auStack_90 [16];
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar3;
  
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar2.value);
  lVar6 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = auStack_a0 + -uVar5;
  lVar7 = (long)puVar8 - uVar5;
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100690b1c);
    (*pcVar1)();
  }
  lVar9 = *(long *)(param_5 + -8);
  local_98 = param_1;
  (**(code **)(lVar9 + 0x38))(lVar7,1,1,param_5);
  local_80 = param_5;
  lStack_78 = lVar7;
  local_70 = param_3;
  uStack_68 = param_4;
  FUN_100691c5c(param_2 + 0x3fU >> 6,FUN_100690d20,auStack_90);
  if (unaff_x21 == 0) {
    (**(code **)(lVar6 + 0x10))(puVar8,lVar7,lVar3);
    puVar4 = puVar8;
    (**(code **)(lVar9 + 0x30))(puVar8,1,param_5);
    if ((int)puVar4 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100690b20);
      (*pcVar1)();
    }
    (**(code **)(lVar9 + 0x20))(local_98,puVar8,param_5);
  }
  (**(code **)(lVar6 + 8))(lVar7,lVar3);
  return;
}



/* Address: 0x100690b20 | FUN_100690b20 */

void FUN_100690b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined1 *puVar5;
  ulong uVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined1 auStack_90 [16];
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar4;
  
  local_98 = param_1;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar3.value);
  lVar7 = *(long *)(lVar4 + -8);
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar9 = auStack_a0 + -uVar6;
  lVar8 = (long)puVar9 - uVar6;
  lVar10 = *(long *)(param_5 + -8);
  (**(code **)(lVar10 + 0x38))(lVar8,1,1,param_5);
  local_80 = param_5;
  lStack_78 = lVar8;
  local_70 = param_3;
  uStack_68 = param_4;
  FUN_100691c5c(param_2,FUN_100692134,auStack_90);
  uVar1 = local_98;
  if (unaff_x21 == 0) {
    (**(code **)(lVar7 + 0x10))(puVar9,lVar8,lVar4);
    puVar5 = puVar9;
    (**(code **)(lVar10 + 0x30))(puVar9,1,param_5);
    if ((int)puVar5 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100690c54);
      (*pcVar2)();
    }
    (**(code **)(lVar10 + 0x20))(uVar1,puVar9,param_5);
  }
  (**(code **)(lVar7 + 8))(lVar8,lVar4);
  return;
}



/* Address: 0x100690c54 | FUN_100690c54 */

void FUN_100690c54(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5)

{
  Optional OVar1;
  undefined7 extraout_var;
  long unaff_x21;
  undefined1 *puVar2;
  long lVar3;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  puVar2 = &stack0xffffffffffffffa0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_3)(puVar2,param_1);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_5 + -8) + 0x38))(puVar2,0,1,param_5);
    (**(code **)(lVar3 + 0x28))(param_2,puVar2,CONCAT71(extraout_var,OVar1.value));
  }
  return;
}



/* Address: 0x100690d20 | FUN_100690d20 */

void FUN_100690d20(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100690c54(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100690d3c | FUN_100690d3c */

void FUN_100690d3c(void)

{
  FUN_100691c5c();
  return;
}



/* Address: 0x100690d50 | FUN_100690d50 */

void FUN_100690d50(void *param_1,long param_2,code *param_3,undefined8 param_4,long *param_5)

{
  code *pcVar1;
  long unaff_x21;
  void *local_40;
  long lStack_38;
  
  lStack_38 = param_2;
  if (param_1 == (void *)0x0) {
    local_40 = (void *)0x0;
  }
  else {
    local_40 = param_1;
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100690dc4);
      (*pcVar1)();
    }
    if (param_2 != 0) {
      _bzero(param_1,param_2 << 3);
    }
  }
  (*param_3)(&local_40);
  if (unaff_x21 != 0) {
    *param_5 = unaff_x21;
  }
  return;
}



/* Address: 0x100690dc4 | FUN_100690dc4 */

void FUN_100690dc4(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  
  if ((param_2 & 0x3ffffffffffffff) >> 0x39 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100690dd4);
  (*pcVar1)();
}



/* Address: 0x100690dd4 | FUN_100690dd4 */

bool FUN_100690dd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  
  if ((param_3 & 0x3ffffffffffffff) >> 0x39 == 0) {
    return param_1 < param_3 << 6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100690dec);
  (*pcVar1)();
}



/* Address: 0x100690dec | FUN_100690dec */

uint FUN_100690dec(ulong param_1,long param_2,long param_3)

{
  if ((long)(param_1 >> 6) < param_3) {
    return (uint)(*(ulong *)(param_2 + (param_1 >> 6) * 8) >> (param_1 & 0x3f)) & 1;
  }
  return 0;
}



/* Address: 0x100690e10 | FUN_100690e10 */

bool FUN_100690e10(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  
  uVar1 = param_1 >> 3 & 0x1ffffffffffffff8;
  uVar2 = 1L << (param_1 & 0x3f);
  uVar3 = *(ulong *)(*unaff_x20 + uVar1);
  *(ulong *)(*unaff_x20 + uVar1) = uVar3 | uVar2;
  return (uVar3 & uVar2) == 0;
}



/* Address: 0x100690e3c | FUN_100690e3c */

bool FUN_100690e3c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  
  uVar1 = param_1 >> 6;
  if ((long)uVar1 < unaff_x20[1]) {
    uVar3 = *(ulong *)(*unaff_x20 + uVar1 * 8);
    uVar2 = 1L << (param_1 & 0x3f);
    *(ulong *)(*unaff_x20 + uVar1 * 8) = uVar3 & (uVar2 ^ 0xffffffffffffffff);
    return (uVar3 & uVar2) != 0;
  }
  return false;
}



/* Address: 0x100690e78 | FUN_100690e78 */

bool FUN_100690e78(ulong param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  
  uVar1 = param_1 >> 6;
  lVar2 = *unaff_x20;
  uVar3 = 1L << (param_1 & 0x3f);
  if ((param_2 & 1) == 0) {
    uVar3 = *(ulong *)(lVar2 + uVar1 * 8) & (uVar3 ^ 0xffffffffffffffff);
  }
  else {
    uVar3 = *(ulong *)(lVar2 + uVar1 * 8) | uVar3;
  }
  *(ulong *)(lVar2 + uVar1 * 8) = uVar3;
  return uVar1 == unaff_x20[1] - 1U;
}



/* Address: 0x100690eb8 | FUN_100690eb8 */

void FUN_100690eb8(ulong param_1)

{
  ulong uVar1;
  long *unaff_x20;
  
  if (param_1 != 0) {
    uVar1 = param_1 >> 6;
    if (0x3f < param_1) {
      _memset((void *)*unaff_x20,0xff,uVar1 << 3);
    }
    if ((param_1 & 0x3f) != 0) {
      *(ulong *)(*unaff_x20 + uVar1 * 8) =
           *(ulong *)(*unaff_x20 + uVar1 * 8) | -1L << (param_1 & 0x3f) ^ 0xffffffffffffffffU;
    }
  }
  return;
}



/* Address: 0x100690f18 | FUN_100690f18 */

long FUN_100690f18(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 0;
    }
    lVar3 = 0;
    param_2 = param_2 << 3;
    do {
      uVar4 = *param_1;
      uVar5 = (ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)((ulong)uVar4 >> 8)) +
                            POPCOUNT((char)((ulong)uVar4 >> 0x10)) +
                            POPCOUNT((char)((ulong)uVar4 >> 0x18)) +
                            POPCOUNT((char)((ulong)uVar4 >> 0x20)) +
                            POPCOUNT((char)((ulong)uVar4 >> 0x28)) +
                            POPCOUNT((char)((ulong)uVar4 >> 0x30)) +
                           POPCOUNT((char)((ulong)uVar4 >> 0x38)));
      bVar2 = SCARRY8(lVar3,uVar5);
      lVar3 = lVar3 + uVar5;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100690f5c);
        (*pcVar1)();
      }
      param_2 = param_2 + -8;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return lVar3;
}



/* Address: 0x100690f5c | FUN_100690f5c */

void FUN_100690f5c(undefined8 param_1,long param_2)

{
  if (0 < param_2) {
    return;
  }
  return;
}



/* Address: 0x100690f7c | FUN_100690f7c */

undefined1  [16] FUN_100690f7c(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar2 = unaff_x20[3];
  if (uVar2 == 0) {
    lVar3 = unaff_x20[2];
    while( true ) {
      uVar2 = lVar3 + 1;
      if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100691014);
        (*pcVar1)();
      }
      if (unaff_x20[1] <= (long)uVar2) break;
      unaff_x20[2] = uVar2;
      uVar4 = *(ulong *)(*unaff_x20 + uVar2 * 8);
      unaff_x20[3] = uVar4;
      lVar3 = lVar3 + 1;
      if (uVar4 != 0) {
        unaff_x20[3] = uVar4 - 1 & uVar4;
        if ((uVar2 & 0x3ffffffffffffff) >> 0x39 == 0) {
          uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          auVar6._0_8_ = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | uVar2 * 0x40;
          auVar6._8_8_ = 0;
          return auVar6;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10069101c);
        (*pcVar1)();
      }
    }
    return ZEXT816(1) << 0x40;
  }
  unaff_x20[3] = uVar2 - 1 & uVar2;
  if ((unaff_x20[2] & 0x3ffffffffffffffU) >> 0x39 == 0) {
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    auVar5._0_8_ = unaff_x20[2] << 6 | LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100691018);
  (*pcVar1)();
}



/* Address: 0x10069101c | FUN_10069101c */

void FUN_10069101c(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_100690f7c();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Address: 0x100691044 | FUN_100691044 */

void FUN_100691044(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  lVar1 = unaff_x20[1];
  if (lVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)*unaff_x20;
  }
  *param_1 = (undefined8 *)*unaff_x20;
  param_1[1] = lVar1;
  param_1[2] = 0;
  param_1[3] = uVar2;
  return;
}



/* Address: 0x100691068 | thunk_FUN_100691ab4 */

long thunk_FUN_100691ab4(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  
  if (((undefined8 *)*unaff_x20 != (undefined8 *)0x0) && (unaff_x20[1] != 0)) {
    lVar3 = 0;
    lVar5 = unaff_x20[1] << 3;
    puVar4 = (undefined8 *)*unaff_x20;
    do {
      uVar6 = *puVar4;
      uVar7 = (ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)((ulong)uVar6 >> 8)) +
                            POPCOUNT((char)((ulong)uVar6 >> 0x10)) +
                            POPCOUNT((char)((ulong)uVar6 >> 0x18)) +
                            POPCOUNT((char)((ulong)uVar6 >> 0x20)) +
                            POPCOUNT((char)((ulong)uVar6 >> 0x28)) +
                            POPCOUNT((char)((ulong)uVar6 >> 0x30)) +
                           POPCOUNT((char)((ulong)uVar6 >> 0x38)));
      bVar2 = SCARRY8(lVar3,uVar7);
      lVar3 = lVar3 + uVar7;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100691afc);
        (*pcVar1)();
      }
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    return lVar3;
  }
  return 0;
}



/* Address: 0x10069106c | FUN_10069106c */

void FUN_10069106c(void)

{
  undefined8 *unaff_x20;
  
  FUN_100691074(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100691074 | FUN_100691074 */

undefined * FUN_100691074(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined auStack_50 [32];
  
  puVar4 = auStack_50;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    puVar7 = (undefined *)0x0;
    lVar5 = param_2 << 3;
    puVar6 = param_1;
    do {
      uVar8 = *puVar6;
      uVar9 = (ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)((ulong)uVar8 >> 8)) +
                            POPCOUNT((char)((ulong)uVar8 >> 0x10)) +
                            POPCOUNT((char)((ulong)uVar8 >> 0x18)) +
                            POPCOUNT((char)((ulong)uVar8 >> 0x20)) +
                            POPCOUNT((char)((ulong)uVar8 >> 0x28)) +
                            POPCOUNT((char)((ulong)uVar8 >> 0x30)) +
                           POPCOUNT((char)((ulong)uVar8 >> 0x38)));
      bVar2 = SCARRY8((long)puVar7,uVar9);
      puVar7 = puVar7 + uVar9;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100691124);
        (*pcVar1)();
      }
      lVar5 = lVar5 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
    if (puVar7 != (undefined *)0x0) {
      puVar3 = puVar7;
      FUN_100691bdc(puVar7,0);
      FUN_1006908f0(auStack_50,puVar3 + 0x20,puVar7,param_1,param_2);
      if (puVar4 != puVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100691128);
        (*pcVar1)();
      }
    }
  }
  return puVar3;
}



/* Address: 0x100691128 | FUN_100691128 */

void FUN_100691128(void)

{
  FUN_1006908f0();
  return;
}



/* Address: 0x100691130 | FUN_100691130 */

bool FUN_100691130(long *param_1,long param_2)

{
  if (param_2 == 0) {
    return true;
  }
  do {
    param_2 = param_2 + -1;
    if (*param_1 != 0) {
      return *param_1 == 0;
    }
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return true;
}


