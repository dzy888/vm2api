// 004a4b40 shm_path

/* <craggemini_core[66f3c71560d70857]::Config>::shm_path */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::Config>::shm_path(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x238) != -1) {
    param_2 = *(longlong *)(param_2 + 0x248);
    if (-1 < param_2) {
      if (param_2 == 0) {
        lVar1 = 1;
LAB_004a4bdc:
        *param_1 = param_2;
        param_1[1] = lVar1;
        param_1[2] = param_2;
        return param_1;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar1 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar1 != 0) {
        (*(code *)PTR_memcpy_00799008)();
        goto LAB_004a4bdc;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  (*(code *)PTR__join_00799210)("bridge.shm",*(undefined8 *)(param_2 + 0x140),10);
  return param_1;
}


