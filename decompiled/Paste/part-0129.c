/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10018f558 | FUN_10018f558 */

int FUN_10018f558(ulong param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar5;
  ulong uVar4;
  
  uVar3 = (uint)param_1;
  if (param_1 >> 0x20 == 0) {
    if (uVar3 < 0x80) {
      uVar2 = 0;
    }
    else {
      *param_2 = (byte)param_1 | 0x80;
      param_1 = (ulong)(uVar3 >> 7);
      if (uVar3 < 0x4000) {
        uVar2 = 1;
      }
      else {
        param_2[1] = (byte)(uVar3 >> 7) | 0x80;
        param_1 = (ulong)(uVar3 >> 0xe);
        if (uVar3 < 0x200000) {
          uVar2 = 2;
        }
        else {
          param_2[2] = (byte)(uVar3 >> 0xe) | 0x80;
          param_1 = (ulong)(uVar3 >> 0x15);
          if (uVar3 >> 0x1c == 0) {
            uVar2 = 3;
          }
          else {
            param_2[3] = (byte)(uVar3 >> 0x15) | 0x80;
            uVar2 = 4;
            param_1 = (ulong)(uVar3 >> 0x1c);
          }
        }
      }
    }
    bVar1 = (byte)param_1;
    iVar5 = (int)uVar2 + 1;
  }
  else {
    *param_2 = (byte)param_1 | 0x80;
    param_2[1] = (byte)(uVar3 >> 7) | 0x80;
    param_2[2] = (byte)(uVar3 >> 0xe) | 0x80;
    param_2[3] = (byte)(uVar3 >> 0x15) | 0x80;
    bVar1 = (byte)(((param_1 >> 0x20) << 0x20 | param_1 & 0xffffffff) >> 0x1c);
    if (param_1 >> 0x23 == 0) {
      iVar5 = 5;
      uVar2 = 4;
    }
    else {
      param_2[4] = bVar1 | 0x80;
      uVar4 = param_1 >> 0x23;
      bVar1 = (byte)(uint)(param_1 >> 0x23);
      if (param_1 >> 0x2a == 0) {
        uVar2 = 5;
      }
      else {
        uVar2 = 5;
        do {
          uVar3 = (uint)uVar4;
          param_2[uVar2] = (byte)uVar4 | 0x80;
          uVar2 = uVar2 + 1;
          uVar4 = uVar4 >> 7;
          bVar1 = (byte)uVar4;
        } while (uVar3 >> 0xe != 0);
      }
      iVar5 = (int)uVar2 + 1;
    }
  }
  param_2[uVar2 & 0xffffffff] = bVar1;
  return iVar5;
}



/* Address: 0x10018f66c | FUN_10018f66c */

void FUN_10018f66c(long param_1,ulong *param_2,undefined8 *param_3,int param_4)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  lVar6 = *(long *)(param_1 + 8);
  if (0x10 < *(uint *)(lVar6 + 0x10)) {
    return;
  }
  uVar9 = *(ulong *)(param_1 + 0x10);
  puVar7 = *(ulong **)(param_1 + 0x18);
  cVar2 = *(char *)(param_1 + 4);
  uVar8 = (uint)uVar9;
  switch(*(uint *)(lVar6 + 0x10)) {
  default:
    if (cVar2 != '\0') {
      return;
    }
    uVar10 = (byte)*puVar7 & 0x7f;
    if (((1 < uVar8) && (uVar10 = uVar10 | (*(byte *)((long)puVar7 + 1) & 0x7f) << 7, uVar8 != 2))
       && ((uVar10 = uVar10 | (*(byte *)((long)puVar7 + 2) & 0x7f) << 0xe, 3 < uVar8 &&
           (uVar10 = uVar10 | (*(byte *)((long)puVar7 + 3) & 0x7f) << 0x15, uVar8 != 4)))) {
      uVar10 = uVar10 | (uint)*(byte *)((long)puVar7 + 4) << 0x1c;
    }
    goto LAB_10018f914;
  case 1:
    if (cVar2 != '\0') {
      return;
    }
    uVar10 = (byte)*puVar7 & 0x7f;
    if ((((1 < uVar8) && (uVar10 = uVar10 | (*(byte *)((long)puVar7 + 1) & 0x7f) << 7, uVar8 != 2))
        && (uVar10 = uVar10 | (*(byte *)((long)puVar7 + 2) & 0x7f) << 0xe, 3 < uVar8)) &&
       (uVar10 = uVar10 | (*(byte *)((long)puVar7 + 3) & 0x7f) << 0x15, uVar8 != 4)) {
      uVar10 = uVar10 | (uint)*(byte *)((long)puVar7 + 4) << 0x1c;
    }
    uVar10 = -(uVar10 & 1) ^ uVar10 >> 1;
    goto LAB_10018f914;
  case 2:
  case 7:
  case 10:
    if (cVar2 != '\x05') {
      return;
    }
    uVar10 = (uint)*puVar7;
    goto LAB_10018f914;
  case 3:
  case 8:
    if (cVar2 == '\0') {
      FUN_10018f950(uVar9,puVar7);
      *param_2 = uVar9;
    }
    break;
  case 4:
    if (cVar2 != '\0') {
      return;
    }
    FUN_10018f950(uVar9,puVar7);
    uVar9 = -(uVar9 & 1) ^ uVar9 >> 1;
    goto LAB_10018f874;
  case 5:
  case 9:
  case 0xb:
    if (cVar2 != '\x01') {
      return;
    }
    uVar9 = *puVar7;
LAB_10018f874:
    *param_2 = uVar9;
    break;
  case 0xc:
    if (uVar8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar9 = uVar9 & 0xffffffff;
      do {
        if ((*puVar7 & 0x7f) != 0) {
          uVar10 = 1;
          break;
        }
        uVar9 = uVar9 - 1;
        uVar10 = 0;
        puVar7 = (ulong *)((long)puVar7 + 1);
      } while (uVar9 != 0);
    }
LAB_10018f914:
    *(uint *)param_2 = uVar10;
    break;
  case 0xe:
    if (cVar2 == '\x02') {
      bVar3 = *(byte *)(param_1 + 5);
      if (((param_4 != 0) && (*param_2 != 0)) && (*param_2 != *(ulong *)(lVar6 + 0x28))) {
        (*(code *)param_3[1])(param_3[2]);
      }
      uVar8 = uVar8 - bVar3;
      pvVar5 = (void *)param_3[2];
      (*(code *)*param_3)(pvVar5,uVar8 + 1);
      *param_2 = (ulong)pvVar5;
      if (pvVar5 != (void *)0x0) {
        _memcpy(pvVar5,(void *)((long)puVar7 + (ulong)(uint)bVar3),(ulong)uVar8);
        *(undefined1 *)(*param_2 + (ulong)uVar8) = 0;
      }
    }
    break;
  case 0xf:
    if (cVar2 == '\x02') {
      bVar3 = *(byte *)(param_1 + 5);
      if (((param_4 != 0) && (param_2[1] != 0)) &&
         ((*(long *)(lVar6 + 0x28) == 0 || (param_2[1] != *(ulong *)(*(long *)(lVar6 + 0x28) + 8))))
         ) {
        (*(code *)param_3[1])(param_3[2]);
      }
      uVar10 = (uint)bVar3;
      uVar9 = (ulong)(uVar8 - uVar10);
      if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
        param_2[1] = 0;
      }
      else {
        pvVar5 = (void *)param_3[2];
        (*(code *)*param_3)(pvVar5,uVar9);
        param_2[1] = (ulong)pvVar5;
        if (pvVar5 == (void *)0x0) {
          return;
        }
        _memcpy(pvVar5,(void *)((long)puVar7 + (ulong)uVar10),uVar9);
      }
      *param_2 = uVar9;
    }
    break;
  case 0x10:
    if (cVar2 == '\x02') {
      uVar9 = *(ulong *)(lVar6 + 0x20);
      uVar1 = *(ulong *)(lVar6 + 0x28);
      FUN_10018daa0(uVar9,param_3,uVar8 - *(byte *)(param_1 + 5),
                    (long)puVar7 + (ulong)*(byte *)(param_1 + 5));
      if (((param_4 != 0) && (uVar4 = *param_2, uVar4 != 0)) && (uVar4 != uVar1)) {
        if (uVar9 != 0) {
          FUN_10018f9e4(uVar4,uVar9,param_3);
          uVar4 = *param_2;
        }
        FUN_10018eb34(uVar4,param_3);
      }
      *param_2 = uVar9;
    }
  }
  return;
}



/* Address: 0x10018f950 | FUN_10018f950 */

ulong FUN_10018f950(uint param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  
  uVar2 = (ulong)*param_2 & 0x7f;
  if (param_1 < 5) {
    if (1 < param_1) {
      uVar1 = (uint)uVar2 | (param_2[1] & 0x7f) << 7;
      uVar2 = (ulong)uVar1;
      if (param_1 != 2) {
        uVar1 = uVar1 | (param_2[2] & 0x7f) << 0xe;
        uVar2 = (ulong)uVar1;
        if (param_1 == 4) {
          uVar2 = (ulong)(uVar1 | (param_2[3] & 0x7f) << 0x15);
        }
      }
    }
    return uVar2;
  }
  uVar3 = uVar2 | ((ulong)param_2[1] & 0x7f) << 7 | ((ulong)param_2[2] & 0x7f) << 0xe |
          ((ulong)param_2[3] & 0x7f) << 0x15;
  uVar2 = 0x1c;
  pbVar4 = param_2 + 4;
  do {
    uVar3 = ((ulong)*pbVar4 & 0x7f) << (uVar2 & 0x3f) | uVar3;
    uVar2 = uVar2 + 7;
    pbVar4 = pbVar4 + 1;
  } while ((ulong)param_1 * 8 - (ulong)param_1 != uVar2);
  return uVar3;
}



/* Address: 0x10018f9e4 | FUN_10018f9e4 */

void FUN_10018f9e4(long param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  size_t sVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  
  lVar10 = *param_2;
  if (*(int *)(lVar10 + 0x30) != 0) {
    uVar14 = 0;
    lVar15 = *(long *)(lVar10 + 0x38);
    do {
      lVar18 = lVar15 + uVar14 * 0x48;
      iVar5 = *(int *)(lVar18 + 0xc);
      if (iVar5 == 1 || iVar5 == 3) {
        uVar16 = (ulong)*(uint *)(lVar18 + 0x14);
        if ((*(byte *)(lVar18 + 0x30) >> 2 & 1) != 0) {
          if (*(int *)((long)param_2 + uVar16) != 0) goto LAB_10018fccc;
          uVar8 = *(uint *)(lVar10 + 0x48);
          lVar18 = *(long *)(lVar10 + 0x50);
          iVar5 = *(int *)(param_1 + uVar16);
          if (uVar8 == 1) {
            uVar12 = 0;
          }
          else {
            if (uVar8 == 0) {
              return;
            }
            uVar12 = 0;
            do {
              uVar2 = uVar12 + (uVar8 >> 1);
              piVar1 = (int *)(lVar18 + (ulong)uVar2 * 8);
              iVar6 = *piVar1;
              if (iVar5 < iVar6) {
                uVar8 = uVar8 >> 1;
              }
              else {
                iVar7 = piVar1[1];
                if (iVar5 < (*(int *)(lVar18 + (ulong)(uVar2 + 1) * 8 + 4) + iVar6) - iVar7) {
                  uVar8 = (iVar5 - iVar6) + iVar7;
                  goto joined_r0x00010018fce8;
                }
                uVar8 = uVar12 + uVar8 + ~uVar2;
                uVar12 = uVar2 + 1;
              }
            } while (1 < uVar8);
            if (uVar8 == 0) {
              return;
            }
          }
          piVar1 = (int *)(lVar18 + (ulong)uVar12 * 8);
          iVar6 = *piVar1;
          if (iVar5 < iVar6) {
            return;
          }
          iVar7 = piVar1[1];
          if ((iVar6 - iVar7) + *(int *)(lVar18 + (ulong)(uVar12 + 1) * 8 + 4) <= iVar5) {
            return;
          }
          uVar8 = (iVar7 + iVar5) - iVar6;
joined_r0x00010018fce8:
          if ((int)uVar8 < 0) {
            return;
          }
          lVar18 = *(long *)(lVar10 + 0x38) + (ulong)uVar8 * 0x48;
        }
        plVar3 = (long *)(param_1 + (ulong)*(uint *)(lVar18 + 0x18));
        plVar4 = (long *)((long)param_2 + (ulong)*(uint *)(lVar18 + 0x18));
        lVar10 = *(long *)(lVar18 + 0x28);
        uVar8 = *(uint *)(lVar18 + 0x10);
        if (uVar8 == 0xe) {
          if (*plVar3 != lVar10 && *plVar4 == lVar10) {
LAB_10018fc68:
            sVar13 = 8;
LAB_10018fca0:
            _memcpy(plVar4,plVar3,sVar13);
            _bzero(plVar3,sVar13);
            if (*(int *)(lVar18 + 0x14) != 0) {
              *(undefined4 *)((long)param_2 + uVar16) = *(undefined4 *)(param_1 + uVar16);
              *(undefined4 *)(param_1 + uVar16) = 0;
            }
          }
        }
        else if (uVar8 == 0xf) {
          if (plVar3[1] != 0) {
            lVar11 = plVar4[1];
            if (lVar10 == 0) {
              if (lVar11 == 0) goto LAB_10018fc9c;
            }
            else if ((plVar3[1] != *(long *)(lVar10 + 8)) &&
                    (lVar11 == 0 || lVar11 == *(long *)(lVar10 + 8))) {
LAB_10018fc9c:
              sVar13 = 0x10;
              goto LAB_10018fca0;
            }
          }
        }
        else if (uVar8 == 0x10) {
          lVar10 = *plVar3;
          if (lVar10 != 0) {
            if (*plVar4 == 0) goto LAB_10018fc68;
            FUN_10018f9e4(lVar10,*plVar4,param_3);
            if ((int)lVar10 == 0) {
              return;
            }
          }
        }
        else if ((*(int *)(param_1 + uVar16) != 0) && (*(int *)((long)param_2 + uVar16) == 0)) {
          if (0xd < uVar8) {
LAB_10018fd18:
                    /* WARNING: Subroutine does not return */
            FUN_100190458();
          }
          sVar13 = *(size_t *)(&DAT_100c30f10 + (ulong)uVar8 * 8);
          goto LAB_10018fca0;
        }
      }
      else if (iVar5 == 2) {
        uVar16 = (ulong)*(uint *)(lVar18 + 0x14);
        lVar10 = *(long *)(param_1 + uVar16);
        if (lVar10 != 0) {
          uVar17 = (ulong)*(uint *)(lVar18 + 0x18);
          if (*(long *)((long)param_2 + uVar16) == 0) {
            *(long *)((long)param_2 + uVar16) = lVar10;
            *(undefined8 *)((long)param_2 + uVar17) = *(undefined8 *)(param_1 + uVar17);
          }
          else {
            if (0x10 < *(uint *)(lVar18 + 0x10)) {
              FUN_100190464();
              goto LAB_10018fd18;
            }
            lVar18 = *(long *)(&DAT_100c30e88 + (ulong)*(uint *)(lVar18 + 0x10) * 8);
            pvVar9 = (void *)param_3[2];
            (*(code *)*param_3)(pvVar9,lVar18 * (*(long *)((long)param_2 + uVar16) + lVar10));
            if (pvVar9 == (void *)0x0) {
              return;
            }
            _memcpy(pvVar9,*(void **)(param_1 + uVar17),*(long *)(param_1 + uVar16) * lVar18);
            _memcpy((void *)((long)pvVar9 + *(long *)(param_1 + uVar16) * lVar18),
                    *(void **)((long)param_2 + uVar17),*(long *)((long)param_2 + uVar16) * lVar18);
            if (*(long *)((long)param_2 + uVar17) != 0) {
              (*(code *)param_3[1])(param_3[2]);
            }
            if (*(long *)(param_1 + uVar17) != 0) {
              (*(code *)param_3[1])(param_3[2]);
            }
            *(void **)((long)param_2 + uVar17) = pvVar9;
            *(long *)((long)param_2 + uVar16) =
                 *(long *)((long)param_2 + uVar16) + *(long *)(param_1 + uVar16);
          }
          *(undefined8 *)(param_1 + uVar16) = 0;
          *(undefined8 *)(param_1 + uVar17) = 0;
        }
      }
LAB_10018fccc:
      uVar14 = uVar14 + 1;
      lVar10 = *param_2;
    } while (uVar14 < *(uint *)(lVar10 + 0x30));
  }
  return;
}



/* Address: 0x10018fd1c | FUN_10018fd1c */

void FUN_10018fd1c(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("sizeof_elt_in_repeated_array","protobuf-c.c",0x4fa,"0");
}



/* Address: 0x10018fd3c | FUN_10018fd3c */

void FUN_10018fd3c(void)

{
  return;
}



/* Address: 0x10018fd50 | FUN_10018fd50 */

void FUN_10018fd50(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHplcrash_log_writer_set_exception","PLCrashLogWriter.m",0x1ff,
                "writer->uncaught_exception.has_exception == false");
}



/* Address: 0x10018fd78 | FUN_10018fd78 */

void FUN_10018fd78(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHplcrash_log_writer_set_exception","PLCrashLogWriter.m",0x20f,"i < count");
}



/* Address: 0x10018fda0 | FUN_10018fda0 */

void FUN_10018fda0(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("plcrash_writer_write_exception","PLCrashLogWriter.m",0x45a,
                "writer->uncaught_exception.has_exception");
}



/* Address: 0x10018fdc8 | FUN_10018fdc8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10018fdc8(ID param_1,undefined8 param_2,undefined8 param_3)

{
  ID self;
  ID IVar1;
  undefined8 in_x7;
  
  self = NSAssertionHandler::currentHandler((ID)&_OBJC_CLASS___NSAssertionHandler);
  IVar1 = objc_stub::count(param_1);
  NSAssertionHandler::handleFailureInMethod_object_file_lineNumber_description_
            (self,param_2,param_3,&cf_PLCrashMachExceptionPortSet_m,0x44,
             &cf_Setsizeof_luexceedsEXC_TYPES_COUNT__lu_,in_x7,IVar1,0xe);
  return 0;
}



/* Address: 0x10018fe50 | FUN_10018fe50 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10018fe50(uint *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  ID self;
  undefined8 in_x7;
  
  self = NSAssertionHandler::currentHandler((ID)&_OBJC_CLASS___NSAssertionHandler);
  NSAssertionHandler::handleFailureInMethod_object_file_lineNumber_description_
            (self,param_2,param_3,&cf_PLCrashMachExceptionPortSet_m,100,
             &cf_Countof_luexceedsEXC_TYPES_COUNT__lu_,in_x7,(ulong)*param_1,0xe);
  *param_4 = *param_1;
  return 0;
}



/* Address: 0x10018fee4 | FUN_10018fee4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10018fee4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ID self;
  
  self = NSAssertionHandler::currentHandler((ID)&_OBJC_CLASS___NSAssertionHandler);
  NSAssertionHandler::handleFailureInMethod_object_file_lineNumber_description_
            (self,param_1,param_2,&cf_PLCrashMachExceptionServer_m,0x18e,&cf_Nohandlerregistered_);
  *param_4 = *param_3;
  return 0;
}



/* Address: 0x10018ff64 | FUN_10018ff64 */

void FUN_10018ff64(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("-[PHPLCrashReport(PrivateMethods) extractImageInfo:error:]","PLCrashReport.m",0x2de
                ,"image->uuid.len == 0 || uuid != nil");
}



/* Address: 0x10018ff8c | FUN_10018ff8c */

void FUN_10018ff8c(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHplcrash__crash_report__get_packed_size","PLCrashReport.pb-c.c",0x67,
                "message->base.descriptor == &plcrash__crash_report__descriptor");
}



/* Address: 0x10018ffb4 | FUN_10018ffb4 */

void FUN_10018ffb4(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHplcrash__crash_report__pack","PLCrashReport.pb-c.c",0x6e,
                "message->base.descriptor == &plcrash__crash_report__descriptor");
}



/* Address: 0x10018ffdc | FUN_10018ffdc */

void FUN_10018ffdc(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHplcrash__crash_report__pack_to_buffer","PLCrashReport.pb-c.c",0x75,
                "message->base.descriptor == &plcrash__crash_report__descriptor");
}



/* Address: 0x100190004 | FUN_100190004 */

void FUN_100190004(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHplcrash__crash_report__free_unpacked","PLCrashReport.pb-c.c",0x88,
                "message->base.descriptor == &plcrash__crash_report__descriptor");
}



/* Address: 0x10019002c | FUN_10019002c */

void FUN_10019002c(void)

{
  _dispatch_once(&DAT_101060ba8,&PTR___NSConcreteGlobalBlock_100ebc7b0);
  return;
}



/* Address: 0x100190040 | FUN_100190040 */

void FUN_100190040(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("-[PHPLCrashReporter enableCrashReporterAndReturnError:]","PLCrashReporter.m",0x253,
                "_applicationVersion != nil");
}



/* Address: 0x100190068 | FUN_100190068 */

void FUN_100190068(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("-[PHPLCrashReporter enableCrashReporterAndReturnError:]","PLCrashReporter.m",0x252,
                "_applicationIdentifier != nil");
}



/* Address: 0x100190090 | FUN_100190090 */

void FUN_100190090(undefined8 param_1)

{
  FUN_100180fe0(&DAT_101060bb8,param_1);
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* Address: 0x1001900ac | FUN_1001900ac */

void FUN_1001900ac(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("-[PHPLCrashReporter setCrashCallbacks:]","PLCrashReporter.m",0x35e,
                "callbacks->version == 0");
}



/* Address: 0x1001900d4 | FUN_1001900d4 */

void FUN_1001900d4(void)

{
  int iVar1;
  
  iVar1 = 0x1060de0;
  ___cxa_guard_acquire();
  if (iVar1 != 0) {
    DAT_101060df0 = 0;
    DAT_101060df8 = 0;
    DAT_101060e08 = 0;
    DAT_101060e00 = 0;
    DAT_101060de8 = 0;
    DAT_101060e18 = 0;
    DAT_101060e20 = 0;
    DAT_101060e30 = 0;
    DAT_101060e28 = 0;
    DAT_101060e10 = 0;
    ___cxa_atexit(FUN_10018b36c,&DAT_101060de8,0x100000000);
    ___cxa_guard_release(&DAT_101060de0);
    return;
  }
  return;
}



/* Address: 0x100190160 | FUN_100190160 */

void FUN_100190160(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHprotobuf_c_message_get_packed_size","protobuf-c.c",0x2d5,
                "((message)->descriptor)->magic == PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC");
}



/* Address: 0x100190188 | FUN_100190188 */

void FUN_100190188(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = "required_field_get_packed_size";
  FUN_10018fd3c();
                    /* WARNING: Subroutine does not return */
  ___assert_rtn(pcVar1,param_2,0x1d7,param_4);
}



/* Address: 0x1001901ac | FUN_1001901ac */

void FUN_1001901ac(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHprotobuf_c_message_pack","protobuf-c.c",0x5d0,
                "((message)->descriptor)->magic == PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC");
}



/* Address: 0x1001901d4 | FUN_1001901d4 */

void FUN_1001901d4(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("repeated_field_pack","protobuf-c.c",0x5aa,
                "actual_length_size == length_size_min + 1");
}



/* Address: 0x1001901fc | FUN_1001901fc */

void FUN_1001901fc(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = "repeated_field_pack";
  FUN_10018fd3c();
                    /* WARNING: Subroutine does not return */
  ___assert_rtn(pcVar1,param_2,0x5a4,param_4);
}



/* Address: 0x100190220 | FUN_100190220 */

void FUN_100190220(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10018fd1c();
}



/* Address: 0x10019022c | FUN_10019022c */

void FUN_10019022c(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = "required_field_pack";
  FUN_10018fd3c();
                    /* WARNING: Subroutine does not return */
  ___assert_rtn(pcVar1,param_2,0x47b,param_4);
}



/* Address: 0x100190250 | FUN_100190250 */

void FUN_100190250(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHprotobuf_c_message_pack_to_buffer","protobuf-c.c",0x7b7,
                "((message)->descriptor)->magic == PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC");
}



/* Address: 0x100190278 | FUN_100190278 */

void FUN_100190278(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("repeated_field_pack_to_buffer","protobuf-c.c",0x790,"tmp == payload_len");
}



/* Address: 0x1001902a0 | FUN_1001902a0 */

void FUN_1001902a0(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = "pack_buffer_packed_payload";
  FUN_10018fd3c();
                    /* WARNING: Subroutine does not return */
  ___assert_rtn(pcVar1,param_2,0x772,param_4);
}



/* Address: 0x1001902c4 | FUN_1001902c4 */

void FUN_1001902c4(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = "get_packed_payload_length";
  FUN_10018fd3c();
                    /* WARNING: Subroutine does not return */
  ___assert_rtn(pcVar1,param_2,0x70c,param_4);
}



/* Address: 0x1001902e8 | FUN_1001902e8 */

void FUN_1001902e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10018fd1c();
}



/* Address: 0x1001902f4 | FUN_1001902f4 */

void FUN_1001902f4(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = "required_field_pack_to_buffer";
  FUN_10018fd3c();
                    /* WARNING: Subroutine does not return */
  ___assert_rtn(pcVar1,param_2,0x673,param_4);
}



/* Address: 0x100190318 | FUN_100190318 */

void FUN_100190318(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHprotobuf_c_message_unpack","protobuf-c.c",0xbfa,
                "(desc)->magic == PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC");
}



/* Address: 0x100190340 | FUN_100190340 */

void FUN_100190340(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10018fd1c();
}



/* Address: 0x10019034c | FUN_10019034c */

void FUN_10019034c(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHprotobuf_c_message_unpack","protobuf-c.c",0xcb4,"rv->descriptor != NULL");
}



/* Address: 0x100190374 | FUN_100190374 */

void FUN_100190374(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = "parse_packed_repeated_member";
  FUN_10018fd3c();
                    /* WARNING: Subroutine does not return */
  ___assert_rtn(pcVar1,param_2,0xb36,param_4);
}



/* Address: 0x100190398 | FUN_100190398 */

void FUN_100190398(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10018fd1c();
}



/* Address: 0x1001903a4 | FUN_1001903a4 */

void FUN_1001903a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10018fd1c();
}



/* Address: 0x1001903b0 | FUN_1001903b0 */

void FUN_1001903b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10018fd1c();
}



/* Address: 0x1001903bc | FUN_1001903bc */

void FUN_1001903bc(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = "parse_member";
  FUN_10018fd3c();
                    /* WARNING: Subroutine does not return */
  ___assert_rtn(pcVar1,param_2,0xb7d,param_4);
}



/* Address: 0x1001903e0 | FUN_1001903e0 */

void FUN_1001903e0(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHprotobuf_c_message_free_unpacked","protobuf-c.c",0xd0c,
                "((message)->descriptor)->magic == PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC");
}



/* Address: 0x100190408 | FUN_100190408 */

void FUN_100190408(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHprotobuf_c_service_invoke_internal","protobuf-c.c",0xdc6,
                "method_index < service->descriptor->n_methods");
}



/* Address: 0x100190430 | FUN_100190430 */

void FUN_100190430(void)

{
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("PHprotobuf_c_service_generated_init","protobuf-c.c",0xddb,
                "(descriptor)->magic == PROTOBUF_C__SERVICE_DESCRIPTOR_MAGIC");
}



/* Address: 0x100190458 | FUN_100190458 */

void FUN_100190458(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10018fd1c();
}



/* Address: 0x100190464 | FUN_100190464 */

void FUN_100190464(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_10018fd1c();
}



/* Address: 0x100190470 | FUN_100190470 */

undefined8
FUN_100190470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 0xc;
  *(undefined8 *)(puVar1 + 0x10) = 6;
  *(undefined8 *)(puVar1 + 0x20) = 0x6f635f736d657469;
  puVar2 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc68;
  *(undefined8 *)(puVar1 + 0x28) = 0xeb00000000746e75;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x58) = 0x6472616f626e6970;
  *(undefined8 *)(puVar1 + 0x60) = 0xef746e756f635f73;
  *(undefined **)(puVar1 + 0x80) = puVar2;
  *(undefined ***)(puVar1 + 0x88) = &PTR_PTR_100ebcc68;
  *(undefined8 *)(puVar1 + 0x68) = param_2;
  *(undefined8 *)(puVar1 + 0x90) = 0xd000000000000012;
  *(undefined8 *)(puVar1 + 0x98) = 0x8000000100d97370;
  *(undefined **)(puVar1 + 0xb8) = puVar2;
  *(undefined ***)(puVar1 + 0xc0) = &PTR_PTR_100ebcc68;
  *(undefined8 *)(puVar1 + 0xa0) = param_3;
  *(undefined8 *)(puVar1 + 200) = 0xd000000000000014;
  *(undefined8 *)(puVar1 + 0xd0) = 0x8000000100d97390;
  puVar2 = &DAT_100fb31a0;
  FUN_1000037f0(&DAT_100fb31a0,&DAT_100c31010);
  *(undefined **)(puVar1 + 0xf0) = puVar2;
  puVar3 = puVar2;
  FUN_100190668();
  *(undefined8 *)(puVar1 + 0xd8) = param_4;
  *(undefined **)(puVar1 + 0xf8) = puVar3;
  *(undefined8 *)(puVar1 + 0x100) = 0xd000000000000019;
  *(undefined **)(puVar1 + 0x128) = puVar2;
  *(undefined **)(puVar1 + 0x130) = puVar3;
  *(undefined8 *)(puVar1 + 0x108) = 0x8000000100d973b0;
  *(undefined8 *)(puVar1 + 0x110) = param_5;
  *(undefined8 *)(puVar1 + 0x138) = 0xd00000000000001a;
  *(undefined8 *)(puVar1 + 0x140) = 0x8000000100d973d0;
  *(undefined **)(puVar1 + 0x160) = puVar2;
  *(undefined **)(puVar1 + 0x168) = puVar3;
  *(undefined8 *)(puVar1 + 0x148) = param_6;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_6);
  FUN_10019072c(puVar1);
  _swift_setDeallocating(puVar1);
  puVar2 = &DAT_100fb31b0;
  FUN_1000037f0(&DAT_100fb31b0,&DAT_100c311b0);
  _swift_arrayDestroy(puVar1 + 0x20,6,puVar2);
  return 0xd000000000000013;
}



/* Address: 0x100190668 | FUN_100190668 */

void FUN_100190668(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined **local_18;
  
  if (DAT_100fb31a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb31a0;
  FUN_100005c24(&DAT_100fb31a0,&DAT_100c31010);
  local_18 = &PTR_PTR_100ebcc68;
  pTVar2 = &TargetProtocolConformanceDescriptor_100c31210;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31210,puVar1,&local_18);
  DAT_100fb31a8 = pTVar2;
  return;
}



/* Address: 0x1001906d0 | FUN_1001906d0 */

void FUN_1001906d0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x28);
  uVar4 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  puVar3[1] = param_4[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  puVar3[4] = param_4[4];
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10019072c);
  (*pcVar2)();
}



/* Address: 0x10019072c | FUN_10019072c */

undefined * FUN_10019072c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *capacity;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb31c0;
    FUN_1000037f0(&DAT_100fb31c0,&DAT_100c31020);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100190940(param_1,&local_98);
      uVar3 = uStack_90;
      uVar2 = local_98;
      uVar6 = local_98;
      uVar7 = uStack_90;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100190848);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      puVar8[4] = local_68;
      puVar8[1] = uStack_80;
      *puVar8 = local_88;
      puVar8[3] = uStack_70;
      puVar8[2] = uStack_78;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10019084c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x10019084c | FUN_10019084c */

undefined * FUN_10019084c(long param_1)

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
  undefined8 *puVar8;
  undefined8 uVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb31b8;
    FUN_1000037f0(&DAT_100fb31b8,&DAT_100c31018);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar8 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar8[-2];
      uVar3 = puVar8[-1];
      uVar9 = *puVar8;
      _swift_bridgeObjectRetain(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10019093c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100190940);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar8 = puVar8 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x100190940 | FUN_100190940 */

undefined8 FUN_100190940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb31b0;
  FUN_1000037f0(&DAT_100fb31b0,&DAT_100c311b0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100190990 | FUN_100190990 */

void FUN_100190990(void)

{
  AutoreleaseFrequency AVar1;
  undefined7 extraout_var;
  Attributes AVar2;
  DispatchQoS DVar3;
  DispatchQoS DVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  Attributes attributes;
  long lVar8;
  String label;
  undefined1 auStack_70 [8];
  undefined *local_68;
  
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar8 = *(long *)(CONCAT71(extraout_var,AVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar2 = Attributes::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(AVar2.unknown + -8) + 0x40));
  attributes.unknown = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar3.unknown + -8) + 0x40));
  DVar3.unknown = (undefined *)0x0;
  FUN_1001917b4();
  DVar4 = Dispatch::DispatchQoS::get_utility(DVar3);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001917f8();
  puVar5 = &DAT_100fb3298;
  FUN_1000037f0(&DAT_100fb3298,&DAT_100c31080);
  puVar6 = puVar5;
  FUN_10019183c();
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar5,puVar6,AVar2.unknown,DVar4.unknown);
  (**(code **)(lVar8 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,CONCAT71(extraout_var,AVar1.value));
  label.bridgeObject = (void *)0x8000000100d97410;
  label.str = (char *)0xd00000000000001b;
  DAT_100fb3280 =
       (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                 ((OS_dispatch_queue *)DVar3.unknown,label,
                  (DispatchQoS)(attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
                  attributes,(AutoreleaseFrequency)(__int8)puVar7);
  return;
}



/* Address: 0x100190b28 | FUN_100190b28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100190b28(undefined1 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_100198e84();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  IVar4 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  *(ID *)(lVar3 + 0x20) = IVar4;
  *(undefined8 *)(lVar3 + 0x28) = 0xd000000000000011;
  *(undefined8 *)(lVar3 + 0x30) = 0x8000000100d97430;
  *(undefined8 *)(lVar3 + 0x38) = 7;
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(long *)(unaff_x20 + 0x20) = lVar3;
  puVar5 = &DAT_100ebc9f0;
  _swift_allocObject(&DAT_100ebc9f0,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  uVar1 = *(undefined8 *)(lVar3 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(code **)(lVar3 + 0x10) = FUN_100191900;
  *(undefined **)(lVar3 + 0x18) = puVar5;
  _swift_retain(lVar3);
  _swift_retain(puVar5);
  FUN_100004550(uVar1,uVar2);
  _swift_release(puVar5);
  _swift_release(lVar3);
  FUN_100190f5c();
  return;
}



/* Address: 0x100190c20 | FUN_100190c20 */

void FUN_100190c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  param_4 = param_4 + 0x10;
  _swift_weakLoadStrong();
  if (param_4 != 0) {
    if (*(char *)(param_4 + 0x10) != '\x01') {
      _swift_release();
      return;
    }
    if (DAT_100fb3278 != -1) {
      _swift_once(&DAT_100fb3278,FUN_100190990);
    }
    uVar1 = DAT_100fb3280;
    puVar3 = &DAT_100ebca90;
    _swift_allocObject(&DAT_100ebca90,0x30,7);
    *(long *)(puVar3 + 0x10) = param_4;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    puVar4 = &DAT_100ebcab8;
    _swift_allocObject(&DAT_100ebcab8,0x20,7);
    *(code **)(puVar4 + 0x10) = thunk_FUN_10019178c;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    local_60 = thunk_FUN_1000386a0;
    local_80 = PTR___NSConcreteStackBlock_100ea82a0;
    local_78 = 0x42000000;
    local_70 = FUN_1000d5218;
    puStack_68 = &DAT_100ebcad0;
    local_58 = puVar4;
    aBlock = __Block_copy(&local_80);
    puVar5 = local_58;
    _swift_retain(param_4);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    _swift_retain(puVar4);
    _swift_release(puVar5);
    _dispatch_sync(uVar1,aBlock);
    __Block_release(aBlock);
    _swift_release(param_4);
    puVar5 = puVar4;
    _swift_isEscapingClosureAtFileLocation(puVar4,"",0x73,0x31,0x19,1);
    _swift_release(puVar4);
    _swift_release(puVar3);
    if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100190dd8);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x100190dd8 | FUN_100190dd8 */

void FUN_100190dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  long unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    if (DAT_100fb3278 != -1) {
      _swift_once(&DAT_100fb3278,FUN_100190990);
    }
    uVar1 = DAT_100fb3280;
    puVar3 = &DAT_100ebc888;
    _swift_allocObject(&DAT_100ebc888,0x30,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    puVar4 = &DAT_100ebc8b0;
    _swift_allocObject(&DAT_100ebc8b0,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_10019178c;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    local_60 = FUN_1000386a0;
    local_80 = PTR___NSConcreteStackBlock_100ea82a0;
    local_78 = 0x42000000;
    local_70 = FUN_1000d5218;
    puStack_68 = &DAT_100ebc8c8;
    local_58 = puVar4;
    aBlock = __Block_copy(&local_80);
    puVar5 = local_58;
    _swift_retain();
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    _swift_retain(puVar4);
    _swift_release(puVar5);
    _dispatch_sync(uVar1,aBlock);
    __Block_release(aBlock);
    puVar5 = puVar4;
    _swift_isEscapingClosureAtFileLocation(puVar4,"",0x73,0x31,0x19,1);
    _swift_release(puVar4);
    _swift_release(puVar3);
    if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100190f5c);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x100190f5c | FUN_100190f5c */

void FUN_100190f5c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 unaff_x20;
  undefined *local_148;
  undefined8 local_140;
  code *local_138;
  undefined *puStack_130;
  code *local_128;
  undefined *local_120;
  
  puVar2 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 6;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  *(undefined8 *)(puVar2 + 0x20) = 0x705f656369766564;
  *(undefined8 *)(puVar2 + 0x28) = 0xef6d726f6674616c;
  FUN_1000f3588();
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar2 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar2 + 0x30) = 0x534f63616d;
  *(undefined1 **)(puVar2 + 0x38) = &DAT_e500000000000000;
  *(undefined8 *)(puVar2 + 0x58) = 0x665f656369766564;
  *(undefined8 *)(puVar2 + 0x60) = 0xed0000796c696d61;
  *(undefined **)(puVar2 + 0x80) = puVar5;
  *(undefined ***)(puVar2 + 0x88) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar2 + 0x68) = 0x63614d;
  *(undefined8 *)(puVar2 + 0x70) = 0xe300000000000000;
  *(undefined8 *)(puVar2 + 0x90) = 0xd000000000000017;
  *(undefined8 *)(puVar2 + 0x98) = 0x8000000100d97450;
  uVar3 = 0x6c65646f6d2e7768;
  puVar7 = &DAT_e800000000000000;
  thunk_FUN_1000f4774();
  *(undefined **)(puVar2 + 0xb8) = puVar5;
  *(undefined ***)(puVar2 + 0xc0) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar2 + 0xa0) = uVar3;
  *(undefined1 **)(puVar2 + 0xa8) = puVar7;
  puVar4 = puVar2;
  FUN_10019072c();
  _swift_setDeallocating(puVar2);
  puVar5 = &DAT_100fb31b0;
  FUN_1000037f0(&DAT_100fb31b0,&DAT_100c311b0);
  _swift_arrayDestroy(puVar2 + 0x20,3,puVar5);
  if (DAT_100fb3278 != -1) {
    _swift_once(&DAT_100fb3278,FUN_100190990);
  }
  uVar3 = DAT_100fb3280;
  puVar2 = &DAT_100ebca18;
  _swift_allocObject(&DAT_100ebca18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined **)(puVar2 + 0x18) = puVar4;
  puVar5 = &DAT_100ebca40;
  _swift_allocObject(&DAT_100ebca40,0x20,7);
  *(code **)(puVar5 + 0x10) = thunk_FUN_10019188c;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  local_128 = thunk_FUN_1000386a0;
  local_148 = PTR___NSConcreteStackBlock_100ea82a0;
  local_140 = 0x42000000;
  local_138 = FUN_1000d5218;
  puStack_130 = &DAT_100ebca58;
  local_120 = puVar5;
  aBlock = __Block_copy(&local_148);
  puVar6 = local_120;
  _swift_retain();
  _swift_bridgeObjectRetain(puVar4);
  _swift_retain(puVar5);
  _swift_release(puVar6);
  _dispatch_sync(uVar3,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x73,0x27,0x19,1);
  _swift_bridgeObjectRelease(puVar4);
  _swift_release(puVar2);
  _swift_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001911f4);
  (*pcVar1)();
}



/* Address: 0x1001911f4 | FUN_1001911f4 */

void FUN_1001911f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  if (DAT_100fb3278 != -1) {
    _swift_once(&DAT_100fb3278,FUN_100190990);
  }
  uVar1 = DAT_100fb3280;
  puVar3 = &DAT_100ebc978;
  _swift_allocObject(&DAT_100ebc978,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar4 = &DAT_100ebc9a0;
  _swift_allocObject(&DAT_100ebc9a0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1001918c0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_60 = thunk_FUN_1000386a0;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_1000d5218;
  puStack_68 = &DAT_100ebc9b8;
  local_58 = puVar4;
  aBlock = __Block_copy(&local_80);
  puVar5 = local_58;
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(puVar4);
  _swift_retain();
  _swift_release(puVar5);
  _dispatch_sync(uVar1,aBlock);
  __Block_release(aBlock);
  puVar5 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x73,0x21,0x19,1);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100191360);
  (*pcVar2)();
}



/* Address: 0x100191360 | FUN_100191360 */

void FUN_100191360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x18) + 0x20;
    do {
      FUN_100076688(lVar3,auStack_78);
      lVar2 = lStack_58;
      uVar1 = local_60;
      FUN_100004640(auStack_78,local_60);
      (**(code **)(lVar2 + 8))(param_2,param_3,uVar1,lVar2);
      FUN_100004594(auStack_78);
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x1001913fc | FUN_1001913fc */

void FUN_1001913fc(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  if (DAT_100fb3278 != -1) {
    _swift_once(&DAT_100fb3278,FUN_100190990);
  }
  uVar1 = DAT_100fb3280;
  puVar3 = &DAT_100ebc900;
  _swift_allocObject(&DAT_100ebc900,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar4 = &DAT_100ebc928;
  _swift_allocObject(&DAT_100ebc928,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10019188c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_60 = thunk_FUN_1000386a0;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_1000d5218;
  puStack_68 = &DAT_100ebc940;
  local_58 = puVar4;
  aBlock = __Block_copy(&local_80);
  puVar5 = local_58;
  _swift_retain();
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(puVar4);
  _swift_release(puVar5);
  _dispatch_sync(uVar1,aBlock);
  __Block_release(aBlock);
  puVar5 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x73,0x27,0x19,1);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100191564);
  (*pcVar2)();
}



/* Address: 0x100191564 | FUN_100191564 */

void FUN_100191564(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x18) + 0x20;
    do {
      FUN_100076688(lVar3,auStack_68);
      lVar2 = lStack_48;
      uVar1 = local_50;
      FUN_100004640(auStack_68,local_50);
      (**(code **)(lVar2 + 0x10))(param_2,uVar1,lVar2);
      FUN_100004594(auStack_68);
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}


