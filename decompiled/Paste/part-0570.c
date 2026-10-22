/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10065648c | FUN_10065648c */

undefined8 FUN_10065648c(void)

{
  return 0x3a;
}



/* Address: 0x100656494 | FUN_100656494 */

undefined8 FUN_100656494(void)

{
  return 0x3b;
}



/* Address: 0x10065649c | FUN_10065649c */

undefined8 FUN_10065649c(void)

{
  return 0x3c;
}



/* Address: 0x1006564a4 | FUN_1006564a4 */

undefined8 FUN_1006564a4(void)

{
  return 0x58;
}



/* Address: 0x1006564ac | FUN_1006564ac */

undefined8 FUN_1006564ac(void)

{
  return 0x59;
}



/* Address: 0x1006564b4 | FUN_1006564b4 */

undefined8 FUN_1006564b4(void)

{
  return 0x61;
}



/* Address: 0x1006564bc | FUN_1006564bc */

undefined8 FUN_1006564bc(void)

{
  return 0x62;
}



/* Address: 0x1006564c4 | FUN_1006564c4 */

undefined8 FUN_1006564c4(void)

{
  return 0x67;
}



/* Address: 0x1006564cc | FUN_1006564cc */

undefined8 FUN_1006564cc(void)

{
  return 0x6c;
}



/* Address: 0x1006564d4 | FUN_1006564d4 */

undefined8 FUN_1006564d4(void)

{
  return 0x70;
}



/* Address: 0x1006564dc | FUN_1006564dc */

undefined8 FUN_1006564dc(void)

{
  return 0x73;
}



/* Address: 0x1006564e4 | FUN_1006564e4 */

undefined8 FUN_1006564e4(void)

{
  return 0x85;
}



/* Address: 0x1006564ec | FUN_1006564ec */

undefined8 FUN_1006564ec(void)

{
  return 0x8a;
}



/* Address: 0x1006564f4 | FUN_1006564f4 */

undefined8 FUN_1006564f4(void)

{
  return 0x8b;
}



/* Address: 0x1006564fc | FUN_1006564fc */

undefined8 FUN_1006564fc(void)

{
  return 0x8c;
}



/* Address: 0x100656504 | FUN_100656504 */

undefined8 FUN_100656504(void)

{
  return 0x8d;
}



/* Address: 0x10065650c | FUN_10065650c */

undefined8 FUN_10065650c(void)

{
  return 0x8e;
}



/* Address: 0x100656514 | FUN_100656514 */

undefined8 FUN_100656514(void)

{
  return 0x8f;
}



/* Address: 0x10065651c | FUN_10065651c */

undefined8 FUN_10065651c(void)

{
  return 0x90;
}



/* Address: 0x100656524 | FUN_100656524 */

undefined1  [16] FUN_100656524(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar1 = 0;
  uVar2 = 0;
  switch(param_1) {
  case 0:
    pcVar3 = "IPv6 Hop-by-Hop Option";
    break;
  case 1:
    auVar16._8_8_ = 0x8000000100daf8c0;
    auVar16._0_8_ = 0xd000000000000018;
    return auVar16;
  case 2:
    pcVar3 = "Internet Group Management";
    goto LAB_1006566fc;
  case 3:
    pcVar3 = "Gateway-to-Gateway";
    goto LAB_1006568b8;
  case 4:
    pcVar3 = "IPv4 encapsulation";
    goto LAB_1006568b8;
  case 5:
    auVar19._8_8_ = &DAT_e600000000000000;
    auVar19._0_8_ = 0x6d6165727453;
    return auVar19;
  case 6:
    pcVar3 = "Transmission Control";
    goto LAB_100656850;
  case 8:
    pcVar3 = "Exterior Gateway Protocol";
    goto LAB_1006566fc;
  case 0xb:
    pcVar3 = "Network Voice Protocol";
    break;
  case 0x11:
    auVar15._8_8_ = 0xed00006d61726761;
    auVar15._0_8_ = 0x7461442072657355;
    return auVar15;
  case 0x14:
    auVar23._8_8_ = 0xef676e69726f7469;
    auVar23._0_8_ = 0x6e6f4d2074736f48;
    return auVar23;
  case 0x1b:
    pcVar3 = "Reliable Data Protocol";
    break;
  case 0x1c:
    pcVar3 = "Internet Reliable Transaction";
    goto LAB_10065663c;
  case 0x1d:
    pcVar3 = "ISO Transport Protocol Class 4";
    goto LAB_1006568d8;
  case 0x1e:
    auVar17._8_8_ = 0x8000000100daf780;
    auVar17._0_8_ = 0xd00000000000001b;
    return auVar17;
  case 0x21:
    auVar18._8_8_ = 0x8000000100daf750;
    auVar18._0_8_ = 0xd000000000000024;
    return auVar18;
  case 0x29:
    pcVar3 = "IPv6 encapsulation";
LAB_1006568b8:
    auVar24._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar24._0_8_ = 0xd000000000000012;
    return auVar24;
  case 0x2e:
    pcVar3 = "Reservation Protocol";
    goto LAB_100656850;
  case 0x2f:
    pcVar3 = "Generic Routing Encapsulation";
LAB_10065663c:
    auVar8._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar8._0_8_ = 0xd00000000000001d;
    return auVar8;
  case 0x30:
    pcVar3 = "Dynamic Source Routing Protocol";
    goto LAB_1006566cc;
  case 0x32:
    pcVar3 = "Encap Security Payload";
    break;
  case 0x33:
    auVar5._8_8_ = 0x8000000100daf690;
    auVar5._0_8_ = 0xd000000000000015;
    return auVar5;
  case 0x36:
    pcVar3 = "NBMA Address Resolution Protocol";
    goto LAB_100656688;
  case 0x3a:
    auVar6._8_8_ = 0xed00003676504920;
    auVar6._0_8_ = 0x726f6620504d4349;
    return auVar6;
  case 0x3b:
    auVar13._8_8_ = 0x8000000100daf640;
    auVar13._0_8_ = 0xd000000000000017;
    return auVar13;
  case 0x3c:
    pcVar3 = "Destination Options for IPv6";
    goto LAB_100656610;
  case 0x58:
    auVar28._8_8_ = &DAT_e500000000000000;
    auVar28._0_8_ = 0x5052474945;
    return auVar28;
  case 0x59:
    auVar27._8_8_ = &DAT_e700000000000000;
    auVar27._0_8_ = 0x5047494650534f;
    return auVar27;
  case 0x61:
    pcVar3 = "Ethernet-within-IP Encapsulation";
LAB_100656688:
    auVar10._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000020;
    return auVar10;
  case 0x62:
    pcVar3 = "Encapsulation Header";
LAB_100656850:
    auVar21._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar21._0_8_ = 0xd000000000000014;
    return auVar21;
  case 0x67:
    pcVar3 = "Protocol Independent Multicast";
LAB_1006568d8:
    auVar25._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar25._0_8_ = 0xd00000000000001e;
    return auVar25;
  case 0x6c:
    pcVar3 = "IP Payload Compression Protocol";
LAB_1006566cc:
    auVar11._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar11._0_8_ = 0xd00000000000001f;
    return auVar11;
  case 0x70:
    auVar30._8_8_ = 0x8000000100daf560;
    auVar30._0_8_ = 0xd000000000000022;
    return auVar30;
  case 0x73:
    pcVar3 = "Layer Two Tunneling Protocol";
LAB_100656610:
    auVar7._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar7._0_8_ = 0xd00000000000001c;
    return auVar7;
  case 0x85:
    auVar22._8_8_ = 0xed00006c656e6e61;
    auVar22._0_8_ = 0x6843206572626946;
    return auVar22;
  case 0x8a:
    auVar29._8_8_ = 0xef736c6f636f746f;
    auVar29._0_8_ = 0x72502054454e414d;
    return auVar29;
  case 0x8b:
    pcVar3 = "Host Identity Protocol";
    break;
  case 0x8c:
    auVar20._8_8_ = 0xee006c6f636f746f;
    auVar20._0_8_ = 0x725020366d696853;
    return auVar20;
  case 0x8d:
    auVar4._8_8_ = 0x8000000100daf4f0;
    auVar4._0_8_ = 0xd000000000000026;
    return auVar4;
  case 0x8e:
    pcVar3 = "Robust Header Compression";
LAB_1006566fc:
    auVar12._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar12._0_8_ = 0xd000000000000019;
    return auVar12;
  case 0x8f:
    auVar9._8_8_ = &DAT_e800000000000000;
    auVar9._0_8_ = 0x74656e7265687445;
    return auVar9;
  case 0x90:
    uVar2 = 0x8000000100daf4a0;
    uVar1 = 0xd000000000000025;
  case 7:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x31:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x71:
  case 0x72:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
    auVar14._8_8_ = uVar2;
    auVar14._0_8_ = uVar1;
    return auVar14;
  default:
    return ZEXT816(0);
  }
  auVar26._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
  auVar26._0_8_ = 0xd000000000000016;
  return auVar26;
}



/* Address: 0x100656984 | FUN_100656984 */

undefined1  [16] FUN_100656984(undefined8 param_1,long param_2,char *param_3,void *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  String SVar4;
  String SVar5;
  String SVar6;
  
  FUN_100656524();
  lVar1 = -0x7ffffffeff250b80;
  uVar2 = 0xd000000000000010;
  if (param_2 != 0) {
    lVar1 = param_2;
    uVar2 = param_1;
  }
  SVar4.bridgeObject = (void *)0xe300000000000000;
  SVar4.str = (char *)0x202d20;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar4,SVar5);
  SVar4 = Swift::CustomStringConvertible::get_description();
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar4,SVar6);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x100656a1c | thunk_FUN_100656a20 */

void thunk_FUN_100656a20(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8878 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b29c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b29c,&DAT_100ef1418);
  DAT_100fd8878 = pTVar1;
  return;
}



/* Address: 0x100656a20 | FUN_100656a20 */

void FUN_100656a20(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8878 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b29c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b29c,&DAT_100ef1418);
  DAT_100fd8878 = pTVar1;
  return;
}



/* Address: 0x100656a60 | FUN_100656a60 */

void FUN_100656a60(void)

{
  undefined1 *unaff_x20;
  
  FUN_100656984(*unaff_x20);
  return;
}



/* Address: 0x100656a68 | FUN_100656a68 */

undefined1  [16] FUN_100656a68(void)

{
  return ZEXT816(0x100ef1418);
}



/* Address: 0x100656a78 | FUN_100656a78 */

void FUN_100656a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,long param_8,undefined8 param_9,
                  long param_10,undefined4 param_11,undefined4 param_12,long param_13)

{
  __int64 _Var1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  __int64 local_68;
  
  lVar9 = *(long *)(param_6 + -8);
  lVar5 = (long)&local_90 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = lVar5 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = *(long *)(param_7 + -8);
  local_80 = param_10;
  uVar2 = *(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = lVar3 - uVar2;
  lVar7 = lVar6 - uVar2;
  lVar8 = lVar7 - uVar2;
  local_90 = param_8;
  local_88 = param_3;
  local_70 = param_1;
  (**(code **)(*(long *)(param_5 + -8) + 0x10))(lVar3,param_2,param_5);
  uVar10 = *(undefined8 *)(param_13 + 8);
  Swift::BinaryInteger::_init(lVar8,lVar3,param_5,*(undefined8 *)(local_90 + 8),param_7,uVar10);
  (**(code **)(lVar9 + 0x10))(lVar5,local_88,param_6);
  Swift::BinaryInteger::_init(lVar7,lVar5,param_6,*(undefined8 *)(local_80 + 8),param_7,uVar10);
  _Var1 = Swift::FixedWidthInteger::get_bitWidth();
  local_68 = _Var1;
  FUN_10061602c();
  Swift::BinaryInteger::_<<_infix
            (lVar6,lVar8,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var1,param_7,uVar10)
  ;
  Swift::BinaryInteger::__infix(local_70,lVar6,lVar7,param_7,uVar10);
  pcVar4 = *(code **)(local_78 + 8);
  (*pcVar4)(lVar6,param_7);
  (*pcVar4)(lVar7,param_7);
  (*pcVar4)(lVar8,param_7);
  return;
}



/* Address: 0x100656c38 | FUN_100656c38 */

void FUN_100656c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,long param_9,
                  undefined4 param_10,undefined4 param_11,long param_12,undefined4 param_13,
                  undefined4 param_14,long param_15)

{
  undefined8 uVar1;
  __int64 _Var2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  __int64 local_68;
  
  local_b8 = param_15;
  lVar8 = (long)&local_c0 - (*(long *)(*(long *)(param_8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar8 - (*(long *)(*(long *)(param_7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = *(long *)(param_6 + -8);
  uVar3 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar4 = lVar10 - uVar3;
  local_a0 = lVar4 - uVar3;
  local_78 = local_a0 - uVar3;
  local_c0 = local_78 - uVar3;
  lVar6 = local_c0 - uVar3;
  local_98 = param_3;
  local_88 = param_1;
  local_80 = param_2;
  local_70 = lVar6;
  Swift::FixedWidthInteger::get_max();
  uVar5 = *(undefined8 *)(param_9 + 8);
  local_a8 = *(undefined8 *)(param_12 + 8);
  Swift::BinaryInteger::_init(lVar6,lVar10,param_7,local_a8,param_6,uVar5);
  lVar10 = local_b8;
  Swift::FixedWidthInteger::get_max();
  lVar6 = local_c0;
  local_b0 = *(undefined8 *)(lVar10 + 8);
  Swift::BinaryInteger::_init(local_c0,lVar8,param_8,local_b0,param_6,uVar5);
  uVar1 = local_98;
  Swift::BinaryInteger::__infix(local_78,local_98,lVar6,param_6,uVar5);
  _Var2 = Swift::FixedWidthInteger::get_bitWidth();
  local_68 = _Var2;
  FUN_10061602c();
  Swift::BinaryInteger::_>>_infix
            (lVar4,uVar1,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var2,param_6,uVar5);
  lVar10 = local_a0;
  Swift::BinaryInteger::__infix(local_a0,lVar4,local_70,param_6,uVar5);
  lVar8 = local_90;
  pcVar7 = *(code **)(local_90 + 8);
  (*pcVar7)(lVar4,param_6);
  pcVar9 = *(code **)(lVar8 + 0x10);
  (*pcVar9)(lVar4,lVar10,param_6);
  Swift::BinaryInteger::_init(local_88,lVar4,param_6,uVar5,param_7,local_a8);
  lVar8 = local_78;
  (*pcVar9)(lVar4,local_78,param_6);
  Swift::BinaryInteger::_init(local_80,lVar4,param_6,uVar5,param_8,local_b0);
  (*pcVar7)(lVar10,param_6);
  (*pcVar7)(lVar8,param_6);
  (*pcVar7)(lVar6,param_6);
  (*pcVar7)(local_70,param_6);
  return;
}



/* Address: 0x100656ed8 | FUN_100656ed8 */

ulong FUN_100656ed8(ulong param_1,uint param_2,uint param_3)

{
  return (ulong)(param_2 & 0xffff) << 0x20 | (ulong)(param_3 & 0xff) << 0x30 | param_1 & 0xffffffff;
}



/* Address: 0x100656ef4 | FUN_100656ef4 */

ulong FUN_100656ef4(ulong param_1)

{
  return param_1 & 0xffffffffffffff;
}



/* Address: 0x100656efc | FUN_100656efc */

uint FUN_100656efc(int param_1,uint param_2)

{
  return param_2 & 0xff | param_1 << 8;
}



/* Address: 0x100656f08 | FUN_100656f08 */

uint FUN_100656f08(uint param_1)

{
  return (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
}



/* Address: 0x100656f10 | FUN_100656f10 */

uint FUN_100656f10(uint param_1,uint param_2)

{
  return param_2 & 0xff | (param_1 & 0xffff) << 8;
}



/* Address: 0x100656f20 | FUN_100656f20 */

uint FUN_100656f20(uint param_1)

{
  return param_1 >> 8 & 0xffff | (param_1 & 0xff) << 0x10;
}



/* Address: 0x100656f30 | FUN_100656f30 */

ulong FUN_100656f30(long param_1,uint param_2)

{
  return (ulong)param_2 | param_1 << 0x20;
}



/* Address: 0x100656f3c | FUN_100656f3c */

ulong FUN_100656f3c(ulong param_1)

{
  return param_1 >> 0x20 | param_1 << 0x20;
}



/* Address: 0x100656f44 | FUN_100656f44 */

undefined1  [16] FUN_100656f44(void)

{
  return ZEXT816(0x100ef14a8);
}



/* Address: 0x100656f54 | FUN_100656f54 */

undefined1  [16] FUN_100656f54(void)

{
  return ZEXT816(0x100ef14c8);
}



/* Address: 0x100656f64 | FUN_100656f64 */

bool FUN_100656f64(int3 param_1,int3 param_2)

{
  return param_1 == param_2;
}



/* Address: 0x100656f78 | FUN_100656f78 */

uint FUN_100656f78(uint param_1)

{
  return param_1 >> 0x10 & 0xff | (param_1 & 0xffff) << 8;
}



/* Address: 0x100656f88 | FUN_100656f88 */

void FUN_100656f88(undefined2 param_1,undefined1 param_2)

{
  undefined2 *unaff_x20;
  
  *unaff_x20 = param_1;
  *(undefined1 *)(unaff_x20 + 1) = param_2;
  return;
}



/* Address: 0x100656f94 | FUN_100656f94 */

bool FUN_100656f94(short *param_1,short *param_2)

{
  return *param_1 == *param_2 && (char)param_1[1] == (char)param_2[1];
}



/* Address: 0x100656fbc | FUN_100656fbc */

String FUN_100656fbc(void)

{
  String SVar1;
  
  FUN_100619254();
  SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  return SVar1;
}



/* Address: 0x100657000 | FUN_100657000 */

String FUN_100657000(void)

{
  String SVar1;
  
  FUN_100619254();
  SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  return SVar1;
}



/* Address: 0x100657048 | FUN_100657048 */

void FUN_100657048(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10065705c | FUN_10065705c */

int FUN_10065705c(uint3 *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    if (param_2 + 0x1ffffffU >> 0x18 == 0) {
      uVar1 = (uint)*(ushort *)((long)param_1 + 3);
      if (*(ushort *)((long)param_1 + 3) != 0) {
LAB_100657088:
        return ((uint)*param_1 | uVar1 << 0x18) - 0xffffff;
      }
    }
    else {
      uVar1 = (uint)*(byte *)((long)param_1 + 3);
      if (*(byte *)((long)param_1 + 3) != 0) goto LAB_100657088;
    }
  }
  return 0;
}



/* Address: 0x1006570a4 | FUN_1006570a4 */

void FUN_1006570a4(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (param_3 + 0x1ffffffU >> 0x18 == 0) {
    iVar3 = 2;
  }
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = iVar3;
  }
  if (param_2 == 0) {
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        *(undefined2 *)((long)param_1 + 3) = 0;
        return;
      }
      *(undefined1 *)((long)param_1 + 3) = 0;
      return;
    }
  }
  else {
    uVar2 = param_2 - 1;
    *param_1 = (short)uVar2;
    *(char *)(param_1 + 1) = (char)(uVar2 >> 0x10);
    if (iVar1 != 0) {
      iVar3 = (uVar2 >> 0x18) + 1;
      if (iVar1 != 2) {
        *(char *)((long)param_1 + 3) = (char)iVar3;
        return;
      }
      *(short *)((long)param_1 + 3) = (short)iVar3;
    }
  }
  return;
}



/* Address: 0x100657118 | FUN_100657118 */

undefined1  [16] FUN_100657118(void)

{
  return ZEXT816(0x100ef1540);
}



/* Address: 0x100657128 | FUN_100657128 */

undefined1  [16] FUN_100657128(void)

{
  return ZEXT816(0x100ef15c0);
}



/* Address: 0x100657138 | FUN_100657138 */

bool FUN_100657138(int *param_1,int *param_2)

{
  if (*param_1 != *param_2 || (short)param_1[1] != (short)param_2[1]) {
    return false;
  }
  return *(char *)((long)param_1 + 6) == *(char *)((long)param_2 + 6);
}



/* Address: 0x100657170 | FUN_100657170 */

String FUN_100657170(void)

{
  String SVar1;
  
  FUN_100619170();
  SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  return SVar1;
}



/* Address: 0x1006571c0 | FUN_1006571c0 */

ulong FUN_1006571c0(ulong param_1)

{
  code *pcVar1;
  
  if (-1 < (long)param_1) {
    return param_1 & 0xffffffffffffff;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006571d0);
  (*pcVar1)();
}



/* Address: 0x1006571d0 | thunk_FUN_1006588ec */

void thunk_FUN_1006588ec(void)

{
  FUN_1006588ec();
  return;
}



/* Address: 0x1006571d4 | FUN_1006571d4 */

ulong FUN_1006571d4(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x20);
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  return uVar1;
}



/* Address: 0x1006571fc | FUN_1006571fc */

undefined8 FUN_1006571fc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_1005d84e8(uVar1);
  return uVar1;
}



/* Address: 0x100657224 | FUN_100657224 */

undefined8 FUN_100657224(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_1005d84e8(uVar1);
  return uVar1;
}



/* Address: 0x10065724c | FUN_10065724c */

undefined8 FUN_10065724c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_1005d84e8(uVar1);
  return uVar1;
}



/* Address: 0x100657274 | FUN_100657274 */

undefined8 FUN_100657274(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x48);
}



/* Address: 0x10065727c | FUN_10065727c */

/* WARNING: Removing unreachable block (ram,0x0001006573b0) */
/* WARNING: Type propagation algorithm not settling */

long FUN_10065727c(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  void *pvVar3;
  long unaff_x20;
  UnsafePointer<__int8> cString;
  uint uVar4;
  long lVar5;
  String SVar6;
  
  cString.unknown = *(undefined **)(param_1 + 8);
  if (cString.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100657428);
    (*pcVar1)();
  }
  SVar6 = Swift::String::init(cString);
  pvVar3 = SVar6.bridgeObject;
  *(String *)(unaff_x20 + 0x10) = SVar6;
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 == 0) {
LAB_1006572cc:
    _swift_bridgeObjectRelease(pvVar3);
    _swift_deallocPartialClassInstance();
    return 0;
  }
  FUN_100657428();
  if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    pvVar3 = *(void **)(unaff_x20 + 0x18);
    goto LAB_1006572cc;
  }
  *(ulong *)(unaff_x20 + 0x20) = uVar2;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    *(undefined8 *)(unaff_x20 + 0x28) = 0xf000000000000007;
    uVar4 = *(uint *)(param_1 + 0x10);
    if ((uVar4 >> 1 & 1) != 0) {
      _swift_retain(uVar2 & 0x3fffffffffffffff);
      lVar5 = *(long *)(param_1 + 0x28);
      goto joined_r0x000100657378;
    }
    _swift_retain(uVar2 & 0x3fffffffffffffff);
  }
  else {
    _swift_retain(uVar2 & 0x3fffffffffffffff);
    FUN_100657428();
    *(long *)(unaff_x20 + 0x28) = lVar5;
    uVar4 = *(uint *)(param_1 + 0x10);
    if ((uVar4 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x28);
joined_r0x000100657378:
      if (lVar5 != 0) {
        FUN_100657428();
        *(long *)(unaff_x20 + 0x30) = lVar5;
        *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000007;
        goto code_r0x00010065735c;
      }
    }
  }
  if (((uVar4 >> 4 & 1) == 0) || (lVar5 = *(long *)(param_1 + 0x28), lVar5 == 0)) {
    *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000007;
    *(undefined8 *)(unaff_x20 + 0x30) = 0xf000000000000007;
  }
  else {
    *(undefined8 *)(unaff_x20 + 0x30) = 0xf000000000000007;
    FUN_100657428();
    *(long *)(unaff_x20 + 0x38) = lVar5;
  }
code_r0x00010065735c:
  *(bool *)(unaff_x20 + 0x40) = (uVar4 >> 0xf & 1) != 0;
  FUN_100669f68();
  FUN_1005d8534(uVar2);
  *(ulong *)(unaff_x20 + 0x48) = (ulong)cString.unknown & 0xffffffff;
  return unaff_x20;
}



/* Address: 0x100657428 | FUN_100657428 */

ulong FUN_100657428(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  bVar1 = param_1[1];
  if (bVar1 == 1) {
    puVar3 = &DAT_100fd8a40;
    FUN_1000f7830(&DAT_100fd8a40,0x100c6c110);
    _swift_allocObject();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(puVar3 + 0x58) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(puVar3 + 0x50) = uVar4;
    *(undefined8 *)(puVar3 + 0x68) = uVar6;
    *(undefined8 *)(puVar3 + 0x60) = uVar5;
    uVar4 = *(undefined8 *)(param_1 + 0x5a);
    *(undefined8 *)(puVar3 + 0x72) = *(undefined8 *)(param_1 + 0x62);
    *(undefined8 *)(puVar3 + 0x6a) = uVar4;
    uVar4 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(puVar3 + 0x10) = uVar4;
    *(undefined8 *)(puVar3 + 0x28) = uVar6;
    *(undefined8 *)(puVar3 + 0x20) = uVar5;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(puVar3 + 0x38) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(puVar3 + 0x30) = uVar6;
    *(undefined8 *)(puVar3 + 0x48) = uVar5;
    *(undefined8 *)(puVar3 + 0x40) = uVar4;
    return (ulong)puVar3 | 0x8000000000000000;
  }
  if (bVar1 != 0x1e) {
    if (bVar1 == 2) {
      uVar2 = (ulong)*param_1 | (ulong)*(ushort *)(param_1 + 2) << 0x10 |
              (ulong)*(uint *)(param_1 + 4) << 0x20 | 0x200;
      FUN_100668d24(uVar2,*(undefined8 *)(param_1 + 8));
      return uVar2;
    }
    return 0xf000000000000007;
  }
  uVar2 = (ulong)*param_1 | (ulong)*(ushort *)(param_1 + 2) << 0x10 |
          (ulong)*(uint *)(param_1 + 4) << 0x20 | 0x1e00;
  FUN_100668e40(uVar2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return uVar2;
}



/* Address: 0x1006574f8 | FUN_1006574f8 */

void FUN_1006574f8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(ulong *)(unaff_x20 + 0x20) & 0x3fffffffffffffff);
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x100657538 | FUN_100657538 */

void FUN_100657538(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(ulong *)(unaff_x20 + 0x20) & 0x3fffffffffffffff);
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100657580 | FUN_100657580 */

undefined1  [16] FUN_100657580(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  void *pvVar5;
  long unaff_x20;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  void *pvVar3;
  void *pvVar4;
  
  pvVar5 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x18,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 0x10),SVar10);
  pvVar3 = (void *)0xea00000000002073;
  SVar6.bridgeObject = (void *)0xea00000000002073;
  SVar6.str = (char *)0x736572646461203a;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar6,SVar11);
  pcVar2 = *(char **)(unaff_x20 + 0x20);
  FUN_100666bcc();
  SVar7.bridgeObject = pvVar3;
  SVar7.str = pcVar2;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  pvVar4 = pvVar3;
  Swift::String::append(SVar7,SVar12);
  _swift_bridgeObjectRelease(pvVar3);
  pcVar2 = *(char **)(unaff_x20 + 0x28);
  if ((((ulong)pcVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    FUN_100666bcc();
    SVar8.bridgeObject = pvVar4;
    SVar8.str = pcVar2;
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(SVar8,SVar13);
    _swift_bridgeObjectRelease(pvVar4);
    pcVar2 = (char *)0x6b73616d74656e20;
    pvVar5 = (void *)0xe900000000000020;
  }
  _swift_bridgeObjectRetain(0xea00000000002065);
  SVar9.bridgeObject = pvVar5;
  SVar9.str = pcVar2;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_bridgeObjectRelease(0xea00000000002065);
  _swift_bridgeObjectRelease(pvVar5);
  auVar1._8_8_ = 0xea00000000002065;
  auVar1._0_8_ = 0x6361667265746e49;
  return auVar1;
}



/* Address: 0x1006576b4 | FUN_1006576b4 */

void FUN_1006576b4(void)

{
  FUN_100657580();
  return;
}



/* Address: 0x1006576d4 | FUN_1006576d4 */

void FUN_1006576d4(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1006588ec(*param_1,*param_2);
  return;
}


