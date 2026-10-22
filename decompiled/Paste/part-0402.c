/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004eb688 | FUN_1004eb688 */

void FUN_1004eb688(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x110));
  uVar3 = *(undefined8 *)(lVar2 + 0xa8);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004eb6ec;
  }
  else {
    _swift_errorRelease();
    pcVar1 = thunk_FUN_1004eb6ec;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x1004eb6ec | FUN_1004eb6ec */

tuple2_conflict7 FUN_1004eb6ec(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  URLRequest_conflict in_x4;
  code *pcVar7;
  URL url;
  void *pvVar8;
  long lVar9;
  long lVar10;
  URLRequest *this;
  char *pcVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  tuple2_conflict7 tVar19;
  String forHTTPHeaderField;
  String forHTTPHeaderField_00;
  String forHTTPHeaderField_01;
  String forHTTPHeaderField_02;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x100));
  lVar10 = *(long *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar9 = *(long *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  FUN_1004f8a60();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar6;
  lVar3 = _TtC3MCP19HTTPClientTransport::protocolVersion;
  *(undefined8 *)(unaff_x22 + 0x128) = _TtC3MCP19HTTPClientTransport::endpoint;
  *(long *)(unaff_x22 + 0x130) = lVar3;
  lVar13 = _TtC3MCP19HTTPClientTransport::sessionID;
  *(long *)(unaff_x22 + 0x138) = _TtC3MCP19HTTPClientTransport::sessionID;
  lVar12 = _TtC3MCP19HTTPClientTransport::session;
  puVar1 = (undefined8 *)(lVar9 + _TtC3MCP19HTTPClientTransport::requestModifier);
  *(undefined8 *)(unaff_x22 + 0x140) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x148) = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(lVar9 + lVar12);
  _swift_beginAccess(lVar9 + lVar3,unaff_x22 + 0x10,0,0);
  _swift_beginAccess(lVar9 + lVar13,unaff_x22 + 0x28,0,0);
  pcVar7 = *(code **)(lVar10 + 0x10);
  *(code **)(unaff_x22 + 0x158) = pcVar7;
  *(undefined8 *)(unaff_x22 + 0x160) = 0;
  lVar9 = *(long *)(unaff_x22 + 0x130);
  this = *(URLRequest **)(unaff_x22 + 0xf8);
  url.unknown = *(undefined **)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar12 = *(long *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  (*pcVar7)(url.unknown,lVar12 + *(long *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 200));
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  SVar14.bridgeObject = (void *)0x8000000100dab6c0;
  SVar14.str = (char *)0xd000000000000023;
  forHTTPHeaderField.bridgeObject = &DAT_e600000000000000;
  forHTTPHeaderField.str = (char *)0x747065636341;
  Foundation::URLRequest::addValue(SVar14,forHTTPHeaderField,in_x4);
  SVar15.bridgeObject = (void *)0x8000000100d8fc90;
  SVar15.str = (char *)0xd000000000000010;
  forHTTPHeaderField_00.bridgeObject = (void *)0xec00000065707954;
  forHTTPHeaderField_00.str = (char *)0x2d746e65746e6f43;
  Foundation::URLRequest::addValue(SVar15,forHTTPHeaderField_00,in_x4);
  FUN_1001037b4(uVar4,uVar6);
  Foundation::URLRequest::_set_httpBody(this);
  pvVar8 = *(void **)(lVar12 + lVar9 + 8);
  if (pvVar8 != (void *)0x0) {
    pcVar11 = *(char **)(*(long *)(unaff_x22 + 0xa8) + *(long *)(unaff_x22 + 0x130));
    _swift_bridgeObjectRetain(pvVar8);
    SVar16.bridgeObject = pvVar8;
    SVar16.str = pcVar11;
    forHTTPHeaderField_01.bridgeObject = (void *)0x8000000100dab710;
    forHTTPHeaderField_01.str = (char *)0xd000000000000014;
    Foundation::URLRequest::addValue(SVar16,forHTTPHeaderField_01,in_x4);
    _swift_bridgeObjectRelease(pvVar8);
  }
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0xa8) + *(long *)(unaff_x22 + 0x138));
  pvVar8 = (void *)puVar1[1];
  if (pvVar8 != (void *)0x0) {
    pcVar11 = (char *)*puVar1;
    _swift_bridgeObjectRetain(pvVar8);
    SVar17.bridgeObject = pvVar8;
    SVar17.str = pcVar11;
    forHTTPHeaderField_02.bridgeObject = (void *)0xee0064492d6e6f69;
    forHTTPHeaderField_02.str = (char *)0x737365532d50434d;
    Foundation::URLRequest::addValue(SVar17,forHTTPHeaderField_02,in_x4);
    _swift_bridgeObjectRelease(pvVar8);
  }
  pvVar8 = *(void **)(unaff_x22 + 0x100);
  if (pvVar8 != (void *)0x0) {
    lVar12 = *(long *)(unaff_x22 + 0x128);
    lVar9 = *(long *)(unaff_x22 + 0x108);
    lVar13 = *(long *)(unaff_x22 + 0xa8);
    _swift_getObjectType();
    pcVar11 = (char *)(lVar13 + lVar12);
    (**(code **)(lVar9 + 0x18))(pcVar11,pvVar8,lVar9);
    if (pvVar8 != (void *)0x0) {
      SVar18.bridgeObject = pvVar8;
      SVar18.str = pcVar11;
      Foundation::URLRequest::_setValue(SVar18,(URLRequest_conflict)0x7a69726f68747541);
      _swift_bridgeObjectRelease(pvVar8);
    }
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar9 = *(long *)(unaff_x22 + 0xe8);
  (**(code **)(unaff_x22 + 0x140))(uVar6,uVar2);
  pcVar7 = *(code **)(lVar9 + 8);
  *(code **)(unaff_x22 + 0x168) = pcVar7;
  (*pcVar7)(uVar2,uVar4);
  (**(code **)(lVar9 + 0x20))(uVar2,uVar6,uVar4);
  plVar5 = (long *)(ulong)*(uint *)(PTR__bytes_100ea7950 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x170) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1004eba10;
  tVar19 = (extension_Foundation)::__C::NSURLSession::_bytes
                     ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0xc0));
  return tVar19;
}



/* Address: 0x1004eba10 | FUN_1004eba10 */

void FUN_1004eba10(undefined8 param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x178) = param_1;
  *(long *)(lVar2 + 0x180) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1004ec00c,*(undefined8 *)(lVar2 + 0xa8),0);
    return;
  }
  plVar1 = (long *)0x8d0;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x188) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_1004ebaac;
  FUN_1004ec5a4(param_1,*(undefined8 *)(lVar2 + 0xc0));
  return;
}



/* Address: 0x1004ebaac | FUN_1004ebaac */

void FUN_1004ebaac(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 400) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x188));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0xa8);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x120));
    pcVar1 = FUN_1004ebb18;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0xa8);
    pcVar1 = FUN_1004ec220;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1004ebb18 | FUN_1004ebb18 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004ebb18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  code *pcVar6;
  
  pcVar6 = *(code **)(unaff_x22 + 0x168);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0xb0));
  (*pcVar6)(uVar3,uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001004ebbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004ebbb4 | FUN_1004ebbb4 */

void FUN_1004ebbb4(byte param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x1b8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x1b0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    *(byte *)(lVar4 + 0x1c0) = param_1 & 1;
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x1a0));
    pcVar1 = FUN_1004ebc48;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x120);
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x1a0));
    _swift_bridgeObjectRelease(uVar3);
    pcVar1 = FUN_1004ec454;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1004ebc48 | FUN_1004ebc48 */

tuple2_conflict7
FUN_1004ebc48(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
             URLRequest_conflict param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  Data UNRECOVERED_JUMPTABLE;
  code *pcVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  URLRequest *this;
  URL url;
  char *pcVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  NSURLResponse *pNVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  tuple2_conflict7 tVar18;
  String forHTTPHeaderField;
  String forHTTPHeaderField_00;
  String forHTTPHeaderField_01;
  String forHTTPHeaderField_02;
  
  if ((*(byte *)(unaff_x22 + 0x1c0) & 1) != 0) {
    lVar7 = *(long *)(unaff_x22 + 0x160) + 1;
    lVar1 = *(long *)(unaff_x22 + 0x1a8);
    param_2 = *(long *)(unaff_x22 + 0x108);
    (**(code **)(param_2 + 8))();
    if (lVar7 < lVar1) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
      (**(code **)(unaff_x22 + 0x168))
                (*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0xe0));
      _swift_unknownObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar8);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x80));
      *(long *)(unaff_x22 + 0x160) = lVar7;
      lVar7 = *(long *)(unaff_x22 + 0x130);
      this = *(URLRequest **)(unaff_x22 + 0xf8);
      url.unknown = *(undefined **)(unaff_x22 + 0xd8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar1 = *(long *)(unaff_x22 + 0xa8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
      (**(code **)(unaff_x22 + 0x158))
                (url.unknown,lVar1 + *(long *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 200));
      Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
      Foundation::URLRequest::_set_httpMethod(this);
      SVar13.bridgeObject = (void *)0x8000000100dab6c0;
      SVar13.str = (char *)0xd000000000000023;
      forHTTPHeaderField.bridgeObject = &DAT_e600000000000000;
      forHTTPHeaderField.str = (char *)0x747065636341;
      Foundation::URLRequest::addValue(SVar13,forHTTPHeaderField,param_5);
      SVar14.bridgeObject = (void *)0x8000000100d8fc90;
      SVar14.str = (char *)0xd000000000000010;
      forHTTPHeaderField_00.bridgeObject = (void *)0xec00000065707954;
      forHTTPHeaderField_00.str = (char *)0x2d746e65746e6f43;
      Foundation::URLRequest::addValue(SVar14,forHTTPHeaderField_00,param_5);
      FUN_1001037b4(uVar8,uVar3);
      Foundation::URLRequest::_set_httpBody(this);
      pvVar6 = *(void **)(lVar1 + lVar7 + 8);
      if (pvVar6 != (void *)0x0) {
        pcVar9 = *(char **)(*(long *)(unaff_x22 + 0xa8) + *(long *)(unaff_x22 + 0x130));
        _swift_bridgeObjectRetain(pvVar6);
        SVar15.bridgeObject = pvVar6;
        SVar15.str = pcVar9;
        forHTTPHeaderField_01.bridgeObject = (void *)0x8000000100dab710;
        forHTTPHeaderField_01.str = (char *)0xd000000000000014;
        Foundation::URLRequest::addValue(SVar15,forHTTPHeaderField_01,param_5);
        _swift_bridgeObjectRelease(pvVar6);
      }
      puVar4 = (undefined8 *)(*(long *)(unaff_x22 + 0xa8) + *(long *)(unaff_x22 + 0x138));
      pvVar6 = (void *)puVar4[1];
      if (pvVar6 != (void *)0x0) {
        pcVar9 = (char *)*puVar4;
        _swift_bridgeObjectRetain(pvVar6);
        SVar16.bridgeObject = pvVar6;
        SVar16.str = pcVar9;
        forHTTPHeaderField_02.bridgeObject = (void *)0xee0064492d6e6f69;
        forHTTPHeaderField_02.str = (char *)0x737365532d50434d;
        Foundation::URLRequest::addValue(SVar16,forHTTPHeaderField_02,param_5);
        _swift_bridgeObjectRelease(pvVar6);
      }
      pvVar6 = *(void **)(unaff_x22 + 0x100);
      if (pvVar6 != (void *)0x0) {
        lVar1 = *(long *)(unaff_x22 + 0x128);
        lVar7 = *(long *)(unaff_x22 + 0x108);
        lVar10 = *(long *)(unaff_x22 + 0xa8);
        _swift_getObjectType();
        pcVar9 = (char *)(lVar10 + lVar1);
        (**(code **)(lVar7 + 0x18))(pcVar9,pvVar6,lVar7);
        if (pvVar6 != (void *)0x0) {
          SVar17.bridgeObject = pvVar6;
          SVar17.str = pcVar9;
          Foundation::URLRequest::_setValue(SVar17,(URLRequest_conflict)0x7a69726f68747541);
          _swift_bridgeObjectRelease(pvVar6);
        }
      }
      uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar7 = *(long *)(unaff_x22 + 0xe8);
      (**(code **)(unaff_x22 + 0x140))(uVar3,uVar11);
      pcVar5 = *(code **)(lVar7 + 8);
      *(code **)(unaff_x22 + 0x168) = pcVar5;
      (*pcVar5)(uVar11,uVar8);
      (**(code **)(lVar7 + 0x20))(uVar11,uVar3,uVar8);
      plVar2 = (long *)(ulong)*(uint *)(PTR__bytes_100ea7950 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x170) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_1004eba10;
      tVar18 = (extension_Foundation)::__C::NSURLSession::_bytes
                         ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0xc0));
      return tVar18;
    }
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x1a0);
  pcVar5 = *(code **)(unaff_x22 + 0x168);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x100);
  pNVar12 = *(NSURLResponse **)(unaff_x22 + 0xe0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x120));
  FUN_1004f9088();
  _swift_bridgeObjectRelease();
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,puVar4,0,0);
  *puVar4 = uVar3;
  puVar4[1] = param_2;
  puVar4[2] = param_3;
  *(undefined1 *)(puVar4 + 3) = param_4;
  _swift_willThrow();
  _swift_unknownObjectRelease(uVar11);
  (*pcVar5)(uVar8,pNVar12);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x80));
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar11);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001004ec008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
  tVar18._ = pNVar12;
  tVar18._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar18;
}



/* Address: 0x1004ec00c | FUN_1004ec00c */

void FUN_1004ec00c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar6 = (undefined8 *)(unaff_x22 + 0x80);
  *puVar6 = uVar7;
  iVar8 = (int)unaff_x22 + 0x70;
  _swift_errorRetain(uVar7);
  puVar1 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  uVar4 = 0x98;
  _swift_dynamicCast();
  if (iVar8 == 0) {
    pcVar14 = *(code **)(unaff_x22 + 0x168);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x120));
    (*pcVar14)(uVar7,uVar10);
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0x100);
    _swift_errorRelease(uVar7);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    puVar3 = *(undefined8 **)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x198) = uVar7;
    *(undefined8 **)(unaff_x22 + 0x1a0) = puVar3;
    if (lVar9 != 0) {
      lVar12 = *(long *)(unaff_x22 + 0x128);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
      lVar9 = *(long *)(unaff_x22 + 0x108);
      lVar13 = *(long *)(unaff_x22 + 0xa8);
      uVar11 = uVar10;
      _swift_getObjectType();
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar11;
      piVar5 = *(int **)(lVar9 + 0x20);
      iVar8 = *piVar5;
      plVar2 = (long *)(ulong)(uint)piVar5[1];
      _swift_unknownObjectRetain(uVar10);
      _swift_bridgeObjectRetain(puVar3);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1b0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_1004ebbb4;
                    /* WARNING: Could not recover jumptable at 0x0001004ec130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar8 + (long)piVar5))
                (uVar7,puVar3,lVar13 + lVar12,*(undefined8 *)(unaff_x22 + 0x118),
                 *(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x150),uVar11,lVar9)
      ;
      return;
    }
    pcVar14 = *(code **)(unaff_x22 + 0x168);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x120));
    FUN_1004f9088();
    _swift_bridgeObjectRelease();
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = uVar7;
    puVar3[1] = puVar6;
    puVar3[2] = puVar1;
    *(undefined1 *)(puVar3 + 3) = uVar4;
    _swift_willThrow();
    (*pcVar14)(uVar10,uVar11);
  }
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x80));
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001004ec21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004ec220 | FUN_1004ec220 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004ec220(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 8))
            (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xb0));
  uVar7 = *(undefined8 *)(unaff_x22 + 400);
  puVar6 = (undefined8 *)(unaff_x22 + 0x80);
  *puVar6 = uVar7;
  iVar8 = (int)unaff_x22 + 0x70;
  _swift_errorRetain(uVar7);
  puVar1 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  uVar4 = 0x98;
  _swift_dynamicCast();
  if (iVar8 == 0) {
    pcVar14 = *(code **)(unaff_x22 + 0x168);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x120));
    (*pcVar14)(uVar7,uVar10);
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0x100);
    _swift_errorRelease(uVar7);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    puVar3 = *(undefined8 **)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x198) = uVar7;
    *(undefined8 **)(unaff_x22 + 0x1a0) = puVar3;
    if (lVar9 != 0) {
      lVar12 = *(long *)(unaff_x22 + 0x128);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
      lVar9 = *(long *)(unaff_x22 + 0x108);
      lVar13 = *(long *)(unaff_x22 + 0xa8);
      uVar11 = uVar10;
      _swift_getObjectType();
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar11;
      piVar5 = *(int **)(lVar9 + 0x20);
      iVar8 = *piVar5;
      plVar2 = (long *)(ulong)(uint)piVar5[1];
      _swift_unknownObjectRetain(uVar10);
      _swift_bridgeObjectRetain(puVar3);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1b0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_1004ebbb4;
                    /* WARNING: Could not recover jumptable at 0x0001004ec364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar8 + (long)piVar5))
                (uVar7,puVar3,lVar13 + lVar12,*(undefined8 *)(unaff_x22 + 0x118),
                 *(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x150),uVar11,lVar9)
      ;
      return;
    }
    pcVar14 = *(code **)(unaff_x22 + 0x168);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x120));
    FUN_1004f9088();
    _swift_bridgeObjectRelease();
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = uVar7;
    puVar3[1] = puVar6;
    puVar3[2] = puVar1;
    *(undefined1 *)(puVar3 + 3) = uVar4;
    _swift_willThrow();
    (*pcVar14)(uVar10,uVar11);
  }
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x80));
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001004ec450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004ec454 | FUN_1004ec454 */

void FUN_1004ec454(undefined8 param_1,_StringGuts param_2,undefined8 param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  String SVar8;
  String SVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1b8);
  pcVar7 = *(code **)(unaff_x22 + 0x168);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1a0));
  Swift::_StringGuts::grow(0x1d,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  pcVar3 = (char *)(unaff_x22 + 0x40);
  _swift_getErrorValue(uVar6,unaff_x22 + 0x88);
  SVar8 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  puVar2 = SVar8.bridgeObject;
  SVar9.bridgeObject = param_4;
  SVar9.str = pcVar3;
  Swift::String::append(SVar8,SVar9);
  _swift_bridgeObjectRelease();
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,puVar2,0,0);
  *puVar2 = 0xd00000000000001b;
  puVar2[1] = 0x8000000100dab6f0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 4;
  _swift_willThrow();
  _swift_errorRelease(uVar6);
  _swift_unknownObjectRelease(uVar4);
  (*pcVar7)(uVar1,uVar5);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001004ec5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004ec5a4 | FUN_1004ec5a4 */

void FUN_1004ec5a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  AsyncBytes AVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x860) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x858) = param_2;
  *(undefined8 *)(unaff_x22 + 0x850) = param_1;
  puVar1 = &DAT_100fcd490;
  FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
  *(undefined **)(unaff_x22 + 0x868) = puVar1;
  lVar5 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x870) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x878) = uVar2;
  AVar3 = AsyncBytes::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x880) = AVar3.unknown;
  lVar5 = *(long *)(AVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x888) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x890) = uVar2;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
    _swift_task_switch(FUN_1004ec66c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004ec66c | FUN_1004ec66c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001004ecaa4) */

void FUN_1004ec66c(void)

{
  String *pSVar1;
  bool bVar2;
  NSString *pNVar3;
  ID IVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar6;
  Iterator IVar7;
  _StringGuts _Var8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *self;
  AsyncBytes AVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined *puVar17;
  void *pvVar18;
  undefined8 uVar19;
  long lVar20;
  void *pvVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = *(undefined8 **)(unaff_x22 + 0x850);
  _swift_dynamicCastObjCClass(self,&_OBJC_CLASS___NSHTTPURLResponse);
  if (self == (undefined8 *)0x0) {
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,self,0,0);
    *self = 0xd000000000000015;
    self[1] = 0x8000000100dab920;
    self[2] = 0;
    *(undefined1 *)(self + 3) = 4;
    _swift_willThrow();
    uVar19 = *(undefined8 *)(unaff_x22 + 0x878);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x890));
    _swift_task_dealloc(uVar19);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar13 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  else {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar4 = objc_stub::valueForHTTPHeaderField_((ID)self,pNVar3);
    if (IVar4 == 0) {
      SVar22 = (String)(ZEXT816(0xe000000000000000) << 0x40);
    }
    else {
      SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pvVar21 = SVar22.bridgeObject;
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar4 = objc_stub::valueForHTTPHeaderField_((ID)self,pNVar3);
    if (IVar4 != 0) {
      lVar13 = *(long *)(unaff_x22 + 0x860);
      SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar11 = SVar23.bridgeObject;
      pSVar1 = (String *)(lVar13 + _TtC3MCP19HTTPClientTransport::sessionID);
      _swift_beginAccess(pSVar1,unaff_x22 + 0x780,1,0);
      pvVar18 = pSVar1->bridgeObject;
      *pSVar1 = SVar23;
      _swift_bridgeObjectRetain(pvVar11);
      _swift_bridgeObjectRelease(pvVar18);
      if (pvVar18 == (void *)0x0) {
        FUN_1004ea1e4();
      }
      lVar13 = *(long *)(*(long *)(unaff_x22 + 0x860) + _TtC3MCP19HTTPClientTransport::logger);
      pvVar18 = (void *)0x0;
      _swift_beginAccess(lVar13 + 0x20,unaff_x22 + 0x7b0,0);
      FUN_100076688(lVar13 + 0x20,unaff_x22 + 0x650);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x668);
      lVar20 = *(long *)(unaff_x22 + 0x670);
      FUN_100004640(unaff_x22 + 0x650,uVar19);
      (**(code **)(lVar20 + 0x70))(uVar19,lVar20);
      FUN_100004594(unaff_x22 + 0x650);
      if (((uint)uVar19 & 0xff) < 2) {
        FUN_100076688(lVar13 + 0x20,unaff_x22 + 0x600);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x618);
        lVar13 = *(long *)(unaff_x22 + 0x620);
        FUN_100004640();
        puVar17 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar10 = (char *)0x60;
        pcVar9 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar17 + 0x20) = 0x496e6f6973736573;
        *(undefined8 *)(puVar17 + 0x18) = 2;
        *(undefined8 *)(puVar17 + 0x10) = 1;
        *(undefined8 *)(puVar17 + 0x28) = 0xe900000000000044;
        SVar24.bridgeObject = pcVar9;
        SVar24.str = pcVar10;
        Swift::String::reserveCapacity(2,SVar24);
        SVar25.bridgeObject = pvVar18;
        SVar25.str = pcVar9;
        Swift::String::write(SVar23,SVar25);
        *(undefined8 *)(puVar17 + 0x30) = 0;
        *(undefined8 *)(puVar17 + 0x38) = 0xe000000000000000;
        puVar17[0x58] = 0;
        puVar5 = puVar17;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar17);
        FUN_1000fb4c4(puVar17 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
        _swift_deallocClassInstance(puVar17,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x310) = 1;
        *(undefined8 *)(unaff_x22 + 0x318) = 0xd000000000000013;
        *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dab940;
        *(undefined8 *)(unaff_x22 + 0x328) = 0;
        *(undefined **)(unaff_x22 + 0x330) = puVar5;
        *(undefined8 *)(unaff_x22 + 0x340) = 0;
        *(undefined8 *)(unaff_x22 + 0x338) = 0;
        *(undefined8 *)(unaff_x22 + 0x348) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dab630;
        *(undefined8 *)(unaff_x22 + 0x358) = 0xd000000000000021;
        *(undefined8 *)(unaff_x22 + 0x360) = 0x8000000100dabe50;
        *(undefined8 *)(unaff_x22 + 0x368) = 0x161;
        *(undefined1 *)(unaff_x22 + 0xd0) = 1;
        *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000013;
        *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dab940;
        *(undefined8 *)(unaff_x22 + 0xe8) = 0;
        *(undefined **)(unaff_x22 + 0xf0) = puVar5;
        *(undefined8 *)(unaff_x22 + 0xf8) = 0;
        *(undefined8 *)(unaff_x22 + 0x100) = 0;
        *(undefined8 *)(unaff_x22 + 0x108) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dab630;
        *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000021;
        *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dabe50;
        *(undefined8 *)(unaff_x22 + 0x128) = 0x161;
        FUN_1004eaa00(unaff_x22 + 0x310,unaff_x22 + 0x10);
        FUN_1004eaa3c(unaff_x22 + 0xd0);
        (**(code **)(lVar13 + 0x28))(unaff_x22 + 0x310,uVar19);
        _swift_bridgeObjectRelease(pvVar11);
        FUN_1004eaa3c(unaff_x22 + 0x310);
        FUN_100004594(unaff_x22 + 0x600);
      }
      else {
        _swift_bridgeObjectRelease(pvVar11);
      }
    }
    FUN_1004edafc(self,SVar22.str,pvVar21);
    IVar4 = objc_stub::statusCode((ID)self);
    if (((long)IVar4 < 200) || (299 < IVar4)) {
      _swift_bridgeObjectRelease(pvVar21);
    }
    else {
      *(String *)(unaff_x22 + 0x838) = SVar22;
      FUN_1004b8f18();
      bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                        (&DAT_100edc1c8,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_String_100eac208,IVar4,IVar4);
      if (bVar2) {
        lVar13 = *(long *)(unaff_x22 + 0x860);
        _swift_bridgeObjectRelease(pvVar21);
        lVar20 = *(long *)(lVar13 + _TtC3MCP19HTTPClientTransport::logger);
        *(long *)(unaff_x22 + 0x898) = lVar20;
        _swift_beginAccess(lVar20 + 0x20,unaff_x22 + 0x768,0,0);
        FUN_100076688(lVar20 + 0x20,unaff_x22 + 0x5d8);
        uVar14 = *(ulong *)(unaff_x22 + 0x5f0);
        lVar13 = *(long *)(unaff_x22 + 0x5f8);
        FUN_100004640(unaff_x22 + 0x5d8,uVar14);
        (**(code **)(lVar13 + 0x70))(uVar14,lVar13);
        FUN_100004594(unaff_x22 + 0x5d8);
        if ((uVar14 & 0xff) == 0) {
          FUN_100076688(lVar20 + 0x20,unaff_x22 + 0x740);
          uVar19 = *(undefined8 *)(unaff_x22 + 0x758);
          lVar13 = *(long *)(unaff_x22 + 0x760);
          FUN_100004640(unaff_x22 + 0x740,uVar19);
          *(undefined1 *)(unaff_x22 + 0x130) = 0;
          *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000033;
          *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dabec0;
          *(undefined8 *)(unaff_x22 + 0x150) = 0;
          *(undefined8 *)(unaff_x22 + 0x148) = 0;
          *(undefined8 *)(unaff_x22 + 0x160) = 0;
          *(undefined8 *)(unaff_x22 + 0x158) = 0;
          *(undefined8 *)(unaff_x22 + 0x168) = 0xd00000000000001d;
          *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dab630;
          *(undefined8 *)(unaff_x22 + 0x178) = 0xd000000000000021;
          *(undefined8 *)(unaff_x22 + 0x180) = 0x8000000100dabe50;
          *(undefined8 *)(unaff_x22 + 0x188) = 0x168;
          *(undefined1 *)(unaff_x22 + 0x3d0) = 0;
          *(undefined8 *)(unaff_x22 + 0x3d8) = 0xd000000000000033;
          *(undefined8 *)(unaff_x22 + 0x3e0) = 0x8000000100dabec0;
          *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
          *(undefined8 *)(unaff_x22 + 1000) = 0;
          *(undefined8 *)(unaff_x22 + 0x400) = 0;
          *(undefined8 *)(unaff_x22 + 0x3f8) = 0;
          *(undefined8 *)(unaff_x22 + 0x408) = 0xd00000000000001d;
          *(undefined8 *)(unaff_x22 + 0x410) = 0x8000000100dab630;
          *(undefined8 *)(unaff_x22 + 0x418) = 0xd000000000000021;
          *(undefined8 *)(unaff_x22 + 0x420) = 0x8000000100dabe50;
          *(undefined8 *)(unaff_x22 + 0x428) = 0x168;
          FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 0x550);
          FUN_1004eaa3c(unaff_x22 + 0x3d0);
          (**(code **)(lVar13 + 0x28))(unaff_x22 + 0x130,uVar19,lVar13);
          FUN_1004eaa3c(unaff_x22 + 0x130);
          FUN_100004594(unaff_x22 + 0x740);
        }
        plVar6 = (long *)0xa50;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x8a0) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1004ed014;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar12) {
          FUN_1004f7344(*(undefined8 *)(unaff_x22 + 0x858));
          return;
        }
        goto LAB_1004ed010;
      }
      *(String *)(unaff_x22 + 0x828) = SVar22;
      bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                        (&DAT_100edc1b8,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_String_100eac208,IVar4,IVar4);
      if (bVar2) {
        AVar15.unknown = *(undefined **)(unaff_x22 + 0x890);
        lVar13 = *(long *)(unaff_x22 + 0x888);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x880);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x858);
        _swift_bridgeObjectRelease(pvVar21);
        *(undefined8 *)(unaff_x22 + 0x808) = 0;
        *(undefined8 *)(unaff_x22 + 0x810) = 0xc000000000000000;
        (**(code **)(lVar13 + 0x10))();
        IVar7 = AsyncBytes::_makeAsyncIterator(AVar15);
        *(undefined **)(unaff_x22 + 0x7c8) = IVar7.unknown;
        *(undefined8 *)(unaff_x22 + 2000) = uVar19;
        *(undefined8 *)(unaff_x22 + 0x7d8) = uVar16;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar12) {
          _swift_task_switch(FUN_1004ed2cc,0,0);
          return;
        }
        goto LAB_1004ed010;
      }
      lVar20 = *(long *)(*(long *)(unaff_x22 + 0x860) + _TtC3MCP19HTTPClientTransport::logger);
      pcVar10 = (char *)0x0;
      pvVar11 = (void *)0x0;
      _swift_beginAccess(lVar20 + 0x20,unaff_x22 + 0x7e0);
      FUN_100076688(lVar20 + 0x20,unaff_x22 + 0x6f0);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x708);
      lVar13 = *(long *)(unaff_x22 + 0x710);
      FUN_100004640(unaff_x22 + 0x6f0,uVar19);
      (**(code **)(lVar13 + 0x70))(uVar19,lVar13);
      FUN_100004594(unaff_x22 + 0x6f0);
      if (((uint)uVar19 & 0xff) < 5) {
        FUN_100076688(lVar20 + 0x20,unaff_x22 + 0x6a0);
        puVar17 = *(undefined **)(unaff_x22 + 0x6b8);
        lVar13 = *(long *)(unaff_x22 + 0x6c0);
        _Var8.unknown = puVar17;
        FUN_100004640();
        Swift::_StringGuts::grow(0x1b,_Var8);
        _swift_bridgeObjectRelease(0xe000000000000000);
        SVar23.bridgeObject = pvVar11;
        SVar23.str = pcVar10;
        Swift::String::append(SVar22,SVar23);
        FUN_1004f94cc();
        (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                  ((DefaultStringInterpolation)0xd000000000000019);
        *(undefined1 *)(unaff_x22 + 0x70) = 4;
        *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x818);
        *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x820);
        *(undefined8 *)(unaff_x22 + 0x90) = 0;
        *(undefined8 *)(unaff_x22 + 0x88) = 0;
        *(undefined8 *)(unaff_x22 + 0xa0) = 0;
        *(undefined8 *)(unaff_x22 + 0x98) = 0;
        *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dab630;
        *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000021;
        *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dabe50;
        *(undefined8 *)(unaff_x22 + 200) = 0x177;
        *(undefined1 *)(unaff_x22 + 0x1f0) = 4;
        *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x818);
        *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x820);
        *(undefined8 *)(unaff_x22 + 0x210) = 0;
        *(undefined8 *)(unaff_x22 + 0x208) = 0;
        *(undefined8 *)(unaff_x22 + 0x220) = 0;
        *(undefined8 *)(unaff_x22 + 0x218) = 0;
        *(undefined8 *)(unaff_x22 + 0x228) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dab630;
        *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000021;
        *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100dabe50;
        *(undefined8 *)(unaff_x22 + 0x248) = 0x177;
        FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x250);
        FUN_1004eaa3c(unaff_x22 + 0x1f0);
        (**(code **)(lVar13 + 0x28))(unaff_x22 + 0x70,puVar17,lVar13);
        _swift_bridgeObjectRelease(pvVar21);
        FUN_1004eaa3c(unaff_x22 + 0x70);
        FUN_100004594(unaff_x22 + 0x6a0);
      }
      else {
        _swift_bridgeObjectRelease(pvVar21);
      }
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x878);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x890));
    _swift_task_dealloc(uVar19);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar13 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  if (lVar13 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x0001004ecb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_1004ed010:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004ed014 | FUN_1004ed014 */

void FUN_1004ed014(byte param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x8a8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x8a0));
  if (unaff_x20 == 0) {
    *(byte *)(lVar3 + 0x8c3) = param_1 & 1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_1004ed0c4;
    pcVar1 = FUN_1004ed0c8;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_1004ed0c4:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1004eda80;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar3 + 0x860),0);
  return;
}



/* Address: 0x1004ed0c8 | FUN_1004ed0c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1004ed0c8(void)

{
  long lVar1;
  ID self;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((*(byte *)(unaff_x22 + 0x8c3) & 1) == 0) {
    FUN_100076688(*(long *)(unaff_x22 + 0x898) + 0x20,unaff_x22 + 0x718);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x730);
    lVar3 = *(long *)(unaff_x22 + 0x738);
    FUN_100004640(unaff_x22 + 0x718,uVar2);
    (**(code **)(lVar3 + 0x70))(uVar2,lVar3);
    FUN_100004594(unaff_x22 + 0x718);
    if (((uint)uVar2 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0x898) + 0x20,unaff_x22 + 0x6c8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x6e0);
      lVar3 = *(long *)(unaff_x22 + 0x6e8);
      FUN_100004640(unaff_x22 + 0x6c8,uVar2);
      *(undefined1 *)(unaff_x22 + 400) = 1;
      *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000040;
      *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dabf00;
      *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
      *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x1d8) = 0xd000000000000021;
      *(undefined8 *)(unaff_x22 + 0x1e0) = 0x8000000100dabe50;
      *(undefined8 *)(unaff_x22 + 0x1e8) = 0x16c;
      *(undefined1 *)(unaff_x22 + 0x430) = 1;
      *(undefined8 *)(unaff_x22 + 0x438) = 0xd000000000000040;
      *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100dabf00;
      *(undefined8 *)(unaff_x22 + 0x450) = 0;
      *(undefined8 *)(unaff_x22 + 0x448) = 0;
      *(undefined8 *)(unaff_x22 + 0x460) = 0;
      *(undefined8 *)(unaff_x22 + 0x458) = 0;
      *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x478) = 0xd000000000000021;
      *(undefined8 *)(unaff_x22 + 0x480) = 0x8000000100dabe50;
      *(undefined8 *)(unaff_x22 + 0x488) = 0x16c;
      FUN_1004eaa00(unaff_x22 + 400,unaff_x22 + 0x490);
      FUN_1004eaa3c(unaff_x22 + 0x430);
      (**(code **)(lVar3 + 0x28))(unaff_x22 + 400,uVar2,lVar3);
      FUN_1004eaa3c(unaff_x22 + 400);
      FUN_100004594(unaff_x22 + 0x6c8);
    }
    self = *(ID *)(*(long *)(unaff_x22 + 0x860) +
                  _TtC3MCP19HTTPClientTransport::activeGETSessionTask);
    if (self != 0) {
      objc_stub::cancel(self);
    }
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x878);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x890));
  _swift_task_dealloc(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x0001004ed2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004ed2cc | FUN_1004ed2cc */

void FUN_1004ed2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x22;
  _AsyncBytesBuffer _Var4;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = *(undefined1 **)(unaff_x22 + 2000);
  if (puVar3 == *(undefined1 **)(unaff_x22 + 0x7d8)) {
    plVar1 = (long *)(ulong)*(uint *)(PTR__reloadBufferAndNext_100ea6f10 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x8b0) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1004ed49c;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
      _Var4.endPointer.unknown = (undefined *)param_2;
      _Var4.nextPointer.unknown = (undefined *)plVar1;
      _Var4._16_8_ = param_3;
      Foundation::_AsyncBytesBuffer::_reloadBufferAndNext(_Var4);
      return;
    }
  }
  else {
    *(undefined1 *)(unaff_x22 + 0x8c4) = *puVar3;
    *(undefined1 **)(unaff_x22 + 2000) = puVar3 + 1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
      _swift_task_switch(FUN_1004ed398,*(undefined8 *)(unaff_x22 + 0x860),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004ed398 | FUN_1004ed398 */

void FUN_1004ed398(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  uint uVar7;
  Range<__int64> with;
  long unaff_x22;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined1 *)(unaff_x22 + 0x8c4);
  uVar2 = (uint)(*(ulong *)(unaff_x22 + 0x810) >> 0x20);
  uVar7 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    with.unknown = (undefined *)(*(ulong *)(unaff_x22 + 0x810) >> 0x30 & 0xff);
    if (uVar7 != 0) {
      with.unknown = (undefined *)(*(long *)(unaff_x22 + 0x808) >> 0x20);
    }
  }
  else if (uVar7 == 2) {
    with.unknown = *(undefined **)(*(long *)(unaff_x22 + 0x808) + 0x18);
  }
  else {
    with.unknown = (undefined *)0x0;
  }
  puVar3 = &DAT_100fcd4e0;
  FUN_1000f7830(&DAT_100fcd4e0,&DAT_100c53918);
  *(undefined **)(unaff_x22 + 0x640) = puVar3;
  puVar4 = puVar3;
  FUN_1004f96c0();
  *(undefined **)(unaff_x22 + 0x648) = puVar4;
  *(undefined1 *)(unaff_x22 + 0x628) = uVar1;
  puVar5 = (undefined1 *)(unaff_x22 + 0x628);
  FUN_100004640(puVar5,puVar3);
  *(undefined1 *)(unaff_x22 + 0x8c2) = *puVar5;
  Foundation::Data::_Representation::_replaceSubrange
            (with,(__int64)with.unknown,(_Representation)((char)unaff_x22 + -0x3e),1);
  FUN_100004594(unaff_x22 + 0x628);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar6) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _swift_task_switch(FUN_1004ed2cc,0,0);
  return;
}



/* Address: 0x1004ed49c | FUN_1004ed49c */

void FUN_1004ed49c(undefined2 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x8b8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x8b0));
  if (unaff_x20 == 0) {
    *(undefined2 *)(lVar3 + 0x8c0) = param_1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_1004ed548;
    pcVar1 = FUN_1004ed54c;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_1004ed548:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1004ed9f0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar3 + 0x860),0);
  return;
}



/* Address: 0x1004ed54c | FUN_1004ed54c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004ed54c(void)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  Range<__int64> with;
  long lVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String SVar19;
  String SVar20;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(ushort *)(unaff_x22 + 0x8c0);
  if ((uVar1 & 0xff00) == 0x100) {
    lVar15 = *(long *)(unaff_x22 + 0x860);
    _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x7c8));
    lVar16 = *(long *)(lVar15 + _TtC3MCP19HTTPClientTransport::logger);
    pvVar9 = (void *)0x0;
    _swift_beginAccess(lVar16 + 0x20,unaff_x22 + 0x798,0);
    FUN_100076688(lVar16 + 0x20,unaff_x22 + 0x678);
    uVar14 = *(ulong *)(unaff_x22 + 0x690);
    lVar15 = *(long *)(unaff_x22 + 0x698);
    FUN_100004640(unaff_x22 + 0x678,uVar14);
    (**(code **)(lVar15 + 0x70))(uVar14,lVar15);
    FUN_100004594(unaff_x22 + 0x678);
    if ((uVar14 & 0xff) == 0) {
      FUN_100076688(lVar16 + 0x20,unaff_x22 + 0x5b0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x5c8);
      lVar16 = *(long *)(unaff_x22 + 0x5d0);
      FUN_100004640(unaff_x22 + 0x5b0,uVar17);
      puVar4 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar7 = (char *)0x60;
      pcVar8 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x20) = 0x657a6973;
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined1 **)(puVar4 + 0x28) = &DAT_e400000000000000;
      SVar19.bridgeObject = pcVar8;
      SVar19.str = pcVar7;
      Swift::String::reserveCapacity(2,SVar19);
      lVar15 = *(long *)(unaff_x22 + 0x808);
      uVar14 = *(ulong *)(unaff_x22 + 0x810);
      uVar2 = (uint)(uVar14 >> 0x20);
      uVar13 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar13 == 0) {
          uVar12 = uVar14 >> 0x30 & 0xff;
        }
        else {
          iVar10 = (int)((ulong)lVar15 >> 0x20);
          if (SBORROW4(iVar10,(int)lVar15)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1004ed9ec);
            (*pcVar3)();
          }
          uVar12 = (ulong)(iVar10 - (int)lVar15);
        }
      }
      else {
        uVar12 = 0;
        if ((uVar13 == 2) &&
           (uVar12 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10),
           SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10)))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1004ed7b0);
          (*pcVar3)();
        }
      }
      *(ulong *)(unaff_x22 + 0x848) = uVar12;
      SVar19 = Swift::CustomStringConvertible::get_description();
      SVar20.bridgeObject = pvVar9;
      SVar20.str = pcVar8;
      Swift::String::append(SVar19,SVar20);
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
      *(undefined8 *)(puVar4 + 0x30) = 0;
      *(undefined8 *)(puVar4 + 0x38) = 0xe000000000000000;
      puVar4[0x58] = 0;
      puVar5 = puVar4;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar4);
      FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
      _swift_deallocClassInstance(puVar4,0x20,7);
      *(undefined1 *)(unaff_x22 + 0x4f0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4f8) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x500) = 0x8000000100dabea0;
      *(undefined8 *)(unaff_x22 + 0x508) = 0;
      *(undefined **)(unaff_x22 + 0x510) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x520) = 0;
      *(undefined8 *)(unaff_x22 + 0x518) = 0;
      *(undefined8 *)(unaff_x22 + 0x528) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x530) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x538) = 0xd000000000000021;
      *(undefined8 *)(unaff_x22 + 0x540) = 0x8000000100dabe50;
      *(undefined8 *)(unaff_x22 + 0x548) = 0x174;
      *(undefined1 *)(unaff_x22 + 0x2b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2b8) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100dabea0;
      *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
      *(undefined **)(unaff_x22 + 0x2d0) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd000000000000021;
      *(undefined8 *)(unaff_x22 + 0x300) = 0x8000000100dabe50;
      *(undefined8 *)(unaff_x22 + 0x308) = 0x174;
      FUN_1004eaa00(unaff_x22 + 0x4f0,unaff_x22 + 0x370);
      FUN_1004eaa3c(unaff_x22 + 0x2b0);
      (**(code **)(lVar16 + 0x28))(unaff_x22 + 0x4f0,uVar17);
      FUN_1004eaa3c(unaff_x22 + 0x4f0);
      FUN_100004594(unaff_x22 + 0x5b0);
    }
    else {
      lVar15 = *(long *)(unaff_x22 + 0x808);
      uVar14 = *(ulong *)(unaff_x22 + 0x810);
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x878);
    lVar16 = *(long *)(unaff_x22 + 0x870);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x868);
    *(long *)(unaff_x22 + 0x7f8) = lVar15;
    *(ulong *)(unaff_x22 + 0x800) = uVar14;
    FUN_1001037b4(lVar15,uVar14);
    puVar4 = &DAT_100fcb3a0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_yield(uVar17,unaff_x22 + 0x7f8,puVar4);
    (**(code **)(lVar16 + 8))(uVar17,uVar18);
    FUN_10003bf2c(lVar15,uVar14);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x878);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x890));
    _swift_task_dealloc(uVar17);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001004ed9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    uVar2 = (uint)(*(ulong *)(unaff_x22 + 0x810) >> 0x20);
    uVar13 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      with.unknown = (undefined *)(*(ulong *)(unaff_x22 + 0x810) >> 0x30 & 0xff);
      if (uVar13 != 0) {
        with.unknown = (undefined *)(*(long *)(unaff_x22 + 0x808) >> 0x20);
      }
    }
    else if (uVar13 == 2) {
      with.unknown = *(undefined **)(*(long *)(unaff_x22 + 0x808) + 0x18);
    }
    else {
      with.unknown = (undefined *)0x0;
    }
    puVar4 = &DAT_100fcd4e0;
    FUN_1000f7830(&DAT_100fcd4e0,&DAT_100c53918);
    *(undefined **)(unaff_x22 + 0x640) = puVar4;
    puVar5 = puVar4;
    FUN_1004f96c0();
    *(undefined **)(unaff_x22 + 0x648) = puVar5;
    *(char *)(unaff_x22 + 0x628) = (char)uVar1;
    puVar6 = (undefined1 *)(unaff_x22 + 0x628);
    FUN_100004640(puVar6,puVar4);
    *(undefined1 *)(unaff_x22 + 0x8c2) = *puVar6;
    Foundation::Data::_Representation::_replaceSubrange
              (with,(__int64)with.unknown,(_Representation)((char)unaff_x22 + -0x3e),1);
    FUN_100004594(unaff_x22 + 0x628);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar11) {
      _swift_task_switch(FUN_1004ed2cc,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004ed9f0 | FUN_1004ed9f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004ed9f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x7c8));
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x808),*(undefined8 *)(unaff_x22 + 0x810));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x878);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x890));
  _swift_task_dealloc(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001004eda78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004eda80 | FUN_1004eda80 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004eda80(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x878);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x890));
  _swift_task_dealloc(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001004edaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004edafc | FUN_1004edafc */

void FUN_1004edafc(ID *param_1,char *param_2,char *param_3,void *param_4)

{
  long lVar1;
  char *pcVar2;
  Task TVar3;
  ID IVar4;
  ID *pIVar5;
  _StringGuts extraout_x1;
  undefined8 uVar6;
  char *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  ID local_1d8 [12];
  undefined1 auStack_178 [24];
  undefined8 local_160;
  long lStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  pcVar7 = param_3;
  pcVar2 = (char *)objc_stub::statusCode((ID)param_1);
  if (pcVar2 + -200 < (char *)0x64) {
    return;
  }
  if ((long)pcVar2 < 0x194) {
    if (pcVar2 == (char *)0x190) {
      FUN_1004db3ac();
      _swift_allocError(&DAT_100eda9c8,pcVar2,0,0);
      builtin_strncpy(pcVar2,"Bad request",0xc);
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = -0x15;
    }
    else {
      if ((pcVar2 == (char *)0x191) || (pcVar2 == (char *)0x193)) {
        IVar4 = objc_stub::statusCode((ID)param_1);
        FUN_1004f8cf4();
        pIVar5 = param_1;
        FUN_1004f9680();
        _swift_allocError(&DAT_100eda098,pIVar5,0,0);
        *pIVar5 = IVar4;
        pIVar5[1] = (ID)param_1;
        goto LAB_1004ee07c;
      }
LAB_1004edcc8:
      if (pcVar2 + -500 < (char *)0x64) {
        local_150 = 0;
        local_148 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x10,extraout_x1);
        _swift_bridgeObjectRelease(local_148);
        local_150 = 0x6520726576726553;
        local_148 = 0xee00203a726f7272;
        local_1d8[0] = objc_stub::statusCode((ID)param_1);
        SVar10 = Swift::CustomStringConvertible::get_description();
        pcVar2 = SVar10.bridgeObject;
        SVar13.bridgeObject = param_4;
        SVar13.str = pcVar7;
        Swift::String::append(SVar10,SVar13);
        _swift_bridgeObjectRelease();
      }
      else {
        local_150 = 0;
        local_148 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x21,extraout_x1);
        _swift_bridgeObjectRelease(local_148);
        local_150 = 0xd00000000000001a;
        local_148 = 0x8000000100dabc90;
        local_1d8[0] = objc_stub::statusCode((ID)param_1);
        SVar10 = Swift::CustomStringConvertible::get_description();
        SVar14.bridgeObject = param_4;
        SVar14.str = pcVar7;
        Swift::String::append(SVar10,SVar14);
        _swift_bridgeObjectRelease(SVar10.bridgeObject);
        SVar10.bridgeObject = &SUB_e200000000000000;
        SVar10.str = (char *)0x2820;
        SVar15.bridgeObject = param_4;
        SVar15.str = pcVar7;
        Swift::String::append(SVar10,SVar15);
        SVar11.bridgeObject = param_3;
        SVar11.str = param_2;
        SVar16.bridgeObject = param_4;
        SVar16.str = pcVar7;
        Swift::String::append(SVar11,SVar16);
        SVar12.bridgeObject = (void *)0xe100000000000000;
        SVar12.str = (char *)0x29;
        pcVar2 = (char *)0x29;
        SVar17.bridgeObject = param_4;
        SVar17.str = pcVar7;
        Swift::String::append(SVar12,SVar17);
      }
      uVar8 = local_148;
      uVar6 = local_150;
      FUN_1004db3ac();
      _swift_allocError(&DAT_100eda9c8,pcVar2,0,0);
      *(undefined8 *)pcVar2 = uVar6;
      *(undefined8 *)(pcVar2 + 8) = uVar8;
    }
  }
  else if ((long)pcVar2 < 0x198) {
    if (pcVar2 == (char *)0x194) {
      pcVar7 = (char *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::sessionID);
      pcVar2 = pcVar7;
      _swift_beginAccess(pcVar7,auStack_d8,1,0);
      if (*(long *)(pcVar7 + 8) == 0) {
        uVar8 = 0x8000000100dabd20;
        FUN_1004db3ac();
        _swift_allocError(&DAT_100eda9c8,pcVar2,0,0);
        uVar6 = 0xd000000000000012;
        goto LAB_1004ee06c;
      }
      lVar9 = *(long *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::logger);
      _swift_beginAccess(lVar9 + 0x20,auStack_f0,0,0);
      FUN_100076688(lVar9 + 0x20,&local_150);
      lVar1 = lStack_130;
      uVar6 = local_138;
      FUN_100004640(&local_150,local_138);
      (**(code **)(lVar1 + 0x70))(uVar6,lVar1);
      FUN_100004594(&local_150);
      if (((uint)uVar6 & 0xff) < 5) {
        FUN_100076688(lVar9 + 0x20,auStack_178);
        FUN_100004640(auStack_178,local_160);
        local_c0[0] = 4;
        local_b8 = 0xd000000000000013;
        uStack_b0 = 0x8000000100dabd70;
        uStack_a0 = 0;
        local_a8 = 0;
        uStack_90 = 0;
        local_98 = 0;
        local_88 = 0xd00000000000001d;
        uStack_80 = 0x8000000100dab630;
        local_78 = 0xd000000000000023;
        uStack_70 = 0x8000000100dabd40;
        local_68 = 0x192;
        local_150 = CONCAT71(local_150._1_7_,4);
        local_148 = 0xd000000000000013;
        uStack_140 = 0x8000000100dabd70;
        lStack_130 = 0;
        local_138 = 0;
        uStack_120 = 0;
        local_128 = 0;
        local_118 = 0xd00000000000001d;
        uStack_110 = 0x8000000100dab630;
        local_108 = 0xd000000000000023;
        uStack_100 = 0x8000000100dabd40;
        local_f8 = 0x192;
        FUN_1004eaa00(local_c0,local_1d8);
        FUN_1004eaa3c(&local_150);
        (**(code **)(lStack_158 + 0x28))(local_c0,local_160,lStack_158);
        FUN_1004eaa3c(local_c0);
        FUN_100004594(auStack_178);
      }
      pcVar2 = *(char **)(pcVar7 + 8);
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7[4] = '\0';
      pcVar7[5] = '\0';
      pcVar7[6] = '\0';
      pcVar7[7] = '\0';
      pcVar7[8] = '\0';
      pcVar7[9] = '\0';
      pcVar7[10] = '\0';
      pcVar7[0xb] = '\0';
      pcVar7[0xc] = '\0';
      pcVar7[0xd] = '\0';
      pcVar7[0xe] = '\0';
      pcVar7[0xf] = '\0';
      _swift_bridgeObjectRelease();
      FUN_1004db3ac();
      _swift_allocError(&DAT_100eda9c8,pcVar2,0,0);
      pcVar2[8] = 'e';
      pcVar2[9] = 'x';
      pcVar2[10] = 'p';
      pcVar2[0xb] = 'i';
      pcVar2[0xc] = 'r';
      pcVar2[0xd] = 'e';
      pcVar2[0xe] = 'd';
      pcVar2[0xf] = -0x11;
      pcVar2[0] = 'S';
      pcVar2[1] = 'e';
      pcVar2[2] = 's';
      pcVar2[3] = 's';
      pcVar2[4] = 'i';
      pcVar2[5] = 'o';
      pcVar2[6] = 'n';
      pcVar2[7] = ' ';
    }
    else {
      if (pcVar2 != (char *)0x195) goto LAB_1004edcc8;
      if (*(char *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::streaming) == '\x01') {
        pcVar7 = *(char **)(unaff_x20 + _TtC3MCP19HTTPClientTransport::streamingTask);
        if (pcVar7 != (char *)0x0) {
          TVar3.unknown = pcVar7;
          _swift_retain();
          Swift::Task::cancel(TVar3);
          _swift_release();
          pcVar2 = pcVar7;
        }
        uVar8 = 0x8000000100dabcf0;
        FUN_1004db3ac();
        _swift_allocError(&DAT_100eda9c8,pcVar2,0,0);
        uVar6 = 0xd000000000000021;
        goto LAB_1004ee06c;
      }
      FUN_1004db3ac();
      _swift_allocError(&DAT_100eda9c8,pcVar2,0,0);
      pcVar2[0] = '\x12';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      pcVar2[6] = '\0';
      pcVar2[7] = -0x30;
      pcVar2[8] = -0x30;
      pcVar2[9] = -0x44;
      pcVar2[10] = -0x26;
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\x01';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = -0x80;
    }
  }
  else if (pcVar2 == (char *)0x198) {
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,pcVar2,0,0);
    pcVar2[8] = 't';
    pcVar2[9] = 'i';
    pcVar2[10] = 'm';
    pcVar2[0xb] = 'e';
    pcVar2[0xc] = 'o';
    pcVar2[0xd] = 'u';
    pcVar2[0xe] = 't';
    pcVar2[0xf] = -0x11;
    pcVar2[0] = 'R';
    pcVar2[1] = 'e';
    pcVar2[2] = 'q';
    pcVar2[3] = 'u';
    pcVar2[4] = 'e';
    pcVar2[5] = 's';
    pcVar2[6] = 't';
    pcVar2[7] = ' ';
  }
  else {
    if (pcVar2 != (char *)0x1ad) goto LAB_1004edcc8;
    uVar8 = 0x8000000100dabcb0;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,pcVar2,0,0);
    uVar6 = 0xd000000000000011;
LAB_1004ee06c:
    *(undefined8 *)pcVar2 = uVar6;
    *(undefined8 *)(pcVar2 + 8) = uVar8;
  }
  pcVar2[0x10] = '\0';
  pcVar2[0x11] = '\0';
  pcVar2[0x12] = '\0';
  pcVar2[0x13] = '\0';
  pcVar2[0x14] = '\0';
  pcVar2[0x15] = '\0';
  pcVar2[0x16] = '\0';
  pcVar2[0x17] = '\0';
  pcVar2[0x18] = '\x04';
LAB_1004ee07c:
  _swift_willThrow();
  return;
}



/* Address: 0x1004ee0a8 | FUN_1004ee0a8 */

void FUN_1004ee0a8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC3MCP19HTTPClientTransport::messageStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
                    /* WARNING: Could not recover jumptable at 0x0001004ee0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,puVar2);
  return;
}



/* Address: 0x1004ee0fc | FUN_1004ee0fc */

void FUN_1004ee0fc(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 6000) = unaff_x20;
  _swift_task_switch(FUN_1004ee114);
  return;
}



/* Address: 0x1004ee114 | FUN_1004ee114 */

void FUN_1004ee114(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  byte bVar4;
  Task TVar5;
  undefined *puVar6;
  undefined *puVar7;
  Date DVar8;
  ulong uVar9;
  long *plVar10;
  UnownedSerialExecutor UVar11;
  char *pcVar12;
  _StringGuts _Var13;
  char *pcVar14;
  char *pcVar15;
  void *pvVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  DefaultStringInterpolation DVar22;
  long lVar23;
  long unaff_x22;
  long lVar24;
  code *pcVar25;
  long lVar26;
  undefined8 uVar27;
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
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  
  lVar17 = _TtC3MCP19HTTPClientTransport::isConnected;
  *(long *)(unaff_x22 + 0x1778) = _TtC3MCP19HTTPClientTransport::isConnected;
  lVar23 = _TtC3MCP19HTTPClientTransport::sessionID;
  if (*(char *)(*(long *)(unaff_x22 + 6000) + lVar17) == '\x01') {
    *(long *)(unaff_x22 + 0x1780) = _TtC3MCP19HTTPClientTransport::sessionID;
    lVar23 = *(long *)(unaff_x22 + 6000) + lVar23;
    _swift_beginAccess(lVar23,unaff_x22 + 0x15b0,0,0);
    lVar17 = *(long *)(unaff_x22 + 6000);
    if (*(long *)(lVar23 + 8) == 0) {
      lVar23 = *(long *)(lVar17 + _TtC3MCP19HTTPClientTransport::initialSessionIDSignalTask);
      *(long *)(unaff_x22 + 0x1788) = lVar23;
      if (lVar23 != 0) {
        lVar24 = *(long *)(lVar17 + _TtC3MCP19HTTPClientTransport::logger);
        *(long *)(unaff_x22 + 0x1790) = lVar24;
        pcVar14 = (char *)0x0;
        pvVar16 = (void *)0x0;
        _swift_beginAccess(lVar24 + 0x20,unaff_x22 + 0x1550);
        FUN_100076688(lVar24 + 0x20,unaff_x22 + 0x1460);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x1478);
        lVar17 = *(long *)(unaff_x22 + 0x1480);
        FUN_100004640(unaff_x22 + 0x1460,uVar20);
        pcVar25 = *(code **)(lVar17 + 0x70);
        _swift_retain(lVar23);
        (*pcVar25)(uVar20,lVar17);
        FUN_100004594(unaff_x22 + 0x1460);
        if (((uint)uVar20 & 0xff) < 2) {
          lVar26 = *(long *)(unaff_x22 + 6000);
          FUN_100076688(lVar24 + 0x20,unaff_x22 + 0x13c0);
          puVar21 = *(undefined **)(unaff_x22 + 0x13d8);
          lVar17 = *(long *)(unaff_x22 + 0x13e0);
          _Var13.unknown = puVar21;
          FUN_100004640(unaff_x22 + 0x13c0);
          Swift::_StringGuts::grow(0x36,_Var13);
          *(undefined8 *)(unaff_x22 + 0x16a0) = 0;
          *(undefined8 *)(unaff_x22 + 0x16a8) = 0xe000000000000000;
          SVar32.bridgeObject = (void *)0x8000000100dabbb0;
          SVar32.str = (char *)0x100000000000002f;
          SVar48.bridgeObject = pvVar16;
          SVar48.str = pcVar14;
          Swift::String::append(SVar32,SVar48);
          pcVar14 = 
          PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
          ;
          double::_write((undefined *)(unaff_x22 + 0x16a0),
                         *(double *)
                          (lVar26 + _TtC3MCP19HTTPClientTransport::sseInitializationTimeout));
          SVar33.bridgeObject = &DAT_e500000000000000;
          SVar33.str = (char *)0x2e2e2e2973;
          SVar49.bridgeObject = pvVar16;
          SVar49.str = pcVar14;
          Swift::String::append(SVar33,SVar49);
          DVar22.unknown = *(undefined **)(unaff_x22 + 0x16a0);
          FUN_1004f94cc();
          (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(DVar22);
          *(undefined1 *)(unaff_x22 + 0x130) = 1;
          *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x16b0);
          *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x16b8);
          *(undefined8 *)(unaff_x22 + 0x150) = 0;
          *(undefined8 *)(unaff_x22 + 0x148) = 0;
          *(undefined8 *)(unaff_x22 + 0x160) = 0;
          *(undefined8 *)(unaff_x22 + 0x158) = 0;
          *(undefined8 *)(unaff_x22 + 0x168) = 0xd00000000000001d;
          *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dab630;
          *(undefined8 *)(unaff_x22 + 0x178) = 0xd00000000000001f;
          *(undefined8 *)(unaff_x22 + 0x180) = 0x8000000100dab990;
          *(undefined8 *)(unaff_x22 + 0x188) = 0x1e0;
          *(undefined1 *)(unaff_x22 + 0x8b0) = 1;
          *(undefined8 *)(unaff_x22 + 0x8b8) = *(undefined8 *)(unaff_x22 + 0x16b0);
          *(undefined8 *)(unaff_x22 + 0x8c0) = *(undefined8 *)(unaff_x22 + 0x16b8);
          *(undefined8 *)(unaff_x22 + 0x8d0) = 0;
          *(undefined8 *)(unaff_x22 + 0x8c8) = 0;
          *(undefined8 *)(unaff_x22 + 0x8e0) = 0;
          *(undefined8 *)(unaff_x22 + 0x8d8) = 0;
          *(undefined8 *)(unaff_x22 + 0x8e8) = 0xd00000000000001d;
          *(undefined8 *)(unaff_x22 + 0x8f0) = 0x8000000100dab630;
          *(undefined8 *)(unaff_x22 + 0x8f8) = 0xd00000000000001f;
          *(undefined8 *)(unaff_x22 + 0x900) = 0x8000000100dab990;
          *(undefined8 *)(unaff_x22 + 0x908) = 0x1e0;
          FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 0x850);
          FUN_1004eaa3c(unaff_x22 + 0x8b0);
          (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x130,puVar21,lVar17);
          FUN_1004eaa3c(unaff_x22 + 0x130);
          FUN_100004594(unaff_x22 + 0x13c0);
        }
        lVar24 = *(long *)(unaff_x22 + 6000);
        DVar8 = Foundation::Date::typeMetadataAccessor();
        *(undefined **)(unaff_x22 + 0x1798) = DVar8.unknown;
        lVar17 = *(long *)(DVar8.unknown + -8);
        *(long *)(unaff_x22 + 0x17a0) = lVar17;
        lVar17 = *(long *)(lVar17 + 0x40);
        *(long *)(unaff_x22 + 0x17a8) = lVar17;
        uVar9 = lVar17 + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x17b0) = uVar9;
        Foundation::Date::init();
        uVar20 = *(undefined8 *)(lVar24 + _TtC3MCP19HTTPClientTransport::sseInitializationTimeout);
        *(undefined8 *)(unaff_x22 + 0x17b8) = uVar20;
        puVar21 = &DAT_100fcd1d0;
        FUN_100003a00(&DAT_100fcd1d0,FUN_1004e9780,&TargetProtocolConformanceDescriptor_100c537a0);
        *(undefined8 *)(unaff_x22 + 0x120) = uVar20;
        *(long *)(unaff_x22 + 0x128) = lVar23;
        bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        if ((bVar4 & 1) == 0) {
          _swift_getObjectType(*(undefined8 *)(unaff_x22 + 6000));
          UVar11 = Swift::Actor::get_unownedExecutor();
          *(undefined **)(unaff_x22 + 0x17c8) = UVar11.unknown;
          *(undefined **)(unaff_x22 + 0x17d0) = puVar21;
          _swift_task_switch(FUN_1004ef298,UVar11.unknown,puVar21);
          return;
        }
        plVar10 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x17c0) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_1004ef238;
        Swift::_withThrowingTaskGroup();
        return;
      }
    }
    lVar17 = *(long *)(lVar17 + _TtC3MCP19HTTPClientTransport::logger);
    _swift_beginAccess(lVar17 + 0x20,unaff_x22 + 0x1580,0,0);
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x11b8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x11d0);
    lVar23 = *(long *)(unaff_x22 + 0x11d8);
    FUN_100004640(unaff_x22 + 0x11b8,uVar20);
    (**(code **)(lVar23 + 0x70))(uVar20,lVar23);
    FUN_100004594(unaff_x22 + 0x11b8);
    if (((uint)uVar20 & 0xff) < 2) {
      FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x1320);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1338);
      lVar23 = *(long *)(unaff_x22 + 0x1340);
      FUN_100004640(unaff_x22 + 0x1320,uVar20);
      *(undefined1 *)(unaff_x22 + 0x1f0) = 1;
      *(undefined8 *)(unaff_x22 + 0x1f8) = 0x100000000000004c;
      *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dab9b0;
      *(undefined8 *)(unaff_x22 + 0x210) = 0;
      *(undefined8 *)(unaff_x22 + 0x208) = 0;
      *(undefined8 *)(unaff_x22 + 0x220) = 0;
      *(undefined8 *)(unaff_x22 + 0x218) = 0;
      *(undefined8 *)(unaff_x22 + 0x228) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x238) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100dab990;
      *(undefined8 *)(unaff_x22 + 0x248) = 0x1fc;
      *(undefined1 *)(unaff_x22 + 0x730) = 1;
      *(undefined8 *)(unaff_x22 + 0x738) = 0x100000000000004c;
      *(undefined8 *)(unaff_x22 + 0x740) = 0x8000000100dab9b0;
      *(undefined8 *)(unaff_x22 + 0x750) = 0;
      *(undefined8 *)(unaff_x22 + 0x748) = 0;
      *(undefined8 *)(unaff_x22 + 0x760) = 0;
      *(undefined8 *)(unaff_x22 + 0x758) = 0;
      *(undefined8 *)(unaff_x22 + 0x768) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x770) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x778) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x780) = 0x8000000100dab990;
      *(undefined8 *)(unaff_x22 + 0x788) = 0x1fc;
      FUN_1004eaa00(unaff_x22 + 0x1f0,unaff_x22 + 0x7f0);
      FUN_1004eaa3c(unaff_x22 + 0x730);
      (**(code **)(lVar23 + 0x28))(unaff_x22 + 0x1f0,uVar20,lVar23);
      FUN_1004eaa3c(unaff_x22 + 0x1f0);
      FUN_100004594(unaff_x22 + 0x1320);
    }
    *(long *)(unaff_x22 + 0x1810) = lVar17;
    *(undefined8 *)(unaff_x22 + 0x1808) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x1800) = 0x8000000100dab990;
    pcVar14 = (char *)0x0;
    pvVar16 = (void *)0x0;
    _swift_beginAccess(lVar17 + 0x20,unaff_x22 + 0x1568);
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x1370);
    uVar20 = *(undefined8 *)(unaff_x22 + 5000);
    lVar23 = *(long *)(unaff_x22 + 0x1390);
    FUN_100004640(unaff_x22 + 0x1370,uVar20);
    (**(code **)(lVar23 + 0x70))(uVar20,lVar23);
    TVar5.unknown = (undefined *)(unaff_x22 + 0x1370);
    FUN_100004594();
    if (((uint)uVar20 & 0xff) < 2) {
      lVar24 = *(long *)(unaff_x22 + 0x1778);
      lVar23 = *(long *)(unaff_x22 + 6000);
      FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x1348);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1360);
      pcVar14 = *(char **)(unaff_x22 + 0x1368);
      FUN_100004640();
      puVar21 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar12 = (char *)0xa0;
      pcVar15 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar21 + 0x18) = 4;
      *(undefined8 *)(puVar21 + 0x10) = 2;
      *(undefined8 *)(puVar21 + 0x20) = 0x63656e6e6f437369;
      *(undefined8 *)(puVar21 + 0x28) = 0xeb00000000646574;
      SVar36.bridgeObject = pcVar15;
      SVar36.str = pcVar12;
      Swift::String::reserveCapacity(2,SVar36);
      bVar3 = *(char *)(lVar23 + lVar24) == '\0';
      pcVar12 = (char *)0x65757274;
      if (bVar3) {
        pcVar12 = (char *)0x65736c6166;
      }
      pcVar1 = &DAT_e400000000000000;
      if (bVar3) {
        pcVar1 = &DAT_e500000000000000;
      }
      SVar28.bridgeObject = pcVar1;
      SVar28.str = pcVar12;
      SVar43.bridgeObject = pvVar16;
      SVar43.str = pcVar15;
      pcVar12 = pcVar1;
      Swift::String::append(SVar28,SVar43);
      _swift_bridgeObjectRelease(pcVar1);
      *(undefined8 *)(puVar21 + 0x30) = 0;
      *(undefined8 *)(puVar21 + 0x38) = 0xe000000000000000;
      puVar21[0x58] = 0;
      *(undefined8 *)(puVar21 + 0x60) = 0x6c65636e61437369;
      *(undefined8 *)(puVar21 + 0x68) = 0xeb0000000064656c;
      TVar5.unknown = (undefined *)0x2;
      SVar37.bridgeObject = pcVar15;
      SVar37.str = pcVar12;
      Swift::String::reserveCapacity(2,SVar37);
      bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
      pcVar12 = (char *)0x65757274;
      if (!bVar3) {
        pcVar12 = (char *)0x65736c6166;
      }
      puVar2 = &DAT_e400000000000000;
      if (!bVar3) {
        puVar2 = &DAT_e500000000000000;
      }
      SVar29.bridgeObject = puVar2;
      SVar29.str = pcVar12;
      SVar44.bridgeObject = pvVar16;
      SVar44.str = pcVar15;
      Swift::String::append(SVar29,SVar44);
      _swift_bridgeObjectRelease(puVar2);
      *(undefined8 *)(puVar21 + 0x70) = 0;
      *(undefined8 *)(puVar21 + 0x78) = 0xe000000000000000;
      puVar21[0x98] = 0;
      puVar6 = puVar21;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar21);
      puVar7 = &DAT_100fcb448;
      FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
      _swift_arrayDestroy(puVar21 + 0x20,2,puVar7);
      _swift_deallocClassInstance(puVar21,0x20,7);
      *(undefined1 *)(unaff_x22 + 0x250) = 1;
      *(undefined8 *)(unaff_x22 + 600) = 0x100000000000001c;
      *(undefined8 *)(unaff_x22 + 0x260) = 0x8000000100daba00;
      *(undefined8 *)(unaff_x22 + 0x268) = 0;
      *(undefined **)(unaff_x22 + 0x270) = puVar6;
      *(undefined8 *)(unaff_x22 + 0x280) = 0;
      *(undefined8 *)(unaff_x22 + 0x278) = 0;
      *(undefined8 *)(unaff_x22 + 0x288) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x298) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x2a0) = 0x8000000100dab990;
      *(undefined8 *)(unaff_x22 + 0x2a8) = 0x202;
      *(undefined1 *)(unaff_x22 + 0x970) = 1;
      *(undefined8 *)(unaff_x22 + 0x978) = 0x100000000000001c;
      *(undefined8 *)(unaff_x22 + 0x980) = 0x8000000100daba00;
      *(undefined8 *)(unaff_x22 + 0x988) = 0;
      *(undefined **)(unaff_x22 + 0x990) = puVar6;
      *(undefined8 *)(unaff_x22 + 0x9a0) = 0;
      *(undefined8 *)(unaff_x22 + 0x998) = 0;
      *(undefined8 *)(unaff_x22 + 0x9a8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x9b0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x9b8) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x9c0) = 0x8000000100dab990;
      *(undefined8 *)(unaff_x22 + 0x9c8) = 0x202;
      FUN_1004eaa00(unaff_x22 + 0x250,unaff_x22 + 0x9d0);
      FUN_1004eaa3c(unaff_x22 + 0x970);
      (**(code **)(pcVar14 + 0x28))(unaff_x22 + 0x250,uVar20);
      FUN_1004eaa3c(unaff_x22 + 0x250);
      TVar5.unknown = (undefined *)(unaff_x22 + 0x1348);
      FUN_100004594();
    }
    *(undefined8 *)(unaff_x22 + 0x1818) = _TtC3MCP19HTTPClientTransport::retryInterval;
    if ((*(char *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1778)) == '\x01') &&
       (bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5), !bVar3)) {
      *(undefined8 *)(unaff_x22 + 0x1820) = 1;
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1500);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1518);
      lVar23 = *(long *)(unaff_x22 + 0x1520);
      FUN_100004640(unaff_x22 + 0x1500,uVar20);
      (**(code **)(lVar23 + 0x70))(uVar20,lVar23);
      FUN_100004594(unaff_x22 + 0x1500);
      if (((uint)uVar20 & 0xff) < 2) {
        uVar27 = *(undefined8 *)(unaff_x22 + 0x1808);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x1800);
        FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x14b0);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x14c8);
        pcVar14 = *(char **)(unaff_x22 + 0x14d0);
        FUN_100004640();
        puVar21 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar12 = (char *)0xa0;
        pcVar15 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar21 + 0x20) = 0x74706d65747461;
        *(undefined8 *)(puVar21 + 0x18) = 4;
        *(undefined8 *)(puVar21 + 0x10) = 2;
        *(undefined1 **)(puVar21 + 0x28) = &DAT_e700000000000000;
        *(undefined8 *)(unaff_x22 + 0x1670) = 0;
        *(undefined8 *)(unaff_x22 + 0x1678) = 0xe000000000000000;
        SVar41.bridgeObject = pcVar15;
        SVar41.str = pcVar12;
        Swift::String::reserveCapacity(2,SVar41);
        *(undefined8 *)(unaff_x22 + 0x1730) = 1;
        SVar32 = Swift::CustomStringConvertible::get_description();
        SVar50.bridgeObject = pvVar16;
        SVar50.str = pcVar15;
        pcVar12 = SVar32.bridgeObject;
        Swift::String::append(SVar32,SVar50);
        _swift_bridgeObjectRelease(SVar32.bridgeObject);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x1678);
        *(undefined8 *)(puVar21 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1670);
        *(undefined8 *)(puVar21 + 0x38) = uVar18;
        puVar21[0x58] = 0;
        *(undefined8 *)(puVar21 + 0x60) = 0x4174737269467369;
        *(undefined8 *)(puVar21 + 0x68) = 0xee0074706d657474;
        *(undefined8 *)(unaff_x22 + 0x1690) = 0;
        *(undefined8 *)(unaff_x22 + 0x1698) = 0xe000000000000000;
        SVar42.bridgeObject = pcVar15;
        SVar42.str = pcVar12;
        Swift::String::reserveCapacity(2,SVar42);
        SVar34.bridgeObject = &DAT_e400000000000000;
        SVar34.str = (char *)0x65757274;
        SVar51.bridgeObject = pvVar16;
        SVar51.str = pcVar15;
        Swift::String::append(SVar34,SVar51);
        _swift_bridgeObjectRelease(&DAT_e400000000000000);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x1698);
        *(undefined8 *)(puVar21 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1690);
        *(undefined8 *)(puVar21 + 0x78) = uVar18;
        puVar21[0x98] = 0;
        puVar6 = puVar21;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar21);
        puVar7 = &DAT_100fcb448;
        FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
        _swift_arrayDestroy(puVar21 + 0x20,2,puVar7);
        _swift_deallocClassInstance(puVar21,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x2b0) = 1;
        *(undefined8 *)(unaff_x22 + 0x2b8) = 0x100000000000001d;
        *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100daba40;
        *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
        *(undefined **)(unaff_x22 + 0x2d0) = puVar6;
        *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
        *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
        *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x2f0) = uVar27;
        *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0x300) = uVar19;
        *(undefined8 *)(unaff_x22 + 0x308) = 0x209;
        *(undefined1 *)(unaff_x22 + 0xdf0) = 1;
        *(undefined8 *)(unaff_x22 + 0xdf8) = 0x100000000000001d;
        *(undefined8 *)(unaff_x22 + 0xe00) = 0x8000000100daba40;
        *(undefined8 *)(unaff_x22 + 0xe08) = 0;
        *(undefined **)(unaff_x22 + 0xe10) = puVar6;
        *(undefined8 *)(unaff_x22 + 0xe20) = 0;
        *(undefined8 *)(unaff_x22 + 0xe18) = 0;
        *(undefined8 *)(unaff_x22 + 0xe28) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0xe30) = uVar27;
        *(undefined8 *)(unaff_x22 + 0xe38) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0xe40) = uVar19;
        *(undefined8 *)(unaff_x22 + 0xe48) = 0x209;
        FUN_1004eaa00(unaff_x22 + 0x2b0,unaff_x22 + 0xe50);
        FUN_1004eaa3c(unaff_x22 + 0xdf0);
        (**(code **)(pcVar14 + 0x28))(unaff_x22 + 0x2b0,uVar20);
        FUN_1004eaa3c(unaff_x22 + 0x2b0);
        FUN_100004594(unaff_x22 + 0x14b0);
      }
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1118);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1130);
      lVar23 = *(long *)(unaff_x22 + 0x1138);
      FUN_100004640(unaff_x22 + 0x1118,uVar20);
      (**(code **)(lVar23 + 0x70))(uVar20,lVar23);
      FUN_100004594(unaff_x22 + 0x1118);
      if (((uint)uVar20 & 0xff) < 2) {
        uVar20 = *(undefined8 *)(unaff_x22 + 0x1820);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x1808);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x1800);
        FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1410);
        puVar21 = *(undefined **)(unaff_x22 + 0x1428);
        lVar23 = *(long *)(unaff_x22 + 0x1430);
        _Var13.unknown = puVar21;
        FUN_100004640();
        *(undefined8 *)(unaff_x22 + 0x1600) = 0;
        *(undefined8 *)(unaff_x22 + 0x1608) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x2f,_Var13);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1608));
        *(undefined8 *)(unaff_x22 + 0x1650) = 0x100000000000002c;
        *(undefined8 *)(unaff_x22 + 0x1658) = 0x8000000100dabb40;
        *(undefined8 *)(unaff_x22 + 0x1768) = uVar20;
        SVar32 = Swift::CustomStringConvertible::get_description();
        SVar52.bridgeObject = pvVar16;
        SVar52.str = pcVar14;
        Swift::String::append(SVar32,SVar52);
        _swift_bridgeObjectRelease(SVar32.bridgeObject);
        SVar35.bridgeObject = (void *)0xe100000000000000;
        SVar35.str = (char *)0x29;
        SVar53.bridgeObject = pvVar16;
        SVar53.str = pcVar14;
        Swift::String::append(SVar35,SVar53);
        DVar22.unknown = *(undefined **)(unaff_x22 + 0x1650);
        FUN_1004f94cc();
        (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(DVar22);
        *(undefined1 *)(unaff_x22 + 0x3d0) = 1;
        *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x1710);
        *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x1718);
        *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
        *(undefined8 *)(unaff_x22 + 1000) = 0;
        *(undefined8 *)(unaff_x22 + 0x400) = 0;
        *(undefined8 *)(unaff_x22 + 0x3f8) = 0;
        *(undefined8 *)(unaff_x22 + 0x408) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x410) = uVar19;
        *(undefined8 *)(unaff_x22 + 0x418) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0x420) = uVar18;
        *(undefined8 *)(unaff_x22 + 0x428) = 0x217;
        *(undefined1 *)(unaff_x22 + 0xb50) = 1;
        *(undefined8 *)(unaff_x22 + 0xb58) = *(undefined8 *)(unaff_x22 + 0x1710);
        *(undefined8 *)(unaff_x22 + 0xb60) = *(undefined8 *)(unaff_x22 + 0x1718);
        *(undefined8 *)(unaff_x22 + 0xb70) = 0;
        *(undefined8 *)(unaff_x22 + 0xb68) = 0;
        *(undefined8 *)(unaff_x22 + 0xb80) = 0;
        *(undefined8 *)(unaff_x22 + 0xb78) = 0;
        *(undefined8 *)(unaff_x22 + 0xb88) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0xb90) = uVar19;
        *(undefined8 *)(unaff_x22 + 0xb98) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0xba0) = uVar18;
        *(undefined8 *)(unaff_x22 + 0xba8) = 0x217;
        FUN_1004eaa00(unaff_x22 + 0x3d0,unaff_x22 + 0xa90);
        FUN_1004eaa3c(unaff_x22 + 0xb50);
        (**(code **)(lVar23 + 0x28))(unaff_x22 + 0x3d0,puVar21,lVar23);
        FUN_1004eaa3c(unaff_x22 + 0x3d0);
        FUN_100004594(unaff_x22 + 0x1410);
      }
      plVar10 = (long *)0x9f0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1868) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_1004f2c78;
      FUN_1004f54a8();
      return;
    }
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1258);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1270);
    lVar23 = *(long *)(unaff_x22 + 0x1278);
    FUN_100004640(unaff_x22 + 0x1258,uVar20);
    (**(code **)(lVar23 + 0x70))(uVar20,lVar23);
    FUN_100004594(unaff_x22 + 0x1258);
    if (((uint)uVar20 & 0xff) < 2) {
      uVar19 = *(undefined8 *)(unaff_x22 + 0x1808);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1800);
      lVar17 = *(long *)(unaff_x22 + 0x1778);
      lVar24 = *(long *)(unaff_x22 + 6000);
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1230);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1248);
      lVar23 = *(long *)(unaff_x22 + 0x1250);
      FUN_100004640();
      puVar21 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar14 = (char *)0xe0;
      pcVar12 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar21 + 0x18) = 6;
      *(undefined8 *)(puVar21 + 0x10) = 3;
      *(undefined8 *)(puVar21 + 0x20) = 0x63656e6e6f437369;
      *(undefined8 *)(puVar21 + 0x28) = 0xeb00000000646574;
      SVar38.bridgeObject = pcVar12;
      SVar38.str = pcVar14;
      Swift::String::reserveCapacity(2,SVar38);
      bVar3 = *(char *)(lVar24 + lVar17) == '\0';
      pcVar14 = (char *)0x65757274;
      if (bVar3) {
        pcVar14 = (char *)0x65736c6166;
      }
      pcVar15 = &DAT_e400000000000000;
      if (bVar3) {
        pcVar15 = &DAT_e500000000000000;
      }
      SVar30.bridgeObject = pcVar15;
      SVar30.str = pcVar14;
      SVar45.bridgeObject = pvVar16;
      SVar45.str = pcVar12;
      pcVar14 = pcVar15;
      Swift::String::append(SVar30,SVar45);
      _swift_bridgeObjectRelease(pcVar15);
      *(undefined8 *)(puVar21 + 0x30) = 0;
      *(undefined8 *)(puVar21 + 0x38) = 0xe000000000000000;
      puVar21[0x58] = 0;
      *(undefined8 *)(puVar21 + 0x60) = 0x6c65636e61437369;
      *(undefined8 *)(puVar21 + 0x68) = 0xeb0000000064656c;
      TVar5.unknown = (undefined *)0x2;
      SVar39.bridgeObject = pcVar12;
      SVar39.str = pcVar14;
      Swift::String::reserveCapacity(2,SVar39);
      bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
      pcVar14 = (char *)0x65757274;
      if (!bVar3) {
        pcVar14 = (char *)0x65736c6166;
      }
      pcVar15 = &DAT_e400000000000000;
      if (!bVar3) {
        pcVar15 = &DAT_e500000000000000;
      }
      SVar31.bridgeObject = pcVar15;
      SVar31.str = pcVar14;
      SVar46.bridgeObject = pvVar16;
      SVar46.str = pcVar12;
      pcVar14 = pcVar15;
      Swift::String::append(SVar31,SVar46);
      _swift_bridgeObjectRelease(pcVar15);
      *(undefined8 *)(puVar21 + 0x70) = 0;
      *(undefined8 *)(puVar21 + 0x78) = 0xe000000000000000;
      puVar21[0x98] = 0;
      *(undefined8 *)(puVar21 + 0xa0) = 0x7474416c61746f74;
      *(undefined8 *)(puVar21 + 0xa8) = 0xed00007374706d65;
      SVar40.bridgeObject = pcVar12;
      SVar40.str = pcVar14;
      Swift::String::reserveCapacity(2,SVar40);
      *(undefined8 *)(unaff_x22 + 0x1740) = 0;
      SVar32 = Swift::CustomStringConvertible::get_description();
      SVar47.bridgeObject = pvVar16;
      SVar47.str = pcVar12;
      Swift::String::append(SVar32,SVar47);
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
      *(undefined8 *)(puVar21 + 0xb0) = 0;
      *(undefined8 *)(puVar21 + 0xb8) = 0xe000000000000000;
      puVar21[0xd8] = 0;
      puVar6 = puVar21;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar21);
      puVar7 = &DAT_100fcb448;
      FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
      _swift_arrayDestroy(puVar21 + 0x20,3,puVar7);
      _swift_deallocClassInstance(puVar21,0x20,7);
      *(undefined1 *)(unaff_x22 + 0x5b0) = 1;
      *(undefined8 *)(unaff_x22 + 0x5b8) = 0x100000000000001c;
      *(undefined8 *)(unaff_x22 + 0x5c0) = 0x8000000100daba20;
      *(undefined8 *)(unaff_x22 + 0x5c8) = 0;
      *(undefined **)(unaff_x22 + 0x5d0) = puVar6;
      *(undefined8 *)(unaff_x22 + 0x5e0) = 0;
      *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
      *(undefined8 *)(unaff_x22 + 0x5e8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x5f0) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x5f8) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x600) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x608) = 0x22e;
      *(undefined1 *)(unaff_x22 + 0xaf0) = 1;
      *(undefined8 *)(unaff_x22 + 0xaf8) = 0x100000000000001c;
      *(undefined8 *)(unaff_x22 + 0xb00) = 0x8000000100daba20;
      *(undefined8 *)(unaff_x22 + 0xb08) = 0;
      *(undefined **)(unaff_x22 + 0xb10) = puVar6;
      *(undefined8 *)(unaff_x22 + 0xb20) = 0;
      *(undefined8 *)(unaff_x22 + 0xb18) = 0;
      *(undefined8 *)(unaff_x22 + 0xb28) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xb30) = uVar19;
      *(undefined8 *)(unaff_x22 + 0xb38) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xb40) = uVar18;
      *(undefined8 *)(unaff_x22 + 0xb48) = 0x22e;
      FUN_1004eaa00(unaff_x22 + 0x5b0,unaff_x22 + 0xbb0);
      FUN_1004eaa3c(unaff_x22 + 0xaf0);
      (**(code **)(lVar23 + 0x28))(unaff_x22 + 0x5b0,uVar20);
      FUN_1004eaa3c(unaff_x22 + 0x5b0);
      FUN_100004594(unaff_x22 + 0x1230);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001004ee988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004ef238 | FUN_1004ef238 */

void FUN_1004ef238(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x17c0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 6000);
    pcVar1 = FUN_1004ef58c;
  }
  else {
    *(long *)(lVar3 + 0x17f8) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 6000);
    pcVar1 = FUN_1004f049c;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1004ef298 | FUN_1004ef298 */

void FUN_1004ef298(void)

{
  long *plVar1;
  long unaff_x22;
  
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___type_metadata_for____100eae0c8 + 8);
  *(long *)(unaff_x22 + 0x1728) = unaff_x22 + 0x10;
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x17d8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1004ef314;
  FUN_1004f4dac(*(undefined8 *)(unaff_x22 + 0x17b8));
  return;
}



/* Address: 0x1004ef314 | FUN_1004ef314 */

void FUN_1004ef314(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x17e0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x17d8));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1004ef448,*(undefined8 *)(lVar3 + 0x17c8),*(undefined8 *)(lVar3 + 0x17d0)
                      );
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x17e8) = plVar1;
  TVar2.unknown = &DAT_100fcd4d0;
  FUN_1000f7830(&DAT_100fcd4d0,&DAT_100c538f0);
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_1004ef3c4;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x1004ef3c4 | FUN_1004ef3c4 */

void FUN_1004ef3c4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x17e8));
  _swift_task_switch(FUN_1004ef40c,*(undefined8 *)(lVar1 + 0x17c8),*(undefined8 *)(lVar1 + 0x17d0));
  return;
}



/* Address: 0x1004ef40c | FUN_1004ef40c */

void FUN_1004ef40c(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_task_switch(FUN_1004ef58c,*(undefined8 *)(unaff_x22 + 6000),0);
  return;
}



/* Address: 0x1004ef448 | FUN_1004ef448 */

void FUN_1004ef448(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x22;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x1728);
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  Swift::ThrowingTaskGroup::cancelAll(TVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x17f0) = plVar1;
  TVar2.unknown = &DAT_100fcd4d0;
  FUN_1000f7830(&DAT_100fcd4d0,&DAT_100c538f0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1004ef4f0;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x1004ef4f0 | FUN_1004ef4f0 */

void FUN_1004ef4f0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x17f0));
  _swift_task_switch(FUN_1004ef538,*(undefined8 *)(lVar1 + 0x17c8),*(undefined8 *)(lVar1 + 0x17d0));
  return;
}



/* Address: 0x1004ef538 | FUN_1004ef538 */

void FUN_1004ef538(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
  *(undefined8 *)(unaff_x22 + 0x17f8) = *(undefined8 *)(unaff_x22 + 0x17e0);
  _swift_task_switch(FUN_1004f049c,*(undefined8 *)(unaff_x22 + 6000),0);
  return;
}



/* Address: 0x1004ef58c | FUN_1004ef58c */

void FUN_1004ef58c(undefined8 param_1,Date param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulong uVar4;
  Task TVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  _StringGuts _Var9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  Date DVar17;
  undefined8 uVar18;
  DefaultStringInterpolation stringInterpolation;
  long unaff_x22;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  code *pcVar23;
  double dVar24;
  String SVar25;
  String SVar26;
  String SVar27;
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
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  
  if (*(long *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1780) + 8) == 0) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x17b0);
    lVar19 = *(long *)(unaff_x22 + 0x17a0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1798);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1788));
    (**(code **)(lVar19 + 8))(uVar18,uVar15);
  }
  else {
    DVar17.unknown = *(undefined **)(unaff_x22 + 0x17b0);
    lVar19 = *(long *)(unaff_x22 + 0x17a0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1798);
    lVar20 = *(long *)(unaff_x22 + 0x1790);
    uVar4 = *(long *)(unaff_x22 + 0x17a8) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar4);
    Foundation::Date::init();
    dVar24 = Foundation::Date::timeIntervalSince(DVar17,param_2);
    pcVar23 = *(code **)(lVar19 + 8);
    (*pcVar23)(uVar4,uVar15);
    _swift_task_dealloc(uVar4);
    FUN_100076688(lVar20 + 0x20,unaff_x22 + 0x1190);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x11a8);
    lVar19 = *(long *)(unaff_x22 + 0x11b0);
    FUN_100004640(unaff_x22 + 0x1190,uVar15);
    (**(code **)(lVar19 + 0x70))(uVar15,lVar19);
    FUN_100004594(unaff_x22 + 0x1190);
    if (((uint)uVar15 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0x1790) + 0x20,unaff_x22 + 0x1140);
      puVar16 = *(undefined **)(unaff_x22 + 0x1158);
      lVar19 = *(long *)(unaff_x22 + 0x1160);
      _Var9.unknown = puVar16;
      FUN_100004640(unaff_x22 + 0x1140);
      Swift::_StringGuts::grow(0x42,_Var9);
      SVar30.bridgeObject = (void *)0x8000000100dabc40;
      SVar30.str = (char *)0x100000000000001e;
      SVar40.bridgeObject = param_4;
      SVar40.str = param_3;
      Swift::String::append(SVar30,SVar40);
      dVar24 = dVar24 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar24)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1004f0494);
        (*pcVar23)();
      }
      if (dVar24 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1004f0498);
        (*pcVar23)();
      }
      if (9.223372036854776e+18 <= dVar24) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1004f049c);
        (*pcVar23)();
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x17b0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1798);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1788);
      *(long *)(unaff_x22 + 0x1758) = (long)dVar24;
      SVar30 = Swift::CustomStringConvertible::get_description();
      SVar41.bridgeObject = param_4;
      SVar41.str = param_3;
      Swift::String::append(SVar30,SVar41);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      SVar25.bridgeObject = (void *)0x8000000100dabc60;
      SVar25.str = (char *)0xd000000000000022;
      SVar42.bridgeObject = param_4;
      SVar42.str = param_3;
      Swift::String::append(SVar25,SVar42);
      FUN_1004f94cc();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                ((DefaultStringInterpolation)0x0);
      *(undefined1 *)(unaff_x22 + 0xf70) = 1;
      *(undefined8 *)(unaff_x22 + 0xf78) = *(undefined8 *)(unaff_x22 + 0x1620);
      *(undefined8 *)(unaff_x22 + 0xf80) = *(undefined8 *)(unaff_x22 + 0x1628);
      *(undefined8 *)(unaff_x22 + 0xf90) = 0;
      *(undefined8 *)(unaff_x22 + 0xf88) = 0;
      *(undefined8 *)(unaff_x22 + 4000) = 0;
      *(undefined8 *)(unaff_x22 + 0xf98) = 0;
      *(undefined8 *)(unaff_x22 + 0xfa8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xfb0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0xfb8) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xfc0) = 0x8000000100dab990;
      *(undefined8 *)(unaff_x22 + 0xfc8) = 0x1f9;
      *(undefined1 *)(unaff_x22 + 0x610) = 1;
      *(undefined8 *)(unaff_x22 + 0x618) = *(undefined8 *)(unaff_x22 + 0x1620);
      *(undefined8 *)(unaff_x22 + 0x620) = *(undefined8 *)(unaff_x22 + 0x1628);
      *(undefined8 *)(unaff_x22 + 0x630) = 0;
      *(undefined8 *)(unaff_x22 + 0x628) = 0;
      *(undefined8 *)(unaff_x22 + 0x640) = 0;
      *(undefined8 *)(unaff_x22 + 0x638) = 0;
      *(undefined8 *)(unaff_x22 + 0x648) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x650) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x658) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x660) = 0x8000000100dab990;
      *(undefined8 *)(unaff_x22 + 0x668) = 0x1f9;
      FUN_1004eaa00(unaff_x22 + 0xf70,unaff_x22 + 0x1090);
      FUN_1004eaa3c(unaff_x22 + 0x610);
      (**(code **)(lVar19 + 0x28))(unaff_x22 + 0xf70,puVar16,lVar19);
      _swift_release(uVar18);
      FUN_1004eaa3c(unaff_x22 + 0xf70);
      (*pcVar23)(uVar14,uVar15);
      FUN_100004594(unaff_x22 + 0x1140);
    }
    else {
      uVar18 = *(undefined8 *)(unaff_x22 + 0x17b0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1798);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x1788));
      (*pcVar23)(uVar18,uVar15);
    }
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x17b0));
  lVar20 = *(long *)(unaff_x22 + 0x1790);
  *(long *)(unaff_x22 + 0x1810) = lVar20;
  *(undefined8 *)(unaff_x22 + 0x1808) = 0x8000000100dab630;
  *(undefined8 *)(unaff_x22 + 0x1800) = 0x8000000100dab990;
  pcVar11 = (char *)0x0;
  pvVar13 = (void *)0x0;
  _swift_beginAccess(lVar20 + 0x20,unaff_x22 + 0x1568);
  FUN_100076688(lVar20 + 0x20,unaff_x22 + 0x1370);
  uVar15 = *(undefined8 *)(unaff_x22 + 5000);
  lVar19 = *(long *)(unaff_x22 + 0x1390);
  FUN_100004640(unaff_x22 + 0x1370,uVar15);
  (**(code **)(lVar19 + 0x70))(uVar15,lVar19);
  TVar5.unknown = (undefined *)(unaff_x22 + 0x1370);
  FUN_100004594();
  if (((uint)uVar15 & 0xff) < 2) {
    lVar21 = *(long *)(unaff_x22 + 0x1778);
    lVar19 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(lVar20 + 0x20,unaff_x22 + 0x1348);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1360);
    pcVar11 = *(char **)(unaff_x22 + 0x1368);
    FUN_100004640();
    puVar16 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar10 = (char *)0xa0;
    pcVar12 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar16 + 0x18) = 4;
    *(undefined8 *)(puVar16 + 0x10) = 2;
    *(undefined8 *)(puVar16 + 0x20) = 0x63656e6e6f437369;
    *(undefined8 *)(puVar16 + 0x28) = 0xeb00000000646574;
    SVar33.bridgeObject = pcVar12;
    SVar33.str = pcVar10;
    Swift::String::reserveCapacity(2,SVar33);
    bVar3 = *(char *)(lVar19 + lVar21) == '\0';
    pcVar10 = (char *)0x65757274;
    if (bVar3) {
      pcVar10 = (char *)0x65736c6166;
    }
    pcVar1 = &DAT_e400000000000000;
    if (bVar3) {
      pcVar1 = &DAT_e500000000000000;
    }
    SVar26.bridgeObject = pcVar1;
    SVar26.str = pcVar10;
    SVar43.bridgeObject = pvVar13;
    SVar43.str = pcVar12;
    pcVar10 = pcVar1;
    Swift::String::append(SVar26,SVar43);
    _swift_bridgeObjectRelease(pcVar1);
    *(undefined8 *)(puVar16 + 0x30) = 0;
    *(undefined8 *)(puVar16 + 0x38) = 0xe000000000000000;
    puVar16[0x58] = 0;
    *(undefined8 *)(puVar16 + 0x60) = 0x6c65636e61437369;
    *(undefined8 *)(puVar16 + 0x68) = 0xeb0000000064656c;
    TVar5.unknown = (undefined *)0x2;
    SVar34.bridgeObject = pcVar12;
    SVar34.str = pcVar10;
    Swift::String::reserveCapacity(2,SVar34);
    bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
    pcVar10 = (char *)0x65757274;
    if (!bVar3) {
      pcVar10 = (char *)0x65736c6166;
    }
    puVar2 = &DAT_e400000000000000;
    if (!bVar3) {
      puVar2 = &DAT_e500000000000000;
    }
    SVar27.bridgeObject = puVar2;
    SVar27.str = pcVar10;
    SVar44.bridgeObject = pvVar13;
    SVar44.str = pcVar12;
    Swift::String::append(SVar27,SVar44);
    _swift_bridgeObjectRelease(puVar2);
    *(undefined8 *)(puVar16 + 0x70) = 0;
    *(undefined8 *)(puVar16 + 0x78) = 0xe000000000000000;
    puVar16[0x98] = 0;
    puVar6 = puVar16;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar16);
    puVar7 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar16 + 0x20,2,puVar7);
    _swift_deallocClassInstance(puVar16,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x250) = 1;
    *(undefined8 *)(unaff_x22 + 600) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0x260) = 0x8000000100daba00;
    *(undefined8 *)(unaff_x22 + 0x268) = 0;
    *(undefined **)(unaff_x22 + 0x270) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x280) = 0;
    *(undefined8 *)(unaff_x22 + 0x278) = 0;
    *(undefined8 *)(unaff_x22 + 0x288) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x298) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x2a0) = 0x8000000100dab990;
    *(undefined8 *)(unaff_x22 + 0x2a8) = 0x202;
    *(undefined1 *)(unaff_x22 + 0x970) = 1;
    *(undefined8 *)(unaff_x22 + 0x978) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0x980) = 0x8000000100daba00;
    *(undefined8 *)(unaff_x22 + 0x988) = 0;
    *(undefined **)(unaff_x22 + 0x990) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x9a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x998) = 0;
    *(undefined8 *)(unaff_x22 + 0x9a8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x9b0) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x9b8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x9c0) = 0x8000000100dab990;
    *(undefined8 *)(unaff_x22 + 0x9c8) = 0x202;
    FUN_1004eaa00(unaff_x22 + 0x250,unaff_x22 + 0x9d0);
    FUN_1004eaa3c(unaff_x22 + 0x970);
    (**(code **)(pcVar11 + 0x28))(unaff_x22 + 0x250,uVar15);
    FUN_1004eaa3c(unaff_x22 + 0x250);
    TVar5.unknown = (undefined *)(unaff_x22 + 0x1348);
    FUN_100004594();
  }
  *(undefined8 *)(unaff_x22 + 0x1818) = _TtC3MCP19HTTPClientTransport::retryInterval;
  if ((*(char *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1778)) == '\x01') &&
     (bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5), !bVar3)) {
    *(undefined8 *)(unaff_x22 + 0x1820) = 1;
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1500);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1518);
    lVar19 = *(long *)(unaff_x22 + 0x1520);
    FUN_100004640(unaff_x22 + 0x1500,uVar15);
    (**(code **)(lVar19 + 0x70))(uVar15,lVar19);
    FUN_100004594(unaff_x22 + 0x1500);
    if (((uint)uVar15 & 0xff) < 2) {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x1808);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x1800);
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x14b0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x14c8);
      pcVar11 = *(char **)(unaff_x22 + 0x14d0);
      FUN_100004640();
      puVar16 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar10 = (char *)0xa0;
      pcVar12 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar16 + 0x20) = 0x74706d65747461;
      *(undefined8 *)(puVar16 + 0x18) = 4;
      *(undefined8 *)(puVar16 + 0x10) = 2;
      *(undefined1 **)(puVar16 + 0x28) = &DAT_e700000000000000;
      *(undefined8 *)(unaff_x22 + 0x1670) = 0;
      *(undefined8 *)(unaff_x22 + 0x1678) = 0xe000000000000000;
      SVar38.bridgeObject = pcVar12;
      SVar38.str = pcVar10;
      Swift::String::reserveCapacity(2,SVar38);
      *(undefined8 *)(unaff_x22 + 0x1730) = 1;
      SVar30 = Swift::CustomStringConvertible::get_description();
      SVar48.bridgeObject = pvVar13;
      SVar48.str = pcVar12;
      pcVar10 = SVar30.bridgeObject;
      Swift::String::append(SVar30,SVar48);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1678);
      *(undefined8 *)(puVar16 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1670);
      *(undefined8 *)(puVar16 + 0x38) = uVar18;
      puVar16[0x58] = 0;
      *(undefined8 *)(puVar16 + 0x60) = 0x4174737269467369;
      *(undefined8 *)(puVar16 + 0x68) = 0xee0074706d657474;
      *(undefined8 *)(unaff_x22 + 0x1690) = 0;
      *(undefined8 *)(unaff_x22 + 0x1698) = 0xe000000000000000;
      SVar39.bridgeObject = pcVar12;
      SVar39.str = pcVar10;
      Swift::String::reserveCapacity(2,SVar39);
      SVar31.bridgeObject = &DAT_e400000000000000;
      SVar31.str = (char *)0x65757274;
      SVar49.bridgeObject = pvVar13;
      SVar49.str = pcVar12;
      Swift::String::append(SVar31,SVar49);
      _swift_bridgeObjectRelease(&DAT_e400000000000000);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1698);
      *(undefined8 *)(puVar16 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1690);
      *(undefined8 *)(puVar16 + 0x78) = uVar18;
      puVar16[0x98] = 0;
      puVar6 = puVar16;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar16);
      puVar7 = &DAT_100fcb448;
      FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
      _swift_arrayDestroy(puVar16 + 0x20,2,puVar7);
      _swift_deallocClassInstance(puVar16,0x20,7);
      *(undefined1 *)(unaff_x22 + 0x2b0) = 1;
      *(undefined8 *)(unaff_x22 + 0x2b8) = 0x100000000000001d;
      *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100daba40;
      *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
      *(undefined **)(unaff_x22 + 0x2d0) = puVar6;
      *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x2f0) = uVar22;
      *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x300) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x308) = 0x209;
      *(undefined1 *)(unaff_x22 + 0xdf0) = 1;
      *(undefined8 *)(unaff_x22 + 0xdf8) = 0x100000000000001d;
      *(undefined8 *)(unaff_x22 + 0xe00) = 0x8000000100daba40;
      *(undefined8 *)(unaff_x22 + 0xe08) = 0;
      *(undefined **)(unaff_x22 + 0xe10) = puVar6;
      *(undefined8 *)(unaff_x22 + 0xe20) = 0;
      *(undefined8 *)(unaff_x22 + 0xe18) = 0;
      *(undefined8 *)(unaff_x22 + 0xe28) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xe30) = uVar22;
      *(undefined8 *)(unaff_x22 + 0xe38) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xe40) = uVar14;
      *(undefined8 *)(unaff_x22 + 0xe48) = 0x209;
      FUN_1004eaa00(unaff_x22 + 0x2b0,unaff_x22 + 0xe50);
      FUN_1004eaa3c(unaff_x22 + 0xdf0);
      (**(code **)(pcVar11 + 0x28))(unaff_x22 + 0x2b0,uVar15);
      FUN_1004eaa3c(unaff_x22 + 0x2b0);
      FUN_100004594(unaff_x22 + 0x14b0);
    }
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1118);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1130);
    lVar19 = *(long *)(unaff_x22 + 0x1138);
    FUN_100004640(unaff_x22 + 0x1118,uVar15);
    (**(code **)(lVar19 + 0x70))(uVar15,lVar19);
    FUN_100004594(unaff_x22 + 0x1118);
    if (((uint)uVar15 & 0xff) < 2) {
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1820);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x1808);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1800);
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1410);
      puVar16 = *(undefined **)(unaff_x22 + 0x1428);
      lVar19 = *(long *)(unaff_x22 + 0x1430);
      _Var9.unknown = puVar16;
      FUN_100004640();
      *(undefined8 *)(unaff_x22 + 0x1600) = 0;
      *(undefined8 *)(unaff_x22 + 0x1608) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x2f,_Var9);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1608));
      *(undefined8 *)(unaff_x22 + 0x1650) = 0x100000000000002c;
      *(undefined8 *)(unaff_x22 + 0x1658) = 0x8000000100dabb40;
      *(undefined8 *)(unaff_x22 + 0x1768) = uVar15;
      SVar30 = Swift::CustomStringConvertible::get_description();
      SVar50.bridgeObject = pvVar13;
      SVar50.str = pcVar11;
      Swift::String::append(SVar30,SVar50);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      SVar32.bridgeObject = (void *)0xe100000000000000;
      SVar32.str = (char *)0x29;
      SVar51.bridgeObject = pvVar13;
      SVar51.str = pcVar11;
      Swift::String::append(SVar32,SVar51);
      stringInterpolation.unknown = *(undefined **)(unaff_x22 + 0x1650);
      FUN_1004f94cc();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(stringInterpolation);
      *(undefined1 *)(unaff_x22 + 0x3d0) = 1;
      *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x1710);
      *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x1718);
      *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
      *(undefined8 *)(unaff_x22 + 1000) = 0;
      *(undefined8 *)(unaff_x22 + 0x400) = 0;
      *(undefined8 *)(unaff_x22 + 0x3f8) = 0;
      *(undefined8 *)(unaff_x22 + 0x408) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x410) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x418) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x420) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x428) = 0x217;
      *(undefined1 *)(unaff_x22 + 0xb50) = 1;
      *(undefined8 *)(unaff_x22 + 0xb58) = *(undefined8 *)(unaff_x22 + 0x1710);
      *(undefined8 *)(unaff_x22 + 0xb60) = *(undefined8 *)(unaff_x22 + 0x1718);
      *(undefined8 *)(unaff_x22 + 0xb70) = 0;
      *(undefined8 *)(unaff_x22 + 0xb68) = 0;
      *(undefined8 *)(unaff_x22 + 0xb80) = 0;
      *(undefined8 *)(unaff_x22 + 0xb78) = 0;
      *(undefined8 *)(unaff_x22 + 0xb88) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xb90) = uVar14;
      *(undefined8 *)(unaff_x22 + 0xb98) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xba0) = uVar18;
      *(undefined8 *)(unaff_x22 + 0xba8) = 0x217;
      FUN_1004eaa00(unaff_x22 + 0x3d0,unaff_x22 + 0xa90);
      FUN_1004eaa3c(unaff_x22 + 0xb50);
      (**(code **)(lVar19 + 0x28))(unaff_x22 + 0x3d0,puVar16,lVar19);
      FUN_1004eaa3c(unaff_x22 + 0x3d0);
      FUN_100004594(unaff_x22 + 0x1410);
    }
    plVar8 = (long *)0x9f0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1868) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1004f2c78;
    FUN_1004f54a8();
    return;
  }
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1258);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1270);
  lVar19 = *(long *)(unaff_x22 + 0x1278);
  FUN_100004640(unaff_x22 + 0x1258,uVar15);
  (**(code **)(lVar19 + 0x70))(uVar15,lVar19);
  FUN_100004594(unaff_x22 + 0x1258);
  if (((uint)uVar15 & 0xff) < 2) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1800);
    lVar20 = *(long *)(unaff_x22 + 0x1778);
    lVar21 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1230);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1248);
    lVar19 = *(long *)(unaff_x22 + 0x1250);
    FUN_100004640();
    puVar16 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar11 = (char *)0xe0;
    pcVar10 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar16 + 0x18) = 6;
    *(undefined8 *)(puVar16 + 0x10) = 3;
    *(undefined8 *)(puVar16 + 0x20) = 0x63656e6e6f437369;
    *(undefined8 *)(puVar16 + 0x28) = 0xeb00000000646574;
    SVar35.bridgeObject = pcVar10;
    SVar35.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar35);
    bVar3 = *(char *)(lVar21 + lVar20) == '\0';
    pcVar11 = (char *)0x65757274;
    if (bVar3) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar12 = &DAT_e400000000000000;
    if (bVar3) {
      pcVar12 = &DAT_e500000000000000;
    }
    SVar28.bridgeObject = pcVar12;
    SVar28.str = pcVar11;
    SVar45.bridgeObject = pvVar13;
    SVar45.str = pcVar10;
    pcVar11 = pcVar12;
    Swift::String::append(SVar28,SVar45);
    _swift_bridgeObjectRelease(pcVar12);
    *(undefined8 *)(puVar16 + 0x30) = 0;
    *(undefined8 *)(puVar16 + 0x38) = 0xe000000000000000;
    puVar16[0x58] = 0;
    *(undefined8 *)(puVar16 + 0x60) = 0x6c65636e61437369;
    *(undefined8 *)(puVar16 + 0x68) = 0xeb0000000064656c;
    TVar5.unknown = (undefined *)0x2;
    SVar36.bridgeObject = pcVar10;
    SVar36.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar36);
    bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
    pcVar11 = (char *)0x65757274;
    if (!bVar3) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar12 = &DAT_e400000000000000;
    if (!bVar3) {
      pcVar12 = &DAT_e500000000000000;
    }
    SVar29.bridgeObject = pcVar12;
    SVar29.str = pcVar11;
    SVar46.bridgeObject = pvVar13;
    SVar46.str = pcVar10;
    pcVar11 = pcVar12;
    Swift::String::append(SVar29,SVar46);
    _swift_bridgeObjectRelease(pcVar12);
    *(undefined8 *)(puVar16 + 0x70) = 0;
    *(undefined8 *)(puVar16 + 0x78) = 0xe000000000000000;
    puVar16[0x98] = 0;
    *(undefined8 *)(puVar16 + 0xa0) = 0x7474416c61746f74;
    *(undefined8 *)(puVar16 + 0xa8) = 0xed00007374706d65;
    SVar37.bridgeObject = pcVar10;
    SVar37.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar37);
    *(undefined8 *)(unaff_x22 + 0x1740) = 0;
    SVar30 = Swift::CustomStringConvertible::get_description();
    SVar47.bridgeObject = pvVar13;
    SVar47.str = pcVar10;
    Swift::String::append(SVar30,SVar47);
    _swift_bridgeObjectRelease(SVar30.bridgeObject);
    *(undefined8 *)(puVar16 + 0xb0) = 0;
    *(undefined8 *)(puVar16 + 0xb8) = 0xe000000000000000;
    puVar16[0xd8] = 0;
    puVar6 = puVar16;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar16);
    puVar7 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar16 + 0x20,3,puVar7);
    _swift_deallocClassInstance(puVar16,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x5b0) = 1;
    *(undefined8 *)(unaff_x22 + 0x5b8) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0x5c0) = 0x8000000100daba20;
    *(undefined8 *)(unaff_x22 + 0x5c8) = 0;
    *(undefined **)(unaff_x22 + 0x5d0) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x5e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x5e8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x5f0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x5f8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x600) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x608) = 0x22e;
    *(undefined1 *)(unaff_x22 + 0xaf0) = 1;
    *(undefined8 *)(unaff_x22 + 0xaf8) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0xb00) = 0x8000000100daba20;
    *(undefined8 *)(unaff_x22 + 0xb08) = 0;
    *(undefined **)(unaff_x22 + 0xb10) = puVar6;
    *(undefined8 *)(unaff_x22 + 0xb20) = 0;
    *(undefined8 *)(unaff_x22 + 0xb18) = 0;
    *(undefined8 *)(unaff_x22 + 0xb28) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xb30) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xb38) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xb40) = uVar18;
    *(undefined8 *)(unaff_x22 + 0xb48) = 0x22e;
    FUN_1004eaa00(unaff_x22 + 0x5b0,unaff_x22 + 0xbb0);
    FUN_1004eaa3c(unaff_x22 + 0xaf0);
    (**(code **)(lVar19 + 0x28))(unaff_x22 + 0x5b0,uVar15);
    FUN_1004eaa3c(unaff_x22 + 0x5b0);
    FUN_100004594(unaff_x22 + 0x1230);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004eff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f049c | FUN_1004f049c */

void FUN_1004f049c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulong uVar4;
  Task TVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  _StringGuts _Var9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  Date DVar17;
  undefined8 uVar18;
  DefaultStringInterpolation DVar19;
  Date DVar20;
  long unaff_x22;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  code *pcVar25;
  double dVar26;
  String SVar27;
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
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  
  FUN_100076688(*(long *)(unaff_x22 + 0x1790) + 0x20,unaff_x22 + 0x1208);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1220);
  DVar20.unknown = *(undefined **)(unaff_x22 + 0x1228);
  FUN_100004640(unaff_x22 + 0x1208,uVar15);
  (**(code **)(DVar20.unknown + 0x70))();
  FUN_100004594(unaff_x22 + 0x1208);
  if (((uint)uVar15 & 0xff) < 5) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x17f8);
    dVar26 = *(double *)(unaff_x22 + 0x17b8);
    FUN_100076688(*(long *)(unaff_x22 + 0x1790) + 0x20,unaff_x22 + 0x11e0);
    DVar20.unknown = *(undefined **)(unaff_x22 + 0x11f8);
    pcVar10 = *(char **)(unaff_x22 + 0x1200);
    _Var9.unknown = DVar20.unknown;
    FUN_100004640(unaff_x22 + 0x11e0);
    Swift::_StringGuts::grow(0x4c,_Var9);
    *(undefined8 *)(unaff_x22 + 0x16f0) = 0;
    *(undefined8 *)(unaff_x22 + 0x16f8) = 0xe000000000000000;
    SVar34.bridgeObject = (void *)0x8000000100dabbe0;
    SVar34.str = (char *)0x1000000000000027;
    SVar44.bridgeObject = param_4;
    SVar44.str = param_3;
    Swift::String::append(SVar34,SVar44);
    pcVar11 = 
    PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
    ;
    double::_write((undefined *)(unaff_x22 + 0x16f0),dVar26);
    pvVar13 = (void *)0xd000000000000023;
    SVar27.bridgeObject = (void *)0x8000000100dabc10;
    SVar27.str = (char *)0xd000000000000023;
    SVar45.bridgeObject = param_4;
    SVar45.str = pcVar11;
    Swift::String::append(SVar27,SVar45);
    DVar19.unknown = *(undefined **)(unaff_x22 + 0x16f0);
    FUN_1004f94cc();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(DVar19);
    *(undefined1 *)(unaff_x22 + 0x790) = 4;
    *(undefined8 *)(unaff_x22 + 0x798) = *(undefined8 *)(unaff_x22 + 0x1680);
    *(undefined8 *)(unaff_x22 + 0x7a0) = *(undefined8 *)(unaff_x22 + 0x1688);
    *(undefined8 *)(unaff_x22 + 0x7b0) = 0;
    *(undefined8 *)(unaff_x22 + 0x7a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x7c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x7b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x7c8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 2000) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x7d8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x7e0) = 0x8000000100dab990;
    *(undefined8 *)(unaff_x22 + 0x7e8) = 500;
    *(undefined1 *)(unaff_x22 + 0x6d0) = 4;
    *(undefined8 *)(unaff_x22 + 0x6d8) = *(undefined8 *)(unaff_x22 + 0x1680);
    *(undefined8 *)(unaff_x22 + 0x6e0) = *(undefined8 *)(unaff_x22 + 0x1688);
    *(undefined8 *)(unaff_x22 + 0x6f0) = 0;
    *(undefined8 *)(unaff_x22 + 0x6e8) = 0;
    *(undefined8 *)(unaff_x22 + 0x700) = 0;
    *(undefined8 *)(unaff_x22 + 0x6f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x708) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x710) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x718) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x720) = 0x8000000100dab990;
    *(undefined8 *)(unaff_x22 + 0x728) = 500;
    FUN_1004eaa00(unaff_x22 + 0x790,unaff_x22 + 0x670);
    FUN_1004eaa3c(unaff_x22 + 0x6d0);
    (**(code **)(pcVar10 + 0x28))(unaff_x22 + 0x790);
    _swift_errorRelease(uVar15);
    FUN_1004eaa3c(unaff_x22 + 0x790);
    FUN_100004594(unaff_x22 + 0x11e0);
  }
  else {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x17f8));
    pcVar10 = param_3;
    pvVar13 = param_4;
  }
  DVar17.unknown = *(undefined **)(unaff_x22 + 0x17b0);
  if (*(long *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1780) + 8) == 0) {
    lVar21 = *(long *)(unaff_x22 + 0x17a0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1798);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1788));
    (**(code **)(lVar21 + 8))(DVar17.unknown,uVar15);
  }
  else {
    lVar21 = *(long *)(unaff_x22 + 0x17a0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1798);
    lVar22 = *(long *)(unaff_x22 + 0x1790);
    uVar4 = *(long *)(unaff_x22 + 0x17a8) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar4);
    Foundation::Date::init();
    dVar26 = Foundation::Date::timeIntervalSince(DVar17,DVar20);
    pcVar25 = *(code **)(lVar21 + 8);
    (*pcVar25)(uVar4,uVar15);
    _swift_task_dealloc(uVar4);
    FUN_100076688(lVar22 + 0x20,unaff_x22 + 0x1190);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x11a8);
    lVar21 = *(long *)(unaff_x22 + 0x11b0);
    FUN_100004640(unaff_x22 + 0x1190,uVar15);
    (**(code **)(lVar21 + 0x70))(uVar15,lVar21);
    FUN_100004594(unaff_x22 + 0x1190);
    if (((uint)uVar15 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0x1790) + 0x20,unaff_x22 + 0x1140);
      puVar16 = *(undefined **)(unaff_x22 + 0x1158);
      lVar21 = *(long *)(unaff_x22 + 0x1160);
      _Var9.unknown = puVar16;
      FUN_100004640();
      Swift::_StringGuts::grow(0x42,_Var9);
      SVar28.bridgeObject = (void *)0x8000000100dabc40;
      SVar28.str = (char *)0x100000000000001e;
      SVar46.bridgeObject = pvVar13;
      SVar46.str = pcVar10;
      Swift::String::append(SVar28,SVar46);
      dVar26 = dVar26 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar26)) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1004f15ac);
        (*pcVar25)();
      }
      if (dVar26 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1004f15b0);
        (*pcVar25)();
      }
      if (9.223372036854776e+18 <= dVar26) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1004f15b4);
        (*pcVar25)();
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x17b0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1798);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1788);
      *(long *)(unaff_x22 + 0x1758) = (long)dVar26;
      SVar34 = Swift::CustomStringConvertible::get_description();
      SVar47.bridgeObject = pvVar13;
      SVar47.str = pcVar10;
      Swift::String::append(SVar34,SVar47);
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      SVar29.bridgeObject = (void *)0x8000000100dabc60;
      SVar29.str = (char *)0xd000000000000022;
      SVar48.bridgeObject = pvVar13;
      SVar48.str = pcVar10;
      Swift::String::append(SVar29,SVar48);
      FUN_1004f94cc();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                ((DefaultStringInterpolation)0x0);
      *(undefined1 *)(unaff_x22 + 0xf70) = 1;
      *(undefined8 *)(unaff_x22 + 0xf78) = *(undefined8 *)(unaff_x22 + 0x1620);
      *(undefined8 *)(unaff_x22 + 0xf80) = *(undefined8 *)(unaff_x22 + 0x1628);
      *(undefined8 *)(unaff_x22 + 0xf90) = 0;
      *(undefined8 *)(unaff_x22 + 0xf88) = 0;
      *(undefined8 *)(unaff_x22 + 4000) = 0;
      *(undefined8 *)(unaff_x22 + 0xf98) = 0;
      *(undefined8 *)(unaff_x22 + 0xfa8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xfb0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0xfb8) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xfc0) = 0x8000000100dab990;
      *(undefined8 *)(unaff_x22 + 0xfc8) = 0x1f9;
      *(undefined1 *)(unaff_x22 + 0x610) = 1;
      *(undefined8 *)(unaff_x22 + 0x618) = *(undefined8 *)(unaff_x22 + 0x1620);
      *(undefined8 *)(unaff_x22 + 0x620) = *(undefined8 *)(unaff_x22 + 0x1628);
      *(undefined8 *)(unaff_x22 + 0x630) = 0;
      *(undefined8 *)(unaff_x22 + 0x628) = 0;
      *(undefined8 *)(unaff_x22 + 0x640) = 0;
      *(undefined8 *)(unaff_x22 + 0x638) = 0;
      *(undefined8 *)(unaff_x22 + 0x648) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x650) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x658) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x660) = 0x8000000100dab990;
      *(undefined8 *)(unaff_x22 + 0x668) = 0x1f9;
      FUN_1004eaa00(unaff_x22 + 0xf70,unaff_x22 + 0x1090);
      FUN_1004eaa3c(unaff_x22 + 0x610);
      (**(code **)(lVar21 + 0x28))(unaff_x22 + 0xf70,puVar16,lVar21);
      _swift_release(uVar18);
      FUN_1004eaa3c(unaff_x22 + 0xf70);
      (*pcVar25)(uVar14,uVar15);
      FUN_100004594(unaff_x22 + 0x1140);
    }
    else {
      uVar18 = *(undefined8 *)(unaff_x22 + 0x17b0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1798);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x1788));
      (*pcVar25)(uVar18,uVar15);
    }
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x17b0));
  lVar22 = *(long *)(unaff_x22 + 0x1790);
  *(long *)(unaff_x22 + 0x1810) = lVar22;
  *(undefined8 *)(unaff_x22 + 0x1808) = 0x8000000100dab630;
  *(undefined8 *)(unaff_x22 + 0x1800) = 0x8000000100dab990;
  pcVar11 = (char *)0x0;
  pvVar13 = (void *)0x0;
  _swift_beginAccess(lVar22 + 0x20,unaff_x22 + 0x1568);
  FUN_100076688(lVar22 + 0x20,unaff_x22 + 0x1370);
  uVar15 = *(undefined8 *)(unaff_x22 + 5000);
  lVar21 = *(long *)(unaff_x22 + 0x1390);
  FUN_100004640(unaff_x22 + 0x1370,uVar15);
  (**(code **)(lVar21 + 0x70))(uVar15,lVar21);
  TVar5.unknown = (undefined *)(unaff_x22 + 0x1370);
  FUN_100004594();
  if (((uint)uVar15 & 0xff) < 2) {
    lVar23 = *(long *)(unaff_x22 + 0x1778);
    lVar21 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(lVar22 + 0x20,unaff_x22 + 0x1348);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1360);
    pcVar11 = *(char **)(unaff_x22 + 0x1368);
    FUN_100004640();
    puVar16 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar10 = (char *)0xa0;
    pcVar12 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar16 + 0x18) = 4;
    *(undefined8 *)(puVar16 + 0x10) = 2;
    *(undefined8 *)(puVar16 + 0x20) = 0x63656e6e6f437369;
    *(undefined8 *)(puVar16 + 0x28) = 0xeb00000000646574;
    SVar37.bridgeObject = pcVar12;
    SVar37.str = pcVar10;
    Swift::String::reserveCapacity(2,SVar37);
    bVar3 = *(char *)(lVar21 + lVar23) == '\0';
    pcVar10 = (char *)0x65757274;
    if (bVar3) {
      pcVar10 = (char *)0x65736c6166;
    }
    pcVar1 = &DAT_e400000000000000;
    if (bVar3) {
      pcVar1 = &DAT_e500000000000000;
    }
    SVar30.bridgeObject = pcVar1;
    SVar30.str = pcVar10;
    SVar49.bridgeObject = pvVar13;
    SVar49.str = pcVar12;
    pcVar10 = pcVar1;
    Swift::String::append(SVar30,SVar49);
    _swift_bridgeObjectRelease(pcVar1);
    *(undefined8 *)(puVar16 + 0x30) = 0;
    *(undefined8 *)(puVar16 + 0x38) = 0xe000000000000000;
    puVar16[0x58] = 0;
    *(undefined8 *)(puVar16 + 0x60) = 0x6c65636e61437369;
    *(undefined8 *)(puVar16 + 0x68) = 0xeb0000000064656c;
    TVar5.unknown = (undefined *)0x2;
    SVar38.bridgeObject = pcVar12;
    SVar38.str = pcVar10;
    Swift::String::reserveCapacity(2,SVar38);
    bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
    pcVar10 = (char *)0x65757274;
    if (!bVar3) {
      pcVar10 = (char *)0x65736c6166;
    }
    puVar2 = &DAT_e400000000000000;
    if (!bVar3) {
      puVar2 = &DAT_e500000000000000;
    }
    SVar31.bridgeObject = puVar2;
    SVar31.str = pcVar10;
    SVar50.bridgeObject = pvVar13;
    SVar50.str = pcVar12;
    Swift::String::append(SVar31,SVar50);
    _swift_bridgeObjectRelease(puVar2);
    *(undefined8 *)(puVar16 + 0x70) = 0;
    *(undefined8 *)(puVar16 + 0x78) = 0xe000000000000000;
    puVar16[0x98] = 0;
    puVar6 = puVar16;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar16);
    puVar7 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar16 + 0x20,2,puVar7);
    _swift_deallocClassInstance(puVar16,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x250) = 1;
    *(undefined8 *)(unaff_x22 + 600) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0x260) = 0x8000000100daba00;
    *(undefined8 *)(unaff_x22 + 0x268) = 0;
    *(undefined **)(unaff_x22 + 0x270) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x280) = 0;
    *(undefined8 *)(unaff_x22 + 0x278) = 0;
    *(undefined8 *)(unaff_x22 + 0x288) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x298) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x2a0) = 0x8000000100dab990;
    *(undefined8 *)(unaff_x22 + 0x2a8) = 0x202;
    *(undefined1 *)(unaff_x22 + 0x970) = 1;
    *(undefined8 *)(unaff_x22 + 0x978) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0x980) = 0x8000000100daba00;
    *(undefined8 *)(unaff_x22 + 0x988) = 0;
    *(undefined **)(unaff_x22 + 0x990) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x9a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x998) = 0;
    *(undefined8 *)(unaff_x22 + 0x9a8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x9b0) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x9b8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x9c0) = 0x8000000100dab990;
    *(undefined8 *)(unaff_x22 + 0x9c8) = 0x202;
    FUN_1004eaa00(unaff_x22 + 0x250,unaff_x22 + 0x9d0);
    FUN_1004eaa3c(unaff_x22 + 0x970);
    (**(code **)(pcVar11 + 0x28))(unaff_x22 + 0x250,uVar15);
    FUN_1004eaa3c(unaff_x22 + 0x250);
    TVar5.unknown = (undefined *)(unaff_x22 + 0x1348);
    FUN_100004594();
  }
  *(undefined8 *)(unaff_x22 + 0x1818) = _TtC3MCP19HTTPClientTransport::retryInterval;
  if ((*(char *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1778)) == '\x01') &&
     (bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5), !bVar3)) {
    *(undefined8 *)(unaff_x22 + 0x1820) = 1;
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1500);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1518);
    lVar21 = *(long *)(unaff_x22 + 0x1520);
    FUN_100004640(unaff_x22 + 0x1500,uVar15);
    (**(code **)(lVar21 + 0x70))(uVar15,lVar21);
    FUN_100004594(unaff_x22 + 0x1500);
    if (((uint)uVar15 & 0xff) < 2) {
      uVar24 = *(undefined8 *)(unaff_x22 + 0x1808);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x1800);
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x14b0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x14c8);
      pcVar11 = *(char **)(unaff_x22 + 0x14d0);
      FUN_100004640();
      puVar16 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar10 = (char *)0xa0;
      pcVar12 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar16 + 0x20) = 0x74706d65747461;
      *(undefined8 *)(puVar16 + 0x18) = 4;
      *(undefined8 *)(puVar16 + 0x10) = 2;
      *(undefined1 **)(puVar16 + 0x28) = &DAT_e700000000000000;
      *(undefined8 *)(unaff_x22 + 0x1670) = 0;
      *(undefined8 *)(unaff_x22 + 0x1678) = 0xe000000000000000;
      SVar42.bridgeObject = pcVar12;
      SVar42.str = pcVar10;
      Swift::String::reserveCapacity(2,SVar42);
      *(undefined8 *)(unaff_x22 + 0x1730) = 1;
      SVar34 = Swift::CustomStringConvertible::get_description();
      SVar54.bridgeObject = pvVar13;
      SVar54.str = pcVar12;
      pcVar10 = SVar34.bridgeObject;
      Swift::String::append(SVar34,SVar54);
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1678);
      *(undefined8 *)(puVar16 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1670);
      *(undefined8 *)(puVar16 + 0x38) = uVar18;
      puVar16[0x58] = 0;
      *(undefined8 *)(puVar16 + 0x60) = 0x4174737269467369;
      *(undefined8 *)(puVar16 + 0x68) = 0xee0074706d657474;
      *(undefined8 *)(unaff_x22 + 0x1690) = 0;
      *(undefined8 *)(unaff_x22 + 0x1698) = 0xe000000000000000;
      SVar43.bridgeObject = pcVar12;
      SVar43.str = pcVar10;
      Swift::String::reserveCapacity(2,SVar43);
      SVar35.bridgeObject = &DAT_e400000000000000;
      SVar35.str = (char *)0x65757274;
      SVar55.bridgeObject = pvVar13;
      SVar55.str = pcVar12;
      Swift::String::append(SVar35,SVar55);
      _swift_bridgeObjectRelease(&DAT_e400000000000000);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1698);
      *(undefined8 *)(puVar16 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1690);
      *(undefined8 *)(puVar16 + 0x78) = uVar18;
      puVar16[0x98] = 0;
      puVar6 = puVar16;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar16);
      puVar7 = &DAT_100fcb448;
      FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
      _swift_arrayDestroy(puVar16 + 0x20,2,puVar7);
      _swift_deallocClassInstance(puVar16,0x20,7);
      *(undefined1 *)(unaff_x22 + 0x2b0) = 1;
      *(undefined8 *)(unaff_x22 + 0x2b8) = 0x100000000000001d;
      *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100daba40;
      *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
      *(undefined **)(unaff_x22 + 0x2d0) = puVar6;
      *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x2f0) = uVar24;
      *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x300) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x308) = 0x209;
      *(undefined1 *)(unaff_x22 + 0xdf0) = 1;
      *(undefined8 *)(unaff_x22 + 0xdf8) = 0x100000000000001d;
      *(undefined8 *)(unaff_x22 + 0xe00) = 0x8000000100daba40;
      *(undefined8 *)(unaff_x22 + 0xe08) = 0;
      *(undefined **)(unaff_x22 + 0xe10) = puVar6;
      *(undefined8 *)(unaff_x22 + 0xe20) = 0;
      *(undefined8 *)(unaff_x22 + 0xe18) = 0;
      *(undefined8 *)(unaff_x22 + 0xe28) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xe30) = uVar24;
      *(undefined8 *)(unaff_x22 + 0xe38) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xe40) = uVar14;
      *(undefined8 *)(unaff_x22 + 0xe48) = 0x209;
      FUN_1004eaa00(unaff_x22 + 0x2b0,unaff_x22 + 0xe50);
      FUN_1004eaa3c(unaff_x22 + 0xdf0);
      (**(code **)(pcVar11 + 0x28))(unaff_x22 + 0x2b0,uVar15);
      FUN_1004eaa3c(unaff_x22 + 0x2b0);
      FUN_100004594(unaff_x22 + 0x14b0);
    }
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1118);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1130);
    lVar21 = *(long *)(unaff_x22 + 0x1138);
    FUN_100004640(unaff_x22 + 0x1118,uVar15);
    (**(code **)(lVar21 + 0x70))(uVar15,lVar21);
    FUN_100004594(unaff_x22 + 0x1118);
    if (((uint)uVar15 & 0xff) < 2) {
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1820);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x1808);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1800);
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1410);
      puVar16 = *(undefined **)(unaff_x22 + 0x1428);
      lVar21 = *(long *)(unaff_x22 + 0x1430);
      _Var9.unknown = puVar16;
      FUN_100004640();
      *(undefined8 *)(unaff_x22 + 0x1600) = 0;
      *(undefined8 *)(unaff_x22 + 0x1608) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x2f,_Var9);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1608));
      *(undefined8 *)(unaff_x22 + 0x1650) = 0x100000000000002c;
      *(undefined8 *)(unaff_x22 + 0x1658) = 0x8000000100dabb40;
      *(undefined8 *)(unaff_x22 + 0x1768) = uVar15;
      SVar34 = Swift::CustomStringConvertible::get_description();
      SVar56.bridgeObject = pvVar13;
      SVar56.str = pcVar11;
      Swift::String::append(SVar34,SVar56);
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      SVar36.bridgeObject = (void *)0xe100000000000000;
      SVar36.str = (char *)0x29;
      SVar57.bridgeObject = pvVar13;
      SVar57.str = pcVar11;
      Swift::String::append(SVar36,SVar57);
      DVar19.unknown = *(undefined **)(unaff_x22 + 0x1650);
      FUN_1004f94cc();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(DVar19);
      *(undefined1 *)(unaff_x22 + 0x3d0) = 1;
      *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x1710);
      *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x1718);
      *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
      *(undefined8 *)(unaff_x22 + 1000) = 0;
      *(undefined8 *)(unaff_x22 + 0x400) = 0;
      *(undefined8 *)(unaff_x22 + 0x3f8) = 0;
      *(undefined8 *)(unaff_x22 + 0x408) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x410) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x418) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x420) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x428) = 0x217;
      *(undefined1 *)(unaff_x22 + 0xb50) = 1;
      *(undefined8 *)(unaff_x22 + 0xb58) = *(undefined8 *)(unaff_x22 + 0x1710);
      *(undefined8 *)(unaff_x22 + 0xb60) = *(undefined8 *)(unaff_x22 + 0x1718);
      *(undefined8 *)(unaff_x22 + 0xb70) = 0;
      *(undefined8 *)(unaff_x22 + 0xb68) = 0;
      *(undefined8 *)(unaff_x22 + 0xb80) = 0;
      *(undefined8 *)(unaff_x22 + 0xb78) = 0;
      *(undefined8 *)(unaff_x22 + 0xb88) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xb90) = uVar14;
      *(undefined8 *)(unaff_x22 + 0xb98) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xba0) = uVar18;
      *(undefined8 *)(unaff_x22 + 0xba8) = 0x217;
      FUN_1004eaa00(unaff_x22 + 0x3d0,unaff_x22 + 0xa90);
      FUN_1004eaa3c(unaff_x22 + 0xb50);
      (**(code **)(lVar21 + 0x28))(unaff_x22 + 0x3d0,puVar16,lVar21);
      FUN_1004eaa3c(unaff_x22 + 0x3d0);
      FUN_100004594(unaff_x22 + 0x1410);
    }
    plVar8 = (long *)0x9f0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1868) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1004f2c78;
    FUN_1004f54a8();
    return;
  }
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1258);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1270);
  lVar21 = *(long *)(unaff_x22 + 0x1278);
  FUN_100004640(unaff_x22 + 0x1258,uVar15);
  (**(code **)(lVar21 + 0x70))(uVar15,lVar21);
  FUN_100004594(unaff_x22 + 0x1258);
  if (((uint)uVar15 & 0xff) < 2) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1800);
    lVar22 = *(long *)(unaff_x22 + 0x1778);
    lVar23 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1230);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1248);
    lVar21 = *(long *)(unaff_x22 + 0x1250);
    FUN_100004640();
    puVar16 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar11 = (char *)0xe0;
    pcVar10 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar16 + 0x18) = 6;
    *(undefined8 *)(puVar16 + 0x10) = 3;
    *(undefined8 *)(puVar16 + 0x20) = 0x63656e6e6f437369;
    *(undefined8 *)(puVar16 + 0x28) = 0xeb00000000646574;
    SVar39.bridgeObject = pcVar10;
    SVar39.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar39);
    bVar3 = *(char *)(lVar23 + lVar22) == '\0';
    pcVar11 = (char *)0x65757274;
    if (bVar3) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar12 = &DAT_e400000000000000;
    if (bVar3) {
      pcVar12 = &DAT_e500000000000000;
    }
    SVar32.bridgeObject = pcVar12;
    SVar32.str = pcVar11;
    SVar51.bridgeObject = pvVar13;
    SVar51.str = pcVar10;
    pcVar11 = pcVar12;
    Swift::String::append(SVar32,SVar51);
    _swift_bridgeObjectRelease(pcVar12);
    *(undefined8 *)(puVar16 + 0x30) = 0;
    *(undefined8 *)(puVar16 + 0x38) = 0xe000000000000000;
    puVar16[0x58] = 0;
    *(undefined8 *)(puVar16 + 0x60) = 0x6c65636e61437369;
    *(undefined8 *)(puVar16 + 0x68) = 0xeb0000000064656c;
    TVar5.unknown = (undefined *)0x2;
    SVar40.bridgeObject = pcVar10;
    SVar40.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar40);
    bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
    pcVar11 = (char *)0x65757274;
    if (!bVar3) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar12 = &DAT_e400000000000000;
    if (!bVar3) {
      pcVar12 = &DAT_e500000000000000;
    }
    SVar33.bridgeObject = pcVar12;
    SVar33.str = pcVar11;
    SVar52.bridgeObject = pvVar13;
    SVar52.str = pcVar10;
    pcVar11 = pcVar12;
    Swift::String::append(SVar33,SVar52);
    _swift_bridgeObjectRelease(pcVar12);
    *(undefined8 *)(puVar16 + 0x70) = 0;
    *(undefined8 *)(puVar16 + 0x78) = 0xe000000000000000;
    puVar16[0x98] = 0;
    *(undefined8 *)(puVar16 + 0xa0) = 0x7474416c61746f74;
    *(undefined8 *)(puVar16 + 0xa8) = 0xed00007374706d65;
    SVar41.bridgeObject = pcVar10;
    SVar41.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar41);
    *(undefined8 *)(unaff_x22 + 0x1740) = 0;
    SVar34 = Swift::CustomStringConvertible::get_description();
    SVar53.bridgeObject = pvVar13;
    SVar53.str = pcVar10;
    Swift::String::append(SVar34,SVar53);
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    *(undefined8 *)(puVar16 + 0xb0) = 0;
    *(undefined8 *)(puVar16 + 0xb8) = 0xe000000000000000;
    puVar16[0xd8] = 0;
    puVar6 = puVar16;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar16);
    puVar7 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar16 + 0x20,3,puVar7);
    _swift_deallocClassInstance(puVar16,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x5b0) = 1;
    *(undefined8 *)(unaff_x22 + 0x5b8) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0x5c0) = 0x8000000100daba20;
    *(undefined8 *)(unaff_x22 + 0x5c8) = 0;
    *(undefined **)(unaff_x22 + 0x5d0) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x5e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x5e8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x5f0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x5f8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x600) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x608) = 0x22e;
    *(undefined1 *)(unaff_x22 + 0xaf0) = 1;
    *(undefined8 *)(unaff_x22 + 0xaf8) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0xb00) = 0x8000000100daba20;
    *(undefined8 *)(unaff_x22 + 0xb08) = 0;
    *(undefined **)(unaff_x22 + 0xb10) = puVar6;
    *(undefined8 *)(unaff_x22 + 0xb20) = 0;
    *(undefined8 *)(unaff_x22 + 0xb18) = 0;
    *(undefined8 *)(unaff_x22 + 0xb28) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xb30) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xb38) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xb40) = uVar18;
    *(undefined8 *)(unaff_x22 + 0xb48) = 0x22e;
    FUN_1004eaa00(unaff_x22 + 0x5b0,unaff_x22 + 0xbb0);
    FUN_1004eaa3c(unaff_x22 + 0xaf0);
    (**(code **)(lVar21 + 0x28))(unaff_x22 + 0x5b0,uVar15);
    FUN_1004eaa3c(unaff_x22 + 0x5b0);
    FUN_100004594(unaff_x22 + 0x1230);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004f1088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f15b4 | FUN_1004f15b4 */

void FUN_1004f15b4(void)

{
  undefined *puVar1;
  Instant IVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  long unaff_x22;
  long lVar7;
  
  IVar2 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaeef0;
  *(undefined **)(unaff_x22 + 0x1840) = IVar2.unknown;
  lVar7 = *(long *)(IVar2.unknown + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1848) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_100003a00(&DAT_100fcd4b8,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fcd4c0,puVar1,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar6 = *(code **)(lVar7 + 8);
  *(code **)(unaff_x22 + 0x1850) = pcVar6;
  (*pcVar6)(uVar4,IVar2.unknown);
  _swift_task_dealloc(uVar4);
  plVar5 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1858) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1004f16fc;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x1004f16fc | FUN_1004f16fc */

void FUN_1004f16fc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar6 = *unaff_x22;
  *(long *)(lVar6 + 0x1860) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x1858));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar6 + 0x1848);
    uVar3 = *(undefined8 *)(lVar6 + 0x1838);
    lVar7 = *(long *)(lVar6 + 0x1830);
    uVar5 = *(undefined8 *)(lVar6 + 0x1828);
    uVar2 = *(undefined8 *)(lVar6 + 6000);
    (**(code **)(lVar6 + 0x1850))(uVar4,*(undefined8 *)(lVar6 + 0x1840));
    (**(code **)(lVar7 + 8))(uVar3,uVar5);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar3);
    pcVar1 = FUN_1004f17c0;
  }
  else {
    (**(code **)(lVar6 + 0x1850))(*(undefined8 *)(lVar6 + 0x1848),*(undefined8 *)(lVar6 + 0x1840));
    pcVar1 = FUN_1004f1b64;
    uVar2 = 0;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1004f17c0 | FUN_1004f17c0 */

void FUN_1004f17c0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long *plVar1;
  _StringGuts _Var2;
  undefined8 uVar3;
  undefined *puVar4;
  DefaultStringInterpolation stringInterpolation;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1488);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x14a0);
  lVar5 = *(long *)(unaff_x22 + 0x14a8);
  FUN_100004640(unaff_x22 + 0x1488,uVar3);
  (**(code **)(lVar5 + 0x70))(uVar3,lVar5);
  FUN_100004594(unaff_x22 + 0x1488);
  if (((uint)uVar3 & 0xff) < 2) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1800);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x14d8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x14f0);
    param_3 = *(char **)(unaff_x22 + 0x14f8);
    FUN_100004640(unaff_x22 + 0x14d8,uVar3);
    *(undefined1 *)(unaff_x22 + 0x370) = 1;
    *(undefined8 *)(unaff_x22 + 0x378) = 0x1000000000000023;
    *(undefined8 *)(unaff_x22 + 0x380) = 0x8000000100dabb10;
    *(undefined8 *)(unaff_x22 + 0x390) = 0;
    *(undefined8 *)(unaff_x22 + 0x388) = 0;
    *(undefined8 *)(unaff_x22 + 0x3a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x398) = 0;
    *(undefined8 *)(unaff_x22 + 0x3a8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x3b0) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x3b8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x3c0) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x3c8) = 0x213;
    *(undefined1 *)(unaff_x22 + 0xc70) = 1;
    *(undefined8 *)(unaff_x22 + 0xc78) = 0x1000000000000023;
    *(undefined8 *)(unaff_x22 + 0xc80) = 0x8000000100dabb10;
    *(undefined8 *)(unaff_x22 + 0xc90) = 0;
    *(undefined8 *)(unaff_x22 + 0xc88) = 0;
    *(undefined8 *)(unaff_x22 + 0xca0) = 0;
    *(undefined8 *)(unaff_x22 + 0xc98) = 0;
    *(undefined8 *)(unaff_x22 + 0xca8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xcb0) = uVar6;
    *(undefined8 *)(unaff_x22 + 0xcb8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xcc0) = uVar7;
    *(undefined8 *)(unaff_x22 + 0xcc8) = 0x213;
    FUN_1004eaa00(unaff_x22 + 0x370,unaff_x22 + 0xc10);
    FUN_1004eaa3c(unaff_x22 + 0xc70);
    (**(code **)(param_3 + 0x28))(unaff_x22 + 0x370,uVar3);
    FUN_1004eaa3c(unaff_x22 + 0x370);
    FUN_100004594(unaff_x22 + 0x14d8);
  }
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1130);
  lVar5 = *(long *)(unaff_x22 + 0x1138);
  FUN_100004640(unaff_x22 + 0x1118,uVar3);
  (**(code **)(lVar5 + 0x70))(uVar3,lVar5);
  FUN_100004594(unaff_x22 + 0x1118);
  if (((uint)uVar3 & 0xff) < 2) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1820);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1800);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1410);
    puVar4 = *(undefined **)(unaff_x22 + 0x1428);
    lVar5 = *(long *)(unaff_x22 + 0x1430);
    _Var2.unknown = puVar4;
    FUN_100004640();
    *(undefined8 *)(unaff_x22 + 0x1600) = 0;
    *(undefined8 *)(unaff_x22 + 0x1608) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2f,_Var2);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1608));
    *(undefined8 *)(unaff_x22 + 0x1650) = 0x100000000000002c;
    *(undefined8 *)(unaff_x22 + 0x1658) = 0x8000000100dabb40;
    *(undefined8 *)(unaff_x22 + 0x1768) = uVar3;
    SVar8 = Swift::CustomStringConvertible::get_description();
    SVar9.bridgeObject = param_4;
    SVar9.str = param_3;
    Swift::String::append(SVar8,SVar9);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    SVar8.bridgeObject = (void *)0xe100000000000000;
    SVar8.str = (char *)0x29;
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar8,SVar10);
    stringInterpolation.unknown = *(undefined **)(unaff_x22 + 0x1650);
    FUN_1004f94cc();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(stringInterpolation);
    *(undefined1 *)(unaff_x22 + 0x3d0) = 1;
    *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x1710);
    *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x1718);
    *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
    *(undefined8 *)(unaff_x22 + 1000) = 0;
    *(undefined8 *)(unaff_x22 + 0x400) = 0;
    *(undefined8 *)(unaff_x22 + 0x3f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x408) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x410) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x418) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x420) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x428) = 0x217;
    *(undefined1 *)(unaff_x22 + 0xb50) = 1;
    *(undefined8 *)(unaff_x22 + 0xb58) = *(undefined8 *)(unaff_x22 + 0x1710);
    *(undefined8 *)(unaff_x22 + 0xb60) = *(undefined8 *)(unaff_x22 + 0x1718);
    *(undefined8 *)(unaff_x22 + 0xb70) = 0;
    *(undefined8 *)(unaff_x22 + 0xb68) = 0;
    *(undefined8 *)(unaff_x22 + 0xb80) = 0;
    *(undefined8 *)(unaff_x22 + 0xb78) = 0;
    *(undefined8 *)(unaff_x22 + 0xb88) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xb90) = uVar7;
    *(undefined8 *)(unaff_x22 + 0xb98) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xba0) = uVar6;
    *(undefined8 *)(unaff_x22 + 0xba8) = 0x217;
    FUN_1004eaa00(unaff_x22 + 0x3d0,unaff_x22 + 0xa90);
    FUN_1004eaa3c(unaff_x22 + 0xb50);
    (**(code **)(lVar5 + 0x28))(unaff_x22 + 0x3d0,puVar4,lVar5);
    FUN_1004eaa3c(unaff_x22 + 0x3d0);
    FUN_100004594(unaff_x22 + 0x1410);
  }
  plVar1 = (long *)0x9f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1868) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1004f2c78;
  FUN_1004f54a8();
  return;
}



/* Address: 0x1004f1b64 | FUN_1004f1b64 */

void FUN_1004f1b64(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 6000);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1848));
  _swift_task_switch(FUN_1004f1ba4,uVar1,0);
  return;
}



/* Address: 0x1004f1ba4 | FUN_1004f1ba4 */

void FUN_1004f1ba4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ContinuousClock CVar7;
  ulong uVar8;
  undefined *puVar9;
  _StringGuts _Var10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  Task TVar15;
  DefaultStringInterpolation stringInterpolation;
  undefined8 uVar16;
  long unaff_x22;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  char *pcVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  long lVar24;
  String SVar25;
  String SVar26;
  String SVar27;
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
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  
  TVar15.unknown = *(undefined **)(unaff_x22 + 0x1838);
  (**(code **)(*(long *)(unaff_x22 + 0x1830) + 8))
            (TVar15.unknown,*(undefined8 *)(unaff_x22 + 0x1828));
  _swift_task_dealloc();
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1860);
  bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar15);
  if (bVar4) {
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x13e8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1400);
    lVar17 = *(long *)(unaff_x22 + 0x1408);
    FUN_100004640(unaff_x22 + 0x13e8,uVar16);
    (**(code **)(lVar17 + 0x70))(uVar16,lVar17);
    FUN_100004594(unaff_x22 + 0x13e8);
    if (1 < ((uint)uVar16 & 0xff)) {
LAB_1004f1d90:
      _swift_errorRelease(uVar13);
      goto LAB_1004f1f8c;
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1800);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1438);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1450);
    lVar17 = *(long *)(unaff_x22 + 0x1458);
    FUN_100004640(unaff_x22 + 0x1438,uVar16);
    *(undefined1 *)(unaff_x22 + 0x490) = 1;
    *(undefined8 *)(unaff_x22 + 0x498) = 0x1000000000000019;
    *(undefined8 *)(unaff_x22 + 0x4a0) = 0x8000000100dabaf0;
    *(undefined8 *)(unaff_x22 + 0x4b0) = 0;
    *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x4d0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x4d8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x4e0) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x4e8) = 0x223;
    *(undefined1 *)(unaff_x22 + 0xd30) = 1;
    *(undefined8 *)(unaff_x22 + 0xd38) = 0x1000000000000019;
    *(undefined8 *)(unaff_x22 + 0xd40) = 0x8000000100dabaf0;
    *(undefined8 *)(unaff_x22 + 0xd50) = 0;
    *(undefined8 *)(unaff_x22 + 0xd48) = 0;
    *(undefined8 *)(unaff_x22 + 0xd60) = 0;
    *(undefined8 *)(unaff_x22 + 0xd58) = 0;
    *(undefined8 *)(unaff_x22 + 0xd68) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xd70) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xd78) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xd80) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xd88) = 0x223;
    FUN_1004eaa00(unaff_x22 + 0x490,unaff_x22 + 0xcd0);
    FUN_1004eaa3c(unaff_x22 + 0xd30);
    (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x490,uVar16,lVar17);
    _swift_errorRelease(uVar13);
    FUN_1004eaa3c(unaff_x22 + 0x490);
    lVar17 = 0x1438;
  }
  else {
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1528);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1540);
    lVar17 = *(long *)(unaff_x22 + 0x1548);
    FUN_100004640(unaff_x22 + 0x1528,uVar16);
    (**(code **)(lVar17 + 0x70))(uVar16,lVar17);
    FUN_100004594(unaff_x22 + 0x1528);
    if (5 < ((uint)uVar16 & 0xff)) goto LAB_1004f1d90;
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1820);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1800);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1168);
    puVar9 = *(undefined **)(unaff_x22 + 0x1180);
    lVar17 = *(long *)(unaff_x22 + 0x1188);
    _Var10.unknown = puVar9;
    FUN_100004640();
    *(undefined8 *)(unaff_x22 + 0x1660) = 0;
    *(undefined8 *)(unaff_x22 + 0x1668) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2a,_Var10);
    *(undefined8 *)(unaff_x22 + 0x1640) = *(undefined8 *)(unaff_x22 + 0x1660);
    *(undefined8 *)(unaff_x22 + 0x1648) = *(undefined8 *)(unaff_x22 + 0x1668);
    SVar31.bridgeObject = (void *)0x8000000100daba90;
    SVar31.str = (char *)0x1000000000000023;
    SVar42.bridgeObject = param_4;
    SVar42.str = param_3;
    Swift::String::append(SVar31,SVar42);
    *(undefined8 *)(unaff_x22 + 0x1738) = uVar19;
    SVar31 = Swift::CustomStringConvertible::get_description();
    SVar43.bridgeObject = param_4;
    SVar43.str = param_3;
    Swift::String::append(SVar31,SVar43);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    SVar25.bridgeObject = (void *)0xe300000000000000;
    SVar25.str = (char *)0x203a29;
    SVar44.bridgeObject = param_4;
    SVar44.str = param_3;
    Swift::String::append(SVar25,SVar44);
    _swift_getErrorValue(uVar13,unaff_x22 + 0x1720,unaff_x22 + 0x1598);
    param_4 = *(void **)(unaff_x22 + 0x1598);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (param_4,*(undefined8 *)(unaff_x22 + 0x15a0));
    stringInterpolation.unknown = *(undefined **)(unaff_x22 + 0x1640);
    FUN_1004f94cc();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(stringInterpolation);
    *(undefined1 *)(unaff_x22 + 0x430) = 5;
    *(undefined8 *)(unaff_x22 + 0x438) = *(undefined8 *)(unaff_x22 + 0x15f0);
    *(undefined8 *)(unaff_x22 + 0x440) = *(undefined8 *)(unaff_x22 + 0x15f8);
    *(undefined8 *)(unaff_x22 + 0x450) = 0;
    *(undefined8 *)(unaff_x22 + 0x448) = 0;
    *(undefined8 *)(unaff_x22 + 0x460) = 0;
    *(undefined8 *)(unaff_x22 + 0x458) = 0;
    *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x470) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x478) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x480) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x488) = 0x221;
    *(undefined1 *)(unaff_x22 + 0x1030) = 5;
    *(undefined8 *)(unaff_x22 + 0x1038) = *(undefined8 *)(unaff_x22 + 0x15f0);
    *(undefined8 *)(unaff_x22 + 0x1040) = *(undefined8 *)(unaff_x22 + 0x15f8);
    *(undefined8 *)(unaff_x22 + 0x1050) = 0;
    *(undefined8 *)(unaff_x22 + 0x1048) = 0;
    *(undefined8 *)(unaff_x22 + 0x1060) = 0;
    *(undefined8 *)(unaff_x22 + 0x1058) = 0;
    *(undefined8 *)(unaff_x22 + 0x1068) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x1070) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x1078) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x1080) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x1088) = 0x221;
    FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0xfd0);
    FUN_1004eaa3c(unaff_x22 + 0x1030);
    (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x430,puVar9);
    _swift_errorRelease(uVar13);
    FUN_1004eaa3c(unaff_x22 + 0x430);
    lVar17 = 0x1168;
  }
  FUN_100004594(unaff_x22 + lVar17);
LAB_1004f1f8c:
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1280);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1298);
  lVar17 = *(long *)(unaff_x22 + 0x12a0);
  FUN_100004640(unaff_x22 + 0x1280,uVar13);
  (**(code **)(lVar17 + 0x70))(uVar13,lVar17);
  TVar15.unknown = (undefined *)(unaff_x22 + 0x1280);
  FUN_100004594();
  if (((uint)uVar13 & 0xff) < 2) {
    lVar24 = *(long *)(unaff_x22 + 0x1778);
    pcVar20 = (char *)0x65757274;
    lVar14 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x12f8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1310);
    lVar17 = *(long *)(unaff_x22 + 0x1318);
    FUN_100004640();
    puVar9 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar11 = (char *)0xe0;
    pcVar12 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x18) = 6;
    *(undefined8 *)(puVar9 + 0x10) = 3;
    *(undefined8 *)(puVar9 + 0x20) = 0x63656e6e6f437369;
    *(undefined8 *)(puVar9 + 0x28) = 0xeb00000000646574;
    *(undefined8 *)(unaff_x22 + 0x16e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x16e8) = 0xe000000000000000;
    SVar33.bridgeObject = pcVar12;
    SVar33.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar33);
    bVar4 = *(char *)(lVar14 + lVar24) == '\0';
    pcVar11 = pcVar20;
    if (bVar4) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar1 = &DAT_e400000000000000;
    if (bVar4) {
      pcVar1 = &DAT_e500000000000000;
    }
    SVar26.bridgeObject = pcVar1;
    SVar26.str = pcVar11;
    SVar45.bridgeObject = param_4;
    SVar45.str = pcVar12;
    pcVar11 = pcVar1;
    Swift::String::append(SVar26,SVar45);
    _swift_bridgeObjectRelease(pcVar1);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x16e8);
    *(undefined8 *)(puVar9 + 0x30) = *(undefined8 *)(unaff_x22 + 0x16e0);
    *(undefined8 *)(puVar9 + 0x38) = uVar16;
    puVar9[0x58] = 0;
    *(undefined8 *)(puVar9 + 0x60) = 0x6c65636e61437369;
    *(undefined8 *)(puVar9 + 0x68) = 0xeb0000000064656c;
    *(undefined8 *)(unaff_x22 + 0x16d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x16d8) = 0xe000000000000000;
    TVar15.unknown = (undefined *)0x2;
    SVar34.bridgeObject = pcVar12;
    SVar34.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar34);
    bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar15);
    pcVar11 = pcVar20;
    if (!bVar4) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar1 = &DAT_e400000000000000;
    if (!bVar4) {
      pcVar1 = &DAT_e500000000000000;
    }
    SVar27.bridgeObject = pcVar1;
    SVar27.str = pcVar11;
    SVar46.bridgeObject = param_4;
    SVar46.str = pcVar12;
    pcVar11 = pcVar1;
    Swift::String::append(SVar27,SVar46);
    _swift_bridgeObjectRelease(pcVar1);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x16d8);
    *(undefined8 *)(puVar9 + 0x70) = *(undefined8 *)(unaff_x22 + 0x16d0);
    *(undefined8 *)(puVar9 + 0x78) = uVar16;
    puVar9[0x98] = 0;
    *(undefined8 *)(puVar9 + 0xa0) = 0x746e6f436c6c6977;
    *(undefined8 *)(puVar9 + 0xa8) = 0xec00000065756e69;
    *(undefined8 *)(unaff_x22 + 0x16c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x16c8) = 0xe000000000000000;
    TVar15.unknown = (undefined *)0x2;
    SVar35.bridgeObject = pcVar12;
    SVar35.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar35);
    if ((*(char *)(lVar14 + lVar24) != '\x01') ||
       (bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar15), bVar4)) {
      puVar23 = &DAT_e500000000000000;
      pcVar20 = (char *)0x65736c6166;
    }
    else {
      puVar23 = &DAT_e400000000000000;
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1800);
    SVar28.bridgeObject = puVar23;
    SVar28.str = pcVar20;
    SVar47.bridgeObject = param_4;
    SVar47.str = pcVar12;
    Swift::String::append(SVar28,SVar47);
    _swift_bridgeObjectRelease(puVar23);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x16c8);
    *(undefined8 *)(puVar9 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x16c0);
    *(undefined8 *)(puVar9 + 0xb8) = uVar16;
    puVar9[0xd8] = 0;
    puVar5 = puVar9;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar9);
    puVar6 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar9 + 0x20,3,puVar6);
    _swift_deallocClassInstance(puVar9,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x550) = 1;
    *(undefined8 *)(unaff_x22 + 0x558) = 0x1000000000000020;
    *(undefined8 *)(unaff_x22 + 0x560) = 0x8000000100dabac0;
    *(undefined8 *)(unaff_x22 + 0x568) = 0;
    *(undefined **)(unaff_x22 + 0x570) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x580) = 0;
    *(undefined8 *)(unaff_x22 + 0x578) = 0;
    *(undefined8 *)(unaff_x22 + 0x588) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x590) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x598) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x5a0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x5a8) = 0x227;
    *(undefined1 *)(unaff_x22 + 0xeb0) = 1;
    *(undefined8 *)(unaff_x22 + 0xeb8) = 0x1000000000000020;
    *(undefined8 *)(unaff_x22 + 0xec0) = 0x8000000100dabac0;
    *(undefined8 *)(unaff_x22 + 0xec8) = 0;
    *(undefined **)(unaff_x22 + 0xed0) = puVar5;
    *(undefined8 *)(unaff_x22 + 0xee0) = 0;
    *(undefined8 *)(unaff_x22 + 0xed8) = 0;
    *(undefined8 *)(unaff_x22 + 0xee8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xef0) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xef8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xf00) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xf08) = 0x227;
    FUN_1004eaa00(unaff_x22 + 0x550,unaff_x22 + 0xd90);
    FUN_1004eaa3c(unaff_x22 + 0xeb0);
    (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x550,uVar13);
    FUN_1004eaa3c(unaff_x22 + 0x550);
    TVar15.unknown = (undefined *)(unaff_x22 + 0x12f8);
    FUN_100004594();
  }
  lVar17 = *(long *)(unaff_x22 + 0x1820);
  if ((*(char *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1778)) == '\x01') &&
     (bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar15), !bVar4)) {
    *(long *)(unaff_x22 + 0x1820) = lVar17 + 1;
    if (!SCARRY8(lVar17,1)) {
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1500);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x1518);
      lVar14 = *(long *)(unaff_x22 + 0x1520);
      FUN_100004640(unaff_x22 + 0x1500,uVar13);
      (**(code **)(lVar14 + 0x70))(uVar13,lVar14);
      FUN_100004594(unaff_x22 + 0x1500);
      if (((uint)uVar13 & 0xff) < 2) {
        uVar19 = *(undefined8 *)(unaff_x22 + 0x1808);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x1800);
        FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x14b0);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x14c8);
        lVar14 = *(long *)(unaff_x22 + 0x14d0);
        FUN_100004640();
        puVar9 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar11 = (char *)0xa0;
        pcVar12 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar9 + 0x20) = 0x74706d65747461;
        *(undefined8 *)(puVar9 + 0x18) = 4;
        *(undefined8 *)(puVar9 + 0x10) = 2;
        *(undefined1 **)(puVar9 + 0x28) = &DAT_e700000000000000;
        *(undefined8 *)(unaff_x22 + 0x1670) = 0;
        *(undefined8 *)(unaff_x22 + 0x1678) = 0xe000000000000000;
        SVar39.bridgeObject = pcVar12;
        SVar39.str = pcVar11;
        Swift::String::reserveCapacity(2,SVar39);
        *(long *)(unaff_x22 + 0x1730) = lVar17 + 1;
        SVar31 = Swift::CustomStringConvertible::get_description();
        SVar51.bridgeObject = param_4;
        SVar51.str = pcVar12;
        pcVar11 = SVar31.bridgeObject;
        Swift::String::append(SVar31,SVar51);
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x1678);
        *(undefined8 *)(puVar9 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1670);
        *(undefined8 *)(puVar9 + 0x38) = uVar16;
        puVar9[0x58] = 0;
        *(undefined8 *)(puVar9 + 0x60) = 0x4174737269467369;
        *(undefined8 *)(puVar9 + 0x68) = 0xee0074706d657474;
        *(undefined8 *)(unaff_x22 + 0x1690) = 0;
        *(undefined8 *)(unaff_x22 + 0x1698) = 0xe000000000000000;
        SVar40.bridgeObject = pcVar12;
        SVar40.str = pcVar11;
        Swift::String::reserveCapacity(2,SVar40);
        SVar32.bridgeObject = &DAT_e500000000000000;
        SVar32.str = (char *)0x65736c6166;
        SVar52.bridgeObject = param_4;
        SVar52.str = pcVar12;
        Swift::String::append(SVar32,SVar52);
        _swift_bridgeObjectRelease(&DAT_e500000000000000);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x1698);
        *(undefined8 *)(puVar9 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1690);
        *(undefined8 *)(puVar9 + 0x78) = uVar16;
        puVar9[0x98] = 0;
        puVar5 = puVar9;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar9);
        puVar6 = &DAT_100fcb448;
        FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
        _swift_arrayDestroy(puVar9 + 0x20,2,puVar6);
        _swift_deallocClassInstance(puVar9,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x2b0) = 1;
        *(undefined8 *)(unaff_x22 + 0x2b8) = 0x100000000000001d;
        *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100daba40;
        *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
        *(undefined **)(unaff_x22 + 0x2d0) = puVar5;
        *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
        *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
        *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x2f0) = uVar19;
        *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0x300) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x308) = 0x209;
        *(undefined1 *)(unaff_x22 + 0xdf0) = 1;
        *(undefined8 *)(unaff_x22 + 0xdf8) = 0x100000000000001d;
        *(undefined8 *)(unaff_x22 + 0xe00) = 0x8000000100daba40;
        *(undefined8 *)(unaff_x22 + 0xe08) = 0;
        *(undefined **)(unaff_x22 + 0xe10) = puVar5;
        *(undefined8 *)(unaff_x22 + 0xe20) = 0;
        *(undefined8 *)(unaff_x22 + 0xe18) = 0;
        *(undefined8 *)(unaff_x22 + 0xe28) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0xe30) = uVar19;
        *(undefined8 *)(unaff_x22 + 0xe38) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0xe40) = uVar22;
        *(undefined8 *)(unaff_x22 + 0xe48) = 0x209;
        FUN_1004eaa00(unaff_x22 + 0x2b0,unaff_x22 + 0xe50);
        FUN_1004eaa3c(unaff_x22 + 0xdf0);
        (**(code **)(lVar14 + 0x28))(unaff_x22 + 0x2b0,uVar13);
        FUN_1004eaa3c(unaff_x22 + 0x2b0);
        FUN_100004594(unaff_x22 + 0x14b0);
      }
      uVar18 = *(ulong *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1818));
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1398);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x13b0);
      lVar17 = *(long *)(unaff_x22 + 0x13b8);
      FUN_100004640(unaff_x22 + 0x1398,uVar13);
      (**(code **)(lVar17 + 0x70))(uVar13,lVar17);
      FUN_100004594(unaff_x22 + 0x1398);
      if (((uint)uVar13 & 0xff) < 2) {
        uVar22 = *(undefined8 *)(unaff_x22 + 0x1808);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x1800);
        FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x12d0);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x12e8);
        lVar17 = *(long *)(unaff_x22 + 0x12f0);
        FUN_100004640();
        puVar9 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar11 = (char *)0x60;
        pcVar12 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar9 + 0x20) = 0x734d7972746572;
        *(undefined8 *)(puVar9 + 0x18) = 2;
        *(undefined8 *)(puVar9 + 0x10) = 1;
        *(undefined1 **)(puVar9 + 0x28) = &DAT_e700000000000000;
        *(undefined8 *)(unaff_x22 + 0x1700) = 0;
        *(undefined8 *)(unaff_x22 + 0x1708) = 0xe000000000000000;
        SVar41.bridgeObject = pcVar12;
        SVar41.str = pcVar11;
        Swift::String::reserveCapacity(2,SVar41);
        *(ulong *)(unaff_x22 + 0x1750) = uVar18;
        SVar31 = Swift::CustomStringConvertible::get_description();
        SVar53.bridgeObject = param_4;
        SVar53.str = pcVar12;
        Swift::String::append(SVar31,SVar53);
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x1708);
        *(undefined8 *)(puVar9 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1700);
        *(undefined8 *)(puVar9 + 0x38) = uVar16;
        puVar9[0x58] = 0;
        puVar6 = puVar9;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar9);
        FUN_1000fb4c4(puVar9 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
        _swift_deallocClassInstance(puVar9,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x310) = 1;
        *(undefined8 *)(unaff_x22 + 0x318) = 0x1000000000000023;
        *(undefined8 *)(unaff_x22 + 800) = 0x8000000100daba60;
        *(undefined8 *)(unaff_x22 + 0x328) = 0;
        *(undefined **)(unaff_x22 + 0x330) = puVar6;
        *(undefined8 *)(unaff_x22 + 0x340) = 0;
        *(undefined8 *)(unaff_x22 + 0x338) = 0;
        *(undefined8 *)(unaff_x22 + 0x348) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x350) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x358) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0x360) = uVar19;
        *(undefined8 *)(unaff_x22 + 0x368) = 0x211;
        *(undefined1 *)(unaff_x22 + 0xf10) = 1;
        *(undefined8 *)(unaff_x22 + 0xf18) = 0x1000000000000023;
        *(undefined8 *)(unaff_x22 + 0xf20) = 0x8000000100daba60;
        *(undefined8 *)(unaff_x22 + 0xf28) = 0;
        *(undefined **)(unaff_x22 + 0xf30) = puVar6;
        *(undefined8 *)(unaff_x22 + 0xf40) = 0;
        *(undefined8 *)(unaff_x22 + 0xf38) = 0;
        *(undefined8 *)(unaff_x22 + 0xf48) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0xf50) = uVar22;
        *(undefined8 *)(unaff_x22 + 0xf58) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0xf60) = uVar19;
        *(undefined8 *)(unaff_x22 + 0xf68) = 0x211;
        FUN_1004eaa00(unaff_x22 + 0x310,unaff_x22 + 400);
        FUN_1004eaa3c(unaff_x22 + 0xf10);
        (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x310,uVar13);
        FUN_1004eaa3c(unaff_x22 + 0x310);
        FUN_100004594(unaff_x22 + 0x12d0);
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar18;
      CVar7 = Swift::ContinuousClock::typeMetadataAccessor();
      *(undefined **)(unaff_x22 + 0x1828) = CVar7.unknown;
      lVar17 = *(long *)(CVar7.unknown + -8);
      *(long *)(unaff_x22 + 0x1830) = lVar17;
      uVar8 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x1838) = uVar8;
      (extension_Swift)::Swift::Clock::_get_continuous();
      *(ulong *)(unaff_x22 + 0x15e0) = uVar18 * 1000000000000000;
      *(ulong *)(unaff_x22 + 0x15e8) =
           ((long)uVar18 >> 0x3f & 0xfffc72815b398000U) +
           SUB168(auVar2 * ZEXT816(1000000000000000),8);
      *(undefined8 *)(unaff_x22 + 0x15d0) = 0;
      *(undefined8 *)(unaff_x22 + 0x15c8) = 0;
      *(undefined1 *)(unaff_x22 + 0x15d8) = 1;
      _swift_task_switch(FUN_1004f15b4,0,0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004f2c78);
    (*pcVar3)();
  }
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1258);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1270);
  lVar14 = *(long *)(unaff_x22 + 0x1278);
  FUN_100004640(unaff_x22 + 0x1258,uVar13);
  (**(code **)(lVar14 + 0x70))(uVar13,lVar14);
  FUN_100004594(unaff_x22 + 0x1258);
  if (((uint)uVar13 & 0xff) < 2) {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1800);
    lVar24 = *(long *)(unaff_x22 + 0x1778);
    lVar21 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1230);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1248);
    lVar14 = *(long *)(unaff_x22 + 0x1250);
    FUN_100004640();
    puVar9 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar11 = (char *)0xe0;
    pcVar12 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x18) = 6;
    *(undefined8 *)(puVar9 + 0x10) = 3;
    *(undefined8 *)(puVar9 + 0x20) = 0x63656e6e6f437369;
    *(undefined8 *)(puVar9 + 0x28) = 0xeb00000000646574;
    SVar36.bridgeObject = pcVar12;
    SVar36.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar36);
    bVar4 = *(char *)(lVar21 + lVar24) == '\0';
    pcVar11 = (char *)0x65757274;
    if (bVar4) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar20 = &DAT_e400000000000000;
    if (bVar4) {
      pcVar20 = &DAT_e500000000000000;
    }
    SVar29.bridgeObject = pcVar20;
    SVar29.str = pcVar11;
    SVar48.bridgeObject = param_4;
    SVar48.str = pcVar12;
    pcVar11 = pcVar20;
    Swift::String::append(SVar29,SVar48);
    _swift_bridgeObjectRelease(pcVar20);
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(undefined8 *)(puVar9 + 0x38) = 0xe000000000000000;
    puVar9[0x58] = 0;
    *(undefined8 *)(puVar9 + 0x60) = 0x6c65636e61437369;
    *(undefined8 *)(puVar9 + 0x68) = 0xeb0000000064656c;
    TVar15.unknown = (undefined *)0x2;
    SVar37.bridgeObject = pcVar12;
    SVar37.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar37);
    bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar15);
    pcVar11 = (char *)0x65757274;
    if (!bVar4) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar20 = &DAT_e400000000000000;
    if (!bVar4) {
      pcVar20 = &DAT_e500000000000000;
    }
    SVar30.bridgeObject = pcVar20;
    SVar30.str = pcVar11;
    SVar49.bridgeObject = param_4;
    SVar49.str = pcVar12;
    pcVar11 = pcVar20;
    Swift::String::append(SVar30,SVar49);
    _swift_bridgeObjectRelease(pcVar20);
    *(undefined8 *)(puVar9 + 0x70) = 0;
    *(undefined8 *)(puVar9 + 0x78) = 0xe000000000000000;
    puVar9[0x98] = 0;
    *(undefined8 *)(puVar9 + 0xa0) = 0x7474416c61746f74;
    *(undefined8 *)(puVar9 + 0xa8) = 0xed00007374706d65;
    SVar38.bridgeObject = pcVar12;
    SVar38.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar38);
    *(long *)(unaff_x22 + 0x1740) = lVar17;
    SVar31 = Swift::CustomStringConvertible::get_description();
    SVar50.bridgeObject = param_4;
    SVar50.str = pcVar12;
    Swift::String::append(SVar31,SVar50);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    *(undefined8 *)(puVar9 + 0xb0) = 0;
    *(undefined8 *)(puVar9 + 0xb8) = 0xe000000000000000;
    puVar9[0xd8] = 0;
    puVar5 = puVar9;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar9);
    puVar6 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar9 + 0x20,3,puVar6);
    _swift_deallocClassInstance(puVar9,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x5b0) = 1;
    *(undefined8 *)(unaff_x22 + 0x5b8) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0x5c0) = 0x8000000100daba20;
    *(undefined8 *)(unaff_x22 + 0x5c8) = 0;
    *(undefined **)(unaff_x22 + 0x5d0) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x5e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x5e8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x5f0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x5f8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x600) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x608) = 0x22e;
    *(undefined1 *)(unaff_x22 + 0xaf0) = 1;
    *(undefined8 *)(unaff_x22 + 0xaf8) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0xb00) = 0x8000000100daba20;
    *(undefined8 *)(unaff_x22 + 0xb08) = 0;
    *(undefined **)(unaff_x22 + 0xb10) = puVar5;
    *(undefined8 *)(unaff_x22 + 0xb20) = 0;
    *(undefined8 *)(unaff_x22 + 0xb18) = 0;
    *(undefined8 *)(unaff_x22 + 0xb28) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xb30) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xb38) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xb40) = uVar16;
    *(undefined8 *)(unaff_x22 + 0xb48) = 0x22e;
    FUN_1004eaa00(unaff_x22 + 0x5b0,unaff_x22 + 0xbb0);
    FUN_1004eaa3c(unaff_x22 + 0xaf0);
    (**(code **)(lVar14 + 0x28))(unaff_x22 + 0x5b0,uVar13);
    FUN_1004eaa3c(unaff_x22 + 0x5b0);
    FUN_100004594(unaff_x22 + 0x1230);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004f268c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f2c78 | FUN_1004f2c78 */

void FUN_1004f2c78(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1870) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1868));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004f2cd4;
  }
  else {
    pcVar1 = FUN_1004f3cf8;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 6000),0);
  return;
}



/* Address: 0x1004f2cd4 | FUN_1004f2cd4 */

void FUN_1004f2cd4(void)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  Task TVar8;
  ContinuousClock CVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  void *in_x3;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long unaff_x22;
  char *pcVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 *puVar22;
  ulong uVar23;
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
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x10f0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1108);
  lVar18 = *(long *)(unaff_x22 + 0x1110);
  FUN_100004640(unaff_x22 + 0x10f0,uVar16);
  (**(code **)(lVar18 + 0x70))(uVar16,lVar18);
  FUN_100004594(unaff_x22 + 0x10f0);
  if (((uint)uVar16 & 0xff) < 3) {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1820);
    lVar14 = *(long *)(unaff_x22 + 0x1818);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1800);
    lVar17 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x12a8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x12c0);
    lVar18 = *(long *)(unaff_x22 + 0x12c8);
    FUN_100004640();
    puVar5 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar11 = (char *)0xa0;
    pcVar12 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x20) = 0x74706d65747461;
    *(undefined8 *)(puVar5 + 0x18) = 4;
    *(undefined8 *)(puVar5 + 0x10) = 2;
    *(undefined1 **)(puVar5 + 0x28) = &DAT_e700000000000000;
    *(undefined8 *)(unaff_x22 + 0x1610) = 0;
    *(undefined8 *)(unaff_x22 + 0x1618) = 0xe000000000000000;
    SVar31.bridgeObject = pcVar12;
    SVar31.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar31);
    *(undefined8 *)(unaff_x22 + 0x1760) = uVar20;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar42.bridgeObject = in_x3;
    SVar42.str = pcVar12;
    pcVar11 = SVar24.bridgeObject;
    Swift::String::append(SVar24,SVar42);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1618);
    *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1610);
    *(undefined8 *)(puVar5 + 0x38) = uVar20;
    puVar5[0x58] = 0;
    *(undefined8 *)(puVar5 + 0x60) = 0x727465526c6c6977;
    *(undefined8 *)(puVar5 + 0x68) = 0xee00726574664179;
    *(undefined8 *)(unaff_x22 + 0x1630) = 0;
    *(undefined8 *)(unaff_x22 + 0x1638) = 0xe000000000000000;
    SVar32.bridgeObject = pcVar12;
    SVar32.str = pcVar11;
    Swift::String::reserveCapacity(4,SVar32);
    *(undefined8 *)(unaff_x22 + 0x1748) = *(undefined8 *)(lVar17 + lVar14);
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar43.bridgeObject = in_x3;
    SVar43.str = pcVar12;
    Swift::String::append(SVar24,SVar43);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    SVar24.bridgeObject = &SUB_e200000000000000;
    SVar24.str = (char *)0x736d;
    SVar44.bridgeObject = in_x3;
    SVar44.str = pcVar12;
    Swift::String::append(SVar24,SVar44);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1638);
    *(undefined8 *)(puVar5 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1630);
    *(undefined8 *)(puVar5 + 0x78) = uVar20;
    puVar5[0x98] = 0;
    puVar6 = puVar5;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar5);
    puVar7 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
    _swift_deallocClassInstance(puVar5,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x4f0) = 2;
    *(undefined8 *)(unaff_x22 + 0x4f8) = 0x1000000000000031;
    *(undefined8 *)(unaff_x22 + 0x500) = 0x8000000100dabb70;
    *(undefined8 *)(unaff_x22 + 0x508) = 0;
    *(undefined **)(unaff_x22 + 0x510) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x520) = 0;
    *(undefined8 *)(unaff_x22 + 0x518) = 0;
    *(undefined8 *)(unaff_x22 + 0x528) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x530) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x538) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x540) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x548) = 0x21b;
    *(undefined1 *)(unaff_x22 + 0xa30) = 2;
    *(undefined8 *)(unaff_x22 + 0xa38) = 0x1000000000000031;
    *(undefined8 *)(unaff_x22 + 0xa40) = 0x8000000100dabb70;
    *(undefined8 *)(unaff_x22 + 0xa48) = 0;
    *(undefined **)(unaff_x22 + 0xa50) = puVar6;
    *(undefined8 *)(unaff_x22 + 0xa60) = 0;
    *(undefined8 *)(unaff_x22 + 0xa58) = 0;
    *(undefined8 *)(unaff_x22 + 0xa68) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xa70) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xa78) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xa80) = uVar13;
    *(undefined8 *)(unaff_x22 + 0xa88) = 0x21b;
    FUN_1004eaa00(unaff_x22 + 0x4f0,unaff_x22 + 0x910);
    FUN_1004eaa3c(unaff_x22 + 0xa30);
    (**(code **)(lVar18 + 0x28))(unaff_x22 + 0x4f0,uVar16);
    FUN_1004eaa3c(unaff_x22 + 0x4f0);
    FUN_100004594(unaff_x22 + 0x12a8);
  }
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1280);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1298);
  lVar18 = *(long *)(unaff_x22 + 0x12a0);
  FUN_100004640(unaff_x22 + 0x1280,uVar16);
  (**(code **)(lVar18 + 0x70))(uVar16,lVar18);
  TVar8.unknown = (undefined *)(unaff_x22 + 0x1280);
  FUN_100004594();
  if (((uint)uVar16 & 0xff) < 2) {
    lVar17 = *(long *)(unaff_x22 + 0x1778);
    pcVar19 = (char *)0x65757274;
    lVar14 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x12f8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1310);
    lVar18 = *(long *)(unaff_x22 + 0x1318);
    FUN_100004640();
    puVar5 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar11 = (char *)0xe0;
    pcVar12 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x18) = 6;
    *(undefined8 *)(puVar5 + 0x10) = 3;
    *(undefined8 *)(puVar5 + 0x20) = 0x63656e6e6f437369;
    *(undefined8 *)(puVar5 + 0x28) = 0xeb00000000646574;
    *(undefined8 *)(unaff_x22 + 0x16e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x16e8) = 0xe000000000000000;
    SVar33.bridgeObject = pcVar12;
    SVar33.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar33);
    bVar4 = *(char *)(lVar14 + lVar17) == '\0';
    pcVar11 = pcVar19;
    if (bVar4) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar1 = &DAT_e400000000000000;
    if (bVar4) {
      pcVar1 = &DAT_e500000000000000;
    }
    SVar25.bridgeObject = pcVar1;
    SVar25.str = pcVar11;
    SVar45.bridgeObject = in_x3;
    SVar45.str = pcVar12;
    pcVar11 = pcVar1;
    Swift::String::append(SVar25,SVar45);
    _swift_bridgeObjectRelease(pcVar1);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x16e8);
    *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x16e0);
    *(undefined8 *)(puVar5 + 0x38) = uVar13;
    puVar5[0x58] = 0;
    *(undefined8 *)(puVar5 + 0x60) = 0x6c65636e61437369;
    *(undefined8 *)(puVar5 + 0x68) = 0xeb0000000064656c;
    *(undefined8 *)(unaff_x22 + 0x16d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x16d8) = 0xe000000000000000;
    TVar8.unknown = (undefined *)0x2;
    SVar34.bridgeObject = pcVar12;
    SVar34.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar34);
    bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8);
    pcVar11 = pcVar19;
    if (!bVar4) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar1 = &DAT_e400000000000000;
    if (!bVar4) {
      pcVar1 = &DAT_e500000000000000;
    }
    SVar26.bridgeObject = pcVar1;
    SVar26.str = pcVar11;
    SVar46.bridgeObject = in_x3;
    SVar46.str = pcVar12;
    pcVar11 = pcVar1;
    Swift::String::append(SVar26,SVar46);
    _swift_bridgeObjectRelease(pcVar1);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x16d8);
    *(undefined8 *)(puVar5 + 0x70) = *(undefined8 *)(unaff_x22 + 0x16d0);
    *(undefined8 *)(puVar5 + 0x78) = uVar13;
    puVar5[0x98] = 0;
    *(undefined8 *)(puVar5 + 0xa0) = 0x746e6f436c6c6977;
    *(undefined8 *)(puVar5 + 0xa8) = 0xec00000065756e69;
    *(undefined8 *)(unaff_x22 + 0x16c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x16c8) = 0xe000000000000000;
    TVar8.unknown = (undefined *)0x2;
    SVar35.bridgeObject = pcVar12;
    SVar35.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar35);
    if ((*(char *)(lVar14 + lVar17) != '\x01') ||
       (bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8), bVar4)) {
      puVar22 = &DAT_e500000000000000;
      pcVar19 = (char *)0x65736c6166;
    }
    else {
      puVar22 = &DAT_e400000000000000;
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1800);
    SVar27.bridgeObject = puVar22;
    SVar27.str = pcVar19;
    SVar47.bridgeObject = in_x3;
    SVar47.str = pcVar12;
    Swift::String::append(SVar27,SVar47);
    _swift_bridgeObjectRelease(puVar22);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x16c8);
    *(undefined8 *)(puVar5 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x16c0);
    *(undefined8 *)(puVar5 + 0xb8) = uVar13;
    puVar5[0xd8] = 0;
    puVar6 = puVar5;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar5);
    puVar7 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar5 + 0x20,3,puVar7);
    _swift_deallocClassInstance(puVar5,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x550) = 1;
    *(undefined8 *)(unaff_x22 + 0x558) = 0x1000000000000020;
    *(undefined8 *)(unaff_x22 + 0x560) = 0x8000000100dabac0;
    *(undefined8 *)(unaff_x22 + 0x568) = 0;
    *(undefined **)(unaff_x22 + 0x570) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x580) = 0;
    *(undefined8 *)(unaff_x22 + 0x578) = 0;
    *(undefined8 *)(unaff_x22 + 0x588) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x590) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x598) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x5a0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x5a8) = 0x227;
    *(undefined1 *)(unaff_x22 + 0xeb0) = 1;
    *(undefined8 *)(unaff_x22 + 0xeb8) = 0x1000000000000020;
    *(undefined8 *)(unaff_x22 + 0xec0) = 0x8000000100dabac0;
    *(undefined8 *)(unaff_x22 + 0xec8) = 0;
    *(undefined **)(unaff_x22 + 0xed0) = puVar6;
    *(undefined8 *)(unaff_x22 + 0xee0) = 0;
    *(undefined8 *)(unaff_x22 + 0xed8) = 0;
    *(undefined8 *)(unaff_x22 + 0xee8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xef0) = uVar15;
    *(undefined8 *)(unaff_x22 + 0xef8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xf00) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xf08) = 0x227;
    FUN_1004eaa00(unaff_x22 + 0x550,unaff_x22 + 0xd90);
    FUN_1004eaa3c(unaff_x22 + 0xeb0);
    (**(code **)(lVar18 + 0x28))(unaff_x22 + 0x550,uVar16);
    FUN_1004eaa3c(unaff_x22 + 0x550);
    TVar8.unknown = (undefined *)(unaff_x22 + 0x12f8);
    FUN_100004594();
  }
  lVar18 = *(long *)(unaff_x22 + 0x1820);
  if ((*(char *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1778)) == '\x01') &&
     (bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8), !bVar4)) {
    *(long *)(unaff_x22 + 0x1820) = lVar18 + 1;
    if (!SCARRY8(lVar18,1)) {
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1500);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x1518);
      lVar14 = *(long *)(unaff_x22 + 0x1520);
      FUN_100004640(unaff_x22 + 0x1500,uVar16);
      (**(code **)(lVar14 + 0x70))(uVar16,lVar14);
      FUN_100004594(unaff_x22 + 0x1500);
      if (((uint)uVar16 & 0xff) < 2) {
        uVar20 = *(undefined8 *)(unaff_x22 + 0x1808);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1800);
        FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x14b0);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x14c8);
        lVar14 = *(long *)(unaff_x22 + 0x14d0);
        FUN_100004640();
        puVar5 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar11 = (char *)0xa0;
        pcVar12 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar5 + 0x20) = 0x74706d65747461;
        *(undefined8 *)(puVar5 + 0x18) = 4;
        *(undefined8 *)(puVar5 + 0x10) = 2;
        *(undefined1 **)(puVar5 + 0x28) = &DAT_e700000000000000;
        *(undefined8 *)(unaff_x22 + 0x1670) = 0;
        *(undefined8 *)(unaff_x22 + 0x1678) = 0xe000000000000000;
        SVar39.bridgeObject = pcVar12;
        SVar39.str = pcVar11;
        Swift::String::reserveCapacity(2,SVar39);
        *(long *)(unaff_x22 + 0x1730) = lVar18 + 1;
        SVar24 = Swift::CustomStringConvertible::get_description();
        SVar51.bridgeObject = in_x3;
        SVar51.str = pcVar12;
        pcVar11 = SVar24.bridgeObject;
        Swift::String::append(SVar24,SVar51);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x1678);
        *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1670);
        *(undefined8 *)(puVar5 + 0x38) = uVar13;
        puVar5[0x58] = 0;
        *(undefined8 *)(puVar5 + 0x60) = 0x4174737269467369;
        *(undefined8 *)(puVar5 + 0x68) = 0xee0074706d657474;
        *(undefined8 *)(unaff_x22 + 0x1690) = 0;
        *(undefined8 *)(unaff_x22 + 0x1698) = 0xe000000000000000;
        SVar40.bridgeObject = pcVar12;
        SVar40.str = pcVar11;
        Swift::String::reserveCapacity(2,SVar40);
        SVar30.bridgeObject = &DAT_e500000000000000;
        SVar30.str = (char *)0x65736c6166;
        SVar52.bridgeObject = in_x3;
        SVar52.str = pcVar12;
        Swift::String::append(SVar30,SVar52);
        _swift_bridgeObjectRelease(&DAT_e500000000000000);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x1698);
        *(undefined8 *)(puVar5 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1690);
        *(undefined8 *)(puVar5 + 0x78) = uVar13;
        puVar5[0x98] = 0;
        puVar6 = puVar5;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar5);
        puVar7 = &DAT_100fcb448;
        FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
        _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
        _swift_deallocClassInstance(puVar5,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x2b0) = 1;
        *(undefined8 *)(unaff_x22 + 0x2b8) = 0x100000000000001d;
        *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100daba40;
        *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
        *(undefined **)(unaff_x22 + 0x2d0) = puVar6;
        *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
        *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
        *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x2f0) = uVar20;
        *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0x300) = uVar15;
        *(undefined8 *)(unaff_x22 + 0x308) = 0x209;
        *(undefined1 *)(unaff_x22 + 0xdf0) = 1;
        *(undefined8 *)(unaff_x22 + 0xdf8) = 0x100000000000001d;
        *(undefined8 *)(unaff_x22 + 0xe00) = 0x8000000100daba40;
        *(undefined8 *)(unaff_x22 + 0xe08) = 0;
        *(undefined **)(unaff_x22 + 0xe10) = puVar6;
        *(undefined8 *)(unaff_x22 + 0xe20) = 0;
        *(undefined8 *)(unaff_x22 + 0xe18) = 0;
        *(undefined8 *)(unaff_x22 + 0xe28) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0xe30) = uVar20;
        *(undefined8 *)(unaff_x22 + 0xe38) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0xe40) = uVar15;
        *(undefined8 *)(unaff_x22 + 0xe48) = 0x209;
        FUN_1004eaa00(unaff_x22 + 0x2b0,unaff_x22 + 0xe50);
        FUN_1004eaa3c(unaff_x22 + 0xdf0);
        (**(code **)(lVar14 + 0x28))(unaff_x22 + 0x2b0,uVar16);
        FUN_1004eaa3c(unaff_x22 + 0x2b0);
        FUN_100004594(unaff_x22 + 0x14b0);
      }
      uVar23 = *(ulong *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1818));
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1398);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x13b0);
      lVar18 = *(long *)(unaff_x22 + 0x13b8);
      FUN_100004640(unaff_x22 + 0x1398,uVar16);
      (**(code **)(lVar18 + 0x70))(uVar16,lVar18);
      FUN_100004594(unaff_x22 + 0x1398);
      if (((uint)uVar16 & 0xff) < 2) {
        uVar20 = *(undefined8 *)(unaff_x22 + 0x1808);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1800);
        FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x12d0);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x12e8);
        lVar18 = *(long *)(unaff_x22 + 0x12f0);
        FUN_100004640();
        puVar5 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar11 = (char *)0x60;
        pcVar12 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar5 + 0x20) = 0x734d7972746572;
        *(undefined8 *)(puVar5 + 0x18) = 2;
        *(undefined8 *)(puVar5 + 0x10) = 1;
        *(undefined1 **)(puVar5 + 0x28) = &DAT_e700000000000000;
        *(undefined8 *)(unaff_x22 + 0x1700) = 0;
        *(undefined8 *)(unaff_x22 + 0x1708) = 0xe000000000000000;
        SVar41.bridgeObject = pcVar12;
        SVar41.str = pcVar11;
        Swift::String::reserveCapacity(2,SVar41);
        *(ulong *)(unaff_x22 + 0x1750) = uVar23;
        SVar24 = Swift::CustomStringConvertible::get_description();
        SVar53.bridgeObject = in_x3;
        SVar53.str = pcVar12;
        Swift::String::append(SVar24,SVar53);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x1708);
        *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1700);
        *(undefined8 *)(puVar5 + 0x38) = uVar13;
        puVar5[0x58] = 0;
        puVar7 = puVar5;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar5);
        FUN_1000fb4c4(puVar5 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
        _swift_deallocClassInstance(puVar5,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x310) = 1;
        *(undefined8 *)(unaff_x22 + 0x318) = 0x1000000000000023;
        *(undefined8 *)(unaff_x22 + 800) = 0x8000000100daba60;
        *(undefined8 *)(unaff_x22 + 0x328) = 0;
        *(undefined **)(unaff_x22 + 0x330) = puVar7;
        *(undefined8 *)(unaff_x22 + 0x340) = 0;
        *(undefined8 *)(unaff_x22 + 0x338) = 0;
        *(undefined8 *)(unaff_x22 + 0x348) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x350) = uVar20;
        *(undefined8 *)(unaff_x22 + 0x358) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0x360) = uVar15;
        *(undefined8 *)(unaff_x22 + 0x368) = 0x211;
        *(undefined1 *)(unaff_x22 + 0xf10) = 1;
        *(undefined8 *)(unaff_x22 + 0xf18) = 0x1000000000000023;
        *(undefined8 *)(unaff_x22 + 0xf20) = 0x8000000100daba60;
        *(undefined8 *)(unaff_x22 + 0xf28) = 0;
        *(undefined **)(unaff_x22 + 0xf30) = puVar7;
        *(undefined8 *)(unaff_x22 + 0xf40) = 0;
        *(undefined8 *)(unaff_x22 + 0xf38) = 0;
        *(undefined8 *)(unaff_x22 + 0xf48) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0xf50) = uVar20;
        *(undefined8 *)(unaff_x22 + 0xf58) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0xf60) = uVar15;
        *(undefined8 *)(unaff_x22 + 0xf68) = 0x211;
        FUN_1004eaa00(unaff_x22 + 0x310,unaff_x22 + 400);
        FUN_1004eaa3c(unaff_x22 + 0xf10);
        (**(code **)(lVar18 + 0x28))(unaff_x22 + 0x310,uVar16);
        FUN_1004eaa3c(unaff_x22 + 0x310);
        FUN_100004594(unaff_x22 + 0x12d0);
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar23;
      CVar9 = Swift::ContinuousClock::typeMetadataAccessor();
      *(undefined **)(unaff_x22 + 0x1828) = CVar9.unknown;
      lVar18 = *(long *)(CVar9.unknown + -8);
      *(long *)(unaff_x22 + 0x1830) = lVar18;
      uVar10 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x1838) = uVar10;
      (extension_Swift)::Swift::Clock::_get_continuous();
      *(ulong *)(unaff_x22 + 0x15e0) = uVar23 * 1000000000000000;
      *(ulong *)(unaff_x22 + 0x15e8) =
           ((long)uVar23 >> 0x3f & 0xfffc72815b398000U) +
           SUB168(auVar2 * ZEXT816(1000000000000000),8);
      *(undefined8 *)(unaff_x22 + 0x15d0) = 0;
      *(undefined8 *)(unaff_x22 + 0x15c8) = 0;
      *(undefined1 *)(unaff_x22 + 0x15d8) = 1;
      _swift_task_switch(FUN_1004f15b4,0,0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004f3cf8);
    (*pcVar3)();
  }
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1258);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1270);
  lVar14 = *(long *)(unaff_x22 + 0x1278);
  FUN_100004640(unaff_x22 + 0x1258,uVar16);
  (**(code **)(lVar14 + 0x70))(uVar16,lVar14);
  FUN_100004594(unaff_x22 + 0x1258);
  if (((uint)uVar16 & 0xff) < 2) {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1800);
    lVar17 = *(long *)(unaff_x22 + 0x1778);
    lVar21 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1230);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1248);
    lVar14 = *(long *)(unaff_x22 + 0x1250);
    FUN_100004640();
    puVar5 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar11 = (char *)0xe0;
    pcVar12 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x18) = 6;
    *(undefined8 *)(puVar5 + 0x10) = 3;
    *(undefined8 *)(puVar5 + 0x20) = 0x63656e6e6f437369;
    *(undefined8 *)(puVar5 + 0x28) = 0xeb00000000646574;
    SVar36.bridgeObject = pcVar12;
    SVar36.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar36);
    bVar4 = *(char *)(lVar21 + lVar17) == '\0';
    pcVar11 = (char *)0x65757274;
    if (bVar4) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar19 = &DAT_e400000000000000;
    if (bVar4) {
      pcVar19 = &DAT_e500000000000000;
    }
    SVar28.bridgeObject = pcVar19;
    SVar28.str = pcVar11;
    SVar48.bridgeObject = in_x3;
    SVar48.str = pcVar12;
    pcVar11 = pcVar19;
    Swift::String::append(SVar28,SVar48);
    _swift_bridgeObjectRelease(pcVar19);
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x38) = 0xe000000000000000;
    puVar5[0x58] = 0;
    *(undefined8 *)(puVar5 + 0x60) = 0x6c65636e61437369;
    *(undefined8 *)(puVar5 + 0x68) = 0xeb0000000064656c;
    TVar8.unknown = (undefined *)0x2;
    SVar37.bridgeObject = pcVar12;
    SVar37.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar37);
    bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8);
    pcVar11 = (char *)0x65757274;
    if (!bVar4) {
      pcVar11 = (char *)0x65736c6166;
    }
    pcVar19 = &DAT_e400000000000000;
    if (!bVar4) {
      pcVar19 = &DAT_e500000000000000;
    }
    SVar29.bridgeObject = pcVar19;
    SVar29.str = pcVar11;
    SVar49.bridgeObject = in_x3;
    SVar49.str = pcVar12;
    pcVar11 = pcVar19;
    Swift::String::append(SVar29,SVar49);
    _swift_bridgeObjectRelease(pcVar19);
    *(undefined8 *)(puVar5 + 0x70) = 0;
    *(undefined8 *)(puVar5 + 0x78) = 0xe000000000000000;
    puVar5[0x98] = 0;
    *(undefined8 *)(puVar5 + 0xa0) = 0x7474416c61746f74;
    *(undefined8 *)(puVar5 + 0xa8) = 0xed00007374706d65;
    SVar38.bridgeObject = pcVar12;
    SVar38.str = pcVar11;
    Swift::String::reserveCapacity(2,SVar38);
    *(long *)(unaff_x22 + 0x1740) = lVar18;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar50.bridgeObject = in_x3;
    SVar50.str = pcVar12;
    Swift::String::append(SVar24,SVar50);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    *(undefined8 *)(puVar5 + 0xb0) = 0;
    *(undefined8 *)(puVar5 + 0xb8) = 0xe000000000000000;
    puVar5[0xd8] = 0;
    puVar6 = puVar5;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar5);
    puVar7 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar5 + 0x20,3,puVar7);
    _swift_deallocClassInstance(puVar5,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x5b0) = 1;
    *(undefined8 *)(unaff_x22 + 0x5b8) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0x5c0) = 0x8000000100daba20;
    *(undefined8 *)(unaff_x22 + 0x5c8) = 0;
    *(undefined **)(unaff_x22 + 0x5d0) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x5e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x5e8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x5f0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x5f8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x600) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x608) = 0x22e;
    *(undefined1 *)(unaff_x22 + 0xaf0) = 1;
    *(undefined8 *)(unaff_x22 + 0xaf8) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0xb00) = 0x8000000100daba20;
    *(undefined8 *)(unaff_x22 + 0xb08) = 0;
    *(undefined **)(unaff_x22 + 0xb10) = puVar6;
    *(undefined8 *)(unaff_x22 + 0xb20) = 0;
    *(undefined8 *)(unaff_x22 + 0xb18) = 0;
    *(undefined8 *)(unaff_x22 + 0xb28) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xb30) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xb38) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xb40) = uVar13;
    *(undefined8 *)(unaff_x22 + 0xb48) = 0x22e;
    FUN_1004eaa00(unaff_x22 + 0x5b0,unaff_x22 + 0xbb0);
    FUN_1004eaa3c(unaff_x22 + 0xaf0);
    (**(code **)(lVar14 + 0x28))(unaff_x22 + 0x5b0,uVar16);
    FUN_1004eaa3c(unaff_x22 + 0x5b0);
    FUN_100004594(unaff_x22 + 0x1230);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004f3710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f3cf8 | FUN_1004f3cf8 */

void FUN_1004f3cf8(Task param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  Task TVar5;
  undefined *puVar6;
  undefined *puVar7;
  ContinuousClock CVar8;
  ulong uVar9;
  undefined *puVar10;
  _StringGuts _Var11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  DefaultStringInterpolation stringInterpolation;
  undefined8 uVar16;
  long unaff_x22;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  char *pcVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  long lVar24;
  String SVar25;
  String SVar26;
  String SVar27;
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
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1870);
  bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar4) {
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x13e8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1400);
    lVar17 = *(long *)(unaff_x22 + 0x1408);
    FUN_100004640(unaff_x22 + 0x13e8,uVar16);
    (**(code **)(lVar17 + 0x70))(uVar16,lVar17);
    FUN_100004594(unaff_x22 + 0x13e8);
    if (1 < ((uint)uVar16 & 0xff)) {
LAB_1004f3ec4:
      _swift_errorRelease(uVar14);
      goto LAB_1004f40c0;
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1800);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1438);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1450);
    lVar17 = *(long *)(unaff_x22 + 0x1458);
    FUN_100004640(unaff_x22 + 0x1438,uVar16);
    *(undefined1 *)(unaff_x22 + 0x490) = 1;
    *(undefined8 *)(unaff_x22 + 0x498) = 0x1000000000000019;
    *(undefined8 *)(unaff_x22 + 0x4a0) = 0x8000000100dabaf0;
    *(undefined8 *)(unaff_x22 + 0x4b0) = 0;
    *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x4d0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x4d8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x4e0) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x4e8) = 0x223;
    *(undefined1 *)(unaff_x22 + 0xd30) = 1;
    *(undefined8 *)(unaff_x22 + 0xd38) = 0x1000000000000019;
    *(undefined8 *)(unaff_x22 + 0xd40) = 0x8000000100dabaf0;
    *(undefined8 *)(unaff_x22 + 0xd50) = 0;
    *(undefined8 *)(unaff_x22 + 0xd48) = 0;
    *(undefined8 *)(unaff_x22 + 0xd60) = 0;
    *(undefined8 *)(unaff_x22 + 0xd58) = 0;
    *(undefined8 *)(unaff_x22 + 0xd68) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xd70) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xd78) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xd80) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xd88) = 0x223;
    FUN_1004eaa00(unaff_x22 + 0x490,unaff_x22 + 0xcd0);
    FUN_1004eaa3c(unaff_x22 + 0xd30);
    (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x490,uVar16,lVar17);
    _swift_errorRelease(uVar14);
    FUN_1004eaa3c(unaff_x22 + 0x490);
    lVar17 = 0x1438;
  }
  else {
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1528);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1540);
    lVar17 = *(long *)(unaff_x22 + 0x1548);
    FUN_100004640(unaff_x22 + 0x1528,uVar16);
    (**(code **)(lVar17 + 0x70))(uVar16,lVar17);
    FUN_100004594(unaff_x22 + 0x1528);
    if (5 < ((uint)uVar16 & 0xff)) goto LAB_1004f3ec4;
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1820);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1800);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1168);
    puVar10 = *(undefined **)(unaff_x22 + 0x1180);
    lVar17 = *(long *)(unaff_x22 + 0x1188);
    _Var11.unknown = puVar10;
    FUN_100004640();
    *(undefined8 *)(unaff_x22 + 0x1660) = 0;
    *(undefined8 *)(unaff_x22 + 0x1668) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2a,_Var11);
    *(undefined8 *)(unaff_x22 + 0x1640) = *(undefined8 *)(unaff_x22 + 0x1660);
    *(undefined8 *)(unaff_x22 + 0x1648) = *(undefined8 *)(unaff_x22 + 0x1668);
    SVar31.bridgeObject = (void *)0x8000000100daba90;
    SVar31.str = (char *)0x1000000000000023;
    SVar42.bridgeObject = param_4;
    SVar42.str = param_3;
    Swift::String::append(SVar31,SVar42);
    *(undefined8 *)(unaff_x22 + 0x1738) = uVar19;
    SVar31 = Swift::CustomStringConvertible::get_description();
    SVar43.bridgeObject = param_4;
    SVar43.str = param_3;
    Swift::String::append(SVar31,SVar43);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    SVar25.bridgeObject = (void *)0xe300000000000000;
    SVar25.str = (char *)0x203a29;
    SVar44.bridgeObject = param_4;
    SVar44.str = param_3;
    Swift::String::append(SVar25,SVar44);
    _swift_getErrorValue(uVar14,unaff_x22 + 0x1720,unaff_x22 + 0x1598);
    param_4 = *(void **)(unaff_x22 + 0x1598);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (param_4,*(undefined8 *)(unaff_x22 + 0x15a0));
    stringInterpolation.unknown = *(undefined **)(unaff_x22 + 0x1640);
    FUN_1004f94cc();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(stringInterpolation);
    *(undefined1 *)(unaff_x22 + 0x430) = 5;
    *(undefined8 *)(unaff_x22 + 0x438) = *(undefined8 *)(unaff_x22 + 0x15f0);
    *(undefined8 *)(unaff_x22 + 0x440) = *(undefined8 *)(unaff_x22 + 0x15f8);
    *(undefined8 *)(unaff_x22 + 0x450) = 0;
    *(undefined8 *)(unaff_x22 + 0x448) = 0;
    *(undefined8 *)(unaff_x22 + 0x460) = 0;
    *(undefined8 *)(unaff_x22 + 0x458) = 0;
    *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x470) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x478) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x480) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x488) = 0x221;
    *(undefined1 *)(unaff_x22 + 0x1030) = 5;
    *(undefined8 *)(unaff_x22 + 0x1038) = *(undefined8 *)(unaff_x22 + 0x15f0);
    *(undefined8 *)(unaff_x22 + 0x1040) = *(undefined8 *)(unaff_x22 + 0x15f8);
    *(undefined8 *)(unaff_x22 + 0x1050) = 0;
    *(undefined8 *)(unaff_x22 + 0x1048) = 0;
    *(undefined8 *)(unaff_x22 + 0x1060) = 0;
    *(undefined8 *)(unaff_x22 + 0x1058) = 0;
    *(undefined8 *)(unaff_x22 + 0x1068) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x1070) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x1078) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x1080) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x1088) = 0x221;
    FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0xfd0);
    FUN_1004eaa3c(unaff_x22 + 0x1030);
    (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x430,puVar10);
    _swift_errorRelease(uVar14);
    FUN_1004eaa3c(unaff_x22 + 0x430);
    lVar17 = 0x1168;
  }
  FUN_100004594(unaff_x22 + lVar17);
LAB_1004f40c0:
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1280);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1298);
  lVar17 = *(long *)(unaff_x22 + 0x12a0);
  FUN_100004640(unaff_x22 + 0x1280,uVar14);
  (**(code **)(lVar17 + 0x70))(uVar14,lVar17);
  TVar5.unknown = (undefined *)(unaff_x22 + 0x1280);
  FUN_100004594();
  if (((uint)uVar14 & 0xff) < 2) {
    lVar24 = *(long *)(unaff_x22 + 0x1778);
    pcVar20 = (char *)0x65757274;
    lVar15 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x12f8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1310);
    lVar17 = *(long *)(unaff_x22 + 0x1318);
    FUN_100004640();
    puVar10 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar12 = (char *)0xe0;
    pcVar13 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar10 + 0x18) = 6;
    *(undefined8 *)(puVar10 + 0x10) = 3;
    *(undefined8 *)(puVar10 + 0x20) = 0x63656e6e6f437369;
    *(undefined8 *)(puVar10 + 0x28) = 0xeb00000000646574;
    *(undefined8 *)(unaff_x22 + 0x16e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x16e8) = 0xe000000000000000;
    SVar33.bridgeObject = pcVar13;
    SVar33.str = pcVar12;
    Swift::String::reserveCapacity(2,SVar33);
    bVar4 = *(char *)(lVar15 + lVar24) == '\0';
    pcVar12 = pcVar20;
    if (bVar4) {
      pcVar12 = (char *)0x65736c6166;
    }
    pcVar1 = &DAT_e400000000000000;
    if (bVar4) {
      pcVar1 = &DAT_e500000000000000;
    }
    SVar26.bridgeObject = pcVar1;
    SVar26.str = pcVar12;
    SVar45.bridgeObject = param_4;
    SVar45.str = pcVar13;
    pcVar12 = pcVar1;
    Swift::String::append(SVar26,SVar45);
    _swift_bridgeObjectRelease(pcVar1);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x16e8);
    *(undefined8 *)(puVar10 + 0x30) = *(undefined8 *)(unaff_x22 + 0x16e0);
    *(undefined8 *)(puVar10 + 0x38) = uVar16;
    puVar10[0x58] = 0;
    *(undefined8 *)(puVar10 + 0x60) = 0x6c65636e61437369;
    *(undefined8 *)(puVar10 + 0x68) = 0xeb0000000064656c;
    *(undefined8 *)(unaff_x22 + 0x16d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x16d8) = 0xe000000000000000;
    TVar5.unknown = (undefined *)0x2;
    SVar34.bridgeObject = pcVar13;
    SVar34.str = pcVar12;
    Swift::String::reserveCapacity(2,SVar34);
    bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
    pcVar12 = pcVar20;
    if (!bVar4) {
      pcVar12 = (char *)0x65736c6166;
    }
    pcVar1 = &DAT_e400000000000000;
    if (!bVar4) {
      pcVar1 = &DAT_e500000000000000;
    }
    SVar27.bridgeObject = pcVar1;
    SVar27.str = pcVar12;
    SVar46.bridgeObject = param_4;
    SVar46.str = pcVar13;
    pcVar12 = pcVar1;
    Swift::String::append(SVar27,SVar46);
    _swift_bridgeObjectRelease(pcVar1);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x16d8);
    *(undefined8 *)(puVar10 + 0x70) = *(undefined8 *)(unaff_x22 + 0x16d0);
    *(undefined8 *)(puVar10 + 0x78) = uVar16;
    puVar10[0x98] = 0;
    *(undefined8 *)(puVar10 + 0xa0) = 0x746e6f436c6c6977;
    *(undefined8 *)(puVar10 + 0xa8) = 0xec00000065756e69;
    *(undefined8 *)(unaff_x22 + 0x16c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x16c8) = 0xe000000000000000;
    TVar5.unknown = (undefined *)0x2;
    SVar35.bridgeObject = pcVar13;
    SVar35.str = pcVar12;
    Swift::String::reserveCapacity(2,SVar35);
    if ((*(char *)(lVar15 + lVar24) != '\x01') ||
       (bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5), bVar4)) {
      puVar23 = &DAT_e500000000000000;
      pcVar20 = (char *)0x65736c6166;
    }
    else {
      puVar23 = &DAT_e400000000000000;
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1800);
    SVar28.bridgeObject = puVar23;
    SVar28.str = pcVar20;
    SVar47.bridgeObject = param_4;
    SVar47.str = pcVar13;
    Swift::String::append(SVar28,SVar47);
    _swift_bridgeObjectRelease(puVar23);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x16c8);
    *(undefined8 *)(puVar10 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x16c0);
    *(undefined8 *)(puVar10 + 0xb8) = uVar16;
    puVar10[0xd8] = 0;
    puVar6 = puVar10;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar10);
    puVar7 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar10 + 0x20,3,puVar7);
    _swift_deallocClassInstance(puVar10,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x550) = 1;
    *(undefined8 *)(unaff_x22 + 0x558) = 0x1000000000000020;
    *(undefined8 *)(unaff_x22 + 0x560) = 0x8000000100dabac0;
    *(undefined8 *)(unaff_x22 + 0x568) = 0;
    *(undefined **)(unaff_x22 + 0x570) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x580) = 0;
    *(undefined8 *)(unaff_x22 + 0x578) = 0;
    *(undefined8 *)(unaff_x22 + 0x588) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x590) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x598) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x5a0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x5a8) = 0x227;
    *(undefined1 *)(unaff_x22 + 0xeb0) = 1;
    *(undefined8 *)(unaff_x22 + 0xeb8) = 0x1000000000000020;
    *(undefined8 *)(unaff_x22 + 0xec0) = 0x8000000100dabac0;
    *(undefined8 *)(unaff_x22 + 0xec8) = 0;
    *(undefined **)(unaff_x22 + 0xed0) = puVar6;
    *(undefined8 *)(unaff_x22 + 0xee0) = 0;
    *(undefined8 *)(unaff_x22 + 0xed8) = 0;
    *(undefined8 *)(unaff_x22 + 0xee8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xef0) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xef8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xf00) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xf08) = 0x227;
    FUN_1004eaa00(unaff_x22 + 0x550,unaff_x22 + 0xd90);
    FUN_1004eaa3c(unaff_x22 + 0xeb0);
    (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x550,uVar14);
    FUN_1004eaa3c(unaff_x22 + 0x550);
    TVar5.unknown = (undefined *)(unaff_x22 + 0x12f8);
    FUN_100004594();
  }
  lVar17 = *(long *)(unaff_x22 + 0x1820);
  if ((*(char *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1778)) == '\x01') &&
     (bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5), !bVar4)) {
    *(long *)(unaff_x22 + 0x1820) = lVar17 + 1;
    if (!SCARRY8(lVar17,1)) {
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1500);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x1518);
      lVar15 = *(long *)(unaff_x22 + 0x1520);
      FUN_100004640(unaff_x22 + 0x1500,uVar14);
      (**(code **)(lVar15 + 0x70))(uVar14,lVar15);
      FUN_100004594(unaff_x22 + 0x1500);
      if (((uint)uVar14 & 0xff) < 2) {
        uVar19 = *(undefined8 *)(unaff_x22 + 0x1808);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x1800);
        FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x14b0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x14c8);
        lVar15 = *(long *)(unaff_x22 + 0x14d0);
        FUN_100004640();
        puVar10 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar12 = (char *)0xa0;
        pcVar13 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar10 + 0x20) = 0x74706d65747461;
        *(undefined8 *)(puVar10 + 0x18) = 4;
        *(undefined8 *)(puVar10 + 0x10) = 2;
        *(undefined1 **)(puVar10 + 0x28) = &DAT_e700000000000000;
        *(undefined8 *)(unaff_x22 + 0x1670) = 0;
        *(undefined8 *)(unaff_x22 + 0x1678) = 0xe000000000000000;
        SVar39.bridgeObject = pcVar13;
        SVar39.str = pcVar12;
        Swift::String::reserveCapacity(2,SVar39);
        *(long *)(unaff_x22 + 0x1730) = lVar17 + 1;
        SVar31 = Swift::CustomStringConvertible::get_description();
        SVar51.bridgeObject = param_4;
        SVar51.str = pcVar13;
        pcVar12 = SVar31.bridgeObject;
        Swift::String::append(SVar31,SVar51);
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x1678);
        *(undefined8 *)(puVar10 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1670);
        *(undefined8 *)(puVar10 + 0x38) = uVar16;
        puVar10[0x58] = 0;
        *(undefined8 *)(puVar10 + 0x60) = 0x4174737269467369;
        *(undefined8 *)(puVar10 + 0x68) = 0xee0074706d657474;
        *(undefined8 *)(unaff_x22 + 0x1690) = 0;
        *(undefined8 *)(unaff_x22 + 0x1698) = 0xe000000000000000;
        SVar40.bridgeObject = pcVar13;
        SVar40.str = pcVar12;
        Swift::String::reserveCapacity(2,SVar40);
        SVar32.bridgeObject = &DAT_e500000000000000;
        SVar32.str = (char *)0x65736c6166;
        SVar52.bridgeObject = param_4;
        SVar52.str = pcVar13;
        Swift::String::append(SVar32,SVar52);
        _swift_bridgeObjectRelease(&DAT_e500000000000000);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x1698);
        *(undefined8 *)(puVar10 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1690);
        *(undefined8 *)(puVar10 + 0x78) = uVar16;
        puVar10[0x98] = 0;
        puVar6 = puVar10;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar10);
        puVar7 = &DAT_100fcb448;
        FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
        _swift_arrayDestroy(puVar10 + 0x20,2,puVar7);
        _swift_deallocClassInstance(puVar10,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x2b0) = 1;
        *(undefined8 *)(unaff_x22 + 0x2b8) = 0x100000000000001d;
        *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100daba40;
        *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
        *(undefined **)(unaff_x22 + 0x2d0) = puVar6;
        *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
        *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
        *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x2f0) = uVar19;
        *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0x300) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x308) = 0x209;
        *(undefined1 *)(unaff_x22 + 0xdf0) = 1;
        *(undefined8 *)(unaff_x22 + 0xdf8) = 0x100000000000001d;
        *(undefined8 *)(unaff_x22 + 0xe00) = 0x8000000100daba40;
        *(undefined8 *)(unaff_x22 + 0xe08) = 0;
        *(undefined **)(unaff_x22 + 0xe10) = puVar6;
        *(undefined8 *)(unaff_x22 + 0xe20) = 0;
        *(undefined8 *)(unaff_x22 + 0xe18) = 0;
        *(undefined8 *)(unaff_x22 + 0xe28) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0xe30) = uVar19;
        *(undefined8 *)(unaff_x22 + 0xe38) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0xe40) = uVar22;
        *(undefined8 *)(unaff_x22 + 0xe48) = 0x209;
        FUN_1004eaa00(unaff_x22 + 0x2b0,unaff_x22 + 0xe50);
        FUN_1004eaa3c(unaff_x22 + 0xdf0);
        (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x2b0,uVar14);
        FUN_1004eaa3c(unaff_x22 + 0x2b0);
        FUN_100004594(unaff_x22 + 0x14b0);
      }
      uVar18 = *(ulong *)(*(long *)(unaff_x22 + 6000) + *(long *)(unaff_x22 + 0x1818));
      FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1398);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x13b0);
      lVar17 = *(long *)(unaff_x22 + 0x13b8);
      FUN_100004640(unaff_x22 + 0x1398,uVar14);
      (**(code **)(lVar17 + 0x70))(uVar14,lVar17);
      FUN_100004594(unaff_x22 + 0x1398);
      if (((uint)uVar14 & 0xff) < 2) {
        uVar22 = *(undefined8 *)(unaff_x22 + 0x1808);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x1800);
        FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x12d0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x12e8);
        lVar17 = *(long *)(unaff_x22 + 0x12f0);
        FUN_100004640();
        puVar10 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar12 = (char *)0x60;
        pcVar13 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar10 + 0x20) = 0x734d7972746572;
        *(undefined8 *)(puVar10 + 0x18) = 2;
        *(undefined8 *)(puVar10 + 0x10) = 1;
        *(undefined1 **)(puVar10 + 0x28) = &DAT_e700000000000000;
        *(undefined8 *)(unaff_x22 + 0x1700) = 0;
        *(undefined8 *)(unaff_x22 + 0x1708) = 0xe000000000000000;
        SVar41.bridgeObject = pcVar13;
        SVar41.str = pcVar12;
        Swift::String::reserveCapacity(2,SVar41);
        *(ulong *)(unaff_x22 + 0x1750) = uVar18;
        SVar31 = Swift::CustomStringConvertible::get_description();
        SVar53.bridgeObject = param_4;
        SVar53.str = pcVar13;
        Swift::String::append(SVar31,SVar53);
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x1708);
        *(undefined8 *)(puVar10 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1700);
        *(undefined8 *)(puVar10 + 0x38) = uVar16;
        puVar10[0x58] = 0;
        puVar7 = puVar10;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar10);
        FUN_1000fb4c4(puVar10 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
        _swift_deallocClassInstance(puVar10,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x310) = 1;
        *(undefined8 *)(unaff_x22 + 0x318) = 0x1000000000000023;
        *(undefined8 *)(unaff_x22 + 800) = 0x8000000100daba60;
        *(undefined8 *)(unaff_x22 + 0x328) = 0;
        *(undefined **)(unaff_x22 + 0x330) = puVar7;
        *(undefined8 *)(unaff_x22 + 0x340) = 0;
        *(undefined8 *)(unaff_x22 + 0x338) = 0;
        *(undefined8 *)(unaff_x22 + 0x348) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x350) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x358) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0x360) = uVar19;
        *(undefined8 *)(unaff_x22 + 0x368) = 0x211;
        *(undefined1 *)(unaff_x22 + 0xf10) = 1;
        *(undefined8 *)(unaff_x22 + 0xf18) = 0x1000000000000023;
        *(undefined8 *)(unaff_x22 + 0xf20) = 0x8000000100daba60;
        *(undefined8 *)(unaff_x22 + 0xf28) = 0;
        *(undefined **)(unaff_x22 + 0xf30) = puVar7;
        *(undefined8 *)(unaff_x22 + 0xf40) = 0;
        *(undefined8 *)(unaff_x22 + 0xf38) = 0;
        *(undefined8 *)(unaff_x22 + 0xf48) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0xf50) = uVar22;
        *(undefined8 *)(unaff_x22 + 0xf58) = 0xd00000000000001f;
        *(undefined8 *)(unaff_x22 + 0xf60) = uVar19;
        *(undefined8 *)(unaff_x22 + 0xf68) = 0x211;
        FUN_1004eaa00(unaff_x22 + 0x310,unaff_x22 + 400);
        FUN_1004eaa3c(unaff_x22 + 0xf10);
        (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x310,uVar14);
        FUN_1004eaa3c(unaff_x22 + 0x310);
        FUN_100004594(unaff_x22 + 0x12d0);
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar18;
      CVar8 = Swift::ContinuousClock::typeMetadataAccessor();
      *(undefined **)(unaff_x22 + 0x1828) = CVar8.unknown;
      lVar17 = *(long *)(CVar8.unknown + -8);
      *(long *)(unaff_x22 + 0x1830) = lVar17;
      uVar9 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x1838) = uVar9;
      (extension_Swift)::Swift::Clock::_get_continuous();
      *(ulong *)(unaff_x22 + 0x15e0) = uVar18 * 1000000000000000;
      *(ulong *)(unaff_x22 + 0x15e8) =
           ((long)uVar18 >> 0x3f & 0xfffc72815b398000U) +
           SUB168(auVar2 * ZEXT816(1000000000000000),8);
      *(undefined8 *)(unaff_x22 + 0x15d0) = 0;
      *(undefined8 *)(unaff_x22 + 0x15c8) = 0;
      *(undefined1 *)(unaff_x22 + 0x15d8) = 1;
      _swift_task_switch(FUN_1004f15b4,0,0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004f4dac);
    (*pcVar3)();
  }
  FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1258);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1270);
  lVar15 = *(long *)(unaff_x22 + 0x1278);
  FUN_100004640(unaff_x22 + 0x1258,uVar14);
  (**(code **)(lVar15 + 0x70))(uVar14,lVar15);
  FUN_100004594(unaff_x22 + 0x1258);
  if (((uint)uVar14 & 0xff) < 2) {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1808);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1800);
    lVar24 = *(long *)(unaff_x22 + 0x1778);
    lVar21 = *(long *)(unaff_x22 + 6000);
    FUN_100076688(*(long *)(unaff_x22 + 0x1810) + 0x20,unaff_x22 + 0x1230);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1248);
    lVar15 = *(long *)(unaff_x22 + 0x1250);
    FUN_100004640();
    puVar10 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar12 = (char *)0xe0;
    pcVar13 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar10 + 0x18) = 6;
    *(undefined8 *)(puVar10 + 0x10) = 3;
    *(undefined8 *)(puVar10 + 0x20) = 0x63656e6e6f437369;
    *(undefined8 *)(puVar10 + 0x28) = 0xeb00000000646574;
    SVar36.bridgeObject = pcVar13;
    SVar36.str = pcVar12;
    Swift::String::reserveCapacity(2,SVar36);
    bVar4 = *(char *)(lVar21 + lVar24) == '\0';
    pcVar12 = (char *)0x65757274;
    if (bVar4) {
      pcVar12 = (char *)0x65736c6166;
    }
    pcVar20 = &DAT_e400000000000000;
    if (bVar4) {
      pcVar20 = &DAT_e500000000000000;
    }
    SVar29.bridgeObject = pcVar20;
    SVar29.str = pcVar12;
    SVar48.bridgeObject = param_4;
    SVar48.str = pcVar13;
    pcVar12 = pcVar20;
    Swift::String::append(SVar29,SVar48);
    _swift_bridgeObjectRelease(pcVar20);
    *(undefined8 *)(puVar10 + 0x30) = 0;
    *(undefined8 *)(puVar10 + 0x38) = 0xe000000000000000;
    puVar10[0x58] = 0;
    *(undefined8 *)(puVar10 + 0x60) = 0x6c65636e61437369;
    *(undefined8 *)(puVar10 + 0x68) = 0xeb0000000064656c;
    TVar5.unknown = (undefined *)0x2;
    SVar37.bridgeObject = pcVar13;
    SVar37.str = pcVar12;
    Swift::String::reserveCapacity(2,SVar37);
    bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
    pcVar12 = (char *)0x65757274;
    if (!bVar4) {
      pcVar12 = (char *)0x65736c6166;
    }
    pcVar20 = &DAT_e400000000000000;
    if (!bVar4) {
      pcVar20 = &DAT_e500000000000000;
    }
    SVar30.bridgeObject = pcVar20;
    SVar30.str = pcVar12;
    SVar49.bridgeObject = param_4;
    SVar49.str = pcVar13;
    pcVar12 = pcVar20;
    Swift::String::append(SVar30,SVar49);
    _swift_bridgeObjectRelease(pcVar20);
    *(undefined8 *)(puVar10 + 0x70) = 0;
    *(undefined8 *)(puVar10 + 0x78) = 0xe000000000000000;
    puVar10[0x98] = 0;
    *(undefined8 *)(puVar10 + 0xa0) = 0x7474416c61746f74;
    *(undefined8 *)(puVar10 + 0xa8) = 0xed00007374706d65;
    SVar38.bridgeObject = pcVar13;
    SVar38.str = pcVar12;
    Swift::String::reserveCapacity(2,SVar38);
    *(long *)(unaff_x22 + 0x1740) = lVar17;
    SVar31 = Swift::CustomStringConvertible::get_description();
    SVar50.bridgeObject = param_4;
    SVar50.str = pcVar13;
    Swift::String::append(SVar31,SVar50);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    *(undefined8 *)(puVar10 + 0xb0) = 0;
    *(undefined8 *)(puVar10 + 0xb8) = 0xe000000000000000;
    puVar10[0xd8] = 0;
    puVar6 = puVar10;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar10);
    puVar7 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar10 + 0x20,3,puVar7);
    _swift_deallocClassInstance(puVar10,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x5b0) = 1;
    *(undefined8 *)(unaff_x22 + 0x5b8) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0x5c0) = 0x8000000100daba20;
    *(undefined8 *)(unaff_x22 + 0x5c8) = 0;
    *(undefined **)(unaff_x22 + 0x5d0) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x5e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x5e8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x5f0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x5f8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x600) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x608) = 0x22e;
    *(undefined1 *)(unaff_x22 + 0xaf0) = 1;
    *(undefined8 *)(unaff_x22 + 0xaf8) = 0x100000000000001c;
    *(undefined8 *)(unaff_x22 + 0xb00) = 0x8000000100daba20;
    *(undefined8 *)(unaff_x22 + 0xb08) = 0;
    *(undefined **)(unaff_x22 + 0xb10) = puVar6;
    *(undefined8 *)(unaff_x22 + 0xb20) = 0;
    *(undefined8 *)(unaff_x22 + 0xb18) = 0;
    *(undefined8 *)(unaff_x22 + 0xb28) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xb30) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xb38) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xb40) = uVar16;
    *(undefined8 *)(unaff_x22 + 0xb48) = 0x22e;
    FUN_1004eaa00(unaff_x22 + 0x5b0,unaff_x22 + 0xbb0);
    FUN_1004eaa3c(unaff_x22 + 0xaf0);
    (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x5b0,uVar14);
    FUN_1004eaa3c(unaff_x22 + 0x5b0);
    FUN_100004594(unaff_x22 + 0x1230);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004f47c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f4dac | FUN_1004f4dac */

void FUN_1004f4dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  _swift_task_switch(FUN_1004f4dcc,0,0);
  return;
}



/* Address: 0x1004f4dcc | FUN_1004f4dcc */

void FUN_1004f4dcc(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  TaskPriority TVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar5 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(TVar4.unknown + -8) + 0x38);
  (*pcVar8)(uVar3,1,1,TVar4.unknown);
  puVar2 = &DAT_100edbba8;
  _swift_allocObject(&DAT_100edbba8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = uVar9;
  FUN_1004f529c(uVar3,&DAT_100c53900,puVar2);
  FUN_1000fb4c4(uVar3,&DAT_100fcd1c8,&DAT_100c53750);
  _swift_task_dealloc(uVar3);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (*pcVar8)();
  puVar2 = &DAT_100edbbd0;
  _swift_allocObject(&DAT_100edbbd0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  _swift_retain(uVar7);
  FUN_1004f529c(uVar5,&DAT_100c53910,puVar2);
  FUN_1000fb4c4(uVar5,&DAT_100fcd1c8,&DAT_100c53750);
  _swift_task_dealloc(uVar5);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar6;
    FUN_1000f7830(&DAT_100fcd4d0,&DAT_100c538f0);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1004f4fd8;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x58));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x59,**(undefined8 **)(unaff_x22 + 0x38),FUN_1004f5040,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1004f4fd8 | FUN_1004f4fd8 */

void FUN_1004f4fd8(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x50));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004f5014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined1 *)(lVar1 + 0x5a) = *(undefined1 *)(lVar1 + 0x58);
  _swift_task_switch(FUN_1004f5068,0,0);
  return;
}



/* Address: 0x1004f5040 | FUN_1004f5040 */

void FUN_1004f5040(void)

{
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004f5048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined1 *)(unaff_x22 + 0x5a) = *(undefined1 *)(unaff_x22 + 0x59);
  _swift_task_switch(FUN_1004f5068,0,0);
  return;
}



/* Address: 0x1004f5068 | FUN_1004f5068 */

void FUN_1004f5068(void)

{
  ThrowingTaskGroup TVar1;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x5a) != '\x01') {
    TVar1.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x38);
    FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
    Swift::ThrowingTaskGroup::cancelAll(TVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004f50d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f50dc | FUN_1004f50dc */

void FUN_1004f50dc(undefined8 param_1)

{
  ContinuousClock CVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x18) = CVar1.unknown;
  lVar3 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  _swift_task_switch(FUN_1004f513c,0,0);
  return;
}



/* Address: 0x1004f513c | FUN_1004f513c */

void FUN_1004f513c(Duration param_1,undefined8 param_2)

{
  Duration DVar1;
  long *plVar2;
  long unaff_x22;
  
  DVar1 = Swift::Duration::seconds(*(double *)(unaff_x22 + 0x10),param_1);
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1004f51d0;
  FUN_10051aec0(DVar1.unknown,param_2,0,0,1);
  return;
}



/* Address: 0x1004f51d0 | FUN_1004f51d0 */

void FUN_1004f51d0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1004f5254,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  (**(code **)(*(long *)(lVar2 + 0x20) + 8))(uVar1,*(undefined8 *)(lVar2 + 0x18));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001004f5250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1004f5254 | FUN_1004f5254 */

void FUN_1004f5254(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x18));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001004f5298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f529c | FUN_1004f529c */

void FUN_1004f529c(undefined8 param_1,undefined8 param_2,long param_3)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  UnownedSerialExecutor UVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined auStack_90 [8];
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_90 + -extraout_x8;
  FUN_1000f8cac(param_1,puVar2,&DAT_100fcd1c8,&DAT_100c53750);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar8 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_1000fb4c4(puVar2,&DAT_100fcd1c8,&DAT_100c53750);
    uVar6 = 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar4);
    (**(code **)(lVar8 + 8))(puVar2,TVar3.unknown);
    uVar6 = (ulong)_Var1 | 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  if (lVar8 == 0) {
    UVar5.unknown = (undefined *)0x0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x18);
    _swift_getObjectType(lVar8);
    _swift_unknownObjectRetain(lVar8);
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar8);
  }
  local_78 = *unaff_x20;
  puStack_80 = (undefined8 *)0x0;
  if (lVar7 != 0 || UVar5.unknown != (undefined *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    puStack_80 = &local_70;
    local_60 = UVar5.unknown;
    lStack_58 = lVar7;
  }
  local_88 = 1;
  _swift_task_create(uVar6,&local_88,PTR___type_metadata_for____100eae0c8 + 8,param_2,param_3);
  _swift_release();
  return;
}



/* Address: 0x1004f5440 | FUN_1004f5440 */

void FUN_1004f5440(Task param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000749a0;
  (extension_Swift)::Swift::Task::_get_value(param_1);
  return;
}



/* Address: 0x1004f54a8 | FUN_1004f54a8 */

void FUN_1004f54a8(void)

{
  AsyncBytes AVar1;
  ulong uVar2;
  URL UVar3;
  URLRequest_conflict UVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x938) = unaff_x20;
  AVar1 = AsyncBytes::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x940) = AVar1.unknown;
  lVar6 = *(long *)(AVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x948) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x950) = uVar2;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x958) = UVar3.unknown;
  lVar6 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x960) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x968) = uVar2;
  UVar4 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x970) = UVar4.unknown;
  lVar6 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x978) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar5 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x980) = uVar5;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x988) = uVar2;
  _swift_task_switch(FUN_1004f5564);
  return;
}



/* Address: 0x1004f5564 | FUN_1004f5564 */

/* WARNING: Removing unreachable block (ram,0x0001004f55fc) */

tuple2_conflict7 FUN_1004f5564(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  Data UNRECOVERED_JUMPTABLE;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  void *pvVar9;
  URLRequest_conflict in_x4;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  URL url;
  void *pvVar13;
  URLRequest *this;
  long lVar14;
  NSURLResponse *pNVar15;
  char *pcVar16;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  tuple2_conflict7 tVar28;
  String SVar29;
  String SVar30;
  tuple2_conflict7 tVar31;
  String SVar32;
  String forHTTPHeaderField;
  String forHTTPHeaderField_00;
  String forHTTPHeaderField_01;
  String forHTTPHeaderField_02;
  String forHTTPHeaderField_03;
  String SVar33;
  
  lVar21 = *(long *)(unaff_x22 + 0x938);
  if (*(char *)(lVar21 + _TtC3MCP19HTTPClientTransport::isConnected) != '\x01') {
    lVar21 = *(long *)(lVar21 + _TtC3MCP19HTTPClientTransport::logger);
    _swift_beginAccess(lVar21 + 0x20,unaff_x22 + 0x8f8,0,0);
    FUN_100076688(lVar21 + 0x20,unaff_x22 + 0x888);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x8a0);
    pNVar15 = *(NSURLResponse **)(unaff_x22 + 0x8a8);
    FUN_100004640(unaff_x22 + 0x888,uVar12);
    (**(code **)(pNVar15 + 0x70))(uVar12,pNVar15);
    FUN_100004594(unaff_x22 + 0x888);
    if (((uint)uVar12 & 0xff) < 2) {
      FUN_100076688(lVar21 + 0x20,unaff_x22 + 0x810);
      pNVar15 = *(NSURLResponse **)(unaff_x22 + 0x828);
      lVar21 = *(long *)(unaff_x22 + 0x830);
      FUN_100004640(unaff_x22 + 0x810,pNVar15);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x100000000000003e;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dab830;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dab810;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x239;
      *(undefined1 *)(unaff_x22 + 0x310) = 1;
      *(undefined8 *)(unaff_x22 + 0x318) = 0x100000000000003e;
      *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dab830;
      *(undefined8 *)(unaff_x22 + 0x330) = 0;
      *(undefined8 *)(unaff_x22 + 0x328) = 0;
      *(undefined8 *)(unaff_x22 + 0x340) = 0;
      *(undefined8 *)(unaff_x22 + 0x338) = 0;
      *(undefined8 *)(unaff_x22 + 0x348) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x358) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x360) = 0x8000000100dab810;
      *(undefined8 *)(unaff_x22 + 0x368) = 0x239;
      FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0x3d0);
      FUN_1004eaa3c(unaff_x22 + 0x310);
      (**(code **)(lVar21 + 0x28))(unaff_x22 + 0x10,pNVar15,lVar21);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      FUN_100004594(unaff_x22 + 0x810);
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x980);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x968);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x950);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x988));
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar19);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001004f5898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar31._ = pNVar15;
    tVar31._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar31;
  }
  plVar6 = (long *)(lVar21 + _TtC3MCP19HTTPClientTransport::authorizer);
  lVar11 = *plVar6;
  *(long *)(unaff_x22 + 0x990) = lVar11;
  lVar20 = plVar6[1];
  *(long *)(unaff_x22 + 0x998) = lVar20;
  if (lVar11 == 0) {
    lVar11 = *(long *)(lVar21 + _TtC3MCP19HTTPClientTransport::logger);
    *(long *)(unaff_x22 + 0x9a8) = lVar11;
    _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x8e0,0,0);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x7c0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x7d8);
    lVar21 = *(long *)(unaff_x22 + 0x7e0);
    FUN_100004640(unaff_x22 + 0x7c0,uVar12);
    (**(code **)(lVar21 + 0x70))(uVar12,lVar21);
    FUN_100004594(unaff_x22 + 0x7c0);
    if (((uint)uVar12 & 0xff) < 2) {
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x748);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x760);
      lVar21 = *(long *)(unaff_x22 + 0x768);
      FUN_100004640(unaff_x22 + 0x748,uVar12);
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0x1000000000000025;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dab870;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dab810;
      *(undefined8 *)(unaff_x22 + 200) = 0x24b;
      *(undefined1 *)(unaff_x22 + 0x4f0) = 1;
      *(undefined8 *)(unaff_x22 + 0x4f8) = 0x1000000000000025;
      *(undefined8 *)(unaff_x22 + 0x500) = 0x8000000100dab870;
      *(undefined8 *)(unaff_x22 + 0x510) = 0;
      *(undefined8 *)(unaff_x22 + 0x508) = 0;
      *(undefined8 *)(unaff_x22 + 0x520) = 0;
      *(undefined8 *)(unaff_x22 + 0x518) = 0;
      *(undefined8 *)(unaff_x22 + 0x528) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x530) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x538) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x540) = 0x8000000100dab810;
      *(undefined8 *)(unaff_x22 + 0x548) = 0x24b;
      FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x5b0);
      FUN_1004eaa3c(unaff_x22 + 0x4f0);
      (**(code **)(lVar21 + 0x28))(unaff_x22 + 0x70,uVar12,lVar21);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      FUN_100004594(unaff_x22 + 0x748);
    }
    lVar21 = _TtC3MCP19HTTPClientTransport::endpoint;
    this = *(URLRequest **)(unaff_x22 + 0x988);
    url.unknown = *(undefined **)(unaff_x22 + 0x968);
    lVar20 = *(long *)(unaff_x22 + 0x938);
    (**(code **)(*(long *)(unaff_x22 + 0x960) + 0x10))
              (url.unknown,lVar20 + _TtC3MCP19HTTPClientTransport::endpoint,
               *(undefined8 *)(unaff_x22 + 0x958));
    Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
    Foundation::URLRequest::_set_httpMethod(this);
    SVar23.bridgeObject = (void *)0x8000000100dab8a0;
    SVar23.str = (char *)0xd000000000000011;
    forHTTPHeaderField.bridgeObject = &DAT_e600000000000000;
    forHTTPHeaderField.str = (char *)0x747065636341;
    Foundation::URLRequest::addValue(SVar23,forHTTPHeaderField,in_x4);
    SVar24.bridgeObject = &DAT_e800000000000000;
    SVar24.str = (char *)0x65686361632d6f6e;
    forHTTPHeaderField_00.bridgeObject = (void *)0xed00006c6f72746e;
    forHTTPHeaderField_00.str = (char *)0x6f432d6568636143;
    Foundation::URLRequest::addValue(SVar24,forHTTPHeaderField_00,in_x4);
    puVar1 = (undefined8 *)(lVar20 + _TtC3MCP19HTTPClientTransport::protocolVersion);
    _swift_beginAccess(puVar1,unaff_x22 + 0x8c8,0,0);
    pvVar13 = (void *)puVar1[1];
    if (pvVar13 != (void *)0x0) {
      pcVar16 = (char *)*puVar1;
      _swift_bridgeObjectRetain(pvVar13);
      SVar25.bridgeObject = pvVar13;
      SVar25.str = pcVar16;
      forHTTPHeaderField_01.bridgeObject = (void *)0x8000000100dab710;
      forHTTPHeaderField_01.str = (char *)0xd000000000000014;
      Foundation::URLRequest::addValue(SVar25,forHTTPHeaderField_01,in_x4);
      _swift_bridgeObjectRelease(pvVar13);
    }
    lVar18 = _TtC3MCP19HTTPClientTransport::sessionID;
    *(long *)(unaff_x22 + 0x9b0) = _TtC3MCP19HTTPClientTransport::sessionID;
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x938) + lVar18);
    _swift_beginAccess(puVar1,unaff_x22 + 0x8b0,1,0);
    pvVar13 = (void *)puVar1[1];
    if (pvVar13 != (void *)0x0) {
      pcVar16 = (char *)*puVar1;
      _swift_bridgeObjectRetain(pvVar13);
      SVar26.bridgeObject = pvVar13;
      SVar26.str = pcVar16;
      forHTTPHeaderField_02.bridgeObject = (void *)0xee0064492d6e6f69;
      forHTTPHeaderField_02.str = (char *)0x737365532d50434d;
      Foundation::URLRequest::addValue(SVar26,forHTTPHeaderField_02,in_x4);
      _swift_bridgeObjectRelease(pvVar13);
    }
    puVar1 = (undefined8 *)
             (*(long *)(unaff_x22 + 0x938) + _TtC3MCP19HTTPClientTransport::lastEventID);
    pvVar13 = (void *)puVar1[1];
    if (pvVar13 == (void *)0x0) {
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x6d0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x6e8);
      lVar18 = *(long *)(unaff_x22 + 0x6f0);
      FUN_100004640(unaff_x22 + 0x6d0,uVar12);
      (**(code **)(lVar18 + 0x70))(uVar12,lVar18);
      FUN_100004594(unaff_x22 + 0x6d0);
      if (((uint)uVar12 & 0xff) < 3) {
        FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x6f8);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x710);
        lVar18 = *(long *)(unaff_x22 + 0x718);
        FUN_100004640(unaff_x22 + 0x6f8,uVar12);
        *(undefined1 *)(unaff_x22 + 0xd0) = 2;
        *(undefined8 *)(unaff_x22 + 0xd8) = 0x100000000000003e;
        *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dab8c0;
        *(undefined8 *)(unaff_x22 + 0xf0) = 0;
        *(undefined8 *)(unaff_x22 + 0xe8) = 0;
        *(undefined8 *)(unaff_x22 + 0x100) = 0;
        *(undefined8 *)(unaff_x22 + 0xf8) = 0;
        *(undefined8 *)(unaff_x22 + 0x108) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dab630;
        *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000016;
        *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dab810;
        *(undefined8 *)(unaff_x22 + 0x128) = 0x25e;
        *(undefined1 *)(unaff_x22 + 0x670) = 2;
        *(undefined8 *)(unaff_x22 + 0x678) = 0x100000000000003e;
        *(undefined8 *)(unaff_x22 + 0x680) = 0x8000000100dab8c0;
        *(undefined8 *)(unaff_x22 + 0x690) = 0;
        *(undefined8 *)(unaff_x22 + 0x688) = 0;
        *(undefined8 *)(unaff_x22 + 0x6a0) = 0;
        *(undefined8 *)(unaff_x22 + 0x698) = 0;
        *(undefined8 *)(unaff_x22 + 0x6a8) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x6b0) = 0x8000000100dab630;
        *(undefined8 *)(unaff_x22 + 0x6b8) = 0xd000000000000016;
        *(undefined8 *)(unaff_x22 + 0x6c0) = 0x8000000100dab810;
        *(undefined8 *)(unaff_x22 + 0x6c8) = 0x25e;
        FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 0x610);
        FUN_1004eaa3c(unaff_x22 + 0x670);
        (**(code **)(lVar18 + 0x28))(unaff_x22 + 0xd0,uVar12,lVar18);
        FUN_1004eaa3c(unaff_x22 + 0xd0);
        FUN_100004594(unaff_x22 + 0x6f8);
      }
    }
    else {
      pcVar16 = (char *)*puVar1;
      _swift_bridgeObjectRetain(pvVar13);
      pvVar9 = (void *)0xed000044492d746e;
      SVar27.bridgeObject = pvVar13;
      SVar27.str = pcVar16;
      forHTTPHeaderField_03.bridgeObject = (void *)0xed000044492d746e;
      forHTTPHeaderField_03.str = (char *)0x6576452d7473614c;
      Foundation::URLRequest::addValue(SVar27,forHTTPHeaderField_03,in_x4);
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x838);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x850);
      lVar18 = *(long *)(unaff_x22 + 0x858);
      FUN_100004640(unaff_x22 + 0x838,uVar12);
      (**(code **)(lVar18 + 0x70))(uVar12,lVar18);
      FUN_100004594(unaff_x22 + 0x838);
      if (((uint)uVar12 & 0xff) < 3) {
        FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x860);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x878);
        lVar18 = *(long *)(unaff_x22 + 0x880);
        FUN_100004640();
        puVar4 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar7 = (char *)0x60;
        pcVar8 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar4 + 0x20) = 0x6e6576457473616c;
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined8 *)(puVar4 + 0x28) = 0xeb00000000444974;
        SVar32.bridgeObject = pcVar8;
        SVar32.str = pcVar7;
        Swift::String::reserveCapacity(2,SVar32);
        SVar29.bridgeObject = pvVar13;
        SVar29.str = pcVar16;
        SVar33.bridgeObject = pvVar9;
        SVar33.str = pcVar8;
        Swift::String::write(SVar29,SVar33);
        *(undefined8 *)(puVar4 + 0x30) = 0;
        *(undefined8 *)(puVar4 + 0x38) = 0xe000000000000000;
        puVar4[0x58] = 0;
        puVar5 = puVar4;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar4);
        FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
        _swift_deallocClassInstance(puVar4,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x130) = 2;
        *(undefined8 *)(unaff_x22 + 0x138) = 0x100000000000002a;
        *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dab960;
        *(undefined8 *)(unaff_x22 + 0x148) = 0;
        *(undefined **)(unaff_x22 + 0x150) = puVar5;
        *(undefined8 *)(unaff_x22 + 0x160) = 0;
        *(undefined8 *)(unaff_x22 + 0x158) = 0;
        *(undefined8 *)(unaff_x22 + 0x168) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dab630;
        *(undefined8 *)(unaff_x22 + 0x178) = 0xd000000000000016;
        *(undefined8 *)(unaff_x22 + 0x180) = 0x8000000100dab810;
        *(undefined8 *)(unaff_x22 + 0x188) = 0x25c;
        *(undefined1 *)(unaff_x22 + 0x2b0) = 2;
        *(undefined8 *)(unaff_x22 + 0x2b8) = 0x100000000000002a;
        *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100dab960;
        *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
        *(undefined **)(unaff_x22 + 0x2d0) = puVar5;
        *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
        *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
        *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001d;
        *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dab630;
        *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd000000000000016;
        *(undefined8 *)(unaff_x22 + 0x300) = 0x8000000100dab810;
        *(undefined8 *)(unaff_x22 + 0x308) = 0x25c;
        FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 0x250);
        FUN_1004eaa3c(unaff_x22 + 0x2b0);
        (**(code **)(lVar18 + 0x28))(unaff_x22 + 0x130,uVar12);
        _swift_bridgeObjectRelease(pvVar13);
        FUN_1004eaa3c(unaff_x22 + 0x130);
        FUN_100004594(unaff_x22 + 0x860);
      }
      else {
        _swift_bridgeObjectRelease(pvVar13);
      }
    }
    pvVar13 = *(void **)(unaff_x22 + 0x990);
    if (pvVar13 != (void *)0x0) {
      lVar18 = *(long *)(unaff_x22 + 0x998);
      _swift_getObjectType();
      pcVar16 = (char *)(lVar20 + lVar21);
      (**(code **)(lVar18 + 0x18))(pcVar16,pvVar13,lVar18);
      if (pvVar13 != (void *)0x0) {
        SVar30.bridgeObject = pvVar13;
        SVar30.str = pcVar16;
        Foundation::URLRequest::_setValue(SVar30,(URLRequest_conflict)0x7a69726f68747541);
        _swift_bridgeObjectRelease(pvVar13);
      }
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x988);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x980);
    lVar21 = *(long *)(unaff_x22 + 0x978);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x970);
    (**(code **)(*(long *)(unaff_x22 + 0x938) + _TtC3MCP19HTTPClientTransport::requestModifier))
              (uVar17,uVar12);
    pcVar22 = *(code **)(lVar21 + 8);
    *(code **)(unaff_x22 + 0x9b8) = pcVar22;
    (*pcVar22)(uVar12,uVar19);
    (**(code **)(lVar21 + 0x20))(uVar12,uVar17,uVar19);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x720);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x738);
    lVar21 = *(long *)(unaff_x22 + 0x740);
    FUN_100004640(unaff_x22 + 0x720,uVar12);
    (**(code **)(lVar21 + 0x70))(uVar12,lVar21);
    FUN_100004594(unaff_x22 + 0x720);
    if (((uint)uVar12 & 0xff) < 2) {
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x770);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x788);
      lVar21 = *(long *)(unaff_x22 + 0x790);
      FUN_100004640(unaff_x22 + 0x770,uVar12);
      *(undefined1 *)(unaff_x22 + 400) = 1;
      *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000017;
      *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dab900;
      *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
      *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x1d8) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x1e0) = 0x8000000100dab810;
      *(undefined8 *)(unaff_x22 + 0x1e8) = 0x267;
      *(undefined1 *)(unaff_x22 + 0x550) = 1;
      *(undefined8 *)(unaff_x22 + 0x558) = 0xd000000000000017;
      *(undefined8 *)(unaff_x22 + 0x560) = 0x8000000100dab900;
      *(undefined8 *)(unaff_x22 + 0x570) = 0;
      *(undefined8 *)(unaff_x22 + 0x568) = 0;
      *(undefined8 *)(unaff_x22 + 0x580) = 0;
      *(undefined8 *)(unaff_x22 + 0x578) = 0;
      *(undefined8 *)(unaff_x22 + 0x588) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x590) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x598) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x5a0) = 0x8000000100dab810;
      *(undefined8 *)(unaff_x22 + 0x5a8) = 0x267;
      FUN_1004eaa00(unaff_x22 + 400,unaff_x22 + 0x490);
      FUN_1004eaa3c(unaff_x22 + 0x550);
      (**(code **)(lVar21 + 0x28))(unaff_x22 + 400,uVar12,lVar21);
      FUN_1004eaa3c(unaff_x22 + 400);
      FUN_100004594(unaff_x22 + 0x770);
    }
    plVar6 = (long *)(ulong)*(uint *)(PTR__bytes_100ea7950 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x9c0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1004f6af8;
    tVar31 = (extension_Foundation)::__C::NSURLSession::_bytes
                       ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0x950));
    return tVar31;
  }
  lVar3 = lVar11;
  _swift_getObjectType();
  lVar18 = _TtC3MCP19HTTPClientTransport::endpoint;
  pcVar22 = *(code **)(lVar20 + 0x10);
  _swift_unknownObjectRetain(lVar11);
  (*pcVar22)(lVar21 + lVar18,lVar3,lVar20);
  lVar14 = *(long *)(unaff_x22 + 0x938);
  _swift_unknownObjectRelease(lVar11);
  lVar3 = lVar11;
  _swift_getObjectType(lVar11);
  pNVar15 = *(NSURLResponse **)(lVar14 + _TtC3MCP19HTTPClientTransport::session);
  piVar10 = *(int **)(lVar20 + 0x28);
  iVar2 = *piVar10;
  plVar6 = (long *)(ulong)(uint)piVar10[1];
  _swift_unknownObjectRetain(lVar11);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x9a0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1004f61d0;
  UNRECOVERED_JUMPTABLE.unknown = (undefined *)(lVar21 + lVar18);
                    /* WARNING: Could not recover jumptable at 0x0001004f5ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar10))
            (plVar6,UNRECOVERED_JUMPTABLE.unknown,pNVar15,lVar3,lVar20);
  tVar28._ = pNVar15;
  tVar28._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar28;
}



/* Address: 0x1004f61d0 | FUN_1004f61d0 */

void FUN_1004f61d0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x9a0));
  uVar3 = *(undefined8 *)(lVar2 + 0x938);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004f6234;
  }
  else {
    _swift_errorRelease();
    pcVar1 = thunk_FUN_1004f6234;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x1004f6234 | FUN_1004f6234 */

tuple2_conflict7 FUN_1004f6234(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  URLRequest_conflict in_x4;
  code *pcVar8;
  undefined8 uVar9;
  URL url;
  void *pvVar10;
  URLRequest *this;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  tuple2_conflict7 tVar26;
  String SVar27;
  String forHTTPHeaderField;
  String forHTTPHeaderField_00;
  String forHTTPHeaderField_01;
  String forHTTPHeaderField_02;
  String forHTTPHeaderField_03;
  String SVar28;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x990));
  lVar17 = *(long *)(*(long *)(unaff_x22 + 0x938) + _TtC3MCP19HTTPClientTransport::logger);
  *(long *)(unaff_x22 + 0x9a8) = lVar17;
  _swift_beginAccess(lVar17 + 0x20,unaff_x22 + 0x8e0,0,0);
  FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x7c0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x7d8);
  lVar11 = *(long *)(unaff_x22 + 0x7e0);
  FUN_100004640(unaff_x22 + 0x7c0,uVar9);
  (**(code **)(lVar11 + 0x70))(uVar9,lVar11);
  FUN_100004594(unaff_x22 + 0x7c0);
  if (((uint)uVar9 & 0xff) < 2) {
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x748);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x760);
    lVar11 = *(long *)(unaff_x22 + 0x768);
    FUN_100004640(unaff_x22 + 0x748,uVar9);
    puVar14 = (undefined1 *)(unaff_x22 + 0x70);
    *puVar14 = 1;
    *(undefined8 *)(unaff_x22 + 0x78) = 0x1000000000000025;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dab870;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dab810;
    *(undefined8 *)(unaff_x22 + 200) = 0x24b;
    *(undefined1 *)(unaff_x22 + 0x4f0) = 1;
    *(undefined8 *)(unaff_x22 + 0x4f8) = 0x1000000000000025;
    *(undefined8 *)(unaff_x22 + 0x500) = 0x8000000100dab870;
    *(undefined8 *)(unaff_x22 + 0x510) = 0;
    *(undefined8 *)(unaff_x22 + 0x508) = 0;
    *(undefined8 *)(unaff_x22 + 0x520) = 0;
    *(undefined8 *)(unaff_x22 + 0x518) = 0;
    *(undefined8 *)(unaff_x22 + 0x528) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x530) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x538) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x540) = 0x8000000100dab810;
    *(undefined8 *)(unaff_x22 + 0x548) = 0x24b;
    FUN_1004eaa00(puVar14,unaff_x22 + 0x5b0);
    FUN_1004eaa3c(unaff_x22 + 0x4f0);
    (**(code **)(lVar11 + 0x28))(puVar14,uVar9,lVar11);
    FUN_1004eaa3c(puVar14);
    FUN_100004594(unaff_x22 + 0x748);
  }
  lVar11 = _TtC3MCP19HTTPClientTransport::endpoint;
  this = *(URLRequest **)(unaff_x22 + 0x988);
  url.unknown = *(undefined **)(unaff_x22 + 0x968);
  lVar18 = *(long *)(unaff_x22 + 0x938);
  (**(code **)(*(long *)(unaff_x22 + 0x960) + 0x10))
            (url.unknown,lVar18 + _TtC3MCP19HTTPClientTransport::endpoint,
             *(undefined8 *)(unaff_x22 + 0x958));
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  SVar19.bridgeObject = (void *)0x8000000100dab8a0;
  SVar19.str = (char *)0xd000000000000011;
  forHTTPHeaderField.bridgeObject = &DAT_e600000000000000;
  forHTTPHeaderField.str = (char *)0x747065636341;
  Foundation::URLRequest::addValue(SVar19,forHTTPHeaderField,in_x4);
  SVar20.bridgeObject = &DAT_e800000000000000;
  SVar20.str = (char *)0x65686361632d6f6e;
  forHTTPHeaderField_00.bridgeObject = (void *)0xed00006c6f72746e;
  forHTTPHeaderField_00.str = (char *)0x6f432d6568636143;
  Foundation::URLRequest::addValue(SVar20,forHTTPHeaderField_00,in_x4);
  puVar1 = (undefined8 *)(lVar18 + _TtC3MCP19HTTPClientTransport::protocolVersion);
  _swift_beginAccess(puVar1,unaff_x22 + 0x8c8,0,0);
  pvVar10 = (void *)puVar1[1];
  if (pvVar10 != (void *)0x0) {
    pcVar12 = (char *)*puVar1;
    _swift_bridgeObjectRetain(pvVar10);
    SVar21.bridgeObject = pvVar10;
    SVar21.str = pcVar12;
    forHTTPHeaderField_01.bridgeObject = (void *)0x8000000100dab710;
    forHTTPHeaderField_01.str = (char *)0xd000000000000014;
    Foundation::URLRequest::addValue(SVar21,forHTTPHeaderField_01,in_x4);
    _swift_bridgeObjectRelease(pvVar10);
  }
  lVar15 = _TtC3MCP19HTTPClientTransport::sessionID;
  *(long *)(unaff_x22 + 0x9b0) = _TtC3MCP19HTTPClientTransport::sessionID;
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x938) + lVar15);
  _swift_beginAccess(puVar1,unaff_x22 + 0x8b0,1,0);
  pvVar10 = (void *)puVar1[1];
  if (pvVar10 != (void *)0x0) {
    pcVar12 = (char *)*puVar1;
    _swift_bridgeObjectRetain(pvVar10);
    SVar22.bridgeObject = pvVar10;
    SVar22.str = pcVar12;
    forHTTPHeaderField_02.bridgeObject = (void *)0xee0064492d6e6f69;
    forHTTPHeaderField_02.str = (char *)0x737365532d50434d;
    Foundation::URLRequest::addValue(SVar22,forHTTPHeaderField_02,in_x4);
    _swift_bridgeObjectRelease(pvVar10);
  }
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x938) + _TtC3MCP19HTTPClientTransport::lastEventID)
  ;
  pvVar10 = (void *)puVar1[1];
  if (pvVar10 == (void *)0x0) {
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x6d0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x6e8);
    lVar15 = *(long *)(unaff_x22 + 0x6f0);
    FUN_100004640(unaff_x22 + 0x6d0,uVar9);
    (**(code **)(lVar15 + 0x70))(uVar9,lVar15);
    FUN_100004594(unaff_x22 + 0x6d0);
    if (2 < ((uint)uVar9 & 0xff)) goto LAB_1004f68c8;
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x6f8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x710);
    lVar15 = *(long *)(unaff_x22 + 0x718);
    FUN_100004640(unaff_x22 + 0x6f8,uVar9);
    *(undefined1 *)(unaff_x22 + 0xd0) = 2;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x100000000000003e;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dab8c0;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dab810;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x25e;
    *(undefined1 *)(unaff_x22 + 0x670) = 2;
    *(undefined8 *)(unaff_x22 + 0x678) = 0x100000000000003e;
    *(undefined8 *)(unaff_x22 + 0x680) = 0x8000000100dab8c0;
    *(undefined8 *)(unaff_x22 + 0x690) = 0;
    *(undefined8 *)(unaff_x22 + 0x688) = 0;
    *(undefined8 *)(unaff_x22 + 0x6a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x698) = 0;
    *(undefined8 *)(unaff_x22 + 0x6a8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x6b0) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x6b8) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x6c0) = 0x8000000100dab810;
    *(undefined8 *)(unaff_x22 + 0x6c8) = 0x25e;
    FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 0x610);
    FUN_1004eaa3c(unaff_x22 + 0x670);
    (**(code **)(lVar15 + 0x28))(unaff_x22 + 0xd0,uVar9,lVar15);
    FUN_1004eaa3c(unaff_x22 + 0xd0);
    lVar15 = unaff_x22 + 0x6f8;
  }
  else {
    pcVar12 = (char *)*puVar1;
    _swift_bridgeObjectRetain(pvVar10);
    pvVar7 = (void *)0xed000044492d746e;
    SVar23.bridgeObject = pvVar10;
    SVar23.str = pcVar12;
    forHTTPHeaderField_03.bridgeObject = (void *)0xed000044492d746e;
    forHTTPHeaderField_03.str = (char *)0x6576452d7473614c;
    Foundation::URLRequest::addValue(SVar23,forHTTPHeaderField_03,in_x4);
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x838);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x850);
    lVar15 = *(long *)(unaff_x22 + 0x858);
    FUN_100004640(unaff_x22 + 0x838,uVar9);
    (**(code **)(lVar15 + 0x70))(uVar9,lVar15);
    FUN_100004594(unaff_x22 + 0x838);
    if (2 < ((uint)uVar9 & 0xff)) {
      _swift_bridgeObjectRelease(pvVar10);
      goto LAB_1004f68c8;
    }
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x860);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x878);
    lVar15 = *(long *)(unaff_x22 + 0x880);
    FUN_100004640();
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar5 = (char *)0x60;
    pcVar6 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = 0x6e6576457473616c;
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x28) = 0xeb00000000444974;
    SVar27.bridgeObject = pcVar6;
    SVar27.str = pcVar5;
    Swift::String::reserveCapacity(2,SVar27);
    SVar24.bridgeObject = pvVar10;
    SVar24.str = pcVar12;
    SVar28.bridgeObject = pvVar7;
    SVar28.str = pcVar6;
    Swift::String::write(SVar24,SVar28);
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0xe000000000000000;
    puVar2[0x58] = 0;
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar2,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x130) = 2;
    *(undefined8 *)(unaff_x22 + 0x138) = 0x100000000000002a;
    *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dab960;
    *(undefined8 *)(unaff_x22 + 0x148) = 0;
    *(undefined **)(unaff_x22 + 0x150) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x158) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x178) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x180) = 0x8000000100dab810;
    *(undefined8 *)(unaff_x22 + 0x188) = 0x25c;
    *(undefined1 *)(unaff_x22 + 0x2b0) = 2;
    *(undefined8 *)(unaff_x22 + 0x2b8) = 0x100000000000002a;
    *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100dab960;
    *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
    *(undefined **)(unaff_x22 + 0x2d0) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x300) = 0x8000000100dab810;
    *(undefined8 *)(unaff_x22 + 0x308) = 0x25c;
    FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 0x250);
    FUN_1004eaa3c(unaff_x22 + 0x2b0);
    (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x130,uVar9);
    _swift_bridgeObjectRelease(pvVar10);
    FUN_1004eaa3c(unaff_x22 + 0x130);
    lVar15 = unaff_x22 + 0x860;
  }
  FUN_100004594(lVar15);
LAB_1004f68c8:
  pvVar10 = *(void **)(unaff_x22 + 0x990);
  if (pvVar10 != (void *)0x0) {
    lVar15 = *(long *)(unaff_x22 + 0x998);
    _swift_getObjectType();
    pcVar12 = (char *)(lVar18 + lVar11);
    (**(code **)(lVar15 + 0x18))(pcVar12,pvVar10,lVar15);
    if (pvVar10 != (void *)0x0) {
      SVar25.bridgeObject = pvVar10;
      SVar25.str = pcVar12;
      Foundation::URLRequest::_setValue(SVar25,(URLRequest_conflict)0x7a69726f68747541);
      _swift_bridgeObjectRelease(pvVar10);
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x988);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x980);
  lVar11 = *(long *)(unaff_x22 + 0x978);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x970);
  (**(code **)(*(long *)(unaff_x22 + 0x938) + _TtC3MCP19HTTPClientTransport::requestModifier))
            (uVar13,uVar9);
  pcVar8 = *(code **)(lVar11 + 8);
  *(code **)(unaff_x22 + 0x9b8) = pcVar8;
  (*pcVar8)(uVar9,uVar16);
  (**(code **)(lVar11 + 0x20))(uVar9,uVar13,uVar16);
  FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x720);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x738);
  lVar11 = *(long *)(unaff_x22 + 0x740);
  FUN_100004640(unaff_x22 + 0x720,uVar9);
  (**(code **)(lVar11 + 0x70))(uVar9,lVar11);
  FUN_100004594(unaff_x22 + 0x720);
  if (((uint)uVar9 & 0xff) < 2) {
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x770);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x788);
    lVar11 = *(long *)(unaff_x22 + 0x790);
    FUN_100004640(unaff_x22 + 0x770,uVar9);
    *(undefined1 *)(unaff_x22 + 400) = 1;
    *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dab900;
    *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0x8000000100dab810;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0x267;
    *(undefined1 *)(unaff_x22 + 0x550) = 1;
    *(undefined8 *)(unaff_x22 + 0x558) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x560) = 0x8000000100dab900;
    *(undefined8 *)(unaff_x22 + 0x570) = 0;
    *(undefined8 *)(unaff_x22 + 0x568) = 0;
    *(undefined8 *)(unaff_x22 + 0x580) = 0;
    *(undefined8 *)(unaff_x22 + 0x578) = 0;
    *(undefined8 *)(unaff_x22 + 0x588) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x590) = 0x8000000100dab630;
    *(undefined8 *)(unaff_x22 + 0x598) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x5a0) = 0x8000000100dab810;
    *(undefined8 *)(unaff_x22 + 0x5a8) = 0x267;
    FUN_1004eaa00(unaff_x22 + 400,unaff_x22 + 0x490);
    FUN_1004eaa3c(unaff_x22 + 0x550);
    (**(code **)(lVar11 + 0x28))(unaff_x22 + 400,uVar9,lVar11);
    FUN_1004eaa3c(unaff_x22 + 400);
    FUN_100004594(unaff_x22 + 0x770);
  }
  plVar4 = (long *)(ulong)*(uint *)(PTR__bytes_100ea7950 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x9c0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1004f6af8;
  tVar26 = (extension_Foundation)::__C::NSURLSession::_bytes
                     ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0x950));
  return tVar26;
}



/* Address: 0x1004f6af8 | FUN_1004f6af8 */

void FUN_1004f6af8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x9c8) = param_1;
  *(long *)(lVar2 + 0x9d0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x9c0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004f6b5c;
  }
  else {
    pcVar1 = FUN_1004f7214;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x938),0);
  return;
}



/* Address: 0x1004f6b5c | FUN_1004f6b5c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1004f6b5c(AsyncBytes param_1,undefined8 param_2,char *param_3,undefined *param_4)

{
  String *pSVar1;
  NSURLSessionDataTask *pNVar2;
  ID IVar3;
  NSString *pNVar4;
  Task TVar5;
  undefined *puVar6;
  long *plVar7;
  void *pvVar8;
  char *pcVar9;
  char *pcVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  void *pvVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x22;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  
  puVar12 = *(undefined8 **)(unaff_x22 + 0x9c8);
  lVar15 = *(long *)(unaff_x22 + 0x938);
  pNVar2 = AsyncBytes::_get_task(param_1);
  lVar17 = _TtC3MCP19HTTPClientTransport::activeGETSessionTask;
  *(long *)(unaff_x22 + 0x9d8) = _TtC3MCP19HTTPClientTransport::activeGETSessionTask;
  *(NSURLSessionDataTask **)(lVar15 + lVar17) = pNVar2;
  _swift_dynamicCastObjCClass(puVar12,&_OBJC_CLASS___NSHTTPURLResponse);
  if (puVar12 == (undefined8 *)0x0) {
    pcVar11 = *(code **)(unaff_x22 + 0x9b8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x988);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x970);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x950);
    lVar17 = *(long *)(unaff_x22 + 0x948);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x940);
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar12,0,0);
    *puVar12 = 0xd000000000000015;
    puVar12[1] = 0x8000000100dab920;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 4;
    _swift_willThrow();
    (**(code **)(lVar17 + 8))(uVar19,uVar20);
    (*pcVar11)(uVar16,uVar18);
  }
  else {
    IVar3 = objc_stub::statusCode((ID)puVar12);
    if (IVar3 == 200) {
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar3 = objc_stub::valueForHTTPHeaderField_((ID)puVar12,pNVar4);
      if (IVar3 != 0) {
        pSVar1 = (String *)(*(long *)(unaff_x22 + 0x938) + *(long *)(unaff_x22 + 0x9b0));
        SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pvVar8 = SVar21.bridgeObject;
        pvVar14 = pSVar1->bridgeObject;
        *pSVar1 = SVar21;
        _swift_bridgeObjectRetain(pvVar8);
        _swift_bridgeObjectRelease(pvVar14);
        if (pvVar14 == (void *)0x0) {
          FUN_1004ea1e4();
        }
        FUN_100076688(*(long *)(unaff_x22 + 0x9a8) + 0x20,unaff_x22 + 0x798);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x7b0);
        lVar17 = *(long *)(unaff_x22 + 0x7b8);
        FUN_100004640(unaff_x22 + 0x798,uVar16);
        (**(code **)(lVar17 + 0x70))(uVar16,lVar17);
        FUN_100004594(unaff_x22 + 0x798);
        if (((uint)uVar16 & 0xff) < 2) {
          FUN_100076688(*(long *)(unaff_x22 + 0x9a8) + 0x20,unaff_x22 + 0x7e8);
          uVar16 = *(undefined8 *)(unaff_x22 + 0x800);
          lVar17 = *(long *)(unaff_x22 + 0x808);
          FUN_100004640();
          puVar13 = &DAT_100fcd4a8;
          FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
          pcVar9 = (char *)0x60;
          pcVar10 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar13 + 0x20) = 0x496e6f6973736573;
          *(undefined8 *)(puVar13 + 0x18) = 2;
          *(undefined8 *)(puVar13 + 0x10) = 1;
          *(undefined8 *)(puVar13 + 0x28) = 0xe900000000000044;
          SVar22.bridgeObject = pcVar10;
          SVar22.str = pcVar9;
          Swift::String::reserveCapacity(2,SVar22);
          SVar24.bridgeObject = param_4;
          SVar24.str = pcVar10;
          Swift::String::write(SVar21,SVar24);
          *(undefined8 *)(puVar13 + 0x30) = 0;
          *(undefined8 *)(puVar13 + 0x38) = 0xe000000000000000;
          puVar13[0x58] = 0;
          puVar6 = puVar13;
          FUN_1004a6a1c();
          _swift_setDeallocating(puVar13);
          FUN_1000fb4c4(puVar13 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
          _swift_deallocClassInstance(puVar13,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x1f0) = 1;
          *(undefined8 *)(unaff_x22 + 0x1f8) = 0xd000000000000013;
          *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dab940;
          *(undefined8 *)(unaff_x22 + 0x208) = 0;
          *(undefined **)(unaff_x22 + 0x210) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x220) = 0;
          *(undefined8 *)(unaff_x22 + 0x218) = 0;
          *(undefined8 *)(unaff_x22 + 0x228) = 0xd00000000000001d;
          *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dab630;
          *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000016;
          *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100dab810;
          *(undefined8 *)(unaff_x22 + 0x248) = 0x27d;
          *(undefined1 *)(unaff_x22 + 0x430) = 1;
          *(undefined8 *)(unaff_x22 + 0x438) = 0xd000000000000013;
          *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100dab940;
          *(undefined8 *)(unaff_x22 + 0x448) = 0;
          *(undefined **)(unaff_x22 + 0x450) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x460) = 0;
          *(undefined8 *)(unaff_x22 + 0x458) = 0;
          *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001d;
          *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dab630;
          *(undefined8 *)(unaff_x22 + 0x478) = 0xd000000000000016;
          *(undefined8 *)(unaff_x22 + 0x480) = 0x8000000100dab810;
          *(undefined8 *)(unaff_x22 + 0x488) = 0x27d;
          FUN_1004eaa00(unaff_x22 + 0x1f0,unaff_x22 + 0x370);
          FUN_1004eaa3c(unaff_x22 + 0x430);
          (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x1f0,uVar16,lVar17);
          _swift_bridgeObjectRelease(pvVar8);
          FUN_1004eaa3c(unaff_x22 + 0x1f0);
          FUN_100004594(unaff_x22 + 0x7e8);
        }
        else {
          _swift_bridgeObjectRelease(pvVar8);
        }
      }
      plVar7 = (long *)0xa50;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x9e0) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_1004f70f8;
      FUN_1004f7344(*(undefined8 *)(unaff_x22 + 0x950));
      return;
    }
    IVar3 = objc_stub::statusCode((ID)puVar12);
    if (IVar3 == 0x195) {
      puVar13 = *(undefined **)
                 (*(long *)(unaff_x22 + 0x938) + _TtC3MCP19HTTPClientTransport::streamingTask);
      if (puVar13 != (undefined *)0x0) {
        TVar5.unknown = puVar13;
        _swift_retain();
        param_3 = PTR___type_metadata_for_Swift_Never_100eadc38;
        param_4 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
        Swift::Task::cancel(TVar5);
        _swift_release(puVar13);
      }
    }
    pcVar11 = *(code **)(unaff_x22 + 0x9b8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x988);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x970);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x950);
    lVar17 = *(long *)(unaff_x22 + 0x948);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x940);
    IVar3 = objc_stub::statusCode((ID)puVar12);
    *(ID *)(unaff_x22 + 0x928) = IVar3;
    SVar21 = Swift::CustomStringConvertible::get_description();
    puVar12 = SVar21.bridgeObject;
    SVar23.bridgeObject = param_4;
    SVar23.str = param_3;
    Swift::String::append(SVar21,SVar23);
    _swift_bridgeObjectRelease();
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar12,0,0);
    *puVar12 = 0x7272652050545448;
    puVar12[1] = 0xec000000203a726f;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 4;
    _swift_willThrow();
    (**(code **)(lVar17 + 8))(uVar19,uVar20);
    (*pcVar11)(uVar16,uVar18);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0x980);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x968);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x950);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x988));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x0001004f6ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f70f8 | FUN_1004f70f8 */

void FUN_1004f70f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x9e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x9e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004f7154;
  }
  else {
    pcVar1 = FUN_1004f7284;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x938),0);
  return;
}



/* Address: 0x1004f7154 | FUN_1004f7154 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004f7154(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x9d8);
  pcVar5 = *(code **)(unaff_x22 + 0x9b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x988);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x970);
  lVar6 = *(long *)(unaff_x22 + 0x938);
  (**(code **)(*(long *)(unaff_x22 + 0x948) + 8))
            (*(undefined8 *)(unaff_x22 + 0x950),*(undefined8 *)(unaff_x22 + 0x940));
  (*pcVar5)(uVar2,uVar1);
  *(undefined8 *)(lVar6 + lVar4) = 0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x980);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x968);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x950);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x988));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001004f7210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f7214 | FUN_1004f7214 */

void FUN_1004f7214(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  (**(code **)(unaff_x22 + 0x9b8))
            (*(undefined8 *)(unaff_x22 + 0x988),*(undefined8 *)(unaff_x22 + 0x970));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x980);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x968);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x950);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x988));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001004f7280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f7284 | FUN_1004f7284 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004f7284(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x9d8);
  pcVar5 = *(code **)(unaff_x22 + 0x9b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x988);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x970);
  lVar6 = *(long *)(unaff_x22 + 0x938);
  (**(code **)(*(long *)(unaff_x22 + 0x948) + 8))
            (*(undefined8 *)(unaff_x22 + 0x950),*(undefined8 *)(unaff_x22 + 0x940));
  (*pcVar5)(uVar2,uVar1);
  *(undefined8 *)(lVar6 + lVar4) = 0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x980);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x968);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x950);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x988));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001004f7340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004f7344 | FUN_1004f7344 */

void FUN_1004f7344(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  Encoding EVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x9b8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x9b0) = param_1;
  puVar1 = &DAT_100fcd490;
  FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
  *(undefined **)(unaff_x22 + 0x9c0) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x9c8) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x9d0) = uVar2;
  EVar3 = Encoding::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x9d8) = EVar3.unknown;
  lVar4 = *(long *)(EVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x9e0) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x9e8) = uVar2;
  puVar1 = &DAT_100fcd498;
  FUN_1000f7830(&DAT_100fcd498,&DAT_100c538b8);
  *(undefined **)(unaff_x22 + 0x9f0) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x9f8) = uVar2;
  _swift_task_switch(FUN_1004f740c);
  return;
}


