/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008c8558 | thunk_FUN_1008c855c */

void thunk_FUN_1008c855c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &DAT_100feb2d0;
  FUN_1003b6598(&DAT_100feb2d0,param_2,FUN_1008c8478,&TargetProtocolConformanceDescriptor_100c829c4)
  ;
  _swift_job_run(uVar1,uVar2,(ulong)puVar3 | 1);
  return;
}



/* Address: 0x1008c855c | FUN_1008c855c */

void FUN_1008c855c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &DAT_100feb2d0;
  FUN_1003b6598(&DAT_100feb2d0,param_2,FUN_1008c8478,&TargetProtocolConformanceDescriptor_100c829c4)
  ;
  _swift_job_run(uVar1,uVar2,(ulong)puVar3 | 1);
  return;
}



/* Address: 0x1008c85a4 | thunk_FUN_100888214 */

void thunk_FUN_100888214(void)

{
  FUN_100888214();
  return;
}



/* Address: 0x1008c85a8 | FUN_1008c85a8 */

void FUN_1008c85a8(void)

{
  long unaff_x20;
  
  FUN_1008c808c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c85c4 | FUN_1008c85c4 */

void FUN_1008c85c4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_100feb2c8;
  FUN_1000f7830(&DAT_100feb2c8,&DAT_100c82960);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c863c | FUN_1008c863c */

void FUN_1008c863c(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100feb2c8;
  FUN_1000f7830(&DAT_100feb2c8,&DAT_100c82960);
  FUN_1008c63f0(*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x18 &
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1008c8678 | FUN_1008c8678 */

void FUN_1008c8678(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feb4c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a870;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a870,&DAT_100eef640);
  DAT_100feb4c0 = pTVar1;
  return;
}



/* Address: 0x1008c86b8 | FUN_1008c86b8 */

void FUN_1008c86b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    _swift_release(param_3);
    _swift_release(param_5);
    return;
  }
  return;
}



/* Address: 0x1008c86e8 | FUN_1008c86e8 */

undefined8 FUN_1008c86e8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feb4c8;
  FUN_1000f7830(&DAT_100feb4c8,&DAT_100c82bd0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1008c8730 | FUN_1008c8730 */

void FUN_1008c8730(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Address: 0x1008c8754 | FUN_1008c8754 */

void FUN_1008c8754(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_100feb2c8;
  FUN_1000f7830(&DAT_100feb2c8,&DAT_100c82960);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c87cc | FUN_1008c87cc */

void FUN_1008c87cc(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100feb2c8;
  FUN_1000f7830(&DAT_100feb2c8,&DAT_100c82960);
  FUN_1008c5090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x20 &
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1008c8808 | FUN_1008c8808 */

void FUN_1008c8808(void)

{
  long unaff_x20;
  
  FUN_1008c7f84(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c8814 | FUN_1008c8814 */

void FUN_1008c8814(void)

{
  long unaff_x20;
  
  FUN_1008bfbd8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c8820 | FUN_1008c8820 */

void FUN_1008c8820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  if (param_7 == '\x01') {
    _swift_errorRetain();
    return;
  }
  _swift_unknownObjectRetain();
  FUN_1006627ac(param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x1008c8874 | FUN_1008c8874 */

void FUN_1008c8874(void)

{
  uint in_w5;
  
  if (0xfe < (in_w5 >> 8 & 0xff)) {
    return;
  }
  FUN_1008c8820();
  return;
}



/* Address: 0x1008c8888 | FUN_1008c8888 */

void FUN_1008c8888(void)

{
  uint in_w5;
  
  if (0xfe < (in_w5 >> 8 & 0xff)) {
    return;
  }
  FUN_1008c889c();
  return;
}



/* Address: 0x1008c889c | FUN_1008c889c */

void FUN_1008c889c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  if (param_7 == '\x01') {
    _swift_errorRelease();
    return;
  }
  _swift_unknownObjectRelease();
  FUN_100662830(param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x1008c88f0 | FUN_1008c88f0 */

void FUN_1008c88f0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c891c | FUN_1008c891c */

void FUN_1008c891c(void)

{
  long unaff_x20;
  
  FUN_1008c3838(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008c8928 | FUN_1008c8928 */

void FUN_1008c8928(undefined8 param_1)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    FUN_100646f54(param_1,*(long *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
    return;
  }
  return;
}



/* Address: 0x1008c893c | FUN_1008c893c */

void FUN_1008c893c(void)

{
  long unaff_x20;
  
  FUN_1008c69f4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008c8944 | FUN_1008c8944 */

void FUN_1008c8944(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c8968 | FUN_1008c8968 */

void FUN_1008c8968(void)

{
  long unaff_x20;
  
  FUN_1008c33d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008c898c | FUN_1008c898c */

void FUN_1008c898c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c89c0 | FUN_1008c89c0 */

void FUN_1008c89c0(void)

{
  long unaff_x20;
  
  FUN_1008c44d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x1008c89d0 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1008c89d4 | FUN_1008c89d4 */

void FUN_1008c89d4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c89f8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1008c89fc | FUN_1008c89fc */

void FUN_1008c89fc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c8a20 | FUN_1008c8a20 */

undefined8 FUN_1008c8a20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feb158;
  FUN_1000f7830(&DAT_100feb158,&DAT_100c82c40);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1008c8a70 | FUN_1008c8a70 */

void FUN_1008c8a70(void)

{
  CheckedContinuation CVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar2 = *(long *)(CVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,CVar1.unknown);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8) + 8));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c8b08 | FUN_1008c8b08 */

void FUN_1008c8b08(void)

{
  undefined8 *puVar1;
  CheckedContinuation CVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  CVar2 = Swift::CheckedContinuation::typeMetadataAccessor();
  uVar3 = (ulong)*(byte *)(*(long *)(CVar2.unknown + -8) + 0x50);
  uVar3 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 +
           (*(long *)(*(long *)(CVar2.unknown + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8));
  FUN_1008c5890(unaff_x20 + uVar3,*puVar1,puVar1[1],uVar4);
  return;
}



/* Address: 0x1008c8b80 | thunk_FUN_1008c6f30 */

void thunk_FUN_1008c6f30(void)

{
  FUN_1008c6f30();
  return;
}



/* Address: 0x1008c8b84 | thunk_FUN_1008c89fc */

void thunk_FUN_1008c89fc(void)

{
  FUN_1008c89fc();
  return;
}



/* Address: 0x1008c8b88 | thunk_FUN_1008c89fc */

void thunk_FUN_1008c89fc(void)

{
  FUN_1008c89fc();
  return;
}



/* Address: 0x1008c8b8c | thunk_FUN_1008c89fc */

void thunk_FUN_1008c89fc(void)

{
  FUN_1008c89fc();
  return;
}



/* Address: 0x1008c8b90 | thunk_FUN_1008c89fc */

void thunk_FUN_1008c89fc(void)

{
  FUN_1008c89fc();
  return;
}



/* Address: 0x1008c8b94 | thunk_FUN_1008c89fc */

void thunk_FUN_1008c89fc(void)

{
  FUN_1008c89fc();
  return;
}



/* Address: 0x1008c8b98 | thunk_FUN_1008c89fc */

void thunk_FUN_1008c89fc(void)

{
  FUN_1008c89fc();
  return;
}



/* Address: 0x1008c8b9c | thunk_FUN_1008c8944 */

void thunk_FUN_1008c8944(void)

{
  FUN_1008c8944();
  return;
}



/* Address: 0x1008c8ba0 | thunk_FUN_1008c89d4 */

void thunk_FUN_1008c89d4(void)

{
  FUN_1008c89d4();
  return;
}



/* Address: 0x1008c8ba4 | thunk_FUN_1008c89d4 */

void thunk_FUN_1008c89d4(void)

{
  FUN_1008c89d4();
  return;
}



/* Address: 0x1008c8ba8 | thunk_FUN_1008c8944 */

void thunk_FUN_1008c8944(void)

{
  FUN_1008c8944();
  return;
}



/* Address: 0x1008c8bac | thunk_FUN_1008c89fc */

void thunk_FUN_1008c89fc(void)

{
  FUN_1008c89fc();
  return;
}



/* Address: 0x1008c8bb0 | thunk_FUN_1008c5854 */

void thunk_FUN_1008c5854(void)

{
  FUN_1008c5854();
  return;
}



/* Address: 0x1008c8bb4 | thunk_FUN_1008c5854 */

void thunk_FUN_1008c5854(void)

{
  FUN_1008c5854();
  return;
}



/* Address: 0x1008c8bb8 | thunk_FUN_1008c5854 */

void thunk_FUN_1008c5854(void)

{
  FUN_1008c5854();
  return;
}



/* Address: 0x1008c8bbc | thunk_FUN_1008c5854 */

void thunk_FUN_1008c5854(void)

{
  FUN_1008c5854();
  return;
}



/* Address: 0x1008c8bc0 | thunk_FUN_1008c5854 */

void thunk_FUN_1008c5854(void)

{
  FUN_1008c5854();
  return;
}



/* Address: 0x1008c8bc4 | thunk_FUN_1008c5854 */

void thunk_FUN_1008c5854(void)

{
  FUN_1008c5854();
  return;
}



/* Address: 0x1008c8bc8 | thunk_FUN_1008c5854 */

void thunk_FUN_1008c5854(void)

{
  FUN_1008c5854();
  return;
}



/* Address: 0x1008c8bcc | thunk_FUN_1008c5854 */

void thunk_FUN_1008c5854(void)

{
  FUN_1008c5854();
  return;
}



/* Address: 0x1008c8bd0 | thunk_FUN_1008c5868 */

void thunk_FUN_1008c5868(void)

{
  FUN_1008c5868();
  return;
}



/* Address: 0x1008c8bd4 | thunk_FUN_1008c5868 */

void thunk_FUN_1008c5868(void)

{
  FUN_1008c5868();
  return;
}



/* Address: 0x1008c8bd8 | thunk_FUN_1008c5868 */

void thunk_FUN_1008c5868(void)

{
  FUN_1008c5868();
  return;
}



/* Address: 0x1008c8bdc | thunk_FUN_1008c5868 */

void thunk_FUN_1008c5868(void)

{
  FUN_1008c5868();
  return;
}



/* Address: 0x1008c8be0 | thunk_FUN_1008c5868 */

void thunk_FUN_1008c5868(void)

{
  FUN_1008c5868();
  return;
}



/* Address: 0x1008c8be4 | thunk_FUN_1008c5868 */

void thunk_FUN_1008c5868(void)

{
  FUN_1008c5868();
  return;
}



/* Address: 0x1008c8be8 | thunk_FUN_1008c5868 */

void thunk_FUN_1008c5868(void)

{
  FUN_1008c5868();
  return;
}



/* Address: 0x1008c8bec | thunk_FUN_1008c5868 */

void thunk_FUN_1008c5868(void)

{
  FUN_1008c5868();
  return;
}



/* Address: 0x1008c8bf0 | thunk_FUN_1008c6948 */

void thunk_FUN_1008c6948(void)

{
  FUN_1008c6948();
  return;
}



/* Address: 0x1008c8bf4 | thunk_FUN_1008c22e0 */

void thunk_FUN_1008c22e0(void)

{
  long unaff_x20;
  
  thunk_FUN_1005de99c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008c8bf8 | thunk_FUN_1008c893c */

void thunk_FUN_1008c893c(void)

{
  long unaff_x20;
  
  FUN_1008c69f4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


