// 00734fd0 <i32>

/* std[6c98fd8553dbae28]::sys::pal::unix::cvt::<i32> */

void __rustcall std[6c98fd8553dbae28]::sys::pal::unix::cvt::<i32>(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_2 == -1) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar1 << 0x20 | 2;
    uVar2 = 1;
  }
  else {
    param_1[1] = param_2;
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return;
}


