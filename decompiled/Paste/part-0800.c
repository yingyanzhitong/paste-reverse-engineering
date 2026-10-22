/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008c8bfc | thunk_FUN_1008c6d50 */

void thunk_FUN_1008c6d50(void)

{
  FUN_1008c6d50();
  return;
}



/* Address: 0x1008c8c00 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008c8c04 | thunk_FUN_1008c855c */

void thunk_FUN_1008c855c(void)

{
  thunk_FUN_1008c855c();
  return;
}



/* Address: 0x1008c8c08 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008c8c0c | thunk_FUN_100888214 */

void thunk_FUN_100888214(void)

{
  thunk_FUN_100888214();
  return;
}



/* Address: 0x1008c8c10 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008c8c14 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008c8c18 | thunk_FUN_100888214 */

void thunk_FUN_100888214(void)

{
  thunk_FUN_100888214();
  return;
}



/* Address: 0x1008c8c1c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008c8c20 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1008c8c24 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1008c8c28 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008c8c2c | thunk_FUN_1008c85a8 */

void thunk_FUN_1008c85a8(void)

{
  long unaff_x20;
  
  FUN_1008c808c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c8c30 | thunk_FUN_1008c8304 */

void thunk_FUN_1008c8304(void)

{
  long unaff_x20;
  
  FUN_1008c36b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c8c34 | thunk_FUN_1008c8310 */

void thunk_FUN_1008c8310(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008c38fc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008c8c38 | FUN_1008c8c38 */

void FUN_1008c8c38(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  undefined1 auStack_80 [80];
  
  uVar4 = unaff_x20[2];
  FUN_1000f8cac(param_1,auStack_80,&DAT_100feb108,&DAT_100c82c30);
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_1008d1a1c();
  }
  if (-1 < (long)uVar4) {
    if (uVar4 < *(ulong *)(uVar3 + 0x10)) {
      FUN_1004375f4(auStack_80,uVar3 + uVar4 * 0x50 + 0x20,&DAT_100feb100,&DAT_100c826d0);
      *unaff_x20 = uVar3;
      uVar2 = *(long *)(uVar3 + 0x10) + 0x7fffffffffffffffU & uVar4 + 1;
      unaff_x20[2] = uVar2;
      if (unaff_x20[1] == uVar2) {
        FUN_1008d1a54();
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c8d00);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c8cfc);
  (*pcVar1)();
}



/* Address: 0x1008c8d00 | FUN_1008c8d00 */

void FUN_1008c8d00(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  undefined1 auStack_78 [72];
  
  uVar4 = unaff_x20[2];
  FUN_1005e650c(param_1,auStack_78);
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_1008d1a30();
  }
  if (-1 < (long)uVar4) {
    if (uVar4 < *(ulong *)(uVar3 + 0x10)) {
      FUN_1004375f4(auStack_78,uVar3 + uVar4 * 0x48 + 0x20,&DAT_100feb158,&DAT_100c82c40);
      *unaff_x20 = uVar3;
      uVar2 = *(long *)(uVar3 + 0x10) + 0x7fffffffffffffffU & uVar4 + 1;
      unaff_x20[2] = uVar2;
      if (unaff_x20[1] == uVar2) {
        FUN_1008d1b84();
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c8db8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c8db4);
  (*pcVar1)();
}



/* Address: 0x1008c8db8 | FUN_1008c8db8 */

void FUN_1008c8db8(undefined *param_1,char *param_2,undefined8 param_3,void *param_4)

{
  undefined *puVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  __int32 _Var5;
  char *pcVar6;
  _StringGuts _Var7;
  char *pcVar8;
  String SVar9;
  String SVar10;
  
  if (0 < (long)param_2) {
    do {
      while( true ) {
        pcVar6 = (char *)0x2;
        _Var7.unknown = param_1;
        pcVar8 = param_2;
        _write();
        if ((long)pcVar6 < 0) break;
        pcVar8 = param_2;
        if ((long)pcVar6 <= (long)param_2) {
          pcVar8 = pcVar6;
        }
        pcVar2 = (char *)0x0;
        if (pcVar6 != (char *)0x0) {
          pcVar2 = pcVar8;
        }
        puVar1 = param_1 + (long)pcVar2;
        bVar4 = param_1 != (undefined *)0x0;
        param_1 = (undefined *)0x0;
        if (bVar4) {
          param_1 = puVar1;
        }
        param_2 = param_2 + -(long)pcVar2;
        if (param_2 == (char *)0x0) {
          return;
        }
      }
      _Var5 = Darwin::get_errno();
      if (_Var5 != 4) {
        Swift::_StringGuts::grow(0x1c,_Var7);
        _swift_bridgeObjectRelease(0xe000000000000000);
        SVar9 = Swift::CustomStringConvertible::get_description();
        SVar10.bridgeObject = param_4;
        SVar10.str = pcVar8;
        Swift::String::append(SVar9,SVar10);
        _swift_bridgeObjectRelease(SVar9.bridgeObject);
        SVar9.bridgeObject = (void *)0x2;
        SVar9.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar9,(StaticString)0xd00000000000001a,
                   0x8000000100db4730,0xdb46b0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008c8ed8);
        (*pcVar3)();
      }
    } while (param_2 != (char *)0x0);
  }
  return;
}



/* Address: 0x1008c8ed8 | FUN_1008c8ed8 */

bool FUN_1008c8ed8(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (-1 < (long)(uVar4 | uVar3)) {
    bVar2 = *(ulong *)(param_1 + 0x30) < *(ulong *)(param_2 + 0x30);
    if (uVar3 != uVar4) {
      bVar2 = uVar3 < uVar4;
    }
    return bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c8f0c);
  (*pcVar1)();
}



/* Address: 0x1008c8f0c | FUN_1008c8f0c */

bool FUN_1008c8f0c(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (-1 < (long)(uVar4 | uVar3)) {
    bVar2 = *(ulong *)(param_1 + 0x30) <= *(ulong *)(param_2 + 0x30);
    if (uVar4 != uVar3) {
      bVar2 = uVar3 <= uVar4;
    }
    return bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c8f40);
  (*pcVar1)();
}



/* Address: 0x1008c8f40 | FUN_1008c8f40 */

bool FUN_1008c8f40(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (-1 < (long)(uVar4 | uVar3)) {
    bVar2 = *(ulong *)(param_2 + 0x30) <= *(ulong *)(param_1 + 0x30);
    if (uVar3 != uVar4) {
      bVar2 = uVar4 <= uVar3;
    }
    return bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c8f74);
  (*pcVar1)();
}



/* Address: 0x1008c8f74 | FUN_1008c8f74 */

bool FUN_1008c8f74(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (-1 < (long)(uVar4 | uVar3)) {
    bVar2 = *(ulong *)(param_2 + 0x30) < *(ulong *)(param_1 + 0x30);
    if (uVar4 != uVar3) {
      bVar2 = uVar4 < uVar3;
    }
    return bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c8fa8);
  (*pcVar1)();
}



/* Address: 0x1008c8fa8 | FUN_1008c8fa8 */

undefined8 FUN_1008c8fa8(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  pthread_t p_Var4;
  long unaff_x20;
  
  p_Var4 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var4,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c9024);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  return 1;
}



/* Address: 0x1008c9024 | FUN_1008c9024 */

void FUN_1008c9024(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  pthread_t p_Var4;
  long unaff_x20;
  
  p_Var4 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var4,p_Var3);
  if (iVar2 != 0) {
    return;
  }
  if (DAT_100feb4e0 != -1) {
    _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
  }
  if ((DAT_101058170 & 1) == 0) {
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c90a4);
  (*pcVar1)();
}



/* Address: 0x1008c90a4 | FUN_1008c90a4 */

undefined8 FUN_1008c90a4(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1008c90d8();
  return unaff_x20;
}



/* Address: 0x1008c90d8 | FUN_1008c90d8 */

void FUN_1008c90d8(void)

{
  undefined *puVar1;
  pthread_t p_Var2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  FUN_1008c0aa8();
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xd000000000000011;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x8000000100c82bf0;
  p_Var2 = _pthread_self();
  *(pthread_t *)(unaff_x20 + 0x50) = p_Var2;
  return;
}



/* Address: 0x1008c9130 | FUN_1008c9130 */

undefined * FUN_1008c9130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  pthread_t p_Var2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  pthread_t p_Var8;
  long unaff_x20;
  code *pcVar9;
  ulong uVar10;
  undefined1 auStack_a0 [24];
  long local_88;
  code *pcStack_80;
  undefined *local_78;
  code *pcStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  ulong local_58;
  
  p_Var8 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var2 = _pthread_self();
  iVar1 = _pthread_equal(p_Var8,p_Var2);
  if (iVar1 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008c9408);
      (*pcVar9)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  puVar3 = &DAT_100feb0f8;
  FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
  _swift_allocObject();
  *(long *)(puVar3 + 0x20) = unaff_x20;
  *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f0e1a8;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  if (*(char *)(unaff_x20 + 0x18) == '\0') {
    lVar6 = *(ulong *)(unaff_x20 + 0x20) + 1;
    if (0xfffffffffffffffe < *(ulong *)(unaff_x20 + 0x20)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008c940c);
      (*pcVar9)();
    }
    *(long *)(unaff_x20 + 0x20) = lVar6;
    uVar10 = *(ulong *)(unaff_x20 + 0x38);
    if (0xfffffffffffffffe < uVar10) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008c9410);
      (*pcVar9)();
    }
    *(ulong *)(unaff_x20 + 0x38) = uVar10 + 1;
    puVar4 = &DAT_100f0e898;
    _swift_allocObject(&DAT_100f0e898,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    pcStack_80 = FUN_1008d4b2c;
    pcStack_70 = FUN_1008d4b38;
    puVar5 = &DAT_100f0e8c0;
    local_88 = lVar6;
    local_78 = puVar4;
    local_68 = puVar3;
    uStack_60 = param_1;
    local_58 = uVar10;
    _swift_allocObject(&DAT_100f0e8c0,0x20,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(long *)(puVar5 + 0x18) = lVar6;
    _swift_beginAccess(unaff_x20 + 0x28,auStack_a0,0x21,0);
    _swift_retain_n();
    _swift_retain_n(puVar3,2);
    _swift_retain(param_3);
    FUN_1008c75a8(&local_88);
    _swift_endAccess(auStack_a0);
    _swift_release(puVar3);
    _swift_release(puVar4);
  }
  else {
    puVar5 = puVar3;
    FUN_1008c8678();
    puVar4 = &DAT_100eef640;
    uVar7 = 0;
    _swift_allocError(&DAT_100eef640,puVar5,0,0);
    *puVar5 = 1;
    uVar10 = *(ulong *)(puVar3 + 0x20);
    lVar6 = *(long *)(puVar3 + 0x28);
    _swift_getObjectType();
    pcVar9 = *(code **)(lVar6 + 0x10);
    _swift_retain();
    (*pcVar9)(uVar10,lVar6);
    if ((uVar10 & 1) == 0) {
      uVar7 = *(undefined8 *)(puVar3 + 0x20);
      lVar6 = *(long *)(puVar3 + 0x28);
      _swift_getObjectType(uVar7);
      puVar5 = &DAT_100f0e870;
      _swift_allocObject(&DAT_100f0e870,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar3;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      pcVar9 = *(code **)(lVar6 + 0x18);
      _swift_retain(puVar3);
      _swift_errorRetain(puVar4);
      (*pcVar9)(thunk_FUN_1005dfd68,puVar5,uVar7,lVar6);
      _swift_release(puVar5);
    }
    else {
      puVar5 = puVar4;
      FUN_1005de8f4(puVar4);
      FUN_1006486f8();
      FUN_100004550(puVar5,lVar6);
      _swift_bridgeObjectRelease(uVar7);
    }
    _swift_errorRelease(puVar4);
  }
  return puVar3;
}



/* Address: 0x1008c9410 | FUN_1008c9410 */

void FUN_1008c9410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  pthread_t p_Var4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined1 *puVar9;
  pthread_t p_Var10;
  ulong uVar11;
  undefined1 auStack_b0 [24];
  long local_98;
  code *pcStack_90;
  undefined *local_88;
  code *pcStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  puVar9 = (undefined1 *)*unaff_x20;
  p_Var10 = (pthread_t)unaff_x20[10];
  p_Var4 = _pthread_self();
  iVar3 = _pthread_equal(p_Var10,p_Var4);
  if (iVar3 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9664);
      (*pcVar2)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  FUN_1008c8400(puVar9,param_4,&PTR_PTR_100f0e1a8);
  if (*(char *)(unaff_x20 + 3) == '\0') {
    lVar1 = unaff_x20[4] + 1;
    if (0xfffffffffffffffe < (ulong)unaff_x20[4]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9668);
      (*pcVar2)();
    }
    unaff_x20[4] = lVar1;
    uVar11 = unaff_x20[7];
    if (0xfffffffffffffffe < uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c966c);
      (*pcVar2)();
    }
    unaff_x20[7] = uVar11 + 1;
    puVar6 = &DAT_100f0df10;
    _swift_allocObject(&DAT_100f0df10,0x30,7);
    *(undefined8 *)(puVar6 + 0x10) = param_4;
    *(undefined1 **)(puVar6 + 0x18) = puVar9;
    *(undefined8 *)(puVar6 + 0x20) = param_2;
    *(undefined8 *)(puVar6 + 0x28) = param_3;
    puVar7 = &DAT_100f0e938;
    _swift_allocObject(&DAT_100f0e938,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = param_4;
    *(undefined1 **)(puVar7 + 0x18) = puVar9;
    pcStack_90 = FUN_1008d39a0;
    pcStack_80 = FUN_1008d4b40;
    puVar8 = &DAT_100f0df38;
    local_98 = lVar1;
    local_88 = puVar6;
    local_78 = puVar7;
    uStack_70 = param_1;
    local_68 = uVar11;
    _swift_allocObject(&DAT_100f0df38,0x20,7);
    *(undefined8 **)(puVar8 + 0x10) = unaff_x20;
    *(long *)(puVar8 + 0x18) = lVar1;
    _swift_retain(puVar9);
    FUN_100004520();
    _swift_beginAccess(unaff_x20 + 5,auStack_b0,0x21,0);
    _swift_retain_n(puVar9,2);
    _swift_retain(param_3);
    _swift_retain();
    FUN_1008c75a8(&local_98);
    _swift_endAccess(auStack_b0);
    _swift_release(puVar7);
    _swift_release(puVar6);
    _swift_release(puVar9);
  }
  else {
    puVar5 = puVar9;
    FUN_1008c8678();
    puVar6 = &DAT_100eef640;
    _swift_allocError(&DAT_100eef640,puVar5,0,0);
    *puVar5 = 1;
    FUN_100646f54();
    _swift_errorRelease(puVar6);
    FUN_100004520(puVar9,FUN_100004520,0,param_4);
  }
  return;
}



/* Address: 0x1008c966c | FUN_1008c966c */

/* WARNING: Removing unreachable block (ram,0x0001008c96c8) */
/* WARNING: Removing unreachable block (ram,0x0001008c9760) */
/* WARNING: Removing unreachable block (ram,0x0001008c96dc) */

void FUN_1008c966c(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    (*param_2)();
    uVar4 = 0;
    uVar5 = 0;
    FUN_1008d06a0(0,0);
    FUN_1006486f8();
    FUN_100004550(uVar4,uVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c97d8);
  (*pcVar2)();
}



/* Address: 0x1008c97d8 | FUN_1008c97d8 */

/* WARNING: Removing unreachable block (ram,0x0001008c983c) */

void FUN_1008c97d8(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_60 [16];
  
  lVar2 = *(long *)(param_4 + -8);
  puVar1 = auStack_60 + -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100645c18(param_1,param_4);
  (*param_2)(puVar1);
  FUN_100643020(puVar1,param_1,param_4);
  _swift_release(param_1);
  (**(code **)(lVar2 + 8))(puVar1,param_4);
  return;
}



/* Address: 0x1008c98a4 | FUN_1008c98a4 */

void FUN_1008c98a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f0e8e8;
  _swift_allocObject(&DAT_100f0e8e8,0x20,7);
  *(long *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(param_1);
  (*pcVar6)(thunk_FUN_1005dfd68,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008c998c | FUN_1008c998c */

void FUN_1008c998c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [56];
  
  _swift_beginAccess(param_1 + 0x28,auStack_70,0x21,0);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  if (lVar2 != 0) {
    lVar1 = 0;
    plVar3 = (long *)(*(long *)(param_1 + 0x28) + 0x20);
    do {
      if (*plVar3 == param_2) {
        FUN_1008d0824(auStack_58);
        FUN_1000fb4c4(auStack_58,&DAT_100feb4c8,&DAT_100c82bd0);
        break;
      }
      lVar1 = lVar1 + 1;
      plVar3 = plVar3 + 7;
    } while (lVar2 != lVar1);
  }
  _swift_endAccess(auStack_70);
  return;
}



/* Address: 0x1008c9a24 | FUN_1008c9a24 */

void FUN_1008c9a24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  pthread_t p_Var4;
  long lVar5;
  long unaff_x20;
  pthread_t p_Var6;
  
  p_Var6 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var4 = _pthread_self();
  iVar3 = _pthread_equal(p_Var6,p_Var4);
  if (iVar3 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9ae4);
      (*pcVar2)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (-1 < lVar5) {
    uVar1 = 0x7fffffffffffffff;
    if (!SCARRY8(lVar5,param_1)) {
      uVar1 = lVar5 + param_1 & (lVar5 + param_1 >> 0x3f ^ 0xffffffffffffffffU);
    }
    FUN_1008c9410(uVar1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9ac8);
  (*pcVar2)();
}



/* Address: 0x1008c9ae4 | FUN_1008c9ae4 */

void FUN_1008c9ae4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  pthread_t p_Var4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  pthread_t p_Var7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uVar6 = *unaff_x20;
  p_Var7 = (pthread_t)unaff_x20[10];
  p_Var4 = _pthread_self();
  iVar3 = _pthread_equal(p_Var7,p_Var4);
  if (iVar3 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9be0);
      (*pcVar2)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  lVar5 = unaff_x20[2];
  if (-1 < lVar5) {
    uVar1 = 0x7fffffffffffffff;
    if (!SCARRY8(lVar5,param_2)) {
      uVar1 = lVar5 + param_2 & (lVar5 + param_2 >> 0x3f ^ 0xffffffffffffffffU);
    }
    FUN_100662e54(&local_80,uVar1,param_3,uVar6,param_4,&PTR_PTR_100f0e1a8,param_5);
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[3] = CONCAT71(local_67,uStack_68);
    param_1[2] = uStack_70;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_5f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_60,local_67);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9bc4);
  (*pcVar2)();
}



/* Address: 0x1008c9be0 | FUN_1008c9be0 */

void FUN_1008c9be0(undefined8 param_1,undefined8 param_2)

{
  FUN_1008ca3bc(param_1,param_2,&DAT_100f0df60,FUN_1008d39d8);
  return;
}



/* Address: 0x1008c9bf4 | FUN_1008c9bf4 */

void FUN_1008c9bf4(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  pthread_t p_Var4;
  long unaff_x20;
  
  p_Var4 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var4,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c9c70);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  FUN_1008c9c70(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008c9c70 | FUN_1008c9c70 */

void FUN_1008c9c70(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  pthread_t p_Var4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  pthread_t p_Var12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [64];
  
  p_Var12 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var4 = _pthread_self();
  iVar3 = _pthread_equal(p_Var12,p_Var4);
  if (iVar3 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9f34);
      (*pcVar2)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  uVar9 = *(ulong *)(unaff_x20 + 0x10);
  if ((long)(uVar9 | param_1) < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9f18);
    (*pcVar2)();
  }
  if (uVar9 <= param_1) {
    uVar9 = param_1;
  }
  _swift_beginAccess(unaff_x20 + 0x28,auStack_b8,0,0);
  lVar11 = *(long *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(lVar11 + 0x10);
  while (lVar10 != 0) {
    uVar14 = *(ulong *)(lVar11 + 0x48);
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9f14);
      (*pcVar2)();
    }
    if (uVar9 < uVar14) break;
    uVar5 = *(undefined8 *)(lVar11 + 0x30);
    uVar13 = *(undefined8 *)(lVar11 + 0x40);
    _swift_retain();
    _swift_retain(uVar13);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if ((long)*(ulong *)(lVar11 + 0x48) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9f10);
        (*pcVar2)();
      }
      if (*(ulong *)(lVar11 + 0x48) != uVar14) break;
      uVar15 = *(undefined8 *)(lVar11 + 0x20);
      uVar17 = *(undefined8 *)(lVar11 + 0x30);
      uVar23 = *(undefined8 *)(lVar11 + 0x30);
      uVar22 = *(undefined8 *)(lVar11 + 0x28);
      uVar18 = *(undefined8 *)(lVar11 + 0x40);
      uVar21 = *(undefined8 *)(lVar11 + 0x40);
      uVar20 = *(undefined8 *)(lVar11 + 0x38);
      uVar19 = *(undefined8 *)(lVar11 + 0x50);
      _swift_retain_n(uVar17,2);
      _swift_retain_n(uVar18,2);
      puVar6 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_1008d1050(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_1008d1050(puVar8,uVar1 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar8 + uVar1 * 0x38 + 0x20) = uVar15;
      *(undefined8 *)(puVar8 + uVar1 * 0x38 + 0x30) = uVar23;
      *(undefined8 *)(puVar8 + uVar1 * 0x38 + 0x28) = uVar22;
      *(undefined8 *)(puVar8 + uVar1 * 0x38 + 0x40) = uVar21;
      *(undefined8 *)(puVar8 + uVar1 * 0x38 + 0x38) = uVar20;
      *(ulong *)(puVar8 + uVar1 * 0x38 + 0x48) = uVar14;
      *(undefined8 *)(puVar8 + uVar1 * 0x38 + 0x50) = uVar19;
      _swift_beginAccess(unaff_x20 + 0x28,auStack_d0,0x21,0);
      FUN_1008d0824(auStack_a0,0);
      _swift_endAccess(auStack_d0);
      FUN_1000fb4c4(auStack_a0,&DAT_100feb4c8,&DAT_100c82bd0);
      _swift_release(uVar18);
      _swift_release(uVar17);
      lVar11 = *(long *)(unaff_x20 + 0x28);
    } while (*(long *)(lVar11 + 0x10) != 0);
    *(ulong *)(unaff_x20 + 0x10) = uVar14;
    lVar11 = *(long *)(puVar8 + 0x10);
    if (lVar11 != 0) {
      puVar16 = (undefined8 *)(puVar8 + 0x40);
      do {
        pcVar2 = (code *)puVar16[-3];
        uVar15 = puVar16[-2];
        uVar17 = *puVar16;
        _swift_retain(uVar15);
        _swift_retain(uVar17);
        (*pcVar2)();
        _swift_release(uVar17);
        _swift_release(uVar15);
        lVar11 = lVar11 + -1;
        puVar16 = puVar16 + 7;
      } while (lVar11 != 0);
    }
    _swift_release(uVar13);
    _swift_release(uVar5);
    _swift_bridgeObjectRelease(puVar8);
    lVar11 = *(long *)(unaff_x20 + 0x28);
    lVar10 = *(long *)(lVar11 + 0x10);
  }
  *(ulong *)(unaff_x20 + 0x10) = uVar9;
  return;
}



/* Address: 0x1008c9f34 | FUN_1008c9f34 */

void FUN_1008c9f34(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  pthread_t p_Var4;
  long lVar5;
  long unaff_x20;
  pthread_t p_Var6;
  
  p_Var6 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var4 = _pthread_self();
  iVar3 = _pthread_equal(p_Var6,p_Var4);
  if (iVar3 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9fd4);
      (*pcVar2)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (-1 < lVar5) {
    uVar1 = 0x7fffffffffffffff;
    if (!SCARRY8(lVar5,param_1)) {
      uVar1 = lVar5 + param_1 & (lVar5 + param_1 >> 0x3f ^ 0xffffffffffffffffU);
    }
    FUN_1008c9c70(uVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c9fb8);
  (*pcVar2)();
}



/* Address: 0x1008c9fd4 | FUN_1008c9fd4 */

void FUN_1008c9fd4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  pthread_t p_Var5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  pthread_t p_Var9;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  long local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 uStack_68;
  
  puVar6 = auStack_a0;
  p_Var9 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var5 = _pthread_self();
  iVar4 = _pthread_equal(p_Var9,p_Var5);
  if (iVar4 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ca12c);
      (*pcVar3)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_beginAccess(unaff_x20 + 0x28,auStack_a0,0x21,0);
  FUN_1008d0824(auStack_88,0);
  _swift_endAccess();
  if (local_80 != 0) {
    FUN_1008c8678();
    do {
      uVar2 = uStack_68;
      pcVar3 = local_70;
      uVar1 = local_78;
      puVar7 = &DAT_100eef640;
      puVar8 = puVar6;
      _swift_allocError(&DAT_100eef640,puVar6,0,0);
      *puVar8 = 1;
      (*pcVar3)();
      _swift_errorRelease(puVar7);
      _swift_release(uVar2);
      _swift_release(uVar1);
      _swift_beginAccess(unaff_x20 + 0x28,auStack_a0,0x21,0);
      FUN_1008d0824(auStack_88,0);
      _swift_endAccess(auStack_a0);
    } while (local_80 != 0);
  }
  return;
}



/* Address: 0x1008ca12c | FUN_1008ca12c */

void FUN_1008ca12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  long unaff_x20;
  pthread_t p_Var7;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  p_Var7 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var7,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ca314);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var7,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ca330);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  FUN_1008c9c70(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1008c9fd4();
  *(undefined1 *)(unaff_x20 + 0x18) = 2;
  puVar4 = &DAT_100f0df88;
  _swift_allocObject(&DAT_100f0df88,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  puVar5 = &DAT_100f0dfb0;
  _swift_allocObject(&DAT_100f0dfb0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1008c8730;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_50 = FUN_1000386a0;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_1000d5218;
  puStack_58 = &DAT_100f0dfc8;
  local_48 = puVar5;
  aBlock = __Block_copy(&local_70);
  puVar6 = local_48;
  _swift_retain(param_3);
  _swift_retain(puVar5);
  _swift_release(puVar6);
  _dispatch_sync(param_1,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x60,0x143,0x14,1);
  _swift_release(puVar4);
  _swift_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ca2f8);
  (*pcVar1)();
}



/* Address: 0x1008ca330 | thunk_FUN_1008c9024 */

void thunk_FUN_1008c9024(void)

{
  FUN_1008c9024();
  return;
}



/* Address: 0x1008ca334 | FUN_1008ca334 */

void FUN_1008ca334(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  pthread_t p_Var4;
  long unaff_x20;
  
  p_Var4 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var4,p_Var3);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ca38c);
    (*pcVar1)();
  }
  if (DAT_100feb4e0 != -1) {
    _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
  }
  if ((DAT_101058170 & 1) == 0) {
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ca388);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ca3a8);
  (*pcVar1)();
}



/* Address: 0x1008ca3a8 | FUN_1008ca3a8 */

void FUN_1008ca3a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1008ca3bc(param_1,param_2,&DAT_100f0e000,FUN_1008d4b9c);
  return;
}



/* Address: 0x1008ca3bc | FUN_1008ca3bc */

void FUN_1008ca3bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long lVar4;
  long unaff_x20;
  pthread_t p_Var5;
  undefined8 uVar6;
  
  p_Var5 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var5,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ca4a4);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_allocObject(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  _swift_retain(param_2);
  lVar4 = param_3;
  FUN_1008c9130(uVar6,param_4,param_3);
  _swift_release(param_3);
  _swift_release(uVar6);
  _swift_release(lVar4);
  return;
}



/* Address: 0x1008ca4a4 | FUN_1008ca4a4 */

undefined8 FUN_1008ca4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1008c9410(uVar1,param_1,param_2,param_3);
  _swift_release(param_2);
  return uVar1;
}



/* Address: 0x1008ca4e0 | thunk_FUN_1008c9410 */

void thunk_FUN_1008c9410(void)

{
  FUN_1008c9410();
  return;
}



/* Address: 0x1008ca4e4 | thunk_FUN_1008c9a24 */

void thunk_FUN_1008c9a24(void)

{
  FUN_1008c9a24();
  return;
}



/* Address: 0x1008ca4e8 | FUN_1008ca4e8 */

void FUN_1008ca4e8(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  pthread_t p_Var4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  p_Var4 = *(pthread_t *)(unaff_x20 + 0x50);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var4,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ca5a4);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_beginAccess(unaff_x20 + 0x28,auStack_38,0,0);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x28) + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ca588);
  (*pcVar1)();
}



/* Address: 0x1008ca5a4 | FUN_1008ca5a4 */

void FUN_1008ca5a4(void)

{
  FUN_1008ca4e8();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008ca5c4 | FUN_1008ca5c4 */

void FUN_1008ca5c4(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000072,0x8000000100db46b0,
             0xdb46b0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ca61c);
  (*pcVar1)();
}



/* Address: 0x1008ca61c | FUN_1008ca61c */

void FUN_1008ca61c(byte param_1)

{
  FUN_1008ca63c();
  DAT_101058170 = param_1 & 1;
  return;
}



/* Address: 0x1008ca63c | FUN_1008ca63c */

undefined8 FUN_1008ca63c(void)

{
  bool bVar1;
  undefined *puVar2;
  UnsafePointer<__int8> cString;
  char *pcVar3;
  undefined1 *puVar4;
  _StringComparisonResult expecting;
  long lVar5;
  String SVar6;
  String SVar7;
  
  puVar2 = &DAT_100feb9a8;
  FUN_1000f7830(&DAT_100feb9a8,&DAT_100c83060);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 6;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  *(undefined8 *)(puVar2 + 0x20) = 0x4f494e5446495753;
  *(undefined8 *)(puVar2 + 0x28) = 0xef5443495254535f;
  *(undefined8 *)(puVar2 + 0x30) = 0x4f494e5446495753;
  *(undefined8 *)(puVar2 + 0x38) = 0xeb0000000049435f;
  lVar5 = 3;
  *(undefined8 *)(puVar2 + 0x40) = 0xd000000000000018;
  *(undefined8 *)(puVar2 + 0x48) = 0x8000000100db4760;
  do {
    cString.unknown = _getenv("SWIFTNIO_STRICT");
    if (cString.unknown != (undefined *)0x0) {
      SVar6 = Swift::String::init(cString);
      SVar7 = Swift::String::lowercased(SVar6);
      puVar4 = SVar7.bridgeObject;
      pcVar3 = SVar7.str;
      _swift_bridgeObjectRelease(SVar6.bridgeObject);
      if (pcVar3 == (char *)0x65757274 && puVar4 == &DAT_e400000000000000) {
LAB_1008ca828:
        _swift_release(puVar2);
        _swift_bridgeObjectRelease(puVar4);
        return 1;
      }
      expecting.value = SVar7.str._0_1_;
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x65757274,(_StringGuts)0xe400000000000000,expecting);
      if (((bVar1) ||
          ((((pcVar3 == (char *)0x79 && (puVar4 == (undefined1 *)0xe100000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x79,(_StringGuts)0xe100000000000000,expecting), bVar1)
            ) || ((pcVar3 == (char *)0x736579 && (puVar4 == (undefined1 *)0xe300000000000000))))))
         || ((bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x736579,(_StringGuts)0xe300000000000000,expecting),
             bVar1 || (((pcVar3 == (char *)0x6e6f && (puVar4 == &SUB_e200000000000000)) ||
                       ((bVar1 = Swift::_stringCompareWithSmolCheck
                                           ((_StringGuts)0x6e6f,(_StringGuts)0xe200000000000000,
                                            expecting), bVar1 ||
                        ((pcVar3 == (char *)0x31 && (puVar4 == (undefined1 *)0xe100000000000000)))))
                       ))))) goto LAB_1008ca828;
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x31,(_StringGuts)0xe100000000000000,expecting);
      _swift_bridgeObjectRelease(puVar4);
      if (bVar1) {
        _swift_release(puVar2);
        return 1;
      }
    }
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      _swift_release(puVar2);
      return 0;
    }
  } while( true );
}



/* Address: 0x1008ca878 | thunk_FUN_1008c9be0 */

void thunk_FUN_1008c9be0(void)

{
  FUN_1008c9be0();
  return;
}



/* Address: 0x1008ca87c | FUN_1008ca87c */

void FUN_1008ca87c(ExecutorJob param_1)

{
  UnownedJob UVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  UVar1 = Swift::UnownedJob::init(param_1);
  puVar2 = &DAT_100f0e7d0;
  _swift_allocObject(&DAT_100f0e7d0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = UVar1.unknown;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  _swift_retain();
  FUN_1008c9be0(FUN_1008ca5c4,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1008ca8dc | FUN_1008ca8dc */

void FUN_1008ca8dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_100662e54(&local_50,param_2,param_3,*unaff_x20,param_4,param_7,param_5);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = CONCAT71(local_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  return;
}



/* Address: 0x1008ca930 | FUN_1008ca930 */

void FUN_1008ca930(undefined8 *param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1008c9ae4(&local_50);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = CONCAT71(local_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  return;
}



/* Address: 0x1008ca974 | thunk_FUN_1008ca3a8 */

void thunk_FUN_1008ca3a8(void)

{
  FUN_1008ca3a8();
  return;
}



/* Address: 0x1008ca978 | thunk_FUN_1008ca4a4 */

void thunk_FUN_1008ca4a4(void)

{
  FUN_1008ca4a4();
  return;
}



/* Address: 0x1008ca97c | thunk_FUN_1008c9410 */

void thunk_FUN_1008c9410(void)

{
  thunk_FUN_1008c9410();
  return;
}



/* Address: 0x1008ca980 | thunk_FUN_1008c9a24 */

void thunk_FUN_1008c9a24(void)

{
  thunk_FUN_1008c9a24();
  return;
}



/* Address: 0x1008ca984 | FUN_1008ca984 */

undefined1  [16] FUN_1008ca984(void)

{
  undefined1 auVar1 [16];
  long *unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(*unaff_x20 + 0x40);
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 0x48));
  return auVar1;
}



/* Address: 0x1008ca9b4 | FUN_1008ca9b4 */

void FUN_1008ca9b4(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1008ca9e0 | thunk_FUN_1008ca12c */

void thunk_FUN_1008ca12c(void)

{
  FUN_1008ca12c();
  return;
}



/* Address: 0x1008ca9e4 | FUN_1008ca9e4 */

void FUN_1008ca9e4(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006419c8(*unaff_x20,&PTR_PTR_100f0e1a8);
  return;
}


