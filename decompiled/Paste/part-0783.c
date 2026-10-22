/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008a0994 | FUN_1008a0994 */

void FUN_1008a0994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  Swift::Hasher::init(0);
  HVar3.unknown = auStack_78;
  switchD_1008a045c::caseD_7e(HVar3.unknown,uVar1,uVar2,uVar4);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1008a09ec | FUN_1008a09ec */

void FUN_1008a09ec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  switchD_1008a045c::caseD_7e(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Address: 0x1008a09f8 | FUN_1008a09f8 */

void FUN_1008a09f8(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  Swift::Hasher::init(param_1);
  HVar3.unknown = auStack_78;
  switchD_1008a045c::caseD_7e(HVar3.unknown,uVar1,uVar2,uVar4);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1008a0a4c | FUN_1008a0a4c */

undefined1  [16] FUN_1008a0a4c(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  undefined *puVar6;
  String SVar7;
  String SVar8;
  String SVar9;
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
  undefined *local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined *local_50;
  undefined8 uStack_48;
  String separator;
  
  local_70 = (undefined *)0x0;
  pcStack_68 = (code *)0xe000000000000000;
  Swift::_StringGuts::grow(0x43,param_2);
  local_50 = local_70;
  uStack_48 = pcStack_68;
  SVar11.bridgeObject = (void *)0x8000000100db4310;
  SVar11.str = (char *)0xd00000000000001a;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar11,SVar13);
  pcStack_68 = *(code **)(param_1 + 0x18);
  local_70 = *(undefined **)(param_1 + 0x10);
  pcVar4 = "\x01\x02";
  puVar6 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_70,&local_50,&DAT_100f0abd8,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar7.bridgeObject = &DAT_e800000000000000;
  SVar7.str = (char *)0x22203a697275202c;
  SVar14.bridgeObject = puVar6;
  SVar14.str = pcVar4;
  Swift::String::append(SVar7,SVar14);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  SVar11 = *(String *)(param_1 + 0x20);
  _swift_bridgeObjectRetain(uVar1);
  SVar15.bridgeObject = puVar6;
  SVar15.str = pcVar4;
  Swift::String::append(SVar11,SVar15);
  _swift_bridgeObjectRelease(uVar1);
  pvVar5 = (void *)0xec000000203a6e6f;
  SVar8.bridgeObject = (void *)0xec000000203a6e6f;
  SVar8.str = (char *)0x6973726576202c22;
  SVar16.bridgeObject = puVar6;
  SVar16.str = pcVar4;
  Swift::String::append(SVar8,SVar16);
  pcVar3 = (char *)(ulong)*(uint *)(param_1 + 0x30);
  FUN_1008a0f48();
  SVar9.bridgeObject = pvVar5;
  SVar9.str = pcVar3;
  SVar17.bridgeObject = puVar6;
  SVar17.str = pcVar4;
  Swift::String::append(SVar9,SVar17);
  _swift_bridgeObjectRelease(pvVar5);
  SVar10.bridgeObject = (void *)0xeb00000000203a73;
  SVar10.str = (char *)0x726564616568202c;
  SVar18.bridgeObject = puVar6;
  SVar18.str = pcVar4;
  Swift::String::append(SVar10,SVar18);
  pcStack_68 = FUN_10089f610;
  local_60 = 0;
  local_70 = param_2.unknown;
  _swift_bridgeObjectRetain(param_2.unknown);
  pcVar4 = &DAT_100fe9fa0;
  FUN_1000f7830(&DAT_100fe9fa0,&BYTE_100c80f20);
  pcVar3 = pcVar4;
  FUN_1008a3bd0();
  separator.bridgeObject = &SUB_e200000000000000;
  separator.str = (char *)0x203b;
  SVar11 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(param_2.unknown);
  SVar19.bridgeObject = pcVar3;
  SVar19.str = pcVar4;
  Swift::String::append(SVar11,SVar19);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar12.bridgeObject = &SUB_e200000000000000;
  SVar12.str = (char *)0x7d20;
  SVar20.bridgeObject = pcVar3;
  SVar20.str = pcVar4;
  Swift::String::append(SVar12,SVar20);
  auVar2._8_8_ = uStack_48;
  auVar2._0_8_ = local_50;
  return auVar2;
}



/* Address: 0x1008a0c18 | FUN_1008a0c18 */

void FUN_1008a0c18(void)

{
  undefined8 *unaff_x20;
  
  FUN_1008a0a4c(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1008a0c20 | FUN_1008a0c20 */

String FUN_1008a0c20(char *param_1,void *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  pcVar1 = param_3;
  FUN_10089d3a8();
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x20;
  SVar5.bridgeObject = param_4;
  SVar5.str = pcVar1;
  Swift::String::append(SVar3,SVar5);
  FUN_10089d40c();
  SVar4.bridgeObject = param_2;
  SVar4.str = param_1;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar4,SVar6);
  _swift_bridgeObjectRelease(param_2);
  return SVar2;
}



/* Address: 0x1008a0cb0 | FUN_1008a0cb0 */

String FUN_1008a0cb0(void)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  void *in_x3;
  undefined8 *unaff_x20;
  char *pcVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  
  pcVar1 = (char *)*unaff_x20;
  pvVar2 = (void *)unaff_x20[1];
  pcVar4 = (char *)unaff_x20[2];
  pcVar3 = pcVar4;
  FUN_10089d3a8();
  SVar5 = Swift::CustomStringConvertible::get_description();
  SVar6.bridgeObject = (void *)0xe100000000000000;
  SVar6.str = (char *)0x20;
  SVar8.bridgeObject = in_x3;
  SVar8.str = pcVar3;
  Swift::String::append(SVar6,SVar8);
  FUN_10089d40c();
  SVar7.bridgeObject = pvVar2;
  SVar7.str = pcVar1;
  SVar9.bridgeObject = in_x3;
  SVar9.str = pcVar4;
  Swift::String::append(SVar7,SVar9);
  _swift_bridgeObjectRelease(pvVar2);
  return SVar5;
}



/* Address: 0x1008a0d44 | FUN_1008a0d44 */

undefined1  [16] FUN_1008a0d44(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  char *pcVar2;
  void *pvVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String separator;
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
  void *pvStack_68;
  
  Swift::_StringGuts::grow(0x39,param_2);
  pvVar3 = (void *)0x8000000100db4330;
  SVar9.bridgeObject = (void *)0x8000000100db4330;
  SVar9.str = (char *)0xd00000000000001c;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  pcVar1 = (char *)(ulong)*(uint *)(param_1 + 0x28);
  FUN_1008a0f48();
  SVar7.bridgeObject = pvVar3;
  SVar7.str = pcVar1;
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar7,SVar15);
  _swift_bridgeObjectRelease(pvVar3);
  SVar8.bridgeObject = (void *)0xea0000000000203a;
  SVar8.str = (char *)0x737574617473202c;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar8,SVar16);
  pcVar1 = *(char **)(param_1 + 0x10);
  pvVar3 = *(void **)(param_1 + 0x18);
  pcVar6 = *(char **)(param_1 + 0x20);
  FUN_10089d3a8();
  pcVar2 = pcVar6;
  FUN_100888110(pcVar1,pvVar3);
  SVar9 = Swift::CustomStringConvertible::get_description();
  SVar10.bridgeObject = (void *)0xe100000000000000;
  SVar10.str = (char *)0x20;
  SVar17.bridgeObject = param_4;
  SVar17.str = pcVar2;
  Swift::String::append(SVar10,SVar17);
  pcVar2 = pcVar1;
  pvVar4 = pvVar3;
  pcVar5 = pcVar6;
  FUN_10089d40c();
  SVar11.bridgeObject = pvVar4;
  SVar11.str = pcVar2;
  SVar18.bridgeObject = param_4;
  SVar18.str = pcVar5;
  Swift::String::append(SVar11,SVar18);
  _swift_bridgeObjectRelease(pvVar4);
  pvStack_68 = SVar9.bridgeObject;
  SVar19.bridgeObject = param_4;
  SVar19.str = pcVar5;
  Swift::String::append(SVar9,SVar19);
  _swift_bridgeObjectRelease(pvStack_68);
  FUN_10087b2d4(pcVar1,pvVar3);
  SVar12.bridgeObject = (void *)0xeb00000000203a73;
  SVar12.str = (char *)0x726564616568202c;
  SVar20.bridgeObject = param_4;
  SVar20.str = pcVar6;
  Swift::String::append(SVar12,SVar20);
  _swift_bridgeObjectRetain(param_2.unknown);
  pcVar1 = &DAT_100fe9fa0;
  FUN_1000f7830(&DAT_100fe9fa0,&BYTE_100c80f20);
  pcVar2 = pcVar1;
  FUN_1008a3bd0();
  separator.bridgeObject = &SUB_e200000000000000;
  separator.str = (char *)0x203b;
  SVar9 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(param_2.unknown);
  SVar21.bridgeObject = pcVar2;
  SVar21.str = pcVar1;
  Swift::String::append(SVar9,SVar21);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  SVar13.bridgeObject = &SUB_e200000000000000;
  SVar13.str = (char *)0x7d20;
  SVar22.bridgeObject = pcVar2;
  SVar22.str = pcVar1;
  Swift::String::append(SVar13,SVar22);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x1008a0f40 | FUN_1008a0f40 */

void FUN_1008a0f40(void)

{
  undefined8 *unaff_x20;
  
  FUN_1008a0d44(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1008a0f48 | FUN_1008a0f48 */

undefined1  [16] FUN_1008a0f48(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x2e;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = 0x2f50545448;
  return auVar1;
}



/* Address: 0x1008a100c | FUN_1008a100c */

void FUN_1008a100c(void)

{
  undefined4 *unaff_x20;
  
  FUN_1008a0f48(*unaff_x20);
  return;
}



/* Address: 0x1008a1014 | FUN_1008a1014 */

undefined1  [16] FUN_1008a1014(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = (undefined1 *)0xe300000000000000;
  uVar2 = 0x544547;
  switch(param_2) {
  case 1:
    uVar2 = 0x545550;
    break;
  case 2:
    uVar2 = 0x4c4341;
    break;
  case 3:
    puVar1 = &DAT_e400000000000000;
    uVar2 = 0x44414548;
    break;
  case 4:
    puVar1 = &DAT_e400000000000000;
    uVar2 = 0x54534f50;
    break;
  case 5:
    puVar1 = &DAT_e400000000000000;
    uVar2 = 0x59504f43;
    break;
  case 6:
    puVar1 = &DAT_e400000000000000;
    uVar2 = 0x4b434f4c;
    break;
  case 7:
    puVar1 = &DAT_e400000000000000;
    uVar2 = 0x45564f4d;
    break;
  case 8:
    puVar1 = &DAT_e400000000000000;
    uVar2 = 0x444e4942;
    break;
  case 9:
    puVar1 = &DAT_e400000000000000;
    uVar2 = 0x4b4e494c;
    break;
  case 10:
    puVar1 = &DAT_e500000000000000;
    uVar2 = 0x4843544150;
    break;
  case 0xb:
    puVar1 = &DAT_e500000000000000;
    uVar2 = 0x4543415254;
    break;
  case 0xc:
    puVar1 = &DAT_e500000000000000;
    uVar2 = 0x4c4f434b4d;
    break;
  case 0xd:
    uVar2 = 0x454d;
    goto LAB_1008a11d0;
  case 0xe:
    uVar2 = 0x5550;
LAB_1008a11d0:
    puVar1 = &DAT_e500000000000000;
    uVar2 = uVar2 | 0x4547520000;
    break;
  case 0xf:
    puVar1 = &DAT_e600000000000000;
    uVar2 = 0x594649544f4e;
    break;
  case 0x10:
    puVar1 = &DAT_e600000000000000;
    uVar2 = 0x484352414553;
    break;
  case 0x11:
    puVar1 = &DAT_e600000000000000;
    uVar2 = 0x4b434f4c4e55;
    break;
  case 0x12:
    puVar1 = &DAT_e600000000000000;
    uVar2 = 0x444e49424552;
    break;
  case 0x13:
    uVar2 = 0x444e49424e55;
    puVar1 = &DAT_e600000000000000;
    break;
  case 0x14:
    puVar1 = &DAT_e600000000000000;
    uVar2 = 0x54524f504552;
    break;
  case 0x15:
    puVar1 = &DAT_e600000000000000;
    uVar2 = 0x4554454c4544;
    break;
  case 0x16:
    puVar1 = &DAT_e600000000000000;
    uVar2 = 0x4b4e494c4e55;
    break;
  case 0x17:
    puVar1 = &DAT_e700000000000000;
    uVar2 = 0x5443454e4e4f43;
    break;
  case 0x18:
    puVar1 = &DAT_e700000000000000;
    uVar2 = 0x4843524145534d;
    break;
  case 0x19:
    puVar1 = &DAT_e700000000000000;
    uVar2 = 0x534e4f4954504f;
    break;
  case 0x1a:
    puVar1 = &DAT_e800000000000000;
    uVar2 = 0x444e4946504f5250;
    break;
  case 0x1b:
    puVar1 = &DAT_e800000000000000;
    uVar2 = 0x54554f4b43454843;
    break;
  case 0x1c:
    puVar1 = (undefined1 *)0xe900000000000048;
    uVar2 = 0x43544150504f5250;
    break;
  case 0x1d:
    uVar2 = 0x4249524353425553;
    puVar1 = (undefined1 *)0xe900000000000045;
    break;
  case 0x1e:
    uVar2 = 0x444e454c41434b4d;
    puVar1 = (undefined1 *)0xea00000000005241;
    break;
  case 0x1f:
    puVar1 = (undefined1 *)0xea00000000005954;
    uVar2 = 0x4956495443414b4d;
    break;
  case 0x20:
    puVar1 = (undefined1 *)0xeb00000000454249;
    uVar2 = 0x5243534255534e55;
    break;
  case 0x21:
    puVar1 = &DAT_e600000000000000;
    uVar2 = 0x454352554f53;
  }
  FUN_100881fec();
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x1008a1318 | thunk_FUN_1008a4228 */

void thunk_FUN_1008a4228(void)

{
  FUN_1008a4228();
  return;
}



/* Address: 0x1008a131c | FUN_1008a131c */

void FUN_1008a131c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1008a4228();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1008a1348 | FUN_1008a1348 */

void FUN_1008a1348(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_1008a1014();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1008a1370 | FUN_1008a1370 */

undefined1  [16] FUN_1008a1370(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  _StringObject _Var3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  UnsafeBufferPointer<__int8> UVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined *local_40;
  ulong uStack_38;
  
  _Var3.unknown = (undefined *)0x2d746e65746e6f63;
  uVar5 = 0xee006874676e656c;
  FUN_10089d0ac(0x2d746e65746e6f63,0xee006874676e656c,param_1);
  if (uVar5 != 0) {
    uVar6 = (ulong)_Var3.unknown & 0xffffffffffff;
    uVar8 = uVar5 >> 0x38 & 0xf;
    uVar13 = uVar6;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar13 = uVar8;
    }
    if (uVar13 != 0) {
      if ((uVar5 >> 0x3c & 1) == 0) {
        if ((uVar5 >> 0x3d & 1) == 0) {
          if (((ulong)_Var3.unknown >> 0x3c & 1) == 0) {
            uVar6 = uVar5;
            UVar9 = Swift::_StringObject::get_sharedUTF8(_Var3);
          }
          else {
            UVar9.unknown = (undefined *)((uVar5 & 0xfffffffffffffff) + 0x20);
          }
          if (*UVar9.unknown == 0x2b) {
            if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a168c);
              (*pcVar2)();
            }
            lVar11 = uVar6 - 1;
            if (lVar11 == 0) goto LAB_1008a1600;
            _Var3.unknown = (undefined *)0x0;
            do {
              UVar9.unknown = UVar9.unknown + 1;
              if (((9 < (byte)*UVar9.unknown - 0x30) ||
                  (lVar12 = (long)_Var3.unknown * 10,
                  SUB168(SEXT816((long)_Var3.unknown) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)((byte)*UVar9.unknown - 0x30),
                 _Var3.unknown = (undefined *)(lVar12 + uVar13), SCARRY8(lVar12,uVar13)))
              goto LAB_1008a1600;
              uVar13 = 0;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          else if (*UVar9.unknown == 0x2d) {
            if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a1684);
              (*pcVar2)();
            }
            lVar11 = uVar6 - 1;
            if (lVar11 == 0) {
LAB_1008a1600:
              _Var3.unknown = (undefined *)0x0;
              uVar13 = 1;
            }
            else {
              _Var3.unknown = (undefined *)0x0;
              do {
                UVar9.unknown = UVar9.unknown + 1;
                if (((9 < (byte)*UVar9.unknown - 0x30) ||
                    (lVar12 = (long)_Var3.unknown * 10,
                    SUB168(SEXT816((long)_Var3.unknown) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                   (uVar13 = (ulong)(byte)((byte)*UVar9.unknown - 0x30),
                   _Var3.unknown = (undefined *)(lVar12 - uVar13), SBORROW8(lVar12,uVar13)))
                goto LAB_1008a1600;
                uVar13 = 0;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
          }
          else {
            if (uVar6 == 0) goto LAB_1008a1600;
            _Var3.unknown = (undefined *)0x0;
            if (UVar9.unknown == (byte *)0x0) {
              uVar13 = 0;
            }
            else {
              do {
                if (((9 < (byte)*UVar9.unknown - 0x30) ||
                    (lVar11 = (long)_Var3.unknown * 10,
                    SUB168(SEXT816((long)_Var3.unknown) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
                   (uVar13 = (ulong)(byte)((byte)*UVar9.unknown - 0x30),
                   _Var3.unknown = (undefined *)(lVar11 + uVar13), SCARRY8(lVar11,uVar13)))
                goto LAB_1008a1600;
                uVar13 = 0;
                uVar6 = uVar6 - 1;
                UVar9.unknown = UVar9.unknown + 1;
              } while (uVar6 != 0);
            }
          }
        }
        else {
          local_40 = _Var3.unknown;
          uStack_38 = uVar5 & 0xffffffffffffff;
          uVar1 = (uint)_Var3.unknown & 0xff;
          if (uVar1 == 0x2b) {
            if (uVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a1690);
              (*pcVar2)();
            }
            lVar11 = uVar8 - 1;
            if (lVar11 == 0) goto LAB_1008a1600;
            _Var3.unknown = (undefined *)0x0;
            pbVar10 = (byte *)((ulong)&local_40 | 1);
            do {
              if (((9 < *pbVar10 - 0x30) ||
                  (lVar12 = (long)_Var3.unknown * 10,
                  SUB168(SEXT816((long)_Var3.unknown) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*pbVar10 - 0x30),
                 _Var3.unknown = (undefined *)(lVar12 + uVar13), SCARRY8(lVar12,uVar13)))
              goto LAB_1008a1600;
              uVar13 = 0;
              lVar11 = lVar11 + -1;
              pbVar10 = pbVar10 + 1;
            } while (lVar11 != 0);
          }
          else if (uVar1 == 0x2d) {
            if (uVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a1688);
              (*pcVar2)();
            }
            lVar11 = uVar8 - 1;
            if (lVar11 == 0) goto LAB_1008a1600;
            _Var3.unknown = (undefined *)0x0;
            pbVar10 = (byte *)((ulong)&local_40 | 1);
            do {
              if (((9 < *pbVar10 - 0x30) ||
                  (lVar12 = (long)_Var3.unknown * 10,
                  SUB168(SEXT816((long)_Var3.unknown) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*pbVar10 - 0x30),
                 _Var3.unknown = (undefined *)(lVar12 - uVar13), SBORROW8(lVar12,uVar13)))
              goto LAB_1008a1600;
              uVar13 = 0;
              lVar11 = lVar11 + -1;
              pbVar10 = pbVar10 + 1;
            } while (lVar11 != 0);
          }
          else {
            if (uVar8 == 0) goto LAB_1008a1600;
            _Var3.unknown = (undefined *)0x0;
            ppuVar7 = &local_40;
            do {
              if (((9 < *(byte *)ppuVar7 - 0x30) ||
                  (lVar11 = (long)_Var3.unknown * 10,
                  SUB168(SEXT816((long)_Var3.unknown) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
                 (uVar13 = (ulong)(byte)(*(byte *)ppuVar7 - 0x30),
                 _Var3.unknown = (undefined *)(lVar11 + uVar13), SCARRY8(lVar11,uVar13)))
              goto LAB_1008a1600;
              uVar13 = 0;
              uVar8 = uVar8 - 1;
              ppuVar7 = (undefined **)((long)ppuVar7 + 1);
            } while (uVar8 != 0);
          }
        }
      }
      else {
        uVar13 = uVar5;
        FUN_1008a2030();
      }
      _swift_bridgeObjectRelease(uVar5);
      puVar4 = (undefined *)0x0;
      if (((uint)uVar13 & 0xff) != 1) {
        puVar4 = _Var3.unknown;
      }
      goto LAB_1008a1638;
    }
    _swift_bridgeObjectRelease(uVar5);
  }
  uVar13 = 1;
  puVar4 = (undefined *)0x0;
LAB_1008a1638:
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = puVar4;
  return auVar14;
}



/* Address: 0x1008a1690 | FUN_1008a1690 */

void FUN_1008a1690(undefined8 param_1,undefined8 param_2)

{
  FUN_1008a16a4(param_1,param_2,&DAT_100fe9538,&DAT_100c82440);
  return;
}



/* Address: 0x1008a16a4 | FUN_1008a16a4 */

undefined * FUN_1008a16a4(long param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    FUN_1000f7830(param_3,param_4);
    _swift_allocObject();
    puVar1 = param_3;
    _malloc_size();
    puVar2 = puVar1 + -1;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(long *)(param_3 + 0x18) = ((long)puVar2 >> 5) << 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Address: 0x1008a171c | FUN_1008a171c */

void FUN_1008a171c(ulong *param_1)

{
  __int64 _Var1;
  _ContiguousArrayBuffer<undefined> _Var2;
  ulong uVar3;
  ulong uVar4;
  ulong minimumCapacity;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar4 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_1008986dc();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  local_50 = uVar3 + 0x20;
  uStack_48 = uVar4;
  _Var1 = Swift::_minimumMergeRunLength(uVar4);
  if (_Var1 < (long)uVar4) {
    minimumCapacity = uVar4 >> 1;
    _Var2.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar4) {
      _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (minimumCapacity,PTR___type_metadata_for_Swift_String_100eac208);
      *(ulong *)(_Var2.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var2.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_1008a1818(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var2.unknown + 0x10) = 0;
    _swift_release(_Var2.unknown);
  }
  else if (uVar4 != 0) {
    FUN_1001129c0(0,uVar4,1,&local_50);
  }
  *param_1 = uVar3;
  return;
}



/* Address: 0x1008a1818 | FUN_1008a1818 */

void FUN_1008a1818(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long unaff_x21;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar25 = param_3[1];
  if (0 < lVar25) {
    lVar15 = 0;
    do {
      lVar24 = lVar15 + 1;
      if (lVar24 < lVar25) {
        lVar21 = *param_3;
        puVar1 = (undefined8 *)(lVar21 + lVar24 * 0x10);
        _Var12.unknown = (undefined *)*puVar1;
        _Var13.unknown = (undefined *)puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + lVar15 * 0x10);
        if (_Var12.unknown == (undefined *)*puVar1 && _Var13.unknown == (undefined *)puVar1[1]) {
          bVar7 = false;
        }
        else {
          bVar7 = Swift::_stringCompareWithSmolCheck
                            (_Var12,_Var13,(_StringComparisonResult)(__int8)(undefined *)*puVar1);
        }
        lVar18 = lVar15 + 2;
        lVar24 = lVar18;
        if (lVar18 < lVar25) {
          plVar19 = puVar1 + 3;
          do {
            _Var12.unknown = (undefined *)plVar19[2];
            if ((undefined *)plVar19[1] == (undefined *)plVar19[-1] &&
                _Var12.unknown == (undefined *)*plVar19) {
              if (bVar7 != false) goto LAB_1008a1910;
            }
            else {
              bVar8 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)plVar19[1],_Var12,
                                 (_StringComparisonResult)(__int8)(undefined *)plVar19[-1]);
              lVar24 = lVar18;
              if (bVar7 != bVar8) break;
            }
            lVar18 = lVar18 + 1;
            plVar19 = plVar19 + 2;
            lVar24 = lVar25;
          } while (lVar25 != lVar18);
        }
        lVar18 = lVar24;
        if (bVar7 != false) {
LAB_1008a1910:
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1c00);
            (*pcVar6)();
          }
          lVar24 = lVar18;
          if (lVar15 < lVar18) {
            lVar14 = lVar18 << 4;
            lVar16 = lVar15 << 4;
            lVar25 = lVar15;
            do {
              lVar18 = lVar18 + -1;
              if (lVar25 != lVar18) {
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1c20);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar21 + lVar16);
                lVar2 = lVar21 + lVar14;
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar26 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar26;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar5;
              }
              lVar25 = lVar25 + 1;
              lVar14 = lVar14 + -0x10;
              lVar16 = lVar16 + 0x10;
            } while (lVar25 < lVar18);
          }
        }
      }
      lVar25 = param_3[1];
      lVar21 = lVar24;
      if (lVar24 < lVar25) {
        if (SBORROW8(lVar24,lVar15)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1bfc);
          (*pcVar6)();
        }
        if (lVar24 - lVar15 < param_4) {
          if (SCARRY8(lVar15,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1c04);
            (*pcVar6)();
          }
          lVar18 = lVar15 + param_4;
          if (lVar25 <= lVar15 + param_4) {
            lVar18 = lVar25;
          }
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1c08);
            (*pcVar6)();
          }
          if (lVar24 != lVar18) {
            lVar16 = *param_3;
            plVar19 = (long *)(lVar16 + lVar24 * 0x10);
            lVar25 = lVar15 - lVar24;
            do {
              puVar1 = (undefined8 *)(lVar16 + lVar24 * 0x10);
              _Var12.unknown = (undefined *)*puVar1;
              _Var13.unknown = (undefined *)puVar1[1];
              plVar20 = plVar19;
              lVar21 = lVar25;
              do {
                puVar11 = (undefined *)plVar20[-2];
                if ((_Var12.unknown == puVar11 && _Var13.unknown == (undefined *)plVar20[-1]) ||
                   (bVar7 = Swift::_stringCompareWithSmolCheck
                                      (_Var12,_Var13,(_StringComparisonResult)(__int8)puVar11),
                   !bVar7)) break;
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1c0c);
                  (*pcVar6)();
                }
                _Var12.unknown = (undefined *)*plVar20;
                _Var13.unknown = (undefined *)plVar20[1];
                plVar20[1] = plVar20[-1];
                *plVar20 = plVar20[-2];
                plVar20[-1] = (long)_Var13.unknown;
                plVar20 = plVar20 + -2;
                *plVar20 = (long)_Var12.unknown;
                bVar7 = lVar21 != -1;
                lVar21 = lVar21 + 1;
              } while (bVar7);
              lVar24 = lVar24 + 1;
              plVar19 = plVar19 + 2;
              lVar25 = lVar25 + -1;
              lVar21 = lVar18;
            } while (lVar24 != lVar18);
          }
        }
      }
      puVar11 = local_58;
      if (lVar21 < lVar15) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1bec);
        (*pcVar6)();
      }
      puVar9 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_1008a1e94(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar23 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar23) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_1008a1e94(puVar11,uVar23 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar23 + 1;
      *(long *)(puVar11 + uVar23 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar11 + uVar23 * 0x10 + 0x28) = lVar21;
      local_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1c24);
        (*pcVar6)();
      }
      FUN_1008a1c2c(&local_58,*param_1,param_3);
      puVar11 = local_58;
      if (unaff_x21 != 0) goto LAB_1008a1bbc;
      lVar25 = param_3[1];
      lVar15 = lVar21;
    } while (lVar21 < lVar25);
  }
  puVar11 = local_58;
  lVar25 = *param_1;
  if (lVar25 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1c2c);
    (*pcVar6)();
  }
  puVar9 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_1008a201c();
  }
  puVar22 = (ulong *)(puVar11 + 0x10);
  uVar23 = *puVar22;
  while( true ) {
    if (uVar23 < 2) {
      _swift_bridgeObjectRelease(puVar11);
      return;
    }
    lVar15 = *param_3;
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1c28);
      (*pcVar6)();
    }
    plVar19 = (long *)(puVar11 + uVar23 * 0x10);
    lVar24 = *plVar19;
    puVar3 = puVar22 + uVar23 * 2;
    uVar17 = puVar3[1];
    FUN_100112cf4(lVar15 + lVar24 * 0x10,lVar15 + *puVar3 * 0x10,lVar15 + uVar17 * 0x10,lVar25);
    if (unaff_x21 != 0) break;
    if ((long)uVar17 < lVar24) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1bf0);
      (*pcVar6)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1bf4);
      (*pcVar6)();
    }
    *plVar19 = lVar24;
    plVar19[1] = uVar17;
    uVar17 = *puVar22;
    lVar15 = uVar17 - uVar23;
    if (uVar17 < uVar23) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008a1bf8);
      (*pcVar6)();
    }
    uVar23 = uVar17 - 1;
    _memmove(puVar3,puVar3 + 2,lVar15 * 0x10);
    *puVar22 = uVar23;
  }
LAB_1008a1bbc:
  _swift_bridgeObjectRelease(puVar11);
  return;
}



/* Address: 0x1008a1c2c | FUN_1008a1c2c */

undefined8 FUN_1008a1c2c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_1008a201c();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1008a1d00;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e7c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1008a1d64:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e6c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e74);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e54);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e58);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e60);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e68);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1008a1d00:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e5c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e64);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e70);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e78);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1008a1d64;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e80);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e48);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e94);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_100112cf4(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e4c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_1008a201c();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a1e50);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_1008a1f94(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x1008a1e94 | FUN_1008a1e94 */

undefined * FUN_1008a1e94(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a1f94);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fea240;
    FUN_1000f7830(&DAT_100fea240,&DAT_100c816b0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1008a1f94 | FUN_1008a1f94 */

undefined1  [16] FUN_1008a1f94(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_1008a201c();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a201c);
  (*pcVar3)();
}



/* Address: 0x1008a201c | FUN_1008a201c */

void FUN_1008a201c(long param_1)

{
  FUN_1008a1e94(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008a2030 | FUN_1008a2030 */

/* WARNING: Removing unreachable block (ram,0x0001008a2124) */

undefined1  [16] FUN_1008a2030(undefined *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_40;
  ulong uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_40,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_40;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_1008a2130();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_40;
    pvVar4 = SVar6.bridgeObject;
  }
  local_40 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_40 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_40;
      local_40 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_40 & 0xffffffffffff);
      local_40 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_38 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_40;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x1008a2130 | FUN_1008a2130 */

undefined1  [16]
FUN_1008a2130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_1008a2180();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1008a2180 | FUN_1008a2180 */

String FUN_1008a2180(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  Index IVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined *local_68;
  ulong uStack_60;
  undefined8 local_50;
  
  if ((param_4 >> 0x3c & 1) != 0) {
    IVar6.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    ppuVar2 = (undefined **)
              Swift::Substring::UTF8View::distance
                        (param_1,param_2,(UTF8View)param_1.cmsgPointer.unknown);
    ppuVar3 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
      FUN_1008a22c4(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a2280);
        (*pcVar1)();
      }
    }
    SVar8.str = ppuVar3[2];
    SVar8.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)(ppuVar3 + 4),SVar8);
    _swift_release(ppuVar3);
    return SVar8;
  }
  uVar7 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
  if ((param_4 >> 0x3d & 1) != 0) {
    uStack_60 = param_4 & 0xffffffffffffff;
    SVar10.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
    SVar10.bridgeObject = param_3.unknown;
    local_68 = param_3.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((undefined *)((long)&local_68 + uVar7),SVar10);
    return SVar8;
  }
  if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
    UVar5 = Swift::_StringObject::get_sharedUTF8(param_3);
    if (UVar5.unknown == (undefined *)0x0) {
      UVar5.unknown = (undefined *)0x0;
      goto LAB_1008a21b8;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_1008a21b8:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x1008a22c4 | FUN_1008a22c4 */

undefined * FUN_1008a22c4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fea238;
    FUN_1000f7830(&DAT_100fea238,&DAT_100c816a0);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1008a2334 | FUN_1008a2334 */

void FUN_1008a2334(long param_1)

{
  thunk_FUN_100880a88(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008a2348 | FUN_1008a2348 */

/* WARNING: Removing unreachable block (ram,0x0001008a26c0) */

undefined8 FUN_1008a2348(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  undefined *local_68;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10)) {
    lVar5 = param_1;
    FUN_10089f678();
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar13 = *(long *)(lVar5 + 0x10);
    if (lVar13 == 0) {
      _swift_bridgeObjectRelease(lVar5);
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_100892608(0,lVar13,0);
      puVar11 = (undefined8 *)(lVar5 + 0x28);
      do {
        puVar7 = local_68;
        SVar14.bridgeObject = (void *)*puVar11;
        SVar14.str = (char *)puVar11[-1];
        SVar14 = Swift::String::lowercased(SVar14);
        uVar12 = *(ulong *)(puVar7 + 0x10);
        local_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar12) {
          FUN_100892608(1 < *(ulong *)(puVar7 + 0x18),uVar12 + 1,1);
        }
        puVar7 = local_68;
        puVar11 = puVar11 + 2;
        *(ulong *)(local_68 + 0x10) = uVar12 + 1;
        *(String *)(local_68 + uVar12 * 0x10 + 0x20) = SVar14;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      _swift_bridgeObjectRelease(lVar5);
    }
    puVar6 = puVar7;
    FUN_1008b3d44();
    _swift_bridgeObjectRelease(puVar7);
    lVar5 = param_3;
    FUN_10089f678();
    lVar13 = *(long *)(lVar5 + 0x10);
    if (lVar13 == 0) {
      _swift_bridgeObjectRelease(lVar5);
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_68 = puVar8;
      FUN_100892608(0,lVar13,0);
      puVar11 = (undefined8 *)(lVar5 + 0x28);
      do {
        puVar8 = local_68;
        SVar15.bridgeObject = (void *)*puVar11;
        SVar15.str = (char *)puVar11[-1];
        SVar14 = Swift::String::lowercased(SVar15);
        uVar12 = *(ulong *)(puVar8 + 0x10);
        local_68 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar12) {
          FUN_100892608(1 < *(ulong *)(puVar8 + 0x18),uVar12 + 1,1);
        }
        puVar8 = local_68;
        puVar11 = puVar11 + 2;
        *(ulong *)(local_68 + 0x10) = uVar12 + 1;
        *(String *)(local_68 + uVar12 * 0x10 + 0x20) = SVar14;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      _swift_bridgeObjectRelease(lVar5);
    }
    puVar7 = puVar8;
    FUN_1008b3d44(puVar8);
    _swift_bridgeObjectRelease(puVar8);
    puVar8 = puVar6;
    FUN_10037b278(puVar6,puVar7);
    _swift_bridgeObjectRelease(puVar7);
    if (((ulong)puVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar6);
    }
    else {
      lVar13 = 0;
      uVar10 = 1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
      uVar12 = 0xffffffffffffffff;
      if ((puVar6[0x20] & 0x3f) < 6) {
        uVar12 = ~(-1L << (uVar10 & 0x3f));
      }
      uVar12 = uVar12 & *(ulong *)(puVar6 + 0x38);
      do {
        while (uVar12 == 0) {
          bVar4 = SCARRY8(lVar13,1);
          lVar13 = lVar13 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a26c0);
            (*pcVar3)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar13) {
            _swift_release(puVar6);
            return 1;
          }
          uVar12 = *(ulong *)((long)(puVar6 + 0x38) + lVar13 * 8);
        }
        uVar2 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        puVar11 = (undefined8 *)
                  (*(long *)(puVar6 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                  lVar13 * 0x400);
        puVar8 = (undefined *)*puVar11;
        uVar1 = puVar11[1];
        _swift_bridgeObjectRetain(uVar1);
        puVar7 = puVar8;
        FUN_10089cd18(puVar8,uVar1,param_1);
        local_68 = puVar7;
        _swift_bridgeObjectRetain();
        FUN_1008a171c(&local_68);
        _swift_bridgeObjectRelease(puVar7);
        puVar7 = local_68;
        FUN_10089cd18(puVar8,uVar1,param_3);
        _swift_bridgeObjectRelease(uVar1);
        local_68 = puVar8;
        _swift_bridgeObjectRetain(puVar8);
        FUN_1008a171c(&local_68);
        uVar12 = uVar12 - 1 & uVar12;
        _swift_bridgeObjectRelease(puVar8);
        puVar8 = local_68;
        puVar9 = puVar7;
        FUN_1004827e8(puVar7,local_68);
        _swift_release(puVar7);
        _swift_release(puVar8);
      } while (((ulong)puVar9 & 1) != 0);
      _swift_release(puVar6);
    }
  }
  return 0;
}



/* Address: 0x1008a26cc | FUN_1008a26cc */

undefined8
FUN_1008a26cc(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5,
             undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  _StringGuts _Var8;
  undefined *puVar9;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  puVar3 = *(undefined **)(param_1 + 0x18);
  puVar2 = *(undefined **)(param_4 + 0x10);
  puVar4 = *(undefined **)(param_4 + 0x18);
  _Var6.unknown = puVar1;
  _Var8.unknown = puVar3;
  FUN_1008a1014();
  puVar7 = puVar2;
  puVar9 = puVar4;
  FUN_1008a1014();
  if (_Var6.unknown == puVar7 && _Var8.unknown == puVar9) {
    FUN_100881fec(puVar1,puVar3);
    FUN_100881fec(puVar2,puVar4);
    _swift_bridgeObjectRelease(_Var8.unknown);
    _swift_bridgeObjectRelease(puVar9);
    FUN_10087b1c4(puVar2,puVar4);
    FUN_10087b1c4(puVar1,puVar3);
  }
  else {
    bVar5 = Swift::_stringCompareWithSmolCheck(_Var6,_Var8,(_StringComparisonResult)(__int8)puVar7);
    FUN_100881fec(puVar1,puVar3);
    FUN_100881fec(puVar2,puVar4);
    _swift_bridgeObjectRelease(_Var8.unknown);
    _swift_bridgeObjectRelease(puVar9);
    FUN_10087b1c4(puVar2,puVar4);
    FUN_10087b1c4(puVar1,puVar3);
    if (!bVar5) {
      return 0;
    }
  }
  if ((((*(undefined **)(param_1 + 0x20) == *(undefined **)(param_4 + 0x20)) &&
       (*(undefined **)(param_1 + 0x28) == *(undefined **)(param_4 + 0x28))) ||
      (bVar5 = Swift::_stringCompareWithSmolCheck
                         ((_StringGuts)*(undefined **)(param_1 + 0x20),
                          (_StringGuts)*(undefined **)(param_1 + 0x28),
                          (_StringComparisonResult)(__int8)*(undefined **)(param_4 + 0x20)), bVar5))
     && ((*(short *)(param_1 + 0x30) == *(short *)(param_4 + 0x30) &&
         (*(short *)(param_1 + 0x32) == *(short *)(param_4 + 0x32))))) {
    FUN_1008a2348(param_2,param_3,param_5,param_6);
    return param_2;
  }
  return 0;
}



/* Address: 0x1008a2878 | FUN_1008a2878 */

bool FUN_1008a2878(long param_1,_StringGuts param_2,_StringGuts param_3,long param_4,
                  undefined *param_5,undefined1 *param_6)

{
  bool bVar1;
  
  switch(param_3.unknown) {
  case (undefined *)0x0:
    if (param_6 == (undefined1 *)0x0) {
      return true;
    }
    break;
  case (undefined *)0x1:
    if (param_6 == &DAT_00000001) {
      return true;
    }
    break;
  case (undefined *)0x2:
    if (param_6 == (undefined1 *)0x2) {
      return true;
    }
    break;
  case (undefined *)0x3:
    if (param_6 == (undefined1 *)0x3) {
      return true;
    }
    break;
  case (undefined *)0x4:
    if (param_6 == (undefined1 *)0x4) {
      return true;
    }
    break;
  case (undefined *)0x5:
    if (param_6 == (undefined1 *)0x5) {
      return true;
    }
    break;
  case (undefined *)0x6:
    if (param_6 == (undefined1 *)0x6) {
      return true;
    }
    break;
  case (undefined *)0x7:
    if (param_6 == (undefined1 *)0x7) {
      return true;
    }
    break;
  case (undefined *)0x8:
    if (param_6 == (undefined1 *)0x8) {
      return true;
    }
    break;
  case (undefined *)0x9:
    if (param_6 == &DAT_00000009) {
      return true;
    }
    break;
  case (undefined *)0xa:
    if (param_6 == (undefined1 *)0xa) {
      return true;
    }
    break;
  case (undefined *)0xb:
    if (param_6 == (undefined1 *)0xb) {
      return true;
    }
    break;
  case (undefined *)0xc:
    if (param_6 == (undefined1 *)0xc) {
      return true;
    }
    break;
  case (undefined *)0xd:
    if (param_6 == (undefined1 *)0xd) {
      return true;
    }
    break;
  case (undefined *)0xe:
    if (param_6 == (undefined1 *)0xe) {
      return true;
    }
    break;
  case (undefined *)0xf:
    if (param_6 == (undefined1 *)0xf) {
      return true;
    }
    break;
  case (undefined *)0x10:
    if (param_6 == (undefined1 *)0x10) {
      return true;
    }
    break;
  case (undefined *)0x11:
    if (param_6 == (undefined1 *)0x11) {
      return true;
    }
    break;
  case (undefined *)0x12:
    if (param_6 == &DAT_00000012) {
      return true;
    }
    break;
  case (undefined *)0x13:
    if (param_6 == (undefined1 *)0x13) {
      return true;
    }
    break;
  case (undefined *)0x14:
    if (param_6 == (undefined1 *)0x14) {
      return true;
    }
    break;
  case (undefined *)0x15:
    if (param_6 == (undefined1 *)0x15) {
      return true;
    }
    break;
  case (undefined *)0x16:
    if (param_6 == (undefined1 *)0x16) {
      return true;
    }
    break;
  case (undefined *)0x17:
    if (param_6 == (undefined1 *)0x17) {
      return true;
    }
    break;
  case (undefined *)0x18:
    if (param_6 == (undefined1 *)0x18) {
      return true;
    }
    break;
  case (undefined *)0x19:
    if (param_6 == (undefined1 *)0x19) {
      return true;
    }
    break;
  case (undefined *)0x1a:
    if (param_6 == (undefined1 *)0x1a) {
      return true;
    }
    break;
  case (undefined *)0x1b:
    if (param_6 == (undefined1 *)0x1b) {
      return true;
    }
    break;
  case (undefined *)0x1c:
    if (param_6 == &DAT_0000001c) {
      return true;
    }
    break;
  case (undefined *)0x1d:
    if (param_6 == (undefined1 *)0x1d) {
      return true;
    }
    break;
  case (undefined *)0x1e:
    if (param_6 == (undefined1 *)0x1e) {
      return true;
    }
    break;
  case (undefined *)0x1f:
    if (param_6 == (undefined1 *)0x1f) {
      return true;
    }
    break;
  case (undefined *)0x20:
    if (param_6 == (undefined1 *)0x20) {
      return true;
    }
    break;
  case (undefined *)0x21:
    if (param_6 == (undefined1 *)0x21) {
      return true;
    }
    break;
  case (undefined *)0x22:
    if (param_6 == (undefined1 *)0x22) {
      return true;
    }
    break;
  case (undefined *)0x23:
    if (param_6 == (undefined1 *)0x23) {
      return true;
    }
    break;
  case (undefined *)0x24:
    if (param_6 == &DAT_00000024) {
      return true;
    }
    break;
  case (undefined *)0x25:
    if (param_6 == (undefined1 *)0x25) {
      return true;
    }
    break;
  case (undefined *)0x26:
    if (param_6 == (undefined1 *)0x26) {
      return true;
    }
    break;
  case (undefined *)0x27:
    if (param_6 == (undefined1 *)0x27) {
      return true;
    }
    break;
  case (undefined *)0x28:
    if (param_6 == (undefined1 *)0x28) {
      return true;
    }
    break;
  case (undefined *)0x29:
    if (param_6 == (undefined1 *)0x29) {
      return true;
    }
    break;
  case (undefined *)0x2a:
    if (param_6 == &DAT_0000002a) {
      return true;
    }
    break;
  case (undefined *)0x2b:
    if (param_6 == (undefined1 *)0x2b) {
      return true;
    }
    break;
  case (undefined *)0x2c:
    if (param_6 == (undefined1 *)0x2c) {
      return true;
    }
    break;
  case (undefined *)0x2d:
    if (param_6 == (undefined1 *)0x2d) {
      return true;
    }
    break;
  case (undefined *)0x2e:
    if (param_6 == (undefined1 *)0x2e) {
      return true;
    }
    break;
  case (undefined *)0x2f:
    if (param_6 == (undefined1 *)0x2f) {
      return true;
    }
    break;
  case (undefined *)0x30:
    if (param_6 == &DAT_00000030) {
      return true;
    }
    break;
  case (undefined *)0x31:
    if (param_6 == (undefined1 *)0x31) {
      return true;
    }
    break;
  case (undefined *)0x32:
    if (param_6 == (undefined1 *)0x32) {
      return true;
    }
    break;
  case (undefined *)0x33:
    if (param_6 == (undefined1 *)0x33) {
      return true;
    }
    break;
  case (undefined *)0x34:
    if (param_6 == (undefined1 *)0x34) {
      return true;
    }
    break;
  case (undefined *)0x35:
    if (param_6 == (undefined1 *)0x35) {
      return true;
    }
    break;
  case (undefined *)0x36:
    if (param_6 == (undefined1 *)0x36) {
      return true;
    }
    break;
  case (undefined *)0x37:
    if (param_6 == (undefined1 *)0x37) {
      return true;
    }
    break;
  case (undefined *)0x38:
    if (param_6 == &DAT_00000038) {
      return true;
    }
    break;
  case (undefined *)0x39:
    if (param_6 == (undefined1 *)0x39) {
      return true;
    }
    break;
  case (undefined *)0x3a:
    if (param_6 == &DAT_0000003a) {
      return true;
    }
    break;
  case (undefined *)0x3b:
    if (param_6 == (undefined1 *)0x3b) {
      return true;
    }
    break;
  default:
    if (((undefined1 *)0x3b < param_6) && (param_1 == param_4)) {
      if ((param_2.unknown == param_5) && (param_3.unknown == param_6)) {
        return true;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_2,param_3,(_StringComparisonResult)(__int8)param_5);
      return bVar1;
    }
  }
  return false;
}



/* Address: 0x1008a2c9c | FUN_1008a2c9c */

undefined8
FUN_1008a2c9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  FUN_1008a2878(uVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                *(undefined8 *)(param_4 + 0x20));
  if (((uVar1 & 1) != 0) &&
     (*(short *)(param_1 + 0x28) == *(short *)(param_4 + 0x28) &&
      *(short *)(param_1 + 0x2a) == *(short *)(param_4 + 0x2a))) {
    FUN_1008a2348(param_2,param_3,param_5,param_6);
    return param_2;
  }
  return 0;
}



/* Address: 0x1008a2d38 | FUN_1008a2d38 */

long FUN_1008a2d38(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  
  if (param_2 - param_1 == 0 || (long)param_2 < (long)param_1) {
    if ((long)param_1 <= (long)param_2) {
      return 0;
    }
    uVar4 = param_1 ^ 0x8000000000000000;
    uVar1 = param_1 + ~param_2;
    uVar2 = uVar1;
    if (uVar4 <= uVar1) {
      uVar2 = uVar4;
    }
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a2da8);
      (*pcVar3)();
    }
    if (uVar4 <= uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a2dac);
      (*pcVar3)();
    }
  }
  else {
    uVar4 = param_1 ^ 0x7fffffffffffffff;
    uVar1 = param_2 + ~param_1;
    uVar2 = uVar1;
    if (uVar4 <= uVar1) {
      uVar2 = uVar4;
    }
    if (0x7ffffffffffffffe < uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a2da4);
      (*pcVar3)();
    }
    if (uVar4 <= uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008a2d70);
      (*pcVar3)();
    }
  }
  return param_2 - param_1;
}



/* Address: 0x1008a2dac | FUN_1008a2dac */

long FUN_1008a2dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  switch(param_1) {
  case 100:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x65:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x66:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 200:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xc9:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xca:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xcb:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xcc:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xcd:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xce:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xcf:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xd0:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xe2:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 300:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x12d:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x12e:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x12f:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x130:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x131:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x133:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x134:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 400:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x191:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x192:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x193:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x194:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x195:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x196:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x197:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x198:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x199:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19a:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19b:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19c:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19d:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19e:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19f:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a0:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a1:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a2:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a5:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a6:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a7:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a8:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1aa:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1ac:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1ad:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1af:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1c3:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 500:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1f5:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1f6:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1f7:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1f8:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1f9:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1fa:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1fb:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1fc:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1fe:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1ff:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  }
  if (-1 < param_1) {
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a3478);
  (*pcVar1)();
}



/* Address: 0x1008a3ae8 | FUN_1008a3ae8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008a3ae8(void)

{
  return ZEXT816(0x100fea1c0);
}



/* Address: 0x1008a3b08 | FUN_1008a3b08 */

void FUN_1008a3b08(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a3bb4);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a3bb8);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a3bbc);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        thunk_FUN_100880a88();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_1008aa3cc(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a3bc4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a3bc0);
  (*pcVar2)();
}



/* Address: 0x1008a3bc4 | FUN_1008a3bc4 */

void FUN_1008a3bc4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cc355c);
  return;
}



/* Address: 0x1008a3bd0 | FUN_1008a3bd0 */

void FUN_1008a3bd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fe9fa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe9fa0;
  FUN_1000f8b08(&DAT_100fe9fa0,&BYTE_100c80f20);
  puVar2 = &DAT_100fe9fb0;
  FUN_100134584(&DAT_100fe9fb0,&DAT_100fe9fb8,&BYTE_100c80f28,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  puVar3 = 
  PTR__Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__BidirectionalCollection_100ead1a8;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__BidirectionalCollection_100ead1a8
             ,puVar1,&local_28);
  DAT_100fe9fa8 = puVar3;
  return;
}



/* Address: 0x1008a3c60 | FUN_1008a3c60 */

undefined1
FUN_1008a3c60(long param_1,Index param_2,Index param_3,UTF8View param_4,ulong param_5,code *param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  Index to;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 local_51;
  
  uVar4 = (uint)((ulong)param_4.unknown >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  uVar6 = 4L << uVar4;
  to.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
  if (((ulong)param_2.cmsgPointer.unknown & 0xc) == uVar6) {
    FUN_1000740a8(param_2.cmsgPointer.unknown,param_4.unknown,param_5);
  }
  if ((param_5 >> 0x3c & 1) == 0) {
    uVar5 = (ulong)to.cmsgPointer.unknown >> 0x10;
  }
  else {
    uVar5 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar5 = param_5 >> 0x38 & 0xf;
    }
    if (uVar5 < (ulong)to.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a3e68);
      (*pcVar2)();
    }
    uVar5 = Swift::String::UTF8View::_foreignDistance((Index)0xf,to,param_4);
  }
  if (((ulong)param_2.cmsgPointer.unknown & 0xc) == uVar6) {
    FUN_1000740a8(param_2.cmsgPointer.unknown,param_4.unknown,param_5);
  }
  if (((ulong)param_3.cmsgPointer.unknown & 0xc) == uVar6) {
    FUN_1000740a8(param_3.cmsgPointer.unknown,param_4.unknown,param_5);
  }
  if ((param_5 >> 0x3c & 1) == 0) {
    lVar3 = ((ulong)param_3.cmsgPointer.unknown >> 0x10) -
            ((ulong)param_2.cmsgPointer.unknown >> 0x10);
  }
  else {
    uVar6 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar6 = param_5 >> 0x38 & 0xf;
    }
    if (uVar6 < (ulong)param_2.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a3e60);
      (*pcVar2)();
    }
    if (uVar6 < (ulong)param_3.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a3e64);
      (*pcVar2)();
    }
    lVar3 = Swift::String::UTF8View::_foreignDistance(param_2,param_3,param_4);
  }
  if (SCARRY8(uVar5,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a3e58);
    (*pcVar2)();
  }
  if ((long)(uVar5 + lVar3) < (long)uVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a3e5c);
    (*pcVar2)();
  }
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = uVar5 + param_1;
  }
  (*param_6)(&local_51,lVar1,(uVar5 + lVar3) - uVar5);
  return local_51;
}



/* Address: 0x1008a3e68 | FUN_1008a3e68 */

uint FUN_1008a3e68(UTF8View param_1,ulong param_2,UTF8View param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  UnsafeBufferPointer<__int8> UVar5;
  uint uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *local_80;
  ulong uStack_78;
  undefined *local_70;
  ulong uStack_68;
  byte local_51;
  
  uVar9 = param_4 >> 0x38 & 0xf;
  if ((param_4 >> 0x3c & 1) == 0) {
    uVar3 = (ulong)param_3.unknown & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar3 = uVar9;
    }
    uVar10 = param_2 >> 0x38 & 0xf;
    if ((param_2 >> 0x3c & 1) == 0) goto LAB_1008a3ea0;
LAB_1008a4024:
    uVar4 = Swift::String::UTF8View::_foreignCount(param_1);
    if (uVar3 != uVar4) goto LAB_1008a4054;
  }
  else {
    uVar3 = Swift::String::UTF8View::_foreignCount(param_3);
    uVar10 = param_2 >> 0x38 & 0xf;
    if ((param_2 >> 0x3c & 1) != 0) goto LAB_1008a4024;
LAB_1008a3ea0:
    uVar4 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar4 = uVar10;
    }
    if (uVar3 != uVar4) {
LAB_1008a4054:
      uVar6 = 0;
      goto LAB_1008a40b4;
    }
  }
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
        uVar9 = param_4;
        UVar5 = Swift::_StringObject::get_sharedUTF8(param_3.unknown);
      }
      else {
        UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
        uVar9 = (ulong)param_3.unknown & 0xffffffffffff;
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
            UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
          }
          else {
            UVar5.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
          }
          goto LAB_1008a3f54;
        }
        local_70 = param_1.unknown;
        uStack_68 = param_2 & 0xffffffffffffff;
        if (uVar9 == uVar10) {
          ppuVar7 = &local_70;
          do {
            if (uVar10 == 0) goto LAB_1008a3fe4;
            bVar1 = *UVar5.unknown;
            bVar2 = *(byte *)ppuVar7;
            uVar10 = uVar10 - 1;
            ppuVar7 = (undefined **)((long)ppuVar7 + 1);
            UVar5.unknown = UVar5.unknown + 1;
          } while (((bVar2 ^ bVar1) & 0xdf) == 0);
        }
LAB_1008a3fdc:
        local_51 = 0;
      }
      else {
LAB_1008a4094:
        local_51 = 2;
      }
    }
    else {
      local_70 = param_3.unknown;
      uStack_68 = param_4 & 0xffffffffffffff;
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_1008a4094;
      if ((param_2 >> 0x3d & 1) != 0) {
        local_80 = param_1.unknown;
        uStack_78 = param_2 & 0xffffffffffffff;
        if (uVar9 == uVar10) {
          ppuVar7 = &local_70;
          ppuVar8 = &local_80;
          do {
            if (uVar9 == 0) goto LAB_1008a3fe4;
            bVar1 = *(byte *)ppuVar7;
            bVar2 = *(byte *)ppuVar8;
            uVar9 = uVar9 - 1;
            ppuVar7 = (undefined **)((long)ppuVar7 + 1);
            ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          } while (((bVar2 ^ bVar1) & 0xdf) == 0);
        }
        goto LAB_1008a3fdc;
      }
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
      }
      else {
        UVar5.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
      }
LAB_1008a3f54:
      FUN_10087b2e8(&local_51,UVar5.unknown);
    }
  }
  else {
    local_51 = 3;
  }
  goto LAB_1008a409c;
LAB_1008a3fe4:
  local_51 = 1;
LAB_1008a409c:
  uVar6 = (uint)local_51;
  if ((local_51 & 0xfe) == 2) {
    FUN_10089b5c0(param_1.unknown,param_2,param_3.unknown,param_4);
    uVar6 = (uint)param_1.unknown;
  }
LAB_1008a40b4:
  return uVar6 & 1;
}



/* Address: 0x1008a4104 | FUN_1008a4104 */

ulong FUN_1008a4104(ulong param_1,ulong param_2)

{
  code *pcVar1;
  
  if ((long)param_2 < 0) {
    if (param_2 <= (param_1 ^ 0x7fffffffffffffff)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a4138);
      (*pcVar1)();
    }
  }
  else {
    if (param_2 == 0) {
      return param_1;
    }
    if ((param_1 ^ 0x7fffffffffffffff) <= param_2 - 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a4120);
      (*pcVar1)();
    }
  }
  return param_2 + param_1;
}



/* Address: 0x1008a4138 | FUN_1008a4138 */

undefined1  [16] FUN_1008a4138(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar3 = param_3 - param_1;
  if (uVar3 == 0 || (long)param_3 < (long)param_1) {
    if ((long)param_3 < (long)param_1) {
      uVar5 = param_1 ^ 0x8000000000000000;
      uVar1 = param_1 + ~param_3;
      uVar4 = uVar1;
      if (uVar5 <= uVar1) {
        uVar4 = uVar5;
      }
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a4220);
        (*pcVar2)();
      }
      if (uVar5 <= uVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a4224);
        (*pcVar2)();
      }
      goto LAB_1008a4190;
    }
    uVar3 = 0;
    if ((long)param_2 < 1) goto LAB_1008a41dc;
  }
  else {
    uVar4 = param_1 ^ 0x7fffffffffffffff;
    param_3 = param_3 + ~param_1;
    uVar1 = param_3;
    if (uVar4 <= param_3) {
      uVar1 = uVar4;
    }
    if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a4218);
      (*pcVar2)();
    }
    if (uVar4 <= param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a416c);
      (*pcVar2)();
    }
LAB_1008a4190:
    if ((long)param_2 < 1) {
      if (0 < (long)uVar3) goto LAB_1008a41f0;
LAB_1008a41dc:
      if ((long)uVar3 <= (long)param_2) {
LAB_1008a41f0:
        if (-1 < (long)param_2) {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = param_1;
          return auVar7;
        }
        if (param_2 <= (param_1 ^ 0x7fffffffffffffff)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a4228);
          (*pcVar2)();
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = param_2 + param_1;
        return auVar8;
      }
      goto LAB_1008a41e4;
    }
    if ((long)uVar3 < 0) goto LAB_1008a41c0;
  }
  if (param_2 <= uVar3) {
LAB_1008a41c0:
    if ((param_1 ^ 0x7fffffffffffffff) <= param_2 - 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a421c);
      (*pcVar2)();
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_1 + param_2;
    return auVar6;
  }
LAB_1008a41e4:
  return ZEXT816(1) << 0x40;
}



/* Address: 0x1008a4228 | FUN_1008a4228 */

undefined1  [16] FUN_1008a4228(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 0x544547 && param_2 == (undefined1 *)0xe300000000000000) {
LAB_1008a4278:
    puVar2 = (undefined1 *)0x0;
  }
  else {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x544547,(_StringGuts)0xe300000000000000,expecting);
    if (bVar1) goto LAB_1008a4278;
    if (((param_1 == 0x545550) && (param_2 == (undefined1 *)0xe300000000000000)) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x545550,(_StringGuts)0xe300000000000000,expecting), bVar1))
    {
      puVar2 = (undefined1 *)0x1;
    }
    else if (((param_1 == 0x4c4341) && (param_2 == (undefined1 *)0xe300000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4c4341,(_StringGuts)0xe300000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x2;
    }
    else if (((param_1 == 0x44414548) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x44414548,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x3;
    }
    else if (((param_1 == 0x54534f50) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x54534f50,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x4;
    }
    else if (((param_1 == 0x59504f43) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x59504f43,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x5;
    }
    else if (((param_1 == 0x4b434f4c) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4b434f4c,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x6;
    }
    else if (((param_1 == 0x45564f4d) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x45564f4d,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x7;
    }
    else if (((param_1 == 0x444e4942) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x444e4942,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x8;
    }
    else if (((param_1 == 0x4b4e494c) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4b4e494c,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x9;
    }
    else if (((param_1 == 0x4843544150) && (param_2 == &DAT_e500000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4843544150,(_StringGuts)0xe500000000000000,expecting)
            , bVar1)) {
      puVar2 = (undefined1 *)0xa;
    }
    else if (((param_1 == 0x4543415254) && (param_2 == &DAT_e500000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4543415254,(_StringGuts)0xe500000000000000,expecting)
            , bVar1)) {
      puVar2 = (undefined1 *)0xb;
    }
    else if (((param_1 == 0x4c4f434b4d) && (param_2 == &DAT_e500000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4c4f434b4d,(_StringGuts)0xe500000000000000,expecting)
            , bVar1)) {
      puVar2 = (undefined1 *)0xc;
    }
    else if (((param_1 == 0x454752454d) && (param_2 == &DAT_e500000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x454752454d,(_StringGuts)0xe500000000000000,expecting)
            , bVar1)) {
      puVar2 = (undefined1 *)0xd;
    }
    else if (((param_1 == 0x4547525550) && (param_2 == &DAT_e500000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4547525550,(_StringGuts)0xe500000000000000,expecting)
            , bVar1)) {
      puVar2 = (undefined1 *)0xe;
    }
    else if (((param_1 == 0x594649544f4e) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x594649544f4e,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0xf;
    }
    else if (((param_1 == 0x484352414553) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x484352414553,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x10;
    }
    else if (((param_1 == 0x4b434f4c4e55) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4b434f4c4e55,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x11;
    }
    else if (((param_1 == 0x444e49424552) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x444e49424552,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x12;
    }
    else if (((param_1 == 0x444e49424e55) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x444e49424e55,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x13;
    }
    else if (((param_1 == 0x54524f504552) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x54524f504552,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x14;
    }
    else if (((param_1 == 0x4554454c4544) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4554454c4544,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x15;
    }
    else if (((param_1 == 0x4b4e494c4e55) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4b4e494c4e55,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x16;
    }
    else if (((param_1 == 0x5443454e4e4f43) && (param_2 == &DAT_e700000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x5443454e4e4f43,(_StringGuts)0xe700000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x17;
    }
    else if (((param_1 == 0x4843524145534d) && (param_2 == &DAT_e700000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4843524145534d,(_StringGuts)0xe700000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x18;
    }
    else if (((param_1 == 0x534e4f4954504f) && (param_2 == &DAT_e700000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x534e4f4954504f,(_StringGuts)0xe700000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x19;
    }
    else if (((param_1 == 0x444e4946504f5250) && (param_2 == &DAT_e800000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x444e4946504f5250,(_StringGuts)0xe800000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1a;
    }
    else if (((param_1 == 0x54554f4b43454843) && (param_2 == &DAT_e800000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x54554f4b43454843,(_StringGuts)0xe800000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1b;
    }
    else if (((param_1 == 0x43544150504f5250) && (param_2 == (undefined1 *)0xe900000000000048)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x43544150504f5250,(_StringGuts)0xe900000000000048,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1c;
    }
    else if (((param_1 == 0x4249524353425553) && (param_2 == (undefined1 *)0xe900000000000045)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4249524353425553,(_StringGuts)0xe900000000000045,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1d;
    }
    else if (((param_1 == 0x444e454c41434b4d) && (param_2 == (undefined1 *)0xea00000000005241)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x444e454c41434b4d,(_StringGuts)0xea00000000005241,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1e;
    }
    else if (((param_1 == 0x4956495443414b4d) && (param_2 == (undefined1 *)0xea00000000005954)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4956495443414b4d,(_StringGuts)0xea00000000005954,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1f;
    }
    else if (((param_1 == 0x5243534255534e55) && (param_2 == (undefined1 *)0xeb00000000454249)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x5243534255534e55,(_StringGuts)0xeb00000000454249,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x20;
    }
    else {
      if (((param_1 != 0x454352554f53) || (param_2 != &DAT_e600000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x454352554f53,(_StringGuts)0xe600000000000000,expecting),
         !bVar1)) goto LAB_1008a4288;
      puVar2 = (undefined1 *)0x21;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  param_1 = 0;
  param_2 = puVar2;
LAB_1008a4288:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Address: 0x1008a4b38 | thunk_FUN_1008a4b3c */

void thunk_FUN_1008a4b3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9fc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81050;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81050,&DAT_100f0ab40);
  DAT_100fe9fc0 = pTVar1;
  return;
}



/* Address: 0x1008a4b3c | FUN_1008a4b3c */

void FUN_1008a4b3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9fc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81050;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81050,&DAT_100f0ab40);
  DAT_100fe9fc0 = pTVar1;
  return;
}



/* Address: 0x1008a4b7c | thunk_FUN_1008a4b80 */

void thunk_FUN_1008a4b80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9fc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c810d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c810d8,&DAT_100f0ab18);
  DAT_100fe9fc8 = pTVar1;
  return;
}



/* Address: 0x1008a4b80 | FUN_1008a4b80 */

void FUN_1008a4b80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9fc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c810d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c810d8,&DAT_100f0ab18);
  DAT_100fe9fc8 = pTVar1;
  return;
}



/* Address: 0x1008a4bc0 | FUN_1008a4bc0 */

void FUN_1008a4bc0(void)

{
  FUN_1008a4d38(&DAT_100fe9fd0,FUN_1008a4bec,
                PTR__Swift__Swift__DefaultIndices<undefined>_>Swift__RandomAccessCollection_100eabeb8
               );
  return;
}



/* Address: 0x1008a4bec | FUN_1008a4bec */

void FUN_1008a4bec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9fe0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81088;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81088,&DAT_100f0ab18);
  DAT_100fe9fe0 = pTVar1;
  return;
}



/* Address: 0x1008a4bfc | FUN_1008a4bfc */

void FUN_1008a4bfc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81088;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81088,&DAT_100f0ab18);
  DAT_100fe9fe0 = pTVar1;
  return;
}



/* Address: 0x1008a4c2c | FUN_1008a4c2c */

void FUN_1008a4c2c(void)

{
  FUN_1008a4c58(&DAT_100fe9fe8,FUN_1008a4bec,
                PTR__Swift__Swift__Slice<undefined>_>Swift__RandomAccessCollection_100eadcb0);
  return;
}



/* Address: 0x1008a4c58 | FUN_1008a4c58 */

void FUN_1008a4c58(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fe9ff0;
    FUN_1000f8b08(&DAT_100fe9ff0,&DAT_100c81080);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x1008a4cc8 | thunk_FUN_1008a4ccc */

void thunk_FUN_1008a4ccc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9ff8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81138;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81138,&DAT_100f0ab18);
  DAT_100fe9ff8 = pTVar1;
  return;
}



/* Address: 0x1008a4ccc | FUN_1008a4ccc */

void FUN_1008a4ccc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9ff8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81138;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81138,&DAT_100f0ab18);
  DAT_100fe9ff8 = pTVar1;
  return;
}



/* Address: 0x1008a4d0c | FUN_1008a4d0c */

void FUN_1008a4d0c(void)

{
  FUN_1008a4d38(&DAT_100fea000,FUN_1008a4b80,
                PTR__Swift__Swift__DefaultIndices<undefined>_>Swift__BidirectionalCollection_100eabea8
               );
  return;
}



/* Address: 0x1008a4d38 | FUN_1008a4d38 */

void FUN_1008a4d38(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fe9fd8;
    FUN_1000f8b08(&DAT_100fe9fd8,&DAT_100c81078);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x1008a4da8 | FUN_1008a4da8 */

void FUN_1008a4da8(void)

{
  FUN_1008a4c58(&DAT_100fea008,FUN_1008a4b80,
                PTR__Swift__Swift__Slice<undefined>_>Swift__BidirectionalCollection_100eadc98);
  return;
}



/* Address: 0x1008a4dd4 | thunk_FUN_1008a4dd8 */

void thunk_FUN_1008a4dd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea010 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81220;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81220,&DAT_100f0ab18);
  DAT_100fea010 = pTVar1;
  return;
}



/* Address: 0x1008a4dd8 | FUN_1008a4dd8 */

void FUN_1008a4dd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea010 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81220;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81220,&DAT_100f0ab18);
  DAT_100fea010 = pTVar1;
  return;
}



/* Address: 0x1008a4e18 | thunk_FUN_1008a4e1c */

void thunk_FUN_1008a4e1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea018 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81008;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81008,&DAT_100f0ab40);
  DAT_100fea018 = pTVar1;
  return;
}



/* Address: 0x1008a4e1c | FUN_1008a4e1c */

void FUN_1008a4e1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea018 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81008;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81008,&DAT_100f0ab40);
  DAT_100fea018 = pTVar1;
  return;
}



/* Address: 0x1008a4e5c | FUN_1008a4e5c */

void FUN_1008a4e5c(void)

{
  FUN_100134584(&DAT_100fea020,&DAT_100fe9fd8,&DAT_100c81078,
                PTR_Swift__Swift__DefaultIndices<undefined>_>Swift__Collection_100eabec0);
  return;
}



/* Address: 0x1008a4e90 | FUN_1008a4e90 */

void FUN_1008a4e90(void)

{
  FUN_100134584(&DAT_100fea028,&DAT_100fe9ff0,&DAT_100c81080,
                PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8);
  return;
}


