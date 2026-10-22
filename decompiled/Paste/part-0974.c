/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a6b6d8 | FUN_100a6b6d8 */

void FUN_100a6b6d8(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_100a6b26c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100a6b710 | FUN_100a6b710 */

uint FUN_100a6b710(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
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
  uStack_138 = param_1[0x15];
  local_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  local_120 = param_1[0x18];
  local_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  local_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  local_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  local_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  local_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  local_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  local_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  local_40 = param_2[0x18];
  local_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  local_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  local_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  local_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  local_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  local_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  FUN_100a6bedc(&local_1e0,&local_100);
  return uVar1 & 1;
}



/* Address: 0x100a6b7c0 | FUN_100a6b7c0 */

String FUN_100a6b7c0(void)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x100a6b7fc | thunk_FUN_10094b42c */

void thunk_FUN_10094b42c(void)

{
  FUN_10094b42c();
  return;
}



/* Address: 0x100a6b800 | FUN_100a6b800 */

String FUN_100a6b800(void)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x100a6b840 | FUN_100a6b840 */

undefined * FUN_100a6b840(void)

{
  return &DAT_100c919f0;
}



/* Address: 0x100a6b84c | FUN_100a6b84c */

undefined1  [16] FUN_100a6b84c(void)

{
  return ZEXT816(0xfffffffffffffffe) << 0x40;
}



/* Address: 0x100a6b858 | FUN_100a6b858 */

undefined * FUN_100a6b858(void)

{
  return &DAT_100c91a00;
}



/* Address: 0x100a6b864 | FUN_100a6b864 */

undefined1  [16] FUN_100a6b864(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}



/* Address: 0x100a6b870 | FUN_100a6b870 */

void FUN_100a6b870(undefined8 param_1,Hasher param_2)

{
  __uint32 _Var1;
  __uint32 _Var2;
  __uint32 _Var3;
  __uint32 _Var4;
  __uint64 _Var5;
  __uint64 _Var6;
  __uint64 _Var7;
  __uint64 _Var8;
  __uint64 _Var9;
  __uint64 _Var10;
  __uint64 _Var11;
  __uint64 _Var12;
  __uint64 _Var13;
  __uint64 _Var14;
  __uint32 _Var15;
  __uint32 _Var16;
  __uint16 _Var17;
  __uint32 _Var18;
  __uint32 *unaff_x20;
  __uint64 _Var19;
  
  _Var19 = *(__uint64 *)(unaff_x20 + 2);
  _Var1 = unaff_x20[4];
  _Var3 = unaff_x20[5];
  _Var15 = unaff_x20[6];
  _Var5 = *(__uint64 *)(unaff_x20 + 8);
  _Var10 = *(__uint64 *)(unaff_x20 + 10);
  _Var6 = *(__uint64 *)(unaff_x20 + 0xc);
  _Var11 = *(__uint64 *)(unaff_x20 + 0xe);
  _Var7 = *(__uint64 *)(unaff_x20 + 0x10);
  _Var12 = *(__uint64 *)(unaff_x20 + 0x12);
  _Var8 = *(__uint64 *)(unaff_x20 + 0x14);
  _Var13 = *(__uint64 *)(unaff_x20 + 0x16);
  _Var9 = *(__uint64 *)(unaff_x20 + 0x18);
  _Var14 = *(__uint64 *)(unaff_x20 + 0x1a);
  _Var2 = unaff_x20[0x1c];
  _Var4 = unaff_x20[0x1d];
  _Var16 = unaff_x20[0x1e];
  _Var18 = unaff_x20[1];
  _Var17 = *(__uint16 *)((long)unaff_x20 + 6);
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine((__uint16)_Var18,param_2);
  Swift::Hasher::_combine(_Var17,param_2);
  Swift::Hasher::_combine(_Var19,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var3,param_2);
  Swift::Hasher::_combine(_Var15,param_2);
  Swift::Hasher::_combine(_Var9,param_2);
  Swift::Hasher::_combine(_Var14,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  Swift::Hasher::_combine(_Var5,param_2);
  Swift::Hasher::_combine(_Var10,param_2);
  Swift::Hasher::_combine(_Var6,param_2);
  Swift::Hasher::_combine(_Var11,param_2);
  Swift::Hasher::_combine(_Var7,param_2);
  Swift::Hasher::_combine(_Var12,param_2);
  Swift::Hasher::_combine(_Var8,param_2);
  Swift::Hasher::_combine(_Var13,param_2);
  Swift::Hasher::_combine(_Var4,param_2);
  Swift::Hasher::_combine(_Var16,param_2);
  return;
}



/* Address: 0x100a6b99c | FUN_100a6b99c */

void FUN_100a6b99c(undefined8 param_1,Hasher param_2)

{
  __uint32 _Var1;
  __uint32 _Var2;
  __uint32 _Var3;
  __uint32 _Var4;
  __uint64 _Var5;
  __uint64 _Var6;
  __uint64 _Var7;
  __uint64 _Var8;
  __uint64 _Var9;
  __uint64 _Var10;
  __uint64 _Var11;
  __uint64 _Var12;
  __uint64 _Var13;
  __uint64 _Var14;
  __uint32 _Var15;
  __uint32 _Var16;
  uint uVar17;
  __uint16 _Var18;
  __uint32 _Var19;
  Hasher HVar20;
  __uint32 *unaff_x20;
  __uint64 _Var21;
  
  _Var15 = *unaff_x20;
  _Var21 = *(__uint64 *)(unaff_x20 + 2);
  _Var1 = unaff_x20[4];
  _Var3 = unaff_x20[5];
  _Var16 = unaff_x20[6];
  _Var5 = *(__uint64 *)(unaff_x20 + 8);
  _Var10 = *(__uint64 *)(unaff_x20 + 10);
  _Var6 = *(__uint64 *)(unaff_x20 + 0xc);
  _Var11 = *(__uint64 *)(unaff_x20 + 0xe);
  _Var7 = *(__uint64 *)(unaff_x20 + 0x10);
  _Var12 = *(__uint64 *)(unaff_x20 + 0x12);
  _Var8 = *(__uint64 *)(unaff_x20 + 0x14);
  _Var13 = *(__uint64 *)(unaff_x20 + 0x16);
  _Var9 = *(__uint64 *)(unaff_x20 + 0x18);
  _Var14 = *(__uint64 *)(unaff_x20 + 0x1a);
  _Var2 = unaff_x20[0x1c];
  _Var4 = unaff_x20[0x1d];
  uVar17 = unaff_x20[0x1e];
  _Var19 = unaff_x20[1];
  _Var18 = *(__uint16 *)((long)unaff_x20 + 6);
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(_Var15,param_2);
  Swift::Hasher::_combine((__uint16)_Var19,param_2);
  Swift::Hasher::_combine(_Var18,param_2);
  Swift::Hasher::_combine(_Var21,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var3,param_2);
  Swift::Hasher::_combine(_Var16,param_2);
  Swift::Hasher::_combine(_Var9,param_2);
  Swift::Hasher::_combine(_Var14,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  Swift::Hasher::_combine(_Var5,param_2);
  Swift::Hasher::_combine(_Var10,param_2);
  Swift::Hasher::_combine(_Var6,param_2);
  Swift::Hasher::_combine(_Var11,param_2);
  Swift::Hasher::_combine(_Var7,param_2);
  Swift::Hasher::_combine(_Var12,param_2);
  Swift::Hasher::_combine(_Var8,param_2);
  Swift::Hasher::_combine(_Var13,param_2);
  Swift::Hasher::_combine(_Var4,param_2);
  HVar20.unknown = (undefined *)(ulong)uVar17;
  Swift::Hasher::_combine(uVar17,param_2);
  Swift::Hasher::_finalize(HVar20);
  return;
}



/* Address: 0x100a6bb2c | FUN_100a6bb2c */

void FUN_100a6bb2c(void)

{
  FUN_100a6b99c();
  return;
}



/* Address: 0x100a6bb7c | FUN_100a6bb7c */

void FUN_100a6bb7c(void)

{
  FUN_100a6b870();
  return;
}



/* Address: 0x100a6bbcc | FUN_100a6bbcc */

void FUN_100a6bbcc(__int64 param_1,Hasher param_2)

{
  __uint32 _Var1;
  __uint32 _Var2;
  __uint32 _Var3;
  __uint32 _Var4;
  __uint64 _Var5;
  __uint64 _Var6;
  __uint64 _Var7;
  __uint64 _Var8;
  __uint64 _Var9;
  __uint64 _Var10;
  __uint64 _Var11;
  __uint64 _Var12;
  __uint64 _Var13;
  __uint64 _Var14;
  __uint32 _Var15;
  __uint32 _Var16;
  uint uVar17;
  __uint16 _Var18;
  __uint32 _Var19;
  Hasher HVar20;
  __uint32 *unaff_x20;
  __uint64 _Var21;
  
  _Var15 = *unaff_x20;
  _Var21 = *(__uint64 *)(unaff_x20 + 2);
  _Var1 = unaff_x20[4];
  _Var3 = unaff_x20[5];
  _Var16 = unaff_x20[6];
  _Var5 = *(__uint64 *)(unaff_x20 + 8);
  _Var10 = *(__uint64 *)(unaff_x20 + 10);
  _Var6 = *(__uint64 *)(unaff_x20 + 0xc);
  _Var11 = *(__uint64 *)(unaff_x20 + 0xe);
  _Var7 = *(__uint64 *)(unaff_x20 + 0x10);
  _Var12 = *(__uint64 *)(unaff_x20 + 0x12);
  _Var8 = *(__uint64 *)(unaff_x20 + 0x14);
  _Var13 = *(__uint64 *)(unaff_x20 + 0x16);
  _Var9 = *(__uint64 *)(unaff_x20 + 0x18);
  _Var14 = *(__uint64 *)(unaff_x20 + 0x1a);
  _Var2 = unaff_x20[0x1c];
  _Var4 = unaff_x20[0x1d];
  uVar17 = unaff_x20[0x1e];
  _Var19 = unaff_x20[1];
  _Var18 = *(__uint16 *)((long)unaff_x20 + 6);
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(_Var15,param_2);
  Swift::Hasher::_combine((__uint16)_Var19,param_2);
  Swift::Hasher::_combine(_Var18,param_2);
  Swift::Hasher::_combine(_Var21,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var3,param_2);
  Swift::Hasher::_combine(_Var16,param_2);
  Swift::Hasher::_combine(_Var9,param_2);
  Swift::Hasher::_combine(_Var14,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  Swift::Hasher::_combine(_Var5,param_2);
  Swift::Hasher::_combine(_Var10,param_2);
  Swift::Hasher::_combine(_Var6,param_2);
  Swift::Hasher::_combine(_Var11,param_2);
  Swift::Hasher::_combine(_Var7,param_2);
  Swift::Hasher::_combine(_Var12,param_2);
  Swift::Hasher::_combine(_Var8,param_2);
  Swift::Hasher::_combine(_Var13,param_2);
  Swift::Hasher::_combine(_Var4,param_2);
  HVar20.unknown = (undefined *)(ulong)uVar17;
  Swift::Hasher::_combine(uVar17,param_2);
  Swift::Hasher::_finalize(HVar20);
  return;
}



/* Address: 0x100a6bd58 | FUN_100a6bd58 */

uint FUN_100a6bd58(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  local_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_b8 = param_1[0x11];
  local_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  local_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  local_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  local_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  local_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_28 = param_2[0x11];
  local_30 = param_2[0x10];
  uStack_88 = param_2[5];
  local_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  local_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  local_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_100a6bdd8(&local_140,&local_b0);
  return uVar1 & 1;
}



/* Address: 0x100a6bdd8 | FUN_100a6bdd8 */

byte FUN_100a6bdd8(int *param_1,int *param_2)

{
  byte bVar1;
  uint7 uVar2;
  byte bVar3;
  
  if (*param_1 == *param_2) {
    uVar2 = CONCAT16(-(*(long *)(param_1 + 10) == *(long *)(param_2 + 10)),
                     (uint6)CONCAT14(-(*(long *)(param_1 + 8) == *(long *)(param_2 + 8)),
                                     (uint)CONCAT12(-(*(long *)(param_1 + 0x1a) ==
                                                     *(long *)(param_2 + 0x1a)),
                                                    (ushort)(byte)-(*(long *)(param_1 + 0x18) ==
                                                                   *(long *)(param_2 + 0x18))))) &
            CONCAT16(-((int)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) ==
                      (int)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20)),
                     (uint6)CONCAT14(-((int)*(undefined8 *)(param_1 + 0x1c) ==
                                      (int)*(undefined8 *)(param_2 + 0x1c)),
                                     (uint)CONCAT12(-((int)((ulong)*(undefined8 *)(param_1 + 5) >>
                                                           0x20) ==
                                                     (int)((ulong)*(undefined8 *)(param_2 + 5) >>
                                                          0x20)),
                                                    (ushort)(byte)-((int)*(undefined8 *)
                                                                          (param_1 + 5) ==
                                                                   (int)*(undefined8 *)(param_2 + 5)
                                                                   ))));
    bVar3 = NEON_uminv(CONCAT17(-((char)((*(long *)(param_1 + 0x12) == *(long *)(param_2 + 0x12)) *
                                        -0x80) < '\0'),
                                CONCAT16(-((char)((*(long *)(param_1 + 0x10) ==
                                                  *(long *)(param_2 + 0x10)) * -0x80) < '\0'),
                                         CONCAT15(-((char)((*(long *)(param_1 + 0xe) ==
                                                           *(long *)(param_2 + 0xe)) * -0x80) < '\0'
                                                   ),CONCAT14(-((char)((*(long *)(param_1 + 0xc) ==
                                                                       *(long *)(param_2 + 0xc)) *
                                                                      -0x80) < '\0'),
                                                              CONCAT13(-((char)((char)(uVar2 >> 0x30
                                                                                      ) << 7) < '\0'
                                                                        ),CONCAT12(-((char)((char)(
                                                  uVar2 >> 0x20) << 7) < '\0'),
                                                  CONCAT11(-((char)((char)(uVar2 >> 0x10) << 7) <
                                                            '\0'),-((char)((char)uVar2 << 7) < '\0')
                                                          ))))))),1);
    bVar1 = 0;
    if (*(long *)(param_1 + 0x14) == *(long *)(param_2 + 0x14)) {
      bVar1 = bVar3 & *(long *)(param_1 + 2) == *(long *)(param_2 + 2);
    }
    bVar3 = 0;
    if (*(long *)(param_1 + 0x16) == *(long *)(param_2 + 0x16)) {
      bVar3 = bVar1;
    }
    bVar1 = 0;
    if (param_1[4] == param_2[4] && param_1[0x1e] == param_2[0x1e]) {
      bVar1 = bVar3;
    }
    bVar3 = 0;
    if ((short)param_1[1] == (short)param_2[1]) {
      bVar3 = bVar1;
    }
    bVar1 = 0;
    if (*(short *)((long)param_1 + 6) == *(short *)((long)param_2 + 6)) {
      bVar1 = bVar3;
    }
    return bVar1;
  }
  return 0;
}



/* Address: 0x100a6bedc | FUN_100a6bedc */

undefined8 FUN_100a6bedc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
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
  
  uStack_218 = param_1[0xd];
  local_220 = param_1[0xc];
  uStack_208 = param_1[0xf];
  uStack_210 = param_1[0xe];
  uStack_1f8 = param_1[0x11];
  local_200 = param_1[0x10];
  uStack_258 = param_1[5];
  local_260 = param_1[4];
  uStack_248 = param_1[7];
  uStack_250 = param_1[6];
  uStack_238 = param_1[9];
  local_240 = param_1[8];
  uStack_228 = param_1[0xb];
  uStack_230 = param_1[10];
  uStack_278 = param_1[1];
  local_280 = *param_1;
  uStack_268 = param_1[3];
  uStack_270 = param_1[2];
  iVar2 = (int)&local_1e8;
  uStack_170 = param_2[0xf];
  local_178 = param_2[0xe];
  uStack_160 = param_2[0x11];
  local_168 = param_2[0x10];
  uStack_180 = param_2[0xd];
  local_188 = param_2[0xc];
  uStack_1c0 = param_2[5];
  local_1c8 = param_2[4];
  uStack_1b0 = param_2[7];
  local_1b8 = param_2[6];
  uStack_1a0 = param_2[9];
  local_1a8 = param_2[8];
  uStack_190 = param_2[0xb];
  local_198 = param_2[10];
  uStack_1e0 = param_2[1];
  local_1e8 = *param_2;
  uStack_1d0 = param_2[3];
  local_1d8 = param_2[2];
  local_1f0 = *(undefined1 *)(param_1 + 0x12);
  local_158 = *(undefined1 *)(param_2 + 0x12);
  iVar1 = (int)&local_280;
  FUN_100a6ac78();
  uStack_c8 = uStack_1f8;
  local_d0 = local_200;
  uStack_d8 = uStack_208;
  uStack_e0 = uStack_210;
  uStack_e8 = uStack_218;
  local_f0 = local_220;
  uStack_f8 = uStack_228;
  uStack_100 = uStack_230;
  uStack_108 = uStack_238;
  local_110 = local_240;
  uStack_118 = uStack_248;
  uStack_120 = uStack_250;
  uStack_128 = uStack_258;
  local_130 = local_260;
  uStack_138 = uStack_268;
  uStack_140 = uStack_270;
  uStack_148 = uStack_278;
  local_150 = local_280;
  if (iVar1 == 1) {
    FUN_100a6ac78();
    if (iVar2 != 1) {
      return 0;
    }
  }
  else {
    FUN_100a6ac78();
    if (iVar2 == 1) {
      return 0;
    }
    uStack_58 = uStack_180;
    local_60 = local_188;
    uStack_48 = uStack_170;
    uStack_50 = local_178;
    uStack_38 = uStack_160;
    local_40 = local_168;
    uStack_98 = uStack_1c0;
    local_a0 = local_1c8;
    uStack_88 = uStack_1b0;
    uStack_90 = local_1b8;
    uStack_78 = uStack_1a0;
    local_80 = local_1a8;
    uStack_68 = uStack_190;
    uStack_70 = local_198;
    uStack_b8 = uStack_1e0;
    local_c0 = local_1e8;
    uStack_a8 = uStack_1d0;
    uStack_b0 = local_1d8;
    puVar3 = &local_150;
    FUN_100a6bdd8(puVar3,&local_c0);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  if ((((((*(char *)((long)param_1 + 0x91) == *(char *)((long)param_2 + 0x91)) &&
         (*(short *)((long)param_1 + 0x92) == *(short *)((long)param_2 + 0x92))) &&
        (param_1[0x13] == param_2[0x13])) &&
       ((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
        (*(int *)((long)param_1 + 0xa4) == *(int *)((long)param_2 + 0xa4))))) &&
      ((param_1[0x15] == param_2[0x15] &&
       ((param_1[0x16] == param_2[0x16] && (param_1[0x17] == param_2[0x17])))))) &&
     ((param_1[0x18] == param_2[0x18] &&
      ((param_1[0x19] == param_2[0x19] && (param_1[0x1a] == param_2[0x1a])))))) {
    return 1;
  }
  return 0;
}



/* Address: 0x100a6c100 | thunk_FUN_100a6c104 */

void thunk_FUN_100a6c104(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6d70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91a50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91a50,&DAT_100f2d260);
  DAT_100ff6d70 = pTVar1;
  return;
}



/* Address: 0x100a6c104 | FUN_100a6c104 */

void FUN_100a6c104(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6d70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91a50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91a50,&DAT_100f2d260);
  DAT_100ff6d70 = pTVar1;
  return;
}



/* Address: 0x100a6c144 | thunk_FUN_100a6c148 */

void thunk_FUN_100a6c148(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6d78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91ae0,&DAT_100f2d2a8);
  DAT_100ff6d78 = pTVar1;
  return;
}



/* Address: 0x100a6c148 | FUN_100a6c148 */

void FUN_100a6c148(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6d78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91ae0,&DAT_100f2d2a8);
  DAT_100ff6d78 = pTVar1;
  return;
}



/* Address: 0x100a6c188 | thunk_FUN_100a6c18c */

void thunk_FUN_100a6c18c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6d80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91b70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91b70,&DAT_100f2d2d0);
  DAT_100ff6d80 = pTVar1;
  return;
}



/* Address: 0x100a6c18c | FUN_100a6c18c */

void FUN_100a6c18c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6d80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91b70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91b70,&DAT_100f2d2d0);
  DAT_100ff6d80 = pTVar1;
  return;
}



/* Address: 0x100a6c1cc | thunk_FUN_100a6c1d0 */

void thunk_FUN_100a6c1d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6d88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91bd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91bd8,&DAT_100f2d350);
  DAT_100ff6d88 = pTVar1;
  return;
}



/* Address: 0x100a6c1d0 | FUN_100a6c1d0 */

void FUN_100a6c1d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6d88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91bd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91bd8,&DAT_100f2d350);
  DAT_100ff6d88 = pTVar1;
  return;
}



/* Address: 0x100a6c210 | FUN_100a6c210 */

void FUN_100a6c210(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar5 = param_2[0x10];
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  uVar2 = param_2[0x15];
  uVar1 = param_2[0x14];
  uVar4 = param_2[0x17];
  uVar3 = param_2[0x16];
  uVar6 = param_2[0x19];
  uVar5 = param_2[0x18];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x17] = uVar4;
  param_1[0x16] = uVar3;
  param_1[0x19] = uVar6;
  param_1[0x18] = uVar5;
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  return;
}



/* Address: 0x100a6c254 | FUN_100a6c254 */

int FUN_100a6c254(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf7 < param_2) && ((char)param_1[0x36] != '\0')) {
    return *param_1 + 0xf8;
  }
  iVar1 = *(byte *)((long)param_1 + 0x91) - 9;
  if (*(byte *)((long)param_1 + 0x91) < 9) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Address: 0x100a6c298 | FUN_100a6c298 */

void FUN_100a6c298(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xf8) {
    if (0xf7 < param_3) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x91) = (char)param_2 + '\b';
      return;
    }
  }
  else {
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
    *param_1 = (ulong)(param_2 - 0xf8);
    if (0xf7 < param_3) {
      *(undefined1 *)(param_1 + 0x1b) = 1;
    }
  }
  return;
}



/* Address: 0x100a6c310 | FUN_100a6c310 */

undefined1  [16] FUN_100a6c310(void)

{
  return ZEXT816(0x100f2d260);
}



/* Address: 0x100a6c320 | FUN_100a6c320 */

undefined1  [16] FUN_100a6c320(void)

{
  return ZEXT816(0x100f2d2a8);
}



/* Address: 0x100a6c330 | FUN_100a6c330 */

undefined1  [16] FUN_100a6c330(void)

{
  return ZEXT816(0x100f2d2d0);
}



/* Address: 0x100a6c340 | FUN_100a6c340 */

undefined1  [16] FUN_100a6c340(void)

{
  return ZEXT816(0x100f2d350);
}



/* Address: 0x100a6c350 | FUN_100a6c350 */

undefined1  [16] FUN_100a6c350(void)

{
  return ZEXT816(0x100f2d3d0);
}



/* Address: 0x100a6c360 | thunk_FUN_100a6c364 */

void thunk_FUN_100a6c364(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6d90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91c3c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91c3c,&DAT_100f2d3d0);
  DAT_100ff6d90 = pTVar1;
  return;
}



/* Address: 0x100a6c364 | FUN_100a6c364 */

void FUN_100a6c364(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6d90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91c3c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91c3c,&DAT_100f2d3d0);
  DAT_100ff6d90 = pTVar1;
  return;
}



/* Address: 0x100a6c3a4 | thunk_FUN_100a6b800 */

String thunk_FUN_100a6b800(void)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x100a6c3a8 | thunk_FUN_1008a0418 */

void thunk_FUN_1008a0418(void)

{
  FUN_1008a0418();
  return;
}



/* Address: 0x100a6c3ac | thunk_FUN_10094b408 */

void thunk_FUN_10094b408(void)

{
  FUN_10094b408();
  return;
}



/* Address: 0x100a6c3b0 | thunk_FUN_10094b42c */

void thunk_FUN_10094b42c(void)

{
  FUN_10094b42c();
  return;
}



/* Address: 0x100a6c3b4 | thunk_FUN_100a6b7c0 */

void thunk_FUN_100a6b7c0(void)

{
  FUN_100a6b7c0();
  return;
}



/* Address: 0x100a6c3b8 | FUN_100a6c3b8 */

void FUN_100a6c3b8(byte param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  String SVar5;
  String SVar6;
  
  if (param_1 < 4) {
    puVar4 = (undefined1 *)0xe900000000000072;
    pcVar3 = (char *)0x6574636172616863;
    if (param_1 != 2) {
      puVar4 = &DAT_e400000000000000;
      pcVar3 = (char *)0x6f666966;
    }
    pcVar2 = (char *)0x72616c75676572;
    if (param_1 != 0) {
      pcVar2 = (char *)0x6b636f6c62;
    }
    puVar1 = &DAT_e700000000000000;
    if (param_1 != 0) {
      puVar1 = &DAT_e500000000000000;
    }
    if (param_1 < 2) {
      pcVar3 = pcVar2;
      puVar4 = puVar1;
    }
  }
  else {
    pcVar2 = (char *)0x74756f6574696877;
    if (param_1 != 7) {
      pcVar2 = (char *)0x6e776f6e6b6e75;
    }
    puVar1 = &DAT_e800000000000000;
    if (param_1 != 7) {
      puVar1 = &DAT_e700000000000000;
    }
    pcVar3 = (char *)0x74656b636f73;
    if (param_1 != 6) {
      pcVar3 = pcVar2;
    }
    puVar4 = &DAT_e600000000000000;
    if (param_1 != 6) {
      puVar4 = puVar1;
    }
    puVar1 = (undefined1 *)0xe900000000000079;
    pcVar2 = (char *)0x726f746365726964;
    if (param_1 != 4) {
      puVar1 = &DAT_e700000000000000;
      pcVar2 = (char *)0x6b6e696c6d7973;
    }
    if (param_1 < 6) {
      pcVar3 = pcVar2;
      puVar4 = puVar1;
    }
  }
  SVar5.bridgeObject = puVar4;
  SVar5.str = pcVar3;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar5,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x100a6c4ec | thunk_FUN_100a73990 */

void thunk_FUN_100a73990(void)

{
  if (DAT_100ff6d98 != -1) {
    _swift_once(&DAT_100ff6d98,FUN_100a73848);
  }
  _swift_retain(DAT_100ff6da0);
  return;
}



/* Address: 0x100a6c4f0 | FUN_100a6c4f0 */

void FUN_100a6c4f0(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x42) = param_4;
  *(undefined2 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  _swift_task_switch(switchD_100a411e8::caseD_e9,0,0);
  return;
}



/* Address: 0x100a6c510 | switchD_100a411e8::caseD_e9 */

void switchD_100a411e8::caseD_e9(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x42);
  uVar4 = *(undefined2 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar5 = &DAT_100f2d440;
  _swift_allocObject(&DAT_100f2d440,0x2a,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  puVar5[0x18] = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  puVar5[0x28] = (byte)uVar4 & 1;
  puVar5[0x29] = (byte)((ushort)uVar4 >> 8) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar7;
  puVar6 = &DAT_100ff6950;
  FUN_1000f7830(&DAT_100ff6950,&DAT_100c908b8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a6c5f8;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a738d0,puVar5,puVar6);
  return;
}



/* Address: 0x100a6c5f8 | FUN_100a6c5f8 */

void FUN_100a6c5f8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x30));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a6c664;
  }
  else {
    pcVar2 = FUN_100928d1c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a6c664 | FUN_100a6c664 */

void FUN_100a6c664(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a6c66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100a6c670 | FUN_100a6c670 */

void FUN_100a6c670(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  char local_38;
  undefined8 *puVar2;
  
  FUN_100a6c77c(&local_80,param_4,param_5 & 0x101,param_2,param_3);
  if (local_38 == '\x01') {
    local_c8 = local_80;
    uStack_b8 = uStack_70;
    local_c0 = local_78;
    uStack_a8 = uStack_60;
    uStack_b0 = local_68;
    uStack_98 = uStack_50;
    local_a0 = local_58;
    uStack_88 = uStack_40;
    uStack_90 = local_48;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    puVar3 = puVar2;
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      puVar3 = &local_c8;
      _swift_willThrowTypedImpl(puVar3,&DAT_100f2de38,puVar2);
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    *puVar3 = local_80;
    puVar3[2] = uStack_70;
    puVar3[1] = local_78;
    puVar3[4] = uStack_60;
    puVar3[3] = local_68;
    puVar3[6] = uStack_50;
    puVar3[5] = local_58;
    puVar3[8] = uStack_40;
    puVar3[7] = local_48;
  }
  else {
    *param_1 = local_80;
  }
  return;
}



/* Address: 0x100a6c77c | FUN_100a6c77c */

/* WARNING: Removing unreachable block (ram,0x000100a6c800) */

void FUN_100a6c77c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 local_12c [11];
  undefined1 auStack_100 [16];
  undefined4 local_f0;
  uint uStack_ec;
  undefined4 local_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  pthread_mutexattr_t local_a0 [4];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_ec = 0;
  if ((param_3 & 1) == 0) {
    uStack_ec = 0x100;
  }
  uStack_ec = uStack_ec | ((uint)(param_3 >> 8) & 1) << 0x18;
  local_f0 = 0;
  local_e8 = 0x1010000;
  FUN_1005b32d0(local_12c,FUN_100a7c3c4,auStack_100,param_2,&DAT_100ee4520);
  lVar3 = 0;
  FUN_100ab2d90();
  _swift_allocObject();
  puVar4 = &DAT_100ff6ea0;
  FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
  _swift_allocObject();
  *(undefined4 *)(puVar4 + 0x10) = local_12c[0];
  puVar4[0x14] = 0;
  local_a0[0].__sig = 0;
  local_a0[0].__opaque[0] = '\0';
  local_a0[0].__opaque[1] = '\0';
  local_a0[0].__opaque[2] = '\0';
  local_a0[0].__opaque[3] = '\0';
  local_a0[0].__opaque[4] = '\0';
  local_a0[0].__opaque[5] = '\0';
  local_a0[0].__opaque[6] = '\0';
  local_a0[0].__opaque[7] = '\0';
  _pthread_mutexattr_init(local_a0);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x18),local_a0);
  if (iVar2 == 0) {
    *(undefined **)(lVar3 + 0x10) = puVar4;
    *(undefined8 *)(lVar3 + 0x18) = param_4;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x20) = param_2;
    *(undefined1 *)(lVar3 + 0x38) = 0;
    _swift_retain(param_4);
    _swift_bridgeObjectRetain(param_2);
    *param_1 = lVar3;
    param_1[2] = lStack_d8;
    param_1[1] = local_e0;
    param_1[4] = lStack_c8;
    param_1[3] = lStack_d0;
    param_1[6] = lStack_b8;
    param_1[5] = local_c0;
    param_1[8] = lStack_a8;
    param_1[7] = local_b0;
    *(undefined1 *)(param_1 + 9) = 0;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a6c970);
  (*pcVar1)();
}



/* Address: 0x100a6c974 | FUN_100a6c974 */

void FUN_100a6c974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_100a6c994,0,0);
  return;
}



/* Address: 0x100a6c994 | FUN_100a6c994 */

void FUN_100a6c994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar4 = &DAT_100f2d468;
  _swift_allocObject(&DAT_100f2d468,0x30,7);
  *(undefined **)(unaff_x22 + 0x30) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  puVar4[0x18] = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  puVar4[0x28] = (char)uVar1;
  *(int *)(puVar4 + 0x2a) = (int)((ulong)uVar1 >> 0x10);
  puVar4[0x2e] = (byte)((ulong)uVar1 >> 0x30) & 1;
  puVar4[0x2f] = (byte)((ulong)uVar1 >> 0x38) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar6);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar7;
  puVar5 = &DAT_100ff6ab0;
  FUN_1000f7830(&DAT_100ff6ab0,&DAT_100c90ab8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a6ca88;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a738ec,puVar4,puVar5);
  return;
}



/* Address: 0x100a6ca88 | FUN_100a6ca88 */

void FUN_100a6ca88(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(long *)(lVar3 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x38));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a6c664;
  }
  else {
    pcVar2 = FUN_100543edc;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a6caf4 | FUN_100a6caf4 */

void FUN_100a6caf4(void)

{
  FUN_100a6cc8c();
  return;
}



/* Address: 0x100a6cb0c | FUN_100a6cb0c */

void FUN_100a6cb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_100a6cb2c,0,0);
  return;
}



/* Address: 0x100a6cb2c | FUN_100a6cb2c */

void FUN_100a6cb2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar4 = &DAT_100f2d490;
  _swift_allocObject(&DAT_100f2d490,0x30,7);
  *(undefined **)(unaff_x22 + 0x30) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  puVar4[0x18] = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  puVar4[0x28] = (char)uVar1;
  *(int *)(puVar4 + 0x2a) = (int)((ulong)uVar1 >> 0x10);
  puVar4[0x2e] = (byte)((ulong)uVar1 >> 0x30) & 1;
  puVar4[0x2f] = (byte)((ulong)uVar1 >> 0x38) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar6);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar7;
  puVar5 = &DAT_100ff6db0;
  FUN_1000f7830(&DAT_100ff6db0,&DAT_100c91cc0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a6cc20;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a73904,puVar4,puVar5);
  return;
}



/* Address: 0x100a6cc20 | FUN_100a6cc20 */

void FUN_100a6cc20(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(long *)(lVar3 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x38));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a6c664;
  }
  else {
    pcVar2 = thunk_FUN_100543edc;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a6cc8c | FUN_100a6cc8c */

void FUN_100a6cc8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  char local_38;
  undefined8 *puVar2;
  
  FUN_100a6cd9c(&local_80,param_4,param_5 & 0x101ffffffff00ff,param_2,param_3);
  if (local_38 == '\x01') {
    local_c8 = local_80;
    uStack_b8 = uStack_70;
    local_c0 = local_78;
    uStack_a8 = uStack_60;
    uStack_b0 = local_68;
    uStack_98 = uStack_50;
    local_a0 = local_58;
    uStack_88 = uStack_40;
    uStack_90 = local_48;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    puVar3 = puVar2;
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      puVar3 = &local_c8;
      _swift_willThrowTypedImpl(puVar3,&DAT_100f2de38,puVar2);
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    *puVar3 = local_80;
    puVar3[2] = uStack_70;
    puVar3[1] = local_78;
    puVar3[4] = uStack_60;
    puVar3[3] = local_68;
    puVar3[6] = uStack_50;
    puVar3[5] = local_58;
    puVar3[8] = uStack_40;
    puVar3[7] = local_48;
  }
  else {
    *param_1 = local_80;
  }
  return;
}



/* Address: 0x100a6cd9c | FUN_100a6cd9c */

void FUN_100a6cd9c(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  
  uVar4 = 0x100;
  if ((param_3 & 0x1000000000000) != 0) {
    uVar4 = 0;
  }
  uVar4 = uVar4 | (uint)(param_3 >> 0x20) & 0x1000000;
  uVar3 = (uint)(param_3 >> 0x10);
  if ((uVar3 & 0xff000000) != 0x2000000) {
    uVar4 = uVar4 | 0x200;
  }
  if ((param_3 & 0xff) == 0) {
    uVar4 = uVar4 | 0x800;
  }
  else if (((uint)param_3 & 0xff) != 1) {
    uVar4 = uVar4 | 0x400;
  }
  uVar1 = 0x1a4;
  if ((param_3 & 0xff00000000) != 0x100000000) {
    uVar1 = uVar3 & 0xffff;
  }
  uVar2 = 0x10000;
  if ((uVar3 & 0xff000000) != 0x2000000) {
    uVar2 = uVar1;
  }
  FUN_100ab2300(&local_70,param_2,param_6,uVar4,uVar2,uVar3 >> 0x18 & 1,param_4);
  if (local_28 == '\x01') {
    uStack_a8 = uStack_60;
    local_b0 = local_68;
    uStack_98 = uStack_50;
    uStack_a0 = local_58;
    uStack_88 = uStack_40;
    local_90 = local_48;
    uStack_78 = uStack_30;
    uStack_80 = local_38;
  }
  *param_1 = local_70;
  param_1[2] = uStack_a8;
  param_1[1] = local_b0;
  param_1[4] = uStack_98;
  param_1[3] = uStack_a0;
  param_1[6] = uStack_88;
  param_1[5] = local_90;
  param_1[8] = uStack_78;
  param_1[7] = uStack_80;
  *(bool *)(param_1 + 9) = local_28 == '\x01';
  return;
}



/* Address: 0x100a6ce9c | FUN_100a6ce9c */

void FUN_100a6ce9c(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x42) = param_4;
  *(undefined2 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  _swift_task_switch(FUN_100a6cebc,0,0);
  return;
}



/* Address: 0x100a6cebc | FUN_100a6cebc */

void FUN_100a6cebc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x42);
  uVar4 = *(undefined2 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar5 = &DAT_100f2d4b8;
  _swift_allocObject(&DAT_100f2d4b8,0x2a,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  puVar5[0x18] = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  puVar5[0x28] = (byte)uVar4 & 1;
  puVar5[0x29] = (byte)((ushort)uVar4 >> 8) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar7;
  puVar6 = &DAT_100ff6db8;
  FUN_1000f7830(&DAT_100ff6db8,&DAT_100c933a0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a6cfa4;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a7391c,puVar5,puVar6);
  return;
}



/* Address: 0x100a6cfa4 | FUN_100a6cfa4 */

void FUN_100a6cfa4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x30));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a6c664;
  }
  else {
    pcVar2 = thunk_FUN_100928d1c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a6d010 | FUN_100a6d010 */

void FUN_100a6d010(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  pthread_mutexattr_t local_130;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  undefined8 *puVar5;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = 0x100000;
  if ((param_5 & 1) == 0) {
    uVar1 = 0x100100;
  }
  local_e0 = (ulong)(uVar1 | ((uint)(param_5 >> 8) & 1) << 0x18) << 0x20;
  local_d8 = CONCAT44(local_d8._4_4_,0x1010000);
  FUN_1005b32d0(&local_11c,FUN_100a7c3c4,&local_f0,param_4,&DAT_100ee4520);
  if (unaff_x21 == 0) {
    lVar7 = 0;
    FUN_100ab2d90();
    _swift_allocObject();
    puVar8 = &DAT_100ff6ea0;
    FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
    _swift_allocObject();
    *(undefined4 *)(puVar8 + 0x10) = local_11c;
    puVar8[0x14] = 0;
    local_130.__sig = 0;
    local_130.__opaque[0] = '\0';
    local_130.__opaque[1] = '\0';
    local_130.__opaque[2] = '\0';
    local_130.__opaque[3] = '\0';
    local_130.__opaque[4] = '\0';
    local_130.__opaque[5] = '\0';
    local_130.__opaque[6] = '\0';
    local_130.__opaque[7] = '\0';
    _pthread_mutexattr_init(&local_130);
    iVar4 = _pthread_mutex_init((pthread_mutex_t *)(puVar8 + 0x18),&local_130);
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a6d24c);
      (*pcVar2)();
    }
    *(undefined **)(lVar7 + 0x10) = puVar8;
    *(undefined8 *)(lVar7 + 0x18) = param_2;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x20) = param_4;
    *(undefined1 *)(lVar7 + 0x38) = 0;
    *param_1 = lVar7;
    _swift_retain(param_2);
    _swift_bridgeObjectRetain(param_4);
  }
  else {
    local_118 = 0xd000000000000035;
    uStack_110 = 0x8000000100db8ec0;
    local_108 = 0xd000000000000025;
    uStack_100 = 0x8000000100db85f0;
    local_f8 = 0x57f;
    FUN_100a7da48(&local_a0,0x6e65706f,&DAT_e400000000000000);
    _swift_errorRelease();
    uStack_c8 = uStack_78;
    local_d0 = local_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    local_b0 = local_60;
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    local_d8 = uStack_88;
    local_e0 = lStack_90;
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar5 = (undefined8 *)CONCAT71(extraout_var,bVar3);
    puVar6 = puVar5;
    if ((bVar3 & 1) != 0) {
      FUN_100a500c0();
      puVar6 = &local_f0;
      _swift_willThrowTypedImpl(puVar6,&DAT_100f2de38,puVar5);
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar6,0,0);
    puVar6[5] = uStack_78;
    puVar6[4] = local_80;
    puVar6[7] = uStack_68;
    puVar6[6] = uStack_70;
    puVar6[8] = local_60;
    puVar6[1] = uStack_98;
    *puVar6 = local_a0;
    puVar6[3] = uStack_88;
    puVar6[2] = lStack_90;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a6d250 | FUN_100a6d250 */

void FUN_100a6d250(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x3d) = param_5;
  *(undefined4 *)(unaff_x22 + 0x38) = param_3;
  *(undefined1 *)(unaff_x22 + 0x3c) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  _swift_task_switch(FUN_100a6d274,0,0);
  return;
}



/* Address: 0x100a6d274 | FUN_100a6d274 */

void FUN_100a6d274(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar4 = *(undefined1 *)(unaff_x22 + 0x3d);
  uVar3 = *(undefined4 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x3c);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar6 = &DAT_100f2d4e0;
  _swift_allocObject(&DAT_100f2d4e0,0x2e,7);
  *(undefined **)(unaff_x22 + 0x20) = puVar6;
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  puVar6[0x18] = uVar4;
  *(undefined8 *)(puVar6 + 0x20) = uVar1;
  puVar6[0x28] = uVar5;
  *(short *)(puVar6 + 0x2a) = (short)uVar3;
  puVar6[0x2c] = (char)((uint)uVar3 >> 0x10);
  puVar6[0x2d] = 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a6d35c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a6d35c | FUN_100a6d35c */

void FUN_100a6d35c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  *(long *)(lVar3 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x28));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_1002f312c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}


