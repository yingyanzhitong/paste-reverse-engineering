/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100932184 | FUN_100932184 */

undefined * FUN_100932184(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10093228c);
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
    puVar3 = &DAT_100fec470;
    FUN_1000f7830(&DAT_100fec470,&DAT_100c83b58);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ef0a38);
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



/* Address: 0x10093228c | FUN_10093228c */

void FUN_10093228c(long param_1)

{
  FUN_100902c5c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1009322a0 | FUN_1009322a0 */

void FUN_1009322a0(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  __int64 _Var2;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    _Var2 = *(__int64 *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    _Var2 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  FUN_100902ec0(0,_Var2,0,param_1);
  return;
}



/* Address: 0x1009322f0 | FUN_1009322f0 */

void FUN_1009322f0(long param_1)

{
  FUN_10090323c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100932304 | FUN_100932304 */

void FUN_100932304(long param_1)

{
  FUN_100903448(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100932318 | FUN_100932318 */

void FUN_100932318(long param_1)

{
  thunk_FUN_100903570(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10093232c | FUN_10093232c */

undefined * FUN_10093232c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100932434);
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
    puVar3 = &DAT_100fecf78;
    FUN_1000f7830(&DAT_100fecf78,&DAT_100c84fa0);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100932434 | FUN_100932434 */

undefined * FUN_100932434(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100932574);
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
    puVar3 = &DAT_100fecf20;
    FUN_1000f7830(&DAT_100fecf20,&DAT_100c84f30);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fec538;
    FUN_1000f7830(&DAT_100fec538,&DAT_100c83d80);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x50 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100932574 | FUN_100932574 */

undefined * FUN_100932574(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009326a4);
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
    puVar3 = &DAT_100fecf40;
    FUN_1000f7830(&DAT_100fecf40,&DAT_100c84f50);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fecf38;
    FUN_1000f7830(&DAT_100fecf38,&DAT_100c84f48);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009326a4 | FUN_1009326a4 */

undefined * FUN_1009326a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009327bc);
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
    puVar3 = &DAT_100fec550;
    FUN_1000f7830(&DAT_100fec550,&DAT_100c84f80);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100f1a1d8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009327bc | FUN_1009327bc */

undefined * FUN_1009327bc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009328c4);
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
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009328c4 | FUN_1009328c4 */

code * FUN_1009328c4(ulong param_1,ulong param_2,ulong param_3,code *param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100932a00);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    pcVar2 = FUN_100947828;
    FUN_100932094(FUN_100947828,&DAT_100fecf70,&DAT_100c84f98);
    _swift_allocObject();
    pcVar3 = pcVar2;
    _malloc_size();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    FUN_100947828(0);
    _swift_arrayInitWithCopy(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar2;
}



/* Address: 0x100932a00 | FUN_100932a00 */

undefined * FUN_100932a00(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100932b30);
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
    puVar3 = &DAT_100fecf68;
    FUN_1000f7830(&DAT_100fecf68,&DAT_100c84f88);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fec940;
    FUN_1000f7830(&DAT_100fec940,&DAT_100c84f90);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100932b30 | FUN_100932b30 */

undefined * FUN_100932b30(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100932c38);
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
    puVar3 = &DAT_100fec6f8;
    FUN_1000f7830(&DAT_100fec6f8,&DAT_100c84000);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ef29b8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100932c38 | FUN_100932c38 */

undefined * FUN_100932c38(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100932d88);
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
    puVar3 = &DAT_100fec0a0;
    FUN_100932108(&DAT_100fec0a0,&DAT_100c83980,&DAT_100fecf48,&DAT_100c84f60);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fec0a0;
    FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100932d88 | FUN_100932d88 */

void FUN_100932d88(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  undefined1 auStack_b0 [80];
  long local_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_28;
  long lStack_20;
  undefined1 local_18;
  
  if (param_3 == param_4) {
    *(undefined8 *)((long)param_1 + 0x41) = 0;
    *(undefined8 *)((long)param_1 + 0x39) = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100932e38);
    (*pcVar1)();
  }
  if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100932e3c);
    (*pcVar1)();
  }
  if (param_3 < *(ulong *)(param_2 + 0x10)) {
    param_2 = param_2 + param_3 * 0x50;
    local_60 = *(long *)(param_2 + 0x20);
    if (local_60 != 0) {
      *param_1 = local_60;
      lStack_40 = *(long *)(param_2 + 0x40);
      local_48 = *(long *)(param_2 + 0x38);
      param_1[4] = lStack_40;
      param_1[3] = local_48;
      lStack_30 = *(long *)(param_2 + 0x50);
      local_38 = *(long *)(param_2 + 0x48);
      param_1[6] = lStack_30;
      param_1[5] = local_38;
      lStack_20 = *(long *)(param_2 + 0x60);
      local_28 = *(long *)(param_2 + 0x58);
      param_1[8] = lStack_20;
      param_1[7] = local_28;
      local_18 = *(undefined1 *)(param_2 + 0x68);
      *(undefined1 *)(param_1 + 9) = local_18;
      lStack_50 = *(long *)(param_2 + 0x30);
      local_58 = *(long *)(param_2 + 0x28);
      param_1[2] = lStack_50;
      param_1[1] = local_58;
      FUN_100901d00(&local_60,auStack_b0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100932e44);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100932e40);
  (*pcVar1)();
}



/* Address: 0x100932e44 | FUN_100932e44 */

void FUN_100932e44(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *unaff_x20;
  ulong uVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  uVar3 = *unaff_x20;
  uVar6 = unaff_x20[1];
  lVar4 = unaff_x20[2] - uVar6;
  if ((long)unaff_x20[2] < (long)uVar6) {
    lVar4 = lVar4 + *(long *)(uVar3 + 0x10);
  }
  if (lVar4 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100932f6c);
    (*pcVar1)();
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100932f70);
    (*pcVar1)();
  }
  if (param_1 != 0) {
    uVar2 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      FUN_100932f70();
    }
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100932f68);
      (*pcVar1)();
    }
    if (uVar6 < *(ulong *)(uVar3 + 0x10)) {
      do {
        puVar5 = (undefined8 *)(uVar3 + 0x20 + uVar6 * 0x50);
        uStack_a8 = puVar5[1];
        local_b0 = *puVar5;
        uStack_98 = puVar5[3];
        local_a0 = puVar5[2];
        uStack_88 = puVar5[5];
        local_90 = puVar5[4];
        uStack_80 = puVar5[6];
        uStack_6f = *(undefined8 *)((long)puVar5 + 0x41);
        uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar5 + 0x39) >> 0x38);
        uStack_78 = (undefined1)puVar5[7];
        local_77 = (undefined7)((ulong)puVar5[7] >> 8);
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        *(undefined8 *)((long)puVar5 + 0x41) = 0;
        *(undefined8 *)((long)puVar5 + 0x39) = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        FUN_1000fb4c4(&local_b0,&DAT_100fec538,&DAT_100c83d80);
        uVar6 = *(ulong *)(uVar3 + 0x10) + 0x7fffffffffffffff & uVar6 + 1;
        param_1 = param_1 + -1;
        if (param_1 == 0) {
          *unaff_x20 = uVar3;
          goto LAB_100932f40;
        }
      } while (uVar6 < *(ulong *)(uVar3 + 0x10));
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100932f3c);
    (*pcVar1)();
  }
LAB_100932f40:
  unaff_x20[1] = uVar6;
  return;
}



/* Address: 0x100932f70 | FUN_100932f70 */

void FUN_100932f70(long param_1)

{
  FUN_100932434(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100932f84 | FUN_100932f84 */

void FUN_100932f84(long param_1)

{
  FUN_100932574(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100932f98 | FUN_100932f98 */

void FUN_100932f98(long param_1)

{
  FUN_100932b30(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100932fac | FUN_100932fac */

void FUN_100932fac(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 local_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 local_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = param_1[5];
  local_60 = param_1[4];
  uStack_50 = param_1[6];
  uStack_48 = (undefined1)param_1[7];
  uStack_3f = *(undefined8 *)((long)param_1 + 0x41);
  local_47 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_78 = param_1[1];
  local_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uVar5 = unaff_x20[2];
  uVar4 = *unaff_x20;
  FUN_100901d00(param_1,&local_d0);
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    FUN_100932f70();
  }
  if (-1 < (long)uVar5) {
    if (uVar5 < *(ulong *)(uVar4 + 0x10)) {
      lVar2 = uVar4 + uVar5 * 0x50;
      uStack_c8 = *(undefined8 *)(lVar2 + 0x28);
      local_d0 = *(undefined8 *)(lVar2 + 0x20);
      uStack_b8 = *(undefined8 *)(lVar2 + 0x38);
      local_c0 = *(undefined8 *)(lVar2 + 0x30);
      uStack_a8 = *(undefined8 *)(lVar2 + 0x48);
      local_b0 = *(undefined8 *)(lVar2 + 0x40);
      uStack_a0 = *(undefined8 *)(lVar2 + 0x50);
      uStack_8f = *(undefined8 *)(lVar2 + 0x61);
      uStack_90 = (undefined1)((ulong)*(undefined8 *)(lVar2 + 0x59) >> 0x38);
      uStack_98 = (undefined1)*(undefined8 *)(lVar2 + 0x58);
      local_97 = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 8);
      *(undefined8 *)(lVar2 + 0x48) = uStack_58;
      *(undefined8 *)(lVar2 + 0x40) = local_60;
      *(ulong *)(lVar2 + 0x58) = CONCAT71(local_47,uStack_48);
      *(undefined8 *)(lVar2 + 0x50) = uStack_50;
      *(undefined8 *)(lVar2 + 0x61) = uStack_3f;
      *(ulong *)(lVar2 + 0x59) = CONCAT17(uStack_40,local_47);
      *(undefined8 *)(lVar2 + 0x28) = uStack_78;
      *(undefined8 *)(lVar2 + 0x20) = local_80;
      *(undefined8 *)(lVar2 + 0x38) = uStack_68;
      *(undefined8 *)(lVar2 + 0x30) = uStack_70;
      FUN_1000fb4c4(&local_d0,&DAT_100fec538,&DAT_100c83d80);
      *unaff_x20 = uVar4;
      uVar3 = *(long *)(uVar4 + 0x10) + 0x7fffffffffffffffU & uVar5 + 1;
      unaff_x20[2] = uVar3;
      if (unaff_x20[1] == uVar3) {
        FUN_100933194();
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009330b4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009330b0);
  (*pcVar1)();
}



/* Address: 0x1009330b4 | FUN_1009330b4 */

void FUN_1009330b4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  
  uVar9 = unaff_x20[2];
  uVar8 = *unaff_x20;
  FUN_100656200();
  _swift_retain(param_4);
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar7 & 1) == 0) {
    FUN_100932f84();
  }
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100933190);
    (*pcVar6)();
  }
  if (*(ulong *)(uVar8 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100933194);
    (*pcVar6)();
  }
  lVar1 = uVar8 + uVar9 * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  uVar5 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(ulong *)(lVar1 + 0x30) = param_3 & 0xffffffffffffff;
  *(undefined8 *)(lVar1 + 0x38) = param_4;
  FUN_1009340ac(uVar2,uVar4,uVar3,uVar5);
  *unaff_x20 = uVar8;
  uVar7 = *(long *)(uVar8 + 0x10) + 0x7fffffffffffffffU & uVar9 + 1;
  unaff_x20[2] = uVar7;
  if (unaff_x20[1] == uVar7) {
    FUN_1009332c8();
    return;
  }
  return;
}



/* Address: 0x100933194 | FUN_100933194 */

void FUN_100933194(void)

{
  undefined *puVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_98 [8];
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x10) * 2;
  if (lVar4 < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009332b4);
    (*pcVar2)();
  }
  FUN_10090d9bc(0,lVar4,0);
  if (*(long *)(lVar3 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009332b8);
    (*pcVar2)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009332bc);
    (*pcVar2)();
  }
  _swift_retain(lVar3);
  FUN_1009333f8();
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar3 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009332c4);
      (*pcVar2)();
    }
    _swift_retain(lVar3);
    FUN_1009333f8();
    lVar5 = *(long *)(puVar1 + 0x10);
    local_98[0] = lVar4 - lVar5;
    if (-1 < local_98[0]) {
      local_98[2] = 0;
      local_98[1] = 0;
      local_98[4] = 0;
      local_98[3] = 0;
      local_98[6] = 0;
      local_98[5] = 0;
      uStack_58 = 0;
      local_98[7] = 0;
      uStack_4f = 0;
      local_57 = 0;
      uStack_50 = 0;
      FUN_100933588(local_98);
      _swift_release(lVar3);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar5;
      *unaff_x20 = (long)puVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009332c8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009332c0);
  (*pcVar2)();
}



/* Address: 0x1009332c8 | FUN_1009332c8 */

void FUN_1009332c8(void)

{
  undefined *puVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_68 [5];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x10) * 2;
  if (lVar4 < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009333e4);
    (*pcVar2)();
  }
  FUN_10090d9d8(0,lVar4,0);
  if (*(long *)(lVar3 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009333e8);
    (*pcVar2)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009333ec);
    (*pcVar2)();
  }
  _swift_retain(lVar3);
  FUN_1009339ac();
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar3 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009333f4);
      (*pcVar2)();
    }
    _swift_retain(lVar3);
    FUN_1009339ac();
    lVar5 = *(long *)(puVar1 + 0x10);
    local_68[0] = lVar4 - lVar5;
    if (-1 < local_68[0]) {
      local_68[1] = 0;
      local_68[2] = 0;
      local_68[3] = 0;
      local_68[4] = 1;
      FUN_100933b00(local_68);
      _swift_release(lVar3);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar5;
      *unaff_x20 = (long)puVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009333f8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009333f0);
  (*pcVar2)();
}



/* Address: 0x1009333f8 | FUN_1009333f8 */

void FUN_1009333f8(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  param_4 = param_4 >> 1;
  lVar5 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100933578);
    (*pcVar1)();
  }
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (!SCARRY8(lVar6,lVar5)) {
    lVar7 = lVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = lVar4;
    if (((int)lVar7 == 0) || (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < lVar6 + lVar5)) {
      FUN_10090d9bc();
      lVar4 = *unaff_x20;
      uVar3 = *(ulong *)(lVar4 + 0x18) >> 1;
    }
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar7 = uVar3 - lVar6;
    if (param_3 == param_4) {
      if (0 < lVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100933580);
        (*pcVar1)();
      }
      lVar5 = 0;
    }
    else {
      if (lVar7 < lVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100933584);
        (*pcVar1)();
      }
      puVar2 = &DAT_100fec538;
      FUN_1000f7830(&DAT_100fec538,&DAT_100c83d80);
      _swift_arrayInitWithCopy(lVar4 + lVar6 * 0x50 + 0x20,param_2 + param_3 * 0x50,lVar5,puVar2);
      if (0 < lVar5) {
        if (SCARRY8(*(long *)(lVar4 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100933588);
          (*pcVar1)();
        }
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + lVar5;
      }
    }
    if (lVar5 == lVar7) {
      local_b0 = 1;
      uStack_a0 = 0;
      local_a8 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_80 = 0;
      local_88 = 0;
      uStack_70 = 0;
      local_78 = 0;
      local_68 = 0;
      _swift_unknownObjectRelease(param_1);
      FUN_1000fb4c4(&local_b0,&DAT_100fecf30,&DAT_100c84f40);
    }
    else {
      _swift_unknownObjectRelease(param_1);
    }
    *unaff_x20 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093357c);
  (*pcVar1)();
}



/* Address: 0x100933588 | FUN_100933588 */

void FUN_100933588(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auStack_2b0 [80];
  long local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_21f;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  long local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_17f;
  long local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 local_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 local_d8;
  long local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 uStack_87;
  long local_78;
  
  lVar6 = *param_1;
  lVar8 = *unaff_x20;
  lVar7 = *(long *)(lVar8 + 0x10);
  if (SCARRY8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009339a0);
    (*pcVar2)();
  }
  lVar3 = lVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar8;
  if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar8 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar6)) {
    FUN_10090d9bc();
    lVar8 = *unaff_x20;
    uVar5 = *(ulong *)(lVar8 + 0x18) >> 1;
  }
  plVar9 = (long *)(uVar5 - *(long *)(lVar8 + 0x10));
  plVar4 = &local_d0;
  FUN_1009014b8(plVar4,lVar8 + *(long *)(lVar8 + 0x10) * 0x50 + 0x20,plVar9);
  if ((long)plVar4 < lVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009339a4);
    (*pcVar2)();
  }
  if (0 < (long)plVar4) {
    if (SCARRY8(*(long *)(lVar8 + 0x10),(long)plVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009339a8);
      (*pcVar2)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + (long)plVar4;
  }
  if (plVar4 == plVar9) {
    if (local_78 == local_d0) {
      local_120 = 1;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_100 = 0;
      local_108 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      uStack_e0 = 0;
      uStack_df = 0;
      local_e8 = 0;
      uStack_e7 = 0;
      local_d8 = 0;
    }
    else {
      lVar6 = *(long *)(lVar8 + 0x10);
      uStack_148 = uStack_a0;
      local_150 = local_a8;
      uStack_138 = uStack_90;
      uStack_140 = local_98;
      uStack_12f = (undefined7)uStack_87;
      uStack_128 = (undefined1)((ulong)uStack_87 >> 0x38);
      local_137 = uStack_8f;
      uStack_130 = uStack_88;
      uStack_168 = uStack_c0;
      local_170 = local_c8;
      uStack_158 = uStack_b0;
      uStack_160 = local_b8;
      if ((local_78 < 0) || (local_d0 <= local_78)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009339ac);
        (*pcVar2)();
      }
      local_f8 = uStack_a0;
      uStack_100 = local_a8;
      local_e8 = uStack_90;
      uStack_f0 = local_98;
      uStack_e7 = uStack_8f;
      uStack_e0 = uStack_88;
      uStack_118 = uStack_c0;
      local_120 = local_c8;
      local_108 = uStack_b0;
      uStack_110 = local_b8;
      lVar7 = local_78 + 1;
      uStack_df = uStack_12f;
      local_d8 = uStack_128;
      local_78 = lVar7;
      FUN_1009015d0(&local_170,&local_1c0);
      if (local_120 != 1) {
        puVar10 = (undefined8 *)((ulong)&local_120 | 8);
        lVar3 = local_120;
        do {
          if ((long)(*(ulong *)(lVar8 + 0x18) >> 1) < lVar6 + 1) {
            FUN_10090d9bc(1 < *(ulong *)(lVar8 + 0x18),lVar6 + 1,1);
          }
          lVar8 = *unaff_x20;
          uVar5 = *(ulong *)(lVar8 + 0x18) >> 1;
          uStack_1e8 = puVar10[5];
          local_1f0 = puVar10[4];
          uStack_1d8 = puVar10[7];
          uStack_1e0 = puVar10[6];
          local_1d0 = *(undefined1 *)(puVar10 + 8);
          uStack_208 = puVar10[1];
          local_210 = *puVar10;
          uStack_1f8 = puVar10[3];
          uStack_200 = puVar10[2];
          if (lVar6 < (long)uVar5) {
            lVar11 = 0;
            puVar12 = (undefined8 *)(lVar8 + lVar6 * 0x50 + 0x28);
            do {
              uStack_198 = local_f8;
              local_1a0 = uStack_100;
              uStack_190 = uStack_f0;
              uStack_17f = CONCAT17(local_d8,uStack_df);
              uStack_1b8 = uStack_118;
              local_1c0 = local_120;
              uStack_1a8 = local_108;
              uStack_1b0 = uStack_110;
              local_150 = uStack_1f8;
              uStack_158 = uStack_200;
              uStack_140 = uStack_1e8;
              uStack_148 = local_1f0;
              uStack_130 = (undefined1)uStack_1d8;
              uStack_12f = (undefined7)((ulong)uStack_1d8 >> 8);
              uStack_138 = (undefined1)uStack_1e0;
              local_137 = (undefined7)((ulong)uStack_1e0 >> 8);
              uStack_128 = local_1d0;
              uStack_160 = uStack_208;
              uStack_168 = local_210;
              local_170 = lVar3;
              FUN_1009015d0(&local_170,&local_260);
              FUN_1000fb4c4(&local_1c0,&DAT_100fecf30,&DAT_100c84f40);
              puVar12[-1] = lVar3;
              puVar12[5] = uStack_1e8;
              puVar12[4] = local_1f0;
              puVar12[7] = uStack_1d8;
              puVar12[6] = uStack_1e0;
              *(undefined1 *)(puVar12 + 8) = local_1d0;
              lVar1 = lVar6 + lVar11 + 1;
              puVar12[1] = uStack_208;
              *puVar12 = local_210;
              puVar12[3] = uStack_1f8;
              puVar12[2] = uStack_200;
              if ((lVar7 - local_d0) + lVar11 == 0) {
                local_120 = 1;
                puVar10[1] = 0;
                *puVar10 = 0;
                puVar10[3] = 0;
                puVar10[2] = 0;
                puVar10[5] = 0;
                puVar10[4] = 0;
                puVar10[7] = 0;
                puVar10[6] = 0;
                *(undefined1 *)(puVar10 + 8) = 0;
                *(long *)(lVar8 + 0x10) = lVar1;
                goto LAB_100933944;
              }
              uStack_238 = uStack_a0;
              local_240 = local_a8;
              uStack_230 = local_98;
              uStack_21f = uStack_87;
              uStack_258 = uStack_c0;
              local_260 = local_c8;
              uStack_248 = uStack_b0;
              uStack_250 = local_b8;
              if ((lVar7 < 0) || (local_d0 <= lVar7 + lVar11)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10093399c);
                (*pcVar2)();
              }
              local_f8 = uStack_a0;
              uStack_100 = local_a8;
              local_e8 = uStack_90;
              uStack_f0 = local_98;
              uStack_df = (undefined7)uStack_87;
              local_d8 = (undefined1)((ulong)uStack_87 >> 0x38);
              uStack_e7 = uStack_8f;
              uStack_e0 = uStack_88;
              uStack_118 = uStack_c0;
              local_120 = local_c8;
              local_108 = uStack_b0;
              uStack_110 = local_b8;
              local_78 = lVar7 + lVar11 + 1;
              FUN_1009015d0(&local_260,auStack_2b0);
              uStack_1e8 = puVar10[5];
              local_1f0 = puVar10[4];
              uStack_1d8 = puVar10[7];
              uStack_1e0 = puVar10[6];
              local_1d0 = *(undefined1 *)(puVar10 + 8);
              uStack_208 = puVar10[1];
              local_210 = *puVar10;
              uStack_1f8 = puVar10[3];
              uStack_200 = puVar10[2];
              lVar11 = lVar11 + 1;
              lVar3 = local_120;
            } while ((local_120 != 1) && (puVar12 = puVar12 + 10, lVar1 < (long)uVar5));
            lVar7 = lVar7 + lVar11;
            lVar6 = lVar6 + lVar11;
          }
          *(long *)(lVar8 + 0x10) = lVar6;
        } while (lVar3 != 1);
      }
    }
LAB_100933944:
    FUN_1000fb4c4(&local_120,&DAT_100fecf30,&DAT_100c84f40);
  }
  FUN_1000fb4c4(&local_d0,&DAT_100fecf28,&DAT_100c84f38);
  *unaff_x20 = lVar8;
  return;
}



/* Address: 0x1009339ac | FUN_1009339ac */

void FUN_1009339ac(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_4 = param_4 >> 1;
  lVar4 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100933af0);
    (*pcVar1)();
  }
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (!SCARRY8(lVar6,lVar4)) {
    lVar7 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = lVar5;
    if (((int)lVar7 == 0) || (uVar3 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar3 < lVar6 + lVar4)) {
      FUN_10090d9d8();
      lVar5 = *unaff_x20;
      uVar3 = *(ulong *)(lVar5 + 0x18) >> 1;
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar7 = uVar3 - lVar6;
    if (param_3 == param_4) {
      if (0 < lVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100933af8);
        (*pcVar1)();
      }
      lVar4 = 0;
    }
    else {
      if (lVar7 < lVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100933afc);
        (*pcVar1)();
      }
      puVar2 = &DAT_100fecf38;
      FUN_1000f7830(&DAT_100fecf38,&DAT_100c84f48);
      _swift_arrayInitWithCopy(lVar5 + lVar6 * 0x20 + 0x20,param_2 + param_3 * 0x20,lVar4,puVar2);
      if (0 < lVar4) {
        if (SCARRY8(*(long *)(lVar5 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100933b00);
          (*pcVar1)();
        }
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + lVar4;
      }
    }
    _swift_unknownObjectRelease(param_1);
    if (lVar4 == lVar7) {
      FUN_1009340dc(0,0,0,2);
    }
    *unaff_x20 = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100933af4);
  (*pcVar1)();
}



/* Address: 0x100933b00 | FUN_100933b00 */

void FUN_100933b00(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar8 = *param_1;
  lVar10 = *unaff_x20;
  lVar9 = *(long *)(lVar10 + 0x10);
  if (SCARRY8(lVar9,lVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100933e64);
    (*pcVar1)();
  }
  lVar16 = lVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar10;
  if (((int)lVar16 == 0) || (uVar4 = *(ulong *)(lVar10 + 0x18) >> 1, (long)uVar4 < lVar9 + lVar8)) {
    FUN_10090d9d8();
    lVar10 = *unaff_x20;
    uVar4 = *(ulong *)(lVar10 + 0x18) >> 1;
  }
  plVar12 = (long *)(uVar4 - *(long *)(lVar10 + 0x10));
  plVar2 = &local_90;
  FUN_100901620(plVar2,lVar10 + *(long *)(lVar10 + 0x10) * 0x20 + 0x20,plVar12);
  lVar7 = lStack_70;
  lVar3 = local_78;
  lVar16 = lStack_80;
  lVar9 = local_88;
  if ((long)plVar2 < lVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100933e68);
    (*pcVar1)();
  }
  if (0 < (long)plVar2) {
    if (SCARRY8(*(long *)(lVar10 + 0x10),(long)plVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100933e6c);
      (*pcVar1)();
    }
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + (long)plVar2;
  }
  if (plVar2 == plVar12) {
    if (local_68 == local_90) {
      lVar9 = 0;
      lVar16 = 0;
      lVar3 = 0;
      lVar11 = local_88;
      lVar13 = lStack_80;
      lVar14 = local_78;
      lVar15 = lStack_70;
    }
    else {
      if ((local_68 < 0) || (local_90 <= local_68)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100933e70);
        (*pcVar1)();
      }
      lVar5 = *(long *)(lVar10 + 0x10);
      lVar8 = local_68 + 1;
      local_68 = lVar8;
      FUN_100901b4c();
      while (lVar11 = local_88, lVar13 = lStack_80, lVar14 = local_78, lVar15 = lStack_70,
            lVar7 != 2) {
        if ((long)(*(ulong *)(lVar10 + 0x18) >> 1) < lVar5 + 1) {
          FUN_10090d9d8(1 < *(ulong *)(lVar10 + 0x18),lVar5 + 1,1);
        }
        lVar10 = *unaff_x20;
        lVar6 = lVar5;
        local_98 = lVar8;
        if ((lVar7 != 2) && (uVar4 = *(ulong *)(lVar10 + 0x18) >> 1, lVar5 < (long)uVar4)) {
          FUN_100901b4c(lVar9,lVar16,lVar3,lVar7);
          FUN_1009340dc(lVar9,lVar16,lVar3,lVar7);
          plVar2 = (long *)(lVar10 + 0x20 + lVar5 * 0x20);
          *plVar2 = lVar9;
          plVar2[1] = lVar16;
          plVar2[2] = lVar3;
          plVar2[3] = lVar7;
          lVar6 = lVar5 + 1;
          if (lVar8 == local_90) {
LAB_100933e04:
            lVar3 = 0;
            lVar16 = 0;
            lVar9 = 0;
            *(long *)(lVar10 + 0x10) = lVar6;
            break;
          }
          if ((lVar8 < 0) || (local_90 <= lVar8)) {
LAB_100933e5c:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100933e60);
            (*pcVar1)();
          }
          local_98 = lVar8 + 1;
          FUN_100901b4c(local_88,lStack_80,local_78,lStack_70);
          lVar9 = local_88;
          lVar3 = local_78;
          lVar7 = lStack_70;
          lVar16 = lStack_80;
          if ((lStack_70 != 2) && (lVar6 < (long)uVar4)) {
            plVar2 = (long *)(lVar10 + lVar5 * 0x20 + 0x58);
            do {
              FUN_100901b4c(local_88,lStack_80,local_78,lStack_70);
              FUN_1009340dc(local_88,lStack_80,local_78,lStack_70);
              plVar2[-3] = local_88;
              plVar2[-2] = lStack_80;
              lVar6 = lVar6 + 1;
              plVar2[-1] = local_78;
              *plVar2 = lStack_70;
              if (local_90 == local_98) goto LAB_100933e04;
              if ((lVar8 < 0) || (local_90 <= local_98)) goto LAB_100933e5c;
              local_98 = local_98 + 1;
              FUN_100901b4c(local_88,lStack_80,local_78,lStack_70);
              plVar2 = plVar2 + 4;
            } while (lVar6 < (long)uVar4);
          }
        }
        *(long *)(lVar10 + 0x10) = lVar6;
        lVar5 = lVar6;
        lVar8 = local_98;
      }
    }
    FUN_1009340dc(lVar9,lVar16,lVar3,2);
    local_88 = lVar11;
    lStack_80 = lVar13;
    local_78 = lVar14;
    lStack_70 = lVar15;
  }
  FUN_1009340ac(local_88,lStack_80,local_78,lStack_70);
  *unaff_x20 = lVar10;
  return;
}



/* Address: 0x100933e70 | FUN_100933e70 */

void FUN_100933e70(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulong)*(byte *)(param_2 + 1);
  FUN_100630328(uVar1,uVar2);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100933ec0 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  FUN_100653eac();
  return;
}



/* Address: 0x100933ec4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x100933ec8 | FUN_100933ec8 */

void FUN_100933ec8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100931968(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100933ee4 | FUN_100933ee4 */

undefined8 FUN_100933ee4(undefined8 param_1,undefined8 param_2)

{
  FUN_100931ab8(param_2,param_1,&DAT_100f18978);
  return param_2;
}



/* Address: 0x100933f18 | FUN_100933f18 */

undefined8 FUN_100933f18(undefined8 param_1)

{
  thunk_FUN_1009341d4(param_1,&DAT_100f18978);
  return param_1;
}



/* Address: 0x100933f44 | FUN_100933f44 */

void FUN_100933f44(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_release();
    _swift_errorRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x100933f70 | FUN_100933f70 */

void FUN_100933f70(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_retain();
    _swift_errorRetain(param_2);
    return;
  }
  return;
}



/* Address: 0x100933f9c | FUN_100933f9c */

void FUN_100933f9c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100933fc8 | FUN_100933fc8 */

void FUN_100933fc8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100933ff4 | FUN_100933ff4 */

void FUN_100933ff4(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = param_2[1];
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100934074);
    (*pcVar2)();
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100934078);
    (*pcVar2)();
  }
  if ((char)param_2[4] == '\x01') {
    uVar4 = 0x200000000000000;
  }
  else {
    uVar4 = *(long *)(*param_2 + 0x10) - 1U & param_2[3] + uVar3;
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10093407c);
      (*pcVar2)();
    }
    if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100934080);
      (*pcVar2)();
    }
    uVar1 = 0;
    if ((long)uVar3 <= (long)uVar4) {
      uVar1 = 0x100000000000000;
    }
    uVar4 = uVar4 | uVar1 | 0xffffff00000000;
  }
  lVar5 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar5;
  param_1[3] = lVar7;
  param_1[2] = lVar6;
  lVar5 = param_2[4];
  lVar7 = param_2[7];
  lVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = lVar5;
  param_1[7] = lVar7;
  param_1[6] = lVar6;
  *(int *)(param_1 + 8) = (int)uVar3;
  *(undefined4 *)((long)param_1 + 0x44) = 0x1ffffff;
  param_1[9] = uVar4;
  return;
}



/* Address: 0x100934080 | FUN_100934080 */

undefined8 FUN_100934080(undefined8 param_1)

{
  thunk_FUN_1009341d4(param_1,&DAT_100f18c88);
  return param_1;
}



/* Address: 0x1009340ac | FUN_1009340ac */

void FUN_1009340ac(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    return;
  }
  FUN_10000c650();
  _swift_release(in_x3);
  return;
}



/* Address: 0x1009340dc | FUN_1009340dc */

void FUN_1009340dc(void)

{
  long in_x3;
  
  if (in_x3 == 2) {
    return;
  }
  FUN_1009340ac();
  return;
}



/* Address: 0x1009340ec | FUN_1009340ec */

undefined * FUN_1009340ec(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [80];
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009341d0);
    (*pcVar1)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    CVar2.unknown = &DAT_100fec538;
    FUN_1000f7830(&DAT_100fec538,&DAT_100c83d80);
    _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(param_2,CVar2);
    *(long *)(_Var3.unknown + 0x10) = param_2;
    uVar5 = *param_1;
    *(undefined8 *)(_Var3.unknown + 0x28) = param_1[1];
    *(undefined8 *)(_Var3.unknown + 0x20) = uVar5;
    uVar9 = param_1[5];
    uVar8 = param_1[4];
    uVar6 = param_1[7];
    uVar5 = param_1[6];
    uVar7 = *(undefined8 *)((long)param_1 + 0x39);
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    *(undefined8 *)(_Var3.unknown + 0x61) = *(undefined8 *)((long)param_1 + 0x41);
    *(undefined8 *)(_Var3.unknown + 0x59) = uVar7;
    *(undefined8 *)(_Var3.unknown + 0x48) = uVar9;
    *(undefined8 *)(_Var3.unknown + 0x40) = uVar8;
    *(undefined8 *)(_Var3.unknown + 0x58) = uVar6;
    *(undefined8 *)(_Var3.unknown + 0x50) = uVar5;
    *(undefined8 *)(_Var3.unknown + 0x38) = uVar11;
    *(undefined8 *)(_Var3.unknown + 0x30) = uVar10;
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      puVar4 = (undefined8 *)(_Var3.unknown + 0x70);
      do {
        FUN_1009015d0(param_1,auStack_80);
        uVar5 = *param_1;
        puVar4[1] = param_1[1];
        *puVar4 = uVar5;
        uVar6 = param_1[3];
        uVar5 = param_1[2];
        uVar8 = param_1[5];
        uVar7 = param_1[4];
        uVar10 = param_1[7];
        uVar9 = param_1[6];
        uVar11 = *(undefined8 *)((long)param_1 + 0x39);
        *(undefined8 *)((long)puVar4 + 0x41) = *(undefined8 *)((long)param_1 + 0x41);
        *(undefined8 *)((long)puVar4 + 0x39) = uVar11;
        puVar4[5] = uVar8;
        puVar4[4] = uVar7;
        puVar4[7] = uVar10;
        puVar4[6] = uVar9;
        puVar4[3] = uVar6;
        puVar4[2] = uVar5;
        puVar4 = puVar4 + 10;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    FUN_1009015d0(param_1,auStack_80);
  }
  return _Var3.unknown;
}



/* Address: 0x1009341d0 | thunk_FUN_1009341d4 */

void thunk_FUN_1009341d4(undefined8 *param_1)

{
  _swift_release(*param_1);
  if (((param_1[7] ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  _swift_release(param_1[7] & 0x3fffffffffffffff);
  return;
}



/* Address: 0x1009341d4 | FUN_1009341d4 */

void FUN_1009341d4(undefined8 *param_1)

{
  _swift_release(*param_1);
  if (((param_1[7] ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  _swift_release(param_1[7] & 0x3fffffffffffffff);
  return;
}



/* Address: 0x100934218 | FUN_100934218 */

undefined8 * FUN_100934218(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar1 = param_2[7];
  _swift_retain();
  if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    _swift_retain(uVar1 & 0x3fffffffffffffff);
  }
  param_1[7] = uVar1;
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  return param_1;
}



/* Address: 0x100934294 | FUN_100934294 */

undefined8 * FUN_100934294(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar2);
  puVar3 = param_1 + 7;
  uVar4 = *puVar3;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar2 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar2;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar1 = param_2[7];
  if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if ((uVar1 & 0xf000000000000007) != 0xf000000000000007) {
      *puVar3 = uVar1;
      _swift_retain(uVar1 & 0x3fffffffffffffff);
      goto LAB_100934358;
    }
  }
  else {
    if ((uVar1 & 0xf000000000000007) != 0xf000000000000007) {
      *puVar3 = uVar1;
      _swift_retain(uVar1 & 0x3fffffffffffffff);
      _swift_release(uVar4 & 0x3fffffffffffffff);
      goto LAB_100934358;
    }
    FUN_1008d444c(puVar3);
    uVar1 = param_2[7];
  }
  *puVar3 = uVar1;
LAB_100934358:
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)((long)param_1 + 0x44) = *(undefined2 *)((long)param_2 + 0x44);
  *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
  *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  param_1[9] = param_2[9];
  return param_1;
}



/* Address: 0x100934394 | FUN_100934394 */

void FUN_100934394(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x1009343b0 | FUN_1009343b0 */

undefined8 * FUN_1009343b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  uVar1 = param_2[1];
  puVar3 = param_1 + 7;
  uVar2 = *puVar3;
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar4 = param_2[7];
  if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      *puVar3 = uVar4;
      _swift_release(uVar2 & 0x3fffffffffffffff);
      goto LAB_100934434;
    }
    FUN_1008d444c(puVar3);
  }
  *puVar3 = uVar4;
LAB_100934434:
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)((long)param_1 + 0x44) = *(undefined2 *)((long)param_2 + 0x44);
  *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
  *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  param_1[9] = param_2[9];
  return param_1;
}



/* Address: 0x100934470 | FUN_100934470 */

undefined1  [16] FUN_100934470(void)

{
  return ZEXT816(0x100f18c88);
}



/* Address: 0x100934480 | FUN_100934480 */

void FUN_100934480(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[3]);
  if (((param_1[4] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    _swift_release(param_1[4] & 0x3fffffffffffffff);
  }
  if ((*(char *)(param_1 + 5) != '\x04') &&
     (((param_1[6] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    _swift_release(param_1[6] & 0x3fffffffffffffff);
    return;
  }
  return;
}



/* Address: 0x1009344f0 | FUN_1009344f0 */

undefined8 * FUN_1009344f0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
  uVar3 = param_2[3];
  uVar2 = param_2[4];
  param_1[3] = uVar3;
  _swift_retain();
  _swift_retain(uVar3);
  if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    _swift_retain(uVar2 & 0x3fffffffffffffff);
  }
  param_1[4] = uVar2;
  cVar1 = *(char *)(param_2 + 5);
  if (cVar1 == '\x04') {
    uVar3 = param_2[5];
    uVar5 = param_2[8];
    uVar4 = param_2[7];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[8] = uVar5;
    param_1[7] = uVar4;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  }
  else {
    *(char *)(param_1 + 5) = cVar1;
    uVar2 = param_2[6];
    if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      uVar2 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar2;
    }
    else {
      uVar3 = param_2[7];
      param_1[6] = uVar2;
      param_1[7] = uVar3;
      _swift_retain(uVar2 & 0x3fffffffffffffff);
    }
    param_1[8] = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  }
  return param_1;
}



/* Address: 0x1009345dc | FUN_1009345dc */

undefined8 * FUN_1009345dc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar4);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar4);
  puVar5 = param_1 + 4;
  uVar7 = *puVar5;
  uVar3 = param_2[4];
  if (((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if ((uVar3 & 0xf000000000000007) == 0xf000000000000007) {
LAB_100934698:
      *puVar5 = uVar3;
    }
    else {
      *puVar5 = uVar3;
      _swift_retain(uVar3 & 0x3fffffffffffffff);
    }
  }
  else {
    if ((uVar3 & 0xf000000000000007) == 0xf000000000000007) {
      FUN_1008d444c(puVar5);
      uVar3 = param_2[4];
      goto LAB_100934698;
    }
    *puVar5 = uVar3;
    _swift_retain(uVar3 & 0x3fffffffffffffff);
    _swift_release(uVar7 & 0x3fffffffffffffff);
  }
  pcVar6 = (char *)(param_1 + 5);
  pcVar8 = (char *)(param_2 + 5);
  cVar1 = *pcVar8;
  if (*pcVar6 == '\x04') {
    if (cVar1 == '\x04') {
      uVar9 = param_2[6];
      uVar4 = *(undefined8 *)pcVar8;
      uVar11 = param_2[8];
      uVar10 = param_2[7];
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      param_1[6] = uVar9;
      *(undefined8 *)pcVar6 = uVar4;
      param_1[8] = uVar11;
      param_1[7] = uVar10;
      return param_1;
    }
    *(char *)(param_1 + 5) = cVar1;
    uVar3 = param_2[6];
    if (((uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      uVar3 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar3;
      goto LAB_1009347bc;
    }
LAB_10093476c:
    param_1[6] = uVar3;
    param_1[7] = param_2[7];
    _swift_retain(uVar3 & 0x3fffffffffffffff);
  }
  else {
    if (cVar1 == '\x04') {
      FUN_1000fb4c4(pcVar6,&DAT_100fecf90,&DAT_100c84fe0);
      uVar2 = *(undefined1 *)(param_2 + 9);
      uVar10 = *(undefined8 *)pcVar8;
      uVar9 = param_2[8];
      uVar4 = param_2[7];
      param_1[6] = param_2[6];
      *(undefined8 *)pcVar6 = uVar10;
      param_1[8] = uVar9;
      param_1[7] = uVar4;
      *(undefined1 *)(param_1 + 9) = uVar2;
      return param_1;
    }
    puVar5 = param_1 + 6;
    uVar7 = *puVar5;
    *(char *)(param_1 + 5) = cVar1;
    uVar3 = param_2[6];
    if (((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      if ((uVar3 & 0xf000000000000007) != 0xf000000000000007) goto LAB_10093476c;
    }
    else {
      if ((uVar3 & 0xf000000000000007) != 0xf000000000000007) {
        param_1[6] = uVar3;
        _swift_retain(uVar3 & 0x3fffffffffffffff);
        _swift_release(uVar7 & 0x3fffffffffffffff);
        param_1[7] = param_2[7];
        goto LAB_1009347bc;
      }
      FUN_1009347e4(puVar5);
    }
    uVar3 = param_2[6];
    param_1[7] = param_2[7];
    *puVar5 = uVar3;
  }
LAB_1009347bc:
  uVar4 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar4;
  return param_1;
}



/* Address: 0x1009347e4 | FUN_1009347e4 */

undefined8 FUN_1009347e4(undefined8 param_1)

{
  FUN_1005d9d28();
  return param_1;
}



/* Address: 0x100934818 | FUN_100934818 */

undefined8 * FUN_100934818(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_release(uVar1);
  puVar3 = param_1 + 4;
  uVar2 = *puVar3;
  uVar5 = param_2[4];
  if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
LAB_100934898:
    *puVar3 = uVar5;
  }
  else {
    if (((uVar5 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      FUN_1008d444c(puVar3);
      goto LAB_100934898;
    }
    *puVar3 = uVar5;
    _swift_release(uVar2 & 0x3fffffffffffffff);
  }
  pcVar4 = (char *)(param_1 + 5);
  if (*pcVar4 == '\x04') {
LAB_1009348e0:
    uVar1 = param_2[5];
    uVar7 = param_2[8];
    uVar6 = param_2[7];
    param_1[6] = param_2[6];
    *(undefined8 *)pcVar4 = uVar1;
    param_1[8] = uVar7;
    param_1[7] = uVar6;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    return param_1;
  }
  if (*(char *)(param_2 + 5) == '\x04') {
    FUN_1000fb4c4(pcVar4,&DAT_100fecf90,&DAT_100c84fe0);
    goto LAB_1009348e0;
  }
  puVar3 = param_1 + 6;
  uVar2 = *puVar3;
  *(char *)(param_1 + 5) = *(char *)(param_2 + 5);
  if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if (((param_2[6] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      param_1[6] = param_2[6];
      _swift_release(uVar2 & 0x3fffffffffffffff);
      param_1[7] = param_2[7];
      goto LAB_100934944;
    }
    FUN_1009347e4(puVar3);
  }
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  *puVar3 = uVar2;
LAB_100934944:
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Address: 0x100934968 | FUN_100934968 */

int FUN_100934968(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1009349b0 | FUN_1009349b0 */

void FUN_1009349b0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x49) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x49) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100934a04 | FUN_100934a04 */

undefined1  [16] FUN_100934a04(void)

{
  return ZEXT816(0x100f18d10);
}



/* Address: 0x100934a14 | thunk_FUN_100934a18 */

void thunk_FUN_100934a18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecf98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85008;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85008,&DAT_100f18c88);
  DAT_100fecf98 = pTVar1;
  return;
}



/* Address: 0x100934a18 | FUN_100934a18 */

void FUN_100934a18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecf98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85008;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85008,&DAT_100f18c88);
  DAT_100fecf98 = pTVar1;
  return;
}



/* Address: 0x100934a58 | FUN_100934a58 */

void FUN_100934a58(void)

{
  FUN_100933ec8();
  return;
}



/* Address: 0x100934a6c | thunk_FUN_10090f070 */

void thunk_FUN_10090f070(void)

{
  long unaff_x20;
  
  FUN_100933e70(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x100934a70 | thunk_FUN_1009341d4 */

void thunk_FUN_1009341d4(void)

{
  thunk_FUN_1009341d4();
  return;
}



/* Address: 0x100934a74 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}


