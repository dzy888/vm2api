// 0075dba0 pipe

/* WARNING: Removing unreachable block (ram,0x0075dc34) */
/* WARNING: Removing unreachable block (ram,0x0075dc4d) */
/* std[6c98fd8553dbae28]::sys::pipe::unix::pipe */

undefined4 * __rustcall std[6c98fd8553dbae28]::sys::pipe::unix::pipe(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = (*(code *)PTR_pipe2_0079aab0)();
  if (iVar1 == -1) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar1 << 0x20 | 2;
    uVar2 = 1;
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}


