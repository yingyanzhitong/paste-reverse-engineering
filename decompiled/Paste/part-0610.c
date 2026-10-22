/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10068cf68 | FUN_10068cf68 */

undefined1  [16] FUN_10068cf68(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068cfb0);
    (*pcVar2)();
  }
  if (param_2 < unaff_x20[2]) {
    lVar1 = 0;
    if (unaff_x20[1] <= unaff_x20[3] + param_2) {
      lVar1 = unaff_x20[1];
    }
    auVar3._8_8_ = *unaff_x20 +
                   ((unaff_x20[3] + param_2) - lVar1) *
                   *(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x48);
    auVar3._0_8_ = FUN_100004520;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10068cfb4);
  (*pcVar2)();
}



/* Address: 0x10068cfb4 | FUN_10068cfb4 */

void FUN_10068cfb4(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d034);
    (*pcVar1)();
  }
  if (param_2 < unaff_x20[2]) {
    lVar3 = 0;
    if (unaff_x20[1] <= unaff_x20[3] + param_2) {
      lVar3 = unaff_x20[1];
    }
    lVar2 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(lVar2 + -8);
    lVar3 = *unaff_x20 + ((unaff_x20[3] + param_2) - lVar3) * *(long *)(lVar4 + 0x48);
    (**(code **)(lVar4 + 8))(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010068d02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x20))(lVar3,param_1,lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d038);
  (*pcVar1)();
}



/* Address: 0x10068d038 | FUN_10068d038 */

long FUN_10068d038(long param_1,UnsafeMutablePointer<undefined> param_2,__int64 param_3,long param_4
                  )

{
  code *pcVar1;
  bool bVar2;
  long *unaff_x20;
  
  if (0 < param_3) {
    if (param_2.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d098);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::moveInitialize
              (param_2,param_3,
               (undefined *)
               (*unaff_x20 + *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) * param_1))
    ;
    bVar2 = SCARRY8(param_1,param_3);
    param_1 = param_1 + param_3;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d094);
      (*pcVar1)();
    }
  }
  return param_1;
}



/* Address: 0x10068d098 | FUN_10068d098 */

void FUN_10068d098(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  code *pcVar1;
  UnsafeBufferPointer<undefined> UVar2;
  UnsafeBufferPointer<undefined> UVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  
  if (param_4 == 0) {
    lVar6 = 0;
    lVar4 = 0;
  }
  else {
    lVar6 = 0;
    if (param_5 <= param_7 + param_2) {
      lVar6 = param_5;
    }
    lVar4 = param_3 - param_2;
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d170);
      (*pcVar1)();
    }
    lVar6 = (param_7 + param_2) - lVar6;
    param_5 = param_5 - lVar6;
    lVar6 = *(long *)(*(long *)(param_8 + -8) + 0x48) * lVar6;
    lVar5 = lVar4 - param_5;
    if (lVar5 != 0 && param_5 <= lVar4) {
      UVar2 = Swift::UnsafeBufferPointer::_init(lVar6 + param_4);
      UVar3 = Swift::UnsafeBufferPointer::_init(param_4);
      uVar7 = 0;
      lVar4 = param_5;
      goto LAB_10068d14c;
    }
    lVar6 = lVar6 + param_4;
  }
  UVar2 = Swift::UnsafeBufferPointer::_init(lVar6);
  UVar3.unknown = (undefined *)0x0;
  lVar5 = 0;
  uVar7 = 1;
LAB_10068d14c:
  *param_1 = UVar2.unknown;
  param_1[1] = lVar4;
  param_1[2] = UVar3.unknown;
  param_1[3] = lVar5;
  *(undefined1 *)(param_1 + 4) = uVar7;
  return;
}



/* Address: 0x10068d170 | FUN_10068d170 */

void FUN_10068d170(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  UnsafeMutableBufferPointer<undefined> UVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  long lVar5;
  UnsafeMutableBufferPointer<undefined> UVar6;
  long *unaff_x20;
  long start;
  
  if (param_2 < param_3) {
    lVar5 = param_3 - param_2;
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d240);
      (*pcVar1)();
    }
    UVar3 = Swift::UnsafeMutableBufferPointer::_init
                      (*unaff_x20 +
                       *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) * param_2);
    param_3 = 0;
    bVar2 = true;
    UVar6.unknown = (undefined *)0x0;
  }
  else {
    lVar5 = unaff_x20[1] - param_2;
    if (SBORROW8(unaff_x20[1],param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d244);
      (*pcVar1)();
    }
    start = *unaff_x20;
    UVar3 = Swift::UnsafeMutableBufferPointer::_init
                      (start + *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) * param_2
                      );
    UVar4 = Swift::UnsafeMutableBufferPointer::_init(start);
    bVar2 = param_3 == 0;
    UVar6.unknown = (undefined *)0x0;
    if (!bVar2) {
      UVar6 = UVar4;
    }
  }
  *param_1 = UVar3.unknown;
  param_1[1] = lVar5;
  param_1[2] = UVar6.unknown;
  param_1[3] = param_3;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Address: 0x10068d244 | FUN_10068d244 */

void FUN_10068d244(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  __int64 start;
  UnsafeMutableBufferPointer<undefined> UVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  UnsafeMutableBufferPointer<undefined> UVar9;
  long *unaff_x20;
  long start_00;
  
  start_00 = *unaff_x20;
  if (start_00 == 0) {
    start = 0;
LAB_10068d2e4:
    lVar5 = 0;
  }
  else {
    lVar5 = unaff_x20[2];
    lVar6 = unaff_x20[3];
    lVar7 = lVar6 + lVar5;
    if (SCARRY8(lVar6,lVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d378);
      (*pcVar1)();
    }
    lVar8 = unaff_x20[1];
    if (lVar5 < 0) {
      if ((lVar7 < 0) && (bVar2 = SCARRY8(lVar7,lVar8), lVar7 = lVar7 + lVar8, bVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d38c);
        (*pcVar1)();
      }
    }
    else {
      bVar2 = SBORROW8(lVar7,lVar8);
      if ((lVar8 <= lVar7) && (lVar7 = lVar7 - lVar8, bVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d290);
        (*pcVar1)();
      }
    }
    if (lVar8 <= lVar5) {
      start = start_00 + *(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x48) * lVar7;
      goto LAB_10068d2e4;
    }
    if (lVar6 <= lVar7) {
      lVar5 = lVar8 - lVar7;
      if (lVar8 < lVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d380);
        (*pcVar1)();
      }
      if (SBORROW8(lVar8,lVar7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d384);
        (*pcVar1)();
      }
      UVar3 = Swift::UnsafeMutableBufferPointer::_init
                        (start_00 +
                         *(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x48) * lVar7);
      if (lVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d388);
        (*pcVar1)();
      }
      UVar4 = Swift::UnsafeMutableBufferPointer::_init(start_00);
      bVar2 = lVar6 == 0;
      UVar9.unknown = (undefined *)0x0;
      if (!bVar2) {
        UVar9 = UVar4;
      }
      goto LAB_10068d2fc;
    }
    lVar5 = lVar6 - lVar7;
    if (SBORROW8(lVar6,lVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d37c);
      (*pcVar1)();
    }
    start = start_00 + *(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x48) * lVar7;
  }
  UVar3 = Swift::UnsafeMutableBufferPointer::_init(start);
  lVar6 = 0;
  bVar2 = true;
  UVar9.unknown = (undefined *)0x0;
LAB_10068d2fc:
  *param_1 = UVar3.unknown;
  param_1[1] = lVar5;
  param_1[2] = UVar9.unknown;
  param_1[3] = lVar6;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Address: 0x10068d38c | FUN_10068d38c */

void FUN_10068d38c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  Optional OVar3;
  long lVar4;
  UnsafeMutableBufferPointer<undefined> UVar5;
  UnsafeMutableBufferPointer UVar6;
  undefined1 uVar7;
  char cVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_80;
  long lStack_78;
  char local_70;
  UnsafeBufferPointer<undefined> local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  if (param_2 < 1) {
    UVar5.unknown = (undefined *)0x0;
    uVar10 = 0;
    lStack_78 = 0;
    cVar8 = '\0';
    uVar7 = 1;
    local_80 = 0;
  }
  else {
    lVar4 = unaff_x20[2];
    lVar1 = lVar4 + param_2;
    unaff_x20[2] = lVar1;
    if (SCARRY8(lVar4,param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068d4dc);
      (*pcVar2)();
    }
    if (lVar1 < lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068d4e0);
      (*pcVar2)();
    }
    uVar9 = *(undefined8 *)(param_3 + 0x10);
    FUN_10068d098(&local_68,lVar4,lVar1,*unaff_x20,unaff_x20[1],lVar1,unaff_x20[3],uVar9);
    uVar10 = uStack_60;
    UVar5 = Swift::UnsafeMutableBufferPointer::init(local_68);
    uStack_98 = uStack_50;
    local_a0 = local_58;
    local_90 = local_48;
    local_b0 = uVar9;
    Swift::UnsafeBufferPointer::typeMetadataAccessor();
    OVar3 = Swift::Optional::typeMetadataAccessor();
    UVar6 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
    FUN_100617fb8(&local_80,FUN_100688370,auStack_c0,OVar3.value,
                  PTR___type_metadata_for_Swift_Never_100eadc38,UVar6.unknown,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    uVar7 = 0;
    uVar9 = 0;
    if (lStack_78 != 0) {
      uVar9 = local_80;
    }
    cVar8 = local_70;
    if (lStack_78 == 0 || local_70 == '\x01') {
      cVar8 = '\x01';
    }
    if (local_70 != '\x01') {
      local_80 = uVar9;
    }
  }
  *param_1 = UVar5.unknown;
  param_1[1] = uVar10;
  param_1[2] = local_80;
  param_1[3] = lStack_78;
  *(char *)(param_1 + 4) = cVar8;
  *(undefined1 *)((long)param_1 + 0x21) = uVar7;
  return;
}



/* Address: 0x10068d4e0 | FUN_10068d4e0 */

void FUN_10068d4e0(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long count;
  code *pcVar1;
  bool bVar2;
  UnsafeMutablePointer<undefined> UVar3;
  long lVar4;
  UnsafeMutablePointer UVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  lVar12 = unaff_x20[2];
  lVar8 = lVar12 - param_3;
  if (SBORROW8(lVar12,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d944);
    (*pcVar1)();
  }
  lVar6 = unaff_x20[3];
  if (lVar8 <= param_3) {
    lVar10 = lVar6 + lVar12;
    if (SCARRY8(lVar6,lVar12)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d94c);
      (*pcVar1)();
    }
    lVar13 = unaff_x20[1];
    if (lVar12 < 0) {
      if ((lVar10 < 0) && (bVar2 = SCARRY8(lVar10,lVar13), lVar10 = lVar10 + lVar13, bVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d988);
        (*pcVar1)();
      }
    }
    else {
      bVar2 = SBORROW8(lVar10,lVar13);
      if ((lVar13 <= lVar10) && (lVar10 = lVar10 - lVar13, bVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d578);
        (*pcVar1)();
      }
    }
    lVar11 = lVar12 + param_2;
    if (SCARRY8(lVar12,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d954);
      (*pcVar1)();
    }
    lVar12 = lVar6 + lVar11;
    if (SCARRY8(lVar6,lVar11)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d958);
      (*pcVar1)();
    }
    if (lVar11 < 0) {
      if ((lVar12 < 0) && (bVar2 = SCARRY8(lVar12,lVar13), lVar12 = lVar12 + lVar13, bVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d990);
        (*pcVar1)();
      }
    }
    else {
      bVar2 = SBORROW8(lVar12,lVar13);
      if ((lVar13 <= lVar12) && (lVar12 = lVar12 - lVar13, bVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d5ac);
        (*pcVar1)();
      }
    }
    lVar9 = 0;
    if (lVar13 <= lVar6 + param_3) {
      lVar9 = lVar13;
    }
    lVar9 = (lVar6 + param_3) - lVar9;
    lVar4 = lVar9 + param_2;
    if (SCARRY8(lVar9,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d960);
      (*pcVar1)();
    }
    if (param_2 < 0) {
      if ((lVar4 < 0) && (bVar2 = SCARRY8(lVar4,lVar13), lVar4 = lVar4 + lVar13, bVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d998);
        (*pcVar1)();
      }
    }
    else {
      bVar2 = SBORROW8(lVar4,lVar13);
      if ((lVar13 <= lVar4) && (lVar4 = lVar4 - lVar13, bVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d624);
        (*pcVar1)();
      }
    }
    lVar6 = lVar10;
    if (lVar10 < 1) {
      lVar6 = lVar13;
    }
    lVar7 = lVar12;
    if (lVar12 < 1) {
      lVar7 = lVar13;
    }
    if (lVar6 < lVar9) {
      if (lVar7 < lVar4) {
        if (0 < lVar10) {
          Swift::UnsafeMutablePointer::moveInitialize
                    ((undefined *)*unaff_x20,lVar10,
                     (UnsafeMutablePointer)
                     ((undefined *)*unaff_x20 +
                     *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) * param_2));
        }
        if (SBORROW8(0,param_2)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d974);
          (*pcVar1)();
        }
        if (0 < param_2) {
          Swift::UnsafeMutablePointer::moveInitialize
                    ((UnsafeMutablePointer<undefined>)
                     ((undefined *)*unaff_x20 +
                     *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) *
                     (lVar13 - param_2)),param_2,(undefined *)*unaff_x20);
        }
        lVar12 = lVar8 - param_2;
        if (SBORROW8(lVar8,param_2)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d980);
          (*pcVar1)();
        }
        lVar8 = lVar12 - lVar10;
        if (SBORROW8(lVar12,lVar10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d984);
          (*pcVar1)();
        }
      }
      else {
        if (0 < lVar10) {
          Swift::UnsafeMutablePointer::moveInitialize
                    ((undefined *)*unaff_x20,lVar10,
                     (UnsafeMutablePointer)
                     ((undefined *)*unaff_x20 +
                     *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) * param_2));
        }
        lVar8 = lVar13 - lVar9;
        if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d97c);
          (*pcVar1)();
        }
      }
    }
    else if (lVar7 < lVar4) {
      if (SBORROW8(0,param_2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d978);
        (*pcVar1)();
      }
      if (0 < lVar12) {
        Swift::UnsafeMutablePointer::moveInitialize
                  ((UnsafeMutablePointer<undefined>)
                   ((undefined *)*unaff_x20 +
                   *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) * (lVar13 - param_2))
                   ,lVar12,(undefined *)*unaff_x20);
      }
      bVar2 = SBORROW8(lVar8,lVar12);
      lVar8 = lVar8 - lVar12;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d7f4);
        (*pcVar1)();
      }
    }
    if (0 < lVar8) {
      lVar12 = *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48);
      Swift::UnsafeMutablePointer::moveInitialize
                ((undefined *)(*unaff_x20 + lVar12 * lVar9),lVar8,
                 (undefined *)(*unaff_x20 + lVar12 * lVar4));
    }
    unaff_x20[2] = lVar11;
    if (lVar4 < 1) {
      lVar4 = lVar13;
    }
    goto LAB_10068d908;
  }
  lVar8 = -param_2;
  if (SBORROW8(0,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d948);
    (*pcVar1)();
  }
  lVar10 = lVar6 + lVar8;
  if (SCARRY8(lVar6,lVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d950);
    (*pcVar1)();
  }
  lVar13 = unaff_x20[1];
  if (lVar8 < 0) {
    if ((lVar10 < 0) && (bVar2 = SCARRY8(lVar10,lVar13), lVar10 = lVar10 + lVar13, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d98c);
      (*pcVar1)();
    }
  }
  else {
    bVar2 = SBORROW8(lVar10,lVar13);
    if ((lVar13 <= lVar10) && (lVar10 = lVar10 - lVar13, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d554);
      (*pcVar1)();
    }
  }
  lVar11 = 0;
  if (lVar13 <= lVar6 + param_3) {
    lVar11 = lVar13;
  }
  lVar11 = (lVar6 + param_3) - lVar11;
  lVar9 = lVar11 + lVar8;
  if (SCARRY8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d95c);
    (*pcVar1)();
  }
  if (lVar8 < 0) {
    if ((lVar9 < 0) && (bVar2 = SCARRY8(lVar9,lVar13), lVar9 = lVar9 + lVar13, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d994);
      (*pcVar1)();
    }
  }
  else {
    bVar2 = SBORROW8(lVar9,lVar13);
    if ((lVar13 <= lVar9) && (lVar9 = lVar9 - lVar13, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d5e8);
      (*pcVar1)();
    }
  }
  lVar4 = lVar11;
  if (lVar11 < 1) {
    lVar4 = lVar13;
  }
  lVar7 = lVar9;
  if (lVar9 < 1) {
    lVar7 = lVar13;
  }
  if (lVar4 < lVar6) {
    count = lVar13 - lVar6;
    if (lVar7 < lVar10) {
      if (SBORROW8(lVar13,lVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d968);
        (*pcVar1)();
      }
      if (0 < count) {
        lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48);
        Swift::UnsafeMutablePointer::moveInitialize
                  ((undefined *)(*unaff_x20 + lVar11 * lVar6),count,
                   (undefined *)(*unaff_x20 + lVar11 * lVar10));
      }
      if (0 < param_2) {
        UVar3.unknown = (undefined *)*unaff_x20;
        UVar5.unknown =
             UVar3.unknown +
             *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) * (lVar13 + lVar8);
        lVar8 = param_2;
LAB_10068d6dc:
        Swift::UnsafeMutablePointer::moveInitialize(UVar3,lVar8,UVar5);
      }
LAB_10068d6e4:
      if (lVar9 < 1) goto LAB_10068d870;
      UVar5.unknown = (undefined *)*unaff_x20;
      UVar3.unknown =
           UVar5.unknown + *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) * param_2;
      param_3 = lVar9;
    }
    else {
      if (SBORROW8(lVar13,lVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d970);
        (*pcVar1)();
      }
      if (0 < count) {
        lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48);
        Swift::UnsafeMutablePointer::moveInitialize
                  ((undefined *)(*unaff_x20 + lVar7 * lVar6),count,
                   (undefined *)(*unaff_x20 + lVar7 * lVar10));
      }
      if (lVar11 < 1) goto LAB_10068d870;
      UVar3.unknown = (undefined *)*unaff_x20;
      UVar5.unknown =
           UVar3.unknown +
           *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) * (lVar13 + lVar8);
      param_3 = lVar11;
    }
LAB_10068d868:
    Swift::UnsafeMutablePointer::moveInitialize(UVar3,param_3,UVar5);
  }
  else {
    if (lVar7 < lVar10) {
      lVar8 = lVar13 - lVar10;
      if (SBORROW8(lVar13,lVar10)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d96c);
        (*pcVar1)();
      }
      if (0 < lVar8) {
        lVar13 = *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48);
        UVar5.unknown = (undefined *)(*unaff_x20 + lVar13 * lVar10);
        UVar3.unknown = (undefined *)(*unaff_x20 + lVar13 * lVar6);
        goto LAB_10068d6dc;
      }
      goto LAB_10068d6e4;
    }
    if (0 < param_3) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48);
      UVar5.unknown = (undefined *)(*unaff_x20 + lVar8 * lVar10);
      UVar3.unknown = (undefined *)(*unaff_x20 + lVar8 * lVar6);
      goto LAB_10068d868;
    }
  }
LAB_10068d870:
  unaff_x20[3] = lVar10;
  if (SCARRY8(lVar12,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068d964);
    (*pcVar1)();
  }
  unaff_x20[2] = lVar12 + param_2;
LAB_10068d908:
  FUN_10068d170(&local_88,lVar9,lVar4,param_4);
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = uStack_78;
  *(undefined1 *)(param_1 + 4) = local_68;
  return;
}



/* Address: 0x10068d998 | FUN_10068d998 */

void FUN_10068d998(long *param_1,long param_2,long *param_3,long param_4,long param_5)

{
  long count;
  long lVar1;
  code *pcVar2;
  bool bVar3;
  UnsafeMutablePointer<undefined> UVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  UnsafeMutablePointer UVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar6 = *param_1;
  if (param_2 <= lVar6) {
    return;
  }
  lVar5 = param_4 + lVar6;
  if (SCARRY8(param_4,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068de90);
    (*pcVar2)();
  }
  lVar6 = param_4 + param_2;
  if (SCARRY8(param_4,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068de94);
    (*pcVar2)();
  }
  count = lVar6 - lVar5;
  if (lVar6 < lVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068de98);
    (*pcVar2)();
  }
  if (SBORROW8(lVar6,lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068de9c);
    (*pcVar2)();
  }
  if (count < 1) {
    return;
  }
  lVar12 = param_3[2];
  lVar9 = param_3[3];
  lVar7 = param_3[1];
  lVar11 = 0;
  if (lVar7 <= lVar9 + lVar5) {
    lVar11 = lVar7;
  }
  lVar10 = 0;
  if (lVar7 <= lVar9 + lVar6) {
    lVar10 = lVar7;
  }
  lVar1 = lVar12 - lVar6;
  if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dea0);
    (*pcVar2)();
  }
  lVar11 = (lVar9 + lVar5) - lVar11;
  lVar10 = (lVar9 + lVar6) - lVar10;
  if (lVar1 <= lVar5) {
    lVar6 = lVar9 + lVar12;
    if (SCARRY8(lVar9,lVar12)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dea8);
      (*pcVar2)();
    }
    if (lVar12 < 0) {
      if ((lVar6 < 0) && (bVar3 = SCARRY8(lVar6,lVar7), lVar6 = lVar6 + lVar7, bVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ded4);
        (*pcVar2)();
      }
    }
    else {
      bVar3 = SBORROW8(lVar6,lVar7);
      if ((lVar7 <= lVar6) && (lVar6 = lVar6 - lVar7, bVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dac4);
        (*pcVar2)();
      }
    }
    if (SBORROW8(lVar12,count)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068deac);
      (*pcVar2)();
    }
    lVar9 = (lVar12 - count) + lVar9;
    lVar5 = 0;
    if (lVar7 <= lVar9) {
      lVar5 = lVar7;
    }
    if (lVar1 == 0) goto LAB_10068de64;
    lVar9 = lVar9 - lVar5;
    lVar5 = lVar9;
    if (lVar9 < 1) {
      lVar5 = lVar7;
    }
    lVar12 = lVar6;
    if (lVar6 < 1) {
      lVar12 = lVar7;
    }
    if (lVar10 < lVar12) {
      if (lVar5 < lVar11) {
        lVar6 = lVar7 - lVar11;
        if (SBORROW8(lVar7,lVar11)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dec0);
          (*pcVar2)();
        }
        if (0 < lVar6) {
          lVar5 = *(long *)(*(long *)(param_5 + -8) + 0x48);
          Swift::UnsafeMutablePointer::moveInitialize
                    ((undefined *)(*param_3 + lVar5 * lVar10),lVar6,
                     (undefined *)(*param_3 + lVar5 * lVar11));
          lVar5 = lVar10 + lVar6;
          if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ded8);
            (*pcVar2)();
          }
          lVar9 = param_3[1];
          lVar10 = lVar5;
          if ((lVar9 <= lVar5) && (lVar10 = lVar5 - lVar9, SBORROW8(lVar5,lVar9))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dee8);
            (*pcVar2)();
          }
        }
        if (SBORROW8(lVar1,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ded0);
          (*pcVar2)();
        }
        if (0 < lVar1 - lVar6) {
          UVar8.unknown = (undefined *)*param_3;
          UVar4.unknown = UVar8.unknown + *(long *)(*(long *)(param_5 + -8) + 0x48) * lVar10;
          lVar6 = lVar1 - lVar6;
LAB_10068de5c:
          Swift::UnsafeMutablePointer::moveInitialize(UVar4,lVar6,UVar8);
        }
      }
      else if (0 < lVar1) {
        lVar6 = *(long *)(*(long *)(param_5 + -8) + 0x48);
        UVar8.unknown = (undefined *)(*param_3 + lVar6 * lVar11);
        UVar4.unknown = (undefined *)(*param_3 + lVar6 * lVar10);
        lVar6 = lVar1;
        goto LAB_10068de5c;
      }
    }
    else {
      lVar12 = lVar7 - lVar10;
      if (lVar5 < lVar11) {
        if (SBORROW8(lVar7,lVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dec4);
          (*pcVar2)();
        }
        if (lVar12 < 1) {
          lVar6 = *(long *)(*(long *)(param_5 + -8) + 0x48);
        }
        else {
          lVar6 = *(long *)(*(long *)(param_5 + -8) + 0x48);
          Swift::UnsafeMutablePointer::moveInitialize
                    ((undefined *)(*param_3 + lVar6 * lVar10),lVar12,
                     (undefined *)(*param_3 + lVar6 * lVar11));
          bVar3 = SCARRY8(lVar11,lVar12);
          lVar11 = lVar11 + lVar12;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dedc);
            (*pcVar2)();
          }
          lVar5 = param_3[1];
          bVar3 = SBORROW8(lVar11,lVar5);
          if ((lVar5 <= lVar11) && (lVar11 = lVar11 - lVar5, bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068def0);
            (*pcVar2)();
          }
        }
        Swift::UnsafeMutablePointer::moveInitialize
                  ((undefined *)*param_3,count,
                   (UnsafeMutablePointer)((undefined *)*param_3 + lVar6 * lVar11));
        lVar11 = param_3[1];
        lVar5 = count;
        if ((lVar11 <= count) && (lVar5 = count - lVar11, SBORROW8(count,lVar11))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dee4);
          (*pcVar2)();
        }
        if (0 < lVar9) {
          UVar8.unknown = (undefined *)*param_3;
          UVar4.unknown = UVar8.unknown + lVar5 * lVar6;
          lVar6 = lVar9;
          goto LAB_10068de5c;
        }
      }
      else {
        if (SBORROW8(lVar7,lVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dec8);
          (*pcVar2)();
        }
        if (0 < lVar12) {
          lVar5 = *(long *)(*(long *)(param_5 + -8) + 0x48);
          Swift::UnsafeMutablePointer::moveInitialize
                    ((undefined *)(*param_3 + lVar5 * lVar10),lVar12,
                     (undefined *)(*param_3 + lVar5 * lVar11));
          lVar5 = lVar11 + lVar12;
          if (SCARRY8(lVar11,lVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dee0);
            (*pcVar2)();
          }
          lVar9 = param_3[1];
          lVar11 = lVar5;
          if ((lVar9 <= lVar5) && (lVar11 = lVar5 - lVar9, SBORROW8(lVar5,lVar9))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068deec);
            (*pcVar2)();
          }
        }
        if (0 < lVar6) {
          UVar4.unknown = (undefined *)*param_3;
          UVar8.unknown = UVar4.unknown + *(long *)(*(long *)(param_5 + -8) + 0x48) * lVar11;
          goto LAB_10068de5c;
        }
      }
    }
LAB_10068de64:
    lVar6 = param_3[2] - count;
    if (SBORROW8(param_3[2],count)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068deb0);
      (*pcVar2)();
    }
    goto LAB_10068de70;
  }
  lVar6 = lVar9 + count;
  if (SCARRY8(lVar9,count)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068dea4);
    (*pcVar2)();
  }
  lVar12 = lVar6;
  if ((lVar7 <= lVar6) && (lVar12 = lVar6 - lVar7, SBORROW8(lVar6,lVar7))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068deb4);
    (*pcVar2)();
  }
  if (lVar5 != 0) {
    lVar6 = lVar10;
    if (lVar10 < 1) {
      lVar6 = lVar7;
    }
    lVar1 = lVar11;
    if (lVar11 < 1) {
      lVar1 = lVar7;
    }
    if (lVar9 < lVar1) {
      if (lVar6 < lVar12) {
        if (0 < lVar10) {
          Swift::UnsafeMutablePointer::moveInitialize
                    ((UnsafeMutablePointer<undefined>)
                     ((undefined *)*param_3 +
                     *(long *)(*(long *)(param_5 + -8) + 0x48) * (lVar7 - count)),lVar10,
                     (undefined *)*param_3);
          lVar9 = param_3[3];
        }
        lVar11 = lVar10;
        if (SBORROW8(lVar5,lVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068daa4);
          (*pcVar2)();
        }
LAB_10068dcac:
        lVar5 = lVar5 - lVar11;
        if (lVar5 < 1) goto LAB_10068dde0;
        lVar6 = *(long *)(*(long *)(param_5 + -8) + 0x48);
        UVar8.unknown = (undefined *)(*param_3 + lVar6 * lVar12);
        UVar4.unknown = (undefined *)(*param_3 + lVar6 * lVar9);
      }
      else {
        if (lVar5 < 1) goto LAB_10068dde0;
        lVar6 = *(long *)(*(long *)(param_5 + -8) + 0x48);
        UVar8.unknown = (undefined *)(*param_3 + lVar6 * lVar12);
        UVar4.unknown = (undefined *)(*param_3 + lVar6 * lVar9);
      }
      Swift::UnsafeMutablePointer::moveInitialize(UVar4,lVar5,UVar8);
    }
    else {
      if (lVar12 <= lVar6) {
        if (SBORROW8(0,lVar11)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068deb8);
          (*pcVar2)();
        }
        if (0 < lVar11) {
          Swift::UnsafeMutablePointer::moveInitialize
                    ((undefined *)*param_3,lVar11,
                     (UnsafeMutablePointer)
                     ((undefined *)*param_3 +
                     *(long *)(*(long *)(param_5 + -8) + 0x48) * (lVar10 - lVar11)));
          lVar9 = param_3[3];
        }
        if (SBORROW8(lVar5,lVar11)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068decc);
          (*pcVar2)();
        }
        goto LAB_10068dcac;
      }
      if (lVar11 < 1) {
        lVar6 = *(long *)(*(long *)(param_5 + -8) + 0x48);
      }
      else {
        lVar6 = *(long *)(*(long *)(param_5 + -8) + 0x48);
        Swift::UnsafeMutablePointer::moveInitialize
                  ((undefined *)*param_3,lVar11,
                   (UnsafeMutablePointer)((undefined *)*param_3 + lVar6 * count));
        lVar7 = param_3[1];
      }
      Swift::UnsafeMutablePointer::moveInitialize
                ((UnsafeMutablePointer<undefined>)((undefined *)*param_3 + lVar6 * (lVar7 - count)),
                 count,(undefined *)*param_3);
      if (SBORROW8(lVar5,lVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10068debc);
        (*pcVar2)();
      }
      if (0 < lVar5 - lVar10) {
        Swift::UnsafeMutablePointer::moveInitialize
                  ((undefined *)(*param_3 + param_3[3] * lVar6),lVar5 - lVar10,
                   (undefined *)(*param_3 + lVar6 * lVar12));
      }
    }
  }
LAB_10068dde0:
  param_3[3] = lVar12;
  lVar6 = param_3[2] - count;
  if (SBORROW8(param_3[2],count)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ddf4);
    (*pcVar2)();
  }
LAB_10068de70:
  param_3[2] = lVar6;
  return;
}



/* Address: 0x10068def0 | FUN_10068def0 */

/* WARNING: Removing unreachable block (ram,0x00010068e7d0) */
/* WARNING: Removing unreachable block (ram,0x00010068e854) */
/* WARNING: Removing unreachable block (ram,0x00010068e818) */
/* WARNING: Removing unreachable block (ram,0x00010068e9a8) */
/* WARNING: Removing unreachable block (ram,0x00010068e81c) */
/* WARNING: Removing unreachable block (ram,0x00010068e824) */
/* WARNING: Removing unreachable block (ram,0x00010068e858) */
/* WARNING: Removing unreachable block (ram,0x00010068e950) */
/* WARNING: Removing unreachable block (ram,0x00010068e860) */

void FUN_10068def0(long param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  Optional OVar5;
  UnsafeMutablePointer<undefined> UVar6;
  UnsafeMutableBufferPointer<undefined> UVar7;
  UnsafeMutableBufferPointer UVar8;
  UnsafeMutableBufferPointer<undefined> UVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  UnsafeMutablePointer UVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *unaff_x20;
  code *pcVar22;
  long unaff_x21;
  long lVar23;
  UnsafeMutablePointer UVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined1 auStack_1a0 [8];
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined1 *local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined *local_d0;
  long lStack_c8;
  char local_c0;
  undefined1 auStack_b8 [40];
  UnsafeBufferPointer<undefined> local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  local_158 = *(long *)(param_7 + -8);
  uVar16 = *(long *)(local_158 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_178 = auStack_1a0 + -uVar16;
  local_188 = (long)local_178 - uVar16;
  local_180 = local_188 - uVar16;
  lVar20 = local_180 - uVar16;
  local_170 = lVar20 - uVar16;
  local_168 = local_170 - uVar16;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e928);
    (*pcVar22)();
  }
  lVar18 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e92c);
    (*pcVar22)();
  }
  lVar25 = unaff_x20[2];
  if (SBORROW8(lVar25,param_2)) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e930);
    (*pcVar22)();
  }
  local_150 = param_8;
  local_148 = param_7;
  if (lVar18 < 1) {
    lVar12 = -lVar18;
    lVar17 = param_1;
    if (param_1 < lVar25 - param_2) {
      if (SBORROW8(0,lVar18)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e944);
        (*pcVar22)();
      }
      FUN_10068bfa8();
    }
    else {
      if (SBORROW8(0,lVar18)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e948);
        (*pcVar22)();
      }
      FUN_10068e9b0();
    }
    lVar18 = lVar17 - lVar12;
    if (SBORROW8(lVar17,lVar12)) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e938);
      (*pcVar22)();
    }
    if (0 < lVar18) {
      lVar26 = unaff_x20[1];
      lVar21 = unaff_x20[3];
      lVar11 = 0;
      if (lVar26 <= lVar21 + lVar12) {
        lVar11 = lVar26;
      }
      lVar19 = 0;
      if (lVar26 <= lVar21 + lVar17) {
        lVar19 = lVar26;
      }
      lVar23 = lVar25 - lVar17;
      if (SBORROW8(lVar25,lVar17)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e940);
        (*pcVar22)();
      }
      lVar11 = (lVar21 + lVar12) - lVar11;
      lVar19 = (lVar21 + lVar17) - lVar19;
      if (lVar12 < lVar23) {
        lVar17 = lVar21 + lVar18;
        if (SCARRY8(lVar21,lVar18)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e94c);
          (*pcVar22)();
        }
        lVar23 = lVar17;
        if ((lVar26 <= lVar17) && (lVar23 = lVar17 - lVar26, SBORROW8(lVar17,lVar26))) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e964);
          (*pcVar22)();
        }
        if (lVar12 != 0) {
          lVar17 = lVar19;
          if (lVar19 < 1) {
            lVar17 = lVar26;
          }
          lVar1 = lVar11;
          if (lVar11 < 1) {
            lVar1 = lVar26;
          }
          if (lVar21 < lVar1) {
            if (lVar17 < lVar23) {
              if (0 < lVar19) {
                Swift::UnsafeMutablePointer::moveInitialize
                          ((UnsafeMutablePointer<undefined>)
                           ((undefined *)*unaff_x20 +
                           *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48) *
                           (lVar26 - lVar18)),lVar19,(undefined *)*unaff_x20);
              }
              lVar11 = lVar19;
              if (SBORROW8(lVar12,lVar19)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e124);
                (*pcVar22)();
              }
LAB_10068e348:
              lVar12 = lVar12 - lVar11;
              if (lVar12 < 1) goto LAB_10068e480;
              lVar17 = *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48);
              UVar14.unknown = (undefined *)(*unaff_x20 + lVar17 * lVar23);
              UVar6.unknown = (undefined *)(*unaff_x20 + lVar17 * lVar21);
            }
            else {
              if (lVar12 < 1) goto LAB_10068e480;
              lVar17 = *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48);
              UVar14.unknown = (undefined *)(*unaff_x20 + lVar17 * lVar23);
              UVar6.unknown = (undefined *)(*unaff_x20 + lVar17 * lVar21);
            }
LAB_10068e47c:
            Swift::UnsafeMutablePointer::moveInitialize(UVar6,lVar12,UVar14);
          }
          else {
            if (lVar23 <= lVar17) {
              if (SBORROW8(0,lVar11)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e968);
                (*pcVar22)();
              }
              if (0 < lVar11) {
                Swift::UnsafeMutablePointer::moveInitialize
                          ((undefined *)*unaff_x20,lVar11,
                           (UnsafeMutablePointer)
                           ((undefined *)*unaff_x20 +
                           *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48) *
                           (lVar19 - lVar11)));
              }
              if (SBORROW8(lVar12,lVar11)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e97c);
                (*pcVar22)();
              }
              goto LAB_10068e348;
            }
            local_190 = lVar19;
            local_160 = lVar12;
            if (lVar11 < 1) {
              local_198 = *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48);
            }
            else {
              local_198 = *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48);
              Swift::UnsafeMutablePointer::moveInitialize
                        ((undefined *)*unaff_x20,lVar11,
                         (UnsafeMutablePointer)((undefined *)*unaff_x20 + local_198 * lVar18));
            }
            lVar17 = local_198;
            UVar24.unknown = (undefined *)*unaff_x20;
            Swift::UnsafeMutablePointer::moveInitialize
                      ((UnsafeMutablePointer<undefined>)
                       (UVar24.unknown + local_198 * (lVar26 - lVar18)),lVar18,UVar24);
            lVar12 = local_160 - local_190;
            if (SBORROW8(local_160,local_190)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e96c);
              (*pcVar22)();
            }
            if (0 < lVar12) {
              UVar14.unknown = UVar24.unknown + lVar17 * lVar23;
              UVar6.unknown = UVar24.unknown + lVar17 * lVar21;
              goto LAB_10068e47c;
            }
          }
        }
LAB_10068e480:
        unaff_x20[3] = lVar23;
        if (SBORROW8(lVar25,lVar18)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e95c);
          (*pcVar22)();
        }
        unaff_x20[2] = lVar25 - lVar18;
      }
      else {
        lVar12 = lVar21 + lVar25;
        if (SCARRY8(lVar21,lVar25)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e950);
          (*pcVar22)();
        }
        if (lVar25 < 0) {
          if ((lVar12 < 0) && (bVar4 = SCARRY8(lVar12,lVar26), lVar12 = lVar12 + lVar26, bVar4)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e984);
            (*pcVar22)();
          }
        }
        else {
          bVar4 = SBORROW8(lVar12,lVar26);
          if ((lVar26 <= lVar12) && (lVar12 = lVar12 - lVar26, bVar4)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e144);
            (*pcVar22)();
          }
        }
        local_160 = lVar25 - lVar18;
        if (SBORROW8(lVar25,lVar18)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e958);
          (*pcVar22)();
        }
        lVar25 = 0;
        if (lVar26 <= lVar21 + local_160) {
          lVar25 = lVar26;
        }
        if (lVar23 == 0) goto LAB_10068e50c;
        lVar25 = (lVar21 + local_160) - lVar25;
        lVar17 = lVar25;
        if (lVar25 < 1) {
          lVar17 = lVar26;
        }
        lVar21 = lVar12;
        if (lVar12 < 1) {
          lVar21 = lVar26;
        }
        if (lVar19 < lVar21) {
          if (lVar17 < lVar11) {
            lVar18 = lVar26 - lVar11;
            if (SBORROW8(lVar26,lVar11)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e970);
              (*pcVar22)();
            }
            if (0 < lVar18) {
              lVar25 = *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48);
              Swift::UnsafeMutablePointer::moveInitialize
                        ((undefined *)(*unaff_x20 + lVar25 * lVar19),lVar18,
                         (undefined *)(*unaff_x20 + lVar25 * lVar11));
              lVar25 = lVar19 + lVar18;
              if (SCARRY8(lVar19,lVar18)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e988);
                (*pcVar22)();
              }
              lVar19 = lVar25;
              if ((lVar26 <= lVar25) && (lVar19 = lVar25 - lVar26, SBORROW8(lVar25,lVar26))) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e998);
                (*pcVar22)();
              }
            }
            if (SBORROW8(lVar23,lVar18)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e980);
              (*pcVar22)();
            }
            if (0 < lVar23 - lVar18) {
              UVar24.unknown = (undefined *)*unaff_x20;
              UVar6.unknown =
                   UVar24.unknown +
                   *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48) * lVar19;
              lVar12 = lVar23 - lVar18;
LAB_10068e500:
              Swift::UnsafeMutablePointer::moveInitialize(UVar6,lVar12,UVar24);
            }
          }
          else if (0 < lVar23) {
            lVar18 = *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48);
            UVar24.unknown = (undefined *)(*unaff_x20 + lVar18 * lVar11);
            UVar6.unknown = (undefined *)(*unaff_x20 + lVar18 * lVar19);
            lVar12 = lVar23;
            goto LAB_10068e500;
          }
        }
        else {
          lVar21 = lVar26 - lVar19;
          if (lVar17 < lVar11) {
            if (SBORROW8(lVar26,lVar19)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e974);
              (*pcVar22)();
            }
            if (lVar21 < 1) {
              lVar12 = *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48);
            }
            else {
              local_190 = *(long *)(param_6 + 0x10);
              lVar12 = *(long *)(*(long *)(local_190 + -8) + 0x48);
              Swift::UnsafeMutablePointer::moveInitialize
                        ((undefined *)(*unaff_x20 + lVar12 * lVar19),lVar21,
                         (undefined *)(*unaff_x20 + lVar12 * lVar11));
              bVar4 = SCARRY8(lVar11,lVar21);
              lVar11 = lVar11 + lVar21;
              if (bVar4) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e98c);
                (*pcVar22)();
              }
              bVar4 = SBORROW8(lVar11,lVar26);
              if ((lVar26 <= lVar11) && (lVar11 = lVar11 - lVar26, bVar4)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e9a0);
                (*pcVar22)();
              }
            }
            UVar24.unknown = (undefined *)*unaff_x20;
            Swift::UnsafeMutablePointer::moveInitialize
                      ((UnsafeMutablePointer<undefined>)UVar24.unknown,lVar18,
                       (UnsafeMutablePointer)(UVar24.unknown + lVar12 * lVar11));
            if ((lVar26 <= lVar18) &&
               (bVar4 = SBORROW8(lVar18,lVar26), lVar18 = lVar18 - lVar26, bVar4)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e994);
              (*pcVar22)();
            }
            if (0 < lVar25) {
              UVar6.unknown = UVar24.unknown + lVar18 * lVar12;
              lVar12 = lVar25;
              goto LAB_10068e500;
            }
          }
          else {
            if (SBORROW8(lVar26,lVar19)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e978);
              (*pcVar22)();
            }
            if (0 < lVar21) {
              lVar18 = *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48);
              Swift::UnsafeMutablePointer::moveInitialize
                        ((undefined *)(*unaff_x20 + lVar18 * lVar19),lVar21,
                         (undefined *)(*unaff_x20 + lVar18 * lVar11));
              lVar18 = lVar11 + lVar21;
              if (SCARRY8(lVar11,lVar21)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e990);
                (*pcVar22)();
              }
              lVar11 = lVar18;
              if ((lVar26 <= lVar18) && (lVar11 = lVar18 - lVar26, SBORROW8(lVar18,lVar26))) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e99c);
                (*pcVar22)();
              }
            }
            if (0 < lVar12) {
              UVar6.unknown = (undefined *)*unaff_x20;
              UVar24.unknown =
                   UVar6.unknown +
                   *(long *)(*(long *)(*(long *)(param_6 + 0x10) + -8) + 0x48) * lVar11;
              goto LAB_10068e500;
            }
          }
        }
LAB_10068e50c:
        unaff_x20[2] = local_160;
      }
    }
  }
  else {
    lVar12 = param_1;
    if (lVar25 - param_2 <= param_1) {
      lVar12 = param_2;
    }
    FUN_10068d4e0(auStack_b8,lVar18,lVar12,param_6);
  }
  local_160 = param_9;
  uVar27 = *(undefined8 *)(param_6 + 0x10);
  FUN_10068d098(&local_90,param_1,param_3 + param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],
                unaff_x20[3],uVar27);
  puVar13 = puStack_88;
  UVar7 = Swift::UnsafeMutableBufferPointer::init(local_90);
  uStack_e8 = uStack_78;
  local_f0 = local_80;
  local_e0 = local_70;
  local_100 = (undefined *)uVar27;
  Swift::UnsafeBufferPointer::typeMetadataAccessor();
  OVar5 = Swift::Optional::typeMetadataAccessor();
  UVar8 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  FUN_100617fb8(&local_d0,FUN_100688370,&local_110,OVar5.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,UVar8.unknown,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  puVar3 = local_d0;
  puVar15 = (undefined *)0x0;
  UVar9 = UVar7;
  puVar10 = puVar13;
  FUN_10060ed88();
  local_110 = UVar9.unknown;
  puStack_108 = puVar10;
  local_100 = puVar15;
  (*param_4)(&local_110,lVar20);
  puVar10 = local_100;
  lVar25 = local_148;
  lVar18 = local_170;
  if (unaff_x21 == 0) {
    if (UVar7.unknown == (undefined *)0x0) {
      if (local_110 != (undefined *)0x0) goto LAB_10068e9a4;
    }
    else {
      if (local_110 == (undefined *)0x0) {
LAB_10068e9a4:
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e9a8);
        (*pcVar22)();
      }
      if (UVar7.unknown != local_110) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e6c8);
        (*pcVar22)();
      }
    }
    if (puVar13 != puStack_108) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e93c);
      (*pcVar22)();
    }
    local_d0 = local_100;
    FUN_10060ee44(0,0,0,uVar27);
    lVar20 = local_148;
    if (((puVar10 == puVar13) && (local_c0 != '\x01')) && (lStack_c8 != 0)) {
      puVar15 = (undefined *)0x0;
      puVar10 = puVar3;
      lVar18 = lStack_c8;
      FUN_10060ed88();
      local_110 = puVar10;
      puStack_108 = (undefined *)lVar18;
      local_100 = puVar15;
      (*param_4)(&local_110,local_178);
      if (puVar3 == (undefined *)0x0) {
        if (local_110 != (undefined *)0x0) goto LAB_10068e9ac;
      }
      else {
        if (local_110 == (undefined *)0x0) {
LAB_10068e9ac:
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e9b0);
          (*pcVar22)();
        }
        if (puVar3 != local_110) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e854);
          (*pcVar22)();
        }
      }
      if ((undefined *)lStack_c8 != puStack_108) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e960);
        (*pcVar22)();
      }
      local_d0 = local_100 + (long)puVar13;
      FUN_10060ee44(0,0,0,uVar27);
    }
    FUN_10068ea14(&local_d0,param_3,unaff_x20,param_1,param_3 + param_1,uVar27,lVar20,local_150);
  }
  else {
    pcVar22 = *(code **)(local_158 + 0x20);
    (*pcVar22)(local_170,lVar20,local_148);
    lVar20 = local_168;
    (*pcVar22)(local_168,lVar18,lVar25);
    uVar2 = local_150;
    if (UVar7.unknown == (undefined *)0x0) {
      if (local_110 != (undefined *)0x0) goto LAB_10068e9a0;
    }
    else {
      if (local_110 == (undefined *)0x0) {
LAB_10068e9a0:
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e9a4);
        (*pcVar22)();
      }
      if (UVar7.unknown != local_110) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e6a0);
        (*pcVar22)();
      }
    }
    if (puVar13 != puStack_108) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10068e934);
      (*pcVar22)();
    }
    local_d0 = local_100;
    FUN_10060ee44(0,0,0,uVar27);
    (*pcVar22)(local_160,lVar20,lVar25);
    FUN_10068ea14(&local_d0,param_3,unaff_x20,param_1,param_3 + param_1,uVar27,lVar25,uVar2);
  }
  return;
}



/* Address: 0x10068e9b0 | FUN_10068e9b0 */

undefined1  [16] FUN_10068e9b0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068ea04);
    (*pcVar1)();
  }
  if (SBORROW8(param_2,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068ea08);
    (*pcVar1)();
  }
  param_1 = -param_1;
  if ((0 < param_2 - param_3) || (lVar2 = param_2, param_2 - param_3 <= param_1)) {
    lVar2 = param_3 + param_1;
    if (SCARRY8(param_3,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068ea10);
      (*pcVar1)();
    }
    if ((lVar2 < param_2) || (param_3 < lVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068ea14);
      (*pcVar1)();
    }
  }
  if (lVar2 <= param_3) {
    auVar3._8_8_ = param_3;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068ea0c);
  (*pcVar1)();
}



/* Address: 0x10068ea14 | FUN_10068ea14 */

void FUN_10068ea14(ulong *param_1,long param_2,long *param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  long count;
  code *pcVar2;
  bool bVar3;
  UnsafeMutablePointer<undefined> UVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  UnsafeMutablePointer UVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar6 = *param_1;
  if (param_2 <= (long)uVar6) {
    return;
  }
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef2c);
    (*pcVar2)();
  }
  if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef30);
    (*pcVar2)();
  }
  if ((uVar6 == 0) || (lVar5 = param_5, uVar6 <= (ulong)(param_5 - param_4))) {
    lVar5 = param_4 + uVar6;
    if (SCARRY8(param_4,uVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef3c);
      (*pcVar2)();
    }
    if ((lVar5 < param_4) || (param_5 < lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef40);
      (*pcVar2)();
    }
  }
  count = param_5 - lVar5;
  if (SBORROW8(param_5,lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef34);
    (*pcVar2)();
  }
  if (count < 1) {
    return;
  }
  lVar8 = param_3[2];
  lVar10 = param_3[3];
  lVar7 = param_3[1];
  lVar12 = 0;
  if (lVar7 <= lVar10 + lVar5) {
    lVar12 = lVar7;
  }
  lVar11 = 0;
  if (lVar7 <= lVar10 + param_5) {
    lVar11 = lVar7;
  }
  lVar13 = lVar8 - param_5;
  if (SBORROW8(lVar8,param_5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef38);
    (*pcVar2)();
  }
  lVar12 = (lVar10 + lVar5) - lVar12;
  lVar11 = (lVar10 + param_5) - lVar11;
  if (lVar13 <= lVar5) {
    lVar5 = lVar10 + lVar8;
    if (SCARRY8(lVar10,lVar8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef48);
      (*pcVar2)();
    }
    if (lVar8 < 0) {
      if ((lVar5 < 0) && (bVar3 = SCARRY8(lVar5,lVar7), lVar5 = lVar5 + lVar7, bVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef74);
        (*pcVar2)();
      }
    }
    else {
      bVar3 = SBORROW8(lVar5,lVar7);
      if ((lVar7 <= lVar5) && (lVar5 = lVar5 - lVar7, bVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10068eb60);
        (*pcVar2)();
      }
    }
    if (SBORROW8(lVar8,count)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef4c);
      (*pcVar2)();
    }
    lVar10 = (lVar8 - count) + lVar10;
    lVar8 = 0;
    if (lVar7 <= lVar10) {
      lVar8 = lVar7;
    }
    if (lVar13 == 0) goto LAB_10068ef00;
    lVar10 = lVar10 - lVar8;
    lVar8 = lVar10;
    if (lVar10 < 1) {
      lVar8 = lVar7;
    }
    lVar1 = lVar5;
    if (lVar5 < 1) {
      lVar1 = lVar7;
    }
    if (lVar11 < lVar1) {
      if (lVar8 < lVar12) {
        lVar5 = lVar7 - lVar12;
        if (SBORROW8(lVar7,lVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef60);
          (*pcVar2)();
        }
        if (0 < lVar5) {
          lVar10 = *(long *)(*(long *)(param_6 + -8) + 0x48);
          Swift::UnsafeMutablePointer::moveInitialize
                    ((undefined *)(*param_3 + lVar10 * lVar11),lVar5,
                     (undefined *)(*param_3 + lVar10 * lVar12));
          lVar10 = lVar11 + lVar5;
          if (SCARRY8(lVar11,lVar5)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef78);
            (*pcVar2)();
          }
          lVar12 = param_3[1];
          lVar11 = lVar10;
          if ((lVar12 <= lVar10) && (lVar11 = lVar10 - lVar12, SBORROW8(lVar10,lVar12))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef88);
            (*pcVar2)();
          }
        }
        if (SBORROW8(lVar13,lVar5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef70);
          (*pcVar2)();
        }
        if (0 < lVar13 - lVar5) {
          UVar9.unknown = (undefined *)*param_3;
          UVar4.unknown = UVar9.unknown + *(long *)(*(long *)(param_6 + -8) + 0x48) * lVar11;
          lVar5 = lVar13 - lVar5;
LAB_10068eef8:
          Swift::UnsafeMutablePointer::moveInitialize(UVar4,lVar5,UVar9);
        }
      }
      else if (0 < lVar13) {
        lVar5 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        UVar9.unknown = (undefined *)(*param_3 + lVar5 * lVar12);
        UVar4.unknown = (undefined *)(*param_3 + lVar5 * lVar11);
        lVar5 = lVar13;
        goto LAB_10068eef8;
      }
    }
    else {
      lVar13 = lVar7 - lVar11;
      if (lVar8 < lVar12) {
        if (SBORROW8(lVar7,lVar11)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef64);
          (*pcVar2)();
        }
        if (lVar13 < 1) {
          lVar5 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        }
        else {
          lVar5 = *(long *)(*(long *)(param_6 + -8) + 0x48);
          Swift::UnsafeMutablePointer::moveInitialize
                    ((undefined *)(*param_3 + lVar5 * lVar11),lVar13,
                     (undefined *)(*param_3 + lVar5 * lVar12));
          bVar3 = SCARRY8(lVar12,lVar13);
          lVar12 = lVar12 + lVar13;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef7c);
            (*pcVar2)();
          }
          lVar8 = param_3[1];
          bVar3 = SBORROW8(lVar12,lVar8);
          if ((lVar8 <= lVar12) && (lVar12 = lVar12 - lVar8, bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef90);
            (*pcVar2)();
          }
        }
        Swift::UnsafeMutablePointer::moveInitialize
                  ((undefined *)*param_3,count,
                   (UnsafeMutablePointer)((undefined *)*param_3 + lVar5 * lVar12));
        lVar8 = param_3[1];
        lVar12 = count;
        if ((lVar8 <= count) && (lVar12 = count - lVar8, SBORROW8(count,lVar8))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef84);
          (*pcVar2)();
        }
        if (0 < lVar10) {
          UVar9.unknown = (undefined *)*param_3;
          UVar4.unknown = UVar9.unknown + lVar12 * lVar5;
          lVar5 = lVar10;
          goto LAB_10068eef8;
        }
      }
      else {
        if (SBORROW8(lVar7,lVar11)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef68);
          (*pcVar2)();
        }
        if (0 < lVar13) {
          lVar10 = *(long *)(*(long *)(param_6 + -8) + 0x48);
          Swift::UnsafeMutablePointer::moveInitialize
                    ((undefined *)(*param_3 + lVar10 * lVar11),lVar13,
                     (undefined *)(*param_3 + lVar10 * lVar12));
          lVar10 = lVar12 + lVar13;
          if (SCARRY8(lVar12,lVar13)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef80);
            (*pcVar2)();
          }
          lVar8 = param_3[1];
          lVar12 = lVar10;
          if ((lVar8 <= lVar10) && (lVar12 = lVar10 - lVar8, SBORROW8(lVar10,lVar8))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef8c);
            (*pcVar2)();
          }
        }
        if (0 < lVar5) {
          UVar4.unknown = (undefined *)*param_3;
          UVar9.unknown = UVar4.unknown + *(long *)(*(long *)(param_6 + -8) + 0x48) * lVar12;
          goto LAB_10068eef8;
        }
      }
    }
LAB_10068ef00:
    lVar5 = param_3[2] - count;
    if (SBORROW8(param_3[2],count)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef50);
      (*pcVar2)();
    }
    goto LAB_10068ef0c;
  }
  lVar8 = lVar10 + count;
  if (SCARRY8(lVar10,count)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef44);
    (*pcVar2)();
  }
  lVar13 = lVar8;
  if ((lVar7 <= lVar8) && (lVar13 = lVar8 - lVar7, SBORROW8(lVar8,lVar7))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef54);
    (*pcVar2)();
  }
  if (lVar5 != 0) {
    lVar8 = lVar11;
    if (lVar11 < 1) {
      lVar8 = lVar7;
    }
    lVar1 = lVar12;
    if (lVar12 < 1) {
      lVar1 = lVar7;
    }
    if (lVar10 < lVar1) {
      if (lVar8 < lVar13) {
        if (0 < lVar11) {
          Swift::UnsafeMutablePointer::moveInitialize
                    ((UnsafeMutablePointer<undefined>)
                     ((undefined *)*param_3 +
                     *(long *)(*(long *)(param_6 + -8) + 0x48) * (lVar7 - count)),lVar11,
                     (undefined *)*param_3);
          lVar10 = param_3[3];
        }
        lVar12 = lVar11;
        if (SBORROW8(lVar5,lVar11)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068eb40);
          (*pcVar2)();
        }
LAB_10068ed48:
        lVar5 = lVar5 - lVar12;
        if (lVar5 < 1) goto LAB_10068ee7c;
        lVar12 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        UVar9.unknown = (undefined *)(*param_3 + lVar12 * lVar13);
        UVar4.unknown = (undefined *)(*param_3 + lVar12 * lVar10);
      }
      else {
        if (lVar5 < 1) goto LAB_10068ee7c;
        lVar12 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        UVar9.unknown = (undefined *)(*param_3 + lVar12 * lVar13);
        UVar4.unknown = (undefined *)(*param_3 + lVar12 * lVar10);
      }
      Swift::UnsafeMutablePointer::moveInitialize(UVar4,lVar5,UVar9);
    }
    else {
      if (lVar13 <= lVar8) {
        if (SBORROW8(0,lVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef58);
          (*pcVar2)();
        }
        if (0 < lVar12) {
          Swift::UnsafeMutablePointer::moveInitialize
                    ((undefined *)*param_3,lVar12,
                     (UnsafeMutablePointer)
                     ((undefined *)*param_3 +
                     *(long *)(*(long *)(param_6 + -8) + 0x48) * (lVar11 - lVar12)));
          lVar10 = param_3[3];
        }
        if (SBORROW8(lVar5,lVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef6c);
          (*pcVar2)();
        }
        goto LAB_10068ed48;
      }
      if (lVar12 < 1) {
        lVar10 = *(long *)(*(long *)(param_6 + -8) + 0x48);
      }
      else {
        lVar10 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        Swift::UnsafeMutablePointer::moveInitialize
                  ((undefined *)*param_3,lVar12,
                   (UnsafeMutablePointer)((undefined *)*param_3 + lVar10 * count));
        lVar7 = param_3[1];
      }
      Swift::UnsafeMutablePointer::moveInitialize
                ((UnsafeMutablePointer<undefined>)((undefined *)*param_3 + lVar10 * (lVar7 - count))
                 ,count,(undefined *)*param_3);
      if (SBORROW8(lVar5,lVar11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ef5c);
        (*pcVar2)();
      }
      if (0 < lVar5 - lVar11) {
        Swift::UnsafeMutablePointer::moveInitialize
                  ((undefined *)(*param_3 + param_3[3] * lVar10),lVar5 - lVar11,
                   (undefined *)(*param_3 + lVar10 * lVar13));
      }
    }
  }
LAB_10068ee7c:
  param_3[3] = lVar13;
  lVar5 = param_3[2] - count;
  if (SBORROW8(param_3[2],count)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068ee90);
    (*pcVar2)();
  }
LAB_10068ef0c:
  param_3[2] = lVar5;
  return;
}



/* Address: 0x10068ef90 | FUN_10068ef90 */

void FUN_10068ef90(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10068ef9c | FUN_10068ef9c */

undefined1  [16] FUN_10068ef9c(void)

{
  undefined1 (*unaff_x20) [16];
  
  return *unaff_x20;
}



/* Address: 0x10068efa4 | FUN_10068efa4 */

undefined8 FUN_10068efa4(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x10);
}



/* Address: 0x10068efb0 | FUN_10068efb0 */

void FUN_10068efb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10068efc4 | FUN_10068efc4 */

void FUN_10068efc4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10068efd0 | FUN_10068efd0 */

int FUN_10068efd0(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x10068eff0 | FUN_10068eff0 */

void FUN_10068eff0(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 - 1);
    param_1[1] = 0;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x21) = uVar1;
  return;
}



/* Address: 0x10068f020 | FUN_10068f020 */

void FUN_10068f020(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10068f02c | FUN_10068f02c */

void FUN_10068f02c(undefined8 *param_1,undefined8 *param_2)

{
  UnsafeMutableBufferPointer<undefined> UVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  UVar1 = Swift::UnsafeMutableBufferPointer::init((undefined *)*param_2);
  *param_1 = UVar1.unknown;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x10068f064 | thunk_FUN_10068ef9c */

undefined1  [16] thunk_FUN_10068ef9c(void)

{
  undefined1 (*unaff_x20) [16];
  
  return *unaff_x20;
}



/* Address: 0x10068f068 | thunk_FUN_10068eff0 */

void thunk_FUN_10068eff0(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 - 1);
    param_1[1] = 0;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x21) = uVar1;
  return;
}



/* Address: 0x10068f06c | thunk_FUN_10068efd0 */

int thunk_FUN_10068efd0(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x10068f070 | thunk_FUN_10068efa4 */

undefined8 thunk_FUN_10068efa4(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x10);
}



/* Address: 0x10068f074 | thunk_FUN_10068f0b8 */

void thunk_FUN_10068f0b8(void)

{
  FUN_10068f0b8();
  return;
}



/* Address: 0x10068f078 | FUN_10068f078 */

void FUN_10068f078(void)

{
  undefined *puVar1;
  
  if (DAT_100fda5a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eacb10;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eacb10,
             PTR___type_metadata_for_Swift_UInt_100eacb00);
  DAT_100fda5a0 = puVar1;
  return;
}



/* Address: 0x10068f0b8 | FUN_10068f0b8 */

undefined1  [16] FUN_10068f0b8(undefined8 param_1)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  undefined *puVar3;
  String SVar4;
  String SVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *puStack_28;
  
  local_30 = 0x7830;
  puStack_28 = &SUB_e200000000000000;
  local_38 = param_1;
  FUN_10068f078();
  pcVar2 = (char *)0x0;
  puVar3 = PTR___type_metadata_for_Swift_UInt_100eacb00;
  SVar4 = Swift::String::_init
                    (&local_38,0x10,0,PTR___type_metadata_for_Swift_UInt_100eacb00,param_1);
  SVar5.bridgeObject = puVar3;
  SVar5.str = pcVar2;
  Swift::String::append(SVar4,SVar5);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  auVar1._8_8_ = puStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}



/* Address: 0x10068f120 | FUN_10068f120 */

undefined1  [16] FUN_10068f120(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  Optional OVar2;
  char *pcVar3;
  undefined7 extraout_var;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  undefined1 auStack_90 [8];
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  uVar11 = *(undefined8 *)(param_3 + 8);
  pcVar3 = (char *)0x0;
  local_80 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar11,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  lVar13 = *(long *)(pcVar3 + -8);
  puVar9 = auStack_90 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar10 = (long)puVar9 -
           (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0);
  lVar8 = *(long *)(param_2 + -8);
  lVar14 = lVar10 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,param_2,puVar6,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_88 = *(long *)(lVar4 + -8);
  lVar7 = *(long *)(local_88 + 0x40);
  local_70 = 0x5b;
  uStack_68 = 0xe100000000000000;
  (**(code **)(lVar8 + 0x10))(lVar14,local_80,param_2);
  Swift::Sequence::_makeIterator();
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  _swift_getAssociatedConformanceWitness
            (uVar11,param_2,lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  pcVar15 = *(code **)(lVar13 + 0x30);
  lVar8 = lVar10;
  pcVar5 = pcVar3;
  (*pcVar15)(lVar10,1);
  if ((int)lVar8 != 1) {
    pcVar12 = *(code **)(lVar13 + 0x20);
    (*pcVar12)(puVar9,lVar10,pcVar3);
    uStack_78 = 2;
    local_80 = 1;
    while( true ) {
      pcVar5 = &DAT_100fda5a8;
      FUN_1000f7830(&DAT_100fda5a8,&TargetResilientWitness_100c6de90);
      _swift_allocObject();
      *(undefined8 *)(pcVar5 + 0x18) = uStack_78;
      *(undefined8 *)(pcVar5 + 0x10) = local_80;
      *(char **)(pcVar5 + 0x38) = pcVar3;
      FUN_10000cbb0(pcVar5 + 0x20);
      (**(code **)(lVar13 + 0x10))();
      SVar17.bridgeObject = (void *)0x20;
      SVar17.str = pcVar5;
      puVar6 = (undefined *)0x0;
      Swift::_debugPrint(SVar17,(String)ZEXT816(0xe100000000000000),(undefined *)0xe000000000000000)
      ;
      _swift_release(pcVar5);
      (**(code **)(lVar13 + 8))(puVar9,pcVar3);
      Swift::IteratorProtocol::_next();
      lVar8 = lVar10;
      pcVar5 = pcVar3;
      (*pcVar15)(lVar10,1);
      if ((int)lVar8 == 1) break;
      pcVar5 = pcVar3;
      (*pcVar12)(puVar9,lVar10);
      SVar18.bridgeObject = &SUB_e200000000000000;
      SVar18.str = (char *)0x202c;
      SVar20.bridgeObject = puVar6;
      SVar20.str = pcVar5;
      Swift::String::append(SVar18,SVar20);
    }
  }
  (**(code **)(local_88 + 8))(lVar14 - (lVar7 + 0xfU & 0xfffffffffffffff0),lVar4);
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = (char *)0x5d;
  SVar19.bridgeObject = puVar6;
  SVar19.str = pcVar5;
  Swift::String::append(SVar16,SVar19);
  auVar1._8_8_ = uStack_68;
  auVar1._0_8_ = local_70;
  return auVar1;
}



/* Address: 0x10068f3e0 | FUN_10068f3e0 */

undefined1  [16]
FUN_10068f3e0(undefined8 param_1,long param_2,char *param_3,long param_4,long param_5)

{
  int iVar1;
  undefined1 *puVar2;
  Optional OVar3;
  bool bVar4;
  char *pcVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  void *pvVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  undefined1 auVar23 [16];
  String SVar24;
  String SVar25;
  String SVar26;
  undefined1 auStack_e0 [8];
  long local_d8;
  char *local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_c0 = *(long *)(param_3 + -8);
  local_78 = auStack_e0 + -(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(param_2 + -8);
  lVar15 = (long)local_78 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar5 = (char *)0xff;
  local_80 = param_3;
  _swift_getTupleTypeMetadata2();
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_98 = CONCAT71(extraout_var,OVar3.value);
  local_a0 = *(long *)(lStack_98 + -8);
  uVar12 = *(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = lVar15 - uVar12;
  lVar17 = local_a8 - uVar12;
  local_b8 = *(long *)(param_4 + -8);
  lVar13 = lVar17 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = *(undefined8 *)(param_5 + 8);
  lVar6 = 0;
  local_b0 = lVar13;
  _swift_getAssociatedTypeWitness
            (0,local_90,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_d8 = *(long *)(lVar6 + -8);
  lVar14 = *(long *)(local_d8 + 0x40);
  bVar4 = Swift::Collection::get_isEmpty();
  if (bVar4) {
    uStack_68 = 0xe300000000000000;
    local_70 = 0x5d3a5b;
  }
  else {
    local_70 = 0x5b;
    uStack_68 = 0xe100000000000000;
    (**(code **)(local_b8 + 0x10))(local_b0,param_1,param_4);
    uVar7 = local_90;
    local_b8 = lVar13 - (lVar14 + 0xfU & 0xfffffffffffffff0);
    Swift::Sequence::_makeIterator();
    puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
    local_b0 = lVar6;
    _swift_getAssociatedConformanceWitness
              (uVar7,param_4,lVar6,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    bVar4 = true;
    uStack_88 = 2;
    local_90 = 1;
    local_d0 = pcVar5;
    local_c8 = uVar7;
    while( true ) {
      lVar6 = local_a8;
      pcVar5 = local_d0;
      Swift::IteratorProtocol::_next();
      (**(code **)(local_a0 + 0x20))(lVar17,lVar6,lStack_98);
      lVar6 = lVar17;
      pcVar8 = pcVar5;
      (**(code **)(*(long *)(pcVar5 + -8) + 0x30))(lVar17,1);
      if ((int)lVar6 == 1) break;
      iVar1 = *(int *)(pcVar5 + 0x30);
      (**(code **)(lVar16 + 0x20))(lVar15,lVar17,param_2);
      lVar6 = local_c0;
      pcVar5 = local_80;
      (**(code **)(local_c0 + 0x20))(local_78,lVar17 + iVar1);
      if (!bVar4) {
        SVar21.bridgeObject = &SUB_e200000000000000;
        SVar21.str = (char *)0x202c;
        SVar25.bridgeObject = puVar11;
        SVar25.str = pcVar5;
        Swift::String::append(SVar21,SVar25);
      }
      pcVar5 = &DAT_100fda5a8;
      FUN_1000f7830(&DAT_100fda5a8,&TargetResilientWitness_100c6de90);
      pcVar8 = pcVar5;
      _swift_allocObject();
      *(undefined8 *)(pcVar8 + 0x18) = uStack_88;
      *(undefined8 *)(pcVar8 + 0x10) = local_90;
      *(long *)(pcVar8 + 0x38) = param_2;
      FUN_10000cbb0(pcVar8 + 0x20);
      (**(code **)(lVar16 + 0x10))();
      SVar18.bridgeObject = (void *)0x20;
      SVar18.str = pcVar8;
      pvVar10 = (void *)0x0;
      pcVar9 = (char *)0xe100000000000000;
      Swift::_debugPrint(SVar18,(String)ZEXT816(0xe100000000000000),(undefined *)0xe000000000000000)
      ;
      _swift_release(pcVar8);
      SVar19.bridgeObject = &SUB_e200000000000000;
      SVar19.str = (char *)0x203a;
      SVar24.bridgeObject = pvVar10;
      SVar24.str = pcVar9;
      Swift::String::append(SVar19,SVar24);
      _swift_allocObject(pcVar5,0x40,7);
      pcVar8 = local_80;
      *(undefined8 *)(pcVar5 + 0x18) = uStack_88;
      *(undefined8 *)(pcVar5 + 0x10) = local_90;
      *(char **)(pcVar5 + 0x38) = local_80;
      FUN_10000cbb0(pcVar5 + 0x20);
      puVar2 = local_78;
      (**(code **)(lVar6 + 0x10))();
      SVar20.bridgeObject = (void *)0x20;
      SVar20.str = pcVar5;
      puVar11 = (undefined *)0x0;
      Swift::_debugPrint(SVar20,(String)ZEXT816(0xe100000000000000),(undefined *)0xe000000000000000)
      ;
      _swift_release(pcVar5);
      (**(code **)(lVar6 + 8))(puVar2,pcVar8);
      (**(code **)(lVar16 + 8))(lVar15,param_2);
      bVar4 = false;
    }
    (**(code **)(local_d8 + 8))(local_b8,local_b0);
    SVar22.bridgeObject = (void *)0xe100000000000000;
    SVar22.str = (char *)0x5d;
    SVar26.bridgeObject = puVar11;
    SVar26.str = pcVar8;
    Swift::String::append(SVar22,SVar26);
  }
  auVar23._8_8_ = uStack_68;
  auVar23._0_8_ = local_70;
  return auVar23;
}



/* Address: 0x10068f7c4 | thunk_FUN_10068f0b8 */

void thunk_FUN_10068f0b8(void)

{
  FUN_10068f0b8();
  return;
}



/* Address: 0x10068f7c8 | FUN_10068f7c8 */

void FUN_10068f7c8(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  __int64 _Var3;
  __uint64 _Var4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  __int64 local_90;
  long local_68;
  
  lVar10 = *(long *)(param_3 + 8);
  uVar6 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x10);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  puVar5 = auStack_a0 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_2 + -8);
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = (long)puVar5 - uVar8;
  lVar11 = lVar9 - uVar8;
  bVar1 = Swift::BinaryInteger::get_isSigned();
  _Var3 = Swift::BinaryInteger::get_bitWidth();
  if (bVar1) {
    if (_Var3 < 0x41) {
LAB_10068f8a0:
      _Var4 = Swift::BinaryInteger::get__lowWord();
      if ((long)_Var4 < 1) goto LAB_10068fa68;
      goto LAB_10068f8c0;
    }
  }
  else if (_Var3 < 0x40) goto LAB_10068f8a0;
  local_68 = 0;
  FUN_10068fae4();
  Swift::BinaryInteger::_init
            (lVar11,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var3,param_2,lVar10);
  bVar1 = Swift::Comparable::<_infix(lVar11);
  (**(code **)(lVar7 + 8))(lVar11,param_2);
  if (!bVar1) {
LAB_10068fa68:
    _swift_getAssociatedConformanceWitness
              (uVar6,param_2,lVar2,
               PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
               ,
               PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
              );
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(puVar5,&DAT_100c6c6b8,0x100,lVar2,uVar6);
    Swift::ExpressibleByIntegerLiteral::_init();
    return;
  }
LAB_10068f8c0:
  local_90 = Swift::FixedWidthInteger::get_bitWidth();
  _swift_getAssociatedConformanceWitness
            (uVar6,param_2,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
            );
  local_98 = uVar6;
  Swift::_ExpressibleByBuiltinIntegerLiteral::init(puVar5,&DAT_100c30340,0x200,lVar2);
  Swift::ExpressibleByIntegerLiteral::_init();
  Swift::FixedWidthInteger::subtractingReportingOverflow(lVar11,lVar9,param_2,param_3);
  pcVar12 = *(code **)(lVar7 + 8);
  (*pcVar12)(lVar9,param_2);
  _Var3 = Swift::FixedWidthInteger::get_leadingZeroBitCount();
  (*pcVar12)(lVar11,param_2);
  lVar7 = local_90 - _Var3;
  if (!SBORROW8(local_90,_Var3)) {
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(puVar5,&DAT_100c30340,0x200,lVar2,local_98);
    Swift::ExpressibleByIntegerLiteral::_init();
    local_68 = lVar7;
    FUN_10068fae4();
    Swift::BinaryInteger::_<<_infix
              (param_1,lVar11,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,puVar5,param_2,
               lVar10);
    (*pcVar12)(lVar11,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10068fae4);
  (*pcVar12)();
}



/* Address: 0x10068fae4 | FUN_10068fae4 */

void FUN_10068fae4(void)

{
  undefined *puVar1;
  
  if (DAT_100fda5b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fda5b0 = puVar1;
  return;
}



/* Address: 0x10068fb24 | FUN_10068fb24 */

void FUN_10068fb24(undefined8 param_1,undefined8 param_2,long param_3)

{
  __int64 _Var1;
  undefined8 uVar2;
  __int64 local_38;
  
  _Var1 = Swift::FixedWidthInteger::get_nonzeroBitCount();
  uVar2 = *(undefined8 *)(param_3 + 8);
  local_38 = _Var1;
  FUN_10068fae4();
  Swift::BinaryInteger::_init
            (param_1,&local_38,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var1,param_2,uVar2);
  return;
}



/* Address: 0x10068fb8c | FUN_10068fb8c */

__int64 FUN_10068fb8c(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  __int64 _Var4;
  ulong uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_68;
  
  puVar1 = 
  PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898;
  lVar9 = *(long *)(param_3 + 8);
  uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x10);
  lVar2 = 0;
  local_98 = lVar9;
  local_90 = param_1;
  local_78 = param_3;
  _swift_getAssociatedTypeWitness
            (0,uVar6,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar12 = (long)&local_a0 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_88 = *(long *)(param_2 + -8);
  uVar5 = *(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = lVar12 - uVar5;
  lVar7 = lVar8 - uVar5;
  lVar11 = lVar7 - uVar5;
  local_80 = lVar11 - uVar5;
  local_a0 = uVar6;
  _swift_getAssociatedConformanceWitness
            (uVar6,param_2,lVar2,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
            );
  Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar12,&DAT_100c30340,0x200,lVar2,uVar6);
  lVar3 = lVar12;
  Swift::ExpressibleByIntegerLiteral::_init();
  local_68 = local_90;
  FUN_10068f078();
  Swift::BinaryInteger::_init
            (lVar8,&local_68,PTR___type_metadata_for_Swift_UInt_100eacb00,lVar3,param_2,lVar9);
  lVar9 = local_78;
  Swift::FixedWidthInteger::_<<_infix(lVar11,lVar7,lVar8,param_2,local_78);
  pcVar10 = *(code **)(local_88 + 8);
  (*pcVar10)(lVar8,param_2);
  (*pcVar10)(lVar7,param_2);
  Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar12,&DAT_100c30340,0x200,lVar2,uVar6);
  Swift::ExpressibleByIntegerLiteral::_init();
  lVar3 = local_80;
  Swift::FixedWidthInteger::subtractingReportingOverflow(local_80,lVar7,param_2,lVar9);
  (*pcVar10)(lVar7,param_2);
  (*pcVar10)(lVar11,param_2);
  Swift::BinaryInteger::__infix(lVar11,unaff_x20,lVar3,param_2,local_98);
  _Var4 = Swift::FixedWidthInteger::get_nonzeroBitCount();
  (*pcVar10)(lVar11,param_2);
  (*pcVar10)(lVar3,param_2);
  return _Var4;
}



/* Address: 0x10068fdec | FUN_10068fdec */

undefined1  [16] FUN_10068fdec(ulong param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar3 = param_2 & 0xffffffff;
  uVar4 = (ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8)) +
                        POPCOUNT((char)(uVar3 >> 0x10)) + POPCOUNT((char)(uVar3 >> 0x18)));
  uVar3 = 0;
  if (uVar4 <= param_1) {
    uVar3 = 0x20;
  }
  uVar2 = 0;
  if (uVar4 <= param_1) {
    uVar2 = uVar4;
  }
  uVar1 = (uint)(param_2 >> uVar3) & 0xffff;
  uVar5 = (ulong)(byte)(POPCOUNT((char)uVar1) + POPCOUNT((char)(uVar1 >> 8)));
  uVar4 = 0;
  if (uVar5 <= param_1 - uVar2) {
    uVar3 = uVar3 | 0x10;
    uVar4 = uVar5;
  }
  uVar5 = (ulong)(byte)POPCOUNT((char)(param_2 >> uVar3));
  uVar4 = (param_1 - uVar2) - uVar4;
  uVar2 = 0;
  if (uVar5 <= uVar4) {
    uVar3 = uVar3 | 8;
    uVar2 = uVar5;
  }
  uVar5 = (ulong)(byte)POPCOUNT((byte)(param_2 >> uVar3) & 0xf);
  uVar4 = uVar4 - uVar2;
  uVar2 = 0;
  if (uVar5 <= uVar4) {
    uVar3 = uVar3 | 4;
    uVar2 = uVar5;
  }
  uVar5 = (ulong)(byte)POPCOUNT((byte)(param_2 >> uVar3) & 3);
  uVar4 = uVar4 - uVar2;
  uVar2 = 0;
  if (uVar5 <= uVar4) {
    uVar3 = uVar3 + 2;
    uVar2 = uVar5;
  }
  uVar5 = param_2 >> uVar3 & 1;
  uVar4 = uVar4 - uVar2;
  if (uVar4 <= uVar5) {
    if (uVar5 <= uVar4) {
      uVar3 = uVar3 + 1;
    }
    if ((param_2 >> uVar3 & 1) != 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar3;
      return auVar6;
    }
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x10068fef4 | FUN_10068fef4 */

uint FUN_10068fef4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(byte)(POPCOUNT((char)(param_2 & 0xffff)) +
                      POPCOUNT((char)((param_2 & 0xffff) >> 8)));
  uVar2 = 0;
  if (uVar3 <= param_1) {
    uVar2 = uVar3;
  }
  uVar4 = 0;
  if (uVar3 <= param_1) {
    uVar4 = 0x10;
  }
  uVar1 = (uint)(byte)POPCOUNT((char)(param_2 >> (ulong)uVar4));
  uVar3 = 0;
  if (uVar1 <= param_1 - uVar2) {
    uVar4 = uVar4 | 8;
    uVar3 = uVar1;
  }
  uVar1 = (uint)(byte)POPCOUNT((byte)(param_2 >> (ulong)uVar4) & 0xf);
  uVar3 = (param_1 - uVar2) - uVar3;
  uVar2 = 0;
  if (uVar1 <= uVar3) {
    uVar4 = uVar4 | 4;
    uVar2 = uVar1;
  }
  uVar1 = (uint)(byte)POPCOUNT((byte)(param_2 >> (ulong)uVar4) & 3);
  uVar3 = uVar3 - uVar2;
  uVar2 = 0;
  if (uVar1 <= uVar3) {
    uVar4 = uVar4 | 2;
    uVar2 = uVar1;
  }
  uVar1 = param_2 >> (ulong)uVar4 & 1;
  uVar3 = uVar3 - uVar2;
  if (uVar3 <= uVar1) {
    if (uVar1 <= uVar3) {
      uVar4 = uVar4 + 1;
    }
    uVar2 = 0;
    if ((1 << (ulong)uVar4 & param_2) != 0) {
      uVar2 = uVar4;
    }
    return uVar2;
  }
  return 0;
}



/* Address: 0x10068ffd8 | FUN_10068ffd8 */

uint FUN_10068ffd8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_2 & 0xffff;
  uVar5 = (uint)(byte)POPCOUNT((char)param_2);
  uVar1 = param_1 & 0xffff;
  uVar3 = 0;
  if (uVar5 <= uVar1) {
    uVar3 = uVar5;
  }
  uVar6 = 0;
  if (uVar5 <= uVar1) {
    uVar6 = 8;
  }
  lVar4 = 0;
  if (uVar5 <= uVar1) {
    lVar4 = 8;
  }
  uVar5 = (uint)(byte)POPCOUNT((byte)(uVar2 >> lVar4) & 0xf);
  uVar1 = 0;
  if (uVar5 <= (param_1 - uVar3 & 0xffff)) {
    uVar6 = uVar6 | 4;
    uVar1 = uVar5;
  }
  uVar1 = (param_1 - uVar3) - uVar1;
  uVar3 = (uint)(byte)POPCOUNT((byte)(uVar2 >> (ulong)uVar6) & 3);
  uVar5 = 0;
  if (uVar3 <= (uVar1 & 0xffff)) {
    uVar6 = uVar6 | 2;
    uVar5 = uVar3;
  }
  uVar3 = uVar2 >> (ulong)uVar6 & 1;
  uVar1 = uVar1 - uVar5 & 0xffff;
  if (uVar1 <= uVar3) {
    uVar6 = uVar6 | uVar3 == uVar1;
    return -(uVar2 >> (ulong)uVar6 & 1) & uVar6;
  }
  return 0;
}



/* Address: 0x1006900a4 | FUN_1006900a4 */

undefined1  [16] FUN_1006900a4(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = 0x3f - LZCOUNT(param_1);
  }
  auVar2[8] = param_1 == 0;
  auVar2._0_8_ = lVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x1006900c0 | FUN_1006900c0 */

undefined1  [16] FUN_1006900c0(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (param_1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_1 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  auVar2._0_8_ = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x3f;
  auVar2[8] = param_1 == 0;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x1006900d8 | FUN_1006900d8 */

ulong FUN_1006900d8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (param_1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_1 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return uVar1 >> 0x20 | uVar1 << 0x20;
}



/* Address: 0x1006900e0 | FUN_1006900e0 */

long FUN_1006900e0(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 0x3ffffffffffffff) >> 0x39 == 0) {
    return param_1 * 0x40 + param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006900f4);
  (*pcVar1)();
}



/* Address: 0x1006900f4 | FUN_1006900f4 */

bool FUN_1006900f4(ulong *param_1,ulong *param_2)

{
  return *param_1 < *param_2;
}



/* Address: 0x100690108 | FUN_100690108 */

bool FUN_100690108(ulong param_1,ulong param_2)

{
  return param_1 < param_2;
}



/* Address: 0x100690114 | FUN_100690114 */

bool FUN_100690114(ulong *param_1,ulong *param_2)

{
  return *param_1 <= *param_2;
}



/* Address: 0x100690128 | FUN_100690128 */

bool FUN_100690128(ulong *param_1,ulong *param_2)

{
  return *param_2 <= *param_1;
}



/* Address: 0x10069013c | FUN_10069013c */

bool FUN_10069013c(ulong *param_1,ulong *param_2)

{
  return *param_2 < *param_1;
}



/* Address: 0x100690150 | FUN_100690150 */

ulong FUN_100690150(ulong param_1)

{
  return param_1 >> 6;
}



/* Address: 0x100690158 | FUN_100690158 */

ulong FUN_100690158(ulong param_1)

{
  return param_1 & 0x3f;
}



/* Address: 0x100690160 | FUN_100690160 */

undefined1  [16] FUN_100690160(ulong param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1 & 0x3f;
  auVar1._0_8_ = param_1 >> 6;
  return auVar1;
}



/* Address: 0x100690170 | FUN_100690170 */

undefined1  [16] FUN_100690170(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = (uint)(0x3f < param_1 && (param_1 & 0x3f) == 0);
  uVar2 = 0x40;
  if (uVar1 == 0) {
    uVar2 = param_1 & 0x3f;
  }
  auVar3._0_8_ = (param_1 >> 6) - (ulong)uVar1;
  auVar3._8_8_ = uVar2;
  return auVar3;
}



/* Address: 0x100690198 | FUN_100690198 */

long FUN_100690198(long param_1)

{
  code *pcVar1;
  
  if (param_1 != -1) {
    return param_1 + 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006901a8);
  (*pcVar1)();
}



/* Address: 0x1006901a8 | FUN_1006901a8 */

long FUN_1006901a8(long param_1)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    return param_1 + -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006901b8);
  (*pcVar1)();
}



/* Address: 0x1006901b8 | FUN_1006901b8 */

void FUN_1006901b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6df34;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6df34,&DAT_100ef53c0);
  DAT_100fda5b8 = pTVar1;
  return;
}



/* Address: 0x1006901f8 | thunk_FUN_1006901b8 */

void thunk_FUN_1006901b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6df34;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6df34,&DAT_100ef53c0);
  DAT_100fda5b8 = pTVar1;
  return;
}



/* Address: 0x1006901fc | FUN_1006901fc */

undefined1  [16] FUN_1006901fc(void)

{
  return ZEXT816(0x100ef53c0);
}



/* Address: 0x10069020c | thunk_FUN_1006901b8 */

void thunk_FUN_1006901b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6df34;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6df34,&DAT_100ef53c0);
  DAT_100fda5b8 = pTVar1;
  return;
}



/* Address: 0x100690210 | FUN_100690210 */

ulong FUN_100690210(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (param_1 < 0x40) {
    uVar1 = ~(-1L << (param_1 & 0x3f));
  }
  return uVar1;
}



/* Address: 0x100690224 | FUN_100690224 */

ulong FUN_100690224(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0xffffffffffffffff;
  if (param_2 < 0x41) {
    if (param_2 == 0x40) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = ~(-1L << (param_2 & 0x3f));
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  if (param_1 < 0x41) {
    uVar1 = 0xffffffffffffffff;
    if (param_1 < 0x40) {
      uVar1 = ~(-1L << (param_1 & 0x3f));
    }
  }
  return uVar2 ^ uVar1;
}



/* Address: 0x100690274 | FUN_100690274 */

ulong FUN_100690274(ulong param_1,ulong param_2)

{
  return param_2 ^ param_1;
}



/* Address: 0x10069027c | FUN_10069027c */

String FUN_10069027c(undefined8 param_1)

{
  String SVar1;
  undefined8 local_18;
  
  local_18 = param_1;
  FUN_10068f078();
  SVar1 = Swift::String::_init
                    (&local_18,0x10,0,PTR___type_metadata_for_Swift_UInt_100eacb00,param_1);
  return SVar1;
}



/* Address: 0x1006902b8 | FUN_1006902b8 */

String FUN_1006902b8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  String SVar1;
  undefined8 local_18;
  
  local_18 = *unaff_x20;
  FUN_10068f078();
  SVar1 = Swift::String::_init
                    (&local_18,0x10,0,PTR___type_metadata_for_Swift_UInt_100eacb00,param_1);
  return SVar1;
}



/* Address: 0x1006902f8 | FUN_1006902f8 */

undefined1  [16] FUN_1006902f8(ulong *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = (ulong)(byte)(POPCOUNT((char)param_2) + POPCOUNT((char)((ulong)param_2 >> 8)) +
                        POPCOUNT((char)((ulong)param_2 >> 0x10)) +
                        POPCOUNT((char)((ulong)param_2 >> 0x18)) +
                        POPCOUNT((char)((ulong)param_2 >> 0x20)) +
                        POPCOUNT((char)((ulong)param_2 >> 0x28)) +
                        POPCOUNT((char)((ulong)param_2 >> 0x30)) +
                       POPCOUNT((char)((ulong)param_2 >> 0x38)));
  uVar2 = *param_1;
  if (uVar3 <= uVar2) {
    *param_1 = uVar2 - uVar3;
    return ZEXT816(1) << 0x40;
  }
  *param_1 = 0;
  FUN_10068fdec();
  if (((uint)param_2 & 0xff) != 1) {
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = uVar2;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100690350);
  (*pcVar1)();
}



/* Address: 0x100690350 | FUN_100690350 */

undefined1  [16] FUN_100690350(ulong *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = (ulong)(byte)(POPCOUNT((char)param_2) + POPCOUNT((char)((ulong)param_2 >> 8)) +
                        POPCOUNT((char)((ulong)param_2 >> 0x10)) +
                        POPCOUNT((char)((ulong)param_2 >> 0x18)) +
                        POPCOUNT((char)((ulong)param_2 >> 0x20)) +
                        POPCOUNT((char)((ulong)param_2 >> 0x28)) +
                        POPCOUNT((char)((ulong)param_2 >> 0x30)) +
                       POPCOUNT((char)((ulong)param_2 >> 0x38)));
  uVar3 = *param_1;
  if (uVar4 <= uVar3) {
    *param_1 = uVar3 - uVar4;
    return ZEXT816(1) << 0x40;
  }
  *param_1 = 0;
  lVar2 = uVar4 + ~uVar3;
  FUN_10068fdec(lVar2);
  if (((uint)param_2 & 0xff) != 1) {
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006903b0);
  (*pcVar1)();
}


