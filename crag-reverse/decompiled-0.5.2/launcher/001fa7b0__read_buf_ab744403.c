// 001fa7b0 read_buf

/* <std[6c98fd8553dbae28]::fs::File as std[6c98fd8553dbae28]::io::Read>::read_buf */

ulonglong __rustcall
<std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Read>::read_buf
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar5 = *(longlong *)(param_2 + 8) - lVar2;
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  lVar3 = (*(code *)PTR_read_0021a0d8)(param_4,uVar5);
  if (lVar3 != -1) {
    *(longlong *)(param_2 + 0x10) = lVar3 + lVar2;
    return 0;
  }
  piVar4 = (int *)(*(code *)PTR___errno_location_00219f18)();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
    (*(code *)PTR_set_functions_inner_00219f28)();
  }
  return (longlong)iVar1 << 0x20 | 2;
}


