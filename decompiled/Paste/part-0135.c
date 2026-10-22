/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10019b85c | FUN_10019b85c */

undefined1  [16] FUN_10019b85c(void)

{
  return ZEXT816(0x100004520);
}



/* Address: 0x10019b86c | FUN_10019b86c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019b86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  NSString *pNVar1;
  NSString *pNVar2;
  
  self = 0;
  FUN_100bad754();
  FUN_100bab914();
  if (self == 0) {
    FUN_100bac1bc(param_3,param_4,param_1,param_2,1);
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::startChildWithOperation_description_(self,pNVar1,pNVar2);
    _swift_unknownObjectRelease(self);
  }
  return;
}



/* Address: 0x10019b93c | FUN_10019b93c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10019b93c(undefined8 param_1)

{
  FUN_100bad754(0);
  FUN_100bac57c(param_1);
  return 0;
}



/* Address: 0x10019b96c | FUN_10019b96c */

void FUN_10019b96c(ID param_1)

{
  objc_stub::isFinished(param_1);
  return;
}



/* Address: 0x10019b980 | FUN_10019b980 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10019b980(ID param_1)

{
  String SVar1;
  
  objc_stub::operation(param_1);
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar1;
}



/* Address: 0x10019b9cc | FUN_10019b9cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10019b9cc(ID param_1)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = objc_stub::spanDescription(param_1);
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x10019ba28 | FUN_10019ba28 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019ba28(long param_1,ID param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  ID IVar7;
  NSString *pNVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined1 auStack_f0 [8];
  ID local_e8;
  long lStack_e0;
  undefined1 *local_d8;
  undefined1 auStack_d0 [24];
  long local_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar5 = auStack_f0;
  IVar7 = objc_stub::isFinished(param_2);
  if ((IVar7 & 1) == 0) {
    puVar15 = (ulong *)(param_1 + 0x40);
    uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar16 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar16 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar16 = uVar16 & *puVar15;
    _swift_bridgeObjectRetain(param_1);
    lVar12 = 0;
    lStack_e0 = param_1;
    local_e8 = param_2;
    while( true ) {
      while (uVar16 == 0) {
        bVar6 = SCARRY8(lVar12,1);
        lVar12 = lVar12 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10019bc2c);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_10019bc00;
        uVar16 = puVar15[lVar12];
      }
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar12 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      local_b0 = *puVar1;
      lVar2 = puVar1[1];
      lStack_a8 = lVar2;
      FUN_10019bc2c(*(long *)(param_1 + 0x38) + uVar9 * 0x20,&local_a0);
      lVar3 = lStack_a8;
      lStack_78 = lStack_98;
      local_80 = local_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      _swift_bridgeObjectRetain(lVar2);
      if (lVar3 == 0) break;
      lStack_a8 = lStack_78;
      local_b0 = local_80;
      lStack_98 = lStack_68;
      local_a0 = uStack_70;
      FUN_10019bc2c(&local_b0,auStack_d0);
      lVar2 = local_b8;
      if (local_b8 == 0) {
        lVar13 = 0;
      }
      else {
        FUN_100004640(auStack_d0,local_b8);
        lVar11 = *(long *)(lVar2 + -8);
        local_d8 = puVar5;
        (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
        lVar14 = (long)puVar5 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar11 + 0x10))(lVar14);
        lVar13 = lVar14;
        Swift::__bridgeAnythingToObjectiveC(lVar14,lVar2);
        param_1 = lStack_e0;
        param_2 = local_e8;
        (**(code **)(lVar11 + 8))(lVar14,lVar2);
        puVar5 = local_d8;
        FUN_100004594(auStack_d0);
      }
      uVar16 = uVar16 - 1 & uVar16;
      pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar3);
      objc_stub::setDataValue_forKey_(param_2,lVar13,pNVar8);
      _swift_unknownObjectRelease(lVar13);
      FUN_10019bc7c(&local_b0);
    }
LAB_10019bc00:
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x10019bc2c | FUN_10019bc2c */

undefined8 FUN_10019bc2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb3e00;
  FUN_1000037f0(&DAT_100fb3e00,&DAT_100c31d90);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10019bc7c | FUN_10019bc7c */

undefined8 FUN_10019bc7c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb3e00;
  FUN_1000037f0(&DAT_100fb3e00,&DAT_100c31d90);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10019bcc4 | FUN_10019bcc4 */

void FUN_10019bcc4(undefined8 param_1,ID param_2,code *param_3)

{
  objc_stub::finishWithStatus_(param_2,param_1);
  (*param_3)();
  return;
}



/* Address: 0x10019bcf4 | FUN_10019bcf4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10019bcf4(void)

{
  NSString *pNVar1;
  NSString *pNVar2;
  ID IVar3;
  ID in_x4;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::startChildWithOperation_description_(in_x4,pNVar1,pNVar2);
  return IVar3;
}



/* Address: 0x10019bd74 | FUN_10019bd74 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10019bd74(ID param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  bool bVar1;
  NSObject *pNVar2;
  NSObject *pNVar3;
  
  FUN_10019bdf8(0);
  pNVar2 = (NSObject *)objc_stub::spanId(param_1);
  pNVar3 = (NSObject *)objc_stub::spanId(param_4);
  bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar2,pNVar3);
  return bVar1;
}



/* Address: 0x10019bdf8 | FUN_10019bdf8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10019bdf8(void)

{
  undefined *puVar1;
  
  if (DAT_100fb3e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSObject;
  _swift_getObjCClassMetadata();
  DAT_100fb3e08 = puVar1;
  return;
}



/* Address: 0x10019be3c | FUN_10019be3c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10019be3c(ID *param_1,ID *param_2)

{
  bool bVar1;
  NSObject *pNVar2;
  NSObject *pNVar3;
  ID self;
  ID self_00;
  
  self = *param_1;
  self_00 = *param_2;
  FUN_10019bdf8(0);
  pNVar2 = (NSObject *)objc_stub::spanId(self);
  pNVar3 = (NSObject *)objc_stub::spanId(self_00);
  bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar2,pNVar3);
  return bVar1;
}



/* Address: 0x10019bec0 | thunk_FUN_10019beec */

void thunk_FUN_10019beec(void)

{
  FUN_10019beec();
  return;
}



/* Address: 0x10019bec4 | FUN_10019bec4 */

void FUN_10019bec4(undefined8 *param_1)

{
  _swift_unknownObjectRelease(*param_1);
  _swift_release(param_1[2]);
  return;
}



/* Address: 0x10019beec | FUN_10019beec */

undefined8 * FUN_10019beec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  _swift_unknownObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x10019bf2c | FUN_10019bf2c */

undefined8 * FUN_10019bf2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10019bf8c | FUN_10019bf8c */

void FUN_10019bf8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10019bfa0 | FUN_10019bfa0 */

undefined8 * FUN_10019bfa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRelease(*param_1);
  uVar2 = param_2[2];
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10019bfe4 | FUN_10019bfe4 */

undefined1  [16] FUN_10019bfe4(void)

{
  return ZEXT816(0x100ebd4f8);
}



/* Address: 0x10019bff4 | thunk_FUN_10019beec */

void thunk_FUN_10019beec(void)

{
  thunk_FUN_10019beec();
  return;
}



/* Address: 0x10019bff8 | thunk_FUN_10019cca4 */

void thunk_FUN_10019cca4(void)

{
  FUN_10019cca4();
  return;
}



/* Address: 0x10019bffc | FUN_10019bffc */

undefined1  [16] FUN_10019bffc(byte param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0x676e696e726177;
  if (param_1 != 2) {
    uVar1 = 0x726f727265;
  }
  puVar2 = &DAT_e700000000000000;
  if (param_1 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x6775626564;
  if (param_1 != 0) {
    uVar3 = 0x6f666e69;
  }
  puVar4 = &DAT_e500000000000000;
  if (param_1 != 0) {
    puVar4 = &DAT_e400000000000000;
  }
  if (param_1 < 2) {
    puVar2 = puVar4;
    uVar1 = uVar3;
  }
  auVar5._8_8_ = puVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Address: 0x10019c068 | FUN_10019c068 */

void FUN_10019c068(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x676e696e726177;
  if (bVar4 != 2) {
    pcVar1 = (char *)0x726f727265;
  }
  HVar5.unknown = &DAT_e700000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x6775626564;
  if (bVar4 != 0) {
    pcVar2 = (char *)0x6f666e69;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar4 != 0) {
    puVar3 = &DAT_e400000000000000;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar3;
    pcVar1 = pcVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10019c118 | FUN_10019c118 */

void FUN_10019c118(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar5 = *unaff_x20;
  pcVar1 = (char *)0x676e696e726177;
  if (bVar5 != 2) {
    pcVar1 = (char *)0x726f727265;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar5 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x6775626564;
  if (bVar5 != 0) {
    pcVar3 = (char *)0x6f666e69;
  }
  puVar4 = &DAT_e500000000000000;
  if (bVar5 != 0) {
    puVar4 = &DAT_e400000000000000;
  }
  if (bVar5 < 2) {
    puVar2 = puVar4;
    pcVar1 = pcVar3;
  }
  SVar6.bridgeObject = puVar2;
  SVar6.str = pcVar1;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10019c1a4 | FUN_10019c1a4 */

void FUN_10019c1a4(__int64 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x676e696e726177;
  if (bVar4 != 2) {
    pcVar1 = (char *)0x726f727265;
  }
  HVar5.unknown = &DAT_e700000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x6775626564;
  if (bVar4 != 0) {
    pcVar2 = (char *)0x6f666e69;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar4 != 0) {
    puVar3 = &DAT_e400000000000000;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar3;
    pcVar1 = pcVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10019c250 | FUN_10019c250 */

void FUN_10019c250(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10019cca4(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10019c27c | FUN_10019c27c */

void FUN_10019c27c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x676e696e726177;
  if (bVar5 != 2) {
    uVar1 = 0x726f727265;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar5 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x6775626564;
  if (bVar5 != 0) {
    uVar3 = 0x6f666e69;
  }
  puVar4 = &DAT_e500000000000000;
  if (bVar5 != 0) {
    puVar4 = &DAT_e400000000000000;
  }
  if (bVar5 < 2) {
    puVar2 = puVar4;
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x10019c2ec | FUN_10019c2ec */

void FUN_10019c2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10019cd08(PTR___swiftEmptyArrayStorage_100eae0d8);
  FUN_10019ce18(puVar2);
  (**(code **)(param_5 + 0x38))(param_1,param_2,param_3,puVar1,puVar2,param_4,param_5);
  _swift_bridgeObjectRelease(puVar1);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10019c380 | FUN_10019c380 */

void FUN_10019c380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10019ce18(PTR___swiftEmptyArrayStorage_100eae0d8);
  (**(code **)(param_6 + 0x38))(param_1,param_2,param_3,param_4,puVar1,param_5,param_6);
  _swift_bridgeObjectRelease(puVar1);
  return;
}



/* Address: 0x10019c400 | FUN_10019c400 */

void FUN_10019c400(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *self;
  undefined8 uVar2;
  
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_100b8d5dc(0xd00000000000005f,0x8000000100d979d0);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    self = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    objc_stub::initWithDouble_((ID)self,uVar2);
    FUN_100b909b4();
    FUN_100b90280(0.0 < *(double *)(param_2 + 0x28));
    FUN_100b8e2c0(1);
    FUN_100b91d84(0x4008000000000000);
    FUN_100b8dfa0(*(undefined1 *)(param_2 + 0x10));
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    _swift_bridgeObjectRetain(uVar1);
    FUN_100b8def0(uVar2,uVar1);
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x10019c4cc | FUN_10019c4cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019c4cc(ID param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  NSString *pNVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar6 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(param_2 + 0x40);
  uVar6 = uVar6 + 0x3f >> 6;
  _swift_bridgeObjectRetain(param_2);
  lVar4 = 0;
  lVar7 = lVar4;
  if (uVar8 == 0) goto LAB_10019c544;
LAB_10019c570:
  do {
    uVar5 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 - 1 & uVar8;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar7 << 6;
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar5 * 0x10);
    local_c0 = *puVar2;
    lVar4 = puVar2[1];
    lStack_b8 = lVar4;
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + uVar5 * 0x20,&local_b0);
    _swift_bridgeObjectRetain(lVar4);
    lVar4 = lVar7;
    while( true ) {
      lVar7 = lStack_b8;
      lStack_88 = lStack_b8;
      local_90 = local_c0;
      uStack_78 = uStack_a8;
      uStack_80 = local_b0;
      uStack_68 = uStack_98;
      local_70 = local_a0;
      if (lStack_b8 == 0) {
        _swift_release(param_2);
        return;
      }
      FUN_100011080(&uStack_80,&local_c0);
      puVar2 = &local_c0;
      FUN_100004640(&local_c0,uStack_a8);
      Swift::__bridgeAnythingToObjectiveC();
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar7);
      objc_stub::setExtraValue_forKey_(param_1,puVar2,pNVar3);
      _swift_unknownObjectRelease(puVar2);
      FUN_100004594(&local_c0);
      lVar7 = lVar4;
      if (uVar8 != 0) break;
LAB_10019c544:
      uVar5 = uVar6;
      if ((long)uVar6 <= lVar4 + 1) {
        uVar5 = lVar4 + 1;
      }
      while( true ) {
        lVar7 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10019c680);
          (*pcVar1)();
        }
        if ((long)uVar6 <= lVar7) break;
        uVar8 = ((ulong *)(param_2 + 0x40))[lVar7];
        lVar4 = lVar4 + 1;
        if (uVar8 != 0) goto LAB_10019c570;
      }
      uVar8 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      lStack_b8 = 0;
      local_c0 = 0;
      lVar4 = uVar5 - 1;
    }
  } while( true );
}



/* Address: 0x10019c680 | FUN_10019c680 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019c680(ID param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  NSString *pNVar5;
  NSString *pNVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  objc_stub::setLevel_(param_1,(param_2 & 0xff) + 1);
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_3 + 0x40);
  _swift_bridgeObjectRetain(param_3);
  lVar11 = 0;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = lVar11 << 10 | LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) << 4;
      uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 + 8);
      uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar8 + 8);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar2);
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar2);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar1);
      objc_stub::setTagValue_forKey_(param_1,pNVar5,pNVar6);
    }
    bVar4 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10019c950);
      (*pcVar3)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar11) break;
    uVar12 = ((ulong *)(param_3 + 0x40))[lVar11];
  }
  _swift_release(param_3);
  uVar10 = 1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_4 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_4 + 0x40);
  uVar10 = uVar10 + 0x3f >> 6;
  _swift_bridgeObjectRetain(param_4);
  lVar9 = 0;
  lVar11 = lVar9;
  if (uVar12 == 0) goto LAB_10019c810;
LAB_10019c83c:
  do {
    uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar12 - 1 & uVar12;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar11 << 6;
    puVar7 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar8 * 0x10);
    local_c0 = *puVar7;
    lVar9 = puVar7[1];
    lStack_b8 = lVar9;
    FUN_10000cbfc(*(long *)(param_4 + 0x38) + uVar8 * 0x20,&local_b0);
    _swift_bridgeObjectRetain(lVar9);
    lVar9 = lVar11;
    while( true ) {
      lVar11 = lStack_b8;
      lStack_88 = lStack_b8;
      local_90 = local_c0;
      uStack_78 = uStack_a8;
      uStack_80 = local_b0;
      uStack_68 = uStack_98;
      local_70 = local_a0;
      if (lStack_b8 == 0) {
        _swift_release(param_4);
        return;
      }
      FUN_100011080(&uStack_80,&local_c0);
      puVar7 = &local_c0;
      FUN_100004640(puVar7,uStack_a8);
      Swift::__bridgeAnythingToObjectiveC();
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar11);
      objc_stub::setExtraValue_forKey_(param_1,puVar7,pNVar5);
      _swift_unknownObjectRelease(puVar7);
      FUN_100004594(&local_c0);
      lVar11 = lVar9;
      if (uVar12 != 0) break;
LAB_10019c810:
      uVar8 = uVar10;
      if ((long)uVar10 <= lVar9 + 1) {
        uVar8 = lVar9 + 1;
      }
      while( true ) {
        lVar11 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10019c94c);
          (*pcVar3)();
        }
        if ((long)uVar10 <= lVar11) break;
        uVar12 = ((ulong *)(param_4 + 0x40))[lVar11];
        lVar9 = lVar9 + 1;
        if (uVar12 != 0) goto LAB_10019c83c;
      }
      uVar12 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      lStack_b8 = 0;
      local_c0 = 0;
      lVar9 = uVar8 - 1;
    }
  } while( true );
}



/* Address: 0x10019c950 | FUN_10019c950 */

void FUN_10019c950(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10019c974 | FUN_10019c974 */

bool FUN_10019c974(void)

{
  int iVar1;
  
  iVar1 = 0;
  FUN_100bad754(0);
  FUN_100bad2f4();
  return iVar1 == 2;
}



/* Address: 0x10019c9a4 | FUN_10019c9a4 */

void FUN_10019c9a4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  FUN_100bad754(0);
  puVar1 = &DAT_100ebd658;
  _swift_allocObject(&DAT_100ebd658,0x18,7);
  _swift_weakInit(puVar1 + 0x10,uVar2);
  _swift_retain(puVar1);
  FUN_100babe88(FUN_10019d030,puVar1);
  _swift_release_n(puVar1,2);
  return;
}



/* Address: 0x10019ca1c | FUN_10019ca1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10019ca1c(undefined8 param_1,long param_2)

{
  class_t *self;
  NSString *pNVar1;
  ID IVar2;
  
  IVar2 = 0;
  if (param_2 != 0) {
    self = &objc::class_t::SentryUser;
    _objc_allocWithZone();
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar2 = objc_stub::initWithUserId_((ID)self,pNVar1);
  }
  FUN_100bad754(0);
  FUN_100bad36c(IVar2);
  return 0;
}



/* Address: 0x10019ca98 | FUN_10019ca98 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10019ca98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_100bad754(0);
  puVar1 = &DAT_100ebd630;
  _swift_allocObject(&DAT_100ebd630,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  _swift_bridgeObjectRetain(param_2);
  FUN_100bac6c8(param_1,FUN_10019d004,puVar1);
  _swift_release(puVar1);
  return 0;
}



/* Address: 0x10019cb18 | FUN_10019cb18 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10019cb18(void)

{
  class_t *self;
  ID self_00;
  NSString *pNVar1;
  
  self = &objc::class_t::SentryBreadcrumb;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setLevel_(self_00,2);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setCategory_(self_00,pNVar1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setMessage_(self_00,pNVar1);
  FUN_100bad754(0);
  FUN_100ba6804(self_00);
  return 0;
}



/* Address: 0x10019cbcc | FUN_10019cbcc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10019cbcc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_100bad754(0);
  puVar1 = &DAT_100ebd608;
  _swift_allocObject(&DAT_100ebd608,0x28,7);
  puVar1[0x10] = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  FUN_100bacd30(param_1,param_2,FUN_10019cfd4,puVar1);
  _swift_release(puVar1);
  return 0;
}



/* Address: 0x10019cc78 | FUN_10019cc78 */

void FUN_10019cc78(void)

{
  FUN_100bad754(0);
  FUN_100bad524(0x4008000000000000);
  return;
}



/* Address: 0x10019cca4 | FUN_10019cca4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010019cce0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_10019cca4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fb3f68,&DAT_100c31f00);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Address: 0x10019cd08 | FUN_10019cd08 */

undefined * FUN_10019cd08(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb3ed8;
    FUN_1000037f0(&DAT_100fb3ed8,&DAT_100c31ef8);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10019ce14);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10019ce18);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x10019ce18 | FUN_10019ce18 */

undefined * FUN_10019ce18(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb3ec8;
    FUN_1000037f0(&DAT_100fb3ec8,&DAT_100c31ee8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_10019d038(param_1,&local_80);
      uVar3 = uStack_78;
      uVar2 = local_80;
      uVar6 = local_80;
      uVar7 = uStack_78;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10019cf20);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10019cf24);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x10019cf24 | thunk_FUN_10019cf28 */

void thunk_FUN_10019cf28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3e10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31de8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31de8,&DAT_100ebd5a0);
  DAT_100fb3e10 = pTVar1;
  return;
}



/* Address: 0x10019cf28 | FUN_10019cf28 */

void FUN_10019cf28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3e10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31de8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31de8,&DAT_100ebd5a0);
  DAT_100fb3e10 = pTVar1;
  return;
}



/* Address: 0x10019cf68 | FUN_10019cf68 */

void FUN_10019cf68(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10019cf74 | FUN_10019cf74 */

void FUN_10019cf74(void)

{
  return;
}



/* Address: 0x10019cf78 | FUN_10019cf78 */

undefined1  [16] FUN_10019cf78(void)

{
  return ZEXT816(0x100ebd5a0);
}



/* Address: 0x10019cf88 | FUN_10019cf88 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10019cf88(void)

{
  return ZEXT816(0x100fb3e58);
}



/* Address: 0x10019cfa8 | FUN_10019cfa8 */

void FUN_10019cfa8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10019cfd4 | FUN_10019cfd4 */

void FUN_10019cfd4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10019c680(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10019cfe0 | FUN_10019cfe0 */

void FUN_10019cfe0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10019d004 | FUN_10019d004 */

void FUN_10019d004(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10019c4cc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10019d00c | FUN_10019d00c */

void FUN_10019d00c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10019d030 | FUN_10019d030 */

void FUN_10019d030(void)

{
  FUN_10019c400();
  return;
}



/* Address: 0x10019d038 | FUN_10019d038 */

undefined8 FUN_10019d038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb3ed0;
  FUN_1000037f0(&DAT_100fb3ed0,&DAT_100c31ef0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10019d088 | FUN_10019d088 */

void FUN_10019d088(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100c31f10;
  _swift_getKeyPath();
  puVar2 = &DAT_100fb3f70;
  FUN_1000037f0(&DAT_100fb3f70,&DAT_100c31f40);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  param_1[3] = &DAT_100ebd880;
  param_1[4] = &PTR_PTR_100ebd898;
  *param_1 = puVar1;
  return;
}



/* Address: 0x10019d0fc | FUN_10019d0fc */

void FUN_10019d0fc(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb3f78,&DAT_100ebd750);
  return;
}



/* Address: 0x10019d110 | FUN_10019d110 */

void FUN_10019d110(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb3f80,&DAT_100ebd780);
  return;
}



/* Address: 0x10019d124 | FUN_10019d124 */

void FUN_10019d124(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31fc8,param_1);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::get_hashValue();
  return;
}



/* Address: 0x10019d160 | FUN_10019d160 */

void FUN_10019d160(Hasher param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31fc8);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(param_1);
  return;
}



/* Address: 0x10019d1a8 | FUN_10019d1a8 */

void FUN_10019d1a8(__int64 param_1,undefined8 param_2)

{
  Hasher into;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31fc8,param_2);
  into.unknown = auStack_68;
  (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(into);
  Swift::Hasher::_finalize(into);
  return;
}


