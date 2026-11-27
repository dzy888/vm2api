// 00177d50 <craggemini[b21da2d71f2da7a3]::license::LicenseStatus>

/* serde_json[dc3825464c436029]::ser::to_vec::<craggemini[b21da2d71f2da7a3]::license::LicenseStatus>
    */

void __rustcall
serde_json[dc3825464c436029]::ser::to_vec::<craggemini[b21da2d71f2da7a3]::license::LicenseStatus>
          (longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar2;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  longlong *local_18;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  lStack_28 = (*(code *)PTR___rust_alloc_00219c88)();
  if (lStack_28 == 0) {
    uVar2 = (*(code *)PTR_handle_error_00219c78)();
    if (local_30 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar2,1);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_30 = 0x80;
  local_20 = 0;
  local_18 = &local_30;
  lVar1 = <craggemini[b21da2d71f2da7a3]::license::LicenseStatus_as_serde_core[48776c27239fa21f]::ser::Serialize>
          ::serialize::
          <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                    (param_2,&local_18);
  if (lVar1 == 0) {
    param_1[2] = local_20;
    *param_1 = local_30;
    param_1[1] = lStack_28;
    return;
  }
  param_1[1] = lVar1;
  *param_1 = -1;
  if (local_30 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Da,1);
  }
  return;
}


