// 00524170 can_auto_recover

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::can_auto_recover */

bool __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::can_auto_recover
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  (*(code *)PTR_now_00799478)();
  iVar5 = (int)local_2c >> 0xd;
  iVar4 = iVar5 + -1;
  iVar2 = 0;
  if (iVar5 < 1) {
    iVar2 = (1U - iVar5) / 400 + 1;
    iVar4 = iVar4 + iVar2 * 400;
    iVar2 = iVar2 * -0x23ab1;
  }
  uVar3 = (ulonglong)local_24 / 1000000 +
          ((longlong)
           (int)((((local_2c >> 4 & 0x1ff) + iVar2) - iVar4 / 100) + (iVar4 * 0x5b5 >> 2) +
                 (iVar4 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)local_28) * 1000;
  uVar6 = 0;
  if (0 < (longlong)uVar3) {
    uVar6 = uVar3;
  }
  lVar1 = find(param_1,param_2,param_3);
  bVar7 = true;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1d8) != -1)) {
    if (*(char *)(lVar1 + 0x214) == '\0') {
      uVar3 = 0;
      if (*(ulonglong *)(lVar1 + 0x208) <= uVar6) {
        uVar3 = uVar6 - *(ulonglong *)(lVar1 + 0x208);
      }
      if (uVar3 < 0x493e1) {
        bVar7 = *(uint *)(lVar1 + 0x210) < 3;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}


