// 00532310 check_at

/* <craggemini_core[66f3c71560d70857]::license::GrantMetadata>::check_at */

byte __rustcall
<craggemini_core[66f3c71560d70857]::license::GrantMetadata>::check_at(int *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  
  if (*param_1 == 1) {
    if (param_2 < *(longlong *)(param_1 + 2)) {
      return 2;
    }
    if (param_2 < *(longlong *)(param_1 + 4)) {
      return 2;
    }
    if (*(longlong *)(param_1 + 6) <= param_2) {
      return 1;
    }
  }
  bVar3 = 0xff;
  if ((*(longlong *)(param_1 + 0x14) != -1) && ((char)param_1[0x1a] != '\0')) {
    bVar3 = 1;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar4 = *(longlong *)(param_1 + 0x18) * 0x10 - 0x10;
      puVar5 = (uint *)(*(longlong *)(param_1 + 0x16) + 0x18);
      do {
        if (param_2 < *(longlong *)(puVar5 + -6)) {
          uVar6 = puVar5[-4];
          if (uVar4 == 0) goto LAB_005323d0;
          uVar4 = uVar4 >> 4;
          goto LAB_0053239f;
        }
        uVar4 = uVar4 - 0x10;
        puVar5 = puVar5 + 4;
      } while (uVar4 != 0xfffffffffffffff0);
    }
  }
  return bVar3;
LAB_0053239f:
  if (param_2 < *(longlong *)(puVar5 + -2)) {
    uVar2 = 0;
    if ((uVar6 != 0) && (uVar1 = *puVar5, uVar1 != 0)) {
      bVar7 = CARRY4(uVar6,uVar1);
      uVar6 = uVar6 + uVar1;
      if (bVar7) {
        uVar6 = 0xffffffff;
      }
      if (0x7ffffffe < uVar6) {
        uVar6 = 0x7fffffff;
      }
      goto LAB_00532390;
    }
  }
  else {
LAB_00532390:
    uVar2 = uVar6;
  }
  uVar6 = uVar2;
  puVar5 = puVar5 + 4;
  uVar4 = uVar4 - 1;
  if (uVar4 == 0) {
LAB_005323d0:
    if (param_1[0x1b] == 0) {
      return 4;
    }
    return (uVar6 < (uint)param_1[0x1b] && uVar6 != 0) - 1U | 4;
  }
  goto LAB_0053239f;
}


