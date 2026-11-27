// 006a68b0 <(http[56314f485c23ccf6]::header::name::HeaderName,http[56314f485c23ccf6]::header::value::HeaderValue)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(http[56314f485c23ccf6]::header::name::HeaderName,
   http[56314f485c23ccf6]::header::value::HeaderValue)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(http[56314f485c23ccf6]::header::name::HeaderName,http[56314f485c23ccf6]::header::value::HeaderValue)>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x20))(param_4,param_1[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x006a68e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[4] + 0x20))(param_4,param_1[6]);
  return;
}


