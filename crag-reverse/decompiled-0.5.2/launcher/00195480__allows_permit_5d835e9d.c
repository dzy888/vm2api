// 00195480 allows_permit

/* <craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement>::allows_permit */

undefined8 __rustcall
<craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement>::allows_permit
          (longlong param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x60) == 0 || param_2 <= *(uint *)(param_1 + 0x60)) &&
     (lVar1 = *(longlong *)(param_1 + 0x40), lVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      if (((*(uint *)(lVar2 + 0x18 + lVar4) == param_2) &&
          (*(longlong *)(lVar2 + 0x10 + lVar4) == param_4)) &&
         (iVar3 = (*(code *)PTR_bcmp_00219d38)(), iVar3 == 0)) {
        return 1;
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar1 * 0x20 != lVar4);
  }
  return 0;
}


