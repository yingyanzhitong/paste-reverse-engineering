/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10086b510 | FUN_10086b510 */

void FUN_10086b510(__int64 param_1)

{
  char cVar1;
  Hasher HVar2;
  char *pcVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar3 = (char *)0x6946726564616568;
  if (cVar1 != '\x01') {
    pcVar3 = (char *)0xd000000000000012;
  }
  HVar2.unknown = (undefined *)0xec00000073646c65;
  if (cVar1 != '\x01') {
    HVar2.unknown = (undefined *)0x8000000100db2650;
  }
  SVar4.bridgeObject = HVar2.unknown;
  SVar4.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10086b598 | FUN_10086b598 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010086b5d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10086b598(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000f7830(&DAT_100fe82c0,&DAT_100c7db80);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x10086b610 | FUN_10086b610 */

void FUN_10086b610(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar2 = 0x6946726564616568;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000012;
  }
  uVar1 = 0xec00000073646c65;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x8000000100db2650;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x10086b65c | FUN_10086b65c */

undefined1  [16] FUN_10086b65c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0x6946726564616568;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000012;
  }
  uVar1 = 0xec00000073646c65;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x8000000100db2650;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x10086b6a4 | FUN_10086b6a4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010086b6e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10086b6a4(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  __int64 _Var2;
  undefined1 uVar3;
  
  FUN_1000f7830(&DAT_100fe82c0,&DAT_100c7db80);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_2,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x10086b720 | FUN_10086b720 */

String FUN_10086b720(void)

{
  String SVar1;
  
  FUN_10086dc58();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10086b748 | FUN_10086b748 */

String FUN_10086b748(void)

{
  String SVar1;
  
  FUN_10086dc58();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10086b770 | FUN_10086b770 */

void FUN_10086b770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined8 local_58;
  
  puVar1 = &DAT_100fe87f0;
  FUN_1000f7830(&DAT_100fe87f0,&DAT_100c7e470);
  lVar5 = *(long *)(puVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10086dc58();
  KVar2 = Swift::Encoder::_container();
  local_61 = 0;
  local_58 = param_2;
  FUN_10086dc98();
  puVar3 = &local_58;
  Swift::KeyedEncodingContainer::_encode(puVar3,&local_61,puVar1,&DAT_100f07a60,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_61 = 1;
    local_58 = param_3;
    FUN_10086dcd8();
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar1,&DAT_100f072e0,puVar3);
  }
  (**(code **)(lVar5 + 8))(auStack_70 + -(lVar4 + 0xfU & 0xfffffffffffffff0),puVar1);
  return;
}



/* Address: 0x10086b8b0 | FUN_10086b8b0 */

void FUN_10086b8b0(void)

{
  FUN_10086dd18();
  return;
}



/* Address: 0x10086b8c4 | FUN_10086b8c4 */

void FUN_10086b8c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_10086dd18();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x10086b8ec | FUN_10086b8ec */

void FUN_10086b8ec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10086b770(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10086b904 | FUN_10086b904 */

undefined1  [16] FUN_10086b904(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x44414548;
  return auVar1;
}



/* Address: 0x10086b914 | FUN_10086b914 */

undefined1  [16] FUN_10086b914(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x54534f50;
  return auVar1;
}



/* Address: 0x10086b924 | FUN_10086b924 */

undefined1  [16] FUN_10086b924(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x545550;
  return auVar1;
}



/* Address: 0x10086b934 | FUN_10086b934 */

undefined1  [16] FUN_10086b934(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e600000000000000;
  auVar1._0_8_ = 0x4554454c4544;
  return auVar1;
}



/* Address: 0x10086b948 | FUN_10086b948 */

undefined1  [16] FUN_10086b948(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = 0x4543415254;
  return auVar1;
}



/* Address: 0x10086b95c | FUN_10086b95c */

undefined1  [16] FUN_10086b95c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = 0x4843544150;
  return auVar1;
}



/* Address: 0x10086b970 | FUN_10086b970 */

undefined8 FUN_10086b970(_StringObject param_1,ulong param_2)

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
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar7 = 4L << uVar5;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      uVar6 = (ulong)after.cmsgPointer.unknown & 0xc;
      position.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar6 == uVar7) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      }
      if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10086bb6c);
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
          local_70 = param_1.unknown;
          uStack_68 = param_2 & 0xffffffffffffff;
          UVar4.unknown = (undefined *)&local_70;
        }
        uVar5 = (uint)*(byte *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10))
        ;
        if (uVar6 == uVar7) goto LAB_10086bb18;
LAB_10086ba78:
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_10086b9dc;
LAB_10086ba7c:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10086bb70);
          (*pcVar2)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
      }
      else {
        _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
        uVar5 = (uint)_Var3;
        if (uVar6 != uVar7) goto LAB_10086ba78;
LAB_10086bb18:
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_10086ba7c;
LAB_10086b9dc:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      if ((((0x3f < uVar5 - 0x21) ||
           ((1L << ((ulong)(uVar5 - 0x21) & 0x3f) & 0xe00000000000367dU) == 0)) && (uVar5 != 0x7e))
         && (((uVar5 != 0x7c && (9 < (uVar5 - 0x30 & 0xff))) &&
             ((0x19 < (uVar5 - 0x41 & 0xff) && (0x19 < (uVar5 - 0x61 & 0xff))))))) {
        return 1;
      }
    } while (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  return 0;
}



/* Address: 0x10086bb70 | FUN_10086bb70 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_10086bb70(long param_1,long param_2)

{
  undefined8 uVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  _StringGuts _Var14;
  _StringGuts _Var15;
  long lVar16;
  undefined *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  long lStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined *puStack_70;
  
  cVar4 = *(char *)(param_1 + 0x30);
  _Var14.unknown = *(undefined **)(param_1 + 0x38);
  _Var2.unknown = *(undefined **)(param_1 + 0x40);
  cVar5 = *(char *)(param_2 + 0x30);
  puVar9 = *(undefined **)(param_2 + 0x38);
  puVar10 = *(undefined **)(param_2 + 0x40);
  if (*(undefined **)(param_1 + 0x20) == *(undefined **)(param_2 + 0x20) &&
      *(undefined **)(param_1 + 0x28) == *(undefined **)(param_2 + 0x28)) {
    if (cVar4 != cVar5) {
      return false;
    }
  }
  else {
    bVar6 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)*(undefined **)(param_1 + 0x20),
                       (_StringGuts)*(undefined **)(param_1 + 0x28),
                       (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x20));
    if (!bVar6) {
      return false;
    }
    if (cVar4 != cVar5) {
      return false;
    }
  }
  if ((_Var14.unknown != puVar9 || _Var2.unknown != puVar10) &&
     (bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var14,_Var2,(_StringComparisonResult)(__int8)puVar9), !bVar6)) {
    return false;
  }
  local_f8 = *(undefined8 *)(param_1 + 0x48);
  lVar16 = *(long *)(param_1 + 0x50);
  local_e8 = *(undefined **)(param_1 + 0x58);
  local_e0 = *(undefined **)(param_1 + 0x60);
  uVar12 = *(undefined8 *)(param_1 + 0x68);
  _Var14.unknown = *(undefined **)(param_1 + 0x70);
  local_100 = *(undefined **)(param_1 + 0x78);
  uVar7 = *(undefined8 *)(param_2 + 0x48);
  lVar8 = *(long *)(param_2 + 0x50);
  puVar9 = *(undefined **)(param_2 + 0x58);
  puVar10 = *(undefined **)(param_2 + 0x60);
  uVar11 = *(undefined8 *)(param_2 + 0x68);
  puVar13 = *(undefined **)(param_2 + 0x70);
  local_108 = *(undefined **)(param_2 + 0x78);
  if (lVar16 == 0) {
    if (lVar8 == 0) {
      FUN_100867d14(local_f8,0);
      FUN_100867d14(uVar7,0,puVar9,puVar10,uVar11,puVar13,local_108);
      lVar16 = 0;
LAB_10086bd68:
      FUN_100864364(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
      goto LAB_10086bd80;
    }
  }
  else if (lVar8 != 0) {
    if ((((local_e8 != puVar9) || (local_e0 != puVar10)) &&
        (bVar6 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)local_e8,(_StringGuts)local_e0,
                            (_StringComparisonResult)(__int8)puVar9), !bVar6)) ||
       (((uint)uVar12 & 0xff) != ((uint)uVar11 & 0xff))) goto LAB_10086c19c;
    if ((_Var14.unknown == puVar13) && (local_100 == local_108)) {
      FUN_100867d14(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
      FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,_Var14.unknown,local_100);
      FUN_100864364(uVar7,lVar8,puVar9,puVar10,uVar11,_Var14.unknown,local_100);
      goto LAB_10086bd68;
    }
    bVar6 = Swift::_stringCompareWithSmolCheck
                      (_Var14,(_StringGuts)local_100,(_StringComparisonResult)(__int8)puVar13);
    FUN_100867d14(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
    FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
    FUN_100864364(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
    FUN_100864364(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
    if (!bVar6) {
      return false;
    }
LAB_10086bd80:
    local_f8 = *(undefined8 *)(param_1 + 0x80);
    lVar16 = *(long *)(param_1 + 0x88);
    local_e8 = *(undefined **)(param_1 + 0x90);
    local_e0 = *(undefined **)(param_1 + 0x98);
    uVar12 = *(undefined8 *)(param_1 + 0xa0);
    _Var14.unknown = *(undefined **)(param_1 + 0xa8);
    local_100 = *(undefined **)(param_1 + 0xb0);
    uVar7 = *(undefined8 *)(param_2 + 0x80);
    lVar8 = *(long *)(param_2 + 0x88);
    puVar9 = *(undefined **)(param_2 + 0x90);
    puVar10 = *(undefined **)(param_2 + 0x98);
    uVar11 = *(undefined8 *)(param_2 + 0xa0);
    puVar13 = *(undefined **)(param_2 + 0xa8);
    local_108 = *(undefined **)(param_2 + 0xb0);
    if (lVar16 == 0) {
      if (lVar8 == 0) {
        FUN_100867d14(local_f8,0);
        FUN_100867d14(uVar7,0,puVar9,puVar10,uVar11,puVar13,local_108);
        lVar16 = 0;
LAB_10086bf78:
        FUN_100864364(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
LAB_10086bf90:
        local_f8 = *(undefined8 *)(param_1 + 0xb8);
        lVar16 = *(long *)(param_1 + 0xc0);
        local_e8 = *(undefined **)(param_1 + 200);
        local_e0 = *(undefined **)(param_1 + 0xd0);
        uVar12 = *(undefined8 *)(param_1 + 0xd8);
        _Var14.unknown = *(undefined **)(param_1 + 0xe0);
        local_100 = *(undefined **)(param_1 + 0xe8);
        uVar7 = *(undefined8 *)(param_2 + 0xb8);
        lVar8 = *(long *)(param_2 + 0xc0);
        puVar9 = *(undefined **)(param_2 + 200);
        puVar10 = *(undefined **)(param_2 + 0xd0);
        uVar11 = *(undefined8 *)(param_2 + 0xd8);
        puVar13 = *(undefined **)(param_2 + 0xe0);
        local_108 = *(undefined **)(param_2 + 0xe8);
        if (lVar16 == 0) {
          if (lVar8 == 0) {
            FUN_100867d14(local_f8,0);
            FUN_100867d14(uVar7,0,puVar9,puVar10,uVar11,puVar13,local_108);
            lVar16 = 0;
LAB_10086c280:
            FUN_100864364(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
LAB_10086c298:
            uVar12 = *(undefined8 *)(param_1 + 0xf0);
            lVar16 = *(long *)(param_1 + 0xf8);
            _Var14.unknown = *(undefined **)(param_1 + 0x100);
            _Var2.unknown = *(undefined **)(param_1 + 0x108);
            uVar1 = *(undefined8 *)(param_1 + 0x110);
            _Var3.unknown = *(undefined **)(param_1 + 0x118);
            _Var15.unknown = *(undefined **)(param_1 + 0x120);
            uVar7 = *(undefined8 *)(param_2 + 0xf0);
            lVar8 = *(long *)(param_2 + 0xf8);
            puVar9 = *(undefined **)(param_2 + 0x100);
            puVar10 = *(undefined **)(param_2 + 0x108);
            uVar11 = *(undefined8 *)(param_2 + 0x110);
            puVar13 = *(undefined **)(param_2 + 0x118);
            local_108 = *(undefined **)(param_2 + 0x120);
            if (lVar16 == 0) {
              if (lVar8 == 0) {
                FUN_100867d14(uVar12,0,_Var14.unknown,_Var2.unknown,uVar1,_Var3.unknown,
                              _Var15.unknown);
                FUN_100867d14(uVar7,0,puVar9,puVar10,uVar11,puVar13,local_108);
                FUN_100864364(uVar12,0,_Var14.unknown,_Var2.unknown,uVar1,_Var3.unknown,
                              _Var15.unknown);
                return true;
              }
            }
            else if (lVar8 != 0) {
              if ((((_Var14.unknown == puVar9) && (_Var2.unknown == puVar10)) ||
                  (bVar6 = Swift::_stringCompareWithSmolCheck
                                     (_Var14,_Var2,(_StringComparisonResult)(__int8)puVar9), bVar6))
                 && (((uint)uVar1 & 0xff) == ((uint)uVar11 & 0xff))) {
                if ((_Var3.unknown == puVar13) && (_Var15.unknown == local_108)) {
                  FUN_100867d14(uVar12,lVar16,_Var14.unknown,_Var2.unknown,uVar1,_Var3.unknown,
                                _Var15.unknown);
                  FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,_Var3.unknown,_Var15.unknown);
                  FUN_100864364(uVar7,lVar8,puVar9,puVar10,uVar11,_Var3.unknown,_Var15.unknown);
                  bVar6 = true;
                }
                else {
                  bVar6 = Swift::_stringCompareWithSmolCheck
                                    (_Var3,_Var15,(_StringComparisonResult)(__int8)puVar13);
                  FUN_100867d14(uVar12,lVar16,_Var14.unknown,_Var2.unknown,uVar1,_Var3.unknown,
                                _Var15.unknown);
                  FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
                  FUN_100864364(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
                }
              }
              else {
                FUN_100867d14(uVar12,lVar16,_Var14.unknown,_Var2.unknown,uVar1,_Var3.unknown,
                              _Var15.unknown);
                FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
                FUN_100864364(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
                bVar6 = false;
              }
              FUN_100864364(uVar12,lVar16,_Var14.unknown,_Var2.unknown,uVar1,_Var3.unknown,
                            _Var15.unknown);
              return bVar6;
            }
            local_d8 = uVar12;
            lStack_d0 = lVar16;
            local_c8 = _Var14.unknown;
            puStack_c0 = _Var2.unknown;
            local_b8 = uVar1;
            puStack_b0 = _Var3.unknown;
            local_a8 = _Var15.unknown;
            uStack_a0 = uVar7;
            local_98 = lVar8;
            puStack_90 = puVar9;
            local_88 = puVar10;
            uStack_80 = uVar11;
            local_78 = puVar13;
            puStack_70 = local_108;
            FUN_100867d14(uVar12,lVar16,_Var14.unknown,_Var2.unknown,uVar1,_Var3.unknown,
                          _Var15.unknown);
            goto LAB_10086c038;
          }
        }
        else if (lVar8 != 0) {
          if ((((local_e8 != puVar9) || (local_e0 != puVar10)) &&
              (bVar6 = Swift::_stringCompareWithSmolCheck
                                 ((_StringGuts)local_e8,(_StringGuts)local_e0,
                                  (_StringComparisonResult)(__int8)puVar9), !bVar6)) ||
             (((uint)uVar12 & 0xff) != ((uint)uVar11 & 0xff))) {
LAB_10086c19c:
            FUN_100867d14(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
            FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
            FUN_100864364(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
            FUN_100864364(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
            return false;
          }
          if ((_Var14.unknown == puVar13) && (local_100 == local_108)) {
            FUN_100867d14(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
            FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,_Var14.unknown,local_100);
            FUN_100864364(uVar7,lVar8,puVar9,puVar10,uVar11,_Var14.unknown,local_100);
            goto LAB_10086c280;
          }
          bVar6 = Swift::_stringCompareWithSmolCheck
                            (_Var14,(_StringGuts)local_100,(_StringComparisonResult)(__int8)puVar13)
          ;
          FUN_100867d14(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
          FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
          FUN_100864364(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
          FUN_100864364(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
          if (!bVar6) {
            return false;
          }
          goto LAB_10086c298;
        }
      }
    }
    else if (lVar8 != 0) {
      if ((((local_e8 != puVar9) || (local_e0 != puVar10)) &&
          (bVar6 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)local_e8,(_StringGuts)local_e0,
                              (_StringComparisonResult)(__int8)puVar9), !bVar6)) ||
         (((uint)uVar12 & 0xff) != ((uint)uVar11 & 0xff))) goto LAB_10086c19c;
      if ((_Var14.unknown == puVar13) && (local_100 == local_108)) {
        FUN_100867d14(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
        FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,_Var14.unknown,local_100);
        FUN_100864364(uVar7,lVar8,puVar9,puVar10,uVar11,_Var14.unknown,local_100);
        goto LAB_10086bf78;
      }
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var14,(_StringGuts)local_100,(_StringComparisonResult)(__int8)puVar13);
      FUN_100867d14(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
      FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
      FUN_100864364(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
      FUN_100864364(local_f8,lVar16,local_e8,local_e0,uVar12,_Var14.unknown,local_100);
      if (!bVar6) {
        return false;
      }
      goto LAB_10086bf90;
    }
  }
  local_d8 = local_f8;
  lStack_d0 = lVar16;
  local_c8 = local_e8;
  puStack_c0 = local_e0;
  local_b8 = uVar12;
  puStack_b0 = _Var14.unknown;
  local_a8 = local_100;
  uStack_a0 = uVar7;
  local_98 = lVar8;
  puStack_90 = puVar9;
  local_88 = puVar10;
  uStack_80 = uVar11;
  local_78 = puVar13;
  puStack_70 = local_108;
  FUN_100867d14(local_f8,lVar16);
LAB_10086c038:
  FUN_100867d14(uVar7,lVar8,puVar9,puVar10,uVar11,puVar13,local_108);
  FUN_10086e190(&local_d8);
  return false;
}



/* Address: 0x10086c640 | FUN_10086c640 */

void FUN_10086c640(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fe8200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe81f8;
  FUN_1000f8b08(&DAT_100fe81f8,&DAT_100c7d850);
  puVar2 = PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0,
             puVar1);
  DAT_100fe8200 = puVar2;
  return;
}



/* Address: 0x10086c690 | FUN_10086c690 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10086c690(void)

{
  return ZEXT816(0x100fe8870);
}



/* Address: 0x10086c6b0 | FUN_10086c6b0 */

undefined1  [16] FUN_10086c6b0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || (uVar1 = param_1, FUN_10086b970(), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    param_1 = 0;
    param_2 = 0;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Address: 0x10086c71c | FUN_10086c71c */

undefined8 FUN_10086c71c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe87e8;
  FUN_1000f7830(&DAT_100fe87e8,&DAT_100c7e468);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10086c76c | FUN_10086c76c */

undefined1  [16] FUN_10086c76c(long param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  void *pvVar6;
  void *pvVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
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
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  SVar11 = *(String *)(param_1 + 0x38);
  _swift_bridgeObjectRetain(uVar1);
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar11,SVar16);
  _swift_bridgeObjectRelease(uVar1);
  SVar11.bridgeObject = &SUB_e200000000000000;
  SVar11.str = (char *)0x2029;
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar11,SVar17);
  lVar9 = *(long *)(param_1 + 0x50);
  if (lVar9 == 0) {
    pcVar8 = (char *)0x0;
    pvVar7 = (void *)0xe000000000000000;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    pcVar5 = *(char **)(param_1 + 0x58);
    pvVar6 = *(void **)(param_1 + 0x60);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    pcVar8 = *(char **)(param_1 + 0x70);
    pvVar7 = *(void **)(param_1 + 0x78);
    pcVar3 = pcVar8;
    FUN_100858afc(pcVar8,pvVar7);
    if (((ulong)pcVar3 & 1) == 0) {
      _swift_bridgeObjectRetain(pvVar7);
    }
    else {
      FUN_100867d14(uVar10,lVar9,pcVar5,pvVar6,uVar1,pcVar8,pvVar7);
      pcVar3 = pcVar8;
      pvVar4 = pvVar7;
      FUN_100872ba8();
      FUN_100864364(uVar10,lVar9,pcVar5,pvVar6,uVar1,pcVar8,pvVar7);
      param_3 = pcVar5;
      param_4 = pvVar6;
      pcVar8 = pcVar3;
      pvVar7 = pvVar4;
    }
    _swift_bridgeObjectRetain(pvVar7);
    SVar12.bridgeObject = (void *)0xe300000000000000;
    SVar12.str = (char *)0x2f2f3a;
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar12,SVar18);
    _swift_bridgeObjectRelease(pvVar7);
  }
  SVar13.bridgeObject = pvVar7;
  SVar13.str = pcVar8;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar13,SVar19);
  _swift_bridgeObjectRelease(pvVar7);
  lVar9 = *(long *)(param_1 + 0x88);
  if (lVar9 == 0) {
    pcVar8 = (char *)0x0;
    pvVar7 = (void *)0xe000000000000000;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x80);
    pcVar5 = *(char **)(param_1 + 0x90);
    pvVar6 = *(void **)(param_1 + 0x98);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    pcVar8 = *(char **)(param_1 + 0xa8);
    pvVar7 = *(void **)(param_1 + 0xb0);
    pcVar3 = pcVar8;
    FUN_100858afc(pcVar8,pvVar7);
    if (((ulong)pcVar3 & 1) == 0) {
      _swift_bridgeObjectRetain(pvVar7);
    }
    else {
      FUN_100867d14(uVar10,lVar9,pcVar5,pvVar6,uVar1,pcVar8,pvVar7);
      pcVar3 = pcVar8;
      pvVar4 = pvVar7;
      FUN_100872ba8();
      FUN_100864364(uVar10,lVar9,pcVar5,pvVar6,uVar1,pcVar8,pvVar7);
      param_3 = pcVar5;
      param_4 = pvVar6;
      pcVar8 = pcVar3;
      pvVar7 = pvVar4;
    }
  }
  SVar14.bridgeObject = pvVar7;
  SVar14.str = pcVar8;
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar14,SVar20);
  _swift_bridgeObjectRelease(pvVar7);
  lVar9 = *(long *)(param_1 + 0xc0);
  if (lVar9 == 0) {
    pcVar8 = (char *)0x0;
    pvVar7 = (void *)0xe000000000000000;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0xb8);
    pcVar5 = *(char **)(param_1 + 200);
    pvVar6 = *(void **)(param_1 + 0xd0);
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    pcVar8 = *(char **)(param_1 + 0xe0);
    pvVar7 = *(void **)(param_1 + 0xe8);
    pcVar3 = pcVar8;
    FUN_100858afc(pcVar8,pvVar7);
    if (((ulong)pcVar3 & 1) == 0) {
      _swift_bridgeObjectRetain(pvVar7);
    }
    else {
      FUN_100867d14(uVar10,lVar9,pcVar5,pvVar6,uVar1,pcVar8,pvVar7);
      pcVar3 = pcVar8;
      pvVar4 = pvVar7;
      FUN_100872ba8();
      FUN_100864364(uVar10,lVar9,pcVar5,pvVar6,uVar1,pcVar8,pvVar7);
      param_3 = pcVar5;
      param_4 = pvVar6;
      pvVar7 = pvVar4;
      pcVar8 = pcVar3;
    }
  }
  SVar15.bridgeObject = pvVar7;
  SVar15.str = pcVar8;
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar15,SVar21);
  _swift_bridgeObjectRelease(pvVar7);
  auVar2._8_8_ = 0xe100000000000000;
  auVar2._0_8_ = 0x28;
  return auVar2;
}



/* Address: 0x10086ca40 | FUN_10086ca40 */

/* WARNING: Removing unreachable block (ram,0x00010086d0e4) */

char * FUN_10086ca40(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  String SVar9;
  undefined *puVar10;
  char *pcVar11;
  bool bVar12;
  DecodingError DVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  DecodingError DVar39;
  _StringGuts _Var17;
  _StringComparisonResult expecting;
  char *pcVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  char *pcVar22;
  char *unaff_x21;
  char *pcVar23;
  undefined1 *puVar24;
  char *pcVar25;
  void *pvVar26;
  void *pvVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  undefined *local_228;
  char *local_220;
  undefined1 *local_218;
  void *local_210;
  char *local_208;
  char *local_1d8;
  undefined *local_1d0;
  char *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  char *local_1b0;
  undefined *local_1a8;
  undefined1 *local_1a0;
  void *local_198;
  char *local_190;
  char *local_188;
  char *local_178;
  undefined1 *local_170;
  void *local_168;
  char *local_160;
  char *local_158;
  char *local_150;
  undefined1 *local_148;
  void *local_140;
  char *local_138;
  char *pcStack_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  undefined *local_108;
  char *local_100;
  undefined1 *puStack_f8;
  void *local_f0;
  char *local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  char *local_58;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_unkeyedContainer();
  if (unaff_x21 != (char *)0x0) goto LAB_10086dc28;
  FUN_100004640(auStack_90,local_78);
  bVar12 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
  if (bVar12) {
    local_198 = (void *)0x0;
    local_190 = (char *)0x0;
    local_1b0 = (char *)0x0;
    local_1a0 = (undefined1 *)0x0;
    local_58 = (char *)0x0;
    local_1a8 = (undefined *)0x0;
    local_120 = (char *)0x0;
    local_118 = (char *)0x0;
    local_138 = (char *)0x0;
    pcStack_130 = (char *)0x0;
    local_148 = (undefined1 *)0x0;
    local_140 = (void *)0x0;
    local_1c0 = (undefined *)0x0;
    local_1b8 = (undefined *)0x0;
    local_128 = (char *)0x0;
    local_160 = (char *)0x0;
    local_158 = (char *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (void *)0x0;
    local_178 = (char *)0x0;
    local_1c8 = (char *)0x0;
    local_188 = (char *)0x0;
    pcVar25 = (char *)0x0;
    pvVar27 = (void *)0x0;
    puVar24 = (undefined1 *)0x0;
    pcVar22 = (char *)0x0;
    local_228 = (undefined *)0x0;
    pcVar23 = (char *)0x0;
LAB_10086cb0c:
    unaff_x21 = "d\" pseudo header fields";
    DVar13 = Swift::DecodingError::typeMetadataAccessor();
    _DVar39 = (__int8)
              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(DVar13.value,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    Swift::DecodingError::_dataCorruptedError(0x80,_DVar39,auStack_90,0xd000000000000028);
    _swift_willThrow();
    FUN_100864364(pcVar23,local_228,pcVar22,puVar24,pvVar27,pcVar25,local_188);
    FUN_100864364(local_1c8,local_1c0,local_178,local_170,local_168,local_160,local_158);
    FUN_100864364(local_128,local_1b8,local_120,local_148,local_140,local_138,pcStack_130);
  }
  else {
    local_1d8 = (char *)0x0;
    local_1d0 = (undefined *)0x0;
    local_150 = (char *)0x0;
    local_218 = (undefined1 *)0x0;
    local_210 = (void *)0x0;
    local_220 = (char *)0x0;
    local_208 = (char *)0x0;
    local_198 = (void *)0x0;
    local_190 = (char *)0x0;
    local_1b0 = (char *)0x0;
    local_1a8 = (undefined *)0x0;
    local_1a0 = (undefined1 *)0x0;
    local_58 = (char *)0x0;
    local_118 = (char *)0x0;
    pcStack_130 = (char *)0x0;
    local_138 = (char *)0x0;
    local_140 = (void *)0x0;
    local_148 = (undefined1 *)0x0;
    local_120 = (char *)0x0;
    local_1c0 = (undefined *)0x0;
    local_1b8 = (undefined *)0x0;
    local_128 = (char *)0x0;
    local_158 = (char *)0x0;
    local_160 = (char *)0x0;
    local_168 = (void *)0x0;
    local_170 = (undefined1 *)0x0;
    local_178 = (char *)0x0;
    local_1c8 = (char *)0x0;
    local_228 = (undefined *)0x0;
    local_188 = (char *)0x0;
    pvVar27 = (void *)0x0;
    pcVar23 = (char *)0x0;
    pcVar22 = (char *)0x0;
    puVar24 = (undefined1 *)0x0;
    pcVar25 = (char *)0x0;
    do {
      while( true ) {
        FUN_10007d048(auStack_90,local_78);
        FUN_10086523c();
        Swift::UnkeyedDecodingContainer::_decode();
        pcVar11 = local_e0;
        pcVar15 = local_e8;
        puVar20 = puStack_f8;
        pcVar14 = local_100;
        puVar5 = local_108;
        pcVar16 = local_110;
        pvVar26 = (void *)((ulong)local_f0 & 0xff);
        if (local_100 == (char *)0x646f6874656d3a && puStack_f8 == &DAT_e700000000000000) break;
        expecting.value = (__int8)local_100;
        bVar12 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)0x646f6874656d3a,(_StringGuts)0xe700000000000000,expecting)
        ;
        if (bVar12) break;
        if (((pcVar14 == (char *)0x656d656863733a) && (puVar20 == &DAT_e700000000000000)) ||
           (bVar12 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x656d656863733a,(_StringGuts)0xe700000000000000,
                                expecting), bVar12)) {
          if (local_1a8 != (undefined *)0x0) {
            local_108 = local_1a8;
            puStack_f8 = local_1a0;
            local_f0 = local_198;
            local_e8 = local_1b0;
            local_e0 = local_190;
            uStack_d0 = 0;
            local_d8 = 0;
            uStack_c0 = 0;
            local_c8 = 0;
            uStack_b0 = 0;
            local_b8 = 0;
            local_a8 = 0;
            local_110 = local_118;
            local_100 = local_58;
            FUN_100867d14(local_118,local_1a8,local_58,local_1a0,local_198,local_1b0,local_190);
            FUN_10086e190(&local_110);
            unaff_x21 = "rity\" pseudo header fields";
            DVar13 = Swift::DecodingError::typeMetadataAccessor();
            _DVar39 = (__int8)
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
            ;
            _swift_allocError(DVar13.value,
                              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                              ,0,0);
            Swift::DecodingError::_dataCorruptedError(0x20,_DVar39,auStack_90,0xd000000000000027);
            _swift_willThrow();
            FUN_100864364(pcVar23,local_228,pcVar22,puVar24,pvVar27,pcVar25,local_188);
            FUN_100864364(local_1c8,local_1c0,local_178,local_170,local_168,local_160,local_158);
            FUN_100864364(local_128,local_1b8,local_120,local_148,local_140,local_138,pcStack_130);
            FUN_100864364(local_118,local_1a8,local_58,local_1a0,local_198,local_1b0,local_190);
            goto LAB_10086dc00;
          }
          FUN_100864364(local_118,0,local_58,local_1a0,local_198,local_1b0,local_190);
          FUN_100004640(auStack_90,local_78);
          bVar12 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
          local_190 = pcVar11;
          local_58 = pcVar14;
          local_118 = pcVar16;
          local_1b0 = pcVar15;
          local_1a8 = puVar5;
          local_1a0 = puVar20;
          local_198 = pvVar26;
          if (bVar12) goto LAB_10086d1fc;
        }
        else if (((pcVar14 == (char *)0x69726f687475613a) &&
                 (puVar20 == (undefined1 *)0xea00000000007974)) ||
                (bVar12 = Swift::_stringCompareWithSmolCheck
                                    ((_StringGuts)0x69726f687475613a,(_StringGuts)0xea00000000007974
                                     ,expecting), bVar12)) {
          if (local_1b8 != (undefined *)0x0) {
            local_108 = local_1b8;
            uStack_d0 = 0;
            local_d8 = 0;
            uStack_c0 = 0;
            local_c8 = 0;
            uStack_b0 = 0;
            local_b8 = 0;
            local_a8 = 0;
            local_110 = local_128;
            local_100 = local_120;
            puStack_f8 = local_148;
            local_f0 = local_140;
            local_e8 = local_138;
            local_e0 = pcStack_130;
            FUN_100867d14();
            FUN_10086e190(&local_110);
            unaff_x21 = " pseudo header fields";
            DVar13 = Swift::DecodingError::typeMetadataAccessor();
            _DVar39 = (__int8)
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
            ;
            _swift_allocError(DVar13.value,
                              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                              ,0,0);
            Swift::DecodingError::_dataCorruptedError(0xf0,_DVar39,auStack_90,0xd00000000000002a);
            _swift_willThrow();
            FUN_100864364(pcVar23,local_228,pcVar22,puVar24,pvVar27,pcVar25,local_188);
            FUN_100864364(local_1c8,local_1c0,local_178,local_170,local_168,local_160,local_158);
LAB_10086dbd0:
            FUN_100864364(local_128,local_1b8,local_120,local_148,local_140,local_138,pcStack_130);
            FUN_100864364(local_118,local_1a8,local_58,local_1a0,local_198,local_1b0,local_190);
            goto LAB_10086dc00;
          }
          FUN_100864364(local_128,0,local_120,local_148,local_140,local_138,pcStack_130);
          FUN_100004640(auStack_90,local_78);
          bVar12 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
          local_138 = pcVar15;
          local_140 = pvVar26;
          local_148 = puVar20;
          local_120 = pcVar14;
          local_128 = pcVar16;
          pcStack_130 = pcVar11;
          local_1b8 = puVar5;
          if (bVar12) goto LAB_10086d1fc;
        }
        else if (((pcVar14 == (char *)0x687461703a) && (puVar20 == &DAT_e500000000000000)) ||
                (bVar12 = Swift::_stringCompareWithSmolCheck
                                    ((_StringGuts)0x687461703a,(_StringGuts)0xe500000000000000,
                                     expecting), bVar12)) {
          if (local_1c0 != (undefined *)0x0) {
            local_110 = local_1c8;
            local_108 = local_1c0;
            uStack_d0 = 0;
            local_d8 = 0;
            uStack_c0 = 0;
            local_c8 = 0;
            uStack_b0 = 0;
            local_b8 = 0;
            local_a8 = 0;
            local_100 = local_178;
            puStack_f8 = local_170;
            local_f0 = local_168;
            local_e8 = local_160;
            local_e0 = local_158;
            FUN_100867d14(local_1c8,local_1c0,local_178,local_170,local_168,local_160,local_158);
            FUN_10086e190(&local_110);
            DVar13 = Swift::DecodingError::typeMetadataAccessor();
            _DVar39 = (__int8)
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
            ;
            _swift_allocError(DVar13.value,
                              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                              ,0,0);
            Swift::DecodingError::_dataCorruptedError(0xc0,_DVar39,auStack_90,0xd000000000000025);
            _swift_willThrow();
            FUN_100864364(pcVar23,local_228,pcVar22,puVar24,pvVar27,pcVar25,local_188);
            unaff_x21 = local_178;
LAB_10086dbbc:
            FUN_100864364(local_1c8,local_1c0,local_178,local_170,local_168,local_160,local_158);
            goto LAB_10086dbd0;
          }
          FUN_100864364(local_1c8,0,local_178,local_170,local_168,local_160,local_158);
          FUN_100004640(auStack_90,local_78);
          bVar12 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
          local_178 = pcVar14;
          local_158 = pcVar11;
          local_160 = pcVar15;
          local_168 = pvVar26;
          local_170 = puVar20;
          local_1c8 = pcVar16;
          local_1c0 = puVar5;
          if (bVar12) goto LAB_10086d1fc;
        }
        else if (((pcVar14 == (char *)0x6f636f746f72703a) &&
                 (puVar20 == (undefined1 *)0xe90000000000006c)) ||
                (pcVar18 = pcVar14, puVar19 = puVar20,
                bVar12 = Swift::_stringCompareWithSmolCheck
                                   ((_StringGuts)0x6f636f746f72703a,(_StringGuts)0xe90000000000006c,
                                    expecting), bVar12)) {
          if (local_228 != (undefined *)0x0) {
            local_108 = local_228;
            uStack_d0 = 0;
            local_d8 = 0;
            uStack_c0 = 0;
            local_c8 = 0;
            uStack_b0 = 0;
            local_b8 = 0;
            local_a8 = 0;
            local_110 = pcVar23;
            local_100 = pcVar22;
            puStack_f8 = puVar24;
            local_f0 = pvVar27;
            local_e8 = pcVar25;
            local_e0 = local_188;
            FUN_100867d14(pcVar23,local_228,pcVar22,puVar24,pvVar27,pcVar25,local_188);
            FUN_10086e190(&local_110);
            DVar13 = Swift::DecodingError::typeMetadataAccessor();
            _DVar39 = (__int8)
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
            ;
            _swift_allocError(DVar13.value,
                              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                              ,0,0);
            Swift::DecodingError::_dataCorruptedError(0x90,_DVar39,auStack_90,0xd000000000000029);
            _swift_willThrow();
            FUN_100864364(pcVar23,local_228,pcVar22,puVar24,pvVar27,pcVar25,local_188);
            unaff_x21 = pcVar22;
            goto LAB_10086dbbc;
          }
          FUN_100864364(pcVar23,0,pcVar22,puVar24,pvVar27,pcVar25,local_188);
          FUN_100004640(auStack_90,local_78);
          bVar12 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
          local_228 = puVar5;
          local_188 = pcVar11;
          pvVar27 = pvVar26;
          pcVar23 = pcVar16;
          pcVar22 = pcVar14;
          puVar24 = puVar20;
          pcVar25 = pcVar15;
          if (bVar12) goto LAB_10086d1fc;
        }
        else {
          pcVar14 = pcVar16;
          _Var17.unknown = puVar5;
          FUN_100830fd0();
          if ((((uint)pcVar14 & 0xff00) == 0x100) || (((uint)pcVar14 & 0xff) != 0x3a)) {
            local_110 = (char *)0x0;
            local_108 = (undefined *)0xe000000000000000;
            Swift::_StringGuts::grow(0x21,_Var17);
            _swift_bridgeObjectRelease(local_108);
            local_110 = (char *)0x22;
            local_108 = (undefined *)0xe100000000000000;
            local_a0 = pcVar16;
            puStack_98 = puVar5;
            _swift_bridgeObjectRetain(puVar5);
            SVar28.bridgeObject = &SUB_e200000000000000;
            SVar28.str = (char *)0x203a;
            SVar33.bridgeObject = puVar19;
            SVar33.str = pcVar18;
            Swift::String::append(SVar28,SVar33);
            pcVar16 = pcVar15;
            FUN_100858afc(pcVar15,pcVar11);
            pcVar14 = pcVar11;
            if (((ulong)pcVar16 & 1) == 0) {
              _swift_bridgeObjectRetain(pcVar11);
            }
            else {
              FUN_100872ba8();
            }
            SVar31.bridgeObject = pcVar14;
            SVar31.str = pcVar15;
            SVar36.bridgeObject = puVar19;
            SVar36.str = pcVar18;
            Swift::String::append(SVar31,SVar36);
            _swift_bridgeObjectRelease(pcVar14);
            puVar10 = puStack_98;
            SVar9.bridgeObject = puStack_98;
            SVar9.str = local_a0;
            SVar37.bridgeObject = puVar19;
            SVar37.str = pcVar18;
            Swift::String::append(SVar9,SVar37);
            _swift_bridgeObjectRelease(puVar10);
            SVar32.bridgeObject = (void *)0x8000000100db2670;
            SVar32.str = (char *)0xd00000000000001e;
            SVar38.bridgeObject = puVar19;
            SVar38.str = pcVar18;
            Swift::String::append(SVar32,SVar38);
            puVar10 = local_108;
            unaff_x21 = local_110;
            DVar13 = Swift::DecodingError::typeMetadataAccessor();
            _DVar39 = (__int8)
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
            ;
            _swift_allocError(DVar13.value,
                              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                              ,0,0);
            Swift::DecodingError::_dataCorruptedError((char)puVar10,_DVar39,auStack_90,unaff_x21);
            _swift_bridgeObjectRelease(puVar10);
            _swift_willThrow();
            FUN_100864364(pcVar23,local_228,pcVar22,puVar24,pvVar27,pcVar25,local_188);
            FUN_100864364(local_1c8,local_1c0,local_178,local_170,local_168,local_160,local_158);
            FUN_100864364(local_128,local_1b8,local_120,local_148,local_140,local_138,pcStack_130);
            FUN_100864364(local_118,local_1a8,local_58,local_1a0,local_198,local_1b0,local_190);
            FUN_100864364(local_208,local_1d0,local_220,local_218,local_210,local_150,local_1d8);
LAB_10086dc08:
            _swift_bridgeObjectRelease(pcVar11);
            _swift_bridgeObjectRelease(puVar20);
            _swift_bridgeObjectRelease(puVar5);
            FUN_100004594(auStack_90);
            goto LAB_10086dc28;
          }
          _swift_bridgeObjectRelease(pcVar11);
          _swift_bridgeObjectRelease(puVar20);
          _swift_bridgeObjectRelease(puVar5);
          FUN_100004640(auStack_90,local_78);
          bVar12 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
          if (bVar12) goto LAB_10086d1fc;
        }
      }
      if (local_1d0 != (undefined *)0x0) {
        local_110 = local_208;
        local_108 = local_1d0;
        local_100 = local_220;
        puStack_f8 = local_218;
        local_f0 = local_210;
        local_e0 = local_1d8;
        uStack_d0 = 0;
        local_d8 = 0;
        uStack_c0 = 0;
        local_c8 = 0;
        uStack_b0 = 0;
        local_b8 = 0;
        local_a8 = 0;
        local_e8 = local_150;
        FUN_100867d14(local_208,local_1d0,local_220,local_218,local_210,local_150,local_1d8);
        FUN_10086e190(&local_110);
        unaff_x21 = "e\" pseudo header fields";
        DVar13 = Swift::DecodingError::typeMetadataAccessor();
        _DVar39 = (__int8)
                  PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
        ;
        _swift_allocError(DVar13.value,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        Swift::DecodingError::_dataCorruptedError(0x50,_DVar39,auStack_90,0xd000000000000027);
        _swift_willThrow();
        FUN_100864364(pcVar23,local_228,pcVar22,puVar24,pvVar27,pcVar25,local_188);
        FUN_100864364(local_1c8,local_1c0,local_178,local_170,local_168,local_160,local_158);
        FUN_100864364(local_128,local_1b8,local_120,local_148,local_140,local_138,pcStack_130);
        FUN_100864364(local_118,local_1a8,local_58,local_1a0,local_198,local_1b0,local_190);
LAB_10086dc00:
        FUN_100864364(local_208,local_1d0,local_220,local_218,local_210,local_150,local_1d8);
        goto LAB_10086dc08;
      }
      FUN_100864364(local_208,0,local_220,local_218,local_210,local_150,local_1d8);
      FUN_100004640(auStack_90,local_78);
      bVar12 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
      local_1d8 = pcVar11;
      local_150 = pcVar15;
      local_220 = pcVar14;
      local_218 = puVar20;
      local_210 = pvVar26;
      local_208 = pcVar16;
      local_1d0 = puVar5;
    } while (!bVar12);
LAB_10086d1fc:
    if (local_1d0 == (undefined *)0x0) goto LAB_10086cb0c;
    uVar1 = (ulong)local_150 & 0xffffffffffff;
    if (((ulong)local_1d8 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)local_1d8 >> 0x38 & 0xf;
    }
    _Var17.unknown = local_178;
    pcVar16 = local_188;
    pvVar26 = pvVar27;
    if ((uVar1 != 0) &&
       (pcVar14 = local_150, _Var17.unknown = local_1d8, FUN_10086b970(), ((ulong)pcVar14 & 1) == 0)
       ) {
      pcVar16 = (char *)0x0;
      FUN_10086c690();
      _swift_allocObject();
      pcVar16[0x88] = '\0';
      pcVar16[0x89] = '\0';
      pcVar16[0x8a] = '\0';
      pcVar16[0x8b] = '\0';
      pcVar16[0x8c] = '\0';
      pcVar16[0x8d] = '\0';
      pcVar16[0x8e] = '\0';
      pcVar16[0x8f] = '\0';
      pcVar16[0x80] = '\0';
      pcVar16[0x81] = '\0';
      pcVar16[0x82] = '\0';
      pcVar16[0x83] = '\0';
      pcVar16[0x84] = '\0';
      pcVar16[0x85] = '\0';
      pcVar16[0x86] = '\0';
      pcVar16[0x87] = '\0';
      pcVar16[0x98] = '\0';
      pcVar16[0x99] = '\0';
      pcVar16[0x9a] = '\0';
      pcVar16[0x9b] = '\0';
      pcVar16[0x9c] = '\0';
      pcVar16[0x9d] = '\0';
      pcVar16[0x9e] = '\0';
      pcVar16[0x9f] = '\0';
      pcVar16[0x90] = '\0';
      pcVar16[0x91] = '\0';
      pcVar16[0x92] = '\0';
      pcVar16[0x93] = '\0';
      pcVar16[0x94] = '\0';
      pcVar16[0x95] = '\0';
      pcVar16[0x96] = '\0';
      pcVar16[0x97] = '\0';
      pcVar16[0xa8] = '\0';
      pcVar16[0xa9] = '\0';
      pcVar16[0xaa] = '\0';
      pcVar16[0xab] = '\0';
      pcVar16[0xac] = '\0';
      pcVar16[0xad] = '\0';
      pcVar16[0xae] = '\0';
      pcVar16[0xaf] = '\0';
      pcVar16[0xa0] = '\0';
      pcVar16[0xa1] = '\0';
      pcVar16[0xa2] = '\0';
      pcVar16[0xa3] = '\0';
      pcVar16[0xa4] = '\0';
      pcVar16[0xa5] = '\0';
      pcVar16[0xa6] = '\0';
      pcVar16[0xa7] = '\0';
      pcVar16[0xb8] = '\0';
      pcVar16[0xb9] = '\0';
      pcVar16[0xba] = '\0';
      pcVar16[0xbb] = '\0';
      pcVar16[0xbc] = '\0';
      pcVar16[0xbd] = '\0';
      pcVar16[0xbe] = '\0';
      pcVar16[0xbf] = '\0';
      pcVar16[0xb0] = '\0';
      pcVar16[0xb1] = '\0';
      pcVar16[0xb2] = '\0';
      pcVar16[0xb3] = '\0';
      pcVar16[0xb4] = '\0';
      pcVar16[0xb5] = '\0';
      pcVar16[0xb6] = '\0';
      pcVar16[0xb7] = '\0';
      pcVar16[200] = '\0';
      pcVar16[0xc9] = '\0';
      pcVar16[0xca] = '\0';
      pcVar16[0xcb] = '\0';
      pcVar16[0xcc] = '\0';
      pcVar16[0xcd] = '\0';
      pcVar16[0xce] = '\0';
      pcVar16[0xcf] = '\0';
      pcVar16[0xc0] = '\0';
      pcVar16[0xc1] = '\0';
      pcVar16[0xc2] = '\0';
      pcVar16[0xc3] = '\0';
      pcVar16[0xc4] = '\0';
      pcVar16[0xc5] = '\0';
      pcVar16[0xc6] = '\0';
      pcVar16[199] = '\0';
      pcVar16[0xd8] = '\0';
      pcVar16[0xd9] = '\0';
      pcVar16[0xda] = '\0';
      pcVar16[0xdb] = '\0';
      pcVar16[0xdc] = '\0';
      pcVar16[0xdd] = '\0';
      pcVar16[0xde] = '\0';
      pcVar16[0xdf] = '\0';
      pcVar16[0xd0] = '\0';
      pcVar16[0xd1] = '\0';
      pcVar16[0xd2] = '\0';
      pcVar16[0xd3] = '\0';
      pcVar16[0xd4] = '\0';
      pcVar16[0xd5] = '\0';
      pcVar16[0xd6] = '\0';
      pcVar16[0xd7] = '\0';
      pcVar16[0xe8] = '\0';
      pcVar16[0xe9] = '\0';
      pcVar16[0xea] = '\0';
      pcVar16[0xeb] = '\0';
      pcVar16[0xec] = '\0';
      pcVar16[0xed] = '\0';
      pcVar16[0xee] = '\0';
      pcVar16[0xef] = '\0';
      pcVar16[0xe0] = '\0';
      pcVar16[0xe1] = '\0';
      pcVar16[0xe2] = '\0';
      pcVar16[0xe3] = '\0';
      pcVar16[0xe4] = '\0';
      pcVar16[0xe5] = '\0';
      pcVar16[0xe6] = '\0';
      pcVar16[0xe7] = '\0';
      pcVar16[0xf8] = '\0';
      pcVar16[0xf9] = '\0';
      pcVar16[0xfa] = '\0';
      pcVar16[0xfb] = '\0';
      pcVar16[0xfc] = '\0';
      pcVar16[0xfd] = '\0';
      pcVar16[0xfe] = '\0';
      pcVar16[0xff] = '\0';
      pcVar16[0xf0] = '\0';
      pcVar16[0xf1] = '\0';
      pcVar16[0xf2] = '\0';
      pcVar16[0xf3] = '\0';
      pcVar16[0xf4] = '\0';
      pcVar16[0xf5] = '\0';
      pcVar16[0xf6] = '\0';
      pcVar16[0xf7] = '\0';
      pcVar16[0x108] = '\0';
      pcVar16[0x109] = '\0';
      pcVar16[0x10a] = '\0';
      pcVar16[0x10b] = '\0';
      pcVar16[0x10c] = '\0';
      pcVar16[0x10d] = '\0';
      pcVar16[0x10e] = '\0';
      pcVar16[0x10f] = '\0';
      pcVar16[0x100] = '\0';
      pcVar16[0x101] = '\0';
      pcVar16[0x102] = '\0';
      pcVar16[0x103] = '\0';
      pcVar16[0x104] = '\0';
      pcVar16[0x105] = '\0';
      pcVar16[0x106] = '\0';
      pcVar16[0x107] = '\0';
      pcVar16[0x118] = '\0';
      pcVar16[0x119] = '\0';
      pcVar16[0x11a] = '\0';
      pcVar16[0x11b] = '\0';
      pcVar16[0x11c] = '\0';
      pcVar16[0x11d] = '\0';
      pcVar16[0x11e] = '\0';
      pcVar16[0x11f] = '\0';
      pcVar16[0x110] = '\0';
      pcVar16[0x111] = '\0';
      pcVar16[0x112] = '\0';
      pcVar16[0x113] = '\0';
      pcVar16[0x114] = '\0';
      pcVar16[0x115] = '\0';
      pcVar16[0x116] = '\0';
      pcVar16[0x117] = '\0';
      pcVar16[0x120] = '\0';
      pcVar16[0x121] = '\0';
      pcVar16[0x122] = '\0';
      pcVar16[0x123] = '\0';
      pcVar16[0x124] = '\0';
      pcVar16[0x125] = '\0';
      pcVar16[0x126] = '\0';
      pcVar16[0x127] = '\0';
      *(char **)(pcVar16 + 0x10) = local_208;
      *(undefined **)(pcVar16 + 0x18) = local_1d0;
      *(char **)(pcVar16 + 0x20) = local_220;
      *(undefined1 **)(pcVar16 + 0x28) = local_218;
      pcVar16[0x30] = (char)local_210;
      *(char **)(pcVar16 + 0x38) = local_150;
      *(char **)(pcVar16 + 0x40) = local_1d8;
      *(char **)(pcVar16 + 0x48) = local_118;
      *(undefined **)(pcVar16 + 0x50) = local_1a8;
      *(char **)(pcVar16 + 0x58) = local_58;
      *(undefined1 **)(pcVar16 + 0x60) = local_1a0;
      *(void **)(pcVar16 + 0x68) = local_198;
      *(char **)(pcVar16 + 0x70) = local_1b0;
      *(char **)(pcVar16 + 0x78) = local_190;
      FUN_100864364(0,0,0,0,0,0,0);
      uVar2 = *(undefined8 *)(pcVar16 + 0x80);
      uVar6 = *(undefined8 *)(pcVar16 + 0x88);
      uVar3 = *(undefined8 *)(pcVar16 + 0x90);
      uVar7 = *(undefined8 *)(pcVar16 + 0x98);
      uVar4 = *(undefined8 *)(pcVar16 + 0xa0);
      uVar8 = *(undefined8 *)(pcVar16 + 0xa8);
      uVar21 = *(undefined8 *)(pcVar16 + 0xb0);
      *(char **)(pcVar16 + 0x80) = local_128;
      *(undefined **)(pcVar16 + 0x88) = local_1b8;
      *(char **)(pcVar16 + 0x90) = local_120;
      *(undefined1 **)(pcVar16 + 0x98) = local_148;
      *(void **)(pcVar16 + 0xa0) = local_140;
      *(char **)(pcVar16 + 0xa8) = local_138;
      *(char **)(pcVar16 + 0xb0) = pcStack_130;
      FUN_100864364(uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar21);
      uVar2 = *(undefined8 *)(pcVar16 + 0xb8);
      uVar6 = *(undefined8 *)(pcVar16 + 0xc0);
      uVar3 = *(undefined8 *)(pcVar16 + 200);
      uVar7 = *(undefined8 *)(pcVar16 + 0xd0);
      uVar4 = *(undefined8 *)(pcVar16 + 0xd8);
      uVar8 = *(undefined8 *)(pcVar16 + 0xe0);
      uVar21 = *(undefined8 *)(pcVar16 + 0xe8);
      *(char **)(pcVar16 + 0xb8) = local_1c8;
      *(undefined **)(pcVar16 + 0xc0) = local_1c0;
      *(char **)(pcVar16 + 200) = local_178;
      *(undefined1 **)(pcVar16 + 0xd0) = local_170;
      *(void **)(pcVar16 + 0xd8) = local_168;
      *(char **)(pcVar16 + 0xe0) = local_160;
      *(char **)(pcVar16 + 0xe8) = local_158;
      FUN_100864364(uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar21);
      uVar2 = *(undefined8 *)(pcVar16 + 0xf0);
      uVar6 = *(undefined8 *)(pcVar16 + 0xf8);
      uVar3 = *(undefined8 *)(pcVar16 + 0x100);
      uVar7 = *(undefined8 *)(pcVar16 + 0x108);
      uVar4 = *(undefined8 *)(pcVar16 + 0x110);
      uVar8 = *(undefined8 *)(pcVar16 + 0x118);
      uVar21 = *(undefined8 *)(pcVar16 + 0x120);
      *(char **)(pcVar16 + 0xf0) = pcVar23;
      *(undefined **)(pcVar16 + 0xf8) = local_228;
      *(char **)(pcVar16 + 0x100) = pcVar22;
      *(undefined1 **)(pcVar16 + 0x108) = puVar24;
      *(void **)(pcVar16 + 0x110) = pvVar27;
      *(char **)(pcVar16 + 0x118) = pcVar25;
      *(char **)(pcVar16 + 0x120) = local_188;
      FUN_100864364(uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar21);
      FUN_100004594(auStack_90);
      FUN_100004594(param_1);
      return pcVar16;
    }
    local_110 = (char *)0x0;
    local_108 = (undefined *)0xe000000000000000;
    _swift_bridgeObjectRetain(local_1d0);
    _swift_bridgeObjectRetain(local_218);
    _swift_bridgeObjectRetain(local_1d8);
    Swift::_StringGuts::grow(0x1a,_Var17);
    _swift_bridgeObjectRelease(local_108);
    local_110 = (char *)0x22;
    local_108 = (undefined *)0xe100000000000000;
    _swift_bridgeObjectRetain(local_1d8);
    SVar29.bridgeObject = local_1d8;
    SVar29.str = local_150;
    SVar34.bridgeObject = pvVar26;
    SVar34.str = pcVar16;
    Swift::String::append(SVar29,SVar34);
    pcVar16 = local_220;
    puVar20 = local_218;
    FUN_100864364(local_208,local_1d0,local_220,local_218,local_210,local_150,local_1d8);
    _swift_bridgeObjectRelease(local_1d8);
    SVar30.bridgeObject = (void *)0x8000000100db27b0;
    SVar30.str = (char *)0xd000000000000017;
    SVar35.bridgeObject = puVar20;
    SVar35.str = pcVar16;
    Swift::String::append(SVar30,SVar35);
    puVar5 = local_108;
    unaff_x21 = local_110;
    DVar13 = Swift::DecodingError::typeMetadataAccessor();
    _DVar39 = (__int8)
              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(DVar13.value,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    Swift::DecodingError::_dataCorruptedError((char)puVar5,_DVar39,auStack_90,unaff_x21);
    _swift_bridgeObjectRelease(puVar5);
    _swift_willThrow();
    FUN_100864364(pcVar23,local_228,pcVar22,puVar24,pvVar27,pcVar25,local_188);
    FUN_100864364(local_1c8,local_1c0,local_178,local_170,local_168,local_160,local_158);
    FUN_100864364(local_128,local_1b8,local_120,local_148,local_140,local_138,pcStack_130);
    FUN_100864364(local_118,local_1a8,local_58,local_1a0,local_198,local_1b0,local_190);
    local_118 = local_208;
    local_1a8 = local_1d0;
    local_58 = local_220;
    local_1a0 = local_218;
    local_198 = local_210;
    local_1b0 = local_150;
    local_190 = local_1d8;
  }
  FUN_100864364(local_118,local_1a8,local_58,local_1a0,local_198,local_1b0,local_190);
  FUN_100004594(auStack_90);
LAB_10086dc28:
  FUN_100004594(param_1);
  return unaff_x21;
}



/* Address: 0x10086dc58 | FUN_10086dc58 */

void FUN_10086dc58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe87f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e8dc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e8dc,&DAT_100f07af8);
  DAT_100fe87f8 = pTVar1;
  return;
}



/* Address: 0x10086dc98 | FUN_10086dc98 */

void FUN_10086dc98(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8800 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e690;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e690,&DAT_100f07a60);
  DAT_100fe8800 = pTVar1;
  return;
}



/* Address: 0x10086dcd8 | FUN_10086dcd8 */

void FUN_10086dcd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8808 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e140;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e140,&DAT_100f072e0);
  DAT_100fe8808 = pTVar1;
  return;
}



/* Address: 0x10086dd18 | FUN_10086dd18 */

/* WARNING: Removing unreachable block (ram,0x00010086de7c) */
/* WARNING: Removing unreachable block (ram,0x00010086ddec) */

undefined1  [16] FUN_10086dd18(long param_1)

{
  undefined *puVar1;
  long lVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_60 [7];
  undefined1 local_59;
  long local_58;
  
  puVar1 = &DAT_100fe8968;
  FUN_1000f7830(&DAT_100fe8968,&DAT_100c7e938);
  lVar7 = *(long *)(puVar1 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  lVar6 = *(long *)(param_1 + 0x18);
  lVar2 = param_1;
  FUN_100004640(param_1,lVar6);
  FUN_10086dc58();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_59 = 0;
    FUN_10086e110();
    puVar4 = &DAT_100f07a60;
    Swift::KeyedDecodingContainer::_decode
              (&local_58,&DAT_100f07a60,&local_59,puVar1,&DAT_100f07a60,KVar3.unknown);
    lVar6 = local_58;
    local_59 = 1;
    FUN_10086e150();
    Swift::KeyedDecodingContainer::_decode
              (&local_58,&DAT_100f072e0,&local_59,puVar1,&DAT_100f072e0,puVar4);
    (**(code **)(lVar7 + 8))(auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    local_58 = lVar2;
  }
  auVar8._8_8_ = local_58;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Address: 0x10086dea0 | thunk_FUN_10086dea4 */

void thunk_FUN_10086dea4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8810 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e520;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e520,&DAT_100f07a38);
  DAT_100fe8810 = pTVar1;
  return;
}



/* Address: 0x10086dea4 | FUN_10086dea4 */

void FUN_10086dea4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8810 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e520;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e520,&DAT_100f07a38);
  DAT_100fe8810 = pTVar1;
  return;
}



/* Address: 0x10086dee4 | thunk_FUN_10086dee8 */

void thunk_FUN_10086dee8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8818 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e548;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e548,&DAT_100f07a38);
  DAT_100fe8818 = pTVar1;
  return;
}



/* Address: 0x10086dee8 | FUN_10086dee8 */

void FUN_10086dee8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8818 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e548;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e548,&DAT_100f07a38);
  DAT_100fe8818 = pTVar1;
  return;
}



/* Address: 0x10086df28 | thunk_FUN_10086df2c */

void thunk_FUN_10086df2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8820 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e5b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e5b0,&DAT_100f07a60);
  DAT_100fe8820 = pTVar1;
  return;
}



/* Address: 0x10086df2c | FUN_10086df2c */

void FUN_10086df2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8820 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e5b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e5b0,&DAT_100f07a60);
  DAT_100fe8820 = pTVar1;
  return;
}



/* Address: 0x10086df6c | thunk_FUN_10086df70 */

void thunk_FUN_10086df70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8828 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e618;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e618,&DAT_100f079b8);
  DAT_100fe8828 = pTVar1;
  return;
}



/* Address: 0x10086df70 | FUN_10086df70 */

void FUN_10086df70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8828 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e618;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e618,&DAT_100f079b8);
  DAT_100fe8828 = pTVar1;
  return;
}



/* Address: 0x10086dfb0 | FUN_10086dfb0 */

void FUN_10086dfb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x10086dfbc | FUN_10086dfbc */

undefined1  [16] FUN_10086dfbc(void)

{
  return ZEXT816(0x100f079b8);
}



/* Address: 0x10086dfcc | FUN_10086dfcc */

undefined1  [16] FUN_10086dfcc(void)

{
  return ZEXT816(0x100f07a38);
}



/* Address: 0x10086dfdc | FUN_10086dfdc */

undefined1  [16] FUN_10086dfdc(void)

{
  return ZEXT816(0x100f07a60);
}



/* Address: 0x10086dfec | FUN_10086dfec */

undefined1  [16] FUN_10086dfec(void)

{
  return ZEXT816(0x100f07af8);
}



/* Address: 0x10086dffc | thunk_FUN_10086e000 */

void thunk_FUN_10086e000(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe88f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e84c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e84c,&DAT_100f07af8);
  DAT_100fe88f0 = pTVar1;
  return;
}



/* Address: 0x10086e000 | FUN_10086e000 */

void FUN_10086e000(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe88f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e84c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e84c,&DAT_100f07af8);
  DAT_100fe88f0 = pTVar1;
  return;
}



/* Address: 0x10086e040 | thunk_FUN_10086e044 */

void thunk_FUN_10086e044(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fe88f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10086c690(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c7e874;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e874,uVar1);
  DAT_100fe88f8 = pTVar2;
  return;
}



/* Address: 0x10086e044 | FUN_10086e044 */

void FUN_10086e044(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fe88f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10086c690(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c7e874;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e874,uVar1);
  DAT_100fe88f8 = pTVar2;
  return;
}



/* Address: 0x10086e088 | thunk_FUN_10086e08c */

void thunk_FUN_10086e08c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8900 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e7ac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e7ac,&DAT_100f07af8);
  DAT_100fe8900 = pTVar1;
  return;
}



/* Address: 0x10086e08c | FUN_10086e08c */

void FUN_10086e08c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8900 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e7ac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e7ac,&DAT_100f07af8);
  DAT_100fe8900 = pTVar1;
  return;
}



/* Address: 0x10086e0cc | thunk_FUN_10086e0d0 */

void thunk_FUN_10086e0d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8908 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e784;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e784,&DAT_100f07af8);
  DAT_100fe8908 = pTVar1;
  return;
}



/* Address: 0x10086e0d0 | FUN_10086e0d0 */

void FUN_10086e0d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8908 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e784;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e784,&DAT_100f07af8);
  DAT_100fe8908 = pTVar1;
  return;
}



/* Address: 0x10086e110 | FUN_10086e110 */

void FUN_10086e110(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8970 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e668;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e668,&DAT_100f07a60);
  DAT_100fe8970 = pTVar1;
  return;
}



/* Address: 0x10086e150 | FUN_10086e150 */

void FUN_10086e150(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8978 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e118;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e118,&DAT_100f072e0);
  DAT_100fe8978 = pTVar1;
  return;
}



/* Address: 0x10086e190 | FUN_10086e190 */

undefined8 FUN_10086e190(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe8980;
  FUN_1000f7830(&DAT_100fe8980,&DAT_100c7e940);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10086e1d8 | thunk_FUN_10086a46c */

void thunk_FUN_10086a46c(undefined8 *param_1,undefined8 *param_2)

{
  FUN_10086bb70(*param_1,*param_2);
  return;
}



/* Address: 0x10086e1dc | thunk_FUN_10086ae28 */

void thunk_FUN_10086ae28(void)

{
  FUN_10086ae28();
  return;
}



/* Address: 0x10086e1e0 | thunk_FUN_1008690c0 */

void thunk_FUN_1008690c0(void)

{
  FUN_10086c6b0();
  return;
}



/* Address: 0x10086e1e4 | thunk_FUN_10086a448 */

void thunk_FUN_10086a448(void)

{
  FUN_10086a448();
  return;
}



/* Address: 0x10086e1e8 | thunk_FUN_10086ade8 */

void thunk_FUN_10086ade8(void)

{
  FUN_10086ade8();
  return;
}



/* Address: 0x10086e1ec | FUN_10086e1ec */

ulong FUN_10086e1ec(ulong param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong local_68;
  undefined8 uStack_60;
  code *local_58;
  undefined8 uStack_50;
  
  if (param_1 < 1000) {
    uVar2 = param_2;
    FUN_100870388(param_2,param_3);
    if ((uVar2 & 1) != 0) {
      local_58 = FUN_10086e6f8;
      uStack_50 = 0;
      puVar3 = &DAT_100fe8798;
      local_68 = param_2;
      uStack_60 = param_3;
      FUN_1000f7830(&DAT_100fe8798,&DAT_100c7e440);
      puVar4 = &DAT_100fe87a0;
      FUN_100134584(&DAT_100fe87a0,&DAT_100fe8798,&DAT_100c7e440,
                    PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0
                   );
      Swift::String::UnicodeScalarView::_append(&local_68,puVar3,puVar4);
      _swift_bridgeObjectRelease(param_3);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10086e2c8);
  (*pcVar1)();
}



/* Address: 0x10086e2c8 | FUN_10086e2c8 */

void FUN_10086e2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  FUN_10086e434();
  lVar1 = 0;
  FUN_10087053c();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0x7375746174733a;
  *(undefined1 **)(lVar1 + 0x18) = &DAT_e700000000000000;
  *(undefined8 *)(lVar1 + 0x20) = 0x7375746174733a;
  *(undefined1 **)(lVar1 + 0x28) = &DAT_e700000000000000;
  *(undefined1 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(undefined8 *)(lVar1 + 0x48) = param_2;
  *(undefined8 *)(lVar1 + 0x50) = param_3;
  return;
}



/* Address: 0x10086e348 | FUN_10086e348 */

void FUN_10086e348(ulong param_1)

{
  code *pcVar1;
  
  if (param_1 < 1000) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10086e360);
  (*pcVar1)();
}



/* Address: 0x10086e360 | FUN_10086e360 */

undefined4 FUN_10086e360(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 5;
  if (99 < param_1 - 500U) {
    uVar2 = 0;
  }
  uVar1 = 4;
  if (99 < param_1 - 400U) {
    uVar1 = uVar2;
  }
  uVar2 = 3;
  if (99 < param_1 - 300U) {
    uVar2 = uVar1;
  }
  uVar1 = 2;
  if (99 < param_1 - 200U) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if (99 < param_1 - 100U) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Address: 0x10086e3b4 | FUN_10086e3b4 */

bool FUN_10086e3b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  return param_1 == param_4;
}



/* Address: 0x10086e3c0 | FUN_10086e3c0 */

String FUN_10086e3c0(undefined8 param_1,char *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  pcVar1 = param_3;
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x20;
  SVar5.bridgeObject = param_4;
  SVar5.str = pcVar1;
  Swift::String::append(SVar3,SVar5);
  SVar4.bridgeObject = param_3;
  SVar4.str = param_2;
  SVar6.bridgeObject = param_4;
  SVar6.str = pcVar1;
  Swift::String::append(SVar4,SVar6);
  return SVar2;
}


