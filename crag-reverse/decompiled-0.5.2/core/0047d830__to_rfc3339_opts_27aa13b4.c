// 0047d830 to_rfc3339_opts

/* <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>::to_rfc3339_opts
    */

longlong * __rustcall
<chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>::
to_rfc3339_opts(longlong *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar3;
  undefined1 local_59;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  int local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lStack_40 = (*(code *)PTR___rust_alloc_00799000)();
  if (lStack_40 == 0) {
    uVar3 = (*(code *)PTR_handle_error_00798ff0)();
    if (local_48 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_48 = 0x26;
  local_38 = 0;
  local_50 = *(undefined4 *)(param_2 + 1);
  local_58 = *param_2;
  uVar3 = (*(code *)PTR_checked_add_offset_00799a00)(extraout_XMM0_Da,0);
  if (local_2c == 0) {
    (*(code *)PTR_expect_failed_00799440)
              (uVar3,&anon_d4d3cd51d1d91a17bb767b00236b3a9b_68_llvm_17589326713533067298);
  }
  else {
    local_50 = local_24;
    local_58 = CONCAT44(uStack_28,local_2c);
    cVar2 = chrono[1cd233408897ab2f]::format::formatting::write_rfc3339::
            <alloc[12e961f32105355]::string::String>(&local_48,&local_58,param_3,param_4);
    if (cVar2 == '\0') {
      param_1[2] = local_38;
      *param_1 = local_48;
      param_1[1] = lStack_40;
      return param_1;
    }
    (*(code *)PTR_unwrap_failed_00799028)
              (anon_d4d3cd51d1d91a17bb767b00236b3a9b_72_llvm_17589326713533067298,&local_59,
               &anon_d4d3cd51d1d91a17bb767b00236b3a9b_69_llvm_17589326713533067298);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


