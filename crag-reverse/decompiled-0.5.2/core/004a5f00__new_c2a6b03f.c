// 004a5f00 new

/* <craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>::new */

ulonglong * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>::new(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0x1000;
  if (param_2 < 0x1000) {
    uVar3 = param_2;
  }
  if (param_2 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar1 = (*(code *)PTR___rust_alloc_00799000)();
    if (uVar1 != 0) goto LAB_004a5f4d;
    (*(code *)PTR_handle_error_00798ff0)();
  }
  uVar1 = 1;
LAB_004a5f4d:
  uVar2 = 0x100;
  if (0x100 < param_2) {
    uVar2 = param_2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uVar2;
  return param_1;
}


