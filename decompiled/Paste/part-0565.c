/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100652978 | FUN_100652978 */

void FUN_100652978(void)

{
  FUN_10065317c(PTR__swift_release_100eae3e8,PTR__swift_release_100eae3e8,0x30);
  return;
}



/* Address: 0x10065298c | FUN_10065298c */

void FUN_10065298c(void)

{
  long unaff_x20;
  
  FUN_10064c29c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100652998 | FUN_100652998 */

void FUN_100652998(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006529d4 | FUN_1006529d4 */

void FUN_1006529d4(void)

{
  long unaff_x20;
  
  FUN_10064c6f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1006529e0 | FUN_1006529e0 */

void FUN_1006529e0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006529ec | FUN_1006529ec */

long FUN_1006529ec(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Address: 0x100652a14 | FUN_100652a14 */

void FUN_100652a14(void)

{
  Result RVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  uVar4 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,RVar1.value) + -8) + 0x50);
  uVar4 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = unaff_x20 + uVar4;
  _swift_getEnumCaseMultiPayload(lVar2,CONCAT71(extraout_var,RVar1.value));
  if ((int)lVar2 == 1) {
    _swift_errorRelease(*(undefined8 *)(unaff_x20 + uVar4));
  }
  else {
    (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + uVar4,lVar3);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100652acc | FUN_100652acc */

void FUN_100652acc(void)

{
  Result RVar1;
  undefined7 extraout_var;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,RVar1.value) + -8) + 0x50);
  FUN_100649e50(*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)),uVar3);
  return;
}



/* Address: 0x100652b30 | FUN_100652b30 */

void FUN_100652b30(void)

{
  FUN_100653218(PTR__swift_release_100eae3e8,0x38);
  return;
}



/* Address: 0x100652b40 | FUN_100652b40 */

void FUN_100652b40(void)

{
  FUN_100645e18(FUN_10064a5d0);
  return;
}



/* Address: 0x100652b4c | FUN_100652b4c */

void FUN_100652b4c(void)

{
  FUN_100645e18(FUN_10064aaa8);
  return;
}



/* Address: 0x100652b58 | FUN_100652b58 */

void FUN_100652b58(void)

{
  long unaff_x20;
  
  FUN_10064ae74(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100652b64 | FUN_100652b64 */

void FUN_100652b64(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100652b98 | FUN_100652b98 */

void FUN_100652b98(void)

{
  FUN_100645e18(FUN_10064b2bc);
  return;
}



/* Address: 0x100652ba4 | FUN_100652ba4 */

void FUN_100652ba4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100652bc8 | FUN_100652bc8 */

void FUN_100652bc8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100652bfc | FUN_100652bfc */

void FUN_100652bfc(void)

{
  long unaff_x20;
  
  FUN_10064b7e0(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100652c10 | FUN_100652c10 */

void FUN_100652c10(void)

{
  long unaff_x20;
  
  FUN_1006486b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100652c38 | FUN_100652c38 */

void FUN_100652c38(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100646e88(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100652c40 | FUN_100652c40 */

void FUN_100652c40(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100652c74 | FUN_100652c74 */

void FUN_100652c74(void)

{
  long unaff_x20;
  
  FUN_10064cfc4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100652c80 | FUN_100652c80 */

void FUN_100652c80(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100652cbc | FUN_100652cbc */

void FUN_100652cbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_10064d1dc(uVar2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100648698(uVar1);
  _swift_release(uVar2);
  return;
}



/* Address: 0x100652cf4 | FUN_100652cf4 */

void FUN_100652cf4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100652d20 | FUN_100652d20 */

void FUN_100652d20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10064d56c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100652d30 | FUN_100652d30 */

void FUN_100652d30(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100652d64 | FUN_100652d64 */

void FUN_100652d64(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10064dc3c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100652d74 | FUN_100652d74 */

void FUN_100652d74(void)

{
  FUN_100653218(PTR__swift_unknownObjectRelease_100eae458,0x38);
  return;
}



/* Address: 0x100652d84 | FUN_100652d84 */

void FUN_100652d84(void)

{
  long unaff_x20;
  
  FUN_100652f28(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100652d90 | FUN_100652d90 */

void FUN_100652d90(void)

{
  long unaff_x20;
  
  FUN_10064c01c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100652dac | FUN_100652dac */

void FUN_100652dac(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100652dd8 | FUN_100652dd8 */

void FUN_100652dd8(undefined8 param_1)

{
  long unaff_x20;
  
  thunk_FUN_100646f54(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100652de4 | FUN_100652de4 */

void FUN_100652de4(void)

{
  long unaff_x20;
  
  FUN_10064c120(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100652e00 | FUN_100652e00 */

void FUN_100652e00(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100652f10);
    (*pcVar2)();
  }
  lVar6 = *unaff_x20;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (!SCARRY8(lVar7,lVar1)) {
    lVar3 = lVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = lVar6;
    if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar6 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
      FUN_100624f78();
      lVar6 = *unaff_x20;
      uVar5 = *(ulong *)(lVar6 + 0x18) >> 1;
    }
    if (param_3 == param_4) {
      if (0 < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100652e70);
        (*pcVar2)();
      }
    }
    else {
      lVar7 = *(long *)(lVar6 + 0x10);
      if ((long)(uVar5 - lVar7) < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100652f24);
        (*pcVar2)();
      }
      puVar4 = &DAT_100fd4ee8;
      FUN_1000f7830(&DAT_100fd4ee8,&DAT_100c6ad00);
      _swift_arrayInitWithCopy(lVar6 + lVar7 * 0x18 + 0x20,param_2 + param_3 * 0x18,lVar1,puVar4);
      if (0 < lVar1) {
        if (SCARRY8(*(long *)(lVar6 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100652f28);
          (*pcVar2)();
        }
        *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar1;
      }
    }
    *unaff_x20 = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100652f14);
  (*pcVar2)();
}



/* Address: 0x100652f28 | FUN_100652f28 */

void FUN_100652f28(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(*param_2 + 0x50);
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10065febc(puVar2);
  FUN_100646e88(puVar2,param_1,lVar1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Address: 0x100652fa8 | thunk_FUN_100646f54 */

void thunk_FUN_100646f54(void)

{
  FUN_100646f54();
  return;
}



/* Address: 0x100652fac | FUN_100652fac */

void FUN_100652fac(void)

{
  FUN_1006531d8(FUN_10064dd88);
  return;
}



/* Address: 0x100652fb8 | FUN_100652fb8 */

void FUN_100652fb8(undefined8 param_1)

{
  FUN_100653268(param_1,FUN_10064f190);
  return;
}



/* Address: 0x100652fc4 | FUN_100652fc4 */

void FUN_100652fc4(void)

{
  long unaff_x20;
  
  FUN_100652044(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,thunk_FUN_100630328);
  return;
}



/* Address: 0x100652fe8 | FUN_100652fe8 */

undefined8 FUN_100652fe8(undefined8 param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  UnsafeMutablePointer<undefined> UVar2;
  code *pcVar3;
  long lVar4;
  tuple2_conflict3 tVar5;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  lVar4 = *(long *)(param_3 + -8);
  puVar1 = auStack_60 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  tVar5 = Swift::Array<undefined>::_allocateUninitialized(param_2,param_3);
  UVar2 = tVar5._.unknown;
  local_58 = tVar5._0_8_;
  if (-1 < param_2) {
    if (param_2 != 0) {
      pcVar3 = *(code **)(lVar4 + 0x10);
      (*pcVar3)(puVar1,param_1,param_3);
      FUN_1006331c4(puVar1,UVar2.unknown,param_3);
      param_2 = param_2 + -1;
      if (param_2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x48);
        do {
          UVar2.unknown = UVar2.unknown + lVar4;
          (*pcVar3)(puVar1,param_1,param_3);
          FUN_1006331c4(puVar1,UVar2.unknown,param_3);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
    Swift::Array<undefined>::typeMetadataAccessor();
    FUN_100004520();
    return local_58;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006530e0);
  (*pcVar3)();
}



/* Address: 0x1006530e0 | FUN_1006530e0 */

void FUN_1006530e0(void)

{
  FUN_10064e848();
  return;
}



/* Address: 0x1006530e8 | thunk_FUN_1006532c8 */

void thunk_FUN_1006532c8(void)

{
  FUN_1006532c8();
  return;
}



/* Address: 0x1006530ec | FUN_1006530ec */

void FUN_1006530ec(void)

{
  FUN_100653310(FUN_10064e94c);
  return;
}



/* Address: 0x1006530f8 | FUN_1006530f8 */

void FUN_1006530f8(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100653104 | FUN_100653104 */

void FUN_100653104(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10064ed50(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10065310c | FUN_10065310c */

void FUN_10065310c(void)

{
  long unaff_x20;
  
  FUN_10064c1c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_100308524,FUN_1002ec258);
  return;
}



/* Address: 0x100653138 | FUN_100653138 */

void FUN_100653138(void)

{
  long unaff_x20;
  
  FUN_10064bebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100653154 | thunk_FUN_100653350 */

void thunk_FUN_100653350(void)

{
  FUN_100653350();
  return;
}



/* Address: 0x100653158 | FUN_100653158 */

void FUN_100653158(undefined8 param_1)

{
  FUN_100653390(param_1,FUN_10064ef30);
  return;
}



/* Address: 0x100653164 | FUN_100653164 */

void FUN_100653164(void)

{
  FUN_10065317c(PTR__swift_bridgeObjectRelease_100eae160,PTR__swift_unknownObjectRelease_100eae458,
                0x38);
  return;
}



/* Address: 0x10065317c | FUN_10065317c */

void FUN_10065317c(code *param_1,code *param_2)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006531cc | FUN_1006531cc */

void FUN_1006531cc(void)

{
  FUN_1006531d8(FUN_10064f4a4);
  return;
}



/* Address: 0x1006531d8 | FUN_1006531d8 */

void FUN_1006531d8(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100653208 | FUN_100653208 */

void FUN_100653208(void)

{
  FUN_100653218(PTR__swift_unknownObjectRelease_100eae458,0x40);
  return;
}



/* Address: 0x100653218 | FUN_100653218 */

void FUN_100653218(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10065325c | FUN_10065325c */

void FUN_10065325c(undefined8 param_1)

{
  FUN_100653268(param_1,FUN_100650638);
  return;
}



/* Address: 0x100653268 | FUN_100653268 */

void FUN_100653268(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100653278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10065327c | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  FUN_100653eac();
  return;
}



/* Address: 0x100653280 | FUN_100653280 */

void FUN_100653280(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd85f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6aae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6aae0,&DAT_100ef0a60);
  DAT_100fd85f8 = pTVar1;
  return;
}



/* Address: 0x1006532c0 | FUN_1006532c0 */

void FUN_1006532c0(void)

{
  FUN_10065007c();
  return;
}



/* Address: 0x1006532c8 | FUN_1006532c8 */

void FUN_1006532c8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100653304 | FUN_100653304 */

void FUN_100653304(void)

{
  FUN_100653310(FUN_100650134);
  return;
}



/* Address: 0x100653310 | FUN_100653310 */

void FUN_100653310(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
             *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x50));
  return;
}



/* Address: 0x100653348 | FUN_100653348 */

void FUN_100653348(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006504dc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


