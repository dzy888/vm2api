// 00474bd0 <(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::schema::ToolNameEntry)>

/* WARNING: Switch with 1 destination removed at 0x00474bfe */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::schema::ToolNameEntry)>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::resume::ResponseBinding>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::schema::ToolNameEntry)>
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


