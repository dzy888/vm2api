// 000a52c0 fmt

/* <std[6c98fd8553dbae28]::env::VarError as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<std[6c98fd8553dbae28]::env::VarError_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong **local_20;
  code *local_18;
  longlong *local_10;
  
  if (*param_1 == -1) {
                    /* WARNING: Could not recover jumptable at 0x000a531a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_2 + 8) + 0x18))(param_4,0x1e);
    return;
  }
  local_20 = &local_10;
  local_18 = <&std[6c98fd8553dbae28]::ffi::os_str::OsString_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::
             fmt;
  local_10 = param_1;
  (*(code *)PTR_write_000c3f70)(&local_20,&DAT_00009a67);
  return;
}


