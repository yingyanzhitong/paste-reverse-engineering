/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bd7e20 | FUN_100bd7e20 */

void FUN_100bd7e20(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 2;
  return;
}



/* Address: 0x100bd7e30 | FUN_100bd7e30 */

void FUN_100bd7e30(void)

{
  undefined8 *unaff_x20;
  
  FUN_100bd7e20(*unaff_x20);
  return;
}



/* Address: 0x100bd7e38 | thunk_FUN_100bd8910 */

void thunk_FUN_100bd8910(void)

{
  FUN_100bd8910();
  return;
}



/* Address: 0x100bd7e3c | FUN_100bd7e3c */

void FUN_100bd7e3c(void)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_100bd8910(*unaff_x20);
  return;
}



/* Address: 0x100bd7e44 | FUN_100bd7e44 */

void FUN_100bd7e44(float param_1)

{
  FUN_100bd8910((double)param_1);
  return;
}



/* Address: 0x100bd7e4c | FUN_100bd7e4c */

void FUN_100bd7e4c(void)

{
  undefined4 *unaff_x20;
  
  FUN_100bd7e44(*unaff_x20);
  return;
}



/* Address: 0x100bd7e54 | FUN_100bd7e54 */

void FUN_100bd7e54(undefined8 *param_1,code *param_2,undefined *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined1 auStack_90 [16];
  undefined *local_80;
  code *local_68;
  
  if (param_3 == PTR___type_metadata_for_Swift_Bool_100eac570) {
    pcVar2 = param_2;
    FUN_100bd88e4(param_2,PTR___type_metadata_for_Swift_Bool_100eac570);
    if (pcVar2 != (code *)0x0) {
      *param_1 = pcVar2;
      param_1[1] = 0;
      uVar5 = 5;
      goto LAB_100bd80d4;
    }
LAB_100bd7fd8:
    puVar3 = &DAT_101044950;
    FUN_100b6730c(&DAT_101044950);
    pcVar4 = param_2;
    Swift::__arrayConditionalCast(param_2,param_3,puVar3);
    if (pcVar4 != (code *)0x0) {
      FUN_100bd80f8(param_1);
      _swift_bridgeObjectRelease(pcVar4);
      return;
    }
    local_80 = param_3;
    local_68 = param_2;
    Swift::Array<undefined>::typeMetadataAccessor();
    puVar3 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,pcVar4);
    pcVar2 = FUN_100bd8338;
    FUN_100bd7b38(FUN_100bd8338,auStack_90,pcVar4,PTR___type_metadata_for_Swift_String_100eac208,
                  PTR___type_metadata_for_Swift_Never_100eadc38,puVar3,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  }
  else {
    if (param_3 == PTR___type_metadata_for_Swift_Double_100eac5d0) {
      pcVar2 = param_2;
      FUN_100bd88e4(param_2,PTR___type_metadata_for_Swift_Double_100eac5d0);
      if (pcVar2 != (code *)0x0) {
        *param_1 = pcVar2;
LAB_100bd80cc:
        param_1[1] = 0;
        uVar5 = 7;
        goto LAB_100bd80d4;
      }
      goto LAB_100bd7fd8;
    }
    if (param_3 == PTR___type_metadata_for_Swift_Float_100eac620) {
      pcVar2 = param_2;
      FUN_100bd88e4(param_2,PTR___type_metadata_for_Swift_Float_100eac620);
      if (pcVar2 != (code *)0x0) {
        lVar6 = *(long *)(pcVar2 + 0x10);
        if (lVar6 == 0) {
          _swift_bridgeObjectRelease(pcVar2);
          pcVar4 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          local_68 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
          FUN_100b69544(0,lVar6,0);
          lVar7 = 0x20;
          uVar8 = *(ulong *)(local_68 + 0x10);
          do {
            fVar9 = *(float *)(pcVar2 + lVar7);
            uVar1 = uVar8 + 1;
            if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar8) {
              FUN_100b69544(1 < *(ulong *)(local_68 + 0x18),uVar1,1);
            }
            pcVar4 = local_68;
            *(ulong *)(local_68 + 0x10) = uVar1;
            *(double *)(local_68 + uVar8 * 8 + 0x20) = (double)fVar9;
            lVar7 = lVar7 + 4;
            lVar6 = lVar6 + -1;
            uVar8 = uVar1;
          } while (lVar6 != 0);
          _swift_bridgeObjectRelease(pcVar2);
        }
        *param_1 = pcVar4;
        goto LAB_100bd80cc;
      }
      goto LAB_100bd7fd8;
    }
    if (param_3 == PTR___type_metadata_for_Swift_Int_100eac6f8) {
      pcVar2 = param_2;
      FUN_100bd88e4(param_2,PTR___type_metadata_for_Swift_Int_100eac6f8);
      if (pcVar2 != (code *)0x0) {
        *param_1 = pcVar2;
        param_1[1] = 0;
        uVar5 = 6;
        goto LAB_100bd80d4;
      }
      goto LAB_100bd7fd8;
    }
    if ((param_3 != PTR___type_metadata_for_Swift_String_100eac208) ||
       (pcVar2 = param_2, FUN_100bd88e4(param_2,PTR___type_metadata_for_Swift_String_100eac208),
       pcVar2 == (code *)0x0)) goto LAB_100bd7fd8;
  }
  *param_1 = pcVar2;
  param_1[1] = 0;
  uVar5 = 4;
LAB_100bd80d4:
  *(undefined1 *)(param_1 + 2) = uVar5;
  return;
}



/* Address: 0x100bd80f8 | FUN_100bd80f8 */

void FUN_100bd80f8(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  String SVar10;
  char *local_d0 [5];
  char *local_a8;
  void *pvStack_a0;
  undefined1 local_98;
  undefined *local_90;
  undefined8 uStack_88;
  char local_80;
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar9 = *(long *)(param_2 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar9 != 0) {
    FUN_100bd8354(&local_90);
    if ((((local_80 != -1) || (FUN_100bd8474(&local_90,param_2), local_80 != -1)) ||
        (FUN_100bd8590(&local_90,param_2), local_80 != -1)) ||
       (FUN_100bd86ac(&local_90,param_2), local_80 != -1)) goto LAB_100bd8304;
    local_68 = puVar4;
    FUN_100071750(0,lVar9,0);
    param_2 = param_2 + 0x20;
    do {
      puVar4 = local_68;
      FUN_100076688(param_2,&local_90);
      lVar6 = lStack_70;
      uVar5 = local_78;
      FUN_100004640(&local_90,local_78);
      (**(code **)(lVar6 + 8))(&local_a8,uVar5,lVar6);
      SVar10.bridgeObject = pvStack_a0;
      SVar10.str = local_a8;
      switch(local_98) {
      case 0:
        break;
      case 1:
        bVar7 = ((ulong)local_a8 & 1) == 0;
        pcVar1 = (char *)0x65757274;
        if (bVar7) {
          pcVar1 = (char *)0x65736c6166;
        }
        puVar2 = &DAT_e400000000000000;
        if (bVar7) {
          puVar2 = &DAT_e500000000000000;
        }
        SVar10.bridgeObject = puVar2;
        SVar10.str = pcVar1;
        break;
      case 2:
        local_d0[0] = local_a8;
        SVar10 = Swift::CustomStringConvertible::get_description();
        break;
      case 3:
        SVar10 = double::get_description((double)local_a8);
        break;
      default:
        FUN_100b69560(local_a8,pvStack_a0);
        FUN_100076688(&local_90,local_d0);
        puVar8 = &DAT_101044950;
        FUN_100b6730c(&DAT_101044950);
        SVar10 = Swift::String::_init(local_d0,puVar8);
      }
      FUN_100004594(&local_90);
      uVar3 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar3) {
        FUN_100071750(1 < *(ulong *)(puVar4 + 0x18),uVar3 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar3 + 1;
      *(String *)(local_68 + uVar3 * 0x10 + 0x20) = SVar10;
      param_2 = param_2 + 0x28;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uStack_88 = 0;
  local_80 = '\x04';
  local_90 = local_68;
LAB_100bd8304:
  param_1[1] = uStack_88;
  *param_1 = local_90;
  *(char *)(param_1 + 2) = local_80;
  return;
}



/* Address: 0x100bd8338 | FUN_100bd8338 */

void FUN_100bd8338(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006747a8(param_1,*(undefined8 *)(unaff_x20 + 0x10),param_2);
  return;
}



/* Address: 0x100bd8354 | FUN_100bd8354 */

void FUN_100bd8354(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 extraout_w8;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  char in_stack_00000010;
  char in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  FUN_100bd895c();
  FUN_100bd8980();
  if (unaff_x26 != 0) {
    FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
    FUN_100bd889c();
    if (in_stack_00000028 == '\x01') {
      FUN_100b8483c();
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        FUN_100bd88f0();
        lVar2 = in_stack_00000038;
        uVar1 = in_stack_00000030;
        puVar5 = &stack0x00000018;
        FUN_100004640(puVar5,in_stack_00000030);
        FUN_100bd88b4();
        uVar3 = in_stack_00000010 != '\0';
        uVar4 = in_stack_00000010 == '\x01';
        if ((bool)uVar4) {
          FUN_100bd88fc();
          FUN_100bd8944();
          if (((ulong)puVar5 & 1) == 0) {
            FUN_100bd88cc();
            FUN_100b6e79c();
            puVar6 = puVar5;
          }
          FUN_100bd894c();
          if ((bool)uVar3) {
            uVar4 = extraout_x8 == 1;
            puVar6 = (undefined *)(ulong)(1 < extraout_x8);
            FUN_100bd8904(puVar6,uVar1);
            FUN_100b6e79c();
          }
          *(undefined8 *)(puVar6 + 0x10) = uVar1;
          puVar6[lVar2 + 0x20] = (byte)in_stack_00000000 & 1;
        }
        else {
          FUN_100b69560(in_stack_00000000,in_stack_00000008);
          FUN_100bd88fc();
        }
        FUN_100bd8998();
      } while (!(bool)uVar4);
      FUN_100b6f980();
      FUN_100bd898c();
      if ((bool)uVar4) {
        *unaff_x19 = puVar6;
        unaff_x19[1] = 0;
        uVar4 = 5;
        goto LAB_100bd8468;
      }
      FUN_100b6f8ec();
    }
    else {
      FUN_100bd8978();
    }
  }
  FUN_100bd89a4();
  uVar4 = extraout_w8;
LAB_100bd8468:
  *(undefined1 *)(unaff_x19 + 2) = uVar4;
  FUN_100bd8880();
  return;
}



/* Address: 0x100bd8474 | FUN_100bd8474 */

void FUN_100bd8474(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 extraout_w8;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  byte in_stack_00000010;
  char in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  FUN_100bd895c();
  FUN_100bd8980();
  if (unaff_x26 != 0) {
    FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
    FUN_100bd889c();
    if (in_stack_00000028 == '\x03') {
      FUN_100b8483c();
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        FUN_100bd88f0();
        lVar2 = in_stack_00000038;
        uVar1 = in_stack_00000030;
        puVar5 = &stack0x00000018;
        FUN_100004640(puVar5,in_stack_00000030);
        FUN_100bd88b4();
        uVar3 = 2 < in_stack_00000010;
        uVar4 = in_stack_00000010 == 3;
        if ((bool)uVar4) {
          FUN_100bd88fc();
          FUN_100bd8944();
          if (((ulong)puVar5 & 1) == 0) {
            FUN_100bd88cc();
            FUN_100b6e788();
            puVar6 = puVar5;
          }
          FUN_100bd894c();
          if ((bool)uVar3) {
            uVar4 = extraout_x8 == 1;
            puVar6 = (undefined *)(ulong)(1 < extraout_x8);
            FUN_100bd8904(puVar6,uVar1);
            FUN_100b6e788();
          }
          *(undefined8 *)(puVar6 + 0x10) = uVar1;
          *(undefined8 *)(puVar6 + lVar2 * 8 + 0x20) = in_stack_00000000;
        }
        else {
          FUN_100b69560(in_stack_00000000,in_stack_00000008);
          FUN_100bd88fc();
        }
        FUN_100bd8998();
      } while (!(bool)uVar4);
      FUN_100b6f980();
      FUN_100bd898c();
      if ((bool)uVar4) {
        *unaff_x19 = puVar6;
        unaff_x19[1] = 0;
        uVar4 = 7;
        goto LAB_100bd8584;
      }
      FUN_100b6f8ec();
    }
    else {
      FUN_100bd8978();
    }
  }
  FUN_100bd89a4();
  uVar4 = extraout_w8;
LAB_100bd8584:
  *(undefined1 *)(unaff_x19 + 2) = uVar4;
  FUN_100bd8880();
  return;
}



/* Address: 0x100bd8590 | FUN_100bd8590 */

void FUN_100bd8590(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 extraout_w8;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  byte in_stack_00000010;
  char in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  FUN_100bd895c();
  FUN_100bd8980();
  if (unaff_x26 != 0) {
    FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
    FUN_100bd889c();
    if (in_stack_00000028 == '\x02') {
      FUN_100b8483c();
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        FUN_100bd88f0();
        lVar2 = in_stack_00000038;
        uVar1 = in_stack_00000030;
        puVar5 = &stack0x00000018;
        FUN_100004640(puVar5,in_stack_00000030);
        FUN_100bd88b4();
        uVar3 = 1 < in_stack_00000010;
        uVar4 = in_stack_00000010 == 2;
        if ((bool)uVar4) {
          FUN_100bd88fc();
          FUN_100bd8944();
          if (((ulong)puVar5 & 1) == 0) {
            FUN_100bd88cc();
            FUN_100088cf8();
            puVar6 = puVar5;
          }
          FUN_100bd894c();
          if ((bool)uVar3) {
            uVar4 = extraout_x8 == 1;
            puVar6 = (undefined *)(ulong)(1 < extraout_x8);
            FUN_100bd8904(puVar6,uVar1);
            FUN_100088cf8();
          }
          *(undefined8 *)(puVar6 + 0x10) = uVar1;
          *(undefined8 *)(puVar6 + lVar2 * 8 + 0x20) = in_stack_00000000;
        }
        else {
          FUN_100b69560(in_stack_00000000,in_stack_00000008);
          FUN_100bd88fc();
        }
        FUN_100bd8998();
      } while (!(bool)uVar4);
      FUN_100b6f980();
      FUN_100bd898c();
      if ((bool)uVar4) {
        *unaff_x19 = puVar6;
        unaff_x19[1] = 0;
        uVar4 = 6;
        goto LAB_100bd86a0;
      }
      FUN_100b6f8ec();
    }
    else {
      FUN_100bd8978();
    }
  }
  FUN_100bd89a4();
  uVar4 = extraout_w8;
LAB_100bd86a0:
  *(undefined1 *)(unaff_x19 + 2) = uVar4;
  FUN_100bd8880();
  return;
}



/* Address: 0x100bd86ac | FUN_100bd86ac */

void FUN_100bd86ac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined1 extraout_w8;
  undefined8 *unaff_x19;
  long unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  char in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_100bd895c();
  FUN_100bd8980();
  if (unaff_x26 != 0) {
    FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
    FUN_100bd889c();
    if (in_stack_00000028 == '\0') {
      FUN_100b69560(in_stack_00000018,in_stack_00000020);
      FUN_100b8483c();
      puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        FUN_100bd88f0();
        puVar3 = &stack0x00000018;
        FUN_100004640(puVar3,in_stack_00000030);
        FUN_100bd88b4();
        if (in_stack_00000010 == '\0') {
          FUN_100bd88fc();
          FUN_100bd8944();
          if (((ulong)puVar3 & 1) == 0) {
            FUN_100bd88cc();
            FUN_100089044();
            puVar4 = puVar3;
          }
          uVar1 = puVar4[2];
          uVar2 = puVar4[3];
          in_ZR = uVar1 == uVar2 >> 1;
          if (uVar2 >> 1 <= uVar1) {
            in_ZR = uVar2 == 1;
            puVar4 = (undefined8 *)(ulong)(1 < uVar2);
            FUN_100bd8904(puVar4,uVar1 + 1);
            FUN_100089044();
          }
          puVar4[2] = uVar1 + 1;
          puVar4[uVar1 * 2 + 4] = in_stack_00000000;
          puVar4[uVar1 * 2 + 5] = in_stack_00000008;
        }
        else {
          FUN_100b69560(in_stack_00000000,in_stack_00000008);
          FUN_100bd88fc();
        }
        FUN_100bd8998();
      } while (!(bool)in_ZR);
      FUN_100b6f980();
      FUN_100bd898c();
      if ((bool)in_ZR) {
        *unaff_x19 = puVar4;
        unaff_x19[1] = 0;
        uVar5 = 4;
        goto LAB_100bd87c4;
      }
      FUN_100b6f8ec();
    }
    else {
      FUN_100b69560(in_stack_00000018,in_stack_00000020);
    }
  }
  FUN_100bd89a4();
  uVar5 = extraout_w8;
LAB_100bd87c4:
  *(undefined1 *)(unaff_x19 + 2) = uVar5;
  FUN_100bd8880();
  return;
}



/* Address: 0x100bd87d0 | FUN_100bd87d0 */

void FUN_100bd87d0(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100bd7e54(*unaff_x20,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100bd87e0 | FUN_100bd87e0 */

void FUN_100bd87e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Set SVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  
  local_38 = param_2;
  SVar1 = Swift::Set::typeMetadataAccessor();
  _swift_bridgeObjectRetain(param_2);
  puVar2 = PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0;
  _swift_getWitnessTable(PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0,SVar1.unknown);
  puVar3 = &local_38;
  Swift::Array<undefined>::_init(puVar3,param_3,SVar1.unknown,puVar2);
  FUN_100bd7e54(param_1);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x100bd8868 | FUN_100bd8868 */

void FUN_100bd8868(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100bd87e0(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x100bd8878 | FUN_100bd8878 */

void FUN_100bd8878(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bd887c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 8))();
  return;
}



/* Address: 0x100bd8880 | FUN_100bd8880 */

void FUN_100bd8880(void)

{
  return;
}



/* Address: 0x100bd889c | FUN_100bd889c */

void FUN_100bd889c(void)

{
  long unaff_x24;
  
                    /* WARNING: Could not recover jumptable at 0x000100bd88b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x24 + 8))(&stack0x00000018);
  return;
}



/* Address: 0x100bd88b4 | FUN_100bd88b4 */

void FUN_100bd88b4(void)

{
  long unaff_x25;
  
                    /* WARNING: Could not recover jumptable at 0x000100bd88c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x25 + 8))();
  return;
}



/* Address: 0x100bd88cc | FUN_100bd88cc */

undefined8 FUN_100bd88cc(void)

{
  return 0;
}



/* Address: 0x100bd88e4 | FUN_100bd88e4 */

void FUN_100bd88e4(void)

{
  Swift::__arrayConditionalCast();
  return;
}



/* Address: 0x100bd88f0 | FUN_100bd88f0 */

void FUN_100bd88f0(void)

{
  FUN_100076688();
  return;
}



/* Address: 0x100bd88fc | FUN_100bd88fc */

void FUN_100bd88fc(void)

{
  FUN_100004594(&stack0x00000018);
  return;
}



/* Address: 0x100bd8904 | FUN_100bd8904 */

void FUN_100bd8904(void)

{
  return;
}



/* Address: 0x100bd8910 | FUN_100bd8910 */

void FUN_100bd8910(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 3;
  return;
}



/* Address: 0x100bd8924 | FUN_100bd8924 */

void FUN_100bd8924(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100bd8930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100bd8934 | FUN_100bd8934 */

void FUN_100bd8934(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x000100bd8940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x29 + -0xe0) + 8))();
  return;
}



/* Address: 0x100bd8944 | FUN_100bd8944 */

void FUN_100bd8944(void)

{
  _swift_isUniquelyReferenced_nonNull_native();
  return;
}



/* Address: 0x100bd894c | FUN_100bd894c */

void FUN_100bd894c(void)

{
  return;
}



/* Address: 0x100bd895c | FUN_100bd895c */

void FUN_100bd895c(void)

{
  return;
}



/* Address: 0x100bd8978 | FUN_100bd8978 */

void FUN_100bd8978(void)

{
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  FUN_100b69560(in_stack_00000018,in_stack_00000020);
  return;
}



/* Address: 0x100bd8980 | FUN_100bd8980 */

void FUN_100bd8980(void)

{
  return;
}



/* Address: 0x100bd898c | FUN_100bd898c */

void FUN_100bd898c(void)

{
  return;
}



/* Address: 0x100bd8998 | FUN_100bd8998 */

void FUN_100bd8998(void)

{
  return;
}



/* Address: 0x100bd89a4 | FUN_100bd89a4 */

void FUN_100bd89a4(void)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Address: 0x100bd89b0 | FUN_100bd89b0 */

undefined * FUN_100bd89b0(undefined *param_1,undefined *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  _StringGuts _Var6;
  long lVar7;
  undefined8 *puVar8;
  
  if (DAT_101043258 != 0) {
    lVar7 = DAT_101043258;
    puVar8 = &DAT_101043268;
    do {
      puVar5 = (undefined *)*puVar8;
      _Var4.unknown = puVar5;
      _Var6.unknown = (undefined *)0xe000000000000000;
      switch(puVar5) {
      case (undefined *)0x0:
        break;
      case (undefined *)0x1:
        _Var6.unknown = &DAT_e700000000000000;
        _Var4.unknown = (undefined *)0x746c7561666564;
        break;
      case (undefined *)0x2:
        _Var6.unknown = &DAT_e500000000000000;
        _Var4.unknown = (undefined *)0x726f727265;
        break;
      case (undefined *)0x3:
        uVar3 = 0x6f6973736573;
        goto LAB_100bd8b28;
      case (undefined *)0x4:
        _Var4.unknown = (undefined *)0x746361736e617274;
        _Var6.unknown = &DAT_eb000000006e6f69;
        break;
      case (undefined *)0x5:
        _Var6.unknown = (undefined *)0xea0000000000746e;
        _Var4.unknown = (undefined *)0x656d686361747461;
        break;
      case (undefined *)0x6:
        goto switchD_100bd8a34_caseD_6;
      case (undefined *)0x7:
        _Var6.unknown = &DAT_e700000000000000;
        _Var4.unknown = (undefined *)0x656c69666f7270;
        break;
      case (undefined *)0x8:
        _Var4.unknown = (undefined *)0x625f63697274656d;
        _Var6.unknown = (undefined *)0xed000074656b6375;
        break;
      case (undefined *)0x9:
        _Var6.unknown = &DAT_e600000000000000;
        _Var4.unknown = (undefined *)0x79616c706572;
        break;
      case (undefined *)0xa:
        _Var4.unknown = (undefined *)0xd000000000000010;
        _Var6.unknown = (undefined *)0x8000000100dcb080;
        break;
      case (undefined *)0xb:
        _Var4.unknown = (undefined *)0x6e617073;
        _Var6.unknown = &DAT_e400000000000000;
        break;
      case (undefined *)0xc:
        _Var4.unknown = (undefined *)0x6b63616264656566;
        _Var6.unknown = &DAT_e800000000000000;
        break;
      case (undefined *)0xd:
        _Var4.unknown = (undefined *)0x6d6574695f676f6c;
        _Var6.unknown = &DAT_e800000000000000;
        break;
      case (undefined *)0xe:
        _Var4.unknown = (undefined *)0x656d5f6563617274;
        _Var6.unknown = (undefined *)0xec00000063697274;
        break;
      case (undefined *)0xf:
        _Var4.unknown = (undefined *)0x657479625f676f6c;
        _Var6.unknown = &DAT_e800000000000000;
        break;
      case (undefined *)0x10:
        _Var4.unknown = (undefined *)0xd000000000000011;
        _Var6.unknown = (undefined *)0x8000000100dcb060;
        break;
      case (undefined *)0x11:
        uVar3 = 0x776f6e6b6e75;
LAB_100bd8b28:
        _Var4.unknown = (undefined *)(uVar3 | 0x6e000000000000);
        _Var6.unknown = &DAT_e700000000000000;
        break;
      default:
        FUN_100bb5928(&DAT_100f3c108);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd8c48);
        (*pcVar1)();
      }
      if (_Var4.unknown == param_1 && _Var6.unknown == param_2) {
        _swift_bridgeObjectRelease(param_2);
        goto LAB_100bd8c00;
      }
      bVar2 = Swift::_stringCompareWithSmolCheck
                        (_Var4,_Var6,(_StringComparisonResult)(__int8)param_1);
      _swift_bridgeObjectRelease(_Var6.unknown);
      _Var6.unknown = param_2;
      if (bVar2) goto LAB_100bd8c00;
switchD_100bd8a34_caseD_6:
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
  }
  puVar5 = (undefined *)0x11;
  _Var6.unknown = param_2;
LAB_100bd8c00:
  _swift_bridgeObjectRelease(_Var6.unknown);
  return puVar5;
}



/* Address: 0x100bd8c48 | FUN_100bd8c48 */

undefined1  [16] FUN_100bd8c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar3 = (undefined1 *)0xe000000000000000;
  switch(param_1) {
  case 1:
    puVar3 = &DAT_e700000000000000;
    param_1 = 0x746c7561666564;
  case 0:
    auVar13._8_8_ = puVar3;
    auVar13._0_8_ = param_1;
    return auVar13;
  case 2:
    auVar11._8_8_ = &DAT_e500000000000000;
    auVar11._0_8_ = 0x726f727265;
    return auVar11;
  case 3:
    uVar2 = 0x6f6973736573;
    break;
  case 4:
    auVar8._8_8_ = &DAT_eb000000006e6f69;
    auVar8._0_8_ = 0x746361736e617274;
    return auVar8;
  case 5:
    uVar4 = 0xea0000000000746e;
    uVar2 = 0x686361747461;
    goto LAB_100bd8dcc;
  case 6:
  case 0x11:
    uVar2 = 0x776f6e6b6e75;
    break;
  case 7:
    auVar18._8_8_ = &DAT_e700000000000000;
    auVar18._0_8_ = 0x656c69666f7270;
    return auVar18;
  case 8:
    auVar10._8_8_ = 0xed000074656b6375;
    auVar10._0_8_ = 0x625f63697274656d;
    return auVar10;
  case 9:
    auVar17._8_8_ = &DAT_e600000000000000;
    auVar17._0_8_ = 0x79616c706572;
    return auVar17;
  case 10:
    auVar7._8_8_ = 0x8000000100dcb080;
    auVar7._0_8_ = 0xd000000000000010;
    return auVar7;
  case 0xb:
    auVar9._8_8_ = &DAT_e400000000000000;
    auVar9._0_8_ = 0x6e617073;
    return auVar9;
  case 0xc:
    auVar15._8_8_ = &DAT_e800000000000000;
    auVar15._0_8_ = 0x6b63616264656566;
    return auVar15;
  case 0xd:
    auVar6._8_8_ = &DAT_e800000000000000;
    auVar6._0_8_ = 0x6d6574695f676f6c;
    return auVar6;
  case 0xe:
    uVar4 = 0xec00000063697274;
    uVar2 = 0x5f6563617274;
LAB_100bd8dcc:
    auVar16._0_8_ = uVar2 | 0x656d000000000000;
    auVar16._8_8_ = uVar4;
    return auVar16;
  case 0xf:
    auVar5._8_8_ = &DAT_e800000000000000;
    auVar5._0_8_ = 0x657479625f676f6c;
    return auVar5;
  case 0x10:
    auVar14._8_8_ = 0x8000000100dcb060;
    auVar14._0_8_ = 0xd000000000000011;
    return auVar14;
  default:
    FUN_100bb5928(&DAT_100f3c108,param_2,param_3,PTR___type_metadata_for_Swift_UInt_100eacb00);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd8e28);
    (*pcVar1)();
  }
  auVar12._0_8_ = uVar2 | 0x6e000000000000;
  auVar12._8_8_ = &DAT_e700000000000000;
  return auVar12;
}



/* Address: 0x100bd8e28 | FUN_100bd8e28 */

void FUN_100bd8e28(void)

{
  FUN_100b6730c(&DAT_101044a70);
  _swift_initStaticObject();
  return;
}



/* Address: 0x100bd8e4c | FUN_100bd8e4c */

undefined1  [16] FUN_100bd8e4c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x12) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x11 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x100bd8e5c | FUN_100bd8e5c */

void FUN_100bd8e5c(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bd8e4c();
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Address: 0x100bd8e8c | FUN_100bd8e8c */

void FUN_100bd8e8c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100bd8e28();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bd8eb0 | thunk_FUN_100bd8c48 */

undefined1  [16] thunk_FUN_100bd8c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar3 = (undefined1 *)0xe000000000000000;
  switch(param_1) {
  case 1:
    puVar3 = &DAT_e700000000000000;
    param_1 = 0x746c7561666564;
  case 0:
    auVar13._8_8_ = puVar3;
    auVar13._0_8_ = param_1;
    return auVar13;
  case 2:
    auVar11._8_8_ = &DAT_e500000000000000;
    auVar11._0_8_ = 0x726f727265;
    return auVar11;
  case 3:
    uVar2 = 0x6f6973736573;
    break;
  case 4:
    auVar8._8_8_ = &DAT_eb000000006e6f69;
    auVar8._0_8_ = 0x746361736e617274;
    return auVar8;
  case 5:
    uVar4 = 0xea0000000000746e;
    uVar2 = 0x686361747461;
    goto LAB_100bd8dcc;
  case 6:
  case 0x11:
    uVar2 = 0x776f6e6b6e75;
    break;
  case 7:
    auVar18._8_8_ = &DAT_e700000000000000;
    auVar18._0_8_ = 0x656c69666f7270;
    return auVar18;
  case 8:
    auVar10._8_8_ = 0xed000074656b6375;
    auVar10._0_8_ = 0x625f63697274656d;
    return auVar10;
  case 9:
    auVar17._8_8_ = &DAT_e600000000000000;
    auVar17._0_8_ = 0x79616c706572;
    return auVar17;
  case 10:
    auVar7._8_8_ = 0x8000000100dcb080;
    auVar7._0_8_ = 0xd000000000000010;
    return auVar7;
  case 0xb:
    auVar9._8_8_ = &DAT_e400000000000000;
    auVar9._0_8_ = 0x6e617073;
    return auVar9;
  case 0xc:
    auVar15._8_8_ = &DAT_e800000000000000;
    auVar15._0_8_ = 0x6b63616264656566;
    return auVar15;
  case 0xd:
    auVar6._8_8_ = &DAT_e800000000000000;
    auVar6._0_8_ = 0x6d6574695f676f6c;
    return auVar6;
  case 0xe:
    uVar4 = 0xec00000063697274;
    uVar2 = 0x5f6563617274;
LAB_100bd8dcc:
    auVar16._0_8_ = uVar2 | 0x656d000000000000;
    auVar16._8_8_ = uVar4;
    return auVar16;
  case 0xf:
    auVar5._8_8_ = &DAT_e800000000000000;
    auVar5._0_8_ = 0x657479625f676f6c;
    return auVar5;
  case 0x10:
    auVar14._8_8_ = 0x8000000100dcb060;
    auVar14._0_8_ = 0xd000000000000011;
    return auVar14;
  default:
    FUN_100bb5928(&DAT_100f3c108,param_2,param_3,PTR___type_metadata_for_Swift_UInt_100eacb00);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd8e28);
    (*pcVar1)();
  }
  auVar12._0_8_ = uVar2 | 0x6e000000000000;
  auVar12._8_8_ = &DAT_e700000000000000;
  return auVar12;
}



/* Address: 0x100bd8eb4 | SentryDataCategoryMapper::nameFor: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryDataCategoryMapper::nameFor_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  NSString *pNVar1;
  
  thunk_FUN_100bd8c48(param_3);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100bd8eec | FUN_100bd8eec */

void FUN_100bd8eec(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  FUN_100bf0538(param_1,param_2);
  return;
}



/* Address: 0x100bd8f1c | SentryDataCategoryMapper::categoryForEnvelopeItemType: */

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
SentryDataCategoryMapper::categoryForEnvelopeItemType_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100bd8eec();
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (unsigned_long_long)pcVar1;
}



/* Address: 0x100bd8f54 | SentryDataCategoryMapper::init */

/* Function Stack Size: 0x10 bytes */

ID SentryDataCategoryMapper::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bd8f74 | thunk_FUN_100bd8f78 */

void thunk_FUN_100bd8f78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047ec0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e6c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e6c4,&DAT_100f3c108);
  DAT_101047ec0 = pTVar1;
  return;
}



/* Address: 0x100bd8f78 | FUN_100bd8f78 */

void FUN_100bd8f78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047ec0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e6c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e6c4,&DAT_100f3c108);
  DAT_101047ec0 = pTVar1;
  return;
}



/* Address: 0x100bd8fb8 | thunk_FUN_100bd8fbc */

void thunk_FUN_100bd8fbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_101047ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101047ed0;
  FUN_100b6734c(&DAT_101047ed0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_101047ec8 = puVar2;
  return;
}



/* Address: 0x100bd8fbc | FUN_100bd8fbc */

void FUN_100bd8fbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_101047ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101047ed0;
  FUN_100b6734c(&DAT_101047ed0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_101047ec8 = puVar2;
  return;
}



/* Address: 0x100bd9004 | FUN_100bd9004 */

undefined1  [16] FUN_100bd9004(void)

{
  return ZEXT816(0x100f3c108);
}



/* Address: 0x100bd9014 | FUN_100bd9014 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bd9014(void)

{
  return ZEXT816(0x100fa4a30);
}



/* Address: 0x100bd9034 | FUN_100bd9034 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bd92c0) */

undefined1  [16] FUN_100bd9034(ID param_1)

{
  bool bVar1;
  undefined *puVar2;
  URLRequest_conflict UVar3;
  URLRequest_conflict UVar4;
  _StringGuts _Var5;
  JSONDecoder *pJVar6;
  _StringGuts _Var7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  String forHTTPHeaderField;
  undefined1 auVar14 [16];
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_101047f00;
  FUN_100b6730c();
  uVar8 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar11 = auStack_80 + -uVar8;
  puVar10 = puVar11 + -uVar8;
  lVar12 = (long)puVar10 - uVar8;
  lVar9 = lVar12 - uVar8;
  if (param_1 != 0) {
    UVar3.unknown = (undefined *)_objc_msgSend(param_1,"originalRequest");
    if (UVar3.unknown == (undefined *)0x0) {
      UVar4 = Foundation::URLRequest::typeMetadataAccessor();
    }
    else {
      Foundation::URLRequest::__unconditionallyBridgeFromObjectiveC(UVar3);
      UVar4 = Foundation::URLRequest::typeMetadataAccessor();
    }
    FUN_100bd98b8(lVar12,UVar3.unknown == (undefined *)0x0);
    FUN_100bd9308(lVar12,lVar9);
    Foundation::URLRequest::typeMetadataAccessor();
    lVar12 = lVar9;
    UVar3.unknown = UVar4.unknown;
    FUN_1000c9ff0(lVar9,1);
    if ((int)lVar12 == 1) {
      FUN_100bd9350(lVar9);
    }
    else {
      _Var5.unknown = (undefined *)0x2d746e65746e6f43;
      _Var7.unknown = (undefined *)0xec00000065707954;
      forHTTPHeaderField.bridgeObject = (void *)0xec00000065707954;
      forHTTPHeaderField.str = (char *)0x2d746e65746e6f43;
      Foundation::URLRequest::_value(forHTTPHeaderField,UVar3);
      pcVar13 = *(code **)(*(long *)(UVar4.unknown + -8) + 8);
      (*pcVar13)(lVar9,UVar4.unknown);
      if (_Var7.unknown != (undefined *)0x0) {
        if (_Var5.unknown == (undefined *)0xd000000000000010 &&
            _Var7.unknown == (undefined *)0x8000000100d8fc90) {
          _swift_bridgeObjectRelease(_Var7.unknown);
        }
        else {
          bVar1 = Swift::_stringCompareWithSmolCheck(_Var5,_Var7,(_StringComparisonResult)0x10);
          _swift_bridgeObjectRelease(_Var7.unknown);
          if (!bVar1) goto LAB_100bd92cc;
        }
        UVar3.unknown = (undefined *)_objc_msgSend(param_1,"originalRequest");
        if (UVar3.unknown != (undefined *)0x0) {
          Foundation::URLRequest::__unconditionallyBridgeFromObjectiveC(UVar3);
        }
        FUN_100bd98b8(puVar11,UVar3.unknown == (undefined *)0x0);
        FUN_100bd9308(puVar11,puVar10);
        uVar8 = 0;
        UVar3.unknown = puVar10;
        FUN_1000c9ff0(puVar10,1,UVar4.unknown);
        if ((int)UVar3.unknown == 1) {
          FUN_100b6faa8();
          FUN_100bd9350(puVar10);
          goto LAB_100bd92d0;
        }
        Foundation::URLRequest::_get_httpBody(UVar3);
        (*pcVar13)(puVar10,UVar4.unknown);
        if (uVar8 >> 0x3c < 0xf) {
          pJVar6 = Foundation::JSONDecoder::typeMetadataAccessor();
          _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
          pJVar6 = Foundation::JSONDecoder::init(pJVar6);
          FUN_100bd9390();
          Foundation::JSONDecoder::_decode(pJVar6,(Data)0x100f3c1f8);
          FUN_100bd98c4();
          FUN_100b6faa8();
          goto LAB_100bd92d8;
        }
      }
    }
LAB_100bd92cc:
    FUN_100b6faa8();
  }
LAB_100bd92d0:
  local_70 = 0;
  uStack_68 = 0;
LAB_100bd92d8:
  auVar14._8_8_ = uStack_68;
  auVar14._0_8_ = local_70;
  return auVar14;
}



/* Address: 0x100bd9308 | FUN_100bd9308 */

undefined8 FUN_100bd9308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101047f00;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100bd9350 | FUN_100bd9350 */

undefined8 FUN_100bd9350(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101047f00;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100bd9390 | FUN_100bd9390 */

void FUN_100bd9390(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047f08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e838;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e838,&DAT_100f3c1f8);
  DAT_101047f08 = pTVar1;
  return;
}



/* Address: 0x100bd93d0 | _TtC6Sentry20URLSessionTaskHelper::getGraphQLOperationNameFrom: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry20URLSessionTaskHelper::getGraphQLOperationNameFrom_
             (ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  
  FUN_100bd9034(param_3);
  if (param_2 == (SEL)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100bd9440 | _TtC6Sentry20URLSessionTaskHelper::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry20URLSessionTaskHelper::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bd9460 | FUN_100bd9460 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bd9460(void)

{
  return ZEXT816(0x100fa4ae0);
}



/* Address: 0x100bd9480 | FUN_100bd9480 */

undefined1  [16] FUN_100bd9480(void)

{
  return ZEXT816(0x100f3c1f8);
}



/* Address: 0x100bd9490 | FUN_100bd9490 */

bool FUN_100bd9490(long param_1,long param_2)

{
  bool bVar1;
  
  if (param_1 == 0x6f6974617265706f && param_2 == -0x12ffff9a929eb192) {
    _swift_bridgeObjectRelease(param_2);
    bVar1 = false;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6f6974617265706f,(_StringGuts)0xed0000656d614e6e,
                       (_StringComparisonResult)(__int8)param_1);
    _swift_bridgeObjectRelease(param_2);
    bVar1 = !bVar1;
  }
  return bVar1;
}



/* Address: 0x100bd950c | FUN_100bd950c */

undefined1  [16] FUN_100bd950c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed0000656d614e6e;
  auVar1._0_8_ = 0x6f6974617265706f;
  return auVar1;
}



/* Address: 0x100bd9530 | FUN_100bd9530 */

String FUN_100bd9530(char *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  char *pcVar3;
  KeyedDecodingContainer<undefined> KVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  String SVar7;
  
  puVar2 = &DAT_101047f38;
  FUN_100b6730c();
  lVar6 = *(long *)(puVar2 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  pvVar1 = *(void **)(param_1 + 0x18);
  pcVar3 = param_1;
  FUN_100004640(param_1,pvVar1);
  SVar7.bridgeObject = pvVar1;
  SVar7.str = pcVar3;
  FUN_100bd9710();
  KVar4 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    SVar7 = Swift::KeyedDecodingContainer::_decode(KVar4.unknown,puVar2);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffb0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2)
    ;
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return SVar7;
}


