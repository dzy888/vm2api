// 003adbb0 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,usize)>

/* WARNING: Switch with 1 destination removed at 0x003adbde */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String, usize)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,usize)>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[3] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


