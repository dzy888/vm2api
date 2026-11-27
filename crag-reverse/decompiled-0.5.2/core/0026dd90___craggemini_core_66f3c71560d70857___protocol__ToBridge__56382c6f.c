// 0026dd90 <craggemini_core[66f3c71560d70857]::protocol::ToBridge>

/* serde_json[dc3825464c436029]::ser::to_vec::<craggemini_core[66f3c71560d70857]::protocol::ToBridge>
    */

void __rustcall
serde_json[dc3825464c436029]::ser::to_vec::<craggemini_core[66f3c71560d70857]::protocol::ToBridge>
          (longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar2;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  longlong *local_18;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lStack_28 = (*(code *)PTR___rust_alloc_00799000)();
  if (lStack_28 == 0) {
    uVar2 = (*(code *)PTR_handle_error_00798ff0)();
    if (local_30 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_30 = 0x80;
  local_20 = 0;
  local_18 = &local_30;
  lVar1 = <craggemini_core[66f3c71560d70857]::protocol::ToBridge_as_serde_core[48776c27239fa21f]::ser::Serialize>
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
    (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
  }
  return;
}


