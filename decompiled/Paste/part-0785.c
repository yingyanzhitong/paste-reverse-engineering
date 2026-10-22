/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008a637c | thunk_FUN_1004fd2c8 */

void thunk_FUN_1004fd2c8(void)

{
  thunk_FUN_1004fd2c8();
  return;
}



/* Address: 0x1008a6380 | thunk_FUN_1008a601c */

void thunk_FUN_1008a601c(void)

{
  thunk_FUN_1008a601c();
  return;
}



/* Address: 0x1008a6384 | thunk_FUN_1008a8480 */

void thunk_FUN_1008a8480(void)

{
  FUN_1008a8480();
  return;
}



/* Address: 0x1008a6388 | FUN_1008a6388 */

undefined * FUN_1008a6388(void)

{
  return &DAT_100c818a0;
}



/* Address: 0x1008a6394 | FUN_1008a6394 */

undefined * FUN_1008a6394(void)

{
  return &DAT_100c818a1;
}



/* Address: 0x1008a63a0 | FUN_1008a63a0 */

undefined * FUN_1008a63a0(void)

{
  return &DAT_100c818a2;
}



/* Address: 0x1008a63ac | FUN_1008a63ac */

undefined * FUN_1008a63ac(void)

{
  return &DAT_100c818a3;
}



/* Address: 0x1008a63b8 | FUN_1008a63b8 */

undefined * FUN_1008a63b8(void)

{
  return &DAT_100c818a4;
}



/* Address: 0x1008a63c4 | FUN_1008a63c4 */

undefined * FUN_1008a63c4(void)

{
  return &DAT_100c818a5;
}



/* Address: 0x1008a63d0 | FUN_1008a63d0 */

undefined * FUN_1008a63d0(void)

{
  return &DAT_100c818a6;
}



/* Address: 0x1008a63dc | FUN_1008a63dc */

undefined * FUN_1008a63dc(void)

{
  return &DAT_100c818a7;
}



/* Address: 0x1008a63e8 | FUN_1008a63e8 */

String FUN_1008a63e8(undefined1 param_1)

{
  String SVar1;
  undefined1 local_11;
  
  local_11 = param_1;
  SVar1 = Swift::String::_init(&local_11,&DAT_100f0b380);
  return SVar1;
}



/* Address: 0x1008a6414 | FUN_1008a6414 */

String FUN_1008a6414(void)

{
  undefined1 *unaff_x20;
  String SVar1;
  undefined1 local_11;
  
  local_11 = *unaff_x20;
  SVar1 = Swift::String::_init(&local_11,&DAT_100f0b380);
  return SVar1;
}



/* Address: 0x1008a6444 | FUN_1008a6444 */

void FUN_1008a6444(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  long unaff_x20;
  code *pcVar9;
  code *pcVar10;
  undefined1 auStack_98 [72];
  
  lVar8 = *(long *)(unaff_x20 + 0x38);
  if (lVar8 < 3) {
    if (lVar8 == 0) {
      FUN_1008a679c(auStack_98,param_2);
      FUN_100626ebc(auStack_98,param_3);
      FUN_1005e70f4(auStack_98);
      return;
    }
    if (lVar8 == 1) goto LAB_1008a6520;
LAB_1008a65f4:
    puVar1 = param_1;
    if (param_3 != 0) {
      FUN_1008a869c();
      puVar1 = &DAT_100f0b258;
      uVar6 = 0;
      _swift_allocError(&DAT_100f0b258,param_1,0,0);
      *param_1 = 3;
      uVar2 = *(ulong *)(param_3 + 0x20);
      lVar8 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar3 = uVar2;
      lVar5 = lVar8;
      (**(code **)(lVar8 + 0x10))();
      if ((uVar3 & 1) == 0) {
        puVar4 = &DAT_100f0b100;
        _swift_allocObject(&DAT_100f0b100,0x20,7);
        *(long *)(puVar4 + 0x10) = param_3;
        *(undefined **)(puVar4 + 0x18) = puVar1;
        pcVar10 = *(code **)(lVar8 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(puVar1);
        (*pcVar10)(thunk_FUN_1008777d0,puVar4,uVar2,lVar8);
        _swift_release(puVar4);
      }
      else {
        puVar4 = puVar1;
        FUN_1005de8f4(puVar1);
        FUN_1006486f8();
        FUN_100004550(puVar4,lVar5);
        _swift_bridgeObjectRelease(uVar6);
      }
      _swift_errorRelease();
    }
    FUN_1008a869c();
    puVar4 = &DAT_100f0b258;
    _swift_allocError(&DAT_100f0b258,puVar1,0,0);
    uVar7 = 3;
  }
  else {
    if (lVar8 == 3) {
LAB_1008a6520:
      FUN_100626ebc(param_2,param_3);
      return;
    }
    if (lVar8 == 4) {
      if (param_3 != 0) {
        FUN_1008a869c();
        puVar1 = &DAT_100f0b258;
        uVar6 = 0;
        _swift_allocError(&DAT_100f0b258,param_1,0,0);
        *param_1 = 4;
        uVar2 = *(ulong *)(param_3 + 0x20);
        lVar8 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar3 = uVar2;
        lVar5 = lVar8;
        (**(code **)(lVar8 + 0x10))();
        if ((uVar3 & 1) == 0) {
          puVar4 = &DAT_100f0b0d8;
          _swift_allocObject(&DAT_100f0b0d8,0x20,7);
          *(long *)(puVar4 + 0x10) = param_3;
          *(undefined **)(puVar4 + 0x18) = puVar1;
          pcVar9 = *(code **)(lVar8 + 0x18);
          _swift_retain(param_3);
          _swift_errorRetain(puVar1);
          pcVar10 = thunk_FUN_1008777d0;
          goto LAB_1008a66ac;
        }
LAB_1008a6580:
        puVar4 = puVar1;
        FUN_1005de8f4(puVar1);
        FUN_1006486f8();
        FUN_100004550(puVar4,lVar5);
        _swift_bridgeObjectRelease(uVar6);
        param_1 = puVar1;
LAB_1008a66c4:
        _swift_errorRelease();
      }
    }
    else {
      if (lVar8 != 5) goto LAB_1008a65f4;
      if (param_3 != 0) {
        FUN_1008a869c();
        puVar1 = &DAT_100f0b258;
        uVar6 = 0;
        _swift_allocError(&DAT_100f0b258,param_1,0,0);
        *param_1 = 4;
        uVar2 = *(ulong *)(param_3 + 0x20);
        lVar8 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar3 = uVar2;
        lVar5 = lVar8;
        (**(code **)(lVar8 + 0x10))();
        if ((uVar3 & 1) != 0) goto LAB_1008a6580;
        puVar4 = &DAT_100f0b0b0;
        _swift_allocObject(&DAT_100f0b0b0,0x20,7);
        *(long *)(puVar4 + 0x10) = param_3;
        *(undefined **)(puVar4 + 0x18) = puVar1;
        pcVar9 = *(code **)(lVar8 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(puVar1);
        pcVar10 = FUN_1008777d0;
LAB_1008a66ac:
        (*pcVar9)(pcVar10,puVar4,uVar2,lVar8);
        _swift_release(puVar4);
        param_1 = puVar1;
        goto LAB_1008a66c4;
      }
    }
    FUN_1008a869c();
    puVar4 = &DAT_100f0b258;
    _swift_allocError(&DAT_100f0b258,param_1,0,0);
    uVar7 = 4;
    puVar1 = param_1;
  }
  *puVar1 = uVar7;
  FUN_100626c9c();
  _swift_errorRelease(puVar4);
  return;
}



/* Address: 0x1008a679c | FUN_1008a679c */

void FUN_1008a679c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *local_68;
  undefined *puStack_60;
  byte local_58;
  
  puVar6 = &DAT_100fe95a8;
  puVar8 = &DAT_100c80030;
  FUN_1000f7830();
  puVar7 = puVar6;
  thunk_FUN_100885460();
  if (param_4 >> 0x38 == 0) {
    local_58 = (byte)param_4;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 1;
    local_68 = puVar7;
    puStack_60 = puVar8;
    _swift_retain();
    _swift_bridgeObjectRetain(puVar8);
    FUN_1008a86e8(uVar1,uVar2);
    FUN_1008a68ac(&local_68);
    FUN_1008a6ae8(&local_68);
    bVar5 = local_58;
    puVar4 = puStack_60;
    puVar3 = local_68;
    param_1[3] = puVar6;
    FUN_100878fe8(puVar7,puVar8,param_4,0);
    *param_1 = puVar3;
    param_1[1] = puVar4;
    *(uint *)(param_1 + 2) = (uint)bVar5;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    *(undefined1 *)((long)param_1 + 0x41) = 2;
    return;
  }
  FUN_100878fe8();
  FUN_1005e650c(param_2,param_1);
  return;
}



/* Address: 0x1008a68ac | FUN_1008a68ac */

void FUN_1008a68ac(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  undefined *local_88 [3];
  long local_70;
  long lStack_68;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar11 = *(long *)(lVar8 + 0x10);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar11 != 0) {
    lVar9 = lVar8 + 0x20;
    _swift_bridgeObjectRetain(lVar8);
    puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      FUN_100076688(lVar9,local_88);
      lVar10 = lStack_68;
      lVar2 = local_70;
      FUN_100004640(local_88,local_70);
      (**(code **)(lVar10 + 0x10))(lVar2,lVar10);
      FUN_100004594(local_88);
      uVar6 = *(ulong *)(lVar2 + 0x10);
      lVar10 = *(long *)(puVar7 + 0x10);
      if (SCARRY8(lVar10,uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a6adc);
        (*pcVar1)();
      }
      puVar3 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar3 == 0) ||
         (uVar5 = *(ulong *)(puVar7 + 0x18) >> 1, (long)uVar5 < (long)(lVar10 + uVar6))) {
        FUN_100880724();
        uVar5 = *(ulong *)(puVar3 + 0x18) >> 1;
        puVar7 = puVar3;
        if (*(long *)(lVar2 + 0x10) != 0) goto LAB_1008a69b0;
LAB_1008a68fc:
        _swift_bridgeObjectRelease(lVar2);
        puVar3 = puVar7;
        if (uVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a6ae0);
          (*pcVar1)();
        }
      }
      else {
        puVar3 = puVar7;
        if (*(long *)(lVar2 + 0x10) == 0) goto LAB_1008a68fc;
LAB_1008a69b0:
        if (uVar5 - *(long *)(puVar3 + 0x10) < uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a6ae4);
          (*pcVar1)();
        }
        _swift_arrayInitWithCopy
                  (puVar3 + *(long *)(puVar3 + 0x10) * 0x10 + 0x20,lVar2 + 0x20,uVar6,puVar4);
        _swift_bridgeObjectRelease(lVar2);
        if (uVar6 != 0) {
          if (SCARRY8(*(long *)(puVar3 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a6ae8);
            (*pcVar1)();
          }
          *(ulong *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + uVar6;
        }
      }
      lVar9 = lVar9 + 0x28;
      lVar11 = lVar11 + -1;
      puVar7 = puVar3;
    } while (lVar11 != 0);
    _swift_bridgeObjectRelease(lVar8);
  }
  puVar4 = &DAT_100fe9598;
  FUN_1000f7830(&DAT_100fe9598,&DAT_100c7fd10);
  _swift_initStaticObject();
  local_88[0] = puVar4;
  FUN_10089fc04(puVar3);
  puVar3 = local_88[0];
  FUN_1000f7830(&DAT_100fea3a8,&DAT_100c81b18);
  FUN_1008a8ab8();
  SVar12.bridgeObject = (void *)0xe100000000000000;
  SVar12.str = (char *)0x2c;
  SVar12 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar12);
  _swift_bridgeObjectRelease(puVar3);
  FUN_10089f74c(0x697463656e6e6f43,0xea00000000006e6f,SVar12.str,SVar12.bridgeObject);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  return;
}



/* Address: 0x1008a6ae8 | FUN_1008a6ae8 */

void FUN_1008a6ae8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  void *pvVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  String SVar10;
  String separator;
  undefined *local_b0 [3];
  undefined8 local_98;
  long lStack_90;
  undefined *local_88 [3];
  char *local_70;
  void *pvStack_68;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(lVar8 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar9 != 0) {
    local_b0[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRetain(lVar8);
    FUN_100892608(0,lVar9,0);
    lVar7 = lVar8 + 0x20;
    do {
      puVar6 = local_b0[0];
      FUN_100076688(lVar7,local_88);
      pvVar5 = pvStack_68;
      pcVar4 = local_70;
      FUN_100004640(local_88,local_70);
      (**(code **)((long)pvVar5 + 8))();
      SVar10.bridgeObject = pvVar5;
      SVar10.str = pcVar4;
      SVar10 = Swift::String::lowercased(SVar10);
      _swift_bridgeObjectRelease(pvVar5);
      FUN_100004594(local_88);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      local_b0[0] = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_100892608(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = local_b0[0];
      *(ulong *)(local_b0[0] + 0x10) = uVar1 + 1;
      *(String *)(local_b0[0] + uVar1 * 0x10 + 0x20) = SVar10;
      lVar7 = lVar7 + 0x28;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    _swift_bridgeObjectRelease(lVar8);
  }
  local_88[0] = puVar6;
  FUN_1000f7830(&DAT_100fea3a8,&DAT_100c81b18);
  FUN_1008a8ab8();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x2c;
  SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(puVar6);
  FUN_10089f74c(0x65646172677055,&DAT_e700000000000000,SVar10.str,SVar10.bridgeObject);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(lVar8 + 0x10);
  if (lVar9 != 0) {
    lVar7 = lVar8 + 0x20;
    _swift_bridgeObjectRetain(lVar8);
    do {
      FUN_100076688(lVar7,local_88);
      FUN_100076508(local_88,local_b0);
      lVar3 = lStack_90;
      uVar2 = local_98;
      FUN_100004640(local_b0,local_98);
      (**(code **)(lVar3 + 0x18))(param_1 + 8,uVar2,lVar3);
      FUN_100004594(local_b0);
      lVar7 = lVar7 + 0x28;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    _swift_bridgeObjectRelease(lVar8);
  }
  return;
}



/* Address: 0x1008a6d00 | FUN_1008a6d00 */

void FUN_1008a6d00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  if ((*(byte *)(unaff_x20 + 0x30) & 1) != 0) {
    _swift_beginAccess(unaff_x20 + 0x48,auStack_78,0x21,0);
    FUN_10087d04c(param_2);
    _swift_endAccess(auStack_78);
    return;
  }
  puVar3 = &DAT_100fe9100;
  puVar6 = &DAT_100c803a0;
  FUN_1000f7830(&DAT_100fe9100,&DAT_100c803a0);
  thunk_FUN_10088549c();
  uVar8 = param_3 >> 0x38;
  pcVar1 = *(code **)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar4 = puVar3;
  if ((long)pcVar1 < 2) {
    if (pcVar1 == (code *)0x0) {
      FUN_1008a869c();
      puVar5 = &DAT_100f0b258;
      _swift_allocError(&DAT_100f0b258,puVar4,0,0);
      uVar7 = 6;
LAB_1008a6f04:
      *puVar4 = uVar7;
      FUN_100626c9c();
      FUN_100877974(puVar3,puVar6,param_3,uVar8);
      _swift_errorRelease(puVar5);
      return;
    }
    if (pcVar1 == (code *)&DAT_00000001) {
      FUN_1008a6f48(param_1,puVar3,puVar6,param_3);
      goto LAB_1008a6e94;
    }
  }
  else {
    if (pcVar1 + -2 < (code *)0x2) {
      if (uVar8 == 2) {
        FUN_100877974();
        *(undefined1 *)(unaff_x20 + 0x30) = 1;
        return;
      }
      goto LAB_1008a6e94;
    }
    if (pcVar1 == (code *)0x4) {
      FUN_1008a869c();
      puVar5 = &DAT_100f0b258;
      _swift_allocError(&DAT_100f0b258,puVar4,0,0);
      uVar7 = 7;
      goto LAB_1008a6f04;
    }
    if (pcVar1 == (code *)0x5) {
      FUN_100626ce0(param_2);
      goto LAB_1008a6e94;
    }
  }
  if (uVar8 == 2) {
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
    _swift_retain(uVar2);
    (*pcVar1)();
    FUN_100877974(puVar3,puVar6,param_3,2);
    FUN_1008a86e8(pcVar1,uVar2);
    return;
  }
LAB_1008a6e94:
  FUN_100877974();
  return;
}



/* Address: 0x1008a6f48 | FUN_1008a6f48 */

/* WARNING: Removing unreachable block (ram,0x0001008a6fb4) */
/* WARNING: Removing unreachable block (ram,0x0001008a6ffc) */

void FUN_1008a6f48(code *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined *local_80;
  undefined1 local_57;
  
  local_84 = (undefined2)(param_4 >> 0x20);
  local_82 = (undefined1)(param_4 >> 0x30);
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = (int)param_4;
  if (param_4 >> 0x38 == 0) {
    if (*(long *)(param_2 + 0x20) == 1) {
      _swift_retain(param_2);
      _swift_bridgeObjectRetain(param_3);
      lVar4 = param_2;
      FUN_1008a7380(param_1,param_2,param_3,param_4);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
      *(code **)(unaff_x20 + 0x38) = param_1;
      *(long *)(unaff_x20 + 0x40) = lVar4;
      FUN_1008a86e8(uVar5,uVar1);
      if (*(char *)(unaff_x20 + 0x30) == '\x01') {
        _swift_retain(lVar4);
        (*param_1)();
        _swift_bridgeObjectRelease(param_3);
        _swift_release(param_2);
        param_2 = lVar4;
      }
      else {
        _swift_bridgeObjectRelease(param_3);
      }
      _swift_release(param_2);
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 5;
    FUN_100878fa0(param_2,param_3,param_4,0);
    FUN_1008a86e8(uVar5,uVar1);
    puVar3 = &DAT_100fe9100;
    FUN_1000f7830(&DAT_100fe9100,&DAT_100c803a0);
    local_81 = 0;
    local_57 = 2;
    local_80 = puVar3;
    _swift_retain(param_2);
    _swift_bridgeObjectRetain(param_3);
    FUN_100626ce0(&local_98);
    FUN_1005e70f4(&local_98);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _swift_retain(uVar5);
    thunk_FUN_1006313ac(param_1,0,uVar5);
    _swift_bridgeObjectRelease(param_3);
    _swift_release(param_2);
  }
  else {
    puVar2 = *(undefined1 **)(unaff_x20 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 5;
    FUN_1008a86e8(puVar2,uVar5);
    FUN_1008a869c();
    puVar3 = &DAT_100f0b258;
    _swift_allocError(&DAT_100f0b258,puVar2,0,0);
    *puVar2 = 1;
    FUN_100626c9c();
    _swift_errorRelease(puVar3);
    puVar3 = &DAT_100fe9100;
    FUN_1000f7830(&DAT_100fe9100,&DAT_100c803a0);
    local_81 = (undefined1)(param_4 >> 0x38);
    local_57 = 2;
    local_80 = puVar3;
    FUN_100878fa0(param_2,param_3,param_4,param_4 >> 0x38);
    FUN_100626ce0(&local_98);
    FUN_1005e70f4(&local_98);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _swift_retain(uVar5);
    thunk_FUN_1006313ac(param_1,0,uVar5);
  }
  _swift_release(uVar5);
  return;
}



/* Address: 0x1008a7254 | FUN_1008a7254 */

void FUN_1008a7254(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,char param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined *local_80;
  undefined1 local_57;
  
  pcVar1 = *(char **)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 5;
  FUN_1008a86e8(pcVar1,uVar3);
  if (param_5 != '\b') {
    FUN_1008a869c();
    puVar2 = &DAT_100f0b258;
    _swift_allocError(&DAT_100f0b258,pcVar1,0,0);
    *pcVar1 = param_5;
    FUN_100626c9c();
    _swift_errorRelease(puVar2);
  }
  puVar2 = &DAT_100fe9100;
  FUN_1000f7830(&DAT_100fe9100,&DAT_100c803a0);
  local_82 = (undefined1)(param_4 >> 0x30);
  local_84 = (undefined2)(param_4 >> 0x20);
  local_88 = (undefined4)param_4;
  local_81 = (undefined1)(param_4 >> 0x38);
  local_57 = 2;
  local_98 = param_2;
  uStack_90 = param_3;
  local_80 = puVar2;
  FUN_100878fa0(param_2,param_3,param_4,param_4 >> 0x38);
  FUN_100626ce0(&local_98);
  FUN_1005e70f4(&local_98);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _swift_retain(uVar3);
  thunk_FUN_1006313ac(param_1,0,uVar3);
  _swift_release(uVar3);
  return;
}



/* Address: 0x1008a7380 | FUN_1008a7380 */

undefined1  [16]
FUN_1008a7380(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  Substring SVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined8 unaff_x20;
  String SVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined1 *)0x65646172677075;
  FUN_10089dad4(0x65646172677075,&DAT_e700000000000000);
  if (*(long *)(puVar3 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    FUN_1008a869c();
    _swift_allocError(&DAT_100f0b258,puVar3,0,0);
    *puVar3 = 0;
    _swift_willThrow();
    param_1 = unaff_x20;
    pcVar4 = param_4;
  }
  else {
    SVar1.unknown = *(undefined **)(puVar3 + 0x20);
    uVar2 = *(undefined8 *)(puVar3 + 0x38);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRelease(puVar3);
    SVar5 = Swift::Substring::lowercased(SVar1);
    pcVar4 = SVar5.str;
    _swift_bridgeObjectRelease(uVar2);
    FUN_1008a74a8(param_1,pcVar4,SVar5.bridgeObject,param_2,param_3,param_4);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
  }
  auVar6._8_8_ = pcVar4;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Address: 0x1008a74a8 | FUN_1008a74a8 */

void FUN_1008a74a8(long param_1,char *param_2,void *param_3,undefined1 *param_4,undefined8 param_5,
                  undefined4 param_6)

{
  String SVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  _StringGuts _Var12;
  String SVar13;
  undefined1 auStack_e0 [24];
  char *local_c8;
  void *pvStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  _StringGuts _Var8;
  
  SVar1.bridgeObject = param_3;
  SVar1.str = param_2;
  _Var12.unknown = *(undefined **)(unaff_x20 + 0x10);
  uVar9 = *(ulong *)(_Var12.unknown + 0x10);
  _swift_bridgeObjectRetain(_Var12.unknown);
  if (uVar9 != 0) {
    uVar11 = 0;
    puVar5 = _Var12.unknown + 0x20;
    do {
      if (*(ulong *)(_Var12.unknown + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a7798);
        (*pcVar2)();
      }
      FUN_100076688(puVar5,auStack_b8);
      FUN_100076508(auStack_b8,auStack_e0);
      pvVar7 = pvStack_c0;
      pcVar4 = local_c8;
      FUN_100004640(auStack_e0,local_c8);
      (**(code **)((long)pvVar7 + 8))();
      SVar13.bridgeObject = pvVar7;
      SVar13.str = pcVar4;
      SVar13 = Swift::String::lowercased(SVar13);
      _Var8.unknown = SVar13.bridgeObject;
      _swift_bridgeObjectRelease(pvVar7);
      if (SVar13 == SVar1) {
        _swift_bridgeObjectRelease(_Var12.unknown);
        _Var12.unknown = _Var8.unknown;
LAB_1008a75d4:
        _swift_bridgeObjectRelease(_Var12.unknown);
        FUN_100076508(auStack_e0,&local_90);
        goto LAB_1008a75e8;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar13.str,_Var8,(_StringComparisonResult)(__int8)param_2);
      _swift_bridgeObjectRelease(_Var8.unknown);
      if (bVar3) goto LAB_1008a75d4;
      uVar11 = uVar11 + 1;
      FUN_100004594(auStack_e0);
      puVar5 = puVar5 + 0x28;
    } while (uVar9 != uVar11);
  }
  _swift_bridgeObjectRelease(_Var12.unknown);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_70 = 0;
LAB_1008a75e8:
  FUN_1000f8cac(&local_90,auStack_e0,&DAT_100fea3a0,&DAT_100c81b08);
  if (local_c8 == (char *)0x0) {
    puVar6 = auStack_e0;
    FUN_1008a887c();
    FUN_1008a869c();
    _swift_allocError(&DAT_100f0b258,puVar6,0,0);
    *puVar6 = 0;
    _swift_willThrow();
    FUN_1008a887c(&local_90);
  }
  else {
    FUN_100076508(auStack_e0,auStack_b8);
    FUN_100004640(auStack_b8,local_a0);
    puVar6 = param_4;
    (**(code **)(lStack_98 + 0x20))(param_4,param_5,param_6,local_a0,lStack_98);
    if (((ulong)puVar6 & 1) == 0) {
      FUN_1008a869c();
      _swift_allocError(&DAT_100f0b258,puVar6,0,0);
      *puVar6 = 2;
      _swift_willThrow();
      FUN_1008a887c(&local_90);
      FUN_100004594(auStack_b8);
    }
    else {
      FUN_1008a887c(&local_90);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      FUN_100076688(auStack_b8,auStack_e0);
      puVar5 = &DAT_100f0b3a0;
      _swift_allocObject(&DAT_100f0b3a0,0x61,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar5 + 0x18) = uVar10;
      *(long *)(puVar5 + 0x20) = param_1;
      FUN_100076508(auStack_e0,puVar5 + 0x28);
      *(undefined1 **)(puVar5 + 0x50) = param_4;
      *(undefined8 *)(puVar5 + 0x58) = param_5;
      puVar5[0x60] = (char)param_6;
      _swift_retain(uVar10);
      _swift_retain(unaff_x20);
      _swift_retain(param_1);
      _swift_retain(param_4);
      _swift_bridgeObjectRetain(param_5);
      FUN_100004594(auStack_b8);
    }
  }
  return;
}



/* Address: 0x1008a7798 | FUN_1008a7798 */

void FUN_1008a7798(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined1 param_7)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 2;
  FUN_1008a86e8(uVar3,uVar9);
  FUN_1008a7dd8();
  puVar4 = &DAT_100f0b3c8;
  _swift_allocObject(&DAT_100f0b3c8,0x20,7);
  *(long *)(puVar4 + 0x10) = param_1;
  *(long *)(puVar4 + 0x18) = param_3;
  puVar5 = &DAT_100f0b3f0;
  _swift_allocObject(&DAT_100f0b3f0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1008a8934;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar6 = &DAT_100f0b418;
  _swift_allocObject(&DAT_100f0b418,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1000386a0;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar7 = &DAT_100f0b440;
  _swift_allocObject(&DAT_100f0b440,0x28,7);
  *(long *)(puVar7 + 0x10) = param_2;
  *(code **)(puVar7 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar7 + 0x20) = puVar6;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    _swift_retain_n(param_1,2);
    _swift_retain_n(param_3,2);
    _swift_retain(puVar4);
    _swift_retain(puVar5);
    _swift_retain(puVar6);
    _swift_retain(param_2);
  }
  else if (*(char *)(param_2 + 0x18) == -1) {
    _swift_beginAccess(param_2 + 0x30,auStack_a0,0x21,0);
    _swift_retain_n(param_1,2);
    _swift_retain_n(param_3,2);
    _swift_retain(puVar4);
    _swift_retain(puVar5);
    _swift_retain(puVar6);
    _swift_retain(param_2);
    FUN_10064967c(FUN_1008a8990,puVar7);
    _swift_endAccess(auStack_a0);
  }
  else {
    pcVar1 = *(code **)(param_1 + 0x20);
    _swift_retain_n(param_1,2);
    _swift_retain_n(param_3,2);
    _swift_retain_n(puVar5,2);
    _swift_retain(puVar4);
    _swift_retain(puVar6);
    _swift_retain(param_2);
    (*pcVar1)(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 3;
    FUN_1008a86e8(uVar3,uVar9);
    _swift_release(puVar5);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _swift_bridgeObjectRelease(0);
  _swift_release(param_3);
  _swift_release(param_1);
  _swift_release(puVar4);
  _swift_release(puVar5);
  FUN_100076688(param_4,auStack_a0);
  puVar4 = &DAT_100f0b468;
  _swift_allocObject(&DAT_100f0b468,0x51,7);
  FUN_100076508(auStack_a0,puVar4 + 0x10);
  *(long *)(puVar4 + 0x38) = param_3;
  *(undefined8 *)(puVar4 + 0x40) = param_5;
  *(undefined8 *)(puVar4 + 0x48) = param_6;
  puVar4[0x50] = param_7;
  _swift_retain(param_3);
  _swift_retain(puVar4);
  _swift_retain(param_5);
  _swift_bridgeObjectRetain(param_6);
  lVar8 = param_2;
  FUN_1008b4194(param_2,FUN_1008a89d8,puVar4);
  _swift_release(param_2);
  _swift_release_n(puVar4,2);
  puVar4 = &DAT_100f0b490;
  _swift_allocObject(&DAT_100f0b490,0x20,7);
  *(long *)(puVar4 + 0x10) = param_1;
  *(long *)(puVar4 + 0x18) = param_3;
  puVar5 = &DAT_100f0b4b8;
  _swift_allocObject(&DAT_100f0b4b8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1008a8a48;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar6 = &DAT_100f0b4e0;
  _swift_allocObject(&DAT_100f0b4e0,0x20,7);
  *(code **)(puVar6 + 0x10) = thunk_FUN_1000386a0;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar7 = &DAT_100f0b508;
  _swift_allocObject(&DAT_100f0b508,0x28,7);
  *(long *)(puVar7 + 0x10) = lVar8;
  *(code **)(puVar7 + 0x18) = thunk_FUN_1000386a0;
  *(undefined **)(puVar7 + 0x20) = puVar6;
  _swift_beginAccess(lVar8 + 0x10,auStack_a0,0,0);
  if (*(char *)(lVar8 + 0x18) == '\x01') {
    _swift_retain_n(param_1,2);
    _swift_retain_n(param_3,2);
    _swift_retain(puVar4);
    _swift_retain(puVar5);
    _swift_retain(puVar6);
    _swift_retain(lVar8);
  }
  else if (*(char *)(lVar8 + 0x18) == -1) {
    _swift_beginAccess(lVar8 + 0x30,auStack_b8,0x21,0);
    _swift_retain_n(param_1,2);
    _swift_retain_n(param_3,2);
    _swift_retain(puVar4);
    _swift_retain(puVar5);
    _swift_retain(puVar6);
    _swift_retain(lVar8);
    FUN_10064967c(thunk_FUN_1008a8990,puVar7);
    _swift_endAccess(auStack_b8);
  }
  else {
    _swift_retain_n(param_1,2);
    _swift_retain_n(param_3,2);
    _swift_retain_n(puVar5,2);
    _swift_retain(puVar4);
    _swift_retain(puVar6);
    _swift_retain(lVar8);
    FUN_1008a7fd4(param_1,param_3);
    _swift_release(puVar5);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _swift_bridgeObjectRelease(0);
  _swift_release(param_3);
  _swift_release(param_1);
  _swift_release(puVar4);
  _swift_release(puVar5);
  puVar4 = &DAT_100f0b530;
  _swift_allocObject(&DAT_100f0b530,0x28,7);
  *(code **)(puVar4 + 0x10) = FUN_1008a8a50;
  *(long *)(puVar4 + 0x18) = param_3;
  *(long *)(puVar4 + 0x20) = lVar8;
  cVar2 = *(char *)(lVar8 + 0x18);
  if (cVar2 == -1) {
    _swift_beginAccess(lVar8 + 0x30,auStack_b8,0x21,0);
    _swift_retain_n(param_3,2);
    _swift_retain(lVar8);
    FUN_10064967c(FUN_1006225d4,puVar4);
    _swift_endAccess(auStack_b8);
  }
  else {
    uVar3 = *(undefined8 *)(lVar8 + 0x10);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    _swift_retain_n(param_3,2);
    _swift_retain(lVar8);
    FUN_1005dfeb4(uVar3,cVar2);
    _swift_retain(uVar9);
    thunk_FUN_1006313ac(param_3,0,uVar9);
    _swift_release(uVar9);
    FUN_100308538(uVar3,cVar2);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(lVar8);
  _swift_release(param_3);
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(0);
  return;
}



/* Address: 0x1008a7dd8 | FUN_1008a7dd8 */

void FUN_1008a7dd8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 == 0) {
    _swift_getObjectType(*(undefined8 *)(param_1 + 0x30));
    FUN_1006412ac();
  }
  else {
    FUN_100892704(0,lVar6,0);
    lVar7 = lVar7 + 0x28;
    do {
      uVar10 = *(undefined8 *)(lVar7 + -8);
      uVar2 = uVar10;
      _swift_unknownObjectRetain();
      FUN_10062c4e4();
      _swift_unknownObjectRelease(uVar10);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        FUN_100892704(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      lVar7 = lVar7 + 0x10;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar1 + uVar3 * 8 + 0x20) = uVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar7 = *(long *)(param_1 + 0x30);
    _swift_getObjectType();
    FUN_100893ef4();
    lVar6 = *(long *)(lVar7 + 0x28);
    uVar10 = *(undefined8 *)(lVar7 + 0x28);
    uVar9 = *(ulong *)(lVar7 + 0x20);
    uVar3 = uVar9;
    _swift_getObjectType();
    uVar4 = uVar3;
    (**(code **)(lVar6 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_100f0b558;
      _swift_allocObject(&DAT_100f0b558,0x30,7);
      *(long *)(puVar5 + 0x10) = lVar7;
      *(undefined **)(puVar5 + 0x18) = puVar1;
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(ulong *)(puVar5 + 0x20) = uVar9;
      pcVar8 = *(code **)(lVar6 + 0x18);
      _swift_retain(lVar7);
      _swift_bridgeObjectRetain(puVar1);
      _swift_unknownObjectRetain(uVar9);
      (*pcVar8)(FUN_100899f28,puVar5,uVar3,lVar6);
      _swift_bridgeObjectRelease(puVar1);
      _swift_release(puVar5);
    }
    else {
      FUN_1008b2cb0(lVar7,puVar1,uVar9,lVar6);
      _swift_bridgeObjectRelease(puVar1);
    }
    _swift_getObjectType(*(undefined8 *)(lVar7 + 0x20));
    FUN_100642338();
  }
  return;
}



/* Address: 0x1008a7fd4 | FUN_1008a7fd4 */

void FUN_1008a7fd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 local_f0;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(param_1 + 0x48,auStack_80,0,0);
  uVar9 = *(ulong *)(param_1 + 0x50);
  uVar4 = *(ulong *)(param_1 + 0x58);
  lVar6 = uVar4 - uVar9;
  if ((long)uVar4 < (long)uVar9) {
    lVar6 = lVar6 + *(long *)(*(long *)(param_1 + 0x48) + 0x10);
  }
  while( true ) {
    uVar8 = *(ulong *)(param_1 + 0x48);
    lVar5 = uVar4 - uVar9;
    if ((long)uVar4 < (long)uVar9) {
      lVar5 = lVar5 + *(long *)(uVar8 + 0x10);
    }
    if (lVar5 < 1) {
      if (0 < lVar6) {
        FUN_100626d4c();
      }
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 4;
      FUN_1008a86e8(uVar1,uVar2);
      return;
    }
    _swift_beginAccess(param_1 + 0x48,auStack_e8,0x21,0);
    if (uVar4 == uVar9) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a81b4);
      (*pcVar3)();
    }
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a81b8);
      (*pcVar3)();
    }
    if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a81bc);
      (*pcVar3)();
    }
    uVar7 = *(ulong *)(uVar8 + 0x10);
    if (uVar7 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a81c0);
      (*pcVar3)();
    }
    FUN_1000f8cac(uVar8 + uVar9 * 0x48 + 0x20,&local_130,&DAT_100fe90d8,&DAT_100c81b10);
    if (0xfe < local_f0._1_1_) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a81cc);
      (*pcVar3)();
    }
    uStack_a8 = uStack_108;
    local_b0 = local_110;
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    local_90 = local_f0;
    uStack_c8 = uStack_128;
    local_d0 = local_130;
    uStack_b8 = uStack_118;
    uStack_c0 = uStack_120;
    if ((long)uVar9 <= (long)uVar4) {
      uVar7 = 0;
    }
    if ((long)((uVar4 - uVar9) + uVar7) < 1) break;
    uVar4 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(param_1 + 0x48) = uVar8;
    if ((uVar4 & 1) == 0) {
      FUN_10089875c();
    }
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    local_f0 = 0xff00;
    *(ulong *)(param_1 + 0x48) = uVar8;
    if (*(ulong *)(uVar8 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a81c8);
      (*pcVar3)();
    }
    FUN_100899460(&local_130,uVar8 + uVar9 * 0x48 + 0x20);
    *(ulong *)(param_1 + 0x48) = uVar8;
    *(ulong *)(param_1 + 0x50) = *(long *)(uVar8 + 0x10) + 0x1ffffffffU & uVar9 + 1;
    _swift_endAccess(auStack_e8);
    FUN_100626ce0(&local_d0);
    FUN_1005e70f4(&local_d0);
    uVar9 = *(ulong *)(param_1 + 0x50);
    uVar4 = *(ulong *)(param_1 + 0x58);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a81c4);
  (*pcVar3)();
}



/* Address: 0x1008a81cc | FUN_1008a81cc */

void FUN_1008a81cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _swift_retain(uVar1);
  thunk_FUN_1006313ac(param_2,0,uVar1);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008a8208 | FUN_1008a8208 */

void FUN_1008a8208(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_1008a86e8(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x1008a8244 | FUN_1008a8244 */

void FUN_1008a8244(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_1008a86e8(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008a8288 | FUN_1008a8288 */

void FUN_1008a8288(void)

{
  FUN_100888930();
  return;
}



/* Address: 0x1008a82a4 | FUN_1008a82a4 */

void FUN_1008a82a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  undefined *puVar8;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar7 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  uVar6 = *(uint7 *)(param_2 + 2);
  puVar8 = &DAT_100fe9100;
  FUN_1000f7830(&DAT_100fe9100,&DAT_100c803a0);
  param_1[3] = puVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  FUN_100878fa0(uVar1,uVar2,(ulong)uVar6,uVar3);
  return;
}



/* Address: 0x1008a833c | thunk_FUN_1008a6d00 */

void thunk_FUN_1008a6d00(void)

{
  FUN_1008a6d00();
  return;
}



/* Address: 0x1008a8340 | FUN_1008a8340 */

void FUN_1008a8340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  undefined *puVar8;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar7 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  uVar6 = *(uint7 *)(param_2 + 2);
  puVar8 = &DAT_100fe95a8;
  FUN_1000f7830(&DAT_100fe95a8,&DAT_100c80030);
  param_1[3] = puVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  FUN_10087792c(uVar1,uVar2,(ulong)uVar6,uVar3);
  return;
}



/* Address: 0x1008a83d8 | thunk_FUN_1008a6444 */

void thunk_FUN_1008a6444(void)

{
  FUN_1008a6444();
  return;
}



/* Address: 0x1008a83dc | FUN_1008a83dc */

undefined8 FUN_1008a83dc(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  cVar3 = *(char *)(param_1 + 0x20);
  if (cVar3 != '\x01') {
    if (cVar3 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a8480);
      (*pcVar4)();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    local_50 = uVar1;
    uStack_48 = uVar2;
    FUN_100899a30(uVar1,uVar2,cVar3);
    (*param_2)(&local_50);
    FUN_100899a44(uVar1,uVar2,cVar3);
  }
  return 0;
}



/* Address: 0x1008a8480 | FUN_1008a8480 */

long FUN_1008a8480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  ContiguousArray CVar3;
  _ContiguousArrayBuffer<undefined> _Var4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 local_70;
  
  lVar2 = param_1;
  FUN_1008a8750();
  _swift_allocObject();
  *(undefined1 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_70 = 0xff00;
  CVar3.unknown = &DAT_100fe90d8;
  FUN_1000f7830(&DAT_100fe90d8,&DAT_100c81b10);
  _Var4 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar3);
  *(undefined8 *)(_Var4.unknown + 0x10) = 0x10;
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x20,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x68,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0xb0,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0xf8,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x140,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x188,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x1d0,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x218,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x260,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x2a8,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x2f0,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x338,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x380,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x3c8,&DAT_100fe90d8,&DAT_100c81b10);
  FUN_1000f8cac(&local_b0,_Var4.unknown + 0x410,&DAT_100fe90d8,&DAT_100c81b10);
  *(undefined8 *)(_Var4.unknown + 0x480) = uStack_88;
  *(undefined8 *)(_Var4.unknown + 0x478) = local_90;
  *(undefined8 *)(_Var4.unknown + 0x490) = uStack_78;
  *(undefined8 *)(_Var4.unknown + 0x488) = uStack_80;
  *(undefined2 *)(_Var4.unknown + 0x498) = local_70;
  *(undefined8 *)(_Var4.unknown + 0x460) = uStack_a8;
  *(undefined8 *)(_Var4.unknown + 0x458) = local_b0;
  *(undefined8 *)(_Var4.unknown + 0x470) = uStack_98;
  *(undefined8 *)(_Var4.unknown + 0x468) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined **)(lVar2 + 0x48) = _Var4.unknown;
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    *(undefined8 *)(lVar2 + 0x18) = param_2;
    *(undefined8 *)(lVar2 + 0x20) = param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a869c);
  (*pcVar1)();
}



/* Address: 0x1008a869c | FUN_1008a869c */

void FUN_1008a869c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c818f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c818f0,&DAT_100f0b258);
  DAT_100fea248 = pTVar1;
  return;
}



/* Address: 0x1008a86dc | FUN_1008a86dc */

void FUN_1008a86dc(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x1008a86e8 | FUN_1008a86e8 */

void FUN_1008a86e8(ulong param_1,undefined8 param_2)

{
  if (param_1 < 6) {
    return;
  }
  _swift_release(param_2);
  return;
}



/* Address: 0x1008a86fc | thunk_FUN_1008a8700 */

void thunk_FUN_1008a8700(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea250 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81930;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81930,&DAT_100f0b258);
  DAT_100fea250 = pTVar1;
  return;
}



/* Address: 0x1008a8700 | FUN_1008a8700 */

void FUN_1008a8700(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea250 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81930;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81930,&DAT_100f0b258);
  DAT_100fea250 = pTVar1;
  return;
}



/* Address: 0x1008a8740 | FUN_1008a8740 */

undefined1  [16] FUN_1008a8740(void)

{
  return ZEXT816(0x100f0b258);
}



/* Address: 0x1008a8750 | FUN_1008a8750 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008a8750(void)

{
  return ZEXT816(0x100fea310);
}



/* Address: 0x1008a8770 | FUN_1008a8770 */

int FUN_1008a8770(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff9 < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7ffffffa;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (6 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -5;
  }
  return iVar1;
}



/* Address: 0x1008a87c8 | FUN_1008a87c8 */

void FUN_1008a87c8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffa) {
    if (0x7ffffff9 < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 5);
      return;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint *)param_1 = param_2 + 0x80000006;
    if (0x7ffffff9 < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x1008a8818 | FUN_1008a8818 */

undefined1  [16] FUN_1008a8818(void)

{
  return ZEXT816(0x100f0b2f0);
}



/* Address: 0x1008a8828 | FUN_1008a8828 */

undefined1  [16] FUN_1008a8828(void)

{
  return ZEXT816(0x100f0b380);
}



/* Address: 0x1008a8838 | thunk_FUN_1008a883c */

void thunk_FUN_1008a883c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea398 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81ae0,&DAT_100f0b380);
  DAT_100fea398 = pTVar1;
  return;
}



/* Address: 0x1008a883c | FUN_1008a883c */

void FUN_1008a883c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea398 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81ae0,&DAT_100f0b380);
  DAT_100fea398 = pTVar1;
  return;
}



/* Address: 0x1008a887c | FUN_1008a887c */

undefined8 FUN_1008a887c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fea3a0;
  FUN_1000f7830(&DAT_100fea3a0,&DAT_100c81b08);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1008a88c4 | FUN_1008a88c4 */

void FUN_1008a88c4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004594(unaff_x20 + 0x28);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008a8910 | FUN_1008a8910 */

void FUN_1008a8910(void)

{
  long unaff_x20;
  
  FUN_1008a7798(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + 0x28,*(undefined8 *)(unaff_x20 + 0x50)
                ,*(undefined8 *)(unaff_x20 + 0x58),*(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x1008a8928 | FUN_1008a8928 */

void FUN_1008a8928(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1008a8934 | FUN_1008a8934 */

void FUN_1008a8934(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (**(code **)(lVar1 + 0x20))(*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 3;
  FUN_1008a86e8(uVar2,uVar3);
  return;
}



/* Address: 0x1008a8968 | FUN_1008a8968 */

void FUN_1008a8968(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008a898c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1008a8990 | FUN_1008a8990 */

void FUN_1008a8990(void)

{
  long unaff_x20;
  
  FUN_10064c01c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008a899c | FUN_1008a899c */

void FUN_1008a899c(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008a89d8 | FUN_1008a89d8 */

void FUN_1008a89d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x50);
  FUN_100004640(unaff_x20 + 0x10,uVar2);
  (**(code **)(lVar4 + 0x28))(uVar1,uVar3,uVar6,uVar5,uVar2,lVar4);
  return;
}



/* Address: 0x1008a8a48 | FUN_1008a8a48 */

void FUN_1008a8a48(void)

{
  long unaff_x20;
  
  FUN_1008a7fd4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008a8a50 | FUN_1008a8a50 */

void FUN_1008a8a50(void)

{
  FUN_1008a81cc();
  return;
}



/* Address: 0x1008a8a58 | FUN_1008a8a58 */

void FUN_1008a8a58(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008a8a84 | FUN_1008a8a84 */

void FUN_1008a8a84(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008a8ab8 | FUN_1008a8ab8 */

void FUN_1008a8ab8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fea3b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fea3a8;
  FUN_1000f8b08(&DAT_100fea3a8,&DAT_100c81b18);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fea3b0 = puVar2;
  return;
}



/* Address: 0x1008a8b08 | thunk_FUN_1008a8968 */

void thunk_FUN_1008a8968(void)

{
  FUN_1008a8968();
  return;
}


