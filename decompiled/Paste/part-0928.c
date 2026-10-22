/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009ffc80 | FUN_1009ffc80 */

void FUN_1009ffc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if ((param_5 != '\0') && (param_1 = param_4, param_5 != '\x01')) {
    return;
  }
  _swift_release(param_1);
  return;
}



/* Address: 0x1009ffc9c | thunk_FUN_1009ffca0 */

void thunk_FUN_1009ffca0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x40);
  FUN_1006a4e7c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}



/* Address: 0x1009ffca0 | FUN_1009ffca0 */

void FUN_1009ffca0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x40);
  FUN_1006a4e7c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}



/* Address: 0x1009ffcfc | FUN_1009ffcfc */

void FUN_1009ffcfc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  String SVar13;
  
  uVar11 = *(ulong *)(unaff_x20 + 0x20);
  uVar12 = *(ulong *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  cVar5 = *(char *)(unaff_x20 + 0x40);
  uVar10 = uVar11;
  if (cVar5 != '\x01') {
    uVar10 = 0;
  }
  uVar1 = (ulong)(uint)((int)(uVar12 >> 0x20) - (int)uVar12);
  if (cVar5 != '\0') {
    uVar1 = uVar10;
  }
  uVar10 = *param_1;
  cVar6 = (char)param_1[1];
  cVar7 = (char)param_1[4];
  bVar8 = cVar7 != '\x01';
  if (bVar8) {
    uVar10 = 0;
  }
  bVar9 = cVar7 == '\0';
  uVar2 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) - (int)param_1[1]);
  if (!bVar9) {
    uVar2 = uVar10;
  }
  if (cVar5 == '\0' || (cVar5 != '\x01' || (uVar12 & 0xff) != 1)) {
    if (uVar1 == uVar2 && (bVar9 || (bVar8 || cVar6 != '\x01'))) goto LAB_1009ffe60;
  }
  else if (!bVar9 && (!bVar8 && cVar6 == '\x01')) goto LAB_1009ffe60;
  if (((cVar7 == '\0') || (cVar7 != '\x01')) || (cVar6 != '\x01')) {
    SVar13 = Swift::CustomStringConvertible::get_description();
  }
  else {
    SVar13 = (String)ZEXT816(0);
  }
  FUN_10085c664(SVar13.str,SVar13.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                0x2d746e65746e6f63,0xee006874676e656c);
LAB_1009ffe60:
  FUN_1009ffc80(uVar11,uVar12,uVar3,uVar4,cVar5);
  uVar10 = *param_1;
  uVar12 = param_1[3];
  uVar11 = param_1[2];
  *(ulong *)(unaff_x20 + 0x28) = param_1[1];
  *(ulong *)(unaff_x20 + 0x20) = uVar10;
  *(ulong *)(unaff_x20 + 0x38) = uVar12;
  *(ulong *)(unaff_x20 + 0x30) = uVar11;
  *(char *)(unaff_x20 + 0x40) = (char)param_1[4];
  return;
}



/* Address: 0x1009ffea8 | FUN_1009ffea8 */

undefined1  [16] FUN_1009ffea8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  pvVar5 = (void *)0xd0;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar5 = _malloc(0xd0);
  }
  else {
    _swift_coroFrameAlloc(0xd0,0xd1ab);
  }
  *param_1 = pvVar5;
  *(long *)((long)pvVar5 + 200) = unaff_x20;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x40);
  *(undefined8 *)((long)pvVar5 + 0x78) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)((long)pvVar5 + 0x80) = uVar2;
  *(undefined8 *)((long)pvVar5 + 0x88) = uVar1;
  *(undefined8 *)((long)pvVar5 + 0x90) = uVar3;
  *(undefined1 *)((long)pvVar5 + 0x98) = uVar4;
  FUN_1006a4e7c();
  auVar6._8_8_ = (undefined8 *)((long)pvVar5 + 0x78);
  auVar6._0_8_ = FUN_1009fff20;
  return auVar6;
}



/* Address: 0x1009fff20 | FUN_1009fff20 */

void FUN_1009fff20(undefined8 *param_1,ulong param_2)

{
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    param_1[0xb] = param_1[0x10];
    param_1[10] = param_1[0xf];
    param_1[0xd] = param_1[0x12];
    param_1[0xc] = param_1[0x11];
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0x13);
    FUN_1009ffcfc(param_1 + 10);
  }
  else {
    param_1[6] = param_1[0x10];
    param_1[5] = param_1[0xf];
    param_1[8] = param_1[0x12];
    param_1[7] = param_1[0x11];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 0x13);
    param_1[1] = param_1[0x10];
    *param_1 = param_1[0xf];
    param_1[3] = param_1[0x12];
    param_1[2] = param_1[0x11];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 0x13);
    FUN_1009fffb0(param_1,param_1 + 0x14);
    FUN_1009ffcfc(param_1 + 5);
    FUN_1009ffc80(param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],
                  *(undefined1 *)(param_1 + 0x13));
  }
  _free(param_1);
  return;
}



/* Address: 0x1009fffb0 | FUN_1009fffb0 */

undefined8 FUN_1009fffb0(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100a01c8c(param_2,param_1);
  return param_2;
}



/* Address: 0x1009fffec | FUN_1009fffec */

void FUN_1009fffec(undefined8 *param_1)

{
  undefined8 in_x3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_100a00278(&local_68);
  _swift_release(in_x3);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x100a00044 | FUN_100a00044 */

void FUN_100a00044(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  ulong uVar2;
  String SVar3;
  undefined8 local_c8 [3];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uVar2 = 0x2d746e65746e6f43;
  local_a0 = unaff_x20[2];
  uVar1 = unaff_x20[3];
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_70 = 2;
  uStack_98 = uVar1;
  local_60 = local_b0;
  uStack_58 = uStack_a8;
  local_50 = local_a0;
  _swift_retain_n(uVar1,2);
  FUN_100a003b8(&local_60,local_c8);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar1);
  if ((uVar2 & 1) == 0) {
    local_c8[0] = 0;
    SVar3 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar3.str,SVar3.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
  }
  _swift_release(uVar1);
  param_1[5] = uStack_88;
  param_1[4] = local_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  *(undefined1 *)(param_1 + 8) = local_70;
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = uStack_98;
  param_1[2] = local_a0;
  return;
}



/* Address: 0x100a0014c | FUN_100a0014c */

undefined1  [16] FUN_100a0014c(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 *unaff_x20;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x21,param_2);
  local_40 = local_70;
  uStack_38 = uStack_68;
  SVar8.bridgeObject = &DAT_e800000000000000;
  SVar8.str = (char *)0x203a737574617473;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar8,SVar12);
  pcVar4 = (char *)*unaff_x20;
  pvVar5 = (void *)unaff_x20[1];
  pcVar6 = (char *)unaff_x20[2];
  FUN_10086e3c0();
  SVar9.bridgeObject = pvVar5;
  SVar9.str = pcVar4;
  SVar13.bridgeObject = param_4;
  SVar13.str = pcVar6;
  Swift::String::append(SVar9,SVar13);
  _swift_bridgeObjectRelease(pvVar5);
  SVar10.bridgeObject = (void *)0xeb00000000203a73;
  SVar10.str = (char *)0x726564616568202c;
  SVar14.bridgeObject = param_4;
  SVar14.str = pcVar6;
  Swift::String::append(SVar10,SVar14);
  puVar3 = 
  PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
  ;
  puVar2 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  local_70 = unaff_x20[3];
  pcVar4 = "";
  puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_70,&local_40,&DAT_100f072e0,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar11.bridgeObject = &DAT_e800000000000000;
  SVar11.str = (char *)0x203a79646f62202c;
  SVar15.bridgeObject = puVar7;
  SVar15.str = pcVar4;
  Swift::String::append(SVar11,SVar15);
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  local_50 = *(undefined1 *)(unaff_x20 + 8);
  Swift::__print_unlocked(&local_70,&local_40,&DAT_100f27910,puVar2,puVar3);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x100a00274 | thunk_FUN_100a0014c */

void thunk_FUN_100a0014c(void)

{
  FUN_100a0014c();
  return;
}



/* Address: 0x100a00278 | FUN_100a00278 */

void FUN_100a00278(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  String SVar8;
  
  uVar5 = param_6[1];
  uVar4 = *param_6;
  uVar7 = param_6[3];
  uVar6 = param_6[2];
  cVar1 = (char)param_6[4];
  if (cVar1 == '\0') {
    uVar3 = (ulong)(*(int *)((long)param_6 + 0xc) -
                   ((uint)*(ushort *)((long)param_6 + 9) << 8 |
                    (uint)*(byte *)((long)param_6 + 0xb) << 0x18 | (uint)(byte)param_6[1]));
  }
  else if (cVar1 == '\x01') {
    if ((byte)param_6[1] == 1) {
      _swift_retain(param_5);
      goto LAB_100a00380;
    }
    uVar3 = *param_6;
  }
  else {
    uVar3 = 0;
  }
  uVar2 = 0x2d746e65746e6f43;
  _swift_retain(param_5);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,param_5)
  ;
  if ((uVar2 & 1) == 0) {
    SVar8 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar8.str,SVar8.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c,param_8,param_9,uVar3);
  }
LAB_100a00380:
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  *(char *)(param_1 + 8) = cVar1;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[3] = param_5;
  param_1[2] = param_4;
  return;
}



/* Address: 0x100a003b8 | FUN_100a003b8 */

undefined8 FUN_100a003b8(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1005c5edc(param_2,param_1);
  return param_2;
}



/* Address: 0x100a003f4 | FUN_100a003f4 */

void FUN_100a003f4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  FUN_1009ffc80(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined1 *)(param_1 + 0x40));
  return;
}



/* Address: 0x100a0042c | FUN_100a0042c */

undefined8 * FUN_100a0042c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar5 = param_2[3];
  uVar1 = param_2[4];
  uVar7 = param_2[5];
  uVar2 = param_2[6];
  uVar4 = param_2[7];
  uVar3 = *(undefined1 *)(param_2 + 8);
  _swift_bridgeObjectRetain(uVar6);
  _swift_retain(uVar5);
  FUN_1006a4e7c(uVar1,uVar7,uVar2,uVar4,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar7;
  param_1[6] = uVar2;
  param_1[7] = uVar4;
  *(undefined1 *)(param_1 + 8) = uVar3;
  return param_1;
}



/* Address: 0x100a004b0 | FUN_100a004b0 */

undefined8 * FUN_100a004b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar10 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  uVar10 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar10);
  uVar10 = param_2[4];
  uVar4 = param_2[5];
  uVar1 = param_2[6];
  uVar5 = param_2[7];
  uVar8 = *(undefined1 *)(param_2 + 8);
  FUN_1006a4e7c(uVar10,uVar4,uVar1,uVar5,uVar8);
  uVar2 = param_1[4];
  uVar6 = param_1[5];
  uVar3 = param_1[6];
  uVar7 = param_1[7];
  param_1[4] = uVar10;
  param_1[5] = uVar4;
  param_1[6] = uVar1;
  param_1[7] = uVar5;
  uVar9 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = uVar8;
  FUN_1009ffc80(uVar2,uVar6,uVar3,uVar7,uVar9);
  return param_1;
}



/* Address: 0x100a00564 | FUN_100a00564 */

void FUN_100a00564(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100a00588 | FUN_100a00588 */

undefined8 * FUN_100a00588(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  _swift_bridgeObjectRelease(param_1[2]);
  uVar5 = param_1[3];
  uVar6 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  _swift_release(uVar5);
  uVar3 = *(undefined1 *)(param_2 + 8);
  uVar5 = param_1[4];
  uVar1 = param_1[5];
  uVar6 = param_1[6];
  uVar2 = param_1[7];
  uVar7 = param_2[4];
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = uVar3;
  FUN_1009ffc80(uVar5,uVar1,uVar6,uVar2,uVar4);
  return param_1;
}



/* Address: 0x100a005ec | FUN_100a005ec */

int FUN_100a005ec(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100a00634 | FUN_100a00634 */

void FUN_100a00634(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x41) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x41) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100a00688 | FUN_100a00688 */

undefined1  [16] FUN_100a00688(void)

{
  return ZEXT816(0x100f277d8);
}



/* Address: 0x100a00698 | thunk_FUN_1009ffca0 */

void thunk_FUN_1009ffca0(void)

{
  thunk_FUN_1009ffca0();
  return;
}



/* Address: 0x100a0069c | FUN_100a0069c */

undefined1  [16] FUN_100a0069c(void)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  if (*(char *)(unaff_x20 + 4) == '\0') {
    return ZEXT416(*(int *)((long)unaff_x20 + 0xc) -
                   ((uint)*(ushort *)((long)unaff_x20 + 9) << 8 |
                    (uint)*(byte *)((long)unaff_x20 + 0xb) << 0x18 | (uint)*(byte *)(unaff_x20 + 1))
                  );
  }
  if (*(char *)(unaff_x20 + 4) == '\x01') {
    auVar1._0_8_ = *unaff_x20;
    auVar1[8] = *(byte *)(unaff_x20 + 1);
    auVar1._9_7_ = 0;
    return auVar1;
  }
  return ZEXT816(0);
}



/* Address: 0x100a006e8 | FUN_100a006e8 */

void FUN_100a006e8(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}



/* Address: 0x100a006fc | FUN_100a006fc */

void FUN_100a006fc(void)

{
  FUN_100a01bec();
  return;
}



/* Address: 0x100a00718 | FUN_100a00718 */

void FUN_100a00718(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3 & 0xff;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Address: 0x100a00730 | FUN_100a00730 */

void FUN_100a00730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 & 0xffffffffffffff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x100a00744 | FUN_100a00744 */

void FUN_100a00744(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_70 [16];
  
  lVar7 = *(long *)(param_3 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar9 = FUN_100a0088c;
  FUN_1001f8188(FUN_100a0088c,0,param_3,PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___type_metadata_for_Swift_Never_100eadc38,param_4,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar3 = *(long *)(pcVar9 + 0x10);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    pcVar9 = pcVar9 + 0x20;
    do {
      bVar1 = SCARRY8(lVar5,*(long *)pcVar9);
      lVar5 = lVar5 + *(long *)pcVar9;
      if (bVar1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100a0088c);
        (*pcVar9)();
      }
      lVar3 = lVar3 + -1;
      pcVar9 = pcVar9 + 8;
    } while (lVar3 != 0);
  }
  _swift_bridgeObjectRelease();
  pcVar9 = *(code **)(lVar7 + 0x20);
  (*pcVar9)(auStack_70 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100f27818;
  _swift_allocObject(&DAT_100f27818,uVar8 + lVar6,uVar4 | 7);
  *(long *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  (*pcVar9)(puVar2 + uVar8,auStack_70 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_3);
  *param_1 = lVar5;
  param_1[1] = 0;
  param_1[2] = (long)&DAT_100c8dae8;
  param_1[3] = (long)puVar2;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Address: 0x100a0088c | FUN_100a0088c */

void FUN_100a0088c(ulong *param_1,long param_2)

{
  *param_1 = (ulong)(uint)(*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8));
  return;
}



/* Address: 0x100a0089c | FUN_100a0089c */

void FUN_100a0089c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_100a008b8,0,0);
  return;
}



/* Address: 0x100a008b8 | FUN_100a008b8 */

void FUN_100a008b8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  FUN_10007d048(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a00944;
                    /* WARNING: Could not recover jumptable at 0x000100a00940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
             *(undefined8 *)(unaff_x22 + 0x28),uVar2,lVar3);
  return;
}



/* Address: 0x100a00944 | FUN_100a00944 */

void FUN_100a00944(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a00988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  _swift_task_switch(FUN_100a009ac,0,0);
  return;
}



/* Address: 0x100a009ac | FUN_100a009ac */

void FUN_100a009ac(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  FUN_100004640(lVar4,lVar2);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar5;
  (**(code **)(lVar4 + 0x10))();
  piVar7 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a00a68;
                    /* WARNING: Could not recover jumptable at 0x000100a00a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(0,lVar2,lVar3);
  return;
}



/* Address: 0x100a00a68 | FUN_100a00a68 */

void FUN_100a00a68(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x40));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a00adc,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100a00ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a00adc | FUN_100a00adc */

void FUN_100a00adc(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100a00b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a00b18 | thunk_FUN_1001b8a00 */

void thunk_FUN_1001b8a00(void)

{
  FUN_1001b8a00();
  return;
}



/* Address: 0x100a00b1c | FUN_100a00b1c */

void FUN_100a00b1c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_100a0089c(param_1,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),lVar1,uVar2);
  return;
}



/* Address: 0x100a00ba0 | FUN_100a00ba0 */

void FUN_100a00ba0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(param_2,param_2);
  pcVar6 = *(code **)(lVar4 + 0x20);
  (*pcVar6)(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100f27840;
  _swift_allocObject(&DAT_100f27840,uVar5 + lVar3,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  (*pcVar6)(puVar1 + uVar5,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3);
  param_1[1] = 1;
  *param_1 = 0;
  param_1[2] = &DAT_100c8daf8;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Address: 0x100a00c78 | FUN_100a00c78 */

void FUN_100a00c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_100a00c94,0,0);
  return;
}



/* Address: 0x100a00c94 | FUN_100a00c94 */

void FUN_100a00c94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  FUN_10007d048(lVar3,uVar1);
  plVar4 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a00d18;
  FUN_100a01ee4(*(undefined8 *)(unaff_x22 + 0x18),uVar1,*(undefined8 *)(unaff_x22 + 0x20),uVar2,
                *(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x100a00d18 | FUN_100a00d18 */

void FUN_100a00d18(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a00d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  _swift_task_switch(FUN_100a00d80,0,0);
  return;
}



/* Address: 0x100a00d80 | FUN_100a00d80 */

void FUN_100a00d80(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  FUN_100004640(lVar4,lVar2);
  lVar4 = *(long *)(lVar2 + -8);
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar5;
  (**(code **)(lVar4 + 0x10))();
  piVar7 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a00e3c;
                    /* WARNING: Could not recover jumptable at 0x000100a00e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(0,lVar2,lVar3);
  return;
}



/* Address: 0x100a00e3c | FUN_100a00e3c */

void FUN_100a00e3c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x40));
  if (unaff_x20 != 0) {
    _swift_task_switch(thunk_FUN_100a00adc,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100a00eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a00eb0 | FUN_100a00eb0 */

void FUN_100a00eb0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a00c78(param_1,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),lVar1,uVar2);
  return;
}



/* Address: 0x100a00f34 | FUN_100a00f34 */

void FUN_100a00f34(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar1;
  
  *(undefined8 **)(unaff_x22 + 0x38) = unaff_x20;
  FUN_100076508(param_1,unaff_x22 + 0x10);
  uVar1 = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x40) = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  uVar1 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20[3];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined1 *)(unaff_x22 + 0xb0) = *(undefined1 *)(unaff_x20 + 4);
  _swift_task_switch(FUN_100a00f94,0,0);
  return;
}



/* Address: 0x100a00f94 | FUN_100a00f94 */

void FUN_100a00f94(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x22;
  long lVar8;
  
  if (*(char *)(unaff_x22 + 0xb0) == '\0') {
    uVar6 = *(ulong *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    FUN_10007d048(unaff_x22 + 0x10,uVar2);
    piVar7 = *(int **)(lVar3 + 8);
    iVar1 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100a01128;
                    /* WARNING: Could not recover jumptable at 0x000100a0108c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))
              (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
               uVar6 & 0xffffffffffffff,uVar2,lVar3);
    return;
  }
  if (*(char *)(unaff_x22 + 0xb0) == '\x01') {
    piVar7 = *(int **)(unaff_x22 + 0x50);
    iVar1 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100a013a0;
                    /* WARNING: Could not recover jumptable at 0x000100a01018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))(plVar5,unaff_x22 + 0x10);
    return;
  }
  lVar3 = *(long *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,lVar3);
  lVar8 = *(long *)(lVar3 + -8);
  uVar6 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar6;
  (**(code **)(lVar8 + 0x10))();
  piVar7 = *(int **)(lVar4 + 0x18);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a012f8;
                    /* WARNING: Could not recover jumptable at 0x000100a01124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(0,lVar3,lVar4);
  return;
}



/* Address: 0x100a01128 | FUN_100a01128 */

void FUN_100a01128(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a0118c;
  }
  else {
    pcVar1 = FUN_100a01404;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a0118c | FUN_100a0118c */

void FUN_100a0118c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  long lVar7;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,lVar2);
  lVar7 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  (**(code **)(lVar7 + 0x10))();
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a01248;
                    /* WARNING: Could not recover jumptable at 0x000100a01244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(0,lVar2,lVar3);
  return;
}



/* Address: 0x100a01248 | FUN_100a01248 */

void FUN_100a01248(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
    pcVar1 = FUN_100a012b4;
  }
  else {
    pcVar1 = FUN_100a01448;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a012b4 | FUN_100a012b4 */

void FUN_100a012b4(void)

{
  long unaff_x22;
  
  FUN_100a01520(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a012f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a012f8 | FUN_100a012f8 */

void FUN_100a012f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
    pcVar1 = FUN_100a01364;
  }
  else {
    pcVar1 = FUN_100a01498;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a01364 | FUN_100a01364 */

void FUN_100a01364(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a0139c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a013a0 | FUN_100a013a0 */

void FUN_100a013a0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a012b4;
  }
  else {
    pcVar1 = FUN_100a014dc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a01404 | FUN_100a01404 */

void FUN_100a01404(void)

{
  long unaff_x22;
  
  FUN_100a01520(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a01444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a01448 | FUN_100a01448 */

void FUN_100a01448(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_100a01520(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar1);
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a01494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a01498 | FUN_100a01498 */

void FUN_100a01498(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a014d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a014dc | FUN_100a014dc */

void FUN_100a014dc(void)

{
  long unaff_x22;
  
  FUN_100a01520(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a0151c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a01520 | FUN_100a01520 */

undefined8 * FUN_100a01520(undefined8 *param_1)

{
  FUN_1009ffc80(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return param_1;
}



/* Address: 0x100a01554 | FUN_100a01554 */

void FUN_100a01554(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_100f27868;
  _swift_allocObject(&DAT_100f27868,0x48,7);
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  puVar1[0x30] = *(undefined1 *)(unaff_x20 + 4);
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  param_1[1] = 1;
  *param_1 = 0;
  param_1[2] = &DAT_100c8db10;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = 1;
  _swift_retain(param_3);
  return;
}



/* Address: 0x100a015cc | FUN_100a015cc */

void FUN_100a015cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  _swift_task_switch(FUN_100a015e8,0,0);
  return;
}



/* Address: 0x100a015e8 | FUN_100a015e8 */

void FUN_100a015e8(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar6 = *(long *)(unaff_x22 + 0x88);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x90);
  lVar1 = *(long *)(lVar6 + 0x18);
  uVar9 = *(undefined8 *)(lVar6 + 0x20);
  FUN_100004640(lVar6,lVar1);
  lVar6 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  (**(code **)(lVar6 + 0x10))();
  uVar4 = 0;
  FUN_100a03248(0,lVar1,uVar9);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined ***)(unaff_x22 + 0x30) = &PTR_PTR_100f27a10;
  lVar6 = unaff_x22 + 0x10;
  FUN_10000cbb0(lVar6);
  FUN_100a023b8(lVar6,uVar7,uVar8,lVar1,uVar9);
  _swift_task_dealloc(uVar3);
  uVar8 = puVar2[1];
  uVar7 = *puVar2;
  uVar4 = puVar2[3];
  uVar9 = puVar2[2];
  *(undefined1 *)(unaff_x22 + 0x58) = *(undefined1 *)(puVar2 + 4);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
  FUN_100a01bec(unaff_x22 + 0x38,unaff_x22 + 0x60);
  plVar5 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a01700;
  FUN_100a00f34(plVar5,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a01700 | FUN_100a01700 */

void FUN_100a01700(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa8));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a0176c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a01768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a0176c | FUN_100a0176c */

void FUN_100a0176c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a01774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a01778 | thunk_FUN_100a01b4c */

void thunk_FUN_100a01b4c(void)

{
  long unaff_x20;
  
  FUN_1009ffc80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}


