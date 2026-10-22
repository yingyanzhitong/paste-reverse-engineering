/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100887f2c | FUN_100887f2c */

void FUN_100887f2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80138;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80138,&DAT_100f09328);
  DAT_100fe9608 = pTVar1;
  return;
}



/* Address: 0x100887f6c | thunk_FUN_100887f70 */

void thunk_FUN_100887f70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9650 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80230;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80230,&DAT_100f09350);
  DAT_100fe9650 = pTVar1;
  return;
}



/* Address: 0x100887f70 | FUN_100887f70 */

void FUN_100887f70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9650 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80230;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80230,&DAT_100f09350);
  DAT_100fe9650 = pTVar1;
  return;
}



/* Address: 0x100887fb0 | FUN_100887fb0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100887fb0(void)

{
  return ZEXT816(0x100fe9698);
}



/* Address: 0x100887fd0 | thunk_FUN_10002ce28 */

int thunk_FUN_10002ce28(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10002cea4;
        goto LAB_10002ce88;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10002ce88:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10002cea4:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100887fd4 | FUN_100887fd4 */

undefined1  [16] FUN_100887fd4(void)

{
  return ZEXT816(0x100f092a8);
}



/* Address: 0x100887fe4 | FUN_100887fe4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100887fe4(void)

{
  return ZEXT816(0x100fe9740);
}



/* Address: 0x100888004 | FUN_100888004 */

undefined1  [16] FUN_100888004(void)

{
  return ZEXT816(0x100f09328);
}



/* Address: 0x100888014 | FUN_100888014 */

undefined1  [16] FUN_100888014(void)

{
  return ZEXT816(0x100f09350);
}



/* Address: 0x100888024 | FUN_100888024 */

undefined1  [16] FUN_100888024(void)

{
  return ZEXT816(0x100f093e8);
}



/* Address: 0x100888034 | thunk_FUN_100888038 */

void thunk_FUN_100888038(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe97b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80378;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80378,&DAT_100f093e8);
  DAT_100fe97b8 = pTVar1;
  return;
}



/* Address: 0x100888038 | FUN_100888038 */

void FUN_100888038(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe97b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80378;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80378,&DAT_100f093e8);
  DAT_100fe97b8 = pTVar1;
  return;
}



/* Address: 0x100888078 | FUN_100888078 */

void FUN_100888078(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + 0x51);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x10);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
    if ((*(char *)(unaff_x20 + 0x30) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x38) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x38) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  (ulong)*(uint7 *)(unaff_x20 + 0x20));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100888110 | FUN_100888110 */

void FUN_100888110(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x3c) {
    return;
  }
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100888124 | FUN_100888124 */

void FUN_100888124(void)

{
  undefined *puVar1;
  
  if (DAT_100fe97c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fe97c0 = puVar1;
  return;
}



/* Address: 0x100888164 | FUN_100888164 */

void FUN_100888164(void)

{
  FUN_100893c88();
  return;
}



/* Address: 0x10088816c | FUN_10088816c */

void FUN_10088816c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100888198 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x10088819c | FUN_10088819c */

void FUN_10088819c(void)

{
  long unaff_x20;
  
  thunk_FUN_10064bebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008881a8 | FUN_1008881a8 */

void FUN_1008881a8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008881dc | thunk_FUN_100888214 */

void thunk_FUN_100888214(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008881e0 | FUN_1008881e0 */

void FUN_1008881e0(void)

{
  long unaff_x20;
  
  FUN_100884f44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_1006303f4);
  return;
}



/* Address: 0x100888204 | thunk_FUN_100888248 */

void thunk_FUN_100888248(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100888208 | FUN_100888208 */

void FUN_100888208(void)

{
  FUN_100888284(FUN_1006303f4);
  return;
}



/* Address: 0x100888214 | FUN_100888214 */

void FUN_100888214(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100888248 | FUN_100888248 */

void FUN_100888248(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100888284 | FUN_100888284 */

void FUN_100888284(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100885884(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),param_1);
  return;
}



/* Address: 0x1008882a4 | thunk_FUN_10044b3c4 */

void thunk_FUN_10044b3c4(void)

{
  thunk_FUN_10044b3c4();
  return;
}



/* Address: 0x1008882a8 | thunk_FUN_100528c10 */

void thunk_FUN_100528c10(void)

{
  FUN_100528c10();
  return;
}



/* Address: 0x1008882ac | thunk_FUN_100528d44 */

void thunk_FUN_100528d44(void)

{
  FUN_100528d44();
  return;
}



/* Address: 0x1008882b0 | thunk_FUN_100884248 */

void thunk_FUN_100884248(void)

{
  thunk_FUN_100884248();
  return;
}



/* Address: 0x1008882b4 | thunk_FUN_100885460 */

void thunk_FUN_100885460(undefined8 param_1)

{
  FUN_1008854b0(param_1,&DAT_100fe95a8,&DAT_100c80030);
  return;
}



/* Address: 0x1008882b8 | thunk_FUN_100885474 */

void thunk_FUN_100885474(undefined8 param_1)

{
  FUN_1008854b0(param_1,&DAT_100fe95b0,&DAT_100c80420);
  return;
}



/* Address: 0x1008882bc | thunk_FUN_100885488 */

void thunk_FUN_100885488(undefined8 param_1)

{
  FUN_1008854b0(param_1,&DAT_100fe90f8,&DAT_100c7f5d0);
  return;
}



/* Address: 0x1008882c0 | thunk_FUN_10088549c */

void thunk_FUN_10088549c(undefined8 param_1)

{
  FUN_1008854b0(param_1,&DAT_100fe9100,&DAT_100c803a0);
  return;
}



/* Address: 0x1008882c4 | thunk_FUN_10044b354 */

void thunk_FUN_10044b354(void)

{
  thunk_FUN_10044b354();
  return;
}



/* Address: 0x1008882c8 | thunk_FUN_10002ce28 */

void thunk_FUN_10002ce28(void)

{
  thunk_FUN_10002ce28();
  return;
}



/* Address: 0x1008882cc | thunk_FUN_100883acc */

void thunk_FUN_100883acc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                        undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(int *)(param_1 + 2) = (int)param_4;
  *(char *)((long)param_1 + 0x16) = (char)((ulong)param_4 >> 0x30);
  *(short *)((long)param_1 + 0x14) = (short)((ulong)param_4 >> 0x20);
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  FUN_100656200();
  return;
}



/* Address: 0x1008882d0 | thunk_FUN_100528d68 */

void thunk_FUN_100528d68(void)

{
  thunk_FUN_100528d68();
  return;
}



/* Address: 0x1008882d4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008882d8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008882dc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008882e0 | thunk_FUN_100888214 */

void thunk_FUN_100888214(void)

{
  thunk_FUN_100888214();
  return;
}



/* Address: 0x1008882e4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008882e8 | thunk_FUN_100888248 */

void thunk_FUN_100888248(void)

{
  thunk_FUN_100888248();
  return;
}



/* Address: 0x1008882ec | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008882f0 | thunk_FUN_1005290b8 */

void thunk_FUN_1005290b8(void)

{
  FUN_1005290b8();
  return;
}



/* Address: 0x1008882f4 | thunk_FUN_10088819c */

void thunk_FUN_10088819c(void)

{
  long unaff_x20;
  
  thunk_FUN_10064bebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008882f8 | thunk_FUN_100888d78 */

void thunk_FUN_100888d78(void)

{
  FUN_100888d78();
  return;
}



/* Address: 0x1008882fc | FUN_1008882fc */

void FUN_1008882fc(void)

{
  FUN_100888930();
  return;
}



/* Address: 0x100888318 | FUN_100888318 */

void FUN_100888318(void)

{
  FUN_10087665c();
  return;
}



/* Address: 0x10088832c | FUN_10088832c */

void FUN_10088832c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x20;
  code *pcVar14;
  ulong uVar15;
  
  puVar4 = &DAT_100fe95b0;
  puVar9 = &DAT_100c80420;
  lVar11 = param_3;
  FUN_1000f7830();
  thunk_FUN_100885474();
  cVar2 = *(char *)(unaff_x20 + 0x10);
  cVar3 = (char)((ulong)lVar11 >> 0x38);
  if (cVar3 == '\0') {
    if (cVar2 != '\x01') {
      lVar11 = *(long *)(puVar9 + 0x10);
      puVar13 = (undefined8 *)(puVar9 + 0x38);
      uVar15 = 0xffffffffffffffff;
      do {
        if (uVar15 - lVar11 == -1) {
          if (0x3b < *(ulong *)(puVar4 + 0x20)) {
            puVar7 = *(undefined **)(puVar4 + 0x18);
            FUN_100870388();
            if (((ulong)puVar7 & 1) != 0) break;
          }
          FUN_100626ebc(param_2,param_3);
          _swift_bridgeObjectRelease(puVar9);
          _swift_release(puVar4);
          return;
        }
        uVar15 = uVar15 + 1;
        if (*(ulong *)(puVar9 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x100888910);
          (*pcVar14)();
        }
        uVar6 = puVar13[-1];
        puVar7 = (undefined *)*puVar13;
        uVar5 = puVar13[-3];
        uVar10 = puVar13[-2];
        _swift_bridgeObjectRetain(uVar10);
        _swift_bridgeObjectRetain(puVar7);
        FUN_1008893d4(uVar5,uVar10);
        _swift_bridgeObjectRelease(uVar10);
        if ((uVar5 & 1) == 0) {
          _swift_bridgeObjectRelease();
          break;
        }
        puVar13 = puVar13 + 4;
        FUN_1008892dc(uVar6,puVar7);
        _swift_bridgeObjectRelease();
      } while ((uVar6 & 1) != 0);
      *(undefined1 *)(unaff_x20 + 0x10) = 1;
      puVar8 = puVar7;
      if (param_3 != 0) {
        FUN_100881fac();
        puVar8 = &DAT_100f0ace8;
        uVar10 = 0;
        _swift_allocError(&DAT_100f0ace8,puVar7,0,0);
        *puVar7 = 0xf;
        uVar15 = *(ulong *)(param_3 + 0x20);
        lVar11 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar6 = uVar15;
        lVar12 = lVar11;
        (**(code **)(lVar11 + 0x10))();
        if ((uVar6 & 1) == 0) {
          puVar7 = &DAT_100f096f8;
          _swift_allocObject(&DAT_100f096f8,0x20,7);
          *(long *)(puVar7 + 0x10) = param_3;
          *(undefined **)(puVar7 + 0x18) = puVar8;
          pcVar14 = *(code **)(lVar11 + 0x18);
          _swift_retain(param_3);
          _swift_errorRetain(puVar8);
          (*pcVar14)(thunk_FUN_1008777d0,puVar7,uVar15,lVar11);
          _swift_release(puVar7);
        }
        else {
          puVar7 = puVar8;
          FUN_1005de8f4(puVar8);
          FUN_1006486f8();
          FUN_100004550(puVar7,lVar12);
          _swift_bridgeObjectRelease(uVar10);
        }
        _swift_errorRelease();
      }
      FUN_100881fac();
      puVar7 = &DAT_100f0ace8;
      _swift_allocError(&DAT_100f0ace8,puVar8,0,0);
      *puVar8 = 0xf;
      FUN_100626c9c();
      _swift_bridgeObjectRelease(puVar9);
      _swift_release(puVar4);
      goto LAB_1008888ec;
    }
    _swift_bridgeObjectRelease(puVar9);
    _swift_release();
joined_r0x0001008883cc:
    if (param_3 != 0) {
      FUN_100881fac();
      puVar7 = &DAT_100f0ace8;
      uVar10 = 0;
      _swift_allocError(&DAT_100f0ace8,puVar4,0,0);
      *puVar4 = 0xf;
      uVar15 = *(ulong *)(param_3 + 0x20);
      lVar11 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar6 = uVar15;
      lVar12 = lVar11;
      (**(code **)(lVar11 + 0x10))();
      if ((uVar6 & 1) == 0) {
        puVar4 = &DAT_100f096a8;
        _swift_allocObject(&DAT_100f096a8,0x20,7);
        *(long *)(puVar4 + 0x10) = param_3;
        *(undefined **)(puVar4 + 0x18) = puVar7;
        pcVar14 = *(code **)(lVar11 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(puVar7);
        (*pcVar14)(FUN_1008777d0,puVar4,uVar15,lVar11);
        _swift_release(puVar4);
      }
      else {
        puVar4 = puVar7;
        FUN_1005de8f4(puVar7);
        FUN_1006486f8();
        FUN_100004550(puVar4,lVar12);
        _swift_bridgeObjectRelease(uVar10);
      }
LAB_1008888ec:
      _swift_errorRelease(puVar7);
      return;
    }
  }
  else {
    if (cVar3 == '\x01') {
      FUN_100878fe8();
      if (cVar2 == '\x01') goto joined_r0x0001008883cc;
    }
    else {
      if (cVar2 == '\x01') {
        FUN_100878fe8();
        goto joined_r0x0001008883cc;
      }
      if (puVar4 != (undefined *)0x0) {
        lVar12 = *(long *)(puVar4 + 0x10);
        puVar13 = (undefined8 *)(puVar4 + 0x38);
        uVar15 = 0xffffffffffffffff;
        do {
          if (uVar15 - lVar12 == -1) {
            FUN_100878fe8();
            goto LAB_100888788;
          }
          uVar15 = uVar15 + 1;
          if (*(ulong *)(puVar4 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100888914);
            (*pcVar14)();
          }
          uVar6 = puVar13[-1];
          uVar10 = *puVar13;
          uVar5 = puVar13[-3];
          uVar1 = puVar13[-2];
          _swift_bridgeObjectRetain(uVar1);
          _swift_bridgeObjectRetain(uVar10);
          FUN_1008893d4(uVar5,uVar1);
          _swift_bridgeObjectRelease(uVar1);
          if ((uVar5 & 1) == 0) {
            _swift_bridgeObjectRelease(uVar10);
            break;
          }
          puVar13 = puVar13 + 4;
          FUN_1008892dc(uVar6,uVar10);
          _swift_bridgeObjectRelease(uVar10);
        } while ((uVar6 & 1) != 0);
        FUN_100878fe8(puVar4,puVar9,lVar11,2);
        *(undefined1 *)(unaff_x20 + 0x10) = 1;
        puVar9 = puVar4;
        if (param_3 != 0) {
          FUN_100881fac();
          puVar9 = &DAT_100f0ace8;
          uVar10 = 0;
          _swift_allocError(&DAT_100f0ace8,puVar4,0,0);
          *puVar4 = 0xf;
          uVar15 = *(ulong *)(param_3 + 0x20);
          lVar11 = *(long *)(param_3 + 0x28);
          _swift_getObjectType();
          uVar6 = uVar15;
          lVar12 = lVar11;
          (**(code **)(lVar11 + 0x10))();
          if ((uVar6 & 1) == 0) {
            puVar4 = &DAT_100f096d0;
            _swift_allocObject(&DAT_100f096d0,0x20,7);
            *(long *)(puVar4 + 0x10) = param_3;
            *(undefined **)(puVar4 + 0x18) = puVar9;
            pcVar14 = *(code **)(lVar11 + 0x18);
            _swift_retain(param_3);
            _swift_errorRetain(puVar9);
            (*pcVar14)(thunk_FUN_1008777d0,puVar4,uVar15,lVar11);
            _swift_release(puVar4);
          }
          else {
            puVar4 = puVar9;
            FUN_1005de8f4(puVar9);
            FUN_1006486f8();
            FUN_100004550(puVar4,lVar12);
            _swift_bridgeObjectRelease(uVar10);
          }
          _swift_errorRelease();
        }
        FUN_100881fac();
        puVar7 = &DAT_100f0ace8;
        _swift_allocError(&DAT_100f0ace8,puVar9,0,0);
        *puVar9 = 0xf;
        FUN_100626c9c();
        goto LAB_1008888ec;
      }
    }
LAB_100888788:
    FUN_100626ebc(param_2,param_3);
  }
  return;
}



/* Address: 0x100888914 | FUN_100888914 */

void FUN_100888914(void)

{
  FUN_100888930();
  return;
}



/* Address: 0x100888930 | FUN_100888930 */

void FUN_100888930(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_4 >> 0x20);
  uVar1 = (undefined4)param_4;
  FUN_1000f7830();
  (*param_7)();
  *param_1 = param_5;
  param_1[1] = param_6;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(char *)((long)param_1 + 0x16) = (char)((uint)uVar2 >> 0x10);
  *(short *)((long)param_1 + 0x14) = (short)uVar2;
  *(char *)((long)param_1 + 0x17) = (char)((uint)uVar2 >> 0x18);
  return;
}



/* Address: 0x10088898c | thunk_FUN_10088832c */

void thunk_FUN_10088832c(void)

{
  FUN_10088832c();
  return;
}



/* Address: 0x100888990 | FUN_100888990 */

void FUN_100888990(void)

{
  FUN_10087665c();
  return;
}



/* Address: 0x1008889a4 | FUN_1008889a4 */

undefined8 FUN_1008889a4(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar7 = 4L << uVar5;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      uVar6 = (ulong)after.cmsgPointer.unknown & 0xc;
      position.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar6 == uVar7) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      }
      if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100888b88);
        (*pcVar2)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
            UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
          }
        }
        else {
          local_70 = param_1.unknown;
          uStack_68 = param_2 & 0xffffffffffffff;
          UVar4.unknown = (undefined *)&local_70;
        }
        uVar5 = (uint)*(byte *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10))
        ;
        if (uVar6 != uVar7) goto LAB_100888a90;
LAB_100888ae8:
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_100888af8;
LAB_100888a94:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      else {
        _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
        uVar5 = (uint)_Var3;
        if (uVar6 == uVar7) goto LAB_100888ae8;
LAB_100888a90:
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_100888a94;
LAB_100888af8:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100888b8c);
          (*pcVar2)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
      }
      if ((((0x19 < ((uVar5 & 0xffffffdf) - 0x41 & 0xff)) && (9 < (uVar5 - 0x30 & 0xff))) &&
          ((0x3e < uVar5 - 0x21 ||
           ((1L << ((ulong)(uVar5 - 0x21) & 0x3f) & 0x54000000d6007ffdU) == 0)))) && (uVar5 != 0x7e)
         ) {
        return 1;
      }
    } while (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  return 0;
}



/* Address: 0x100888b8c | FUN_100888b8c */

undefined8 FUN_100888b8c(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar7 = 4L << uVar5;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      uVar6 = (ulong)after.cmsgPointer.unknown & 0xc;
      position.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar6 == uVar7) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      }
      if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100888d74);
        (*pcVar2)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
            UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
          }
        }
        else {
          local_70 = param_1.unknown;
          uStack_68 = param_2 & 0xffffffffffffff;
          UVar4.unknown = (undefined *)&local_70;
        }
        uVar5 = (uint)*(byte *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10))
        ;
        if (uVar6 != uVar7) goto LAB_100888c74;
LAB_100888ccc:
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_100888cdc;
LAB_100888c78:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      else {
        _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
        uVar5 = (uint)_Var3;
        if (uVar6 == uVar7) goto LAB_100888ccc;
LAB_100888c74:
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_100888c78;
LAB_100888cdc:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100888d78);
          (*pcVar2)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
      }
      if ((((0x19 < ((uVar5 & 0xffffffdf) - 0x41 & 0xff)) && (9 < (uVar5 - 0x30 & 0xff))) &&
          ((0x3f < uVar5 - 0x21 ||
           ((1L << ((ulong)(uVar5 - 0x21) & 0x3f) & 0xe00000000000367dU) == 0)))) &&
         ((uVar5 != 0x7e && (uVar5 != 0x7c)))) {
        return 1;
      }
    } while (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  return 0;
}



/* Address: 0x100888d78 | FUN_100888d78 */

void FUN_100888d78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  code *pcVar13;
  ulong uVar14;
  
  puVar3 = &DAT_100fe95a8;
  puVar8 = &DAT_100c80030;
  lVar11 = param_3;
  FUN_1000f7830();
  thunk_FUN_100885460();
  cVar2 = (char)((ulong)lVar11 >> 0x38);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      FUN_100878fe8(puVar3,puVar8,lVar11,1);
    }
    else if (puVar3 != (undefined *)0x0) {
      lVar10 = *(long *)(puVar3 + 0x10);
      puVar12 = (undefined8 *)(puVar3 + 0x38);
      uVar14 = 0xffffffffffffffff;
      while( true ) {
        if (uVar14 - lVar10 == -1) {
          FUN_100878fe8(puVar3,puVar8,lVar11,2);
          goto LAB_100889144;
        }
        uVar14 = uVar14 + 1;
        if (*(ulong *)(puVar3 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100889230);
          (*pcVar13)();
        }
        uVar7 = puVar12[-1];
        uVar9 = *puVar12;
        uVar6 = puVar12[-3];
        uVar1 = puVar12[-2];
        _swift_bridgeObjectRetain(uVar1);
        _swift_bridgeObjectRetain(uVar9);
        FUN_1008893d4(uVar6,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        if ((uVar6 & 1) == 0) break;
        puVar12 = puVar12 + 4;
        FUN_1008892dc(uVar7,uVar9);
        _swift_bridgeObjectRelease(uVar9);
        if ((uVar7 & 1) == 0) {
LAB_100889098:
          FUN_100878fe8(puVar3,puVar8,lVar11,2);
          puVar8 = puVar3;
          if (param_3 != 0) {
            FUN_100881fac();
            puVar8 = &DAT_100f0ace8;
            uVar9 = 0;
            _swift_allocError(&DAT_100f0ace8,puVar3,0,0);
            *puVar3 = 0xf;
            uVar14 = *(ulong *)(param_3 + 0x20);
            lVar11 = *(long *)(param_3 + 0x28);
            _swift_getObjectType();
            uVar7 = uVar14;
            lVar10 = lVar11;
            (**(code **)(lVar11 + 0x10))();
            if ((uVar7 & 1) == 0) {
              puVar3 = &DAT_100f098b0;
              _swift_allocObject(&DAT_100f098b0,0x20,7);
              *(long *)(puVar3 + 0x10) = param_3;
              *(undefined **)(puVar3 + 0x18) = puVar8;
              pcVar13 = *(code **)(lVar11 + 0x18);
              _swift_retain(param_3);
              _swift_errorRetain(puVar8);
              (*pcVar13)(thunk_FUN_1008777d0,puVar3,uVar14,lVar11);
              _swift_release(puVar3);
            }
            else {
              puVar3 = puVar8;
              FUN_1005de8f4(puVar8);
              FUN_1006486f8();
              FUN_100004550(puVar3,lVar10);
              _swift_bridgeObjectRelease(uVar9);
            }
            _swift_errorRelease();
          }
          FUN_100881fac();
          puVar3 = &DAT_100f0ace8;
          _swift_allocError(&DAT_100f0ace8,puVar8,0,0);
          *puVar8 = 0xf;
          FUN_100626c9c();
          _swift_errorRelease(puVar3);
          return;
        }
      }
      _swift_bridgeObjectRelease(uVar9);
      goto LAB_100889098;
    }
LAB_100889144:
    FUN_100626ebc(param_2,param_3);
    return;
  }
  puVar5 = *(undefined **)(puVar3 + 0x20);
  FUN_1008889a4(puVar5,*(undefined8 *)(puVar3 + 0x28));
  if (((ulong)puVar5 & 1) == 0) {
    if (0x21 < *(ulong *)(puVar3 + 0x18)) {
      puVar5 = *(undefined **)(puVar3 + 0x10);
      FUN_100888b8c();
      if (((ulong)puVar5 & 1) != 0) goto LAB_100888e04;
    }
    lVar11 = *(long *)(puVar8 + 0x10);
    puVar12 = (undefined8 *)(puVar8 + 0x38);
    uVar14 = 0xffffffffffffffff;
    do {
      if (uVar14 - lVar11 == -1) {
        _swift_bridgeObjectRelease(puVar8);
        _swift_release(puVar3);
        goto LAB_100889144;
      }
      uVar14 = uVar14 + 1;
      if (*(ulong *)(puVar8 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100889234);
        (*pcVar13)();
      }
      uVar7 = puVar12[-1];
      puVar5 = (undefined *)*puVar12;
      uVar6 = puVar12[-3];
      uVar9 = puVar12[-2];
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(puVar5);
      FUN_1008893d4(uVar6,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease();
        break;
      }
      puVar12 = puVar12 + 4;
      FUN_1008892dc(uVar7,puVar5);
      _swift_bridgeObjectRelease();
    } while ((uVar7 & 1) != 0);
  }
LAB_100888e04:
  puVar4 = puVar5;
  if (param_3 != 0) {
    FUN_100881fac();
    puVar4 = &DAT_100f0ace8;
    uVar9 = 0;
    _swift_allocError(&DAT_100f0ace8,puVar5,0,0);
    *puVar5 = 0xf;
    uVar14 = *(ulong *)(param_3 + 0x20);
    lVar11 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar7 = uVar14;
    lVar10 = lVar11;
    (**(code **)(lVar11 + 0x10))();
    if ((uVar7 & 1) == 0) {
      puVar5 = &DAT_100f098d8;
      _swift_allocObject(&DAT_100f098d8,0x20,7);
      *(long *)(puVar5 + 0x10) = param_3;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      pcVar13 = *(code **)(lVar11 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(puVar4);
      (*pcVar13)(thunk_FUN_1008777d0,puVar5,uVar14,lVar11);
      _swift_release(puVar5);
    }
    else {
      puVar5 = puVar4;
      FUN_1005de8f4(puVar4);
      FUN_1006486f8();
      FUN_100004550(puVar5,lVar10);
      _swift_bridgeObjectRelease(uVar9);
    }
    _swift_errorRelease();
  }
  FUN_100881fac();
  puVar5 = &DAT_100f0ace8;
  _swift_allocError(&DAT_100f0ace8,puVar4,0,0);
  *puVar4 = 0xf;
  FUN_100626c9c();
  _swift_errorRelease(puVar5);
  _swift_bridgeObjectRelease(puVar8);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100889234 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x100889238 | FUN_100889238 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100889238(void)

{
  return ZEXT816(0x100fe98b0);
}



/* Address: 0x100889258 | FUN_100889258 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100889258(void)

{
  return ZEXT816(0x100fe9948);
}



/* Address: 0x100889278 | FUN_100889278 */

undefined1  [16] FUN_100889278(void)

{
  return ZEXT816(0x100f09890);
}



/* Address: 0x100889288 | thunk_FUN_10088928c */

void thunk_FUN_10088928c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe99a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80568;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80568,&DAT_100f09890);
  DAT_100fe99a8 = pTVar1;
  return;
}


