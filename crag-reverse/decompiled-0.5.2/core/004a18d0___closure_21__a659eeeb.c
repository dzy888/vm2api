// 004a18d0 {closure#21}

/* <craggemini_core[66f3c71560d70857]::Config>::validate::{closure#21} */

bool __rustcall
<craggemini_core[66f3c71560d70857]::Config>::validate::_closure_21_
          (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_4 - 0x20U < 0x61) {
    lVar3 = 0;
    while( true ) {
      bVar1 = *(byte *)(param_3 + lVar3);
      if ((((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) && (bVar1 != 0x5f)
          ) && (bVar1 != 0x2d)) break;
      lVar3 = lVar3 + 1;
      if (param_4 == lVar3) {
        if (param_4 == param_2) {
          iVar2 = (*(code *)PTR_bcmp_00799020)(param_4,param_4);
          return iVar2 == 0;
        }
        return false;
      }
    }
  }
  return true;
}


