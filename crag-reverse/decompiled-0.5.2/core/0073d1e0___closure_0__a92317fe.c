// 0073d1e0 {closure#0}

/* std[6c98fd8553dbae28]::sys::fs::hard_link::{closure#0}::{closure#0} */

ulonglong __rustcall
std[6c98fd8553dbae28]::sys::fs::hard_link::{closure#0}::_closure_0_
          (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  iVar1 = (*(code *)PTR_linkat_0079ad00)(param_2,0xffffff9c,0);
  if (iVar1 == -1) {
    piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    uVar3 = (longlong)iVar1 << 0x20 | 2;
  }
  return uVar3;
}


