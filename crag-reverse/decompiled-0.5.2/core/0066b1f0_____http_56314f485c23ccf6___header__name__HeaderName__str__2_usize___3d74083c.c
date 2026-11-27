// 0066b1f0 <[(http[56314f485c23ccf6]::header::name::HeaderName,&str);2:usize]>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<[(http[56314f485c23ccf6]::header::name::HeaderName,
   &str); 2usize]> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<[(http[56314f485c23ccf6]::header::name::HeaderName,&str)_2:usize]>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x20))(param_4,param_1[2]);
  }
  if (param_1[6] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0066b22e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[6] + 0x20))(param_4,param_1[8]);
  return;
}


