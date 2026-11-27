// 00178400 sealed_executable

/* craggemini[b21da2d71f2da7a3]::sealed_executable */

void __rustcall
craggemini[b21da2d71f2da7a3]::sealed_executable
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong lVar4;
  int local_24;
  
  local_24 = (*(code *)PTR_memfd_create_00219f08)();
  if (local_24 < 0) {
    piVar3 = (int *)(*(code *)PTR___errno_location_00219f18)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_00215720) {
      (*(code *)PTR_set_functions_inner_00219f28)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar1 << 0x20 | 2;
    *param_1 = 1;
  }
  else {
    uVar2 = <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::write_all
                      (&local_24,param_2,param_3);
    if (uVar2 == 0) {
      iVar1 = (*(code *)PTR_fchmod_00219f10)();
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_fcntl_00219f30)();
        if (iVar1 == 0) {
          param_1[1] = local_24;
          *param_1 = 0;
          return;
        }
        piVar3 = (int *)(*(code *)PTR___errno_location_00219f18)();
        lVar4 = (longlong)*piVar3;
        if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_00215720) {
          (*(code *)PTR_set_functions_inner_00219f28)();
        }
      }
      else {
        piVar3 = (int *)(*(code *)PTR___errno_location_00219f18)();
        lVar4 = (longlong)*piVar3;
        if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_00215720) {
          (*(code *)PTR_set_functions_inner_00219f28)();
        }
      }
      uVar2 = lVar4 << 0x20 | 2;
    }
    *(ulonglong *)(param_1 + 2) = uVar2;
    *param_1 = 1;
    (*(code *)PTR_close_00219d60)();
  }
  return;
}


