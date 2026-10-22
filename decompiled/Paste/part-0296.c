/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003bd37c | FUN_1003bd37c */

int FUN_1003bd37c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  iVar3 = *(int *)(lVar7 + 0x54);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
  }
  uVar1 = uVar2;
  if (uVar2 < 0xff) {
    uVar1 = 0xfe;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  if (iVar3 == 0) {
    lVar8 = lVar8 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1003bd430;
  uVar6 = lVar8 + 2;
  uVar5 = (uint)uVar6;
  uVar4 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar9 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_1003bd430;
      goto LAB_1003bd3c8;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1003bd3c8:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar4 = 4;
      if (uVar5 < 4) {
        uVar4 = uVar5;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar6 | uVar2) + 1;
  }
LAB_1003bd430:
  if (0xfd < uVar2) {
    (**(code **)(lVar7 + 0x30))();
    iVar3 = 0;
    if ((int)param_1 != 0) {
      iVar3 = (int)param_1 + -1;
    }
    return iVar3;
  }
  if (*(byte *)(lVar8 + (long)param_1) < 2) {
    return 0;
  }
  return (*(byte *)(lVar8 + (long)param_1) + 0x7ffffffe & 0x7fffffff) + 1;
}



/* Address: 0x1003bd438 | FUN_1003bd438 */

int FUN_1003bd438(int param_1)

{
  int iVar1;
  long in_x10;
  
  (**(code **)(in_x10 + 0x30))();
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = param_1 + -1;
  }
  return iVar1;
}



/* Address: 0x1003bd4cc | FUN_1003bd4cc */

void FUN_1003bd4cc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  iVar10 = *(int *)(lVar8 + 0x54);
  uVar3 = 0;
  if (iVar10 != 0) {
    uVar3 = iVar10 - 1;
  }
  uVar7 = uVar3;
  if (uVar3 < 0xff) {
    uVar7 = 0xfe;
  }
  sVar6 = *(size_t *)(lVar8 + 0x40);
  if (iVar10 == 0) {
    sVar6 = sVar6 + 1;
  }
  sVar2 = sVar6 + 2;
  uVar5 = (uint)sVar2;
  bVar9 = 0;
  if (uVar7 <= param_3 && param_3 - uVar7 != 0) {
    if (uVar5 < 4) {
      uVar1 = ((param_3 - uVar7) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f)
              ) + 1;
      bVar9 = 2;
      if (0xffff < uVar1) {
        bVar9 = 4;
      }
      if (uVar1 < 0x100) {
        bVar9 = 1 < uVar1;
      }
    }
    else {
      bVar9 = 1;
    }
  }
  if (uVar7 < param_2) {
    param_2 = param_2 + ~uVar7;
    if (uVar5 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar10;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar10;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      if (uVar3 < 0xfe) {
        *(char *)((long)param_1 + sVar6) = (char)param_2 + '\x01';
      }
      else {
        if (param_2 <= uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001003bd6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(param_1,param_2 + 1);
          return;
        }
        uVar5 = (uint)sVar6;
        uVar7 = 0xffffffff;
        if (uVar5 < 4) {
          uVar7 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar7 = uVar7 & (uVar3 - param_2 ^ 0xffffffff);
          uVar3 = 4;
          if (uVar5 < 4) {
            uVar3 = uVar5;
          }
          _bzero(param_1,sVar6);
          if ((int)uVar3 < 3) {
            if (uVar3 == 1) {
              *(char *)param_1 = (char)uVar7;
            }
            else {
              *(short *)param_1 = (short)uVar7;
            }
          }
          else if (uVar3 == 3) {
            *(short *)param_1 = (short)uVar7;
            *(char *)((long)param_1 + 2) = (char)(uVar7 >> 0x10);
          }
          else {
            *param_1 = uVar7;
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x1003bd734 | FUN_1003bd734 */

void FUN_1003bd734(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1003bd740 | FUN_1003bd740 */

undefined1  [16]
FUN_1003bd740(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  FUN_1003bd784();
  uVar1 = 0;
  uVar2 = 0;
  if (param_4 >> 0x3c < 0xf) {
    FUN_1003bd9b0();
    uVar1 = param_1;
    uVar2 = param_2;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1003bd784 | FUN_1003bd784 */

undefined8 FUN_1003bd784(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar2 = 0;
  FUN_100317b10();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar10 = (undefined8 *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)puVar10 - extraout_x12;
  puVar3 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar13 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar13 - extraout_x12_00;
  FUN_10031ebc8(lVar12);
  FUN_100011090(lVar12,lVar13,&DAT_100fbe6e0,&DAT_100c40980);
  lVar4 = lVar13;
  (**(code **)(lVar14 + 0x30))(lVar13,1,lVar2);
  if ((int)lVar4 == 1) {
    FUN_100005808(lVar12,&DAT_100fbe6e0,&DAT_100c40980);
  }
  else {
    FUN_1003bcde0(lVar13,lVar11);
    pMVar5 = Swift::MainActor::typeMetadataAccessor();
    pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
    pMVar5 = pMVar6;
    FUN_10033d98c();
    UVar7 = Swift::Actor::get_unownedExecutor();
    UVar8 = UVar7;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar8.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("PasteCore/ImageItemContentViewModel.swift",0x29,1,0xc,UVar7.unknown,pMVar5);
    }
    FUN_100005808(lVar12,&DAT_100fbe6e0,&DAT_100c40980);
    FUN_1003bcde0(lVar11,puVar10);
    puVar9 = puVar10;
    _swift_getEnumCaseMultiPayload(puVar10,lVar2);
    if ((int)puVar9 == 2) {
      uVar1 = *puVar10;
      _swift_release(pMVar6);
      return uVar1;
    }
    FUN_10009eff8(puVar10);
    _swift_release(pMVar6);
  }
  return 0;
}



/* Address: 0x1003bd9b0 | FUN_1003bd9b0 */

void FUN_1003bd9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  FUN_10003bf2c(param_3,param_4);
  return;
}



/* Address: 0x1003bd9cc | FUN_1003bd9cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003bd9cc(void)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  Data DVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  NSData *pNVar9;
  ID IVar10;
  MainActor *pMVar11;
  undefined *puVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  
  DVar4.unknown = (undefined *)objc_stub::data(*(ID *)(unaff_x20 + 0x10));
  FUN_10031b218();
  if ((ulong)DVar4.unknown >> 0x3e == 0) {
    lVar13 = *(long *)(((ulong)DVar4.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = DVar4.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < DVar4.unknown) {
      _Var2.unknown = DVar4.unknown;
    }
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar13 != 0) {
    uVar14 = 0;
    do {
      if (((ulong)DVar4.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)DVar4.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003bdc44);
          (*pcVar3)();
        }
      }
      else {
        Swift::_ArrayBuffer::__getElementSlowPath(uVar14,(_ArrayBuffer)DVar4.unknown);
      }
      lVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003bdc40);
        (*pcVar3)();
      }
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
      pMVar5 = pMVar6;
      FUN_10033d98c();
      UVar7 = Swift::Actor::get_unownedExecutor();
      pcVar8 = (char *)UVar7;
      pMVar11 = pMVar5;
      _swift_task_isCurrentExecutor();
      if (((ulong)pcVar8 & 1) == 0) {
        pcVar8 = "PasteCore/ImageItemContentViewModel.swift";
        pMVar11 = (MainActor *)0x29;
        _swift_task_reportUnexpectedExecutor
                  ("PasteCore/ImageItemContentViewModel.swift",0x29,1,8,UVar7.unknown,pMVar5);
      }
      FUN_10037d5c4();
      if ((ulong)pMVar11 >> 0x3c < 0xf) {
        puVar12 = &_OBJC_CLASS___NSImage;
        _objc_allocWithZone();
        FUN_1001037b4(pcVar8,pMVar11);
        pNVar9 = Foundation::Data::_bridgeToObjectiveC((Data)pcVar8);
        IVar10 = objc_stub::initWithData_((ID)puVar12,pNVar9);
        FUN_10003bf18(pcVar8,pMVar11);
        FUN_10003bf18(pcVar8);
        if (IVar10 != 0) {
          _swift_release(pMVar6);
          _swift_bridgeObjectRelease();
          FUN_10037d5c4();
          if (0xe < (ulong)pMVar11 >> 0x3c) {
            return 0;
          }
          puVar12 = &_OBJC_CLASS___NSImage;
          _objc_allocWithZone();
          FUN_1001037b4(DVar4.unknown,pMVar11);
          pNVar9 = Foundation::Data::_bridgeToObjectiveC(DVar4);
          IVar10 = objc_stub::initWithData_((ID)puVar12,pNVar9);
          FUN_10003bf18(DVar4.unknown,pMVar11);
          FUN_10003bf18(DVar4.unknown,pMVar11);
          return IVar10;
        }
      }
      _swift_release(pMVar6);
      uVar14 = uVar14 + 1;
    } while (lVar1 != lVar13);
  }
  _swift_bridgeObjectRelease(DVar4.unknown);
  return 0;
}



/* Address: 0x1003bdc88 | FUN_1003bdc88 */

long FUN_1003bdc88(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = &DAT_100c44b90;
  _swift_getKeyPath();
  puVar2 = &DAT_100fbdc28;
  FUN_1000037f0(&DAT_100fbdc28,&DAT_100c44bc0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined2 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Address: 0x1003bdd14 | FUN_1003bdd14 */

void FUN_1003bdd14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100c44b90;
  _swift_getKeyPath();
  puVar2 = &DAT_100fbdc28;
  FUN_1000037f0(&DAT_100fbdc28,&DAT_100c44bc0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined2 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x1003bdd90 | thunk_FUN_1002d3708 */

void thunk_FUN_1002d3708(void)

{
  FUN_1002d3708();
  return;
}



/* Address: 0x1003bdd94 | FUN_1003bdd94 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bdd94(void)

{
  undefined *puVar1;
  Task TVar2;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x30);
  if (puVar1 != (undefined *)0x0) {
    TVar2.unknown = puVar1;
    _swift_retain();
    Swift::Task::cancel(TVar2);
    _swift_release(puVar1);
  }
  TVar2.unknown = *(undefined **)(unaff_x20 + 0x38);
  if (TVar2.unknown != (undefined *)0x0) {
    _swift_retain(TVar2.unknown);
    FUN_1000037f0(&DAT_100fc2ac8,&DAT_100c44bc8);
    Swift::Task::cancel(TVar2);
    _swift_release(TVar2.unknown);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x1003bde54 | FUN_1003bde54 */

void FUN_1003bde54(void)

{
  FUN_1003bdd94();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003bde74 | FUN_1003bde74 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003bdeb0) */

undefined8 FUN_1003bde74(long param_1)

{
  undefined1 auStack_50 [16];
  
  if (param_1 != 0) {
    FUN_1002ff310(FUN_1003be040,auStack_50);
  }
  return 0;
}



/* Address: 0x1003bded4 | FUN_1003bded4 */

void FUN_1003bded4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID self;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  FUN_100357cf0(auStack_88);
  FUN_100004640(auStack_88,local_70);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  uVar4 = 0x28;
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = puVar1;
  FUN_1003c89c8();
  if (uVar4 >> 0x3c < 0xf) {
    FUN_100381740(0);
    puVar3 = puVar2;
    FUN_100381528(puVar2,uVar4);
  }
  else {
    FUN_1003c8b58(0x3fe0000000000000);
    if (0xe < uVar4 >> 0x3c) {
      self = 0;
      FUN_100381740();
      _objc_allocWithZone();
      puVar3 = (undefined *)objc_stub::init(self);
      goto LAB_1003bdfec;
    }
    FUN_100381740(0);
    puVar3 = puVar2;
    FUN_100381534(puVar2,uVar4);
  }
  FUN_10003bf18(puVar2,uVar4);
LAB_1003bdfec:
  *(undefined **)(puVar1 + 0x20) = puVar3;
  (**(code **)(*(long *)(lStack_68 + 0x10) + 0x18))(uVar5,puVar1,local_70);
  _swift_release(puVar1);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1003be040 | FUN_1003be040 */

void FUN_1003be040(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003bded4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003be058 | FUN_1003be058 */

void FUN_1003be058(undefined8 param_1)

{
  MainActor *pMVar1;
  long *plVar2;
  long unaff_x22;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x10) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x18) = pMVar1;
  plVar2 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1003be0cc;
  FUN_1003be16c(param_1);
  return;
}



/* Address: 0x1003be0cc | FUN_1003be0cc */

void FUN_1003be0cc(undefined1 param_1)

{
  undefined8 uVar1;
  UnownedSerialExecutor UVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x20);
  *(undefined1 *)(*unaff_x22 + 0x28) = param_1;
  _swift_task_dealloc(uVar1);
  FUN_10033d98c();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003be138,UVar2.unknown,uVar1);
  return;
}



/* Address: 0x1003be138 | FUN_1003be138 */

void FUN_1003be138(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001003be168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1003be16c | FUN_1003be16c */

void FUN_1003be16c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  puVar1 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  *(MainActor **)(unaff_x22 + 0x78) = pMVar3;
  FUN_10033d98c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x80) = UVar4.unknown;
  *(MainActor **)(unaff_x22 + 0x88) = pMVar3;
  _swift_task_switch(FUN_1003be204,UVar4.unknown,pMVar3);
  return;
}



/* Address: 0x1003be204 | FUN_1003be204 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003be204(void)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined8 uVar4;
  Task TVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  lVar9 = *(long *)(unaff_x22 + 0x68);
  lVar8 = *(long *)(lVar9 + 0x30);
  *(long *)(unaff_x22 + 0x90) = lVar8;
  if (lVar8 == 0) {
    puVar1 = (undefined *)
             objc_stub::CGImageForProposedRect_context_hints_(*(ID *)(unaff_x22 + 0x60),0,0,0);
    *(undefined **)(unaff_x22 + 0xa0) = puVar1;
    if (puVar1 == (undefined *)0x0) {
      _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0001003be3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(0);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    TVar2.unknown = puVar1;
    FUN_1000da768(unaff_x22 + 0x10);
    Swift::TaskPriority::get_userInitiated(TVar2);
    TVar2 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(uVar7,0,1,TVar2.unknown);
    FUN_100076688(unaff_x22 + 0x10,unaff_x22 + 0x38);
    puVar3 = &DAT_100ecedc0;
    _swift_allocObject(&DAT_100ecedc0,0x54,7);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    FUN_100076508(unaff_x22 + 0x38,puVar3 + 0x28);
    *(undefined4 *)(puVar3 + 0x50) = 1;
    uVar4 = 0;
    FUN_1003bee18(0,0,uVar7,&DAT_100c44c78,puVar3);
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
    FUN_100005808(uVar7,&DAT_100fbe478,&DAT_100c40940);
    uVar7 = *(undefined8 *)(lVar9 + 0x30);
    *(undefined8 *)(lVar9 + 0x30) = uVar4;
    _swift_retain(uVar4);
    _swift_release(uVar7);
    plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1003be480;
    TVar5.unknown = (undefined *)(unaff_x22 + 0xb8);
  }
  else {
    plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
    _swift_retain(lVar8);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x98) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1003be3f0;
    TVar5.unknown = (undefined *)(unaff_x22 + 0xb9);
  }
  (extension_Swift)::Swift::Task::_get_value(TVar5);
  return;
}



/* Address: 0x1003be3f0 | FUN_1003be3f0 */

void FUN_1003be3f0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x98));
  _swift_task_switch(FUN_1003be434,*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x88));
  return;
}



/* Address: 0x1003be434 | FUN_1003be434 */

void FUN_1003be434(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_release(uVar2);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xb9);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0001003be47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Address: 0x1003be480 | FUN_1003be480 */

void FUN_1003be480(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xb0));
  _swift_task_switch(FUN_1003be4c4,*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x88));
  return;
}



/* Address: 0x1003be4c4 | FUN_1003be4c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003be4c4(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_release(uVar1);
  FUN_100004594(unaff_x22 + 0x10);
  uVar2 = *(undefined1 *)(unaff_x22 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0001003be51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Address: 0x1003be520 | FUN_1003be520 */

void FUN_1003be520(undefined8 param_1)

{
  MainActor *pMVar1;
  long *plVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x38) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x40) = pMVar1;
  plVar2 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1003be598;
  FUN_1003be6c0(param_1);
  return;
}



/* Address: 0x1003be598 | FUN_1003be598 */

void FUN_1003be598(undefined8 param_1)

{
  undefined8 uVar1;
  UnownedSerialExecutor UVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x48);
  *(undefined8 *)(*unaff_x22 + 0x50) = param_1;
  _swift_task_dealloc(uVar1);
  FUN_10033d98c();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003be604,UVar2.unknown,uVar1);
  return;
}



/* Address: 0x1003be604 | FUN_1003be604 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003be604(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    _swift_beginAccess(lVar3 + 0x20,unaff_x22 + 0x10,1,0);
    if (*(long *)(lVar3 + 0x20) == 0) {
      IVar2 = *(ID *)(unaff_x22 + 0x28);
      lVar1 = *(long *)(unaff_x22 + 0x30);
      *(ID *)(lVar3 + 0x20) = IVar2;
      *(undefined2 *)(lVar1 + 0x28) = 1;
      self = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      objc_stub::size(IVar2);
      IVar2 = objc_stub::initWithCGImage_size_((ID)self,uVar4);
      goto LAB_1003be6a8;
    }
  }
  IVar2 = 0;
LAB_1003be6a8:
                    /* WARNING: Could not recover jumptable at 0x0001003be6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(IVar2);
  return;
}



/* Address: 0x1003be6c0 | FUN_1003be6c0 */

void FUN_1003be6c0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  puVar1 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  *(MainActor **)(unaff_x22 + 0x88) = pMVar3;
  FUN_10033d98c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x90) = UVar4.unknown;
  *(MainActor **)(unaff_x22 + 0x98) = pMVar3;
  _swift_task_switch(FUN_1003be758,UVar4.unknown,pMVar3);
  return;
}



/* Address: 0x1003be758 | FUN_1003be758 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003be758(void)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined8 uVar4;
  Task TVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  lVar9 = *(long *)(unaff_x22 + 0x78);
  lVar8 = *(long *)(lVar9 + 0x38);
  *(long *)(unaff_x22 + 0xa0) = lVar8;
  if (lVar8 == 0) {
    puVar1 = (undefined *)
             objc_stub::CGImageForProposedRect_context_hints_(*(ID *)(unaff_x22 + 0x70),0,0,0);
    *(undefined **)(unaff_x22 + 0xb0) = puVar1;
    if (puVar1 == (undefined *)0x0) {
      _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0001003be960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(0);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    TVar2.unknown = puVar1;
    FUN_1000da768(unaff_x22 + 0x10);
    Swift::TaskPriority::get_userInitiated(TVar2);
    TVar2 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(uVar7,0,1,TVar2.unknown);
    FUN_100076688(unaff_x22 + 0x10,unaff_x22 + 0x38);
    puVar3 = &DAT_100eced48;
    _swift_allocObject(&DAT_100eced48,0x54,7);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    FUN_100076508(unaff_x22 + 0x38,puVar3 + 0x28);
    *(undefined4 *)(puVar3 + 0x50) = 1;
    uVar4 = 0;
    FUN_1003bf06c(0,0,uVar7,&DAT_100c44c50,puVar3);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
    FUN_100005808(uVar7,&DAT_100fbe478,&DAT_100c40940);
    uVar7 = *(undefined8 *)(lVar9 + 0x38);
    *(undefined8 *)(lVar9 + 0x38) = uVar4;
    _swift_retain(uVar4);
    _swift_release(uVar7);
    plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xc0) = plVar6;
    FUN_1000037f0(&DAT_100fc2ac8,&DAT_100c44bc8);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1003be9f4;
    TVar5.unknown = (undefined *)(unaff_x22 + 0x60);
  }
  else {
    plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
    _swift_retain(lVar8);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar6;
    FUN_1000037f0(&DAT_100fc2ac8,&DAT_100c44bc8);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1003be964;
    TVar5.unknown = (undefined *)(unaff_x22 + 0x68);
  }
  (extension_Swift)::Swift::Task::_get_value(TVar5);
  return;
}



/* Address: 0x1003be964 | FUN_1003be964 */

void FUN_1003be964(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa8));
  _swift_task_switch(FUN_1003be9a8,*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Address: 0x1003be9a8 | FUN_1003be9a8 */

void FUN_1003be9a8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0001003be9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Address: 0x1003be9f4 | FUN_1003be9f4 */

void FUN_1003be9f4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xc0));
  _swift_task_switch(FUN_1003bea38,*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Address: 0x1003bea38 | FUN_1003bea38 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bea38(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_release(uVar1);
  FUN_100004594(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0001003bea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Address: 0x1003bea94 | FUN_1003bea94 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003beb04) */

long FUN_1003bea94(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_48,1,0);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 != 0) {
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined2 *)(unaff_x20 + 0x28) = 0;
    if (*(char *)(unaff_x20 + 0x29) == '\x01') {
      FUN_1002ff310(FUN_1003bf644,auStack_70);
    }
  }
  return lVar1;
}



/* Address: 0x1003beb34 | FUN_1003beb34 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003beb34(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + 0x20);
}



/* Address: 0x1003beb78 | FUN_1003beb78 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003beb78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,0x21,0);
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  }
  _swift_endAccess(auStack_38);
  return;
}



/* Address: 0x1003bebd0 | FUN_1003bebd0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003bec44) */

void FUN_1003bebd0(long param_1)

{
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_48,1,0);
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined2 *)(unaff_x20 + 0x28) = 0;
    if (param_1 != 0) {
      FUN_1002ff310(FUN_1003bf644,auStack_70);
    }
  }
  return;
}



/* Address: 0x1003bec68 | FUN_1003bec68 */

void FUN_1003bec68(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  Task TVar3;
  long unaff_x20;
  
  puVar2 = *(undefined **)(unaff_x20 + 0x30);
  if (puVar2 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    TVar3.unknown = puVar2;
    _swift_retain();
    Swift::Task::cancel(TVar3);
    _swift_release(puVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  _swift_release(uVar1);
  TVar3.unknown = *(undefined **)(unaff_x20 + 0x38);
  if (TVar3.unknown == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    _swift_retain(TVar3.unknown);
    FUN_1000037f0(&DAT_100fc2ac8,&DAT_100c44bc8);
    Swift::Task::cancel(TVar3);
    _swift_release(TVar3.unknown);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  }
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1003bed20 | FUN_1003bed20 */

void FUN_1003bed20(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_28,1,0);
  *(undefined1 *)(unaff_x20 + 0x29) = *(undefined1 *)(unaff_x20 + 0x28);
  return;
}



/* Address: 0x1003bed54 | FUN_1003bed54 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003bed54(void)

{
  return ZEXT816(0x100fc2b10);
}



/* Address: 0x1003bed74 | FUN_1003bed74 */

void FUN_1003bed74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1003bed94,0,0);
  return;
}



/* Address: 0x1003bed94 | FUN_1003bed94 */

void FUN_1003bed94(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  long unaff_x22;
  
  FUN_100308a6c();
  if ((param_1 & 1) == 0) {
    uVar4 = *(undefined4 *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar2 = *(long *)(unaff_x22 + 0x20);
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    lVar3 = *(long *)(lVar2 + 0x20);
    FUN_100004640(lVar2,uVar1);
    (**(code **)(lVar3 + 8))(uVar5,uVar4,uVar1,lVar3);
    bVar6 = (byte)uVar5 & 1;
  }
  else {
    bVar6 = 0;
  }
  **(byte **)(unaff_x22 + 0x10) = bVar6;
                    /* WARNING: Could not recover jumptable at 0x0001003bee14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003bee18 | FUN_1003bee18 */

void FUN_1003bee18(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_b0 + -extraout_x8;
  FUN_100011090(param_3,puVar9,&DAT_100fbe478,&DAT_100c40940);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100fbe478,&DAT_100c40940);
    uVar10 = 0x1000;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1000;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    puVar2 = &DAT_100ecede8;
    _swift_allocObject(&DAT_100ecede8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      puVar8 = &local_70;
      local_60 = UVar6.unknown;
      lStack_58 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for_Swift_Bool_100eac570,&DAT_100c44c88,
                       puVar2);
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    puVar2 = &DAT_100ecee10;
    _swift_allocObject(&DAT_100ecee10,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_a0 = (undefined8 *)0x0;
    }
    else {
      local_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &local_90;
      local_80 = UVar6.unknown;
      lStack_78 = lVar11;
    }
    local_a8 = 7;
    local_98 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_a8,PTR___type_metadata_for_Swift_Bool_100eac570,&DAT_100c44c90,
                       puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
  }
  return;
}



/* Address: 0x1003bf06c | FUN_1003bf06c */

void FUN_1003bf06c(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_b0 + -extraout_x8;
  FUN_100011090(param_3,puVar10,&DAT_100fbe478,&DAT_100c40940);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar10;
  (**(code **)(lVar13 + 0x30))(puVar10,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar10,&DAT_100fbe478,&DAT_100c40940);
    uVar11 = 0x1000;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar13 + 8))(puVar10,TVar3.unknown);
    uVar11 = (ulong)_Var1 | 0x1000;
  }
  lVar13 = *(long *)(param_5 + 0x10);
  lVar12 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar13);
  _swift_release(param_5);
  if (lVar13 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar12 = 0;
  }
  else {
    _swift_getObjectType(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar13);
  }
  if (param_2 == (void *)0x0) {
    puVar2 = &DAT_100eced70;
    _swift_allocObject(&DAT_100eced70,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    puVar8 = &DAT_100fc2ac8;
    FUN_1000037f0(&DAT_100fc2ac8,&DAT_100c44bc8);
    if (lVar12 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      puVar9 = &local_70;
      local_60 = UVar6.unknown;
      lStack_58 = lVar12;
    }
    _swift_task_create(uVar11,puVar9,puVar8,&DAT_100c44c60,puVar2);
  }
  else {
    SVar14.bridgeObject = param_2;
    SVar14.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar14);
    puVar2 = &DAT_100eced98;
    _swift_allocObject(&DAT_100eced98,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    puVar8 = &DAT_100fc2ac8;
    FUN_1000037f0(&DAT_100fc2ac8,&DAT_100c44bc8);
    puStack_a0 = (undefined8 *)0x0;
    if (lVar12 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &local_90;
      local_80 = UVar6.unknown;
      lStack_78 = lVar12;
    }
    local_a8 = 7;
    local_98 = CVar7.unknown + 0x20;
    _swift_task_create(uVar11,&local_a8,puVar8,&DAT_100c44c68,puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
  }
  return;
}



/* Address: 0x1003bf2dc | FUN_1003bf2dc */

void FUN_1003bf2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1003bf2fc,0,0);
  return;
}



/* Address: 0x1003bf2fc | FUN_1003bf2fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bf2fc(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  bool bVar5;
  Task TVar6;
  long unaff_x22;
  
  FUN_100308a6c();
  if ((param_1 & 1) == 0) {
    uVar4 = *(undefined4 *)(unaff_x22 + 0x28);
    TVar6.unknown = *(undefined **)(unaff_x22 + 0x18);
    lVar2 = *(long *)(unaff_x22 + 0x20);
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    lVar3 = *(long *)(lVar2 + 0x20);
    FUN_100004640(lVar2,uVar1);
    (**(code **)(lVar3 + 0x10))(TVar6.unknown,uVar4,uVar1,lVar3);
    bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
    if (!bVar5) goto LAB_1003bf36c;
  }
  TVar6.unknown = (undefined *)0x0;
LAB_1003bf36c:
  **(undefined8 **)(unaff_x22 + 0x10) = TVar6.unknown;
                    /* WARNING: Could not recover jumptable at 0x0001003bf388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003bf38c | thunk_FUN_1003bf4a4 */

void thunk_FUN_1003bf4a4(void)

{
  FUN_1003bf4a4();
  return;
}



/* Address: 0x1003bf390 | FUN_1003bf390 */

void FUN_1003bf390(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x50);
  plVar4 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_100008284;
  FUN_1003bf2dc(plVar4,param_1,uVar1,uVar2,uVar5,unaff_x20 + 0x28,uVar3);
  return;
}



/* Address: 0x1003bf410 | FUN_1003bf410 */

void FUN_1003bf410(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100071054(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1003bf480 | FUN_1003bf480 */

void FUN_1003bf480(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003bf4a4 | FUN_1003bf4a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bf4a4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004594(unaff_x20 + 0x28);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003bf4d8 | FUN_1003bf4d8 */

void FUN_1003bf4d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x50);
  plVar4 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100008284;
  FUN_1003bed74(plVar4,param_1,uVar1,uVar2,uVar5,unaff_x20 + 0x28,uVar3);
  return;
}



/* Address: 0x1003bf558 | FUN_1003bf558 */

void FUN_1003bf558(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1003bf5c8 | FUN_1003bf5c8 */

void FUN_1003bf5c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1003bf638 | thunk_FUN_1003bf480 */

void thunk_FUN_1003bf480(void)

{
  FUN_1003bf480();
  return;
}



/* Address: 0x1003bf63c | thunk_FUN_1003bf480 */

void thunk_FUN_1003bf480(void)

{
  FUN_1003bf480();
  return;
}



/* Address: 0x1003bf640 | thunk_FUN_1003bf480 */

void thunk_FUN_1003bf480(void)

{
  FUN_1003bf480();
  return;
}



/* Address: 0x1003bf644 | FUN_1003bf644 */

void FUN_1003bf644(void)

{
  FUN_1003be040();
  return;
}



/* Address: 0x1003bf658 | thunk_FUN_1003bf4a4 */

void thunk_FUN_1003bf4a4(void)

{
  thunk_FUN_1003bf4a4();
  return;
}



/* Address: 0x1003bf65c | FUN_1003bf65c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bf65c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  URL UVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar3 = 0;
  FUN_1003187b8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar8 - extraout_x12;
  FUN_10031ebc8(puVar6,*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = 0;
  FUN_100317b10();
  puVar4 = puVar6;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar6,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar6,&DAT_100fbe6e0,&DAT_100c40980);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003bf7d8);
    (*pcVar1)();
  }
  puVar4 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar3);
  if ((int)puVar4 == 1) {
    FUN_100319e98(puVar6,lVar8);
    FUN_100319e98(lVar8,lVar7);
    UVar5 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,lVar7,UVar5.unknown);
    FUN_10005241c(lVar7,FUN_1003187b8);
    return;
  }
  FUN_10005241c(puVar6,FUN_100317b10);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003bf7ec);
  (*pcVar1)();
}



/* Address: 0x1003bf7ec | FUN_1003bf7ec */

undefined8 FUN_1003bf7ec(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10007d048(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1003c00b8(param_1,lVar1);
  FUN_100004594(param_2);
  return param_1;
}



/* Address: 0x1003bf854 | FUN_1003bf854 */

undefined8 FUN_1003bf854(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = *(long *)(param_2 + 0x18);
  FUN_10007d048(param_2,lVar1);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1003bffac(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_100004594(param_2);
  return param_1;
}



/* Address: 0x1003bf900 | FUN_1003bf900 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003bfb4c) */

void FUN_1003bf900(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  URL UVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  
  puVar1 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  lVar2 = 0;
  FUN_1003187b8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar9 - extraout_x8_01;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_1002fc054(param_1,lVar10);
  lVar4 = lVar10;
  (**(code **)(lVar11 + 0x30))(lVar10,1,UVar3.unknown);
  if ((int)lVar4 == 1) {
    FUN_100005808(lVar10,&DAT_100fc1a40,&DAT_100c40660);
    return;
  }
  (**(code **)(lVar11 + 0x20))(lVar8,lVar10,UVar3.unknown);
  FUN_10031ebc8(puVar7,*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = 0;
  FUN_100317b10();
  puVar5 = puVar7;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar7,1,lVar4);
  if ((int)puVar5 == 1) {
    FUN_100005808(puVar7,&DAT_100fbe6e0,&DAT_100c40980);
  }
  else {
    puVar5 = puVar7;
    _swift_getEnumCaseMultiPayload(puVar7,lVar4);
    if ((int)puVar5 == 1) {
      FUN_100319e98(puVar7,lVar9);
      uVar6 = *(undefined8 *)(lVar9 + *(int *)(lVar2 + 0x14) + 8);
      _swift_bridgeObjectRetain(uVar6);
      FUN_10005241c(lVar9,FUN_1003187b8);
      goto LAB_1003bfb2c;
    }
    FUN_10005241c(puVar7,FUN_100317b10);
  }
  uVar6 = 0xe000000000000000;
LAB_1003bfb2c:
  FUN_1002ff310(FUN_1003c0168,auStack_90);
  _swift_bridgeObjectRelease(uVar6);
  (**(code **)(lVar11 + 8))(lVar8,UVar3.unknown);
  return;
}


