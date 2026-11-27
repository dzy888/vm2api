// 00177350 <zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::string::String>>

/* WARNING: Switch with 1 destination removed at 0x00177375 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::string::String>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::string::String>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)PTR_zeroize_00219c50)();
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,1);
  return;
}


