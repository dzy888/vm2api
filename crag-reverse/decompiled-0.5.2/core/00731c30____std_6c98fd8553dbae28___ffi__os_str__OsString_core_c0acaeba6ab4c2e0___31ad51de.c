// 00731c30 <(std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>)>

/* WARNING: Switch with 1 destination removed at 0x00731c68 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(std[6c98fd8553dbae28]::ffi::os_str::OsString,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>)>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[3] < 1) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


