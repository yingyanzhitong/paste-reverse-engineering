/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007f7840 | FUN_1007f7840 */

bool FUN_1007f7840(undefined8 param_1,undefined8 param_2,Range<__int64> param_3,
                  ArraySlice<undefined> param_4,undefined8 param_5,undefined8 param_6,
                  Range<__int64> param_7,ContiguousArray param_8)

{
  bool bVar1;
  ArraySlice<undefined> AVar2;
  ArraySlice<undefined> AVar3;
  
  AVar2 = Swift::ContiguousArray::get_subscript(param_3,param_4.unknown);
  AVar3 = Swift::ContiguousArray::get_subscript(param_7,param_8);
  bVar1 = (extension_Swift)::Swift::ArraySlice::____infix(AVar2,param_4);
  _swift_unknownObjectRelease(AVar2.unknown);
  _swift_unknownObjectRelease(AVar3.unknown);
  return bVar1;
}



/* Address: 0x1007f7910 | FUN_1007f7910 */

uint FUN_1007f7910(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  FUN_1007f7840(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),param_5,*(undefined8 *)(param_2 + 8),
                *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return (uint)param_1 & 1;
}



/* Address: 0x1007f7950 | FUN_1007f7950 */

void FUN_1007f7950(Hasher param_1,Hasher param_2,undefined8 param_3,Range<__int64> param_4,
                  ContiguousArray param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  ArraySlice<undefined> AVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  Range<__int64> RVar6;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar4 = *(long *)(param_6 + -8);
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar5 = auStack_70 + -uVar3;
  if (SBORROW8((long)param_5.unknown,(long)param_4.unknown)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f7a8c);
    (*pcVar1)();
  }
  Swift::Hasher::_combine((long)param_5.unknown - (long)param_4.unknown,param_2);
  if (param_4.unknown != param_5.unknown) {
    RVar6.unknown = param_4.unknown;
    local_68 = param_7;
    if ((long)param_5.unknown <= (long)param_4.unknown) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f7a90);
      (*pcVar1)();
    }
    do {
      AVar2 = Swift::ContiguousArray::get_subscript(param_4,param_5);
      Swift::ArraySlice::get_subscript((__int64)RVar6.unknown,(ArraySlice)AVar2.unknown);
      _swift_unknownObjectRelease(AVar2.unknown);
      RVar6.unknown = RVar6.unknown + 1;
      (**(code **)(lVar4 + 0x20))(puVar5,(long)puVar5 - uVar3,param_6);
      Swift::Hashable::hash(param_1);
      (**(code **)(lVar4 + 8))(puVar5,param_6);
    } while (param_5.unknown != RVar6.unknown);
  }
  return;
}



/* Address: 0x1007f7a90 | FUN_1007f7a90 */

void FUN_1007f7a90(void)

{
  Hasher HVar1;
  undefined1 auStack_88 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_88;
  FUN_1007f7950();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007f7b04 | FUN_1007f7b04 */

void FUN_1007f7b04(long param_1)

{
  long unaff_x20;
  
  FUN_1007f7a90(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007f7b14 | FUN_1007f7b14 */

void FUN_1007f7b14(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_1007f7950(param_1,param_2,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1007f7b24 | FUN_1007f7b24 */

void FUN_1007f7b24(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1007f7950();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007f7b6c | FUN_1007f7b6c */

void FUN_1007f7b6c(undefined8 param_1,code *param_2,undefined8 param_3,_SliceBuffer param_4)

{
  UnsafeMutablePointer<undefined> start;
  long lVar1;
  long lVar2;
  long unaff_x21;
  long in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  code *pcStack_68;
  
  local_78 = in_stack_00000000;
  lVar2 = *(long *)(in_stack_00000000 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  local_70 = param_3;
  pcStack_68 = param_2;
  start = Swift::_SliceBuffer::get_firstElementAddress(param_4);
  Swift::_SliceBuffer::get_count(param_4);
  Swift::UnsafeBufferPointer::_init((__int64)start.unknown);
  (*pcStack_68)(param_1);
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (in_stack_00000010,auStack_80 + -(lVar1 + 0xfU & 0xfffffffffffffff0),local_78);
  }
  return;
}



/* Address: 0x1007f7c64 | FUN_1007f7c64 */

void FUN_1007f7c64(undefined8 param_1,undefined8 param_2,Range<__int64> param_3,
                  ContiguousArray param_4)

{
  ArraySlice<undefined> AVar1;
  
  AVar1 = Swift::ContiguousArray::get_subscript(param_3,param_4);
  Swift::ArraySlice::_copyToContiguousArray((ArraySlice)AVar1.unknown);
  return;
}



/* Address: 0x1007f7c98 | FUN_1007f7c98 */

void FUN_1007f7c98(__int64 *param_1,UnsafePointer<undefined> param_2,long param_3)

{
  __int64 count;
  code *pcVar1;
  long unaff_x20;
  
  if (*(undefined **)(unaff_x20 + 0x20) == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f7cf8);
    (*pcVar1)();
  }
  count = *(long *)(unaff_x20 + 0x28);
  if (param_3 <= *(long *)(unaff_x20 + 0x28)) {
    count = param_3;
  }
  if (0 < count) {
    if (param_2.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f7cfc);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::initialize
              (param_2,count,(UnsafeMutablePointer)*(undefined **)(unaff_x20 + 0x20));
  }
  *param_1 = count;
  return;
}



/* Address: 0x1007f7cfc | FUN_1007f7cfc */

void FUN_1007f7cfc(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a3a0,param_1);
  return;
}



/* Address: 0x1007f7d0c | FUN_1007f7d0c */

void FUN_1007f7d0c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a450,param_1);
  return;
}



/* Address: 0x1007f7d1c | FUN_1007f7d1c */

void FUN_1007f7d1c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a3f0,param_1);
  return;
}



/* Address: 0x1007f7d2c | FUN_1007f7d2c */

void FUN_1007f7d2c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetGenericWitnessTable_100c7a328,param_1);
  return;
}



/* Address: 0x1007f7d3c | FUN_1007f7d3c */

void FUN_1007f7d3c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a530,param_1);
  return;
}



/* Address: 0x1007f7d4c | FUN_1007f7d4c */

undefined8 * FUN_1007f7d4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1007f7d88 | FUN_1007f7d88 */

undefined8 * FUN_1007f7d88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x1007f7df4 | FUN_1007f7df4 */

undefined8 * FUN_1007f7df4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  return param_1;
}



/* Address: 0x1007f7e38 | thunk_FUN_1007f76d0 */

void thunk_FUN_1007f76d0(void)

{
  thunk_FUN_1007f76d0();
  return;
}



/* Address: 0x1007f7e3c | thunk_FUN_1007f7d1c */

void thunk_FUN_1007f7d1c(void)

{
  FUN_1007f7d1c();
  return;
}



/* Address: 0x1007f7e40 | thunk_FUN_1007f7d0c */

void thunk_FUN_1007f7d0c(void)

{
  FUN_1007f7d0c();
  return;
}



/* Address: 0x1007f7e44 | thunk_FUN_1007f6cf0 */

void thunk_FUN_1007f6cf0(void)

{
  thunk_FUN_1007f6cf0();
  return;
}



/* Address: 0x1007f7e48 | thunk_FUN_1007f770c */

void thunk_FUN_1007f770c(void)

{
  thunk_FUN_1007f770c();
  return;
}



/* Address: 0x1007f7e4c | thunk_FUN_1007f94cc */

void thunk_FUN_1007f94cc(void)

{
  FUN_1007f94cc();
  return;
}



/* Address: 0x1007f7e50 | thunk_FUN_1007f982c */

void thunk_FUN_1007f982c(void)

{
  FUN_1007f982c();
  return;
}



/* Address: 0x1007f7e54 | thunk_FUN_1007f9608 */

void thunk_FUN_1007f9608(void)

{
  FUN_1007f9608();
  return;
}



/* Address: 0x1007f7e58 | thunk_FUN_1007f964c */

void thunk_FUN_1007f964c(void)

{
  FUN_1007f964c();
  return;
}



/* Address: 0x1007f7e5c | thunk_FUN_1007f9bbc */

void thunk_FUN_1007f9bbc(void)

{
  FUN_1007f9bbc();
  return;
}



/* Address: 0x1007f7e60 | FUN_1007f7e60 */

undefined * FUN_1007f7e60(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    _swift_retain();
    puVar2 = (undefined *)(lVar1 + 0x10);
    FUN_1007d85b4(puVar2,param_1 + 0x20);
    _swift_release(param_1);
    return puVar2;
  }
  return PTR___swiftEmptyArrayStorage_100eae0d8;
}



/* Address: 0x1007f7eac | FUN_1007f7eac */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007f7f28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1007f7eac(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ContiguousArray<undefined> CVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(param_5 + -8);
  (**(code **)(lVar6 + 0x10))
            (auStack_78 + (-8 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0)),param_3,
             param_5);
  CVar2 = Swift::ContiguousArray::_init(param_1,param_4,param_5,param_7);
  lVar3 = Swift::ContiguousArray::get_count((ContiguousArray)CVar2.unknown);
  FUN_1007d7edc();
  if (-1 < (long)param_2) {
    if ((long)param_1 < 0x39) {
      if (lVar3 <= (long)param_1) {
        puVar5 = &DAT_00000001;
        if (param_1 != (undefined1 *)0x0) {
          lVar3 = 1L << ((ulong)param_1 & 0x3f);
          puVar5 = (undefined1 *)(lVar3 + -1);
          if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f809c);
            (*pcVar1)();
          }
        }
        if (puVar5 <= param_2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f808c);
          (*pcVar1)();
        }
        if (((long)param_1 < 5) && (param_2 != (undefined1 *)0x0)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f80a0);
          (*pcVar1)();
        }
        puVar5 = param_1;
        if ((long)param_1 < 6) {
          puVar5 = (undefined1 *)0x5;
        }
        local_80 = param_3;
        FUN_1007dd4ac(puVar5,0);
        _swift_beginAccess(puVar5 + 0x10,auStack_78,1,0);
        FUN_1007dd60c(param_2);
        puVar4 = puVar5 + 0x10;
        FUN_1007f80a0(puVar4,puVar5 + 0x20,CVar2.unknown,param_4,param_5,param_6,param_7);
        if (((ulong)puVar4 & 1) != 0) {
          if ((long)param_1 < 5) {
            puVar4 = (undefined1 *)0x0;
          }
          else {
            _swift_retain(puVar5);
            puVar4 = puVar5;
          }
          FUN_10069d9ec(CVar2.unknown,puVar4,param_4,param_6);
          _swift_release(puVar5);
          (**(code **)(lVar6 + 8))(local_80,param_5);
          puVar5 = CVar2.unknown;
          FUN_1007f9608(CVar2.unknown,puVar4,param_4,param_6);
          if (puVar5 == param_1) {
            puVar5 = CVar2.unknown;
            FUN_1007f9bbc(CVar2.unknown,puVar4,param_4,param_6);
            if (puVar5 == param_2) {
              auVar7._8_8_ = puVar4;
              auVar7._0_8_ = CVar2.unknown;
              return auVar7;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f8098);
            (*pcVar1)();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f8094);
          (*pcVar1)();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f8090);
        (*pcVar1)();
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f8088);
  (*pcVar1)();
}



/* Address: 0x1007f80a0 | FUN_1007f80a0 */

uint FUN_1007f80a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 local_40;
  undefined1 local_38 [8];
  
  local_40 = param_3;
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar1.unknown);
  puVar3 = local_38;
  FUN_1007dbd8c(puVar3,&local_40,param_1,param_2,CVar1.unknown,puVar2,param_6);
  return (uint)puVar3 & 1;
}



/* Address: 0x1007f8120 | FUN_1007f8120 */

undefined1
FUN_1007f8120(long param_1,ContiguousArray param_2,long param_3,undefined *param_4,long param_5,
             undefined8 param_6)

{
  __int64 _Var1;
  __int64 _Var2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  undefined8 local_70;
  ContiguousArray local_68;
  
  lVar5 = *(long *)(param_5 + -8);
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  uVar7 = (long)&local_70 - uVar4;
  if (((param_1 == 0) || (param_3 == 0)) || (param_1 != param_3)) {
    local_70 = param_6;
    local_68.unknown = param_4;
    _Var1 = Swift::ContiguousArray::get_count(param_2);
    _Var2 = Swift::ContiguousArray::get_count(local_68);
    if (_Var1 == _Var2) {
      lVar8 = 0;
      lVar6 = *(long *)(param_2.unknown + 0x10);
      do {
        if (lVar6 == lVar8) {
          return 1;
        }
        Swift::ContiguousArray::get_subscript(lVar8,param_2);
        lVar8 = lVar8 + 1;
        (**(code **)(lVar5 + 0x20))(uVar7,uVar7 - uVar4,param_5);
        uVar3 = uVar7;
        FUN_1007f6224(uVar7,param_3,local_68.unknown,param_5,local_70);
        (**(code **)(lVar5 + 8))(uVar7,param_5);
        uVar9 = 0;
      } while ((uVar3 & 1) != 0);
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 1;
  }
  return uVar9;
}



/* Address: 0x1007f824c | FUN_1007f824c */

undefined1  [16] FUN_1007f824c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x1f11);
  }
  *param_1 = puVar1;
  puVar1[2] = unaff_x20;
  uVar2 = unaff_x20[1];
  *puVar1 = *unaff_x20;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar1[3] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  puVar1[4] = uVar3;
  FUN_1007f61ec();
  *unaff_x20 = uVar2;
  unaff_x20[1] = uVar3;
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = FUN_1007f82cc;
  return auVar4;
}



/* Address: 0x1007f82cc | FUN_1007f82cc */

void FUN_1007f82cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  FUN_1007f830c(param_1[2],param_1,param_1[3],param_1[4]);
  uVar1 = *param_1;
  _swift_release(param_1[1]);
  _swift_release(uVar1);
  _free(param_1);
  return;
}



/* Address: 0x1007f830c | FUN_1007f830c */

void FUN_1007f830c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  _swift_retain(uVar1);
  _swift_retain(uVar3);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return;
}



/* Address: 0x1007f8354 | FUN_1007f8354 */

void FUN_1007f8354(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  FUN_1007f61ec();
  _swift_release(uVar2);
  _swift_release(uVar1);
  *unaff_x20 = uVar3;
  unaff_x20[1] = uVar4;
  FUN_1007f830c();
  _swift_release(param_2);
  _swift_release(param_1);
  return;
}



/* Address: 0x1007f83f0 | FUN_1007f83f0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007f8548 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007f83f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  AncestorRepresentation AVar2;
  DisplayStyle DVar3;
  undefined *puVar4;
  undefined8 uVar6;
  ContiguousArray CVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar5;
  
  AVar2 = Swift::Mirror::AncestorRepresentation::typeMetadataAccessor();
  puVar8 = auStack_80 +
           -(*(long *)(*(long *)(CONCAT71((int7)((ulong)param_2 >> 8),AVar2.value) + -8) + 0x40) +
             0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fe6698;
  FUN_1000f7830(&DAT_100fe6698,&TargetResilientWitness_100c79308);
  lVar9 = (long)puVar8 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Swift_Mirror_DisplayStyle_collection_Swift_Mirror_DisplayStyle_Type___>_Swift_Mirror_DisplayStyle_100eadd80
  ;
  local_78 = param_3;
  local_70 = param_2;
  uStack_68 = param_3;
  DVar3 = Swift::Mirror::DisplayStyle::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)puVar4 >> 8),DVar3.value);
  lVar10 = *(long *)(lVar5 + -8);
  (**(code **)(lVar10 + 0x68))(lVar9,uVar1,lVar5);
  (**(code **)(lVar10 + 0x38))(lVar9,0,1,lVar5);
  uVar6 = 0;
  FUN_1007f856c(0,param_4,param_5);
  CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar4 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar7.unknown
            );
  FUN_1007de1ec(puVar8,uVar6,CVar7.unknown,puVar4);
  _swift_retain(param_2);
  _swift_retain_n(param_3,2);
  Swift::Mirror::_init(param_1,puVar4,&local_78,lVar9,puVar8,uVar6,CVar7.unknown,puVar4);
  return;
}



/* Address: 0x1007f856c | FUN_1007f856c */

void FUN_1007f856c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007f8578 | FUN_1007f8578 */

void FUN_1007f8578(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1007f83f0(*unaff_x20,unaff_x20[1],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007f8588 | FUN_1007f8588 */

void FUN_1007f8588(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  FUN_1007f8120(*param_1,param_1[1],*param_2,param_2[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x1007f85a4 | FUN_1007f85a4 */

void FUN_1007f85a4(Hasher param_1,Hasher param_2,undefined *param_3,undefined *param_4)

{
  __int64 seed;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  __uint64 _Var6;
  long lVar7;
  undefined *local_c0;
  ContiguousArray local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar3 = *(long *)(param_4 + -8);
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar4 = (long)&local_c0 - uVar2;
  uStack_88 = *(undefined8 *)(param_1.unknown + 0x28);
  local_90 = *(undefined8 *)(param_1.unknown + 0x20);
  uStack_78 = *(undefined8 *)(param_1.unknown + 0x38);
  uStack_80 = *(undefined8 *)(param_1.unknown + 0x30);
  local_70 = *(undefined8 *)(param_1.unknown + 0x40);
  uStack_a8 = *(undefined8 *)(param_1.unknown + 8);
  local_b0 = *(undefined8 *)param_1.unknown;
  uStack_98 = *(undefined8 *)(param_1.unknown + 0x18);
  uStack_a0 = *(undefined8 *)(param_1.unknown + 0x10);
  local_c0 = param_1.unknown;
  seed = Swift::Hasher::finalize(param_1);
  lVar5 = *(long *)(param_3 + 0x10);
  if (lVar5 == 0) {
    _Var6 = 0;
  }
  else {
    _Var6 = 0;
    lVar7 = 0;
    local_b8.unknown = param_3;
    do {
      Swift::ContiguousArray::get_subscript(lVar7,local_b8);
      lVar7 = lVar7 + 1;
      (**(code **)(lVar3 + 0x20))(lVar4,lVar4 - uVar2,param_4);
      uVar1 = Swift::Hashable::_rawHashValue(seed);
      param_2.unknown = param_4;
      (**(code **)(lVar3 + 8))(lVar4);
      _Var6 = uVar1 ^ _Var6;
    } while (lVar5 != lVar7);
  }
  Swift::Hasher::_combine(_Var6,param_2);
  return;
}



/* Address: 0x1007f86cc | FUN_1007f86cc */

void FUN_1007f86cc(void)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_1007f85a4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007f8728 | FUN_1007f8728 */

void FUN_1007f8728(long param_1)

{
  long unaff_x20;
  
  FUN_1007f86cc(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007f8734 | FUN_1007f8734 */

void FUN_1007f8734(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_1007f85a4(param_1,param_2,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1007f8740 | FUN_1007f8740 */

void FUN_1007f8740(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1007f85a4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007f8784 | FUN_1007f8784 */

void FUN_1007f8784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  uVar1 = 0;
  local_38 = param_1;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540,uVar1);
  FUN_1007e966c(&local_38,param_2,uVar1,param_3,puVar2);
  return;
}



/* Address: 0x1007f87ec | FUN_1007f87ec */

void FUN_1007f87ec(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  
  lVar5 = *(long *)(param_3 + 0x10);
  uVar1 = 0;
  local_38 = param_2;
  Swift::Array<undefined>::typeMetadataAccessor();
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540,uVar1);
  puVar3 = &local_38;
  FUN_1007e966c(puVar3,lVar5,uVar1,uVar4,puVar2);
  *param_1 = (long)puVar3;
  param_1[1] = lVar5;
  return;
}



/* Address: 0x1007f8864 | FUN_1007f8864 */

void FUN_1007f8864(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  FUN_1007f61ec();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1007f8890 | thunk_FUN_1007f61ec */

void thunk_FUN_1007f61ec(void)

{
  FUN_1007f61ec();
  return;
}



/* Address: 0x1007f8894 | FUN_1007f8894 */

void FUN_1007f8894(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1007f6224(param_1,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1007f88a4 | thunk_FUN_1007f6224 */

void thunk_FUN_1007f6224(void)

{
  FUN_1007f6224();
  return;
}



/* Address: 0x1007f88a8 | FUN_1007f88a8 */

void FUN_1007f88a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = uVar1;
  uVar4 = uVar2;
  thunk_FUN_1007f612c(uVar1,uVar2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                      *(undefined8 *)(param_3 + 0x18));
  _swift_release(uVar2);
  _swift_release(uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}



/* Address: 0x1007f8908 | FUN_1007f8908 */

undefined1  [16] FUN_1007f8908(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1;
  uVar2 = param_2;
  thunk_FUN_1007f612c();
  _swift_release(param_2);
  _swift_release(param_1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1007f8954 | FUN_1007f8954 */

void FUN_1007f8954(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_1007f90dc(uVar3,uVar4,uVar1,uVar2,*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  _swift_release(uVar2);
  _swift_release(uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}



/* Address: 0x1007f89bc | FUN_1007f89bc */

undefined1  [16]
FUN_1007f89bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  FUN_1007f90dc();
  _swift_release(param_4);
  _swift_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1007f8a08 | FUN_1007f8a08 */

void FUN_1007f8a08(void)

{
  FUN_1007f8d00();
  return;
}



/* Address: 0x1007f8a14 | thunk_FUN_1007f8a18 */

uint thunk_FUN_1007f8a18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  __int64 _Var2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(param_3 + 0x10);
  _Var2 = 0;
  FUN_1007fa688(0,lVar1,*(undefined8 *)(param_3 + 0x18));
  uVar3 = param_2;
  FUN_1007ea300(param_2);
  Swift::ContiguousArray::get_subscript(_Var2,(ContiguousArray)*(undefined **)(unaff_x20 + 8));
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_2,lVar1);
  return (uint)uVar3 & 1;
}



/* Address: 0x1007f8a18 | FUN_1007f8a18 */

uint FUN_1007f8a18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  __int64 _Var2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(param_3 + 0x10);
  _Var2 = 0;
  FUN_1007fa688(0,lVar1,*(undefined8 *)(param_3 + 0x18));
  uVar3 = param_2;
  FUN_1007ea300(param_2);
  Swift::ContiguousArray::get_subscript(_Var2,(ContiguousArray)*(undefined **)(unaff_x20 + 8));
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_2,lVar1);
  return (uint)uVar3 & 1;
}



/* Address: 0x1007f8a94 | FUN_1007f8a94 */

void FUN_1007f8a94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  FUN_1007f62b4(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1007f8ad8 | thunk_FUN_1007f8adc */

void thunk_FUN_1007f8adc(undefined8 param_1,ulong param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  __int64 _Var3;
  ulong uVar4;
  ContiguousArray CVar5;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *(long *)(param_3 + 0x10);
  _Var3 = 0;
  FUN_1007fa688(0,lVar2,*(undefined8 *)(param_3 + 0x18));
  uVar4 = param_2;
  FUN_1007ea300();
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    plVar6 = (long *)(unaff_x20 + 8);
    Swift::ContiguousArray::get_subscript(_Var3,(undefined *)*plVar6);
    CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar5);
    lVar8 = *plVar6;
    FUN_1007e381c(_Var3,lVar8,lVar2);
    FUN_100636dd8(lVar8,lVar2);
    lVar7 = *(long *)(lVar2 + -8);
    (**(code **)(lVar7 + 0x28))(lVar8 + *(long *)(lVar7 + 0x48) * _Var3,param_2,lVar2);
    FUN_1007e3838(plVar6,lVar2);
  }
  else {
    lVar7 = *(long *)(lVar2 + -8);
    (**(code **)(lVar7 + 8))(param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001007f8bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x38))(param_1,!bVar1,1,lVar2);
  return;
}



/* Address: 0x1007f8adc | FUN_1007f8adc */

void FUN_1007f8adc(undefined8 param_1,ulong param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  __int64 _Var3;
  ulong uVar4;
  ContiguousArray CVar5;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *(long *)(param_3 + 0x10);
  _Var3 = 0;
  FUN_1007fa688(0,lVar2,*(undefined8 *)(param_3 + 0x18));
  uVar4 = param_2;
  FUN_1007ea300();
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    plVar6 = (long *)(unaff_x20 + 8);
    Swift::ContiguousArray::get_subscript(_Var3,(undefined *)*plVar6);
    CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar5);
    lVar8 = *plVar6;
    FUN_1007e381c(_Var3,lVar8,lVar2);
    FUN_100636dd8(lVar8,lVar2);
    lVar7 = *(long *)(lVar2 + -8);
    (**(code **)(lVar7 + 0x28))(lVar8 + *(long *)(lVar7 + 0x48) * _Var3,param_2,lVar2);
    FUN_1007e3838(plVar6,lVar2);
  }
  else {
    lVar7 = *(long *)(lVar2 + -8);
    (**(code **)(lVar7 + 8))(param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001007f8bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x38))(param_1,!bVar1,1,lVar2);
  return;
}



/* Address: 0x1007f8bcc | FUN_1007f8bcc */

void FUN_1007f8bcc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  FUN_1007f1e74(uVar1,uVar2,uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1007f8c1c | FUN_1007f8c1c */

void FUN_1007f8c1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  FUN_1007f1e74(param_1,param_2,uVar1);
  _swift_release(param_2);
  _swift_release(param_1);
  return;
}



/* Address: 0x1007f8c6c | FUN_1007f8c6c */

void FUN_1007f8c6c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1007f8c7c(*param_1,param_1[1],param_2);
  return;
}


