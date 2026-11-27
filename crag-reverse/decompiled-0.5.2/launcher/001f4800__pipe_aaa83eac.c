// 001f4800 pipe

/* WARNING: Removing unreachable block (ram,0x001f4894) */
/* WARNING: Removing unreachable block (ram,0x001f48ad) */
/* std[6c98fd8553dbae28]::sys::pipe::unix::pipe */

undefined4 * __rustcall std[6c98fd8553dbae28]::sys::pipe::unix::pipe(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = (*(code *)PTR_pipe2_0021ab28)();
  if (iVar1 == -1) {
    piVar3 = (int *)(*(code *)PTR___errno_location_00219f18)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
      (*(code *)PTR_set_functions_inner_00219f28)();
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


