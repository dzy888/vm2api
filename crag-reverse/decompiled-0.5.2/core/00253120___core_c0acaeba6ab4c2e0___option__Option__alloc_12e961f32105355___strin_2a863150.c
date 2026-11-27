// 00253120 <core[c0acaeba6ab4c2e0]::option::Option<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>)>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>)>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*param_1 != -1) {
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    plVar1 = (longlong *)param_1[3];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(param_1 + 3);
      return;
    }
  }
  return;
}


