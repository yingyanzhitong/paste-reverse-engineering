/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005b38a4 | FUN_1005b38a4 */

String FUN_1005b38a4(void)

{
  char *pcVar1;
  void *pvVar2;
  undefined8 *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)*unaff_x20;
  pvVar2 = (void *)unaff_x20[1];
  FUN_1005b37dc();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  SVar3 = Swift::String::get_debugDescription(SVar3);
  _swift_bridgeObjectRelease(pvVar2);
  return SVar3;
}



/* Address: 0x1005b38ec | FUN_1005b38ec */

undefined1  [16] FUN_1005b38ec(long param_1,undefined8 param_2)

{
  UnsafePointer<__int8> validatingUTF8;
  undefined1 auVar1 [16];
  
  validatingUTF8.unknown = (undefined *)(param_1 + 0x20);
  Swift::String::_init(validatingUTF8);
  _swift_bridgeObjectRelease(param_1);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = validatingUTF8.unknown;
  return auVar1;
}



/* Address: 0x1005b3930 | FUN_1005b3930 */

void FUN_1005b3930(void)

{
  FUN_1005b393c();
  return;
}



/* Address: 0x1005b393c | FUN_1005b393c */

undefined1  [16] FUN_1005b393c(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  FUN_1005afd60(param_2,param_3,param_1);
  lVar1 = param_2 + 0x20;
  (*param_4)(lVar1);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(param_2);
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Address: 0x1005b39a0 | FUN_1005b39a0 */

void FUN_1005b39a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1005b39ac(param_1,param_2,PTR__init_100eac098);
  return;
}



/* Address: 0x1005b39ac | FUN_1005b39ac */

undefined1  [16] FUN_1005b39ac(undefined8 param_1,long param_2,code *param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (-1 < param_2) {
    lVar2 = 0;
    FUN_1005afd60(0,param_2,param_1);
    lVar3 = lVar2 + 0x20;
    (*param_3)(lVar3);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar3;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b3a14);
  (*pcVar1)();
}



/* Address: 0x1005b3a14 | FUN_1005b3a14 */

undefined8 FUN_1005b3a14(undefined8 param_1)

{
  FUN_1005bbf6c();
  FUN_1005b2cbc();
  return param_1;
}



/* Address: 0x1005b3a48 | FUN_1005b3a48 */

undefined8 FUN_1005b3a48(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1005b3c30();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x1005b3a78 | FUN_1005b3a78 */

void FUN_1005b3a78(char *param_1)

{
  code *pcVar1;
  String SVar2;
  
  if (*param_1 == '\0') {
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStaticObject();
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd00000000000003f,0x8000000100dae270,
             0xdae260);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b3b00);
  (*pcVar1)();
}



/* Address: 0x1005b3b00 | FUN_1005b3b00 */

char *** FUN_1005b3b00(char *param_1,void *param_2)

{
  String SVar1;
  char *pcVar2;
  char ***pppcVar3;
  uint uVar4;
  void *pvVar5;
  String SVar6;
  String SVar8;
  char **local_58;
  ulong uStack_50;
  String SVar7;
  
  SVar6.bridgeObject = param_2;
  SVar6.str = param_1;
  pcVar2 = (char *)0x0;
  uVar4 = 0;
  FUN_10051c750(0,0xe100000000000000,param_1,param_2);
  if ((uVar4 & 0xff) == 1) {
    if (((ulong)param_2 >> 0x3c & 1) == 0) {
      if (((ulong)param_2 >> 0x3d & 1) != 0) goto LAB_1005b3b48;
LAB_1005b3bb4:
      param_2 = SVar6.bridgeObject;
      SVar1.bridgeObject = param_2;
      SVar1.str = (char *)local_58;
      if (((ulong)SVar6.str >> 0x3c & 1) != 0) {
        pppcVar3 = (char ***)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        goto LAB_1005b3bc0;
      }
    }
  }
  else {
    SVar8.bridgeObject = param_1;
    SVar8.str = pcVar2;
    pvVar5 = param_2;
    SVar7.str = Swift::String::get_subscript((Range<Index>)0xf,SVar8);
    _swift_bridgeObjectRelease(param_2);
    SVar7.bridgeObject = pcVar2;
    SVar6 = Swift::String::__fromSubstring(SVar7);
    param_2 = SVar6.bridgeObject;
    _swift_bridgeObjectRelease(pvVar5);
    if (((ulong)param_2 >> 0x3c & 1) == 0) {
      if (((ulong)param_2 >> 0x3d & 1) == 0) goto LAB_1005b3bb4;
LAB_1005b3b48:
      uStack_50 = (ulong)SVar6.bridgeObject & 0xffffffffffffff;
      pppcVar3 = &local_58;
      SVar1 = SVar6;
LAB_1005b3bc0:
      local_58 = (char **)SVar1.str;
      FUN_1005bbf6c();
      _swift_bridgeObjectRelease(SVar1.bridgeObject);
      local_58 = (char **)pppcVar3;
      goto LAB_1005b3bd0;
    }
  }
  Swift::_StringGuts::__slowWithCString((_StringGuts)0x1005baaec);
  _swift_bridgeObjectRelease(param_2);
LAB_1005b3bd0:
  FUN_1005b2cbc();
  return (char ***)local_58;
}



/* Address: 0x1005b3c30 | FUN_1005b3c30 */

char * FUN_1005b3c30(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  String SVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    pcVar2 = (char *)(param_1 + 0x20);
    pcVar4 = pcVar2;
    do {
      if (*pcVar4 == '\0') {
        FUN_1005bbf6c();
        FUN_1005b2cbc();
        return pcVar2;
      }
      lVar3 = lVar3 + -1;
      pcVar4 = pcVar4 + 1;
    } while (lVar3 != 0);
  }
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd00000000000003f,0x8000000100dae270,
             0xdae260);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b3cac);
  (*pcVar1)();
}



/* Address: 0x1005b3cd0 | FUN_1005b3cd0 */

undefined8 *** FUN_1005b3cd0(undefined8 ***param_1,ulong param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_48;
  ulong uStack_40;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) goto LAB_1005b3d44;
      pppuVar1 = (undefined8 ***)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_40 = param_2 & 0xffffffffffffff;
      pppuVar1 = &local_48;
      local_48 = param_1;
    }
    FUN_1005bbf6c();
    _swift_bridgeObjectRelease(param_2);
    local_48 = pppuVar1;
  }
  else {
LAB_1005b3d44:
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x1005baaec);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_1005b2cbc();
  return (undefined8 ***)local_48;
}



/* Address: 0x1005b3d78 | FUN_1005b3d78 */

void FUN_1005b3d78(undefined8 ***param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  String SVar3;
  undefined8 **local_48;
  ulong uStack_40;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) goto LAB_1005b3de8;
      pppuVar2 = (undefined8 ***)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_40 = param_2 & 0xffffffffffffff;
      pppuVar2 = &local_48;
      local_48 = param_1;
    }
    FUN_1005bbf6c();
    _swift_bridgeObjectRelease(param_2);
  }
  else {
LAB_1005b3de8:
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x1005baaec);
    _swift_bridgeObjectRelease(param_2);
    pppuVar2 = (undefined8 ***)local_48;
  }
  FUN_1005b2138();
  if (pppuVar2 != (undefined8 ***)0x0) {
    return;
  }
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000046,0x8000000100dae2e0,
             0xdae260);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b3e68);
  (*pcVar1)();
}



/* Address: 0x1005b3e68 | FUN_1005b3e68 */

void FUN_1005b3e68(undefined8 ***param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  String SVar3;
  undefined8 **local_48;
  ulong uStack_40;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) goto LAB_1005b3ed8;
      pppuVar2 = (undefined8 ***)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_40 = param_2 & 0xffffffffffffff;
      pppuVar2 = &local_48;
      local_48 = param_1;
    }
    FUN_1005bbf6c();
    _swift_bridgeObjectRelease(param_2);
  }
  else {
LAB_1005b3ed8:
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x1005baaec);
    _swift_bridgeObjectRelease(param_2);
    pppuVar2 = (undefined8 ***)local_48;
  }
  FUN_1005b1ec8();
  if (pppuVar2 != (undefined8 ***)0x0) {
    return;
  }
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000029,0x8000000100dae2b0,
             0xdae260);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b3f58);
  (*pcVar1)();
}



/* Address: 0x1005b3f58 | thunk_FUN_1005b3f5c */

void thunk_FUN_1005b3f5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3720 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62ce0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62ce0,&DAT_100ee4790);
  DAT_100fd3720 = pTVar1;
  return;
}



/* Address: 0x1005b3f5c | FUN_1005b3f5c */

void FUN_1005b3f5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3720 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62ce0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62ce0,&DAT_100ee4790);
  DAT_100fd3720 = pTVar1;
  return;
}



/* Address: 0x1005b3f9c | thunk_FUN_1005b3fa0 */

void thunk_FUN_1005b3fa0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3728 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62d20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62d20,&DAT_100ee4790);
  DAT_100fd3728 = pTVar1;
  return;
}



/* Address: 0x1005b3fa0 | FUN_1005b3fa0 */

void FUN_1005b3fa0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3728 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62d20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62d20,&DAT_100ee4790);
  DAT_100fd3728 = pTVar1;
  return;
}



/* Address: 0x1005b3fe0 | thunk_FUN_1005b3fe4 */

void thunk_FUN_1005b3fe4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3730 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62d98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62d98,&DAT_100ee4f88);
  DAT_100fd3730 = pTVar1;
  return;
}



/* Address: 0x1005b3fe4 | FUN_1005b3fe4 */

void FUN_1005b3fe4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3730 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62d98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62d98,&DAT_100ee4f88);
  DAT_100fd3730 = pTVar1;
  return;
}



/* Address: 0x1005b4024 | thunk_FUN_1005b4028 */

void thunk_FUN_1005b4028(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3738 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62dd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62dd8,&DAT_100ee4f88);
  DAT_100fd3738 = pTVar1;
  return;
}



/* Address: 0x1005b4028 | FUN_1005b4028 */

void FUN_1005b4028(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3738 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62dd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62dd8,&DAT_100ee4f88);
  DAT_100fd3738 = pTVar1;
  return;
}



/* Address: 0x1005b4068 | thunk_FUN_1005b406c */

void thunk_FUN_1005b406c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3740 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62e50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62e50,&DAT_100ee4f08);
  DAT_100fd3740 = pTVar1;
  return;
}



/* Address: 0x1005b406c | FUN_1005b406c */

void FUN_1005b406c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3740 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62e50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62e50,&DAT_100ee4f08);
  DAT_100fd3740 = pTVar1;
  return;
}



/* Address: 0x1005b40ac | thunk_FUN_1005b40b0 */

void thunk_FUN_1005b40b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3748 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62e90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62e90,&DAT_100ee4f08);
  DAT_100fd3748 = pTVar1;
  return;
}



/* Address: 0x1005b40b0 | FUN_1005b40b0 */

void FUN_1005b40b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3748 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62e90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62e90,&DAT_100ee4f08);
  DAT_100fd3748 = pTVar1;
  return;
}



/* Address: 0x1005b40f0 | thunk_FUN_1005b35f0 */

void thunk_FUN_1005b35f0(void)

{
  FUN_1005b35f0();
  return;
}



/* Address: 0x1005b40f4 | thunk_FUN_1005b38ec */

void thunk_FUN_1005b38ec(void)

{
  FUN_1005b38ec();
  return;
}



/* Address: 0x1005b40f8 | thunk_FUN_1005b3590 */

void thunk_FUN_1005b3590(void)

{
  thunk_FUN_1005b3590();
  return;
}



/* Address: 0x1005b40fc | thunk_FUN_1005b35c4 */

void thunk_FUN_1005b35c4(void)

{
  FUN_1005b35c4();
  return;
}



/* Address: 0x1005b4100 | thunk_FUN_1005b355c */

void thunk_FUN_1005b355c(void)

{
  FUN_1005b355c();
  return;
}



/* Address: 0x1005b4104 | thunk_FUN_1005b3a14 */

void thunk_FUN_1005b3a14(void)

{
  thunk_FUN_1005b3a14();
  return;
}



/* Address: 0x1005b4108 | FUN_1005b4108 */

undefined1  [16] FUN_1005b4108(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  
  if (*(long *)(param_1 + 0x10) != 1) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b414c);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + 0x20) == '/') {
      _swift_bridgeObjectRetain();
      auVar2._8_8_ = 1;
      auVar2._0_8_ = param_1;
      return auVar2;
    }
  }
  return ZEXT816(0);
}



/* Address: 0x1005b414c | FUN_1005b414c */

undefined1  [16] FUN_1005b414c(char param_1,ulong param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = param_3;
  while( true ) {
    if (param_2 == uVar3) {
      return ZEXT816(1) << 0x40;
    }
    bVar2 = SBORROW8(uVar3,1);
    uVar3 = uVar3 - 1;
    if (bVar2) break;
    if (((((long)param_3 <= (long)uVar3) || ((long)uVar3 < (long)param_2)) || ((long)uVar3 < 0)) ||
       (*(long *)(param_4 + 0x10) + -1 <= (long)uVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b41b4);
      (*pcVar1)();
    }
    if (*(char *)(param_4 + 0x20 + uVar3) == param_1) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar3;
      return auVar4;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b41b0);
  (*pcVar1)();
}



/* Address: 0x1005b41b4 | FUN_1005b41b4 */

uint FUN_1005b41b4(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x10);
  lVar1 = lVar9 + -1;
  if (lVar1 == 0) {
    lVar8 = 0;
LAB_1005b4210:
    _swift_bridgeObjectRetain(param_1);
    lVar3 = lVar8;
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b436c);
      (*pcVar2)();
    }
    if (*(char *)(param_1 + 0x20) == '/') {
      if (lVar9 == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4370);
        (*pcVar2)();
      }
      lVar8 = 1;
      if (lVar1 == 1) goto LAB_1005b4210;
    }
    else {
      lVar8 = 0;
    }
    _swift_bridgeObjectRetain(param_1);
    lVar7 = lVar8;
    while( true ) {
      lVar4 = lVar7;
      FUN_1005b2a38(lVar7,param_1);
      if (lVar4 < lVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4354);
        (*pcVar2)();
      }
      if (lVar7 == lVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4358);
        (*pcVar2)();
      }
      lVar3 = lVar7;
      if (*(char *)(param_1 + 0x20) == '/') break;
      if (lVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b435c);
        (*pcVar2)();
      }
      if (lVar9 <= lVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4360);
        (*pcVar2)();
      }
      puVar5 = &DAT_100fd30c8;
      FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
      puVar6 = puVar5;
      _swift_initStaticObject();
      FUN_1005af77c();
      if (((ulong)puVar6 & 1) != 0) goto LAB_1005b421c;
      _swift_initStaticObject(puVar5,&DAT_100fd3788);
      FUN_1005af77c();
      if ((((ulong)puVar5 & 1) == 0) ||
         (lVar4 = param_1, FUN_1005b2a38(lVar7), lVar3 = lVar1, lVar7 = lVar4, lVar4 == lVar1))
      goto LAB_1005b421c;
    }
    if (lVar9 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4350);
      (*pcVar2)();
    }
  }
LAB_1005b421c:
  if (lVar9 <= lVar3 || lVar9 <= lVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4364);
    (*pcVar2)();
  }
  if (lVar8 <= lVar3) {
    FUN_1005b6b64(lVar3,lVar1,param_1);
    _swift_bridgeObjectRelease(param_1);
    return (uint)lVar3 & 1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4368);
  (*pcVar2)();
}



/* Address: 0x1005b4370 | FUN_1005b4370 */

bool FUN_1005b4370(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x10) == 1) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(char *)(param_1 + 0x20) == '/';
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b439c);
  (*pcVar1)();
}



/* Address: 0x1005b439c | FUN_1005b439c */

bool FUN_1005b439c(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x10) == 1) {
    return true;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(char *)(param_1 + 0x20) != '/';
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b43c8);
  (*pcVar1)();
}



/* Address: 0x1005b43c8 | FUN_1005b43c8 */

undefined8 FUN_1005b43c8(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 1) {
    return 1;
  }
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 == 1) {
LAB_1005b4430:
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4620);
      (*pcVar1)();
    }
    if (*(char *)(param_2 + 0x20) != '/') goto LAB_1005b4430;
    if (lVar7 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4628);
      (*pcVar1)();
    }
    _swift_bridgeObjectRetain(param_2);
    uVar9 = 1;
    uVar8 = param_2;
  }
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b461c);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + 0x20) == '/') {
    if (lVar10 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4624);
      (*pcVar1)();
    }
    _swift_bridgeObjectRetain(param_1);
    if (uVar8 != 0) {
      uVar2 = 0;
      FUN_1005af59c(0,1,param_1,0,uVar9,uVar8);
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(param_1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      goto LAB_1005b44b0;
    }
  }
  else {
    if (uVar8 != 0) {
      uVar9 = 0;
      goto LAB_1005b45e0;
    }
LAB_1005b44b0:
    if (lVar7 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = (ulong)(*(char *)(param_2 + 0x20) == '/');
    }
    if (*(char *)(param_1 + 0x20) == '/') {
      if (lVar10 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b462c);
        (*pcVar1)();
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_1);
    do {
      if (uVar8 == lVar7 - 1U) {
        if (uVar2 == lVar10 - 1U) {
LAB_1005b459c:
          _swift_bridgeObjectRelease(param_2);
          uVar9 = 1;
          uVar8 = param_1;
          goto LAB_1005b45e0;
        }
        uVar8 = uVar2;
        FUN_1005b2a38(uVar2,param_1);
        if ((long)uVar8 < (long)uVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4630);
          (*pcVar1)();
        }
        if (uVar2 == uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4634);
          (*pcVar1)();
        }
        FUN_1005b2a38(uVar2,param_1);
        break;
      }
      uVar3 = uVar8;
      FUN_1005b2a38(uVar8,param_2);
      if ((long)uVar3 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b460c);
        (*pcVar1)();
      }
      if (uVar8 == uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4610);
        (*pcVar1)();
      }
      uVar5 = param_2;
      FUN_1005b2a38(uVar8);
      if (uVar2 == lVar10 - 1U) goto LAB_1005b459c;
      uVar4 = uVar2;
      FUN_1005b2a38(uVar2,param_1);
      if ((long)uVar4 < (long)uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4614);
        (*pcVar1)();
      }
      if (uVar2 == uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4618);
        (*pcVar1)();
      }
      uVar6 = param_1;
      FUN_1005b2a38(uVar2);
      FUN_1005af59c(uVar2,uVar4,param_1,uVar8,uVar3,param_2);
      uVar3 = uVar2 & 1;
      uVar8 = uVar5;
      uVar2 = uVar6;
    } while (uVar3 != 0);
    _swift_bridgeObjectRelease(param_2);
  }
  uVar9 = 0;
  uVar8 = param_1;
LAB_1005b45e0:
  _swift_bridgeObjectRelease(uVar8);
  return uVar9;
}



/* Address: 0x1005b4634 | FUN_1005b4634 */

bool FUN_1005b4634(long param_1)

{
  return *(long *)(param_1 + 0x10) == 1;
}



/* Address: 0x1005b4644 | FUN_1005b4644 */

bool FUN_1005b4644(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  
  lVar8 = *(long *)(param_1 + 0x10);
  uVar7 = lVar8 - 1;
  if (uVar7 == 0) {
    lVar11 = *(long *)(param_2 + 0x10);
    lVar4 = lVar11 + -1;
    if (lVar4 == 0) {
      uVar12 = 0;
      lVar11 = 0;
      goto LAB_1005b4744;
    }
LAB_1005b46ec:
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4890);
      (*pcVar1)();
    }
    if (*(char *)(param_2 + 0x20) != '/') {
      lVar11 = 0;
      uVar12 = 0;
      if (uVar7 == 0) goto LAB_1005b4744;
      goto LAB_1005b4724;
    }
    if (lVar11 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4898);
      (*pcVar1)();
    }
    lVar11 = 1;
    if (uVar7 != 0) goto LAB_1005b4724;
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b488c);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + 0x20) == '/') {
      if (lVar8 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4894);
        (*pcVar1)();
      }
      if (*(long *)(param_2 + 0x10) != lVar8) {
        return false;
      }
      if (param_2 == param_1) {
        return true;
      }
      pcVar9 = (char *)(param_2 + 0x20);
      pcVar10 = (char *)(param_1 + 0x20);
      do {
        bVar2 = uVar7 != 0;
        uVar7 = uVar7 - 1;
        bVar3 = *pcVar9 == *pcVar10;
        if (!bVar3) {
          return bVar3;
        }
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar2);
      return bVar3;
    }
    lVar11 = *(long *)(param_2 + 0x10);
    lVar4 = lVar11 + -1;
    if (lVar4 != 0) goto LAB_1005b46ec;
    lVar11 = 0;
LAB_1005b4724:
    if (*(char *)(param_1 + 0x20) == '/') {
      if (lVar8 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b489c);
        (*pcVar1)();
      }
      uVar12 = 1;
      goto LAB_1005b4744;
    }
  }
  uVar12 = 0;
LAB_1005b4744:
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_1);
  do {
    if (lVar4 == lVar11) {
      if (uVar7 != uVar12) {
        FUN_1005b2ac8(uVar7,param_1);
        uVar12 = uVar7;
        FUN_1005b2a38();
        _swift_bridgeObjectRelease(param_2);
        _swift_bridgeObjectRelease(param_1);
        if ((long)uVar12 < (long)uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b48a0);
          (*pcVar1)();
        }
        if (uVar7 != uVar12) {
          return false;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b48a4);
        (*pcVar1)();
      }
      bVar2 = true;
      break;
    }
    FUN_1005b2ac8(lVar4,param_2);
    lVar8 = lVar4;
    FUN_1005b2a38();
    if (lVar8 < lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b487c);
      (*pcVar1)();
    }
    if (lVar4 == lVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4880);
      (*pcVar1)();
    }
    bVar2 = uVar7 == uVar12;
    if (bVar2) break;
    _swift_bridgeObjectRetain(param_2);
    FUN_1005b2ac8(uVar7,param_1);
    uVar5 = uVar7;
    FUN_1005b2a38();
    if ((long)uVar5 < (long)uVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4884);
      (*pcVar1)();
    }
    if (uVar7 == uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4888);
      (*pcVar1)();
    }
    uVar6 = uVar7;
    FUN_1005af59c(uVar7,uVar5,param_1,lVar4,lVar8,param_2);
    _swift_bridgeObjectRelease(param_2);
  } while ((uVar6 & 1) != 0);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_1);
  return bVar2;
}



/* Address: 0x1005b48a4 | FUN_1005b48a4 */

void FUN_1005b48a4(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *unaff_x20;
  
  if (param_1 == 0) {
    lVar3 = *(long *)(*unaff_x20 + 0x10);
    if (lVar3 == 1) {
      bVar2 = false;
    }
    else {
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b494c);
        (*pcVar1)();
      }
      bVar2 = *(char *)(*unaff_x20 + 0x20) == '/';
    }
    FUN_1005afca4(0,bVar2);
    return;
  }
  lVar3 = *(long *)(*unaff_x20 + 0x10);
  if (lVar3 == 1) {
    bVar2 = false;
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4948);
      (*pcVar1)();
    }
    bVar2 = *(char *)(*unaff_x20 + 0x20) == '/';
  }
  if (-1 < param_2) {
    FUN_1005aff2c(0,bVar2,0,param_2,param_1);
    _swift_bridgeObjectRelease(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4944);
  (*pcVar1)();
}



/* Address: 0x1005b494c | FUN_1005b494c */

undefined1  [16] FUN_1005b494c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[2] = unaff_x20;
  param_1[3] = uVar1;
  FUN_1005b4108();
  *param_1 = uVar1;
  param_1[1] = param_2;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1005b4984;
  return auVar2;
}



/* Address: 0x1005b4984 | FUN_1005b4984 */

void FUN_1005b4984(long *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar1 = param_1[1];
  lVar4 = param_1[3];
  if ((param_2 & 1) == 0) {
    if (lVar5 == 0) {
      if (*(long *)(lVar4 + 0x10) == 1) {
        bVar3 = false;
      }
      else {
        if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4ae4);
          (*pcVar2)();
        }
        bVar3 = *(char *)(lVar4 + 0x20) == '/';
      }
      FUN_1005afca4(0,bVar3);
      return;
    }
    if (*(long *)(lVar4 + 0x10) == 1) {
      bVar3 = false;
    }
    else {
      if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4adc);
        (*pcVar2)();
      }
      bVar3 = *(char *)(lVar4 + 0x20) == '/';
    }
    if (lVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4ad4);
      (*pcVar2)();
    }
    FUN_1005aff2c(0,bVar3,0,lVar1,lVar5);
  }
  else if (lVar5 == 0) {
    if (*(long *)(lVar4 + 0x10) == 1) {
      bVar3 = false;
    }
    else {
      if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4ae0);
        (*pcVar2)();
      }
      bVar3 = *(char *)(lVar4 + 0x20) == '/';
    }
    FUN_1005afca4(0,bVar3);
    lVar5 = 0;
  }
  else {
    if (*(long *)(lVar4 + 0x10) == 1) {
      bVar3 = false;
    }
    else {
      if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4ad8);
        (*pcVar2)();
      }
      bVar3 = *(char *)(lVar4 + 0x20) == '/';
    }
    if (lVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b4ad0);
      (*pcVar2)();
    }
    _swift_bridgeObjectRetain(lVar5);
    FUN_1005aff2c(0,bVar3,0,lVar1,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  _swift_bridgeObjectRelease(lVar5);
  return;
}



/* Address: 0x1005b4ae4 | FUN_1005b4ae4 */

long FUN_1005b4ae4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 1) {
    uVar4 = 0;
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4b8c);
      (*pcVar1)();
    }
    uVar4 = (ulong)(*(char *)(param_1 + 0x20) == '/');
  }
  lVar2 = param_1;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) || (*(ulong *)(param_1 + 0x18) >> 1 < lVar3 - uVar4)) {
    FUN_1005afb14();
    param_1 = lVar2;
  }
  FUN_1005afc04(0,uVar4,0);
  return param_1;
}



/* Address: 0x1005b4b8c | FUN_1005b4b8c */

long FUN_1005b4b8c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = lVar3 + -1;
  if (lVar2 == 0) {
LAB_1005b4bc8:
    param_1 = 0;
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4c2c);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + 0x20) == '/') {
      if (lVar3 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4c38);
        (*pcVar1)();
      }
      if (lVar2 == 1) goto LAB_1005b4bc8;
    }
    _swift_bridgeObjectRetain();
    FUN_1005b2ac8(lVar2,param_1);
    lVar3 = lVar2;
    FUN_1005b2a38();
    if (lVar3 < lVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4c30);
      (*pcVar1)();
    }
    if (lVar2 == lVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4c34);
      (*pcVar1)();
    }
  }
  return param_1;
}



/* Address: 0x1005b4c38 | FUN_1005b4c38 */

long FUN_1005b4c38(long param_1)

{
  code *pcVar1;
  Slice SVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long local_70;
  long local_68;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = lVar4 + -1;
  if (lVar5 != 0) {
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e38);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + 0x20) == '/') {
      if (lVar4 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e58);
        (*pcVar1)();
      }
      if (lVar5 == 1) {
        return param_1;
      }
    }
    _swift_bridgeObjectRetain(param_1);
    FUN_1005b2ac8(lVar5,param_1);
    lVar4 = lVar5;
    FUN_1005b2a38();
    if (lVar4 < lVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e3c);
      (*pcVar1)();
    }
    if (lVar5 == lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e40);
      (*pcVar1)();
    }
    SVar2.unknown = &DAT_100fd37b0;
    FUN_1000f7830(&DAT_100fd37b0,&DAT_100c62fc0);
    Swift::Slice::_get_indices(SVar2);
    _swift_bridgeObjectRelease(param_1);
    if (local_70 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e44);
      (*pcVar1)();
    }
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 < local_68) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e48);
      (*pcVar1)();
    }
    if (SBORROW8(local_68,local_70)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e4c);
      (*pcVar1)();
    }
    lVar4 = -(local_68 - local_70);
    if (SBORROW8(0,local_68 - local_70)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e50);
      (*pcVar1)();
    }
    if (SCARRY8(lVar5,lVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e54);
      (*pcVar1)();
    }
    lVar3 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar3 == 0) || ((long)(*(ulong *)(param_1 + 0x18) >> 1) < lVar5 + lVar4)) {
      FUN_1005afb14();
      param_1 = lVar3;
    }
    FUN_1005afc04(local_70,local_68,0);
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = lVar4 + -1;
    if (lVar5 != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e5c);
        (*pcVar1)();
      }
      if (*(char *)(param_1 + 0x20) == '/') {
        if (lVar4 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e60);
          (*pcVar1)();
        }
        if (lVar5 == 1) {
          return param_1;
        }
      }
      lVar3 = param_1;
      FUN_1005af84c();
      if (((uint)lVar3 & 0xff00) == 0x100) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e74);
        (*pcVar1)();
      }
      if (((uint)lVar3 & 0xff) == 0x2f) {
        if (lVar4 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e64);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(param_1 + 0x10);
        if (uVar6 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e68);
          (*pcVar1)();
        }
        uVar7 = lVar4 - 2;
        if (uVar6 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e6c);
          (*pcVar1)();
        }
        if (uVar6 - 1 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4e70);
          (*pcVar1)();
        }
        lVar4 = param_1;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)lVar4 == 0) || (*(ulong *)(param_1 + 0x18) >> 1 < uVar6 - 1)) {
          FUN_1005afb14();
          param_1 = lVar4;
        }
        FUN_1005afc04(uVar7,lVar5,0);
      }
    }
  }
  return param_1;
}



/* Address: 0x1005b4e74 | FUN_1005b4e74 */

undefined8 FUN_1005b4e74(void)

{
  code *pcVar1;
  Slice SVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar5 = *unaff_x20;
  lVar3 = *(long *)(lVar5 + 0x10);
  lVar4 = lVar3 + -1;
  if (lVar4 == 0) {
    return 0;
  }
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4fb8);
    (*pcVar1)();
  }
  if (*(char *)(lVar5 + 0x20) == '/') {
    if (lVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4fc4);
      (*pcVar1)();
    }
    if (lVar4 == 1) {
      return 0;
    }
  }
  _swift_bridgeObjectRetain(lVar5);
  FUN_1005b2ac8(lVar4,lVar5);
  lVar3 = lVar4;
  FUN_1005b2a38();
  if (lVar3 < lVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4fbc);
    (*pcVar1)();
  }
  if (lVar4 != lVar3) {
    SVar2.unknown = &DAT_100fd37b0;
    FUN_1000f7830(&DAT_100fd37b0,&DAT_100c62fc0);
    Swift::Slice::_get_indices(SVar2);
    _swift_bridgeObjectRelease(lVar5);
    FUN_1005afca4(local_58,uStack_50);
    lVar3 = *unaff_x20;
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 != 1) {
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4fc8);
        (*pcVar1)();
      }
      if (*(char *)(lVar3 + 0x20) == '/') {
        if (lVar4 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4fcc);
          (*pcVar1)();
        }
        if (lVar4 == 2) {
          return 1;
        }
      }
      lVar4 = lVar3;
      FUN_1005af84c();
      if (((uint)lVar4 & 0xff00) == 0x100) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4fd8);
        (*pcVar1)();
      }
      if (((uint)lVar4 & 0xff) == 0x2f) {
        lVar4 = *(long *)(lVar3 + 0x10);
        if (lVar4 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4fd0);
          (*pcVar1)();
        }
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4fd4);
          (*pcVar1)();
        }
        FUN_1005aead0(lVar4 + -2);
      }
    }
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b4fc0);
  (*pcVar1)();
}



/* Address: 0x1005b4fd8 | FUN_1005b4fd8 */

undefined1  [16] FUN_1005b4fd8(long param_1,ulong param_2,void *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  ulong uVar5;
  Slice SVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  undefined1 auVar11 [16];
  String SVar12;
  tuple2_conflict1 tVar13;
  long local_68;
  long lStack_60;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5128);
    (*pcVar1)();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b512c);
    (*pcVar1)();
  }
  if (lVar10 <= (long)param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5130);
    (*pcVar1)();
  }
  puVar2 = &DAT_100fd30c8;
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  puVar3 = puVar2;
  _swift_initStaticObject();
  FUN_1005af77c();
  if (((ulong)puVar3 & 1) == 0) {
    _swift_initStaticObject(puVar2,&DAT_100fd37f0);
    FUN_1005af77c();
    if (((ulong)puVar2 & 1) == 0) {
      uVar5 = 0x2e;
      uVar8 = param_2;
      pvVar9 = param_3;
      FUN_1005b414c();
      pcVar4 = (char *)0x0;
      pvVar7 = (void *)0x0;
      if ((((uint)uVar8 & 0xff) != 1) && (uVar5 != param_2)) {
        if (((long)uVar5 < 0) || (lVar10 + -1 <= (long)uVar5)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5134);
          (*pcVar1)();
        }
        if ((long)param_3 <= (long)uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5138);
          (*pcVar1)();
        }
        if (uVar5 + 1 < param_2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b513c);
          (*pcVar1)();
        }
        SVar6.unknown = &DAT_100fd37b0;
        FUN_1000f7830(&DAT_100fd37b0,&DAT_100c62fc0);
        Swift::Slice::_get_indices(SVar6);
        SVar12.str = (char *)(lStack_60 - local_68);
        SVar12.bridgeObject = pvVar9;
        tVar13 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + local_68 + 0x20),SVar12);
        pvVar7 = tVar13.result.bridgeObject;
        pcVar4 = tVar13.result.str;
      }
      goto LAB_1005b5074;
    }
  }
  pcVar4 = (char *)0x0;
  pvVar7 = (void *)0x0;
LAB_1005b5074:
  auVar11._8_8_ = pvVar7;
  auVar11._0_8_ = pcVar4;
  return auVar11;
}



/* Address: 0x1005b513c | FUN_1005b513c */

char * FUN_1005b513c(long param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  Slice SVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  String SVar10;
  tuple2_conflict1 tVar11;
  long local_58;
  long lStack_50;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5260);
    (*pcVar2)();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5264);
    (*pcVar2)();
  }
  if (*(long *)(param_1 + 0x10) <= (long)param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5268);
    (*pcVar2)();
  }
  puVar3 = &DAT_100fd30c8;
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  puVar4 = puVar3;
  _swift_initStaticObject();
  pvVar8 = param_3;
  FUN_1005af77c();
  pvVar9 = param_3;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_initStaticObject(puVar3,&DAT_100fd3850);
    pvVar8 = param_3;
    FUN_1005af77c();
    if (((ulong)puVar3 & 1) == 0) {
      pvVar5 = (void *)0x2e;
      pvVar7 = param_2;
      pvVar8 = param_3;
      FUN_1005b414c();
      pvVar1 = param_3;
      if (pvVar5 != param_2) {
        pvVar1 = pvVar5;
      }
      if (((uint)pvVar7 & 0xff) != 1) {
        pvVar9 = pvVar1;
      }
    }
  }
  if ((long)pvVar9 < (long)param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b526c);
    (*pcVar2)();
  }
  if ((long)param_3 < (long)pvVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5270);
    (*pcVar2)();
  }
  SVar6.unknown = &DAT_100fd37b0;
  FUN_1000f7830(&DAT_100fd37b0,&DAT_100c62fc0);
  Swift::Slice::_get_indices(SVar6);
  SVar10.str = (char *)(lStack_50 - local_58);
  SVar10.bridgeObject = pvVar8;
  tVar11 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + local_58 + 0x20),SVar10);
  return tVar11.result.str;
}



/* Address: 0x1005b5270 | FUN_1005b5270 */

undefined1  [16] FUN_1005b5270(long param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  Slice SVar9;
  undefined1 *puVar10;
  void *pvVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  String SVar15;
  tuple2_conflict1 tVar16;
  long local_68;
  long lStack_60;
  
  lVar13 = *(long *)(param_1 + 0x10);
  puVar1 = (undefined1 *)(lVar13 + -1);
  if (puVar1 != (undefined1 *)0x0) {
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5420);
      (*pcVar2)();
    }
    if (*(char *)(param_1 + 0x20) == '/') {
      if (lVar13 == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5434);
        (*pcVar2)();
      }
      if (puVar1 == &DAT_00000001) goto LAB_1005b5388;
    }
    _swift_bridgeObjectRetain(param_1);
    puVar3 = puVar1;
    FUN_1005b2ac8(puVar1,param_1);
    puVar4 = puVar3;
    FUN_1005b2a38();
    if (puVar3 == puVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5424);
      (*pcVar2)();
    }
    if ((long)puVar4 < (long)puVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5428);
      (*pcVar2)();
    }
    if ((long)puVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b542c);
      (*pcVar2)();
    }
    if (lVar13 <= (long)puVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5430);
      (*pcVar2)();
    }
    puVar5 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    puVar6 = puVar5;
    _swift_initStaticObject();
    FUN_1005af77c();
    if (((ulong)puVar6 & 1) == 0) {
      _swift_initStaticObject(puVar5,&DAT_100fd37f0);
      FUN_1005af77c();
      if (((ulong)puVar5 & 1) == 0) {
        puVar7 = (undefined1 *)0x2e;
        puVar10 = puVar3;
        puVar12 = puVar4;
        FUN_1005b414c();
        if ((((uint)puVar10 & 0xff) != 1) && (puVar7 != puVar3)) {
          if (((long)puVar7 < 0) || ((long)puVar1 <= (long)puVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5438);
            (*pcVar2)();
          }
          if ((long)puVar4 <= (long)puVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b543c);
            (*pcVar2)();
          }
          if (puVar7 + 1 < puVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5440);
            (*pcVar2)();
          }
          SVar9.unknown = &DAT_100fd37b0;
          FUN_1000f7830(&DAT_100fd37b0,&DAT_100c62fc0);
          Swift::Slice::_get_indices(SVar9);
          SVar15.str = (char *)(lStack_60 - local_68);
          SVar15.bridgeObject = puVar12;
          tVar16 = Swift::String::_fromUTF8Repairing
                             ((UnsafeBufferPointer<__int8>)((char *)(param_1 + 0x20) + local_68),
                              SVar15);
          pvVar11 = tVar16.result.bridgeObject;
          pcVar8 = tVar16.result.str;
          _swift_bridgeObjectRelease(param_1,pvVar11,tVar16._16_8_);
          goto LAB_1005b5390;
        }
      }
    }
    _swift_bridgeObjectRelease(param_1);
  }
LAB_1005b5388:
  pcVar8 = (char *)0x0;
  pvVar11 = (void *)0x0;
LAB_1005b5390:
  auVar14._8_8_ = pvVar11;
  auVar14._0_8_ = pcVar8;
  return auVar14;
}



/* Address: 0x1005b5440 | FUN_1005b5440 */

void FUN_1005b5440(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  void *pvVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong uVar15;
  
  lVar14 = *unaff_x20;
  lVar11 = *(long *)(lVar14 + 0x10);
  lVar3 = lVar11 + -1;
  if (lVar3 == 0) goto LAB_1005b555c;
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5780);
    (*pcVar1)();
  }
  if (*(char *)(lVar14 + 0x20) == '/') {
    if (lVar11 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5798);
      (*pcVar1)();
    }
    if (lVar3 == 1) goto LAB_1005b555c;
  }
  _swift_bridgeObjectRetain(lVar14);
  FUN_1005b2ac8(lVar3,lVar14);
  lVar11 = lVar3;
  FUN_1005b2a38();
  if (lVar11 < lVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5784);
    (*pcVar1)();
  }
  if (lVar3 == lVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5788);
    (*pcVar1)();
  }
  if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b578c);
    (*pcVar1)();
  }
  if (lVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5790);
    (*pcVar1)();
  }
  if (*(long *)(lVar14 + 0x10) <= lVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5794);
    (*pcVar1)();
  }
  puVar4 = &DAT_100fd30c8;
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  puVar5 = puVar4;
  _swift_initStaticObject();
  FUN_1005af77c();
  if (((ulong)puVar5 & 1) == 0) {
    if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b579c);
      (*pcVar1)();
    }
    if (*(long *)(lVar14 + 0x10) <= lVar11) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b57a0);
      (*pcVar1)();
    }
    puVar5 = puVar4;
    _swift_initStaticObject(puVar4,&DAT_100fd38b0);
    FUN_1005af77c();
    if (((ulong)puVar5 & 1) == 0) {
      if (param_2 == (undefined *)0x0) {
        param_2 = puVar4;
        _swift_initStaticObject(puVar4,&DAT_100fd38e0);
        lVar12 = *(long *)(lVar14 + 0x10);
      }
      else {
        puVar5 = puVar4;
        _swift_initStaticObject(puVar4,&DAT_100fd3970);
        _swift_isUniquelyReferenced_nonNull_native();
        FUN_1005afb14();
        pvVar6 = (void *)0x0;
        FUN_1005afa5c(0,0,1,0x2e);
        FUN_1005b6a2c();
        uVar2 = (uint)pvVar6;
        while ((uVar2 & 0xff00) != 0x100) {
          uVar15 = *(ulong *)(puVar5 + 0x10);
          if (uVar15 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b577c);
            (*pcVar1)();
          }
          uVar13 = uVar15;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar15) {
            puVar8 = (undefined *)0x1;
            FUN_1005afb14(1,uVar15 + 1,1,puVar5);
            uVar13 = *(ulong *)(puVar8 + 0x10);
            puVar5 = puVar8;
          }
          pvVar7 = _memmove(puVar5 + uVar15 + 0x20,puVar5 + uVar15 + 0x1f,uVar13 - (uVar15 - 1));
          *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
          puVar5[uVar15 + 0x1f] = (char)pvVar6;
          FUN_1005b6a2c();
          pvVar6 = pvVar7;
          uVar2 = (uint)pvVar7;
        }
        _swift_bridgeObjectRelease(param_2);
        lVar12 = *(long *)(lVar14 + 0x10);
        param_2 = puVar5;
      }
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b56b4);
        (*pcVar1)();
      }
      if (lVar12 <= lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b57a4);
        (*pcVar1)();
      }
      puVar5 = puVar4;
      _swift_initStaticObject(puVar4,&DAT_100fd3910);
      FUN_1005af77c();
      lVar12 = lVar11;
      if (((ulong)puVar5 & 1) == 0) {
        if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b57a8);
          (*pcVar1)();
        }
        if (*(long *)(lVar14 + 0x10) <= lVar11) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b57ac);
          (*pcVar1)();
        }
        _swift_initStaticObject(puVar4,&DAT_100fd3940);
        FUN_1005af77c();
        if (((ulong)puVar4 & 1) != 0) goto LAB_1005b5674;
        lVar9 = 0x2e;
        lVar10 = lVar3;
        FUN_1005b414c(0x2e,lVar3,lVar11,lVar14);
        _swift_bridgeObjectRelease(lVar14);
        if (((uint)lVar10 & 0xff) != 1) {
          if (lVar9 != lVar3) {
            lVar12 = lVar9;
          }
          if (lVar11 < lVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5778);
            (*pcVar1)();
          }
        }
      }
      else {
LAB_1005b5674:
        _swift_bridgeObjectRelease(lVar14);
      }
      FUN_1005b0104(lVar12,lVar11,param_2);
      goto LAB_1005b555c;
    }
  }
  _swift_bridgeObjectRelease(lVar14);
LAB_1005b555c:
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1005b57ac | FUN_1005b57ac */

undefined1  [16] FUN_1005b57ac(undefined8 *param_1,ulong param_2,void *param_3)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  Slice SVar7;
  ulong uVar8;
  ulong *unaff_x20;
  char *pcVar9;
  void *pvVar10;
  long lVar11;
  undefined1 auVar12 [16];
  String SVar13;
  tuple2_conflict1 tVar14;
  
  puVar2 = (ulong *)0x40;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x40);
  }
  else {
    param_2 = 0xdfca;
    _swift_coroFrameAlloc();
  }
  *param_1 = puVar2;
  puVar2[7] = (ulong)unaff_x20;
  uVar3 = *unaff_x20;
  FUN_1005b4b8c();
  if (uVar3 != 0) {
    lVar11 = *(long *)(uVar3 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b594c);
      (*pcVar1)();
    }
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5950);
      (*pcVar1)();
    }
    if (lVar11 <= (long)param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5954);
      (*pcVar1)();
    }
    puVar4 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    puVar5 = puVar4;
    _swift_initStaticObject();
    FUN_1005af77c();
    if (((ulong)puVar5 & 1) == 0) {
      _swift_initStaticObject(puVar4,&DAT_100fd37f0);
      FUN_1005af77c();
      if (((ulong)puVar4 & 1) == 0) {
        uVar6 = 0x2e;
        uVar8 = param_2;
        pvVar10 = param_3;
        FUN_1005b414c();
        if ((((uint)uVar8 & 0xff) != 1) && (uVar6 != param_2)) {
          if (((long)uVar6 < 0) || (lVar11 + -1 <= (long)uVar6)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5958);
            (*pcVar1)();
          }
          if ((long)param_3 <= (long)uVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b595c);
            (*pcVar1)();
          }
          if (uVar6 + 1 < param_2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5960);
            (*pcVar1)();
          }
          *puVar2 = uVar6 + 1;
          puVar2[1] = (ulong)param_3;
          puVar2[2] = uVar3;
          SVar7.unknown = &DAT_100fd37b0;
          FUN_1000f7830(&DAT_100fd37b0,&DAT_100c62fc0);
          Swift::Slice::_get_indices(SVar7);
          SVar13.str = (char *)(puVar2[6] - puVar2[5]);
          SVar13.bridgeObject = pvVar10;
          tVar14 = Swift::String::_fromUTF8Repairing((undefined *)(uVar3 + puVar2[5] + 0x20),SVar13)
          ;
          pvVar10 = tVar14.result.bridgeObject;
          pcVar9 = tVar14.result.str;
          _swift_bridgeObjectRelease(uVar3,pvVar10,tVar14._16_8_);
          goto LAB_1005b58b0;
        }
      }
    }
    _swift_bridgeObjectRelease(uVar3);
  }
  pcVar9 = (char *)0x0;
  pvVar10 = (void *)0x0;
LAB_1005b58b0:
  puVar2[3] = (ulong)pcVar9;
  puVar2[4] = (ulong)pvVar10;
  auVar12._8_8_ = puVar2 + 3;
  auVar12._0_8_ = FUN_1005b5960;
  return auVar12;
}



/* Address: 0x1005b5960 | FUN_1005b5960 */

void FUN_1005b5960(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pvVar1 = (void *)*param_1;
  uVar2 = *(undefined8 *)((long)pvVar1 + 0x18);
  uVar3 = *(undefined8 *)((long)pvVar1 + 0x20);
  if ((param_2 & 1) == 0) {
    FUN_1005b5440(uVar2,uVar3);
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    FUN_1005b5440(uVar2,uVar3);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)pvVar1 + 0x20));
  }
  _free(pvVar1);
  return;
}



/* Address: 0x1005b59c8 | FUN_1005b59c8 */

undefined1  [16] FUN_1005b59c8(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  Slice SVar9;
  undefined1 *puVar10;
  void *pvVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  String SVar16;
  tuple2_conflict1 tVar17;
  long local_68;
  long lStack_60;
  
  lVar14 = *(long *)(param_1 + 0x10);
  puVar5 = (undefined1 *)(lVar14 + -1);
  if (puVar5 == (undefined1 *)0x0) {
LAB_1005b5a14:
    pcVar4 = (char *)0x0;
    pvVar11 = (void *)0x0;
  }
  else {
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b5b70);
      (*pcVar3)();
    }
    if (*(char *)(param_1 + 0x20) == '/') {
      if (lVar14 == 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b5b88);
        (*pcVar3)();
      }
      if (puVar5 == &DAT_00000001) goto LAB_1005b5a14;
    }
    _swift_bridgeObjectRetain(param_1);
    FUN_1005b2ac8(puVar5,param_1);
    puVar6 = puVar5;
    FUN_1005b2a38();
    if (puVar5 == puVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b5b74);
      (*pcVar3)();
    }
    if ((long)puVar6 < (long)puVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b5b78);
      (*pcVar3)();
    }
    if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b5b7c);
      (*pcVar3)();
    }
    if (lVar14 <= (long)puVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b5b80);
      (*pcVar3)();
    }
    puVar7 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    puVar8 = puVar7;
    _swift_initStaticObject();
    puVar13 = puVar6;
    FUN_1005af77c();
    puVar2 = puVar6;
    if (((ulong)puVar8 & 1) == 0) {
      _swift_initStaticObject(puVar7,&DAT_100fd39d0);
      puVar13 = puVar6;
      FUN_1005af77c();
      if (((ulong)puVar7 & 1) == 0) {
        puVar10 = (undefined1 *)0x2e;
        puVar12 = puVar5;
        puVar13 = puVar6;
        FUN_1005b414c();
        puVar1 = puVar6;
        if (puVar10 != puVar5) {
          puVar1 = puVar10;
        }
        if (((uint)puVar12 & 0xff) != 1) {
          puVar2 = puVar1;
        }
      }
    }
    if ((long)puVar2 < (long)puVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b5b6c);
      (*pcVar3)();
    }
    if ((long)puVar6 < (long)puVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b5b84);
      (*pcVar3)();
    }
    SVar9.unknown = &DAT_100fd37b0;
    FUN_1000f7830(&DAT_100fd37b0,&DAT_100c62fc0);
    Swift::Slice::_get_indices(SVar9);
    SVar16.str = (char *)(lStack_60 - local_68);
    SVar16.bridgeObject = puVar13;
    tVar17 = Swift::String::_fromUTF8Repairing
                       ((UnsafeBufferPointer<__int8>)((char *)(param_1 + 0x20) + local_68),SVar16);
    pvVar11 = tVar17.result.bridgeObject;
    pcVar4 = tVar17.result.str;
    _swift_bridgeObjectRelease(param_1,pvVar11,tVar17._16_8_);
  }
  auVar15._8_8_ = pvVar11;
  auVar15._0_8_ = pcVar4;
  return auVar15;
}



/* Address: 0x1005b5b88 | thunk_FUN_1005b2e84 */

void thunk_FUN_1005b2e84(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong *unaff_x20;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  
  uVar15 = *unaff_x20;
  uVar12 = uVar15;
  FUN_1005b41b4();
  if (((uVar12 & 1) == 0) && (uVar12 = *(ulong *)(uVar15 + 0x10), uVar12 != 1)) {
    if (uVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b322c);
      (*pcVar4)();
    }
    cVar1 = *(char *)(uVar15 + 0x20);
    if (cVar1 == '/') {
      if (uVar12 < 3) {
        return;
      }
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    puVar5 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    puVar6 = puVar5;
    _swift_initStaticObject();
    uVar10 = uVar12;
    uVar18 = uVar12;
    uVar20 = uVar12;
    do {
      uVar7 = uVar18;
      uVar11 = uVar15;
      FUN_1005b2a38();
      if ((long)uVar7 < (long)uVar18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b320c);
        (*pcVar4)();
      }
      if (*(long *)(uVar15 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3210);
        (*pcVar4)();
      }
      if (*(long *)(uVar15 + 0x10) <= (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3214);
        (*pcVar4)();
      }
      puVar8 = puVar6;
      FUN_1005af77c(puVar6,uVar18,uVar7,uVar15);
      uVar9 = uVar10;
      uVar17 = uVar11;
      uVar19 = uVar20;
      if (((ulong)puVar8 & 1) == 0) {
        if (*(long *)(uVar15 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3218);
          (*pcVar4)();
        }
        if (*(long *)(uVar15 + 0x10) <= (long)uVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b321c);
          (*pcVar4)();
        }
        puVar8 = puVar5;
        _swift_initStaticObject(puVar5,&DAT_100fd3698);
        FUN_1005af77c();
        if (((ulong)puVar8 & 1) != 0) {
          uVar7 = uVar20;
          if ((cVar1 == '/') && (uVar9 = uVar12, uVar19 = uVar12, uVar7 = uVar10, uVar10 == uVar12))
          goto LAB_1005b2f34;
          uVar20 = uVar12;
          if (uVar7 != uVar12) {
            uVar9 = uVar7;
            uVar20 = uVar15;
            FUN_1005b2ac8();
            if (*(long *)(uVar15 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3220);
              (*pcVar4)();
            }
            if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3224);
              (*pcVar4)();
            }
            if (*(long *)(uVar15 + 0x10) <= (long)uVar20) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3228);
              (*pcVar4)();
            }
            puVar8 = puVar5;
            _swift_initStaticObject(puVar5,&DAT_100fd36c8);
            FUN_1005af77c();
            uVar20 = uVar7;
            uVar19 = uVar9;
            if (((ulong)puVar8 & 1) == 0) goto LAB_1005b2f34;
          }
        }
        uVar9 = uVar11;
        uVar19 = uVar11;
        if ((uVar18 != uVar20) &&
           (uVar9 = uVar10, uVar17 = uVar18, uVar19 = uVar20, uVar18 != uVar11)) {
          lVar14 = uVar18 + 0x20;
          lVar21 = uVar20 + 0x20;
          do {
            lVar16 = lVar21;
            lVar21 = lVar16 + -0x20;
            uVar20 = lVar14 - 0x20;
            if (lVar14 != lVar16) {
              if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b31fc);
                (*pcVar4)();
              }
              if (*(ulong *)(uVar15 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3200);
                (*pcVar4)();
              }
              if ((long)*(ulong *)(uVar15 + 0x10) <= lVar21) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3204);
                (*pcVar4)();
              }
              uVar2 = *(undefined1 *)(uVar15 + lVar14);
              uVar3 = *(undefined1 *)(uVar15 + lVar16);
              uVar10 = uVar15;
              _swift_isUniquelyReferenced_nonNull_native();
              if ((uVar10 & 1) == 0) {
                FUN_1005bbc0c();
              }
              *(undefined1 *)(uVar15 + lVar14) = uVar3;
              *unaff_x20 = uVar15;
              if (*(long *)(uVar15 + 0x10) <= lVar21) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3208);
                (*pcVar4)();
              }
              *(undefined1 *)(uVar15 + lVar16) = uVar2;
              *unaff_x20 = uVar15;
            }
            uVar10 = lVar14 - 0x1f;
            if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b31f4);
              (*pcVar4)();
            }
            lVar13 = *(long *)(uVar15 + 0x10) + -1;
            if (((lVar13 <= lVar21) || ((long)uVar18 < 0)) || (lVar13 <= (long)uVar20)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b31f8);
              (*pcVar4)();
            }
            lVar14 = lVar14 + 1;
            lVar21 = lVar16 + 1;
          } while (uVar10 != uVar11);
          uVar9 = lVar16 - 0x1fU;
          uVar17 = uVar11;
          uVar19 = lVar16 - 0x1fU;
        }
      }
LAB_1005b2f34:
      uVar10 = uVar9;
      uVar18 = uVar17;
      uVar20 = uVar19;
    } while ((long)uVar17 < *(long *)(uVar15 + 0x10) + -1);
    if (uVar17 != uVar19) {
      if (*(long *)(uVar15 + 0x10) <= (long)uVar19) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3230);
        (*pcVar4)();
      }
      FUN_1005afca4(uVar19);
      uVar12 = *unaff_x20;
      lVar14 = *(long *)(uVar12 + 0x10);
      if (lVar14 != 1) {
        if (lVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3234);
          (*pcVar4)();
        }
        if (*(char *)(uVar12 + 0x20) == '/') {
          if (lVar14 == 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3238);
            (*pcVar4)();
          }
          if (lVar14 == 2) {
            return;
          }
        }
        uVar15 = uVar12;
        FUN_1005af84c();
        if (((uint)uVar15 & 0xff00) == 0x100) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3244);
          (*pcVar4)();
        }
        if (((uint)uVar15 & 0xff) == 0x2f) {
          lVar14 = *(long *)(uVar12 + 0x10);
          if (lVar14 == 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b323c);
            (*pcVar4)();
          }
          if (lVar14 != 0) {
            FUN_1005aead0(lVar14 + -2);
            return;
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b3240);
          (*pcVar4)();
        }
      }
    }
  }
  return;
}



/* Address: 0x1005b5b8c | FUN_1005b5b8c */

undefined8 FUN_1005b5b8c(undefined8 param_1)

{
  FUN_1005b2e84();
  return param_1;
}



/* Address: 0x1005b5bbc | FUN_1005b5bbc */

undefined8 FUN_1005b5bbc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 1) {
    uVar9 = 0;
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5db4);
      (*pcVar1)();
    }
    uVar9 = (ulong)(*(char *)(param_1 + 0x20) == '/');
  }
  lVar3 = param_1;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar3 == 0) || (*(ulong *)(param_1 + 0x18) >> 1 < lVar7 - uVar9)) {
    FUN_1005afb14();
    param_1 = lVar3;
  }
  FUN_1005afc04(0,uVar9,0);
  FUN_1005b2e84();
  uVar9 = *(ulong *)(param_1 + 0x10);
  if (uVar9 == 1) {
    _swift_bridgeObjectRelease(param_1);
    return param_2;
  }
  if (uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5db0);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + 0x20) == '/') {
    if (uVar9 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5dc4);
      (*pcVar1)();
    }
    if (uVar9 != 2) {
      uVar8 = 1;
      goto LAB_1005b5ca4;
    }
  }
  else {
    uVar8 = 0;
LAB_1005b5ca4:
    uVar4 = uVar8;
    FUN_1005b2a38(uVar8,param_1);
    if (uVar8 == uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5db8);
      (*pcVar1)();
    }
    if ((long)uVar4 < (long)uVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5dbc);
      (*pcVar1)();
    }
    if (uVar9 <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5dc0);
      (*pcVar1)();
    }
    puVar5 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    puVar6 = puVar5;
    _swift_initStaticObject();
    FUN_1005af77c();
    uVar9 = *(ulong *)(param_1 + 0x10);
    if (((ulong)puVar6 & 1) == 0) {
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5dcc);
        (*pcVar1)();
      }
      if (uVar9 <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5dd0);
        (*pcVar1)();
      }
      _swift_initStaticObject(puVar5,&DAT_100fd3a30);
      FUN_1005af77c();
      if (((ulong)puVar5 & 1) != 0) {
        _swift_bridgeObjectRelease(param_1);
        _swift_bridgeObjectRelease(param_2);
        return 0;
      }
      uVar9 = *(ulong *)(param_1 + 0x10);
    }
    if (uVar9 == 1) {
      bVar2 = false;
      goto LAB_1005b5d74;
    }
    if (uVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b5dc8);
      (*pcVar1)();
    }
  }
  bVar2 = *(char *)(param_1 + 0x20) == '/';
LAB_1005b5d74:
  FUN_1005b6d50(param_1,bVar2);
  _swift_bridgeObjectRelease(param_1);
  return param_2;
}



/* Address: 0x1005b5dd0 | FUN_1005b5dd0 */

undefined8 FUN_1005b5dd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1005b6fe4(param_1,param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
  return param_2;
}



/* Address: 0x1005b5e2c | FUN_1005b5e2c */

undefined8 FUN_1005b5e2c(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  
  plVar4 = &local_70;
  lVar6 = *unaff_x20;
  lVar11 = *(long *)(lVar6 + 0x10);
  if (lVar11 == 1) {
LAB_1005b5e80:
    lVar7 = 0;
    uVar9 = 0;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5ff0);
      (*pcVar2)();
    }
    if (*(char *)(lVar6 + 0x20) != '/') goto LAB_1005b5e80;
    _swift_bridgeObjectRetain(lVar6);
    uVar9 = 1;
    lVar7 = lVar6;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 1) {
LAB_1005b5ec4:
    uVar5 = 0;
    lVar1 = 0;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5ff4);
      (*pcVar2)();
    }
    if (*(char *)(param_1 + 0x20) != '/') goto LAB_1005b5ec4;
    _swift_bridgeObjectRetain(param_1);
    uVar5 = 1;
    lVar1 = param_1;
  }
  if (lVar7 == 0) {
    lVar7 = lVar1;
    if (lVar1 != 0) {
LAB_1005b5f28:
      _swift_bridgeObjectRelease(lVar7);
      return 0;
    }
  }
  else {
    if (lVar1 == 0) goto LAB_1005b5f28;
    uVar8 = 0;
    FUN_1005af59c(0,uVar5,lVar1,0,uVar9,lVar7);
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(lVar1);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    lVar11 = *(long *)(lVar6 + 0x10);
  }
  if (lVar11 == 1) {
    uVar8 = 0;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5ff8);
      (*pcVar2)();
    }
    uVar8 = (ulong)(*(char *)(lVar6 + 0x20) == '/');
  }
  if (lVar10 == 1) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_1 + 0x20) == '/';
  }
  _swift_bridgeObjectRetain(lVar6);
  _swift_bridgeObjectRetain(param_1);
  FUN_1005b5ffc(&local_70,lVar6,uVar8,param_1,bVar3);
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(local_60);
  if (local_70 != lStack_68) {
    return 0;
  }
  if ((long)plVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b5ffc);
    (*pcVar2)();
  }
  FUN_1005afca4(0,plVar4);
  return 1;
}



/* Address: 0x1005b5ffc | FUN_1005b5ffc */

long FUN_1005b5ffc(ulong *param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 <= param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6218);
    (*pcVar2)();
  }
  lVar9 = *(long *)(param_4 + 0x10);
  if (lVar9 <= (long)param_5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b621c);
    (*pcVar2)();
  }
  lVar10 = lVar8 + -1;
  uVar7 = lVar9 - 1;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  uVar11 = param_5;
  while (uVar5 = uVar11, lVar3 = lVar10, param_3 != lVar10) {
    if (lVar10 <= param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b61dc);
      (*pcVar2)();
    }
    lVar3 = param_3;
    FUN_1005b2a38(param_3,param_2);
    if (lVar3 < param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b61e0);
      (*pcVar2)();
    }
    if (param_3 == lVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b61e4);
      (*pcVar2)();
    }
    lVar4 = param_3;
    FUN_1005b2a38(param_3,param_2);
    if (lVar4 < param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b61e8);
      (*pcVar2)();
    }
    if (param_3 == lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b61ec);
      (*pcVar2)();
    }
    uVar5 = uVar7;
    lVar3 = param_3;
    if (uVar11 == uVar7) break;
    if ((long)uVar7 <= (long)uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b61f0);
      (*pcVar2)();
    }
    uVar5 = uVar11;
    FUN_1005b2a38(uVar11,param_4);
    if ((long)uVar5 < (long)uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b61f4);
      (*pcVar2)();
    }
    if (uVar11 == uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b61f8);
      (*pcVar2)();
    }
    _swift_bridgeObjectRetain(param_4);
    uVar6 = uVar11;
    FUN_1005af59c(uVar11,uVar5,param_4,param_3,lVar4,param_2);
    _swift_bridgeObjectRelease(param_4);
    uVar5 = uVar11;
    if ((uVar6 & 1) == 0) break;
    FUN_1005b2a38(param_3,param_2);
    if (lVar3 < param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b61fc);
      (*pcVar2)();
    }
    if (param_3 == lVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6200);
      (*pcVar2)();
    }
    lVar3 = param_2;
    FUN_1005b2a38(param_3);
    if (lVar8 <= lVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6204);
      (*pcVar2)();
    }
    if (lVar3 < param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6208);
      (*pcVar2)();
    }
    FUN_1005b2a38(uVar11,param_4);
    if ((long)uVar5 < (long)uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b620c);
      (*pcVar2)();
    }
    if (uVar11 == uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6210);
      (*pcVar2)();
    }
    uVar5 = param_4;
    FUN_1005b2a38(uVar11);
    if (lVar9 <= (long)uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6214);
      (*pcVar2)();
    }
    bVar1 = (long)uVar5 < (long)uVar11;
    uVar11 = uVar5;
    param_3 = lVar3;
    if (bVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6190);
      (*pcVar2)();
    }
  }
  *param_1 = uVar5;
  param_1[1] = uVar7;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return lVar3;
}



/* Address: 0x1005b621c | FUN_1005b621c */

void FUN_1005b621c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long *unaff_x20;
  
  if (param_2 == param_3) {
    _swift_bridgeObjectRelease(param_1);
    return;
  }
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  lVar1 = uVar3 - 1;
  if (lVar1 != 0) {
    if (uVar3 < 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b62b0);
      (*pcVar2)();
    }
    if (*(char *)(*unaff_x20 + uVar3 + 0x1e) != '/') {
      FUN_1005af87c(lVar1,lVar1,0x2f);
    }
  }
  FUN_1005ae884(param_2,param_3,param_1);
  return;
}



/* Address: 0x1005b62b0 | FUN_1005b62b0 */

void FUN_1005b62b0(undefined8 param_1,long param_2)

{
  FUN_1005b6fe4();
                    /* WARNING: Could not recover jumptable at 0x0001005b62e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return;
}



/* Address: 0x1005b62ec | FUN_1005b62ec */

void FUN_1005b62ec(undefined8 ****param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 ***local_58;
  ulong uStack_50;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  lVar8 = *unaff_x20;
  if (*(long *)(lVar8 + 0x10) == 1) {
    _swift_bridgeObjectRelease(lVar8);
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1 >> 0x3c & 1) == 0) goto LAB_1005b6498;
        ppppuVar5 = (undefined8 ****)((param_2 & 0xfffffffffffffff) + 0x20);
      }
      else {
        uStack_50 = param_2 & 0xffffffffffffff;
        ppppuVar5 = &local_58;
        local_58 = param_1;
      }
      FUN_1005bbf6c();
      _swift_bridgeObjectRelease(param_2);
      local_58 = ppppuVar5;
    }
    else {
LAB_1005b6498:
      Swift::_StringGuts::__slowWithCString((_StringGuts)0x1005baaec);
      _swift_bridgeObjectRelease(param_2);
    }
    FUN_1005b2cbc();
    *unaff_x20 = (long)local_58;
    return;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) goto LAB_1005b64cc;
      ppppuVar5 = (undefined8 ****)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_50 = param_2 & 0xffffffffffffff;
      ppppuVar5 = &local_58;
      local_58 = param_1;
    }
    FUN_1005bbf6c();
    _swift_bridgeObjectRelease(param_2);
    local_58 = ppppuVar5;
  }
  else {
LAB_1005b64cc:
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x1005baaec);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_1005b2cbc();
  pppuVar3 = local_58;
  pppuVar7 = (undefined8 ***)local_58[2];
  lVar2 = (long)pppuVar7 + -1;
  if (lVar2 != 0) {
    if (pppuVar7 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b650c);
      (*pcVar4)();
    }
    if (*(char *)(local_58 + 4) == '/') {
      if (pppuVar7 == (undefined8 ***)0x1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6510);
        (*pcVar4)();
      }
      uVar9 = 1;
      if (lVar2 == 1) goto LAB_1005b6478;
      goto LAB_1005b641c;
    }
  }
  uVar9 = 0;
  if (lVar2 == 0) {
LAB_1005b6478:
    _swift_bridgeObjectRelease(local_58);
    return;
  }
LAB_1005b641c:
  lVar6 = lVar8;
  FUN_1005af84c();
  if ((((uint)lVar6 & 0xff00) != 0x100) && (((uint)lVar6 & 0xff) != 0x2f)) {
    lVar8 = *(long *)(lVar8 + 0x10) + -1;
    FUN_1005af87c(lVar8,lVar8,0x2f);
  }
  FUN_1005ae884(uVar9,lVar2,pppuVar3);
  return;
}



/* Address: 0x1005b6510 | FUN_1005b6510 */

long FUN_1005b6510(undefined8 param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_48;
  
  if (param_2 == param_3) {
    _swift_bridgeObjectRelease();
  }
  else {
    lVar2 = param_4;
    FUN_1005af84c();
    local_48 = param_4;
    if ((((uint)lVar2 & 0xff00) != 0x100) && (((uint)lVar2 & 0xff) != 0x2f)) {
      uVar3 = *(ulong *)(param_4 + 0x10);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6600);
        (*pcVar1)();
      }
      lVar2 = param_4;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar2 == 0) || (*(ulong *)(param_4 + 0x18) >> 1 <= uVar3)) {
        FUN_1005afb14();
        local_48 = lVar2;
      }
      FUN_1005afa5c(uVar3 - 1,uVar3 - 1,1,0x2f);
    }
    FUN_1005ae884(param_2,param_3,param_1);
    param_4 = local_48;
  }
  return param_4;
}


