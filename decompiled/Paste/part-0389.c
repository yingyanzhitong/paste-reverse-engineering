/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004cd890 | FUN_1004cd890 */

undefined1  [16] FUN_1004cd890(void)

{
  return ZEXT816(0x100eda238);
}



/* Address: 0x1004cd8a0 | FUN_1004cd8a0 */

long * FUN_1004cd8a0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  URL UVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    UVar3 = Foundation::URL::typeMetadataAccessor();
    lVar9 = *(long *)(UVar3.unknown + -8);
    pcVar10 = *(code **)(lVar9 + 0x30);
    plVar4 = param_2;
    (*pcVar10)(param_2,1,UVar3.unknown);
    if ((int)plVar4 == 0) {
      (**(code **)(lVar9 + 0x10))(param_1,param_2,UVar3.unknown);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,UVar3.unknown);
    }
    else {
      puVar5 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    lVar11 = (long)*(int *)(param_3 + 0x14);
    lVar6 = (long)param_2 + lVar11;
    (*pcVar10)(lVar6,1,UVar3.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,UVar3.unknown);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,UVar3.unknown);
    }
    else {
      puVar5 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    lVar11 = (long)*(int *)(param_3 + 0x18);
    lVar6 = (long)param_2 + lVar11;
    (*pcVar10)(lVar6,1,UVar3.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,UVar3.unknown);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,UVar3.unknown);
    }
    else {
      puVar5 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    lVar11 = (long)*(int *)(param_3 + 0x1c);
    lVar6 = (long)param_2 + lVar11;
    (*pcVar10)(lVar6,1,UVar3.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,UVar3.unknown);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,UVar3.unknown);
    }
    else {
      puVar5 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    iVar1 = *(int *)(param_3 + 0x24);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar8 = *(undefined8 *)((long)param_2 + (long)iVar1);
    *(undefined8 *)((long)param_1 + (long)iVar1) = uVar8;
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar8);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar7 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar9 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1004cdb08 | FUN_1004cdb08 */

void FUN_1004cdb08(long param_1,long param_2)

{
  int iVar1;
  URL UVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar2.unknown + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1;
  (*pcVar5)(param_1,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1,UVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x14);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,UVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,UVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,UVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24)));
  return;
}



/* Address: 0x1004cdbfc | FUN_1004cdbfc */

void * FUN_1004cdbfc(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  pvVar3 = param_2;
  (*pcVar8)(param_2,1,UVar2.unknown);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1,param_2,UVar2.unknown);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x14);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,UVar2.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar2.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x18);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,UVar2.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar2.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,UVar2.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar2.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x24);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar6 = *(undefined8 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)iVar1) = uVar6;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}



/* Address: 0x1004cde38 | FUN_1004cde38 */

void * FUN_1004cde38(void *param_1,void *param_2,long param_3)

{
  URL UVar1;
  void *pvVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar2 = param_1;
  (*pcVar9)(param_1,1,UVar1.unknown);
  pvVar3 = param_2;
  (*pcVar9)(param_2,1,UVar1.unknown);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 != 0) {
      (**(code **)(lVar8 + 8))(param_1,UVar1.unknown);
      goto LAB_1004cdee0;
    }
    (**(code **)(lVar8 + 0x18))(param_1,param_2,UVar1.unknown);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,UVar1.unknown);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,UVar1.unknown);
  }
  else {
LAB_1004cdee0:
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x14);
  lVar5 = (long)param_1 + lVar10;
  (*pcVar9)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar9)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar8 + 8))((long)param_1 + lVar10,UVar1.unknown);
      goto LAB_1004cdf7c;
    }
    (**(code **)(lVar8 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,UVar1.unknown);
  }
  else {
LAB_1004cdf7c:
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x18);
  lVar5 = (long)param_1 + lVar10;
  (*pcVar9)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar9)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar8 + 8))((long)param_1 + lVar10,UVar1.unknown);
      goto LAB_1004ce018;
    }
    (**(code **)(lVar8 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,UVar1.unknown);
  }
  else {
LAB_1004ce018:
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = (long)param_1 + lVar10;
  (*pcVar9)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar9)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
      goto LAB_1004ce0dc;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar10,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,UVar1.unknown);
    goto LAB_1004ce0dc;
  }
  puVar4 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
LAB_1004ce0dc:
  lVar8 = (long)*(int *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)((long)param_1 + lVar8);
  *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  lVar8 = (long)*(int *)(param_3 + 0x24);
  uVar7 = *(undefined8 *)((long)param_1 + lVar8);
  *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  return param_1;
}



/* Address: 0x1004ce19c | FUN_1004ce19c */

void * FUN_1004ce19c(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  pvVar3 = param_2;
  (*pcVar7)(param_2,1,UVar2.unknown);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1,param_2,UVar2.unknown);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(param_3 + 0x14);
  lVar5 = (long)param_2 + lVar8;
  (*pcVar7)(lVar5,1,UVar2.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,UVar2.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(param_3 + 0x18);
  lVar5 = (long)param_2 + lVar8;
  (*pcVar7)(lVar5,1,UVar2.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,UVar2.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = (long)param_2 + lVar8;
  (*pcVar7)(lVar5,1,UVar2.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,UVar2.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x24);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  return param_1;
}



/* Address: 0x1004ce3cc | FUN_1004ce3cc */

void * FUN_1004ce3cc(void *param_1,void *param_2,long param_3)

{
  URL UVar1;
  void *pvVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar2 = param_1;
  (*pcVar9)(param_1,1,UVar1.unknown);
  pvVar3 = param_2;
  (*pcVar9)(param_2,1,UVar1.unknown);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 != 0) {
      (**(code **)(lVar8 + 8))(param_1,UVar1.unknown);
      goto LAB_1004ce474;
    }
    (**(code **)(lVar8 + 0x28))(param_1,param_2,UVar1.unknown);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,UVar1.unknown);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,UVar1.unknown);
  }
  else {
LAB_1004ce474:
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x14);
  lVar5 = (long)param_1 + lVar10;
  (*pcVar9)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar9)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar8 + 8))((long)param_1 + lVar10,UVar1.unknown);
      goto LAB_1004ce510;
    }
    (**(code **)(lVar8 + 0x28))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,UVar1.unknown);
  }
  else {
LAB_1004ce510:
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x18);
  lVar5 = (long)param_1 + lVar10;
  (*pcVar9)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar9)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar8 + 8))((long)param_1 + lVar10,UVar1.unknown);
      goto LAB_1004ce5ac;
    }
    (**(code **)(lVar8 + 0x28))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,UVar1.unknown);
  }
  else {
LAB_1004ce5ac:
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = (long)param_1 + lVar10;
  (*pcVar9)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar9)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
      goto LAB_1004ce670;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar10,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar1.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,UVar1.unknown);
    goto LAB_1004ce670;
  }
  puVar4 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
LAB_1004ce670:
  lVar8 = (long)*(int *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)((long)param_1 + lVar8);
  *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _swift_bridgeObjectRelease(uVar7);
  lVar8 = (long)*(int *)(param_3 + 0x24);
  uVar7 = *(undefined8 *)((long)param_1 + lVar8);
  *(undefined8 *)((long)param_1 + lVar8) = *(undefined8 *)((long)param_2 + lVar8);
  _swift_bridgeObjectRelease(uVar7);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  return param_1;
}



/* Address: 0x1004ce720 | FUN_1004ce720 */

void FUN_1004ce720(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004ce72c | FUN_1004ce72c */

ulong FUN_1004ce72c(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  if ((int)param_2 == *(int *)(*(long *)(puVar2 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001004ce788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1,param_2,puVar2);
    return param_1;
  }
  uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x20));
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Address: 0x1004ce7c0 | FUN_1004ce7c0 */

void FUN_1004ce7c0(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004ce7cc | FUN_1004ce7cc */

void FUN_1004ce7cc(long param_1,ulong param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  if (param_3 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001004ce830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,param_2,puVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x20)) = param_2 & 0xffffffff;
  return;
}



/* Address: 0x1004ce850 | FUN_1004ce850 */

void FUN_1004ce850(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fcbd60,&TargetStructDescriptor_100cb2238);
  return;
}



/* Address: 0x1004ce864 | FUN_1004ce864 */

void FUN_1004ce864(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puVar2 = &DAT_100fcb5d0;
  lVar1 = 0x13f;
  FUN_1001a1320(0x13f,&DAT_100fcb5d0,PTR_typeMetadataAccessor_100ea71a8);
  if (puVar2 < (undefined8 *)0x40) {
    local_58 = *(long *)(lVar1 + -8) + 0x40;
    local_38 = &DAT_100c50cd8;
    puStack_30 = &DAT_100c50cd8;
    local_28 = &DAT_100c50db8;
    lStack_50 = local_58;
    local_48 = local_58;
    lStack_40 = local_58;
    _swift_initStructMetadata(param_1,0x100,7,&local_58,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1004ce8f8 | thunk_FUN_1004ce8fc */

void thunk_FUN_1004ce8fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50f00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50f00,&DAT_100eda1c0);
  DAT_100fcbdb0 = pTVar1;
  return;
}



/* Address: 0x1004ce8fc | FUN_1004ce8fc */

void FUN_1004ce8fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50f00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50f00,&DAT_100eda1c0);
  DAT_100fcbdb0 = pTVar1;
  return;
}



/* Address: 0x1004ce93c | thunk_FUN_1004ce940 */

void thunk_FUN_1004ce940(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50ff0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50ff0,&DAT_100eda130);
  DAT_100fcbdb8 = pTVar1;
  return;
}



/* Address: 0x1004ce940 | FUN_1004ce940 */

void FUN_1004ce940(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50ff0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50ff0,&DAT_100eda130);
  DAT_100fcbdb8 = pTVar1;
  return;
}



/* Address: 0x1004ce980 | thunk_FUN_1004ce984 */

void thunk_FUN_1004ce984(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50f50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50f50,&DAT_100eda130);
  DAT_100fcbdc0 = pTVar1;
  return;
}



/* Address: 0x1004ce984 | FUN_1004ce984 */

void FUN_1004ce984(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50f50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50f50,&DAT_100eda130);
  DAT_100fcbdc0 = pTVar1;
  return;
}



/* Address: 0x1004ce9c4 | thunk_FUN_1004ce9c8 */

void thunk_FUN_1004ce9c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50f28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50f28,&DAT_100eda130);
  DAT_100fcbdc8 = pTVar1;
  return;
}



/* Address: 0x1004ce9c8 | FUN_1004ce9c8 */

void FUN_1004ce9c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50f28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50f28,&DAT_100eda130);
  DAT_100fcbdc8 = pTVar1;
  return;
}



/* Address: 0x1004cea08 | thunk_FUN_1004cea0c */

void thunk_FUN_1004cea0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50e98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50e98,&DAT_100eda1c0);
  DAT_100fcbdd0 = pTVar1;
  return;
}



/* Address: 0x1004cea0c | FUN_1004cea0c */

void FUN_1004cea0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50e98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50e98,&DAT_100eda1c0);
  DAT_100fcbdd0 = pTVar1;
  return;
}



/* Address: 0x1004cea4c | thunk_FUN_1004cea50 */

void thunk_FUN_1004cea50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50e70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50e70,&DAT_100eda1c0);
  DAT_100fcbdd8 = pTVar1;
  return;
}



/* Address: 0x1004cea50 | FUN_1004cea50 */

void FUN_1004cea50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbdd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50e70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50e70,&DAT_100eda1c0);
  DAT_100fcbdd8 = pTVar1;
  return;
}



/* Address: 0x1004cea90 | FUN_1004cea90 */

void FUN_1004cea90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbe58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51578;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51578,&DAT_100eda508);
  DAT_100fcbe58 = pTVar1;
  return;
}



/* Address: 0x1004cead0 | FUN_1004cead0 */

void FUN_1004cead0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 local_48;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fcbbb0;
    FUN_1000f8b08(&DAT_100fcbbb0,&USHORT_100c50b80);
    FUN_100003a00(param_2,PTR_typeMetadataAccessor_100ea71a8,param_3);
    local_48 = param_2;
    _swift_getWitnessTable(param_4,puVar1,&local_48);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x1004ceb5c | FUN_1004ceb5c */

void FUN_1004ceb5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbe78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51528;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51528,&DAT_100eda478);
  DAT_100fcbe78 = pTVar1;
  return;
}



/* Address: 0x1004ceb9c | FUN_1004ceb9c */

undefined8 FUN_1004ceb9c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004cd6d0(param_2,param_1,&DAT_100eda238);
  return param_2;
}



/* Address: 0x1004cebd0 | FUN_1004cebd0 */

void FUN_1004cebd0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbe88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c514d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c514d8,&DAT_100eda3e8);
  DAT_100fcbe88 = pTVar1;
  return;
}



/* Address: 0x1004cec10 | FUN_1004cec10 */

undefined8 * FUN_1004cec10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1004cec74 | FUN_1004cec74 */

undefined8 * FUN_1004cec74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar1;
  return param_1;
}



/* Address: 0x1004ced10 | FUN_1004ced10 */

void FUN_1004ced10(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004ced2c | FUN_1004ced2c */

undefined8 * FUN_1004ced2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Address: 0x1004ced90 | FUN_1004ced90 */

undefined1  [16] FUN_1004ced90(void)

{
  return ZEXT816(0x100eda2c8);
}



/* Address: 0x1004ceda0 | FUN_1004ceda0 */

undefined1  [16] FUN_1004ceda0(void)

{
  return ZEXT816(0x100eda350);
}



/* Address: 0x1004cedb0 | FUN_1004cedb0 */

undefined1  [16] FUN_1004cedb0(void)

{
  return ZEXT816(0x100eda3e8);
}



/* Address: 0x1004cedc0 | FUN_1004cedc0 */

undefined1  [16] FUN_1004cedc0(void)

{
  return ZEXT816(0x100eda478);
}



/* Address: 0x1004cedd0 | FUN_1004cedd0 */

undefined1  [16] FUN_1004cedd0(void)

{
  return ZEXT816(0x100eda508);
}



/* Address: 0x1004cede0 | thunk_FUN_1004cede4 */

void thunk_FUN_1004cede4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbea8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51280;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51280,&DAT_100eda508);
  DAT_100fcbea8 = pTVar1;
  return;
}



/* Address: 0x1004cede4 | FUN_1004cede4 */

void FUN_1004cede4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbea8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51280;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51280,&DAT_100eda508);
  DAT_100fcbea8 = pTVar1;
  return;
}



/* Address: 0x1004cee24 | thunk_FUN_1004cee28 */

void thunk_FUN_1004cee28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbeb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51370;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51370,&DAT_100eda478);
  DAT_100fcbeb0 = pTVar1;
  return;
}



/* Address: 0x1004cee28 | FUN_1004cee28 */

void FUN_1004cee28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbeb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51370;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51370,&DAT_100eda478);
  DAT_100fcbeb0 = pTVar1;
  return;
}



/* Address: 0x1004cee68 | thunk_FUN_1004cee6c */

void thunk_FUN_1004cee6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbeb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51460;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51460,&DAT_100eda3e8);
  DAT_100fcbeb8 = pTVar1;
  return;
}



/* Address: 0x1004cee6c | FUN_1004cee6c */

void FUN_1004cee6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbeb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51460;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51460,&DAT_100eda3e8);
  DAT_100fcbeb8 = pTVar1;
  return;
}



/* Address: 0x1004ceeac | thunk_FUN_1004ceeb0 */

void thunk_FUN_1004ceeb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbec0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c513c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c513c0,&DAT_100eda3e8);
  DAT_100fcbec0 = pTVar1;
  return;
}



/* Address: 0x1004ceeb0 | FUN_1004ceeb0 */

void FUN_1004ceeb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbec0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c513c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c513c0,&DAT_100eda3e8);
  DAT_100fcbec0 = pTVar1;
  return;
}



/* Address: 0x1004ceef0 | thunk_FUN_1004ceef4 */

void thunk_FUN_1004ceef4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbec8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51398;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51398,&DAT_100eda3e8);
  DAT_100fcbec8 = pTVar1;
  return;
}



/* Address: 0x1004ceef4 | FUN_1004ceef4 */

void FUN_1004ceef4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbec8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51398;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51398,&DAT_100eda3e8);
  DAT_100fcbec8 = pTVar1;
  return;
}



/* Address: 0x1004cef34 | thunk_FUN_1004cef38 */

void thunk_FUN_1004cef38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbed0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c512d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c512d0,&DAT_100eda478);
  DAT_100fcbed0 = pTVar1;
  return;
}



/* Address: 0x1004cef38 | FUN_1004cef38 */

void FUN_1004cef38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbed0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c512d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c512d0,&DAT_100eda478);
  DAT_100fcbed0 = pTVar1;
  return;
}



/* Address: 0x1004cef78 | thunk_FUN_1004cef7c */

void thunk_FUN_1004cef7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbed8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c512a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c512a8,&DAT_100eda478);
  DAT_100fcbed8 = pTVar1;
  return;
}



/* Address: 0x1004cef7c | FUN_1004cef7c */

void FUN_1004cef7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbed8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c512a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c512a8,&DAT_100eda478);
  DAT_100fcbed8 = pTVar1;
  return;
}



/* Address: 0x1004cefbc | thunk_FUN_1004cefc0 */

void thunk_FUN_1004cefc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbee0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c511e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c511e0,&DAT_100eda508);
  DAT_100fcbee0 = pTVar1;
  return;
}



/* Address: 0x1004cefc0 | FUN_1004cefc0 */

void FUN_1004cefc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbee0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c511e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c511e0,&DAT_100eda508);
  DAT_100fcbee0 = pTVar1;
  return;
}



/* Address: 0x1004cf000 | thunk_FUN_1004cf004 */

void thunk_FUN_1004cf004(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbee8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c511b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c511b8,&DAT_100eda508);
  DAT_100fcbee8 = pTVar1;
  return;
}



/* Address: 0x1004cf004 | FUN_1004cf004 */

void FUN_1004cf004(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbee8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c511b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c511b8,&DAT_100eda508);
  DAT_100fcbee8 = pTVar1;
  return;
}



/* Address: 0x1004cf044 | FUN_1004cf044 */

void FUN_1004cf044(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc0d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c517d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c517d0,&DAT_100eda628);
  DAT_100fcc0d8 = pTVar1;
  return;
}



/* Address: 0x1004cf084 | FUN_1004cf084 */

void FUN_1004cf084(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc0e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51780;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51780,&DAT_100eda598);
  DAT_100fcc0e8 = pTVar1;
  return;
}



/* Address: 0x1004cf0c4 | FUN_1004cf0c4 */

undefined8 FUN_1004cf0c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1004cec10(param_2,param_1,&DAT_100eda2c8);
  return param_2;
}



/* Address: 0x1004cf0f8 | FUN_1004cf0f8 */

undefined8 FUN_1004cf0f8(undefined8 param_1)

{
  FUN_10000c210(param_1,&DAT_100eda2c8);
  return param_1;
}



/* Address: 0x1004cf124 | FUN_1004cf124 */

undefined1  [16] FUN_1004cf124(void)

{
  return ZEXT816(0x100eda598);
}



/* Address: 0x1004cf134 | FUN_1004cf134 */

undefined1  [16] FUN_1004cf134(void)

{
  return ZEXT816(0x100eda628);
}



/* Address: 0x1004cf144 | thunk_FUN_1004cf148 */

void thunk_FUN_1004cf148(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc0f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51668;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51668,&DAT_100eda628);
  DAT_100fcc0f0 = pTVar1;
  return;
}


