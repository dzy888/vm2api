// 005c4800 <alloc[12e961f32105355]::string::String>

/* WARNING: Switch with 1 destination removed at 0x005c4811 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::string::String>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<u8>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::string::String>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


