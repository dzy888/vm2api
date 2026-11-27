// 000822a0 <alloc[12e961f32105355]::ffi::c_str::NulError>

/* WARNING: Switch with 1 destination removed at 0x000822b1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::ffi::c_str::NulError> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::ffi::c_str::NulError>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,1);
  return;
}


