/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005c9a44 | FUN_1005c9a44 */

void FUN_1005c9a44(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  ulong local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_10 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_10 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if ((local_b0 & 0xff) == 0) {
    FUN_100076688(param_10 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    local_c8[0] = 0;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_70 = param_9;
    local_140[0] = 0;
    local_128 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_e8 = param_9;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_108 = param_5;
    uStack_100 = param_6;
    local_f8 = param_7;
    uStack_f0 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005c9bb8 | FUN_1005c9bb8 */

void FUN_1005c9bb8(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_14 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_14 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 2) {
    FUN_100076688(param_14 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    puVar4 = puVar3;
    (*param_7)();
    local_c8[0] = 1;
    local_90 = param_9;
    uStack_88 = param_10;
    local_80 = param_11;
    uStack_78 = param_12;
    local_70 = param_13;
    local_140[0] = 1;
    local_108 = param_9;
    uStack_100 = param_10;
    local_f8 = param_11;
    uStack_f0 = param_12;
    local_e8 = param_13;
    local_138 = puVar1;
    local_128 = puVar2;
    puStack_120 = puVar3;
    local_118 = puVar4;
    local_c0 = puVar1;
    local_b0 = puVar2;
    puStack_a8 = puVar3;
    local_a0 = puVar4;
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(param_12);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005c9d70 | FUN_1005c9d70 */

void FUN_1005c9d70(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_12 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_12 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 2) {
    FUN_100076688(param_12 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    local_c8[0] = 1;
    local_b0 = 0;
    local_80 = param_9;
    uStack_78 = param_10;
    local_70 = param_11;
    local_140[0] = 1;
    local_128 = 0;
    local_f8 = param_9;
    uStack_f0 = param_10;
    local_e8 = param_11;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_118 = puVar3;
    local_108 = param_7;
    uStack_100 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_a0 = puVar3;
    local_90 = param_7;
    uStack_88 = param_8;
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_10);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005c9f08 | FUN_1005c9f08 */

void FUN_1005c9f08(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_10 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_10 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 2) {
    FUN_100076688(param_10 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    local_c8[0] = 1;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_70 = param_9;
    local_140[0] = 1;
    local_128 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_e8 = param_9;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_108 = param_5;
    uStack_100 = param_6;
    local_f8 = param_7;
    uStack_f0 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005ca080 | FUN_1005ca080 */

void FUN_1005ca080(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_14 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_14 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 3) {
    FUN_100076688(param_14 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    puVar4 = puVar3;
    (*param_7)();
    local_c8[0] = 2;
    local_90 = param_9;
    uStack_88 = param_10;
    local_80 = param_11;
    uStack_78 = param_12;
    local_70 = param_13;
    local_140[0] = 2;
    local_108 = param_9;
    uStack_100 = param_10;
    local_f8 = param_11;
    uStack_f0 = param_12;
    local_e8 = param_13;
    local_138 = puVar1;
    local_128 = puVar2;
    puStack_120 = puVar3;
    local_118 = puVar4;
    local_c0 = puVar1;
    local_b0 = puVar2;
    puStack_a8 = puVar3;
    local_a0 = puVar4;
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(param_12);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005ca238 | FUN_1005ca238 */

void FUN_1005ca238(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_12 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_12 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 3) {
    FUN_100076688(param_12 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    local_c8[0] = 2;
    local_b0 = 0;
    local_80 = param_9;
    uStack_78 = param_10;
    local_70 = param_11;
    local_140[0] = 2;
    local_128 = 0;
    local_f8 = param_9;
    uStack_f0 = param_10;
    local_e8 = param_11;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_118 = puVar3;
    local_108 = param_7;
    uStack_100 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_a0 = puVar3;
    local_90 = param_7;
    uStack_88 = param_8;
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_10);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005ca3d0 | FUN_1005ca3d0 */

void FUN_1005ca3d0(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_10 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_10 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 3) {
    FUN_100076688(param_10 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    local_c8[0] = 2;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_70 = param_9;
    local_140[0] = 2;
    local_128 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_e8 = param_9;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_108 = param_5;
    uStack_100 = param_6;
    local_f8 = param_7;
    uStack_f0 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005ca548 | FUN_1005ca548 */

void FUN_1005ca548(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_14 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_14 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 4) {
    FUN_100076688(param_14 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    puVar4 = puVar3;
    (*param_7)();
    local_c8[0] = 3;
    local_90 = param_9;
    uStack_88 = param_10;
    local_80 = param_11;
    uStack_78 = param_12;
    local_70 = param_13;
    local_140[0] = 3;
    local_108 = param_9;
    uStack_100 = param_10;
    local_f8 = param_11;
    uStack_f0 = param_12;
    local_e8 = param_13;
    local_138 = puVar1;
    local_128 = puVar2;
    puStack_120 = puVar3;
    local_118 = puVar4;
    local_c0 = puVar1;
    local_b0 = puVar2;
    puStack_a8 = puVar3;
    local_a0 = puVar4;
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(param_12);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005ca700 | FUN_1005ca700 */

void FUN_1005ca700(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_12 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_12 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 4) {
    FUN_100076688(param_12 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    local_c8[0] = 3;
    local_b0 = 0;
    local_80 = param_9;
    uStack_78 = param_10;
    local_70 = param_11;
    local_140[0] = 3;
    local_128 = 0;
    local_f8 = param_9;
    uStack_f0 = param_10;
    local_e8 = param_11;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_118 = puVar3;
    local_108 = param_7;
    uStack_100 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_a0 = puVar3;
    local_90 = param_7;
    uStack_88 = param_8;
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_10);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005ca898 | FUN_1005ca898 */

void FUN_1005ca898(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_10 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_10 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 4) {
    FUN_100076688(param_10 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    local_c8[0] = 3;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_70 = param_9;
    local_140[0] = 3;
    local_128 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_e8 = param_9;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_108 = param_5;
    uStack_100 = param_6;
    local_f8 = param_7;
    uStack_f0 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005caa10 | FUN_1005caa10 */

void FUN_1005caa10(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_14 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_14 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 5) {
    FUN_100076688(param_14 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    puVar4 = puVar3;
    (*param_7)();
    local_c8[0] = 4;
    local_90 = param_9;
    uStack_88 = param_10;
    local_80 = param_11;
    uStack_78 = param_12;
    local_70 = param_13;
    local_140[0] = 4;
    local_108 = param_9;
    uStack_100 = param_10;
    local_f8 = param_11;
    uStack_f0 = param_12;
    local_e8 = param_13;
    local_138 = puVar1;
    local_128 = puVar2;
    puStack_120 = puVar3;
    local_118 = puVar4;
    local_c0 = puVar1;
    local_b0 = puVar2;
    puStack_a8 = puVar3;
    local_a0 = puVar4;
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(param_12);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005cabc8 | FUN_1005cabc8 */

void FUN_1005cabc8(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_12 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_12 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 5) {
    FUN_100076688(param_12 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    local_c8[0] = 4;
    local_b0 = 0;
    local_80 = param_9;
    uStack_78 = param_10;
    local_70 = param_11;
    local_140[0] = 4;
    local_128 = 0;
    local_f8 = param_9;
    uStack_f0 = param_10;
    local_e8 = param_11;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_118 = puVar3;
    local_108 = param_7;
    uStack_100 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_a0 = puVar3;
    local_90 = param_7;
    uStack_88 = param_8;
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_10);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005cad60 | FUN_1005cad60 */

void FUN_1005cad60(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_10 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_10 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 5) {
    FUN_100076688(param_10 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    local_c8[0] = 4;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_70 = param_9;
    local_140[0] = 4;
    local_128 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_e8 = param_9;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_108 = param_5;
    uStack_100 = param_6;
    local_f8 = param_7;
    uStack_f0 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005caed8 | FUN_1005caed8 */

void FUN_1005caed8(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_14 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_14 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 6) {
    FUN_100076688(param_14 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    puVar4 = puVar3;
    (*param_7)();
    local_c8[0] = 5;
    local_90 = param_9;
    uStack_88 = param_10;
    local_80 = param_11;
    uStack_78 = param_12;
    local_70 = param_13;
    local_140[0] = 5;
    local_108 = param_9;
    uStack_100 = param_10;
    local_f8 = param_11;
    uStack_f0 = param_12;
    local_e8 = param_13;
    local_138 = puVar1;
    local_128 = puVar2;
    puStack_120 = puVar3;
    local_118 = puVar4;
    local_c0 = puVar1;
    local_b0 = puVar2;
    puStack_a8 = puVar3;
    local_a0 = puVar4;
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(param_12);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005cb090 | FUN_1005cb090 */

void FUN_1005cb090(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_12 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_12 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 6) {
    FUN_100076688(param_12 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    local_c8[0] = 5;
    local_b0 = 0;
    local_80 = param_9;
    uStack_78 = param_10;
    local_70 = param_11;
    local_140[0] = 5;
    local_128 = 0;
    local_f8 = param_9;
    uStack_f0 = param_10;
    local_e8 = param_11;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_118 = puVar3;
    local_108 = param_7;
    uStack_100 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_a0 = puVar3;
    local_90 = param_7;
    uStack_88 = param_8;
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_10);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005cb228 | FUN_1005cb228 */

void FUN_1005cb228(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_10 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_10 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 6) {
    FUN_100076688(param_10 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    local_c8[0] = 5;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_70 = param_9;
    local_140[0] = 5;
    local_128 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_e8 = param_9;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_108 = param_5;
    uStack_100 = param_6;
    local_f8 = param_7;
    uStack_f0 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005cb3a0 | FUN_1005cb3a0 */

void FUN_1005cb3a0(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_14 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_14 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 7) {
    FUN_100076688(param_14 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    puVar4 = puVar3;
    (*param_7)();
    local_c8[0] = 6;
    local_90 = param_9;
    uStack_88 = param_10;
    local_80 = param_11;
    uStack_78 = param_12;
    local_70 = param_13;
    local_140[0] = 6;
    local_108 = param_9;
    uStack_100 = param_10;
    local_f8 = param_11;
    uStack_f0 = param_12;
    local_e8 = param_13;
    local_138 = puVar1;
    local_128 = puVar2;
    puStack_120 = puVar3;
    local_118 = puVar4;
    local_c0 = puVar1;
    local_b0 = puVar2;
    puStack_a8 = puVar3;
    local_a0 = puVar4;
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(param_12);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005cb558 | FUN_1005cb558 */

void FUN_1005cb558(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_12 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_12 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 7) {
    FUN_100076688(param_12 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    local_c8[0] = 6;
    local_b0 = 0;
    local_80 = param_9;
    uStack_78 = param_10;
    local_70 = param_11;
    local_140[0] = 6;
    local_128 = 0;
    local_f8 = param_9;
    uStack_f0 = param_10;
    local_e8 = param_11;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_118 = puVar3;
    local_108 = param_7;
    uStack_100 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_a0 = puVar3;
    local_90 = param_7;
    uStack_88 = param_8;
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_10);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005cb6f0 | FUN_1005cb6f0 */

void FUN_1005cb6f0(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_10 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_10 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)local_b0 & 0xff) < 7) {
    FUN_100076688(param_10 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    local_c8[0] = 6;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_70 = param_9;
    local_140[0] = 6;
    local_128 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_e8 = param_9;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_108 = param_5;
    uStack_100 = param_6;
    local_f8 = param_7;
    uStack_f0 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005cb868 | thunk_FUN_1005ce1bc */

void thunk_FUN_1005ce1bc(void)

{
  FUN_1005ce1bc();
  return;
}



/* Address: 0x1005cb86c | FUN_1005cb86c */

void FUN_1005cb86c(void)

{
  FUN_1000f7830(&DAT_100fd41b0,&DAT_100c647f8);
  _swift_initStaticObject();
  return;
}



/* Address: 0x1005cb898 | FUN_1005cb898 */

void FUN_1005cb898(void)

{
  undefined1 *unaff_x20;
  
  FUN_1005cb990(0,*unaff_x20);
  return;
}



/* Address: 0x1005cb8a4 | FUN_1005cb8a4 */

void FUN_1005cb8a4(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte *unaff_x20;
  String SVar8;
  
  bVar7 = *unaff_x20;
  pcVar1 = (char *)0x726f727265;
  if (bVar7 != 5) {
    pcVar1 = (char *)0x6c61636974697263;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar7 != 5) {
    puVar2 = &DAT_e800000000000000;
  }
  pcVar4 = (char *)0x656369746f6e;
  if (bVar7 != 3) {
    pcVar4 = (char *)0x676e696e726177;
  }
  puVar3 = &DAT_e600000000000000;
  if (bVar7 != 3) {
    puVar3 = &DAT_e700000000000000;
  }
  if (bVar7 < 5) {
    puVar2 = puVar3;
    pcVar1 = pcVar4;
  }
  pcVar4 = (char *)0x6775626564;
  if (bVar7 != 1) {
    pcVar4 = (char *)0x6f666e69;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar7 != 1) {
    puVar3 = &DAT_e400000000000000;
  }
  pcVar5 = (char *)0x6563617274;
  if (bVar7 != 0) {
    pcVar5 = pcVar4;
  }
  puVar6 = &DAT_e500000000000000;
  if (bVar7 != 0) {
    puVar6 = puVar3;
  }
  if (bVar7 < 3) {
    puVar2 = puVar6;
    pcVar1 = pcVar5;
  }
  SVar8.bridgeObject = puVar2;
  SVar8.str = pcVar1;
  Swift::String::hash(param_1,SVar8);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x1005cb988 | FUN_1005cb988 */

void FUN_1005cb988(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1005cb990(param_1,*unaff_x20);
  return;
}



/* Address: 0x1005cb990 | FUN_1005cb990 */

void FUN_1005cb990(__int64 param_1,byte param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  Hasher HVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x726f727265;
  if (param_2 != 5) {
    pcVar1 = (char *)0x6c61636974697263;
  }
  HVar6.unknown = &DAT_e500000000000000;
  if (param_2 != 5) {
    HVar6.unknown = &DAT_e800000000000000;
  }
  pcVar3 = (char *)0x656369746f6e;
  if (param_2 != 3) {
    pcVar3 = (char *)0x676e696e726177;
  }
  puVar2 = &DAT_e600000000000000;
  if (param_2 != 3) {
    puVar2 = &DAT_e700000000000000;
  }
  if (param_2 < 5) {
    HVar6.unknown = puVar2;
    pcVar1 = pcVar3;
  }
  pcVar3 = (char *)0x6775626564;
  if (param_2 != 1) {
    pcVar3 = (char *)0x6f666e69;
  }
  puVar2 = &DAT_e500000000000000;
  if (param_2 != 1) {
    puVar2 = &DAT_e400000000000000;
  }
  pcVar4 = (char *)0x6563617274;
  if (param_2 != 0) {
    pcVar4 = pcVar3;
  }
  puVar5 = &DAT_e500000000000000;
  if (param_2 != 0) {
    puVar5 = puVar2;
  }
  if (param_2 < 3) {
    HVar6.unknown = puVar5;
    pcVar1 = pcVar4;
  }
  SVar7.bridgeObject = HVar6.unknown;
  SVar7.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x1005cba98 | FUN_1005cba98 */

void FUN_1005cba98(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1005ce1bc(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1005cbac4 | FUN_1005cbac4 */

void FUN_1005cbac4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte *unaff_x20;
  
  bVar7 = *unaff_x20;
  uVar1 = 0x726f727265;
  if (bVar7 != 5) {
    uVar1 = 0x6c61636974697263;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar7 != 5) {
    puVar2 = &DAT_e800000000000000;
  }
  uVar4 = 0x656369746f6e;
  if (bVar7 != 3) {
    uVar4 = 0x676e696e726177;
  }
  puVar3 = &DAT_e600000000000000;
  if (bVar7 != 3) {
    puVar3 = &DAT_e700000000000000;
  }
  if (bVar7 < 5) {
    puVar2 = puVar3;
    uVar1 = uVar4;
  }
  uVar4 = 0x6775626564;
  if (bVar7 != 1) {
    uVar4 = 0x6f666e69;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar7 != 1) {
    puVar3 = &DAT_e400000000000000;
  }
  uVar5 = 0x6563617274;
  if (bVar7 != 0) {
    uVar5 = uVar4;
  }
  puVar6 = &DAT_e500000000000000;
  if (bVar7 != 0) {
    puVar6 = puVar3;
  }
  if (bVar7 < 3) {
    puVar2 = puVar6;
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1005cbb8c | FUN_1005cbb8c */

void FUN_1005cbb8c(void)

{
  FUN_1005ce828();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005cbbe8 | FUN_1005cbbe8 */

void FUN_1005cbbe8(void)

{
  FUN_1005ce828();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005cbc34 | FUN_1005cbc34 */

void FUN_1005cbc34(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd41b0;
  FUN_1000f7830(&DAT_100fd41b0,&DAT_100c647f8);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x1005cbc74 | FUN_1005cbc74 */

long FUN_1005cbc74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  pthread_rwlock_t *ppVar7;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  if (DAT_100fd45a8 != -1) {
    _swift_once(&DAT_100fd45a8,FUN_1005ceb54);
  }
  lVar3 = DAT_100fd45b0;
  ppVar7 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45b0 + 0x10) + 0x10);
  iVar5 = _pthread_rwlock_rdlock(ppVar7);
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005cbdb0);
    (*pcVar4)();
  }
  lVar6 = *(long *)(lVar3 + 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  FUN_100011128(lVar6,uVar1);
  iVar5 = _pthread_rwlock_unlock(ppVar7);
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005cbdb4);
    (*pcVar4)();
  }
  if (DAT_100fd45b8 != -1) {
    _swift_once(&DAT_100fd45b8,FUN_1005ce924);
  }
  lVar3 = DAT_100fd45c0;
  ppVar7 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45c0 + 0x10) + 0x10);
  iVar5 = _pthread_rwlock_rdlock(ppVar7);
  if (iVar5 == 0) {
    pcVar4 = *(code **)(lVar3 + 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    _swift_retain(uVar2);
    iVar5 = _pthread_rwlock_unlock(ppVar7);
    if (iVar5 == 0) {
      local_98 = lVar6;
      uStack_90 = uVar1;
      local_88 = param_1;
      uStack_80 = param_2;
      (*pcVar4)(auStack_78,&local_88,&local_98);
      _swift_release(uVar2);
      FUN_100004550(lVar6,uVar1);
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(lVar6 + 0x10) = param_1;
      *(undefined8 *)(lVar6 + 0x18) = param_2;
      FUN_100076508(auStack_78,lVar6 + 0x20);
      return lVar6;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005cbdd4);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1005cbdd0);
  (*pcVar4)();
}



/* Address: 0x1005cbdd4 | FUN_1005cbdd4 */

long FUN_1005cbdd4(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  undefined1 auStack_58 [40];
  
  lVar1 = param_1;
  (*param_3)(auStack_58);
  FUN_1005ce220();
  _swift_allocObject();
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  FUN_100076508(auStack_58,lVar1 + 0x20);
  return lVar1;
}



/* Address: 0x1005cbe38 | FUN_1005cbe38 */

long FUN_1005cbe38(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  pthread_rwlock_t *ppVar6;
  undefined1 auStack_78 [40];
  
  if (DAT_100fd45a8 != -1) {
    _swift_once(&DAT_100fd45a8,FUN_1005ceb54);
  }
  lVar2 = DAT_100fd45b0;
  ppVar6 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45b0 + 0x10) + 0x10);
  iVar4 = _pthread_rwlock_rdlock(ppVar6);
  if (iVar4 == 0) {
    lVar5 = *(long *)(lVar2 + 0x20);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    FUN_100011128(lVar5,uVar1);
    iVar4 = _pthread_rwlock_unlock(ppVar6);
    if (iVar4 == 0) {
      (*param_3)(auStack_78,param_1,param_2,lVar5,uVar1);
      FUN_100004550(lVar5,uVar1);
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x10) = param_1;
      *(undefined8 *)(lVar5 + 0x18) = param_2;
      FUN_100076508(auStack_78,lVar5 + 0x20);
      return lVar5;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cbf34);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cbf30);
  (*pcVar3)();
}



/* Address: 0x1005cbf34 | FUN_1005cbf34 */

long FUN_1005cbf34(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  pthread_rwlock_t *ppVar5;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  lVar2 = DAT_100fd45b8;
  _swift_retain(param_4);
  if (lVar2 != -1) {
    _swift_once(&DAT_100fd45b8,FUN_1005ce924);
  }
  lVar2 = DAT_100fd45c0;
  ppVar5 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45c0 + 0x10) + 0x10);
  iVar4 = _pthread_rwlock_rdlock(ppVar5);
  if (iVar4 == 0) {
    pcVar3 = *(code **)(lVar2 + 0x20);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    _swift_retain(uVar1);
    iVar4 = _pthread_rwlock_unlock(ppVar5);
    if (iVar4 == 0) {
      local_98 = param_3;
      lStack_90 = param_4;
      local_88 = param_1;
      uStack_80 = param_2;
      (*pcVar3)(auStack_78,&local_88,&local_98);
      _swift_release(uVar1);
      FUN_10007d048(auStack_78,local_60);
      (**(code **)(lStack_58 + 0x18))(param_3,param_4,local_60,lStack_58);
      _swift_release();
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(param_4 + 0x10) = param_1;
      *(undefined8 *)(param_4 + 0x18) = param_2;
      FUN_100076508(auStack_78,param_4 + 0x20);
      return param_4;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cc064);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cc060);
  (*pcVar3)();
}



/* Address: 0x1005cc064 | FUN_1005cc064 */

bool FUN_1005cc064(byte param_1,byte param_2)

{
  return param_1 < param_2;
}



/* Address: 0x1005cc074 | FUN_1005cc074 */

bool FUN_1005cc074(byte *param_1,byte *param_2)

{
  return *param_1 < *param_2;
}



/* Address: 0x1005cc088 | FUN_1005cc088 */

bool FUN_1005cc088(byte *param_1,byte *param_2)

{
  return *param_1 <= *param_2;
}



/* Address: 0x1005cc09c | FUN_1005cc09c */

bool FUN_1005cc09c(byte *param_1,byte *param_2)

{
  return *param_2 <= *param_1;
}



/* Address: 0x1005cc0b0 | FUN_1005cc0b0 */

bool FUN_1005cc0b0(byte *param_1,byte *param_2)

{
  return *param_2 < *param_1;
}



/* Address: 0x1005cc0c4 | FUN_1005cc0c4 */

undefined1  [16] FUN_1005cc0c4(byte param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  
  uVar1 = 0x726f727265;
  if (param_1 != 5) {
    uVar1 = 0x6c61636974697263;
  }
  puVar2 = &DAT_e500000000000000;
  if (param_1 != 5) {
    puVar2 = &DAT_e800000000000000;
  }
  uVar4 = 0x656369746f6e;
  if (param_1 != 3) {
    uVar4 = 0x676e696e726177;
  }
  puVar3 = &DAT_e600000000000000;
  if (param_1 != 3) {
    puVar3 = &DAT_e700000000000000;
  }
  if (param_1 < 5) {
    puVar2 = puVar3;
    uVar1 = uVar4;
  }
  uVar4 = 0x6775626564;
  if (param_1 != 1) {
    uVar4 = 0x6f666e69;
  }
  puVar3 = &DAT_e500000000000000;
  if (param_1 != 1) {
    puVar3 = &DAT_e400000000000000;
  }
  uVar5 = 0x6563617274;
  if (param_1 != 0) {
    uVar5 = uVar4;
  }
  puVar6 = &DAT_e500000000000000;
  if (param_1 != 0) {
    puVar6 = puVar3;
  }
  if (param_1 < 3) {
    puVar2 = puVar6;
    uVar1 = uVar5;
  }
  auVar7._8_8_ = puVar2;
  auVar7._0_8_ = uVar1;
  return auVar7;
}



/* Address: 0x1005cc188 | FUN_1005cc188 */

void FUN_1005cc188(char *param_1,void *param_2)

{
  String SVar1;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar1 = Swift::String::lowercased(SVar1);
  _swift_bridgeObjectRelease(param_2);
  FUN_1005ce1bc(SVar1.str,SVar1.bridgeObject);
  return;
}



/* Address: 0x1005cc1c8 | FUN_1005cc1c8 */

undefined1  [16] FUN_1005cc1c8(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar7 = *unaff_x20;
  uVar1 = 0x726f727265;
  if (bVar7 != 5) {
    uVar1 = 0x6c61636974697263;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar7 != 5) {
    puVar2 = &DAT_e800000000000000;
  }
  uVar4 = 0x656369746f6e;
  if (bVar7 != 3) {
    uVar4 = 0x676e696e726177;
  }
  puVar3 = &DAT_e600000000000000;
  if (bVar7 != 3) {
    puVar3 = &DAT_e700000000000000;
  }
  if (bVar7 < 5) {
    puVar2 = puVar3;
    uVar1 = uVar4;
  }
  uVar4 = 0x6775626564;
  if (bVar7 != 1) {
    uVar4 = 0x6f666e69;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar7 != 1) {
    puVar3 = &DAT_e400000000000000;
  }
  uVar5 = 0x6563617274;
  if (bVar7 != 0) {
    uVar5 = uVar4;
  }
  puVar6 = &DAT_e500000000000000;
  if (bVar7 != 0) {
    puVar6 = puVar3;
  }
  if (bVar7 < 3) {
    puVar2 = puVar6;
    uVar1 = uVar5;
  }
  auVar8._8_8_ = puVar2;
  auVar8._0_8_ = uVar1;
  return auVar8;
}



/* Address: 0x1005cc28c | FUN_1005cc28c */

void FUN_1005cc28c(undefined1 *param_1,char *param_2,void *param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = param_3;
  SVar2.str = param_2;
  SVar2 = Swift::String::lowercased(SVar2);
  pcVar1 = SVar2.str;
  _swift_bridgeObjectRelease(param_3);
  FUN_1005ce1bc(pcVar1,SVar2.bridgeObject);
  *param_1 = (char)pcVar1;
  return;
}



/* Address: 0x1005cc2d8 | thunk_FUN_1005cdd50 */

void thunk_FUN_1005cdd50(void)

{
  FUN_1005cdd50();
  return;
}



/* Address: 0x1005cc2dc | FUN_1005cc2dc */

uint FUN_1005cc2dc(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      do {
        lVar2 = lVar2 + -1;
        FUN_1005bee50(param_1,auStack_60);
        FUN_1005bee50(param_2,auStack_90);
        puVar1 = auStack_60;
        FUN_1005cdd50(puVar1,auStack_90);
        uVar3 = (uint)puVar1;
        FUN_1005bee8c(auStack_90);
        FUN_1005bee8c(auStack_60);
        if (((ulong)puVar1 & 1) == 0) break;
        param_2 = param_2 + 0x30;
        param_1 = param_1 + 0x30;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Address: 0x1005cc390 | FUN_1005cc390 */

undefined8 FUN_1005cc390(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_110 [48];
  long local_e0;
  ulong uStack_d8;
  long local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  long local_a0;
  ulong uStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar7 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar9 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar9 = ~(-1L << (uVar7 & 0x3f));
      }
      uVar9 = uVar9 & *(ulong *)(param_1 + 0x40);
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      lVar3 = 0;
      do {
        if (uVar9 == 0) {
          do {
            lVar8 = lVar3 + 1;
            if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cc59c);
              (*pcVar2)();
            }
            if ((long)(uVar7 + 0x3f >> 6) <= lVar8) goto LAB_1005cc53c;
            uVar9 = ((ulong *)(param_1 + 0x40))[lVar8];
            lVar3 = lVar3 + 1;
          } while (uVar9 == 0);
          uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
        }
        else {
          uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
          lVar8 = lVar3;
        }
        uVar6 = LZCOUNT(uVar5) | lVar8 << 6;
        plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10);
        local_e0 = *plVar1;
        uVar5 = plVar1[1];
        uStack_d8 = uVar5;
        FUN_1005bee50(*(long *)(param_1 + 0x38) + uVar6 * 0x30,&local_d0);
        uVar6 = uStack_d8;
        lVar3 = local_e0;
        uStack_98 = CONCAT71(uStack_c7,uStack_c8);
        lStack_90 = CONCAT71(uStack_bf,uStack_c0);
        local_a0 = local_d0;
        uStack_88 = uStack_b8;
        uStack_7f = uStack_af;
        local_87 = local_b7;
        uStack_80 = uStack_b0;
        _swift_bridgeObjectRetain(uVar5);
        if (uVar6 == 0) {
LAB_1005cc53c:
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          return 1;
        }
        uStack_d8 = uStack_98;
        local_e0 = local_a0;
        uStack_c8 = uStack_88;
        local_d0 = lStack_90;
        uStack_bf = (undefined7)uStack_7f;
        uStack_b8 = (undefined1)((ulong)uStack_7f >> 0x38);
        uStack_c7 = local_87;
        uStack_c0 = uStack_80;
        uVar5 = uVar6;
        thunk_FUN_1005be370(lVar3);
        _swift_bridgeObjectRelease(uVar6);
        if ((uVar5 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          FUN_1005bee8c(&local_e0);
          goto LAB_1005cc574;
        }
        FUN_1005bee50(*(long *)(param_2 + 0x38) + lVar3 * 0x30,auStack_110);
        uVar5 = 0;
        FUN_1005cdd50(auStack_110,&local_e0);
        FUN_1005bee8c(auStack_110);
        FUN_1005bee8c(&local_e0);
        lVar3 = lVar8;
      } while ((uVar5 & 1) != 0);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease_n(param_1,2);
    }
LAB_1005cc574:
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x1005cc59c | FUN_1005cc59c */

void FUN_1005cc59c(undefined8 *param_1)

{
  (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init((undefined *)*param_1);
  return;
}



/* Address: 0x1005cc5b0 | FUN_1005cc5b0 */

undefined1  [16]
FUN_1005cc5b0(__uint8 param_1,ulong param_2,Index param_3,UTF8View param_4,ulong param_5)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index position;
  UnsafeBufferPointer<__int8> UVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined *local_70;
  ulong uStack_68;
  
  param_2 = param_2 >> 0xe;
  uVar7 = (ulong)param_3.cmsgPointer.unknown >> 0xe;
  if (uVar7 != param_2) {
    uVar6 = (uint)((ulong)param_4.unknown >> 0x3b) & 1;
    if ((param_5 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    uVar1 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar1 = param_5 >> 0x38 & 0xf;
    }
    do {
      if (((ulong)param_3.cmsgPointer.unknown & 0xc) == 4L << uVar6) {
        FUN_1000740a8(param_3.cmsgPointer.unknown,param_4.unknown,param_5);
      }
      if ((ulong)param_3.cmsgPointer.unknown < (undefined *)0x4000) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cc75c);
        (*pcVar2)();
      }
      if ((param_5 >> 0x3c & 1) == 0) {
        param_3.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)param_3.cmsgPointer.unknown & 0xffffffffffff0000) - 0xfffc);
      }
      else {
        if (uVar1 < (ulong)param_3.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cc764);
          (*pcVar2)();
        }
        param_3 = Swift::String::UTF8View::_foreignIndex(param_3,param_4);
      }
      position.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
      if (((ulong)param_3.cmsgPointer.unknown & 0xc) == 4L << uVar6) {
        FUN_1000740a8(param_3.cmsgPointer.unknown,param_4.unknown,param_5);
      }
      if (((ulong)position.cmsgPointer.unknown >> 0xe < param_2) ||
         (uVar7 <= (ulong)position.cmsgPointer.unknown >> 0xe)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cc760);
        (*pcVar2)();
      }
      if ((param_5 >> 0x3c & 1) == 0) {
        if ((param_5 >> 0x3d & 1) == 0) {
          UVar4.unknown = (undefined *)((param_5 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_4.unknown >> 0x3c & 1) == 0) {
            UVar4 = Swift::_StringObject::get_sharedUTF8(param_4.unknown);
          }
          _Var3 = UVar4.unknown[(ulong)position.cmsgPointer.unknown >> 0x10];
        }
        else {
          local_70 = param_4.unknown;
          uStack_68 = param_5 & 0xffffffffffffff;
          _Var3 = *(__uint8 *)((long)&local_70 + ((ulong)position.cmsgPointer.unknown >> 0x10));
        }
      }
      else {
        _Var3 = Swift::String::UTF8View::_foreignSubscript(position,param_4);
      }
      if (_Var3 == param_1) {
        uVar5 = 0;
        goto LAB_1005cc734;
      }
    } while (param_2 != (ulong)param_3.cmsgPointer.unknown >> 0xe);
  }
  param_3.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x0;
  uVar5 = 1;
LAB_1005cc734:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = param_3.cmsgPointer.unknown;
  return auVar8;
}



/* Address: 0x1005cc764 | FUN_1005cc764 */

void FUN_1005cc764(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Address: 0x1005cc770 | FUN_1005cc770 */

void FUN_1005cc770(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Address: 0x1005cc780 | FUN_1005cc780 */

String FUN_1005cc780(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  Dictionary DVar4;
  undefined8 uVar5;
  __RawDictionaryStorage *p_Var6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  __RawDictionaryStorage *p_Var13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  String SVar17;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined *local_98;
  __RawDictionaryStorage *local_90;
  void *pvStack_88;
  byte local_68;
  
  FUN_1005bee50();
  if (local_68 < 2) {
    if (local_68 == 0) {
      SVar17.bridgeObject = pvStack_88;
      SVar17.str = (char *)local_90;
    }
    else {
      FUN_100076508(&local_90,auStack_c8);
      FUN_100004640(auStack_c8,local_b0);
      SVar17 = Swift::CustomStringConvertible::get_description();
      FUN_100004594(auStack_c8);
    }
  }
  else {
    if (local_68 == 2) {
      this = (_DictionaryStorage *)&DAT_100fd43c0;
      FUN_1000f7830(&DAT_100fd43c0,&DAT_100c64c50);
      DVar4.unknown = local_90;
      Swift::_DictionaryStorage::_copy(this,local_90);
      lVar14 = 0;
      uVar10 = 1L << ((ulong)(byte)local_90[0x20] & 0x3f);
      uVar15 = 0xffffffffffffffff;
      if (((byte)local_90[0x20] & 0x3f) < 6) {
        uVar15 = ~(-1L << (uVar10 & 0x3f));
      }
      uVar15 = uVar15 & *(ulong *)(local_90 + 0x40);
      if (uVar15 == 0) goto LAB_1005cc854;
      do {
        uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar15 = uVar15 - 1 & uVar15;
        while( true ) {
          uVar8 = LZCOUNT(uVar8);
          uVar16 = uVar8 | lVar14 << 6;
          lVar11 = uVar16 * 0x10;
          lVar9 = *(long *)(local_90 + 0x30);
          puVar7 = auStack_c8;
          FUN_1005bee50(*(long *)(local_90 + 0x38) + uVar16 * 0x30);
          uVar1 = *(undefined8 *)(lVar9 + lVar11);
          uVar2 = ((undefined8 *)(lVar9 + lVar11))[1];
          uVar5 = uVar2;
          _swift_bridgeObjectRetain();
          FUN_1005cc780();
          FUN_1005bee8c(auStack_c8);
          uVar16 = (uVar8 & 0xffffffffffffffc0 | lVar14 << 6) >> 3;
          *(ulong *)(DVar4.unknown + uVar16 + 0x40) =
               *(ulong *)(DVar4.unknown + uVar16 + 0x40) | 1L << (uVar8 & 0x3f);
          lVar9 = *(long *)(DVar4.unknown + 0x30);
          *(undefined8 *)(lVar9 + lVar11) = uVar1;
          ((undefined8 *)(lVar9 + lVar11))[1] = uVar2;
          lVar9 = *(long *)(DVar4.unknown + 0x38);
          *(undefined8 *)(lVar9 + lVar11) = uVar5;
          ((undefined8 *)(lVar9 + lVar11))[1] = puVar7;
          if (SCARRY8(*(long *)(DVar4.unknown + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ccaa4);
            (*pcVar3)();
          }
          *(long *)(DVar4.unknown + 0x10) = *(long *)(DVar4.unknown + 0x10) + 1;
          if (uVar15 != 0) break;
LAB_1005cc854:
          do {
            lVar9 = lVar14 + 1;
            if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ccaa0);
              (*pcVar3)();
            }
            if ((long)(uVar10 + 0x3f >> 6) <= lVar9) {
              _swift_bridgeObjectRelease(local_90);
              SVar17 = Swift::Dictionary::get_description(DVar4);
              _swift_release(DVar4.unknown);
              return SVar17;
            }
            uVar15 = *(ulong *)(local_90 + 0x40 + lVar9 * 8);
            lVar14 = lVar14 + 1;
          } while (uVar15 == 0);
          uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar15 = uVar15 - 1 & uVar15;
          lVar14 = lVar9;
        }
      } while( true );
    }
    lVar14 = *(long *)(local_90 + 0x10);
    if (lVar14 == 0) {
      _swift_bridgeObjectRelease(local_90);
      puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1005bdc50(0,lVar14,0);
      p_Var13 = local_90 + 0x20;
      do {
        puVar12 = local_98;
        puVar7 = auStack_c8;
        p_Var6 = p_Var13;
        FUN_1005bee50();
        FUN_1005cc780();
        FUN_1005bee8c(auStack_c8);
        uVar15 = *(ulong *)(puVar12 + 0x10);
        local_98 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar15) {
          FUN_1005bdc50(1 < *(ulong *)(puVar12 + 0x18),uVar15 + 1,1);
        }
        puVar12 = local_98;
        *(ulong *)(local_98 + 0x10) = uVar15 + 1;
        *(__RawDictionaryStorage **)(local_98 + uVar15 * 0x10 + 0x20) = p_Var6;
        *(undefined1 **)(local_98 + uVar15 * 0x10 + 0x28) = puVar7;
        p_Var13 = p_Var13 + 0x30;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      _swift_bridgeObjectRelease(local_90);
    }
    SVar17 = Swift::Array<undefined>::get_description
                       (puVar12,PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease(puVar12);
  }
  return SVar17;
}



/* Address: 0x1005ccaa4 | thunk_FUN_1005cc780 */

void thunk_FUN_1005cc780(void)

{
  FUN_1005cc780();
  return;
}



/* Address: 0x1005ccaa8 | FUN_1005ccaa8 */

/* WARNING: Removing unreachable block (ram,0x0001005ccb44) */

void FUN_1005ccaa8(undefined8 *param_1,long param_2)

{
  _DictionaryStorage *this;
  undefined *capacity;
  undefined *local_38;
  
  capacity = *(undefined **)(param_2 + 0x10);
  local_38 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fd4188;
    FUN_1000f7830(&DAT_100fd4188,&DAT_100c647c8);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    local_38 = capacity;
  }
  FUN_1005cd6c4(param_2,1,&local_38);
  *param_1 = local_38;
  *(undefined1 *)(param_1 + 5) = 2;
  return;
}



/* Address: 0x1005ccb64 | FUN_1005ccb64 */

void FUN_1005ccb64(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 5) = 3;
  return;
}



/* Address: 0x1005ccb74 | FUN_1005ccb74 */

void FUN_1005ccb74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  TaskLocal *pTVar7;
  long *plVar8;
  pthread_rwlock_t *ppVar9;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68 [5];
  
  if (DAT_100fd45a8 != -1) {
    _swift_once(&DAT_100fd45a8,FUN_1005ceb54);
  }
  lVar3 = DAT_100fd45b0;
  ppVar9 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45b0 + 0x10) + 0x10);
  iVar5 = _pthread_rwlock_rdlock(ppVar9);
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005cccd8);
    (*pcVar4)();
  }
  lVar6 = *(long *)(lVar3 + 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  FUN_100011128(lVar6,uVar1);
  iVar5 = _pthread_rwlock_unlock(ppVar9);
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005cccdc);
    (*pcVar4)();
  }
  if (DAT_100fd45b8 != -1) {
    _swift_once(&DAT_100fd45b8,FUN_1005ce924);
  }
  lVar3 = DAT_100fd45c0;
  ppVar9 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45c0 + 0x10) + 0x10);
  iVar5 = _pthread_rwlock_rdlock(ppVar9);
  if (iVar5 == 0) {
    pcVar4 = *(code **)(lVar3 + 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    _swift_retain(uVar2);
    iVar5 = _pthread_rwlock_unlock(ppVar9);
    if (iVar5 == 0) {
      local_78 = 0;
      uStack_70 = 0xe000000000000000;
      local_88 = lVar6;
      uStack_80 = uVar1;
      (*pcVar4)(local_68,&local_78,&local_88);
      _swift_release(uVar2);
      FUN_100004550(lVar6,uVar1);
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0xe000000000000000;
      FUN_100076508(local_68,lVar6 + 0x20);
      pTVar7 = (TaskLocal *)&DAT_100fd45a0;
      local_68[0] = lVar6;
      FUN_1000f7830(&DAT_100fd45a0,&DAT_100c65158);
      _swift_allocObject();
      plVar8 = local_68;
      Swift::TaskLocal::_init(pTVar7);
      DAT_101057ba8 = plVar8;
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005cccfc);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1005cccf8);
  (*pcVar4)();
}



/* Address: 0x1005cccfc | FUN_1005cccfc */

undefined8 * FUN_1005cccfc(void)

{
  if (DAT_100fd4388 != -1) {
    _swift_once(&DAT_100fd4388,FUN_1005ccb74);
  }
  return &DAT_101057ba8;
}



/* Address: 0x1005ccd3c | FUN_1005ccd3c */

void FUN_1005ccd3c(void)

{
  if (DAT_100fd4388 != -1) {
    _swift_once(&DAT_100fd4388,FUN_1005ccb74);
  }
  _swift_retain(DAT_101057ba8);
  return;
}



/* Address: 0x1005ccd7c | FUN_1005ccd7c */

void FUN_1005ccd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = *(long *)(param_5 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  _swift_task_switch(FUN_1005ccde0,0,0);
  return;
}



/* Address: 0x1005ccde0 | FUN_1005ccde0 */

void FUN_1005ccde0(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x18);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005cce54;
                    /* WARNING: Could not recover jumptable at 0x0001005cce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,*(undefined8 *)(unaff_x22 + 0x10),0,0,*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x1005cce54 | FUN_1005cce54 */

void FUN_1005cce54(void)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x48));
  uVar3 = *(undefined8 *)(lVar5 + 0x40);
  if (unaff_x20 == 0) {
    _swift_task_dealloc(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(lVar5 + 0x30);
    lVar1 = *(long *)(lVar5 + 0x38);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    _swift_allocError(uVar4,uVar2,0,0);
    (**(code **)(lVar1 + 0x20))(uVar2,uVar3,uVar4);
    _swift_task_dealloc(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005ccef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005ccef4 | FUN_1005ccef4 */

void FUN_1005ccef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  TaskLocal *pTVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pTVar2 = (TaskLocal *)(ulong)*(uint *)(PTR__withValue_100eaf040 + 4);
    _swift_task_alloc();
    *(TaskLocal **)(unaff_x22 + 0x18) = pTVar2;
    *(long *)pTVar2 = unaff_x22;
    *(code **)(pTVar2 + 8) = thunk_FUN_1005cd444;
    Swift::TaskLocal::_withValue
              (pTVar2,unaff_x20,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1005cd0e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1005cd04c | FUN_1005cd04c */

void FUN_1005cd04c(code *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_1)(&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    _swift_allocError(param_4,param_5,0,0);
    (**(code **)(lVar2 + 0x20))
              (param_5,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_4);
  }
  return;
}



/* Address: 0x1005cd0e0 | FUN_1005cd0e0 */

void FUN_1005cd0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  UnownedSerialExecutor UVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_10;
  *(long **)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_9;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(long *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *(long *)(*unaff_x20 +
                   *(long *)PTR___class_metadata_base_offset_for_Swift_TaskLocal_100eaf050);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  if (param_5 == 0) {
    UVar2.unknown = (undefined *)0x0;
    param_6 = 0;
  }
  else {
    _swift_getObjectType(param_5);
    UVar2 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x80) = UVar2.unknown;
  *(undefined8 *)(unaff_x22 + 0x88) = param_6;
  _swift_task_switch(FUN_1005cd1a8,UVar2.unknown);
  return;
}



/* Address: 0x1005cd1a8 | FUN_1005cd1a8 */

void FUN_1005cd1a8(void)

{
  long *plVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x18),
             *(undefined8 *)(unaff_x22 + 0x68));
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005cd240;
  FUN_1005cd2ec(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x78),
                *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),
                *(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
                *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}


