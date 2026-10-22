/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10066b170 | FUN_10066b170 */

void FUN_10066b170(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100004640();
  pcVar4 = *(code **)(lVar3 + 8);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  lVar1 = param_1;
  FUN_10000cbb0(param_1);
  (*pcVar4)(lVar1,param_2,param_3,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  _swift_retain(uVar2);
  return;
}



/* Address: 0x10066b214 | FUN_10066b214 */

void FUN_10066b214(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100004640();
  pcVar4 = *(code **)(lVar3 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  lVar1 = param_1;
  FUN_10000cbb0(param_1);
  (*pcVar4)(lVar1,param_2,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  _swift_retain(uVar2);
  return;
}



/* Address: 0x10066b2b0 | FUN_10066b2b0 */

void FUN_10066b2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  FUN_100004640();
  (**(code **)(lVar2 + 0x30))(param_1,param_2,param_3,uVar1,lVar2);
  return;
}



/* Address: 0x10066b314 | FUN_10066b314 */

void FUN_10066b314(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  FUN_100004640();
  (**(code **)(lVar2 + 0x38))(param_1,uVar1,lVar2);
  return;
}



/* Address: 0x10066b360 | FUN_10066b360 */

void FUN_10066b360(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  FUN_100004640();
  (**(code **)(lVar2 + 0x40))(param_1,param_2,uVar1,lVar2);
  return;
}



/* Address: 0x10066b3bc | FUN_10066b3bc */

void FUN_10066b3bc(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar2 = *(code **)(unaff_x20 + 0x28);
  (*pcVar2)();
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(code **)(param_1 + 0x28) = pcVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10066b404 | FUN_10066b404 */

void FUN_10066b404(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000023,0x8000000100dafa50,
             0xdafa40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066b45c);
  (*pcVar1)();
}



/* Address: 0x10066b45c | FUN_10066b45c */

void FUN_10066b45c(long param_1)

{
  FUN_10066b404();
  FUN_100004594();
  _swift_release(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x10066b468 | FUN_10066b468 */

void FUN_10066b468(long param_1)

{
  FUN_100004594();
  _swift_release(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x10066b48c | FUN_10066b48c */

long FUN_10066b48c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
  (*(code *)**(undefined8 **)(lVar2 + -8))();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x10066b4d8 | FUN_10066b4d8 */

long FUN_10066b4d8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10008820c();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10066b524 | FUN_10066b524 */

void FUN_10066b524(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10066b540 | FUN_10066b540 */

undefined8 * FUN_10066b540(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar1 = param_1[6];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10066b588 | FUN_10066b588 */

undefined1  [16] FUN_10066b588(void)

{
  return ZEXT816(0x100ef2ba8);
}



/* Address: 0x10066b598 | FUN_10066b598 */

void FUN_10066b598(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10066b5a4 | FUN_10066b5a4 */

void FUN_10066b5a4(void)

{
  _sysconf(0x3a);
  return;
}



/* Address: 0x10066b5ac | FUN_10066b5ac */

undefined * FUN_10066b5ac(void)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  ifaddrs *piVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ifaddrs **ppiVar7;
  __int64 _Var8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x21;
  ifaddrs *piVar11;
  ifaddrs *local_98;
  ifaddrs *local_90;
  char *pcStack_88;
  undefined8 uStack_80;
  sockaddr *psStack_78;
  sockaddr *local_70;
  sockaddr *psStack_68;
  void *local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 & 0xffffffffffffff8)
    ;
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_100eae0d8) {
      _Var1.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar4 < 0xd) {
    lVar4 = 0xc;
  }
  puVar5 = (undefined *)0x0;
  FUN_100624b18(0,lVar4,0,PTR___swiftEmptyArrayStorage_100eae0d8);
  local_98 = (ifaddrs *)0x0;
  FUN_100669f94(&local_98);
  piVar3 = local_98;
  if (unaff_x21 == 0) {
    if (local_98 != (ifaddrs *)0x0) {
      uVar6 = 0;
      FUN_100658d78(0);
      piVar11 = piVar3;
      do {
        pcStack_88 = piVar11->ifa_name;
        local_90 = piVar11->ifa_next;
        psStack_78 = piVar11->ifa_addr;
        uStack_80 = *(undefined8 *)&piVar11->ifa_flags;
        psStack_68 = piVar11->ifa_dstaddr;
        local_70 = piVar11->ifa_netmask;
        local_60 = piVar11->ifa_data;
        _swift_allocObject(uVar6,0x50,7);
        ppiVar7 = &local_90;
        FUN_10065727c();
        if (ppiVar7 != (ifaddrs **)0x0) {
          _swift_retain();
          puVar9 = puVar5;
          if ((ulong)puVar5 >> 0x3e != 0) {
            _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              _Var1.unknown = puVar5;
            }
            _Var8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
            puVar9 = (undefined *)0x0;
            FUN_100624b18(0,_Var8 + 1,1,puVar5);
          }
          uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
          uVar2 = *(ulong *)(uVar10 + 0x10);
          puVar5 = puVar9;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar2) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_100624b18(puVar5,uVar2 + 1,1,puVar9);
            uVar10 = (ulong)puVar5 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar2 + 1;
          *(ifaddrs ***)(uVar10 + uVar2 * 8 + 0x20) = ppiVar7;
          _swift_release(ppiVar7);
        }
        piVar11 = piVar11->ifa_next;
        local_98 = piVar11;
      } while (piVar11 != (ifaddrs *)0x0);
    }
    _freeifaddrs(piVar3);
  }
  else {
    _swift_bridgeObjectRelease(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10066b780 | FUN_10066b780 */

ulong FUN_10066b780(void)

{
  ulong uVar1;
  ulong uVar2;
  ifaddrs *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  ifaddrs **ppiVar6;
  ulong uVar7;
  long unaff_x21;
  ifaddrs *piVar8;
  ifaddrs *local_98;
  ifaddrs *local_90;
  char *pcStack_88;
  undefined8 uStack_80;
  sockaddr *psStack_78;
  sockaddr *local_70;
  sockaddr *psStack_68;
  void *local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar4 = 0;
  FUN_100624c40(0,0xc,0,PTR___swiftEmptyArrayStorage_100eae0d8);
  local_98 = (ifaddrs *)0x0;
  FUN_100669f94(&local_98);
  piVar3 = local_98;
  if (unaff_x21 == 0) {
    if (local_98 != (ifaddrs *)0x0) {
      uVar5 = 0;
      FUN_100658a88(0);
      uVar7 = uVar4;
      piVar8 = piVar3;
      do {
        pcStack_88 = piVar8->ifa_name;
        local_90 = piVar8->ifa_next;
        psStack_78 = piVar8->ifa_addr;
        uStack_80 = *(undefined8 *)&piVar8->ifa_flags;
        psStack_68 = piVar8->ifa_dstaddr;
        local_70 = piVar8->ifa_netmask;
        local_60 = piVar8->ifa_data;
        _swift_allocObject(uVar5,0x50,7);
        ppiVar6 = &local_90;
        FUN_100658360();
        uVar4 = uVar7;
        if (ppiVar6 != (ifaddrs **)0x0) {
          uVar1 = *(ulong *)(uVar7 + 0x10);
          uVar2 = *(ulong *)(uVar7 + 0x18);
          _swift_retain();
          if (uVar2 >> 1 <= uVar1) {
            uVar4 = (ulong)(1 < uVar2);
            FUN_100624c40(uVar4,uVar1 + 1,1,uVar7);
          }
          *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
          *(ifaddrs ***)(uVar4 + uVar1 * 8 + 0x20) = ppiVar6;
          _swift_release(ppiVar6);
        }
        piVar8 = piVar8->ifa_next;
        uVar7 = uVar4;
        local_98 = piVar8;
      } while (piVar8 != (ifaddrs *)0x0);
    }
    _freeifaddrs(piVar3);
  }
  else {
    _swift_bridgeObjectRelease(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10066b8e4 | FUN_10066b8e4 */

undefined * FUN_10066b8e4(void)

{
  return &DAT_100c6c670;
}



/* Address: 0x10066b8f0 | FUN_10066b8f0 */

undefined * FUN_10066b8f0(void)

{
  return &DAT_100c6c671;
}



/* Address: 0x10066b8fc | FUN_10066b8fc */

void FUN_10066b8fc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10066b908 | FUN_10066b908 */

undefined1  [16] FUN_10066b908(void)

{
  return ZEXT816(0x100ef2c90);
}



/* Address: 0x10066b918 | FUN_10066b918 */

void FUN_10066b918(undefined1 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = _malloc(1);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066b940 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066b944 | FUN_10066b944 */

bool FUN_10066b944(byte *param_1,uint param_2,byte param_3)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 == (byte)param_2) {
    *param_1 = param_3;
  }
  return bVar1 == param_2;
}



/* Address: 0x10066b958 | FUN_10066b958 */

byte FUN_10066b958(byte *param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_1 = bVar1 + param_2;
  return bVar1 & 1;
}



/* Address: 0x10066b964 | FUN_10066b964 */

byte FUN_10066b964(byte *param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_1 = bVar1 - param_2;
  return bVar1 & 1;
}



/* Address: 0x10066b974 | FUN_10066b974 */

byte FUN_10066b974(byte *param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_1 = param_2;
  return bVar1 & 1;
}



/* Address: 0x10066b980 | FUN_10066b980 */

undefined1 FUN_10066b980(undefined1 *param_1)

{
  return *param_1;
}



/* Address: 0x10066b988 | FUN_10066b988 */

void FUN_10066b988(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066b990 | FUN_10066b990 */

void FUN_10066b990(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc(8);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066b9b8 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066b9bc | FUN_10066b9bc */

bool FUN_10066b9bc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == param_2) {
    *param_1 = param_3;
  }
  return lVar1 == param_2;
}



/* Address: 0x10066b9d0 | FUN_10066b9d0 */

long FUN_10066b9d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 + param_2;
  return lVar1;
}



/* Address: 0x10066b9d8 | FUN_10066b9d8 */

long FUN_10066b9d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 - param_2;
  return lVar1;
}



/* Address: 0x10066b9e4 | FUN_10066b9e4 */

undefined8 FUN_10066b9e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1;
}



/* Address: 0x10066b9ec | FUN_10066b9ec */

undefined8 FUN_10066b9ec(undefined8 *param_1)

{
  return *param_1;
}



/* Address: 0x10066b9f4 | FUN_10066b9f4 */

void FUN_10066b9f4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066b9fc | FUN_10066b9fc */

void FUN_10066b9fc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc(8);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066ba24 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066ba28 | FUN_10066ba28 */

bool FUN_10066ba28(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == param_2) {
    *param_1 = param_3;
  }
  return lVar1 == param_2;
}



/* Address: 0x10066ba3c | FUN_10066ba3c */

long FUN_10066ba3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 + param_2;
  return lVar1;
}



/* Address: 0x10066ba44 | FUN_10066ba44 */

long FUN_10066ba44(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 - param_2;
  return lVar1;
}



/* Address: 0x10066ba50 | FUN_10066ba50 */

undefined8 FUN_10066ba50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1;
}



/* Address: 0x10066ba58 | FUN_10066ba58 */

undefined8 FUN_10066ba58(undefined8 *param_1)

{
  return *param_1;
}



/* Address: 0x10066ba60 | FUN_10066ba60 */

void FUN_10066ba60(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066ba68 | FUN_10066ba68 */

void FUN_10066ba68(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc(8);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066ba90 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066ba94 | FUN_10066ba94 */

bool FUN_10066ba94(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == param_2) {
    *param_1 = param_3;
  }
  return lVar1 == param_2;
}



/* Address: 0x10066baa8 | FUN_10066baa8 */

long FUN_10066baa8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 + param_2;
  return lVar1;
}



/* Address: 0x10066bab0 | FUN_10066bab0 */

long FUN_10066bab0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 - param_2;
  return lVar1;
}



/* Address: 0x10066babc | FUN_10066babc */

undefined8 FUN_10066babc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1;
}



/* Address: 0x10066bac4 | FUN_10066bac4 */

undefined8 FUN_10066bac4(undefined8 *param_1)

{
  return *param_1;
}



/* Address: 0x10066bacc | FUN_10066bacc */

void FUN_10066bacc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066bad4 | FUN_10066bad4 */

void FUN_10066bad4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc(8);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066bafc | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066bb00 | FUN_10066bb00 */

bool FUN_10066bb00(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == param_2) {
    *param_1 = param_3;
  }
  return lVar1 == param_2;
}



/* Address: 0x10066bb14 | FUN_10066bb14 */

long FUN_10066bb14(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 + param_2;
  return lVar1;
}



/* Address: 0x10066bb1c | FUN_10066bb1c */

long FUN_10066bb1c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 - param_2;
  return lVar1;
}



/* Address: 0x10066bb28 | FUN_10066bb28 */

undefined8 FUN_10066bb28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1;
}



/* Address: 0x10066bb30 | FUN_10066bb30 */

undefined8 FUN_10066bb30(undefined8 *param_1)

{
  return *param_1;
}



/* Address: 0x10066bb38 | FUN_10066bb38 */

void FUN_10066bb38(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066bb40 | FUN_10066bb40 */

void FUN_10066bb40(undefined1 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = _malloc(1);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066bb68 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}


