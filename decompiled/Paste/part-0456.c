/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100578098 | FUN_100578098 */

void FUN_100578098(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ce8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cc40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cc40,&DAT_100ee14d8);
  DAT_100fd0ce8 = pTVar1;
  return;
}



/* Address: 0x1005780d8 | FUN_1005780d8 */

void FUN_1005780d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fd0cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd0cf0;
  FUN_1000f8b08(&DAT_100fd0cf0,&BYTE_100c5b968);
  puVar2 = puVar1;
  FUN_100578148();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fd0cf8 = puVar3;
  return;
}



/* Address: 0x100578148 | FUN_100578148 */

void FUN_100578148(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bbf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bbf0,&DAT_100ee1010);
  DAT_100fd0d00 = pTVar1;
  return;
}



/* Address: 0x100578188 | FUN_100578188 */

/* WARNING: Removing unreachable block (ram,0x0001005782f8) */
/* WARNING: Removing unreachable block (ram,0x000100578364) */
/* WARNING: Removing unreachable block (ram,0x000100578368) */
/* WARNING: Removing unreachable block (ram,0x00010057837c) */
/* WARNING: Removing unreachable block (ram,0x000100578254) */

undefined1 * FUN_100578188(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 local_61;
  undefined1 local_58 [8];
  
  puVar1 = &DAT_100fd13a0;
  FUN_1000f7830(&DAT_100fd13a0,&DAT_100c5cf20);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100578098();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_58[0] = 0;
    puVar2 = local_58;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar2,puVar1);
    puVar3 = &DAT_100fd0cf0;
    FUN_1000f7830(&DAT_100fd0cf0,&BYTE_100c5b968);
    local_61 = 1;
    puVar4 = puVar3;
    FUN_100579f68();
    Swift::KeyedDecodingContainer::_decode(local_58,puVar3,&local_61,puVar1,puVar3,puVar4);
    local_61 = 2;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_58,&DAT_100edcda0,&local_61,puVar1,&DAT_100edcda0,puVar3);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffff90 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return puVar2;
}



/* Address: 0x100578398 | FUN_100578398 */

void FUN_100578398(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cbf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cbf0,&DAT_100ee1448);
  DAT_100fd0d10 = pTVar1;
  return;
}



/* Address: 0x1005783d8 | thunk_FUN_1005783dc */

void thunk_FUN_1005783dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ba08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ba08,&DAT_100ee0f88);
  DAT_100fd0d18 = pTVar1;
  return;
}



/* Address: 0x1005783dc | FUN_1005783dc */

void FUN_1005783dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ba08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ba08,&DAT_100ee0f88);
  DAT_100fd0d18 = pTVar1;
  return;
}



/* Address: 0x10057841c | thunk_FUN_100578420 */

void thunk_FUN_100578420(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ba30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ba30,&DAT_100ee10a8);
  DAT_100fd0d20 = pTVar1;
  return;
}



/* Address: 0x100578420 | FUN_100578420 */

void FUN_100578420(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ba30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ba30,&DAT_100ee10a8);
  DAT_100fd0d20 = pTVar1;
  return;
}



/* Address: 0x100578460 | thunk_FUN_100578464 */

void thunk_FUN_100578464(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bb60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bb60,&DAT_100ee1138);
  DAT_100fd0d28 = pTVar1;
  return;
}



/* Address: 0x100578464 | FUN_100578464 */

void FUN_100578464(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bb60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bb60,&DAT_100ee1138);
  DAT_100fd0d28 = pTVar1;
  return;
}



/* Address: 0x1005784a4 | thunk_FUN_1005784a8 */

void thunk_FUN_1005784a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bc18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bc18,&DAT_100ee1010);
  DAT_100fd0d30 = pTVar1;
  return;
}



/* Address: 0x1005784a8 | FUN_1005784a8 */

void FUN_1005784a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bc18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bc18,&DAT_100ee1010);
  DAT_100fd0d30 = pTVar1;
  return;
}



/* Address: 0x1005784e8 | thunk_FUN_1005784ec */

void thunk_FUN_1005784ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bcd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bcd0,&DAT_100ee11b0);
  DAT_100fd0d38 = pTVar1;
  return;
}



/* Address: 0x1005784ec | FUN_1005784ec */

void FUN_1005784ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bcd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bcd0,&DAT_100ee11b0);
  DAT_100fd0d38 = pTVar1;
  return;
}



/* Address: 0x10057852c | thunk_FUN_100578530 */

void thunk_FUN_100578530(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bd88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bd88,&DAT_100ee0ef8);
  DAT_100fd0d40 = pTVar1;
  return;
}



/* Address: 0x100578530 | FUN_100578530 */

void FUN_100578530(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bd88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bd88,&DAT_100ee0ef8);
  DAT_100fd0d40 = pTVar1;
  return;
}



/* Address: 0x100578570 | thunk_FUN_100578574 */

void thunk_FUN_100578574(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5be40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5be40,&DAT_100ee1138);
  DAT_100fd0d48 = pTVar1;
  return;
}



/* Address: 0x100578574 | FUN_100578574 */

void FUN_100578574(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5be40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5be40,&DAT_100ee1138);
  DAT_100fd0d48 = pTVar1;
  return;
}



/* Address: 0x1005785b4 | thunk_FUN_1005785b8 */

void thunk_FUN_1005785b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5be80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5be80,&DAT_100ee1138);
  DAT_100fd0d50 = pTVar1;
  return;
}



/* Address: 0x1005785b8 | FUN_1005785b8 */

void FUN_1005785b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5be80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5be80,&DAT_100ee1138);
  DAT_100fd0d50 = pTVar1;
  return;
}



/* Address: 0x1005785f8 | thunk_FUN_1005785fc */

void thunk_FUN_1005785fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5be00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5be00,&DAT_100ee1138);
  DAT_100fd0d58 = pTVar1;
  return;
}



/* Address: 0x1005785fc | FUN_1005785fc */

void FUN_1005785fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5be00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5be00,&DAT_100ee1138);
  DAT_100fd0d58 = pTVar1;
  return;
}



/* Address: 0x10057863c | thunk_FUN_100578640 */

void thunk_FUN_100578640(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bf98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bf98,&DAT_100ee1250);
  DAT_100fd0d60 = pTVar1;
  return;
}



/* Address: 0x100578640 | FUN_100578640 */

void FUN_100578640(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bf98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bf98,&DAT_100ee1250);
  DAT_100fd0d60 = pTVar1;
  return;
}



/* Address: 0x100578680 | thunk_FUN_100578684 */

void thunk_FUN_100578684(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c050;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c050,&DAT_100ee12d0);
  DAT_100fd0d68 = pTVar1;
  return;
}



/* Address: 0x100578684 | FUN_100578684 */

void FUN_100578684(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c050;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c050,&DAT_100ee12d0);
  DAT_100fd0d68 = pTVar1;
  return;
}



/* Address: 0x1005786c4 | thunk_FUN_1005786c8 */

void thunk_FUN_1005786c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bf48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bf48,&DAT_100ee1250);
  DAT_100fd0d70 = pTVar1;
  return;
}



/* Address: 0x1005786c8 | FUN_1005786c8 */

void FUN_1005786c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bf48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bf48,&DAT_100ee1250);
  DAT_100fd0d70 = pTVar1;
  return;
}



/* Address: 0x100578708 | thunk_FUN_10057870c */

void thunk_FUN_10057870c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bf70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bf70,&DAT_100ee1250);
  DAT_100fd0d78 = pTVar1;
  return;
}



/* Address: 0x10057870c | FUN_10057870c */

void FUN_10057870c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bf70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bf70,&DAT_100ee1250);
  DAT_100fd0d78 = pTVar1;
  return;
}



/* Address: 0x10057874c | thunk_FUN_100578750 */

void thunk_FUN_100578750(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bf08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bf08,&DAT_100ee1250);
  DAT_100fd0d80 = pTVar1;
  return;
}



/* Address: 0x100578750 | FUN_100578750 */

void FUN_100578750(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bf08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bf08,&DAT_100ee1250);
  DAT_100fd0d80 = pTVar1;
  return;
}



/* Address: 0x100578790 | thunk_FUN_100578794 */

void thunk_FUN_100578794(void)

{
  FUN_100578794();
  return;
}



/* Address: 0x100578794 | FUN_100578794 */

void FUN_100578794(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c000;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c000,&DAT_100ee12d0);
  DAT_100fd0d88 = pTVar1;
  return;
}



/* Address: 0x1005787d4 | thunk_FUN_1005787d8 */

void thunk_FUN_1005787d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c028;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c028,&DAT_100ee12d0);
  DAT_100fd0d90 = pTVar1;
  return;
}



/* Address: 0x1005787d8 | FUN_1005787d8 */

void FUN_1005787d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c028;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c028,&DAT_100ee12d0);
  DAT_100fd0d90 = pTVar1;
  return;
}



/* Address: 0x100578818 | thunk_FUN_10057881c */

void thunk_FUN_10057881c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bfc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bfc0,&DAT_100ee12d0);
  DAT_100fd0d98 = pTVar1;
  return;
}



/* Address: 0x10057881c | FUN_10057881c */

void FUN_10057881c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0d98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bfc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bfc0,&DAT_100ee12d0);
  DAT_100fd0d98 = pTVar1;
  return;
}



/* Address: 0x10057885c | thunk_FUN_100578860 */

void thunk_FUN_100578860(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0df0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c124;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c124,&DAT_100ee1378);
  DAT_100fd0df0 = pTVar1;
  return;
}



/* Address: 0x100578860 | FUN_100578860 */

void FUN_100578860(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0df0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c124;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c124,&DAT_100ee1378);
  DAT_100fd0df0 = pTVar1;
  return;
}



/* Address: 0x1005788a0 | thunk_FUN_1005788a4 */

void thunk_FUN_1005788a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0df8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c1dc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c1dc,&DAT_100ee13f8);
  DAT_100fd0df8 = pTVar1;
  return;
}



/* Address: 0x1005788a4 | FUN_1005788a4 */

void FUN_1005788a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0df8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c1dc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c1dc,&DAT_100ee13f8);
  DAT_100fd0df8 = pTVar1;
  return;
}



/* Address: 0x1005788e4 | thunk_FUN_1005788e8 */

void thunk_FUN_1005788e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c0d4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c0d4,&DAT_100ee1378);
  DAT_100fd0e00 = pTVar1;
  return;
}



/* Address: 0x1005788e8 | FUN_1005788e8 */

void FUN_1005788e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c0d4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c0d4,&DAT_100ee1378);
  DAT_100fd0e00 = pTVar1;
  return;
}



/* Address: 0x100578928 | thunk_FUN_10057892c */

void thunk_FUN_10057892c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c0fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c0fc,&DAT_100ee1378);
  DAT_100fd0e08 = pTVar1;
  return;
}



/* Address: 0x10057892c | FUN_10057892c */

void FUN_10057892c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c0fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c0fc,&DAT_100ee1378);
  DAT_100fd0e08 = pTVar1;
  return;
}



/* Address: 0x10057896c | thunk_FUN_100578970 */

void thunk_FUN_100578970(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c094;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c094,&DAT_100ee1378);
  DAT_100fd0e10 = pTVar1;
  return;
}



/* Address: 0x100578970 | FUN_100578970 */

void FUN_100578970(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c094;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c094,&DAT_100ee1378);
  DAT_100fd0e10 = pTVar1;
  return;
}



/* Address: 0x1005789b0 | thunk_FUN_1005789b4 */

void thunk_FUN_1005789b4(void)

{
  FUN_1005789b4();
  return;
}



/* Address: 0x1005789b4 | FUN_1005789b4 */

void FUN_1005789b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c18c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c18c,&DAT_100ee13f8);
  DAT_100fd0e18 = pTVar1;
  return;
}



/* Address: 0x1005789f4 | thunk_FUN_1005789f8 */

void thunk_FUN_1005789f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c1b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c1b4,&DAT_100ee13f8);
  DAT_100fd0e20 = pTVar1;
  return;
}



/* Address: 0x1005789f8 | FUN_1005789f8 */

void FUN_1005789f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c1b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c1b4,&DAT_100ee13f8);
  DAT_100fd0e20 = pTVar1;
  return;
}



/* Address: 0x100578a38 | thunk_FUN_100578a3c */

void thunk_FUN_100578a3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c14c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c14c,&DAT_100ee13f8);
  DAT_100fd0e28 = pTVar1;
  return;
}



/* Address: 0x100578a3c | FUN_100578a3c */

void FUN_100578a3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0e28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c14c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c14c,&DAT_100ee13f8);
  DAT_100fd0e28 = pTVar1;
  return;
}



/* Address: 0x100578a7c | FUN_100578a7c */

void FUN_100578a7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100578ab0();
  *(long *)(param_1 + 8) = lVar1;
  FUN_100578af0();
  *(long *)(param_1 + 0x10) = lVar1;
  FUN_100578b30();
  *(long *)(param_1 + 0x18) = lVar1;
  return;
}



/* Address: 0x100578ab0 | FUN_100578ab0 */

void FUN_100578ab0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ec8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c27c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c27c,&DAT_100ee1428);
  DAT_100fd0ec8 = pTVar1;
  return;
}



/* Address: 0x100578af0 | FUN_100578af0 */

void FUN_100578af0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ed0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c2a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c2a4,&DAT_100ee1428);
  DAT_100fd0ed0 = pTVar1;
  return;
}



/* Address: 0x100578b30 | FUN_100578b30 */

void FUN_100578b30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ed8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c23c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c23c,&DAT_100ee1428);
  DAT_100fd0ed8 = pTVar1;
  return;
}



/* Address: 0x100578b70 | thunk_FUN_100578b74 */

void thunk_FUN_100578b74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ee0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c2cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c2cc,&DAT_100ee1428);
  DAT_100fd0ee0 = pTVar1;
  return;
}



/* Address: 0x100578b74 | FUN_100578b74 */

void FUN_100578b74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ee0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c2cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c2cc,&DAT_100ee1428);
  DAT_100fd0ee0 = pTVar1;
  return;
}



/* Address: 0x100578bb4 | FUN_100578bb4 */

void FUN_100578bb4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Address: 0x100578bfc | FUN_100578bfc */

undefined8 * FUN_100578bfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  uVar2 = param_2[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  uVar3 = param_2[8];
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Address: 0x100578c98 | FUN_100578c98 */

undefined8 * FUN_100578c98(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}


