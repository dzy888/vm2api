// 001cf4f0 <alloc[12e961f32105355]::ffi::c_str::NulError>

/* WARNING: Switch with 1 destination removed at 0x001cf501 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::ffi::c_str::NulError> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::ffi::c_str::NulError>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,1);
  return;
}


