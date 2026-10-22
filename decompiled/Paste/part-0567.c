/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100653f60 | thunk_FUN_100653bf8 */

void thunk_FUN_100653bf8(long param_1,long param_2)

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



/* Address: 0x100653f64 | thunk_FUN_100653bf8 */

void thunk_FUN_100653bf8(long param_1,long param_2)

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



/* Address: 0x100653f68 | thunk_FUN_100651f14 */

void thunk_FUN_100651f14(long param_1)

{
  FUN_100651dbc(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100653f6c | thunk_FUN_100653c0c */

void thunk_FUN_100653c0c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100653f70 | thunk_FUN_100653c0c */

void thunk_FUN_100653c0c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100653f74 | thunk_FUN_10064a354 */

void thunk_FUN_10064a354(void)

{
  thunk_FUN_10064a354();
  return;
}



/* Address: 0x100653f78 | thunk_FUN_100651dbc */

undefined * thunk_FUN_100651dbc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100651eec);
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
    puVar3 = &DAT_100fd8718;
    FUN_1000f7830(&DAT_100fd8718,&DAT_100c6ace0);
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
    puVar5 = &DAT_100fd8710;
    FUN_1000f7830(&DAT_100fd8710,&DAT_100c6acd8);
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



/* Address: 0x100653f7c | thunk_FUN_1002ec258 */

void thunk_FUN_1002ec258(void)

{
  FUN_1002ec258();
  return;
}



/* Address: 0x100653f80 | thunk_FUN_100652fc4 */

void thunk_FUN_100652fc4(void)

{
  long unaff_x20;
  
  FUN_100652044(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,thunk_FUN_100630328);
  return;
}



/* Address: 0x100653f84 | thunk_FUN_10064bebc */

void thunk_FUN_10064bebc(void)

{
  thunk_FUN_10064bebc();
  return;
}



/* Address: 0x100653f88 | thunk_FUN_10064c1b0 */

void thunk_FUN_10064c1b0(void)

{
  FUN_10064c1b0();
  return;
}



/* Address: 0x100653f8c | thunk_FUN_10064c25c */

void thunk_FUN_10064c25c(void)

{
  FUN_10064c25c();
  return;
}



/* Address: 0x100653f90 | thunk_FUN_1006537dc */

void thunk_FUN_1006537dc(void)

{
  thunk_FUN_1006537dc();
  return;
}



/* Address: 0x100653f94 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100653f98 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x100653f9c | thunk_FUN_100652b30 */

void thunk_FUN_100652b30(void)

{
  FUN_100652b30();
  return;
}



/* Address: 0x100653fa0 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x100653fa4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100653fa8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100653fac | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100653fb0 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100653fb4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100653fb8 | thunk_FUN_10064c284 */

void thunk_FUN_10064c284(void)

{
  FUN_10064c284();
  return;
}



/* Address: 0x100653fbc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100653fc0 | thunk_FUN_100653164 */

void thunk_FUN_100653164(void)

{
  FUN_100653164();
  return;
}



/* Address: 0x100653fc4 | thunk_FUN_100653208 */

void thunk_FUN_100653208(void)

{
  FUN_100653208();
  return;
}



/* Address: 0x100653fc8 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100653fcc | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100653fd0 | thunk_FUN_1006532c8 */

void thunk_FUN_1006532c8(void)

{
  thunk_FUN_1006532c8();
  return;
}



/* Address: 0x100653fd4 | thunk_FUN_1006530f8 */

void thunk_FUN_1006530f8(void)

{
  FUN_1006530f8();
  return;
}



/* Address: 0x100653fd8 | thunk_FUN_10064c284 */

void thunk_FUN_10064c284(void)

{
  FUN_10064c284();
  return;
}



/* Address: 0x100653fdc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100653fe0 | thunk_FUN_100653350 */

void thunk_FUN_100653350(void)

{
  thunk_FUN_100653350();
  return;
}



/* Address: 0x100653fe4 | thunk_FUN_100653704 */

void thunk_FUN_100653704(void)

{
  thunk_FUN_100653704();
  return;
}



/* Address: 0x100653fe8 | thunk_FUN_10065373c */

void thunk_FUN_10065373c(void)

{
  FUN_10065373c();
  return;
}



/* Address: 0x100653fec | thunk_FUN_10065373c */

void thunk_FUN_10065373c(void)

{
  FUN_10065373c();
  return;
}



/* Address: 0x100653ff0 | thunk_FUN_10065373c */

void thunk_FUN_10065373c(void)

{
  FUN_10065373c();
  return;
}



/* Address: 0x100653ff4 | thunk_FUN_100653c14 */

void thunk_FUN_100653c14(void)

{
  FUN_100653c14();
  return;
}



/* Address: 0x100653ff8 | thunk_FUN_100653d9c */

void thunk_FUN_100653d9c(void)

{
  FUN_100653d9c();
  return;
}



/* Address: 0x100653ffc | thunk_FUN_100653dc4 */

void thunk_FUN_100653dc4(void)

{
  thunk_FUN_100653dc4();
  return;
}



/* Address: 0x100654000 | thunk_FUN_100653d9c */

void thunk_FUN_100653d9c(void)

{
  FUN_100653d9c();
  return;
}



/* Address: 0x100654004 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100654008 | thunk_FUN_10064c284 */

void thunk_FUN_10064c284(void)

{
  FUN_10064c284();
  return;
}



/* Address: 0x10065400c | thunk_FUN_1006530f8 */

void thunk_FUN_1006530f8(void)

{
  FUN_1006530f8();
  return;
}



/* Address: 0x100654010 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100654014 | thunk_FUN_100653138 */

void thunk_FUN_100653138(void)

{
  long unaff_x20;
  
  FUN_10064bebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100654018 | thunk_FUN_10065310c */

void thunk_FUN_10065310c(void)

{
  long unaff_x20;
  
  FUN_10064c1c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_100308524,FUN_1002ec258);
  return;
}



/* Address: 0x10065401c | FUN_10065401c */

bool FUN_10065401c(void)

{
  long unaff_x20;
  
  return (int)**(undefined8 **)(unaff_x20 + 0x10) == 0xcafe;
}



/* Address: 0x100654034 | thunk_FUN_100654038 */

long thunk_FUN_100654038(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = (ulong *)0x8;
  _swift_slowAlloc(8,0xffffffffffffffff);
  *puVar1 = param_1 << 0x20 | 0xcafe;
  *(ulong **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Address: 0x100654038 | FUN_100654038 */

long FUN_100654038(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = (ulong *)0x8;
  _swift_slowAlloc(8,0xffffffffffffffff);
  *puVar1 = param_1 << 0x20 | 0xcafe;
  *(ulong **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Address: 0x100654088 | FUN_100654088 */

void FUN_100654088(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  puVar1 = (ulong *)0x8;
  _swift_slowAlloc(8,0xffffffffffffffff);
  *puVar1 = param_1 << 0x20 | 0xcafe;
  *(ulong **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Address: 0x1006540c0 | FUN_1006540c0 */

void FUN_1006540c0(void)

{
  long unaff_x20;
  
  _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
  return;
}



/* Address: 0x1006540e4 | FUN_1006540e4 */

void FUN_1006540e4(void)

{
  long unaff_x20;
  
  _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100654110 | FUN_100654110 */

/* WARNING: Removing unreachable block (ram,0x000100654140) */

long FUN_100654110(void)

{
  long lVar1;
  ulong *puVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  
  lVar3 = *unaff_x20;
  lVar1 = 0;
  FUN_100654214();
  if (unaff_x21 == 0) {
    FUN_100669c64();
    _swift_allocObject(lVar3,0x18,7);
    puVar2 = (ulong *)0x8;
    _swift_slowAlloc(8,0xffffffffffffffff);
    *puVar2 = lVar1 << 0x20 | 0xcafe;
    *(ulong **)(lVar3 + 0x10) = puVar2;
    FUN_100654488();
  }
  return lVar3;
}



/* Address: 0x1006541ac | FUN_1006541ac */

void FUN_1006541ac(undefined8 param_1,code *param_2)

{
  long unaff_x21;
  
  FUN_100654214(0);
  if (unaff_x21 == 0) {
    (*param_2)(param_1);
    FUN_100654488();
  }
  return;
}



/* Address: 0x100654214 | FUN_100654214 */

void FUN_100654214(undefined8 *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  ulong *puVar9;
  undefined4 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  ulong local_58;
  StaticString local_50;
  __uint64 _Stack_48;
  
  uVar11 = 0xd000000000000020;
  puVar9 = *(ulong **)(unaff_x20 + 0x10);
  uVar12 = *puVar9;
  pcVar8 = "currently in use";
  if ((int)uVar12 == 0xdead) {
    uVar11 = 0xd00000000000002c;
    uVar10 = 9;
  }
  else {
    if ((int)uVar12 == 0xcafe) {
      uVar2 = 0xdead;
      if (((ulong)param_1 & 1) == 0) {
        uVar2 = 0xbeef;
      }
      uVar1 = *puVar9;
      if (uVar1 == uVar12) {
        *puVar9 = uVar12 & 0xffffffff00000000 | uVar2;
        return;
      }
      if ((int)uVar1 == 0xdead) {
        uVar11 = 0xd00000000000002c;
        uVar10 = 9;
        goto LAB_1006542d0;
      }
      if ((int)uVar1 == 0xcafe) {
        local_50.unknown = (undefined *)0x0;
        _Stack_48 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x4a,param_2);
        SVar14.bridgeObject = (void *)0x8000000100daf1f0;
        SVar14.str = (char *)0xd00000000000003d;
        SVar18.bridgeObject = param_4;
        SVar18.str = param_3;
        Swift::String::append(SVar14,SVar18);
        puVar3 = 
        PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
        ;
        puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        pcVar8 = "";
        pcVar5 = pcVar8;
        puVar6 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        local_58 = uVar12;
        Swift::__print_unlocked
                  (&local_58,&local_50,&DAT_100ef0f60,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar13.bridgeObject = &SUB_e200000000000000;
        SVar13.str = (char *)0x202c;
        SVar19.bridgeObject = puVar6;
        SVar19.str = pcVar5;
        Swift::String::append(SVar13,SVar19);
        local_58 = uVar1;
        SVar14 = Swift::CustomStringConvertible::get_description();
        SVar20.bridgeObject = puVar6;
        SVar20.str = pcVar5;
        Swift::String::append(SVar14,SVar20);
        _swift_bridgeObjectRelease(SVar14.bridgeObject);
        SVar15.bridgeObject = &SUB_e200000000000000;
        SVar15.str = (char *)0x202c;
        SVar21.bridgeObject = puVar6;
        SVar21.str = pcVar5;
        Swift::String::append(SVar15,SVar21);
        local_58 = uVar1;
        Swift::__print_unlocked(&local_58,&local_50,&DAT_100ef0f60,puVar7,puVar3);
        SVar16.bridgeObject = (void *)0xe300000000000000;
        SVar16.str = (char *)0x292229;
        SVar22.bridgeObject = puVar7;
        SVar22.str = pcVar8;
        Swift::String::append(SVar16,SVar22);
        SVar17.bridgeObject = (void *)0x2;
        SVar17.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar17,local_50,_Stack_48,0xdaf150);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100654448);
        (*pcVar4)();
      }
    }
    pcVar8 = "ileDescritor activate failed ";
    uVar10 = 0x10;
  }
LAB_1006542d0:
  FUN_10060a840();
  _swift_allocError(&DAT_100ef11e8,param_1,0,0);
  *param_1 = uVar11;
  param_1[1] = (ulong)pcVar8 | 0x8000000000000000;
  *(undefined4 *)(param_1 + 2) = uVar10;
  _swift_willThrow();
  return;
}



/* Address: 0x100654448 | FUN_100654448 */

void FUN_100654448(void)

{
  FUN_100654214(1);
  return;
}



/* Address: 0x100654460 | FUN_100654460 */

void FUN_100654460(void)

{
  long unaff_x21;
  
  FUN_100654214(1);
  if (unaff_x21 != 0) {
    return;
  }
  FUN_100669d20();
  return;
}



/* Address: 0x100654488 | FUN_100654488 */

void FUN_100654488(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  code *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  uVar1 = **(ulong **)(param_1 + 0x10);
  if (uVar1 == ((long)param_2.unknown << 0x20 | 0xbeefU)) {
    **(ulong **)(param_1 + 0x10) = (long)param_2.unknown << 0x20 | 0xcafe;
  }
  else if ((uVar1 & 0xffffffff) != 0xdead) {
    Swift::_StringGuts::grow(0x3f,param_2);
    SVar3.bridgeObject = (void *)0x8000000100daf150;
    SVar3.str = (char *)0xd00000000000003d;
    SVar5.bridgeObject = param_4;
    SVar5.str = param_3;
    Swift::String::append(SVar3,SVar5);
    SVar3 = Swift::CustomStringConvertible::get_description();
    SVar6.bridgeObject = param_4;
    SVar6.str = param_3;
    Swift::String::append(SVar3,SVar6);
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
    SVar4.bridgeObject = (void *)0x2;
    SVar4.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar4,(StaticString)0x0,0xe000000000000000,0xdaf150);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100654580);
    (*pcVar2)();
  }
  return;
}



/* Address: 0x100654580 | FUN_100654580 */

void FUN_100654580(void)

{
  FUN_1006541ac();
  return;
}



/* Address: 0x1006545a0 | FUN_1006545a0 */

bool FUN_1006545a0(void)

{
  long *unaff_x20;
  
  return (int)**(undefined8 **)(*unaff_x20 + 0x10) == 0xcafe;
}



/* Address: 0x1006545bc | FUN_1006545bc */

void FUN_1006545bc(void)

{
  long unaff_x21;
  
  FUN_100654214(1);
  if (unaff_x21 == 0) {
    FUN_100669d20();
  }
  return;
}



/* Address: 0x1006545e8 | FUN_1006545e8 */

void FUN_1006545e8(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1006545f4 | FUN_1006545f4 */

void FUN_1006545f4(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}


