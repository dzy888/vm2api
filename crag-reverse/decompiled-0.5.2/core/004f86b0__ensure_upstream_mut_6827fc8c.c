// 004f86b0 ensure_upstream_mut

/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::ensure_upstream_mut */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::ensure_upstream_mut
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return *(longlong *)(param_1 + 0x30);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar2 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar2 == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  (*(code *)PTR_memcpy_00799008)(param_4,0x178);
  *(longlong *)(param_1 + 0x30) = lVar2;
  return lVar2;
}


