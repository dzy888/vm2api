// 0073dac0 {closure#0}

/* std[6c98fd8553dbae28]::sys::fs::set_permissions::{closure#0} */

ulonglong __rustcall std[6c98fd8553dbae28]::sys::fs::set_permissions::_closure_0_(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
  puVar1 = PTR_get_os_functions_007992e0;
  do {
    iVar3 = (*(code *)PTR_chmod_0079ad58)();
    if (iVar3 != -1) {
      return 0;
    }
    piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar3 = *piVar4;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    lVar5 = (*(code *)puVar1)();
    cVar2 = (**(code **)(lVar5 + 0x10))();
  } while (cVar2 != '\0');
  return (longlong)iVar3 << 0x20 | 2;
}


