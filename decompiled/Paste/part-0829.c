/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100902da8 | FUN_100902da8 */

undefined * FUN_100902da8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100902ec0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fec770;
    FUN_1000f7830(&DAT_100fec770,&DAT_100c86100);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eeaaa8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100902ec0 | FUN_100902ec0 */

ulong FUN_100902ec0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar5 = param_2;
  if (((param_3 & 1) != 0) && (uVar5 = uVar3, (long)uVar3 < (long)param_2)) {
    if ((long)(uVar3 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100902fe8);
      (*pcVar2)();
    }
    uVar5 = uVar3 * 2;
    if (uVar5 - param_2 == 0 || (long)uVar5 < (long)param_2) {
      uVar5 = param_2;
    }
  }
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar4 = uVar3;
  FUN_100900a44(uVar3,uVar5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100902fe4);
      (*pcVar2)();
    }
    FUN_100903678(0,uVar3,uVar4 + 0x20,param_4);
  }
  else {
    uVar5 = (ulong)param_4 & 0xffffffffffffff8;
    if ((uVar4 != uVar5) || ((void *)((long)(uVar5 + 0x20) + uVar3 * 8) <= (void *)(uVar4 + 0x20)))
    {
      _memmove((void *)(uVar4 + 0x20),(void *)(uVar5 + 0x20),uVar3 << 3);
    }
    *(undefined8 *)(uVar5 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar4;
}



/* Address: 0x100902fe8 | FUN_100902fe8 */

undefined * FUN_100902fe8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009030f0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fec7b0;
    FUN_1000f7830(&DAT_100fec7b0,&DAT_100c84088);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f14488);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1009030f0 | FUN_1009030f0 */

void FUN_1009030f0(void)

{
  FUN_100105d5c();
  return;
}



/* Address: 0x100903104 | FUN_100903104 */

undefined * FUN_100903104(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10090323c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x0;
    FUN_100903dd4();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fec7a8;
    FUN_1000f7830(&DAT_100fec7a8,&DAT_100c84080);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10090323c | FUN_10090323c */

undefined * FUN_10090323c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10090332c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fec780;
    FUN_1000f7830(&DAT_100fec780,&DAT_100c84070);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10090332c | FUN_10090332c */

void FUN_10090332c(void)

{
  FUN_100105d5c();
  return;
}



/* Address: 0x100903340 | FUN_100903340 */

undefined * FUN_100903340(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100903448);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fec778;
    FUN_1000f7830(&DAT_100fec778,&DAT_100c84068);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f182a0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100903448 | FUN_100903448 */

void FUN_100903448(void)

{
  FUN_100903464();
  return;
}



/* Address: 0x100903464 | FUN_100903464 */

undefined *
FUN_100903464(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10090356c);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar4 != 0) {
    FUN_1000f7830(param_5,param_6);
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar6 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 3) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 8 <= puVar3) {
      _memmove(puVar3,puVar1,uVar5 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar6;
}



/* Address: 0x10090356c | thunk_FUN_100903570 */

undefined * thunk_FUN_100903570(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100903678);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fec540;
    FUN_1000f7830(&DAT_100fec540,&DAT_100c84060);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f14fd0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100903570 | FUN_100903570 */

undefined * FUN_100903570(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100903678);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fec540;
    FUN_1000f7830(&DAT_100fec540,&DAT_100c84060);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f14fd0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100903678 | FUN_100903678 */

UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
 FUN_100903678(Range<__int64> param_1,
              UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              param_2,_CocoaArrayWrapper param_3,_ArrayBuffer param_4)

{
  code *pcVar1;
  undefined *puVar2;
  UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
  UVar3;
  Range<__int64> RVar4;
  
  if (((ulong)param_4.unknown & 0xc000000000000001) != 0) {
    if ((long)param_2.unknown < (long)param_1.unknown) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100903798);
      (*pcVar1)();
    }
    if (param_1.unknown != param_2.unknown) {
      RVar4.unknown = param_1.unknown;
      if ((long)param_2.unknown <= (long)param_1.unknown) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10090379c);
        (*pcVar1)();
      }
      do {
        puVar2 = RVar4.unknown + 1;
        FUN_1000f7830(&DAT_100fec7b8,&DAT_100c84090);
        Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)RVar4.unknown,param_4);
        RVar4.unknown = puVar2;
      } while (param_2.unknown != puVar2);
    }
  }
  if ((ulong)param_4.unknown >> 0x3e == 0) {
    if (!SBORROW8((long)param_2.unknown,(long)param_1.unknown)) {
      puVar2 = &DAT_100fec7b8;
      FUN_1000f7830(&DAT_100fec7b8,&DAT_100c84090);
      _swift_arrayInitWithCopy
                (param_3.unknown,
                 ((ulong)param_4.unknown & 0xffffffffffffff8) + (long)param_1.unknown * 8 + 0x20,
                 (long)param_2.unknown - (long)param_1.unknown,puVar2);
      _swift_bridgeObjectRelease(param_4.unknown);
      return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              )(param_3.unknown + ((long)param_2.unknown - (long)param_1.unknown) * 8);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100903794);
    (*pcVar1)();
  }
  UVar3 = Swift::_CocoaArrayWrapper::__copyContents(param_1,param_2,param_3);
  return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
          )UVar3.unknown;
}



/* Address: 0x10090379c | FUN_10090379c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

OS_dispatch_queue * FUN_10090379c(void)

{
  QoSClass QVar1;
  AutoreleaseFrequency AVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  Attributes AVar4;
  DispatchQoS DVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  OS_dispatch_queue *pOVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar11;
  long lVar12;
  Attributes attributes;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  String label;
  undefined1 auStack_90 [8];
  undefined *local_88;
  long local_80;
  OS_dispatch_queue *local_78;
  OS_dispatch_queue *local_70;
  undefined *local_68;
  long lVar3;
  
  QVar1 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,QVar1.value);
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar2 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar15 = *(long *)(CONCAT71(extraout_var_00,AVar2.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  AVar4 = Attributes::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(AVar4.unknown + -8) + 0x40));
  attributes.unknown = (undefined *)(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar5.unknown + -8) + 0x40));
  if (DAT_100fec700 != -1) {
    _swift_once(&DAT_100fec700,FUN_10090210c);
  }
  pvVar6 = _pthread_getspecific(*(pthread_key_t *)(*(long *)(DAT_1010581f8 + 0x10) + 0x10));
  if (pvVar6 == (void *)0x0) {
    ppuVar8 = &PTR___tlv_bootstrap_101048e60;
    local_80 = CONCAT71(extraout_var_00,AVar2.value);
    (*(code *)PTR___tlv_bootstrap_101048e60)();
    puVar11 = *ppuVar8;
    DVar5.unknown = (undefined *)0x0;
    FUN_100903d90();
    local_78 = (OS_dispatch_queue *)DVar5.unknown;
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(lVar14 + 0x68))
                (puVar13,*(undefined4 *)
                          PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_default_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae690
                 ,lVar3);
      pOVar10 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)puVar13);
      (**(code **)(lVar14 + 8))(puVar13,lVar3);
    }
    else {
      Dispatch::DispatchQoS::get_unspecified(DVar5);
      local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar11 = &DAT_100fec710;
      FUN_100003a00(&DAT_100fec710,PTR__typeMetadataAccessor_100eae788,
                    PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
      puVar9 = &DAT_100fec718;
      local_88 = puVar11;
      FUN_1000f7830(&DAT_100fec718,&DAT_100c84870);
      puVar11 = &DAT_100fec720;
      FUN_100155c48(&DAT_100fec720,&DAT_100fec718,&DAT_100c84870);
      Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar9,puVar11,AVar4.unknown,local_88);
      (**(code **)(lVar15 + 0x68))
                (lVar12,*(undefined4 *)
                         PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
                 ,local_80);
      label.bridgeObject = (void *)0x8000000100db48d0;
      label.str = (char *)0xd00000000000002c;
      pOVar10 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                          (local_78,label,
                           (DispatchQoS)
                           (attributes.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0)),
                           attributes,(AutoreleaseFrequency)(__int8)lVar12);
      FUN_100902990(pOVar10);
    }
  }
  else {
    local_68 = *(undefined **)((long)pvVar6 + 0x18);
    _swift_unknownObjectRetain();
    uVar7 = 0;
    FUN_100903d90(0);
    _swift_dynamicCast(&local_70,&local_68,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                       uVar7,7);
    pOVar10 = local_70;
  }
  return pOVar10;
}



/* Address: 0x100903a94 | FUN_100903a94 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100903a94(undefined8 param_1,DispatchQoS param_2,undefined8 param_3)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  void *aBlock;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long lVar5;
  DispatchWorkItemFlags qos;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eae670;
  local_a0 = *(long *)(DVar1.unknown + -8);
  lVar5 = (long)&local_b0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  qos.unknown = (undefined *)(lVar5 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_10090379c();
  puVar2 = &DAT_100f142e8;
  _swift_allocObject(&DAT_100f142e8,0x30,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined **)(puVar2 + 0x20) = param_2.unknown;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  local_70 = FUN_100903cc0;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f14300;
  local_68 = puVar2;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(param_2);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100fec6d8;
  FUN_100003a00(&DAT_100fec6d8,puVar3,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar3 = &DAT_100fec6e0;
  FUN_1000f7830(&DAT_100fec6e0,&DAT_100c84890);
  puVar4 = &DAT_100fec6e8;
  FUN_100155c48(&DAT_100fec6e8,&DAT_100fec6e0,&DAT_100c84890);
  Swift::SetAlgebra::_init(lVar5,&local_98,puVar3,puVar4,DVar1.unknown,puVar2);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar5,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return *(undefined8 *)(unaff_x20 + 0x28);
}



/* Address: 0x100903c94 | FUN_100903c94 */

void FUN_100903c94(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100903cc0 | FUN_100903cc0 */

void FUN_100903cc0(void)

{
  long unaff_x20;
  
  FUN_100902190(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100903ce8 | FUN_100903ce8 */

void FUN_100903ce8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100903cfc | FUN_100903cfc */

void FUN_100903cfc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100903d04 | FUN_100903d04 */

void FUN_100903d04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec6f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6c290;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6c290,&DAT_100ef2918);
  DAT_100fec6f0 = pTVar1;
  return;
}



/* Address: 0x100903d44 | FUN_100903d44 */

void FUN_100903d44(void)

{
  long unaff_x20;
  
  FUN_100902764(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100903d4c | FUN_100903d4c */

void FUN_100903d4c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100903d80 | FUN_100903d80 */

void FUN_100903d80(void)

{
  long unaff_x20;
  
  FUN_1009026f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100903d8c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x100903d90 | FUN_100903d90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100903d90(void)

{
  undefined *puVar1;
  
  if (DAT_100fec708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fec708 = puVar1;
  return;
}



/* Address: 0x100903dd4 | FUN_100903dd4 */

void FUN_100903dd4(void)

{
  long lVar1;
  _ContiguousArrayStorage *p_Var2;
  
  if (DAT_100fec788 == (_ContiguousArrayStorage *)0x0) {
    lVar1 = 0xff;
    FUN_100903e28();
    p_Var2 = Swift::_ContiguousArrayStorage::typeMetadataAccessor();
    if (lVar1 == 0) {
      DAT_100fec788 = p_Var2;
    }
  }
  return;
}



/* Address: 0x100903e28 | FUN_100903e28 */

void FUN_100903e28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_100fec790 == 0) {
    lVar1 = 0xff;
    FUN_100903d90();
    uVar2 = 0xff;
    FUN_100903e94(0xff);
    _swift_getTupleTypeMetadata2(param_1,lVar1,uVar2,0,0);
    if (lVar1 == 0) {
      DAT_100fec790 = param_1;
    }
  }
  return;
}



/* Address: 0x100903e94 | FUN_100903e94 */

void FUN_100903e94(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100fec798 != 0) {
    return;
  }
  puVar1 = &DAT_100fec7a0;
  FUN_1000f8b08(&DAT_100fec7a0,&DAT_100c84078);
  uVar2 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,puVar1,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100fec798 = uVar2;
  return;
}



/* Address: 0x100903ef8 | thunk_FUN_100903570 */

undefined * thunk_FUN_100903570(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100903678);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fec540;
    FUN_1000f7830(&DAT_100fec540,&DAT_100c84060);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f14fd0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100903efc | thunk_FUN_100903d44 */

void thunk_FUN_100903d44(void)

{
  long unaff_x20;
  
  FUN_100902764(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100903f00 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100903f04 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100903f08 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100903f0c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100903f10 | FUN_100903f10 */

void FUN_100903f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  FUN_100076508(param_2,param_1);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  *(undefined8 *)(param_1 + 0x40) = param_6;
  *(undefined8 *)(param_1 + 0x70) = param_8;
  *(undefined8 *)(param_1 + 0x48) = param_7;
  *(undefined8 *)(param_1 + 0x50) = param_11;
  *(undefined8 *)(param_1 + 0x58) = param_12;
  _swift_getObjectType();
  puVar2 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  uVar3 = 0;
  _swift_getTupleTypeMetadata2(0,puVar2,param_13,0,0);
  FUN_1000f4a44(param_3,uVar3,param_4);
  FUN_1008f68cc(param_3,uVar3,param_4);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  if (param_9 < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100904030);
    (*pcVar1)();
  }
  *(long *)(param_1 + 0x60) = param_9;
  if (0xffffffff8ec04cfe < param_10 - 0x77359401U) {
    *(long *)(param_1 + 0x68) = param_10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100904034);
  (*pcVar1)();
}



/* Address: 0x100904034 | FUN_100904034 */

undefined8 FUN_100904034(undefined8 param_1,undefined8 param_2)

{
  _swift_errorRetain(param_2);
  return param_2;
}



/* Address: 0x10090405c | FUN_10090405c */

undefined8 FUN_10090405c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_errorRetain(uVar1);
  return uVar1;
}



/* Address: 0x100904084 | FUN_100904084 */

void FUN_100904084(void)

{
  long unaff_x20;
  
  FUN_10090722c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100904090 | FUN_100904090 */

void FUN_100904090(void)

{
  long unaff_x20;
  
  FUN_10090722c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10090409c | FUN_10090409c */

void FUN_10090409c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100904188);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100902a24();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10090418c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100904190);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 8 + 0x20,param_1 + 0x20,uVar5,&DAT_100ef29b8);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100904194);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100904194 | FUN_100904194 */

ulong FUN_100904194(void)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  char *unaff_x20;
  
  if (*unaff_x20 == '\x01') {
    lVar1 = *(long *)(unaff_x20 + 8);
    if (*(long *)(lVar1 + 0x10) != 0) {
LAB_1009041f4:
      cVar2 = '\0';
      goto LAB_1009041f8;
    }
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (*(long *)(lVar1 + 0x10) == 0) {
      return 0xf000000000000007;
    }
  }
  else {
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (*(long *)(lVar1 + 0x10) == 0) {
      lVar1 = *(long *)(unaff_x20 + 8);
      if (*(long *)(lVar1 + 0x10) == 0) {
        return 0xf000000000000007;
      }
      goto LAB_1009041f4;
    }
  }
  cVar2 = '\x01';
LAB_1009041f8:
  *unaff_x20 = cVar2;
  uVar3 = *(ulong *)(lVar1 + 0x20);
  _swift_retain(uVar3 & 0x3fffffffffffffff);
  FUN_100907170(0,1);
  return uVar3;
}



/* Address: 0x10090422c | FUN_10090422c */

void FUN_10090422c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100904194();
  *param_1 = param_2;
  return;
}



/* Address: 0x100904250 | FUN_100904250 */

undefined * FUN_100904250(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  (*param_4)();
  puVar4 = &DAT_100fec7b8;
  FUN_1000f7830(&DAT_100fec7b8,&DAT_100c84090);
  _swift_allocObject();
  lVar9 = *(long *)(param_1 + 0x30);
  uVar15 = *(ulong *)(param_1 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(puVar4 + 0x28) = uVar15;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  puVar4[0x20] = 0xff;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  puVar5 = &DAT_100f14a40;
  _swift_allocObject(&DAT_100f14a40,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = param_1;
  *(code **)(puVar5 + 0x20) = FUN_1009044d0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  uVar6 = uVar15;
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar9 + 0x10);
  _swift_retain_n(puVar4,2);
  _swift_retain_n(param_1,2);
  _swift_unknownObjectRetain(uVar15);
  uVar15 = uVar6;
  (*pcVar11)(uVar6,lVar9);
  if ((uVar15 & 1) == 0) {
    puVar7 = &DAT_100f14a68;
    _swift_allocObject(&DAT_100f14a68,0x28,7);
    *(long *)(puVar7 + 0x10) = param_1;
    *(code **)(puVar7 + 0x18) = FUN_1008fde4c;
    *(undefined **)(puVar7 + 0x20) = puVar5;
    pcVar11 = *(code **)(lVar9 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar5);
    (*pcVar11)(FUN_1009082d0,puVar7,uVar6,lVar9);
    _swift_release(puVar5);
    _swift_release(param_1);
    _swift_release(puVar7);
    goto LAB_10090449c;
  }
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar3 = *(char *)(param_1 + 0x20);
  if (cVar3 == '\x01') {
    uVar13 = 0;
    uVar10 = 1;
LAB_100904424:
    uVar12 = uVar1;
    uVar14 = uVar13;
    uVar8 = uVar10;
    thunk_FUN_1008f1b4c(uVar1,uVar13,uVar10);
    FUN_1008fde6c(uVar1,uVar2,cVar3);
    FUN_1008fdeac(uVar1,uVar13,uVar10);
  }
  else {
    if (cVar3 != -1) {
      uVar10 = 0;
      uVar13 = uVar2;
      goto LAB_100904424;
    }
    _swift_beginAccess(param_1 + 0x38,auStack_90,0x21,0);
    FUN_10064967c(FUN_1008fde4c,puVar5);
    _swift_endAccess(auStack_90);
    uVar12 = 0;
    uVar14 = 0;
    uVar8 = 0;
  }
  FUN_1006486f8(uVar12,uVar14,uVar8);
  FUN_100004550(uVar12,uVar14);
  _swift_release(puVar5);
  _swift_release(param_1);
  _swift_bridgeObjectRelease(uVar8);
LAB_10090449c:
  _swift_release(param_1);
  _swift_release(puVar4);
  return puVar4;
}



/* Address: 0x1009044d0 | FUN_1009044d0 */

void FUN_1009044d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  _swift_unknownObjectRetain(uVar1);
  return;
}



/* Address: 0x1009044e0 | FUN_1009044e0 */

void FUN_1009044e0(undefined8 param_1)

{
  FUN_1009077c0(0);
  _swift_allocObject();
  FUN_100907d40(param_1);
  FUN_100904528();
  _swift_release(param_1);
  return;
}



/* Address: 0x100904528 | FUN_100904528 */

void FUN_100904528(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = *(long *)(unaff_x20 + 0x40);
  _swift_getObjectType(uVar4);
  FUN_100642338();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  _swift_getObjectType(uVar4);
  pcVar7 = *(code **)(lVar5 + 0xb0);
  _swift_unknownObjectRetain(uVar4);
  _swift_retain();
  pcVar2 = FUN_100908040;
  lVar5 = unaff_x20;
  (*pcVar7)();
  _swift_unknownObjectRelease(uVar4);
  _swift_release();
  uVar4 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x20 + 200);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar6;
  *(code **)(unaff_x20 + 200) = pcVar2;
  *(long *)(unaff_x20 + 0xd0) = lVar5;
  FUN_100622430(uVar4,uVar1,uVar3);
  FUN_100904680(0);
  return;
}



/* Address: 0x1009045ec | FUN_1009045ec */

void FUN_1009045ec(void)

{
  FUN_100904630();
  return;
}



/* Address: 0x1009045f8 | FUN_1009045f8 */

void FUN_1009045f8(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  FUN_1001a7d78(*param_1,*param_2,*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100904608 | FUN_100904608 */

void FUN_100904608(long param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1001a7dac(*unaff_x20,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100904624 | FUN_100904624 */

void FUN_100904624(undefined8 param_1,long param_2)

{
  undefined1 *unaff_x20;
  
  FUN_1001a7d88(param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Address: 0x100904630 | FUN_100904630 */

void FUN_100904630(__int64 param_1,long param_2,undefined8 param_3,code *param_4)

{
  Hasher HVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  (*param_4)(HVar1.unknown,*unaff_x20,*(undefined8 *)(param_2 + 0x10));
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100904680 | FUN_100904680 */

void FUN_100904680(byte param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x20;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  byte local_41;
  StaticString local_40;
  __uint64 _Stack_38;
  
  uVar1 = (uint)param_1;
  lVar7 = *unaff_x20;
  bVar3 = *(byte *)(unaff_x20 + 0x1b);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        if (uVar1 == 5) goto LAB_100904804;
        if (uVar1 == 2) {
          *(undefined1 *)(unaff_x20 + 0x1b) = 4;
          goto LAB_100904780;
        }
        if (uVar1 == 1) {
          *(undefined1 *)(unaff_x20 + 0x1b) = 2;
          FUN_100904a70();
          return;
        }
        goto LAB_10090488c;
      }
      if (uVar1 != 5) {
        if (uVar1 != 3) {
          if (uVar1 != 2) goto LAB_10090488c;
          param_1 = 5;
        }
        *(byte *)(unaff_x20 + 0x1b) = param_1;
        goto LAB_100904780;
      }
      goto LAB_100904804;
    }
    if (param_1 == 0) {
      *(undefined1 *)(unaff_x20 + 0x1b) = 1;
      FUN_10090496c();
      return;
    }
    goto LAB_10090488c;
  }
  if (bVar3 < 5) {
    if (bVar3 == 3) {
      if (5 < uVar1) {
LAB_1009047a4:
        if (uVar1 == 6) {
LAB_1009047e4:
          *(byte *)(unaff_x20 + 0x1b) = param_1;
          FUN_100905c9c();
          return;
        }
        if (uVar1 == 7) {
LAB_1009047d0:
          FUN_100904da8();
          return;
        }
        if (uVar1 == 8) {
          return;
        }
        goto LAB_10090488c;
      }
      if (uVar1 == 2) {
LAB_100904820:
        *(undefined1 *)(unaff_x20 + 0x1b) = 5;
        if (unaff_x20[0x15] != 0) {
          return;
        }
        goto LAB_100904780;
      }
    }
    else {
      if (5 < uVar1) goto LAB_1009047a4;
      if (uVar1 == 1) goto LAB_100904820;
    }
  }
  else {
    if (bVar3 != 5) {
      if (uVar1 - 1 < 7) {
        return;
      }
      goto LAB_10090488c;
    }
    if (5 < uVar1) {
      if (uVar1 == 6) goto LAB_1009047e4;
      if (uVar1 != 7) {
        if (uVar1 == 8) {
          *(undefined1 *)(unaff_x20 + 0x1b) = 6;
          FUN_100904ecc();
          return;
        }
        goto LAB_10090488c;
      }
      goto LAB_1009047d0;
    }
    if (uVar1 == 3) {
      return;
    }
  }
  if (uVar1 == 4) {
    lVar7 = unaff_x20[0x15];
    lVar2 = unaff_x20[0x16];
    lVar6 = unaff_x20[0x17];
    unaff_x20[0x16] = 0;
    unaff_x20[0x17] = 0;
    unaff_x20[0x15] = 0;
    FUN_100622430(lVar7,lVar2,lVar6);
LAB_100904780:
    FUN_100904b58();
    return;
  }
  if (uVar1 == 5) {
LAB_100904804:
    *(undefined1 *)(unaff_x20 + 0x1b) = 6;
    FUN_100904d14();
    return;
  }
LAB_10090488c:
  local_40.unknown = (undefined *)0x0;
  _Stack_38 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x32,param_2);
  SVar9.bridgeObject = (void *)0x8000000100db4880;
  SVar9.str = (char *)0xd000000000000026;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar9,SVar12);
  local_41 = *(byte *)(unaff_x20 + 0x1b);
  uVar8 = *(undefined8 *)(lVar7 + 0x50);
  uVar5 = 0;
  FUN_1009077dc(0,uVar8);
  Swift::DefaultStringInterpolation::_appendInterpolation(&local_41,uVar5);
  SVar10.bridgeObject = &DAT_e800000000000000;
  SVar10.str = (char *)0x207475706e69202c;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar10,SVar13);
  uVar5 = 0;
  local_41 = param_1;
  FUN_100908068(0,uVar8);
  Swift::DefaultStringInterpolation::_appendInterpolation(&local_41,uVar5);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,local_40,_Stack_38,0xdb4880);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10090496c);
  (*pcVar4)();
}



/* Address: 0x10090496c | FUN_10090496c */

void FUN_10090496c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  FUN_100004640(unaff_x20 + 0x10,uVar1);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = uVar7;
  (**(code **)(lVar3 + 0x10))(uVar7,uVar4,uVar9,uVar1,lVar3);
  uVar6 = uVar8;
  FUN_100915cc0(uVar8,uVar2);
  _swift_release(uVar5);
  FUN_100905034(uVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  FUN_100004640(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar3 + 8))(uVar7,uVar4,uVar9,uVar1,lVar3);
  FUN_100915cc0(uVar8,uVar2);
  _swift_release(uVar7);
  FUN_100905564(uVar8);
  _swift_release(uVar6);
  _swift_release(uVar8);
  return;
}



/* Address: 0x100904a70 | FUN_100904a70 */

void FUN_100904a70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  _swift_getObjectType(uVar6);
  FUN_100642338();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
  puVar2 = &DAT_100f14860;
  _swift_allocObject(&DAT_100f14860,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1009080d8;
  *(long *)(puVar2 + 0x18) = unaff_x20;
  _swift_retain();
  _swift_getObjectType(uVar6);
  pcVar9 = *(code **)(lVar7 + 0xb0);
  _swift_unknownObjectRetain(uVar6);
  pcVar3 = FUN_1006226e4;
  puVar4 = puVar2;
  (*pcVar9)();
  _swift_unknownObjectRelease(uVar6);
  _swift_release(puVar2);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar8;
  *(code **)(unaff_x20 + 0x98) = pcVar3;
  *(undefined **)(unaff_x20 + 0xa0) = puVar4;
  FUN_100622430(uVar6,uVar1,uVar5);
  return;
}



/* Address: 0x100904b58 | FUN_100904b58 */

void FUN_100904b58(void)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_68 [24];
  
  if (unaff_x20[0x15] == 0) {
    lVar9 = *unaff_x20;
    plVar4 = unaff_x20 + 0x1c;
    _swift_beginAccess(plVar4,auStack_68,0x21,0);
    FUN_100904194();
    _swift_endAccess(auStack_68);
    if ((((ulong)plVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      _swift_beginAccess(unaff_x20 + 0x1f,auStack_68,0,0);
      puVar5 = &DAT_100febf90;
      FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
      uVar6 = 0xff;
      _swift_getTupleTypeMetadata2(0xff,puVar5,*(undefined8 *)(lVar9 + 0x50),0,0);
      FUN_1006529e0(0xff,uVar6);
      uVar6 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar6);
      bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (bVar3) {
        FUN_100904680(8);
      }
    }
    else {
      lVar9 = unaff_x20[7];
      lVar1 = unaff_x20[8];
      _swift_getObjectType(lVar9);
      FUN_100642338();
      lVar10 = unaff_x20[0xf];
      _swift_getObjectType(lVar9);
      pcVar11 = *(code **)(lVar1 + 0xb0);
      _swift_unknownObjectRetain(lVar9);
      _swift_retain();
      pcVar2 = FUN_100908100;
      plVar7 = unaff_x20;
      (*pcVar11)();
      _swift_unknownObjectRelease(lVar9);
      _swift_release();
      lVar9 = unaff_x20[0x15];
      lVar1 = unaff_x20[0x16];
      lVar8 = unaff_x20[0x17];
      unaff_x20[0x15] = lVar10;
      unaff_x20[0x16] = (long)pcVar2;
      unaff_x20[0x17] = (long)plVar7;
      FUN_100622430(lVar9,lVar1,lVar8);
      FUN_100905aa0(plVar4);
      FUN_1005d8534(plVar4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100904d14);
  (*pcVar2)();
}



/* Address: 0x100904d14 | FUN_100904d14 */

void FUN_100904d14(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar6 = *unaff_x20;
  FUN_100905c9c();
  lVar1 = unaff_x20[0x10];
  lVar2 = unaff_x20[0x11];
  FUN_1008db6c4();
  puVar3 = &DAT_100eeb710;
  _swift_allocError(&DAT_100eeb710,param_1,0,0);
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  puVar4 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  uVar5 = 0;
  _swift_getTupleTypeMetadata2(0,puVar4,*(undefined8 *)(lVar6 + 0x50),0,0);
  FUN_100646f54(puVar3,lVar2,uVar5);
  _swift_errorRelease(puVar3);
  return;
}



/* Address: 0x100904da8 | FUN_100904da8 */

void FUN_100904da8(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar6 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 0x1f,auStack_58,0,0);
  puVar4 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,puVar4,*(undefined8 *)(lVar6 + 0x50),0,0);
  FUN_1006529e0(0xff,uVar5);
  uVar5 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar5);
  bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (bVar3) {
    lVar6 = unaff_x20[0x15];
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar1 = unaff_x20[0x16];
      lVar2 = unaff_x20[0x17];
      _swift_retain(lVar6);
      _swift_retain(lVar2);
      FUN_100950b80(lVar6,lVar1,lVar2);
      _swift_release(lVar2);
      _swift_release(lVar6);
      lVar6 = unaff_x20[0x15];
    }
    lVar1 = unaff_x20[0x16];
    lVar2 = unaff_x20[0x17];
    unaff_x20[0x15] = 0;
    unaff_x20[0x16] = 0;
    unaff_x20[0x17] = 0;
    FUN_100622430(lVar6,lVar1,lVar2);
    FUN_100904b58();
  }
  return;
}



/* Address: 0x100904ecc | FUN_100904ecc */

void FUN_100904ecc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long local_90 [3];
  undefined1 auStack_78 [24];
  
  lVar12 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 0x1f,auStack_78,0,0);
  local_90[0] = unaff_x20[0x1f];
  puVar8 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  uVar9 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,puVar8,*(undefined8 *)(lVar12 + 0x50),0,0);
  FUN_1006529e0(0xff,uVar9);
  uVar10 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar10);
  bVar7 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (bVar7) {
    FUN_100905c9c();
    lVar13 = unaff_x20[0x11];
    plVar11 = unaff_x20 + 0x21;
    _swift_beginAccess(plVar11,local_90,0,0);
    lVar12 = unaff_x20[0x21];
    lVar3 = unaff_x20[0x22];
    lVar1 = unaff_x20[0x23];
    lVar4 = unaff_x20[0x24];
    lVar2 = unaff_x20[0x25];
    lVar5 = unaff_x20[0x26];
    FUN_1008fe550();
    puVar8 = &DAT_100f14508;
    _swift_allocError(&DAT_100f14508,plVar11,0,0);
    *plVar11 = lVar12;
    plVar11[1] = lVar3;
    plVar11[2] = lVar1;
    plVar11[3] = lVar4;
    plVar11[4] = lVar2;
    plVar11[5] = lVar5;
    _swift_bridgeObjectRetain(lVar3);
    _swift_errorRetain(lVar4);
    _swift_errorRetain(lVar2);
    _swift_bridgeObjectRetain(lVar5);
    FUN_100646f54(puVar8,lVar13,uVar9);
    _swift_errorRelease(puVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100905034);
  (*pcVar6)();
}



/* Address: 0x100905034 | FUN_100905034 */

void FUN_100905034(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_c0;
  char local_b8;
  undefined1 auStack_a8 [24];
  undefined8 local_90 [3];
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  puVar4 = puVar3;
  _swift_allocObject();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar4[0x18] = 0xff;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  puVar5 = &DAT_100f147e8;
  _swift_allocObject(&DAT_100f147e8,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = param_1;
  *(code **)(puVar5 + 0x20) = FUN_1008fe054;
  *(undefined8 *)(puVar5 + 0x28) = unaff_x20;
  uVar8 = 0;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x01') {
    _swift_retain_n();
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar4);
    _swift_retain(param_1);
    uVar6 = 1;
    FUN_1008fa5ec(uVar9,1);
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(param_1 + 0x30,local_90,0x21,0);
      _swift_retain_n();
      _swift_unknownObjectRetain(uVar6);
      _swift_retain(puVar4);
      _swift_retain(param_1);
      FUN_10064967c(thunk_FUN_1008fe018,puVar5);
      _swift_endAccess(local_90);
      uVar10 = 0;
      uVar11 = 0;
      uVar8 = 0;
      goto LAB_100905230;
    }
    local_90[0] = uVar9;
    _swift_retain_n();
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar4);
    _swift_retain(param_1);
    FUN_1008fa5ec(uVar9,cVar1);
    FUN_1008f6688(local_90);
    FUN_1008fa60c(uVar9,cVar1);
    uVar9 = 0;
    uVar6 = 0;
  }
  uVar10 = uVar9;
  uVar11 = uVar6;
  FUN_100630328(uVar9,uVar6);
  FUN_1002ec258(uVar9,uVar6);
LAB_100905230:
  FUN_1006486f8(uVar10,uVar11,uVar8);
  FUN_100004550(uVar10,uVar11);
  _swift_release_n();
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(uVar8);
  _swift_allocObject(puVar3,0x48,7);
  uVar6 = *(undefined8 *)(puVar4 + 0x20);
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(puVar4 + 0x28);
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  puVar5 = &DAT_100f14810;
  _swift_allocObject(&DAT_100f14810,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  *(code **)(puVar5 + 0x20) = FUN_1008fe05c;
  *(undefined8 *)(puVar5 + 0x28) = unaff_x20;
  uVar9 = 0;
  _swift_beginAccess(puVar4 + 0x10,local_90,0,0);
  uVar8 = *(undefined8 *)(puVar4 + 0x10);
  bVar2 = puVar4[0x18];
  uVar7 = (ulong)bVar2;
  if (bVar2 == 1) {
    _swift_retain_n();
    _swift_retain(puVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar3);
    FUN_1005dfeb4(uVar8,1);
    FUN_1008f1af0(uVar8);
    _swift_release();
    uVar6 = 0;
    uVar7 = 0;
    FUN_100630328(0,0);
    FUN_100308538(uVar8,1);
  }
  else if (bVar2 == 0xff) {
    _swift_beginAccess(puVar4 + 0x30,auStack_a8,0x21,0);
    _swift_retain_n();
    _swift_retain(puVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar3);
    FUN_10064967c(thunk_FUN_1008fe02c,puVar5);
    _swift_endAccess(auStack_a8);
    uVar7 = 0;
    uVar9 = 0;
    uVar6 = 0;
  }
  else {
    FUN_100630328(uVar8);
    _swift_retain_n();
    _swift_retain(puVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar3);
    uVar6 = uVar8;
  }
  FUN_1006486f8(uVar6,uVar7,uVar9);
  FUN_100004550(uVar6,uVar7);
  _swift_release(puVar4);
  _swift_release();
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(uVar9);
  puVar5 = &DAT_100f14838;
  _swift_allocObject(&DAT_100f14838,0x28,7);
  *(code **)(puVar5 + 0x10) = FUN_1009080a8;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  _swift_beginAccess(puVar3 + 0x10,auStack_a8,0,0);
  cVar1 = puVar3[0x18];
  if (cVar1 == -1) {
    _swift_beginAccess(puVar3 + 0x30,&local_c0,0x21,0);
    _swift_retain_n();
    _swift_retain(puVar3);
    FUN_10064967c(thunk_FUN_1006225d4,puVar5);
    _swift_endAccess(&local_c0);
  }
  else {
    uVar8 = *(undefined8 *)(puVar3 + 0x10);
    local_c0 = uVar8;
    local_b8 = cVar1;
    _swift_retain_n();
    _swift_retain(puVar3);
    FUN_1005dfeb4(uVar8,cVar1);
    FUN_100906aec(&local_c0);
    _swift_release();
    FUN_1002ec258(local_c0,local_b8);
  }
  _swift_release(puVar3);
  _swift_release();
  _swift_release(puVar5);
  return;
}



/* Address: 0x100905564 | FUN_100905564 */

void FUN_100905564(long param_1)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90 [3];
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  puVar5 = puVar4;
  _swift_allocObject();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  puVar5[0x18] = 0xff;
  *(undefined8 *)(puVar5 + 0x30) = 0;
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(undefined8 *)(puVar5 + 0x40) = 0;
  puVar6 = &DAT_100f14770;
  _swift_allocObject(&DAT_100f14770,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(long *)(puVar6 + 0x18) = param_1;
  *(code **)(puVar6 + 0x20) = FUN_1008fe010;
  *(long *)(puVar6 + 0x28) = unaff_x20;
  uVar9 = 0;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x01') {
    _swift_retain_n();
    _swift_unknownObjectRetain(uVar7);
    _swift_retain(puVar5);
    _swift_retain(param_1);
    uVar7 = 1;
    FUN_1008fa5ec(uVar10,1);
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(param_1 + 0x30,local_90,0x21,0);
      _swift_retain_n();
      _swift_unknownObjectRetain(uVar7);
      _swift_retain(puVar5);
      _swift_retain(param_1);
      FUN_10064967c(FUN_1008fe018,puVar6);
      _swift_endAccess(local_90);
      uVar11 = 0;
      uVar12 = 0;
      uVar9 = 0;
      goto LAB_100905760;
    }
    local_90[0] = uVar10;
    _swift_retain_n();
    _swift_unknownObjectRetain(uVar7);
    _swift_retain(puVar5);
    _swift_retain(param_1);
    FUN_1008fa5ec(uVar10,cVar1);
    FUN_1008f662c(local_90);
    FUN_1008fa60c(uVar10,cVar1);
    uVar10 = 0;
    uVar7 = 0;
  }
  uVar11 = uVar10;
  uVar12 = uVar7;
  FUN_100630328(uVar10,uVar7);
  FUN_1002ec258(uVar10,uVar7);
LAB_100905760:
  FUN_1006486f8(uVar11,uVar12,uVar9);
  FUN_100004550(uVar11,uVar12);
  _swift_release_n();
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(uVar9);
  _swift_allocObject(puVar4,0x48,7);
  uVar7 = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar4[0x18] = 0xff;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  puVar6 = &DAT_100f14798;
  _swift_allocObject(&DAT_100f14798,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  *(code **)(puVar6 + 0x20) = FUN_1008fe024;
  *(long *)(puVar6 + 0x28) = unaff_x20;
  uVar10 = 0;
  _swift_beginAccess(puVar5 + 0x10,local_90,0,0);
  uVar9 = *(undefined8 *)(puVar5 + 0x10);
  bVar2 = puVar5[0x18];
  uVar8 = (ulong)bVar2;
  if (bVar2 == 1) {
    _swift_retain_n();
    _swift_retain(puVar5);
    _swift_unknownObjectRetain(uVar7);
    _swift_retain(puVar4);
    FUN_1005dfeb4(uVar9,1);
    FUN_1008f1a94(uVar9);
    _swift_release();
    uVar7 = 0;
    uVar8 = 0;
    FUN_100630328(0,0);
    FUN_100308538(uVar9,1);
  }
  else if (bVar2 == 0xff) {
    _swift_beginAccess(puVar5 + 0x30,auStack_a8,0x21,0);
    _swift_retain_n();
    _swift_retain(puVar5);
    _swift_unknownObjectRetain(uVar7);
    _swift_retain(puVar4);
    FUN_10064967c(FUN_1008fe02c,puVar6);
    _swift_endAccess(auStack_a8);
    uVar8 = 0;
    uVar10 = 0;
    uVar7 = 0;
  }
  else {
    FUN_100630328(uVar9);
    _swift_retain_n();
    _swift_retain(puVar5);
    _swift_unknownObjectRetain(uVar7);
    _swift_retain(puVar4);
    uVar7 = uVar9;
  }
  FUN_1006486f8(uVar7,uVar8,uVar10);
  FUN_100004550(uVar7,uVar8);
  _swift_release(puVar5);
  _swift_release();
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(uVar10);
  puVar6 = &DAT_100f147c0;
  _swift_allocObject(&DAT_100f147c0,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_100908074;
  *(long *)(puVar6 + 0x18) = unaff_x20;
  *(undefined **)(puVar6 + 0x20) = puVar4;
  _swift_beginAccess(puVar4 + 0x10,auStack_a8,0,0);
  cVar1 = puVar4[0x18];
  if (cVar1 == -1) {
    _swift_beginAccess(puVar4 + 0x30,auStack_c0,0x21,0);
    _swift_retain_n();
    _swift_retain(puVar4);
    FUN_10064967c(FUN_1006225d4,puVar6);
    _swift_endAccess(auStack_c0);
  }
  else {
    uVar9 = *(undefined8 *)(puVar4 + 0x10);
    _swift_retain_n();
    _swift_retain(puVar4);
    FUN_1005dfeb4(uVar9,cVar1);
    if (SCARRY8(*(long *)(unaff_x20 + 0x100),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100905aa0);
      (*pcVar3)();
    }
    *(long *)(unaff_x20 + 0x100) = *(long *)(unaff_x20 + 0x100) + 1;
    FUN_100904680(1);
    _swift_release();
    FUN_1002ec258(uVar9,cVar1);
  }
  _swift_release(puVar4);
  _swift_release();
  _swift_release(puVar6);
  return;
}



/* Address: 0x100905aa0 | FUN_100905aa0 */

void FUN_100905aa0(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar8 = *unaff_x20;
  lVar2 = unaff_x20[7];
  lVar3 = unaff_x20[8];
  lVar1 = lVar2;
  (*(code *)unaff_x20[0xc])(lVar2,lVar3,*(undefined4 *)(&DAT_100c84484 + (param_1 >> 0x3e) * 4));
  FUN_100647054(lVar2,lVar3);
  lVar3 = lVar2;
  FUN_10064311c();
  _swift_release(lVar2);
  local_58 = lVar1;
  _swift_beginAccess(unaff_x20 + 0x1f,auStack_70,0x21,0);
  _swift_retain(lVar1);
  puVar4 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  uVar9 = *(undefined8 *)(lVar8 + 0x50);
  uVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,puVar4,uVar9,0,0);
  FUN_1006529e0(0xff,uVar5);
  uVar6 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Array<undefined>::append(&local_58,uVar6);
  _swift_endAccess(auStack_70);
  puVar4 = &DAT_100f14888;
  _swift_allocObject(&DAT_100f14888,0x28,7);
  *(long **)(puVar4 + 0x10) = unaff_x20;
  *(long *)(puVar4 + 0x18) = lVar1;
  *(ulong *)(puVar4 + 0x20) = param_1;
  puVar7 = &DAT_100f148b0;
  _swift_allocObject(&DAT_100f148b0,0x28,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar9;
  *(code **)(puVar7 + 0x18) = FUN_10090812c;
  *(undefined **)(puVar7 + 0x20) = puVar4;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  _swift_retain(lVar1);
  _swift_retain();
  FUN_1006443bc(FUN_10090815c,puVar7,lVar3,uVar5);
  _swift_release(puVar7);
  puVar4 = &DAT_100f148d8;
  _swift_allocObject(&DAT_100f148d8,0x28,7);
  *(long **)(puVar4 + 0x10) = unaff_x20;
  *(ulong *)(puVar4 + 0x18) = param_1;
  *(long *)(puVar4 + 0x20) = lVar1;
  _swift_retain(lVar1);
  _swift_retain();
  _swift_retain(param_1 & 0x3fffffffffffffff);
  FUN_1006454f4(FUN_1009081b0,puVar4,lVar3,uVar5);
  _swift_release(lVar1);
  _swift_release(lVar3);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100905c9c | FUN_100905c9c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100905e74 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100905c9c(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  __int64 _Var6;
  undefined *puVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  tuple2_conflict3 tVar12;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar11 = *unaff_x20;
  if (unaff_x20[0x20] < 2) {
    lVar9 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    FUN_100004640(unaff_x20 + 2,lVar9);
    (**(code **)(lVar1 + 0x18))(lVar9,lVar1);
  }
  lVar9 = unaff_x20[0x12];
  if (lVar9 != 0) {
    lVar1 = unaff_x20[0x13];
    lVar8 = unaff_x20[0x14];
    _swift_retain(lVar9);
    _swift_retain(lVar8);
    FUN_100950b80(lVar9,lVar1,lVar8);
    _swift_release(lVar8);
    _swift_release(lVar9);
    lVar9 = unaff_x20[0x12];
    lVar1 = unaff_x20[0x13];
    lVar8 = unaff_x20[0x14];
    unaff_x20[0x12] = 0;
    unaff_x20[0x13] = 0;
    unaff_x20[0x14] = 0;
    FUN_100622430(lVar9,lVar1,lVar8);
  }
  lVar9 = unaff_x20[0x15];
  if (lVar9 != 0) {
    lVar1 = unaff_x20[0x16];
    lVar8 = unaff_x20[0x17];
    _swift_retain(lVar9);
    _swift_retain(lVar8);
    FUN_100950b80(lVar9,lVar1,lVar8);
    _swift_release(lVar8);
    _swift_release(lVar9);
    lVar9 = unaff_x20[0x15];
    lVar1 = unaff_x20[0x16];
    lVar8 = unaff_x20[0x17];
    unaff_x20[0x15] = 0;
    unaff_x20[0x16] = 0;
    unaff_x20[0x17] = 0;
    FUN_100622430(lVar9,lVar1,lVar8);
  }
  lVar9 = unaff_x20[0x18];
  if (lVar9 != 0) {
    lVar1 = unaff_x20[0x19];
    lVar8 = unaff_x20[0x1a];
    _swift_retain(lVar9);
    _swift_retain(lVar8);
    FUN_100950b80(lVar9,lVar1,lVar8);
    _swift_release(lVar8);
    _swift_release(lVar9);
    lVar9 = unaff_x20[0x18];
    lVar1 = unaff_x20[0x19];
    lVar8 = unaff_x20[0x1a];
    unaff_x20[0x18] = 0;
    unaff_x20[0x19] = 0;
    unaff_x20[0x1a] = 0;
    FUN_100622430(lVar9,lVar1,lVar8);
  }
  _swift_beginAccess(unaff_x20 + 0x1f,auStack_78,1,0);
  lVar9 = unaff_x20[0x1f];
  _swift_bridgeObjectRetain(lVar9);
  puVar3 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  uVar10 = *(undefined8 *)(lVar11 + 0x50);
  uVar4 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,puVar3,uVar10,0,0);
  uVar5 = 0;
  FUN_1006529e0(0,uVar4);
  tVar12 = Swift::Array<undefined>::_allocateUninitialized(0,uVar5);
  lVar11 = unaff_x20[0x1f];
  unaff_x20[0x1f] = tVar12._0_8_;
  _swift_bridgeObjectRelease(lVar11,tVar12._.unknown.unknown);
  _Var6 = Swift::Array<undefined>::get_endIndex(tVar12._0_8_,uVar5);
  if (_Var6 != 0) {
    lVar11 = 0;
    do {
      Swift::Array<undefined>::get_subscript(&local_80,lVar11,lVar9,uVar5);
      uVar4 = local_80;
      lVar1 = lVar11 + 1;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100905f4c);
        (*pcVar2)();
      }
      puVar3 = &DAT_100f149f0;
      _swift_allocObject(&DAT_100f149f0,0x18,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar10;
      puVar7 = &DAT_100f14a18;
      _swift_allocObject(&DAT_100f14a18,0x28,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar10;
      *(code **)(puVar7 + 0x18) = FUN_100908284;
      *(undefined **)(puVar7 + 0x20) = puVar3;
      FUN_10064838c(thunk_FUN_10090815c,puVar7);
      _swift_release(uVar4);
      _swift_release(puVar7);
      _Var6 = Swift::Array<undefined>::get_endIndex(puVar7,uVar5);
      lVar11 = lVar11 + 1;
    } while (lVar1 != _Var6);
  }
  _swift_bridgeObjectRelease(lVar9);
  return;
}



/* Address: 0x100905f4c | FUN_100905f4c */

void FUN_100905f4c(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  long local_b8;
  long *local_b0;
  undefined8 local_a0 [2];
  long local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  lVar14 = *(long *)(*param_4 + 0x50);
  lVar9 = *(long *)(lVar14 + -8);
  lVar16 = *(long *)(lVar9 + 0x40);
  uVar7 = lVar16 + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)&local_e0 - uVar7;
  lVar13 = lVar15 - uVar7;
  if ((char)param_4[0x1b] == '\x06') {
    local_90 = lVar14;
    uStack_88 = param_5;
    _swift_beginAccess(param_4 + 0x1f,auStack_78,0x21,0);
    puVar2 = &DAT_100febf90;
    FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
    uVar1 = 0xff;
    _swift_getTupleTypeMetadata2(0xff,puVar2,lVar14,0,0);
    FUN_1006529e0(0xff,uVar1);
    uVar1 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar1);
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar1
              );
    (extension_Swift)::Swift::RangeReplaceableCollection::_removeAll();
    _swift_endAccess(auStack_78);
    _swift_getObjectType(param_1);
    FUN_10061cf14(2,0,param_1,param_2);
    return;
  }
  uVar1 = param_1;
  local_b8 = param_3;
  _swift_getObjectType(param_1);
  local_c8 = param_6;
  local_b0 = param_4;
  local_a0[0] = param_1;
  FUN_10062285c(param_6,"NIOPosix/HappyEyeballs.swift",0x1c,2,0x294,uVar1,
                *(undefined8 *)(param_2 + 8));
  local_e0 = param_2;
  _swift_getObjectType(*(undefined8 *)(param_6 + 0x20));
  FUN_100642338();
  pcVar10 = *(code **)(lVar9 + 0x10);
  (*pcVar10)(lVar13,local_b8,lVar14);
  local_b8 = lVar15;
  (*pcVar10)(lVar15,lVar13,lVar14);
  uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar11 = uVar7 + 0x38 & (uVar7 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100f14900;
  _swift_allocObject(&DAT_100f14900,uVar11 + lVar16,uVar7 | 7);
  lVar15 = local_e0;
  *(long *)(puVar2 + 0x10) = lVar14;
  *(long **)(puVar2 + 0x18) = local_b0;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(long *)(puVar2 + 0x30) = local_e0;
  local_d8 = lVar9;
  local_d0 = param_1;
  local_c0 = param_5;
  (**(code **)(lVar9 + 0x20))(puVar2 + uVar11,lVar13,lVar14);
  puVar3 = &DAT_100f14928;
  _swift_allocObject(&DAT_100f14928,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10090822c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  puVar4 = &DAT_100f14950;
  _swift_allocObject(&DAT_100f14950,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1000386a0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar5 = &DAT_100f14978;
  _swift_allocObject(&DAT_100f14978,0x28,7);
  *(ulong *)(puVar5 + 0x10) = param_6;
  *(code **)(puVar5 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  _swift_beginAccess(param_6 + 0x10,local_a0,0,0);
  plVar8 = local_b0;
  if (*(char *)(param_6 + 0x18) == '\x01') {
    _swift_retain_n(local_b0,2);
    uVar12 = local_c0;
    _swift_retain_n(local_c0,2);
    uVar1 = local_d0;
    _swift_unknownObjectRetain_n(local_d0,2);
    _swift_retain(puVar2);
    _swift_retain(puVar3);
    _swift_retain(puVar4);
    _swift_retain(param_6);
  }
  else if (*(char *)(param_6 + 0x18) == -1) {
    _swift_beginAccess(param_6 + 0x30,auStack_78,0x21,0);
    plVar8 = local_b0;
    _swift_retain_n(local_b0,2);
    uVar12 = local_c0;
    _swift_retain_n(local_c0,2);
    uVar1 = local_d0;
    _swift_unknownObjectRetain_n(local_d0,2);
    _swift_retain(puVar2);
    _swift_retain(puVar3);
    _swift_retain(puVar4);
    _swift_retain(param_6);
    FUN_10064967c(FUN_1008a8990,puVar5);
    _swift_endAccess(auStack_78);
  }
  else {
    _swift_retain_n(local_b0,2);
    uVar12 = local_c0;
    _swift_retain_n(local_c0,2);
    uVar1 = local_d0;
    _swift_unknownObjectRetain_n(local_d0,2);
    _swift_retain_n(puVar3,2);
    _swift_retain(puVar2);
    _swift_retain(puVar4);
    _swift_retain(param_6);
    FUN_10090657c(plVar8,uVar12,uVar1,lVar15,local_b8);
    _swift_release(puVar3);
  }
  lVar9 = local_d8;
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(0);
  _swift_retain(param_6);
  _swift_unknownObjectRelease(uVar1);
  _swift_release(uVar12);
  _swift_release(plVar8);
  _swift_release(puVar2);
  _swift_release(puVar3);
  (**(code **)(lVar9 + 8))(local_b8,lVar14);
  _swift_release(param_6);
  puVar2 = &DAT_100f149a0;
  _swift_allocObject(&DAT_100f149a0,0x28,7);
  uVar7 = local_c8;
  *(long **)(puVar2 + 0x10) = plVar8;
  *(undefined8 *)(puVar2 + 0x18) = uVar12;
  *(ulong *)(puVar2 + 0x20) = local_c8;
  puVar3 = &DAT_100f149c8;
  _swift_allocObject(&DAT_100f149c8,0x28,7);
  *(ulong *)(puVar3 + 0x10) = param_6;
  *(code **)(puVar3 + 0x18) = FUN_100908254;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  uVar1 = *(undefined8 *)(param_6 + 0x10);
  cVar6 = *(char *)(param_6 + 0x18);
  if (cVar6 == '\x01') {
    _swift_retain(uVar7 & 0x3fffffffffffffff);
    _swift_retain(puVar2);
    _swift_retain(plVar8);
    _swift_retain(uVar12);
    _swift_retain(param_6);
    FUN_1005dfeb4(uVar1,1);
    FUN_100906730(uVar1,plVar8,uVar12,uVar7);
    cVar6 = '\x01';
  }
  else {
    if (cVar6 == -1) {
      _swift_beginAccess(param_6 + 0x30,auStack_78,0x21,0);
      _swift_retain(uVar7 & 0x3fffffffffffffff);
      _swift_retain(puVar2);
      _swift_retain(plVar8);
      _swift_retain(uVar12);
      _swift_retain(param_6);
      FUN_10064967c(FUN_1008db354,puVar3);
      _swift_endAccess(auStack_78);
      goto LAB_100906520;
    }
    _swift_retain(uVar7 & 0x3fffffffffffffff);
    _swift_retain(puVar2);
    _swift_retain(plVar8);
    _swift_retain(uVar12);
    _swift_retain(param_6);
  }
  FUN_100308538(uVar1,cVar6);
LAB_100906520:
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(param_6);
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(0);
  return;
}



/* Address: 0x10090657c | FUN_10090657c */

void FUN_10090657c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 auStack_b0 [3];
  undefined1 auStack_98 [40];
  long local_70;
  undefined8 uStack_68;
  
  lVar6 = *param_1;
  puVar2 = &DAT_100febf90;
  auStack_b0[1] = param_5;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  lVar8 = *(long *)(lVar6 + 0x50);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,puVar2,lVar8,0,0);
  lVar7 = *(long *)(lVar3 + -8);
  lVar6 = -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_b0 + lVar6);
  local_70 = lVar8;
  uStack_68 = param_2;
  _swift_beginAccess(param_1 + 0x1f,auStack_98,0x21,0);
  FUN_1006529e0(0xff,lVar3);
  uVar4 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar4);
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar4);
  (extension_Swift)::Swift::RangeReplaceableCollection::_removeAll();
  _swift_endAccess(auStack_98);
  if ((char)param_1[0x1b] == '\x06') {
    _swift_getObjectType(param_3);
    FUN_10061cf14(2,0,param_3,param_4);
  }
  else {
    FUN_100904680(6);
    lVar5 = param_1[0x11];
    iVar1 = *(int *)(lVar3 + 0x30);
    *puVar9 = param_3;
    *(undefined8 *)((long)auStack_b0 + lVar6 + 8) = param_4;
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))((long)puVar9 + (long)iVar1,auStack_b0[1],lVar8);
    _swift_unknownObjectRetain(param_3);
    FUN_100646e88(puVar9,lVar5,lVar3);
    (**(code **)(lVar7 + 8))(puVar9,lVar3);
  }
  return;
}


