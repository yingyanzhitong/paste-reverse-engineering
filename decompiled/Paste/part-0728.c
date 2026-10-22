/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007f8c7c | FUN_1007f8c7c */

void FUN_1007f8c7c(void)

{
  FUN_1007f8ca4();
  return;
}



/* Address: 0x1007f8c88 | FUN_1007f8c88 */

void FUN_1007f8c88(undefined8 *param_1,undefined8 param_2)

{
  FUN_1007f8c98(*param_1,param_1[1],param_2);
  return;
}



/* Address: 0x1007f8c98 | FUN_1007f8c98 */

void FUN_1007f8c98(void)

{
  FUN_1007f8ca4();
  return;
}



/* Address: 0x1007f8ca4 | FUN_1007f8ca4 */

void FUN_1007f8ca4(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  (*param_4)(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1007f8cf4 | FUN_1007f8cf4 */

void FUN_1007f8cf4(void)

{
  FUN_1007f8d00();
  return;
}



/* Address: 0x1007f8d00 | FUN_1007f8d00 */

void FUN_1007f8d00(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  (*param_5)(uVar1,uVar2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1007f8d3c | FUN_1007f8d3c */

void FUN_1007f8d3c(void)

{
  FUN_1007f8d60();
  return;
}



/* Address: 0x1007f8d48 | FUN_1007f8d48 */

void FUN_1007f8d48(void)

{
  FUN_1007f8d60();
  return;
}



/* Address: 0x1007f8d54 | FUN_1007f8d54 */

void FUN_1007f8d54(void)

{
  FUN_1007f8d60();
  return;
}



/* Address: 0x1007f8d60 | FUN_1007f8d60 */

void FUN_1007f8d60(undefined8 *param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 *unaff_x20;
  
  (*param_4)(*param_1,param_1[1],*unaff_x20,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
             *(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1007f8d7c | thunk_FUN_1007f4bc0 */

void thunk_FUN_1007f4bc0(void)

{
  thunk_FUN_1007f4bc0();
  return;
}



/* Address: 0x1007f8d80 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SetAlgebra::get_isEmpty */

bool (extension_Swift)::Swift::SetAlgebra::get_isEmpty(void)

{
  bool bVar1;
  
  bVar1 = get_isEmpty();
  return bVar1;
}



/* Address: 0x1007f8d84 | FUN_1007f8d84 */

void FUN_1007f8d84(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + -8);
  puVar1 = &stack0xffffffffffffffb0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  FUN_1007e9c6c(puVar1,uVar2,param_3,*(undefined8 *)(param_5 + 0x18),param_4);
  (**(code **)(lVar3 + 8))(param_2,param_3);
  *param_1 = puVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1007f8e2c | FUN_1007f8e2c */

undefined1  [16]
FUN_1007f8e2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_3 + -8);
  puVar1 = &stack0xffffffffffffffb0 + -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar2 + 0x10))(puVar1,param_1);
  FUN_1007e9c6c(puVar1,param_2,param_3,param_4,param_5);
  (**(code **)(lVar2 + 8))(param_1,param_3);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = puVar1;
  return auVar3;
}



/* Address: 0x1007f8ed8 | FUN_1007f8ed8 */

void FUN_1007f8ed8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1007f8ee8(*param_1,param_1[1],param_2);
  return;
}



/* Address: 0x1007f8ee8 | FUN_1007f8ee8 */

void FUN_1007f8ee8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar6 = &local_50;
  uVar7 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar4 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  FUN_1007fa688(0,uVar1,uVar3);
  uVar5 = 0x100c7a0c8;
  _swift_getWitnessTable(0x100c7a0c8,uVar4);
  FUN_1007f4fb0(&local_50,uVar7,uVar2,uVar1,uVar4,uVar3,uVar5);
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar7;
  return;
}



/* Address: 0x1007f8f6c | thunk_FUN_1007e9fe8 */

void thunk_FUN_1007e9fe8(void)

{
  FUN_1007e9fe8();
  return;
}



/* Address: 0x1007f8f70 | FUN_1007f8f70 */

void FUN_1007f8f70(void)

{
  FUN_1007f9040();
  return;
}



/* Address: 0x1007f8f7c | FUN_1007f8f7c */

void FUN_1007f8f7c(void)

{
  FUN_1007f8fe4();
  return;
}



/* Address: 0x1007f8f88 | thunk_FUN_1007f2058 */

void thunk_FUN_1007f2058(void)

{
  FUN_1007f2058();
  return;
}



/* Address: 0x1007f8f8c | FUN_1007f8f8c */

void FUN_1007f8f8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  FUN_1007f1cd0(param_1,uVar1,param_3,param_4);
  return;
}



/* Address: 0x1007f8fd8 | FUN_1007f8fd8 */

void FUN_1007f8fd8(void)

{
  FUN_1007f8fe4();
  return;
}



/* Address: 0x1007f8fe4 | FUN_1007f8fe4 */

undefined1  [16]
FUN_1007f8fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  (*param_8)();
  (**(code **)(*(long *)(param_5 + -8) + 8))(param_1,param_5);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1007f9034 | FUN_1007f9034 */

void FUN_1007f9034(void)

{
  FUN_1007f9040();
  return;
}



/* Address: 0x1007f9040 | FUN_1007f9040 */

void FUN_1007f9040(undefined8 param_1,long param_2,long param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007fa688(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  (*param_5)(param_1,uVar1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001007f90a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
  return;
}



/* Address: 0x1007f90ac | thunk_FUN_1007f2d00 */

void thunk_FUN_1007f2d00(void)

{
  FUN_1007f2d00();
  return;
}



/* Address: 0x1007f90b0 | thunk_FUN_1007f454c */

void thunk_FUN_1007f454c(void)

{
  FUN_1007f454c();
  return;
}



/* Address: 0x1007f90b4 | thunk_FUN_1007f4668 */

void thunk_FUN_1007f4668(void)

{
  FUN_1007f4668();
  return;
}



/* Address: 0x1007f90b8 | thunk_FUN_1007f4bdc */

void thunk_FUN_1007f4bdc(void)

{
  FUN_1007f4bdc();
  return;
}



/* Address: 0x1007f90bc | thunk_FUN_1007f4c9c */

void thunk_FUN_1007f4c9c(void)

{
  thunk_FUN_1007f4c9c();
  return;
}



/* Address: 0x1007f90c0 | thunk_FUN_1007f3548 */

void thunk_FUN_1007f3548(void)

{
  FUN_1007f3548();
  return;
}



/* Address: 0x1007f90c4 | thunk_FUN_1007f35d8 */

void thunk_FUN_1007f35d8(void)

{
  FUN_1007f35d8();
  return;
}



/* Address: 0x1007f90c8 | thunk_FUN_1007f3d5c */

void thunk_FUN_1007f3d5c(void)

{
  FUN_1007f3d5c();
  return;
}



/* Address: 0x1007f90cc | thunk_FUN_1007f3e18 */

void thunk_FUN_1007f3e18(void)

{
  FUN_1007f3e18();
  return;
}



/* Address: 0x1007f90d0 | thunk_FUN_1007f26f8 */

void thunk_FUN_1007f26f8(void)

{
  FUN_1007f26f8();
  return;
}



/* Address: 0x1007f90d4 | thunk_FUN_1007f2ac4 */

void thunk_FUN_1007f2ac4(void)

{
  FUN_1007f2ac4();
  return;
}



/* Address: 0x1007f90d8 | thunk_FUN_1007f612c */

undefined1  [16]
thunk_FUN_1007f612c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_1007fa688(0,param_5,param_6);
  FUN_1007f1e74(param_1,param_2,uVar2);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Address: 0x1007f90dc | FUN_1007f90dc */

void FUN_1007f90dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _swift_retain(param_3);
  _swift_retain(param_4);
  FUN_1007f1ec4(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x1007f9144 | FUN_1007f9144 */

void FUN_1007f9144(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a650,param_1);
  return;
}



/* Address: 0x1007f9154 | FUN_1007f9154 */

void FUN_1007f9154(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a6b8,param_1);
  return;
}



/* Address: 0x1007f9164 | FUN_1007f9164 */

undefined8 * FUN_1007f9164(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Address: 0x1007f91c0 | thunk_FUN_1007f9144 */

void thunk_FUN_1007f9144(void)

{
  FUN_1007f9144();
  return;
}



/* Address: 0x1007f91c4 | FUN_1007f91c4 */

undefined1  [16] FUN_1007f91c4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar3 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x7fbd);
  }
  *param_1 = puVar3;
  puVar3[2] = unaff_x20;
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  puVar3[3] = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  puVar3[4] = uVar5;
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  FUN_1007f61ec();
  *unaff_x20 = uVar4;
  unaff_x20[1] = uVar5;
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = FUN_1007f82cc;
  return auVar6;
}



/* Address: 0x1007f9244 | FUN_1007f9244 */

void FUN_1007f9244(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007f9250 | FUN_1007f9250 */

void FUN_1007f9250(void)

{
  FUN_1007f98e0();
  return;
}



/* Address: 0x1007f925c | FUN_1007f925c */

void FUN_1007f925c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  local_38 = param_2;
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_retain(param_2);
  puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130,CVar1.unknown);
  Swift::Array<undefined>::_init(&local_38,param_3,CVar1.unknown,puVar2);
  return;
}



/* Address: 0x1007f92cc | thunk_FUN_1007f9250 */

void thunk_FUN_1007f9250(void)

{
  FUN_1007f9250();
  return;
}



/* Address: 0x1007f92d0 | FUN_1007f92d0 */

void FUN_1007f92d0(__int64 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  __int64 _Var2;
  ContiguousArray CVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  _Var2 = Swift::ContiguousArray::get_count((undefined *)unaff_x20[1]);
  if (SBORROW8(_Var2,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f9420);
    (*pcVar1)();
  }
  lVar5 = *unaff_x20;
  lVar4 = lVar5;
  FUN_1007f982c();
  if (_Var2 + -1 < lVar4) {
    CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::remove(param_1,CVar3);
    FUN_1007f9424(param_3);
    return;
  }
  if (lVar5 == 0) {
    CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  }
  else {
    FUN_1007f9544();
    lVar4 = *unaff_x20;
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f9424);
      (*pcVar1)();
    }
    _swift_retain(lVar4);
    FUN_1007fa1d8(lVar4 + 0x10,lVar4 + 0x20,param_2);
    _swift_release(lVar4);
    CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  }
  Swift::ContiguousArray::remove(param_1,CVar3);
  return;
}



/* Address: 0x1007f9424 | FUN_1007f9424 */

void FUN_1007f9424(void)

{
  long lVar1;
  ContiguousArray CVar2;
  __int64 _Var3;
  long *unaff_x20;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = *unaff_x20;
  CVar2.unknown = (undefined *)unaff_x20[1];
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    _swift_beginAccess(lVar1 + 0x10,auStack_58,0,0);
    uVar4 = *(ulong *)(lVar1 + 0x18) & 0x3f;
  }
  _Var3 = Swift::ContiguousArray::get_count(CVar2);
  if (_Var3 < 0x10 && uVar4 == 0) {
    _swift_release(lVar1);
    *unaff_x20 = 0;
  }
  else {
    Swift::ContiguousArray::get_count(CVar2);
    FUN_1007d7edc();
    FUN_1007f9690();
  }
  return;
}



/* Address: 0x1007f94cc | FUN_1007f94cc */

ulong FUN_1007f94cc(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
    uVar2 = *(ulong *)(param_1 + 0x10) & 0x3f;
    if (4 < uVar2) {
      lVar3 = 1L << uVar2;
      uVar2 = lVar3 * 3;
      if (SUB168(SEXT816(lVar3) * SEXT816(3),8) == (long)uVar2 >> 0x3f) {
        return uVar2 >> 2;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f9544);
      (*pcVar1)();
    }
  }
  return 0xf;
}



/* Address: 0x1007f9544 | FUN_1007f9544 */

void FUN_1007f9544(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  uVar3 = *unaff_x20;
  if ((uVar3 != 0) && (_swift_isUniquelyReferenced_native(), (uVar3 & 1) == 0)) {
    uVar3 = *unaff_x20;
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f95f0);
      (*pcVar2)();
    }
    uVar7 = *(ulong *)(uVar3 + 0x10);
    lVar5 = (uVar7 & 0x3f) << (uVar7 & 0x3f);
    if (SCARRY8(lVar5,0x40)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f95ec);
      (*pcVar2)();
    }
    lVar1 = lVar5 + 0x7e;
    if (0 < lVar5 + 0x40) {
      lVar1 = lVar5 + 0x3f;
    }
    uVar4 = 0;
    FUN_1007dd55c();
    _swift_allocObject();
    uVar6 = *(undefined8 *)(uVar3 + 0x18);
    *(ulong *)(uVar4 + 0x10) = uVar7;
    *(undefined8 *)(uVar4 + 0x18) = uVar6;
    _memcpy((void *)(uVar4 + 0x20),(void *)(uVar3 + 0x20),(lVar1 >> 6) * 8);
    _swift_release(uVar3);
    *unaff_x20 = uVar4;
  }
  return;
}



/* Address: 0x1007f95f0 | FUN_1007f95f0 */

void FUN_1007f95f0(void)

{
  undefined8 *unaff_x20;
  
  _swift_isUniquelyReferenced_native(*unaff_x20);
  return;
}



/* Address: 0x1007f9608 | FUN_1007f9608 */

ulong FUN_1007f9608(long param_1)

{
  ulong uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = 0;
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
    uVar1 = *(ulong *)(param_1 + 0x10) & 0x3f;
  }
  return uVar1;
}



/* Address: 0x1007f964c | FUN_1007f964c */

ulong FUN_1007f964c(long param_1)

{
  ulong uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = 0;
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3f;
  }
  return uVar1;
}



/* Address: 0x1007f9690 | FUN_1007f9690 */

void FUN_1007f9690(long param_1,long param_2,long param_3)

{
  long lVar1;
  ContiguousArray CVar2;
  undefined *puVar3;
  long *plVar4;
  long *unaff_x20;
  
  lVar1 = param_2;
  if (param_2 <= param_1) {
    lVar1 = param_1;
  }
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar3 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar2.unknown);
  plVar4 = unaff_x20 + 1;
  FUN_1007dc87c(plVar4,lVar1,0,param_2,CVar2.unknown,puVar3,*(undefined8 *)(param_3 + 0x18));
  _swift_release(*unaff_x20);
  *unaff_x20 = (long)plVar4;
  return;
}



/* Address: 0x1007f9718 | FUN_1007f9718 */

void FUN_1007f9718(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  
  if (*unaff_x20 == 0) {
    return;
  }
  FUN_1007f9544();
  lVar2 = *unaff_x20;
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_1007edcfc(lVar2 + 0x10,lVar2 + 0x20);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f979c);
  (*pcVar1)();
}



/* Address: 0x1007f979c | FUN_1007f979c */

undefined8
FUN_1007f979c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 local_48;
  
  if (param_2 == 0) {
    local_48 = 0;
  }
  else {
    _swift_retain(param_2);
    FUN_1007fa098(&local_48,param_2 + 0x10,param_2 + 0x20,param_2,param_3,param_1,param_4,param_5);
    _swift_release(param_2);
  }
  return local_48;
}



/* Address: 0x1007f982c | FUN_1007f982c */

long FUN_1007f982c(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
    uVar2 = *(uint *)(param_1 + 0x10);
    _swift_beginAccess(param_1 + 0x10,auStack_50,0,0);
    if (((*(uint *)(param_1 + 0x18) ^ uVar2) & 0x3f) != 0) {
      _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
      uVar3 = *(ulong *)(param_1 + 0x10) & 0x3f;
      if (4 < uVar3) {
        lVar4 = 1L << uVar3;
        lVar1 = lVar4 + 3;
        if (-1 < lVar4) {
          lVar1 = lVar4;
        }
        return lVar1 >> 2;
      }
    }
  }
  return 0;
}



/* Address: 0x1007f98d4 | FUN_1007f98d4 */

void FUN_1007f98d4(void)

{
  FUN_1007f98e0();
  return;
}



/* Address: 0x1007f98e0 | FUN_1007f98e0 */

undefined8
FUN_1007f98e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  
  puVar1 = &DAT_100fe6638;
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = param_2;
  uStack_58 = param_3;
  local_50 = param_1;
  FUN_1000f7830(&DAT_100fe6638,&DAT_100c7a830);
  FUN_10068330c(local_48,param_6,auStack_80,param_3,param_4,puVar1,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return local_48[0];
}



/* Address: 0x1007f9970 | FUN_1007f9970 */

undefined1  [16]
FUN_1007f9970(undefined8 *param_1,long param_2,long param_3,char param_4,undefined1 *param_5,
             undefined1 *param_6,ContiguousArray param_7,long param_8,undefined8 param_9)

{
  code *pcVar1;
  bool bVar2;
  __int64 _Var3;
  undefined1 *puVar4;
  uint uVar5;
  ContiguousArray CVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined8 *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined *puStack_68;
  
  lVar11 = *(long *)(param_8 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  if (param_4 == '\x01') {
    if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
      param_3 = 0;
      lVar8 = param_2 << 3;
      puVar10 = param_1;
      do {
        uVar12 = *puVar10;
        uVar13 = (ulong)(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)((ulong)uVar12 >> 8)) +
                               POPCOUNT((char)((ulong)uVar12 >> 0x10)) +
                               POPCOUNT((char)((ulong)uVar12 >> 0x18)) +
                               POPCOUNT((char)((ulong)uVar12 >> 0x20)) +
                               POPCOUNT((char)((ulong)uVar12 >> 0x28)) +
                               POPCOUNT((char)((ulong)uVar12 >> 0x30)) +
                              POPCOUNT((char)((ulong)uVar12 >> 0x38)));
        bVar2 = SCARRY8(param_3,uVar13);
        param_3 = param_3 + uVar13;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f9bb0);
          (*pcVar1)();
        }
        lVar8 = lVar8 + -8;
        puVar10 = puVar10 + 1;
      } while (lVar8 != 0);
      goto LAB_1007f9a04;
    }
  }
  else {
LAB_1007f9a04:
    if (param_3 != 0) {
      _Var3 = Swift::ContiguousArray::get_count(param_7);
      if (param_3 == _Var3) {
        puVar4 = param_6;
        FUN_1007f94cc();
        _Var3 = Swift::ContiguousArray::get_count(param_7);
        if (SBORROW8((long)puVar4,_Var3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f9bb4);
          (*pcVar1)();
        }
        puVar10 = (undefined8 *)param_6;
        CVar6.unknown = param_7.unknown;
        if ((long)puVar4 - _Var3 < (long)param_5) {
          local_90 = (undefined8 *)param_6;
          puStack_88 = param_7.unknown;
          if (SCARRY8(param_3,(long)param_5)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f9bbc);
            (*pcVar1)();
          }
          uVar12 = 0;
          FUN_1007fa688(0,param_8,param_9);
          FUN_1007f6b50(param_5 + param_3,uVar12);
          puVar10 = local_90;
          CVar6.unknown = puStack_88;
        }
      }
      else {
        puVar4 = param_5 + param_3;
        if (SCARRY8(param_3,(long)param_5)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f9bb8);
          (*pcVar1)();
        }
        CVar6.unknown = (undefined *)0x0;
        FUN_1007f6ae0(puVar4,0,param_8,param_9);
        if (param_2 < 1) {
          uStack_78 = 0;
        }
        else {
          uStack_78 = *param_1;
        }
        local_80 = 0;
        puVar7 = CVar6.unknown;
        local_98 = puVar4;
        local_90 = param_1;
        puStack_88 = (undefined *)param_2;
        local_70 = puVar4;
        puStack_68 = CVar6.unknown;
        FUN_100690f7c();
        uVar5 = (uint)puVar7;
        puVar10 = (undefined8 *)local_98;
        while ((uVar5 & 0xff) != 1) {
          Swift::ContiguousArray::get_subscript((__int64)puVar4,param_7);
          uVar12 = 0;
          FUN_1007fa688(0,param_8,param_9);
          FUN_1007ea370(auStack_a0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),uVar12);
          puVar4 = auStack_a0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
          lVar8 = param_8;
          (**(code **)(lVar11 + 8))();
          uVar5 = (uint)lVar8;
          FUN_100690f7c();
          CVar6.unknown = puStack_68;
          puVar10 = (undefined8 *)local_70;
        }
        _swift_release(param_7.unknown);
        _swift_release(param_6);
      }
      goto LAB_1007f9b84;
    }
  }
  CVar6.unknown = (undefined *)0x0;
  FUN_1007f6ae0(param_5,0,param_8,param_9);
  _swift_release(param_7.unknown);
  _swift_release(param_6);
  puVar10 = (undefined8 *)param_5;
LAB_1007f9b84:
  auVar14._8_8_ = CVar6.unknown;
  auVar14._0_8_ = puVar10;
  return auVar14;
}



/* Address: 0x1007f9bbc | FUN_1007f9bbc */

long FUN_1007f9bbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = 0;
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
    lVar1 = *(long *)(param_1 + 0x18) >> 6;
  }
  return lVar1;
}



/* Address: 0x1007f9c00 | FUN_1007f9c00 */

undefined1  [16] FUN_1007f9c00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[1] = unaff_x20;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  _swift_retain();
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1007f9c3c;
  return auVar2;
}



/* Address: 0x1007f9c3c | FUN_1007f9c3c */

void FUN_1007f9c3c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  uVar2 = param_1[2];
  uVar3 = *param_1;
  if ((param_2 & 1) != 0) {
    _swift_retain(uVar3);
    _swift_release(uVar2);
    *puVar1 = uVar3;
    _swift_release(uVar3);
    return;
  }
  _swift_release(uVar2);
  *puVar1 = uVar3;
  return;
}


