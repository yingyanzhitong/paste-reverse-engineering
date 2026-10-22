/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007f9c9c | FUN_1007f9c9c */

void FUN_1007f9c9c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 local_38;
  
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  lVar5 = *(long *)(param_2 + 0x10);
  uVar1 = 0;
  local_38 = param_1;
  Swift::Array<undefined>::typeMetadataAccessor();
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540,uVar1);
  puVar3 = &local_38;
  FUN_1007e966c(puVar3,lVar5,uVar1,uVar4,puVar2);
  *unaff_x20 = (long)puVar3;
  unaff_x20[1] = lVar5;
  return;
}



/* Address: 0x1007f9d24 | FUN_1007f9d24 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007f9dd0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1007f9d24(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ContiguousArray CVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ContiguousArray<undefined> CVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar1 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x770b);
  }
  *param_1 = puVar1;
  puVar1[2] = param_2;
  puVar1[3] = unaff_x20;
  uVar7 = *(undefined8 *)(unaff_x20 + 8);
  puVar4 = puVar1 + 1;
  *puVar4 = uVar7;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  puVar1[4] = uVar6;
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_retain(uVar7);
  puVar3 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130,CVar2.unknown);
  Swift::Array<undefined>::_init(puVar4,uVar6,CVar2.unknown,puVar3);
  *puVar1 = puVar4;
  Swift::Array<undefined>::_allocateUninitialized(0,uVar6);
  CVar5 = Swift::ContiguousArray::_init(puVar4,uVar6);
  _swift_release(uVar7);
  *(undefined **)(unaff_x20 + 8) = CVar5.unknown;
  auVar8._8_8_ = puVar1;
  auVar8._0_8_ = FUN_1007f9e04;
  return auVar8;
}



/* Address: 0x1007f9e04 | FUN_1007f9e04 */

void FUN_1007f9e04(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1007f9e40(param_1[3],param_1,param_1[4],*(undefined8 *)(param_1[2] + 0x18));
  _swift_bridgeObjectRelease(*param_1);
  _free(param_1);
  return;
}



/* Address: 0x1007f9e40 | FUN_1007f9e40 */

void FUN_1007f9e40(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_48;
  
  uVar6 = *param_2;
  uVar3 = 0;
  local_48 = uVar6;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_bridgeObjectRetain(uVar6);
  puVar4 = PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540,uVar3);
  puVar5 = &local_48;
  FUN_1007e966c(puVar5,param_3,uVar3,param_4,puVar4);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_1 = (long)puVar5;
  param_1[1] = param_3;
  _swift_release(lVar2);
  _swift_release(lVar1);
  return;
}



/* Address: 0x1007f9edc | FUN_1007f9edc */

void FUN_1007f9edc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 uVar1;
  
  if (param_4 == 0) {
    FUN_1007f9fb8(param_6,param_2,param_3,param_7,*(undefined8 *)(param_8 + 8));
    uVar1 = (undefined1)param_2;
    param_3 = 0;
  }
  else {
    _swift_retain(param_4);
    FUN_1007d92dc();
    uVar1 = (undefined1)param_2;
    _swift_release(param_4);
  }
  *param_1 = param_6;
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = param_3;
  return;
}



/* Address: 0x1007f9fa4 | FUN_1007f9fa4 */

void FUN_1007f9fa4(void)

{
  FUN_1007f24d0();
  return;
}



/* Address: 0x1007f9fb8 | FUN_1007f9fb8 */

undefined1  [16]
FUN_1007f9fb8(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar6 = *(long *)(param_4 + -8);
  puVar5 = auStack_70 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 != 0) {
    lVar3 = 0;
    lVar7 = *(long *)(lVar6 + 0x48);
    pcVar4 = *(code **)(lVar6 + 0x10);
    local_68 = param_5;
    do {
      (*pcVar4)(puVar5,param_2,param_4);
      bVar1 = Swift::Equatable::___infix(puVar5,param_1,param_4,local_68);
      (**(code **)(lVar6 + 8))(puVar5,param_4);
      if (bVar1) {
        uVar2 = 0;
        goto LAB_1007fa074;
      }
      lVar3 = lVar3 + 1;
      param_2 = param_2 + lVar7;
    } while (param_3 != lVar3);
  }
  lVar3 = 0;
  uVar2 = 1;
LAB_1007fa074:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = lVar3;
  return auVar8;
}



/* Address: 0x1007fa098 | FUN_1007fa098 */

void FUN_1007fa098(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  ContiguousArray param_5,__int64 param_6,long param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  ulong *local_98;
  undefined8 uStack_90;
  ulong local_88;
  ulong local_80;
  ulong *puStack_78;
  undefined8 local_70;
  undefined1 local_68;
  
  lVar7 = *(long *)(param_7 + -8);
  lVar4 = *(long *)(lVar7 + 0x40);
  Swift::ContiguousArray::get_subscript(param_6,param_5);
  uVar3 = Swift::Hashable::_rawHashValue(*param_2);
  lVar5 = 1L << (*param_2 & 0x3f);
  if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007fa1d8);
    (*pcVar2)();
  }
  uVar3 = lVar5 - 1U & uVar3;
  local_68 = 0;
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = uVar3;
  FUN_1007d7748();
  local_80 = uVar3;
  puStack_78 = param_2;
  local_70 = param_3;
  (**(code **)(lVar7 + 8))(auStack_a0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_7);
  while( true ) {
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007fa1a8);
      (*pcVar2)();
    }
    uVar6 = -1L << (*local_98 & 0x3f);
    uVar3 = (uVar6 ^ uVar3 ^ 0xffffffffffffffff) + ((long)local_98[1] >> 6);
    uVar1 = 0;
    if (~uVar6 <= uVar3) {
      uVar1 = ~uVar6;
    }
    if (uVar3 - uVar1 == param_6) break;
    FUN_1007d7b60();
    uVar3 = local_80;
  }
  *param_1 = local_88;
  return;
}



/* Address: 0x1007fa1d8 | FUN_1007fa1d8 */

void FUN_1007fa1d8(ulong *param_1,undefined8 param_2,ulong param_3,long param_4,ulong *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ContiguousArray CVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  ulong *puStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  
  local_68 = 0;
  uVar3 = param_3;
  puVar8 = param_1;
  uVar9 = param_2;
  local_98 = param_1;
  local_90 = param_2;
  local_88 = param_3;
  FUN_1007d7748();
  local_80 = uVar3;
  puStack_78 = puVar8;
  local_70 = uVar9;
  FUN_1007d7b60();
  uVar3 = local_80;
  if (local_80 != 0) {
    uVar4 = param_3;
    FUN_1007d9460(param_3,param_1,param_2);
    uVar12 = param_3;
    do {
      puVar8 = local_98;
      uVar10 = -1L << (*local_98 & 0x3f);
      uVar5 = (uVar10 ^ uVar3 ^ 0xffffffffffffffff) + ((long)local_98[1] >> 6);
      uVar1 = 0;
      if (~uVar10 <= uVar5) {
        uVar1 = ~uVar10;
      }
      uVar5 = uVar5 - uVar1;
      FUN_1007f1ac4(uVar5,*param_1,param_4,param_6,param_7);
      uVar10 = local_88;
      lVar11 = 1L << (*param_1 & 0x3f);
      uVar1 = lVar11 - 1;
      if (SBORROW8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007fa3dc);
        (*pcVar2)();
      }
      uVar5 = uVar1 & uVar5;
      if ((long)uVar12 < (long)uVar4) {
        if ((long)uVar4 <= (long)uVar5 || (long)uVar5 <= (long)uVar12) {
LAB_1007fa268:
          uVar12 = -1L << (*puVar8 & 0x3f);
          uVar3 = (uVar12 ^ uVar3 ^ 0xffffffffffffffff) + ((long)puVar8[1] >> 6);
          lVar11 = 0;
          if (~uVar12 <= uVar3) {
            lVar11 = uVar12 + 1;
          }
          lVar11 = (uVar3 - ((long)param_1[1] >> 6)) + lVar11;
          FUN_1007d8f38((uVar1 & lVar11 >> 0x3f) + lVar11 ^ uVar1,param_3,param_1,param_2);
          param_3 = uVar10;
          uVar12 = uVar10;
        }
      }
      else if ((long)uVar4 <= (long)uVar5 && (long)uVar5 <= (long)uVar12) goto LAB_1007fa268;
      FUN_1007d7b60();
      uVar3 = local_80;
    } while (local_80 != 0);
  }
  FUN_1007d8f38(0,param_3,param_1,param_2);
  local_58 = *(undefined8 *)(param_4 + 8);
  if (SCARRY8((long)param_5,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007fa3e0);
    (*pcVar2)();
  }
  if ((long)param_5 <= (long)param_5 + 1) {
    local_98 = param_5;
    local_90 = (long)param_5 + 1;
    CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
    puVar7 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140
               ,CVar6.unknown);
    FUN_1007da66c(&local_98,&local_58,param_1,param_2,CVar6.unknown,puVar7,param_7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007fa3e4);
  (*pcVar2)();
}



/* Address: 0x1007fa3e4 | FUN_1007fa3e4 */

void FUN_1007fa3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ContiguousArray param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  __int64 _Var2;
  undefined8 uVar3;
  long unaff_x21;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 *puStack_b8;
  code *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  _Var2 = Swift::ContiguousArray::get_count(param_4);
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_3;
  puStack_68 = param_4.unknown;
  local_60 = param_1;
  uStack_58 = param_2;
  if (_Var2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007fa4c8);
    (*pcVar1)();
  }
  local_a0 = 0;
  local_98 = 0;
  uVar3 = 0;
  FUN_1007fa688(0,param_5,param_6);
  puStack_b8 = &local_a0;
  puStack_a8 = auStack_90;
  local_b0 = FUN_1007fa694;
  local_c0 = uVar3;
  FUN_100690d3c(_Var2 + 0x3fU >> 6,FUN_100690d20,auStack_d0);
  if (unaff_x21 == 0) {
    if (local_98 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007fa4cc);
      (*pcVar1)();
    }
  }
  else {
    FUN_1007f24a0(local_a0,local_98);
  }
  return;
}



/* Address: 0x1007fa4cc | FUN_1007fa4cc */

void FUN_1007fa4cc(long *param_1,long *param_2,undefined8 param_3,ContiguousArray param_4,
                  code *param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ContiguousArray CVar4;
  Range<(extension_in_Swift):Swift_RandomAccessCollection<_where_A_Index:_Swift_Strideable,A_Indices____Swift_Range<A_Index>,A_Index_Stride____Swift_Int>_indices_getter_:_Swift_Range<A_Index>>
  RVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x21;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 auStack_b0 [2];
  undefined auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar11 = *(long *)(param_7 + -8);
  lVar1 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + lVar1;
  local_98 = param_8;
  local_90 = param_3;
  local_88 = param_1;
  local_80 = param_2;
  local_78 = param_6;
  CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar4.unknown);
  RVar5 = (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  if (local_70 != uStack_68) {
    uVar10 = local_70;
    if ((long)uStack_68 < (long)local_70) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007fa5fc);
      (*pcVar3)();
    }
    do {
      if (uStack_68 == uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007fa684);
        (*pcVar3)();
      }
      Swift::ContiguousArray::get_subscript(uVar10,param_4);
      puVar6 = puVar9;
      (*param_5)();
      RVar5.unknown = puVar9;
      (**(code **)(lVar11 + 8))(puVar9,param_7);
      if (unaff_x21 != 0) {
        return;
      }
      if (((ulong)puVar6 & 1) != 0) {
        if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007fa688);
          (*pcVar3)();
        }
        uVar8 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*local_80 + uVar8) = *(ulong *)(*local_80 + uVar8) | 1L << (uVar10 & 0x3f);
      }
      uVar10 = uVar10 + 1;
    } while (uStack_68 != uVar10);
  }
  lVar11 = *local_80;
  lVar7 = local_80[1];
  FUN_100002c1c();
  uVar2 = local_90;
  _swift_retain(local_90);
  _swift_retain(param_4.unknown);
  *(undefined8 *)((long)auStack_b0 + lVar1) = local_98;
  FUN_1007f9970(lVar11,lVar7,0,1,RVar5.unknown,uVar2,param_4.unknown,param_7);
  *local_88 = lVar11;
  local_88[1] = lVar7;
  return;
}



/* Address: 0x1007fa688 | FUN_1007fa688 */

void FUN_1007fa688(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007fa694 | FUN_1007fa694 */

void FUN_1007fa694(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007fa4cc(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007fa6b4 | thunk_FUN_1005c8b68 */

void thunk_FUN_1005c8b68(void)

{
  FUN_1005c8b68();
  return;
}



/* Address: 0x1007fa6b8 | FUN_1007fa6b8 */

void FUN_1007fa6b8(void)

{
  FUN_1007f9fa4();
  return;
}



/* Address: 0x1007fa6cc | thunk_FUN_1007f9250 */

void thunk_FUN_1007f9250(void)

{
  thunk_FUN_1007f9250();
  return;
}



/* Address: 0x1007fa6d0 | FUN_1007fa6d0 */

undefined1  [16] FUN_1007fa6d0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  _swift_bridgeObjectRetain(param_2);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = &DAT_0000003a;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1007fa744 | FUN_1007fa744 */

undefined1  [16] FUN_1007fa744(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain();
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = &DAT_0000003a;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return auVar1;
}



/* Address: 0x1007fa7b8 | thunk_FUN_1007fb0c4 */

void thunk_FUN_1007fb0c4(void)

{
  FUN_1007fb0c4();
  return;
}



/* Address: 0x1007fa7bc | FUN_1007fa7bc */

undefined1  [16] FUN_1007fa7bc(char param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 == '\0') {
    auVar3._8_8_ = 0xe300000000000000;
    auVar3._0_8_ = 0x746567;
    return auVar3;
  }
  uVar1 = 0x6863746566;
  if (param_1 != '\x01') {
    uVar1 = 0x6863746177;
  }
  auVar2._8_8_ = &DAT_e500000000000000;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1007fa808 | FUN_1007fa808 */

void FUN_1007fa808(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  Hasher HVar4;
  char *unaff_x20;
  String SVar5;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar3 = (char *)0x6863746566;
  if (cVar2 != '\x01') {
    pcVar3 = (char *)0x6863746177;
  }
  pcVar1 = (char *)0x746567;
  if (cVar2 != '\0') {
    pcVar1 = pcVar3;
  }
  HVar4.unknown = (undefined1 *)0xe300000000000000;
  if (cVar2 != '\0') {
    HVar4.unknown = &DAT_e500000000000000;
  }
  SVar5.bridgeObject = HVar4.unknown;
  SVar5.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar5);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1007fa89c | FUN_1007fa89c */

void FUN_1007fa89c(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  char *unaff_x20;
  String SVar5;
  
  cVar3 = *unaff_x20;
  pcVar4 = (char *)0x6863746566;
  if (cVar3 != '\x01') {
    pcVar4 = (char *)0x6863746177;
  }
  pcVar1 = (char *)0x746567;
  if (cVar3 != '\0') {
    pcVar1 = pcVar4;
  }
  puVar2 = (undefined1 *)0xe300000000000000;
  if (cVar3 != '\0') {
    puVar2 = &DAT_e500000000000000;
  }
  SVar5.bridgeObject = puVar2;
  SVar5.str = pcVar1;
  Swift::String::hash(param_1,SVar5);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x1007fa90c | FUN_1007fa90c */

void FUN_1007fa90c(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  Hasher HVar4;
  char *unaff_x20;
  String SVar5;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar3 = (char *)0x6863746566;
  if (cVar2 != '\x01') {
    pcVar3 = (char *)0x6863746177;
  }
  pcVar1 = (char *)0x746567;
  if (cVar2 != '\0') {
    pcVar1 = pcVar3;
  }
  HVar4.unknown = (undefined1 *)0xe300000000000000;
  if (cVar2 != '\0') {
    HVar4.unknown = &DAT_e500000000000000;
  }
  SVar5.bridgeObject = HVar4.unknown;
  SVar5.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar5);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1007fa99c | FUN_1007fa99c */

void FUN_1007fa99c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1007fb0c4(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1007fa9c8 | FUN_1007fa9c8 */

void FUN_1007fa9c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0x6863746566;
  if (cVar3 != '\x01') {
    uVar4 = 0x6863746177;
  }
  uVar1 = 0x746567;
  if (cVar3 != '\0') {
    uVar1 = uVar4;
  }
  puVar2 = (undefined1 *)0xe300000000000000;
  if (cVar3 != '\0') {
    puVar2 = &DAT_e500000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1007faa1c | FUN_1007faa1c */

undefined1  [16] FUN_1007faa1c(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  auVar2 = *(undefined1 (*) [16])(unaff_x20 + 8);
  _swift_bridgeObjectRetain(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8));
  _swift_bridgeObjectRetain(uVar1);
  return auVar2;
}



/* Address: 0x1007faa50 | FUN_1007faa50 */

void FUN_1007faa50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Address: 0x1007faa8c | FUN_1007faa8c */

undefined8 FUN_1007faa8c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  return uVar1;
}



/* Address: 0x1007faac8 | FUN_1007faac8 */

void FUN_1007faac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  return;
}



/* Address: 0x1007fab04 | FUN_1007fab04 */

void FUN_1007fab04(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1007fb128();
  iVar1 = *(int *)(lVar2 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007fab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar3.unknown);
  return;
}



/* Address: 0x1007fab50 | FUN_1007fab50 */

void FUN_1007fab50(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1007fb128();
  iVar1 = *(int *)(lVar2 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007fab98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x28))(unaff_x20 + iVar1,param_1,DVar3.unknown);
  return;
}



/* Address: 0x1007fab9c | FUN_1007fab9c */

undefined1  [16] FUN_1007fab9c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1007fb128();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x20);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1007fabc4 | FUN_1007fabc4 */

void FUN_1007fabc4(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  param_1[0x18] = param_5;
  *(undefined8 *)(param_1 + 0x20) = param_6;
  *(undefined8 *)(param_1 + 0x28) = param_7;
  *(undefined8 *)(param_1 + 0x30) = param_8;
  lVar2 = 0;
  FUN_1007fb128();
  iVar1 = *(int *)(lVar2 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007fac24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x20))(param_1 + iVar1,param_9,DVar3.unknown);
  return;
}



/* Address: 0x1007fac28 | FUN_1007fac28 */

void FUN_1007fac28(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007fb13c(unaff_x20 + 0x10,param_1);
  return;
}



/* Address: 0x1007fac34 | FUN_1007fac34 */

void FUN_1007fac34(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007fb18c(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x1007fac3c | FUN_1007fac3c */

void FUN_1007fac3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  param_1[3] = param_4[1];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  *(undefined4 *)((long)param_1 + 0x2f) = *(undefined4 *)((long)param_4 + 0x1f);
  return;
}



/* Address: 0x1007fac54 | FUN_1007fac54 */

void FUN_1007fac54(void)

{
  FUN_1007fb1dc();
  return;
}



/* Address: 0x1007fac60 | FUN_1007fac60 */

void FUN_1007fac60(void)

{
  FUN_1007fb220();
  return;
}



/* Address: 0x1007fac68 | FUN_1007fac68 */

void FUN_1007fac68(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1007fb264();
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x14)));
  return;
}



/* Address: 0x1007fac88 | FUN_1007fac88 */

void FUN_1007fac88(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1007fb264();
  iVar1 = *(int *)(lVar2 + 0x14);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + iVar1));
  *(undefined8 *)(unaff_x20 + iVar1) = param_1;
  return;
}



/* Address: 0x1007facc4 | FUN_1007facc4 */

undefined1  [16] FUN_1007facc4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1007fb264();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x14);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1007facec | FUN_1007facec */

undefined8 FUN_1007facec(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1007fb264();
  uVar2 = *(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x18));
  _swift_errorRetain(uVar2);
  return uVar2;
}



/* Address: 0x1007fad20 | FUN_1007fad20 */

void FUN_1007fad20(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1007fb264();
  iVar1 = *(int *)(lVar2 + 0x18);
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + iVar1));
  *(undefined8 *)(unaff_x20 + iVar1) = param_1;
  return;
}



/* Address: 0x1007fad5c | FUN_1007fad5c */

undefined1  [16] FUN_1007fad5c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1007fb264();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x18);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1007fad84 | FUN_1007fad84 */

undefined8 FUN_1007fad84(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_1007fb264();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x1c));
  uVar2 = *puVar1;
  FUN_1007fb278(uVar2,puVar1[1],*(undefined2 *)(puVar1 + 2),*(undefined1 *)((long)puVar1 + 0x12));
  return uVar2;
}



/* Address: 0x1007fade0 | FUN_1007fade0 */

void FUN_1007fade0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1007fb264();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x1c));
  FUN_1007fb2c4(*puVar1,puVar1[1],*(undefined2 *)(puVar1 + 2),*(undefined1 *)((long)puVar1 + 0x12));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(short *)(puVar1 + 2) = (short)param_3;
  *(char *)((long)puVar1 + 0x12) = (char)((ulong)param_3 >> 0x10);
  return;
}



/* Address: 0x1007fae44 | FUN_1007fae44 */

undefined1  [16] FUN_1007fae44(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1007fb264();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x1c);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1007fae6c | FUN_1007fae6c */

void FUN_1007fae6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  FUN_1007fb264();
  iVar2 = *(int *)(lVar3 + 0x18);
  FUN_1007fb310(param_2,param_1);
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x14)) = param_3;
  *(undefined8 *)(param_1 + iVar2) = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x1c));
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(short *)(puVar1 + 2) = (short)param_7;
  *(char *)((long)puVar1 + 0x12) = (char)((uint)param_7 >> 0x10);
  return;
}



/* Address: 0x1007faf00 | FUN_1007faf00 */

void FUN_1007faf00(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007faf10);
  (*pcVar1)();
}



/* Address: 0x1007faf10 | FUN_1007faf10 */

void FUN_1007faf10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined1 auStack_68 [40];
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    param_2 = param_2 + 0x20;
    do {
      FUN_100076688(param_2,auStack_68);
      FUN_100076508(auStack_68,auStack_90);
      lVar2 = lStack_70;
      uVar1 = local_78;
      FUN_100004640(auStack_90,local_78);
      (**(code **)(lVar2 + 8))(param_1,uVar1,lVar2);
      FUN_100004594(auStack_90);
      param_2 = param_2 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Address: 0x1007fafa4 | FUN_1007fafa4 */

void FUN_1007fafa4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1007faf10(param_1,*unaff_x20);
  return;
}



/* Address: 0x1007fafac | FUN_1007fafac */

undefined8 FUN_1007fafac(void)

{
  return 0;
}



/* Address: 0x1007fafbc | FUN_1007fafbc */

void FUN_1007fafbc(void)

{
  FUN_100003a00(&DAT_100fe6e20,FUN_1007fc410,&TargetProtocolConformanceDescriptor_100c7ad60);
  FUN_100003a00(&DAT_100fe6e28,FUN_1007fc410,&TargetProtocolConformanceDescriptor_100c7ab5c);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1007fb040 | FUN_1007fb040 */

void FUN_1007fb040(void)

{
  FUN_100003a00(&DAT_100fe6e10,FUN_1007fc3fc,&TargetProtocolConformanceDescriptor_100c7acd0);
  FUN_100003a00(&DAT_100fe6e18,FUN_1007fc3fc,&TargetProtocolConformanceDescriptor_100c7ac70);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1007fb0c4 | FUN_1007fb0c4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007fb100 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1007fb0c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fe6dc8,&DAT_100c7aa80);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x1007fb128 | FUN_1007fb128 */

void FUN_1007fb128(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fe6d10,&TargetStructDescriptor_100cc1878);
  return;
}



/* Address: 0x1007fb13c | FUN_1007fb13c */

undefined8 FUN_1007fb13c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe6c10;
  FUN_1000f7830(&DAT_100fe6c10,&DAT_100c7a880);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1007fb18c | FUN_1007fb18c */

undefined8 FUN_1007fb18c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe6c10;
  FUN_1000f7830(&DAT_100fe6c10,&DAT_100c7a880);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1007fb1dc | FUN_1007fb1dc */

undefined8 FUN_1007fb1dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1007fb128();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1007fb220 | FUN_1007fb220 */

undefined8 FUN_1007fb220(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1007fb128();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1007fb264 | FUN_1007fb264 */

void FUN_1007fb264(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fe6c78,&TargetStructDescriptor_100cc1850);
  return;
}



/* Address: 0x1007fb278 | FUN_1007fb278 */

void FUN_1007fb278(void)

{
  char in_w3;
  
  if (in_w3 == '\x01') {
    _swift_errorRetain();
    return;
  }
  FUN_1007fb28c();
  return;
}



/* Address: 0x1007fb28c | FUN_1007fb28c */

void FUN_1007fb28c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 0xff00) == 0x200) {
    return;
  }
  FUN_1007fb2a0();
  return;
}



/* Address: 0x1007fb2a0 | FUN_1007fb2a0 */

void FUN_1007fb2a0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((5 < (param_3 & 0xff) - 4) && (param_1 = param_2, (param_3 & 0xff) != 0)) {
    return;
  }
  _swift_bridgeObjectRetain(param_1);
  return;
}


