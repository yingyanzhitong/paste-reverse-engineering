/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100672450 | FUN_100672450 */

void FUN_100672450(void)

{
  FUN_100672f5c();
  return;
}



/* Address: 0x100672464 | FUN_100672464 */

/* WARNING: Removing unreachable block (ram,0x0001006725c4) */

String FUN_100672464(void)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  __int64 _Var4;
  UnsafePointer<__int8> cString;
  UnsafePointer<__int8> UVar5;
  long lVar6;
  ulong unsafeUninitializedCapacity;
  String SVar7;
  
  bVar2 = Swift::Collection::get_isEmpty();
  if (bVar2) {
    SVar7 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    _Var4 = Swift::Collection::get_count();
    if (SCARRY8(_Var4,2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006725bc);
      (*pcVar1)();
    }
    lVar6 = SUB168(SEXT816(_Var4 + 2) * SEXT816(0x5555555555555556),8);
    lVar6 = lVar6 - (lVar6 >> 0x3f);
    if (lVar6 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006725c0);
      (*pcVar1)();
    }
    unsafeUninitializedCapacity = lVar6 * 4;
    FUN_1000f7830(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30 + 0x40,&DAT_100c6cc80);
    _swift_initStaticObject();
    bVar3 = Swift::_stdlib_isOSVersionAtLeast(0xb,0,0);
    if ((bVar3 & 1) == 0) {
      cString.unknown = (undefined *)(unsafeUninitializedCapacity | 1);
      _swift_slowAlloc(cString.unknown,0xffffffffffffffff);
      UVar5.unknown = cString.unknown;
      FUN_100672618();
      if ((long)unsafeUninitializedCapacity < (long)UVar5.unknown) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006725c4);
        (*pcVar1)();
      }
      cString.unknown[(long)UVar5.unknown] = 0;
      SVar7 = Swift::String::init(cString);
      _swift_slowDealloc(cString.unknown,0xffffffffffffffff,0xffffffffffffffff);
    }
    else {
      SVar7 = Swift::String::_init(unsafeUninitializedCapacity);
    }
  }
  return SVar7;
}



/* Address: 0x1006725d8 | FUN_1006725d8 */

undefined8 * FUN_1006725d8(void)

{
  if (DAT_1010b6960 != -1) {
    _swift_once(&DAT_1010b6960,FUN_100672c50);
  }
  return &DAT_101057c38;
}



/* Address: 0x100672618 | FUN_100672618 */

long FUN_100672618(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long local_80;
  byte local_56;
  char local_55;
  byte local_54;
  char local_53;
  byte local_52;
  char local_51;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  lVar10 = *(long *)(param_5 + -8);
  lVar12 = (long)&local_80 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = *(undefined8 *)(param_6 + 8);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar13,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_80 = *(long *)(lVar5 + -8);
  lVar7 = *(long *)(local_80 + 0x40);
  (**(code **)(lVar10 + 0x10))(lVar12,param_3,param_5);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (uVar13,param_5,lVar5,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  lVar11 = 0;
  lVar10 = param_4 + 0x20;
  do {
    Swift::IteratorProtocol::_next();
    if (local_51 == '\x01') {
      (**(code **)(local_80 + 8))(lVar12 - (lVar7 + 0xfU & 0xfffffffffffffff0),lVar5);
      return lVar11;
    }
    Swift::IteratorProtocol::_next();
    Swift::IteratorProtocol::_next();
    uVar8 = *(ulong *)(param_4 + 0x10);
    if (uVar8 <= local_52 >> 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100672848);
      (*pcVar3)();
    }
    *(undefined1 *)(param_1 + lVar11) = *(undefined1 *)(lVar10 + (ulong)(local_52 >> 2));
    uVar1 = 0;
    if (local_53 != '\x01') {
      uVar1 = (uint)(local_54 >> 4);
    }
    uVar9 = (ulong)(uVar1 | (local_52 & 3) << 4);
    if (uVar8 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10067284c);
      (*pcVar3)();
    }
    *(undefined1 *)(param_1 + lVar11 + 1) = *(undefined1 *)(lVar10 + uVar9);
    if (local_53 == '\x01') {
      uVar6 = 0x3d;
    }
    else {
      uVar1 = 0;
      if (local_55 != '\x01') {
        uVar1 = (uint)(local_56 >> 6);
      }
      uVar9 = (ulong)(uVar1 | (local_54 & 0xf) << 2);
      if (uVar8 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100672854);
        (*pcVar3)();
      }
      uVar6 = *(undefined1 *)(lVar10 + uVar9);
    }
    *(undefined1 *)(param_1 + lVar11 + 2) = uVar6;
    if (local_55 == '\x01') {
      uVar6 = 0x3d;
    }
    else {
      if (uVar8 <= ((ulong)local_56 & 0x3f)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100672858);
        (*pcVar3)();
      }
      uVar6 = *(undefined1 *)(lVar10 + ((ulong)local_56 & 0x3f));
    }
    *(undefined1 *)(param_1 + lVar11 + 3) = uVar6;
    bVar4 = SCARRY8(lVar11,4);
    lVar11 = lVar11 + 4;
  } while (!bVar4);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100672850);
  (*pcVar3)();
}



/* Address: 0x100672858 | FUN_100672858 */

undefined1 FUN_100672858(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_2 >> 2 & 0x3f;
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    return *(undefined1 *)(param_1 + uVar2 + 0x20);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100672878);
  (*pcVar1)();
}



/* Address: 0x100672878 | FUN_100672878 */

undefined1 FUN_100672878(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if ((param_3 & 0xff00) != 0x100) {
    uVar1 = param_3 >> 4 & 0xf;
  }
  uVar3 = (ulong)(uVar1 | (param_2 & 3) << 4);
  if (uVar3 < *(ulong *)(param_1 + 0x10)) {
    return *(undefined1 *)(param_1 + uVar3 + 0x20);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006728a8);
  (*pcVar2)();
}



/* Address: 0x1006728a8 | FUN_1006728a8 */

undefined1 FUN_1006728a8(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  
  if ((param_2 & 0xff00) == 0x100) {
    return 0x3d;
  }
  uVar1 = 0;
  if ((param_3 & 0xff00) != 0x100) {
    uVar1 = param_3 >> 6 & 3;
  }
  uVar3 = (ulong)(uVar1 | (param_2 & 0xf) << 2);
  if (uVar3 < *(ulong *)(param_1 + 0x10)) {
    return *(undefined1 *)(param_1 + uVar3 + 0x20);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006728ec);
  (*pcVar2)();
}



/* Address: 0x1006728ec | FUN_1006728ec */

undefined1 FUN_1006728ec(long param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 & 0xff00) == 0x100) {
    return 0x3d;
  }
  uVar2 = (ulong)(param_2 & 0xffff) & 0x3f;
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    return *(undefined1 *)(param_1 + uVar2 + 0x20);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100672924);
  (*pcVar1)();
}



/* Address: 0x100672924 | FUN_100672924 */

void FUN_100672924(__int64 param_1,code *param_2)

{
  code *pcVar1;
  byte bVar2;
  UnsafePointer<__int8> cString;
  UnsafePointer<__int8> UVar3;
  long unaff_x21;
  
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xb,0,0);
  if ((bVar2 & 1) == 0) {
    cString.unknown = (undefined *)(param_1 + 1);
    if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100672a10);
      (*pcVar1)();
    }
    _swift_slowAlloc(cString.unknown,0xffffffffffffffff);
    UVar3.unknown = cString.unknown;
    (*param_2)();
    if (unaff_x21 == 0) {
      if (param_1 < (long)UVar3.unknown) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100672a14);
        (*pcVar1)();
      }
      cString.unknown[(long)UVar3.unknown] = 0;
      Swift::String::init(cString);
      _swift_slowDealloc(cString.unknown,0xffffffffffffffff,0xffffffffffffffff);
    }
    else {
      _swift_slowDealloc(cString.unknown,0xffffffffffffffff,0xffffffffffffffff);
    }
  }
  else {
    Swift::String::_init(param_1);
  }
  return;
}



/* Address: 0x100672a14 | FUN_100672a14 */

undefined * FUN_100672a14(UTF8View param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  __uint8 _Var4;
  Index position;
  UnsafeBufferPointer<__int8> UVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  Index after;
  undefined *local_70;
  ulong uStack_68;
  
  uVar8 = param_2 >> 0x38 & 0xf;
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar6 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar6 = uVar8;
    }
  }
  else {
    uVar6 = Swift::String::UTF8View::_foreignCount(param_1);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    FUN_100672d5c(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100672c48);
      (*pcVar3)();
    }
    uVar7 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar7 = 1;
    }
    uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = uVar8;
    }
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      while( true ) {
        position.cmsgPointer.unknown = after.cmsgPointer.unknown;
        if (((ulong)after.cmsgPointer.unknown & 0xc) == 4L << uVar7) {
          FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        }
        uVar8 = (ulong)position.cmsgPointer.unknown >> 0x10;
        if (uVar1 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100672c20);
          (*pcVar3)();
        }
        if ((param_2 >> 0x3c & 1) == 0) {
          if ((param_2 >> 0x3d & 1) == 0) {
            UVar5.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
            if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
              UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
            }
            _Var4 = UVar5.unknown[uVar8];
          }
          else {
            local_70 = param_1.unknown;
            uStack_68 = param_2 & 0xffffffffffffff;
            _Var4 = *(__uint8 *)((long)&local_70 + uVar8);
          }
        }
        else {
          _Var4 = Swift::String::UTF8View::_foreignSubscript(position,param_1);
        }
        uVar8 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar8) {
          FUN_100672d5c(1 < *(ulong *)(puVar2 + 0x18),uVar8 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar8 + 1;
        puVar2[uVar8 + 0x20] = _Var4;
        if (((ulong)after.cmsgPointer.unknown & 0xc) != 4L << uVar7) break;
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_100672ac0;
LAB_100672b5c:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100672c24);
          (*pcVar3)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,param_1);
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return puVar2;
        }
      }
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_100672b5c;
LAB_100672ac0:
      after.cmsgPointer.unknown =
           (UnsafeMutablePointer)(((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004)
      ;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return puVar2;
}



/* Address: 0x100672c48 | FUN_100672c48 */

undefined8 FUN_100672c48(void)

{
  return 0x3d;
}



/* Address: 0x100672c50 | FUN_100672c50 */

void FUN_100672c50(void)

{
  char *pcVar1;
  
  pcVar1 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30 + 0x40;
  FUN_1000f7830(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30 + 0x40,&DAT_100c6cc80);
  _swift_initStaticObject();
  DAT_101057c38 = pcVar1;
  return;
}



/* Address: 0x100672c88 | FUN_100672c88 */

void FUN_100672c88(void)

{
  FUN_1000f7830(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30 + 0x40,&DAT_100c6cc80);
  _swift_initStaticObject();
  return;
}



/* Address: 0x100672cb4 | FUN_100672cb4 */

String FUN_100672cb4(char *param_1,code *param_2)

{
  code *pcVar1;
  UnsafePointer<__int8> cString;
  UnsafePointer<__int8> UVar2;
  void *unaff_x21;
  String SVar3;
  
  cString.unknown = param_1 + 1;
  if (SCARRY8((long)param_1,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100672d58);
    (*pcVar1)();
  }
  SVar3.bridgeObject = unaff_x21;
  SVar3.str = param_1;
  _swift_slowAlloc(cString.unknown,0xffffffffffffffff);
  UVar2.unknown = cString.unknown;
  (*param_2)();
  if (unaff_x21 == (void *)0x0) {
    if ((long)param_1 < (long)UVar2.unknown) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100672d5c);
      (*pcVar1)();
    }
    cString.unknown[(long)UVar2.unknown] = 0;
    SVar3 = Swift::String::init(cString);
  }
  _swift_slowDealloc(cString.unknown,0xffffffffffffffff,0xffffffffffffffff);
  return SVar3;
}



/* Address: 0x100672d5c | FUN_100672d5c */

void FUN_100672d5c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100672d78();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100672d78 | FUN_100672d78 */

char * FUN_100672d78(ulong param_1,ulong param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100672e68);
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
  pcVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    pcVar3 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30 + 0x40;
    FUN_1000f7830(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30 + 0x40,&DAT_100c6cc80);
    _swift_allocObject();
    pcVar4 = pcVar3;
    _malloc_size();
    *(size_t *)(pcVar3 + 0x10) = sVar6;
    *(long *)(pcVar3 + 0x18) = (long)pcVar4 * 2 + -0x40;
  }
  pcVar4 = pcVar3 + 0x20;
  pcVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(pcVar4,pcVar1,sVar6);
  }
  else {
    if (pcVar3 != param_4 || pcVar1 + sVar6 <= pcVar4) {
      _memmove(pcVar4,pcVar1,sVar6);
    }
    param_4[0x10] = '\0';
    param_4[0x11] = '\0';
    param_4[0x12] = '\0';
    param_4[0x13] = '\0';
    param_4[0x14] = '\0';
    param_4[0x15] = '\0';
    param_4[0x16] = '\0';
    param_4[0x17] = '\0';
  }
  _swift_release(param_4);
  return pcVar3;
}



/* Address: 0x100672e68 | FUN_100672e68 */

char * FUN_100672e68(ulong param_1,ulong param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100672f58);
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
  pcVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    pcVar3 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30 + 0x40;
    FUN_1000f7830(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30 + 0x40,&DAT_100c6cc80);
    _swift_allocObject();
    pcVar4 = pcVar3;
    _malloc_size();
    *(size_t *)(pcVar3 + 0x10) = sVar6;
    *(long *)(pcVar3 + 0x18) = (long)pcVar4 * 2 + -0x40;
  }
  pcVar4 = pcVar3 + 0x20;
  pcVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(pcVar4,pcVar1,sVar6);
  }
  else {
    if (pcVar3 != param_4 || pcVar1 + sVar6 <= pcVar4) {
      _memmove(pcVar4,pcVar1,sVar6);
    }
    param_4[0x10] = '\0';
    param_4[0x11] = '\0';
    param_4[0x12] = '\0';
    param_4[0x13] = '\0';
    param_4[0x14] = '\0';
    param_4[0x15] = '\0';
    param_4[0x16] = '\0';
    param_4[0x17] = '\0';
  }
  _swift_bridgeObjectRelease(param_4);
  return pcVar3;
}



/* Address: 0x100672f58 | thunk_FUN_100672464 */

/* WARNING: Removing unreachable block (ram,0x0001006725c4) */

String thunk_FUN_100672464(void)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  __int64 _Var4;
  UnsafePointer<__int8> cString;
  UnsafePointer<__int8> UVar5;
  long lVar6;
  ulong unsafeUninitializedCapacity;
  String SVar7;
  
  bVar2 = Swift::Collection::get_isEmpty();
  if (bVar2) {
    SVar7 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    _Var4 = Swift::Collection::get_count();
    if (SCARRY8(_Var4,2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006725bc);
      (*pcVar1)();
    }
    lVar6 = SUB168(SEXT816(_Var4 + 2) * SEXT816(0x5555555555555556),8);
    lVar6 = lVar6 - (lVar6 >> 0x3f);
    if (lVar6 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006725c0);
      (*pcVar1)();
    }
    unsafeUninitializedCapacity = lVar6 * 4;
    FUN_1000f7830(s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30 + 0x40,&DAT_100c6cc80);
    _swift_initStaticObject();
    bVar3 = Swift::_stdlib_isOSVersionAtLeast(0xb,0,0);
    if ((bVar3 & 1) == 0) {
      cString.unknown = (undefined *)(unsafeUninitializedCapacity | 1);
      _swift_slowAlloc(cString.unknown,0xffffffffffffffff);
      UVar5.unknown = cString.unknown;
      FUN_100672618();
      if ((long)unsafeUninitializedCapacity < (long)UVar5.unknown) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006725c4);
        (*pcVar1)();
      }
      cString.unknown[(long)UVar5.unknown] = 0;
      SVar7 = Swift::String::init(cString);
      _swift_slowDealloc(cString.unknown,0xffffffffffffffff,0xffffffffffffffff);
    }
    else {
      SVar7 = Swift::String::_init(unsafeUninitializedCapacity);
    }
  }
  return SVar7;
}



/* Address: 0x100672f5c | FUN_100672f5c */

undefined * FUN_100672f5c(char *param_1,void *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *unaff_x21;
  long lVar10;
  ulong uVar11;
  long lVar12;
  String SVar13;
  
  SVar13.bridgeObject = param_2;
  SVar13.str = param_1;
  puVar5 = (undefined1 *)Swift::String::get_count(SVar13);
  if (((ulong)puVar5 & 3) == 0) {
    FUN_100672a14(param_1,param_2);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
      _swift_bridgeObjectRelease();
      unaff_x21 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      unaff_x21 = PTR___swiftEmptyArrayStorage_100eae0d8;
      uVar11 = 0;
      do {
        bVar4 = SCARRY8(uVar11,4);
        uVar1 = uVar11 + 4;
        if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100673318);
          (*pcVar3)();
        }
        lVar10 = 0;
        while (puVar6 = unaff_x21,
              s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30[lVar10] != param_1[uVar11 + 0x20]) {
          lVar10 = lVar10 + 1;
          if (lVar10 == 0x40) goto LAB_100673298;
        }
        if (*(ulong *)(param_1 + 0x10) <= uVar11 + 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10067331c);
          (*pcVar3)();
        }
        lVar12 = 0;
        while (s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30[lVar12] != param_1[uVar11 + 0x21]) {
          lVar12 = lVar12 + 1;
          if (lVar12 == 0x40) goto LAB_100673298;
        }
        _swift_isUniquelyReferenced_nonNull_native();
        puVar7 = unaff_x21;
        if (((ulong)puVar6 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          FUN_100672e68(0,*(long *)(unaff_x21 + 0x10) + 1,1,unaff_x21);
        }
        uVar2 = *(ulong *)(puVar7 + 0x10);
        uVar9 = uVar2 + 1;
        puVar6 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          FUN_100672e68(puVar6,uVar9,1,puVar7);
        }
        *(ulong *)(puVar6 + 0x10) = uVar9;
        puVar6[uVar2 + 0x20] = ((byte)((uint)lVar12 >> 4) & 0xf) + (char)((int)lVar10 << 2);
        if (*(ulong *)(param_1 + 0x10) <= uVar11 + 2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100673320);
          (*pcVar3)();
        }
        if (param_1[uVar11 + 0x22] != '=') {
          lVar10 = 0;
          while (s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30[lVar10] != param_1[uVar11 + 0x22]) {
            lVar10 = lVar10 + 1;
            if (lVar10 == 0x40) goto LAB_100673298;
          }
          uVar9 = uVar2 + 2;
          puVar7 = puVar6;
          if ((long)(*(ulong *)(puVar6 + 0x18) >> 1) < (long)uVar9) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            FUN_100672e68(puVar7,uVar9,1,puVar6);
          }
          *(ulong *)(puVar7 + 0x10) = uVar9;
          puVar7[uVar2 + 0x21] = ((byte)((uint)lVar10 >> 2) & 0x3f) + (char)((uint)lVar12 << 4);
          puVar6 = puVar7;
        }
        if (*(ulong *)(param_1 + 0x10) <= uVar11 + 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100673324);
          (*pcVar3)();
        }
        unaff_x21 = puVar6;
        if (param_1[uVar11 + 0x23] != '=') {
          lVar10 = 0;
          while (s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30[lVar10] != param_1[uVar11 + 0x23]) {
            lVar10 = lVar10 + 1;
            if (lVar10 == 0x40) goto LAB_100673298;
          }
          lVar12 = 0;
          while (s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_100fd9c30[lVar12] != param_1[uVar11 + 0x22]) {
            lVar12 = lVar12 + 1;
            if (lVar12 == 0x40) {
LAB_100673298:
              _swift_bridgeObjectRelease();
              FUN_1006733b4();
              _swift_allocError(&DAT_100ef46d8,param_1,0,0);
              *param_1 = '\x01';
              _swift_willThrow();
              _swift_bridgeObjectRelease(puVar6);
              return puVar6;
            }
          }
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
            unaff_x21 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            FUN_100672e68(unaff_x21,uVar9 + 1,1,puVar6);
          }
          *(ulong *)(unaff_x21 + 0x10) = uVar9 + 1;
          unaff_x21[uVar9 + 0x20] = (char)lVar10 + (char)lVar12 * '@';
        }
        uVar11 = uVar1;
      } while ((long)uVar1 < lVar8 && !bVar4);
      _swift_bridgeObjectRelease();
    }
  }
  else {
    FUN_1006733b4();
    _swift_allocError(&DAT_100ef46d8,puVar5,0,0);
    *puVar5 = 0;
    _swift_willThrow();
  }
  return unaff_x21;
}



/* Address: 0x100673324 | FUN_100673324 */

void FUN_100673324(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100672618(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100673340 | thunk_FUN_100673344 */

void thunk_FUN_100673344(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd9c78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6cc88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6cc88,&DAT_100ef46d8);
  DAT_100fd9c78 = pTVar1;
  return;
}



/* Address: 0x100673344 | FUN_100673344 */

void FUN_100673344(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd9c78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6cc88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6cc88,&DAT_100ef46d8);
  DAT_100fd9c78 = pTVar1;
  return;
}



/* Address: 0x100673384 | FUN_100673384 */

void FUN_100673384(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100673390 | FUN_100673390 */

void FUN_100673390(void)

{
  return;
}



/* Address: 0x100673394 | FUN_100673394 */

undefined1  [16] FUN_100673394(void)

{
  return ZEXT816(0x100ef46d8);
}



/* Address: 0x1006733a4 | FUN_1006733a4 */

undefined1  [16] FUN_1006733a4(void)

{
  return ZEXT816(0x100ef46f8);
}



/* Address: 0x1006733b4 | FUN_1006733b4 */

void FUN_1006733b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd9c80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ccf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ccf0,&DAT_100ef46d8);
  DAT_100fd9c80 = pTVar1;
  return;
}



/* Address: 0x1006733f4 | FUN_1006733f4 */

void FUN_1006733f4(void)

{
  FUN_100672450();
  return;
}



/* Address: 0x100673408 | FUN_100673408 */

ulong FUN_100673408(int param_1,msghdr *param_2,uint param_3,int param_4)

{
  ssize_t sVar1;
  int *piVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((param_2 == (msghdr *)0x0) || ((int)param_3 < 0)) {
    piVar2 = ___error();
    *piVar2 = 0x16;
    uVar3 = 0xffffffff;
  }
  else if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = (ulong)param_3;
    do {
      sVar1 = _sendmsg(param_1,param_2,param_4);
      if (sVar1 < 0) {
        uVar4 = (uint)uVar5;
        if (uVar5 == 0) {
          uVar4 = 0xffffffff;
        }
        return (ulong)uVar4;
      }
      *(int *)&param_2[1].msg_name = (int)sVar1;
      uVar5 = uVar5 + 1;
      param_2 = (msghdr *)&param_2[1].msg_namelen;
    } while (uVar3 != uVar5);
  }
  return uVar3;
}



/* Address: 0x1006734a4 | FUN_1006734a4 */

undefined8 FUN_1006734a4(long param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_100673568();
  }
  if (0xb < *(uint *)(param_1 + 0x28)) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}



/* Address: 0x1006734d0 | FUN_1006734d0 */

long FUN_1006734d0(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    FUN_1006735b8();
  }
  else if (param_2 != (uint *)0x0) {
    lVar1 = (long)param_2 + ((ulong)*param_2 + 3 & 0x1fffffffc);
    lVar2 = 0;
    if (lVar1 + 0xcU <= *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28)) {
      lVar2 = lVar1;
    }
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100673590();
}



/* Address: 0x100673518 | FUN_100673518 */

long FUN_100673518(long param_1)

{
  if (param_1 != 0) {
    return param_1 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1006735e0();
}



/* Address: 0x100673530 | FUN_100673530 */

long FUN_100673530(long param_1)

{
  if (param_1 != 0) {
    return param_1 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100673608();
}



/* Address: 0x100673548 | FUN_100673548 */

long FUN_100673548(long param_1)

{
  return param_1 + 0xc;
}



/* Address: 0x100673550 | FUN_100673550 */

long FUN_100673550(long param_1)

{
  return (param_1 + 3U & 0xfffffffffffffffc) + 0xc;
}



/* Address: 0x100673560 | FUN_100673560 */

long FUN_100673560(long param_1)

{
  return param_1 + 0x15;
}



/* Address: 0x100673568 | FUN_100673568 */

void FUN_100673568(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("CNIODarwin_CMSG_FIRSTHDR","shim.c",0x3a,"mhdr != NULL");
}



/* Address: 0x100673590 | FUN_100673590 */

void FUN_100673590(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("CNIODarwin_CMSG_NXTHDR","shim.c",0x40,"cmsg != NULL");
}



/* Address: 0x1006735b8 | FUN_1006735b8 */

void FUN_1006735b8(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("CNIODarwin_CMSG_NXTHDR","shim.c",0x3f,"mhdr != NULL");
}



/* Address: 0x1006735e0 | FUN_1006735e0 */

void FUN_1006735e0(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("CNIODarwin_CMSG_DATA","shim.c",0x45,"cmsg != NULL");
}



/* Address: 0x100673608 | FUN_100673608 */

void FUN_100673608(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("CNIODarwin_CMSG_DATA_MUTABLE","shim.c",0x4a,"cmsg != NULL");
}



/* Address: 0x100673630 | FUN_100673630 */

void FUN_100673630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100674c28(param_1,param_2,param_4,param_5);
  return;
}



/* Address: 0x10067363c | FUN_10067363c */

long FUN_10067363c(long param_1)

{
  code *pcVar1;
  
  if (!SBORROW8(param_1,1)) {
    return (param_1 + -1) / 2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100673654);
  (*pcVar1)();
}



/* Address: 0x100673654 | FUN_100673654 */

ulong FUN_100673654(long param_1)

{
  code *pcVar1;
  
  if (-1 < param_1 + 0x4000000000000000) {
    return param_1 << 1 | 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100673670);
  (*pcVar1)();
}



/* Address: 0x100673670 | FUN_100673670 */

long FUN_100673670(long param_1)

{
  code *pcVar1;
  
  if (param_1 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100673690);
    (*pcVar1)();
  }
  if (!SCARRY8(param_1 * 2,2)) {
    return param_1 * 2 + 2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100673694);
  (*pcVar1)();
}



/* Address: 0x100673694 | FUN_100673694 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100673714 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100673694(ulong param_1,long param_2)

{
  bool bVar1;
  __int64 _Var2;
  ulong uVar3;
  undefined8 *unaff_x20;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_90 [12];
  uint local_84;
  long local_80;
  long local_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar4 = *(long *)(param_2 + 0x10);
  local_78 = *(long *)(lVar4 + -8);
  uVar3 = *(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar6 = auStack_90 + -uVar3;
  lVar7 = (long)puVar6 - uVar3;
  if ((long)(param_1 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006738d4);
    (*pcVar5)();
  }
  lVar11 = param_1 * 2;
  uVar3 = lVar11 + 2;
  if (SCARRY8(lVar11,2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006738d8);
    (*pcVar5)();
  }
  uVar8 = *unaff_x20;
  _Var2 = Swift::Array<undefined>::get_count(param_1,lVar4);
  if (SBORROW8(_Var2,1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006738dc);
    (*pcVar5)();
  }
  uVar9 = param_1;
  if (lVar11 < _Var2 + -1) {
    uVar9 = param_1 << 1 | 1;
    _swift_bridgeObjectRetain(uVar8);
    Swift::Array<undefined>::get_subscript(lVar7,uVar9,uVar8,lVar4);
    Swift::Array<undefined>::get_subscript(puVar6,param_1,uVar8,lVar4);
    bVar1 = Swift::Comparable::<_infix(lVar7,puVar6,lVar4,*(undefined8 *)(param_2 + 0x18));
    _Var2 = CONCAT71((int7)((ulong)_Var2 >> 8),bVar1);
    local_84 = (uint)_Var2;
    _swift_bridgeObjectRelease(uVar8);
    pcVar5 = *(code **)(local_78 + 8);
    (*pcVar5)(puVar6,lVar4);
    (*pcVar5)(lVar7,lVar4);
    if ((local_84 & 1) == 0) {
      uVar9 = param_1;
    }
  }
  _Var2 = Swift::Array<undefined>::get_count(_Var2,lVar4);
  if (SBORROW8(_Var2,1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006738e0);
    (*pcVar5)();
  }
  uVar10 = uVar9;
  local_80 = param_2;
  if ((long)uVar3 <= _Var2 + -1) {
    _swift_bridgeObjectRetain(uVar8);
    Swift::Array<undefined>::get_subscript(lVar7,uVar3,uVar8,lVar4);
    Swift::Array<undefined>::get_subscript(puVar6,uVar9,uVar8,lVar4);
    bVar1 = Swift::Comparable::<_infix(lVar7,puVar6,lVar4,*(undefined8 *)(param_2 + 0x18));
    _swift_bridgeObjectRelease(uVar8);
    pcVar5 = *(code **)(local_78 + 8);
    (*pcVar5)(puVar6,lVar4);
    (*pcVar5)(lVar7,lVar4);
    uVar10 = uVar3;
    if (!bVar1) {
      uVar10 = uVar9;
    }
  }
  if (uVar10 != param_1) {
    uVar8 = 0;
    local_70 = uVar10;
    uStack_68 = param_1;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar8);
    (extension_Swift)::Swift::MutableCollection::_swapAt();
    FUN_100673694(uVar10,local_80);
  }
  return;
}



/* Address: 0x1006738e0 | FUN_1006738e0 */

void FUN_1006738e0(ulong param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  _ContiguousArrayBuffer<undefined> _Var4;
  ulong uVar5;
  undefined8 *unaff_x20;
  _ArrayBuffer _Var6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  String SVar14;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  code *local_80;
  undefined8 local_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar12 = *(long *)(lVar7 + -8);
  uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&local_80 - uVar5;
  lVar9 = lVar8 - uVar5;
  uVar10 = *unaff_x20;
  _swift_bridgeObjectRetain(uVar10);
  Swift::Array<undefined>::get_subscript(lVar9,param_1,uVar10,lVar7);
  local_78 = *(undefined8 *)(param_3 + 0x18);
  bVar3 = Swift::Comparable::<_infix(lVar9,param_2,lVar7);
  _swift_bridgeObjectRelease(uVar10);
  local_80 = *(code **)(lVar12 + 8);
  (*local_80)(lVar9,lVar7);
  if (bVar3) {
    *(undefined4 *)(lVar9 + -8) = 0;
    *(undefined8 *)(lVar9 + -0x10) = 0x5c;
    SVar14.bridgeObject = (void *)0x2;
    SVar14.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar14,(StaticString)0xd000000000000033,0x8000000100dafbb0,
               0xdafbb0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100673b40);
    (*pcVar2)();
  }
  uVar10 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Array<undefined>::_makeMutableAndUnique();
  _Var6.unknown = (undefined *)*unaff_x20;
  FUN_100662648(param_1,_Var6.unknown,lVar7);
  _Var4 = Swift::_ArrayBuffer::get__native(_Var6);
  bVar1 = *(byte *)(lVar12 + 0x50);
  _swift_release();
  (**(code **)(lVar12 + 0x18))
            (_Var4.unknown +
             *(long *)(lVar12 + 0x48) * param_1 +
             ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),param_2,lVar7);
  if (0 < (long)param_1) {
    do {
      uVar11 = *unaff_x20;
      _swift_bridgeObjectRetain(uVar11);
      Swift::Array<undefined>::get_subscript(lVar9,param_1,uVar11,lVar7);
      uVar5 = param_1 - 1;
      uVar13 = uVar5 >> 1;
      Swift::Array<undefined>::get_subscript(lVar8,uVar13,uVar11,lVar7);
      bVar3 = Swift::Comparable::<_infix(lVar9,lVar8,lVar7,local_78);
      _swift_bridgeObjectRelease(uVar11);
      pcVar2 = local_80;
      (*local_80)(lVar8,lVar7);
      (*pcVar2)(lVar9,lVar7);
      if (!bVar3) {
        return;
      }
      local_70 = uVar13;
      uStack_68 = param_1;
      _swift_getWitnessTable
                (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar10);
      (extension_Swift)::Swift::MutableCollection::_swapAt();
      param_1 = uVar13;
    } while (1 < uVar5);
  }
  return;
}



/* Address: 0x100673b40 | FUN_100673b40 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100673ba0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100673b40(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  long local_80;
  long local_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar6 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar6 + -8);
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)&local_80 - uVar3;
  lVar8 = lVar7 - uVar3;
  local_78 = param_2;
  uVar3 = Swift::Array<undefined>::get_count(param_1,lVar6);
  local_80 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar8,param_1,lVar6);
  uVar2 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Array<undefined>::append(lVar8,uVar2);
  if (0 < (long)uVar3) {
    do {
      uVar9 = *unaff_x20;
      _swift_bridgeObjectRetain(uVar9);
      Swift::Array<undefined>::get_subscript(lVar8,uVar3,uVar9,lVar6);
      uVar5 = uVar3 - 1;
      uVar11 = uVar5 >> 1;
      Swift::Array<undefined>::get_subscript(lVar7,uVar11,uVar9,lVar6);
      bVar1 = Swift::Comparable::<_infix(lVar8,lVar7,lVar6,*(undefined8 *)(local_78 + 0x18));
      _swift_bridgeObjectRelease(uVar9);
      pcVar10 = *(code **)(local_80 + 8);
      (*pcVar10)(lVar7,lVar6);
      (*pcVar10)(lVar8,lVar6);
      if (!bVar1) {
        return;
      }
      local_70 = uVar11;
      uStack_68 = uVar3;
      _swift_getWitnessTable
                (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar2);
      (extension_Swift)::Swift::MutableCollection::_swapAt();
      uVar3 = uVar11;
    } while (1 < uVar5);
  }
  return;
}



/* Address: 0x100673cc8 | FUN_100673cc8 */

void FUN_100673cc8(undefined8 param_1)

{
  FUN_100673cd4(0,param_1);
  return;
}



/* Address: 0x100673cd4 | FUN_100673cd4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100673d38 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100673cd4(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  __int64 _Var3;
  _ContiguousArrayBuffer<undefined> _Var4;
  ulong uVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  _ArrayBuffer _Var12;
  long local_80;
  code *local_78;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar6 + -8);
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)&local_80 - uVar5;
  lVar8 = lVar11 - uVar5;
  uVar10 = *unaff_x20;
  _Var3 = Swift::Array<undefined>::get_count(param_2,lVar6);
  if (_Var3 < 1) {
                    /* WARNING: Could not recover jumptable at 0x000100673ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 0x38))(param_1,1,1,lVar6);
    return;
  }
  Swift::Array<undefined>::get_subscript(param_1,param_2,uVar10,lVar6);
  _Var3 = Swift::Array<undefined>::get_count(_Var3,lVar6);
  if (_Var3 != 1) {
    Swift::Array<undefined>::get_subscript(lVar8,param_2,uVar10,lVar6);
    _Var3 = Swift::Array<undefined>::get_count(_Var3,lVar6);
    if (SBORROW8(_Var3,1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1006740c4);
      (*pcVar9)();
    }
    Swift::Array<undefined>::get_subscript(lVar11,_Var3 + -1,uVar10,lVar6);
    local_80 = *(long *)(param_3 + 0x18);
    bVar2 = Swift::Equatable::___infix(lVar8,lVar11,lVar6,*(undefined8 *)(local_80 + 8));
    pcVar9 = *(code **)(lVar7 + 8);
    (*pcVar9)(lVar11,lVar6);
    local_78 = pcVar9;
    (*pcVar9)(lVar8,lVar6);
    if (!bVar2) {
      _swift_bridgeObjectRetain(uVar10);
      Swift::Array<undefined>::get_subscript(lVar8,param_2,uVar10,lVar6);
      _Var3 = Swift::Array<undefined>::get_count(_Var3,lVar6);
      if (SBORROW8(_Var3,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006740c8);
        (*pcVar9)();
      }
      Swift::Array<undefined>::get_subscript(lVar11,_Var3 + -1,uVar10,lVar6);
      bVar2 = Swift::Comparable::<_infix(lVar8,lVar11,lVar6,local_80);
      _swift_bridgeObjectRelease(uVar10);
      pcVar9 = local_78;
      (*local_78)(lVar11,lVar6);
      (*pcVar9)(lVar8,lVar6);
      _Var3 = Swift::Array<undefined>::get_count(_Var3,lVar6);
      if (bVar2) {
        if (SBORROW8(_Var3,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006740cc);
          (*pcVar9)();
        }
        Swift::Array<undefined>::get_subscript(lVar8,_Var3 + -1,uVar10,lVar6);
        uVar10 = 0;
        Swift::Array<undefined>::typeMetadataAccessor();
        Swift::Array<undefined>::_makeMutableAndUnique();
        _Var12.unknown = (undefined *)*unaff_x20;
        FUN_100662648(param_2,_Var12.unknown,lVar6);
        _Var4 = Swift::_ArrayBuffer::get__native(_Var12);
        bVar1 = *(byte *)(lVar7 + 0x50);
        _swift_release();
        (**(code **)(lVar7 + 0x28))
                  (_Var4.unknown +
                   *(long *)(lVar7 + 0x48) * param_2 +
                   ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),lVar8,lVar6);
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,
                   uVar10);
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,
                   uVar10);
        (extension_Swift)::Swift::RangeReplaceableCollection::_removeLast();
        (*pcVar9)(lVar8,lVar6);
        FUN_100673694(param_2,param_3);
      }
      else {
        if (SBORROW8(_Var3,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006740d0);
          (*pcVar9)();
        }
        Swift::Array<undefined>::get_subscript(lVar8,_Var3 + -1,uVar10,lVar6);
        FUN_1006738e0(param_2,lVar8,param_3);
        (*pcVar9)(lVar8,lVar6);
        uVar10 = 0;
        Swift::Array<undefined>::typeMetadataAccessor();
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,
                   uVar10);
        _swift_getWitnessTable
                  (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,
                   uVar10);
        (extension_Swift)::Swift::RangeReplaceableCollection::_removeLast();
        (*pcVar9)(lVar8,lVar6);
      }
      goto LAB_100673e58;
    }
  }
  uVar10 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,uVar10);
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar10)
  ;
  (extension_Swift)::Swift::RangeReplaceableCollection::_removeLast();
  (**(code **)(lVar7 + 8))(lVar8,lVar6);
LAB_100673e58:
  (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar6);
  return;
}



/* Address: 0x1006740d0 | FUN_1006740d0 */

bool FUN_1006740d0(undefined8 param_1,undefined8 param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_60;
  char local_58;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar3 = (long)&local_60 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar2);
  (extension_Swift)::Swift::Collection::_firstIndex();
  if (local_58 != '\x01') {
    FUN_100673cd4(lVar3,local_60,param_2);
    (**(code **)(lVar4 + 8))(lVar3,CONCAT71(extraout_var,OVar1.value));
  }
  return local_58 != '\x01';
}



/* Address: 0x1006741b0 | FUN_1006741b0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006741ec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006741b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  __int64 _Var1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  undefined8 local_60;
  char local_58;
  
  lVar3 = *(long *)(param_4 + 0x10);
  _Var1 = Swift::Array<undefined>::get_count(param_2,lVar3);
  if (0 < _Var1) {
    uVar2 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar2);
    (extension_Swift)::Swift::Collection::_firstIndex();
    if (unaff_x21 != 0) {
      return;
    }
    if (local_58 != '\x01') {
      FUN_100673cd4(param_1,local_60,param_4);
      return;
    }
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,1,1,lVar3);
  return;
}



/* Address: 0x100674298 | FUN_100674298 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006742d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_100674298(char *param_1,undefined *param_2,undefined8 param_3)

{
  String *pSVar1;
  char *pcVar2;
  String SVar3;
  code *pcVar4;
  __int64 _Var5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  char *count;
  void *pvVar10;
  undefined *puVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  code *pcVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String repeating_01;
  String SVar29;
  undefined1 auVar30 [16];
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  char *local_c0;
  void *local_b8;
  char *local_a0;
  void *pvStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  char *local_78;
  String repeating;
  String repeating_00;
  void *pvVar11;
  
  _swift_bridgeObjectRetain();
  _Var5 = Swift::Array<undefined>::get_count(param_1,param_2);
  if (_Var5 < 1) {
    _swift_bridgeObjectRelease(param_1);
    pvStack_98 = (void *)0xec0000003e706165;
    local_a0 = (char *)0x68207974706d653c;
  }
  else {
    uVar6 = 0;
    local_90 = param_2;
    uStack_88 = param_3;
    local_78 = param_1;
    Swift::Array<undefined>::typeMetadataAccessor();
    puVar7 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar6);
    pcVar4 = FUN_100674c4c;
    puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_1005f45bc(FUN_100674c4c,&local_a0,uVar6,PTR___type_metadata_for_Swift_String_100eac208,
                  PTR___type_metadata_for_Swift_Never_100eadc38,puVar7,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    _swift_bridgeObjectRelease(param_1);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar21 = *(ulong *)(pcVar4 + 0x10);
    if (uVar21 == 0) {
      lVar8 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
      pcVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (lVar8 == 0) {
        _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_100eae0d8);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006747a8);
        (*pcVar4)();
      }
    }
    else {
      local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_100674a04(0,uVar21,0);
      pcVar20 = pcVar4 + 0x28;
      uVar15 = uVar21;
      do {
        pcVar19 = local_a0;
        pcVar16 = *(char **)(pcVar20 + -8);
        pvVar11 = *(void **)pcVar20;
        _swift_bridgeObjectRetain(pvVar11);
        SVar25.bridgeObject = pvVar11;
        SVar25.str = pcVar16;
        _Var5 = Swift::String::get_count(SVar25);
        _swift_bridgeObjectRelease(pvVar11);
        uVar9 = *(ulong *)(pcVar19 + 0x10);
        lVar8 = uVar9 + 1;
        local_a0 = pcVar19;
        if (*(ulong *)(pcVar19 + 0x18) >> 1 <= uVar9) {
          FUN_100674a04(1 < *(ulong *)(pcVar19 + 0x18),lVar8,1);
        }
        pcVar20 = pcVar20 + 0x10;
        *(long *)(local_a0 + 0x10) = lVar8;
        *(__int64 *)(local_a0 + uVar9 * 8 + 0x20) = _Var5;
        uVar15 = uVar15 - 1;
        pcVar16 = local_a0;
      } while (uVar15 != 0);
    }
    pcVar17 = *(char **)(pcVar16 + 0x20);
    lVar8 = lVar8 + -1;
    pcVar19 = pcVar17;
    if (lVar8 != 0) {
      pcVar13 = pcVar16 + 0x28;
      pcVar18 = pcVar17;
      do {
        pcVar14 = *(char **)pcVar13;
        pcVar19 = pcVar14;
        if ((long)pcVar14 <= (long)pcVar17) {
          pcVar19 = pcVar18;
        }
        if ((long)pcVar17 <= (long)pcVar14) {
          pcVar17 = pcVar14;
        }
        lVar8 = lVar8 + -1;
        pcVar13 = pcVar13 + 8;
        pcVar18 = pcVar19;
      } while (lVar8 != 0);
    }
    _swift_bridgeObjectRelease(pcVar16);
    if (uVar21 == 0) {
      _swift_bridgeObjectRelease(pcVar4);
      pcVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_78 = puVar7;
      pcVar17 = (char *)0x0;
      FUN_1006749e8(0,uVar21);
      uVar15 = 0;
      do {
        pcVar16 = local_78;
        if (*(ulong *)(pcVar4 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10067477c);
          (*pcVar4)();
        }
        pSVar1 = (String *)(pcVar4 + uVar15 * 0x10 + 0x20);
        pcVar13 = pSVar1->str;
        pvVar11 = pSVar1->bridgeObject;
        SVar25 = *pSVar1;
        _swift_bridgeObjectRetain(pvVar11);
        lVar8 = Swift::String::get_count(SVar25);
        while (lVar8 < (long)pcVar19) {
          SVar27.bridgeObject = pvVar11;
          SVar27.str = pcVar13;
          uVar9 = Swift::String::get_count(SVar27);
          if ((uVar9 & 1) == 0) {
            local_a0 = (char *)0x20;
            pvStack_98 = (void *)0xe100000000000000;
            pvVar10 = pvVar11;
          }
          else {
            local_a0 = pcVar13;
            pvStack_98 = pvVar11;
            _swift_bridgeObjectRetain(pvVar11);
            pcVar13 = (char *)0x20;
            pvVar10 = (void *)0xe100000000000000;
          }
          SVar24.bridgeObject = pvVar10;
          SVar24.str = pcVar13;
          SVar31.bridgeObject = puVar12;
          SVar31.str = pcVar17;
          Swift::String::append(SVar24,SVar31);
          _swift_bridgeObjectRelease(pvVar11);
          pvVar11 = pvStack_98;
          pcVar13 = local_a0;
          SVar3.bridgeObject = pvStack_98;
          SVar3.str = local_a0;
          _swift_bridgeObjectRetain(pvStack_98);
          lVar8 = Swift::String::get_count(SVar3);
          _swift_bridgeObjectRelease(pvVar11);
        }
        uVar9 = *(ulong *)(pcVar16 + 0x10);
        local_78 = pcVar16;
        if (*(ulong *)(pcVar16 + 0x18) >> 1 <= uVar9) {
          pcVar17 = &DAT_00000001;
          FUN_1006749e8(1 < *(ulong *)(pcVar16 + 0x18),uVar9 + 1);
        }
        pcVar16 = local_78;
        uVar15 = uVar15 + 1;
        *(ulong *)(local_78 + 0x10) = uVar9 + 1;
        *(char **)(local_78 + uVar9 * 0x10 + 0x20) = pcVar13;
        *(void **)(local_78 + uVar9 * 0x10 + 0x28) = pvVar11;
      } while (uVar15 != uVar21);
      _swift_bridgeObjectRelease(pcVar4);
    }
    local_a0 = (char *)0xa;
    pvStack_98 = (void *)0xe100000000000000;
    repeating.bridgeObject = (void *)0xe100000000000000;
    repeating.str = (char *)0x20;
    pcVar17 = pcVar19;
    SVar25 = Swift::String::init(repeating,(__int64)pcVar19);
    pcVar13 = *(char **)(pcVar16 + 0x10);
    local_b8 = SVar25.bridgeObject;
    if (pcVar13 != (char *)0x0) {
      pcVar18 = pcVar16 + 0x28;
      pcVar14 = (char *)0x0;
      do {
        if (*(char **)(pcVar16 + 0x10) <= pcVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100674780);
          (*pcVar4)();
        }
        pcVar2 = *(char **)(pcVar18 + -8);
        pvVar11 = *(void **)pcVar18;
        _swift_bridgeObjectRetain(pvVar11);
        count = pcVar14;
        pcVar17 = param_1;
        puVar12 = param_2;
        FUN_10067481c(pcVar14,param_1,pcVar19,param_2,param_3);
        repeating_00.bridgeObject = (void *)0xe100000000000000;
        repeating_00.str = (char *)0x20;
        SVar27 = Swift::String::init(repeating_00,(__int64)count);
        SVar33.bridgeObject = puVar12;
        SVar33.str = count;
        Swift::String::append(SVar27,SVar33);
        _swift_bridgeObjectRelease(SVar27.bridgeObject);
        SVar28.bridgeObject = pvVar11;
        SVar28.str = pcVar2;
        SVar34.bridgeObject = puVar12;
        SVar34.str = count;
        Swift::String::append(SVar28,SVar34);
        _swift_bridgeObjectRelease(pvVar11);
        repeating_01.bridgeObject = (void *)0xe100000000000000;
        repeating_01.str = (char *)0x20;
        SVar27 = Swift::String::init(repeating_01,(__int64)pcVar17);
        SVar35.bridgeObject = puVar12;
        SVar35.str = pcVar17;
        Swift::String::append(SVar27,SVar35);
        _swift_bridgeObjectRelease(SVar27.bridgeObject);
        pcVar2 = pcVar14 + 1;
        dVar22 = (double)pcVar2;
        _log2();
        if (0x7fefffffffffffff < (ulong)ABS(dVar22)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100674784);
          (*pcVar4)();
        }
        if (dVar22 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100674788);
          (*pcVar4)();
        }
        if (9.223372036854776e+18 <= dVar22) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10067478c);
          (*pcVar4)();
        }
        dVar23 = (double)(pcVar14 + 2);
        _log2();
        if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100674790);
          (*pcVar4)();
        }
        if (dVar23 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100674794);
          (*pcVar4)();
        }
        if (9.223372036854776e+18 <= dVar23) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100674798);
          (*pcVar4)();
        }
        if ((long)dVar22 == (long)dVar23) {
          local_c0 = SVar25.str;
          pvVar11 = local_b8;
        }
        else {
          local_c0 = (char *)0xa;
          pvVar11 = (void *)0xe100000000000000;
        }
        SVar26.bridgeObject = pvVar11;
        SVar26.str = local_c0;
        SVar32.bridgeObject = puVar12;
        SVar32.str = pcVar17;
        Swift::String::append(SVar26,SVar32);
        pcVar18 = pcVar18 + 0x10;
        pcVar14 = pcVar2;
      } while (pcVar2 != pcVar13);
    }
    _swift_bridgeObjectRelease(local_b8);
    _swift_bridgeObjectRelease(pcVar16);
    SVar29.bridgeObject = (void *)0xe100000000000000;
    SVar29.str = (char *)0xa;
    SVar36.bridgeObject = puVar12;
    SVar36.str = pcVar17;
    Swift::String::append(SVar29,SVar36);
  }
  auVar30._8_8_ = pvStack_98;
  auVar30._0_8_ = local_a0;
  return auVar30;
}



/* Address: 0x1006747a8 | FUN_1006747a8 */

void FUN_1006747a8(String *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  String SVar2;
  
  lVar1 = *(long *)(*(long *)(param_3 + -8) + 0x40);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  SVar2 = Swift::String::_init
                    (&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3);
  *param_1 = SVar2;
  return;
}



/* Address: 0x10067481c | FUN_10067481c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010067486c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_10067481c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  __int64 _Var2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (param_1 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100674908);
    (*pcVar1)();
  }
  lVar4 = param_1 * 2 + 2;
  if (SCARRY8(param_1 * 2,2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067490c);
    (*pcVar1)();
  }
  uVar3 = param_1 << 1 | 1;
  _Var2 = Swift::Array<undefined>::get_count(param_1,param_4);
  if ((long)uVar3 < _Var2) {
    lVar5 = param_2;
    FUN_10067481c(uVar3,param_2,param_3,param_4,param_5);
    if (SCARRY8(uVar3,lVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100674910);
      (*pcVar1)();
    }
    lVar6 = uVar3 + lVar5 + param_3;
    if (SCARRY8(uVar3 + lVar5,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100674918);
      (*pcVar1)();
    }
  }
  else {
    lVar6 = 0;
  }
  if (lVar4 < _Var2) {
    FUN_10067481c(lVar4,param_2,param_3,param_4,param_5);
    if (SCARRY8(lVar4,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100674914);
      (*pcVar1)();
    }
    lVar5 = lVar4 + param_2 + param_3;
    if (SCARRY8(lVar4 + param_2,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006748d8);
      (*pcVar1)();
    }
  }
  else {
    lVar5 = 0;
  }
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = lVar6;
  return auVar7;
}



/* Address: 0x100674918 | FUN_100674918 */

void FUN_100674918(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100674298(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x100674928 | FUN_100674928 */

void FUN_100674928(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100674c68(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  FUN_100673cd4(param_1,0,uVar1);
  return;
}



/* Address: 0x10067495c | thunk_FUN_100674928 */

void thunk_FUN_100674928(void)

{
  FUN_100674928();
  return;
}



/* Address: 0x100674960 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::get_endIndex */

__int64 Swift::Array<undefined>::get_endIndex(void)

{
  __int64 _Var1;
  
  _Var1 = get_endIndex();
  return _Var1;
}



/* Address: 0x100674964 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::get_count */

__int64 Swift::Array<undefined>::get_count(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100eac4a0)();
  return param_1;
}



/* Address: 0x100674968 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::get_subscript */

void Swift::Array<undefined>::get_subscript(void)

{
  get_subscript();
  return;
}



/* Address: 0x10067496c | FUN_10067496c */

void FUN_10067496c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease();
  *param_1 = uVar1;
  return;
}



/* Address: 0x10067499c | FUN_10067499c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006749a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10067499c(long param_1)

{
  undefined8 *unaff_x20;
  
  Swift::Array<undefined>::get_count(*unaff_x20,param_1,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x1006749ac | FUN_1006749ac */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006749c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1006749ac(undefined8 param_1,undefined8 param_2)

{
  ContiguousArray<Swift__copySequenceToContiguousArray<A_where_A:_Swift_Sequence>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar1;
  undefined8 *unaff_x20;
  
  CVar1 = Swift::__copySequenceToContiguousArray(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(*unaff_x20);
  return CVar1.unknown;
}


