/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100adc3f0 | FUN_100adc3f0 */

undefined1  [16] FUN_100adc3f0(void)

{
  return ZEXT816(0x100f31730);
}



/* Address: 0x100adc400 | FUN_100adc400 */

void FUN_100adc400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100adc414 | FUN_100adc414 */

int FUN_100adc414(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[9] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x100adc434 | FUN_100adc434 */

void FUN_100adc434(ulong *param_1,int param_2,int param_3)

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
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 - 1);
    param_1[1] = 0;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x24) = uVar1;
  return;
}



/* Address: 0x100adc464 | FUN_100adc464 */

undefined1  [16] FUN_100adc464(void)

{
  return ZEXT816(0x100f317a8);
}



/* Address: 0x100adc474 | thunk_FUN_100adc478 */

void thunk_FUN_100adc478(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8620 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c949fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c949fc,&DAT_100f31730);
  DAT_100ff8620 = pTVar1;
  return;
}



/* Address: 0x100adc478 | FUN_100adc478 */

void FUN_100adc478(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8620 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c949fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c949fc,&DAT_100f31730);
  DAT_100ff8620 = pTVar1;
  return;
}



/* Address: 0x100adc4b8 | thunk_FUN_100adc4bc */

void thunk_FUN_100adc4bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8628 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94a64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94a64,&DAT_100f316a0);
  DAT_100ff8628 = pTVar1;
  return;
}



/* Address: 0x100adc4bc | FUN_100adc4bc */

void FUN_100adc4bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8628 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94a64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94a64,&DAT_100f316a0);
  DAT_100ff8628 = pTVar1;
  return;
}



/* Address: 0x100adc4fc | FUN_100adc4fc */

long FUN_100adc4fc(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [36];
  char local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar4 = (ulong)*(ushort *)((long)unaff_x20 + 0x84) + (ulong)*(ushort *)((long)unaff_x20 + 0x86) +
          0x1e;
  if (*(short *)(unaff_x20 + 0xe) == 0) {
    FUN_100adc7dc();
  }
  else {
    FUN_100adcadc();
  }
  if (CARRY8(uVar4,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100adc5dc);
    (*pcVar3)();
  }
  uVar4 = uVar4 + param_1;
  uStack_58 = unaff_x20[9];
  local_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  local_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uVar5 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  local_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  local_a0._6_1_ = (byte)((ulong)uVar5 >> 0x30);
  bVar1 = local_a0._6_1_ < 0x2d;
  local_a0 = uVar5;
  if ((bVar1) && (FUN_100adaf98(auStack_c8), local_a4 == '\x01')) {
    uVar2 = 0x10;
    if (0xe < (ulong)unaff_x20[0x17] >> 0x3c) {
      uVar2 = 0;
    }
    if (CARRY8(uVar4,uVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100adc59c);
      (*pcVar3)();
    }
  }
  else {
    uVar2 = 0x18;
    if (0xe < (ulong)unaff_x20[0x1b] >> 0x3c) {
      uVar2 = 0;
    }
    if (CARRY8(uVar4,uVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100adc5e0);
      (*pcVar3)();
    }
  }
  return uVar4 + uVar2;
}



/* Address: 0x100adc5e0 | FUN_100adc5e0 */

undefined1 FUN_100adc5e0(void)

{
  char *pcVar1;
  void *pvVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  __uint16 _Var7;
  Encoding EVar8;
  Encoding EVar9;
  Encoding data;
  void *pvVar10;
  ulong uVar11;
  long unaff_x20;
  code *pcVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  String SVar16;
  String SVar17;
  
  EVar8 = Encoding::_typeMetadataAccessor();
  lVar14 = *(long *)(EVar8.unknown + -8);
  uVar11 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)(&stack0xffffffffffffffa0 + -uVar11) - uVar11;
  cVar4 = *(char *)(unaff_x20 + 5);
  data.unknown = *(undefined **)(unaff_x20 + 0x30);
  pvVar10 = *(void **)(unaff_x20 + 0x38);
  if (cVar4 == '\0') {
    iVar15 = 0;
    uVar3 = *(uint *)(unaff_x20 + 0x28);
  }
  else if (cVar4 == '\x03') {
    iVar15 = 1;
    uVar3 = *(uint *)(unaff_x20 + 0x28);
  }
  else if (cVar4 == '\x13') {
    iVar15 = 2;
    uVar3 = *(uint *)(unaff_x20 + 0x28);
  }
  else {
    iVar15 = 3;
    uVar3 = *(uint *)(unaff_x20 + 0x28);
  }
  if ((*(ushort *)(unaff_x20 + 8) >> 0xb & 1) == 0) {
    if (DAT_100ff8630 != -1) {
      _swift_once(&DAT_100ff8630,FUN_100adcca4);
    }
    EVar9 = EVar8;
    FUN_1000cd990(EVar8.unknown,&DAT_101058310);
    pcVar12 = *(code **)(lVar14 + 0x10);
    (*pcVar12)(lVar13,EVar9.unknown,EVar8.unknown);
  }
  else {
    Encoding::_get_utf8(EVar8);
    pcVar12 = *(code **)(lVar14 + 0x10);
  }
  (*pcVar12)(&stack0xffffffffffffffa0 + -uVar11,lVar13,EVar8.unknown);
  (extension_Foundation)::Swift::String::_init(data);
  pcVar1 = (char *)0x0;
  if (pvVar10 != (void *)0x0) {
    pcVar1 = data.unknown;
  }
  pvVar2 = (void *)0xe000000000000000;
  if (pvVar10 != (void *)0x0) {
    pvVar2 = pvVar10;
  }
  (**(code **)(lVar14 + 8))(lVar13,EVar8.unknown);
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = (char *)0x2f;
  SVar17.bridgeObject = pvVar2;
  SVar17.str = pcVar1;
  bVar5 = Swift::String::hasSuffix(SVar16,SVar17);
  _swift_bridgeObjectRelease(pvVar2);
  if (iVar15 - 1U < 2) {
    _Var7 = Darwin::get_S_IFMT();
    uVar3 = (uint)_Var7 & uVar3 >> 0x10;
    _Var7 = Darwin::get_S_IFREG();
    if (uVar3 == _Var7) {
      uVar6 = 0;
    }
    else {
      _Var7 = Darwin::get_S_IFDIR();
      if (uVar3 == _Var7) {
        uVar6 = 1;
      }
      else {
        _Var7 = Darwin::get_S_IFLNK();
        uVar6 = 2;
        if (uVar3 != _Var7) {
          uVar6 = bVar5;
        }
      }
    }
  }
  else {
    uVar6 = bVar5 || (uVar3 & 0xfffffff0) == 0x10;
    if (iVar15 != 0) {
      uVar6 = bVar5;
    }
  }
  return uVar6;
}



/* Address: 0x100adc7dc | FUN_100adc7dc */

ulong FUN_100adc7dc(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_118 [36];
  char local_f4;
  undefined1 auStack_f0 [36];
  char local_cc;
  undefined1 auStack_c8 [8];
  ulong local_c0;
  char local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_98 = unaff_x20[1];
  uVar1 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  local_90 = unaff_x20[2];
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  local_50 = unaff_x20[10];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  local_70 = unaff_x20[6];
  local_40 = unaff_x20[0xc];
  local_a0._6_1_ = (byte)((ulong)uVar1 >> 0x30);
  local_a0 = uVar1;
  if (local_a0._6_1_ < 0x2d) {
    FUN_100adaf98(auStack_118);
    if (local_f4 == '\x01') {
      if ((ulong)unaff_x20[0x17] >> 0x3c < 0xf) {
        uStack_88._0_4_ = *(uint *)((long)unaff_x20 + 0xcc);
      }
      else {
      }
      return (ulong)(uint)uStack_88;
    }
    if ((ulong)unaff_x20[0x1b] >> 0x3c < 0xf) goto LAB_100adc8bc;
    FUN_100adaf98(auStack_f0);
    if (local_cc == '\x01') goto LAB_100adc8b4;
  }
  else if ((ulong)unaff_x20[0x1b] >> 0x3c < 0xf) {
LAB_100adc8bc:
    return unaff_x20[0x1e];
  }
  FUN_100adaf98(auStack_c8);
  if ((local_a4 != '\x01') && (local_c0 != 0)) {
    return local_c0;
  }
LAB_100adc8b4:
  return uStack_88 & 0xffffffff;
}



/* Address: 0x100adc8e0 | FUN_100adc8e0 */

undefined1  [16] FUN_100adc8e0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  Encoding EVar3;
  Encoding data;
  long lVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  EVar3 = Encoding::_typeMetadataAccessor();
  data.unknown = *(undefined **)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  (**(code **)(*(long *)(EVar3.unknown + -8) + 0x10))
            (&stack0xffffffffffffffd0 +
             -(*(long *)(*(long *)(EVar3.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0),param_1,
             EVar3.unknown);
  (extension_Foundation)::Swift::String::_init(data);
  puVar1 = (undefined *)0x0;
  if (lVar4 != 0) {
    puVar1 = data.unknown;
  }
  lVar2 = -0x2000000000000000;
  if (lVar4 != 0) {
    lVar2 = lVar4;
  }
  auVar5._8_8_ = lVar2;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Address: 0x100adc964 | FUN_100adc964 */

undefined1  [16] FUN_100adc964(void)

{
  undefined *puVar1;
  long lVar2;
  Encoding EVar3;
  Encoding EVar4;
  Encoding data;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  EVar3 = Encoding::_typeMetadataAccessor();
  lVar9 = *(long *)(EVar3.unknown + -8);
  uVar6 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)(&stack0xffffffffffffffb0 + -uVar6) - uVar6;
  data.unknown = *(undefined **)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  if ((*(ushort *)(unaff_x20 + 8) >> 0xb & 1) == 0) {
    if (DAT_100ff8630 != -1) {
      _swift_once(&DAT_100ff8630,FUN_100adcca4);
    }
    EVar4 = EVar3;
    FUN_1000cd990(EVar3.unknown,&DAT_101058310);
    pcVar7 = *(code **)(lVar9 + 0x10);
    (*pcVar7)(lVar8,EVar4.unknown,EVar3.unknown);
  }
  else {
    Encoding::_get_utf8(EVar3);
    pcVar7 = *(code **)(lVar9 + 0x10);
  }
  (*pcVar7)(&stack0xffffffffffffffb0 + -uVar6,lVar8,EVar3.unknown);
  (extension_Foundation)::Swift::String::_init(data);
  puVar1 = (undefined *)0x0;
  if (lVar5 != 0) {
    puVar1 = data.unknown;
  }
  lVar2 = -0x2000000000000000;
  if (lVar5 != 0) {
    lVar2 = lVar5;
  }
  (**(code **)(lVar9 + 8))(lVar8,EVar3.unknown);
  auVar10._8_8_ = lVar2;
  auVar10._0_8_ = puVar1;
  return auVar10;
}



/* Address: 0x100adca7c | FUN_100adca7c */

void FUN_100adca7c(void)

{
  FUN_100ae18b8();
  return;
}



/* Address: 0x100adca84 | FUN_100adca84 */

undefined4 FUN_100adca84(void)

{
  long unaff_x20;
  
  if ((*(ushort *)(unaff_x20 + 8) >> 3 & 1) == 0) {
    return *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (0xe < *(ulong *)(unaff_x20 + 0xd8) >> 0x3c) {
    if (0xe < *(ulong *)(unaff_x20 + 0xb8) >> 0x3c) {
      return 0;
    }
    return *(undefined4 *)(unaff_x20 + 0xc4);
  }
  return *(undefined4 *)(unaff_x20 + 0xe4);
}



/* Address: 0x100adcacc | FUN_100adcacc */

bool FUN_100adcacc(void)

{
  long unaff_x20;
  
  return *(short *)(unaff_x20 + 0x70) != 0;
}



/* Address: 0x100adcadc | FUN_100adcadc */

ulong FUN_100adcadc(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_118 [36];
  char local_f4;
  undefined1 auStack_f0 [36];
  char local_cc;
  undefined1 auStack_c8 [16];
  ulong local_b8;
  char local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_98 = unaff_x20[1];
  uVar1 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  local_90 = unaff_x20[2];
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  local_50 = unaff_x20[10];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  local_70 = unaff_x20[6];
  local_40 = unaff_x20[0xc];
  local_a0._6_1_ = (byte)((ulong)uVar1 >> 0x30);
  local_a0 = uVar1;
  if (local_a0._6_1_ < 0x2d) {
    FUN_100adaf98(auStack_118);
    if (local_f4 == '\x01') {
      if ((ulong)unaff_x20[0x17] >> 0x3c < 0xf) {
        local_90._4_4_ = *(uint *)(unaff_x20 + 0x19);
      }
      else {
      }
      return (ulong)local_90._4_4_;
    }
    if ((ulong)unaff_x20[0x1b] >> 0x3c < 0xf) goto LAB_100adcbbc;
    FUN_100adaf98(auStack_f0);
    if (local_cc == '\x01') goto LAB_100adcbb4;
  }
  else if ((ulong)unaff_x20[0x1b] >> 0x3c < 0xf) {
LAB_100adcbbc:
    return unaff_x20[0x1d];
  }
  FUN_100adaf98(auStack_c8);
  if ((local_a4 != '\x01') && (local_b8 != 0)) {
    return local_b8;
  }
LAB_100adcbb4:
  return local_90 >> 0x20;
}



/* Address: 0x100adcbe0 | thunk_FUN_100adccf8 */

void thunk_FUN_100adccf8(void)

{
  FUN_100adccf8();
  return;
}



/* Address: 0x100adcbe4 | FUN_100adcbe4 */

uint FUN_100adcbe4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar1 = 0;
  uStack_158 = param_1[0x19];
  local_160 = param_1[0x18];
  uStack_148 = param_1[0x1b];
  uStack_150 = param_1[0x1a];
  uStack_138 = param_1[0x1d];
  local_140 = param_1[0x1c];
  local_130 = param_1[0x1e];
  uStack_198 = param_1[0x11];
  local_1a0 = param_1[0x10];
  uStack_188 = param_1[0x13];
  uStack_190 = param_1[0x12];
  uStack_178 = param_1[0x15];
  local_180 = param_1[0x14];
  uStack_168 = param_1[0x17];
  uStack_170 = param_1[0x16];
  uStack_1d8 = param_1[9];
  local_1e0 = param_1[8];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_1b8 = param_1[0xd];
  local_1c0 = param_1[0xc];
  uStack_1a8 = param_1[0xf];
  uStack_1b0 = param_1[0xe];
  uStack_218 = param_1[1];
  local_220 = *param_1;
  uStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_1f8 = param_1[5];
  local_200 = param_1[4];
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  uStack_58 = param_2[0x19];
  local_60 = param_2[0x18];
  uStack_48 = param_2[0x1b];
  uStack_50 = param_2[0x1a];
  uStack_38 = param_2[0x1d];
  local_40 = param_2[0x1c];
  local_30 = param_2[0x1e];
  uStack_98 = param_2[0x11];
  local_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  uStack_78 = param_2[0x15];
  local_80 = param_2[0x14];
  uStack_68 = param_2[0x17];
  uStack_70 = param_2[0x16];
  uStack_d8 = param_2[9];
  local_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  local_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  local_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  local_100 = param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  FUN_100adccf8(&local_220,&local_120);
  return uVar1 & 1;
}



/* Address: 0x100adcca4 | FUN_100adcca4 */

void FUN_100adcca4(void)

{
  Encoding EVar1;
  __uint64 rawValue;
  
  EVar1 = Encoding::_typeMetadataAccessor();
  FUN_1000ce204(EVar1.unknown,&DAT_101058310);
  FUN_1000cd990(EVar1.unknown,&DAT_101058310);
  rawValue = 0x400;
  _CFStringConvertEncodingToNSStringEncoding();
  Encoding::_init(rawValue);
  return;
}



/* Address: 0x100adccf8 | FUN_100adccf8 */

bool FUN_100adccf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  _StringGuts _Var2;
  bool bVar3;
  Encoding EVar4;
  Encoding EVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  code *pcVar12;
  Encoding EVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_200 [8];
  _StringGuts local_1f8;
  _StringGuts _Stack_1f0;
  undefined1 *local_1e8;
  undefined1 auStack_1e0 [36];
  char local_1bc;
  undefined1 auStack_1b8 [24];
  ulong local_1a0;
  char local_194;
  undefined1 auStack_190 [36];
  char local_16c;
  undefined1 auStack_168 [24];
  ulong local_150;
  char local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulong uStack_118;
  Encoding local_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  Encoding local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  EVar4 = Encoding::_typeMetadataAccessor();
  lVar14 = *(long *)(EVar4.unknown + -8);
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1e8 = auStack_200 + -uVar8;
  lVar10 = (long)local_1e8 - uVar8;
  EVar13.unknown = (undefined *)(lVar10 - uVar8);
  uStack_88 = param_1[9];
  local_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  local_70 = param_1[0xc];
  uVar15 = param_1[1];
  local_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  local_b0 = param_1[4];
  puStack_98 = (undefined *)param_1[7];
  local_a0.unknown = (undefined *)param_1[6];
  uStack_c8._1_1_ = (byte)((ulong)uVar15 >> 8);
  uStack_c8 = uVar15;
  if ((uStack_c8._1_1_ >> 3 & 1) == 0) {
    if (DAT_100ff8630 != -1) {
      _swift_once(&DAT_100ff8630,FUN_100adcca4);
    }
    EVar5 = EVar4;
    FUN_1000cd990(EVar4.unknown,&DAT_101058310);
    pcVar9 = *(code **)(lVar14 + 0x10);
    (*pcVar9)(EVar13.unknown,EVar5.unknown,EVar4.unknown);
  }
  else {
    Encoding::_get_utf8(EVar4);
    pcVar9 = *(code **)(lVar14 + 0x10);
  }
  puVar6 = puStack_98;
  EVar5.unknown = local_a0.unknown;
  (*pcVar9)(lVar10,EVar13.unknown,EVar4.unknown);
  (extension_Foundation)::Swift::String::_init(EVar5);
  local_1f8.unknown = (undefined *)0x0;
  if (puVar6 != (undefined *)0x0) {
    local_1f8.unknown = EVar5.unknown;
  }
  _Stack_1f0.unknown = (undefined *)0xe000000000000000;
  if (puVar6 != (undefined *)0x0) {
    _Stack_1f0.unknown = puVar6;
  }
  pcVar12 = *(code **)(lVar14 + 8);
  (*pcVar12)(EVar13.unknown,EVar4.unknown);
  puVar11 = local_1e8;
  uStack_f8 = param_2[9];
  local_100 = param_2[8];
  uStack_e8 = param_2[0xb];
  uStack_f0 = param_2[10];
  local_e0 = param_2[0xc];
  uVar15 = param_2[1];
  local_140 = *param_2;
  uStack_128 = param_2[3];
  uStack_130 = param_2[2];
  uStack_118 = param_2[5];
  local_120 = param_2[4];
  puStack_108 = (undefined *)param_2[7];
  local_110.unknown = (undefined *)param_2[6];
  uStack_138._1_1_ = (byte)((ulong)uVar15 >> 8);
  uStack_138 = uVar15;
  if ((uStack_138._1_1_ >> 3 & 1) == 0) {
    if (DAT_100ff8630 != -1) {
      _swift_once(&DAT_100ff8630,FUN_100adcca4);
    }
    EVar13 = EVar4;
    FUN_1000cd990(EVar4.unknown,&DAT_101058310);
    puVar11 = local_1e8;
    (*pcVar9)(local_1e8,EVar13.unknown,EVar4.unknown);
  }
  else {
    Encoding::_get_utf8(EVar13);
  }
  puVar7 = puStack_108;
  EVar13.unknown = local_110.unknown;
  (*pcVar9)(lVar10,puVar11,EVar4.unknown);
  (extension_Foundation)::Swift::String::_init(EVar13);
  puVar6 = (undefined *)0x0;
  if (puVar7 != (undefined *)0x0) {
    puVar6 = EVar13.unknown;
  }
  puVar1 = (undefined *)0xe000000000000000;
  if (puVar7 != (undefined *)0x0) {
    puVar1 = puVar7;
  }
  (*pcVar12)(puVar11,EVar4.unknown);
  _Var2.unknown = _Stack_1f0.unknown;
  if ((local_1f8.unknown == puVar6) && (_Stack_1f0.unknown == puVar1)) {
    _swift_bridgeObjectRelease(_Stack_1f0.unknown);
    _swift_bridgeObjectRelease(puVar1);
  }
  else {
    bVar3 = Swift::_stringCompareWithSmolCheck
                      (local_1f8,_Stack_1f0,(_StringComparisonResult)(__int8)puVar6);
    _swift_bridgeObjectRelease(_Var2.unknown);
    _swift_bridgeObjectRelease(puVar1);
    if (!bVar3) {
      return false;
    }
  }
  if (*(int *)(param_1 + 0xf) != *(int *)(param_2 + 0xf)) {
    return false;
  }
  if ((((local_d0._6_1_ < 0x2d) && (FUN_100adaf98(auStack_1e0), local_1bc == '\x01')) ||
      (FUN_100adaf98(auStack_1b8), local_194 == '\x01')) || (uVar8 = local_1a0, local_1a0 == 0)) {
    uVar8 = uStack_a8 >> 0x20;
  }
  if (((local_140._6_1_ < 0x2d) && (FUN_100adaf98(auStack_190), local_16c == '\x01')) ||
     ((FUN_100adaf98(auStack_168), local_144 == '\x01' || (local_150 == 0)))) {
    local_150 = uStack_118 >> 0x20;
  }
  return uVar8 == local_150;
}



/* Address: 0x100add01c | FUN_100add01c */

undefined8 FUN_100add01c(long param_1)

{
  if (param_1 < 0x13) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == 3) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x14) {
      return 3;
    }
    if (param_1 == 0x13) {
      return 2;
    }
  }
  return 4;
}



/* Address: 0x100add060 | thunk_FUN_100add064 */

void thunk_FUN_100add064(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8638 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94ae0,&DAT_100f31958);
  DAT_100ff8638 = pTVar1;
  return;
}



/* Address: 0x100add064 | FUN_100add064 */

void FUN_100add064(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8638 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94ae0,&DAT_100f31958);
  DAT_100ff8638 = pTVar1;
  return;
}



/* Address: 0x100add0a4 | FUN_100add0a4 */

void FUN_100add0a4(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xa8));
  if (*(ulong *)(param_1 + 0xb8) >> 0x3c < 0xf) {
    FUN_10003bf2c(*(undefined8 *)(param_1 + 0xb0));
  }
  if (0xe < *(ulong *)(param_1 + 0xd8) >> 0x3c) {
    return;
  }
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0xd0));
  return;
}



/* Address: 0x100add134 | FUN_100add134 */

undefined4 * FUN_100add134(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[6];
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  FUN_1001037b4(uVar3,uVar4);
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x12);
  FUN_1001037b4(uVar3,uVar4);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  uVar4 = *(undefined8 *)(param_2 + 0x16);
  FUN_1001037b4(uVar3,uVar4);
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x1a] = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(param_2 + 0x1b);
  *(undefined2 *)(param_1 + 0x1d) = *(undefined2 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  uVar1 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar1;
  uVar3 = *(undefined8 *)(param_2 + 0x22);
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  _swift_bridgeObjectRetain();
  FUN_1001037b4(uVar3,uVar4);
  *(undefined8 *)(param_1 + 0x22) = uVar3;
  *(undefined8 *)(param_1 + 0x24) = uVar4;
  uVar3 = *(undefined8 *)(param_2 + 0x26);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  FUN_1001037b4(uVar3,uVar4);
  *(undefined8 *)(param_1 + 0x26) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  uVar2 = *(ulong *)(param_2 + 0x2e);
  _swift_bridgeObjectRetain();
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_2 + 0x2c);
    FUN_1001037b4(uVar3,uVar2);
    *(undefined8 *)(param_1 + 0x2c) = uVar3;
    *(ulong *)(param_1 + 0x2e) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x2c);
    uVar5 = *(undefined8 *)(param_2 + 0x32);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_1 + 0x2c) = uVar3;
    *(undefined8 *)(param_1 + 0x32) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = uVar4;
  }
  uVar2 = *(ulong *)(param_2 + 0x36);
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_2 + 0x34);
    FUN_1001037b4(uVar3,uVar2);
    *(undefined8 *)(param_1 + 0x34) = uVar3;
    *(ulong *)(param_1 + 0x36) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x3a);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x3a) = uVar3;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x34);
    uVar5 = *(undefined8 *)(param_2 + 0x3a);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_1 + 0x34) = uVar3;
    *(undefined8 *)(param_1 + 0x3a) = uVar5;
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  }
  return param_1;
}



/* Address: 0x100add2c4 | FUN_100add2c4 */

undefined4 * FUN_100add2c4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 6) = *(undefined2 *)((long)param_2 + 6);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_2 + 10);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined2 *)((long)param_1 + 0xe) = *(undefined2 *)((long)param_2 + 0xe);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined2 *)((long)param_1 + 0x1e) = *(undefined2 *)((long)param_2 + 0x1e);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)((long)param_1 + 0x22) = *(undefined2 *)((long)param_2 + 0x22);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  FUN_1001037b4(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  uVar5 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  FUN_10003bf2c(uVar4,uVar5);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  FUN_1001037b4(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  FUN_10003bf2c(uVar4,uVar5);
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  FUN_1001037b4(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  uVar5 = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  FUN_10003bf2c(uVar4,uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x1a] = param_2[0x1a];
  *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)(param_2 + 0x1b);
  *(undefined2 *)((long)param_1 + 0x6e) = *(undefined2 *)((long)param_2 + 0x6e);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined2 *)((long)param_1 + 0x72) = *(undefined2 *)((long)param_2 + 0x72);
  *(undefined2 *)(param_1 + 0x1d) = *(undefined2 *)(param_2 + 0x1d);
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  *(undefined2 *)(param_1 + 0x21) = *(undefined2 *)(param_2 + 0x21);
  *(undefined2 *)((long)param_1 + 0x86) = *(undefined2 *)((long)param_2 + 0x86);
  uVar1 = *(undefined8 *)(param_2 + 0x22);
  uVar3 = *(undefined8 *)(param_2 + 0x24);
  FUN_1001037b4(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x22);
  uVar5 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  FUN_10003bf2c(uVar4,uVar5);
  uVar1 = *(undefined8 *)(param_2 + 0x26);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  FUN_1001037b4(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x26);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  FUN_10003bf2c(uVar4,uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x2a);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(ulong *)(param_2 + 0x2e);
  if (*(ulong *)(param_1 + 0x2e) >> 0x3c < 0xf) {
    if (0xe < uVar2 >> 0x3c) {
      FUN_1000fb4c4(param_1 + 0x2c,&DAT_100ff8640,&DAT_100c94bb0);
      uVar3 = *(undefined8 *)(param_2 + 0x2c);
      uVar4 = *(undefined8 *)(param_2 + 0x32);
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
      *(undefined8 *)(param_1 + 0x2c) = uVar3;
      *(undefined8 *)(param_1 + 0x32) = uVar4;
      *(undefined8 *)(param_1 + 0x30) = uVar1;
      goto LAB_100add528;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x2c);
    FUN_1001037b4(uVar3,uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x2c);
    uVar4 = *(undefined8 *)(param_1 + 0x2e);
    *(undefined8 *)(param_1 + 0x2c) = uVar3;
    *(ulong *)(param_1 + 0x2e) = uVar2;
    FUN_10003bf2c(uVar1,uVar4);
  }
  else {
    if (0xe < uVar2 >> 0x3c) {
      uVar1 = *(undefined8 *)(param_2 + 0x2c);
      uVar3 = *(undefined8 *)(param_2 + 0x32);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
      *(undefined8 *)(param_1 + 0x2c) = uVar1;
      *(undefined8 *)(param_1 + 0x32) = uVar3;
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      goto LAB_100add528;
    }
    uVar1 = *(undefined8 *)(param_2 + 0x2c);
    FUN_1001037b4(uVar1,uVar2);
    *(undefined8 *)(param_1 + 0x2c) = uVar1;
    *(ulong *)(param_1 + 0x2e) = uVar2;
  }
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
LAB_100add528:
  uVar2 = *(ulong *)(param_2 + 0x36);
  if (*(ulong *)(param_1 + 0x36) >> 0x3c < 0xf) {
    if (0xe < uVar2 >> 0x3c) {
      FUN_1000fb4c4(param_1 + 0x34,&DAT_100ff8648,&DAT_100c94bb8);
      uVar1 = *(undefined8 *)(param_2 + 0x3c);
      uVar5 = *(undefined8 *)(param_2 + 0x34);
      uVar3 = *(undefined8 *)(param_2 + 0x3a);
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
      *(undefined8 *)(param_1 + 0x34) = uVar5;
      *(undefined8 *)(param_1 + 0x3a) = uVar3;
      *(undefined8 *)(param_1 + 0x38) = uVar4;
      *(undefined8 *)(param_1 + 0x3c) = uVar1;
      return param_1;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x34);
    FUN_1001037b4(uVar3,uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x34);
    uVar4 = *(undefined8 *)(param_1 + 0x36);
    *(undefined8 *)(param_1 + 0x34) = uVar3;
    *(ulong *)(param_1 + 0x36) = uVar2;
    FUN_10003bf2c(uVar1,uVar4);
  }
  else {
    if (0xe < uVar2 >> 0x3c) {
      uVar4 = *(undefined8 *)(param_2 + 0x36);
      uVar1 = *(undefined8 *)(param_2 + 0x34);
      uVar5 = *(undefined8 *)(param_2 + 0x3a);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
      *(undefined8 *)(param_1 + 0x36) = uVar4;
      *(undefined8 *)(param_1 + 0x34) = uVar1;
      *(undefined8 *)(param_1 + 0x3a) = uVar5;
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      return param_1;
    }
    uVar1 = *(undefined8 *)(param_2 + 0x34);
    FUN_1001037b4(uVar1,uVar2);
    *(undefined8 *)(param_1 + 0x34) = uVar1;
    *(ulong *)(param_1 + 0x36) = uVar2;
  }
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  return param_1;
}



/* Address: 0x100add5fc | FUN_100add5fc */

void FUN_100add5fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar2 = param_2[0x11];
  uVar1 = param_2[0x10];
  uVar4 = param_2[0x13];
  uVar3 = param_2[0x12];
  uVar5 = param_2[0x14];
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  uVar2 = param_2[0x19];
  uVar1 = param_2[0x18];
  uVar4 = param_2[0x1b];
  uVar3 = param_2[0x1a];
  uVar6 = param_2[0x1d];
  uVar5 = param_2[0x1c];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1b] = uVar4;
  param_1[0x1a] = uVar3;
  param_1[0x1d] = uVar6;
  param_1[0x1c] = uVar5;
  param_1[0x19] = uVar2;
  param_1[0x18] = uVar1;
  return;
}



/* Address: 0x100add648 | FUN_100add648 */

undefined4 * FUN_100add648(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[6];
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_1 + 0xe);
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  FUN_10003bf2c(uVar2,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x12);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  FUN_10003bf2c(uVar2,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0x16);
  uVar5 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  FUN_10003bf2c(uVar2,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x1a] = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(param_2 + 0x1b);
  *(undefined2 *)(param_1 + 0x1d) = *(undefined2 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  uVar1 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x22);
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  uVar5 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x22) = uVar5;
  FUN_10003bf2c(uVar2,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x26);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = uVar5;
  FUN_10003bf2c(uVar2,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x2a);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  _swift_bridgeObjectRelease(uVar2);
  if (*(ulong *)(param_1 + 0x2e) >> 0x3c < 0xf) {
    uVar4 = *(ulong *)(param_2 + 0x2e);
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = *(undefined8 *)(param_1 + 0x2c);
      *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
      *(ulong *)(param_1 + 0x2e) = uVar4;
      FUN_10003bf2c(uVar2);
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      goto LAB_100add794;
    }
    FUN_1000fb4c4(param_1 + 0x2c,&DAT_100ff8640,&DAT_100c94bb0);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x2c);
  uVar5 = *(undefined8 *)(param_2 + 0x32);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = uVar2;
  *(undefined8 *)(param_1 + 0x32) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
LAB_100add794:
  if (*(ulong *)(param_1 + 0x36) >> 0x3c < 0xf) {
    uVar4 = *(ulong *)(param_2 + 0x36);
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = *(undefined8 *)(param_1 + 0x34);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
      *(ulong *)(param_1 + 0x36) = uVar4;
      FUN_10003bf2c(uVar2);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      uVar2 = *(undefined8 *)(param_2 + 0x3a);
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
      *(undefined8 *)(param_1 + 0x3a) = uVar2;
      return param_1;
    }
    FUN_1000fb4c4(param_1 + 0x34,&DAT_100ff8648,&DAT_100c94bb8);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x34);
  uVar5 = *(undefined8 *)(param_2 + 0x3a);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  *(undefined8 *)(param_1 + 0x3a) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  return param_1;
}



/* Address: 0x100add810 | FUN_100add810 */

int FUN_100add810(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x3e] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100add86c | FUN_100add86c */

void FUN_100add86c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 0x1f) = 0;
    }
    if (param_2 != 0) {
      param_1[0xc] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 0x1f) = 1;
    }
  }
  return;
}



/* Address: 0x100add8fc | FUN_100add8fc */

undefined1  [16] FUN_100add8fc(void)

{
  return ZEXT816(0x100f318b8);
}



/* Address: 0x100add90c | FUN_100add90c */

undefined1  [16] FUN_100add90c(void)

{
  return ZEXT816(0x100f31958);
}



/* Address: 0x100add91c | FUN_100add91c */

void FUN_100add91c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  long local_30;
  long lStack_28;
  
  puStack_40 = PTR___value_witness_table_for_Builtin_Int32_100eabd40 + 0x40;
  local_48 = &DAT_100c94bf0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  local_38 = puStack_40;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = local_30;
    _swift_initStructMetadata(param_1,0,5,&local_48,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100add9a4 | FUN_100add9a4 */

long * FUN_100add9a4(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar6 + -8);
  uVar9 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  lVar3 = *(long *)(lVar10 + 0x40) + uVar9;
  if (((uint)uVar9 < 8 && (*(uint *)(lVar10 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < ((-uVar9 - 0x19 | uVar9) - lVar3 | uVar9) - *(long *)(lVar10 + 0x40)) {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    FUN_1001037b4(lVar1,lVar2);
    *param_1 = lVar1;
    param_1[1] = lVar2;
    puVar4 = (undefined4 *)((long)param_1 + 0x13U & 0xfffffffffffffffc);
    puVar5 = (undefined4 *)((long)param_2 + 0x13U & 0xfffffffffffffffc);
    *puVar4 = *puVar5;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    *puVar4 = *puVar5;
    uVar7 = (long)puVar4 + uVar9 + 4 & (uVar9 ^ 0xffffffffffffffff);
    uVar8 = (long)puVar5 + uVar9 + 4 & (uVar9 ^ 0xffffffffffffffff);
    pcVar11 = *(code **)(lVar10 + 0x10);
    (*pcVar11)(uVar7,uVar8,lVar6);
    (*pcVar11)(lVar3 + uVar7 & (uVar9 ^ 0xffffffffffffffff),
               lVar3 + uVar8 & (uVar9 ^ 0xffffffffffffffff),lVar6);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)((uint)uVar9 & 0xf8 ^ 0x1f8) & uVar9 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100addac8 | FUN_100addac8 */

void FUN_100addac8(undefined8 *param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_10003bf2c(*param_1,param_1[1]);
  lVar1 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar2 = ((long)param_1 + 0x13U & 0xfffffffffffffffc) + uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000100addb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long *)(lVar3 + 0x40) + uVar4 + uVar2 & (uVar4 ^ 0xffffffffffffffff),lVar1);
  return;
}



/* Address: 0x100addb5c | FUN_100addb5c */

undefined8 * FUN_100addb5c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1001037b4(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  puVar3 = (undefined4 *)((long)param_1 + 0x13U & 0xfffffffffffffffc);
  puVar4 = (undefined4 *)((long)param_2 + 0x13U & 0xfffffffffffffffc);
  *puVar3 = *puVar4;
  puVar3 = puVar3 + 1;
  puVar4 = puVar4 + 1;
  *puVar3 = *puVar4;
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = uVar9 + 4 + (long)puVar3 & (uVar9 ^ 0xffffffffffffffff);
  uVar7 = uVar9 + 4 + (long)puVar4 & (uVar9 ^ 0xffffffffffffffff);
  pcVar10 = *(code **)(lVar8 + 0x10);
  (*pcVar10)(uVar6,uVar7,lVar5);
  lVar8 = *(long *)(lVar8 + 0x40) + uVar9;
  (*pcVar10)(lVar8 + uVar6 & (uVar9 ^ 0xffffffffffffffff),
             lVar8 + uVar7 & (uVar9 ^ 0xffffffffffffffff),lVar5);
  return param_1;
}



/* Address: 0x100addc2c | FUN_100addc2c */

undefined8 * FUN_100addc2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  puVar5 = (undefined4 *)((long)param_1 + 0x13U & 0xfffffffffffffffc);
  puVar6 = (undefined4 *)((long)param_2 + 0x13U & 0xfffffffffffffffc);
  *puVar5 = *puVar6;
  puVar5 = puVar5 + 1;
  puVar6 = puVar6 + 1;
  *puVar5 = *puVar6;
  lVar7 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar7 + -8);
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar8 = uVar11 + 4 + (long)puVar5 & (uVar11 ^ 0xffffffffffffffff);
  uVar9 = uVar11 + 4 + (long)puVar6 & (uVar11 ^ 0xffffffffffffffff);
  pcVar12 = *(code **)(lVar10 + 0x18);
  (*pcVar12)(uVar8,uVar9,lVar7);
  lVar10 = *(long *)(lVar10 + 0x40) + uVar11;
  (*pcVar12)(lVar10 + uVar8 & (uVar11 ^ 0xffffffffffffffff),
             lVar10 + uVar9 & (uVar11 ^ 0xffffffffffffffff),lVar7);
  return param_1;
}



/* Address: 0x100addd04 | FUN_100addd04 */

undefined8 * FUN_100addd04(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  puVar1 = (undefined4 *)((long)param_1 + 0x13U & 0xfffffffffffffffc);
  puVar2 = (undefined4 *)((long)param_2 + 0x13U & 0xfffffffffffffffc);
  *puVar1 = *puVar2;
  puVar1 = puVar1 + 1;
  puVar2 = puVar2 + 1;
  *puVar1 = *puVar2;
  lVar3 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar4 = uVar7 + 4 + (long)puVar1 & (uVar7 ^ 0xffffffffffffffff);
  uVar5 = uVar7 + 4 + (long)puVar2 & (uVar7 ^ 0xffffffffffffffff);
  pcVar8 = *(code **)(lVar6 + 0x20);
  (*pcVar8)(uVar4,uVar5,lVar3);
  lVar6 = *(long *)(lVar6 + 0x40) + uVar7;
  (*pcVar8)(lVar6 + uVar4 & (uVar7 ^ 0xffffffffffffffff),
            lVar6 + uVar5 & (uVar7 ^ 0xffffffffffffffff),lVar3);
  return param_1;
}



/* Address: 0x100adddc0 | FUN_100adddc0 */

undefined8 * FUN_100adddc0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  FUN_10003bf2c(uVar1,uVar2);
  puVar3 = (undefined4 *)((long)param_1 + 0x13U & 0xfffffffffffffffc);
  puVar4 = (undefined4 *)((long)param_2 + 0x13U & 0xfffffffffffffffc);
  *puVar3 = *puVar4;
  puVar3 = puVar3 + 1;
  puVar4 = puVar4 + 1;
  *puVar3 = *puVar4;
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = uVar9 + 4 + (long)puVar3 & (uVar9 ^ 0xffffffffffffffff);
  uVar7 = uVar9 + 4 + (long)puVar4 & (uVar9 ^ 0xffffffffffffffff);
  pcVar10 = *(code **)(lVar8 + 0x28);
  (*pcVar10)(uVar6,uVar7,lVar5);
  lVar8 = *(long *)(lVar8 + 0x40) + uVar9;
  (*pcVar10)(lVar8 + uVar6 & (uVar9 ^ 0xffffffffffffffff),
             lVar8 + uVar7 & (uVar9 ^ 0xffffffffffffffff),lVar5);
  return param_1;
}



/* Address: 0x100adde8c | FUN_100adde8c */

ulong FUN_100adde8c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0xd) {
    uVar1 = 0xc;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_100addf50;
  uVar5 = (*(long *)(lVar6 + 0x40) + uVar7 + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff)) &
          (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_100addf50;
      goto LAB_100addee0;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_100addee0:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
  }
LAB_100addf50:
  if (uVar2 < 0xd) {
    uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
    uVar1 = 0;
    if ((uVar2 >> 0x1c & 3) != 0) {
      uVar1 = 0x10 - ((uVar2 >> 0x1c & 3) << 2 | uVar2 >> 0x1e);
    }
    return (ulong)uVar1;
  }
  uVar7 = ((long)param_1 + 0x13U & 0xfffffffffffffffc) + uVar7 + 8 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x000100addfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))(uVar7);
  return uVar7;
}



/* Address: 0x100addff4 | FUN_100addff4 */

void FUN_100addff4(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar6 + 0x54);
  uVar3 = uVar4;
  if (uVar4 < 0xd) {
    uVar3 = 0xc;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  sVar2 = (*(long *)(lVar6 + 0x40) + uVar7 + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff)) &
          (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar8 = (uint)sVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar9 = 0;
  }
  else if (uVar8 < 4) {
    uVar1 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar8 << 3 & 0x1f)) >> (ulong)(uVar8 << 3 & 0x1f))
            + 1;
    bVar9 = 2;
    if (0xffff < uVar1) {
      bVar9 = 4;
    }
    if (uVar1 < 0x100) {
      bVar9 = 1 < uVar1;
    }
  }
  else {
    bVar9 = 1;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar8 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *(uint *)param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar10;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar10;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      if (0xc < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100ade1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x38))
                  (((long)param_1 + 0x13U & 0xfffffffffffffffc) + uVar7 + 8 & ~uVar7);
        return;
      }
      if (param_2 < 0xd) {
        *param_1 = 0;
        param_1[1] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      }
      else {
        *param_1 = (ulong)(param_2 - 0xd);
        param_1[1] = 0;
      }
    }
  }
  return;
}



/* Address: 0x100ade218 | FUN_100ade218 */

void FUN_100ade218(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100ade224 | FUN_100ade224 */

void FUN_100ade224(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Address: 0x100ade260 | FUN_100ade260 */

undefined4 * FUN_100ade260(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[6];
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100ade314 | FUN_100ade314 */

undefined4 * FUN_100ade314(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 6) = *(undefined2 *)((long)param_2 + 6);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_2 + 10);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined2 *)((long)param_1 + 0xe) = *(undefined2 *)((long)param_2 + 0xe);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined2 *)((long)param_1 + 0x1e) = *(undefined2 *)((long)param_2 + 0x1e);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)((long)param_1 + 0x22) = *(undefined2 *)((long)param_2 + 0x22);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Address: 0x100ade434 | FUN_100ade434 */

void FUN_100ade434(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x100ade460 | FUN_100ade460 */

undefined4 * FUN_100ade460(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[6];
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 0xe);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x12);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  uVar2 = *(undefined8 *)(param_1 + 0x16);
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100ade508 | FUN_100ade508 */

int FUN_100ade508(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100ade564 | FUN_100ade564 */

void FUN_100ade564(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    if (param_2 != 0) {
      param_1[0xc] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  return;
}



/* Address: 0x100ade5d0 | FUN_100ade5d0 */

undefined1  [16] FUN_100ade5d0(void)

{
  return ZEXT816(0x100f31a28);
}



/* Address: 0x100ade5e0 | FUN_100ade5e0 */

void FUN_100ade5e0(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Address: 0x100ade614 | FUN_100ade614 */

undefined4 * FUN_100ade614(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 10);
  FUN_1001037b4(uVar2,uVar3);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 10) = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  FUN_1001037b4(uVar2,uVar3);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100ade69c | FUN_100ade69c */

undefined4 * FUN_100ade69c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 6) = *(undefined2 *)((long)param_2 + 6);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_2 + 10);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined2 *)((long)param_1 + 0x1e) = *(undefined2 *)((long)param_2 + 0x1e);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 10);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 10) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Address: 0x100ade770 | FUN_100ade770 */

void FUN_100ade770(undefined8 *param_1,undefined8 *param_2)

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
  param_1[8] = param_2[8];
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100ade794 | FUN_100ade794 */

undefined4 * FUN_100ade794(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  FUN_10003bf2c(uVar2,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_1 + 0xe);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  FUN_10003bf2c(uVar2,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100ade814 | FUN_100ade814 */

undefined1  [16] FUN_100ade814(void)

{
  return ZEXT816(0x100f31af8);
}



/* Address: 0x100ade824 | FUN_100ade824 */

void FUN_100ade824(undefined8 *param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  uint uVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  uint uVar15;
  int iVar16;
  ushort uVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auStack_2c8 [104];
  undefined4 local_260;
  undefined2 uStack_25c;
  ushort uStack_25a;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined2 local_244;
  undefined2 local_242;
  undefined2 local_240;
  undefined2 uStack_23e;
  undefined2 uStack_23c;
  undefined2 uStack_23a;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined8 uStack_228;
  long local_220;
  long *plStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined2 local_1f4;
  ushort local_1f2;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined2 local_1da;
  undefined2 local_1d8;
  undefined2 local_1d6;
  undefined2 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  long local_1b8;
  long *plStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  char local_144;
  long local_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  undefined4 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  ushort local_ea;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88 [3];
  
  if (*(char *)((long)param_3 + 0x24) == '\x01') {
    param_3 = *(long **)(param_2 + 0x48);
    lVar20 = *(long *)(param_2 + 0x40);
    uVar17 = *(ushort *)(param_2 + 6);
    if (0x2c < uVar17) {
      uVar17 = 0x14;
    }
    local_140 = lVar20;
    plStack_138 = param_3;
    FUN_100abccac(&local_140,&local_f0);
  }
  else {
    plStack_138 = (long *)param_3[1];
    local_140 = *param_3;
    lStack_128 = param_3[3];
    lStack_130 = param_3[2];
    local_120 = (undefined4)param_3[4];
    lVar20 = param_2;
    FUN_100adacb4();
    uVar17 = *(ushort *)(param_2 + 6);
    if (uVar17 < 0x2e) {
      uVar17 = 0x2d;
    }
  }
  uVar11 = (uint)((ulong)param_3 >> 0x20);
  uVar15 = uVar11 >> 0x1e;
  if (uVar11 >> 0x1e < 2) {
    if (uVar15 == 0) {
      uVar19 = (ulong)param_3 >> 0x30 & 0xff;
      goto LAB_100ade914;
    }
    iVar16 = (int)((ulong)lVar20 >> 0x20);
    if (SBORROW4(iVar16,(int)lVar20)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100adebc4);
      (*pcVar12)();
    }
    uVar19 = (ulong)(iVar16 - (int)lVar20);
  }
  else {
    if (uVar15 != 2) {
      uVar19 = 0;
      goto LAB_100ade914;
    }
    uVar19 = *(long *)(lVar20 + 0x18) - *(long *)(lVar20 + 0x10);
    if (SBORROW8(*(long *)(lVar20 + 0x18),*(long *)(lVar20 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100ade8f0);
      (*pcVar12)();
    }
  }
  if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100adebc0);
    (*pcVar12)();
  }
  if (uVar19 >> 0x10 != 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100ade910);
    (*pcVar12)();
  }
LAB_100ade914:
  uVar5 = *(undefined2 *)(param_2 + 4);
  uVar21 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined2 *)(param_2 + 0x1c);
  uVar7 = *(undefined2 *)(param_2 + 0x20);
  uVar8 = *(undefined2 *)(param_2 + 0x22);
  uVar9 = *(undefined2 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uStack_178 = *(undefined8 *)(param_2 + 0x38);
  local_180 = *(undefined8 *)(param_2 + 0x30);
  uStack_188 = *(undefined8 *)(param_2 + 0x58);
  local_190 = *(undefined8 *)(param_2 + 0x50);
  local_f0 = 0x2014b50;
  local_e8 = *(undefined8 *)(param_2 + 8);
  uVar10 = (undefined2)uVar19;
  uStack_b8 = *(undefined8 *)(param_2 + 0x38);
  local_c0 = *(undefined8 *)(param_2 + 0x30);
  uStack_98 = *(undefined8 *)(param_2 + 0x58);
  local_a0 = *(undefined8 *)(param_2 + 0x50);
  local_90 = 0;
  local_110 = local_190;
  uStack_108 = uStack_188;
  uStack_100 = local_180;
  uStack_f8 = uStack_178;
  local_ec = uVar5;
  local_ea = uVar17;
  local_e0 = uVar1;
  uStack_dc = uVar2;
  local_d8 = uVar3;
  local_d4 = uVar6;
  local_d2 = uVar10;
  local_d0 = uVar7;
  local_ce = uVar8;
  local_cc = uVar9;
  local_c8 = uVar4;
  uStack_c4 = param_4;
  local_b0 = lVar20;
  plStack_a8 = param_3;
  FUN_100abccac(&uStack_100,&local_1f8);
  puVar13 = &local_110;
  FUN_100abccac(puVar13,&local_1f8);
  FUN_100adb280();
  FUN_100adbd6c(&local_168,lVar20,param_3,puVar13);
  _swift_bridgeObjectRelease(puVar13);
  if (local_144 == '\x01') {
    FUN_100abce14(param_2);
    puVar18 = (undefined *)0x0;
  }
  else {
    local_88[0] = local_90;
    puVar18 = &DAT_100ff82d8;
    FUN_1000f7830(&DAT_100ff82d8,&DAT_100c94c80);
    _swift_allocObject();
    *(undefined8 *)(puVar18 + 0x18) = 2;
    *(undefined8 *)(puVar18 + 0x10) = 1;
    *(undefined **)(puVar18 + 0x38) = &DAT_100f317a8;
    *(undefined ***)(puVar18 + 0x40) = &PTR_PTR_100f317d0;
    puVar14 = &DAT_100f31bb0;
    _swift_allocObject(&DAT_100f31bb0,0x38,7);
    *(undefined **)(puVar18 + 0x20) = puVar14;
    *(undefined8 *)(puVar14 + 0x18) = uStack_160;
    *(undefined8 *)(puVar14 + 0x10) = local_168;
    *(undefined8 *)(puVar14 + 0x28) = uStack_150;
    *(undefined8 *)(puVar14 + 0x20) = local_158;
    *(undefined4 *)(puVar14 + 0x30) = local_148;
    FUN_100abce14(param_2);
    FUN_1000fb4c4(local_88,&DAT_100ff82e0,&DAT_100c94210);
  }
  uStack_228 = uStack_178;
  local_230 = local_180;
  uStack_208 = uStack_188;
  local_210 = local_190;
  local_260 = 0x2014b50;
  local_1f8 = 0x2014b50;
  uStack_1c0 = uStack_178;
  local_1c8 = local_180;
  uStack_1a0 = uStack_188;
  local_1a8 = local_190;
  uStack_25c = uVar5;
  uStack_25a = uVar17;
  uStack_258 = uVar21;
  local_250 = uVar1;
  uStack_24c = uVar2;
  local_248 = uVar3;
  local_244 = uVar6;
  local_242 = uVar10;
  local_240 = uVar7;
  uStack_23e = uVar8;
  uStack_23c = uVar9;
  uStack_238 = uVar4;
  uStack_234 = param_4;
  local_220 = lVar20;
  plStack_218 = param_3;
  local_200 = puVar18;
  local_1f4 = uVar5;
  local_1f2 = uVar17;
  local_1f0 = uVar21;
  local_1e8 = uVar1;
  local_1e4 = uVar2;
  local_1e0 = uVar3;
  local_1dc = uVar6;
  local_1da = uVar10;
  local_1d8 = uVar7;
  local_1d6 = uVar8;
  local_1d4 = uVar9;
  local_1d0 = uVar4;
  local_1cc = param_4;
  local_1b8 = lVar20;
  plStack_1b0 = param_3;
  local_198 = puVar18;
  FUN_100abcdd8(&local_260,auStack_2c8);
  FUN_100abce14(&local_1f8);
  param_1[9] = plStack_218;
  param_1[8] = local_220;
  param_1[0xb] = uStack_208;
  param_1[10] = local_210;
  param_1[0xc] = local_200;
  param_1[1] = uStack_258;
  *param_1 = CONCAT26(uStack_25a,CONCAT24(uStack_25c,local_260));
  param_1[3] = CONCAT26(local_242,CONCAT24(local_244,local_248));
  param_1[2] = CONCAT44(uStack_24c,local_250);
  param_1[5] = CONCAT44(uStack_234,uStack_238);
  param_1[4] = CONCAT26(uStack_23a,CONCAT24(uStack_23c,CONCAT22(uStack_23e,local_240)));
  param_1[7] = uStack_228;
  param_1[6] = local_230;
  return;
}



/* Address: 0x100adebc4 | FUN_100adebc4 */

void FUN_100adebc4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100adebd4 | FUN_100adebd4 */

void FUN_100adebd4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  String SVar3;
  undefined4 local_54;
  
  Darwin::POSIXErrorCode::_init((__int32)param_1);
  local_54 = (undefined4)param_1;
  if ((param_1 & 0xff00000000) == 0x100000000) {
    local_54 = 1;
  }
  Foundation::POSIXError::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100ea6988;
  puVar2 = &DAT_100ff8438;
  FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(char **)(puVar2 + 0x20) = SVar3.str;
  *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(void **)(puVar2 + 0x28) = SVar3.bridgeObject;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  FUN_100abfbb8(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_1000fb4c4(puVar2 + 0x20,&DAT_100ff8440,&DAT_100c94328);
  FUN_100003a00(&DAT_100ff86e8,puVar1,
                PTR_Foundation__Foundation__POSIXError_>Foundation___BridgedStoredNSError_100ea6980)
  ;
  (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
            ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
              )&local_54);
  return;
}



/* Address: 0x100adecf8 | FUN_100adecf8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100adecf8(void)

{
  URL UVar1;
  URL UVar2;
  NSURL *pNVar3;
  ID IVar4;
  ID unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  lVar5 = (long)&local_50 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::URL::deletingLastPathComponent(UVar1);
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  local_50 = 0;
  IVar4 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (unaff_x20,pNVar3,1,0,&local_50);
  if ((IVar4 & 1) == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    (**(code **)(lVar6 + 8))(lVar5,UVar1.unknown);
  }
  else {
    (**(code **)(lVar6 + 8))(lVar5,UVar1.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100adee20 | FUN_100adee20 */

bool FUN_100adee20(void)

{
  bool bVar1;
  URL UVar2;
  char *pcVar3;
  URL UVar4;
  URL UVar5;
  void *pvVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  String SVar12;
  String SVar13;
  undefined8 auStack_a0 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  String local_60;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar2.unknown + -8);
  uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  UVar5.unknown = (undefined *)((long)&local_80 - uVar7);
  puVar8 = UVar5.unknown + -uVar7;
  lVar9 = (long)puVar8 - uVar7;
  SVar12 = Foundation::URL::get_path(UVar2);
  UVar4.unknown = SVar12.bridgeObject;
  Foundation::URL::_init(SVar12.str._0_1_);
  _swift_bridgeObjectRelease();
  Foundation::URL::get_standardized(UVar4);
  pcVar11 = *(code **)(lVar10 + 8);
  UVar4.unknown = puVar8;
  (*pcVar11)(puVar8,UVar2.unknown);
  local_60 = Foundation::URL::get_path(UVar4);
  pvVar6 = local_60.bridgeObject;
  pcVar3 = local_60.str;
  local_70 = 0x2f2f;
  puStack_68 = &SUB_e200000000000000;
  local_80 = 0x2f;
  uStack_78 = 0xe100000000000000;
  FUN_100abff2c();
  *(char **)(lVar9 + -0x10) = pcVar3;
  *(char **)(lVar9 + -8) = pcVar3;
  *(undefined **)(lVar9 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
  *(char **)(lVar9 + -0x18) = pcVar3;
  SVar12 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_70,&local_80,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208,
                      PTR___type_metadata_for_Swift_String_100eac208);
  UVar4.unknown = SVar12.bridgeObject;
  _swift_bridgeObjectRelease(pvVar6);
  Foundation::URL::_init();
  _swift_bridgeObjectRelease();
  UVar4 = Foundation::URL::get_standardized(UVar4);
  SVar12 = Foundation::URL::get_absoluteString(UVar4);
  (*pcVar11)(UVar5.unknown,UVar2.unknown);
  SVar13 = Foundation::URL::get_absoluteString(UVar5);
  bVar1 = Swift::String::hasPrefix(SVar13,SVar12);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  (*pcVar11)(puVar8,UVar2.unknown);
  (*pcVar11)(lVar9,UVar2.unknown);
  return bVar1;
}



/* Address: 0x100adefd8 | FUN_100adefd8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100adefd8(void)

{
  Code CVar1;
  CocoaError CVar2;
  undefined *puVar3;
  URL self;
  undefined7 extraout_var;
  NSString *pNVar4;
  char *pcVar5;
  CocoaError CVar6;
  undefined *unaff_x21;
  long lVar7;
  long lVar8;
  String SVar9;
  stat local_150;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  CVar1 = Foundation::CocoaError::Code::typeMetadataAccessor();
  CVar6.unknown =
       (undefined *)
       ((long)&local_150 -
       (*(long *)(*(long *)(CVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  CVar2 = Foundation::CocoaError::typeMetadataAccessor();
  lVar8 = *(long *)(CVar2.unknown + -8);
  lVar7 = (long)CVar6.unknown - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  self.unknown = (undefined *)objc_stub::init(puVar3);
  CVar1.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(self);
  CVar1.unknown._1_7_ = extraout_var;
  if (unaff_x21 == (undefined *)0x0) {
    if (CVar1.unknown._0_1_) {
      SVar9 = Foundation::URL::get_path((URL)CVar1.unknown);
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar9.bridgeObject);
      _objc_retainAutorelease();
      pcVar5 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)self.unknown,pNVar4);
      local_150.st_gen = 0;
      local_150.st_lspare = 0;
      local_150.st_blksize = 0;
      local_150.st_flags = 0;
      local_150.st_qspare[1] = 0;
      local_150.st_qspare[0] = 0;
      local_150.st_birthtimespec.tv_nsec = 0;
      local_150.st_birthtimespec.tv_sec = 0;
      local_150.st_blocks = 0;
      local_150.st_size = 0;
      local_150.st_ctimespec.tv_nsec = 0;
      local_150.st_ctimespec.tv_sec = 0;
      local_150.st_mtimespec.tv_nsec = 0;
      local_150.st_mtimespec.tv_sec = 0;
      local_150.st_atimespec.tv_nsec = 0;
      local_150.st_atimespec.tv_sec = 0;
      local_150.st_rdev = 0;
      local_150._28_4_ = 0;
      local_150.st_uid = 0;
      local_150.st_gid = 0;
      local_150.st_ino = 0;
      local_150.st_dev = 0;
      local_150.st_mode = 0;
      local_150.st_nlink = 0;
      _lstat(pcVar5,&local_150);
      Foundation::Date::init
                ((double)local_150.st_mtimespec.tv_nsec / 1000000000.0 +
                 (double)local_150.st_mtimespec.tv_sec);
      goto LAB_100adf238;
    }
  }
  else {
    _swift_errorRelease();
    CVar1.unknown = unaff_x21;
  }
  Foundation::CocoaError::Code::get_fileReadNoSuchFile(CVar1);
  puVar3 = &DAT_100ff8438;
  FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar3 + 0x20) = SVar9;
  SVar9 = Foundation::URL::get_path((URL)SVar9.str);
  *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(String *)(puVar3 + 0x30) = SVar9;
  FUN_100abfbb8(puVar3);
  _swift_setDeallocating(puVar3);
  FUN_1000fb4c4((String *)(puVar3 + 0x20),&DAT_100ff8440,&DAT_100c94328);
  FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958)
  ;
  (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
            ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
              )CVar6.unknown);
  Foundation::CocoaError::get__nsError(CVar6);
  _swift_willThrow();
  (**(code **)(lVar8 + 8))(lVar7,CVar2.unknown);
LAB_100adf238:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


