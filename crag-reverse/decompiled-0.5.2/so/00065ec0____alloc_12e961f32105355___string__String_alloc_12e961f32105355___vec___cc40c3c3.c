// 00065ec0 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::vec::Vec<u8>)>

/* WARNING: Switch with 1 destination removed at 0x00065eee */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::vec::Vec<u8>)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::vec::Vec<u8>)>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  if (param_1[3] == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,1);
  return;
}


