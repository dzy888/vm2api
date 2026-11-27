// 004d71b0 <core[c0acaeba6ab4c2e0]::option::Option<(core[c0acaeba6ab4c2e0]::option::Option<u16>,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>,alloc[12e961f32105355]::string::String)>>

/* WARNING: Switch with 1 destination removed at 0x004d71fc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<(core[c0acaeba6ab4c2e0]::option::Option<u16>,
   core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>,
   alloc[12e961f32105355]::string::String)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<(core[c0acaeba6ab4c2e0]::option::Option<u16>,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>,alloc[12e961f32105355]::string::String)>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1[4];
  if (lVar1 != -1) {
    if ((*param_1 != -1) && (*param_1 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (lVar1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


