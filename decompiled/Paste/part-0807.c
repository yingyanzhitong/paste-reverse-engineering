/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008d6994 | FUN_1008d6994 */

void FUN_1008d6994(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_10090d0b8(0,0,param_1);
  }
  FUN_10062cc1c(param_2);
  FUN_10062cc10(param_2);
  return;
}



/* Address: 0x1008d69d0 | thunk_FUN_1008d69d4 */

void thunk_FUN_1008d69d4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_10090d0b8(0,0,param_1);
  }
  FUN_10062cc10(param_2);
  return;
}



/* Address: 0x1008d69d4 | FUN_1008d69d4 */

void FUN_1008d69d4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_10090d0b8(0,0,param_1);
  }
  FUN_10062cc10(param_2);
  return;
}



/* Address: 0x1008d6a08 | FUN_1008d6a08 */

undefined1  [16] FUN_1008d6a08(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar6 = *unaff_x20;
  uVar5 = *(ulong *)((long)unaff_x20 + *(long *)(lVar6 + 0x78));
  uVar4 = uVar5;
  _swift_getObjectType();
  _swift_unknownObjectRetain(uVar5);
  FUN_1009416b4(uVar4,&PTR_PTR_100f19fa8);
  _swift_unknownObjectRelease(uVar5);
  if ((uVar4 & 1) == 0) {
    FUN_1008dad4c(0,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58));
    FUN_10066ebb8(&local_50,FUN_1008db704);
  }
  else {
    puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xd0));
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    FUN_1005d84e8(uVar2);
    FUN_1005d84e8(uVar3);
    local_50 = uVar2;
    uStack_48 = uVar3;
  }
  auVar7._8_8_ = uStack_48;
  auVar7._0_8_ = local_50;
  return auVar7;
}



/* Address: 0x1008d6aec | FUN_1008d6aec */

void FUN_1008d6aec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + 0xd0));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  FUN_1005d84e8(param_2);
  FUN_1005d84e8(param_3);
  FUN_1005d8534(uVar2);
  FUN_1005d8534(uVar3);
  return;
}



/* Address: 0x1008d6b4c | FUN_1008d6b4c */

undefined8 FUN_1008d6b4c(void)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  uVar3 = uVar5;
  _swift_getObjectType();
  _swift_unknownObjectRetain(uVar5);
  FUN_1009416b4(uVar3,&PTR_PTR_100f19fa8);
  _swift_unknownObjectRelease(uVar5);
  if ((uVar3 & 1) == 0) {
    lVar6 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d6c20);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xd8));
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d6c24);
      (*pcVar1)();
    }
  }
  else {
    uVar4 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xd8));
  }
  return uVar4;
}



/* Address: 0x1008d6c24 | FUN_1008d6c24 */

void FUN_1008d6c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  uVar4 = uVar5;
  _swift_getObjectType();
  _swift_unknownObjectRetain(uVar5);
  FUN_1009416b4();
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d6ce4);
    (*pcVar2)();
  }
  _swift_unknownObjectRelease(uVar5);
  lVar6 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar3 == 0) {
    puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xd8));
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar3 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d6cec);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d6ce8);
  (*pcVar2)();
}



/* Address: 0x1008d6cec | FUN_1008d6cec */

undefined1 FUN_1008d6cec(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0));
}



/* Address: 0x1008d6cfc | FUN_1008d6cfc */

void FUN_1008d6cfc(undefined1 param_1)

{
  long *unaff_x20;
  
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0)) = param_1;
  return;
}



/* Address: 0x1008d6d0c | FUN_1008d6d0c */

undefined8 FUN_1008d6d0c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe8));
  _swift_beginAccess(puVar1,auStack_48,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[2];
  _swift_unknownObjectRetain(uVar2);
  _swift_retain(uVar3);
  return uVar2;
}



/* Address: 0x1008d6d9c | FUN_1008d6d9c */

undefined8 FUN_1008d6d9c(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xf0));
}



/* Address: 0x1008d6db4 | FUN_1008d6db4 */

void FUN_1008d6db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *unaff_x20;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xf0));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xf0));
  FUN_1008d6c24(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  return;
}



/* Address: 0x1008d6de0 | FUN_1008d6de0 */

undefined8 FUN_1008d6de0(undefined8 param_1,undefined8 param_2)

{
  FUN_1008d6a08();
  FUN_1005d8534(param_2);
  return param_1;
}



/* Address: 0x1008d6e0c | FUN_1008d6e0c */

undefined8 FUN_1008d6e0c(undefined8 param_1,undefined8 param_2)

{
  FUN_1008d6a08();
  FUN_1005d8534();
  return param_2;
}



/* Address: 0x1008d6e34 | FUN_1008d6e34 */

bool FUN_1008d6e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_1008d6d0c();
  _swift_unknownObjectRelease();
  _swift_release(param_3);
  return (param_4 & 0xff0000) != 0x50000;
}



/* Address: 0x1008d6e70 | FUN_1008d6e70 */

byte FUN_1008d6e70(byte *param_1)

{
  long *unaff_x20;
  
  (**(code **)(**(long **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88)) + 0x88))();
  return *param_1 & 1;
}



/* Address: 0x1008d6ea8 | thunk_FUN_1008d6b4c */

undefined8 thunk_FUN_1008d6b4c(void)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  
  uVar5 = *(ulong *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  uVar3 = uVar5;
  _swift_getObjectType();
  _swift_unknownObjectRetain(uVar5);
  FUN_1009416b4(uVar3,&PTR_PTR_100f19fa8);
  _swift_unknownObjectRelease(uVar5);
  if ((uVar3 & 1) == 0) {
    lVar6 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d6c20);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xd8));
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d6c24);
      (*pcVar1)();
    }
  }
  else {
    uVar4 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xd8));
  }
  return uVar4;
}



/* Address: 0x1008d6eac | FUN_1008d6eac */

void FUN_1008d6eac(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000012,0x8000000100db4820,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d6f04);
  (*pcVar1)();
}



/* Address: 0x1008d6f04 | FUN_1008d6f04 */

void FUN_1008d6f04(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000024,0x8000000100db47f0,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d6f5c);
  (*pcVar1)();
}



/* Address: 0x1008d6f5c | FUN_1008d6f5c */

void FUN_1008d6f5c(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000024,0x8000000100db47f0,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d6fb4);
  (*pcVar1)();
}



/* Address: 0x1008d6fb4 | FUN_1008d6fb4 */

void FUN_1008d6fb4(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000024,0x8000000100db47f0,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d700c);
  (*pcVar1)();
}



/* Address: 0x1008d700c | FUN_1008d700c */

uint FUN_1008d700c(uint param_1,char param_2)

{
  long *unaff_x20;
  
  if (param_2 == '\x01') {
    (**(code **)(*unaff_x20 + 0x280))();
  }
  else {
    (**(code **)(*unaff_x20 + 0x278))();
  }
  return param_1 & 1;
}



/* Address: 0x1008d704c | FUN_1008d704c */

void FUN_1008d704c(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000024,0x8000000100db47f0,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d70a4);
  (*pcVar1)();
}



/* Address: 0x1008d70a4 | FUN_1008d70a4 */

void FUN_1008d70a4(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000024,0x8000000100db47f0,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d70fc);
  (*pcVar1)();
}



/* Address: 0x1008d70fc | FUN_1008d70fc */

void FUN_1008d70fc(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000024,0x8000000100db47f0,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d7154);
  (*pcVar1)();
}



/* Address: 0x1008d7154 | FUN_1008d7154 */

void FUN_1008d7154(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000024,0x8000000100db47f0,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d71ac);
  (*pcVar1)();
}



/* Address: 0x1008d71ac | FUN_1008d71ac */

void FUN_1008d71ac(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000024,0x8000000100db47f0,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d7204);
  (*pcVar1)();
}



/* Address: 0x1008d7204 | FUN_1008d7204 */

void FUN_1008d7204(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  _swift_unknownObjectRelease(unaff_x20[2]);
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88)));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90) + 8));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa0)));
  FUN_1008db52c((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa8));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 200)));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xd0));
  uVar3 = puVar1[1];
  FUN_1005d8534(*puVar1);
  FUN_1005d8534(uVar3);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe8));
  uVar3 = *puVar1;
  _swift_release(puVar1[2]);
  _swift_unknownObjectRelease(uVar3);
  return;
}



/* Address: 0x1008d7308 | FUN_1008d7308 */

void FUN_1008d7308(void)

{
  FUN_1008d7204();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008d732c | FUN_1008d732c */

void FUN_1008d732c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008d7338 | FUN_1008d7338 */

void FUN_1008d7338(ulong param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  (**(code **)(lVar2 + 0x248))();
  if ((param_1 & 1) == 0) {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar1 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar1);
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x58) + 0x38))
              (*(undefined8 *)(*unaff_x20 + 0x68),*(undefined8 *)(lVar2 + 0x50));
  }
  return;
}



/* Address: 0x1008d73d4 | FUN_1008d73d4 */

void FUN_1008d73d4(ulong param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  (**(code **)(lVar2 + 0x248))();
  if ((param_1 & 1) == 0) {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar1 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar1);
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x58) + 0x40))
              (*(undefined8 *)(*unaff_x20 + 0x68),*(undefined8 *)(lVar2 + 0x50));
  }
  return;
}



/* Address: 0x1008d7470 | FUN_1008d7470 */

/* WARNING: Removing unreachable block (ram,0x0001008d7680) */
/* WARNING: Removing unreachable block (ram,0x0001008d760c) */
/* WARNING: Removing unreachable block (ram,0x0001008d7620) */
/* WARNING: Removing unreachable block (ram,0x0001008d764c) */
/* WARNING: Removing unreachable block (ram,0x0001008d7660) */
/* WARNING: Removing unreachable block (ram,0x0001008d7664) */
/* WARNING: Removing unreachable block (ram,0x0001008d7670) */
/* WARNING: Removing unreachable block (ram,0x0001008d767c) */
/* WARNING: Removing unreachable block (ram,0x0001008d7688) */
/* WARNING: Removing unreachable block (ram,0x0001008d76b8) */
/* WARNING: Removing unreachable block (ram,0x0001008d7738) */
/* WARNING: Removing unreachable block (ram,0x0001008d76c8) */
/* WARNING: Removing unreachable block (ram,0x0001008d763c) */
/* WARNING: Removing unreachable block (ram,0x0001008d76dc) */

undefined8 FUN_1008d7470(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  code *pcVar7;
  
  uVar4 = 1;
  if ((*(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb8)) & 1) == 0) {
    *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb8)) = 1;
LAB_1008d74c4:
    do {
      pcVar7 = *(code **)(*unaff_x20 + 0x290);
      (*pcVar7)();
      if (((ulong)param_1 & 1) == 0) {
LAB_1008d7700:
        uVar4 = 1;
        goto LAB_1008d7704;
      }
      pcVar5 = *(code **)(*unaff_x20 + 0x248);
      (*pcVar5)();
      if (((ulong)param_1 & 1) == 0) goto LAB_1008d7700;
      (**(code **)(*unaff_x20 + 0x268))();
      if (((uint)param_2 >> 8 & 1) == 0) {
        puVar3 = param_1;
        FUN_1008db674(param_1,param_2);
      }
      else {
        puVar3 = *(undefined8 **)((long)unaff_x20 + *(long *)(*unaff_x20 + 200));
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008d7738);
          (*pcVar7)();
        }
        _swift_retain(puVar3);
        FUN_1008db674(param_1,param_2);
        FUN_10062cc8c(puVar3);
        _swift_release();
      }
      uVar6 = (uint)param_2 & 0xff;
      if (uVar6 == 1 || (param_2 & 0xff) == 0) {
        if ((param_2 & 0xff) == 0) {
          FUN_1008db6c4();
          puVar2 = (undefined8 *)0x0;
          _swift_allocError(&DAT_100eeb710,puVar3,0);
          *puVar3 = 4;
          *(undefined1 *)(puVar3 + 1) = 3;
          (**(code **)(*unaff_x20 + 0x300))();
          FUN_1008db69c(param_1,0);
          _swift_errorRelease();
        }
        else {
          puVar2 = param_1;
          FUN_1008db69c(param_1,1);
        }
        uVar6 = 0;
        puVar3 = puVar2;
      }
      else {
        uVar6 = (uint)(uVar6 != 2);
      }
      (*pcVar5)();
      uVar1 = (uint)puVar3;
      if (((ulong)puVar3 & 1) == 0) {
        FUN_1008db69c();
        goto LAB_1008d74c4;
      }
      (*pcVar7)();
      FUN_1008db69c();
    } while ((uVar6 & uVar1) == 0);
    uVar4 = 0;
LAB_1008d7704:
    *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb8)) = 0;
  }
  return uVar4;
}



/* Address: 0x1008d773c | FUN_1008d773c */

/* WARNING: Removing unreachable block (ram,0x0001008d7870) */
/* WARNING: Removing unreachable block (ram,0x0001008d788c) */
/* WARNING: Removing unreachable block (ram,0x0001008d79e4) */

code * FUN_1008d773c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  code *local_a8;
  long local_a0;
  undefined1 *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  lVar7 = *unaff_x20;
  lVar4 = 0;
  local_88 = param_1;
  local_80 = param_2;
  local_70 = param_4;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar13 = *(long *)(lVar4 + -8);
  local_a0 = *(long *)(lVar13 + 0x40);
  local_98 = auStack_b0 + -(local_a0 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_3 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  lVar14 = (long)local_98 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(ulong *)((long)unaff_x20 + *(long *)(lVar7 + 0x78));
  uVar11 = uVar8;
  local_90 = lVar7;
  local_78 = lVar4;
  _swift_getObjectType();
  _swift_unknownObjectRetain(uVar8);
  FUN_1009416b4(uVar11,&PTR_PTR_100f19fa8);
  _swift_unknownObjectRelease(uVar8);
  pcVar9 = *(code **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  pcVar5 = pcVar9;
  _swift_getObjectType();
  if ((uVar11 & 1) == 0) {
    local_a8 = pcVar5;
    (**(code **)(lVar12 + 0x10))(lVar14,local_88,param_3);
    puVar3 = local_98;
    (**(code **)(lVar13 + 0x10))(local_98,local_80,local_78);
    bVar1 = *(byte *)(lVar12 + 0x50);
    uVar8 = (ulong)bVar1 + 0x38 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    bVar2 = *(byte *)(lVar13 + 0x50);
    uVar11 = lVar10 + uVar8 + (ulong)bVar2 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    pcVar5 = (code *)&DAT_100f0f8e8;
    _swift_allocObject(&DAT_100f0f8e8,uVar11 + local_a0,bVar1 | bVar2 | 7);
    *(undefined8 *)(pcVar5 + 0x10) = *(undefined8 *)(local_90 + 0x50);
    *(long *)(pcVar5 + 0x18) = param_3;
    *(undefined8 *)(pcVar5 + 0x20) = *(undefined8 *)(local_90 + 0x58);
    *(undefined8 *)(pcVar5 + 0x28) = local_70;
    *(long **)(pcVar5 + 0x30) = unaff_x20;
    (**(code **)(lVar12 + 0x20))(pcVar5 + uVar8,lVar14,param_3);
    (**(code **)(lVar13 + 0x20))(pcVar5 + uVar11,puVar3,local_78);
    _swift_unknownObjectRetain(pcVar9);
    _swift_retain();
    pcVar6 = FUN_1008db488;
    FUN_1008c6d30(FUN_1008db488,pcVar5,PTR___type_metadata_for____100eae0c8 + 8,local_a8,
                  &PTR_PTR_100f19fa8);
    _swift_unknownObjectRelease(pcVar9);
  }
  else {
    FUN_1008f68cc();
    pcVar9 = *(code **)(*unaff_x20 + 0x2c0);
    _swift_retain();
    (*pcVar9)(local_88,local_80,param_3,local_70);
    FUN_10090d0b8(0,0,pcVar5);
    pcVar6 = pcVar5;
  }
  _swift_release(pcVar5);
  return pcVar6;
}



/* Address: 0x1008d7a78 | FUN_1008d7a78 */

void FUN_1008d7a78(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  StaticString file;
  __uint64 line;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  StaticString *pSVar9;
  undefined *puVar10;
  _StringGuts _Var11;
  char *pcVar12;
  uint uVar13;
  long *unaff_x20;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  long local_b0;
  undefined1 auStack_a8 [24];
  StaticString local_90;
  __uint64 _Stack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar17 = *(long *)(uVar7 - 8);
  puVar15 = auStack_a8 + (-8 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar16 = *(long *)(param_3 + -8);
  puVar14 = puVar15 + -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = uVar7;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar8 & 1) == 0) {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar4 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar4);
  }
  else {
    local_b0 = lVar16;
    (**(code **)(lVar16 + 0x10))(puVar14,param_1,param_3);
    pSVar9 = &local_90;
    _swift_dynamicCast(pSVar9,puVar14,param_3,&DAT_100eec8d0,0);
    iVar6 = (int)pSVar9;
    if (iVar6 == 0) {
      _swift_dynamicCast();
      if (iVar6 == 0) {
        _swift_dynamicCast();
        if (iVar6 == 0) {
          _swift_dynamicCast();
          if (iVar6 == 0) {
            puVar10 = &DAT_100eec978;
            _Var11.unknown = puVar14;
            pcVar12 = param_3;
            _swift_dynamicCast();
            if (iVar6 == 0) {
              local_90.unknown = (undefined *)0x0;
              _Stack_88 = 0xe000000000000000;
              Swift::_StringGuts::grow(0x17,_Var11);
              SVar18.bridgeObject = &DAT_e700000000000000;
              SVar18.str = (char *)0x206e6f6974706f;
              SVar21.bridgeObject = puVar10;
              SVar21.str = pcVar12;
              Swift::String::append(SVar18,SVar21);
              Swift::DefaultStringInterpolation::_appendInterpolation(param_1,param_3);
              SVar19.bridgeObject = (void *)0xee00646574726f70;
              SVar19.str = (char *)0x70757320746f6e20;
              SVar22.bridgeObject = puVar10;
              SVar22.str = pcVar12;
              Swift::String::append(SVar19,SVar22);
              line = _Stack_88;
              file.unknown = local_90.unknown;
              *(undefined4 *)(puVar14 + -8) = 0;
              *(undefined8 *)(puVar14 + -0x10) = 0x2c9;
              SVar20.bridgeObject = (void *)0x2;
              SVar20.str = (char *)0xb;
              Swift::_assertionFailure((StaticString)0x100d8deb0,SVar20,file,line,0xdb47e0);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1008d7ee4);
              (*pcVar5)();
            }
            (**(code **)(lVar17 + 0x10))(puVar15,param_2,uVar7);
            _swift_dynamicCast(&local_90,puVar15,uVar7,PTR___type_metadata_for_Swift_UInt_100eacb00,
                               7);
            *(undefined **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb0)) = local_90.unknown;
            if ((long)local_90.unknown < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1008d7e40);
              (*pcVar5)();
            }
            _swift_beginAccess((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa8),&local_90,0x21,0);
            FUN_100660e74(local_90.unknown);
            _swift_endAccess(&local_90);
          }
          else {
            (**(code **)(lVar17 + 0x10))(puVar15,param_2,uVar7);
            puVar10 = PTR___type_metadata_for_Swift_Bool_100eac570;
            _swift_dynamicCast(&local_90,puVar15,uVar7,PTR___type_metadata_for_Swift_Bool_100eac570,
                               7);
            uVar13 = (uint)puVar10;
            bVar3 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xc0));
            *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xc0)) = (byte)local_90.unknown;
            FUN_1008d6d0c();
            _swift_unknownObjectRelease();
            _swift_release(uVar7);
            if (((0xffff < uVar13) && ((uVar13 & 0xffff0000) != 0x50000)) &&
               ((((byte)local_90.unknown ^ bVar3) & 1) != 0)) {
              if ((byte)local_90.unknown == 0) {
                FUN_1008d7ee4();
              }
              else {
                (**(code **)(*unaff_x20 + 0x2f8))();
              }
            }
          }
        }
        else {
          (**(code **)(lVar17 + 0x10))(puVar15,param_2,uVar7);
          puVar10 = &DAT_100febe70;
          FUN_1000f7830(&DAT_100febe70,&DAT_100c836c0);
          _swift_dynamicCast(&local_90,puVar15,uVar7,puVar10,0xf);
          lVar16 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0xa8);
          _swift_beginAccess(lVar16,auStack_a8,0x21,0);
          FUN_100004594(lVar16 + 0x30);
          FUN_100076508(&local_90,lVar16 + 0x30);
          _swift_endAccess(auStack_a8);
        }
      }
      else {
        (**(code **)(lVar17 + 0x10))(puVar15,param_2,uVar7);
        _swift_dynamicCast(&local_90,puVar15,uVar7,&DAT_100eeaa20,7);
        puVar1 = (ulong *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xf0));
        puVar1[1] = _Stack_88;
        *puVar1 = (ulong)local_90.unknown;
        puVar1[3] = uStack_78;
        puVar1[2] = uStack_80;
        puVar2 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xf0));
        FUN_1008d6c24(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
      }
    }
    else {
      FUN_1008d6410((ulong)local_90.unknown & 0xffffffff,local_90.unknown._4_4_,param_2,uVar7);
    }
    (**(code **)(local_b0 + 8))(puVar14,param_3);
  }
  return;
}



/* Address: 0x1008d7ee4 | FUN_1008d7ee4 */

void FUN_1008d7ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  long *unaff_x20;
  
  FUN_1008d6d0c();
  _swift_unknownObjectRelease();
  _swift_release(param_3);
  if ((0xffff < param_4) && ((param_4 & 0xffff0000) != 0x50000)) {
    bVar1 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0));
    if ((bVar1 >> 2 & 1) != 0) {
      FUN_1008d8b68(bVar1 & 0xfb);
      return;
    }
  }
  return;
}



/* Address: 0x1008d7f54 | FUN_1008d7f54 */

/* WARNING: Removing unreachable block (ram,0x0001008d8068) */

code * FUN_1008d7f54(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  code *pcVar5;
  long *unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  lVar8 = *unaff_x20;
  lVar10 = *(long *)(param_2 + -8);
  local_88 = *(long *)(lVar10 + 0x40);
  lVar9 = (long)&local_90 - (local_88 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_80 = param_1;
  local_70 = param_3;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  local_90 = *(long *)(lVar1 + -8);
  pcVar11 = (code *)(lVar9 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(ulong *)((long)unaff_x20 + *(long *)(lVar8 + 0x78));
  uVar4 = uVar6;
  local_78 = lVar1;
  _swift_getObjectType();
  _swift_unknownObjectRetain(uVar6);
  FUN_1009416b4(uVar4,&PTR_PTR_100f19fa8);
  _swift_unknownObjectRelease(uVar6);
  lVar1 = local_78;
  uVar7 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  if ((uVar4 & 1) == 0) {
    uVar2 = uVar7;
    _swift_getObjectType(uVar7);
    (**(code **)(lVar10 + 0x10))(lVar9,local_80,param_2);
    uVar4 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar6 = uVar4 + 0x38 & (uVar4 ^ 0xffffffffffffffff);
    puVar3 = &DAT_100f0faa0;
    _swift_allocObject(&DAT_100f0faa0,uVar6 + local_88,uVar4 | 7);
    *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(lVar8 + 0x50);
    *(long *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(lVar8 + 0x58);
    *(undefined8 *)(puVar3 + 0x28) = local_70;
    *(long **)(puVar3 + 0x30) = unaff_x20;
    (**(code **)(lVar10 + 0x20))(puVar3 + uVar6,lVar9,param_2);
    _swift_unknownObjectRetain(uVar7);
    _swift_retain();
    pcVar5 = FUN_1008db630;
    FUN_1008c6d30(FUN_1008db630,puVar3,local_78,uVar2,&PTR_PTR_100f19fa8);
    _swift_unknownObjectRelease(uVar7);
    _swift_release(puVar3);
  }
  else {
    pcVar5 = *(code **)(*unaff_x20 + 0x2d0);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar5)(pcVar11,local_80,param_2,local_70);
    uVar2 = uVar7;
    _swift_getObjectType(uVar7);
    pcVar5 = pcVar11;
    FUN_10063dc68(pcVar11,uVar2,lVar1,&PTR_PTR_100f19fa8);
    _swift_unknownObjectRelease(uVar7);
    (**(code **)(local_90 + 8))(pcVar11,lVar1);
  }
  return pcVar5;
}



/* Address: 0x1008d81dc | FUN_1008d81dc */

void FUN_1008d81dc(undefined8 param_1,ulong param_2,char *param_3,undefined8 param_4)

{
  ulong *puVar1;
  long lVar2;
  StaticString file;
  undefined4 uVar3;
  __uint64 line;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  StaticString *pSVar7;
  undefined8 uVar8;
  undefined *puVar9;
  _StringGuts _Var10;
  char *pcVar11;
  long *unaff_x20;
  undefined *puVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined auStack_b0 [8];
  undefined1 auStack_a8 [24];
  StaticString local_90;
  __uint64 _Stack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar13 = *(long *)(param_3 + -8);
  lVar2 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_b0 + lVar2;
  uVar6 = param_2;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar6 & 1) == 0) {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar8 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar8);
  }
  else {
    (**(code **)(lVar13 + 0x10))(puVar12,param_2,param_3);
    pSVar7 = &local_90;
    _swift_dynamicCast(pSVar7,puVar12,param_3,&DAT_100eec8d0,0);
    iVar5 = (int)pSVar7;
    if (iVar5 == 0) {
      _swift_dynamicCast();
      if (iVar5 == 0) {
        _swift_dynamicCast();
        if (iVar5 == 0) {
          _swift_dynamicCast();
          if (iVar5 == 0) {
            puVar9 = &DAT_100eec978;
            _Var10.unknown = puVar12;
            pcVar11 = param_3;
            _swift_dynamicCast();
            if (iVar5 == 0) {
              local_90.unknown = (undefined *)0x0;
              _Stack_88 = 0xe000000000000000;
              Swift::_StringGuts::grow(0x17,_Var10);
              SVar14.bridgeObject = &DAT_e700000000000000;
              SVar14.str = (char *)0x206e6f6974706f;
              SVar17.bridgeObject = puVar9;
              SVar17.str = pcVar11;
              Swift::String::append(SVar14,SVar17);
              Swift::DefaultStringInterpolation::_appendInterpolation(param_2,param_3);
              SVar15.bridgeObject = (void *)0xee00646574726f70;
              SVar15.str = (char *)0x70757320746f6e20;
              SVar18.bridgeObject = puVar9;
              SVar18.str = pcVar11;
              Swift::String::append(SVar15,SVar18);
              line = _Stack_88;
              file.unknown = local_90.unknown;
              *(undefined4 *)((long)auStack_b8 + lVar2) = 0;
              *(undefined8 *)((long)&uStack_c0 + lVar2) = 0x2ec;
              SVar16.bridgeObject = (void *)0x2;
              SVar16.str = (char *)0xb;
              Swift::_assertionFailure((StaticString)0x100d8deb0,SVar16,file,line,0xdb47e0);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1008d8588);
              (*pcVar4)();
            }
            local_90.unknown = *(undefined **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb0));
            uVar8 = 0;
            _swift_getAssociatedTypeWitness
                      (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
            puVar9 = PTR___type_metadata_for_Swift_UInt_100eacb00;
          }
          else {
            local_90.unknown._0_1_ = *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xc0))
            ;
            uVar8 = 0;
            _swift_getAssociatedTypeWitness
                      (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
            puVar9 = PTR___type_metadata_for_Swift_Bool_100eac570;
          }
        }
        else {
          lVar2 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0xa8);
          _swift_beginAccess(lVar2,auStack_a8,0,0);
          FUN_100076688(lVar2 + 0x30,&local_90);
          puVar9 = &DAT_100febe70;
          FUN_1000f7830(&DAT_100febe70,&DAT_100c836c0);
          uVar8 = 0;
          _swift_getAssociatedTypeWitness
                    (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
        }
      }
      else {
        puVar1 = (ulong *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xf0));
        _Stack_88 = puVar1[1];
        local_90.unknown = (undefined *)*puVar1;
        uStack_78 = puVar1[3];
        uStack_80 = puVar1[2];
        uVar8 = 0;
        _swift_getAssociatedTypeWitness
                  (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
        puVar9 = &DAT_100eeaa20;
      }
      _swift_dynamicCast(param_1,&local_90,puVar9,uVar8,7);
    }
    else {
      uVar6 = (ulong)local_90.unknown & 0xffffffff;
      uVar3 = local_90.unknown._4_4_;
      uVar8 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      FUN_1008d658c(param_1,uVar6,uVar3,uVar8);
    }
    (**(code **)(lVar13 + 8))(puVar12,param_3);
  }
  return;
}



/* Address: 0x1008d8588 | FUN_1008d8588 */

undefined1
FUN_1008d8588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  
  uVar2 = (uint)((ulong)param_4 >> 0x10);
  FUN_1008d6d0c();
  _swift_unknownObjectRelease();
  _swift_release(param_3);
  if ((uVar2 & 0xffff) - 3 < 2) {
    lVar3 = *unaff_x20;
    lVar4 = *(long *)(lVar3 + 0x98);
    if ((*(byte *)((long)unaff_x20 + lVar4) & 1) != 0) {
      return 1;
    }
    if (*(char *)((long)unaff_x20 + *(long *)(lVar3 + 0xc0)) == '\x01') {
      lVar3 = *(long *)((long)unaff_x20 + *(long *)(lVar3 + 200));
      if (lVar3 != 0) {
        _swift_retain(lVar3);
        FUN_10062a014();
        _swift_release(lVar3);
        return *(undefined1 *)((long)unaff_x20 + lVar4);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d8628);
      (*pcVar1)();
    }
  }
  return 0;
}



/* Address: 0x1008d8628 | FUN_1008d8628 */

/* WARNING: Removing unreachable block (ram,0x0001008d8670) */
/* WARNING: Removing unreachable block (ram,0x0001008d87e4) */
/* WARNING: Removing unreachable block (ram,0x0001008d8674) */
/* WARNING: Removing unreachable block (ram,0x0001008d8804) */
/* WARNING: Removing unreachable block (ram,0x0001008d8694) */

void FUN_1008d8628(ulong param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  code *pcVar7;
  
  (**(code **)(*unaff_x20 + 0x248))();
  if ((param_1 & 1) == 0) {
    if (param_2 != 0) {
      if (DAT_100fec600 != -1) {
        _swift_once(&DAT_100fec600,FUN_100901fbc);
      }
      uVar4 = DAT_101058180;
      uVar2 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar3 = uVar2;
      lVar6 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar3 & 1) != 0) {
        thunk_FUN_1005de8f4(uVar4);
        FUN_1006486f8();
        FUN_100004550(uVar4,lVar6);
        _swift_bridgeObjectRelease(param_3);
        return;
      }
      puVar5 = &DAT_100f0fa50;
      _swift_allocObject(&DAT_100f0fa50,0x20,7);
      *(long *)(puVar5 + 0x10) = param_2;
      *(undefined8 *)(puVar5 + 0x18) = uVar4;
      pcVar7 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(uVar4);
      (*pcVar7)(thunk_FUN_1008d678c,puVar5,uVar2,lVar1);
      _swift_release(puVar5);
      return;
    }
  }
  else {
    FUN_1008d888c();
    if (param_2 != 0) {
      FUN_10090d0b8(0,0,param_2);
      return;
    }
  }
  return;
}



/* Address: 0x1008d888c | FUN_1008d888c */

void FUN_1008d888c(long *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(*param_1 + 0x58) + 0x30))(param_2,*(undefined8 *)(*param_1 + 0x50));
  if (unaff_x21 == 0) {
    FUN_1008d88e4(1,0);
  }
  return;
}



/* Address: 0x1008d88e4 | FUN_1008d88e4 */

/* WARNING: Removing unreachable block (ram,0x0001008d8920) */
/* WARNING: Removing unreachable block (ram,0x0001008d8934) */
/* WARNING: Removing unreachable block (ram,0x0001008d8954) */

void FUN_1008d88e4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  uVar4 = param_2;
  FUN_1008d6a08();
  uVar2 = uVar1;
  if ((param_1 & 1) == 0) {
    uVar3 = uVar1;
    FUN_1005d84e8(uVar1);
  }
  else {
    FUN_1008d7338();
    uVar3 = uVar2;
  }
  if ((param_2 & 1) == 0) {
    FUN_1005d84e8(uVar4);
    uVar3 = uVar4;
  }
  else {
    FUN_1008d73d4();
  }
  FUN_1005d84e8(uVar2);
  FUN_1005d84e8(uVar3);
  FUN_1008db248(uVar2,uVar3);
  FUN_1005d8534(uVar2);
  FUN_1005d8534(uVar3);
  FUN_1005d8534(uVar3);
  FUN_1005d8534(uVar2);
  FUN_1005d8534(uVar1);
  FUN_1005d8534(uVar4);
  return;
}



/* Address: 0x1008d89e0 | FUN_1008d89e0 */

void FUN_1008d89e0(ulong param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  code *pcVar7;
  
  uVar2 = param_1;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008d8a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x20 + 0x298))(param_1,param_2);
    return;
  }
  if (param_2 != 0) {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar4 = DAT_101058180;
    uVar2 = *(ulong *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar6 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar6);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar5 = &DAT_100f0f6e0;
    _swift_allocObject(&DAT_100f0f6e0,0x20,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined8 *)(puVar5 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar4);
    (*pcVar7)(FUN_1008d678c,puVar5,uVar2,lVar1);
    _swift_release(puVar5);
    return;
  }
  return;
}



/* Address: 0x1008d8b4c | FUN_1008d8b4c */

void FUN_1008d8b4c(void)

{
  byte bVar1;
  long *unaff_x20;
  
  bVar1 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0));
  if ((bVar1 >> 3 & 1) == 0) {
    FUN_1008d8b68(bVar1 | 8);
    return;
  }
  return;
}



/* Address: 0x1008d8b68 | FUN_1008d8b68 */

/* WARNING: Removing unreachable block (ram,0x0001008d8bf0) */
/* WARNING: Removing unreachable block (ram,0x0001008d8c00) */
/* WARNING: Removing unreachable block (ram,0x0001008d8c64) */

void FUN_1008d8b68(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  uVar1 = param_1;
  (**(code **)(lVar3 + 0x248))();
  if (((uVar1 & 1) != 0) &&
     ((uint)*(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0)) != ((uint)param_1 & 0xff))) {
    *(char *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0)) = (char)param_1;
    uVar2 = 0;
    FUN_1008d732c(0,*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58));
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c836a0,uVar2);
    FUN_10093d948();
  }
  return;
}



/* Address: 0x1008d8c68 | FUN_1008d8c68 */

void FUN_1008d8c68(void)

{
  byte bVar1;
  long *unaff_x20;
  
  bVar1 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0));
  if ((bVar1 >> 3 & 1) == 0) {
    return;
  }
  FUN_1008d8b68(bVar1 & 0xf7);
  return;
}



/* Address: 0x1008d8c84 | FUN_1008d8c84 */

void FUN_1008d8c84(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  long *unaff_x20;
  
  uVar2 = (uint)((ulong)param_4 >> 0x10);
  (**(code **)(*unaff_x20 + 0x248))();
  if ((param_1 & 1) != 0) {
    (**(code **)(*unaff_x20 + 0x2a0))();
    FUN_1008d6d0c();
    _swift_unknownObjectRelease();
    _swift_release();
    if ((((uVar2 & 0xffff) - 3 < 2) &&
        ((*(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0)) >> 3 & 1) == 0)) &&
       ((**(code **)(*unaff_x20 + 0x2b8))(), (param_3 & 0xff) == 0)) {
      bVar1 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0));
      if ((bVar1 >> 3 & 1) == 0) {
        FUN_1008d8b68(bVar1 | 8);
        return;
      }
    }
  }
  return;
}



/* Address: 0x1008d8d2c | FUN_1008d8d2c */

void FUN_1008d8d2c(ulong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *unaff_x20;
  
  (**(code **)(*unaff_x20 + 0x248))();
  if ((param_1 & 1) != 0) {
    *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98)) = 1;
    FUN_1008d6d0c();
    _swift_unknownObjectRelease();
    _swift_release(param_3);
    if ((0xffff < param_4) && ((param_4 & 0xffff0000) != 0x50000)) {
      FUN_1008d8da8();
      return;
    }
  }
  return;
}



/* Address: 0x1008d8da8 | FUN_1008d8da8 */

void FUN_1008d8da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  long *unaff_x20;
  
  FUN_1008d6d0c();
  _swift_unknownObjectRelease();
  _swift_release(param_3);
  if ((param_4 & 1) == 0) {
    bVar1 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0));
    if ((bVar1 >> 2 & 1) == 0) {
      FUN_1008d8b68(bVar1 | 4);
      return;
    }
  }
  return;
}



/* Address: 0x1008d8e08 | FUN_1008d8e08 */

void FUN_1008d8e08(void)

{
  byte bVar1;
  long *unaff_x20;
  
  bVar1 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0));
  if ((bVar1 >> 2 & 1) == 0) {
    return;
  }
  FUN_1008d8b68(bVar1 & 0xfb);
  return;
}



/* Address: 0x1008d8e24 | FUN_1008d8e24 */

void FUN_1008d8e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  long *unaff_x20;
  
  FUN_1008d6d0c();
  _swift_unknownObjectRelease();
  _swift_release(param_3);
  if ((param_4 & 1) == 0) {
    bVar1 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0));
    if ((bVar1 >> 1 & 1) == 0) {
      FUN_1008d8b68(bVar1 | 2);
      return;
    }
  }
  return;
}



/* Address: 0x1008d8e84 | FUN_1008d8e84 */

/* WARNING: Removing unreachable block (ram,0x0001008d8f30) */
/* WARNING: Removing unreachable block (ram,0x0001008d9474) */
/* WARNING: Removing unreachable block (ram,0x0001008d8f80) */
/* WARNING: Removing unreachable block (ram,0x0001008d90cc) */
/* WARNING: Removing unreachable block (ram,0x0001008d94b4) */
/* WARNING: Removing unreachable block (ram,0x0001008d9104) */
/* WARNING: Removing unreachable block (ram,0x0001008d94d4) */
/* WARNING: Removing unreachable block (ram,0x0001008d9114) */

void FUN_1008d8e84(ulong param_1,char param_2,long param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  code *pcVar15;
  long local_80 [4];
  
  lVar12 = *unaff_x20;
  uVar4 = param_1;
  lVar13 = param_3;
  (**(code **)(lVar12 + 0x248))();
  if ((uVar4 & 1) == 0) {
    if (param_3 != 0) {
      if (DAT_100fec5e8 != -1) {
        _swift_once(&DAT_100fec5e8,FUN_100901f4c);
      }
      uVar11 = DAT_101058198;
      uVar4 = *(ulong *)(param_3 + 0x20);
      lVar12 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar6 = uVar4;
      lVar10 = lVar12;
      (**(code **)(lVar12 + 0x10))();
      if ((uVar6 & 1) == 0) {
        puVar7 = &DAT_100f0f988;
        _swift_allocObject(&DAT_100f0f988,0x20,7);
        *(long *)(puVar7 + 0x10) = param_3;
        *(undefined8 *)(puVar7 + 0x18) = uVar11;
        pcVar3 = *(code **)(lVar12 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(uVar11);
LAB_1008d91ec:
        (*pcVar3)(thunk_FUN_1008d678c,puVar7,uVar4,lVar12);
        _swift_release(puVar7);
        return;
      }
LAB_1008d9058:
      thunk_FUN_1005de8f4(uVar11);
      FUN_1006486f8();
      FUN_100004550(uVar11,lVar10);
      _swift_bridgeObjectRelease(lVar13);
      return;
    }
  }
  else if (param_2 == '\x02') {
    *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0)) = 1;
    uVar11 = *(undefined8 *)(lVar12 + 0x50);
    lVar13 = *(long *)(lVar12 + 0x58);
    uVar5 = 0;
    FUN_1008d732c(0,uVar11,lVar13);
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c836a0,uVar5);
    FUN_10093d558();
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    (**(code **)(lVar13 + 0x28))(*(undefined8 *)(*unaff_x20 + 0x68),uVar11,lVar13);
    puVar1 = (undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe8));
    uVar11 = 0x21;
    puVar8 = puVar1;
    _swift_beginAccess(puVar1,local_80,0x21,0);
    bVar2 = puVar1[0x1a];
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        puVar1[0x1a] = 5;
        pcVar3 = thunk_FUN_1008d6974;
      }
      else {
        puVar1[0x1a] = 5;
        pcVar3 = thunk_FUN_1008d69d4;
      }
    }
    else if (bVar2 == 3) {
      puVar1[0x1a] = 5;
      (**(code **)(**(long **)(puVar1 + 0x10) + 0x88))();
      *puVar8 = 0;
      pcVar3 = thunk_FUN_1008d69d4;
    }
    else {
      if (bVar2 != 4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008d9500);
        (*pcVar3)();
      }
      puVar1[0x1a] = 5;
      (**(code **)(**(long **)(puVar1 + 0x10) + 0x88))();
      *puVar8 = 0;
      pcVar3 = FUN_1008d6994;
    }
    _swift_endAccess(local_80);
    (**(code **)(*unaff_x20 + 0x2a8))(param_1);
    lVar13 = *(long *)(puVar7 + 0x10);
    if (lVar13 != 0) {
      puVar14 = (undefined8 *)(puVar7 + 0x28);
      do {
        lVar12 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 200));
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1008d94f8);
          (*pcVar3)();
        }
        pcVar15 = (code *)puVar14[-1];
        uVar5 = *puVar14;
        local_80[0] = lVar12;
        _swift_retain(lVar12);
        _swift_retain(uVar5);
        (*pcVar15)(local_80);
        _swift_release(lVar12);
        _swift_release(uVar5);
        puVar14 = puVar14 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    lVar13 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa0));
    if (lVar13 != 0) {
      *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa0)) = 0;
      uVar4 = *(ulong *)(lVar13 + 0x20);
      lVar12 = *(long *)(lVar13 + 0x28);
      _swift_getObjectType();
      (**(code **)(lVar12 + 0x10))();
      if ((uVar4 & 1) == 0) {
        uVar11 = *(undefined8 *)(lVar13 + 0x20);
        lVar12 = *(long *)(lVar13 + 0x28);
        _swift_getObjectType();
        puVar9 = &DAT_100f0fa28;
        _swift_allocObject(&DAT_100f0fa28,0x20,7);
        *(long *)(puVar9 + 0x10) = lVar13;
        *(ulong *)(puVar9 + 0x18) = param_1;
        pcVar15 = *(code **)(lVar12 + 0x18);
        _swift_retain(lVar13);
        _swift_errorRetain(param_1);
        (*pcVar15)(thunk_FUN_1008d678c,puVar9,uVar11,lVar12);
        _swift_release(lVar13);
        _swift_release(puVar9);
      }
      else {
        thunk_FUN_1005de8f4(param_1);
        FUN_1006486f8();
        _swift_release(lVar13);
        FUN_100004550(param_1,lVar12);
        _swift_bridgeObjectRelease(uVar11);
      }
    }
    lVar13 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 200));
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008d94fc);
      (*pcVar3)();
    }
    _swift_retain(lVar13);
    (*pcVar3)(param_3,lVar13);
    _swift_release(lVar13);
    uVar11 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
    _swift_getObjectType(uVar11);
    _swift_unknownObjectRetain(uVar11);
    _swift_retain();
    FUN_1009416dc(FUN_1008db5c4);
    _swift_bridgeObjectRelease(puVar7);
    _swift_unknownObjectRelease(uVar11);
    _swift_release();
  }
  else if (param_3 != 0) {
    if (DAT_100fec610 != -1) {
      _swift_once(&DAT_100fec610,FUN_100901fcc);
    }
    uVar11 = DAT_1010581f0;
    uVar4 = *(ulong *)(param_3 + 0x20);
    lVar12 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar6 = uVar4;
    lVar10 = lVar12;
    (**(code **)(lVar12 + 0x10))();
    if ((uVar6 & 1) == 0) {
      puVar7 = &DAT_100f0f9b0;
      _swift_allocObject(&DAT_100f0f9b0,0x20,7);
      *(long *)(puVar7 + 0x10) = param_3;
      *(undefined8 *)(puVar7 + 0x18) = uVar11;
      pcVar3 = *(code **)(lVar12 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar11);
      goto LAB_1008d91ec;
    }
    goto LAB_1008d9058;
  }
  return;
}



/* Address: 0x1008d9500 | FUN_1008d9500 */

void FUN_1008d9500(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  _swift_retain(uVar1);
  FUN_10062cce4(param_2,uVar1);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008d9538 | FUN_1008d9538 */

void FUN_1008d9538(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  uVar6 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(param_3);
    FUN_1006486f8();
    FUN_100004550(param_3,lVar5);
    _swift_bridgeObjectRelease(uVar6);
    return;
  }
  puVar4 = &DAT_100f0f938;
  _swift_allocObject(&DAT_100f0f938,0x20,7);
  *(long *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(param_3);
  (*pcVar7)(thunk_FUN_1008d678c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008d963c | FUN_1008d963c */

void FUN_1008d963c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *(long *)((long)param_1 + *(long *)(lVar2 + 200));
  if (lVar3 != 0) {
    FUN_1008d732c(0,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
    _swift_retain(lVar3);
    FUN_10061d97c();
    _swift_release(lVar3);
    FUN_10090d0b8(0,0,*(undefined8 *)((long)param_1 + *(long *)(*param_1 + 0x70)));
    FUN_1008d96c0();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d96c0);
  (*pcVar1)();
}



/* Address: 0x1008d96c0 | FUN_1008d96c0 */

void FUN_1008d96c0(void)

{
  FUN_1008db248(0xf000000000000007,0xf000000000000007);
  FUN_1005d8534(0xf000000000000007);
  FUN_1005d8534(0xf000000000000007);
  return;
}



/* Address: 0x1008d96e8 | FUN_1008d96e8 */

void FUN_1008d96e8(ulong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x20;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  uVar1 = param_1;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar1 & 1) == 0) {
    if (param_1 != 0) {
      uVar6 = param_3;
      if (DAT_100fec600 != -1) {
        _swift_once(&DAT_100fec600,FUN_100901fbc);
        uVar6 = param_3;
      }
      uVar3 = DAT_101058180;
      uVar1 = *(ulong *)(param_1 + 0x20);
      lVar7 = *(long *)(param_1 + 0x28);
      _swift_getObjectType();
      uVar2 = uVar1;
      lVar5 = lVar7;
      (**(code **)(lVar7 + 0x10))();
      if ((uVar2 & 1) != 0) {
LAB_1008d97fc:
        thunk_FUN_1005de8f4(uVar3);
        FUN_1006486f8();
        FUN_100004550(uVar3,lVar5);
        _swift_bridgeObjectRelease(uVar6);
        return;
      }
      puVar4 = &DAT_100f0f870;
      _swift_allocObject(&DAT_100f0f870,0x20,7);
      *(ulong *)(puVar4 + 0x10) = param_1;
      *(undefined8 *)(puVar4 + 0x18) = uVar3;
      pcVar8 = *(code **)(lVar7 + 0x18);
      _swift_retain(param_1);
      _swift_errorRetain(uVar3);
LAB_1008d991c:
      (*pcVar8)(thunk_FUN_1008d678c,puVar4,uVar1,lVar7);
      _swift_release(puVar4);
      return;
    }
  }
  else {
    FUN_1008d6d0c();
    uVar6 = param_3;
    _swift_unknownObjectRelease();
    _swift_release(param_3);
    if ((param_4 < 0x10000) || ((param_4 & 0xffff0000) == 0x50000)) {
      lVar7 = *unaff_x20;
      if (*(char *)(*(long *)((long)unaff_x20 + *(long *)(lVar7 + 0x78)) + 0x70) == '\0') {
        lVar7 = (long)unaff_x20 + *(long *)(lVar7 + 0xe8);
        _swift_beginAccess(lVar7,auStack_68,1,0);
        if (*(char *)(lVar7 + 0x1a) != '\0') {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1008d9a68);
          (*pcVar8)();
        }
        *(undefined1 *)(lVar7 + 0x1a) = 1;
        lVar7 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 200));
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1008d9a6c);
          (*pcVar8)();
        }
        if (param_1 == 0) {
          _swift_retain(lVar7);
        }
        else {
          _swift_retain(lVar7);
          FUN_10090d0b8(0,0,param_1);
        }
        FUN_10062cc04(lVar7);
        _swift_release(lVar7);
      }
      else {
        if (DAT_100fec608 != -1) {
          _swift_once(&DAT_100fec608,FUN_100902068);
          lVar7 = *unaff_x20;
        }
        uVar3 = DAT_1010581e8;
        lVar7 = *(long *)((long)unaff_x20 + *(long *)(lVar7 + 200));
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1008d9a64);
          (*pcVar8)();
        }
        _swift_retain(lVar7);
        FUN_10062cce4(uVar3,lVar7);
        _swift_release(lVar7);
        uVar6 = 0;
        (**(code **)(*unaff_x20 + 0x300))(uVar3,2,0);
        if (param_1 != 0) {
          uVar1 = *(ulong *)(param_1 + 0x20);
          lVar7 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          uVar2 = uVar1;
          lVar5 = lVar7;
          (**(code **)(lVar7 + 0x10))();
          if ((uVar2 & 1) != 0) goto LAB_1008d97fc;
          puVar4 = &DAT_100f0f898;
          _swift_allocObject(&DAT_100f0f898,0x20,7);
          *(ulong *)(puVar4 + 0x10) = param_1;
          *(undefined8 *)(puVar4 + 0x18) = uVar3;
          pcVar8 = *(code **)(lVar7 + 0x18);
          _swift_retain(param_1);
          _swift_errorRetain(uVar3);
          goto LAB_1008d991c;
        }
      }
    }
    else if (param_1 != 0) {
      if (DAT_100fec5f8 != -1) {
        _swift_once(&DAT_100fec5f8,FUN_100901f9c);
      }
      uVar3 = DAT_101058190;
      uVar1 = *(ulong *)(param_1 + 0x20);
      lVar7 = *(long *)(param_1 + 0x28);
      _swift_getObjectType();
      uVar2 = uVar1;
      lVar5 = lVar7;
      (**(code **)(lVar7 + 0x10))();
      if ((uVar2 & 1) != 0) goto LAB_1008d97fc;
      puVar4 = &DAT_100f0f8c0;
      _swift_allocObject(&DAT_100f0f8c0,0x20,7);
      *(ulong *)(puVar4 + 0x10) = param_1;
      *(undefined8 *)(puVar4 + 0x18) = uVar3;
      pcVar8 = *(code **)(lVar7 + 0x18);
      _swift_retain(param_1);
      _swift_errorRetain(uVar3);
      goto LAB_1008d991c;
    }
  }
  return;
}



/* Address: 0x1008d9a6c | FUN_1008d9a6c */

/* WARNING: Removing unreachable block (ram,0x0001008d9d48) */

void FUN_1008d9a6c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar9 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  _swift_getObjectType();
  FUN_1008f68cc();
  FUN_1008d96e8();
  puVar1 = &DAT_100f0f780;
  _swift_allocObject(&DAT_100f0f780,0x28,7);
  *(long *)(puVar1 + 0x10) = lVar9;
  *(code **)(puVar1 + 0x18) = FUN_1008db348;
  *(long **)(puVar1 + 0x20) = unaff_x20;
  uVar5 = *(ulong *)(lVar9 + 0x20);
  lVar8 = *(long *)(lVar9 + 0x28);
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(lVar9,3);
  _swift_retain_n();
  uVar2 = uVar5;
  (*pcVar11)(uVar5,lVar8);
  if ((uVar2 & 1) == 0) {
    puVar3 = &DAT_100f0f7a8;
    _swift_allocObject(&DAT_100f0f7a8,0x28,7);
    *(long *)(puVar3 + 0x10) = lVar9;
    *(code **)(puVar3 + 0x18) = FUN_1008db354;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    pcVar11 = *(code **)(lVar8 + 0x18);
    _swift_retain(lVar9);
    _swift_retain(puVar1);
    (*pcVar11)(FUN_1008db360,puVar3,uVar5);
    uVar6 = (uint)lVar8;
    _swift_release(puVar3);
    _swift_release_n();
    _swift_release(lVar9);
    _swift_release(puVar1);
    goto LAB_1008d9c70;
  }
  uVar6 = 0;
  _swift_beginAccess(lVar9 + 0x10,auStack_80,0);
  uVar10 = *(undefined8 *)(lVar9 + 0x10);
  cVar4 = *(char *)(lVar9 + 0x18);
  if (cVar4 == '\x01') {
    FUN_1005dfeb4(uVar10);
    FUN_1008db36c();
    cVar4 = '\x01';
LAB_1008d9c2c:
    FUN_100308538(uVar10,cVar4);
  }
  else {
    if (cVar4 != -1) goto LAB_1008d9c2c;
    uVar6 = 0;
    _swift_beginAccess(lVar9 + 0x30,auStack_98,0x21);
    FUN_10064967c(FUN_1008db354,puVar1);
    _swift_endAccess(auStack_98);
  }
  uVar5 = 0;
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release_n();
  _swift_release(lVar9);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(0);
LAB_1008d9c70:
  _swift_release(lVar9);
  _swift_retain(lVar9);
  FUN_1008d9d68(param_1);
  _swift_release(lVar9);
  FUN_1008d6d0c();
  uVar2 = uVar5;
  uVar7 = uVar6;
  _swift_unknownObjectRelease();
  _swift_release(uVar5);
  if ((0xffff < uVar6) && ((uVar6 & 0xffff0000) != 0x50000)) {
    FUN_1008da01c();
    FUN_1008d6d0c();
    _swift_unknownObjectRelease();
    _swift_release(uVar2);
    if ((5 < (uVar7 >> 0x10 & 0xff)) || ((1 << (ulong)(uVar7 >> 0x10 & 0x1f) & 0x23U) == 0)) {
      FUN_1008da09c(param_1);
    }
  }
  _swift_release(lVar9);
  return;
}



/* Address: 0x1008d9d68 | FUN_1008d9d68 */

void FUN_1008d9d68(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (param_1 != 0) {
    puVar1 = &DAT_100f0f7d0;
    _swift_allocObject(&DAT_100f0f7d0,0x28,7);
    *(long *)(puVar1 + 0x10) = unaff_x20;
    *(code **)(puVar1 + 0x18) = FUN_1008db3b0;
    *(long *)(puVar1 + 0x20) = param_1;
    uVar8 = *(ulong *)(unaff_x20 + 0x20);
    lVar9 = *(long *)(unaff_x20 + 0x28);
    _swift_getObjectType();
    pcVar11 = *(code **)(lVar9 + 0x10);
    _swift_retain_n(param_1,5);
    _swift_retain_n();
    uVar2 = uVar8;
    (*pcVar11)(uVar8,lVar9);
    if ((uVar2 & 1) == 0) {
      puVar4 = &DAT_100f0f7f8;
      _swift_allocObject(&DAT_100f0f7f8,0x28,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(code **)(puVar4 + 0x18) = thunk_FUN_1008db354;
      *(undefined **)(puVar4 + 0x20) = puVar1;
      pcVar11 = *(code **)(lVar9 + 0x18);
      _swift_retain();
      _swift_retain(puVar1);
      (*pcVar11)(thunk_FUN_1008db360,puVar4,uVar8,lVar9);
      _swift_release(puVar4);
      _swift_release_n(param_1,4);
      _swift_release();
      _swift_release(puVar1);
      return;
    }
    uVar7 = 0;
    _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
    cVar5 = *(char *)(unaff_x20 + 0x18);
    if (cVar5 == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1008db354,puVar1);
      _swift_endAccess(auStack_90);
    }
    else {
      uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
      if (cVar5 == '\x01') {
        uVar2 = *(ulong *)(param_1 + 0x20);
        lVar9 = *(long *)(param_1 + 0x28);
        _swift_getObjectType();
        pcVar11 = *(code **)(lVar9 + 0x10);
        FUN_100308524(uVar10,1);
        uVar8 = uVar2;
        lVar6 = lVar9;
        (*pcVar11)(uVar2,lVar9);
        if ((uVar8 & 1) == 0) {
          puVar4 = &DAT_100f0f820;
          _swift_allocObject(&DAT_100f0f820,0x20,7);
          *(long *)(puVar4 + 0x10) = param_1;
          *(undefined8 *)(puVar4 + 0x18) = uVar10;
          pcVar11 = *(code **)(lVar9 + 0x18);
          _swift_retain(param_1);
          FUN_1005dfeb4(uVar10,1);
          (*pcVar11)(thunk_FUN_1008d678c,puVar4,uVar2,lVar9);
          _swift_release(puVar4);
        }
        else {
          uVar3 = uVar10;
          thunk_FUN_1005de8f4(uVar10);
          FUN_1006486f8();
          FUN_100004550(uVar3,lVar6);
          _swift_bridgeObjectRelease(uVar7);
        }
        cVar5 = '\x01';
      }
      FUN_100308538(uVar10,cVar5);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release_n(param_1,4);
    _swift_release();
    _swift_release(puVar1);
    _swift_bridgeObjectRelease(0);
  }
  return;
}



/* Address: 0x1008da01c | FUN_1008da01c */

void FUN_1008da01c(void)

{
  long lVar1;
  code *pcVar2;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_38 [24];
  
  FUN_1008da928(0x21);
  if (unaff_x21 == 0) {
    lVar1 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0xe8);
    _swift_beginAccess(lVar1,auStack_38,1,0);
    if (*(char *)(lVar1 + 0x1a) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008da098);
      (*pcVar2)();
    }
    *(undefined1 *)(lVar1 + 0x1a) = 2;
    if (*(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 200)) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008da09c);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x1008da09c | FUN_1008da09c */

/* WARNING: Removing unreachable block (ram,0x0001008da108) */

void FUN_1008da09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long *unaff_x20;
  long lVar11;
  undefined1 auStack_60 [32];
  
  FUN_1008d6d0c();
  _swift_unknownObjectRelease();
  _swift_release(param_3);
  if (((param_4 >> 0x10 & 0xff) < 6) && ((1 << (ulong)(param_4 >> 0x10 & 0x1f) & 0x23U) != 0)) {
    FUN_1008da01c();
  }
  puVar1 = (undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe8));
  uVar7 = 0x21;
  uVar10 = 0;
  puVar5 = puVar1;
  _swift_beginAccess(puVar1,auStack_60);
  bVar2 = puVar1[0x1a];
  if (bVar2 < 3) {
    if (bVar2 != 2) {
LAB_1008da384:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008da388);
      (*pcVar3)();
    }
    puVar1[0x1a] = 3;
    (**(code **)(**(long **)(puVar1 + 0x10) + 0x88))();
    *puVar5 = 1;
  }
  else if (bVar2 == 3) {
    if ((puVar1[0x19] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008da37c);
      (*pcVar3)();
    }
  }
  else {
    if (bVar2 != 4) goto LAB_1008da384;
    if (puVar1[0x19] != '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008da380);
      (*pcVar3)();
    }
  }
  _swift_endAccess(auStack_60);
  lVar11 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 200));
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008da38c);
    (*pcVar3)();
  }
  _swift_retain(lVar11);
  thunk_FUN_1008d6974(param_1,lVar11);
  _swift_release(lVar11);
  FUN_1008d6d0c();
  uVar8 = (uint)uVar10;
  uVar6 = uVar7;
  _swift_unknownObjectRelease();
  _swift_release(uVar7);
  if (1 < ((uint)((ulong)uVar10 >> 0x10) & 0xffff) - 3) {
    return;
  }
  bVar2 = puVar1[0x1a];
  if (bVar2 < 4) {
    if (bVar2 != 3) {
LAB_1008da38c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008da390);
      (*pcVar3)();
    }
    puVar1[0x1a] = 4;
    pcVar3 = FUN_1008d698c;
  }
  else {
    if (bVar2 != 4) goto LAB_1008da38c;
    if (puVar1[0x19] != '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008da384);
      (*pcVar3)();
    }
    pcVar3 = FUN_100004520;
  }
  lVar11 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 200));
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008da394);
    (*pcVar3)();
  }
  _swift_retain(lVar11);
  (*pcVar3)(0,lVar11);
  _swift_release(lVar11);
  FUN_1008d6d0c();
  uVar7 = uVar6;
  uVar9 = uVar8;
  _swift_unknownObjectRelease();
  _swift_release();
  uVar4 = (uint)uVar6;
  if ((uVar8 & 0xff0000) == 0x50000) {
    return;
  }
  FUN_1008d8e24();
  (**(code **)(*unaff_x20 + 0x2b8))();
  FUN_1008d6d0c();
  _swift_unknownObjectRelease();
  _swift_release(uVar7);
  if ((uVar4 & 0xff) == 1) {
    if (((uVar9 & 0xff0000) == 0x50000) ||
       (bVar2 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0)), (bVar2 >> 3 & 1) == 0))
    goto LAB_1008da350;
    bVar2 = bVar2 & 0xf7;
  }
  else {
    if (((uVar9 & 0xff0000) == 0x50000) ||
       (bVar2 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0)), (bVar2 >> 3 & 1) != 0))
    goto LAB_1008da350;
    bVar2 = bVar2 | 8;
  }
  FUN_1008d8b68(bVar2);
LAB_1008da350:
  (**(code **)(*unaff_x20 + 0x2d8))();
  return;
}



/* Address: 0x1008da394 | FUN_1008da394 */

void FUN_1008da394(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 local_78;
  undefined1 auStack_70 [32];
  
  FUN_10000cbfc(param_1,auStack_70);
  puVar2 = &local_78;
  puVar6 = PTR___type_metadata_for_Any_100eae0c0 + 8;
  _swift_dynamicCast(puVar2,auStack_70,puVar6,&DAT_100f1c2a8,0);
  if ((int)puVar2 == 0) {
    if (param_2 != 0) {
      if (DAT_100fec610 != -1) {
        _swift_once(&DAT_100fec610,FUN_100901fcc);
      }
      uVar5 = DAT_1010581f0;
      uVar3 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar4 = uVar3;
      lVar7 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar4 & 1) == 0) {
        puVar6 = &DAT_100f0f960;
        _swift_allocObject(&DAT_100f0f960,0x20,7);
        *(long *)(puVar6 + 0x10) = param_2;
        *(undefined8 *)(puVar6 + 0x18) = uVar5;
        pcVar8 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        _swift_errorRetain(uVar5);
        (*pcVar8)(thunk_FUN_1008d678c,puVar6,uVar3,lVar1);
        _swift_release(puVar6);
      }
      else {
        thunk_FUN_1005de8f4(uVar5);
        FUN_1006486f8();
        FUN_100004550(uVar5,lVar7);
        _swift_bridgeObjectRelease(puVar6);
      }
    }
  }
  else {
    FUN_1008da4f4(local_78,1,param_2);
  }
  FUN_100004594(auStack_70);
  return;
}



/* Address: 0x1008da4f4 | FUN_1008da4f4 */

/* WARNING: Removing unreachable block (ram,0x0001008da684) */

void FUN_1008da4f4(ulong param_1,undefined8 param_2,long param_3,uint param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  
  uVar2 = param_1;
  lVar5 = param_3;
  (**(code **)(*unaff_x20 + 0x248))();
  lVar6 = lVar5;
  if ((uVar2 & 1) == 0) {
    if (param_3 != 0) {
      if (DAT_100fec600 != -1) {
        _swift_once(&DAT_100fec600,FUN_100901fbc);
        lVar6 = lVar5;
      }
      uVar8 = DAT_101058180;
      uVar2 = *(ulong *)(param_3 + 0x20);
      lVar5 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar3 = uVar2;
      lVar9 = lVar5;
      (**(code **)(lVar5 + 0x10))();
      if ((uVar3 & 1) != 0) {
LAB_1008da5f4:
        thunk_FUN_1005de8f4(uVar8);
        FUN_1006486f8();
        FUN_100004550(uVar8,lVar9);
        _swift_bridgeObjectRelease(lVar6);
        return;
      }
      puVar4 = &DAT_100f0f708;
      _swift_allocObject(&DAT_100f0f708,0x20,7);
      *(long *)(puVar4 + 0x10) = param_3;
      *(undefined8 *)(puVar4 + 0x18) = uVar8;
      pcVar10 = *(code **)(lVar5 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar8);
LAB_1008da710:
      (*pcVar10)(thunk_FUN_1008d678c,puVar4,uVar2,lVar5);
      _swift_release(puVar4);
      return;
    }
  }
  else {
    lVar9 = *(long *)(*unaff_x20 + 0xa0);
    if (*(long *)((long)unaff_x20 + lVar9) == 0) {
      FUN_1008d6d0c();
      lVar6 = lVar5;
      _swift_unknownObjectRelease();
      _swift_release(lVar5);
      if ((param_4 < 0x10000) || ((param_4 & 0xffff0000) == 0x50000)) {
        if (param_3 != 0) {
          if (DAT_100fec5f8 != -1) {
            _swift_once(&DAT_100fec5f8,FUN_100901f9c);
          }
          uVar8 = DAT_101058190;
          uVar2 = *(ulong *)(param_3 + 0x20);
          lVar5 = *(long *)(param_3 + 0x28);
          _swift_getObjectType();
          uVar3 = uVar2;
          lVar9 = lVar5;
          (**(code **)(lVar5 + 0x10))();
          if ((uVar3 & 1) != 0) goto LAB_1008da5f4;
          puVar4 = &DAT_100f0f730;
          _swift_allocObject(&DAT_100f0f730,0x20,7);
          *(long *)(puVar4 + 0x10) = param_3;
          *(undefined8 *)(puVar4 + 0x18) = uVar8;
          pcVar10 = *(code **)(lVar5 + 0x18);
          _swift_retain(param_3);
          _swift_errorRetain(uVar8);
          goto LAB_1008da710;
        }
      }
      else {
        FUN_1008d700c(param_1,param_2);
        if ((param_1 & 1) != 0) {
          FUN_1008d88e4(1,1);
          FUN_1008da09c(param_3);
          return;
        }
        FUN_1008d88e4(1,0);
        if (param_3 == 0) {
          uVar8 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
          _swift_getObjectType();
          puVar4 = PTR___type_metadata_for____100eae0c8;
          FUN_1000f4a44();
          FUN_1008f68cc(uVar8,puVar4 + 8,&PTR_PTR_100f19fa8);
          uVar7 = *(undefined8 *)((long)unaff_x20 + lVar9);
          *(undefined8 *)((long)unaff_x20 + lVar9) = uVar8;
        }
        else {
          uVar7 = *(undefined8 *)((long)unaff_x20 + lVar9);
          *(long *)((long)unaff_x20 + lVar9) = param_3;
          _swift_retain(param_3);
        }
        _swift_release(uVar7);
        FUN_1008da01c();
        bVar1 = *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0));
        if ((bVar1 >> 3 & 1) == 0) {
          FUN_1008d8b68(bVar1 | 8);
          return;
        }
      }
    }
    else if (param_3 != 0) {
      if (DAT_100fec5f0 != -1) {
        _swift_once(&DAT_100fec5f0,FUN_100901f7c);
        lVar6 = lVar5;
      }
      uVar8 = DAT_101058188;
      uVar2 = *(ulong *)(param_3 + 0x20);
      lVar5 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar3 = uVar2;
      lVar9 = lVar5;
      (**(code **)(lVar5 + 0x10))();
      if ((uVar3 & 1) != 0) goto LAB_1008da5f4;
      puVar4 = &DAT_100f0f758;
      _swift_allocObject(&DAT_100f0f758,0x20,7);
      *(long *)(puVar4 + 0x10) = param_3;
      *(undefined8 *)(puVar4 + 0x18) = uVar8;
      pcVar10 = *(code **)(lVar5 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar8);
      goto LAB_1008da710;
    }
  }
  return;
}



/* Address: 0x1008da908 | FUN_1008da908 */

void FUN_1008da908(undefined8 param_1,undefined8 param_2)

{
  FUN_1008da4f4(param_1,0,param_2);
  return;
}


