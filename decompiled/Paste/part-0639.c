/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006c7244 | thunk_FUN_1006c68a0 */

int thunk_FUN_1006c68a0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf6 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xf7;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 10) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006c7248 | thunk_FUN_1006c6ba4 */

void thunk_FUN_1006c6ba4(void)

{
  thunk_FUN_1006c6ba4();
  return;
}



/* Address: 0x1006c724c | thunk_FUN_1006c6c08 */

void thunk_FUN_1006c6c08(void)

{
  thunk_FUN_1006c6c08();
  return;
}



/* Address: 0x1006c7250 | thunk_FUN_1006c6c7c */

void thunk_FUN_1006c6c7c(void)

{
  thunk_FUN_1006c6c7c();
  return;
}



/* Address: 0x1006c7254 | thunk_FUN_1004be4ec */

void thunk_FUN_1004be4ec(void)

{
  FUN_1004be4ec();
  return;
}



/* Address: 0x1006c7258 | thunk_FUN_1006c6d74 */

undefined8 * thunk_FUN_1006c6d74(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (uVar1 < 2) {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1006c725c | thunk_FUN_1006c6fb0 */

void thunk_FUN_1006c6fb0(void)

{
  FUN_1006c6fb0();
  return;
}



/* Address: 0x1006c7260 | thunk_FUN_1005aa248 */

void thunk_FUN_1005aa248(void)

{
  FUN_1005aa248();
  return;
}



/* Address: 0x1006c7264 | thunk_FUN_1006c6dc0 */

void thunk_FUN_1006c6dc0(void)

{
  thunk_FUN_1006c6dc0();
  return;
}



/* Address: 0x1006c7268 | thunk_FUN_1006c6e6c */

void thunk_FUN_1006c6e6c(void)

{
  thunk_FUN_1006c6e6c();
  return;
}



/* Address: 0x1006c726c | thunk_FUN_1006c6edc */

int thunk_FUN_1006c6edc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 2;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006c7270 | thunk_FUN_1006c7000 */

void thunk_FUN_1006c7000(void)

{
  thunk_FUN_1006c7000();
  return;
}



/* Address: 0x1006c7274 | thunk_FUN_1006c70a4 */

void thunk_FUN_1006c70a4(void)

{
  thunk_FUN_1006c70a4();
  return;
}



/* Address: 0x1006c7278 | thunk_FUN_1006c7120 */

int thunk_FUN_1006c7120(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Address: 0x1006c727c | thunk_FUN_1006c5c48 */

void thunk_FUN_1006c5c48(void)

{
  thunk_FUN_1006c5c48();
  return;
}



/* Address: 0x1006c7280 | thunk_FUN_1006c56ac */

void thunk_FUN_1006c56ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined1 *)(param_2 + 4);
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}



/* Address: 0x1006c7284 | thunk_FUN_1006c5e10 */

void thunk_FUN_1006c5e10(void)

{
  FUN_1006c5e10();
  return;
}



/* Address: 0x1006c7288 | thunk_FUN_1006cb1a0 */

void thunk_FUN_1006cb1a0(void)

{
  FUN_1006cb1a0();
  return;
}



/* Address: 0x1006c728c | FUN_1006c728c */

undefined1  [16] FUN_1006c728c(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar1 = 0x746369727453;
    if (param_1 != '\x01') {
      uVar1 = 0x656e6f4e;
    }
    puVar2 = &DAT_e600000000000000;
    if (param_1 != '\x01') {
      puVar2 = &DAT_e400000000000000;
    }
    auVar3._8_8_ = puVar2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4._8_8_ = 0xe300000000000000;
  auVar4._0_8_ = 0x78614c;
  return auVar4;
}



/* Address: 0x1006c72d0 | FUN_1006c72d0 */

void FUN_1006c72d0(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x746369727453;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x656e6f4e;
  }
  puVar2 = &DAT_e600000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  pcVar3 = (char *)0x78614c;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = (undefined1 *)0xe300000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1006c735c | FUN_1006c735c */

void FUN_1006c735c(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
  pcVar1 = (char *)0x746369727453;
  if (cVar5 != '\x01') {
    pcVar1 = (char *)0x656e6f4e;
  }
  puVar2 = &DAT_e600000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  pcVar3 = (char *)0x78614c;
  if (cVar5 != '\0') {
    pcVar3 = pcVar1;
  }
  puVar4 = (undefined1 *)0xe300000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar3;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x1006c73c4 | FUN_1006c73c4 */

void FUN_1006c73c4(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x746369727453;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x656e6f4e;
  }
  puVar2 = &DAT_e600000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  pcVar3 = (char *)0x78614c;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = (undefined1 *)0xe300000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1006c744c | FUN_1006c744c */

void FUN_1006c744c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1006cb1a0(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1006c7478 | FUN_1006c7478 */

void FUN_1006c7478(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  
  cVar5 = *unaff_x20;
  uVar1 = 0x746369727453;
  if (cVar5 != '\x01') {
    uVar1 = 0x656e6f4e;
  }
  puVar2 = &DAT_e600000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  uVar3 = 0x78614c;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = (undefined1 *)0xe300000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  *param_1 = uVar3;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x1006c74c4 | FUN_1006c74c4 */

void FUN_1006c74c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Substring SVar4;
  Date DVar5;
  long unaff_x20;
  long lVar7;
  String SVar8;
  long local_48;
  undefined1 *puVar6;
  
  lVar7 = *(long *)(unaff_x20 + 0x20);
  SVar8.bridgeObject = &DAT_e700000000000000;
  SVar8.str = (char *)0x73657269707845;
  puVar6 = &DAT_e700000000000000;
  local_48 = lVar7;
  SVar4 = Swift::Substring::init(SVar8);
  if (*(long *)(lVar7 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar7);
    FUN_1006a3238(SVar4.unknown,puVar6,param_4,param_5);
    if (((ulong)puVar6 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)SVar4.unknown * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain(uVar3);
      FUN_1006cb204(&local_48);
      _swift_bridgeObjectRelease(param_5);
      FUN_100701c70(param_1,uVar2,uVar3);
      return;
    }
    FUN_1006cb204(&local_48);
  }
  _swift_bridgeObjectRelease(param_5);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar5.unknown + -8) + 0x38))(param_1,1,1,DVar5.unknown);
  return;
}



/* Address: 0x1006c75bc | FUN_1006c75bc */

undefined1  [16]
FUN_1006c75bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  Substring SVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar8;
  ulong uVar9;
  UnsafeBufferPointer<__int8> UVar10;
  byte *pbVar11;
  undefined **ppuVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  _StringObject _Var15;
  ulong uVar16;
  String SVar17;
  undefined1 auVar18 [16];
  undefined *local_58;
  ulong uStack_50;
  long local_48;
  undefined1 *puVar7;
  
  lVar14 = *(long *)(unaff_x20 + 0x20);
  SVar17.bridgeObject = &DAT_e700000000000000;
  SVar17.str = (char *)0x6567412d78614d;
  puVar7 = &DAT_e700000000000000;
  local_48 = lVar14;
  SVar4 = Swift::Substring::init(SVar17);
  uVar5 = param_4;
  if (*(long *)(lVar14 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar14);
    FUN_1006a3238(SVar4.unknown,puVar7,param_3,param_4);
    if (((ulong)puVar7 & 1) == 0) {
      FUN_1006cb204(&local_48);
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)SVar4.unknown * 0x10);
      _Var15.unknown = (undefined *)*puVar1;
      uVar5 = puVar1[1];
      _swift_bridgeObjectRetain(uVar5);
      FUN_1006cb204(&local_48);
      _swift_bridgeObjectRelease(param_4);
      uVar8 = (ulong)_Var15.unknown & 0xffffffffffff;
      uVar9 = uVar5 >> 0x38 & 0xf;
      uVar16 = uVar8;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar16 = uVar9;
      }
      if (uVar16 != 0) {
        if ((uVar5 >> 0x3c & 1) == 0) {
          if ((uVar5 >> 0x3d & 1) == 0) {
            if (((ulong)_Var15.unknown >> 0x3c & 1) == 0) {
              uVar8 = uVar5;
              UVar10 = Swift::_StringObject::get_sharedUTF8(_Var15);
            }
            else {
              UVar10.unknown = (undefined *)((uVar5 & 0xfffffffffffffff) + 0x20);
            }
            if (*UVar10.unknown == 0x2b) {
              if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1006c7958);
                (*pcVar3)();
              }
              lVar14 = uVar8 - 1;
              if (lVar14 == 0) goto LAB_1006c78bc;
              _Var15.unknown = (undefined *)0x0;
              do {
                UVar10.unknown = UVar10.unknown + 1;
                if (((9 < (byte)*UVar10.unknown - 0x30) ||
                    (lVar13 = (long)_Var15.unknown * 10,
                    SUB168(SEXT816((long)_Var15.unknown) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar16 = (ulong)(byte)((byte)*UVar10.unknown - 0x30),
                   _Var15.unknown = (undefined *)(lVar13 + uVar16), SCARRY8(lVar13,uVar16)))
                goto LAB_1006c78bc;
                uVar16 = 0;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
            else if (*UVar10.unknown == 0x2d) {
              if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1006c7950);
                (*pcVar3)();
              }
              lVar14 = uVar8 - 1;
              if (lVar14 == 0) {
LAB_1006c78bc:
                _Var15.unknown = (undefined *)0x0;
                uVar16 = 1;
              }
              else {
                _Var15.unknown = (undefined *)0x0;
                do {
                  UVar10.unknown = UVar10.unknown + 1;
                  if (((9 < (byte)*UVar10.unknown - 0x30) ||
                      (lVar13 = (long)_Var15.unknown * 10,
                      SUB168(SEXT816((long)_Var15.unknown) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                     (uVar16 = (ulong)(byte)((byte)*UVar10.unknown - 0x30),
                     _Var15.unknown = (undefined *)(lVar13 - uVar16), SBORROW8(lVar13,uVar16)))
                  goto LAB_1006c78bc;
                  uVar16 = 0;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
            }
            else {
              if (uVar8 == 0) goto LAB_1006c78bc;
              _Var15.unknown = (undefined *)0x0;
              if (UVar10.unknown == (byte *)0x0) {
                uVar16 = 0;
              }
              else {
                do {
                  if (((9 < (byte)*UVar10.unknown - 0x30) ||
                      (lVar14 = (long)_Var15.unknown * 10,
                      SUB168(SEXT816((long)_Var15.unknown) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
                     (uVar16 = (ulong)(byte)((byte)*UVar10.unknown - 0x30),
                     _Var15.unknown = (undefined *)(lVar14 + uVar16), SCARRY8(lVar14,uVar16)))
                  goto LAB_1006c78bc;
                  uVar16 = 0;
                  uVar8 = uVar8 - 1;
                  UVar10.unknown = UVar10.unknown + 1;
                } while (uVar8 != 0);
              }
            }
          }
          else {
            local_58 = _Var15.unknown;
            uStack_50 = uVar5 & 0xffffffffffffff;
            uVar2 = (uint)_Var15.unknown & 0xff;
            if (uVar2 == 0x2b) {
              if (uVar9 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1006c795c);
                (*pcVar3)();
              }
              lVar14 = uVar9 - 1;
              if (lVar14 == 0) goto LAB_1006c78bc;
              _Var15.unknown = (undefined *)0x0;
              pbVar11 = (byte *)((ulong)&local_58 | 1);
              do {
                if (((9 < *pbVar11 - 0x30) ||
                    (lVar13 = (long)_Var15.unknown * 10,
                    SUB168(SEXT816((long)_Var15.unknown) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar16 = (ulong)(byte)(*pbVar11 - 0x30),
                   _Var15.unknown = (undefined *)(lVar13 + uVar16), SCARRY8(lVar13,uVar16)))
                goto LAB_1006c78bc;
                uVar16 = 0;
                lVar14 = lVar14 + -1;
                pbVar11 = pbVar11 + 1;
              } while (lVar14 != 0);
            }
            else if (uVar2 == 0x2d) {
              if (uVar9 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1006c7954);
                (*pcVar3)();
              }
              lVar14 = uVar9 - 1;
              if (lVar14 == 0) goto LAB_1006c78bc;
              _Var15.unknown = (undefined *)0x0;
              pbVar11 = (byte *)((ulong)&local_58 | 1);
              do {
                if (((9 < *pbVar11 - 0x30) ||
                    (lVar13 = (long)_Var15.unknown * 10,
                    SUB168(SEXT816((long)_Var15.unknown) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar16 = (ulong)(byte)(*pbVar11 - 0x30),
                   _Var15.unknown = (undefined *)(lVar13 - uVar16), SBORROW8(lVar13,uVar16)))
                goto LAB_1006c78bc;
                uVar16 = 0;
                lVar14 = lVar14 + -1;
                pbVar11 = pbVar11 + 1;
              } while (lVar14 != 0);
            }
            else {
              if (uVar9 == 0) goto LAB_1006c78bc;
              _Var15.unknown = (undefined *)0x0;
              ppuVar12 = &local_58;
              do {
                if (((9 < *(byte *)ppuVar12 - 0x30) ||
                    (lVar14 = (long)_Var15.unknown * 10,
                    SUB168(SEXT816((long)_Var15.unknown) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
                   (uVar16 = (ulong)(byte)(*(byte *)ppuVar12 - 0x30),
                   _Var15.unknown = (undefined *)(lVar14 + uVar16), SCARRY8(lVar14,uVar16)))
                goto LAB_1006c78bc;
                uVar16 = 0;
                uVar9 = uVar9 - 1;
                ppuVar12 = (undefined **)((long)ppuVar12 + 1);
              } while (uVar9 != 0);
            }
          }
          _swift_bridgeObjectRelease(uVar5);
        }
        else {
          _swift_bridgeObjectRetain(uVar5);
          uVar16 = uVar5;
          FUN_1006c9ec4(_Var15.unknown,uVar5,10,FUN_1000c43a8);
          _swift_bridgeObjectRelease_n(uVar5,2);
        }
        puVar6 = (undefined *)0x0;
        if (((uint)uVar16 & 0xff) != 1) {
          puVar6 = _Var15.unknown;
        }
        goto LAB_1006c78dc;
      }
    }
  }
  _swift_bridgeObjectRelease(uVar5);
  uVar16 = 1;
  puVar6 = (undefined *)0x0;
LAB_1006c78dc:
  auVar18._8_8_ = uVar16;
  auVar18._0_8_ = puVar6;
  return auVar18;
}



/* Address: 0x1006c795c | FUN_1006c795c */

void FUN_1006c795c(void)

{
  FUN_1006c7980(0x6e69616d6f44,&DAT_e600000000000000);
  return;
}



/* Address: 0x1006c7970 | FUN_1006c7970 */

void FUN_1006c7970(void)

{
  FUN_1006c7980(0x68746150,&DAT_e400000000000000);
  return;
}



/* Address: 0x1006c7980 | FUN_1006c7980 */

undefined1  [16] FUN_1006c7980(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  Substring SVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  String SVar6;
  undefined1 auVar7 [16];
  long local_48;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  SVar6.bridgeObject = param_2;
  SVar6.str = param_1;
  local_48 = lVar5;
  SVar2 = Swift::Substring::init(SVar6);
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    FUN_1006a3238(SVar2.unknown,param_2,param_3,param_4);
    if (((ulong)param_2 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + (long)SVar2.unknown * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      _swift_bridgeObjectRetain(uVar4);
      FUN_1006cb204(&local_48);
      _swift_bridgeObjectRelease(param_4);
      goto LAB_1006c7a24;
    }
    FUN_1006cb204(&local_48);
  }
  _swift_bridgeObjectRelease(param_4);
  uVar3 = 0;
  uVar4 = 0;
LAB_1006c7a24:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar3;
  return auVar7;
}



/* Address: 0x1006c7a3c | FUN_1006c7a3c */

void FUN_1006c7a3c(void)

{
  FUN_1006c7a68(0x657275636553,&DAT_e600000000000000);
  return;
}



/* Address: 0x1006c7a50 | FUN_1006c7a50 */

void FUN_1006c7a50(void)

{
  FUN_1006c7a68(0x796c6e4f70747448,&DAT_e800000000000000);
  return;
}



/* Address: 0x1006c7a68 | FUN_1006c7a68 */

undefined8 FUN_1006c7a68(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  Substring SVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  String SVar4;
  long local_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  SVar4.bridgeObject = param_2;
  SVar4.str = param_1;
  local_48 = lVar2;
  SVar1 = Swift::Substring::init(SVar4);
  if (*(long *)(lVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar2);
    FUN_1006a3238(SVar1.unknown,param_2,param_3,param_4);
    if (((ulong)param_2 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + (long)SVar1.unknown * 0x10 + 8);
      _swift_bridgeObjectRetain(uVar3);
      FUN_1006cb204(&local_48);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(param_4);
      return 1;
    }
    FUN_1006cb204(&local_48);
  }
  _swift_bridgeObjectRelease(param_4);
  return 0;
}



/* Address: 0x1006c7b24 | FUN_1006c7b24 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006c7be0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1006c7b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Substring SVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar7;
  String SVar8;
  long local_48;
  undefined1 *puVar6;
  
  lVar7 = *(long *)(unaff_x20 + 0x20);
  SVar8.bridgeObject = &DAT_e800000000000000;
  SVar8.str = (char *)0x65746953656d6153;
  puVar6 = &DAT_e800000000000000;
  local_48 = lVar7;
  SVar4 = Swift::Substring::init(SVar8);
  if (*(long *)(lVar7 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar7);
    FUN_1006a3238(SVar4.unknown,puVar6,param_3,param_4);
    if (((ulong)puVar6 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)SVar4.unknown * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain(uVar3);
      FUN_1006cb204(&local_48);
      _swift_bridgeObjectRelease(param_4);
      FUN_1000f7830(&DAT_100fdbda0,&DAT_100c6f4f0);
      _swift_initStaticObject();
      uVar5 = Swift::_findStringSwitchCase(SVar4.unknown,uVar2,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      if (uVar5 < 3) {
        return uVar5;
      }
      return 3;
    }
    FUN_1006cb204(&local_48);
  }
  _swift_bridgeObjectRelease(param_4);
  return 3;
}



/* Address: 0x1006c7c2c | FUN_1006c7c2c */

undefined1 FUN_1006c7c2c(byte *param_1,long param_2,undefined8 param_3,Hasher param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  bVar1 = *param_1;
  if ((0x20 < bVar1) && (bVar1 != 0x7f)) {
    if (*(long *)(param_2 + 0x10) == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
      uVar2 = Swift::Hasher::_hash(*(__int64 *)(param_2 + 0x28),(ulong)bVar1,1,param_4);
      uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
      uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
        do {
          if (*(byte *)(*(long *)(param_2 + 0x30) + uVar2) == bVar1) {
            return 0;
          }
          uVar2 = uVar2 + 1 & ~uVar3;
          uVar4 = 1;
        } while ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
      }
    }
  }
  return uVar4;
}



/* Address: 0x1006c7cf4 | FUN_1006c7cf4 */

void FUN_1006c7cf4(ulong *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined8 param_6,undefined *param_7,uint param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,long param_12,uint param_13)

{
  ulong uVar1;
  undefined *puVar2;
  Date DVar3;
  long lVar4;
  undefined *puVar5;
  Substring SVar6;
  Substring SVar7;
  long lVar8;
  Date DVar11;
  long extraout_x8;
  long extraout_x12;
  undefined1 uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined *local_e0;
  long local_d8;
  uint local_cc;
  undefined1 *local_c8;
  undefined8 local_c0;
  uint local_b8;
  uint local_b4;
  long local_b0;
  long local_a8;
  undefined1 *local_a0;
  ulong *local_98;
  undefined *local_90;
  undefined8 local_88;
  uint local_7c;
  undefined1 *local_78;
  ulong local_70;
  undefined *local_68;
  undefined *local_58;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  puVar2 = &DAT_100fdbf88;
  puVar9 = param_5;
  local_90 = param_7;
  local_88 = param_9;
  local_7c = param_8;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar4 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar4 - extraout_x12;
  local_78 = param_2;
  local_70 = param_3;
  FUN_1006cb444(param_2,param_3);
  if (((ulong)param_2 & 1) == 0) {
    uVar12 = 0;
LAB_1006c7dcc:
    FUN_1006cb4f0();
    _swift_allocError(&DAT_100ef8d00,param_2,0,0);
    *param_2 = uVar12;
    _swift_willThrow();
    return;
  }
  param_2 = param_4;
  local_98 = param_1;
  FUN_1006c99c0(param_4,param_5);
  if (((ulong)param_2 & 1) != 0) {
    uVar12 = 1;
    goto LAB_1006c7dcc;
  }
  local_b8 = param_13 & 0xff;
  local_b4 = param_13 >> 8 & 0xff;
  local_c0 = param_11;
  local_b0 = param_10;
  local_a8 = param_12;
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_a0 = param_4;
  if (param_13._2_1_ != 3) {
    local_cc = (uint)param_13._2_1_;
    FUN_1006c2ab8();
    FUN_1006cb530(param_6,lVar14);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar16 = *(long *)(DVar3.unknown + -8);
    lVar8 = 1;
    lVar4 = lVar14;
    DVar11 = DVar3;
    (**(code **)(lVar16 + 0x30))(lVar14,1,DVar3.unknown);
    if ((int)lVar4 == 1) {
      puVar2 = &DAT_100c6f990;
      FUN_1000fb4c4(lVar14,&DAT_100fdbf88,&DAT_100c6f990);
      SVar18.bridgeObject = &DAT_e700000000000000;
      SVar18.str = (char *)0x73657269707845;
      puVar13 = &DAT_e700000000000000;
      Swift::Substring::init(SVar18);
LAB_1006c804c:
      puVar10 = puVar9;
      FUN_1006b99fc();
      _swift_bridgeObjectRelease(puVar9);
      _swift_bridgeObjectRelease(puVar13);
      puVar13 = puVar10;
    }
    else {
      FUN_100701f80();
      local_d8 = lVar4;
      (**(code **)(lVar16 + 8))(lVar14,DVar3.unknown);
      SVar28.bridgeObject = &DAT_e700000000000000;
      SVar28.str = (char *)0x73657269707845;
      puVar13 = &DAT_e700000000000000;
      SVar6 = Swift::Substring::init(SVar28);
      puVar2 = DVar11.unknown;
      if (lVar8 == 0) goto LAB_1006c804c;
      puVar5 = local_58;
      local_e0 = SVar6.unknown;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      puVar2 = local_e0;
      local_68 = local_58;
      FUN_1006b9db4(local_d8,lVar8,local_e0,puVar13,DVar11.unknown,puVar9,puVar5);
      _swift_bridgeObjectRelease(puVar9);
      local_58 = local_68;
    }
    lVar4 = local_a8;
    lVar14 = local_b0;
    if ((local_7c & 0xff) == 1) {
      SVar20.bridgeObject = &DAT_e700000000000000;
      SVar20.str = (char *)0x6567412d78614d;
      puVar9 = &DAT_e700000000000000;
      Swift::Substring::init(SVar20);
LAB_1006c814c:
      SVar6.unknown = puVar2;
      puVar10 = puVar13;
      FUN_1006b99fc();
      _swift_bridgeObjectRelease(puVar13);
      _swift_bridgeObjectRelease(puVar9);
      puVar9 = puVar10;
    }
    else {
      local_68 = local_90;
      FUN_1006cb580();
      SVar28 = (extension_Swift)::Swift::BinaryInteger::get_description();
      SVar21.bridgeObject = &DAT_e700000000000000;
      SVar21.str = (char *)0x6567412d78614d;
      puVar9 = &DAT_e700000000000000;
      SVar6 = Swift::Substring::init(SVar21);
      if (SVar28.bridgeObject == (void *)0x0) goto LAB_1006c814c;
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      lVar4 = local_a8;
      lVar14 = local_b0;
      local_68 = local_58;
      FUN_1006b9db4(SVar28.str,SVar28.bridgeObject,SVar6.unknown,puVar9,puVar2,puVar13,puVar5);
      _swift_bridgeObjectRelease(puVar13);
      local_58 = local_68;
    }
    SVar22.bridgeObject = &DAT_e600000000000000;
    SVar22.str = (char *)0x6e69616d6f44;
    puVar13 = &DAT_e600000000000000;
    SVar7 = Swift::Substring::init(SVar22);
    if (lVar14 == 0) {
      puVar10 = puVar9;
      FUN_1006b99fc(SVar7.unknown,puVar13,SVar6.unknown,puVar9);
      _swift_bridgeObjectRelease(puVar9);
      _swift_bridgeObjectRelease(puVar13);
    }
    else {
      puVar2 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      local_68 = local_58;
      _swift_bridgeObjectRetain(lVar14);
      FUN_1006b9db4(local_88,lVar14,SVar7.unknown,puVar13,SVar6.unknown,puVar9,puVar2);
      _swift_bridgeObjectRelease(puVar9);
      local_58 = local_68;
      SVar6.unknown = SVar7.unknown;
      puVar10 = puVar13;
    }
    SVar23.bridgeObject = &DAT_e400000000000000;
    SVar23.str = (char *)0x68746150;
    puVar9 = &DAT_e400000000000000;
    SVar7 = Swift::Substring::init(SVar23);
    if (lVar4 == 0) {
      puVar13 = puVar10;
      FUN_1006b99fc(SVar7.unknown,puVar9,SVar6.unknown,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(puVar9);
      SVar7.unknown = SVar6.unknown;
      puVar9 = puVar13;
    }
    else {
      puVar2 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      local_68 = local_58;
      _swift_bridgeObjectRetain(lVar4);
      FUN_1006b9db4(local_c0,lVar4,SVar7.unknown,puVar9,SVar6.unknown,puVar10,puVar2);
      _swift_bridgeObjectRelease(puVar10);
      local_58 = local_68;
    }
    SVar6.unknown = SVar7.unknown;
    puVar13 = puVar9;
    if ((local_b8 & 1) != 0) {
      SVar24.bridgeObject = &DAT_e600000000000000;
      SVar24.str = (char *)0x657275636553;
      puVar13 = &DAT_e600000000000000;
      SVar6 = Swift::Substring::init(SVar24);
      puVar2 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      local_68 = local_58;
      FUN_1006b9db4(0,0xe000000000000000,SVar6.unknown,puVar13,SVar7.unknown,puVar9,puVar2);
      _swift_bridgeObjectRelease(puVar9);
      local_58 = local_68;
    }
    SVar7.unknown = SVar6.unknown;
    puVar9 = puVar13;
    if ((local_b4 & 1) != 0) {
      SVar25.bridgeObject = &DAT_e800000000000000;
      SVar25.str = (char *)0x796c6e4f70747448;
      puVar9 = &DAT_e800000000000000;
      SVar7 = Swift::Substring::init(SVar25);
      puVar2 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      local_68 = local_58;
      FUN_1006b9db4(0,0xe000000000000000,SVar7.unknown,puVar9,SVar6.unknown,puVar13,puVar2);
      _swift_bridgeObjectRelease(puVar13);
      local_58 = local_68;
    }
    if ((local_cc & 0xff) == 0) {
      puVar13 = (undefined1 *)0xe300000000000000;
      uVar15 = 0x78614c;
    }
    else if ((local_cc & 0xff) == 1) {
      puVar13 = &DAT_e600000000000000;
      uVar15 = 0x746369727453;
    }
    else {
      puVar13 = &DAT_e400000000000000;
      uVar15 = 0x656e6f4e;
    }
    SVar26.bridgeObject = &DAT_e800000000000000;
    SVar26.str = (char *)0x65746953656d6153;
    puVar10 = &DAT_e800000000000000;
    SVar6 = Swift::Substring::init(SVar26);
    puVar2 = local_58;
    _swift_isUniquelyReferenced_nonNull_native(local_58);
    local_68 = local_58;
    FUN_1006b9db4(uVar15,puVar13,SVar6.unknown,puVar10,SVar7.unknown,puVar9,puVar2);
    _swift_bridgeObjectRelease(puVar9);
    local_58 = local_68;
    param_4 = local_a0;
    goto LAB_1006c877c;
  }
  local_c8 = param_5;
  FUN_1006c2ab8();
  FUN_1006cb530(param_6,lVar4);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar3.unknown + -8);
  lVar8 = 1;
  lVar14 = lVar4;
  DVar11 = DVar3;
  (**(code **)(lVar16 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar14 == 1) {
    DVar11.unknown = &DAT_100c6f990;
    FUN_1000fb4c4(lVar4,&DAT_100fdbf88,&DAT_100c6f990);
    SVar17.bridgeObject = &DAT_e700000000000000;
    SVar17.str = (char *)0x73657269707845;
    puVar13 = &DAT_e700000000000000;
    Swift::Substring::init(SVar17);
LAB_1006c8454:
    SVar6.unknown = DVar11.unknown;
    puVar10 = puVar9;
    FUN_1006b99fc();
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(puVar13);
    puVar13 = puVar10;
  }
  else {
    FUN_100701f80();
    (**(code **)(lVar16 + 8))(lVar4,DVar3.unknown);
    SVar19.bridgeObject = &DAT_e700000000000000;
    SVar19.str = (char *)0x73657269707845;
    puVar13 = &DAT_e700000000000000;
    SVar6 = Swift::Substring::init(SVar19);
    param_4 = local_a0;
    if (lVar8 == 0) goto LAB_1006c8454;
    puVar2 = local_58;
    _swift_isUniquelyReferenced_nonNull_native(local_58);
    local_68 = local_58;
    FUN_1006b9db4(lVar14,lVar8,SVar6.unknown,puVar13,DVar11.unknown,puVar9,puVar2);
    _swift_bridgeObjectRelease(puVar9);
    local_58 = local_68;
    param_4 = local_a0;
  }
  lVar14 = local_a8;
  if ((local_7c & 0xff) == 1) {
    SVar27.bridgeObject = &DAT_e700000000000000;
    SVar27.str = (char *)0x6567412d78614d;
    puVar9 = &DAT_e700000000000000;
    Swift::Substring::init(SVar27);
LAB_1006c8550:
    SVar7.unknown = SVar6.unknown;
    puVar10 = puVar13;
    FUN_1006b99fc();
    _swift_bridgeObjectRelease(puVar13);
    _swift_bridgeObjectRelease(puVar9);
    puVar9 = puVar10;
  }
  else {
    local_68 = local_90;
    FUN_1006cb580();
    SVar28 = (extension_Swift)::Swift::BinaryInteger::get_description();
    SVar29.bridgeObject = &DAT_e700000000000000;
    SVar29.str = (char *)0x6567412d78614d;
    puVar9 = &DAT_e700000000000000;
    SVar7 = Swift::Substring::init(SVar29);
    if (SVar28.bridgeObject == (void *)0x0) goto LAB_1006c8550;
    puVar2 = local_58;
    _swift_isUniquelyReferenced_nonNull_native(local_58);
    param_4 = local_a0;
    lVar14 = local_a8;
    local_68 = local_58;
    FUN_1006b9db4(SVar28.str,SVar28.bridgeObject,SVar7.unknown,puVar9,SVar6.unknown,puVar13,puVar2);
    _swift_bridgeObjectRelease(puVar13);
    local_58 = local_68;
  }
  SVar30.bridgeObject = &DAT_e600000000000000;
  SVar30.str = (char *)0x6e69616d6f44;
  puVar13 = &DAT_e600000000000000;
  SVar6 = Swift::Substring::init(SVar30);
  lVar4 = local_b0;
  if (local_b0 == 0) {
    puVar10 = puVar9;
    FUN_1006b99fc(SVar6.unknown,puVar13,SVar7.unknown,puVar9);
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(puVar13);
  }
  else {
    puVar2 = local_58;
    _swift_isUniquelyReferenced_nonNull_native(local_58);
    local_68 = local_58;
    _swift_bridgeObjectRetain(lVar4);
    FUN_1006b9db4(local_88,lVar4,SVar6.unknown,puVar13,SVar7.unknown,puVar9,puVar2);
    _swift_bridgeObjectRelease(puVar9);
    local_58 = local_68;
    SVar7.unknown = SVar6.unknown;
    puVar10 = puVar13;
  }
  SVar31.bridgeObject = &DAT_e400000000000000;
  SVar31.str = (char *)0x68746150;
  puVar9 = &DAT_e400000000000000;
  SVar6 = Swift::Substring::init(SVar31);
  param_5 = local_c8;
  if (lVar14 == 0) {
    puVar13 = puVar10;
    FUN_1006b99fc(SVar6.unknown,puVar9,SVar7.unknown,puVar10);
    _swift_bridgeObjectRelease(puVar10);
    _swift_bridgeObjectRelease(puVar9);
    SVar6.unknown = SVar7.unknown;
    puVar9 = puVar13;
  }
  else {
    puVar2 = local_58;
    _swift_isUniquelyReferenced_nonNull_native(local_58);
    local_68 = local_58;
    _swift_bridgeObjectRetain(lVar14);
    FUN_1006b9db4(local_c0,lVar14,SVar6.unknown,puVar9,SVar7.unknown,puVar10,puVar2);
    _swift_bridgeObjectRelease(puVar10);
    local_58 = local_68;
  }
  SVar7.unknown = SVar6.unknown;
  puVar13 = puVar9;
  if ((local_b8 & 1) != 0) {
    SVar32.bridgeObject = &DAT_e600000000000000;
    SVar32.str = (char *)0x657275636553;
    puVar13 = &DAT_e600000000000000;
    SVar7 = Swift::Substring::init(SVar32);
    puVar2 = local_58;
    _swift_isUniquelyReferenced_nonNull_native(local_58);
    local_68 = local_58;
    FUN_1006b9db4(0,0xe000000000000000,SVar7.unknown,puVar13,SVar6.unknown,puVar9,puVar2);
    param_4 = local_a0;
    _swift_bridgeObjectRelease(puVar9);
    local_58 = local_68;
  }
  if ((local_b4 & 1) != 0) {
    SVar33.bridgeObject = &DAT_e800000000000000;
    SVar33.str = (char *)0x796c6e4f70747448;
    puVar9 = &DAT_e800000000000000;
    SVar6 = Swift::Substring::init(SVar33);
    puVar2 = local_58;
    _swift_isUniquelyReferenced_nonNull_native(local_58);
    local_68 = local_58;
    FUN_1006b9db4(0,0xe000000000000000,SVar6.unknown,puVar9,SVar7.unknown,puVar13,puVar2);
    param_4 = local_a0;
    _swift_bridgeObjectRelease(puVar13);
    local_58 = local_68;
  }
LAB_1006c877c:
  uVar1 = local_70;
  _swift_bridgeObjectRetain(local_70);
  _swift_bridgeObjectRetain(param_5);
  *local_98 = (ulong)local_78;
  local_98[1] = uVar1;
  local_98[2] = (ulong)param_4;
  local_98[3] = (ulong)param_5;
  local_98[4] = (ulong)local_58;
  return;
}



/* Address: 0x1006c8800 | FUN_1006c8800 */

void FUN_1006c8800(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined *param_7,uint param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,long param_12,uint param_13)

{
  undefined *puVar1;
  Date DVar2;
  Substring SVar3;
  undefined *puVar4;
  Substring SVar5;
  long lVar6;
  undefined1 *puVar8;
  Date DVar9;
  long extraout_x8;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined1 auStack_b0 [12];
  uint local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined1 *puVar7;
  
  puVar1 = &DAT_100fdbf88;
  local_a0 = param_9;
  local_90 = param_2;
  uStack_88 = param_3;
  local_80 = param_4;
  local_78 = param_5;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_b0 + -extraout_x8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c2ab8();
  local_98 = param_6;
  local_68 = puVar1;
  FUN_1006cb530(param_6,puVar8);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar2.unknown + -8);
  lVar6 = 1;
  puVar10 = puVar8;
  DVar9 = DVar2;
  (**(code **)(lVar12 + 0x30))(puVar8,1,DVar2.unknown);
  if ((int)puVar10 == 1) {
    DVar9.unknown = &DAT_100c6f990;
    FUN_1000fb4c4(puVar8,&DAT_100fdbf88,&DAT_100c6f990);
    SVar13.bridgeObject = &DAT_e700000000000000;
    SVar13.str = (char *)0x73657269707845;
    puVar7 = &DAT_e700000000000000;
    SVar3 = Swift::Substring::init(SVar13);
LAB_1006c89a8:
    SVar5.unknown = DVar9.unknown;
    puVar8 = param_5;
    FUN_1006b99fc(SVar3.unknown,puVar7,SVar5.unknown,param_5);
    _swift_bridgeObjectRelease(param_5);
    _swift_bridgeObjectRelease(puVar7);
  }
  else {
    local_a4 = param_8;
    FUN_100701f80();
    (**(code **)(lVar12 + 8))(puVar8,DVar2.unknown);
    SVar15.bridgeObject = &DAT_e700000000000000;
    SVar15.str = (char *)0x73657269707845;
    puVar8 = &DAT_e700000000000000;
    SVar5 = Swift::Substring::init(SVar15);
    puVar7 = puVar8;
    SVar3 = SVar5;
    param_8 = local_a4;
    if (lVar6 == 0) goto LAB_1006c89a8;
    puVar4 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    local_70 = puVar1;
    FUN_1006b9db4(puVar10,lVar6,SVar5.unknown,puVar8,DVar9.unknown,param_5,puVar4);
    _swift_bridgeObjectRelease(param_5);
    local_68 = local_70;
    param_8 = local_a4;
  }
  if ((param_8 & 0xff) == 1) {
    SVar14.bridgeObject = &DAT_e700000000000000;
    SVar14.str = (char *)0x6567412d78614d;
    puVar10 = &DAT_e700000000000000;
    Swift::Substring::init(SVar14);
  }
  else {
    local_70 = param_7;
    FUN_1006cb580();
    SVar15 = (extension_Swift)::Swift::BinaryInteger::get_description();
    SVar16.bridgeObject = &DAT_e700000000000000;
    SVar16.str = (char *)0x6567412d78614d;
    puVar10 = &DAT_e700000000000000;
    SVar3 = Swift::Substring::init(SVar16);
    puVar1 = local_68;
    if (SVar15.bridgeObject != (void *)0x0) {
      puVar4 = local_68;
      _swift_isUniquelyReferenced_nonNull_native(local_68);
      local_70 = puVar1;
      FUN_1006b9db4(SVar15.str,SVar15.bridgeObject,SVar3.unknown,puVar10,SVar5.unknown,puVar8,puVar4
                   );
      _swift_bridgeObjectRelease(puVar8);
      local_68 = local_70;
      goto LAB_1006c8ab4;
    }
  }
  SVar3.unknown = SVar5.unknown;
  puVar7 = puVar8;
  FUN_1006b99fc();
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(puVar10);
  puVar10 = puVar7;
LAB_1006c8ab4:
  SVar17.bridgeObject = &DAT_e600000000000000;
  SVar17.str = (char *)0x6e69616d6f44;
  puVar8 = &DAT_e600000000000000;
  SVar5 = Swift::Substring::init(SVar17);
  puVar1 = local_68;
  if (param_10 == 0) {
    puVar7 = puVar10;
    FUN_1006b99fc(SVar5.unknown,puVar8,SVar3.unknown,puVar10);
    _swift_bridgeObjectRelease(puVar10);
    _swift_bridgeObjectRelease(puVar8);
  }
  else {
    puVar4 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_70 = puVar1;
    FUN_1006b9db4(local_a0,param_10,SVar5.unknown,puVar8,SVar3.unknown,puVar10,puVar4);
    _swift_bridgeObjectRelease(puVar10);
    local_68 = local_70;
    SVar3.unknown = SVar5.unknown;
    puVar7 = puVar8;
  }
  SVar18.bridgeObject = &DAT_e400000000000000;
  SVar18.str = (char *)0x68746150;
  puVar10 = &DAT_e400000000000000;
  SVar5 = Swift::Substring::init(SVar18);
  puVar1 = local_68;
  if (param_12 == 0) {
    puVar8 = puVar7;
    FUN_1006b99fc(SVar5.unknown,puVar10,SVar3.unknown,puVar7);
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease(puVar10);
    SVar5.unknown = SVar3.unknown;
    puVar10 = puVar8;
  }
  else {
    puVar4 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_70 = puVar1;
    FUN_1006b9db4(param_11,param_12,SVar5.unknown,puVar10,SVar3.unknown,puVar7,puVar4);
    _swift_bridgeObjectRelease(puVar7);
    local_68 = local_70;
  }
  SVar3.unknown = SVar5.unknown;
  puVar8 = puVar10;
  if ((param_13 & 1) != 0) {
    SVar19.bridgeObject = &DAT_e600000000000000;
    SVar19.str = (char *)0x657275636553;
    puVar8 = &DAT_e600000000000000;
    SVar3 = Swift::Substring::init(SVar19);
    puVar1 = local_68;
    puVar4 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_70 = puVar1;
    FUN_1006b9db4(0,0xe000000000000000,SVar3.unknown,puVar8,SVar5.unknown,puVar10,puVar4);
    _swift_bridgeObjectRelease(puVar10);
    local_68 = local_70;
  }
  if ((param_13 & 0x100) != 0) {
    SVar20.bridgeObject = &DAT_e800000000000000;
    SVar20.str = (char *)0x796c6e4f70747448;
    puVar10 = &DAT_e800000000000000;
    SVar5 = Swift::Substring::init(SVar20);
    puVar1 = local_68;
    puVar4 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_70 = puVar1;
    FUN_1006b9db4(0,0xe000000000000000,SVar5.unknown,puVar10,SVar3.unknown,puVar8,puVar4);
    _swift_bridgeObjectRelease(puVar8);
    local_68 = local_70;
    SVar3.unknown = SVar5.unknown;
    puVar8 = puVar10;
  }
  if (param_13._2_1_ == '\0') {
    puVar10 = (undefined1 *)0xe300000000000000;
    uVar11 = 0x78614c;
  }
  else if (param_13._2_1_ == '\x01') {
    puVar10 = &DAT_e600000000000000;
    uVar11 = 0x746369727453;
  }
  else {
    puVar10 = &DAT_e400000000000000;
    uVar11 = 0x656e6f4e;
  }
  SVar21.bridgeObject = &DAT_e800000000000000;
  SVar21.str = (char *)0x65746953656d6153;
  puVar7 = &DAT_e800000000000000;
  SVar5 = Swift::Substring::init(SVar21);
  puVar1 = local_68;
  puVar4 = local_68;
  _swift_isUniquelyReferenced_nonNull_native(local_68);
  local_70 = puVar1;
  FUN_1006b9db4(uVar11,puVar10,SVar5.unknown,puVar7,SVar3.unknown,puVar8,puVar4);
  _swift_bridgeObjectRelease(puVar8);
  FUN_1000fb4c4(local_98,&DAT_100fdbf88,&DAT_100c6f990);
  *param_1 = local_90;
  param_1[1] = uStack_88;
  param_1[2] = local_80;
  param_1[3] = local_78;
  param_1[4] = local_70;
  return;
}



/* Address: 0x1006c8ddc | FUN_1006c8ddc */

void FUN_1006c8ddc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined *param_7,char param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,long param_12,uint param_13)

{
  undefined *puVar1;
  Date DVar2;
  Substring SVar3;
  undefined *puVar4;
  Substring SVar5;
  long lVar6;
  undefined1 *puVar8;
  Date DVar10;
  long extraout_x8;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined1 auStack_b0 [8];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined *local_70;
  undefined *local_68;
  undefined1 *puVar7;
  undefined1 *puVar9;
  
  puVar1 = &DAT_100fdbf88;
  local_a0 = param_9;
  local_90 = param_2;
  uStack_88 = param_3;
  local_80 = param_4;
  puStack_78 = param_5;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_b0 + -extraout_x8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c2ab8();
  local_98 = param_6;
  local_68 = puVar1;
  FUN_1006cb530(param_6,puVar8);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  lVar6 = 1;
  puVar9 = puVar8;
  DVar10 = DVar2;
  (**(code **)(lVar11 + 0x30))(puVar8,1,DVar2.unknown);
  if ((int)puVar9 == 1) {
    DVar10.unknown = &DAT_100c6f990;
    FUN_1000fb4c4(puVar8,&DAT_100fdbf88,&DAT_100c6f990);
    SVar12.bridgeObject = &DAT_e700000000000000;
    SVar12.str = (char *)0x73657269707845;
    puVar7 = &DAT_e700000000000000;
    SVar3 = Swift::Substring::init(SVar12);
LAB_1006c8f84:
    SVar5.unknown = DVar10.unknown;
    puVar8 = param_5;
    FUN_1006b99fc(SVar3.unknown,puVar7,SVar5.unknown,param_5);
    _swift_bridgeObjectRelease(param_5);
    _swift_bridgeObjectRelease(puVar7);
  }
  else {
    local_a8 = param_1;
    FUN_100701f80();
    (**(code **)(lVar11 + 8))(puVar8,DVar2.unknown);
    SVar14.bridgeObject = &DAT_e700000000000000;
    SVar14.str = (char *)0x73657269707845;
    puVar8 = &DAT_e700000000000000;
    SVar5 = Swift::Substring::init(SVar14);
    param_1 = local_a8;
    puVar7 = puVar8;
    SVar3 = SVar5;
    if (lVar6 == 0) goto LAB_1006c8f84;
    puVar4 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    local_70 = puVar1;
    FUN_1006b9db4(puVar9,lVar6,SVar5.unknown,puVar8,DVar10.unknown,param_5,puVar4);
    _swift_bridgeObjectRelease(param_5);
    local_68 = local_70;
    param_1 = local_a8;
  }
  if (param_8 == '\x01') {
    SVar13.bridgeObject = &DAT_e700000000000000;
    SVar13.str = (char *)0x6567412d78614d;
    puVar9 = &DAT_e700000000000000;
    Swift::Substring::init(SVar13);
  }
  else {
    local_70 = param_7;
    FUN_1006cb580();
    SVar14 = (extension_Swift)::Swift::BinaryInteger::get_description();
    SVar15.bridgeObject = &DAT_e700000000000000;
    SVar15.str = (char *)0x6567412d78614d;
    puVar9 = &DAT_e700000000000000;
    SVar3 = Swift::Substring::init(SVar15);
    puVar1 = local_68;
    if (SVar14.bridgeObject != (void *)0x0) {
      puVar4 = local_68;
      _swift_isUniquelyReferenced_nonNull_native(local_68);
      local_70 = puVar1;
      FUN_1006b9db4(SVar14.str,SVar14.bridgeObject,SVar3.unknown,puVar9,SVar5.unknown,puVar8,puVar4)
      ;
      _swift_bridgeObjectRelease(puVar8);
      local_68 = local_70;
      goto LAB_1006c9090;
    }
  }
  SVar3.unknown = SVar5.unknown;
  puVar7 = puVar8;
  FUN_1006b99fc();
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(puVar9);
  puVar9 = puVar7;
LAB_1006c9090:
  SVar16.bridgeObject = &DAT_e600000000000000;
  SVar16.str = (char *)0x6e69616d6f44;
  puVar8 = &DAT_e600000000000000;
  SVar5 = Swift::Substring::init(SVar16);
  puVar1 = local_68;
  if (param_10 == 0) {
    puVar7 = puVar9;
    FUN_1006b99fc(SVar5.unknown,puVar8,SVar3.unknown,puVar9);
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(puVar8);
  }
  else {
    puVar4 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_70 = puVar1;
    FUN_1006b9db4(local_a0,param_10,SVar5.unknown,puVar8,SVar3.unknown,puVar9,puVar4);
    _swift_bridgeObjectRelease(puVar9);
    local_68 = local_70;
    SVar3.unknown = SVar5.unknown;
    puVar7 = puVar8;
  }
  SVar17.bridgeObject = &DAT_e400000000000000;
  SVar17.str = (char *)0x68746150;
  puVar9 = &DAT_e400000000000000;
  SVar5 = Swift::Substring::init(SVar17);
  puVar1 = local_68;
  if (param_12 == 0) {
    puVar8 = puVar7;
    FUN_1006b99fc(SVar5.unknown,puVar9,SVar3.unknown,puVar7);
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease(puVar9);
    SVar5.unknown = SVar3.unknown;
    puVar9 = puVar8;
  }
  else {
    puVar4 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_70 = puVar1;
    FUN_1006b9db4(param_11,param_12,SVar5.unknown,puVar9,SVar3.unknown,puVar7,puVar4);
    _swift_bridgeObjectRelease(puVar7);
    local_68 = local_70;
  }
  SVar3.unknown = SVar5.unknown;
  puVar8 = puVar9;
  if ((param_13 & 1) != 0) {
    SVar18.bridgeObject = &DAT_e600000000000000;
    SVar18.str = (char *)0x657275636553;
    puVar8 = &DAT_e600000000000000;
    SVar3 = Swift::Substring::init(SVar18);
    puVar1 = local_68;
    puVar4 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_70 = puVar1;
    FUN_1006b9db4(0,0xe000000000000000,SVar3.unknown,puVar8,SVar5.unknown,puVar9,puVar4);
    _swift_bridgeObjectRelease(puVar9);
    local_68 = local_70;
  }
  if ((param_13 & 0x100) == 0) {
    FUN_1000fb4c4(local_98,&DAT_100fdbf88,&DAT_100c6f990);
    local_70 = local_68;
  }
  else {
    SVar19.bridgeObject = &DAT_e800000000000000;
    SVar19.str = (char *)0x796c6e4f70747448;
    puVar9 = &DAT_e800000000000000;
    SVar5 = Swift::Substring::init(SVar19);
    puVar1 = local_68;
    puVar4 = local_68;
    _swift_isUniquelyReferenced_nonNull_native(local_68);
    local_70 = puVar1;
    FUN_1006b9db4(0,0xe000000000000000,SVar5.unknown,puVar9,SVar3.unknown,puVar8,puVar4);
    _swift_bridgeObjectRelease(puVar8);
    FUN_1000fb4c4(local_98,&DAT_100fdbf88,&DAT_100c6f990);
  }
  *param_1 = local_90;
  param_1[1] = uStack_88;
  param_1[2] = local_80;
  param_1[3] = puStack_78;
  param_1[4] = local_70;
  return;
}



/* Address: 0x1006c9320 | FUN_1006c9320 */

void FUN_1006c9320(undefined8 param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar1 = *unaff_x20;
    _swift_bridgeObjectRetain(uVar1);
    FUN_1006a3238(param_3,param_4,param_5,param_6);
    _swift_bridgeObjectRelease(uVar1);
    if ((param_4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_6);
      return;
    }
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = *unaff_x20;
    if ((uVar1 & 1) == 0) {
      FUN_1006ba534();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(uVar2 + 0x30) + param_3 * 0x20 + 0x18));
    uVar3 = *(undefined8 *)(*(long *)(uVar2 + 0x38) + param_3 * 0x10 + 8);
    FUN_1006cafc4(param_3,uVar2);
    _swift_bridgeObjectRelease(param_6);
    _swift_bridgeObjectRelease(uVar3);
    *unaff_x20 = uVar2;
  }
  else {
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uVar2 = *unaff_x20;
    FUN_1006b9db4(param_1,param_2,param_3,param_4,param_5,param_6,uVar1);
    _swift_bridgeObjectRelease(param_6);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Address: 0x1006c9474 | FUN_1006c9474 */

undefined1  [16] FUN_1006c9474(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String *pSVar1;
  void *pvVar2;
  _StringGuts _Var3;
  String SVar4;
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  void *pvVar10;
  char *pcVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *unaff_x20;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  char *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_78 = unaff_x20[1];
  local_80 = *unaff_x20;
  uStack_70 = local_80;
  uStack_68 = uStack_78;
  FUN_10000ca28(&uStack_70,&local_90);
  SVar17.bridgeObject = (void *)0xe100000000000000;
  SVar17.str = (char *)0x3d;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar17,SVar19);
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 2),SVar20);
  lVar9 = unaff_x20[4];
  uVar13 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(lVar9 + 0x40);
  _swift_bridgeObjectRetain();
  lVar16 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar14 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar16 << 6;
      pSVar1 = (String *)(*(long *)(lVar9 + 0x30) + uVar14 * 0x20);
      SVar19 = *pSVar1;
      SVar17 = *pSVar1;
      pcVar11 = pSVar1[1].str;
      pvVar2 = pSVar1[1].bridgeObject;
      pSVar1 = (String *)(*(long *)(lVar9 + 0x38) + uVar14 * 0x10);
      _Var3.unknown = pSVar1->bridgeObject;
      SVar20 = *pSVar1;
      pvVar12 = pvVar2;
      if ((pSVar1->str == (undefined *)0x0 && _Var3.unknown == (undefined *)0xe000000000000000) ||
         (bVar8 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)pSVar1->str,_Var3,(_StringComparisonResult)0x0), bVar8)) {
        local_90 = (char *)0x203b;
        local_88 = &SUB_e200000000000000;
        _swift_bridgeObjectRetain(pvVar2);
        _swift_bridgeObjectRetain(_Var3.unknown);
        SVar17 = Swift::String::__fromSubstring(SVar17);
        pvVar10 = SVar17.bridgeObject;
        SVar21.bridgeObject = pvVar12;
        SVar21.str = pcVar11;
        Swift::String::append(SVar17,SVar21);
        _swift_bridgeObjectRelease(_Var3.unknown);
        _swift_bridgeObjectRelease(pvVar2);
      }
      else {
        local_90 = (char *)0x203b;
        local_88 = &SUB_e200000000000000;
        _swift_bridgeObjectRetain(pvVar2);
        _swift_bridgeObjectRetain(_Var3.unknown);
        SVar17 = Swift::String::__fromSubstring(SVar19);
        SVar23.bridgeObject = pvVar12;
        SVar23.str = pcVar11;
        Swift::String::append(SVar17,SVar23);
        _swift_bridgeObjectRelease(SVar17.bridgeObject);
        SVar18.bridgeObject = (void *)0xe100000000000000;
        SVar18.str = (char *)0x3d;
        SVar24.bridgeObject = pvVar12;
        SVar24.str = pcVar11;
        Swift::String::append(SVar18,SVar24);
        SVar25.bridgeObject = pvVar12;
        SVar25.str = pcVar11;
        Swift::String::append(SVar20,SVar25);
        _swift_bridgeObjectRelease(_Var3.unknown);
        pvVar10 = pvVar2;
      }
      _swift_bridgeObjectRelease(pvVar10);
      puVar6 = local_88;
      SVar4.bridgeObject = local_88;
      SVar4.str = local_90;
      SVar22.bridgeObject = pvVar12;
      SVar22.str = pcVar11;
      Swift::String::append(SVar4,SVar22);
      _swift_bridgeObjectRelease(puVar6);
    }
    bVar8 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar8) break;
    if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
      _swift_release(lVar9);
      auVar5._8_8_ = uStack_78;
      auVar5._0_8_ = local_80;
      return auVar5;
    }
    uVar15 = ((ulong *)(lVar9 + 0x40))[lVar16];
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1006c96b0);
  (*pcVar7)();
}



/* Address: 0x1006c96b0 | FUN_1006c96b0 */

undefined1  [16]
FUN_1006c96b0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (*(long *)(param_5 + 0x10) == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_5);
    FUN_1006a3238(param_1,param_2,param_3,param_4);
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain(uVar3);
    }
    _swift_bridgeObjectRelease(param_5);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Address: 0x1006c9750 | FUN_1006c9750 */

undefined1  [16]
FUN_1006c9750(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar2 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x8251);
  }
  *param_1 = puVar2;
  puVar2[5] = param_5;
  puVar2[6] = unaff_x20;
  puVar2[3] = param_3;
  puVar2[4] = param_4;
  puVar2[2] = param_2;
  lVar5 = *unaff_x20;
  if (*(long *)(lVar5 + 0x10) == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar5);
    FUN_1006a3238(param_2,param_3,param_4,param_5);
    if ((param_3 & 1) == 0) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + param_2 * 0x10);
      uVar4 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain(uVar3);
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  *puVar2 = uVar4;
  puVar2[1] = uVar3;
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = FUN_1006c983c;
  return auVar6;
}



/* Address: 0x1006c983c | FUN_1006c983c */

void FUN_1006c983c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[5];
  puVar3 = (undefined8 *)param_1[6];
  uVar7 = param_1[3];
  uVar4 = param_1[4];
  lVar2 = param_1[1];
  uVar5 = param_1[2];
  if ((param_2 & 1) == 0) {
    if (lVar2 != 0) {
      uVar9 = *param_1;
      _swift_bridgeObjectRetain(uVar1);
      uVar6 = *puVar3;
      _swift_isUniquelyReferenced_nonNull_native(uVar6);
      uVar8 = *puVar3;
      FUN_1006b9db4(uVar9,lVar2,uVar5,uVar7,uVar4,uVar1,uVar6);
      _swift_bridgeObjectRelease(uVar1);
      *puVar3 = uVar8;
      goto LAB_1006c9998;
    }
    _swift_bridgeObjectRetain(uVar1);
    FUN_1006b99fc(uVar5,uVar7,uVar4,uVar1);
    _swift_bridgeObjectRelease(uVar1);
  }
  else {
    if (lVar2 == 0) {
      _swift_bridgeObjectRetain(uVar1);
      FUN_1006b99fc(uVar5,uVar7,uVar4,uVar1);
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(uVar7);
    }
    else {
      uVar9 = *param_1;
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(lVar2);
      uVar6 = *puVar3;
      _swift_isUniquelyReferenced_nonNull_native(uVar6);
      uVar8 = *puVar3;
      FUN_1006b9db4(uVar9,lVar2,uVar5,uVar7,uVar4,uVar1,uVar6);
      _swift_bridgeObjectRelease(uVar1);
      *puVar3 = uVar8;
    }
    uVar7 = param_1[1];
  }
  _swift_bridgeObjectRelease(uVar7);
LAB_1006c9998:
  _free(param_1);
  return;
}



/* Address: 0x1006c99bc | thunk_FUN_1006c9474 */

void thunk_FUN_1006c9474(void)

{
  FUN_1006c9474();
  return;
}



/* Address: 0x1006c99c0 | FUN_1006c99c0 */

bool FUN_1006c99c0(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ushort uVar9;
  undefined *local_80;
  ulong uStack_78;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar7 = 4L << uVar5;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  do {
    uVar6 = (ulong)after.cmsgPointer.unknown >> 0xe;
    if (uVar6 == uVar1 * 4) break;
    uVar8 = (ulong)after.cmsgPointer.unknown & 0xc;
    position.cmsgPointer.unknown = after.cmsgPointer.unknown;
    if (uVar8 == uVar7) {
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
    }
    if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006c9b80);
      (*pcVar2)();
    }
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
        }
      }
      else {
        local_80 = param_1.unknown;
        uStack_78 = param_2 & 0xffffffffffffff;
        UVar4.unknown = (undefined *)&local_80;
      }
      _Var3 = *(__uint8 *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10));
      if (uVar8 != uVar7) goto LAB_1006c9aa8;
LAB_1006c9b00:
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_1006c9b10;
LAB_1006c9aac:
      after.cmsgPointer.unknown =
           (UnsafeMutablePointer)(((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004)
      ;
    }
    else {
      _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
      if (uVar8 == uVar7) goto LAB_1006c9b00;
LAB_1006c9aa8:
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_1006c9aac;
LAB_1006c9b10:
      if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006c9b84);
        (*pcVar2)();
      }
      after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
    }
    uVar9 = NEON_umaxv(CONCAT26(-(ushort)((byte)(_Var3 + 0xa3) < 0x22),
                                CONCAT24(-(ushort)((byte)(_Var3 - 0x3c) < 0x20),
                                         CONCAT22(-(ushort)((byte)(_Var3 - 0x2d) < 0xe),
                                                  -(ushort)((byte)(_Var3 - 0x23) < 9)))),2);
  } while (((uVar9 & 1) != 0) || (_Var3 == 0x21));
  return uVar6 != uVar1 * 4;
}



/* Address: 0x1006c9b84 | FUN_1006c9b84 */

undefined1  [16]
FUN_1006c9b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_1006c9bd4();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1006c9bd4 | FUN_1006c9bd4 */

String FUN_1006c9bd4(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

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
      FUN_1006c9d18(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c9cd4);
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
      goto LAB_1006c9c0c;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_1006c9c0c:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x1006c9d18 | FUN_1006c9d18 */

undefined * FUN_1006c9d18(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fdcbb8;
    FUN_1000f7830(&DAT_100fdcbb8,&DAT_100c73d10);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1006c9d88 | FUN_1006c9d88 */

void FUN_1006c9d88(void)

{
  FUN_1006c9ec4();
  return;
}



/* Address: 0x1006c9d94 | FUN_1006c9d94 */

/* WARNING: Removing unreachable block (ram,0x0001006c9e94) */

undefined1  [16]
FUN_1006c9d94(undefined *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_1006cc4e0();
  _swift_bridgeObjectRetain(param_4);
  SVar6 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_Substring_100eaca98,
                     PTR___protocol_witness_table_for_Swift_Substring___Swift_LosslessStringConvertible_in_Swift_100eacac8
                     ,param_1);
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_1006c9b84();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_50;
    pvVar4 = SVar6.bridgeObject;
  }
  local_50 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_50 & 0xffffffffffff);
      local_50 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_48 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_50;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_5);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x1006c9ea0 | FUN_1006c9ea0 */

void FUN_1006c9ea0(void)

{
  FUN_1006c9fe8();
  return;
}



/* Address: 0x1006c9eac | FUN_1006c9eac */

void FUN_1006c9eac(void)

{
  FUN_1006ca100();
  return;
}



/* Address: 0x1006c9eb8 | FUN_1006c9eb8 */

void FUN_1006c9eb8(void)

{
  FUN_1006ca210();
  return;
}



/* Address: 0x1006c9ec4 | FUN_1006c9ec4 */

/* WARNING: Removing unreachable block (ram,0x0001006c9fc4) */

undefined1  [16] FUN_1006c9ec4(undefined *param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_50;
  ulong uStack_48;
  
  local_50 = param_1;
  uStack_48 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_1006c9b84();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_50;
    pvVar4 = SVar6.bridgeObject;
  }
  local_50 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_50 & 0xffffffffffff);
      local_50 = puVar1;
    }
    (*param_4)(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_48 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_50;
    (*param_4)(UVar3.unknown,pvVar4,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x1006c9fd0 | FUN_1006c9fd0 */

void FUN_1006c9fd0(void)

{
  FUN_1006c9ec4();
  return;
}



/* Address: 0x1006c9fdc | FUN_1006c9fdc */

void FUN_1006c9fdc(void)

{
  FUN_1006c9fe8();
  return;
}



/* Address: 0x1006c9fe8 | FUN_1006c9fe8 */

/* WARNING: Removing unreachable block (ram,0x0001006ca0e8) */

uint FUN_1006c9fe8(undefined *param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  _StringObject _Var2;
  uint uVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  void *pvVar6;
  void *pvVar7;
  String SVar8;
  undefined *local_50;
  ulong uStack_48;
  
  local_50 = param_1;
  uStack_48 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar8 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar6 = SVar8.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar6 >> 0x3c & 1) != 0) {
    FUN_1006c9b84();
    _swift_bridgeObjectRelease(pvVar6);
    puVar1 = local_50;
    pvVar6 = SVar8.bridgeObject;
  }
  local_50 = SVar8.str;
  pvVar7 = SVar8.bridgeObject;
  if (((ulong)pvVar6 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar5 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar5.unknown = (undefined *)(((ulong)pvVar7 & 0xfffffffffffffff) + 0x20);
      local_50 = puVar1;
    }
    (*param_4)(UVar5.unknown);
    uVar3 = (uint)UVar5.unknown;
  }
  else {
    uStack_48 = (ulong)pvVar7 & 0xffffffffffffff;
    ppuVar4 = &local_50;
    (*param_4)(ppuVar4,(ulong)pvVar7 >> 0x38 & 0xf,param_3);
    uVar3 = (uint)ppuVar4;
  }
  _swift_bridgeObjectRelease(pvVar7);
  return uVar3 & 0xff | (uVar3 >> 8 & 0xff) << 8;
}



/* Address: 0x1006ca0f4 | FUN_1006ca0f4 */

void FUN_1006ca0f4(void)

{
  FUN_1006ca100();
  return;
}



/* Address: 0x1006ca100 | FUN_1006ca100 */

/* WARNING: Removing unreachable block (ram,0x0001006ca1f8) */

uint FUN_1006ca100(undefined *param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  _StringObject _Var2;
  uint uVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  void *pvVar6;
  void *pvVar7;
  String SVar8;
  undefined *local_50;
  ulong uStack_48;
  
  local_50 = param_1;
  uStack_48 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar8 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar6 = SVar8.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar6 >> 0x3c & 1) != 0) {
    FUN_1006c9b84();
    _swift_bridgeObjectRelease(pvVar6);
    puVar1 = local_50;
    pvVar6 = SVar8.bridgeObject;
  }
  local_50 = SVar8.str;
  pvVar7 = SVar8.bridgeObject;
  if (((ulong)pvVar6 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar5 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar5.unknown = (undefined *)(((ulong)pvVar7 & 0xfffffffffffffff) + 0x20);
      local_50 = puVar1;
    }
    (*param_4)(UVar5.unknown);
    uVar3 = (uint)UVar5.unknown;
  }
  else {
    uStack_48 = (ulong)pvVar7 & 0xffffffffffffff;
    ppuVar4 = &local_50;
    (*param_4)(ppuVar4,(ulong)pvVar7 >> 0x38 & 0xf,param_3);
    uVar3 = (uint)ppuVar4;
  }
  _swift_bridgeObjectRelease(pvVar7);
  return uVar3 & 0xffffff;
}



/* Address: 0x1006ca204 | FUN_1006ca204 */

void FUN_1006ca204(void)

{
  FUN_1006ca210();
  return;
}



/* Address: 0x1006ca210 | FUN_1006ca210 */

/* WARNING: Removing unreachable block (ram,0x0001006ca308) */

ulong FUN_1006ca210(undefined *param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined *local_50;
  ulong uStack_48;
  
  local_50 = param_1;
  uStack_48 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_1006c9b84();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_50;
    pvVar4 = SVar6.bridgeObject;
  }
  local_50 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      local_50 = puVar1;
    }
    (*param_4)(UVar3.unknown);
  }
  else {
    uStack_48 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_50;
    (*param_4)(UVar3.unknown,(ulong)pvVar5 >> 0x38 & 0xf,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  return (ulong)UVar3.unknown & 0xffffffffff;
}



/* Address: 0x1006ca314 | FUN_1006ca314 */

uint FUN_1006ca314(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar9 = (int)param_3;
  cVar4 = (char)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006ca5b8);
      (*pcVar6)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar9 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar9 + 0x57;
      }
      uVar11 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar11 = iVar9 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar11 & 0xff) <= uVar12)) {
            uVar8 = 0;
            iVar9 = 1;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_1006ca5a4;
            cVar7 = -0x57;
          }
          else {
            cVar7 = -0x37;
          }
        }
        else {
          cVar7 = -0x30;
        }
        iVar9 = (int)(char)uVar10 * (int)cVar4;
        iVar5 = (int)(char)iVar9;
        if ((iVar5 != iVar9) ||
           (uVar10 = iVar5 + (char)(bVar3 + cVar7), (int)(char)uVar10 != uVar10))
        goto LAB_1006ca590;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_1006ca4bc:
      iVar9 = 0;
      uVar8 = uVar10;
      goto LAB_1006ca5a4;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006ca5b4);
      (*pcVar6)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar9 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar9 + 0x57;
      }
      uVar11 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar11 = iVar9 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar11 & 0xff) <= uVar12)) {
            uVar8 = 0;
            iVar9 = 1;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_1006ca5a4;
            cVar7 = -0x57;
          }
          else {
            cVar7 = -0x37;
          }
        }
        else {
          cVar7 = -0x30;
        }
        iVar9 = (int)(char)uVar10 * (int)cVar4;
        iVar5 = (int)(char)iVar9;
        if ((iVar5 != iVar9) ||
           (uVar10 = iVar5 - (char)(bVar3 + cVar7), (int)(char)uVar10 != uVar10))
        goto LAB_1006ca590;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_1006ca4bc;
    }
  }
  else if (param_2 != 0) {
    uVar10 = iVar9 + 0x30;
    uVar1 = 0x61;
    if (10 < param_3) {
      uVar1 = iVar9 + 0x57;
    }
    uVar2 = 0x41;
    if (10 < param_3) {
      uVar10 = 0x3a;
      uVar2 = iVar9 + 0x37;
    }
    if (param_1 == (byte *)0x0) {
      uVar8 = 0;
      iVar9 = 0;
    }
    else {
      uVar11 = 0;
      do {
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar10 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar2 & 0xff) <= uVar12)) {
            uVar8 = 0;
            iVar9 = 1;
            if ((uVar12 < 0x61) || ((uVar1 & 0xff) <= uVar12)) goto LAB_1006ca5a4;
            cVar7 = -0x57;
          }
          else {
            cVar7 = -0x37;
          }
        }
        else {
          cVar7 = -0x30;
        }
        iVar9 = (int)(char)uVar11 * (int)cVar4;
        iVar5 = (int)(char)iVar9;
        if ((iVar5 != iVar9) || (uVar8 = iVar5 + (char)(bVar3 + cVar7), (int)(char)uVar8 != uVar8))
        goto LAB_1006ca590;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        uVar11 = uVar8;
      } while (param_2 != 0);
      iVar9 = 0;
    }
    goto LAB_1006ca5a4;
  }
LAB_1006ca590:
  uVar8 = 0;
  iVar9 = 1;
LAB_1006ca5a4:
  return uVar8 & 0xff | iVar9 << 8;
}



/* Address: 0x1006ca5b8 | FUN_1006ca5b8 */

uint FUN_1006ca5b8(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar8 = (int)param_3;
  sVar5 = (short)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1006ca85c);
      (*pcVar7)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar11 = 0;
      uVar1 = iVar8 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar8 + 0x57;
      }
      uVar12 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar12 = iVar8 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar13 = (uint)bVar3;
          if ((uVar13 < 0x41) || ((uVar12 & 0xff) <= uVar13)) {
            uVar9 = 0;
            uVar10 = 0x10000;
            if ((uVar13 < 0x61) || ((uVar2 & 0xff) <= uVar13)) goto LAB_1006ca848;
            iVar8 = 0xa9;
          }
          else {
            iVar8 = 0xc9;
          }
        }
        else {
          iVar8 = 0xd0;
        }
        iVar4 = (int)(short)uVar11 * (int)sVar5;
        iVar6 = (int)(short)iVar4;
        if ((iVar6 != iVar4) ||
           (uVar11 = iVar6 + ((uint)bVar3 + iVar8 & 0xff), (int)(short)uVar11 != uVar11))
        goto LAB_1006ca834;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_1006ca760:
      uVar10 = 0;
      uVar9 = uVar11;
      goto LAB_1006ca848;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1006ca858);
      (*pcVar7)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar11 = 0;
      uVar1 = iVar8 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar8 + 0x57;
      }
      uVar12 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar12 = iVar8 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar13 = (uint)bVar3;
          if ((uVar13 < 0x41) || ((uVar12 & 0xff) <= uVar13)) {
            uVar9 = 0;
            uVar10 = 0x10000;
            if ((uVar13 < 0x61) || ((uVar2 & 0xff) <= uVar13)) goto LAB_1006ca848;
            iVar8 = 0xa9;
          }
          else {
            iVar8 = 0xc9;
          }
        }
        else {
          iVar8 = 0xd0;
        }
        iVar4 = (int)(short)uVar11 * (int)sVar5;
        iVar6 = (int)(short)iVar4;
        if ((iVar6 != iVar4) ||
           (uVar11 = iVar6 - ((uint)bVar3 + iVar8 & 0xff), (int)(short)uVar11 != uVar11))
        goto LAB_1006ca834;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_1006ca760;
    }
  }
  else if (param_2 != 0) {
    uVar11 = iVar8 + 0x30;
    uVar1 = 0x61;
    if (10 < param_3) {
      uVar1 = iVar8 + 0x57;
    }
    uVar2 = 0x41;
    if (10 < param_3) {
      uVar11 = 0x3a;
      uVar2 = iVar8 + 0x37;
    }
    if (param_1 == (byte *)0x0) {
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar12 = 0;
      do {
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar11 & 0xff) <= (uint)bVar3)) {
          uVar13 = (uint)bVar3;
          if ((uVar13 < 0x41) || ((uVar2 & 0xff) <= uVar13)) {
            uVar9 = 0;
            uVar10 = 0x10000;
            if ((uVar13 < 0x61) || ((uVar1 & 0xff) <= uVar13)) goto LAB_1006ca848;
            iVar8 = 0xa9;
          }
          else {
            iVar8 = 0xc9;
          }
        }
        else {
          iVar8 = 0xd0;
        }
        iVar4 = (int)(short)uVar12 * (int)sVar5;
        iVar6 = (int)(short)iVar4;
        if ((iVar6 != iVar4) ||
           (uVar9 = iVar6 + ((uint)bVar3 + iVar8 & 0xff), (int)(short)uVar9 != uVar9))
        goto LAB_1006ca834;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        uVar12 = uVar9;
      } while (param_2 != 0);
      uVar10 = 0;
    }
    goto LAB_1006ca848;
  }
LAB_1006ca834:
  uVar9 = 0;
  uVar10 = 0x10000;
LAB_1006ca848:
  return uVar10 | uVar9 & 0xffff;
}



/* Address: 0x1006ca85c | FUN_1006ca85c */

ulong FUN_1006ca85c(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar5 = (int)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006caac4);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar5 + 0x57;
      }
      uVar11 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar11 = iVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar11 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_1006caab0;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar10 * (long)iVar5);
        if (((long)(int)uVar10 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar12 = (uint)bVar3 + iVar6 & 0xff, uVar10 = iVar8 + uVar12, SCARRY4(iVar8,uVar12)))
        goto LAB_1006caa9c;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_1006ca9dc:
      uVar9 = 0;
      uVar7 = uVar10;
      goto LAB_1006caab0;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006caac0);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar5 + 0x57;
      }
      uVar11 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar11 = iVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar11 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_1006caab0;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar10 * (long)iVar5);
        if (((long)(int)uVar10 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar12 = (uint)bVar3 + iVar6 & 0xff, uVar10 = iVar8 - uVar12, SBORROW4(iVar8,uVar12)))
        goto LAB_1006caa9c;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_1006ca9dc;
    }
  }
  else if (param_2 != 0) {
    uVar10 = iVar5 + 0x30;
    uVar1 = 0x61;
    if (10 < param_3) {
      uVar1 = iVar5 + 0x57;
    }
    uVar2 = 0x41;
    if (10 < param_3) {
      uVar10 = 0x3a;
      uVar2 = iVar5 + 0x37;
    }
    if (param_1 == (byte *)0x0) {
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      uVar11 = 0;
      do {
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar10 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar2 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar1 & 0xff) <= uVar12)) goto LAB_1006caab0;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar11 * (long)iVar5);
        if (((long)(int)uVar11 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar11 = (uint)bVar3 + iVar6 & 0xff, uVar7 = iVar8 + uVar11, SCARRY4(iVar8,uVar11)))
        goto LAB_1006caa9c;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        uVar11 = uVar7;
      } while (param_2 != 0);
      uVar9 = 0;
    }
    goto LAB_1006caab0;
  }
LAB_1006caa9c:
  uVar7 = 0;
  uVar9 = 0x100000000;
LAB_1006caab0:
  return uVar9 | uVar7;
}



/* Address: 0x1006caac4 | FUN_1006caac4 */

uint FUN_1006caac4(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar5 = (uint)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006cad5c);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar9 = 0;
      uVar1 = uVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = uVar5 + 0x57;
      }
      uVar10 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar10 = uVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar11 = (uint)bVar3;
          if ((uVar11 < 0x41) || ((uVar10 & 0xff) <= uVar11)) {
            uVar7 = 0;
            uVar8 = 0x10000;
            if ((uVar11 < 0x61) || ((uVar2 & 0xff) <= uVar11)) goto LAB_1006cad48;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar9 = (uVar9 & 0xffff) * (uVar5 & 0xffff);
        if (((uVar9 & 0xffff0000) != 0) ||
           (uVar9 = (uVar9 & 0xffff) + ((uint)bVar3 + iVar6 & 0xff), uVar9 >> 0x10 != 0))
        goto LAB_1006cad34;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_1006cac64:
      uVar8 = 0;
      uVar7 = uVar9;
      goto LAB_1006cad48;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006cad58);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar9 = 0;
      uVar1 = uVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = uVar5 + 0x57;
      }
      uVar10 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar10 = uVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar11 = (uint)bVar3;
          if ((uVar11 < 0x41) || ((uVar10 & 0xff) <= uVar11)) {
            uVar7 = 0;
            uVar8 = 0x10000;
            if ((uVar11 < 0x61) || ((uVar2 & 0xff) <= uVar11)) goto LAB_1006cad48;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar9 = (uVar9 & 0xffff) * (uVar5 & 0xffff);
        if (((uVar9 & 0xffff0000) != 0) ||
           (uVar9 = (uVar9 & 0xffff) - ((uint)bVar3 + iVar6 & 0xff), (uVar9 & 0xffff0000) != 0))
        goto LAB_1006cad34;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_1006cac64;
    }
  }
  else if (param_2 != 0) {
    uVar9 = uVar5 + 0x30;
    uVar1 = 0x61;
    if (10 < param_3) {
      uVar1 = uVar5 + 0x57;
    }
    uVar2 = 0x41;
    if (10 < param_3) {
      uVar9 = 0x3a;
      uVar2 = uVar5 + 0x37;
    }
    if (param_1 == (byte *)0x0) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      uVar10 = 0;
      do {
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar9 & 0xff) <= (uint)bVar3)) {
          uVar11 = (uint)bVar3;
          if ((uVar11 < 0x41) || ((uVar2 & 0xff) <= uVar11)) {
            uVar7 = 0;
            uVar8 = 0x10000;
            if ((uVar11 < 0x61) || ((uVar1 & 0xff) <= uVar11)) goto LAB_1006cad48;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar10 = (uVar10 & 0xffff) * (uVar5 & 0xffff);
        if (((uVar10 & 0xffff0000) != 0) ||
           (uVar7 = (uVar10 & 0xffff) + ((uint)bVar3 + iVar6 & 0xff), uVar7 >> 0x10 != 0))
        goto LAB_1006cad34;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        uVar10 = uVar7;
      } while (param_2 != 0);
      uVar8 = 0;
    }
    goto LAB_1006cad48;
  }
LAB_1006cad34:
  uVar7 = 0;
  uVar8 = 0x10000;
LAB_1006cad48:
  return uVar8 | uVar7 & 0xffff;
}


