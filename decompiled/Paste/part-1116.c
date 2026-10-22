/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bae670 | FUN_100bae670 */

void FUN_100bae670(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryBinaryImageInfo::uuid;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bae69c | SentryBinaryImageInfo::vmAddress */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryBinaryImageInfo::vmAddress(ID param_1,SEL param_2)

{
  FUN_100bae6bc();
  return param_1;
}



/* Address: 0x100bae6bc | FUN_100bae6bc */

void FUN_100bae6bc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = SentryBinaryImageInfo::vmAddress;
  FUN_100b78ca0(unaff_x20 + SentryBinaryImageInfo::vmAddress,auStack_38);
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bae6ec | SentryBinaryImageInfo::setVmAddress: */

/* Function Stack Size: 0x18 bytes */

void SentryBinaryImageInfo::setVmAddress_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100bae710(param_3);
  return;
}



/* Address: 0x100bae710 | FUN_100bae710 */

void FUN_100bae710(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryBinaryImageInfo::vmAddress;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bae73c | FUN_100bae73c */

void FUN_100bae73c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryBinaryImageInfo::vmAddress;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bae768 | SentryBinaryImageInfo::address */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryBinaryImageInfo::address(ID param_1,SEL param_2)

{
  FUN_100bae788();
  return param_1;
}



/* Address: 0x100bae788 | FUN_100bae788 */

void FUN_100bae788(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = SentryBinaryImageInfo::address;
  FUN_100b78ca0(unaff_x20 + SentryBinaryImageInfo::address,auStack_38);
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bae7b8 | SentryBinaryImageInfo::setAddress: */

/* Function Stack Size: 0x18 bytes */

void SentryBinaryImageInfo::setAddress_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100bae7dc(param_3);
  return;
}



/* Address: 0x100bae7dc | FUN_100bae7dc */

void FUN_100bae7dc(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryBinaryImageInfo::address;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bae808 | FUN_100bae808 */

void FUN_100bae808(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryBinaryImageInfo::address;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bae834 | SentryBinaryImageInfo::size */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryBinaryImageInfo::size(ID param_1,SEL param_2)

{
  FUN_100bae854();
  return param_1;
}



/* Address: 0x100bae854 | FUN_100bae854 */

void FUN_100bae854(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = SentryBinaryImageInfo::size;
  FUN_100b78ca0(unaff_x20 + SentryBinaryImageInfo::size,auStack_38);
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bae884 | SentryBinaryImageInfo::setSize: */

/* Function Stack Size: 0x18 bytes */

void SentryBinaryImageInfo::setSize_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100bae8a8(param_3);
  return;
}



/* Address: 0x100bae8a8 | FUN_100bae8a8 */

void FUN_100bae8a8(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryBinaryImageInfo::size;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bae8d4 | FUN_100bae8d4 */

void FUN_100bae8d4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryBinaryImageInfo::size;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bae900 | FUN_100bae900 */

void FUN_100bae900(void)

{
  FUN_100bb01c0();
  _objc_allocWithZone();
  FUN_100bae95c();
  return;
}



/* Address: 0x100bae95c | FUN_100bae95c */

void FUN_100bae95c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 auStack_78 [24];
  
  FUN_100bb01c0();
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + SentryBinaryImageInfo::uuid);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + SentryBinaryImageInfo::name);
  *puVar2 = unaff_x26;
  puVar2[1] = unaff_x25;
  FUN_100b80d38(puVar1,auStack_78);
  *puVar1 = unaff_x24;
  puVar1[1] = unaff_x23;
  *(undefined8 *)(unaff_x20 + SentryBinaryImageInfo::vmAddress) = unaff_x22;
  *(undefined8 *)(unaff_x20 + SentryBinaryImageInfo::address) = unaff_x21;
  *(undefined8 *)(unaff_x20 + SentryBinaryImageInfo::size) = unaff_x19;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"init");
  return;
}



/* Address: 0x100baea10 | SentryBinaryImageInfo::initWithName:uuid:vmAddress:address:size: */

/* Function Stack Size: 0x38 bytes */

ID SentryBinaryImageInfo::initWithName_uuid_vmAddress_address_size_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,
             unsigned_long_long param_6,unsigned_long_long param_7)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  if (param_4 == 0) {
    SVar3 = (String)ZEXT816(0);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100bae95c(pcVar1,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject,param_5,param_6,param_7);
  return (ID)pcVar1;
}



/* Address: 0x100baeaa0 | FUN_100baeaa0 */

void FUN_100baeaa0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryBinaryImageInfo",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100baeacc);
  (*pcVar1)();
}



/* Address: 0x100baeacc | SentryBinaryImageInfo::init */

/* Function Stack Size: 0x10 bytes */

ID SentryBinaryImageInfo::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100baeaa0();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + name + 8));
  IVar1 = *(ID *)(param_1 + uuid + 8);
  _swift_bridgeObjectRelease();
  return IVar1;
}



/* Address: 0x100baead8 | SentryBinaryImageInfo::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void SentryBinaryImageInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + name + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + uuid + 8));
  return;
}



/* Address: 0x100baeb18 | SentryBinaryImageCache::cache */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBinaryImageCache::cache(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100baeb68();
  if (param_1 == 0) {
    pNVar1 = (NSArray *)0x0;
  }
  else {
    FUN_100baf3ec();
    pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  return (ID)pNVar1;
}



/* Address: 0x100baeb68 | FUN_100baeb68 */

void FUN_100baeb68(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = SentryBinaryImageCache::cache;
  FUN_100b78ca0(unaff_x20 + SentryBinaryImageCache::cache,auStack_38);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  FUN_100b6f9fc();
  return;
}



/* Address: 0x100baeb9c | SentryBinaryImageCache::setCache: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBinaryImageCache::setCache_(ID param_1,SEL param_2,ID param_3)

{
  if (param_3 != 0) {
    FUN_100baf3ec();
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100baebf0(param_3);
  return;
}



/* Address: 0x100baebf0 | FUN_100baebf0 */

void FUN_100baebf0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryBinaryImageCache::cache;
  FUN_100b78c6c();
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100b78c90();
  return;
}



/* Address: 0x100baec24 | FUN_100baec24 */

void FUN_100baec24(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10021b704();
  FUN_100bb01e4();
  FUN_100baec84(uVar1,param_1);
  FUN_100bb01e4();
  FUN_100bb01fc(uVar1);
  return;
}



/* Address: 0x100baec84 | FUN_100baec84 */

void FUN_100baec84(long param_1,byte param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = SentryBinaryImageCache::cache;
  _swift_beginAccess(param_1 + SentryBinaryImageCache::cache,auStack_48,1,0);
  if (*(long *)(param_1 + lVar1) == 0) {
    *(byte *)(param_1 + SentryBinaryImageCache::isDebug) = param_2 & 1;
    *(undefined **)(param_1 + lVar1) = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100b54a24(thunk_FUN_100baed64);
    FUN_100b54aa0(thunk_FUN_100baf164);
  }
  else {
    FUN_100b84dac(0);
    FUN_100b84df8(1,0xd00000000000003a,0x8000000100dce390,0xd000000000000063,0x8000000100dce0f0,0x26
                 );
  }
  return;
}



/* Address: 0x100baed64 | FUN_100baed64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100baed64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_100b84dac();
    FUN_100b84df8(3,0xd00000000000002b,0x8000000100dce3d0,0xd000000000000063,0x8000000100dce0f0,0x2d
                 );
  }
  else {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uVar6 = param_1[4];
    lVar5 = 0;
    FUN_100b78b14();
    FUN_100b75404();
    _swift_beginAccess(lVar5 + _TtC6Sentry25SentryDependencyContainer::binaryImageCache,auStack_68,0
                       ,0);
    FUN_100baee64(uVar4,uVar3,uVar1,uVar2,uVar6);
  }
  return;
}



/* Address: 0x100baee64 | FUN_100baee64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100baee64(UnsafePointer<__int8> param_1,undefined8 param_2,undefined8 param_3,
                  undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  Encoding EVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  Encoding encoding;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_getObjectType();
  EVar3 = Encoding::_typeMetadataAccessor();
  encoding.unknown =
       auStack_a0 + -(*(long *)(*(long *)(EVar3.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_1.unknown == (undefined *)0x0) {
    FUN_100b84dac(0);
    FUN_100bb020c("Sentry.SentryBinaryImageInfo");
  }
  else {
    Encoding::_get_utf8(EVar3);
    (extension_Foundation)::Swift::String::_init(param_1,encoding);
    if (encoding.unknown != (undefined *)0x0) {
      puVar4 = encoding.unknown;
      _swift_bridgeObjectRetain(encoding.unknown);
      FUN_100baf344(param_5);
      uVar7 = param_5;
      FUN_100baf3ec();
      _objc_allocWithZone();
      FUN_100bae95c(param_1.unknown,encoding.unknown,param_5,puVar4,param_2,param_3,param_4,uVar7);
      uVar8 = *(ulong *)(unaff_x20 + SentryBinaryImageCache::lock);
      FUN_10021b704();
      FUN_100bb5d90();
      lVar1 = SentryBinaryImageInfo::address;
      if ((uVar8 & 1) != 0) {
        FUN_100b78ca0(unaff_x20 + SentryBinaryImageInfo::address,auStack_80);
        uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
        puVar4 = &_OBJC_CLASS___NSNumber;
        _objc_allocWithZone();
        IVar5 = _objc_msgSend((ID)puVar4,"initWithUnsignedLongLong:",uVar7);
        lVar1 = SentryBinaryImageInfo::size;
        FUN_100b78ca0(unaff_x20 + SentryBinaryImageInfo::size,auStack_98);
        uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
        puVar4 = &_OBJC_CLASS___NSNumber;
        _objc_allocWithZone();
        IVar6 = _objc_msgSend((ID)puVar4,"initWithUnsignedLongLong:",uVar7);
        if (DAT_101042e48 != -1) {
          _swift_once(&DAT_101042e48,FUN_100bb4940);
        }
        uVar7 = DAT_101046d78;
        if (DAT_101042e18 != -1) {
          _swift_once(&DAT_101042e18,FUN_100bb473c);
        }
        uVar2 = DAT_101046d48;
        IVar5 = _objc_msgSend(IVar5,"unsignedLongLongValue");
        IVar6 = _objc_msgSend(IVar6,"unsignedLongLongValue");
        FUN_100baffb0(param_1.unknown,encoding.unknown,IVar5,IVar6,uVar7,uVar2,0,0);
      }
      _swift_bridgeObjectRelease(encoding.unknown);
      return;
    }
    FUN_100b84dac(0);
    FUN_100bb020c("aryImageCache.swift");
  }
  FUN_100b84df8();
  return;
}



/* Address: 0x100baf160 | thunk_FUN_100baed64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100baed64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_100b84dac();
    FUN_100b84df8(3,0xd00000000000002b,0x8000000100dce3d0,0xd000000000000063,0x8000000100dce0f0,0x2d
                 );
  }
  else {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uVar6 = param_1[4];
    lVar5 = 0;
    FUN_100b78b14();
    FUN_100b75404();
    _swift_beginAccess(lVar5 + _TtC6Sentry25SentryDependencyContainer::binaryImageCache,auStack_68,0
                       ,0);
    FUN_100baee64(uVar4,uVar3,uVar1,uVar2,uVar6);
  }
  return;
}



/* Address: 0x100baf164 | FUN_100baf164 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100baf164(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_100b84dac();
    FUN_100b84df8(3,0xd00000000000002b,0x8000000100dce3d0,0xd000000000000063,0x8000000100dce0f0,0x36
                 );
  }
  else {
    uVar2 = *param_1;
    lVar1 = 0;
    FUN_100b78b14();
    FUN_100b75404();
    _swift_beginAccess(lVar1 + _TtC6Sentry25SentryDependencyContainer::binaryImageCache,auStack_48,0
                       ,0);
    FUN_100baf23c(uVar2);
  }
  return;
}



/* Address: 0x100baf23c | FUN_100baf23c */

void FUN_100baf23c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10021b704();
  FUN_100bb01e4();
  FUN_100baf8b4(uVar1,param_1);
  FUN_100bb01e4();
  FUN_100bb01fc(uVar1);
  return;
}



/* Address: 0x100baf29c | thunk_FUN_100baf164 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100baf164(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_100b84dac();
    FUN_100b84df8(3,0xd00000000000002b,0x8000000100dce3d0,0xd000000000000063,0x8000000100dce0f0,0x36
                 );
  }
  else {
    uVar2 = *param_1;
    lVar1 = 0;
    FUN_100b78b14();
    FUN_100b75404();
    _swift_beginAccess(lVar1 + _TtC6Sentry25SentryDependencyContainer::binaryImageCache,auStack_48,0
                       ,0);
    FUN_100baf23c(uVar2);
  }
  return;
}



/* Address: 0x100baf2a0 | SentryBinaryImageCache::start: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void SentryBinaryImageCache::start_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100baec24(param_3);
  return;
}



/* Address: 0x100baf2d0 | FUN_100baf2d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100baf2d0(void)

{
  long unaff_x20;
  
  FUN_100bb59a0(*(undefined8 *)(unaff_x20 + SentryBinaryImageCache::lock));
  return;
}



/* Address: 0x100baf31c | SentryBinaryImageCache::stop */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryBinaryImageCache::stop(ID param_1,SEL param_2)

{
  FUN_100baf2d0(param_1);
  return;
}



/* Address: 0x100baf344 | FUN_100baf344 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100baf390 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100baf344(Encoding param_1)

{
  Encoding EVar1;
  _ArrayBuffer<undefined> _Var2;
  long lVar3;
  
  EVar1 = Encoding::_typeMetadataAccessor();
  lVar3 = *(long *)(*(long *)(EVar1.unknown + -8) + 0x40);
  if (param_1.unknown != (undefined *)0x0) {
    _Var2 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (EVar1.unknown,PTR___type_metadata_for_Swift_Int8_100eadb28);
    *(undefined8 *)(_Var2.unknown + 0x10) = 0x25;
    *(undefined8 *)(_Var2.unknown + 0x38) = 0;
    *(undefined8 *)(_Var2.unknown + 0x30) = 0;
    *(undefined8 *)(_Var2.unknown + 0x3d) = 0;
    *(undefined8 *)(_Var2.unknown + 0x28) = 0;
    *(undefined8 *)(_Var2.unknown + 0x20) = 0;
    FUN_100b2bacc();
    Encoding::_get_ascii(param_1);
    FUN_100baf644(_Var2.unknown,&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  }
  return;
}



/* Address: 0x100baf3ec | FUN_100baf3ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100baf3ec(void)

{
  return ZEXT816(0x100fa25b0);
}



/* Address: 0x100baf40c | FUN_100baf40c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100baf40c(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = SentryBinaryImageCache::cache;
  FUN_100b78ca0(param_2 + SentryBinaryImageCache::cache,auStack_78);
  uVar11 = *(ulong *)(param_2 + lVar4);
  if (uVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar6 = uVar11;
    thunk_FUN_100b6cd50();
    lVar2 = SentryBinaryImageInfo::address;
    if ((long)uVar6 < 1) {
      lVar10 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uVar11);
      FUN_100b78ca0(param_3 + lVar2,auStack_a8);
      lVar10 = 0;
      do {
        if (SCARRY8(lVar10,uVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100baf5d8);
          (*pcVar5)();
        }
        uVar1 = (long)(lVar10 + uVar6) / 2;
        if ((uVar11 & 0xc000000000000001) == 0) {
          if ((long)(lVar10 + uVar6) < -1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100baf5dc);
            (*pcVar5)();
          }
          if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) <= (long)uVar1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100baf5e0);
            (*pcVar5)();
          }
          uVar7 = *(ulong *)(uVar11 + 0x20 + uVar1 * 8);
        }
        else {
          uVar7 = uVar1;
          FUN_100b6d94c(uVar1,uVar11);
        }
        lVar3 = SentryBinaryImageInfo::address;
        uVar9 = *(ulong *)(param_3 + lVar2);
        FUN_100b78ca0(uVar7 + SentryBinaryImageInfo::address,auStack_c0);
        if (*(ulong *)(uVar7 + lVar3) <= uVar9) {
          lVar10 = uVar1 + 1;
          uVar1 = uVar6;
        }
        uVar6 = uVar1;
      } while (lVar10 < (long)uVar6);
      _swift_bridgeObjectRelease(uVar11);
    }
    _swift_beginAccess(param_2 + lVar4,auStack_90,0x21,0);
    if (*(long *)(param_2 + lVar4) != 0) {
      thunk_FUN_100b86284(lVar10);
      FUN_100bb72a4(lVar10,lVar10,param_3);
    }
    _swift_endAccess(auStack_90);
    uVar8 = *(undefined1 *)(param_2 + SentryBinaryImageCache::isDebug);
  }
  *param_1 = uVar8;
  return;
}



/* Address: 0x100baf5e0 | SentryBinaryImageCache::binaryImageAdded:vmAddress:address:size:uuid: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void SentryBinaryImageCache::binaryImageAdded_vmAddress_address_size_uuid_
               (ID param_1,SEL param_2,const_char__ param_3,unsigned_long_long param_4,
               unsigned_long_long param_5,unsigned_long_long param_6,const_char__ param_7)

{
  FUN_100baee64(param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Address: 0x100baf644 | FUN_100baf644 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100baf644(undefined *param_1,Encoding param_2,Encoding param_3)

{
  long lVar1;
  bool bVar2;
  Encoding EVar3;
  Encoding EVar4;
  __uint64 _Var5;
  undefined *puVar6;
  ID IVar7;
  Encoding EVar8;
  Encoding EVar9;
  long lVar10;
  code *pcVar11;
  String SVar12;
  String SVar13;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  
  EVar3 = Encoding::_typeMetadataAccessor();
  lVar10 = *(long *)(EVar3.unknown + -8);
  lVar1 = -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  EVar9.unknown = &stack0xffffffffffffffb0 + lVar1;
  Encoding::_get_utf8(EVar3);
  bVar2 = Encoding::____infix(param_2,EVar9,param_3);
  pcVar11 = *(code **)(lVar10 + 8);
  EVar4.unknown = EVar9.unknown;
  EVar8 = EVar3;
  (*pcVar11)();
  if (bVar2) {
LAB_100baf708:
    EVar4.unknown = param_1;
    _swift_bridgeObjectRetain();
    FUN_100bafdec();
    SVar12.bridgeObject = EVar8.unknown;
    SVar12.str = EVar4.unknown;
    if (EVar8.unknown != (undefined *)0x0) {
      Encoding::_get_utf8(EVar4);
      bVar2 = Encoding::____infix(param_2,EVar9,param_3);
      (*pcVar11)(EVar9.unknown,EVar3.unknown);
      if ((bVar2) ||
         (bVar2 = Swift::_StringGuts::get__isContiguousASCII((_StringGuts)EVar4.unknown), bVar2)) {
        _swift_bridgeObjectRelease(param_1);
        goto LAB_100baf7e0;
      }
      _swift_bridgeObjectRelease(EVar8.unknown);
    }
  }
  else {
    Encoding::_get_ascii(EVar4);
    bVar2 = Encoding::____infix(param_2,EVar9,param_3);
    EVar4.unknown = EVar9.unknown;
    EVar8 = EVar3;
    (*pcVar11)();
    if (bVar2) goto LAB_100baf708;
    Encoding::_get_nonLossyASCII(EVar4);
    bVar2 = Encoding::____infix(param_2,EVar9,param_3);
    EVar8 = EVar3;
    (*pcVar11)(EVar9.unknown);
    if (bVar2) goto LAB_100baf708;
  }
  EVar4.unknown = (undefined *)0x0;
  puVar6 = param_1;
  FUN_100bafe64();
  if (((ulong)puVar6 & 1) != 0) {
    *(undefined4 *)((long)auStack_58 + lVar1) = 0;
    *(undefined8 *)((long)&uStack_60 + lVar1) = 0x45d4;
    SVar13.bridgeObject = (void *)0x2;
    SVar13.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar13,(StaticString)0xd00000000000003f,0x8000000100dce350,
               0xdce340);
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100baf864);
    (*pcVar11)();
  }
  _Var5 = Encoding::_get_rawValue(EVar4);
  puVar6 = &_OBJC_CLASS___NSString;
  _objc_allocWithZone();
  IVar7 = _objc_msgSend((ID)puVar6,"initWithBytes:length:encoding:",param_1 + 0x20,EVar4.unknown,
                        _Var5);
  _swift_bridgeObjectRelease(param_1);
  if (IVar7 == 0) {
    SVar12 = (String)ZEXT816(0);
  }
  else {
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
LAB_100baf7e0:
  (*pcVar11)(param_2.unknown,EVar3.unknown);
  return SVar12;
}



/* Address: 0x100baf864 | SentryBinaryImageCache::convertUUID: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryBinaryImageCache::convertUUID_(ID param_1,SEL param_2,const_char__ param_3)

{
  NSString *pNVar1;
  
  _swift_getObjCClassMetadata();
  FUN_100baf344(param_3);
  if (param_2 == (SEL)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100baf8b4 | FUN_100baf8b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100baf8b4(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = param_2;
  FUN_100baf948(param_2);
  lVar1 = SentryBinaryImageCache::cache;
  if ((uVar2 & 1) == 0) {
    _swift_beginAccess(param_1 + SentryBinaryImageCache::cache,auStack_48,0x21,0);
    if (*(long *)(param_1 + lVar1) == 0) {
      _swift_endAccess(auStack_48);
    }
    else {
      FUN_100bae2b0(param_2);
      _swift_endAccess(auStack_48);
    }
  }
  return;
}



/* Address: 0x100baf948 | FUN_100baf948 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100baf948(ulong param_1)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = SentryBinaryImageCache::cache;
  FUN_100b78ca0(unaff_x20 + SentryBinaryImageCache::cache,auStack_78);
  puVar8 = *(undefined **)(unaff_x20 + lVar5);
  if (puVar8 != (undefined *)0x0) {
    puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((ulong)puVar8 >> 0x3e == 0) {
      lVar5 = *(long *)(puVar9 + 0x10);
    }
    else {
      _Var1.unknown = puVar8;
      if (-1 < (long)puVar8) {
        _Var1.unknown = puVar9;
      }
      lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    lVar13 = lVar5 + -1;
    if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100bafad8);
      (*pcVar4)();
    }
    if (-1 < lVar13) {
      FUN_100b86d54();
      lVar5 = 0;
      do {
        if (SCARRY8(lVar5,lVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100bafab8);
          (*pcVar4)();
        }
        lVar12 = (lVar5 + lVar13) / 2;
        if (((ulong)puVar8 & 0xc000000000000001) == 0) {
          if (lVar5 + lVar13 < -1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100bafac0);
            (*pcVar4)();
          }
          if (*(long *)(puVar9 + 0x10) <= lVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100bafac4);
            (*pcVar4)();
          }
          lVar6 = *(long *)(puVar8 + lVar12 * 8 + 0x20);
        }
        else {
          lVar6 = lVar12;
          FUN_100b6d94c(lVar12,puVar8);
        }
        lVar2 = SentryBinaryImageInfo::address;
        FUN_100b78ca0(lVar6 + SentryBinaryImageInfo::address,auStack_90);
        lVar3 = SentryBinaryImageInfo::size;
        uVar10 = *(ulong *)(lVar6 + lVar2);
        if (param_1 < uVar10) {
          FUN_100b6fce4();
          lVar13 = lVar12 + -1;
        }
        else {
          FUN_100b78ca0(lVar6 + SentryBinaryImageInfo::size,auStack_a8);
          uVar7 = *(ulong *)(lVar6 + lVar3);
          if (CARRY8(uVar10,uVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100bafabc);
            (*pcVar4)();
          }
          FUN_100b6fce4();
          if (param_1 < uVar10 + uVar7) {
            uVar11 = 0;
            goto LAB_100bafa84;
          }
          lVar5 = lVar12 + 1;
        }
      } while (lVar5 <= lVar13);
      lVar12 = 0;
      uVar11 = 1;
LAB_100bafa84:
      _swift_bridgeObjectRelease(puVar8);
      goto LAB_100bafa8c;
    }
  }
  lVar12 = 0;
  uVar11 = 1;
LAB_100bafa8c:
  auVar14._8_8_ = uVar11;
  auVar14._0_8_ = lVar12;
  return auVar14;
}



/* Address: 0x100bafad8 | SentryBinaryImageCache::binaryImageRemoved: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBinaryImageCache::binaryImageRemoved_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100baf23c(param_3);
  return;
}



/* Address: 0x100bafb08 | FUN_100bafb08 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bafb08(ulong *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_58 [24];
  
  uVar2 = param_3;
  FUN_100baf948();
  lVar1 = SentryBinaryImageCache::cache;
  if ((uVar2 & 1) == 0) {
    _swift_beginAccess(param_2 + SentryBinaryImageCache::cache,auStack_58,0x20,0);
    uVar2 = *(ulong *)(param_2 + lVar1);
    if (uVar2 != 0) {
      thunk_FUN_100bc4380(param_3,(uVar2 & 0xc000000000000001) == 0,uVar2);
      if ((uVar2 & 0xc000000000000001) == 0) {
        param_3 = *(ulong *)(uVar2 + param_3 * 8 + 0x20);
      }
      else {
        FUN_100b6d94c(param_3,uVar2);
      }
      _swift_endAccess(auStack_58);
      goto LAB_100bafba4;
    }
    _swift_endAccess(auStack_58);
  }
  param_3 = 0;
LAB_100bafba4:
  *param_1 = param_3;
  return;
}



/* Address: 0x100bafbd4 | SentryBinaryImageCache::imageByAddress: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryBinaryImageCache::imageByAddress_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100bae3c0();
  return param_3;
}



/* Address: 0x100bafc10 | FUN_100bafc10 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100bafc10(void)

{
  undefined *puVar1;
  long lVar2;
  ID self;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  self = *(ID *)(unaff_x20 + SentryBinaryImageCache::lock);
  _objc_msgSend(self,"lock");
  lVar2 = SentryBinaryImageCache::cache;
  FUN_100b78ca0(unaff_x20 + SentryBinaryImageCache::cache,auStack_48);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(undefined **)(unaff_x20 + lVar2) != (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_x20 + lVar2);
  }
  _swift_bridgeObjectRetain();
  _objc_msgSend(self,"unlock");
  return puVar1;
}



/* Address: 0x100bafca8 | SentryBinaryImageCache::getAllBinaryImages */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBinaryImageCache::getAllBinaryImages(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100bafc10(param_1);
  FUN_100baf3ec(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100bafcf8 | FUN_100bafcf8 */

void FUN_100bafcf8(void)

{
  long lVar1;
  undefined *self;
  undefined *puVar2;
  ID IVar3;
  long unaff_x20;
  objc_super local_50;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + SentryBinaryImageCache::cache) = 0;
  *(undefined1 *)(unaff_x20 + SentryBinaryImageCache::isDebug) = 0;
  lVar1 = SentryBinaryImageCache::lock;
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  puVar2 = self;
  FUN_10021b704();
  IVar3 = _objc_msgSend((ID)self,"init");
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  FUN_100b6fce4();
  local_50.receiver = (ID)puVar2;
  _objc_msgSendSuper2(&local_50,"init");
  return;
}



/* Address: 0x100bafd94 | SentryBinaryImageCache::init */

/* Function Stack Size: 0x10 bytes */

ID SentryBinaryImageCache::init(ID param_1,SEL param_2)

{
  FUN_100bafcf8();
  return param_1;
}



/* Address: 0x100bafdb4 | SentryBinaryImageCache::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryBinaryImageCache::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cache));
  return;
}



/* Address: 0x100bafdec | FUN_100bafdec */

undefined1  [16] FUN_100bafdec(ulong param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  UnsafeBufferPointer<__int8> UVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  String SVar7;
  
  uVar2 = 0;
  uVar4 = param_1;
  FUN_100bafe64(0);
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bafe64);
    (*pcVar1)();
  }
  FUN_100bafeec();
  pcVar5 = (char *)((param_4 >> 1) - (long)param_3);
  if (!SBORROW8(param_4 >> 1,(long)param_3)) {
    UVar3.unknown = (undefined *)(param_1 + (long)param_3);
    SVar7.bridgeObject = param_3;
    SVar7.str = pcVar5;
    Swift::String::__tryFromUTF8(UVar3,SVar7);
    _swift_unknownObjectRelease(uVar2);
    auVar6._8_8_ = pcVar5;
    auVar6._0_8_ = UVar3.unknown;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bafe60);
  (*pcVar1)();
}



/* Address: 0x100bafe64 | FUN_100bafe64 */

undefined1  [16] FUN_100bafe64(char param_1,long param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    if (*(char *)(param_2 + 0x20) == param_1) {
      return ZEXT816(0);
    }
    if (lVar4 != 1) {
      if (*(char *)(param_2 + 0x21) == param_1) {
        return ZEXT816(1);
      }
      lVar4 = lVar4 + -2;
      lVar2 = 1;
      pcVar5 = (char *)(param_2 + 0x22);
      do {
        uVar3 = (ulong)(lVar4 == 0);
        if (lVar4 == 0) {
          return ZEXT816(1) << 0x40;
        }
        cVar1 = *pcVar5;
        lVar4 = lVar4 + -1;
        lVar2 = lVar2 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != param_1);
      goto LAB_100bafe98;
    }
  }
  lVar2 = 0;
  uVar3 = 1;
LAB_100bafe98:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Address: 0x100bafeec | FUN_100bafeec */

undefined8 FUN_100bafeec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  if (-1 < param_1) {
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100baff24);
  (*pcVar1)();
}



/* Address: 0x100baff24 | FUN_100baff24 */

void FUN_100baff24(long param_1)

{
  FUN_100089044(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100baff38 | FUN_100baff38 */

void FUN_100baff38(long param_1)

{
  FUN_100b6e948(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100baff4c | FUN_100baff4c */

void FUN_100baff4c(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  __int64 _Var2;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    _Var2 = *(__int64 *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      _Var1.unknown = param_1;
    }
    _Var2 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  FUN_100b6edb8(0,_Var2,0,param_1);
  return;
}



/* Address: 0x100baff9c | FUN_100baff9c */

void FUN_100baff9c(long param_1)

{
  FUN_100b6f004(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100baffb0 | FUN_100baffb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100baffb0(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  
  uVar2 = 0;
  FUN_100be9cf8();
  SVar4.bridgeObject = (void *)0x8000000100dce2b0;
  SVar4.str = (char *)0xd000000000000029;
  SVar8.bridgeObject = param_2;
  SVar8.str = param_1;
  bVar1 = Swift::String::hasPrefix(SVar4,SVar8);
  if ((((!bVar1) &&
       (SVar5.bridgeObject = (void *)0x8000000100dce2e0, SVar5.str = (char *)0xd000000000000031,
       SVar9.bridgeObject = param_2, SVar9.str = param_1,
       bVar1 = Swift::String::hasPrefix(SVar5,SVar9), !bVar1)) &&
      (SVar6.bridgeObject = (void *)0x8000000100d91940, SVar6.str = (char *)0xd000000000000010,
      SVar10.bridgeObject = param_2, SVar10.str = param_1,
      bVar1 = Swift::String::hasPrefix(SVar6,SVar10), !bVar1)) &&
     (SVar7.bridgeObject = (void *)0xe90000000000002f, SVar7.str = (char *)0x62696c2f7273752f,
     SVar11.bridgeObject = param_2, SVar11.str = param_1,
     bVar1 = Swift::String::hasPrefix(SVar7,SVar11), !bVar1)) {
    puVar3 = &DAT_100f39db0;
    _swift_allocObject(&DAT_100f39db0,0x50,7);
    *(code **)(puVar3 + 0x10) = param_7;
    *(undefined8 *)(puVar3 + 0x18) = param_8;
    *(undefined8 *)(puVar3 + 0x20) = uVar2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    *(undefined8 *)(puVar3 + 0x30) = param_4;
    *(char **)(puVar3 + 0x38) = param_1;
    *(void **)(puVar3 + 0x40) = param_2;
    *(undefined8 *)(puVar3 + 0x48) = param_5;
    FUN_100011128(param_7,param_8);
    _swift_bridgeObjectRetain(param_2);
    FUN_100bb0798(FUN_100bb01a8,puVar3);
    _swift_release(puVar3);
    return;
  }
  if (param_7 != (code *)0x0) {
    (*param_7)(0);
  }
  return;
}



/* Address: 0x100bb0138 | FUN_100bb0138 */

void FUN_100bb0138(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cced98);
  return;
}



/* Address: 0x100bb0144 | FUN_100bb0144 */

void FUN_100bb0144(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bb0148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x78))();
  return;
}



/* Address: 0x100bb014c | FUN_100bb014c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb014c(void)

{
  return ZEXT816(0x100fa2690);
}


