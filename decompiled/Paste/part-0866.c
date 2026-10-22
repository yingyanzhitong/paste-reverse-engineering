/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10096115c | FUN_10096115c */

long FUN_10096115c(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 0x40);
    if (pcVar2 == (code *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      (*pcVar2)(param_1,param_2,param_3 - param_2);
      if ((int)lVar1 == -1) {
        *(char **)(param_1 + 0x20) = "Span callback error in on_chunk_extension_name";
        lVar1 = 0x18;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x1009611b8 | FUN_1009611b8 */

long FUN_1009611b8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0xa0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001009611c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x1009611d4 | FUN_1009611d4 */

long FUN_1009611d4(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 0x48);
    if (pcVar2 == (code *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      (*pcVar2)(param_1,param_2,param_3 - param_2);
      if ((int)lVar1 == -1) {
        *(char **)(param_1 + 0x20) = "Span callback error in on_chunk_extension_value";
        lVar1 = 0x18;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x100961230 | FUN_100961230 */

long FUN_100961230(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0xa8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100961240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x10096124c | FUN_10096124c */

long FUN_10096124c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0xb8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010096125c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x100961268 | FUN_100961268 */

long FUN_100961268(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0xc0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100961278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x100961284 | FUN_100961284 */

undefined8 FUN_100961284(long param_1)

{
  bool bVar1;
  
  if (((*(ushort *)(param_1 + 0x52) ^ 0xffff) & 0x14) == 0) {
    bVar1 = true;
    if (*(char *)(param_1 + 0x48) != '\x01') {
      bVar1 = *(short *)(param_1 + 0x54) == 0x65;
    }
  }
  else {
    bVar1 = *(char *)(param_1 + 0x49) == '\x05';
  }
  *(bool *)(param_1 + 0x50) = bVar1;
  return 0;
}



/* Address: 0x1009612c4 | FUN_1009612c4 */

undefined4 FUN_1009612c4(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x52);
  if ((uVar1 >> 3 & 1) == 0) {
    bVar3 = *(long *)(param_1 + 0x40) != 0;
  }
  else {
    bVar3 = true;
  }
  if ((*(char *)(param_1 + 0x50) == '\0') ||
     ((*(char *)(param_1 + 0x49) != '\x05' && ((bool)((uVar1 & 0x40) == 0 & bVar3))))) {
    if (*(char *)(param_1 + 0x48) == '\x02') {
      uVar2 = *(ushort *)(param_1 + 0x54);
      if (uVar2 == 0x65) goto LAB_100961320;
      if ((uVar1 >> 6 & 1) != 0) {
        return 0;
      }
      if (uVar2 == 100) {
        return 0;
      }
      uVar5 = (uint)uVar2;
      if (uVar5 - 0x66 < 2) {
        return 0;
      }
      if (uVar5 == 0xcc) {
        return 0;
      }
      if (uVar5 == 0x130) {
        return 0;
      }
    }
    else if ((uVar1 >> 6 & 1) != 0) {
      return 0;
    }
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 >> 9 & 1) == 0) {
        if ((uVar1 >> 5 & 1) == 0) {
          FUN_1009613dc();
          uVar4 = 0;
          if ((int)param_1 != 0) {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 0;
          if (*(long *)(param_1 + 0x40) != 0) {
            uVar4 = 3;
          }
        }
      }
      else if ((*(char *)(param_1 + 0x48) == '\x01') && ((*(ushort *)(param_1 + 0x4e) & 10) == 0)) {
        uVar4 = 5;
      }
      else {
        uVar4 = 4;
      }
    }
    else {
      uVar4 = 2;
    }
  }
  else {
LAB_100961320:
    uVar4 = 1;
  }
  return uVar4;
}



/* Address: 0x10096133c | FUN_10096133c */

undefined4 FUN_10096133c(int param_1)

{
  undefined4 uVar1;
  
  FUN_1009613dc();
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Address: 0x1009613dc | FUN_1009613dc */

bool FUN_1009613dc(long param_1)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  
  if ((*(char *)(param_1 + 0x48) == '\x01') ||
     (sVar1 = *(short *)(param_1 + 0x54), (ushort)(sVar1 - 100U) < 100)) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if ((sVar1 != 0xcc) && (sVar1 != 0x130)) {
      uVar2 = *(ushort *)(param_1 + 0x52);
      bVar3 = (uVar2 & 0x40) == 0 && ((uVar2 & 0x208) == 0x200 || (uVar2 & 0x28) == 0);
    }
  }
  return bVar3;
}



/* Address: 0x100961450 | FUN_100961450 */

void FUN_100961450(long param_1)

{
  FUN_100961478();
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  return;
}



/* Address: 0x100961478 | FUN_100961478 */

uint FUN_100961478(long param_1)

{
  if ((*(char *)(param_1 + 0x4a) == '\0') || (*(char *)(param_1 + 0x4b) == '\0')) {
    if ((*(ushort *)(param_1 + 0x52) & 1) != 0) goto LAB_1009614a0;
  }
  else if ((*(ushort *)(param_1 + 0x52) >> 1 & 1) == 0) {
LAB_1009614a0:
    FUN_1009613dc();
    return (uint)param_1 ^ 1;
  }
  return 0;
}



/* Address: 0x1009614b8 | FUN_1009614b8 */

undefined8 FUN_1009614b8(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[7] = 0xfd;
  return 0;
}



/* Address: 0x1009614d8 | FUN_1009614d8 */

void FUN_1009614d8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 8) != 0) {
      *(undefined8 *)(param_1 + 8) = param_2;
    }
    uVar1 = param_1;
    FUN_10096155c(param_1,param_2,param_3);
    if ((int)uVar1 != 0) {
      *(ulong *)(param_1 + 0x38) = uVar1 & 0xffffffff;
      if (*(long *)(param_1 + 8) != 0) {
        uVar1 = param_1;
        (**(code **)(param_1 + 0x10))(param_1,*(long *)(param_1 + 8),param_3);
        if ((int)uVar1 != 0) {
          *(int *)(param_1 + 0x18) = (int)uVar1;
          *(undefined8 *)(param_1 + 0x28) = param_3;
        }
      }
    }
  }
  return;
}



/* Address: 0x10096155c | FUN_10096155c */

void FUN_10096155c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100961594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100961598 +
            (ulong)*(ushort *)(&DAT_100c869b2 + (ulong)(*(int *)(param_1 + 0x38) - 1) * 2) * 4))();
  return;
}



/* Address: 0x100965f04 | FUN_100965f04 */

undefined4 FUN_100965f04(uint *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 in_w8;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = *param_1;
  uVar3 = uVar4;
  if (param_2 == param_3) {
    in_w8 = 1;
  }
  else {
    do {
      bVar2 = *param_2;
      uVar6 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar6 = (uint)bVar2;
      }
      uVar4 = uVar3 + 1;
      uVar1 = 0;
      if (uVar4 != param_5) {
        uVar1 = in_w8;
      }
      iVar5 = 5;
      if (uVar4 != param_5) {
        iVar5 = 0;
      }
      in_w8 = uVar1;
      if (uVar6 != *(byte *)(param_4 + (ulong)uVar3)) {
        in_w8 = 2;
        iVar5 = 5;
      }
      if (iVar5 != 0) {
        if (iVar5 != 5) {
          return in_w8;
        }
        uVar4 = 0;
        goto LAB_100965f84;
      }
      if (uVar6 != *(byte *)(param_4 + (ulong)uVar3)) {
        uVar4 = uVar3;
      }
      param_2 = param_2 + 1;
      uVar3 = uVar4;
    } while (param_2 != param_3);
    in_w8 = 1;
  }
LAB_100965f84:
  *param_1 = uVar4;
  return in_w8;
}



/* Address: 0x100965f90 | FUN_100965f90 */

undefined4 FUN_100965f90(uint *param_1,char *param_2,char *param_3,long param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 in_w8;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *param_1;
  uVar2 = uVar3;
  if (param_2 == param_3) {
    in_w8 = 1;
  }
  else {
    do {
      uVar3 = uVar2 + 1;
      uVar1 = 0;
      if (uVar3 != param_5) {
        uVar1 = in_w8;
      }
      iVar4 = 5;
      if (uVar3 != param_5) {
        iVar4 = 0;
      }
      in_w8 = uVar1;
      if (*param_2 != *(char *)(param_4 + (ulong)uVar2)) {
        in_w8 = 2;
        iVar4 = 5;
      }
      if (iVar4 != 0) {
        if (iVar4 != 5) {
          return in_w8;
        }
        uVar3 = 0;
        goto LAB_100966000;
      }
      if (*param_2 != *(char *)(param_4 + (ulong)uVar2)) {
        uVar3 = uVar2;
      }
      param_2 = param_2 + 1;
      uVar2 = uVar3;
    } while (param_2 != param_3);
    in_w8 = 1;
  }
LAB_100966000:
  *param_1 = uVar3;
  return in_w8;
}



/* Address: 0x10096600c | FUN_10096600c */

void FUN_10096600c(char *param_1,long param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  String SVar2;
  bool bVar3;
  char *pcVar4;
  UnsafeMutablePointer<__sFILE> UVar5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  String SVar11;
  String SVar12;
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
  String SVar23;
  String separator;
  char *local_110;
  long lStack_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  short local_d0;
  char *local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [8];
  char *local_98;
  undefined1 *puStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  short local_58;
  byte local_56;
  
  _Var7.unknown = (undefined *)&local_110;
  _Var6.unknown = (undefined *)&local_98;
  FUN_100966410();
  if (local_56 < 2) {
    if (local_56 == 0) {
      lStack_e8 = lStack_70;
      local_f0 = local_78;
      lStack_d8 = lStack_60;
      lStack_e0 = local_68;
      local_d0 = local_58;
      lStack_108 = (long)puStack_90;
      local_110 = local_98;
      local_f8 = lStack_80;
      lStack_100 = local_88;
      local_c8 = (char *)0x206c656e6e616843;
      lStack_c0 = -0x12ffffdf9b9e9a8e;
      FUN_10065cab4();
      SVar12.bridgeObject = _Var6.unknown;
      SVar12.str = param_1;
      SVar18.bridgeObject = param_4;
      SVar18.str = param_3;
      Swift::String::append(SVar12,SVar18);
      _swift_bridgeObjectRelease(_Var6.unknown);
      lVar9 = lStack_c0;
      pcVar10 = local_c8;
      FUN_1005e70f4(&local_110);
    }
    else {
      local_110 = (char *)0x0;
      lStack_108 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x21,_Var6);
      _swift_bridgeObjectRelease(lStack_108);
      local_110 = (char *)0xd00000000000001f;
      lStack_108 = -0x7ffffffeff2495b0;
      bVar3 = ((ulong)local_98 & 1) == 0;
      pcVar10 = (char *)0x65757274;
      if (bVar3) {
        pcVar10 = (char *)0x65736c6166;
      }
      puVar1 = &DAT_e400000000000000;
      if (bVar3) {
        puVar1 = &DAT_e500000000000000;
      }
      SVar15.bridgeObject = puVar1;
      SVar15.str = pcVar10;
      SVar21.bridgeObject = param_4;
      SVar21.str = param_3;
      Swift::String::append(SVar15,SVar21);
      _swift_bridgeObjectRelease(puVar1);
      lVar9 = lStack_108;
      pcVar10 = local_110;
    }
  }
  else if (local_56 == 2) {
    FUN_100011080(&local_98);
    local_c8 = (char *)0x0;
    lStack_c0 = -0x2000000000000000;
    Swift::_StringGuts::grow(0x27,_Var7);
    SVar13.bridgeObject = (void *)0x8000000100db6a30;
    SVar13.str = (char *)0xd00000000000001b;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar13,SVar19);
    FUN_100004640(&local_110,local_f8);
    Swift::DefaultStringInterpolation::_appendInterpolation();
    SVar14.bridgeObject = (void *)0xea00000000006465;
    SVar14.str = (char *)0x7265676769727420;
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    Swift::String::append(SVar14,SVar20);
    lVar9 = lStack_c0;
    pcVar10 = local_c8;
    FUN_100004594(&local_110);
  }
  else if (local_56 == 3) {
    local_110 = (char *)0x0;
    lStack_108 = -0x2000000000000000;
    Swift::_StringGuts::grow(0x18,_Var6);
    SVar11.bridgeObject = (void *)0x8000000100db6a10;
    SVar11.str = (char *)0xd000000000000016;
    SVar17.bridgeObject = param_4;
    SVar17.str = param_3;
    Swift::String::append(SVar11,SVar17);
    _swift_getErrorValue(local_98,auStack_a0,&local_b8);
    Swift::DefaultStringInterpolation::_appendInterpolation(local_b8,uStack_b0);
    _swift_errorRelease(local_98);
    lVar9 = lStack_108;
    pcVar10 = local_110;
  }
  else if ((local_58 == 0) &&
          ((((local_68 == 0 && lStack_60 == 0) && (local_98 == (char *)0x0 && lStack_70 == 0)) &&
           ((local_78 == 0 && lStack_80 == 0) && local_88 == 0)) && puStack_90 == (undefined1 *)0x0)
          ) {
    lVar9 = -0x7ffffffeff249510;
    pcVar10 = (char *)0xd000000000000012;
  }
  else if ((local_58 == 0) &&
          ((local_98 == (char *)0x1 &&
           ((((local_68 == 0 && lStack_60 == 0) && lStack_70 == 0) &&
            ((local_78 == 0 && lStack_80 == 0) && local_88 == 0)) && puStack_90 == (undefined1 *)0x0
           )))) {
    lVar9 = -0x7ffffffeff249530;
    pcVar10 = (char *)0xd000000000000014;
  }
  else if ((local_58 == 0) &&
          ((local_98 == (char *)0x2 &&
           ((((local_68 == 0 && lStack_60 == 0) && lStack_70 == 0) &&
            ((local_78 == 0 && lStack_80 == 0) && local_88 == 0)) && puStack_90 == (undefined1 *)0x0
           )))) {
    lVar9 = -0x7ffffffeff249550;
    pcVar10 = (char *)0xd000000000000015;
  }
  else if ((local_58 == 0) &&
          ((local_98 == (char *)0x3 &&
           ((((local_68 == 0 && lStack_60 == 0) && lStack_70 == 0) &&
            ((local_78 == 0 && lStack_80 == 0) && local_88 == 0)) && puStack_90 == (undefined1 *)0x0
           )))) {
    lVar9 = -0x7ffffffeff249570;
    pcVar10 = (char *)0xd000000000000017;
  }
  else {
    lVar9 = -0x7ffffffeff249590;
    pcVar10 = (char *)0xd000000000000019;
  }
  pcVar4 = &DAT_100feee58;
  FUN_1000f7830(&DAT_100feee58,&DAT_100c87980);
  pcVar8 = (char *)0x7;
  _swift_allocObject();
  pcVar4[0x18] = '\x02';
  pcVar4[0x19] = '\0';
  pcVar4[0x1a] = '\0';
  pcVar4[0x1b] = '\0';
  pcVar4[0x1c] = '\0';
  pcVar4[0x1d] = '\0';
  pcVar4[0x1e] = '\0';
  pcVar4[0x1f] = '\0';
  pcVar4[0x10] = '\x01';
  pcVar4[0x11] = '\0';
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  pcVar4[0x14] = '\0';
  pcVar4[0x15] = '\0';
  pcVar4[0x16] = '\0';
  pcVar4[0x17] = '\0';
  local_98 = (char *)0x206e6920;
  puStack_90 = &DAT_e400000000000000;
  SVar22.bridgeObject = param_4;
  SVar22.str = pcVar8;
  Swift::String::append(*(String *)(param_2 + 0x28),SVar22);
  puVar1 = puStack_90;
  SVar2.bridgeObject = puStack_90;
  SVar2.str = local_98;
  local_98 = pcVar10;
  puStack_90 = (undefined1 *)lVar9;
  _swift_bridgeObjectRetain(lVar9);
  SVar23.bridgeObject = param_4;
  SVar23.str = pcVar8;
  Swift::String::append(SVar2,SVar23);
  _swift_bridgeObjectRelease(lVar9);
  _swift_bridgeObjectRelease(puVar1);
  *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(char **)(pcVar4 + 0x20) = local_98;
  *(undefined1 **)(pcVar4 + 0x28) = puStack_90;
  SVar16.bridgeObject = (void *)0x20;
  SVar16.str = pcVar4;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar16,separator);
  _swift_release(pcVar4);
  UVar5 = Darwin::get_stdout();
  _fflush((FILE *)UVar5.unknown);
  return;
}



/* Address: 0x100966410 | FUN_100966410 */

undefined8 FUN_100966410(undefined8 param_1,undefined8 param_2)

{
  FUN_1009669bc(param_2,param_1,&DAT_100f1c5d0);
  return param_2;
}



/* Address: 0x100966444 | FUN_100966444 */

void FUN_100966444(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x100966450 | FUN_100966450 */

void FUN_100966450(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined1 local_3e;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_3e = 4;
  _swift_retain(uVar2);
  (*pcVar1)(&local_80,param_1);
  _swift_release(uVar2);
  FUN_100966788(&local_80);
  FUN_100627dec();
  return;
}



/* Address: 0x1009664c4 | FUN_1009664c4 */

void FUN_1009664c4(undefined8 param_1)

{
  FUN_100966578(param_1,1,FUN_100627df8);
  return;
}



/* Address: 0x1009664d4 | FUN_1009664d4 */

void FUN_1009664d4(undefined8 param_1)

{
  FUN_100966578(param_1,2,FUN_100626b80);
  return;
}



/* Address: 0x1009664e4 | FUN_1009664e4 */

void FUN_1009664e4(undefined8 param_1)

{
  FUN_100966578(param_1,3,FUN_100626b8c);
  return;
}



/* Address: 0x1009664f4 | FUN_1009664f4 */

void FUN_1009664f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [66];
  undefined1 local_36;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1005e650c(param_2,auStack_78);
  local_36 = 0;
  _swift_retain(uVar2);
  (*pcVar1)(auStack_78,param_1);
  _swift_release(uVar2);
  FUN_100966788(auStack_78);
  FUN_100626ce0(param_2);
  return;
}



/* Address: 0x100966568 | FUN_100966568 */

void FUN_100966568(undefined8 param_1)

{
  FUN_100966578(param_1,4,FUN_100626d4c);
  return;
}



/* Address: 0x100966578 | FUN_100966578 */

void FUN_100966578(undefined8 param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  undefined1 local_36;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_3e = 0;
  uStack_46 = 0;
  uStack_40 = 0;
  local_36 = 4;
  local_78 = param_2;
  _swift_retain(uVar2);
  (*pcVar1)(&local_78,param_1);
  _swift_release(uVar2);
  FUN_100966788(&local_78);
  (*param_3)();
  return;
}



/* Address: 0x1009665f4 | FUN_1009665f4 */

void FUN_1009665f4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  long unaff_x20;
  byte local_88 [66];
  undefined1 local_46;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = uVar2;
  _swift_retain();
  FUN_100627f08();
  uVar5 = uVar4;
  _swift_getObjectType();
  bVar3 = (byte)uVar5;
  (**(code **)(param_2 + 0x58))();
  _swift_unknownObjectRelease(uVar4);
  local_88[0] = bVar3 & 1;
  local_46 = 1;
  (*pcVar1)(local_88,param_1);
  _swift_release(uVar2);
  FUN_100966788(local_88);
  FUN_100626c90();
  return;
}



/* Address: 0x100966698 | FUN_100966698 */

void FUN_100966698(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [66];
  undefined1 local_36;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10000cbfc(param_2,auStack_78);
  local_36 = 2;
  _swift_retain(uVar2);
  (*pcVar1)(auStack_78,param_1);
  _swift_release(uVar2);
  FUN_100966788(auStack_78);
  FUN_100626b98(param_2);
  return;
}



/* Address: 0x100966710 | FUN_100966710 */

void FUN_100966710(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 local_78 [8];
  undefined1 local_36;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  local_36 = 3;
  local_78[0] = param_2;
  _swift_retain(uVar2);
  _swift_errorRetain(param_2);
  (*pcVar1)(local_78,param_1);
  _swift_release(uVar2);
  FUN_100966788(local_78);
  FUN_100626c9c(param_2);
  return;
}



/* Address: 0x100966788 | FUN_100966788 */

undefined8 FUN_100966788(undefined8 param_1)

{
  FUN_1009668dc(param_1,&DAT_100f1c5d0);
  return param_1;
}



/* Address: 0x1009667b4 | FUN_1009667b4 */

void FUN_1009667b4(void)

{
  FUN_100973a80(PTR___type_metadata_for_Any_100eae0c0 + 8);
  return;
}



/* Address: 0x1009667e0 | FUN_1009667e0 */

void FUN_1009667e0(void)

{
  FUN_100966820();
  return;
}



/* Address: 0x1009667f0 | FUN_1009667f0 */

void FUN_1009667f0(void)

{
  FUN_100966820();
  return;
}



/* Address: 0x100966800 | FUN_100966800 */

void FUN_100966800(void)

{
  FUN_100966820();
  return;
}



/* Address: 0x100966810 | FUN_100966810 */

void FUN_100966810(void)

{
  FUN_100966820();
  return;
}



/* Address: 0x100966820 | FUN_100966820 */

void FUN_100966820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  undefined1 local_36;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_3e = 0;
  uStack_46 = 0;
  uStack_40 = 0;
  local_36 = 4;
  local_78 = param_4;
  _swift_retain(uVar2);
  (*pcVar1)(&local_78,param_1);
  _swift_release(uVar2);
  FUN_100966788(&local_78);
  (*param_5)();
  return;
}



/* Address: 0x10096689c | thunk_FUN_1009665f4 */

void thunk_FUN_1009665f4(void)

{
  FUN_1009665f4();
  return;
}



/* Address: 0x1009668a0 | FUN_1009668a0 */

undefined8 FUN_1009668a0(void)

{
  return 0xc000000000000000;
}



/* Address: 0x1009668b0 | FUN_1009668b0 */

undefined8 FUN_1009668b0(void)

{
  return 0xffd7;
}



/* Address: 0x1009668b8 | _dispatch_group_create */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_group_t _dispatch_group_create(void)

{
  dispatch_group_t pdVar1;
  
  pdVar1 = _dispatch_group_create();
  return pdVar1;
}



/* Address: 0x1009668bc | FUN_1009668bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1009668bc(void)

{
  return ZEXT816(0x100feeef0);
}



/* Address: 0x1009668dc | FUN_1009668dc */

void FUN_1009668dc(ulong *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((long)param_1 + 0x42);
  if (3 < *(byte *)((long)param_1 + 0x42)) {
    uVar2 = (int)*param_1 + 4;
  }
  if (uVar2 == 3) {
    _swift_errorRelease(*param_1);
    return;
  }
  if (uVar2 != 2) {
    if (uVar2 == 0) {
      cVar1 = *(char *)((long)param_1 + 0x41);
      if (cVar1 == '\x02') goto LAB_100966950;
      if (cVar1 == '\x01') {
        _swift_release(*param_1 & 0x3fffffffffffffff);
        _swift_release(param_1[1]);
        if (((char)param_1[4] != '\x04') &&
           (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
          _swift_release(param_1[5] & 0x3fffffffffffffff);
          return;
        }
      }
      else if (cVar1 == '\0') {
        FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
        return;
      }
    }
    return;
  }
LAB_100966950:
  FUN_100004594();
  return;
}



/* Address: 0x1009669bc | FUN_1009669bc */

ulong * FUN_1009669bc(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = (uint)*(byte *)((long)param_2 + 0x42);
  if (3 < *(byte *)((long)param_2 + 0x42)) {
    uVar5 = (int)*param_2 + 4;
  }
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      cVar2 = *(char *)((long)param_2 + 0x41);
      if (cVar2 == '\x02') {
        uVar7 = param_2[3];
        param_1[3] = uVar7;
        (*(code *)**(undefined8 **)(uVar7 - 8))();
      }
      else if (cVar2 == '\x01') {
        uVar7 = *param_2;
        uVar6 = param_2[1];
        *param_1 = uVar7;
        param_1[1] = uVar6;
        param_1[2] = param_2[2];
        *(int *)(param_1 + 3) = (int)param_2[3];
        *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
        cVar1 = (char)param_2[4];
        _swift_retain(uVar7 & 0x3fffffffffffffff);
        _swift_retain(uVar6);
        if (cVar1 == '\x04') {
          uVar7 = param_2[4];
          uVar8 = param_2[7];
          uVar6 = param_2[6];
          param_1[5] = param_2[5];
          param_1[4] = uVar7;
          param_1[7] = uVar8;
          param_1[6] = uVar6;
          *(char *)(param_1 + 8) = (char)param_2[8];
        }
        else {
          *(char *)(param_1 + 4) = cVar1;
          uVar7 = param_2[5];
          if (((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
            uVar7 = param_2[5];
            param_1[6] = param_2[6];
            param_1[5] = uVar7;
          }
          else {
            uVar6 = param_2[6];
            param_1[5] = uVar7;
            param_1[6] = uVar6;
            _swift_retain(uVar7 & 0x3fffffffffffffff);
          }
          param_1[7] = param_2[7];
          *(char *)(param_1 + 8) = (char)param_2[8];
        }
      }
      else {
        uVar7 = *param_2;
        uVar6 = param_2[1];
        uVar8 = param_2[2];
        uVar3 = *(undefined1 *)((long)param_2 + 0x16);
        uVar4 = *(undefined3 *)((long)param_2 + 0x14);
        FUN_100656200(uVar7,uVar6,(ulong)(uint7)param_2[2]);
        *param_1 = uVar7;
        param_1[1] = uVar6;
        *(undefined1 *)((long)param_1 + 0x16) = uVar3;
        *(short *)((long)param_1 + 0x14) = (short)uVar4;
        *(int *)(param_1 + 2) = (int)uVar8;
      }
      *(char *)((long)param_1 + 0x41) = cVar2;
      *(undefined1 *)((long)param_1 + 0x42) = 0;
      return param_1;
    }
    if (uVar5 == 1) {
      *(char *)param_1 = (char)*param_2;
      *(undefined1 *)((long)param_1 + 0x42) = 1;
      return param_1;
    }
  }
  else {
    if (uVar5 == 2) {
      uVar7 = param_2[3];
      param_1[3] = uVar7;
      (*(code *)**(undefined8 **)(uVar7 - 8))();
      *(undefined1 *)((long)param_1 + 0x42) = 2;
      return param_1;
    }
    if (uVar5 == 3) {
      uVar7 = *param_2;
      _swift_errorRetain(uVar7);
      *param_1 = uVar7;
      *(undefined1 *)((long)param_1 + 0x42) = 3;
      return param_1;
    }
  }
  uVar7 = param_2[4];
  uVar8 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar8;
  param_1[6] = uVar6;
  *(undefined4 *)((long)param_1 + 0x3f) = *(undefined4 *)((long)param_2 + 0x3f);
  uVar8 = *param_2;
  uVar6 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar6;
  param_1[2] = uVar7;
  return param_1;
}



/* Address: 0x100966bd0 | FUN_100966bd0 */

ulong * FUN_100966bd0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar5 = (uint)*(byte *)((long)param_1 + 0x42);
  if (3 < *(byte *)((long)param_1 + 0x42)) {
    uVar5 = (int)*param_1 + 4;
  }
  if (uVar5 == 3) {
    _swift_errorRelease(*param_1);
    goto LAB_100966c6c;
  }
  if (uVar5 != 2) {
    if (uVar5 != 0) goto LAB_100966c6c;
    cVar2 = *(char *)((long)param_1 + 0x41);
    if (cVar2 != '\x02') {
      if (cVar2 == '\x01') {
        _swift_release(*param_1 & 0x3fffffffffffffff);
        _swift_release(param_1[1]);
        if (((char)param_1[4] != '\x04') &&
           (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
          _swift_release(param_1[5] & 0x3fffffffffffffff);
        }
      }
      else if (cVar2 == '\0') {
        FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
      }
      goto LAB_100966c6c;
    }
  }
  FUN_100004594(param_1);
LAB_100966c6c:
  uVar5 = (uint)*(byte *)((long)param_2 + 0x42);
  if (3 < *(byte *)((long)param_2 + 0x42)) {
    uVar5 = (int)*param_2 + 4;
  }
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      cVar2 = *(char *)((long)param_2 + 0x41);
      if (cVar2 == '\x02') {
        uVar7 = param_2[3];
        param_1[3] = uVar7;
        (*(code *)**(undefined8 **)(uVar7 - 8))(param_1,param_2);
      }
      else if (cVar2 == '\x01') {
        uVar6 = *param_2;
        *param_1 = uVar6;
        uVar8 = param_2[1];
        param_1[1] = uVar8;
        *(int *)(param_1 + 2) = (int)param_2[2];
        *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
        uVar7 = param_2[3];
        *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
        *(int *)(param_1 + 3) = (int)uVar7;
        cVar1 = (char)param_2[4];
        _swift_retain(uVar6 & 0x3fffffffffffffff);
        _swift_retain(uVar8);
        if (cVar1 == '\x04') {
          uVar6 = param_2[5];
          uVar7 = param_2[4];
          uVar9 = param_2[7];
          uVar8 = param_2[6];
          *(char *)(param_1 + 8) = (char)param_2[8];
          param_1[5] = uVar6;
          param_1[4] = uVar7;
          param_1[7] = uVar9;
          param_1[6] = uVar8;
        }
        else {
          *(char *)(param_1 + 4) = cVar1;
          uVar7 = param_2[5];
          if (((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
            uVar7 = param_2[5];
            param_1[6] = param_2[6];
            param_1[5] = uVar7;
          }
          else {
            param_1[5] = uVar7;
            param_1[6] = param_2[6];
            _swift_retain(uVar7 & 0x3fffffffffffffff);
          }
          uVar7 = param_2[7];
          *(char *)(param_1 + 8) = (char)param_2[8];
          param_1[7] = uVar7;
        }
      }
      else {
        uVar7 = *param_2;
        uVar6 = param_2[1];
        uVar8 = param_2[2];
        uVar3 = *(undefined1 *)((long)param_2 + 0x16);
        uVar4 = *(undefined3 *)((long)param_2 + 0x14);
        FUN_100656200(uVar7,uVar6,(ulong)(uint7)param_2[2]);
        *param_1 = uVar7;
        param_1[1] = uVar6;
        *(undefined1 *)((long)param_1 + 0x16) = uVar3;
        *(short *)((long)param_1 + 0x14) = (short)uVar4;
        *(int *)(param_1 + 2) = (int)uVar8;
      }
      *(char *)((long)param_1 + 0x41) = cVar2;
      *(undefined1 *)((long)param_1 + 0x42) = 0;
      return param_1;
    }
    if (uVar5 == 1) {
      *(char *)param_1 = (char)*param_2;
      *(undefined1 *)((long)param_1 + 0x42) = 1;
      return param_1;
    }
  }
  else {
    if (uVar5 == 2) {
      uVar7 = param_2[3];
      param_1[3] = uVar7;
      (*(code *)**(undefined8 **)(uVar7 - 8))(param_1,param_2);
      *(undefined1 *)((long)param_1 + 0x42) = 2;
      return param_1;
    }
    if (uVar5 == 3) {
      uVar7 = *param_2;
      _swift_errorRetain(uVar7);
      *param_1 = uVar7;
      *(undefined1 *)((long)param_1 + 0x42) = 3;
      return param_1;
    }
  }
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  uVar6 = param_2[3];
  uVar7 = param_2[2];
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  *(undefined4 *)((long)param_1 + 0x3f) = *(undefined4 *)((long)param_2 + 0x3f);
  param_1[5] = uVar9;
  param_1[4] = uVar8;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  param_1[3] = uVar6;
  param_1[2] = uVar7;
  return param_1;
}



/* Address: 0x100966e98 | FUN_100966e98 */

void FUN_100966e98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined4 *)((long)param_1 + 0x3f) = *(undefined4 *)((long)param_2 + 0x3f);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100966ebc | FUN_100966ebc */

void FUN_100966ebc(ulong *param_1,ulong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 == param_2) {
    return;
  }
  uVar3 = (uint)*(byte *)((long)param_1 + 0x42);
  if (3 < *(byte *)((long)param_1 + 0x42)) {
    uVar3 = (int)*param_1 + 4;
  }
  if (uVar3 == 3) {
    _swift_errorRelease(*param_1);
  }
  else if (uVar3 == 2) {
LAB_100966f3c:
    FUN_100004594();
  }
  else if (uVar3 == 0) {
    cVar1 = *(char *)((long)param_1 + 0x41);
    if (cVar1 == '\x02') goto LAB_100966f3c;
    if (cVar1 == '\x01') {
      _swift_release(*param_1 & 0x3fffffffffffffff);
      _swift_release(param_1[1]);
      if (((char)param_1[4] != '\x04') &&
         (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
        _swift_release(param_1[5] & 0x3fffffffffffffff);
      }
    }
    else if (cVar1 == '\0') {
      FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
    }
  }
  uVar3 = (uint)*(byte *)((long)param_2 + 0x42);
  if (3 < *(byte *)((long)param_2 + 0x42)) {
    uVar3 = (int)*param_2 + 4;
  }
  if ((int)uVar3 < 2) {
    if (uVar3 == 0) {
      uVar4 = param_2[4];
      uVar6 = param_2[7];
      uVar5 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      param_1[7] = uVar6;
      param_1[6] = uVar5;
      *(short *)(param_1 + 8) = (short)param_2[8];
      uVar6 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      *(undefined1 *)((long)param_1 + 0x42) = 0;
      return;
    }
    if (uVar3 != 1) {
LAB_100966fb4:
      uVar4 = param_2[4];
      uVar6 = param_2[7];
      uVar5 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      param_1[7] = uVar6;
      param_1[6] = uVar5;
      *(undefined4 *)((long)param_1 + 0x3f) = *(undefined4 *)((long)param_2 + 0x3f);
      uVar6 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      return;
    }
    *(char *)param_1 = (char)*param_2;
    uVar2 = 1;
  }
  else if (uVar3 == 2) {
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar2 = 2;
  }
  else {
    if (uVar3 != 3) goto LAB_100966fb4;
    *param_1 = *param_2;
    uVar2 = 3;
  }
  *(undefined1 *)((long)param_1 + 0x42) = uVar2;
  return;
}



/* Address: 0x10096704c | FUN_10096704c */

int FUN_10096704c(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x43) != '\0')) {
    return *param_1 + 0xfc;
  }
  iVar1 = 0;
  if (4 < *(byte *)((long)param_1 + 0x42)) {
    iVar1 = (*(byte *)((long)param_1 + 0x42) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x100967088 | FUN_100967088 */

void FUN_100967088(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfc) {
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x43) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x42) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x3f) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xfc;
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x43) = 1;
    }
  }
  return;
}



/* Address: 0x1009670d8 | FUN_1009670d8 */

uint FUN_1009670d8(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((long)param_1 + 0x42);
  if (3 < *(byte *)((long)param_1 + 0x42)) {
    uVar1 = *param_1 + 4;
  }
  return uVar1;
}



/* Address: 0x1009670f4 | FUN_1009670f4 */

void FUN_1009670f4(int *param_1,uint param_2)

{
  if (3 < param_2) {
    *(undefined2 *)(param_1 + 0x10) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 4;
    param_2 = 4;
  }
  *(char *)((long)param_1 + 0x42) = (char)param_2;
  return;
}



/* Address: 0x100967120 | FUN_100967120 */

undefined1  [16] FUN_100967120(void)

{
  return ZEXT816(0x100f1c5d0);
}



/* Address: 0x100967130 | FUN_100967130 */

void FUN_100967130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x10096713c | FUN_10096713c */

void FUN_10096713c(void)

{
  return;
}



/* Address: 0x100967140 | FUN_100967140 */

void FUN_100967140(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100feefb0 != 0) {
    return;
  }
  puVar1 = &DAT_100f1c648;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100feefb0 = param_1;
  return;
}



/* Address: 0x100967190 | FUN_100967190 */

void FUN_100967190(char *param_1,long param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined1 *puVar2;
  char *pcVar3;
  UnsafeMutablePointer<__sFILE> UVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  char *pcVar7;
  undefined1 *puVar8;
  char *pcVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String separator;
  String SVar21;
  String SVar22;
  String SVar23;
  String separator_00;
  char *local_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  short local_a0;
  char *local_98;
  undefined1 *puStack_90;
  char *local_88;
  undefined1 *puStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  short local_48;
  byte local_46;
  
  _Var6.unknown = (undefined *)&local_e0;
  _Var5.unknown = (undefined *)&local_88;
  FUN_10096755c();
  if (local_46 < 3) {
    if (local_46 == 0) {
      local_e0 = (char *)0x20676e69646e6942;
      puStack_d8 = (undefined1 *)0xeb00000000206f74;
    }
    else {
      if (local_46 != 1) {
        lStack_b8 = lStack_60;
        local_c0 = local_68;
        lStack_a8 = lStack_50;
        lStack_b0 = local_58;
        local_a0 = local_48;
        puStack_d8 = puStack_80;
        local_e0 = local_88;
        local_c8 = lStack_70;
        lStack_d0 = local_78;
        local_98 = (char *)0x20676e6974697257;
        puStack_90 = &DAT_e800000000000000;
        FUN_10065cab4();
        SVar15.bridgeObject = _Var5.unknown;
        SVar15.str = param_1;
        SVar21.bridgeObject = param_4;
        SVar21.str = param_3;
        Swift::String::append(SVar15,SVar21);
        _swift_bridgeObjectRelease(_Var5.unknown);
        puVar8 = puStack_90;
        pcVar9 = local_98;
        FUN_1005e70f4(&local_e0);
        goto LAB_10096748c;
      }
      local_e0 = (char *)0x0;
      puStack_d8 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x10,_Var5);
      _swift_bridgeObjectRelease(puStack_d8);
      local_e0 = (char *)0x697463656e6e6f43;
      puStack_d8 = (undefined1 *)0xee00206f7420676e;
    }
    pcVar9 = local_88;
    FUN_100666bcc();
    SVar12.bridgeObject = _Var5.unknown;
    SVar12.str = pcVar9;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar12,SVar19);
    _swift_bridgeObjectRelease(_Var5.unknown);
    _swift_release((ulong)local_88 & 0x3fffffffffffffff);
    puVar8 = puStack_d8;
    pcVar9 = local_e0;
  }
  else if (local_46 == 3) {
    local_e0 = (char *)0x0;
    puStack_d8 = (undefined1 *)0xe000000000000000;
    Swift::_StringGuts::grow(0x14,_Var5);
    SVar13.bridgeObject = (void *)0x8000000100db6b40;
    SVar13.str = (char *)0xd000000000000012;
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    Swift::String::append(SVar13,SVar20);
    local_98 = (char *)CONCAT71(local_98._1_7_,(char)local_88);
    Swift::__print_unlocked
              (&local_98,&local_e0,&DAT_100eec698,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    puVar8 = puStack_d8;
    pcVar9 = local_e0;
    SVar14.bridgeObject = (void *)0x20;
    SVar14.str = PTR___swiftEmptyArrayStorage_100eae0d8;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    param_4 = (void *)0xa;
    Swift::_print(SVar14,separator);
  }
  else if (local_46 == 4) {
    FUN_100011080(&local_88);
    local_98 = (char *)0x0;
    puStack_90 = (undefined1 *)0xe000000000000000;
    Swift::_StringGuts::grow(0x26,_Var6);
    SVar10.bridgeObject = (void *)0x8000000100db6b10;
    SVar10.str = (char *)0xd000000000000022;
    SVar17.bridgeObject = param_4;
    SVar17.str = param_3;
    Swift::String::append(SVar10,SVar17);
    FUN_100004640(&local_e0,local_c8);
    Swift::DefaultStringInterpolation::_appendInterpolation();
    SVar11.bridgeObject = &SUB_e200000000000000;
    SVar11.str = (char *)0x7d20;
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar11,SVar18);
    puVar8 = puStack_90;
    pcVar9 = local_98;
    FUN_100004594(&local_e0);
  }
  else if ((local_48 == 0) &&
          ((((local_58 == 0 && lStack_50 == 0) && (local_88 == (char *)0x0 && lStack_60 == 0)) &&
           ((local_68 == 0 && lStack_70 == 0) && local_78 == 0)) && puStack_80 == (undefined1 *)0x0)
          ) {
    puVar8 = (undefined1 *)0x8000000100db6b60;
    pcVar9 = (char *)0xd000000000000013;
  }
  else {
    pcVar9 = (char *)0x676e696873756c46;
    if (local_48 != 0 ||
        (local_88 != &DAT_00000001 ||
        ((((local_58 != 0 || lStack_50 != 0) || lStack_60 != 0) ||
         ((local_68 != 0 || lStack_70 != 0) || local_78 != 0)) || puStack_80 != (undefined1 *)0x0)))
    {
      pcVar9 = (char *)0x676e6964616552;
    }
    puVar8 = &DAT_e800000000000000;
    if (local_48 != 0 ||
        (local_88 != &DAT_00000001 ||
        ((((local_58 != 0 || lStack_50 != 0) || lStack_60 != 0) ||
         ((local_68 != 0 || lStack_70 != 0) || local_78 != 0)) || puStack_80 != (undefined1 *)0x0)))
    {
      puVar8 = &DAT_e700000000000000;
    }
  }
LAB_10096748c:
  pcVar3 = &DAT_100feee58;
  FUN_1000f7830(&DAT_100feee58,&DAT_100c87980);
  pcVar7 = (char *)0x7;
  _swift_allocObject();
  pcVar3[0x18] = '\x02';
  pcVar3[0x19] = '\0';
  pcVar3[0x1a] = '\0';
  pcVar3[0x1b] = '\0';
  pcVar3[0x1c] = '\0';
  pcVar3[0x1d] = '\0';
  pcVar3[0x1e] = '\0';
  pcVar3[0x1f] = '\0';
  pcVar3[0x10] = '\x01';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  local_88 = (char *)0x206e6920;
  puStack_80 = &DAT_e400000000000000;
  SVar22.bridgeObject = param_4;
  SVar22.str = pcVar7;
  Swift::String::append(*(String *)(param_2 + 0x28),SVar22);
  puVar2 = puStack_80;
  SVar1.bridgeObject = puStack_80;
  SVar1.str = local_88;
  local_88 = pcVar9;
  puStack_80 = puVar8;
  _swift_bridgeObjectRetain(puVar8);
  SVar23.bridgeObject = param_4;
  SVar23.str = pcVar7;
  Swift::String::append(SVar1,SVar23);
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(puVar2);
  *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(char **)(pcVar3 + 0x20) = local_88;
  *(undefined1 **)(pcVar3 + 0x28) = puStack_80;
  SVar16.bridgeObject = (void *)0x20;
  SVar16.str = pcVar3;
  separator_00.bridgeObject = (void *)0xa;
  separator_00.str = (char *)0xe100000000000000;
  Swift::_print(SVar16,separator_00);
  _swift_release(pcVar3);
  UVar4 = Darwin::get_stdout();
  _fflush((FILE *)UVar4.unknown);
  return;
}



/* Address: 0x10096755c | FUN_10096755c */

undefined8 FUN_10096755c(undefined8 param_1,undefined8 param_2)

{
  FUN_100967b8c(param_2,param_1,&DAT_100f1c768);
  return param_2;
}



/* Address: 0x100967590 | FUN_100967590 */

void FUN_100967590(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined1 local_3e;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_3e = 5;
  _swift_retain(uVar2);
  (*pcVar1)(&local_80,param_1);
  _swift_release(uVar2);
  FUN_10096760c(&local_80);
  FUN_1006279a4(param_2);
  return;
}



/* Address: 0x10096760c | FUN_10096760c */

undefined8 FUN_10096760c(undefined8 param_1)

{
  FUN_100967aa8(param_1,&DAT_100f1c768);
  return param_1;
}



/* Address: 0x100967638 | FUN_100967638 */

void FUN_100967638(void)

{
  FUN_100967658();
  return;
}



/* Address: 0x100967648 | FUN_100967648 */

void FUN_100967648(void)

{
  FUN_100967658();
  return;
}



/* Address: 0x100967658 | FUN_100967658 */

void FUN_100967658(undefined8 param_1,ulong param_2,undefined8 param_3,undefined1 param_4,
                  code *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong local_88 [8];
  undefined1 local_46;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  local_88[0] = param_2;
  local_46 = param_4;
  _swift_retain(param_2 & 0x3fffffffffffffff);
  _swift_retain(uVar2);
  (*pcVar1)(local_88,param_1);
  _swift_release(uVar2);
  FUN_10096760c(local_88);
  (*param_5)(param_2,param_3);
  return;
}



/* Address: 0x1009676e0 | FUN_1009676e0 */

void FUN_1009676e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_88 [66];
  undefined1 local_46;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1005e650c(param_2,auStack_88);
  local_46 = 2;
  _swift_retain(uVar2);
  (*pcVar1)(auStack_88,param_1);
  _swift_release(uVar2);
  FUN_10096760c(auStack_88);
  FUN_100626ebc(param_2,param_3);
  return;
}



/* Address: 0x100967768 | FUN_100967768 */

void FUN_100967768(undefined8 param_1)

{
  FUN_100967788(param_1,1,FUN_100626ed8);
  return;
}


