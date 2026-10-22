/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100beeb28 | FUN_100beeb28 */

void FUN_100beeb28(void)

{
  FUN_100beebc0();
  FUN_100beeeec();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100beeb2c | thunk_FUN_100bec780 */

void thunk_FUN_100bec780(ulong param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  bVar4 = (param_1 & 1) == 0;
  puVar6 = &DAT_65756c6176;
  if (bVar4) {
    puVar6 = &DAT_65707974;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar4) {
    puVar1 = &DAT_e400000000000000;
  }
  bVar4 = (param_2 & 1) == 0;
  puVar2 = &DAT_65756c6176;
  if (bVar4) {
    puVar2 = &DAT_65707974;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar4) {
    puVar3 = &DAT_e400000000000000;
  }
  if (puVar6 == puVar2 && puVar1 == puVar3) {
    uVar5 = 1;
  }
  else {
    FUN_100beeb44();
    uVar5 = (uint)puVar6;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  FUN_100b56e60(uVar5 & 1);
  return;
}



/* Address: 0x100beeb30 | thunk_FUN_100bed29c */

void thunk_FUN_100bed29c(void)

{
  FUN_100bed29c();
  return;
}



/* Address: 0x100beeb34 | thunk_FUN_100bed4dc */

void thunk_FUN_100bed4dc(void)

{
  thunk_FUN_100bed4dc();
  return;
}



/* Address: 0x100beeb38 | FUN_100beeb38 */

void FUN_100beeb38(void)

{
  FUN_100bed2e8();
  return;
}



/* Address: 0x100beeb3c | thunk_FUN_100bed128 */

void thunk_FUN_100bed128(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  
  bVar3 = (param_2 & 1) == 0;
  puVar1 = &DAT_65756c6176;
  if (bVar3) {
    puVar1 = &DAT_65707974;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3) {
    puVar2 = &DAT_e400000000000000;
  }
  FUN_100beeb94(param_1,puVar1);
  FUN_100beeb9c(puVar2);
  return;
}



/* Address: 0x100beeb40 | FUN_100beeb40 */

void FUN_100beeb40(uint param_1)

{
  FUN_100bed2e8(0,param_1 & 1);
  return;
}



/* Address: 0x100beeb44 | FUN_100beeb44 */

void FUN_100beeb44(_StringGuts param_1,undefined8 param_2,_StringComparisonResult param_3)

{
  _StringGuts unaff_x19;
  
  Swift::_stringCompareWithSmolCheck(param_1,unaff_x19,param_3);
  return;
}



/* Address: 0x100beeb54 | FUN_100beeb54 */

void FUN_100beeb54(undefined8 param_1,char *param_2)

{
  void *unaff_x19;
  String SVar1;
  
  SVar1.bridgeObject = unaff_x19;
  SVar1.str = param_2;
  Swift::String::hash((Hasher)&stack0x00000008,SVar1);
  return;
}



/* Address: 0x100beeb60 | FUN_100beeb60 */

void FUN_100beeb60(__int64 param_1)

{
  Swift::Hasher::init(param_1);
  return;
}



/* Address: 0x100beeb6c | FUN_100beeb6c */

void FUN_100beeb6c(_StringGuts param_1,undefined8 param_2,_StringComparisonResult param_3)

{
  _StringGuts unaff_x20;
  
  Swift::_stringCompareWithSmolCheck(param_1,unaff_x20,param_3);
  return;
}



/* Address: 0x100beeb7c | FUN_100beeb7c */

undefined8 FUN_100beeb7c(void)

{
  return 1;
}



/* Address: 0x100beeb94 | FUN_100beeb94 */

void FUN_100beeb94(Hasher param_1,char *param_2)

{
  void *unaff_x19;
  String SVar1;
  
  SVar1.bridgeObject = unaff_x19;
  SVar1.str = param_2;
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x100beeb9c | FUN_100beeb9c */

void FUN_100beeb9c(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100beeba4 | FUN_100beeba4 */

void FUN_100beeba4(void)

{
  return;
}



/* Address: 0x100beebc0 | FUN_100beebc0 */

void FUN_100beebc0(void)

{
  Swift::Hasher::init(0);
  return;
}



/* Address: 0x100beebcc | FUN_100beebcc */

void FUN_100beebcc(__int64 param_1)

{
  Swift::Hasher::init(param_1);
  return;
}



/* Address: 0x100beebd4 | FUN_100beebd4 */

void FUN_100beebd4(void)

{
  return;
}



/* Address: 0x100beebe4 | FUN_100beebe4 */

void FUN_100beebe4(void)

{
  return;
}



/* Address: 0x100beebf0 | FUN_100beebf0 */

void FUN_100beebf0(void)

{
  return;
}



/* Address: 0x100beec04 | FUN_100beec04 */

void FUN_100beec04(void)

{
  return;
}



/* Address: 0x100beec18 | FUN_100beec18 */

void FUN_100beec18(void)

{
  return;
}



/* Address: 0x100beec2c | FUN_100beec2c */

void FUN_100beec2c(ulong param_1,char *param_2,undefined8 param_3,char *param_4,void *param_5)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = (void *)(param_1 | 0x8000000000000000);
  SVar1.str = param_2;
  SVar2.bridgeObject = param_5;
  SVar2.str = param_4;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100beec38 | FUN_100beec38 */

void FUN_100beec38(void)

{
  Swift::__print_unlocked(&stack0x00000008,&stack0x00000010);
  return;
}



/* Address: 0x100beec50 | FUN_100beec50 */

undefined8 FUN_100beec50(void)

{
  return 1;
}



/* Address: 0x100beec5c | FUN_100beec5c */

void FUN_100beec5c(void)

{
  return;
}



/* Address: 0x100beec78 | FUN_100beec78 */

void FUN_100beec78(void)

{
  return;
}



/* Address: 0x100beec94 | FUN_100beec94 */

void FUN_100beec94(void)

{
  return;
}



/* Address: 0x100beecb0 | FUN_100beecb0 */

void FUN_100beecb0(void)

{
  return;
}



/* Address: 0x100beeccc | FUN_100beeccc */

undefined8 FUN_100beeccc(void)

{
  return 0x7475626972747461;
}



/* Address: 0x100beece8 | FUN_100beece8 */

void FUN_100beece8(void)

{
  return;
}



/* Address: 0x100beed04 | FUN_100beed04 */

undefined8 FUN_100beed04(void)

{
  return 0x6172746b63617473;
}



/* Address: 0x100beed20 | FUN_100beed20 */

void FUN_100beed20(void)

{
  FUN_100b84df8();
  return;
}



/* Address: 0x100beed28 | FUN_100beed28 */

void FUN_100beed28(void)

{
  return;
}



/* Address: 0x100beed44 | FUN_100beed44 */

void FUN_100beed44(void)

{
  FUN_100b84df8();
  return;
}



/* Address: 0x100beed4c | FUN_100beed4c */

void FUN_100beed4c(char *param_1,undefined8 param_2,char *param_3,void *param_4)

{
  void *unaff_x22;
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = unaff_x22;
  SVar1.str = param_1;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100beed54 | FUN_100beed54 */

undefined8 FUN_100beed54(void)

{
  return 0x5f6567616d69;
}



/* Address: 0x100beed64 | FUN_100beed64 */

void FUN_100beed64(void)

{
  return;
}



/* Address: 0x100beed74 | FUN_100beed74 */

void FUN_100beed74(void)

{
  return;
}



/* Address: 0x100beed84 | FUN_100beed84 */

void FUN_100beed84(void)

{
  return;
}



/* Address: 0x100beed94 | FUN_100beed94 */

undefined1 * FUN_100beed94(void)

{
  return &DAT_65707974;
}



/* Address: 0x100beeda4 | FUN_100beeda4 */

void FUN_100beeda4(void)

{
  return;
}



/* Address: 0x100beedb4 | FUN_100beedb4 */

void FUN_100beedb4(void)

{
  return;
}



/* Address: 0x100beedc4 | FUN_100beedc4 */

void FUN_100beedc4(void)

{
  return;
}



/* Address: 0x100beedd4 | FUN_100beedd4 */

void FUN_100beedd4(void)

{
  return;
}



/* Address: 0x100beede4 | FUN_100beede4 */

void FUN_100beede4(void)

{
  return;
}



/* Address: 0x100beedfc | FUN_100beedfc */

void FUN_100beedfc(void)

{
  return;
}



/* Address: 0x100beee14 | FUN_100beee14 */

undefined8 FUN_100beee14(void)

{
  return 0x64695f6e617073;
}



/* Address: 0x100beee2c | FUN_100beee2c */

undefined8 FUN_100beee2c(void)

{
  return 0x64695f6563617274;
}



/* Address: 0x100beee44 | FUN_100beee44 */

void FUN_100beee44(void)

{
  return;
}



/* Address: 0x100beee5c | FUN_100beee5c */

undefined8 FUN_100beee5c(void)

{
  return 0x64656873617263;
}



/* Address: 0x100beee74 | FUN_100beee74 */

void FUN_100beee74(void)

{
  return;
}



/* Address: 0x100beee8c | FUN_100beee8c */

void FUN_100beee8c(void)

{
  return;
}



/* Address: 0x100beeea4 | FUN_100beeea4 */

void FUN_100beeea4(void)

{
  return;
}



/* Address: 0x100beeebc | FUN_100beeebc */

void FUN_100beeebc(void)

{
  return;
}



/* Address: 0x100beeed4 | FUN_100beeed4 */

void FUN_100beeed4(undefined8 param_1,Hasher param_2)

{
  ulong unaff_x19;
  
  Swift::Hasher::_combine(unaff_x19 & 0xff,param_2);
  return;
}



/* Address: 0x100beeee0 | FUN_100beeee0 */

void FUN_100beeee0(ulong param_1,char *param_2,undefined8 param_3,char *param_4,void *param_5)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = (void *)(param_1 | 0x8000000000000000);
  SVar1.str = param_2;
  SVar2.bridgeObject = param_5;
  SVar2.str = param_4;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100beeeec | FUN_100beeeec */

void FUN_100beeeec(undefined8 param_1,Hasher param_2)

{
  __uint64 unaff_x19;
  
  Swift::Hasher::_combine(unaff_x19,param_2);
  return;
}



/* Address: 0x100beeef8 | FUN_100beeef8 */

void FUN_100beeef8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100beef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&stack0x00000008);
  return;
}



/* Address: 0x100beef04 | FUN_100beef04 */

void FUN_100beef04(void)

{
  return;
}



/* Address: 0x100beef18 | FUN_100beef18 */

undefined8 FUN_100beef18(void)

{
  return 1;
}



/* Address: 0x100beef24 | FUN_100beef24 */

void FUN_100beef24(void)

{
  return;
}



/* Address: 0x100beef38 | FUN_100beef38 */

void FUN_100beef38(void)

{
  return;
}



/* Address: 0x100beef4c | FUN_100beef4c */

void FUN_100beef4c(void)

{
  return;
}


