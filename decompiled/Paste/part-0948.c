/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a3b18c | FUN_100a3b18c */

void FUN_100a3b18c(long param_1)

{
  FUN_100a3afa0((double)param_1);
  return;
}



/* Address: 0x100a3b194 | thunk_FUN_100a3afa0 */

void thunk_FUN_100a3afa0(void)

{
  FUN_100a3afa0();
  return;
}



/* Address: 0x100a3b198 | thunk_FUN_100a3b018 */

void thunk_FUN_100a3b018(void)

{
  FUN_100a3b018();
  return;
}



/* Address: 0x100a3b19c | thunk_FUN_100a3b0b8 */

void thunk_FUN_100a3b0b8(void)

{
  FUN_100a3b0b8();
  return;
}



/* Address: 0x100a3b1a0 | FUN_100a3b1a0 */

undefined1  [16] FUN_100a3b1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  FUN_100a3d5dc();
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100a3d520(param_1,param_2,param_3);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  auVar1._8_8_ = &PTR_PTR_100f2a378;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x100a3b244 | FUN_100a3b244 */

void FUN_100a3b244(class_t *param_1)

{
  Implementation IVar1;
  class_rw_t *pcVar2;
  class_t *pcVar3;
  
  pcVar3 = param_1;
  _object_getClass();
  if (pcVar3 == &objc::class_t::_TtC11CoreMetrics40AccumulatingRoundingFloatingPointCounter &&
      param_1 != (class_t *)0x0) {
    IVar1 = param_1[1].vtable;
    pcVar2 = param_1[1].data;
    FUN_100004640(param_1 + 1,IVar1);
    (*(code *)pcVar2->weakIvarLayout)(param_1->vtable,param_1->data,IVar1,pcVar2);
  }
  return;
}



/* Address: 0x100a3b2a8 | FUN_100a3b2a8 */

undefined1  [16] FUN_100a3b2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  FUN_100a3d5fc();
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100a3d520(param_1,param_2,param_3);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  auVar1._8_8_ = &PTR_PTR_100f2a348;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x100a3b34c | FUN_100a3b34c */

void FUN_100a3b34c(class_t *param_1)

{
  class_rw_t *pcVar1;
  class_t *pcVar2;
  
  pcVar2 = param_1;
  _object_getClass();
  if (pcVar2 == &objc::class_t::_TtC11CoreMetrics17AccumulatingMeter && param_1 != (class_t *)0x0) {
    pcVar1 = param_1[1].data;
    pcVar2 = param_1[2].isa;
    FUN_100004640(&param_1[1].superclass,pcVar1);
    (*(code *)pcVar2[2].isa)(param_1->cache,param_1->vtable,pcVar1,pcVar2);
  }
  return;
}



/* Address: 0x100a3b3b0 | FUN_100a3b3b0 */

void FUN_100a3b3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100a3d61c(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100a3be50(uVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x100a3b438 | FUN_100a3b438 */

void FUN_100a3b438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100a3d63c(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100a3bfcc(uVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x100a3b4c0 | FUN_100a3b4c0 */

void FUN_100a3b4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100a3d65c(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100a3c238(uVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x100a3b548 | FUN_100a3b548 */

void FUN_100a3b548(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar5 = 0;
  FUN_100a3d67c();
  _swift_allocObject();
  lVar8 = *(long *)(lVar9 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar8 != 0) {
    FUN_100a3d0dc(0,lVar8,0);
    lVar9 = lVar9 + 0x20;
    do {
      puVar4 = local_68;
      FUN_100076688(lVar9,auStack_90);
      lVar3 = lStack_70;
      uVar2 = local_78;
      FUN_100004640(auStack_90,local_78);
      uVar6 = param_1;
      uVar7 = param_2;
      (**(code **)(lVar3 + 0x28))(param_1,param_2,param_3,param_4 & 1,uVar2,lVar3);
      FUN_100004594(auStack_90);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_100a3d0dc(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar6;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x28) = uVar7;
      lVar9 = lVar9 + 0x28;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(undefined **)(lVar5 + 0x10) = local_68;
  return;
}



/* Address: 0x100a3b698 | FUN_100a3b698 */

void FUN_100a3b698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100a3d69c(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100a3c53c(uVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x100a3b720 | FUN_100a3b720 */

void FUN_100a3b720(class_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  class_t *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  Cache CVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  long lStack_a0;
  undefined1 auStack_98 [56];
  
  pcVar3 = param_1;
  _object_getClass();
  if (pcVar3 == &objc::class_t::
                 _TtCC11CoreMetrics23MultiplexMetricsHandlerP33_5A3C40C2646077B8D814F0D76D84FE0110MuxCounter
      && param_1 != (class_t *)0x0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    CVar7 = param_1->cache;
    uVar5 = *(ulong *)(lVar4 + 0x10);
    _swift_unknownObjectRetain();
    _swift_bridgeObjectRetain(CVar7);
    if (uVar5 != 0) {
      uVar6 = 0;
      lVar8 = lVar4 + 0x20;
      lVar10 = CVar7 + 0x28;
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a3b88c);
          (*pcVar9)();
        }
        FUN_100076688(lVar8,auStack_c0);
        if (uVar6 == *(ulong *)(CVar7 + 0x10)) {
          _swift_unknownObjectRelease(param_1);
          _swift_bridgeObjectRelease(CVar7);
          FUN_100004594(auStack_c0);
          return;
        }
        if (*(ulong *)(CVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a3b890);
          (*pcVar9)();
        }
        uVar6 = uVar6 + 1;
        uVar1 = *(undefined8 *)(lVar10 + -8);
        FUN_100076508(auStack_c0,auStack_98);
        FUN_100076508(auStack_98,auStack_c0);
        lVar2 = lStack_a0;
        FUN_100004640(auStack_c0,local_a8);
        pcVar9 = *(code **)(lVar2 + 0x38);
        _swift_unknownObjectRetain(uVar1);
        (*pcVar9)();
        _swift_unknownObjectRelease(uVar1);
        FUN_100004594(auStack_c0);
        lVar8 = lVar8 + 0x28;
        lVar10 = lVar10 + 0x10;
      } while (uVar5 != uVar6);
    }
    _swift_unknownObjectRelease(param_1);
    _swift_bridgeObjectRelease(CVar7);
  }
  return;
}



/* Address: 0x100a3b890 | FUN_100a3b890 */

void FUN_100a3b890(class_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  class_t *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  Cache CVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  long lStack_a0;
  undefined1 auStack_98 [56];
  
  pcVar3 = param_1;
  _object_getClass();
  if (pcVar3 == &objc::class_t::
                 _TtCC11CoreMetrics23MultiplexMetricsHandlerP33_5A3C40C2646077B8D814F0D76D84FE0123MuxFloatingPointCounter
      && param_1 != (class_t *)0x0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    CVar7 = param_1->cache;
    uVar5 = *(ulong *)(lVar4 + 0x10);
    _swift_unknownObjectRetain();
    _swift_bridgeObjectRetain(CVar7);
    if (uVar5 != 0) {
      uVar6 = 0;
      lVar8 = lVar4 + 0x20;
      lVar10 = CVar7 + 0x28;
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a3b9fc);
          (*pcVar9)();
        }
        FUN_100076688(lVar8,auStack_c0);
        if (uVar6 == *(ulong *)(CVar7 + 0x10)) {
          _swift_unknownObjectRelease(param_1);
          _swift_bridgeObjectRelease(CVar7);
          FUN_100004594(auStack_c0);
          return;
        }
        if (*(ulong *)(CVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a3ba00);
          (*pcVar9)();
        }
        uVar6 = uVar6 + 1;
        uVar1 = *(undefined8 *)(lVar10 + -8);
        FUN_100076508(auStack_c0,auStack_98);
        FUN_100076508(auStack_98,auStack_c0);
        lVar2 = lStack_a0;
        FUN_100004640(auStack_c0,local_a8);
        pcVar9 = *(code **)(lVar2 + 0x48);
        _swift_unknownObjectRetain(uVar1);
        (*pcVar9)();
        _swift_unknownObjectRelease(uVar1);
        FUN_100004594(auStack_c0);
        lVar8 = lVar8 + 0x28;
        lVar10 = lVar10 + 0x10;
      } while (uVar5 != uVar6);
    }
    _swift_unknownObjectRelease(param_1);
    _swift_bridgeObjectRelease(CVar7);
  }
  return;
}



/* Address: 0x100a3ba00 | FUN_100a3ba00 */

void FUN_100a3ba00(class_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  class_t *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  Cache CVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  long lStack_a0;
  undefined1 auStack_98 [56];
  
  pcVar3 = param_1;
  _object_getClass();
  if (pcVar3 == &objc::class_t::
                 _TtCC11CoreMetrics23MultiplexMetricsHandlerP33_5A3C40C2646077B8D814F0D76D84FE018MuxMeter
      && param_1 != (class_t *)0x0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    CVar7 = param_1->cache;
    uVar5 = *(ulong *)(lVar4 + 0x10);
    _swift_unknownObjectRetain();
    _swift_bridgeObjectRetain(CVar7);
    if (uVar5 != 0) {
      uVar6 = 0;
      lVar8 = lVar4 + 0x20;
      lVar10 = CVar7 + 0x28;
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a3bb6c);
          (*pcVar9)();
        }
        FUN_100076688(lVar8,auStack_c0);
        if (uVar6 == *(ulong *)(CVar7 + 0x10)) {
          _swift_unknownObjectRelease(param_1);
          _swift_bridgeObjectRelease(CVar7);
          FUN_100004594(auStack_c0);
          return;
        }
        if (*(ulong *)(CVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a3bb70);
          (*pcVar9)();
        }
        uVar6 = uVar6 + 1;
        uVar1 = *(undefined8 *)(lVar10 + -8);
        FUN_100076508(auStack_c0,auStack_98);
        FUN_100076508(auStack_98,auStack_c0);
        lVar2 = lStack_a0;
        FUN_100004640(auStack_c0,local_a8);
        pcVar9 = *(code **)(lVar2 + 0x40);
        _swift_unknownObjectRetain(uVar1);
        (*pcVar9)();
        _swift_unknownObjectRelease(uVar1);
        FUN_100004594(auStack_c0);
        lVar8 = lVar8 + 0x28;
        lVar10 = lVar10 + 0x10;
      } while (uVar5 != uVar6);
    }
    _swift_unknownObjectRelease(param_1);
    _swift_bridgeObjectRelease(CVar7);
  }
  return;
}



/* Address: 0x100a3bb70 | FUN_100a3bb70 */

void FUN_100a3bb70(class_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  class_t *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  Cache CVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  long lStack_a0;
  undefined1 auStack_98 [56];
  
  pcVar3 = param_1;
  _object_getClass();
  if (pcVar3 == &objc::class_t::
                 _TtCC11CoreMetrics23MultiplexMetricsHandlerP33_5A3C40C2646077B8D814F0D76D84FE0111MuxRecorder
      && param_1 != (class_t *)0x0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    CVar7 = param_1->cache;
    uVar5 = *(ulong *)(lVar4 + 0x10);
    _swift_unknownObjectRetain();
    _swift_bridgeObjectRetain(CVar7);
    if (uVar5 != 0) {
      uVar6 = 0;
      lVar8 = lVar4 + 0x20;
      lVar10 = CVar7 + 0x28;
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a3bcdc);
          (*pcVar9)();
        }
        FUN_100076688(lVar8,auStack_c0);
        if (uVar6 == *(ulong *)(CVar7 + 0x10)) {
          _swift_unknownObjectRelease(param_1);
          _swift_bridgeObjectRelease(CVar7);
          FUN_100004594(auStack_c0);
          return;
        }
        if (*(ulong *)(CVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a3bce0);
          (*pcVar9)();
        }
        uVar6 = uVar6 + 1;
        uVar1 = *(undefined8 *)(lVar10 + -8);
        FUN_100076508(auStack_c0,auStack_98);
        FUN_100076508(auStack_98,auStack_c0);
        lVar2 = lStack_a0;
        FUN_100004640(auStack_c0,local_a8);
        pcVar9 = *(code **)(lVar2 + 0x50);
        _swift_unknownObjectRetain(uVar1);
        (*pcVar9)();
        _swift_unknownObjectRelease(uVar1);
        FUN_100004594(auStack_c0);
        lVar8 = lVar8 + 0x28;
        lVar10 = lVar10 + 0x10;
      } while (uVar5 != uVar6);
    }
    _swift_unknownObjectRelease(param_1);
    _swift_bridgeObjectRelease(CVar7);
  }
  return;
}



/* Address: 0x100a3bce0 | FUN_100a3bce0 */

void FUN_100a3bce0(class_t *param_1)

{
  undefined8 uVar1;
  long lVar2;
  class_t *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  Cache CVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  long lStack_a0;
  undefined1 auStack_98 [56];
  
  pcVar3 = param_1;
  _object_getClass();
  if (pcVar3 == &objc::class_t::
                 _TtCC11CoreMetrics23MultiplexMetricsHandlerP33_5A3C40C2646077B8D814F0D76D84FE018MuxTimer
      && param_1 != (class_t *)0x0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    CVar7 = param_1->cache;
    uVar5 = *(ulong *)(lVar4 + 0x10);
    _swift_unknownObjectRetain();
    _swift_bridgeObjectRetain(CVar7);
    if (uVar5 != 0) {
      uVar6 = 0;
      lVar8 = lVar4 + 0x20;
      lVar10 = CVar7 + 0x28;
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a3be4c);
          (*pcVar9)();
        }
        FUN_100076688(lVar8,auStack_c0);
        if (uVar6 == *(ulong *)(CVar7 + 0x10)) {
          _swift_unknownObjectRelease(param_1);
          _swift_bridgeObjectRelease(CVar7);
          FUN_100004594(auStack_c0);
          return;
        }
        if (*(ulong *)(CVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a3be50);
          (*pcVar9)();
        }
        uVar6 = uVar6 + 1;
        uVar1 = *(undefined8 *)(lVar10 + -8);
        FUN_100076508(auStack_c0,auStack_98);
        FUN_100076508(auStack_98,auStack_c0);
        lVar2 = lStack_a0;
        FUN_100004640(auStack_c0,local_a8);
        pcVar9 = *(code **)(lVar2 + 0x58);
        _swift_unknownObjectRetain(uVar1);
        (*pcVar9)();
        _swift_unknownObjectRelease(uVar1);
        FUN_100004594(auStack_c0);
        lVar8 = lVar8 + 0x28;
        lVar10 = lVar10 + 0x10;
      } while (uVar5 != uVar6);
    }
    _swift_unknownObjectRelease(param_1);
    _swift_bridgeObjectRelease(CVar7);
  }
  return;
}



/* Address: 0x100a3be50 | FUN_100a3be50 */

long FUN_100a3be50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_1);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100a3d028(0,lVar7,0);
    lVar8 = param_1 + 0x20;
    do {
      puVar6 = local_68;
      FUN_100076688(lVar8,auStack_90);
      lVar3 = lStack_70;
      uVar2 = local_78;
      FUN_100004640(auStack_90,local_78);
      uVar4 = param_2;
      uVar5 = param_3;
      (**(code **)(lVar3 + 0x10))(param_2,param_3,param_4,uVar2,lVar3);
      FUN_100004594(auStack_90);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      local_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_100a3d028(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar4;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x28) = uVar5;
      lVar8 = lVar8 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return unaff_x20;
}



/* Address: 0x100a3bfc4 | thunk_FUN_100a3c6b0 */

void thunk_FUN_100a3c6b0(void)

{
  FUN_100a3c6b0();
  return;
}



/* Address: 0x100a3bfc8 | thunk_FUN_100a3c1c4 */

void thunk_FUN_100a3c1c4(void)

{
  FUN_100a3c1c4();
  return;
}



/* Address: 0x100a3bfcc | FUN_100a3bfcc */

long FUN_100a3bfcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_1);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100a3d064(0,lVar7,0);
    lVar8 = param_1 + 0x20;
    do {
      puVar6 = local_68;
      FUN_100076688(lVar8,auStack_90);
      lVar3 = lStack_70;
      uVar2 = local_78;
      FUN_100004640(auStack_90,local_78);
      uVar4 = param_2;
      uVar5 = param_3;
      (**(code **)(lVar3 + 0x18))(param_2,param_3,param_4,uVar2,lVar3);
      FUN_100004594(auStack_90);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      local_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_100a3d064(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar4;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x28) = uVar5;
      lVar8 = lVar8 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return unaff_x20;
}



/* Address: 0x100a3c140 | FUN_100a3c140 */

void FUN_100a3c140(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 0x10);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(param_1,lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x100a3c1c4 | FUN_100a3c1c4 */

void FUN_100a3c1c4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 0x18);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x100a3c238 | FUN_100a3c238 */

long FUN_100a3c238(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_1);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100a3d0a0(0,lVar7,0);
    lVar8 = param_1 + 0x20;
    do {
      puVar6 = local_68;
      FUN_100076688(lVar8,auStack_90);
      lVar3 = lStack_70;
      uVar2 = local_78;
      FUN_100004640(auStack_90,local_78);
      uVar4 = param_2;
      uVar5 = param_3;
      (**(code **)(lVar3 + 0x20))(param_2,param_3,param_4,uVar2,lVar3);
      FUN_100004594(auStack_90);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      local_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_100a3d0a0(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar4;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x28) = uVar5;
      lVar8 = lVar8 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return unaff_x20;
}



/* Address: 0x100a3c3ac | FUN_100a3c3ac */

void FUN_100a3c3ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 0x20);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(param_1,lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x100a3c430 | FUN_100a3c430 */

void FUN_100a3c430(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 0x28);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(param_1,lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x100a3c4b4 | thunk_FUN_100a3c4b8 */

void thunk_FUN_100a3c4b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 0x18);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(param_1,lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x100a3c4b8 | FUN_100a3c4b8 */

void FUN_100a3c4b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 0x18);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(param_1,lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x100a3c53c | FUN_100a3c53c */

long FUN_100a3c53c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_1);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100a3d118(0,lVar7,0);
    lVar8 = param_1 + 0x20;
    do {
      puVar6 = local_68;
      FUN_100076688(lVar8,auStack_90);
      lVar3 = lStack_70;
      uVar2 = local_78;
      FUN_100004640(auStack_90,local_78);
      uVar4 = param_2;
      uVar5 = param_3;
      (**(code **)(lVar3 + 0x30))(param_2,param_3,param_4,uVar2,lVar3);
      FUN_100004594(auStack_90);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      local_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_100a3d118(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar4;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x28) = uVar5;
      lVar8 = lVar8 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return unaff_x20;
}



/* Address: 0x100a3c6b0 | FUN_100a3c6b0 */

void FUN_100a3c6b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 0x10);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(param_1,lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x100a3c734 | FUN_100a3c734 */

void FUN_100a3c734(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 0x18);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(param_1,param_2,lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x100a3c7c0 | FUN_100a3c7c0 */

void FUN_100a3c7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  FUN_100a3d61c(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100a3be50(uVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x100a3c84c | FUN_100a3c84c */

void FUN_100a3c84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  FUN_100a3d63c(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100a3bfcc(uVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x100a3c8d8 | FUN_100a3c8d8 */

void FUN_100a3c8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  FUN_100a3d65c(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100a3c238(uVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x100a3c964 | FUN_100a3c964 */

void FUN_100a3c964(void)

{
  FUN_100a3b548();
  return;
}



/* Address: 0x100a3c98c | FUN_100a3c98c */

void FUN_100a3c98c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  FUN_100a3d69c(0);
  _swift_allocObject();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100a3c53c(uVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x100a3ca18 | FUN_100a3ca18 */

void FUN_100a3ca18(void)

{
  FUN_100a3b720();
  return;
}



/* Address: 0x100a3ca38 | FUN_100a3ca38 */

void FUN_100a3ca38(void)

{
  FUN_100a3ba00();
  return;
}



/* Address: 0x100a3ca58 | FUN_100a3ca58 */

void FUN_100a3ca58(void)

{
  FUN_100a3b890();
  return;
}



/* Address: 0x100a3ca78 | FUN_100a3ca78 */

void FUN_100a3ca78(void)

{
  FUN_100a3bb70();
  return;
}



/* Address: 0x100a3ca98 | FUN_100a3ca98 */

void FUN_100a3ca98(void)

{
  FUN_100a3bce0();
  return;
}



/* Address: 0x100a3cab8 | FUN_100a3cab8 */

void FUN_100a3cab8(undefined8 param_1)

{
  FUN_100a3d86c();
  _swift_initStaticObject();
  DAT_1010582c0 = param_1;
  return;
}



/* Address: 0x100a3cae0 | FUN_100a3cae0 */

void FUN_100a3cae0(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x100a3caf0 | FUN_100a3caf0 */

void FUN_100a3caf0(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100a3cb1c | FUN_100a3cb1c */

void FUN_100a3cb1c(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100a3cb48 | FUN_100a3cb48 */

void FUN_100a3cb48(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100a3cb74 | FUN_100a3cb74 */

void FUN_100a3cb74(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100a3cba0 | FUN_100a3cba0 */

void FUN_100a3cba0(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100a3cbcc | FUN_100a3cbcc */

void FUN_100a3cbcc(void)

{
  undefined8 *unaff_x20;
  
  _swift_unknownObjectRetain(*unaff_x20);
  return;
}



/* Address: 0x100a3cbf8 | FUN_100a3cbf8 */

void FUN_100a3cbf8(void)

{
  undefined8 *unaff_x20;
  
  _swift_unknownObjectRetain(*unaff_x20);
  return;
}



/* Address: 0x100a3cc24 | FUN_100a3cc24 */

void FUN_100a3cc24(void)

{
  undefined8 *unaff_x20;
  
  _swift_unknownObjectRetain(*unaff_x20);
  return;
}



/* Address: 0x100a3cc50 | FUN_100a3cc50 */

void FUN_100a3cc50(void)

{
  undefined8 *unaff_x20;
  
  _swift_unknownObjectRetain(*unaff_x20);
  return;
}



/* Address: 0x100a3cc7c | FUN_100a3cc7c */

void FUN_100a3cc7c(void)

{
  undefined8 *unaff_x20;
  
  _swift_unknownObjectRetain(*unaff_x20);
  return;
}



/* Address: 0x100a3cca8 | FUN_100a3cca8 */

void FUN_100a3cca8(void)

{
  undefined *puVar1;
  
  if (DAT_100ff58e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__FixedWidthInteger_100eadc18;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__FixedWidthInteger_100eadc18,
             PTR___type_metadata_for_Swift_Int64_100eadc00);
  DAT_100ff58e0 = puVar1;
  return;
}



/* Address: 0x100a3cce8 | FUN_100a3cce8 */

void FUN_100a3cce8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_100a3aa60(plVar3,param_1,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x100a3cd70 | FUN_100a3cd70 */

void FUN_100a3cd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  UnownedSerialExecutor UVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_10;
  *(long **)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_9;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(long *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *(long *)(*unaff_x20 +
                   *(long *)PTR___class_metadata_base_offset_for_Swift_TaskLocal_100eaf050);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  if (param_5 == 0) {
    UVar2.unknown = (undefined *)0x0;
    param_6 = 0;
  }
  else {
    _swift_getObjectType(param_5);
    UVar2 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x80) = UVar2.unknown;
  *(undefined8 *)(unaff_x22 + 0x88) = param_6;
  _swift_task_switch(FUN_100a3ce38,UVar2.unknown);
  return;
}



/* Address: 0x100a3ce38 | FUN_100a3ce38 */

void FUN_100a3ce38(void)

{
  long *plVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x18),
             *(undefined8 *)(unaff_x22 + 0x68));
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005cd240;
  FUN_100a3ced0(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x78),
                *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),
                *(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
                *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x100a3ced0 | FUN_100a3ced0 */

void FUN_100a3ced0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  TaskLocal *pTVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pTVar2 = (TaskLocal *)(ulong)*(uint *)(PTR__withValueImpl_100eaf020 + 4);
    _swift_task_alloc();
    *(TaskLocal **)(unaff_x22 + 0x18) = pTVar2;
    *(long *)pTVar2 = unaff_x22;
    *(code **)(pTVar2 + 8) = FUN_1005cd444;
    Swift::TaskLocal::_withValueImpl
              (pTVar2,unaff_x20,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1005cd488(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a3d028 | FUN_100a3d028 */

void FUN_100a3d028(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a3d154();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100a3d064 | FUN_100a3d064 */

void FUN_100a3d064(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a3d154();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100a3d0a0 | FUN_100a3d0a0 */

void FUN_100a3d0a0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a3d154();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100a3d0dc | FUN_100a3d0dc */

void FUN_100a3d0dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a3d154();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100a3d118 | FUN_100a3d118 */

void FUN_100a3d118(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a3d154();
  *unaff_x20 = param_1;
  return;
}


