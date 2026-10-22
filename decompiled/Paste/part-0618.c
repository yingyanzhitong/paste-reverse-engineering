/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10069a968 | FUN_10069a968 */

void FUN_10069a968(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e930;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x10069a994 | FUN_10069a994 */

void FUN_10069a994(void)

{
  FUN_10069a9a8();
  return;
}



/* Address: 0x10069a9a8 | FUN_10069a9a8 */

void FUN_10069a9a8(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  Optional OVar2;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char local_38;
  
  uStack_48 = *param_2;
  local_50 = *(undefined8 *)(param_3 + 0x10);
  (*param_5)(0xff);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  FUN_100617fb8(&local_40,param_6,auStack_60,OVar2.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  uVar1 = 0;
  if (local_38 != '\x01') {
    uVar1 = local_40;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x10069aa40 | FUN_10069aa40 */

void FUN_10069aa40(void)

{
  FUN_10069aa54();
  return;
}



/* Address: 0x10069aa54 | FUN_10069aa54 */

void FUN_10069aa54(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  Optional OVar3;
  String SVar4;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char local_38;
  
  uStack_48 = *param_1;
  local_50 = *(undefined8 *)(param_4 + 0x10);
  (*param_6)(0xff);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  FUN_100617fb8(&local_40,param_7,auStack_60,OVar3.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  uVar1 = 0;
  if (local_38 != '\x01') {
    uVar1 = local_40;
  }
  if ((param_3 == 5) || (param_3 == 3)) {
    *param_2 = uVar1;
  }
  else {
    if (param_3 != 0) {
      SVar4.bridgeObject = (void *)0x2;
      SVar4.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10069ab58);
      (*pcVar2)();
    }
    *param_2 = uVar1;
  }
  return;
}



/* Address: 0x10069ab58 | FUN_10069ab58 */

void FUN_10069ab58(void)

{
  FUN_10069ab6c();
  return;
}



/* Address: 0x10069ab6c | FUN_10069ab6c */

void FUN_10069ab6c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  long param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  Optional OVar4;
  String SVar5;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_48;
  
  uStack_58 = *param_2;
  local_60 = *(undefined8 *)(param_5 + 0x10);
  (*param_7)(0xff);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  FUN_100617fb8(&local_50,param_8,auStack_70,OVar4.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  uVar1 = 0;
  if (local_48 != '\x01') {
    uVar1 = local_50;
  }
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar3 = *param_3;
      *param_3 = uVar1;
    }
    else {
      if (param_4 != 2) goto LAB_10069ac5c;
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar1;
    }
  }
  else if (param_4 == 3) {
    uVar3 = *param_3;
    *param_3 = uVar1;
    LORelease();
  }
  else {
    if ((param_4 != 4) && (param_4 != 5)) {
LAB_10069ac5c:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10069aca8);
      (*pcVar2)();
    }
    LOAcquire();
    uVar3 = *param_3;
    *param_3 = uVar1;
    LORelease();
  }
  *param_1 = uVar3;
  return;
}



/* Address: 0x10069aca8 | FUN_10069aca8 */

uint FUN_10069aca8(uint param_1)

{
  FUN_10069ace4();
  return param_1 & 1;
}



/* Address: 0x10069ace4 | FUN_10069ace4 */

bool FUN_10069ace4(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,long param_5,
                  long param_6,undefined8 param_7,code *param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  Optional OVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  String SVar10;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  char local_68;
  
  uStack_78 = *param_2;
  uVar8 = *param_3;
  uVar9 = *(undefined8 *)(param_6 + 0x10);
  local_80 = uVar9;
  (*param_8)(0xff,uVar9);
  OVar6 = Swift::Optional::typeMetadataAccessor();
  puVar4 = PTR___type_metadata_for_Swift_Never_100eadc38;
  puVar3 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  FUN_100617fb8(&local_70,param_9,auStack_90,OVar6.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar1 = 0;
  if (local_68 != '\x01') {
    lVar1 = local_70;
  }
  local_80 = uVar9;
  uStack_78 = uVar8;
  FUN_100617fb8(&local_70,param_10,auStack_90,OVar6.value,puVar4,puVar3,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar2 = 0;
  if (local_68 != '\x01') {
    lVar2 = local_70;
  }
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar7 = *param_4;
      if (lVar7 == lVar1) {
        *param_4 = lVar2;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069ae60;
      lVar7 = *param_4;
      if (lVar7 == lVar1) {
        *param_4 = lVar2;
      }
    }
  }
  else if (param_5 == 3) {
    lVar7 = *param_4;
    if (lVar7 == lVar1) {
      *param_4 = lVar2;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069ae60:
      SVar10.bridgeObject = (void *)0x2;
      SVar10.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar10,(StaticString)0xd000000000000014,
                 0x8000000100dafc50,0xdafc50);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10069aeac);
      (*pcVar5)();
    }
    lVar7 = *param_4;
    if (lVar7 == lVar1) {
      *param_4 = lVar2;
    }
  }
  *param_1 = lVar7;
  return lVar7 == lVar1;
}



/* Address: 0x10069aeac | FUN_10069aeac */

uint FUN_10069aeac(uint param_1)

{
  FUN_10069aeec();
  return param_1 & 1;
}



/* Address: 0x10069aeec | FUN_10069aeec */

bool FUN_10069aeec(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,code *param_9,undefined8 param_10,
                  undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  Optional OVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  char local_68;
  
  uStack_78 = *param_2;
  uVar8 = *param_3;
  uVar9 = *(undefined8 *)(param_7 + 0x10);
  local_80 = uVar9;
  (*param_9)(0xff,uVar9);
  OVar6 = Swift::Optional::typeMetadataAccessor();
  puVar4 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
  puVar3 = PTR___type_metadata_for_Swift_Never_100eadc38;
  puVar2 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  FUN_100617fb8(&local_70,param_10,auStack_90,OVar6.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar1 = 0;
  if (local_68 != '\x01') {
    lVar1 = local_70;
  }
  local_80 = uVar9;
  uStack_78 = uVar8;
  FUN_100617fb8(&local_70,param_11,auStack_90,OVar6.value,puVar3,puVar2,puVar4);
  if (local_68 == '\x01') {
    if (param_5 < 3) {
      if (param_5 == 0) {
        if (param_6 == 0) {
          local_70 = 0;
LAB_10069b1a0:
          lVar7 = *param_4;
          if (lVar7 == lVar1) {
            *param_4 = local_70;
          }
          goto LAB_10069b174;
        }
      }
      else {
        if (param_5 != 2) goto LAB_10069b138;
        if (param_6 == 0) {
          local_70 = 0;
LAB_10069b07c:
          lVar7 = *param_4;
          if (lVar7 == lVar1) {
            *param_4 = local_70;
          }
          goto LAB_10069b174;
        }
      }
      local_70 = 0;
      if (param_6 == 2) goto LAB_10069b13c;
    }
    else {
      if (param_5 != 3) {
        local_70 = param_6;
        if (param_5 == 4) {
          if (param_6 != 0) goto LAB_10069b100;
        }
        else {
          if (param_5 != 5) goto LAB_10069b138;
          if (param_6 != 0) {
            local_70 = 0;
LAB_10069b0a0:
            if (param_6 != 2) goto LAB_10069b0a8;
          }
        }
        goto LAB_10069b15c;
      }
      if (param_6 == 0) {
        local_70 = 0;
LAB_10069b0ec:
        lVar7 = *param_4;
        if (lVar7 == lVar1) {
          *param_4 = local_70;
        }
        goto LAB_10069b174;
      }
LAB_10069b100:
      local_70 = 0;
      if (param_6 == 2) {
LAB_10069b10c:
        lVar7 = *param_4;
        if (lVar7 == lVar1) {
          *param_4 = local_70;
        }
        goto LAB_10069b174;
      }
    }
LAB_10069b130:
    if (param_6 != 5) {
LAB_10069b138:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10069b13c);
      (*pcVar5)();
    }
  }
  else if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 != 0) goto LAB_10069b138;
          goto LAB_10069b1a0;
        }
LAB_10069b13c:
        lVar7 = *param_4;
        if (lVar7 == lVar1) {
          *param_4 = local_70;
        }
        goto LAB_10069b174;
      }
    }
    else if (param_5 == 2) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 != 0) goto LAB_10069b138;
          goto LAB_10069b07c;
        }
        goto LAB_10069b13c;
      }
    }
    else {
LAB_10069b08c:
      if ((param_5 != 5) || (param_6 != 0)) {
        if (param_5 == 5) goto LAB_10069b0a0;
LAB_10069b0a8:
        if (param_5 != 5) goto LAB_10069b138;
        goto LAB_10069b130;
      }
    }
  }
  else if (param_5 == 3) {
    if (param_6 != 5) {
      if (param_6 != 2) {
        if (param_6 != 0) goto LAB_10069b138;
        goto LAB_10069b0ec;
      }
      goto LAB_10069b10c;
    }
  }
  else {
    if (param_5 != 4) goto LAB_10069b08c;
    if (param_6 != 5) {
      if (param_6 == 2) goto LAB_10069b10c;
      if (param_6 != 0) goto LAB_10069b138;
    }
  }
LAB_10069b15c:
  lVar7 = *param_4;
  if (lVar7 == lVar1) {
    *param_4 = local_70;
  }
LAB_10069b174:
  *param_1 = lVar7;
  return lVar7 == lVar1;
}



/* Address: 0x10069b1b0 | FUN_10069b1b0 */

undefined1  [16] FUN_10069b1b0(void)

{
  return ZEXT816(0x100ef5d78);
}



/* Address: 0x10069b1c0 | FUN_10069b1c0 */

undefined1  [16] FUN_10069b1c0(void)

{
  return ZEXT816(0x100ef5da0);
}



/* Address: 0x10069b1d0 | FUN_10069b1d0 */

void FUN_10069b1d0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069b1dc | FUN_10069b1dc */

void FUN_10069b1dc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069b1e8 | FUN_10069b1e8 */

void FUN_10069b1e8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069b1f4 | FUN_10069b1f4 */

undefined1  [16] FUN_10069b1f4(void)

{
  return ZEXT816(0x100ef5dc8);
}



/* Address: 0x10069b204 | FUN_10069b204 */

undefined1  [16] FUN_10069b204(void)

{
  return ZEXT816(0x100ef5df0);
}



/* Address: 0x10069b214 | FUN_10069b214 */

void FUN_10069b214(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069b220 | FUN_10069b220 */

void FUN_10069b220(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069b22c | FUN_10069b22c */

void FUN_10069b22c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069b238 | thunk_FUN_10069a28c */

void thunk_FUN_10069a28c(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  String SVar3;
  
  if (param_3 == 5) {
    lVar2 = *param_2;
  }
  else if (param_3 == 2) {
    lVar2 = *param_2;
  }
  else {
    if (param_3 != 0) {
      SVar3.bridgeObject = (void *)0x2;
      SVar3.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a31c);
      (*pcVar1)();
    }
    lVar2 = *param_2;
  }
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a2c4);
  (*pcVar1)();
}



/* Address: 0x10069b23c | thunk_FUN_10069a3d0 */

bool thunk_FUN_10069a3d0(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  String SVar5;
  
  lVar3 = *param_2;
  lVar4 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069a44c;
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
    }
  }
  else if (param_5 == 3) {
    lVar2 = *param_4;
    if (lVar2 == lVar3) {
      *param_4 = lVar4;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069a44c:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a4a4);
      (*pcVar1)();
    }
    lVar2 = *param_4;
    if (lVar2 == lVar3) {
      *param_4 = lVar4;
    }
  }
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a44c);
    (*pcVar1)();
  }
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x10069b240 | FUN_10069b240 */

void FUN_10069b240(void)

{
  FUN_100003284();
  return;
}



/* Address: 0x10069b254 | thunk_FUN_10069a31c */

void thunk_FUN_10069a31c(long *param_1,long *param_2,long *param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  String SVar4;
  
  lVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      lVar2 = *param_3;
      *param_3 = lVar3;
    }
    else {
      if (param_4 != 2) goto LAB_10069a378;
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar3;
    }
  }
  else if (param_4 == 3) {
    lVar2 = *param_3;
    *param_3 = lVar3;
    LORelease();
  }
  else {
    if ((param_4 != 4) && (param_4 != 5)) {
LAB_10069a378:
      SVar4.bridgeObject = (void *)0x2;
      SVar4.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a3d0);
      (*pcVar1)();
    }
    LOAcquire();
    lVar2 = *param_3;
    *param_3 = lVar3;
    LORelease();
  }
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a378);
  (*pcVar1)();
}



/* Address: 0x10069b258 | thunk_FUN_10069a268 */

void thunk_FUN_10069a268(long *param_1)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (*unaff_x20 != 0) {
    *param_1 = *unaff_x20;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a27c);
  (*pcVar1)();
}



/* Address: 0x10069b25c | thunk_FUN_10069a4a4 */

bool thunk_FUN_10069a4a4(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,
                        long param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_2;
  lVar4 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 == 0) {
            lVar2 = *param_4;
            if (lVar2 == lVar3) {
              *param_4 = lVar4;
            }
            goto LAB_10069a570;
          }
          goto LAB_10069a58c;
        }
LAB_10069a568:
        lVar2 = *param_4;
        if (lVar2 == lVar3) {
          *param_4 = lVar4;
        }
        goto LAB_10069a570;
      }
    }
    else {
      if (param_5 != 2) {
LAB_10069a58c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a590);
        (*pcVar1)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_10069a58c;
        goto LAB_10069a568;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_10069a58c;
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_10069a570;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_10069a58c;
  lVar2 = *param_4;
  if (lVar2 == lVar3) {
    *param_4 = lVar4;
  }
LAB_10069a570:
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a58c);
    (*pcVar1)();
  }
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x10069b260 | thunk_FUN_10069a594 */

bool thunk_FUN_10069a594(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,
                        long param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_2;
  lVar3 = *param_3;
  if (lVar3 == 0) {
    if (param_5 < 3) {
      if (param_5 == 0) {
        if (param_6 == 0) {
LAB_10069a6b0:
          lVar4 = *param_4;
          if (lVar4 == lVar2) {
            *param_4 = lVar3;
          }
          goto LAB_10069a6b8;
        }
      }
      else {
        if (param_5 != 2) goto LAB_10069a6cc;
        if (param_6 == 0) goto LAB_10069a698;
      }
      if (param_6 == 2) goto LAB_10069a698;
    }
    else {
      if (param_5 == 3) {
        if (param_6 == 0) goto LAB_10069a6a4;
      }
      else {
        if ((param_5 != 4) && (param_5 != 5)) goto LAB_10069a6cc;
        if (param_6 == 0) goto LAB_10069a68c;
      }
      if (param_6 == 2) goto LAB_10069a68c;
    }
    if (param_6 != 5) {
LAB_10069a6cc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a6d0);
      (*pcVar1)();
    }
  }
  else if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 != 0) goto LAB_10069a6cc;
          goto LAB_10069a6b0;
        }
LAB_10069a698:
        lVar4 = *param_4;
        if (lVar4 == lVar2) {
          *param_4 = lVar3;
        }
        goto LAB_10069a6b8;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069a6cc;
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_10069a6cc;
        goto LAB_10069a698;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_10069a6cc;
LAB_10069a6a4:
      lVar4 = *param_4;
      if (lVar4 == lVar2) {
        *param_4 = lVar3;
      }
      goto LAB_10069a6b8;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_10069a6cc;
LAB_10069a68c:
  lVar4 = *param_4;
  if (lVar4 == lVar2) {
    *param_4 = lVar3;
  }
LAB_10069a6b8:
  *param_1 = lVar4;
  return lVar4 == lVar2;
}



/* Address: 0x10069b264 | FUN_10069b264 */

undefined1  [16] FUN_10069b264(void)

{
  return ZEXT816(0x100ef5e38);
}



/* Address: 0x10069b274 | FUN_10069b274 */

undefined1  [16] FUN_10069b274(void)

{
  return ZEXT816(0x100ef5e60);
}



/* Address: 0x10069b284 | FUN_10069b284 */

undefined1  [16] FUN_10069b284(void)

{
  return ZEXT816(0x100ef5e88);
}



/* Address: 0x10069b294 | FUN_10069b294 */

undefined1  [16] FUN_10069b294(void)

{
  return ZEXT816(0x100ef5eb0);
}



/* Address: 0x10069b2a4 | FUN_10069b2a4 */

undefined1  [16] FUN_10069b2a4(void)

{
  return ZEXT816(0x100ef5ed8);
}



/* Address: 0x10069b2b4 | FUN_10069b2b4 */

void FUN_10069b2b4(undefined8 param_1,long param_2,long param_3)

{
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(param_3 + -8),*(undefined8 *)(param_2 + 0x10),param_1,0x100cbabac,
             &TargetProtocolRequirement_100cbabbc);
  return;
}



/* Address: 0x10069b2d4 | FUN_10069b2d4 */

void FUN_10069b2d4(undefined8 param_1,short param_2)

{
  code *pcVar1;
  
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069b2e4);
  (*pcVar1)();
}



/* Address: 0x10069b2e4 | thunk_FUN_10069b5e8 */

void thunk_FUN_10069b5e8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if (*param_1 == 0) {
    DataMemoryBarrier(2,1);
    FUN_10069b55c(0,param_1[1]);
    return;
  }
  while( true ) {
    uVar5 = uVar4 & 0xffffffffffff0000 | (ulong)((int)uVar4 + 1) & 0xffff;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if ((uVar1 == uVar4) && (uVar2 == uVar3)) {
      *param_1 = uVar5;
      param_1[1] = uVar3;
    }
    if (uVar1 == uVar3 && uVar2 == uVar4) break;
    uVar3 = uVar1;
    uVar4 = uVar2;
    if (uVar1 == 0) {
      FUN_10069b55c(0,uVar2);
      return;
    }
  }
  FUN_10069b55c(uVar3,uVar5);
  return;
}



/* Address: 0x10069b2e8 | thunk_FUN_10069b87c */

ulong thunk_FUN_10069b87c(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar11 = *param_2;
  uVar6 = param_2[1];
  _swift_unknownObjectRetain();
  if (uVar11 == 0) {
    DataMemoryBarrier(2,1);
    uStack_70 = uVar11;
    uStack_68 = uVar6;
  }
  else {
    do {
      uStack_68 = uVar6 & 0xffffffffffff0000 | (ulong)((int)uVar6 + 1) & 0xffff;
      uVar1 = *param_2;
      uVar14 = param_2[1];
      if ((uVar1 == uVar6) && (uVar14 == uVar11)) {
        *param_2 = uStack_68;
        param_2[1] = uVar11;
      }
      uStack_70 = uVar11;
    } while ((uVar1 != uVar11 || uVar14 != uVar6) &&
            (uVar11 = uVar1, uStack_70 = uVar1, uStack_68 = uVar14, uVar6 = uVar14, uVar1 != 0));
  }
  puVar5 = &uStack_70;
  uVar6 = param_1;
  FUN_10069b648(puVar5,param_1,param_2);
  uVar11 = uVar6;
  if (((ulong)puVar5 & 1) == 0) {
    do {
      uVar14 = uStack_68;
      uVar11 = uStack_70;
      uVar1 = (uStack_68 & 0xffffffffffff0000) + 0x10000;
      if (uStack_70 == 0) {
        uVar15 = *param_2;
        uVar13 = param_2[1];
        if ((uVar15 == uStack_68) && (uVar13 == 0)) {
          *param_2 = uVar1;
          param_2[1] = param_1;
        }
        if (uVar15 == 0 && uVar13 == uStack_68) goto LAB_10069bb2c;
        if (uVar15 == 0) {
LAB_10069bab0:
          DataMemoryBarrier(2,1);
          uVar14 = uVar13;
          uVar15 = 0;
        }
        else {
          do {
            uVar14 = uVar13 & 0xffffffffffff0000 | (ulong)((int)uVar13 + 1) & 0xffff;
            uVar11 = *param_2;
            uVar1 = param_2[1];
            if ((uVar11 == uVar13) && (uVar1 == uVar15)) {
              *param_2 = uVar14;
              param_2[1] = uVar15;
            }
          } while ((uVar11 != uVar15 || uVar1 != uVar13) &&
                  (uVar14 = uVar1, uVar13 = uVar1, uVar15 = uVar11, uVar11 != 0));
        }
      }
      else {
        uVar10 = (uStack_68 & 0xffff) + 0x14;
        _swift_retain_n(uStack_70,uVar10);
        uVar15 = *param_2;
        uVar7 = param_2[1];
        if ((uVar15 == uVar14) && (uVar7 == uVar11)) {
          *param_2 = uVar1;
          param_2[1] = param_1;
        }
        uVar12 = uVar14;
        if (uVar7 == uVar14 && uVar15 == uVar11) {
LAB_10069badc:
          lVar8 = uVar10 - (uVar7 & 0xffff);
          if (lVar8 < -1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10069bb3c);
            (*pcVar3)();
          }
          _swift_release_n(uVar11,(int)lVar8 + 1);
          goto LAB_10069bafc;
        }
        while (uVar13 = uVar7, iVar9 = (int)uVar10, (uVar13 ^ uVar12) < 0x10000) {
          if (uVar10 < (uVar13 & 0xffff)) {
            uVar10 = (uVar13 & 0xffff) + 0x14;
            _swift_retain_n(uVar11,(int)uVar10 - iVar9,uVar11,uVar14);
          }
          uVar2 = *param_2;
          uVar7 = param_2[1];
          if ((uVar2 == uVar13) && (uVar7 == uVar15)) {
            *param_2 = uVar1;
            param_2[1] = param_1;
          }
          bVar4 = uVar2 == uVar15;
          uVar12 = uVar13;
          uVar15 = uVar2;
          if (uVar7 == uVar13 && bVar4) goto LAB_10069badc;
        }
        _swift_release_n(uVar11,iVar9 + 1,uVar11,uVar14);
        if (uVar15 == 0) goto LAB_10069bab0;
        do {
          uVar14 = uVar13 & 0xffffffffffff0000 | (ulong)((int)uVar13 + 1) & 0xffff;
          uVar11 = *param_2;
          uVar1 = param_2[1];
          if ((uVar11 == uVar13) && (uVar1 == uVar15)) {
            *param_2 = uVar14;
            param_2[1] = uVar15;
          }
        } while ((uVar11 != uVar15 || uVar1 != uVar13) &&
                (uVar13 = uVar1, uVar14 = uVar1, uVar15 = uVar11, uVar11 != 0));
      }
      _swift_unknownObjectRelease(uVar6);
      uVar6 = 0;
      uStack_70 = uVar15;
      uStack_68 = uVar14;
    } while( true );
  }
LAB_10069bb00:
  _swift_unknownObjectRelease(param_1);
  return uVar11;
LAB_10069bb2c:
  uVar11 = 0;
LAB_10069bafc:
  _swift_unknownObjectRelease(uVar6);
  goto LAB_10069bb00;
}



/* Address: 0x10069b2ec | thunk_FUN_10069bb3c */

void thunk_FUN_10069bb3c(void)

{
  FUN_10069bb3c();
  return;
}



/* Address: 0x10069b2f0 | FUN_10069b2f0 */

void FUN_10069b2f0(long param_1,short param_2)

{
  code *pcVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069b304);
    (*pcVar1)();
  }
  if (param_1 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069b308);
  (*pcVar1)();
}



/* Address: 0x10069b308 | FUN_10069b308 */

void FUN_10069b308(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10063ee28();
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}



/* Address: 0x10069b330 | FUN_10069b330 */

void FUN_10069b330(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_10069b2f0(uVar1,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10069b358 | FUN_10069b358 */

void FUN_10069b358(long *param_1,long param_2)

{
  code *pcVar1;
  
  FUN_10069b5e8();
  if (param_2 != 0) {
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069b384);
  (*pcVar1)();
}



/* Address: 0x10069b384 | FUN_10069b384 */

void FUN_10069b384(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  _swift_unknownObjectRetain(uVar2);
  FUN_10069b87c();
  _swift_unknownObjectRelease(uVar2);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10069b3c4 | FUN_10069b3c4 */

void FUN_10069b3c4(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  lVar2 = lVar3;
  _swift_unknownObjectRetain();
  FUN_10069b87c();
  if (lVar2 != 0) {
    _swift_unknownObjectRelease(lVar3);
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069b418);
  (*pcVar1)();
}



/* Address: 0x10069b418 | FUN_10069b418 */

uint FUN_10069b418(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  lVar3 = *param_3;
  _swift_unknownObjectRetain(lVar3);
  lVar2 = lVar3;
  FUN_10069bb3c(uVar4,lVar3,param_4);
  if (lVar2 != 0) {
    _swift_unknownObjectRelease(lVar3);
    *param_1 = lVar2;
    return (uint)uVar4 & 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069b480);
  (*pcVar1)();
}



/* Address: 0x10069b480 | thunk_FUN_10069b418 */

uint thunk_FUN_10069b418(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  lVar3 = *param_3;
  _swift_unknownObjectRetain(lVar3);
  lVar2 = lVar3;
  FUN_10069bb3c(uVar4,lVar3,param_4);
  if (lVar2 != 0) {
    _swift_unknownObjectRelease(lVar3);
    *param_1 = lVar2;
    return (uint)uVar4 & 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069b480);
  (*pcVar1)();
}



/* Address: 0x10069b484 | FUN_10069b484 */

void FUN_10069b484(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_10069b2d4(uVar1,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10069b4ac | FUN_10069b4ac */

void FUN_10069b4ac(undefined8 *param_1,undefined8 param_2)

{
  FUN_10069b5e8();
  *param_1 = param_2;
  return;
}



/* Address: 0x10069b4d0 | FUN_10069b4d0 */

void FUN_10069b4d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10069b87c();
  *param_1 = uVar1;
  return;
}



/* Address: 0x10069b4f8 | FUN_10069b4f8 */

uint FUN_10069b4f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = *param_3;
  _swift_unknownObjectRetain(uVar3);
  uVar1 = uVar3;
  FUN_10069bb3c(uVar2,uVar3,param_4);
  _swift_unknownObjectRelease(uVar3);
  *param_1 = uVar1;
  return (uint)uVar2 & 1;
}



/* Address: 0x10069b558 | thunk_FUN_10069b4f8 */

uint thunk_FUN_10069b4f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                        undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = *param_3;
  _swift_unknownObjectRetain(uVar3);
  uVar1 = uVar3;
  FUN_10069bb3c(uVar2,uVar3,param_4);
  _swift_unknownObjectRelease(uVar3);
  *param_1 = uVar1;
  return (uint)uVar2 & 1;
}



/* Address: 0x10069b55c | FUN_10069b55c */

ulong FUN_10069b55c(ulong param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    _swift_unknownObjectRetain(param_1);
    uVar3 = param_2;
    do {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      if ((uVar1 == uVar3) && (uVar2 == param_1)) {
        *param_3 = uVar3 & 0xffffffffffff0000 | (ulong)((int)uVar3 - 1) & 0xffff;
        param_3[1] = param_1;
      }
      if (uVar1 == param_1 && uVar2 == uVar3) {
        return param_1;
      }
    } while ((param_1 == uVar1) && (uVar3 = uVar2, (param_2 ^ uVar2) < 0x10000));
    _swift_unknownObjectRelease(param_1);
  }
  return param_1;
}



/* Address: 0x10069b5e8 | FUN_10069b5e8 */

void FUN_10069b5e8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if (*param_1 == 0) {
    DataMemoryBarrier(2,1);
    FUN_10069b55c(0,param_1[1]);
    return;
  }
  while( true ) {
    uVar5 = uVar4 & 0xffffffffffff0000 | (ulong)((int)uVar4 + 1) & 0xffff;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if ((uVar1 == uVar4) && (uVar2 == uVar3)) {
      *param_1 = uVar5;
      param_1[1] = uVar3;
    }
    if (uVar1 == uVar3 && uVar2 == uVar4) break;
    uVar3 = uVar1;
    uVar4 = uVar2;
    if (uVar1 == 0) {
      FUN_10069b55c(0,uVar2);
      return;
    }
  }
  FUN_10069b55c(uVar3,uVar5);
  return;
}



/* Address: 0x10069b648 | FUN_10069b648 */

undefined1  [16] FUN_10069b648(ulong *param_1,ulong param_2,ulong *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  uVar10 = *param_1;
  uVar6 = param_1[1];
  uVar5 = (uVar6 & 0xffffffffffff0000) + 0x10000;
  if (uVar10 == 0) {
    uVar7 = *param_3;
    uVar10 = param_3[1];
    if ((uVar7 == uVar6) && (uVar10 == 0)) {
      *param_3 = uVar5;
      param_3[1] = param_2;
    }
    if (uVar7 == 0 && uVar10 == uVar6) {
      uVar10 = 0;
      uVar3 = 1;
    }
    else {
      if (uVar7 == 0) {
        DataMemoryBarrier(2,1);
        uVar5 = uVar10;
        uVar7 = 0;
      }
      else {
        do {
          uVar5 = uVar10 & 0xffffffffffff0000 | (ulong)((int)uVar10 + 1) & 0xffff;
          uVar6 = *param_3;
          uVar11 = param_3[1];
          if ((uVar6 == uVar10) && (uVar11 == uVar7)) {
            *param_3 = uVar5;
            param_3[1] = uVar7;
          }
        } while ((uVar6 != uVar7 || uVar11 != uVar10) &&
                (uVar5 = uVar11, uVar10 = uVar11, uVar7 = uVar6, uVar6 != 0));
      }
      uVar3 = 0;
      uVar10 = 0;
      *param_1 = uVar7;
      param_1[1] = uVar5;
    }
  }
  else {
    uVar7 = (uVar6 & 0xffff) + 0x14;
    _swift_retain_n(uVar10,uVar7);
    uVar11 = *param_3;
    uVar4 = param_3[1];
    if ((uVar11 == uVar6) && (uVar4 == uVar10)) {
      *param_3 = uVar5;
      param_3[1] = param_2;
    }
    if (uVar4 != uVar6 || uVar11 != uVar10) {
      do {
        uVar12 = uVar4;
        iVar9 = (int)uVar7;
        if (0xffff < (uVar12 ^ uVar6)) {
          _swift_release_n(uVar10,iVar9 + 1);
          if (uVar11 == 0) {
            DataMemoryBarrier(2,1);
            uVar6 = uVar12;
          }
          else {
            do {
              uVar6 = uVar12 & 0xffffffffffff0000 | (ulong)((int)uVar12 + 1) & 0xffff;
              uVar5 = *param_3;
              uVar10 = param_3[1];
              if ((uVar5 == uVar12) && (uVar10 == uVar11)) {
                *param_3 = uVar6;
                param_3[1] = uVar11;
              }
            } while ((uVar5 != uVar11 || uVar10 != uVar12) &&
                    (uVar11 = uVar5, uVar6 = uVar10, uVar12 = uVar10, uVar5 != 0));
          }
          uVar3 = 0;
          uVar10 = 0;
          *param_1 = uVar11;
          param_1[1] = uVar6;
          goto LAB_10069b854;
        }
        if (uVar7 < (uVar12 & 0xffff)) {
          uVar7 = (uVar12 & 0xffff) + 0x14;
          _swift_retain_n(uVar10,(int)uVar7 - iVar9);
        }
        *param_1 = uVar11;
        param_1[1] = uVar12;
        uVar6 = *param_3;
        uVar4 = param_3[1];
        if ((uVar6 == uVar12) && (uVar4 == uVar11)) {
          *param_3 = uVar5;
          param_3[1] = param_2;
        }
        bVar2 = uVar6 != uVar11;
        uVar11 = uVar6;
        uVar6 = uVar12;
      } while (uVar4 != uVar12 || bVar2);
    }
    lVar8 = uVar7 - (uVar4 & 0xffff);
    if (lVar8 < -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069b87c);
      (*pcVar1)();
    }
    _swift_release_n(uVar10,(int)lVar8 + 1);
    uVar3 = 1;
  }
LAB_10069b854:
  auVar13._8_8_ = uVar10;
  auVar13._0_8_ = uVar3;
  return auVar13;
}



/* Address: 0x10069b87c | FUN_10069b87c */

ulong FUN_10069b87c(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_70;
  ulong uStack_68;
  
  uVar11 = *param_2;
  uVar6 = param_2[1];
  _swift_unknownObjectRetain();
  if (uVar11 == 0) {
    DataMemoryBarrier(2,1);
    local_70 = uVar11;
    uStack_68 = uVar6;
  }
  else {
    do {
      uStack_68 = uVar6 & 0xffffffffffff0000 | (ulong)((int)uVar6 + 1) & 0xffff;
      uVar1 = *param_2;
      uVar14 = param_2[1];
      if ((uVar1 == uVar6) && (uVar14 == uVar11)) {
        *param_2 = uStack_68;
        param_2[1] = uVar11;
      }
      local_70 = uVar11;
    } while ((uVar1 != uVar11 || uVar14 != uVar6) &&
            (uVar11 = uVar1, local_70 = uVar1, uStack_68 = uVar14, uVar6 = uVar14, uVar1 != 0));
  }
  puVar5 = &local_70;
  uVar6 = param_1;
  FUN_10069b648(puVar5,param_1,param_2);
  uVar11 = uVar6;
  if (((ulong)puVar5 & 1) == 0) {
    do {
      uVar14 = uStack_68;
      uVar11 = local_70;
      uVar1 = (uStack_68 & 0xffffffffffff0000) + 0x10000;
      if (local_70 == 0) {
        uVar15 = *param_2;
        uVar13 = param_2[1];
        if ((uVar15 == uStack_68) && (uVar13 == 0)) {
          *param_2 = uVar1;
          param_2[1] = param_1;
        }
        if (uVar15 == 0 && uVar13 == uStack_68) goto LAB_10069bb2c;
        if (uVar15 == 0) {
LAB_10069bab0:
          DataMemoryBarrier(2,1);
          uVar14 = uVar13;
          uVar15 = 0;
        }
        else {
          do {
            uVar14 = uVar13 & 0xffffffffffff0000 | (ulong)((int)uVar13 + 1) & 0xffff;
            uVar11 = *param_2;
            uVar1 = param_2[1];
            if ((uVar11 == uVar13) && (uVar1 == uVar15)) {
              *param_2 = uVar14;
              param_2[1] = uVar15;
            }
          } while ((uVar11 != uVar15 || uVar1 != uVar13) &&
                  (uVar14 = uVar1, uVar13 = uVar1, uVar15 = uVar11, uVar11 != 0));
        }
      }
      else {
        uVar10 = (uStack_68 & 0xffff) + 0x14;
        _swift_retain_n(local_70,uVar10);
        uVar15 = *param_2;
        uVar7 = param_2[1];
        if ((uVar15 == uVar14) && (uVar7 == uVar11)) {
          *param_2 = uVar1;
          param_2[1] = param_1;
        }
        uVar12 = uVar14;
        if (uVar7 == uVar14 && uVar15 == uVar11) {
LAB_10069badc:
          lVar8 = uVar10 - (uVar7 & 0xffff);
          if (lVar8 < -1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10069bb3c);
            (*pcVar3)();
          }
          _swift_release_n(uVar11,(int)lVar8 + 1);
          goto LAB_10069bafc;
        }
        while (uVar13 = uVar7, iVar9 = (int)uVar10, (uVar13 ^ uVar12) < 0x10000) {
          if (uVar10 < (uVar13 & 0xffff)) {
            uVar10 = (uVar13 & 0xffff) + 0x14;
            _swift_retain_n(uVar11,(int)uVar10 - iVar9,uVar11,uVar14);
          }
          uVar2 = *param_2;
          uVar7 = param_2[1];
          if ((uVar2 == uVar13) && (uVar7 == uVar15)) {
            *param_2 = uVar1;
            param_2[1] = param_1;
          }
          bVar4 = uVar2 == uVar15;
          uVar12 = uVar13;
          uVar15 = uVar2;
          if (uVar7 == uVar13 && bVar4) goto LAB_10069badc;
        }
        _swift_release_n(uVar11,iVar9 + 1,uVar11,uVar14);
        if (uVar15 == 0) goto LAB_10069bab0;
        do {
          uVar14 = uVar13 & 0xffffffffffff0000 | (ulong)((int)uVar13 + 1) & 0xffff;
          uVar11 = *param_2;
          uVar1 = param_2[1];
          if ((uVar11 == uVar13) && (uVar1 == uVar15)) {
            *param_2 = uVar14;
            param_2[1] = uVar15;
          }
        } while ((uVar11 != uVar15 || uVar1 != uVar13) &&
                (uVar13 = uVar1, uVar14 = uVar1, uVar15 = uVar11, uVar11 != 0));
      }
      _swift_unknownObjectRelease(uVar6);
      uVar6 = 0;
      local_70 = uVar15;
      uStack_68 = uVar14;
    } while( true );
  }
LAB_10069bb00:
  _swift_unknownObjectRelease(param_1);
  return uVar11;
LAB_10069bb2c:
  uVar11 = 0;
LAB_10069bafc:
  _swift_unknownObjectRelease(uVar6);
  goto LAB_10069bb00;
}



/* Address: 0x10069bb3c | FUN_10069bb3c */

undefined1  [16] FUN_10069bb3c(ulong param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  uVar5 = *param_3;
  uVar11 = param_3[1];
  _swift_unknownObjectRetain(param_2);
  if (uVar5 == 0) {
    DataMemoryBarrier(2,1);
    uVar6 = uVar11;
  }
  else {
    do {
      uVar6 = uVar11 & 0xffffffffffff0000 | (ulong)((int)uVar11 + 1) & 0xffff;
      uVar1 = *param_3;
      uVar8 = param_3[1];
      if ((uVar1 == uVar11) && (uVar8 == uVar5)) {
        *param_3 = uVar6;
        param_3[1] = uVar5;
      }
    } while ((uVar1 != uVar5 || uVar8 != uVar11) &&
            (uVar6 = uVar8, uVar11 = uVar8, uVar5 = uVar1, uVar1 != 0));
  }
  do {
    while (uVar5 != 0) {
      if (uVar5 != param_1) goto LAB_10069bdbc;
      uVar1 = (uVar6 & 0xffffffffffff0000) + 0x10000;
      uVar11 = (uVar6 & 0xffff) + 0x14;
      _swift_retain_n(param_1,uVar11);
      uVar5 = *param_3;
      uVar8 = param_3[1];
      if ((uVar5 == uVar6) && (uVar8 == param_1)) {
        *param_3 = uVar1;
        param_3[1] = param_2;
      }
      uVar13 = uVar6;
      if (uVar8 == uVar6 && uVar5 == param_1) {
LAB_10069bd6c:
        lVar9 = uVar11 - (uVar8 & 0xffff);
        if (lVar9 < -1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10069bdf0);
          (*pcVar3)();
        }
        _swift_release_n(param_1,(int)lVar9 + 1);
        goto LAB_10069bd88;
      }
      while (uVar7 = uVar8, iVar10 = (int)uVar11, (uVar7 ^ uVar13) < 0x10000) {
        if (uVar11 < (uVar7 & 0xffff)) {
          uVar11 = (uVar7 & 0xffff) + 0x14;
          _swift_retain_n(param_1,(int)uVar11 - iVar10,param_1,uVar6);
        }
        uVar2 = *param_3;
        uVar8 = param_3[1];
        if ((uVar2 == uVar7) && (uVar8 == uVar5)) {
          *param_3 = uVar1;
          param_3[1] = param_2;
        }
        bVar4 = uVar2 == uVar5;
        uVar13 = uVar7;
        uVar5 = uVar2;
        if (uVar8 == uVar7 && bVar4) goto LAB_10069bd6c;
      }
      _swift_release_n(param_1,iVar10 + 1);
      if (uVar5 == 0) goto LAB_10069bd58;
      do {
        uVar6 = uVar7 & 0xffffffffffff0000 | (ulong)((int)uVar7 + 1) & 0xffff;
        uVar11 = *param_3;
        uVar1 = param_3[1];
        if ((uVar11 == uVar7) && (uVar1 == uVar5)) {
          *param_3 = uVar6;
          param_3[1] = uVar5;
        }
      } while ((uVar11 != uVar5 || uVar1 != uVar7) &&
              (uVar6 = uVar1, uVar7 = uVar1, uVar5 = uVar11, uVar11 != 0));
    }
    if (param_1 != 0) {
LAB_10069bdbc:
      if (param_2 != 0) {
        _swift_unknownObjectRelease(param_2);
      }
      FUN_10069b55c(uVar5,uVar6,param_3);
      uVar12 = 0;
      goto LAB_10069bd8c;
    }
    uVar5 = *param_3;
    uVar7 = param_3[1];
    if ((uVar5 == uVar6) && (uVar7 == 0)) {
      *param_3 = (uVar6 & 0xffffffffffff0000) + 0x10000;
      param_3[1] = param_2;
    }
    if (uVar5 == 0 && uVar7 == uVar6) {
      param_1 = 0;
LAB_10069bd88:
      uVar12 = 1;
      uVar5 = param_1;
LAB_10069bd8c:
      _swift_unknownObjectRelease(param_2);
      auVar14._8_8_ = uVar5;
      auVar14._0_8_ = uVar12;
      return auVar14;
    }
    if (uVar5 == 0) {
LAB_10069bd58:
      DataMemoryBarrier(2,1);
      uVar6 = uVar7;
      uVar5 = 0;
    }
    else {
      do {
        uVar6 = uVar7 & 0xffffffffffff0000 | (ulong)((int)uVar7 + 1) & 0xffff;
        uVar11 = *param_3;
        uVar1 = param_3[1];
        if ((uVar11 == uVar7) && (uVar1 == uVar5)) {
          *param_3 = uVar6;
          param_3[1] = uVar5;
        }
      } while ((uVar11 != uVar5 || uVar1 != uVar7) &&
              (uVar7 = uVar1, uVar6 = uVar1, uVar5 = uVar11, uVar11 != 0));
    }
  } while( true );
}



/* Address: 0x10069bdf0 | FUN_10069bdf0 */

undefined1  [16] FUN_10069bdf0(void)

{
  return ZEXT816(0x100ef5f28);
}



/* Address: 0x10069be00 | FUN_10069be00 */

void FUN_10069be00(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069be0c | FUN_10069be0c */

void FUN_10069be0c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069be18 | thunk_FUN_1005c4174 */

void thunk_FUN_1005c4174(void)

{
  FUN_1005c4174();
  return;
}



/* Address: 0x10069be1c | thunk_FUN_10069b418 */

void thunk_FUN_10069b418(void)

{
  thunk_FUN_10069b418();
  return;
}



/* Address: 0x10069be20 | thunk_FUN_10069b4f8 */

void thunk_FUN_10069b4f8(void)

{
  thunk_FUN_10069b4f8();
  return;
}



/* Address: 0x10069be24 | FUN_10069be24 */

ulong FUN_10069be24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,long param_6)

{
  int iVar1;
  bool bVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar6;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  byte *pbVar16;
  code *pcVar17;
  long lVar18;
  String SVar19;
  undefined8 uStack_160;
  undefined4 auStack_158 [2];
  byte abStack_150 [8];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  byte *local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  ulong local_110;
  long local_108;
  long local_100;
  byte *local_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  long lVar5;
  
  local_138 = *(undefined8 *)(param_6 + 0x18);
  uStack_e8 = *(undefined8 *)(param_6 + 0x18);
  lVar18 = *(long *)(param_6 + 0x10);
  lVar4 = 0xff;
  local_148 = param_2;
  local_128 = param_6;
  local_118 = param_4;
  local_f0 = lVar18;
  local_e0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,local_138,lVar18,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,OVar3.value);
  local_120 = *(long *)(lVar5 + -8);
  uVar8 = *(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0;
  pbVar11 = abStack_150 + -uVar8;
  lVar9 = (long)pbVar11 - uVar8;
  lVar6 = 0;
  local_c0 = lVar9;
  _swift_getTupleTypeMetadata2
            (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar5,"exchanged original ",0);
  local_108 = *(long *)(lVar6 + -8);
  uVar8 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  pbVar16 = (byte *)(lVar9 - uVar8);
  pbVar10 = pbVar16 + -uVar8;
  local_130 = pbVar10;
  local_100 = lVar6;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_b0 = CONCAT71(extraout_var_00,OVar3.value);
  local_b8 = *(long *)(local_b0 + -8);
  uVar8 = *(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)pbVar10 - uVar8;
  lVar12 = lVar14 - uVar8;
  lVar9 = lVar12 - uVar8;
  pcVar13 = *(code **)(local_b8 + 0x10);
  local_c8 = lVar9;
  (*pcVar13)(lVar9,param_3);
  lVar6 = local_b0;
  if ((param_5 < 6) && ((0x3dU >> (ulong)((uint)param_5 & 0x1f) & 1) != 0)) {
    local_140 = *(undefined8 *)(&DAT_100c6ede8 + param_5 * 8);
    local_110 = param_5;
    local_f8 = pbVar16;
    local_d8 = lVar5;
    local_d0 = param_3;
    (*pcVar13)(lVar12,local_148,local_b0);
    lVar9 = *(long *)(lVar18 + -8);
    pcVar15 = *(code **)(lVar9 + 0x30);
    lVar5 = lVar12;
    (*pcVar15)(lVar12,1,lVar18);
    bVar2 = (int)lVar5 == 1;
    lVar5 = local_b8;
    if (!bVar2) {
      Swift::RawRepresentable::_get_rawValue();
      lVar5 = lVar9;
      lVar6 = lVar18;
    }
    (**(code **)(lVar5 + 8))(lVar12,lVar6);
    pcVar17 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    (*pcVar17)(local_c0,bVar2,1,lVar4);
    lVar6 = local_b0;
    (*pcVar13)(lVar14,local_c8,local_b0);
    lVar5 = lVar14;
    (*pcVar15)(lVar14,1,lVar18);
    bVar2 = (int)lVar5 == 1;
    lVar5 = local_b8;
    if (!bVar2) {
      Swift::RawRepresentable::_get_rawValue();
      lVar5 = lVar9;
      lVar6 = lVar18;
    }
    (**(code **)(lVar5 + 8))(lVar14,lVar6);
    (*pcVar17)(pbVar11,bVar2,1,lVar4);
    lVar5 = local_100;
    iVar1 = *(int *)(local_100 + 0x30);
    lVar9 = *(long *)(local_128 + 0x20);
    uVar7 = 0;
    _swift_getAssociatedTypeWitness(0,lVar9,lVar4,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
    lVar6 = lVar9;
    _swift_getAssociatedConformanceWitness
              (lVar9,lVar4,uVar7,0x100cbabac,&TargetProtocolRequirement_100cbabbc);
    uVar8 = local_c0;
    pbVar16 = local_130;
    pbVar10 = local_130 + iVar1;
    (**(code **)(lVar6 + 0x50))(pbVar10,local_c0,pbVar11,local_118,local_110,local_140,uVar7,lVar6);
    lVar4 = local_d8;
    pcVar15 = *(code **)(local_120 + 8);
    (*pcVar15)(uVar8,local_d8);
    *pbVar16 = (byte)pbVar10 & 1;
    pbVar10 = local_f8;
    lVar6 = local_108;
    (**(code **)(local_108 + 0x10))(local_f8,pbVar16,lVar5);
    local_c0 = CONCAT44(local_c0._4_4_,(uint)*pbVar10);
    local_110 = (ulong)*(int *)(lVar5 + 0x30);
    uStack_88 = uStack_e8;
    local_90 = local_f0;
    local_80 = lVar9;
    lStack_78 = lVar18;
    FUN_1006946ec(local_e0,FUN_10069d480,auStack_a0,lVar4,
                  PTR___type_metadata_for_Swift_Never_100eadc38,lVar18,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    lVar9 = local_b0;
    pcVar13 = *(code **)(local_b8 + 8);
    (*pcVar13)(local_d0,local_b0);
    (**(code **)(lVar6 + 8))(pbVar16,lVar5);
    (*pcVar13)(local_c8,lVar9);
    (*pcVar15)(pbVar10 + local_110,lVar4);
    return local_c0 & 0xffffffff;
  }
  *(undefined4 *)(lVar9 + -8) = 0;
  *(undefined8 *)(lVar9 + -0x10) = 0x12d;
  SVar19.bridgeObject = (void *)0x2;
  SVar19.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar19,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc90);
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10069c2b4);
  (*pcVar13)();
}



/* Address: 0x10069c2b4 | FUN_10069c2b4 */

ulong FUN_10069c2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,long param_6)

{
  int iVar1;
  byte *pbVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  byte *pbVar14;
  long lVar15;
  String SVar16;
  undefined8 uStack_f0;
  undefined4 auStack_e8 [2];
  byte abStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  code *local_90;
  long local_88;
  long local_80;
  byte *local_78;
  byte *local_70;
  long local_68;
  
  lVar12 = *(long *)(param_6 + 0x10);
  local_d0 = param_1;
  local_98 = param_2;
  local_88 = param_4;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x40);
  lVar4 = 0;
  local_70 = abStack_e0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 0x18),lVar12,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  local_90 = *(code **)(lVar4 + -8);
  uVar10 = *(long *)((long)local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = (long)(abStack_e0 + -(lVar9 + 0xfU & 0xfffffffffffffff0)) - uVar10;
  lVar11 = local_a8 - uVar10;
  lVar9 = 0;
  _swift_getTupleTypeMetadata2
            (0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar4,"exchanged original ",0);
  local_80 = *(long *)(lVar9 + -8);
  uVar10 = *(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a0 = lVar11 - uVar10;
  local_78 = (byte *)(local_a0 - uVar10);
  pbVar14 = local_78 + -uVar10;
  local_b0 = *(long *)(lVar12 + -8);
  lVar5 = (long)pbVar14 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d8 = param_3;
  local_68 = lVar5;
  (**(code **)(local_b0 + 0x10))(lVar5,param_3,lVar12);
  if ((param_5 < 6) && ((0x3dU >> (ulong)((uint)param_5 & 0x1f) & 1) != 0)) {
    local_b8 = *(undefined8 *)(&DAT_100c6ede8 + param_5 * 8);
    local_c8 = (long)*(int *)(lVar9 + 0x30);
    lVar15 = *(long *)(param_6 + 0x20);
    uVar6 = 0;
    local_c0 = param_5;
    _swift_getAssociatedTypeWitness(0,lVar15,lVar4,0x100cbad48,&TargetProtocolRequirement_100cbad58)
    ;
    Swift::RawRepresentable::_get_rawValue();
    lVar5 = local_a8;
    Swift::RawRepresentable::_get_rawValue();
    _swift_getAssociatedConformanceWitness
              (lVar15,lVar4,uVar6,0x100cbad48,&TargetProtocolRequirement_100cbad50);
    pbVar7 = pbVar14 + local_c8;
    (**(code **)(lVar15 + 0x50))(pbVar7,lVar11,lVar5,local_88,local_c0,local_b8,uVar6,lVar15);
    local_90 = *(code **)((long)local_90 + 8);
    local_88 = lVar4;
    (*local_90)(lVar11,lVar4);
    *pbVar14 = (byte)pbVar7 & 1;
    pbVar7 = local_78;
    lVar5 = local_80;
    pcVar13 = *(code **)(local_80 + 0x10);
    (*pcVar13)(local_78,pbVar14,lVar9);
    local_98 = CONCAT44(local_98._4_4_,(uint)*pbVar7);
    (*pcVar13)(local_a0,pbVar14,lVar9);
    pbVar2 = local_70;
    Swift::RawRepresentable::_init();
    lVar4 = local_b0;
    pbVar8 = pbVar2;
    (**(code **)(local_b0 + 0x30))(pbVar2,1,lVar12);
    if ((int)pbVar8 != 1) {
      iVar1 = *(int *)(lVar9 + 0x30);
      pcVar13 = *(code **)(lVar4 + 8);
      (*pcVar13)(local_d8,lVar12);
      (**(code **)(lVar5 + 8))(pbVar14,lVar9);
      (*pcVar13)(local_68,lVar12);
      (**(code **)(lVar4 + 0x20))(local_d0,pbVar2,lVar12);
      (*local_90)(pbVar7 + iVar1,local_88);
      return local_98 & 0xffffffff;
    }
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10069c5f0);
    (*pcVar13)();
  }
  *(undefined4 *)(lVar5 + -8) = 0;
  *(undefined8 *)(lVar5 + -0x10) = 0x12d;
  SVar16.bridgeObject = (void *)0x2;
  SVar16.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar16,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc90);
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10069c644);
  (*pcVar13)();
}


