// 0047d730 to_rfc3339

/* <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>::to_rfc3339
    */

longlong * __rustcall
<chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>::
to_rfc3339(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar3;
  undefined1 local_41;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c [12];
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lStack_38 = (*(code *)PTR___rust_alloc_00799000)();
  if (lStack_38 == 0) {
    uVar3 = (*(code *)PTR_handle_error_00798ff0)();
    if (local_40 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_40 = 0x20;
  local_30 = 0;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_28 = *param_2;
  (*(code *)PTR_overflowing_add_offset_007999f8)(extraout_XMM0_Da,0);
  cVar2 = chrono[1cd233408897ab2f]::format::formatting::write_rfc3339::
          <alloc[12e961f32105355]::string::String>(&local_40,local_1c,4,0);
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_00799028)
              (anon_d4d3cd51d1d91a17bb767b00236b3a9b_72_llvm_17589326713533067298,&local_41,
               &anon_d4d3cd51d1d91a17bb767b00236b3a9b_66_llvm_17589326713533067298);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1[2] = local_30;
  *param_1 = local_40;
  param_1[1] = lStack_38;
  return param_1;
}


