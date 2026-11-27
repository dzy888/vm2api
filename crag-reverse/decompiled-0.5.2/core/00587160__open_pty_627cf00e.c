// 00587160 open_pty

/* WARNING: Removing unreachable block (ram,0x0058720b) */
/* WARNING: Removing unreachable block (ram,0x0058721a) */
/* WARNING: Removing unreachable block (ram,0x00587232) */
/* WARNING: Removing unreachable block (ram,0x00587287) */
/* WARNING: Removing unreachable block (ram,0x005872a6) */
/* WARNING: Removing unreachable block (ram,0x0058724b) */
/* WARNING: Removing unreachable block (ram,0x0058725e) */
/* WARNING: Removing unreachable block (ram,0x00587278) */
/* WARNING: Removing unreachable block (ram,0x005872b5) */
/* WARNING: Removing unreachable block (ram,0x0058734c) */
/* WARNING: Removing unreachable block (ram,0x005872d4) */
/* craggemini_core[66f3c71560d70857]::guard::open_pty */

undefined4 * __rustcall
craggemini_core[66f3c71560d70857]::guard::open_pty
          (undefined4 *param_1,ushort param_2,ushort param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  ushort local_28;
  ushort local_26;
  undefined4 local_24;
  
  local_28 = 5;
  if (5 < param_3) {
    local_28 = param_3;
  }
  local_26 = 10;
  if (10 < param_2) {
    local_26 = param_2;
  }
  local_24 = 0;
  iVar2 = (*(code *)PTR_openpty_00799f00)(0,0,&local_28);
  if (iVar2 == 0) {
    (*(code *)PTR_expect_failed_00799440)();
    (*(code *)PTR_expect_failed_00799440)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_0078dd48) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  *(ulonglong *)(param_1 + 2) = (longlong)iVar2 << 0x20 | 2;
  *param_1 = 1;
  return param_1;
}


