/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bfc45c | _strerror */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strerror(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulong)(uint)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strerror_100ea8a98)();
  return pcVar1;
}



/* Address: 0x100bfc468 | _strerror_r */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _strerror_r(int param_1,char *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strerror_r_100ea8aa0)();
  return param_1;
}



/* Address: 0x100bfc474 | _strftime */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _strftime(char *param_1,size_t param_2,char *param_3,tm *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strftime_100ea8aa8)();
  return (size_t)param_1;
}



/* Address: 0x100bfc480 | _strlcpy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _strlcpy(char *param_1,char *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strlcpy_100ea8ab0)();
  return (size_t)param_1;
}



/* Address: 0x100bfc48c | _strlen */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _strlen(char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strlen_100ea8ab8)();
  return (size_t)param_1;
}



/* Address: 0x100bfc498 | _strncmp */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bfc4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strncmp_100ea8ac0)();
  return iVar1;
}



/* Address: 0x100bfc4a4 | _strncpy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strncpy(char *param_1,char *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strncpy_100ea8ac8)();
  return param_1;
}



/* Address: 0x100bfc4b0 | _strnlen */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t _strnlen(char *param_1,size_t param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strnlen_100ea8ad0)();
  return (size_t)param_1;
}



/* Address: 0x100bfc4bc | _strnstr */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strnstr(char *param_1,char *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strnstr_100ea8ad8)();
  return param_1;
}



/* Address: 0x100bfc4c8 | _strrchr */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strrchr(char *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strrchr_100ea8ae0)(param_1,param_2);
  return param_1;
}



/* Address: 0x100bfc4d4 | _strstr */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strstr(char *param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strstr_100ea8ae8)();
  return param_1;
}



/* Address: 0x100bfc4e0 | _strtod */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double _strtod(char *param_1,char **param_2)

{
  double in_d0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bfc4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strtod_100ea8af0)();
  return in_d0;
}



/* Address: 0x100bfc4ec | _strtoull */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong _strtoull(char *param_1,char **param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strtoull_100ea8af8)(param_1,param_2,param_3);
  return (ulonglong)param_1;
}



/* Address: 0x100bfc4f8 | _swift_allocBox */

void _swift_allocBox(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocBox_100eae110)();
  return;
}



/* Address: 0x100bfc504 | _swift_allocError */

void _swift_allocError(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocError_100eae118)();
  return;
}



/* Address: 0x100bfc510 | _swift_allocObject */

void _swift_allocObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_100eae120)();
  return;
}



/* Address: 0x100bfc51c | _swift_allocateGenericClassMetadata */

void _swift_allocateGenericClassMetadata(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_100eae128)();
  return;
}



/* Address: 0x100bfc528 | _swift_allocateGenericValueMetadata */

void _swift_allocateGenericValueMetadata(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_100eae130)();
  return;
}



/* Address: 0x100bfc534 | _swift_arrayDestroy */

void _swift_arrayDestroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_arrayDestroy_100eae138)();
  return;
}



/* Address: 0x100bfc540 | _swift_arrayInitWithCopy */

void _swift_arrayInitWithCopy(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_arrayInitWithCopy_100eae140)();
  return;
}



/* Address: 0x100bfc54c | _swift_arrayInitWithTakeBackToFront */

void _swift_arrayInitWithTakeBackToFront(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_arrayInitWithTakeBackToFront_100eae148)();
  return;
}



/* Address: 0x100bfc558 | _swift_arrayInitWithTakeFrontToBack */

void _swift_arrayInitWithTakeFrontToBack(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_arrayInitWithTakeFrontToBack_100eae150)();
  return;
}



/* Address: 0x100bfc564 | _swift_asyncLet_begin */

void _swift_asyncLet_begin(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_begin_100eaf058)();
  return;
}



/* Address: 0x100bfc570 | _swift_asyncLet_finish */

void _swift_asyncLet_finish(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_100eaf060)();
  return;
}



/* Address: 0x100bfc57c | _swift_asyncLet_get */

void _swift_asyncLet_get(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_100eaf068)();
  return;
}



/* Address: 0x100bfc588 | _swift_beginAccess */

void _swift_beginAccess(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_beginAccess_100eae158)();
  return;
}



/* Address: 0x100bfc594 | _swift_bridgeObjectRelease */

void _swift_bridgeObjectRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100eae160)();
  return;
}



/* Address: 0x100bfc5a0 | _swift_bridgeObjectRelease_n */

void _swift_bridgeObjectRelease_n(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_n_100eae168)();
  return;
}



/* Address: 0x100bfc5ac | _swift_bridgeObjectRetain */

void _swift_bridgeObjectRetain(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_100eae170)();
  return;
}



/* Address: 0x100bfc5b8 | _swift_bridgeObjectRetain_n */

void _swift_bridgeObjectRetain_n(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_n_100eae178)();
  return;
}



/* Address: 0x100bfc5c4 | _swift_bufferAllocate */

void _swift_bufferAllocate(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bufferAllocate_100eae180)();
  return;
}



/* Address: 0x100bfc5d0 | _swift_checkMetadataState */

void _swift_checkMetadataState(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_checkMetadataState_100eae188)();
  return;
}



/* Address: 0x100bfc5dc | _swift_conformsToProtocol */

void _swift_conformsToProtocol(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_conformsToProtocol_100eae190)();
  return;
}



/* Address: 0x100bfc5e8 | _swift_conformsToProtocol2 */

void _swift_conformsToProtocol2(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_conformsToProtocol2_100eae198)();
  return;
}



/* Address: 0x100bfc5f4 | _swift_continuation_await */

void _swift_continuation_await(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_100eaf078)();
  return;
}



/* Address: 0x100bfc600 | _swift_continuation_init */

void _swift_continuation_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_init_100eaf080)();
  return;
}



/* Address: 0x100bfc60c | _swift_continuation_resume */

void _swift_continuation_resume(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_100eaf088)();
  return;
}



/* Address: 0x100bfc618 | _swift_continuation_throwingResume */

void _swift_continuation_throwingResume(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_100eaf090)();
  return;
}



/* Address: 0x100bfc624 | _swift_continuation_throwingResumeWithError */

void _swift_continuation_throwingResumeWithError(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_100eaf098)();
  return;
}



/* Address: 0x100bfc630 | _swift_coroFrameAlloc */

void _swift_coroFrameAlloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_coroFrameAlloc_100eae1a0)();
  return;
}



/* Address: 0x100bfc63c | _swift_deallocClassInstance */

void _swift_deallocClassInstance(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100eae1a8)();
  return;
}



/* Address: 0x100bfc648 | _swift_deallocObject */

void _swift_deallocObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100eae1b0)();
  return;
}



/* Address: 0x100bfc654 | _swift_deallocPartialClassInstance */

void _swift_deallocPartialClassInstance(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocPartialClassInstance_100eae1b8)();
  return;
}



/* Address: 0x100bfc660 | _swift_defaultActor_deallocate */

void _swift_defaultActor_deallocate(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_100eaf0a0)();
  return;
}



/* Address: 0x100bfc66c | _swift_defaultActor_destroy */

void _swift_defaultActor_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_destroy_100eaf0a8)();
  return;
}



/* Address: 0x100bfc678 | _swift_defaultActor_initialize */

void _swift_defaultActor_initialize(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_initialize_100eaf0b0)();
  return;
}



/* Address: 0x100bfc684 | _swift_deletedMethodError */

void _swift_deletedMethodError(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deletedMethodError_100eae1c0)();
  return;
}



/* Address: 0x100bfc690 | _swift_dynamicCast */

void _swift_dynamicCast(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCast_100eae1c8)();
  return;
}



/* Address: 0x100bfc69c | _swift_dynamicCastClass */

void _swift_dynamicCastClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCastClass_100eae1d0)();
  return;
}



/* Address: 0x100bfc6a8 | _swift_dynamicCastClassUnconditional */

void _swift_dynamicCastClassUnconditional(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCastClassUnconditional_100eae1d8)();
  return;
}



/* Address: 0x100bfc6b4 | _swift_dynamicCastMetatype */

void _swift_dynamicCastMetatype(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCastMetatype_100eae1e0)();
  return;
}



/* Address: 0x100bfc6c0 | _swift_dynamicCastObjCClass */

void _swift_dynamicCastObjCClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCastObjCClass_100eae1e8)();
  return;
}



/* Address: 0x100bfc6cc | _swift_dynamicCastObjCClassUnconditional */

void _swift_dynamicCastObjCClassUnconditional(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCastObjCClassUnconditional_100eae1f0)();
  return;
}



/* Address: 0x100bfc6d8 | _swift_dynamicCastObjCProtocolConditional */

void _swift_dynamicCastObjCProtocolConditional(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCastObjCProtocolConditional_100eae1f8)();
  return;
}



/* Address: 0x100bfc6e4 | _swift_dynamicCastUnknownClass */

void _swift_dynamicCastUnknownClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCastUnknownClass_100eae200)();
  return;
}



/* Address: 0x100bfc6f0 | _swift_dynamicCastUnknownClassUnconditional */

void _swift_dynamicCastUnknownClassUnconditional(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_dynamicCastUnknownClassUnconditional_100eae208)();
  return;
}



/* Address: 0x100bfc6fc | _swift_endAccess */

void _swift_endAccess(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_100eae210)();
  return;
}



/* Address: 0x100bfc708 | _swift_errorRelease */

void _swift_errorRelease(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_100eae218)();
  return;
}



/* Address: 0x100bfc714 | _swift_errorRetain */

void _swift_errorRetain(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRetain_100eae220)();
  return;
}



/* Address: 0x100bfc720 | _swift_getAssociatedConformanceWitness */

void _swift_getAssociatedConformanceWitness(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_100eae228)();
  return;
}



/* Address: 0x100bfc72c | _swift_getAssociatedTypeWitness */

void _swift_getAssociatedTypeWitness(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedTypeWitness_100eae230)();
  return;
}



/* Address: 0x100bfc738 | _swift_getAtKeyPath */

void _swift_getAtKeyPath(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAtKeyPath_100eae238)();
  return;
}



/* Address: 0x100bfc744 | _swift_getDynamicType */

void _swift_getDynamicType(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getDynamicType_100eae240)();
  return;
}



/* Address: 0x100bfc750 | _swift_getEnumCaseMultiPayload */

void _swift_getEnumCaseMultiPayload(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumCaseMultiPayload_100eae248)();
  return;
}


